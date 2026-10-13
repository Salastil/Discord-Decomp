// ===== 0011c4f0  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_00143540);
  return;
}


// ===== 0011c500  FUN_0011c500 =====

void FUN_0011c500(void)

{
  return;
}


// ===== 0011c508  _FINI_0 =====

void _FINI_0(void)

{
  FUN_0011c500();
  return;
}


// ===== 0011c510  FUN_0011c510 =====

void FUN_0011c510(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0011c51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 0011c524  FUN_0011c524 =====

void FUN_0011c524(undefined8 param_1)

{
  __cxa_atexit(FUN_0011c510,param_1,&PTR_LOOP_00143540);
  return;
}


// ===== 0011c540  FUN_0011c540 =====

void FUN_0011c540(void)

{
  __register_atfork();
  return;
}


// ===== 0011c550  FUN_0011c550 =====

long FUN_0011c550(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00149490 == '\0') {
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


// ===== 0011c580  _INIT_0 =====

void _INIT_0(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00149490 = 0;
    return;
  }
  iVar2 = __system_property_get("ro.arch",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"exynos9810",10);
    DAT_00149490 = iVar2 != 0;
    return;
  }
  DAT_00149490 = 1;
  return;
}


// ===== 0011c618  FUN_0011c618 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0011c618(ulong param_1,long param_2)

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
    DAT_00149498 = DAT_00149498 | 0x400;
  }
  uVar2 = (uint)uVar4;
  if ((uVar3 >> 4 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x8000;
  }
  if ((uVar3 >> 0x1b & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 2;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 6;
  }
  if ((~uVar3 & 0xc0000) == 0) {
    DAT_00149498 = DAT_00149498 | 0x20;
  }
  if ((uVar3 >> 0x14 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x10;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 8;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x10100;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x20000;
  }
  if ((uVar3 >> 0xc & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x40;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x800000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x4000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x800;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x1000;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x100000;
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x200000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x400000000000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x2000000000000;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x180000000000;
  }
  if ((uVar2 >> 0x16 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x380000000000;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x2000000000;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x6000000000;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x8000000000;
  }
  if ((uVar2 >> 5 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x10000000000;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x20000000000;
  }
  if ((uVar4 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x80000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x80;
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 1;
  }
  if ((uVar2 >> 0xd & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x4000000;
  }
  if ((uVar4 >> 0x20 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x10000000;
  }
  if ((uVar4 >> 0x21 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x100000000;
  }
  if ((uVar2 >> 0xf & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x2000000;
  }
  if ((uVar2 >> 8 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x1000000;
  }
  if ((uVar2 >> 9 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x200000000;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x400000000;
  }
  if ((uVar2 >> 0xb & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x800000000;
  }
  if ((uVar2 >> 0x11 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x4000000000000;
  }
  if ((uVar2 >> 0x15 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x20000000;
  }
  if ((int)uVar2 < 0) {
    DAT_00149498 = DAT_00149498 | 0x40000000000000;
  }
  if ((uVar2 >> 0x17 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x40000000000;
  }
  if ((uVar2 >> 0x18 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x100000000000000;
  }
  if ((uVar2 >> 0x19 & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x80000000000000;
  }
  if ((uVar4 >> 0x2b & 1) != 0) {
    DAT_00149498 = DAT_00149498 | 0x800000000000000;
  }
  if ((uVar3 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      DAT_00149498 = DAT_00149498 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      DAT_00149498 = DAT_00149498 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      DAT_00149498 = DAT_00149498 | 0x400000;
    }
    if ((uVar4 & 0x100004000) != 0) {
      DAT_00149498 = DAT_00149498 | 0x8000000;
    }
    uVar5 = DAT_00149498 | (ulong)(uVar2 << 0x13) & 0x80000000;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
    uVar5 = uVar5 | (param_1 & 0x20000) >> 4;
    goto LAB_0011c780;
  }
  uVar4 = id_aa64pfr1_el1;
  if ((uVar4 & 0xf00) != 0) {
    DAT_00149498 = DAT_00149498 | 0x80000000000;
  }
  if ((uVar4 & 0xf0) == 0x10) {
    DAT_00149498 = DAT_00149498 | 0x1000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) goto LAB_0011ca70;
LAB_0011cac4:
    DAT_00149498 = DAT_00149498 | 0x200000000000000;
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  else {
    if ((uVar4 & 0xf000000) == 0x2000000) goto LAB_0011cac4;
LAB_0011ca70:
    uVar4 = id_aa64pfr0_el1;
    uVar3 = (uint)uVar4;
  }
  if ((~uVar3 & 0xf0000) != 0) {
    DAT_00149498 = DAT_00149498 | 0x300;
  }
  if ((uVar4 & 0xf00000000) != 0) {
    uVar4 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar4 & 0xf) == 1) {
      DAT_00149498 = DAT_00149498 | 0x1000000000;
    }
    else if ((uVar4 & 0xf) == 0) {
      DAT_00149498 = DAT_00149498 | 0x40000000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      DAT_00149498 = DAT_00149498 | 0x80000000;
    }
  }
  uVar4 = id_aa64isar0_el1;
  if ((uVar4 & 0xf00000000) != 0) {
    DAT_00149498 = DAT_00149498 | 0x2000;
  }
  uVar4 = id_aa64isar1_el1;
  uVar5 = uVar4 >> 0x14 & 0xf;
  if ((uVar4 & 0xf) != 0) {
    DAT_00149498 = DAT_00149498 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      DAT_00149498 = DAT_00149498 | 0x400000000400000;
    }
    else {
      DAT_00149498 = DAT_00149498 | 0x400000;
    }
  }
  uVar5 = DAT_00149498 | 0x800000000000;
  if ((uVar4 & 0xf0000000000) != 0x20000000000) {
    uVar5 = DAT_00149498;
  }
  if ((uVar4 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar4 >> 0x3c != 0) {
    if (uVar4 >> 0x3d == 0) {
      DAT_00149498 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    DAT_00149498 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0011c780:
  DAT_00149498 = uVar5 | 0x8000000000000000;
  return;
}


// ===== 0011cbb4  _INIT_1 =====

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_00149498 != 0) {
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
    FUN_0011c618(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


// ===== 0011cc40  FUN_0011cc40 =====

undefined8 FUN_0011cc40(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [24];
  code *local_68;
  long local_38;
  
  FUN_0011cf88(param_2,param_1);
  iVar2 = FUN_0011d0ac(param_2);
  while( true ) {
    if (iVar2 == 0) {
      return 5;
    }
    if (iVar2 < 0) break;
    FUN_0011d030(param_2,0xfffffffe,&local_38);
    iVar2 = FUN_0011d0c0(param_2,auStack_80);
    if (iVar2 != 0) {
      return 2;
    }
    if (local_68 != (code *)0x0) {
      uVar3 = 6;
      if (local_38 != param_3[3]) {
        uVar3 = 2;
      }
      iVar2 = (*local_68)(1,uVar3,*param_3,param_3,param_2);
      puVar1 = PTR___sF_00144f68;
      if (iVar2 != 8) {
        if (iVar2 != 7) {
          return 2;
        }
        FUN_0011d100(param_2);
        return 2;
      }
      if (local_38 == param_3[3]) {
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","unwind_phase2",
                "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
               );
        fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    iVar2 = FUN_0011d0ac(param_2);
  }
  return 2;
}


// ===== 0011cd74  FUN_0011cd74 =====

void FUN_0011cd74(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_4a0 [624];
  undefined1 auStack_230 [528];
  
  FUN_0011ceec(auStack_230);
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0011cc40(auStack_230,auStack_4a0,param_1);
  }
  else {
    FUN_0011cdf8(auStack_230,auStack_4a0,param_1,*(long *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = PTR___sF_00144f68;
  fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","_Unwind_Resume",
          "_Unwind_Resume() can\'t return");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0011cdf8  FUN_0011cdf8 =====

void FUN_0011cdf8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_78 [24];
  code *local_60;
  
  FUN_0011cf88(param_2,param_1);
  iVar1 = FUN_0011d0ac(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_0011d0c0(param_2,auStack_78);
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
      FUN_0011d100(param_2);
    }
    iVar1 = FUN_0011d0ac(param_2);
  }
  return;
}


// ===== 0011ceec  FUN_0011ceec =====

undefined8
FUN_0011ceec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 0011cf88  FUN_0011cf88 =====

undefined8 FUN_0011cf88(undefined8 *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_00143558;
  param_1[1] = &DAT_001494a0;
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
  FUN_0011d950(param_1,0);
  return 0;
}


// ===== 0011d030  FUN_0011d030 =====

undefined8 FUN_0011d030(long *param_1,undefined4 param_2,undefined8 *param_3)

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


// ===== 0011d0ac  FUN_0011d0ac =====

void FUN_0011d0ac(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0011d0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 0011d0c0  FUN_0011d0c0 =====

undefined4 FUN_0011d0c0(long *param_1,long param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  uVar1 = 0xffffe66b;
  if (*(long *)(param_2 + 8) != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 0011d100  FUN_0011d100 =====

undefined8 FUN_0011d100(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  return 0xffffe674;
}


// ===== 0011d128  FUN_0011d128 =====

char * FUN_0011d128(undefined8 param_1,uint *param_2,undefined8 *param_3,long *param_4,ulong param_5
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
      pcVar7 = (char *)FUN_0011d2b8(param_1,lVar8,param_4);
      if (pcVar7 != (char *)0x0) {
        return pcVar7;
      }
    }
    else if (*param_4 != lVar8) {
      return "CIE start does not match";
    }
    lVar8 = (long)puVar10 + uVar9;
    local_48 = puVar10 + 1;
    lVar3 = FUN_0011f110(param_1,&local_48,lVar8,(char)param_4[3],0);
    lVar4 = FUN_0011f110(param_1,&local_48,lVar8,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = 0;
    puVar10 = local_48;
    if (cVar1 != '\0') {
      lVar5 = FUN_0011f49c(&local_48,lVar8);
      puVar2 = local_48;
      puVar10 = (uint *)((long)local_48 + lVar5);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar5 = FUN_0011f110(param_1,&local_48,lVar8,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar5 != 0)) {
        local_48 = puVar2;
        uVar6 = FUN_0011f110(param_1,&local_48,lVar8,*(undefined1 *)((long)param_4 + 0x19),0);
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


// ===== 0011d2b8  FUN_0011d2b8 =====

char * FUN_0011d2b8(undefined8 param_1,uint *param_2,long *param_3)

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
      uVar7 = FUN_0011f49c(&local_48,pbVar1);
      uVar13 = 0;
      uVar14 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar5 = PTR___sF_00144f68;
      pbVar11 = local_48;
      pbVar15 = local_48;
      do {
        pbVar12 = pbVar11;
        if (pbVar15 == pbVar1) {
          fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        uVar6 = FUN_0011f49c(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar6;
        bVar2 = *pbVar18;
      }
      if (bVar2 == 0x7a) {
        FUN_0011f49c(&local_48,pbVar1);
LAB_0011d438:
        bVar2 = *pbVar18;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_0011d4d8;
              goto LAB_0011d51c;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011d438;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_0011d4d8;
          }
          if (bVar2 == 0x4c) {
            pbVar18 = pbVar18 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0011d438;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar8 = FUN_0011f110(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar8;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011d438;
          }
          if (bVar2 == 0x52) {
            pbVar18 = pbVar18 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_0011d438;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011d438;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar18 = pbVar18 + 1;
            goto LAB_0011d438;
          }
        }
LAB_0011d4d8:
        pbVar18 = pbVar18 + 1;
        goto LAB_0011d438;
      }
LAB_0011d51c:
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


// ===== 0011d580  FUN_0011d580 =====

void FUN_0011d580(void)

{
  return;
}


// ===== 0011d588  FUN_0011d588 =====

void FUN_0011d588(void)

{
  return;
}


// ===== 0011d590  FUN_0011d590 =====

bool FUN_0011d590(undefined8 param_1,uint param_2)

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


// ===== 0011d5d4  FUN_0011d5d4 =====

undefined8 FUN_0011d5d4(long param_1,uint param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00144f68;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0011d63c:
      return *(undefined8 *)(param_1 + 0x108);
    }
    if (param_2 == 0xffffffff) goto LAB_0011d630;
    if (param_2 == 0x1d) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
  }
  else if ((int)param_2 < 0x20) {
    if (param_2 == 0x1e) {
      return *(undefined8 *)(param_1 + 0x100);
    }
    if (param_2 == 0x1f) goto LAB_0011d63c;
  }
  else {
    if (param_2 == 0x22) {
      return *(undefined8 *)(param_1 + 0x118);
    }
    if (param_2 == 0x20) {
LAB_0011d630:
      return *(undefined8 *)(param_1 + 0x110);
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8);
}


// ===== 0011d6bc  FUN_0011d6bc =====

void FUN_0011d6bc(long param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00144f68;
  if ((int)param_2 < 0x1e) {
    if (param_2 == 0xfffffffe) {
LAB_0011d724:
      *(undefined8 *)(param_1 + 0x108) = param_3;
      return;
    }
    if (param_2 == 0xffffffff) goto LAB_0011d718;
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
    if (param_2 == 0x1f) goto LAB_0011d724;
  }
  else {
    if (param_2 == 0x22) {
      *(undefined8 *)(param_1 + 0x118) = param_3;
      return;
    }
    if (param_2 == 0x20) {
LAB_0011d718:
      *(undefined8 *)(param_1 + 0x110) = param_3;
      return;
    }
  }
  if (0x1c < param_2) {
    fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","setRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x10 + (ulong)param_2 * 8) = param_3;
  return;
}


// ===== 0011d7a4  FUN_0011d7a4 =====

bool FUN_0011d7a4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 0011d7b8  FUN_0011d7b8 =====

undefined1  [16] FUN_0011d7b8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 0011d7c8  FUN_0011d7c8 =====

void FUN_0011d7c8(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 0011d7d8  FUN_0011d7d8 =====

ulong FUN_0011d7d8(long *param_1,uint param_2)

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
    uVar3 = FUN_0011dcfc(lVar1,uVar4,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269,param_2 & 1);
    iVar2 = (int)uVar3;
  }
  else {
    memset(auStack_240,0,0x210);
    uVar3 = FUN_0011dbdc(param_1,auStack_240);
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


// ===== 0011d8c8  FUN_0011d8c8 =====

void FUN_0011d8c8(long param_1,undefined8 *param_2)

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


// ===== 0011d90c  FUN_0011d90c =====

void FUN_0011d90c(long param_1)

{
  FUN_001209a4(param_1 + 0x10);
  return;
}


// ===== 0011d918  FUN_0011d918 =====

undefined1 FUN_0011d918(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 0011d924  FUN_0011d924 =====

undefined8 FUN_0011d924(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 0011d950  FUN_0011d950 =====

void FUN_0011d950(long *param_1,ulong param_2)

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
  iVar1 = dl_iterate_phdr(FUN_001202f4,&local_648);
  if (((iVar1 == 0) || (local_668 == 0)) ||
     (uVar4 = FUN_00120020(param_1,uVar7,auStack_678,0), (uVar4 & 1) == 0)) {
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001494a4);
    for (puVar6 = PTR_DAT_00149458; puVar6 < PTR_DAT_00149460; puVar6 = puVar6 + 0x20) {
      if ((*(ulong *)(puVar6 + 8) <= uVar7) && (uVar7 < *(ulong *)(puVar6 + 0x10))) {
        lVar3 = *(long *)(puVar6 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001494a4);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_0011d128(param_1[1],lVar3,&local_6a8,local_6e0,0), lVar3 == 0)) {
          memset(&local_648,0,0x618);
          uVar7 = FUN_0011e184(param_1[1],&local_6a8,local_6e0,uVar7,4,&local_648);
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
        goto LAB_0011dad8;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001494a4);
LAB_0011dad8:
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


// ===== 0011dbd0  FUN_0011dbd0 =====

void FUN_0011dbd0(undefined8 param_1,undefined4 param_2)

{
  FUN_00120974(param_2);
  return;
}


// ===== 0011dbdc  FUN_0011dbdc =====

undefined8 FUN_0011dbdc(long param_1)

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


// ===== 0011dcfc  FUN_0011dcfc =====

undefined8
FUN_0011dcfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
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
  
  lVar7 = FUN_0011d128(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar7 == 0) {
    memset(auStack_700,0,0x618);
    uVar8 = FUN_0011e184(param_1,auStack_b0,auStack_e8,param_2,4,auStack_700);
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_0011edcc(param_1,auStack_700,param_4);
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
        puVar3 = PTR___sF_00144f68;
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
              goto LAB_0011dfdc;
            }
            else {
              puVar13 = (undefined8 *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((puVar13 = (undefined8 *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (puVar13 = (undefined8 *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_0011dfdc:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getRegister",
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
LAB_0011e0e8:
                  fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n",
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
              if (iVar2 != 6) goto LAB_0011e0e8;
              puVar9 = (ulong *)FUN_0011f664(*(undefined8 *)(piVar15 + 2),param_1,param_4,uVar8);
              uVar18 = *puVar9;
            }
            local_a00[uVar12] = uVar18;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == local_b6) {
            uVar14 = FUN_0011ef00(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
          }
          else if (uVar12 == 0x22) {
            uVar10 = FUN_0011ef00(param_1,param_4,uVar8,piVar15);
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
          }
          else {
            if (0xffffffe0 < uVar16 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_0011ef00(param_1,param_4,uVar8,piVar15);
            puVar3 = PTR___sF_00144f68;
            uVar18 = local_a00[0x3d];
            uVar5 = local_a00[0x3b];
            uVar6 = local_a00[0x3c];
            uVar10 = local_a00[0x3f];
            if ((int)uVar16 < 0x1f) {
              uVar5 = uVar11;
              if ((uVar16 != 0x1d) && (uVar5 = local_a00[0x3b], uVar6 = uVar11, uVar16 != 0x1e))
              goto LAB_0011e030;
            }
            else {
              uVar18 = uVar11;
              if ((uVar16 != 0x1f) &&
                 ((uVar18 = local_a00[0x3d], uVar10 = uVar11, uVar16 != 0x22 &&
                  (uVar10 = local_a00[0x3f], uVar16 != 0x20)))) {
LAB_0011e030:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","setRegister",
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
            FUN_0011ef00(param_1,auStack_b20,uVar8,&local_80);
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


// ===== 0011e184  FUN_0011e184 =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0011e184(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
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
LAB_0011e208:
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  }
  uVar17 = 0;
LAB_0011e238:
  puVar18 = local_6c0;
  puVar5 = PTR___sF_00144f68;
  pbVar10 = pbVar21 + 1;
  bVar3 = *pbVar21;
  apbStack_6a0[0xc0] = pbVar10;
  switch((ulong)bVar3) {
  case 0:
    goto code_r0x0011eb0c;
  case 1:
    uVar17 = FUN_0011f110(local_6c8,apbStack_6a0 + 0xc0,pbVar2,(char)param_3[3],0);
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 2:
    uVar9 = (uint)pbVar21[1];
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 2;
    goto LAB_0011e6c0;
  case 3:
    uVar9 = (uint)*(ushort *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 3;
    goto LAB_0011e6c0;
  case 4:
    uVar9 = *(uint *)(pbVar21 + 1);
    iVar13 = (int)param_3[5];
    apbStack_6a0[0xc0] = pbVar21 + 5;
LAB_0011e6c0:
    uVar17 = uVar17 + iVar13 * uVar9;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 5:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    lVar8 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
      __size = 0x46;
      __s = (FILE *)(PTR___sF_00144f68 + 0x130);
      goto LAB_0011ecbc;
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
LAB_0011e65c:
    puVar12[6] = 2;
    *(long *)(puVar12 + 8) = lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 6:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_0011ebac:
      __s = (FILE *)(PTR___sF_00144f68 + 0x130);
      __size = 0x47;
      goto LAB_0011ecbc;
    }
    cVar4 = *(char *)(param_6 + uVar19 * 4 + 7);
joined_r0x0011eaec:
    if (cVar4 != '\0') {
      pbVar21 = apbStack_6a0[uVar19 * 2];
      *(byte **)(param_6 + uVar19 * 4 + 8) = apbStack_6a0[uVar19 * 2 + 1];
      *(byte **)(param_6 + uVar19 * 4 + 6) = pbVar21;
    }
    goto code_r0x0011eb0c;
  case 7:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_0011ecb0:
      __s = (FILE *)(PTR___sF_00144f68 + 0x130);
      __size = 0x40;
      goto LAB_0011ecbc;
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
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_0011ec94:
      __s = (FILE *)(PTR___sF_00144f68 + 0x130);
      __size = 0x41;
      goto LAB_0011ecbc;
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
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    uVar14 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
      __size = 0x3f;
      __s = (FILE *)(PTR___sF_00144f68 + 0x130);
      goto LAB_0011ecbc;
    }
    if (0x5f < uVar14) {
      __ptr = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
      goto LAB_0011ecb0;
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
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    uVar7 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
      __size = 0x3e;
      __s = (FILE *)(PTR___sF_00144f68 + 0x130);
      goto LAB_0011ecbc;
    }
    *param_6 = (int)uVar19;
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xd:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
      goto LAB_0011ebac;
    }
    *param_6 = (int)uVar19;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xe:
    uVar7 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[1] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0xf:
    *param_6 = 0;
    *(byte **)(param_6 + 2) = pbVar10;
    goto LAB_0011ea40;
  case 0x10:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
      goto LAB_0011ec94;
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
LAB_0011ea38:
    puVar12[6] = uVar7;
    *(byte **)(puVar12 + 8) = apbStack_6a0[0xc0];
LAB_0011ea40:
    lVar8 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    apbStack_6a0[0xc0] = apbStack_6a0[0xc0] + lVar8;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x11:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00144f68;
    if (0x5f < uVar19) {
      __ptr = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
      __size = 0x49;
      __s = (FILE *)(PTR___sF_00144f68 + 0x130);
      goto LAB_0011ecbc;
    }
    uVar14 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
LAB_0011e9cc:
    puVar12[6] = uVar7;
    *(ulong *)(puVar12 + 8) = uVar11 * (long)iVar13;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x12:
    uVar14 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00144f68;
    uVar19 = 0;
    uVar11 = 0;
    pbVar21 = apbStack_6a0[0xc0];
    pbVar10 = apbStack_6a0[0xc0];
    do {
      if (pbVar10 == pbVar2) {
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0011ec94;
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
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (0x5f < uVar19) {
      fprintf((FILE *)(PTR___sF_00144f68 + 0x130),
              "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n",
              uVar19);
      goto LAB_0011ecc4;
    }
    lVar8 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
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
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    puVar5 = PTR___sF_00144f68;
    if (uVar19 < 0x60) {
      uVar14 = 0;
      uVar11 = 0;
      pbVar21 = apbStack_6a0[0xc0];
      pbVar10 = apbStack_6a0[0xc0];
      do {
        if (pbVar10 == pbVar2) {
          fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      goto LAB_0011e9cc;
    }
    __ptr = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
    __size = 0x44;
    __s = (FILE *)(PTR___sF_00144f68 + 0x130);
    goto LAB_0011ecbc;
  case 0x16:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0011ea38;
    }
    __ptr = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
    __size = 0x45;
    __s = (FILE *)(PTR___sF_00144f68 + 0x130);
    goto LAB_0011ecbc;
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
        goto joined_r0x0011eaec;
      }
      if (bVar1 != 0x80) {
        return 0;
      }
      local_6dc = param_5;
      lVar8 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
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
    if (param_5 != 4) goto code_r0x0011eb0c;
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
    uVar7 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    param_6[4] = uVar7;
    pbVar21 = apbStack_6a0[0xc0];
    break;
  case 0x2f:
    uVar19 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
    if (uVar19 < 0x60) {
      lVar8 = FUN_0011f49c(apbStack_6a0 + 0xc0,pbVar2);
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
      goto LAB_0011e65c;
    }
    __ptr = "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
    __size = 0x53;
    __s = (FILE *)(PTR___sF_00144f68 + 0x130);
LAB_0011ecbc:
    fwrite(__ptr,__size,1,__s);
LAB_0011ecc4:
    fflush((FILE *)(PTR___sF_00144f68 + 0x130));
    return 0;
  }
joined_r0x0011e5f4:
  if ((pbVar2 <= pbVar21) || (uVar16 <= uVar17)) goto LAB_0011e208;
  goto LAB_0011e238;
code_r0x0011eb0c:
  pbVar21 = apbStack_6a0[0xc0];
  goto joined_r0x0011e5f4;
}


// ===== 0011edcc  FUN_0011edcc =====

long FUN_0011edcc(undefined8 param_1,uint *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR___sF_00144f68;
  uVar1 = *param_2;
  if ((int)uVar1 < 0x1e) {
    if ((int)uVar1 < 0) {
      if (uVar1 == 0xfffffffe) {
LAB_0011ee0c:
        return *(long *)(param_3 + 0xf8) + (long)(int)param_2[1];
      }
      if (uVar1 == 0xffffffff) goto LAB_0011ee50;
    }
    else {
      if (uVar1 == 0) {
        lVar3 = FUN_0011f664(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
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
    if (uVar1 == 0x1f) goto LAB_0011ee0c;
  }
  else {
    if (uVar1 == 0x22) {
      return *(long *)(param_3 + 0x108) + (long)(int)param_2[1];
    }
    if (uVar1 == 0x20) {
LAB_0011ee50:
      return *(long *)(param_3 + 0x100) + (long)(int)param_2[1];
    }
  }
  if (0x1c < uVar1) {
    fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getRegister",
            "unsupported arm64 register");
    fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(long *)(param_3 + (ulong)uVar1 * 8) + (long)(int)param_2[1];
}


// ===== 0011ef00  FUN_0011ef00 =====

undefined8 FUN_0011ef00(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = PTR___sF_00144f68;
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
LAB_0011f03c:
          return *(undefined8 *)(param_2 + 0xf8);
        }
        if (uVar5 == 0xffffffff) goto LAB_0011f024;
        if (uVar5 == 0x1d) {
          return *(undefined8 *)(param_2 + 0xe8);
        }
      }
      else if ((int)uVar5 < 0x20) {
        if (uVar5 == 0x1e) {
          return *(undefined8 *)(param_2 + 0xf0);
        }
        if (uVar5 == 0x1f) goto LAB_0011f03c;
      }
      else {
        if (uVar5 == 0x22) {
          return *(undefined8 *)(param_2 + 0x108);
        }
        if (uVar5 == 0x20) {
LAB_0011f024:
          return *(undefined8 *)(param_2 + 0x100);
        }
      }
      if (0x1c < uVar5) {
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      return *(undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
    }
    if (iVar1 == 6) {
      puVar4 = (undefined8 *)FUN_0011f664(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return *puVar4;
    }
    if (iVar1 == 7) {
      uVar3 = FUN_0011f664(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
      return uVar3;
    }
  }
  fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSavedRegister",
          "unsupported restore location for register");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0011f110  FUN_0011f110 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0011f110(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

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
  
  puVar3 = PTR___sF_00144f68;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_0011f25c;
      if (uVar1 != 1) {
LAB_0011f468:
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_0011f49c(param_2,param_3);
      puVar3 = PTR___sF_00144f68;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_00144f68;
    }
    else {
      if (uVar1 != 3) goto LAB_0011f468;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_00144f68;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_0011f25c:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_00144f68;
    }
    else {
      if (uVar1 != 9) goto LAB_0011f468;
      uVar7 = 0;
      uVar5 = 0;
      puVar6 = puVar10;
      puVar9 = puVar10;
      do {
        if (puVar9 == param_3) {
          fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
      puVar3 = PTR___sF_00144f68;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_00144f68;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_0011f468;
      goto LAB_0011f25c;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_00144f68;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_00144f68 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_0011f434;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_0011f2e8:
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
      goto LAB_0011f2e8;
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
LAB_0011f434:
  fprintf((FILE *)(puVar3 + 0x130),"libunwind: %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0011f49c  FUN_0011f49c =====

ulong FUN_0011f49c(long *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar2 = PTR___sF_00144f68;
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != param_2) {
    pbVar5 = pbVar4 + 1;
    uVar3 = (ulong)*pbVar4 & 0x7f;
    if (-1 < (char)*pbVar4) {
LAB_0011f4cc:
      *param_1 = (long)pbVar5;
      return uVar3;
    }
    if (pbVar5 != param_2) {
      uVar3 = uVar3 | (ulong)((int)(char)pbVar4[1] & 0x7f) << 7;
      pbVar5 = pbVar4 + 2;
      if (-1 < (char)pbVar4[1]) goto LAB_0011f4cc;
      if (pbVar5 != param_2) {
        uVar3 = uVar3 | (ulong)((int)(char)pbVar4[2] & 0x7f) << 0xe;
        pbVar5 = pbVar4 + 3;
        if (-1 < (char)pbVar4[2]) goto LAB_0011f4cc;
        if (pbVar5 != param_2) {
          uVar3 = uVar3 | (ulong)((int)(char)pbVar4[3] & 0x7f) << 0x15;
          pbVar5 = pbVar4 + 4;
          if (-1 < (char)pbVar4[3]) goto LAB_0011f4cc;
          if (pbVar5 != param_2) {
            uVar3 = uVar3 | (ulong)((int)(char)pbVar4[4] & 0x7f) << 0x1c;
            pbVar5 = pbVar4 + 5;
            if (-1 < (char)pbVar4[4]) goto LAB_0011f4cc;
            if (pbVar5 != param_2) {
              uVar3 = uVar3 | (ulong)((int)(char)pbVar4[5] & 0x7f) << 0x23;
              pbVar5 = pbVar4 + 6;
              if (-1 < (char)pbVar4[5]) goto LAB_0011f4cc;
              if (pbVar5 != param_2) {
                uVar3 = uVar3 | (ulong)((int)(char)pbVar4[6] & 0x7f) << 0x2a;
                pbVar5 = pbVar4 + 7;
                if (-1 < (char)pbVar4[6]) goto LAB_0011f4cc;
                if (pbVar5 != param_2) {
                  uVar3 = uVar3 | (ulong)((int)(char)pbVar4[7] & 0x7f) << 0x31;
                  pbVar5 = pbVar4 + 8;
                  if (-1 < (char)pbVar4[7]) goto LAB_0011f4cc;
                  if (pbVar5 != param_2) {
                    uVar3 = uVar3 | (ulong)((int)(char)pbVar4[8] & 0x7f) << 0x38;
                    pbVar5 = pbVar4 + 9;
                    if (-1 < (char)pbVar4[8]) goto LAB_0011f4cc;
                    if (pbVar5 != param_2) {
                      bVar1 = *pbVar5;
                      if ((bVar1 & 0x7e) == 0) {
                        if (-1 < (char)bVar1) {
                          *param_1 = (long)(pbVar4 + 10);
                          return uVar3 | (ulong)bVar1 << 0x3f;
                        }
                        if (pbVar4 + 10 == param_2) goto LAB_0011f5fc;
                      }
                      fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n",
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
LAB_0011f5fc:
  fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getULEB128",
          "truncated uleb128 expression");
  fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0011f664  FUN_0011f664 =====

ulong FUN_0011f664(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

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
  lVar11 = FUN_0011f49c(&local_68,param_1 + 0x14);
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
      puVar9 = PTR___sF_00144f68;
      pbVar13 = pbVar18 + 1;
      local_68 = pbVar13;
      bVar8 = *pbVar18;
      uVar10 = (uint)bVar8;
      if (0x91 < uVar10 - 3) {
code_r0x0011fee0:
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
        goto LAB_0011fb4c;
      case 4:
      case 5:
      case 7:
        goto code_r0x0011fee0;
      case 6:
        puVar14 = (ulong *)*puVar19;
LAB_0011fadc:
        *puVar19 = *puVar14;
        goto LAB_0011f6e8;
      case 8:
        uVar16 = (ulong)pbVar18[1];
        goto LAB_0011fab0;
      case 9:
        uVar16 = (ulong)(char)pbVar18[1];
LAB_0011fab0:
        local_68 = pbVar18 + 2;
        goto LAB_0011fb4c;
      case 10:
        uVar16 = (ulong)*(ushort *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0011fb4c;
      case 0xb:
        uVar16 = (ulong)*(short *)(pbVar18 + 1);
        local_68 = pbVar18 + 3;
        goto LAB_0011fb4c;
      case 0xc:
        uVar16 = (ulong)*(uint *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0011fb4c;
      case 0xd:
        uVar16 = (ulong)*(int *)(pbVar18 + 1);
        local_68 = pbVar18 + 5;
        goto LAB_0011fb4c;
      case 0x10:
        uVar16 = FUN_0011f49c(&local_68,pbVar6);
        puVar19 = puVar19 + 1;
        *puVar19 = uVar16;
        goto LAB_0011f6e8;
      case 0x11:
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = pbVar13;
        do {
          if (pbVar18 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
        goto LAB_0011f6e8;
      case 0x12:
        uVar16 = *puVar19;
        goto LAB_0011f6e4;
      case 0x13:
        puVar19 = puVar19 + -1;
        goto LAB_0011f6e8;
      case 0x14:
        uVar16 = puVar19[-1];
        goto LAB_0011f6e4;
      case 0x15:
        local_68 = pbVar18 + 2;
        uVar16 = puVar19[-(ulong)pbVar18[1]];
LAB_0011fb4c:
LAB_0011f6e4:
        puVar19[1] = uVar16;
        puVar19 = puVar19 + 1;
        goto LAB_0011f6e8;
      case 0x16:
        auVar20 = NEON_ext(*(undefined1 (*) [16])(puVar19 + -1),*(undefined1 (*) [16])(puVar19 + -1)
                           ,8,1);
        *puVar19 = auVar20._8_8_;
        puVar19[-1] = auVar20._0_8_;
        goto LAB_0011f6e8;
      case 0x17:
        uVar16 = *puVar19;
        *puVar19 = SUB168(*(undefined1 (*) [16])(puVar19 + -2),8);
        puVar19[-1] = SUB168(*(undefined1 (*) [16])(puVar19 + -2),0);
        puVar19[-2] = uVar16;
        goto LAB_0011f6e8;
      case 0x18:
        puVar14 = (ulong *)*puVar19;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar14;
        goto LAB_0011f6e8;
      case 0x19:
        uVar16 = *puVar19;
        if ((long)uVar16 < 0) goto LAB_0011fc84;
        goto LAB_0011f6e8;
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
LAB_0011fc84:
        *puVar19 = -uVar16;
        goto LAB_0011f6e8;
      case 0x20:
        *puVar19 = ~*puVar19;
        goto LAB_0011f6e8;
      case 0x21:
        uVar16 = puVar19[-1] | *puVar19;
        break;
      case 0x22:
        uVar16 = puVar19[-1] + *puVar19;
        break;
      case 0x23:
        lVar11 = FUN_0011f49c(&local_68,pbVar6);
        *puVar19 = *puVar19 + lVar11;
        goto LAB_0011f6e8;
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
        goto LAB_0011f6e8;
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
        goto LAB_0011f6e8;
      default:
        uVar16 = (ulong)(uVar15 - 0x30);
        goto LAB_0011f6e4;
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
        goto LAB_0011f6e0;
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
            fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, bVar8 != 0x8d)) goto LAB_0011f820;
        }
        else if (bVar8 < 0x90) {
          puVar14 = puVar1;
          if ((bVar8 != 0x8e) && (puVar14 = puVar4, uVar15 != 0x8f)) {
LAB_0011f820:
            if (0x1c < uVar10 - 0x70) {
              fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((bVar8 != 0x90) && (puVar14 = puVar3, bVar8 != 0x92)) goto LAB_0011f820;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0011f6e4;
      case 0x90:
        uVar10 = FUN_0011f49c(&local_68,pbVar6);
        puVar9 = PTR___sF_00144f68;
        if ((int)uVar10 < 0x1e) {
          if (((uVar10 != 0xfffffffe) && (puVar14 = puVar5, uVar10 != 0xffffffff)) &&
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0011fd84;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0011fd84:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0011fd84;
        }
LAB_0011f6e0:
        uVar16 = *puVar14;
        goto LAB_0011f6e4;
      case 0x91:
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
                "DW_OP_fbreg not implemented");
        fflush((FILE *)(puVar9 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      case 0x92:
        uVar10 = FUN_0011f49c(&local_68,pbVar6);
        puVar9 = PTR___sF_00144f68;
        uVar16 = 0;
        uVar12 = 0;
        pbVar18 = local_68;
        pbVar13 = local_68;
        do {
          if (pbVar13 == pbVar6) {
            fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getSLEB128",
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
             (puVar14 = puVar2, uVar10 != 0x1d)) goto LAB_0011fdac;
        }
        else if ((int)uVar10 < 0x20) {
          puVar14 = puVar1;
          if ((uVar10 != 0x1e) && (puVar14 = puVar4, uVar10 != 0x1f)) {
LAB_0011fdac:
            if (0x1c < uVar10) {
              fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getRegister",
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
          if ((uVar10 != 0x20) && (puVar14 = puVar3, uVar10 != 0x22)) goto LAB_0011fdac;
        }
        uVar16 = *puVar14 + (uVar12 | uVar17);
        goto LAB_0011f6e4;
      case 0x93:
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","evaluateExpression",
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
LAB_0011ff84:
              fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n",
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
            if (bVar8 != 8) goto LAB_0011ff84;
            goto LAB_0011fadc;
          }
          *puVar19 = (ulong)(uint)*puVar14;
        }
        goto LAB_0011f6e8;
      }
      puVar19[-1] = uVar16;
      puVar19 = puVar19 + -1;
LAB_0011f6e8:
      pbVar18 = local_68;
    } while (local_68 < pbVar6);
    param_4 = *puVar19;
  }
  return param_4;
}


// ===== 00120020  FUN_00120020 =====

undefined8 FUN_00120020(long param_1,ulong param_2,long *param_3,uint param_4)

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
      (uVar3 = FUN_00120548(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar3 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar3 = FUN_00120710(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar3 & 1) == 0)))) {
    lVar5 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_001494a4);
    if (PTR_DAT_00149458 < PTR_DAT_00149460) {
      plVar4 = (long *)PTR_DAT_00149458;
      if (lVar5 == -1) {
        do {
          if (((ulong)plVar4[1] <= param_2) && (param_2 < (ulong)plVar4[2])) goto LAB_00120128;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00149460);
      }
      else {
        do {
          if (((*plVar4 == lVar5) && ((ulong)plVar4[1] <= param_2)) && (param_2 < (ulong)plVar4[2]))
          goto LAB_00120128;
          plVar4 = plVar4 + 4;
        } while (plVar4 < PTR_DAT_00149460);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001494a4);
    goto LAB_00120170;
  }
LAB_00120190:
  bVar2 = 1;
LAB_00120194:
  lVar5 = *param_3;
  memset(auStack_680,0,0x618);
  uVar3 = FUN_0011e184(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
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
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001494a4);
      __src = PTR_DAT_00149458;
      if (PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00149468
          <= PTR_DAT_00149460) {
        __n = (long)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00149468
              - (long)PTR_DAT_00149458;
        __dest = (undefined *)malloc(__n * 4);
        memcpy(__dest,__src,__n);
        if ((undefined8 *)__src != &DAT_001494e0) {
          free(__src);
        }
        PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00149468
             = __dest + ((long)__n >> 3) * 0x20;
        PTR_DAT_00149460 = __dest + __n;
        PTR_DAT_00149458 = __dest;
      }
      *(long *)PTR_DAT_00149460 = lVar5;
      *(long *)((long)PTR_DAT_00149460 + 8) = local_698;
      *(long *)((long)PTR_DAT_00149460 + 0x18) = local_6b0;
      *(long *)((long)PTR_DAT_00149460 + 0x10) = local_690;
      PTR_DAT_00149460 = (undefined *)((long)PTR_DAT_00149460 + 0x20);
      pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001494a4);
      return 1;
    }
    return 1;
  }
  return 1;
LAB_00120128:
  lVar5 = plVar4[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001494a4);
  if ((lVar5 != 0) &&
     (uVar3 = FUN_00120548(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar5,
                           &local_6b0,auStack_6e8), (uVar3 & 1) != 0)) {
    bVar2 = 0;
    goto LAB_00120194;
  }
LAB_00120170:
  uVar3 = FUN_00120548(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  goto LAB_00120190;
}


// ===== 001202f4  FUN_001202f4 =====

undefined8 FUN_001202f4(ulong *param_1,undefined8 param_2,undefined8 *param_3)

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
              uVar5 = FUN_00120428(uVar2,lVar8,lVar9 + lVar8,local_70);
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


// ===== 00120428  FUN_00120428 =====

undefined8 FUN_00120428(undefined8 param_1,byte *param_2,byte *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte *local_28;
  
  puVar3 = PTR___sF_00144f68;
  if ((ulong)((long)param_3 - (long)param_2) < 4) {
    if (param_3 == param_2) {
      return 0;
    }
    fprintf((FILE *)(PTR___sF_00144f68 + 0x130),
            "libunwind: unsupported .eh_frame_hdr at %lx: need at least 4 bytes of data but only got %zd\n"
            ,param_2);
  }
  else {
    if (*param_2 == 1) {
      local_28 = param_2 + 4;
      bVar1 = param_2[2];
      bVar2 = param_2[1];
      *(byte *)(param_4 + 3) = param_2[3];
      uVar4 = FUN_0011f110(param_1,&local_28,param_3,bVar2,param_2);
      *param_4 = uVar4;
      if (bVar1 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0011f110(param_1,&local_28,param_3,bVar1,param_2);
      }
      param_4[1] = uVar4;
      param_4[2] = local_28;
      return 1;
    }
    fprintf((FILE *)(PTR___sF_00144f68 + 0x130),
            "libunwind: unsupported .eh_frame_hdr version: %u at %lx\n",(ulong)(uint)*param_2,
            param_2);
  }
  fflush((FILE *)(puVar3 + 0x130));
  return 0;
}


// ===== 00120548  FUN_00120548 =====

undefined8
FUN_00120548(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
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
        (puVar7 < puVar9)) && (lVar4 = FUN_0011d2b8(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      uVar8 = FUN_0011f110(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
      lVar4 = FUN_0011f110(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((uVar8 < param_2) && (param_2 <= lVar4 + uVar8)) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = 0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_0011f49c(&local_68,puVar1);
          puVar7 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_0011f110(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar7;
            uVar6 = FUN_0011f110(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
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


// ===== 00120710  FUN_00120710 =====

undefined8
FUN_00120710(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
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
  uVar1 = FUN_00120428(param_1,param_3,lVar4,auStack_80);
  if (((uVar1 & 1) != 0) && (local_78 != 0)) {
    lVar2 = FUN_00120878(local_68);
    lVar7 = 0;
    do {
      if (local_78 < 2) {
        lVar8 = lVar7 * lVar2;
        break;
      }
      uVar6 = local_78 >> 1;
      lVar8 = (uVar6 + lVar7) * lVar2;
      local_88 = local_70 + lVar8;
      uVar1 = FUN_0011f110(param_1,&local_88,lVar4,local_68,param_3);
      uVar5 = local_78 - uVar6;
      local_78 = uVar6;
      if (uVar1 < param_2) {
        local_78 = uVar5;
        lVar7 = uVar6 + lVar7;
      }
    } while (uVar1 != param_2);
    local_88 = local_70 + lVar8;
    FUN_0011f110(param_1,&local_88,lVar4,local_68,param_3);
    uVar3 = FUN_0011f110(param_1,&local_88,lVar4,local_68,param_3);
    lVar4 = FUN_0011d128(param_1,uVar3,param_5,param_6,0);
    if (((lVar4 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
       (param_2 < *(ulong *)(param_5 + 0x20))) {
      return 1;
    }
  }
  return 0;
}


// ===== 00120878  FUN_00120878 =====

undefined8 FUN_00120878(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___sF_00144f68;
  param_1 = param_1 & 0xf;
  if (param_1 < 9) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        return 4;
      }
      if (param_1 == 1) {
LAB_00120940:
        fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
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
    if (param_1 == 9) goto LAB_00120940;
  }
  else {
    if (param_1 == 0xc) {
      return 0x10;
    }
    if (param_1 == 0xb) {
      return 8;
    }
  }
  fprintf((FILE *)(PTR___sF_00144f68 + 0x130),"libunwind: %s - %s\n","getTableEntrySize",
          "Unknown DWARF encoding for search table.");
  fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00120974  FUN_00120974 =====

char * FUN_00120974(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return &DAT_001101b8 + *(int *)(&DAT_001101b8 + (ulong)(param_1 + 2U) * 4);
  }
  return "unknown register";
}


// ===== 001209a4  FUN_001209a4 =====

undefined1  [16] FUN_001209a4(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00120a40  FUN_00120a40 =====

long FUN_00120a40(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  if (DAT_00149490 == '\0') {
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


// ===== 00120a70  facebook::react::RNGestureHandlerDetectorShadowNode::initialize =====

/* facebook::react::RNGestureHandlerDetectorShadowNode::initialize() */

void __thiscall
facebook::react::RNGestureHandlerDetectorShadowNode::initialize
          (RNGestureHandlerDetectorShadowNode *this)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  *(uint *)(this + 0x54) = *(uint *)(this + 0x54) & 0xfffffbff;
  plVar2 = (long *)facebook::react::ShadowNode::getChildren();
  lVar3 = *plVar2;
  if (plVar2[1] != lVar3) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      replaceChild((ShadowNode *)this,*(shared_ptr **)(lVar3 + lVar5),lVar3 + lVar5);
      lVar3 = *plVar2;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < (ulong)(plVar2[1] - lVar3 >> 4));
  }
  plVar2 = (long *)facebook::react::ShadowNode::getChildren();
  if (plVar2[1] - *plVar2 == 0x10) {
    uVar1 = facebook::react::ShadowNode::getOrderIndex();
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


// ===== 00120b14  facebook::react::RNGestureHandlerDetectorShadowNode::replaceChild =====

/* facebook::react::RNGestureHandlerDetectorShadowNode::replaceChild(facebook::react::ShadowNode
   const&, std::__ndk1::shared_ptr<facebook::react::ShadowNode const> const&, unsigned long) */

void facebook::react::RNGestureHandlerDetectorShadowNode::replaceChild
               (ShadowNode *param_1,shared_ptr *param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  unflattenNode((shared_ptr *)param_1);
                    /* try { // try from 00120b4c to 00120b5f has its CatchHandler @ 00120be0 */
  facebook::react::YogaLayoutableShadowNode::replaceChild(param_1,param_2,(ulong)auStack_48);
  if ((local_40 != (long *)0x0) &&
     (lVar3 = FUN_0011c550(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
    (**(code **)(*local_40 + 0x10))(local_40);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)facebook::react::ShadowNode::getChildren();
  if (plVar4[1] - *plVar4 == 0x10) {
    uVar2 = facebook::react::ShadowNode::getOrderIndex();
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120c08  facebook::react::RNGestureHandlerDetectorShadowNode::updateOrderIndexFromChildren =====

/* facebook::react::RNGestureHandlerDetectorShadowNode::updateOrderIndexFromChildren() */

void __thiscall
facebook::react::RNGestureHandlerDetectorShadowNode::updateOrderIndexFromChildren
          (RNGestureHandlerDetectorShadowNode *this)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = (long *)facebook::react::ShadowNode::getChildren();
  if (plVar2[1] - *plVar2 == 0x10) {
    uVar1 = facebook::react::ShadowNode::getOrderIndex();
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


// ===== 00120c4c  facebook::react::RNGestureHandlerDetectorShadowNode::appendChild =====

/* facebook::react::RNGestureHandlerDetectorShadowNode::appendChild(std::__ndk1::shared_ptr<facebook::react::ShadowNode
   const> const&) */

void facebook::react::RNGestureHandlerDetectorShadowNode::appendChild(shared_ptr *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *local_40;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  unflattenNode(param_1);
                    /* try { // try from 00120c78 to 00120c83 has its CatchHandler @ 00120d04 */
  facebook::react::YogaLayoutableShadowNode::appendChild(param_1);
  if ((local_40 != (long *)0x0) &&
     (lVar3 = FUN_0011c550(0xffffffffffffffff,local_40 + 1), lVar3 == 0)) {
    (**(code **)(*local_40 + 0x10))(local_40);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = (long *)facebook::react::ShadowNode::getChildren();
  if (plVar4[1] - *plVar4 == 0x10) {
    uVar2 = facebook::react::ShadowNode::getOrderIndex();
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120d2c  facebook::react::RNGestureHandlerDetectorShadowNode::unflattenNode =====

/* WARNING: Removing unreachable block (ram,0x00120df8) */
/* WARNING: Removing unreachable block (ram,0x00120e08) */
/* facebook::react::RNGestureHandlerDetectorShadowNode::unflattenNode(std::__ndk1::shared_ptr<facebook::react::ShadowNode
   const> const&) */

void facebook::react::RNGestureHandlerDetectorShadowNode::unflattenNode(shared_ptr *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x1;
  long *in_x8;
  long lVar4;
  ShadowNodeFragment *pSVar5;
  long local_68;
  long *local_60;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pSVar5 = (ShadowNodeFragment *)*in_x1;
  facebook::react::ShadowNodeFragment::propsPlaceholder();
  facebook::react::ShadowNodeFragment::childrenPlaceholder();
  facebook::react::ShadowNodeFragment::statePlaceholder();
  facebook::react::ShadowNode::clone(pSVar5);
  if (local_60 == (long *)0x0) {
    uVar1 = *(uint *)(local_68 + 0x54);
    *in_x8 = local_68;
    in_x8[1] = 0;
    *(uint *)(local_68 + 0x54) = uVar1 | 0x60;
  }
  else {
    FUN_00120a40(1,local_60 + 1);
    uVar1 = *(uint *)(local_68 + 0x54);
    *in_x8 = local_68;
    in_x8[1] = (long)local_60;
    *(uint *)(local_68 + 0x54) = uVar1 | 0x60;
    lVar3 = FUN_0011c550(0xffffffffffffffff,local_60 + 1);
    if (lVar3 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00120e48  FUN_00120e48 =====

void FUN_00120e48(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00120e98  facebook::react::RNGestureHandlerDetectorShadowNode::layout =====

/* facebook::react::RNGestureHandlerDetectorShadowNode::layout(facebook::react::LayoutContext) */

void __thiscall
facebook::react::RNGestureHandlerDetectorShadowNode::layout
          (RNGestureHandlerDetectorShadowNode *this,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 local_290;
  long *plStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_238;
  long *plStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  long *plStack_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
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
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  plVar7 = (long *)facebook::react::ShadowNode::getChildren();
  plVar10 = (long *)*plVar7;
  plVar1 = (long *)plVar7[1];
  do {
    if (plVar10 == plVar1) {
      uStack_a8 = param_2[1];
      local_b0 = *param_2;
      uStack_98 = param_2[3];
      uStack_a0 = param_2[2];
      local_90 = param_2[4];
      facebook::react::YogaLayoutableShadowNode::layout(this,&local_b0);
      if (this[0x438] == (RNGestureHandlerDetectorShadowNode)0x0) {
        if (*(long *)(lVar5 + 0x28) == local_88) {
          uVar9 = FUN_001214f0();
                    /* catch() { ... } // from try @ 0012103c with catch @ 00121204 */
          FUN_00121240(&local_238);
          if (*(long *)(lVar5 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_0011cd74(uVar9);
          }
        }
      }
      else {
        local_c0 = *(undefined4 *)(this + 0x434);
        uStack_e8 = *(undefined8 *)(this + 0x40c);
        local_f0 = *(undefined8 *)(this + 0x404);
        uStack_d8 = *(undefined8 *)(this + 0x41c);
        uStack_e0 = *(undefined8 *)(this + 0x414);
        uStack_c8 = *(undefined8 *)(this + 0x42c);
        local_d0 = *(undefined8 *)(this + 0x424);
        uStack_108 = *(undefined8 *)(this + 0x3ec);
        local_110 = *(undefined8 *)(this + 0x3e4);
        uStack_f8 = *(undefined8 *)(this + 0x3fc);
        uStack_100 = *(undefined8 *)(this + 0x3f4);
        facebook::react::LayoutableShadowNode::setLayoutMetrics(this,&local_110);
LAB_001211b8:
        if (*(long *)(lVar5 + 0x28) == local_88) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar8 = *plVar10;
    plVar2 = (long *)plVar10[1];
    if (plVar2 != (long *)0x0) {
      FUN_00120a40(1,plVar2 + 1);
      FUN_00120a40(1,plVar2 + 1);
      bVar4 = *(byte *)(lVar8 + 0xf0);
      lVar8 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1);
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      lVar8 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1);
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if ((bVar4 & 1) == 0) goto LAB_00120ef4;
LAB_00120f80:
      uStack_a8 = param_2[1];
      local_b0 = *param_2;
      uStack_98 = param_2[3];
      uStack_a0 = param_2[2];
      local_90 = param_2[4];
      facebook::react::YogaLayoutableShadowNode::layout(this,&local_b0);
      puVar11 = (undefined8 *)*plVar7;
      puVar3 = (undefined8 *)plVar7[1];
      uVar9 = 0x7f8000007f800000;
      uVar16 = 0xff800000ff800000;
      while (puVar11 != puVar3) {
        local_238 = *puVar11;
        plVar10 = (long *)puVar11[1];
        plStack_230 = plVar10;
        if (plVar10 != (long *)0x0) {
          FUN_00120a40(1,plVar10 + 1);
        }
                    /* try { // try from 0012103c to 00121047 has its CatchHandler @ 00121204 */
        facebook::react::LayoutableShadowNode::getLayoutMetrics();
        uVar12 = uStack_160;
        uVar6 = local_168;
        if ((plVar10 != (long *)0x0) &&
           (lVar8 = FUN_0011c550(0xffffffffffffffff,plVar10 + 1), lVar8 == 0)) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        uVar12 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                          (float)uVar6 + (float)uVar12);
        uVar13 = NEON_fcmgt(uVar9,uVar6,4);
        puVar11 = puVar11 + 2;
        uVar14 = NEON_fcmgt(uVar12,uVar16,4);
        uVar9 = NEON_bit(uVar9,uVar6,uVar13,1);
        uVar16 = NEON_bit(uVar16,uVar12,uVar14,1);
      }
      facebook::react::LayoutableShadowNode::getLayoutMetrics();
      fVar15 = (float)((ulong)uVar9 >> 0x20);
      uStack_1b8 = CONCAT44((float)((ulong)uVar16 >> 0x20) - fVar15,(float)uVar16 - (float)uVar9);
      local_170 = local_118;
      uStack_178 = uStack_120;
      local_180 = local_128;
      uStack_198 = uStack_140;
      local_1a0 = local_148;
      uStack_188 = uStack_130;
      uStack_190 = uStack_138;
      uStack_1a8 = uStack_150;
      uStack_1b0 = uStack_158;
      local_1c0 = uVar9;
      local_168 = uVar9;
      uStack_160 = uStack_1b8;
      facebook::react::LayoutableShadowNode::setLayoutMetrics(this,&local_1c0);
      puVar3 = (undefined8 *)plVar7[1];
      for (puVar11 = (undefined8 *)*plVar7; puVar11 != puVar3; puVar11 = puVar11 + 2) {
        uVar16 = *puVar11;
        plVar10 = (long *)puVar11[1];
        local_1d0 = uVar16;
        local_1c8 = plVar10;
        if (plVar10 != (long *)0x0) {
          FUN_00120a40(1,plVar10 + 1);
          FUN_00120a40(1,plVar10 + 1);
        }
        local_1e0 = uVar16;
        plStack_1d8 = plVar10;
                    /* try { // try from 001210b0 to 001210f7 has its CatchHandler @ 00121210 */
        facebook::react::LayoutableShadowNode::getLayoutMetrics();
        local_290 = CONCAT44((float)((ulong)local_238 >> 0x20) - fVar15,
                             (float)local_238 - (float)uVar9);
        uStack_268 = uStack_210;
        local_270 = local_218;
        uStack_258 = uStack_200;
        uStack_260 = local_208;
        uStack_248 = uStack_1f0;
        local_250 = uStack_1f8;
        local_240 = local_1e8;
        plStack_288 = plStack_230;
        uStack_278 = uStack_220;
        uStack_280 = local_228;
        local_238 = local_290;
        facebook::react::LayoutableShadowNode::setLayoutMetrics(uVar16,&local_290);
        plVar1 = local_1c8;
        if ((plVar10 != (long *)0x0) &&
           (lVar8 = FUN_0011c550(0xffffffffffffffff,plVar10 + 1), plVar1 = local_1c8, lVar8 == 0)) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          std::__ndk1::__shared_weak_count::__release_weak();
          plVar1 = local_1c8;
        }
        local_1c8 = plVar1;
        if ((plVar1 != (long *)0x0) &&
           (lVar8 = FUN_0011c550(0xffffffffffffffff,plVar1 + 1), lVar8 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_001211b8;
    }
    if ((*(byte *)(lVar8 + 0xf0) & 1) != 0) goto LAB_00120f80;
LAB_00120ef4:
    plVar10 = plVar10 + 2;
  } while( true );
}


// ===== 00121240  FUN_00121240 =====

void FUN_00121240(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00121290  FUN_00121290 =====

void FUN_00121290(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001212e0  FUN_001212e0 =====

void FUN_001212e0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00144d68 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00121620(param_1 + 0x23);
  FUN_00121524(param_1);
  return;
}


// ===== 00121398  FUN_00121398 =====

void FUN_00121398(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00144d68 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00121620(param_1 + 0x23);
  FUN_00121524(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00121458  FUN_00121458 =====

void FUN_00121458(long param_1)

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


// ===== 001214c0  FUN_001214c0 =====

bool FUN_001214c0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 001214d8  FUN_001214d8 =====

bool FUN_001214d8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 001214f0  FUN_001214f0 =====

void FUN_001214f0(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_00144d60 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_00144d58,PTR__bad_optional_access_00144d50);
}


// ===== 00121524  FUN_00121524 =====

void FUN_00121524(NativeState *param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)param_1 = PTR_vtable_00144d70 + 0x10;
  if (*(long *)(param_1 + 0x60) != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  facebook::jsi::NativeState::~NativeState(param_1);
  return;
}


// ===== 00121620  FUN_00121620 =====

void FUN_00121620(long param_1)

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


// ===== 001216b4  facebook::react::rngesturehandler_codegen_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x00121708) */
/* WARNING: Removing unreachable block (ram,0x00121718) */
/* WARNING: Removing unreachable block (ram,0x00121760) */
/* WARNING: Removing unreachable block (ram,0x00121770) */
/* facebook::react::rngesturehandler_codegen_registerComponentDescriptorsFromCodegen(std::__ndk1::shared_ptr<facebook::react::ComponentDescriptorProviderRegistry
   const>) */

void facebook::react::rngesturehandler_codegen_registerComponentDescriptorsFromCodegen
               (undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 001216f8 to 001216ff has its CatchHandler @ 001217b0 */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
                    /* try { // try from 00121750 to 00121757 has its CatchHandler @ 001217ac */
  facebook::react::ComponentDescriptorProviderRegistry::add((ComponentDescriptorProvider *)*param_1)
  ;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001217d8  FUN_001217d8 =====

void FUN_001217d8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00121828  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1650 [2];
  undefined8 *local_1648;
  void *local_1640;
  void *pvStack_1638;
  undefined8 local_1630;
  void *pvStack_1628;
  void *local_1620;
  undefined8 uStack_1618;
  void *local_1610;
  void *pvStack_1608;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  RNGestureHandlerButtonProps aRStack_15f0 [2592];
  RNGestureHandlerButtonProps aRStack_bd0 [2592];
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
  pvStack_1628 = (void *)0x0;
  local_1630 = 0;
  uStack_1618 = 0;
  local_1620 = (void *)0x0;
  pvStack_1608 = (void *)0x0;
  local_1610 = (void *)0x0;
  uStack_15f8 = 0;
  uStack_1600 = 0;
  pvStack_1638 = (void *)0x0;
  local_1640 = (void *)0x0;
                    /* try { // try from 0012187c to 00121887 has its CatchHandler @ 00121b18 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1640);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_001436c0;
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
                    /* try { // try from 001218f4 to 00121907 has its CatchHandler @ 00121b48 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1650[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1648 = &local_1b0;
  facebook::react::RawProps::parse((RawPropsParser *)&local_f8);
  memset(aRStack_15f0,0,0xa20);
                    /* try { // try from 00121944 to 0012195f has its CatchHandler @ 00121b48 */
  FUN_00122830(aRStack_15f0);
  facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps
            (aRStack_bd0,(PropsParserContext *)local_1650,aRStack_15f0,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_00144dd8;
  FUN_00123350(aRStack_bd0,PTR_PTR_00144dd8);
  FUN_00123350(aRStack_15f0,puVar5);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_0011c550(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 00121a74 to 00121a7f has its CatchHandler @ 00121b4c */
        (*(code *)(&PTR_FUN_00143760)[*(uint *)((long)pvVar3 + -8)])
                  (aRStack_15f0,(void *)((long)pvVar3 + -0x38));
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
  if (local_1610 != (void *)0x0) {
    pvStack_1608 = local_1610;
    operator_delete(local_1610);
  }
  if (pvStack_1628 != (void *)0x0) {
    local_1620 = pvStack_1628;
    operator_delete(pvStack_1628);
  }
  if (local_1640 != (void *)0x0) {
    pvStack_1638 = local_1640;
    operator_delete(local_1640);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00121b50  FUN_00121b50 =====

void FUN_00121b50(undefined8 *param_1)

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


// ===== 00121ba4  FUN_00121ba4 =====

void FUN_00121ba4(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00121bb4  FUN_00121bb4 =====

void FUN_00121bb4(void *param_1)

{
  FUN_00124694();
  operator_delete(param_1);
  return;
}


// ===== 00121bd8  FUN_00121bd8 =====

undefined * FUN_00121bd8(void)

{
  return PTR_RNGestureHandlerButtonComponentName_00144dc8;
}


// ===== 00121be4  FUN_00121be4 =====

undefined * FUN_00121be4(void)

{
  return PTR_RNGestureHandlerButtonComponentName_00144dc8;
}


// ===== 00121bf0  FUN_00121bf0 =====

undefined8 FUN_00121bf0(void)

{
  return 0x61;
}


// ===== 00121bf8  FUN_00121bf8 =====

void FUN_00121bf8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_001437f8;
                    /* try { // try from 00121c64 to 00121c73 has its CatchHandler @ 00121d4c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00143848;
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
                    /* try { // try from 00121d00 to 00121d0b has its CatchHandler @ 00121d3c */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00121d7c  FUN_00121d7c =====

void FUN_00121d7c(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_001437f8;
                    /* try { // try from 00121dd4 to 00121de3 has its CatchHandler @ 00121f24 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00143848;
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
                    /* try { // try from 00121e68 to 00121e77 has its CatchHandler @ 00121f3c */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00120a40(1,plVar5 + 1);
                    /* try { // try from 00121e88 to 00121e97 has its CatchHandler @ 00121f14 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_0011c550(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00121ed4 to 00121edf has its CatchHandler @ 00121f3c */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00121f64  FUN_00121f64 =====

void FUN_00121f64(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00121f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00121f78  FUN_00121f78 =====

void FUN_00121f78(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNGestureHandlerButtonProps *this;
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
  RNGestureHandlerButtonProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 001223ac to 001223af has its CatchHandler @ 001223dc */
      FUN_00123720();
      __cxa_atexit(FUN_00123798,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
                   ,&PTR_LOOP_00143540);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00120a40(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNGestureHandlerButtonProps *)*param_4;
    if (pRVar12 == (RNGestureHandlerButtonProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
                                     ), iVar7 != 0)) {
                    /* try { // try from 0012232c to 0012232f has its CatchHandler @ 001223f4 */
        FUN_00123720();
        __cxa_atexit(FUN_00123798,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
                     ,&PTR_LOOP_00143540);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
                           );
      }
      pRVar12 = *(RNGestureHandlerButtonProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
      ;
    }
    plVar9 = (long *)operator_new(0xa38);
    this = (RNGestureHandlerButtonProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_00143960;
                    /* try { // try from 00122058 to 0012206b has its CatchHandler @ 00122468 */
    facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 00122070 to 00122083 has its CatchHandler @ 00122480 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_001220ac:
      FUN_00120a40(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
                                       ), iVar7 != 0)) {
                    /* try { // try from 0012236c to 0012236f has its CatchHandler @ 001223e0 */
          FUN_00123720();
          __cxa_atexit(FUN_00123798,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
                       ,&PTR_LOOP_00143540);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d90
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00122114 to 00122127 has its CatchHandler @ 0012240c */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00122160:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00122160;
        }
        if (plVar9 != (long *)0x0) goto LAB_00122174;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 001220c8 to 001220db has its CatchHandler @ 00122434 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00122174;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00122174:
        lVar11 = FUN_0011c550(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00122090 to 0012209b has its CatchHandler @ 00122408 */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNGestureHandlerButtonComponentName_00144dc8,__s2);
      if (iVar7 != 0) goto LAB_001220ac;
      bVar3 = false;
    }
                    /* try { // try from 001221a0 to 001221a3 has its CatchHandler @ 00122480 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 001221b0 to 001221cb has its CatchHandler @ 00122430 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0012230c to 0012231b has its CatchHandler @ 00122428 */
                    /* WARNING: Subroutine does not return */
          FUN_00123890(*(undefined8 *)PTR_name_00144df0);
        }
        goto LAB_001224cc;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 001222ec to 001222fb has its CatchHandler @ 0012248c */
                    /* WARNING: Subroutine does not return */
            FUN_00123890(*(undefined8 *)PTR_name_00144df8);
          }
          goto LAB_001224cc;
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
                    /* try { // try from 0012224c to 00122257 has its CatchHandler @ 00122494 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0012225c to 00122273 has its CatchHandler @ 00122498 */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00122284 to 0012228f has its CatchHandler @ 00122488 */
          param_2 = (*(code *)(&PTR_FUN_00143760)[local_a0])(&uStack_d1,local_d0);
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
LAB_001224cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 001224d0  FUN_001224d0 =====

void FUN_001224d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001224d8  FUN_001224d8 =====

void FUN_001224d8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 001224e0  FUN_001224e0 =====

void FUN_001224e0(undefined8 *param_1,long param_2,long param_3)

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
  FUN_00123d38(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 00122524 to 0012252b has its CatchHandler @ 00122804 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_001439b0;
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
    FUN_00120a40(1,local_78 + 0x10);
  }
                    /* try { // try from 00122568 to 00122577 has its CatchHandler @ 001227d8 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_00143a78;
                    /* try { // try from 00122584 to 0012258b has its CatchHandler @ 001227c8 */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_00143a98;
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
  plVar5[3] = (long)&PTR_FUN_00143a00;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00122638 to 0012263f has its CatchHandler @ 001227b8 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_00143b58;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00120a40(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00120a40(1,local_78 + 0x10);
  }
                    /* try { // try from 00122688 to 0012269f has its CatchHandler @ 00122788 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00120a40(1,puVar6 + 2);
                    /* try { // try from 001226f4 to 001226ff has its CatchHandler @ 00122768 */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012282c  FUN_0012282c =====

void FUN_0012282c(void)

{
  return;
}


// ===== 00122830  FUN_00122830 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00122830(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  FUN_00122b78(param_1,PTR_PTR_00144dd8 + 0x10);
  *(undefined4 *)((long)param_1 + 0x5dc) = 0;
  uVar1 = DAT_00110590;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(int *)(param_1 + 0xdc) = (int)uVar1;
  lVar2 = _UNK_001106a8;
  lVar4 = _DAT_001106a0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  param_1[0xdf] = lVar2;
  param_1[0xde] = lVar4;
  lVar2 = _UNK_001105f8;
  lVar4 = _DAT_001105f0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  param_1[0xe2] = lVar2;
  param_1[0xe1] = lVar4;
  lVar4 = NEON_fmov(0xbf800000,4);
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)((long)param_1 + 0x6bc) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)((long)param_1 + 0x6c4) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)((long)param_1 + 0x6cc) = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)((long)param_1 + 0x6d4) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)((long)param_1 + 0x6dc) = 0;
  param_1[0xe3] = lVar4;
  lVar4 = DAT_001105a0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  puVar3 = PTR_vtable_00144dd0;
  param_1[0xe4] = lVar4;
  lVar4 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)((long)param_1 + 0x6b4) = 0;
  *(undefined1 *)((long)param_1 + 0x6ec) = 0;
  *param_1 = (long)(puVar3 + 0x20);
  *(undefined8 *)((long)param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xe8) = 10;
  *(undefined4 *)((long)param_1 + 0x741) = 0x696c6f73;
  *(undefined2 *)((long)param_1 + 0x745) = 100;
  param_1[0xe5] = lVar4;
  *(undefined1 *)(param_1 + 0xeb) = 0xe;
  *(undefined4 *)((long)param_1 + 0x759) = 0x69736976;
  *(undefined1 *)((long)param_1 + 0x704) = 0;
  *(undefined4 *)((long)param_1 + 0x75c) = 0x656c6269;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  param_1[0x10f] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x11b] = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  param_1[0x12d] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  param_1[0x133] = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  param_1[0x139] = 0;
  *(undefined4 *)(param_1 + 0x13e) = 0;
  param_1[0x13f] = 0;
  *(undefined8 *)((long)param_1 + 0x7a4) = 0;
  *(undefined8 *)((long)param_1 + 0x79c) = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xef] = 0;
  param_1[0xee] = 0;
  return;
}


// ===== 001229dc  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc
               (long *param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00123150(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00122a4c;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,param_2,__n);
LAB_00122a4c:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 00122a68  FUN_00122a68 =====

void FUN_00122a68(undefined8 *param_1,undefined8 *param_2)

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
  FUN_001231e4(param_1,param_2 + 1);
  return;
}


// ===== 00122b78  FUN_00122b78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00122b78(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = DAT_001105a8;
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
  uVar2 = _UNK_001105d8;
  uVar6 = _DAT_001105d0;
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
  uVar4 = _UNK_00110800;
  uVar3 = _DAT_001107f8;
  uVar2 = _UNK_001107f0;
  uVar6 = _DAT_001107e8;
  *(undefined1 *)((long)param_1 + 0x34c) = 0;
  *param_1 = uVar7;
  *(undefined8 *)((long)param_1 + 0x344) = 0x3f800000;
  param_1[0xb2] = uVar4;
  param_1[0xb1] = uVar3;
  param_1[0xb0] = uVar2;
  param_1[0xaf] = uVar6;
  uVar4 = _UNK_001107e0;
  uVar3 = _DAT_001107d8;
  uVar2 = _UNK_001107d0;
  uVar6 = _DAT_001107c8;
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


// ===== 00122f2c  FUN_00122f2c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00122f2c(long param_1)

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


// ===== 00123128  FUN_00123128 =====

void FUN_00123128(undefined8 param_1,long param_2)

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


// ===== 0012313c  FUN_0012313c =====

void FUN_0012313c(undefined8 param_1,long param_2)

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


// ===== 00123150  FUN_00123150 =====

void FUN_00123150(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("basic_string");
}


// ===== 00123164  FUN_00123164 =====

void FUN_00123164(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00123180 to 00123187 has its CatchHandler @ 001231a0 */
  FUN_001231b4(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00144de0,PTR__length_error_00144db0);
}


// ===== 001231b4  FUN_001231b4 =====

void FUN_001231b4(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00144de8 + 0x10;
  return;
}


// ===== 001231e4  FUN_001231e4 =====

void FUN_001231e4(undefined8 *param_1,undefined8 *param_2)

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
                    /* try { // try from 001232ac to 001232b3 has its CatchHandler @ 0012334c */
          (*(code *)(&PTR_FUN_00143750)[*(uint *)((long)pvVar4 + -8)])
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
  FUN_00122f2c(param_1 + 0x3d);
  *param_1 = param_2[1];
  FUN_00121620(param_1 + 10);
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


// ===== 00123350  FUN_00123350 =====

void FUN_00123350(long param_1,long param_2)

{
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
  if ((*(byte *)(param_1 + 0x758) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x768));
  }
  if ((*(byte *)(param_1 + 0x740) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x750));
  }
  FUN_00122a68(param_1,param_2 + 8);
  return;
}


// ===== 00123400  FUN_00123400 =====

void FUN_00123400(long param_1)

{
  long lVar1;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
                    /* try { // try from 00123438 to 00123443 has its CatchHandler @ 00123470 */
    (*(code *)(&PTR_FUN_00143760)[*(uint *)(param_1 + 0x30)])(&uStack_29,param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123474  FUN_00123474 =====

void FUN_00123474(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 0012347c  FUN_0012347c =====

void FUN_0012347c(undefined8 param_1,long param_2)

{
  facebook::jsi::Value::~Value((Value *)(param_2 + 8));
  return;
}


// ===== 00123484  FUN_00123484 =====

void FUN_00123484(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x123488);
  (*pcVar1)();
}


// ===== 00123488  FUN_00123488 =====

void FUN_00123488(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001234d8  FUN_001234d8 =====

void FUN_001234d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001437f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001234e8  FUN_001234e8 =====

void FUN_001234e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001437f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00123518  FUN_00123518 =====

void FUN_00123518(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00123520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00123524  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00123528  FUN_00123528 =====

void FUN_00123528(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00144d68 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00121620(param_1 + 0x23);
  FUN_00121524(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001235e8  FUN_001235e8 =====

void FUN_001235e8(long param_1)

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


// ===== 00123650  FUN_00123650 =====

bool FUN_00123650(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00123668  FUN_00123668 =====

bool FUN_00123668(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00123680  FUN_00123680 =====

void FUN_00123680(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001236d0  FUN_001236d0 =====

void FUN_001236d0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00123720  FUN_00123720 =====

void FUN_00123720(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xa38);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00143910;
  memset(__s,0,0xa20);
                    /* try { // try from 0012375c to 00123763 has its CatchHandler @ 0012377c */
  FUN_00122830(__s);
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
  ;
  *(undefined8 **)
   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35RNGestureHandlerButtonComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27RNGestureHandlerButtonPropsENS0_34RNGestureHandlerButtonEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144d88
       = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00123798  FUN_00123798 =====

void FUN_00123798(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 001237e8  FUN_001237e8 =====

void FUN_001237e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143910;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001237f8  FUN_001237f8 =====

void FUN_001237f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143910;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00123828  FUN_00123828 =====

void FUN_00123828(long param_1)

{
  FUN_00123350(param_1 + 0x18,PTR_PTR_00144dd8);
  return;
}


// ===== 00123838  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 0012383c  FUN_0012383c =====

void FUN_0012383c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143960;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0012384c  FUN_0012384c =====

void FUN_0012384c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143960;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0012387c  FUN_0012387c =====

void FUN_0012387c(long param_1)

{
  FUN_00123350(param_1 + 0x18,PTR_PTR_00144dd8);
  return;
}


// ===== 0012388c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00123890  FUN_00123890 =====

void FUN_00123890(undefined8 param_1,undefined4 param_2)

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
                    /* try { // try from 001238bc to 001238cb has its CatchHandler @ 001238f4 */
  folly::TypeError::TypeError(aTStack_38,local_50,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 001238dc to 001238e3 has its CatchHandler @ 001238e4 */
    uVar2 = FUN_00123924(aTStack_38);
                    /* catch() { ... } // from try @ 001238dc with catch @ 001238e4 */
    std::runtime_error::~runtime_error((runtime_error *)aTStack_38);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123924  FUN_00123924 =====

void FUN_00123924(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
  FUN_00123960(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00144d98,PTR__runtime_error_00144dc0);
}


// ===== 00123960  FUN_00123960 =====

void FUN_00123960(runtime_error *param_1,runtime_error *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined ***)param_1 = &PTR__runtime_error_00143e90;
  return;
}


// ===== 0012398c  FUN_0012398c =====

void FUN_0012398c(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001239b0  FUN_001239b0 =====

void FUN_001239b0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00123a00  FUN_00123a00 =====

void FUN_00123a00(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00123a50  FUN_00123a50 =====

void FUN_00123a50(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001439b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00123a60  FUN_00123a60 =====

void FUN_00123a60(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_001439b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00123a90  FUN_00123a90 =====

void FUN_00123a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00123a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00123a9c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00123aa0  FUN_00123aa0 =====

void FUN_00123aa0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00143a78;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_00143ae8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00123b50  FUN_00123b50 =====

void FUN_00123b50(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00143a78;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_00143ae8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00123c00  FUN_00123c00 =====

void FUN_00123c00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143a98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00123c10  FUN_00123c10 =====

void FUN_00123c10(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143a98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00123c40  FUN_00123c40 =====

void FUN_00123c40(long param_1)

{
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x18));
  return;
}


// ===== 00123c48  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00123c4c  FUN_00123c4c =====

void FUN_00123c4c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00143ae8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00123cc4  FUN_00123cc4 =====

void FUN_00123cc4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00143ae8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00123d38  FUN_00123d38 =====

void FUN_00123d38(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  *puVar3 = &PTR_FUN_00143b08;
  local_58 = *param_2;
  local_50 = (long *)param_2[1];
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (local_50 != (long *)0x0) {
    FUN_00120a40(1,local_50 + 1);
  }
                    /* try { // try from 00123da4 to 00123daf has its CatchHandler @ 00123e0c */
  facebook::react::EventTarget::EventTarget((EventTarget *)(puVar3 + 3),&local_58,*param_3);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar4 = FUN_0011c550(0xffffffffffffffff,local_50 + 1), lVar4 == 0)) {
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


// ===== 00123e44  FUN_00123e44 =====

void FUN_00123e44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143b08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00123e54  FUN_00123e54 =====

void FUN_00123e54(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143b08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00123e84  FUN_00123e84 =====

void FUN_00123e84(long param_1)

{
  long lVar1;
  long *plVar2;
  
  facebook::jsi::Value::~Value((Value *)(param_1 + 0x30));
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00123ee0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00123ee4  FUN_00123ee4 =====

void FUN_00123ee4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00123f34  FUN_00123f34 =====

void FUN_00123f34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143b58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00123f44  FUN_00123f44 =====

void FUN_00123f44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143b58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00123f74  FUN_00123f74 =====

void FUN_00123f74(long param_1)

{
  facebook::react::ShadowNodeFamily::~ShadowNodeFamily((ShadowNodeFamily *)(param_1 + 0x20));
  return;
}


// ===== 00123f7c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00123f80  FUN_00123f80 =====

void FUN_00123f80(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00123fd0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined1 local_89c;
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
                    /* try { // try from 00124020 to 0012402b has its CatchHandler @ 0012465c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00143ba8;
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
                    /* try { // try from 0012409c to 001240a7 has its CatchHandler @ 0012468c */
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
  local_f80 = PTR_construction_vtable_00144e28 + 0x20;
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
  uStack_9f0 = _UNK_00110800;
  local_9f8 = _DAT_001107f8;
  local_f2b = DAT_001105a8;
  uStack_ae8 = _UNK_001105d8;
  local_af0 = _DAT_001105d0;
  uStack_a00 = _UNK_001107f0;
  local_a08 = _DAT_001107e8;
  local_e14 = 0;
  uStack_a10 = _UNK_001107e0;
  local_a18 = _DAT_001107d8;
  uStack_a20 = _UNK_001107d0;
  local_a28 = _DAT_001107c8;
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
  local_f80 = PTR_vtable_00144e08 + 0x20;
  local_8a0 = 0xffffffff;
  local_89c = 0;
                    /* try { // try from 00124498 to 001244ab has its CatchHandler @ 0012468c */
  facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps
            ((RNGestureHandlerRootViewProps *)local_898,(PropsParserContext *)local_fe0,
             (RNGestureHandlerRootViewProps *)&local_f80,(RawProps *)&local_f8);
  puVar5 = PTR_PTR_00144e10;
  FUN_00122a68(local_898,PTR_PTR_00144e10 + 8);
  FUN_00122a68(&local_f80,puVar5 + 8);
  facebook::react::RawPropsParser::postPrepare();
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_0011c550(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 001245b8 to 001245c3 has its CatchHandler @ 00124690 */
        (*(code *)(&PTR_FUN_00143760)[*(uint *)((long)pvVar3 + -8)])
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


// ===== 00124694  FUN_00124694 =====

void FUN_00124694(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  pvVar1 = (void *)param_1[0xd];
  *param_1 = &PTR_FUN_00143780;
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
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_0011c550(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_0011c550(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
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


// ===== 00124768  FUN_00124768 =====

void FUN_00124768(void *param_1)

{
  FUN_00124694();
  operator_delete(param_1);
  return;
}


// ===== 0012478c  FUN_0012478c =====

undefined * FUN_0012478c(void)

{
  return PTR_RNGestureHandlerRootViewComponentName_00144e00;
}


// ===== 00124798  FUN_00124798 =====

undefined * FUN_00124798(void)

{
  return PTR_RNGestureHandlerRootViewComponentName_00144e00;
}


// ===== 001247a4  FUN_001247a4 =====

undefined8 FUN_001247a4(void)

{
  return 0x61;
}


// ===== 001247ac  FUN_001247ac =====

void FUN_001247ac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_00143c38;
                    /* try { // try from 00124818 to 00124827 has its CatchHandler @ 00124900 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00143c88;
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
                    /* try { // try from 001248b4 to 001248bf has its CatchHandler @ 001248f0 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00124930  FUN_00124930 =====

void FUN_00124930(undefined8 *param_1,long *param_2,shared_ptr *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_00143c38;
                    /* try { // try from 00124988 to 00124997 has its CatchHandler @ 00124ad8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            (pYVar1,(ShadowNode *)param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00143c88;
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
                    /* try { // try from 00124a1c to 00124a2b has its CatchHandler @ 00124af0 */
  facebook::react::YogaLayoutableShadowNode::completeClone
            ((ShadowNode *)pYVar1,(ShadowNodeFragment *)param_3);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00120a40(1,plVar5 + 1);
                    /* try { // try from 00124a3c to 00124a4b has its CatchHandler @ 00124ac8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_0011c550(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00124a88 to 00124a93 has its CatchHandler @ 00124af0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00124b18  FUN_00124b18 =====

void FUN_00124b18(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00124b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00124b2c  FUN_00124b2c =====

void FUN_00124b2c(undefined8 *param_1,ulong param_2,PropsParserContext *param_3,long *param_4,
                 RawPropsParser *param_5)

{
  RNGestureHandlerRootViewProps *this;
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
  RNGestureHandlerRootViewProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
         & 1) == 0) &&
       (param_2 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
                                     ), (int)param_2 != 0)) {
                    /* try { // try from 00124f60 to 00124f63 has its CatchHandler @ 00124f90 */
      FUN_0012567c();
      __cxa_atexit(FUN_0012562c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
                   ,&PTR_LOOP_00143540);
      param_2 = __cxa_guard_release(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
                                   );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      param_2 = FUN_00120a40(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::parse(param_5);
    pRVar12 = (RNGestureHandlerRootViewProps *)*param_4;
    if (pRVar12 == (RNGestureHandlerRootViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
                                     ), iVar7 != 0)) {
                    /* try { // try from 00124ee0 to 00124ee3 has its CatchHandler @ 00124fa8 */
        FUN_0012567c();
        __cxa_atexit(FUN_0012562c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
                     ,&PTR_LOOP_00143540);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
                           );
      }
      pRVar12 = *(RNGestureHandlerRootViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
      ;
    }
    plVar9 = (long *)operator_new(0x700);
    this = (RNGestureHandlerRootViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_00143da0;
                    /* try { // try from 00124c0c to 00124c1f has its CatchHandler @ 0012501c */
    facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps
              (this,param_3,pRVar12,(RawProps *)param_5);
                    /* try { // try from 00124c24 to 00124c37 has its CatchHandler @ 00125034 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid
                           (), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid(),
       (uVar8 & 1) == 0)) {
LAB_00124c60:
      FUN_00120a40(1,plVar9 + 1);
      if ((RawProps *)*param_4 == (RawProps *)0x0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
                                       ), iVar7 != 0)) {
                    /* try { // try from 00124f20 to 00124f23 has its CatchHandler @ 00124f94 */
          FUN_0012567c();
          __cxa_atexit(FUN_0012562c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
                       ,&PTR_LOOP_00143540);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00124cc8 to 00124cdb has its CatchHandler @ 00124fc0 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,
                   *(RawProps **)
                    PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
                   ,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00124d14:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00124d14;
        }
        if (plVar9 != (long *)0x0) goto LAB_00124d28;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00124c7c to 00124c8f has its CatchHandler @ 00124fe8 */
        facebook::react::Props::initializeDynamicProps
                  ((Props *)this,(RawProps *)*param_4,(function *)param_5);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00124d28;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00124d28:
        lVar11 = FUN_0011c550(0xffffffffffffffff,plVar9 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00124c44 to 00124c4f has its CatchHandler @ 00124fbc */
      __s2 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_RNGestureHandlerRootViewComponentName_00144e00,__s2);
      if (iVar7 != 0) goto LAB_00124c60;
      bVar3 = false;
    }
                    /* try { // try from 00124d54 to 00124d57 has its CatchHandler @ 00125034 */
    param_2 = facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter();
    if ((param_2 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00124d64 to 00124d7f has its CatchHandler @ 00124fe4 */
        param_2 = folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        param_2 = facebook::react::RawProps::operator_cast_to_dynamic((RawProps *)param_5);
      }
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00124ec0 to 00124ecf has its CatchHandler @ 00124fdc */
                    /* WARNING: Subroutine does not return */
          FUN_00123890(*(undefined8 *)PTR_name_00144df0);
        }
        goto LAB_00125080;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00124ea0 to 00124eaf has its CatchHandler @ 00125040 */
                    /* WARNING: Subroutine does not return */
            FUN_00123890(*(undefined8 *)PTR_name_00144df8);
          }
          goto LAB_00125080;
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
                    /* try { // try from 00124e00 to 00124e0b has its CatchHandler @ 00125048 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00124e10 to 00124e27 has its CatchHandler @ 0012504c */
        param_2 = facebook::react::HostPlatformViewProps::setProp
                            ((PropsParserContext *)this,(uint)param_3,(char *)(ulong)uVar1,pRVar4);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00124e38 to 00124e43 has its CatchHandler @ 0012503c */
          param_2 = (*(code *)(&PTR_FUN_00143760)[local_a0])(&uStack_d1,local_d0);
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
LAB_00125080:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_2);
}


// ===== 00125084  FUN_00125084 =====

void FUN_00125084(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0012508c  FUN_0012508c =====

void FUN_0012508c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00125094  FUN_00125094 =====

void FUN_00125094(undefined8 *param_1,long param_2,long param_3)

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
  FUN_00123d38(&local_a0,param_3 + 8,param_3 + 4);
                    /* try { // try from 001250d8 to 001250df has its CatchHandler @ 001253b8 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00143df0;
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
    FUN_00120a40(1,local_78 + 0x10);
  }
                    /* try { // try from 0012511c to 0012512b has its CatchHandler @ 0012538c */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_00143a78;
                    /* try { // try from 00125138 to 0012513f has its CatchHandler @ 0012537c */
  puVar6 = (undefined8 *)operator_new(0x58);
  *puVar6 = &PTR_FUN_00143a98;
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
  plVar5[3] = (long)&PTR_FUN_00143e40;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 001251ec to 001251f3 has its CatchHandler @ 0012536c */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  *puVar6 = &PTR_FUN_00143b58;
  pSVar2 = (ShadowNodeFamily *)(puVar6 + 4);
  puVar6[1] = 0;
  puVar6[2] = 0;
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00120a40(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00120a40(1,local_78 + 0x10);
  }
                    /* try { // try from 0012523c to 00125253 has its CatchHandler @ 0012533c */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = puVar6;
  local_b0 = pSVar2;
  local_a8 = puVar6;
  FUN_00120a40(1,puVar6 + 2);
                    /* try { // try from 001252a8 to 001252b3 has its CatchHandler @ 0012531c */
  facebook::react::EventEmitter::setShadowNodeFamily(pEVar1,&local_b0);
  if (local_a8 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_0011c550(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001253e0  FUN_001253e0 =====

void FUN_001253e0(void)

{
  return;
}


// ===== 001253e4  FUN_001253e4 =====

void FUN_001253e4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00125434  FUN_00125434 =====

void FUN_00125434(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143c38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00125444  FUN_00125444 =====

void FUN_00125444(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143c38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00125474  FUN_00125474 =====

void FUN_00125474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0012547c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00125480  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00125484  FUN_00125484 =====

void FUN_00125484(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_00144d68 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_00121620(param_1 + 0x23);
  FUN_00121524(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00125544  FUN_00125544 =====

void FUN_00125544(long param_1)

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


// ===== 001255ac  FUN_001255ac =====

bool FUN_001255ac(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 001255c4  FUN_001255c4 =====

bool FUN_001255c4(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 001255dc  FUN_001255dc =====

void FUN_001255dc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0012562c  FUN_0012562c =====

void FUN_0012562c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0012567c  FUN_0012567c =====

void FUN_0012567c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00143d50;
  memset(__s,0,0x6e8);
                    /* try { // try from 001256b8 to 001256cb has its CatchHandler @ 00125744 */
  FUN_00122b78(__s,PTR_PTR_00144e10 + 0x10);
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
  puVar1 = PTR_vtable_00144e08;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xdf) = 0xffffffff;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerRootViewPropsENS0_36RNGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_00144da0
  ;
  *(undefined1 *)((long)puVar2 + 0x6fc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00125760  FUN_00125760 =====

void FUN_00125760(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143d50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00125770  FUN_00125770 =====

void FUN_00125770(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143d50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001257a0  FUN_001257a0 =====

void FUN_001257a0(long param_1)

{
  FUN_00122a68(param_1 + 0x18,PTR_PTR_00144e10 + 8);
  return;
}


// ===== 001257b4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 001257b8  FUN_001257b8 =====

void FUN_001257b8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143da0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 001257c8  FUN_001257c8 =====

void FUN_001257c8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143da0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001257f8  FUN_001257f8 =====

void FUN_001257f8(long param_1)

{
  FUN_00122a68(param_1 + 0x18,PTR_PTR_00144e10 + 8);
  return;
}


// ===== 0012580c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 00125810  FUN_00125810 =====

void FUN_00125810(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00125860  FUN_00125860 =====

void FUN_00125860(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143df0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00125870  FUN_00125870 =====

void FUN_00125870(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00143df0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 001258a0  FUN_001258a0 =====

void FUN_001258a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001258a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 001258ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 001258b0  FUN_001258b0 =====

void FUN_001258b0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00143a78;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_00143ae8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00125964  FUN_00125964 =====

void FUN_00125964(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_00143a78;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_00143ae8;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_0011c550(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00125a14  facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerEvent =====

/* facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerEvent(facebook::react::RNGestureHandlerDetectorEventEmitter::OnGestureHandlerEvent)
   const */

void __thiscall
facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerEvent
          (RNGestureHandlerDetectorEventEmitter *this,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  byte local_c0;
  char local_bf [8];
  undefined7 uStack_b7;
  undefined4 uStack_b0;
  uint uStack_ac;
  long local_a8;
  dynamic adStack_a0 [48];
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = 0x26;
  uStack_ac = uStack_ac & 0xffffff00;
  local_a8 = *param_2;
  uStack_b7 = (undefined7)s_gestureHandlerEvent_0010faa4._8_8_;
  uStack_b0 = CONCAT31(0x746e65,SUB81(s_gestureHandlerEvent_0010faa4._8_8_,7));
  local_bf = (char  [8])s_gestureHandlerEvent_0010faa4._0_8_;
  folly::dynamic::dynamic(adStack_a0,(dynamic *)(param_2 + 1));
  local_50 = (long *)0x0;
                    /* try { // try from 00125a78 to 00125a7f has its CatchHandler @ 00125b58 */
  plVar2 = (long *)operator_new(0x40);
  *plVar2 = (long)&PTR_FUN_00143eb8;
  plVar2[1] = local_a8;
  folly::dynamic::dynamic((dynamic *)(plVar2 + 2),adStack_a0);
                    /* try { // try from 00125aa0 to 00125ab7 has its CatchHandler @ 00125b20 */
  local_50 = plVar2;
  facebook::react::EventEmitter::dispatchEvent(this,&local_c0,local_70,2);
  if (local_50 == local_70) {
    lVar3 = 4;
    plVar2 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00125ae4;
    lVar3 = 5;
    plVar2 = local_50;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00125ae4:
  folly::dynamic::destroy();
  if ((local_c0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_ac,uStack_b0));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125b90  facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerStateChange =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerStateChange(facebook::react::RNGestureHandlerDetectorEventEmitter::OnGestureHandlerStateChange)
   const */

void __thiscall
facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerStateChange
          (RNGestureHandlerDetectorEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  long local_b0;
  undefined4 local_a8;
  dynamic adStack_a0 [48];
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = (char *)operator_new(0x20);
  uVar4 = s_gestureHandlerStateChange_0010f98b._17_8_;
  uVar3 = s_gestureHandlerStateChange_0010f98b._0_8_;
  local_a8 = (undefined4)param_2[1];
  uVar2 = CONCAT17(s_gestureHandlerStateChange_0010f98b[0x10],
                   s_gestureHandlerStateChange_0010f98b._9_7_);
  *(ulong *)(local_c0 + 8) =
       CONCAT71(s_gestureHandlerStateChange_0010f98b._9_7_,s_gestureHandlerStateChange_0010f98b[8]);
  *(undefined8 *)local_c0 = uVar3;
  uStack_c8 = _UNK_00110638;
  local_d0 = _DAT_00110630;
  local_b0 = *param_2;
  *(undefined8 *)(local_c0 + 0x11) = uVar4;
  *(undefined8 *)(local_c0 + 9) = uVar2;
  local_c0[0x19] = '\0';
  folly::dynamic::dynamic(adStack_a0,(dynamic *)(param_2 + 2));
  local_50 = (long *)0x0;
                    /* try { // try from 00125c10 to 00125c17 has its CatchHandler @ 00125cfc */
  plVar5 = (long *)operator_new(0x48);
  *plVar5 = (long)&PTR_FUN_00143f48;
  plVar5[1] = local_b0;
  *(undefined4 *)(plVar5 + 2) = local_a8;
  folly::dynamic::dynamic((dynamic *)(plVar5 + 3),adStack_a0);
                    /* try { // try from 00125c44 to 00125c5b has its CatchHandler @ 00125cc4 */
  local_50 = plVar5;
  facebook::react::EventEmitter::dispatchEvent(this,&local_d0,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00125c88;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_00125c88:
  folly::dynamic::destroy();
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125d34  facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerTouchEvent =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerTouchEvent(facebook::react::RNGestureHandlerDetectorEventEmitter::OnGestureHandlerTouchEvent)
   const */

void __thiscall
facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerTouchEvent
          (RNGestureHandlerDetectorEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong local_110;
  undefined8 uStack_108;
  char *local_100;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined4 local_b0;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_100 = (char *)operator_new(0x20);
  uVar9 = s_gestureHandlerTouchEvent_0010ef4c._16_8_;
  uVar8 = s_gestureHandlerTouchEvent_0010ef4c._0_8_;
  lVar11 = param_2[2];
  lVar3 = param_2[3];
  lVar1 = param_2[4];
  lVar4 = param_2[5];
  *(undefined8 *)(local_100 + 8) = s_gestureHandlerTouchEvent_0010ef4c._8_8_;
  *(undefined8 *)local_100 = uVar8;
  lVar7 = param_2[8];
  lVar2 = param_2[6];
  lVar5 = param_2[7];
  uStack_108 = _UNK_001105c8;
  local_110 = _DAT_001105c0;
  lStack_e8 = param_2[1];
  local_f0 = *param_2;
  *(undefined8 *)(local_100 + 0x10) = uVar9;
  local_100[0x18] = '\0';
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  local_80 = (long *)0x0;
  local_e0 = lVar11;
  lStack_d8 = lVar3;
  local_d0 = lVar1;
  lStack_c8 = lVar4;
  local_c0 = lVar2;
  lStack_b8 = lVar5;
  local_b0 = (int)lVar7;
                    /* try { // try from 00125dd4 to 00125ddb has its CatchHandler @ 00125ed0 */
  local_80 = (long *)operator_new(0x50);
  lVar13 = param_2[1];
  lVar12 = *param_2;
  *local_80 = (long)&PTR_FUN_00143fc8;
  local_80[2] = lVar13;
  local_80[1] = lVar12;
  local_80[3] = lVar11;
  local_80[4] = lVar3;
  local_e0 = 0;
  lStack_d8 = 0;
  local_80[5] = lVar1;
  local_80[6] = lVar4;
  local_80[7] = lVar2;
  local_80[8] = lVar5;
  local_d0 = 0;
  lStack_c8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  *(int *)(local_80 + 9) = (int)lVar7;
                    /* try { // try from 00125e14 to 00125e2b has its CatchHandler @ 00125e98 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_110,local_a0,2);
  if (local_80 == local_a0) {
    lVar11 = 4;
    plVar10 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00125e58;
    lVar11 = 5;
    plVar10 = local_80;
  }
  (**(code **)(*plVar10 + lVar11 * 8))();
LAB_00125e58:
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00125f08  FUN_00125f08 =====

void FUN_00125f08(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00125f4c  facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedEvent =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedEvent(facebook::react::RNGestureHandlerDetectorEventEmitter::OnGestureHandlerReanimatedEvent)
   const */

void __thiscall
facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedEvent
          (RNGestureHandlerDetectorEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  long local_a8;
  dynamic adStack_a0 [48];
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = (char *)operator_new(0x20);
  uStack_b8 = _UNK_00110668;
  local_c0 = _DAT_00110660;
  uVar4 = s_gestureHandlerReanimatedEvent_0010eece._21_8_;
  uVar3 = s_gestureHandlerReanimatedEvent_0010eece._0_8_;
  uVar2 = CONCAT53(s_gestureHandlerReanimatedEvent_0010eece._16_5_,
                   s_gestureHandlerReanimatedEvent_0010eece._13_3_);
  local_a8 = *param_2;
  *(ulong *)(local_b0 + 8) =
       CONCAT35(s_gestureHandlerReanimatedEvent_0010eece._13_3_,
                s_gestureHandlerReanimatedEvent_0010eece._8_5_);
  *(undefined8 *)local_b0 = uVar3;
  *(undefined8 *)(local_b0 + 0x15) = uVar4;
  *(undefined8 *)(local_b0 + 0xd) = uVar2;
  local_b0[0x1d] = '\0';
  folly::dynamic::dynamic(adStack_a0,(dynamic *)(param_2 + 1));
  local_50 = (long *)0x0;
                    /* try { // try from 00125fc0 to 00125fc7 has its CatchHandler @ 001260a0 */
  plVar5 = (long *)operator_new(0x40);
  *plVar5 = (long)&PTR_FUN_00144048;
  plVar5[1] = local_a8;
  folly::dynamic::dynamic((dynamic *)(plVar5 + 2),adStack_a0);
                    /* try { // try from 00125fe8 to 00125fff has its CatchHandler @ 00126068 */
  local_50 = plVar5;
  facebook::react::EventEmitter::dispatchEvent(this,&local_c0,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0012602c;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_0012602c:
  folly::dynamic::destroy();
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001260d8  facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedStateChange =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedStateChange(facebook::react::RNGestureHandlerDetectorEventEmitter::OnGestureHandlerReanimatedStateChange)
   const */

void __thiscall
facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedStateChange
          (RNGestureHandlerDetectorEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  long local_b0;
  undefined4 local_a8;
  dynamic adStack_a0 [48];
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = (char *)operator_new(0x30);
  uVar5 = s_gestureHandlerReanimatedStateCha_0010fb45._24_8_;
  uVar4 = s_gestureHandlerReanimatedStateCha_0010fb45._16_8_;
  uVar3 = s_gestureHandlerReanimatedStateCha_0010fb45._8_8_;
  uVar2 = s_gestureHandlerReanimatedStateCha_0010fb45._0_8_;
  uStack_c8 = _UNK_00110648;
  local_d0 = _DAT_00110640;
  local_c0[0x1f] = 'a';
  local_c0[0x20] = 'n';
  local_c0[0x21] = 'g';
  local_c0[0x22] = 'e';
  local_b0 = *param_2;
  local_a8 = (undefined4)param_2[1];
  local_c0[0x23] = '\0';
  *(undefined8 *)(local_c0 + 8) = uVar3;
  *(undefined8 *)local_c0 = uVar2;
  *(undefined8 *)(local_c0 + 0x18) = uVar5;
  *(undefined8 *)(local_c0 + 0x10) = uVar4;
  folly::dynamic::dynamic(adStack_a0,(dynamic *)(param_2 + 2));
  local_50 = (long *)0x0;
                    /* try { // try from 0012615c to 00126163 has its CatchHandler @ 00126248 */
  plVar6 = (long *)operator_new(0x48);
  *plVar6 = (long)&PTR_FUN_001440c8;
  plVar6[1] = local_b0;
  *(undefined4 *)(plVar6 + 2) = local_a8;
  folly::dynamic::dynamic((dynamic *)(plVar6 + 3),adStack_a0);
                    /* try { // try from 00126190 to 001261a7 has its CatchHandler @ 00126210 */
  local_50 = plVar6;
  facebook::react::EventEmitter::dispatchEvent(this,&local_d0,local_70,2);
  if (local_50 == local_70) {
    lVar7 = 4;
    plVar6 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_001261d4;
    lVar7 = 5;
    plVar6 = local_50;
  }
  (**(code **)(*plVar6 + lVar7 * 8))();
LAB_001261d4:
  folly::dynamic::destroy();
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126280  facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedTouchEvent =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedTouchEvent(facebook::react::RNGestureHandlerDetectorEventEmitter::OnGestureHandlerReanimatedTouchEvent)
   const */

void __thiscall
facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerReanimatedTouchEvent
          (RNGestureHandlerDetectorEventEmitter *this,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong local_110;
  undefined8 uStack_108;
  char *local_100;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  undefined4 local_b0;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_100 = (char *)operator_new(0x30);
  uVar10 = s_gestureHandlerReanimatedTouchEve_0010f875._24_8_;
  uVar9 = s_gestureHandlerReanimatedTouchEve_0010f875._16_8_;
  uVar8 = s_gestureHandlerReanimatedTouchEve_0010f875._0_8_;
  lVar12 = param_2[2];
  lVar3 = param_2[3];
  lVar1 = param_2[4];
  lVar4 = param_2[5];
  lVar7 = param_2[8];
  uStack_108 = _UNK_00110608;
  local_110 = _DAT_00110600;
  lVar2 = param_2[6];
  lVar5 = param_2[7];
  *(undefined8 *)(local_100 + 8) = s_gestureHandlerReanimatedTouchEve_0010f875._8_8_;
  *(undefined8 *)local_100 = uVar8;
  *(undefined8 *)(local_100 + 0x18) = uVar10;
  *(undefined8 *)(local_100 + 0x10) = uVar9;
  lStack_e8 = param_2[1];
  local_f0 = *param_2;
  local_100[0x20] = 'n';
  local_100[0x21] = 't';
  local_100[0x22] = '\0';
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  local_80 = (long *)0x0;
  local_e0 = lVar12;
  lStack_d8 = lVar3;
  local_d0 = lVar1;
  lStack_c8 = lVar4;
  local_c0 = lVar2;
  lStack_b8 = lVar5;
  local_b0 = (int)lVar7;
                    /* try { // try from 00126320 to 00126327 has its CatchHandler @ 0012641c */
  local_80 = (long *)operator_new(0x50);
  lVar14 = param_2[1];
  lVar13 = *param_2;
  *local_80 = (long)&PTR_FUN_00144148;
  local_80[2] = lVar14;
  local_80[1] = lVar13;
  local_80[3] = lVar12;
  local_80[4] = lVar3;
  local_e0 = 0;
  lStack_d8 = 0;
  local_80[5] = lVar1;
  local_80[6] = lVar4;
  local_80[7] = lVar2;
  local_80[8] = lVar5;
  local_d0 = 0;
  lStack_c8 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  *(int *)(local_80 + 9) = (int)lVar7;
                    /* try { // try from 00126360 to 00126377 has its CatchHandler @ 001263e4 */
  facebook::react::EventEmitter::dispatchEvent(this,&local_110,local_a0,2);
  if (local_80 == local_a0) {
    lVar12 = 4;
    plVar11 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_001263a4;
    lVar12 = 5;
    plVar11 = local_80;
  }
  (**(code **)(*plVar11 + lVar12 * 8))();
LAB_001263a4:
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126454  FUN_00126454 =====

void FUN_00126454(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00126498  facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerAnimatedEvent =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerAnimatedEvent(facebook::react::RNGestureHandlerDetectorEventEmitter::OnGestureHandlerAnimatedEvent)
   const */

void __thiscall
facebook::react::RNGestureHandlerDetectorEventEmitter::onGestureHandlerAnimatedEvent
          (RNGestureHandlerDetectorEventEmitter *this,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  long local_a8;
  dynamic adStack_a0 [48];
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = (char *)operator_new(0x20);
  uStack_b8 = _UNK_00110628;
  local_c0 = _DAT_00110620;
  uVar4 = s_gestureHandlerAnimatedEvent_0010f29b._19_8_;
  uVar3 = s_gestureHandlerAnimatedEvent_0010f29b._0_8_;
  uVar2 = CONCAT35(s_gestureHandlerAnimatedEvent_0010f29b._16_3_,
                   s_gestureHandlerAnimatedEvent_0010f29b._11_5_);
  local_a8 = *param_2;
  *(ulong *)(local_b0 + 8) =
       CONCAT53(s_gestureHandlerAnimatedEvent_0010f29b._11_5_,
                s_gestureHandlerAnimatedEvent_0010f29b._8_3_);
  *(undefined8 *)local_b0 = uVar3;
  *(undefined8 *)(local_b0 + 0x13) = uVar4;
  *(undefined8 *)(local_b0 + 0xb) = uVar2;
  local_b0[0x1b] = '\0';
  folly::dynamic::dynamic(adStack_a0,(dynamic *)(param_2 + 1));
  local_50 = (long *)0x0;
                    /* try { // try from 0012650c to 00126513 has its CatchHandler @ 001265ec */
  plVar5 = (long *)operator_new(0x40);
  *plVar5 = (long)&PTR_FUN_001441c8;
  plVar5[1] = local_a8;
  folly::dynamic::dynamic((dynamic *)(plVar5 + 2),adStack_a0);
                    /* try { // try from 00126534 to 0012654b has its CatchHandler @ 001265b4 */
  local_50 = plVar5;
  facebook::react::EventEmitter::dispatchEvent(this,&local_c0,local_70,2);
  if (local_50 == local_70) {
    lVar6 = 4;
    plVar5 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00126578;
    lVar6 = 5;
    plVar5 = local_50;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_00126578:
  folly::dynamic::destroy();
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126624  FUN_00126624 =====

void FUN_00126624(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00143eb8;
  folly::dynamic::destroy();
  return;
}


// ===== 00126634  FUN_00126634 =====

void FUN_00126634(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00143eb8;
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00126664  FUN_00126664 =====

undefined8 * FUN_00126664(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00143eb8;
  puVar1[1] = uVar2;
                    /* try { // try from 00126690 to 00126697 has its CatchHandler @ 001266a8 */
  folly::dynamic::dynamic((dynamic *)(puVar1 + 2),(dynamic *)(param_1 + 0x10));
  return puVar1;
}


// ===== 001266bc  FUN_001266bc =====

void FUN_001266bc(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00143eb8;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  folly::dynamic::dynamic((dynamic *)(param_2 + 2),(dynamic *)(param_1 + 0x10));
  return;
}


// ===== 001266e4  FUN_001266e4 =====

void FUN_001266e4(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 001266ec  FUN_001266ec =====

void FUN_001266ec(void *param_1)

{
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00126714  FUN_00126714 =====

void FUN_00126714(undefined4 *param_1,long param_2,Runtime *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  Value aVStack_50 [16];
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00126754 to 00126783 has its CatchHandler @ 00126864 */
  FUN_001268c0(&local_58,param_3,"handlerTag",param_2 + 8);
  FUN_001268c0(&local_58,param_3,"state",param_2 + 0xc);
                    /* try { // try from 00126784 to 00126793 has its CatchHandler @ 00126850 */
  facebook::jsi::valueFromDynamic(param_3,(dynamic *)(param_2 + 0x10));
                    /* try { // try from 00126794 to 001267c3 has its CatchHandler @ 00126854 */
  uVar2 = __strlen_chk("handlerData",0xc);
  (**(code **)(*(long *)param_3 + 0x108))(&local_40,param_3,"handlerData",uVar2);
                    /* try { // try from 001267cc to 001267df has its CatchHandler @ 00126830 */
  (**(code **)(*(long *)param_3 + 0x1b8))(param_3,&local_58,&local_40,aVStack_50);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  facebook::jsi::Value::~Value(aVStack_50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126898  FUN_00126898 =====

long FUN_00126898(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36RNGestureHandlerDetectorEventEmitter21onGestureHandlerEventENS1_21OnGestureHandlerEventEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001268b4  FUN_001268b4 =====

pointer_____offset_0x10___ * FUN_001268b4(void)

{
  return &PTR_vtable_00143f28;
}


// ===== 001268c0  FUN_001268c0 =====

void FUN_001268c0(undefined8 param_1,long *param_2,char *param_3,int *param_4)

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
                    /* try { // try from 00126934 to 00126947 has its CatchHandler @ 0012698c */
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


// ===== 001269c8  FUN_001269c8 =====

void FUN_001269c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00143f48;
  folly::dynamic::destroy();
  return;
}


// ===== 001269d8  FUN_001269d8 =====

void FUN_001269d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00143f48;
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00126a08  FUN_00126a08 =====

undefined8 * FUN_00126a08(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_00143f48;
  puVar2[1] = uVar3;
  *(undefined4 *)(puVar2 + 2) = uVar1;
                    /* try { // try from 00126a3c to 00126a47 has its CatchHandler @ 00126a58 */
  folly::dynamic::dynamic((dynamic *)(puVar2 + 3),(dynamic *)(param_1 + 0x18));
  return puVar2;
}


// ===== 00126a6c  FUN_00126a6c =====

void FUN_00126a6c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00143f48;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  folly::dynamic::dynamic((dynamic *)(param_2 + 3),(dynamic *)(param_1 + 0x18));
  return;
}


// ===== 00126a9c  FUN_00126a9c =====

void FUN_00126a9c(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 00126aa4  FUN_00126aa4 =====

void FUN_00126aa4(void *param_1)

{
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00126acc  FUN_00126acc =====

void FUN_00126acc(undefined4 *param_1,long param_2,Runtime *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  Value aVStack_50 [16];
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00126b0c to 00126b53 has its CatchHandler @ 00126c34 */
  FUN_001268c0(&local_58,param_3,"handlerTag",param_2 + 8);
  FUN_001268c0(&local_58,param_3,"state",param_2 + 0xc);
  FUN_001268c0(&local_58,param_3,"oldState",param_2 + 0x10);
                    /* try { // try from 00126b54 to 00126b63 has its CatchHandler @ 00126c20 */
  facebook::jsi::valueFromDynamic(param_3,(dynamic *)(param_2 + 0x18));
                    /* try { // try from 00126b64 to 00126b93 has its CatchHandler @ 00126c24 */
  uVar2 = __strlen_chk("handlerData",0xc);
  (**(code **)(*(long *)param_3 + 0x108))(&local_40,param_3,"handlerData",uVar2);
                    /* try { // try from 00126b9c to 00126baf has its CatchHandler @ 00126c00 */
  (**(code **)(*(long *)param_3 + 0x1b8))(param_3,&local_58,&local_40,aVStack_50);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  facebook::jsi::Value::~Value(aVStack_50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00126c68  FUN_00126c68 =====

long FUN_00126c68(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36RNGestureHandlerDetectorEventEmitter27onGestureHandlerStateChangeENS1_27OnGestureHandlerStateChangeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00126c84  FUN_00126c84 =====

pointer_____offset_0x10___ * FUN_00126c84(void)

{
  return &PTR_vtable_00143fa8;
}


// ===== 00126c90  FUN_00126c90 =====

void FUN_00126c90(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00143fc8;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00126ce0  FUN_00126ce0 =====

void FUN_00126ce0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00143fc8;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00126d2c  FUN_00126d2c =====

undefined8 * FUN_00126d2c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00143fc8;
                    /* try { // try from 00126d54 to 00126d5b has its CatchHandler @ 00126d6c */
  FUN_001274ac(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 00126d80  FUN_00126d80 =====

void FUN_00126d80(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00143fc8;
  FUN_001274ac(param_2 + 1,param_1 + 8);
  return;
}


// ===== 00126d9c  FUN_00126d9c =====

void FUN_00126d9c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00126de0  FUN_00126de0 =====

void FUN_00126de0(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00126e20  FUN_00126e20 =====

void FUN_00126e20(undefined4 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  double local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_c8,param_3);
                    /* try { // try from 00126e6c to 00126ecb has its CatchHandler @ 00127330 */
  FUN_001268c0(&local_c8,param_3,"handlerTag",param_2 + 8);
  FUN_001268c0(&local_c8,param_3,"numberOfTouches",param_2 + 0xc);
  FUN_001268c0(&local_c8,param_3,"state",param_2 + 0x10);
  FUN_001268c0(&local_c8,param_3,"eventType",param_2 + 0x14);
                    /* try { // try from 00126ef0 to 00126efb has its CatchHandler @ 00127324 */
  (**(code **)(*param_3 + 0x230))
            (&local_b0,param_3,
             (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) * -0x3333333333333333);
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  local_88 = local_b0;
  if (puVar4 != puVar1) {
    lVar3 = 0;
    do {
      uStack_a8 = puVar4[1];
      local_b0 = (undefined8 *)*puVar4;
      uStack_98 = puVar4[3];
      local_a0 = puVar4[2];
      local_90 = puVar4[4];
                    /* try { // try from 00126f70 to 00126f7b has its CatchHandler @ 00127388 */
      (**(code **)(*param_3 + 0x130))(&local_78,param_3);
      local_b8 = (undefined8 *)CONCAT44(uStack_74,local_78);
                    /* try { // try from 00126f8c to 00126fa3 has its CatchHandler @ 00127448 */
      (**(code **)(*param_3 + 0x108))(&local_80,param_3,&DAT_0010f60e,2);
      local_78 = 3;
      local_70 = (double)(int)local_b0;
                    /* try { // try from 00126fbc to 00126fcf has its CatchHandler @ 0012739c */
      (**(code **)(*param_3 + 0x1b8))(param_3,&local_b8,&local_80,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_80 != (undefined8 *)0x0) {
        (**(code **)*local_80)();
      }
                    /* try { // try from 00126fec to 0012703f has its CatchHandler @ 00127448 */
      FUN_00127618(&local_b8,param_3,&DAT_0010f611,&uStack_a8);
      FUN_00127618(&local_b8,param_3,&DAT_0010fcb2,&local_a0);
      FUN_00127618(&local_b8,param_3,"absoluteX",&uStack_98);
      FUN_00127618(&local_b8,param_3,"absoluteY",&local_90);
      local_78 = 7;
                    /* try { // try from 00127050 to 00127057 has its CatchHandler @ 001273c0 */
      local_70 = (double)(**(code **)(*param_3 + 0x88))(param_3,local_b8);
                    /* try { // try from 00127064 to 00127077 has its CatchHandler @ 001273d0 */
      (**(code **)(*param_3 + 0x268))(param_3,&local_88,lVar3,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_b8 != (undefined8 *)0x0) {
        (**(code **)*local_b8)();
      }
      puVar4 = puVar4 + 5;
      lVar3 = lVar3 + 1;
    } while (puVar4 != puVar1);
  }
                    /* try { // try from 00127098 to 001270af has its CatchHandler @ 00127320 */
  FUN_0012771c(&local_c8,param_3,"allTouches",&local_88);
                    /* try { // try from 001270d4 to 001270df has its CatchHandler @ 0012731c */
  (**(code **)(*param_3 + 0x230))
            (&local_b0,param_3,
             (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x3333333333333333);
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_b8 = local_b0;
  if (puVar4 != puVar1) {
    lVar3 = 0;
    do {
      uStack_a8 = puVar4[1];
      local_b0 = (undefined8 *)*puVar4;
      uStack_98 = puVar4[3];
      local_a0 = puVar4[2];
      local_90 = puVar4[4];
                    /* try { // try from 00127150 to 0012715b has its CatchHandler @ 00127340 */
      (**(code **)(*param_3 + 0x130))(&local_78,param_3);
      local_c0 = (undefined8 *)CONCAT44(uStack_74,local_78);
                    /* try { // try from 0012716c to 00127183 has its CatchHandler @ 001273e0 */
      (**(code **)(*param_3 + 0x108))(&local_80,param_3,&DAT_0010f60e,2);
      local_78 = 3;
      local_70 = (double)(int)local_b0;
                    /* try { // try from 0012719c to 001271af has its CatchHandler @ 00127344 */
      (**(code **)(*param_3 + 0x1b8))(param_3,&local_c0,&local_80,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_80 != (undefined8 *)0x0) {
        (**(code **)*local_80)();
      }
                    /* try { // try from 001271cc to 0012721f has its CatchHandler @ 001273e0 */
      FUN_00127618(&local_c0,param_3,&DAT_0010f611,&uStack_a8);
      FUN_00127618(&local_c0,param_3,&DAT_0010fcb2,&local_a0);
      FUN_00127618(&local_c0,param_3,"absoluteX",&uStack_98);
      FUN_00127618(&local_c0,param_3,"absoluteY",&local_90);
      local_78 = 7;
                    /* try { // try from 00127230 to 00127237 has its CatchHandler @ 00127368 */
      local_70 = (double)(**(code **)(*param_3 + 0x88))(param_3,local_c0);
                    /* try { // try from 00127244 to 00127257 has its CatchHandler @ 00127378 */
      (**(code **)(*param_3 + 0x268))(param_3,&local_b8,lVar3,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_c0 != (undefined8 *)0x0) {
        (**(code **)*local_c0)();
      }
      puVar4 = puVar4 + 5;
      lVar3 = lVar3 + 1;
    } while (puVar4 != puVar1);
  }
                    /* try { // try from 00127278 to 001272ab has its CatchHandler @ 0012732c */
  FUN_0012771c(&local_c8,param_3,"changedTouches",&local_b8);
  FUN_001268c0(&local_c8,param_3,"pointerType",param_2 + 0x48);
  if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)();
  }
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_c8;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00127484  FUN_00127484 =====

long FUN_00127484(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36RNGestureHandlerDetectorEventEmitter26onGestureHandlerTouchEventENS1_26OnGestureHandlerTouchEventEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001274a0  FUN_001274a0 =====

pointer_____offset_0x10___ * FUN_001274a0(void)

{
  return &PTR_vtable_00144028;
}


// ===== 001274ac  FUN_001274ac =====

void FUN_001274ac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *unaff_x25;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar3;
  pvVar4 = (void *)param_2[2];
  uVar1 = param_2[3] - (long)pvVar4;
  if (uVar1 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar1 >> 3) * -0x3333333333333333)) {
                    /* try { // try from 001275a4 to 001275a7 has its CatchHandler @ 001275d0 */
      FUN_001275f0();
      goto LAB_001275a8;
    }
                    /* try { // try from 0012750c to 00127513 has its CatchHandler @ 001275d0 */
    pvVar2 = operator_new(uVar1);
    param_1[2] = pvVar2;
    param_1[3] = pvVar2;
    param_1[4] = (long)pvVar2 + uVar1;
    memcpy(pvVar2,pvVar4,uVar1);
    param_1[3] = (long)pvVar2 + uVar1;
  }
  unaff_x25 = param_1 + 5;
  *unaff_x25 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pvVar4 = (void *)param_2[5];
  uVar1 = param_2[6] - (long)pvVar4;
  if (uVar1 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar1 >> 3) * -0x3333333333333333)) {
LAB_001275a8:
                    /* try { // try from 001275a8 to 001275ab has its CatchHandler @ 001275ac */
      uVar3 = FUN_00127604();
                    /* catch() { ... } // from try @ 00127560 with catch @ 001275ac
                       catch() { ... } // from try @ 001275a8 with catch @ 001275ac */
      pvVar4 = (void *)*unaff_x25;
      if (pvVar4 != (void *)0x0) {
        param_1[6] = pvVar4;
        operator_delete(pvVar4);
      }
      pvVar4 = (void *)param_1[2];
      if (pvVar4 != (void *)0x0) {
        param_1[3] = pvVar4;
        operator_delete(pvVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar3);
    }
                    /* try { // try from 00127560 to 00127567 has its CatchHandler @ 001275ac */
    pvVar2 = operator_new(uVar1);
    param_1[5] = pvVar2;
    param_1[6] = pvVar2;
    param_1[7] = (long)pvVar2 + uVar1;
    memcpy(pvVar2,pvVar4,uVar1);
    param_1[6] = (long)pvVar2 + uVar1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}


// ===== 001275f0  FUN_001275f0 =====

void FUN_001275f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 00127604  FUN_00127604 =====

void FUN_00127604(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 00127618  FUN_00127618 =====

void FUN_00127618(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

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
                    /* try { // try from 00127688 to 0012769b has its CatchHandler @ 001276e0 */
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


// ===== 0012771c  FUN_0012771c =====

void FUN_0012771c(undefined8 param_1,long *param_2,char *param_3,undefined8 *param_4)

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
                    /* try { // try from 00127788 to 0012778f has its CatchHandler @ 00127804 */
  local_50 = (**(code **)(*param_2 + 0x88))(param_2,*param_4);
                    /* try { // try from 0012779c to 001277af has its CatchHandler @ 001277f4 */
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


// ===== 00127840  FUN_00127840 =====

void FUN_00127840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00144048;
  folly::dynamic::destroy();
  return;
}


// ===== 00127850  FUN_00127850 =====

void FUN_00127850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00144048;
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00127880  FUN_00127880 =====

undefined8 * FUN_00127880(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00144048;
  puVar1[1] = uVar2;
                    /* try { // try from 001278ac to 001278b3 has its CatchHandler @ 001278c4 */
  folly::dynamic::dynamic((dynamic *)(puVar1 + 2),(dynamic *)(param_1 + 0x10));
  return puVar1;
}


// ===== 001278d8  FUN_001278d8 =====

void FUN_001278d8(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00144048;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  folly::dynamic::dynamic((dynamic *)(param_2 + 2),(dynamic *)(param_1 + 0x10));
  return;
}


// ===== 00127900  FUN_00127900 =====

void FUN_00127900(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 00127908  FUN_00127908 =====

void FUN_00127908(void *param_1)

{
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00127930  FUN_00127930 =====

void FUN_00127930(undefined4 *param_1,long param_2,Runtime *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  Value aVStack_50 [16];
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00127970 to 0012799f has its CatchHandler @ 00127a80 */
  FUN_001268c0(&local_58,param_3,"handlerTag",param_2 + 8);
  FUN_001268c0(&local_58,param_3,"state",param_2 + 0xc);
                    /* try { // try from 001279a0 to 001279af has its CatchHandler @ 00127a6c */
  facebook::jsi::valueFromDynamic(param_3,(dynamic *)(param_2 + 0x10));
                    /* try { // try from 001279b0 to 001279df has its CatchHandler @ 00127a70 */
  uVar2 = __strlen_chk("handlerData",0xc);
  (**(code **)(*(long *)param_3 + 0x108))(&local_40,param_3,"handlerData",uVar2);
                    /* try { // try from 001279e8 to 001279fb has its CatchHandler @ 00127a4c */
  (**(code **)(*(long *)param_3 + 0x1b8))(param_3,&local_58,&local_40,aVStack_50);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  facebook::jsi::Value::~Value(aVStack_50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00127ab4  FUN_00127ab4 =====

long FUN_00127ab4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36RNGestureHandlerDetectorEventEmitter31onGestureHandlerReanimatedEventENS1_31OnGestureHandlerReanimatedEventEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00127ad0  FUN_00127ad0 =====

pointer_____offset_0x10___ * FUN_00127ad0(void)

{
  return &PTR_vtable_001440a8;
}


// ===== 00127adc  FUN_00127adc =====

void FUN_00127adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001440c8;
  folly::dynamic::destroy();
  return;
}


// ===== 00127aec  FUN_00127aec =====

void FUN_00127aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001440c8;
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00127b1c  FUN_00127b1c =====

undefined8 * FUN_00127b1c(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x48);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_001440c8;
  puVar2[1] = uVar3;
  *(undefined4 *)(puVar2 + 2) = uVar1;
                    /* try { // try from 00127b50 to 00127b5b has its CatchHandler @ 00127b6c */
  folly::dynamic::dynamic((dynamic *)(puVar2 + 3),(dynamic *)(param_1 + 0x18));
  return puVar2;
}


// ===== 00127b80  FUN_00127b80 =====

void FUN_00127b80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_001440c8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  folly::dynamic::dynamic((dynamic *)(param_2 + 3),(dynamic *)(param_1 + 0x18));
  return;
}


// ===== 00127bb0  FUN_00127bb0 =====

void FUN_00127bb0(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 00127bb8  FUN_00127bb8 =====

void FUN_00127bb8(void *param_1)

{
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 00127be0  FUN_00127be0 =====

void FUN_00127be0(undefined4 *param_1,long param_2,Runtime *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  Value aVStack_50 [16];
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 00127c20 to 00127c67 has its CatchHandler @ 00127d48 */
  FUN_001268c0(&local_58,param_3,"handlerTag",param_2 + 8);
  FUN_001268c0(&local_58,param_3,"state",param_2 + 0xc);
  FUN_001268c0(&local_58,param_3,"oldState",param_2 + 0x10);
                    /* try { // try from 00127c68 to 00127c77 has its CatchHandler @ 00127d34 */
  facebook::jsi::valueFromDynamic(param_3,(dynamic *)(param_2 + 0x18));
                    /* try { // try from 00127c78 to 00127ca7 has its CatchHandler @ 00127d38 */
  uVar2 = __strlen_chk("handlerData",0xc);
  (**(code **)(*(long *)param_3 + 0x108))(&local_40,param_3,"handlerData",uVar2);
                    /* try { // try from 00127cb0 to 00127cc3 has its CatchHandler @ 00127d14 */
  (**(code **)(*(long *)param_3 + 0x1b8))(param_3,&local_58,&local_40,aVStack_50);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  facebook::jsi::Value::~Value(aVStack_50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00127d7c  FUN_00127d7c =====

long FUN_00127d7c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36RNGestureHandlerDetectorEventEmitter37onGestureHandlerReanimatedStateChangeENS1_37OnGestureHandlerReanimatedStateChangeEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00127d98  FUN_00127d98 =====

pointer_____offset_0x10___ * FUN_00127d98(void)

{
  return &PTR_vtable_00144128;
}


// ===== 00127da4  FUN_00127da4 =====

void FUN_00127da4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00144148;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00127df4  FUN_00127df4 =====

void FUN_00127df4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[6];
  *param_1 = &PTR_FUN_00144148;
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00127e40  FUN_00127e40 =====

undefined8 * FUN_00127e40(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  *puVar1 = &PTR_FUN_00144148;
                    /* try { // try from 00127e68 to 00127e6f has its CatchHandler @ 00127e80 */
  FUN_001285c0(puVar1 + 1,param_1 + 8);
  return puVar1;
}


// ===== 00127e94  FUN_00127e94 =====

void FUN_00127e94(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00144148;
  FUN_001285c0(param_2 + 1,param_1 + 8);
  return;
}


// ===== 00127eb0  FUN_00127eb0 =====

void FUN_00127eb0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00127ef4  FUN_00127ef4 =====

void FUN_00127ef4(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)((long)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00127f34  FUN_00127f34 =====

void FUN_00127f34(undefined4 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  double local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (**(code **)(*param_3 + 0x130))(&local_c8,param_3);
                    /* try { // try from 00127f80 to 00127fdf has its CatchHandler @ 00128444 */
  FUN_001268c0(&local_c8,param_3,"handlerTag",param_2 + 8);
  FUN_001268c0(&local_c8,param_3,"numberOfTouches",param_2 + 0xc);
  FUN_001268c0(&local_c8,param_3,"state",param_2 + 0x10);
  FUN_001268c0(&local_c8,param_3,"eventType",param_2 + 0x14);
                    /* try { // try from 00128004 to 0012800f has its CatchHandler @ 00128438 */
  (**(code **)(*param_3 + 0x230))
            (&local_b0,param_3,
             (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3) * -0x3333333333333333);
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  local_88 = local_b0;
  if (puVar4 != puVar1) {
    lVar3 = 0;
    do {
      uStack_a8 = puVar4[1];
      local_b0 = (undefined8 *)*puVar4;
      uStack_98 = puVar4[3];
      local_a0 = puVar4[2];
      local_90 = puVar4[4];
                    /* try { // try from 00128084 to 0012808f has its CatchHandler @ 0012849c */
      (**(code **)(*param_3 + 0x130))(&local_78,param_3);
      local_b8 = (undefined8 *)CONCAT44(uStack_74,local_78);
                    /* try { // try from 001280a0 to 001280b7 has its CatchHandler @ 0012855c */
      (**(code **)(*param_3 + 0x108))(&local_80,param_3,&DAT_0010f60e,2);
      local_78 = 3;
      local_70 = (double)(int)local_b0;
                    /* try { // try from 001280d0 to 001280e3 has its CatchHandler @ 001284b0 */
      (**(code **)(*param_3 + 0x1b8))(param_3,&local_b8,&local_80,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_80 != (undefined8 *)0x0) {
        (**(code **)*local_80)();
      }
                    /* try { // try from 00128100 to 00128153 has its CatchHandler @ 0012855c */
      FUN_00127618(&local_b8,param_3,&DAT_0010f611,&uStack_a8);
      FUN_00127618(&local_b8,param_3,&DAT_0010fcb2,&local_a0);
      FUN_00127618(&local_b8,param_3,"absoluteX",&uStack_98);
      FUN_00127618(&local_b8,param_3,"absoluteY",&local_90);
      local_78 = 7;
                    /* try { // try from 00128164 to 0012816b has its CatchHandler @ 001284d4 */
      local_70 = (double)(**(code **)(*param_3 + 0x88))(param_3,local_b8);
                    /* try { // try from 00128178 to 0012818b has its CatchHandler @ 001284e4 */
      (**(code **)(*param_3 + 0x268))(param_3,&local_88,lVar3,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_b8 != (undefined8 *)0x0) {
        (**(code **)*local_b8)();
      }
      puVar4 = puVar4 + 5;
      lVar3 = lVar3 + 1;
    } while (puVar4 != puVar1);
  }
                    /* try { // try from 001281ac to 001281c3 has its CatchHandler @ 00128434 */
  FUN_0012771c(&local_c8,param_3,"allTouches",&local_88);
                    /* try { // try from 001281e8 to 001281f3 has its CatchHandler @ 00128430 */
  (**(code **)(*param_3 + 0x230))
            (&local_b0,param_3,
             (*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 3) * -0x3333333333333333);
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_b8 = local_b0;
  if (puVar4 != puVar1) {
    lVar3 = 0;
    do {
      uStack_a8 = puVar4[1];
      local_b0 = (undefined8 *)*puVar4;
      uStack_98 = puVar4[3];
      local_a0 = puVar4[2];
      local_90 = puVar4[4];
                    /* try { // try from 00128264 to 0012826f has its CatchHandler @ 00128454 */
      (**(code **)(*param_3 + 0x130))(&local_78,param_3);
      local_c0 = (undefined8 *)CONCAT44(uStack_74,local_78);
                    /* try { // try from 00128280 to 00128297 has its CatchHandler @ 001284f4 */
      (**(code **)(*param_3 + 0x108))(&local_80,param_3,&DAT_0010f60e,2);
      local_78 = 3;
      local_70 = (double)(int)local_b0;
                    /* try { // try from 001282b0 to 001282c3 has its CatchHandler @ 00128458 */
      (**(code **)(*param_3 + 0x1b8))(param_3,&local_c0,&local_80,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_80 != (undefined8 *)0x0) {
        (**(code **)*local_80)();
      }
                    /* try { // try from 001282e0 to 00128333 has its CatchHandler @ 001284f4 */
      FUN_00127618(&local_c0,param_3,&DAT_0010f611,&uStack_a8);
      FUN_00127618(&local_c0,param_3,&DAT_0010fcb2,&local_a0);
      FUN_00127618(&local_c0,param_3,"absoluteX",&uStack_98);
      FUN_00127618(&local_c0,param_3,"absoluteY",&local_90);
      local_78 = 7;
                    /* try { // try from 00128344 to 0012834b has its CatchHandler @ 0012847c */
      local_70 = (double)(**(code **)(*param_3 + 0x88))(param_3,local_c0);
                    /* try { // try from 00128358 to 0012836b has its CatchHandler @ 0012848c */
      (**(code **)(*param_3 + 0x268))(param_3,&local_b8,lVar3,&local_78);
      facebook::jsi::Value::~Value((Value *)&local_78);
      if (local_c0 != (undefined8 *)0x0) {
        (**(code **)*local_c0)();
      }
      puVar4 = puVar4 + 5;
      lVar3 = lVar3 + 1;
    } while (puVar4 != puVar1);
  }
                    /* try { // try from 0012838c to 001283bf has its CatchHandler @ 00128440 */
  FUN_0012771c(&local_c8,param_3,"changedTouches",&local_b8);
  FUN_001268c0(&local_c8,param_3,"pointerType",param_2 + 0x48);
  if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)();
  }
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)();
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_c8;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00128598  FUN_00128598 =====

long FUN_00128598(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36RNGestureHandlerDetectorEventEmitter36onGestureHandlerReanimatedTouchEventENS1_36OnGestureHandlerReanimatedTouchEventEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001285b4  FUN_001285b4 =====

pointer_____offset_0x10___ * FUN_001285b4(void)

{
  return &PTR_vtable_001441a8;
}


// ===== 001285c0  FUN_001285c0 =====

void FUN_001285c0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *unaff_x25;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  uVar3 = *param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar3;
  pvVar4 = (void *)param_2[2];
  uVar1 = param_2[3] - (long)pvVar4;
  if (uVar1 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar1 >> 3) * -0x3333333333333333)) {
                    /* try { // try from 001286b8 to 001286bb has its CatchHandler @ 001286e4 */
      FUN_00128704();
      goto LAB_001286bc;
    }
                    /* try { // try from 00128620 to 00128627 has its CatchHandler @ 001286e4 */
    pvVar2 = operator_new(uVar1);
    param_1[2] = pvVar2;
    param_1[3] = pvVar2;
    param_1[4] = (long)pvVar2 + uVar1;
    memcpy(pvVar2,pvVar4,uVar1);
    param_1[3] = (long)pvVar2 + uVar1;
  }
  unaff_x25 = param_1 + 5;
  *unaff_x25 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pvVar4 = (void *)param_2[5];
  uVar1 = param_2[6] - (long)pvVar4;
  if (uVar1 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar1 >> 3) * -0x3333333333333333)) {
LAB_001286bc:
                    /* try { // try from 001286bc to 001286bf has its CatchHandler @ 001286c0 */
      uVar3 = FUN_00128718();
                    /* catch() { ... } // from try @ 00128674 with catch @ 001286c0
                       catch() { ... } // from try @ 001286bc with catch @ 001286c0 */
      pvVar4 = (void *)*unaff_x25;
      if (pvVar4 != (void *)0x0) {
        param_1[6] = pvVar4;
        operator_delete(pvVar4);
      }
      pvVar4 = (void *)param_1[2];
      if (pvVar4 != (void *)0x0) {
        param_1[3] = pvVar4;
        operator_delete(pvVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar3);
    }
                    /* try { // try from 00128674 to 0012867b has its CatchHandler @ 001286c0 */
    pvVar2 = operator_new(uVar1);
    param_1[5] = pvVar2;
    param_1[6] = pvVar2;
    param_1[7] = (long)pvVar2 + uVar1;
    memcpy(pvVar2,pvVar4,uVar1);
    param_1[6] = (long)pvVar2 + uVar1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}


// ===== 00128704  FUN_00128704 =====

void FUN_00128704(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 00128718  FUN_00128718 =====

void FUN_00128718(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 0012872c  FUN_0012872c =====

void FUN_0012872c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001441c8;
  folly::dynamic::destroy();
  return;
}


// ===== 0012873c  FUN_0012873c =====

void FUN_0012873c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_001441c8;
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 0012876c  FUN_0012876c =====

undefined8 * FUN_0012876c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_001441c8;
  puVar1[1] = uVar2;
                    /* try { // try from 00128798 to 0012879f has its CatchHandler @ 001287b0 */
  folly::dynamic::dynamic((dynamic *)(puVar1 + 2),(dynamic *)(param_1 + 0x10));
  return puVar1;
}


// ===== 001287c4  FUN_001287c4 =====

void FUN_001287c4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_001441c8;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  folly::dynamic::dynamic((dynamic *)(param_2 + 2),(dynamic *)(param_1 + 0x10));
  return;
}


// ===== 001287ec  FUN_001287ec =====

void FUN_001287ec(void)

{
  folly::dynamic::destroy();
  return;
}


// ===== 001287f4  FUN_001287f4 =====

void FUN_001287f4(void *param_1)

{
  folly::dynamic::destroy();
  operator_delete(param_1);
  return;
}


// ===== 0012881c  FUN_0012881c =====

void FUN_0012881c(undefined4 *param_1,long param_2,Runtime *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  Value aVStack_50 [16];
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_3 + 0x130))(&local_58,param_3);
                    /* try { // try from 0012885c to 0012888b has its CatchHandler @ 0012896c */
  FUN_001268c0(&local_58,param_3,"handlerTag",param_2 + 8);
  FUN_001268c0(&local_58,param_3,"state",param_2 + 0xc);
                    /* try { // try from 0012888c to 0012889b has its CatchHandler @ 00128958 */
  facebook::jsi::valueFromDynamic(param_3,(dynamic *)(param_2 + 0x10));
                    /* try { // try from 0012889c to 001288cb has its CatchHandler @ 0012895c */
  uVar2 = __strlen_chk("handlerData",0xc);
  (**(code **)(*(long *)param_3 + 0x108))(&local_40,param_3,"handlerData",uVar2);
                    /* try { // try from 001288d4 to 001288e7 has its CatchHandler @ 00128938 */
  (**(code **)(*(long *)param_3 + 0x1b8))(param_3,&local_58,&local_40,aVStack_50);
  if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)();
  }
  facebook::jsi::Value::~Value(aVStack_50);
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = local_58;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001289a0  FUN_001289a0 =====

long FUN_001289a0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZNK8facebook5react36RNGestureHandlerDetectorEventEmitter29onGestureHandlerAnimatedEventENS1_29OnGestureHandlerAnimatedEventEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 001289bc  FUN_001289bc =====

pointer_____offset_0x10___ * FUN_001289bc(void)

{
  return &PTR_vtable_00144228;
}


// ===== 001289c8  facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps =====

/* facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps(facebook::react::PropsParserContext
   const&, facebook::react::RNGestureHandlerButtonProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps
          (RNGestureHandlerButtonProps *this,PropsParserContext *param_1,
          RNGestureHandlerButtonProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  function *in_x4;
  long lVar5;
  uint local_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  ulong local_88;
  long *local_70;
  long local_58;
  
  puVar4 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 00128a08 to 00128a17 has its CatchHandler @ 00129624 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((uint *)local_70 == &local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00128a44;
    lVar5 = 5;
    puVar4 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar4 + lVar5 * 8))();
LAB_00128a44:
  local_90._0_1_ = 1;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 00128a54 to 00128a77 has its CatchHandler @ 0012961c */
  bVar2 = FUN_0012965c(param_2);
  local_90._0_1_ = 0;
  this[0x6e0] = (RNGestureHandlerButtonProps)(bVar2 & 1);
                    /* try { // try from 00128a84 to 00128aa7 has its CatchHandler @ 00129614 */
  bVar2 = FUN_0012965c(param_2);
  local_90._0_1_ = 0;
  this[0x6e1] = (RNGestureHandlerButtonProps)(bVar2 & 1);
                    /* try { // try from 00128ab4 to 00128ad7 has its CatchHandler @ 0012960c */
  bVar2 = FUN_0012965c(param_2);
  this[0x6e2] = (RNGestureHandlerButtonProps)(bVar2 & 1);
  local_90 = CONCAT31(local_90._1_3_,1);
                    /* try { // try from 00128ae8 to 00128b0b has its CatchHandler @ 00129604 */
  bVar2 = FUN_0012965c(param_2);
  local_90 = 0;
  this[0x6e3] = (RNGestureHandlerButtonProps)(bVar2 & 1);
                    /* try { // try from 00128b18 to 00128b33 has its CatchHandler @ 001295fc */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x6e4) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128b3c to 00128b5f has its CatchHandler @ 001295f4 */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x6e8) = uVar3;
  local_90 = local_90 & 0xffffff00;
                    /* try { // try from 00128b68 to 00128b8b has its CatchHandler @ 001295ec */
  bVar2 = FUN_0012965c(param_2);
  this[0x6ec] = (RNGestureHandlerButtonProps)(bVar2 & 1);
  local_90 = 3;
                    /* try { // try from 00128b9c to 00128bab has its CatchHandler @ 001295e4 */
  uVar3 = FUN_00129bb0();
  *(undefined4 *)(this + 0x6f0) = uVar3;
  local_90 = 0x32;
                    /* try { // try from 00128bb8 to 00128bdb has its CatchHandler @ 001295dc */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x6f4) = uVar3;
  local_90 = 100;
                    /* try { // try from 00128be8 to 00128c0b has its CatchHandler @ 001295d4 */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x6f8) = uVar3;
  local_90 = 0xffffffff;
                    /* try { // try from 00128c18 to 00128c3b has its CatchHandler @ 001295cc */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x6fc) = uVar3;
  local_90 = 0xffffffff;
                    /* try { // try from 00128c44 to 00128c67 has its CatchHandler @ 001295c4 */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x700) = uVar3;
  local_90 = local_90 & 0xffffff00;
                    /* try { // try from 00128c70 to 00128c93 has its CatchHandler @ 001295bc */
  bVar2 = FUN_0012965c(param_2);
  this[0x704] = (RNGestureHandlerButtonProps)(bVar2 & 1);
  local_90 = 0x3f800000;
                    /* try { // try from 00128ca4 to 00128cbb has its CatchHandler @ 001295b4 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x708) = uVar3;
  local_90 = 0x3f800000;
                    /* try { // try from 00128cc4 to 00128cdb has its CatchHandler @ 001295ac */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x70c) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128ce4 to 00128cfb has its CatchHandler @ 001295a4 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x710) = uVar3;
  local_90 = 0xbf800000;
                    /* try { // try from 00128d08 to 00128d1f has its CatchHandler @ 0012959c */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x714) = uVar3;
  local_90 = 0xbf800000;
                    /* try { // try from 00128d28 to 00128d3f has its CatchHandler @ 00129594 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x718) = uVar3;
  local_90 = 0xbf800000;
                    /* try { // try from 00128d4c to 00128d63 has its CatchHandler @ 0012958c */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x71c) = uVar3;
  local_90 = 0x32;
                    /* try { // try from 00128d70 to 00128d93 has its CatchHandler @ 00129584 */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x720) = uVar3;
  local_90 = 100;
                    /* try { // try from 00128da0 to 00128dc3 has its CatchHandler @ 0012957c */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x724) = uVar3;
  local_90 = 0x3f800000;
                    /* try { // try from 00128dd0 to 00128de7 has its CatchHandler @ 00129574 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x728) = uVar3;
  local_90 = 0x3f800000;
                    /* try { // try from 00128df0 to 00128e07 has its CatchHandler @ 0012956c */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x72c) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128e10 to 00128e27 has its CatchHandler @ 00129564 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x730) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128e30 to 00128e4b has its CatchHandler @ 0012955c */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x734) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128e54 to 00128e6b has its CatchHandler @ 00129554 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x738) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128e74 to 00128e8f has its CatchHandler @ 0012954c */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x73c) = uVar3;
  local_90 = 0x6c6f730a;
  uStack_8c = 0x69;
  uStack_8b = 100;
                    /* try { // try from 00128eb0 to 00128ecb has its CatchHandler @ 00129544 */
  FUN_00129f10(this + 0x740);
  local_88 = local_88 & 0xffffffffffffff00;
  local_90 = 0x7369760e;
  uStack_8c = 0x69;
  uStack_8b = 0x6c62;
  uStack_89 = 0x65;
                    /* try { // try from 00128ef0 to 00128f0b has its CatchHandler @ 00129534 */
  FUN_00129f10(this + 0x758);
  local_90 = 0;
                    /* try { // try from 00128f10 to 00128f27 has its CatchHandler @ 0012952c */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x770) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128f30 to 00128f47 has its CatchHandler @ 00129524 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x774) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128f50 to 00128f67 has its CatchHandler @ 0012951c */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x778) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128f70 to 00128f87 has its CatchHandler @ 00129514 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x77c) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128f90 to 00128fa7 has its CatchHandler @ 0012950c */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x780) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128fb0 to 00128fc7 has its CatchHandler @ 00129504 */
  uVar3 = FUN_00129d64();
  *(undefined4 *)(this + 0x784) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128fd0 to 00128feb has its CatchHandler @ 001294fc */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x788) = uVar3;
  local_90 = 0;
                    /* try { // try from 00128ff4 to 0012900f has its CatchHandler @ 001294f4 */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x78c) = uVar3;
  local_90 = 0;
                    /* try { // try from 00129018 to 00129033 has its CatchHandler @ 001294ec */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x790) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012903c to 00129057 has its CatchHandler @ 001294e4 */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x794) = uVar3;
  local_90 = 0;
                    /* try { // try from 00129060 to 0012907b has its CatchHandler @ 001294dc */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x798) = uVar3;
  local_90 = 0;
                    /* try { // try from 00129084 to 0012909f has its CatchHandler @ 001294d4 */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x79c) = uVar3;
  local_90 = 0;
                    /* try { // try from 001290a8 to 001290c3 has its CatchHandler @ 001294cc */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x7a0) = uVar3;
  local_90 = 0;
                    /* try { // try from 001290cc to 001290e7 has its CatchHandler @ 001294c4 */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x7a4) = uVar3;
  local_90 = 0;
                    /* try { // try from 001290f0 to 0012910b has its CatchHandler @ 001294bc */
  uVar3 = FUN_00129828(param_2);
  *(undefined4 *)(this + 0x7a8) = uVar3;
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 00129118 to 00129133 has its CatchHandler @ 001294b0 */
  FUN_0012a180(this + 0x7b0);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 00129144 to 0012915f has its CatchHandler @ 001294a4 */
  FUN_0012a180(this + 0x7e0);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 00129170 to 0012918b has its CatchHandler @ 00129498 */
  FUN_0012a180(this + 0x810);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012919c to 001291b7 has its CatchHandler @ 0012948c */
  FUN_0012a180(this + 0x840);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 001291c8 to 001291e3 has its CatchHandler @ 00129480 */
  FUN_0012a180(this + 0x870);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 001291f4 to 0012920f has its CatchHandler @ 00129474 */
  FUN_0012a180(this + 0x8a0);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 00129220 to 0012923b has its CatchHandler @ 00129468 */
  FUN_0012a180(this + 0x8d0);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012924c to 00129267 has its CatchHandler @ 0012945c */
  FUN_0012a180(this + 0x900);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 00129278 to 00129293 has its CatchHandler @ 001293c8 */
  FUN_0012a180(this + 0x930);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 001292a4 to 001292bf has its CatchHandler @ 001293b4 */
  FUN_0012a180(this + 0x960);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 001292d0 to 001292eb has its CatchHandler @ 001293a0 */
  FUN_0012a180(this + 0x990);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 001292fc to 00129317 has its CatchHandler @ 0012938c */
  FUN_0012a180(this + 0x9c0);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 00129328 to 00129343 has its CatchHandler @ 00129378 */
  FUN_0012a180(this + 0x9f0);
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012965c  FUN_0012965c =====

void FUN_0012965c(undefined8 param_1,char *param_2,char *param_3,char *param_4,char *param_5,
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
    uVar3 = FUN_0012e240();
    if ((uVar3 & 1) == 0) {
      local_60[0] = *param_5;
    }
    else {
                    /* try { // try from 001296ec to 001296f7 has its CatchHandler @ 00129708 */
      FUN_0012e27c(lVar2,local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60[0] != '\0');
}


// ===== 00129828  FUN_00129828 =====

void FUN_00129828(undefined4 *param_1,char *param_2,char *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_2,param_3,(char *)0x0);
  if (lVar3 == 0) {
    uVar2 = *param_4;
  }
  else {
    uVar4 = FUN_0012e240();
    if ((uVar4 & 1) == 0) {
      uVar2 = *param_5;
    }
    else {
      local_4c = 0;
                    /* try { // try from 001298b8 to 001298c3 has its CatchHandler @ 001298d4 */
      FUN_0012e5e8(*(undefined8 *)(param_1 + 2),*param_1,lVar3,&local_4c);
      uVar2 = local_4c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 001299f4  FUN_001299f4 =====

void FUN_001299f4(undefined8 param_1,char *param_2,char *param_3,uint *param_4,uint *param_5,
                 char *param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,param_3,param_6);
  if (lVar2 == 0) {
    uVar3 = (ulong)*param_4;
  }
  else {
    uVar3 = FUN_0012e240();
    if ((uVar3 & 1) == 0) {
      uVar3 = (ulong)*param_5;
    }
    else {
                    /* try { // try from 00129a7c to 00129a83 has its CatchHandler @ 00129a90 */
      uVar3 = FUN_0013abac(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 00129bb0  FUN_00129bb0 =====

void FUN_00129bb0(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"pointerEvents",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_0012e240();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 00129c28 to 00129c33 has its CatchHandler @ 00129c44 */
      FUN_0013ad44(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 00129d64  FUN_00129d64 =====

void FUN_00129d64(char *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,param_2,(char *)0x0);
  if (lVar2 == 0) {
    uVar5 = *param_3;
  }
  else {
    uVar3 = FUN_0012e240();
    if ((uVar3 & 1) == 0) {
      uVar5 = *param_4;
    }
    else {
                    /* try { // try from 00129ddc to 00129de3 has its CatchHandler @ 00129df0 */
      uVar5 = FUN_00134178(lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 00129f10  FUN_00129f10 =====

void FUN_00129f10(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,char *param_2,char *param_3,byte *param_4,byte *param_5)

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
  lVar2 = facebook::react::RawProps::at(param_2,param_3,(char *)0x0);
  if (lVar2 == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_4 + 8);
        uVar7 = *(undefined8 *)param_4;
        uVar6 = *(undefined8 *)(param_4 + 0x10);
LAB_00129f74:
        *(undefined8 *)(param_1 + 8) = uVar8;
        *(undefined8 *)param_1 = uVar7;
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        return;
      }
      goto LAB_0012a178;
    }
    uVar3 = *(ulong *)(param_4 + 8);
    pcVar4 = *(char **)(param_4 + 0x10);
  }
  else {
    uVar3 = FUN_0012e240();
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 00129fd8 to 00129fe3 has its CatchHandler @ 0012a024 */
      FUN_0013aec4(lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_0012a178;
    }
    if ((*param_5 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        uVar8 = *(undefined8 *)(param_5 + 8);
        uVar7 = *(undefined8 *)param_5;
        uVar6 = *(undefined8 *)(param_5 + 0x10);
        goto LAB_00129f74;
      }
      goto LAB_0012a178;
    }
    uVar3 = *(ulong *)(param_5 + 8);
    pcVar4 = *(char **)(param_5 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external(param_1,pcVar4,uVar3);
    return;
  }
LAB_0012a178:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a180  FUN_0012a180 =====

void FUN_0012a180(dynamic *param_1,char *param_2,char *param_3,dynamic *param_4,dynamic *param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x28);
  lVar1 = facebook::react::RawProps::at(param_2,param_3,(char *)0x0);
  if (lVar1 == 0) {
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  else {
    uVar2 = FUN_0012e240();
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
                    /* try { // try from 0012a208 to 0012a213 has its CatchHandler @ 0012a258 */
      FUN_0013af30(lVar1,param_1);
      if (*(long *)(lVar4 + 0x28) == lVar3) {
        return;
      }
      goto LAB_0012a384;
    }
    lVar4 = *(long *)(lVar4 + 0x28);
    param_4 = param_5;
  }
  if (lVar4 == lVar3) {
    folly::dynamic::dynamic(param_1,param_4);
    return;
  }
LAB_0012a384:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012a38c  facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps =====

/* facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps(facebook::react::PropsParserContext
   const&, facebook::react::RNGestureHandlerButtonProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNGestureHandlerButtonProps::RNGestureHandlerButtonProps
          (RNGestureHandlerButtonProps *this,PropsParserContext *param_1,
          RNGestureHandlerButtonProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  uint local_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  ulong local_88;
  long *local_70;
  long local_58;
  
  puVar4 = &local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0012a3c8 to 0012a3eb has its CatchHandler @ 0012b000 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00144dd8 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((uint *)local_70 == &local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0012a418;
    lVar5 = 5;
    puVar4 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar4 + lVar5 * 8))();
LAB_0012a418:
  local_90._0_1_ = 1;
  *(undefined **)this = PTR_vtable_00144dd0 + 0x20;
                    /* try { // try from 0012a430 to 0012a453 has its CatchHandler @ 0012aff8 */
  bVar2 = FUN_0012965c(param_1,param_3,"exclusive",param_2 + 0x6e0,&local_90,0,0);
  local_90._0_1_ = 0;
  this[0x6e0] = (RNGestureHandlerButtonProps)(bVar2 & 1);
                    /* try { // try from 0012a460 to 0012a483 has its CatchHandler @ 0012aff0 */
  bVar2 = FUN_0012965c(param_1,param_3,"foreground",param_2 + 0x6e1,&local_90,0,0);
  local_90._0_1_ = 0;
  this[0x6e1] = (RNGestureHandlerButtonProps)(bVar2 & 1);
                    /* try { // try from 0012a490 to 0012a4b3 has its CatchHandler @ 0012afe8 */
  bVar2 = FUN_0012965c(param_1,param_3,"borderless",param_2 + 0x6e2,&local_90,0,0);
  this[0x6e2] = (RNGestureHandlerButtonProps)(bVar2 & 1);
  local_90 = CONCAT31(local_90._1_3_,1);
                    /* try { // try from 0012a4c4 to 0012a4e7 has its CatchHandler @ 0012afe0 */
  bVar2 = FUN_0012965c(param_1,param_3,"enabled",param_2 + 0x6e3,&local_90,0,0);
  local_90 = 0;
  this[0x6e3] = (RNGestureHandlerButtonProps)(bVar2 & 1);
                    /* try { // try from 0012a4f4 to 0012a50f has its CatchHandler @ 0012afd8 */
  uVar3 = FUN_00129828(param_1,param_3,"rippleColor",param_2 + 0x6e4,&local_90);
  *(undefined4 *)(this + 0x6e4) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a518 to 0012a53b has its CatchHandler @ 0012afd0 */
  uVar3 = FUN_001299f4(param_1,param_3,"rippleRadius",param_2 + 0x6e8,&local_90,0,0);
  *(undefined4 *)(this + 0x6e8) = uVar3;
  local_90 = local_90 & 0xffffff00;
                    /* try { // try from 0012a544 to 0012a567 has its CatchHandler @ 0012afc8 */
  bVar2 = FUN_0012965c(param_1,param_3,"touchSoundDisabled",param_2 + 0x6ec,&local_90,0,0);
  this[0x6ec] = (RNGestureHandlerButtonProps)(bVar2 & 1);
  local_90 = 3;
                    /* try { // try from 0012a578 to 0012a587 has its CatchHandler @ 0012afc0 */
  uVar3 = FUN_00129bb0(param_3,param_2 + 0x6f0,&local_90);
  *(undefined4 *)(this + 0x6f0) = uVar3;
  local_90 = 0x32;
                    /* try { // try from 0012a594 to 0012a5b7 has its CatchHandler @ 0012afb8 */
  uVar3 = FUN_001299f4(param_1,param_3,"tapAnimationInDuration",param_2 + 0x6f4,&local_90,0,0);
  *(undefined4 *)(this + 0x6f4) = uVar3;
  local_90 = 100;
                    /* try { // try from 0012a5c4 to 0012a5e7 has its CatchHandler @ 0012afb0 */
  uVar3 = FUN_001299f4(param_1,param_3,"tapAnimationOutDuration",param_2 + 0x6f8,&local_90,0,0);
  *(undefined4 *)(this + 0x6f8) = uVar3;
  local_90 = 0xffffffff;
                    /* try { // try from 0012a5f4 to 0012a617 has its CatchHandler @ 0012afa8 */
  uVar3 = FUN_001299f4(param_1,param_3,"longPressDuration",param_2 + 0x6fc,&local_90,0,0);
  *(undefined4 *)(this + 0x6fc) = uVar3;
  local_90 = 0xffffffff;
                    /* try { // try from 0012a620 to 0012a643 has its CatchHandler @ 0012afa0 */
  uVar3 = FUN_001299f4(param_1,param_3,"longPressAnimationOutDuration",param_2 + 0x700,&local_90,0,0
                      );
  *(undefined4 *)(this + 0x700) = uVar3;
  local_90 = local_90 & 0xffffff00;
                    /* try { // try from 0012a64c to 0012a66f has its CatchHandler @ 0012af98 */
  bVar2 = FUN_0012965c(param_1,param_3,"needsOffscreenAlphaCompositing",param_2 + 0x704,&local_90,0,
                       0);
  this[0x704] = (RNGestureHandlerButtonProps)(bVar2 & 1);
  local_90 = 0x3f800000;
                    /* try { // try from 0012a680 to 0012a697 has its CatchHandler @ 0012af90 */
  uVar3 = FUN_00129d64(param_3,"activeOpacity",param_2 + 0x708,&local_90);
  *(undefined4 *)(this + 0x708) = uVar3;
  local_90 = 0x3f800000;
                    /* try { // try from 0012a6a0 to 0012a6b7 has its CatchHandler @ 0012af88 */
  uVar3 = FUN_00129d64(param_3,"activeScale",param_2 + 0x70c,&local_90);
  *(undefined4 *)(this + 0x70c) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a6c0 to 0012a6d7 has its CatchHandler @ 0012af80 */
  uVar3 = FUN_00129d64(param_3,"activeUnderlayOpacity",param_2 + 0x710,&local_90);
  *(undefined4 *)(this + 0x710) = uVar3;
  local_90 = 0xbf800000;
                    /* try { // try from 0012a6e4 to 0012a6fb has its CatchHandler @ 0012af78 */
  uVar3 = FUN_00129d64(param_3,"hoverOpacity",param_2 + 0x714,&local_90);
  *(undefined4 *)(this + 0x714) = uVar3;
  local_90 = 0xbf800000;
                    /* try { // try from 0012a704 to 0012a71b has its CatchHandler @ 0012af70 */
  uVar3 = FUN_00129d64(param_3,"hoverScale",param_2 + 0x718,&local_90);
  *(undefined4 *)(this + 0x718) = uVar3;
  local_90 = 0xbf800000;
                    /* try { // try from 0012a728 to 0012a73f has its CatchHandler @ 0012af68 */
  uVar3 = FUN_00129d64(param_3,"hoverUnderlayOpacity",param_2 + 0x71c,&local_90);
  *(undefined4 *)(this + 0x71c) = uVar3;
  local_90 = 0x32;
                    /* try { // try from 0012a74c to 0012a76f has its CatchHandler @ 0012af60 */
  uVar3 = FUN_001299f4(param_1,param_3,"hoverAnimationInDuration",param_2 + 0x720,&local_90,0,0);
  *(undefined4 *)(this + 0x720) = uVar3;
  local_90 = 100;
                    /* try { // try from 0012a77c to 0012a79f has its CatchHandler @ 0012af58 */
  uVar3 = FUN_001299f4(param_1,param_3,"hoverAnimationOutDuration",param_2 + 0x724,&local_90,0,0);
  *(undefined4 *)(this + 0x724) = uVar3;
  local_90 = 0x3f800000;
                    /* try { // try from 0012a7ac to 0012a7c3 has its CatchHandler @ 0012af50 */
  uVar3 = FUN_00129d64(param_3,"defaultOpacity",param_2 + 0x728,&local_90);
  *(undefined4 *)(this + 0x728) = uVar3;
  local_90 = 0x3f800000;
                    /* try { // try from 0012a7cc to 0012a7e3 has its CatchHandler @ 0012af48 */
  uVar3 = FUN_00129d64(param_3,"defaultScale",param_2 + 0x72c,&local_90);
  *(undefined4 *)(this + 0x72c) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a7ec to 0012a803 has its CatchHandler @ 0012af40 */
  uVar3 = FUN_00129d64(param_3,"defaultUnderlayOpacity",param_2 + 0x730,&local_90);
  *(undefined4 *)(this + 0x730) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a80c to 0012a827 has its CatchHandler @ 0012af38 */
  uVar3 = FUN_00129828(param_1,param_3,"underlayColor",param_2 + 0x734,&local_90);
  *(undefined4 *)(this + 0x734) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a830 to 0012a847 has its CatchHandler @ 0012af30 */
  uVar3 = FUN_00129d64(param_3,"borderWidth",param_2 + 0x738,&local_90);
  *(undefined4 *)(this + 0x738) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a850 to 0012a86b has its CatchHandler @ 0012af28 */
  uVar3 = FUN_00129828(param_1,param_3,"borderColor",param_2 + 0x73c,&local_90);
  *(undefined4 *)(this + 0x73c) = uVar3;
  local_90 = 0x6c6f730a;
  uStack_8c = 0x69;
  uStack_8b = 100;
                    /* try { // try from 0012a88c to 0012a8a7 has its CatchHandler @ 0012af20 */
  FUN_00129f10(this + 0x740,param_3,"borderStyle",param_2 + 0x740,&local_90);
  local_88 = local_88 & 0xffffffffffffff00;
  local_90 = 0x7369760e;
  uStack_8c = 0x69;
  uStack_8b = 0x6c62;
  uStack_89 = 0x65;
                    /* try { // try from 0012a8cc to 0012a8e7 has its CatchHandler @ 0012af10 */
  FUN_00129f10(this + 0x758,param_3,"overflow",param_2 + 0x758,&local_90);
  local_90 = 0;
                    /* try { // try from 0012a8ec to 0012a903 has its CatchHandler @ 0012af08 */
  uVar3 = FUN_00129d64(param_3,"borderLeftWidth",param_2 + 0x770,&local_90);
  *(undefined4 *)(this + 0x770) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a90c to 0012a923 has its CatchHandler @ 0012af00 */
  uVar3 = FUN_00129d64(param_3,"borderRightWidth",param_2 + 0x774,&local_90);
  *(undefined4 *)(this + 0x774) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a92c to 0012a943 has its CatchHandler @ 0012aef8 */
  uVar3 = FUN_00129d64(param_3,"borderTopWidth",param_2 + 0x778,&local_90);
  *(undefined4 *)(this + 0x778) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a94c to 0012a963 has its CatchHandler @ 0012aef0 */
  uVar3 = FUN_00129d64(param_3,"borderBottomWidth",param_2 + 0x77c,&local_90);
  *(undefined4 *)(this + 0x77c) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a96c to 0012a983 has its CatchHandler @ 0012aee8 */
  uVar3 = FUN_00129d64(param_3,"borderStartWidth",param_2 + 0x780,&local_90);
  *(undefined4 *)(this + 0x780) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a98c to 0012a9a3 has its CatchHandler @ 0012aee0 */
  uVar3 = FUN_00129d64(param_3,"borderEndWidth",param_2 + 0x784,&local_90);
  *(undefined4 *)(this + 0x784) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a9ac to 0012a9c7 has its CatchHandler @ 0012aed8 */
  uVar3 = FUN_00129828(param_1,param_3,"borderLeftColor",param_2 + 0x788,&local_90);
  *(undefined4 *)(this + 0x788) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a9d0 to 0012a9eb has its CatchHandler @ 0012aed0 */
  uVar3 = FUN_00129828(param_1,param_3,"borderRightColor",param_2 + 0x78c,&local_90);
  *(undefined4 *)(this + 0x78c) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012a9f4 to 0012aa0f has its CatchHandler @ 0012aec8 */
  uVar3 = FUN_00129828(param_1,param_3,"borderTopColor",param_2 + 0x790,&local_90);
  *(undefined4 *)(this + 0x790) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012aa18 to 0012aa33 has its CatchHandler @ 0012aec0 */
  uVar3 = FUN_00129828(param_1,param_3,"borderBottomColor",param_2 + 0x794,&local_90);
  *(undefined4 *)(this + 0x794) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012aa3c to 0012aa57 has its CatchHandler @ 0012aeb8 */
  uVar3 = FUN_00129828(param_1,param_3,"borderStartColor",param_2 + 0x798,&local_90);
  *(undefined4 *)(this + 0x798) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012aa60 to 0012aa7b has its CatchHandler @ 0012aeb0 */
  uVar3 = FUN_00129828(param_1,param_3,"borderEndColor",param_2 + 0x79c,&local_90);
  *(undefined4 *)(this + 0x79c) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012aa84 to 0012aa9f has its CatchHandler @ 0012aea8 */
  uVar3 = FUN_00129828(param_1,param_3,"borderBlockColor",param_2 + 0x7a0,&local_90);
  *(undefined4 *)(this + 0x7a0) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012aaa8 to 0012aac3 has its CatchHandler @ 0012aea0 */
  uVar3 = FUN_00129828(param_1,param_3,"borderBlockEndColor",param_2 + 0x7a4,&local_90);
  *(undefined4 *)(this + 0x7a4) = uVar3;
  local_90 = 0;
                    /* try { // try from 0012aacc to 0012aae7 has its CatchHandler @ 0012ae98 */
  uVar3 = FUN_00129828(param_1,param_3,"borderBlockStartColor",param_2 + 0x7a8,&local_90);
  *(undefined4 *)(this + 0x7a8) = uVar3;
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012aaf4 to 0012ab0f has its CatchHandler @ 0012ae8c */
  FUN_0012a180(this + 0x7b0,param_3,"borderRadius",param_2 + 0x7b0,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012ab20 to 0012ab3b has its CatchHandler @ 0012ae80 */
  FUN_0012a180(this + 0x7e0,param_3,"borderTopLeftRadius",param_2 + 0x7e0,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012ab4c to 0012ab67 has its CatchHandler @ 0012ae74 */
  FUN_0012a180(this + 0x810,param_3,"borderTopRightRadius",param_2 + 0x810,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012ab78 to 0012ab93 has its CatchHandler @ 0012ae68 */
  FUN_0012a180(this + 0x840,param_3,"borderBottomLeftRadius",param_2 + 0x840,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012aba4 to 0012abbf has its CatchHandler @ 0012ae5c */
  FUN_0012a180(this + 0x870,param_3,"borderBottomRightRadius",param_2 + 0x870,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012abd0 to 0012abeb has its CatchHandler @ 0012ae50 */
  FUN_0012a180(this + 0x8a0,param_3,"borderTopStartRadius",param_2 + 0x8a0,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012abfc to 0012ac17 has its CatchHandler @ 0012ae44 */
  FUN_0012a180(this + 0x8d0,param_3,"borderTopEndRadius",param_2 + 0x8d0,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012ac28 to 0012ac43 has its CatchHandler @ 0012ae38 */
  FUN_0012a180(this + 0x900,param_3,"borderBottomStartRadius",param_2 + 0x900,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012ac54 to 0012ac6f has its CatchHandler @ 0012ada4 */
  FUN_0012a180(this + 0x930,param_3,"borderBottomEndRadius",param_2 + 0x930,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012ac80 to 0012ac9b has its CatchHandler @ 0012ad90 */
  FUN_0012a180(this + 0x960,param_3,"borderEndEndRadius",param_2 + 0x960,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012acac to 0012acc7 has its CatchHandler @ 0012ad7c */
  FUN_0012a180(this + 0x990,param_3,"borderEndStartRadius",param_2 + 0x990,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012acd8 to 0012acf3 has its CatchHandler @ 0012ad68 */
  FUN_0012a180(this + 0x9c0,param_3,"borderStartEndRadius",param_2 + 0x9c0,&local_90);
  folly::dynamic::destroy();
  local_90 = 0;
  local_88 = 0;
                    /* try { // try from 0012ad04 to 0012ad1f has its CatchHandler @ 0012ad54 */
  FUN_0012a180(this + 0x9f0,param_3,"borderStartStartRadius",param_2 + 0x9f0,&local_90);
  folly::dynamic::destroy();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012b038  facebook::react::RNGestureHandlerButtonProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNGestureHandlerButtonProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNGestureHandlerButtonProps::getDiffPropsImplementationTarget(void)

{
  return "RNGestureHandlerButton";
}


// ===== 0012b044  facebook::react::RNGestureHandlerButtonProps::getDiffProps =====

/* facebook::react::RNGestureHandlerButtonProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::RNGestureHandlerButtonProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  Props PVar3;
  Props PVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  dynamic *pdVar9;
  ulong uVar10;
  Props *in_x1;
  Props *pPVar11;
  undefined4 *in_x8;
  undefined1 *puVar12;
  undefined1 uVar13;
  ulong uVar14;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong extraout_x10_06;
  ulong extraout_x10_07;
  ulong extraout_x10_08;
  ulong extraout_x10_09;
  ulong extraout_x10_10;
  ulong extraout_x10_11;
  ulong extraout_x10_12;
  ulong extraout_x10_13;
  Props *pPVar15;
  undefined4 uVar16;
  size_t sVar17;
  char *pcVar18;
  float fVar19;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  if (((DAT_0014a730 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0014a730), iVar7 != 0)) {
    memset(&DAT_00149d10,0,0xa20);
                    /* try { // try from 0012c350 to 0012c357 has its CatchHandler @ 0012c39c */
    FUN_00122830(&DAT_00149d10);
    __cxa_atexit(FUN_0012c434,&DAT_00149d10,&PTR_LOOP_00143540);
    __cxa_guard_release(&DAT_0014a730);
  }
  pPVar1 = (Props *)&DAT_00149d10;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
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
    PVar3 = param_1[0x6e0];
    uVar10 = extraout_x10;
    if (PVar3 != pPVar1[0x6e0]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_00;
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
        uVar10 = extraout_x10_01;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    PVar3 = param_1[0x6e1];
    if (PVar3 != pPVar1[0x6e1]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_02;
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
        uVar10 = extraout_x10_03;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    PVar3 = param_1[0x6e2];
    if (PVar3 != pPVar1[0x6e2]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_04;
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
        uVar10 = extraout_x10_05;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    PVar3 = param_1[0x6e3];
    if (PVar3 != pPVar1[0x6e3]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_06;
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
        uVar10 = extraout_x10_07;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    iVar7 = *(int *)(param_1 + 0x6e4);
    if (iVar7 != *(int *)(pPVar1 + 0x6e4)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_08;
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
        uVar10 = extraout_x10_09;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x6e8);
    if (iVar7 != *(int *)(pPVar1 + 0x6e8)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_10;
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
        uVar10 = extraout_x10_11;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    PVar3 = param_1[0x6ec];
    if (PVar3 != pPVar1[0x6ec]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_12;
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
        uVar10 = extraout_x10_13;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    iVar7 = *(int *)(param_1 + 0x6f0);
    if (iVar7 != *(int *)(pPVar1 + 0x6f0)) {
      if (iVar7 < 2) {
        if (iVar7 == 0) {
          local_c4[0] = 0x6e;
          uVar5 = 0x656e6f;
LAB_0012b368:
          puVar12 = local_c8;
          uVar10 = (ulong)uVar5;
          uVar13 = 0x10;
          uVar16 = 0x2d786f62;
        }
        else {
          if (iVar7 != 1) {
LAB_0012c388:
            if (*(long *)(lVar6 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0012c398 to 0012c39b has its CatchHandler @ 0012c3b0 */
              abort();
            }
            goto LAB_0012c430;
          }
          puVar12 = local_c4;
          uVar13 = 8;
          uVar16 = 0x656e6f6e;
        }
      }
      else {
        if (iVar7 == 2) {
          local_c4[0] = 0x6f;
          uVar5 = 0x796c6e;
          goto LAB_0012b368;
        }
        if (iVar7 != 3) goto LAB_0012c388;
        puVar12 = local_c4;
        uVar13 = 8;
        uVar16 = 0x6f747561;
      }
      *puVar12 = 0;
      local_88[0] = 6;
      local_80._0_5_ = CONCAT41(uVar16,uVar13);
      local_80 = CONCAT26((short)uVar10,CONCAT15(local_c4[0],(undefined5)local_80));
      uStack_78 = CONCAT62(uStack_78._2_6_,CONCAT11(local_c8[0],(char)(uVar10 >> 0x10)));
      local_70 = (void *)0x0;
                    /* try { // try from 0012b3a4 to 0012b3b7 has its CatchHandler @ 0012c3bc */
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
      folly::dynamic::destroy();
    }
    iVar7 = *(int *)(param_1 + 0x6f4);
    if (iVar7 != *(int *)(pPVar1 + 0x6f4)) {
                    /* try { // try from 0012b3d8 to 0012b9c3 has its CatchHandler @ 0012c40c */
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x6f8);
    if (iVar7 != *(int *)(pPVar1 + 0x6f8)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x6fc);
    if (iVar7 != *(int *)(pPVar1 + 0x6fc)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x700);
    if (iVar7 != *(int *)(pPVar1 + 0x700)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    PVar3 = param_1[0x704];
    if (PVar3 != pPVar1[0x704]) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 2) {
        folly::dynamic::destroy();
        *piVar8 = 2;
      }
      *(Props *)(piVar8 + 2) = PVar3;
    }
    fVar19 = *(float *)(param_1 + 0x708);
    if ((fVar19 != *(float *)(pPVar1 + 0x708)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x708)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x70c);
    if ((fVar19 != *(float *)(pPVar1 + 0x70c)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x70c)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x710);
    if ((fVar19 != *(float *)(pPVar1 + 0x710)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x710)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x714);
    if ((fVar19 != *(float *)(pPVar1 + 0x714)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x714)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x718);
    if ((fVar19 != *(float *)(pPVar1 + 0x718)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x718)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x71c);
    if ((fVar19 != *(float *)(pPVar1 + 0x71c)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x71c)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    iVar7 = *(int *)(param_1 + 0x720);
    if (iVar7 != *(int *)(pPVar1 + 0x720)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x724);
    if (iVar7 != *(int *)(pPVar1 + 0x724)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    fVar19 = *(float *)(param_1 + 0x728);
    if ((fVar19 != *(float *)(pPVar1 + 0x728)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x728)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x72c);
    if ((fVar19 != *(float *)(pPVar1 + 0x72c)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x72c)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x730);
    if ((fVar19 != *(float *)(pPVar1 + 0x730)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x730)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    iVar7 = *(int *)(param_1 + 0x734);
    if (iVar7 != *(int *)(pPVar1 + 0x734)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    fVar19 = *(float *)(param_1 + 0x738);
    if ((fVar19 != *(float *)(pPVar1 + 0x738)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x738)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    iVar7 = *(int *)(param_1 + 0x73c);
    if (iVar7 != *(int *)(pPVar1 + 0x73c)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    PVar3 = param_1[0x740];
    PVar4 = pPVar1[0x740];
    sVar17 = *(size_t *)(param_1 + 0x748);
    uVar14 = (ulong)((byte)PVar3 >> 1);
    uVar10 = uVar14;
    if (((byte)PVar3 & 1) != 0) {
      uVar10 = sVar17;
    }
    uVar2 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x748);
    }
    if (uVar10 == uVar2) {
      pPVar11 = pPVar1 + 0x741;
      if (((byte)PVar4 & 1) != 0) {
        pPVar11 = *(Props **)(pPVar1 + 0x750);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar15 = param_1 + 0x741;
          do {
            if (*pPVar15 != *pPVar11) goto LAB_0012ba5c;
            uVar14 = uVar14 - 1;
            pPVar15 = pPVar15 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar14 != 0);
        }
      }
      else {
        pcVar18 = *(char **)(param_1 + 0x750);
        iVar7 = memcmp(pcVar18,pPVar11,sVar17);
        if (iVar7 != 0) goto LAB_0012ba94;
      }
    }
    else {
LAB_0012ba5c:
      if (((byte)PVar3 & 1) == 0) {
        uStack_98 = *(undefined8 *)(param_1 + 0x748);
        local_a0 = *(ulong *)(param_1 + 0x740);
        local_90 = *(void **)(param_1 + 0x750);
      }
      else {
        pcVar18 = *(char **)(param_1 + 0x750);
LAB_0012ba94:
                    /* try { // try from 0012ba94 to 0012baa3 has its CatchHandler @ 0012c3b8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_a0,pcVar18,sVar17);
      }
      local_88[0] = 6;
      uStack_78 = uStack_98;
      local_80 = local_a0;
      local_70 = local_90;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
                    /* try { // try from 0012bac4 to 0012bad7 has its CatchHandler @ 0012c3ec */
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
      folly::dynamic::destroy();
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
    }
    PVar3 = param_1[0x758];
    PVar4 = pPVar1[0x758];
    sVar17 = *(size_t *)(param_1 + 0x760);
    uVar14 = (ulong)((byte)PVar3 >> 1);
    uVar10 = uVar14;
    if (((byte)PVar3 & 1) != 0) {
      uVar10 = sVar17;
    }
    uVar2 = (ulong)((byte)PVar4 >> 1);
    if (((byte)PVar4 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x760);
    }
    if (uVar10 == uVar2) {
      pPVar11 = pPVar1 + 0x759;
      if (((byte)PVar4 & 1) != 0) {
        pPVar11 = *(Props **)(pPVar1 + 0x768);
      }
      if (((byte)PVar3 & 1) == 0) {
        if (1 < (byte)PVar3) {
          pPVar15 = param_1 + 0x759;
          do {
            if (*pPVar15 != *pPVar11) goto LAB_0012bb6c;
            uVar14 = uVar14 - 1;
            pPVar15 = pPVar15 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar14 != 0);
        }
      }
      else {
        pcVar18 = *(char **)(param_1 + 0x768);
        iVar7 = memcmp(pcVar18,pPVar11,sVar17);
        if (iVar7 != 0) goto LAB_0012bba4;
      }
    }
    else {
LAB_0012bb6c:
      if (((byte)PVar3 & 1) == 0) {
        uStack_b8 = *(undefined8 *)(param_1 + 0x760);
        local_c0 = *(ulong *)(param_1 + 0x758);
        local_b0 = *(void **)(param_1 + 0x768);
      }
      else {
        pcVar18 = *(char **)(param_1 + 0x768);
LAB_0012bba4:
                    /* try { // try from 0012bba4 to 0012bbb3 has its CatchHandler @ 0012c3b4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_c0,pcVar18,sVar17);
      }
      local_88[0] = 6;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      local_70 = local_b0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
                    /* try { // try from 0012bbd4 to 0012bbe7 has its CatchHandler @ 0012c3cc */
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)local_88);
      folly::dynamic::destroy();
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
    }
    fVar19 = *(float *)(param_1 + 0x770);
    if ((fVar19 != *(float *)(pPVar1 + 0x770)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x770)))))) {
                    /* try { // try from 0012bc28 to 0012c2f3 has its CatchHandler @ 0012c40c */
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x774);
    if ((fVar19 != *(float *)(pPVar1 + 0x774)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x774)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x778);
    if ((fVar19 != *(float *)(pPVar1 + 0x778)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x778)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x77c);
    if ((fVar19 != *(float *)(pPVar1 + 0x77c)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x77c)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x780);
    if ((fVar19 != *(float *)(pPVar1 + 0x780)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x780)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    fVar19 = *(float *)(param_1 + 0x784);
    if ((fVar19 != *(float *)(pPVar1 + 0x784)) &&
       ((!NAN(fVar19) || (!NAN(*(float *)(pPVar1 + 0x784)))))) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 3) {
        folly::dynamic::destroy();
        *piVar8 = 3;
      }
      *(double *)(piVar8 + 2) = (double)fVar19;
    }
    iVar7 = *(int *)(param_1 + 0x788);
    if (iVar7 != *(int *)(pPVar1 + 0x788)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x78c);
    if (iVar7 != *(int *)(pPVar1 + 0x78c)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x790);
    if (iVar7 != *(int *)(pPVar1 + 0x790)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x794);
    if (iVar7 != *(int *)(pPVar1 + 0x794)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x798);
    if (iVar7 != *(int *)(pPVar1 + 0x798)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x79c);
    if (iVar7 != *(int *)(pPVar1 + 0x79c)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x7a0);
    if (iVar7 != *(int *)(pPVar1 + 0x7a0)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x7a4);
    if (iVar7 != *(int *)(pPVar1 + 0x7a4)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    iVar7 = *(int *)(param_1 + 0x7a8);
    if (iVar7 != *(int *)(pPVar1 + 0x7a8)) {
      piVar8 = (int *)folly::dynamic::operator[]();
      if (*piVar8 != 4) {
        folly::dynamic::destroy();
        *piVar8 = 4;
      }
      *(long *)(piVar8 + 2) = (long)iVar7;
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x7b0),(dynamic *)(pPVar1 + 0x7b0));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x7b0));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x7e0),(dynamic *)(pPVar1 + 0x7e0));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x7e0));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x810),(dynamic *)(pPVar1 + 0x810));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x810));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x840),(dynamic *)(pPVar1 + 0x840));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x840));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x870),(dynamic *)(pPVar1 + 0x870));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x870));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x8a0),(dynamic *)(pPVar1 + 0x8a0));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x8a0));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x8d0),(dynamic *)(pPVar1 + 0x8d0));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x8d0));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x900),(dynamic *)(pPVar1 + 0x900));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x900));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x930),(dynamic *)(pPVar1 + 0x930));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x930));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x960),(dynamic *)(pPVar1 + 0x960));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x960));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x990),(dynamic *)(pPVar1 + 0x990));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x990));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x9c0),(dynamic *)(pPVar1 + 0x9c0));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x9c0));
    }
    uVar10 = folly::operator==((dynamic *)(param_1 + 0x9f0),(dynamic *)(pPVar1 + 0x9f0));
    if ((uVar10 & 1) == 0) {
      pdVar9 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar9,(dynamic *)(param_1 + 0x9f0));
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_0012c430:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012c434  FUN_0012c434 =====

void FUN_0012c434(undefined8 param_1)

{
  FUN_00123350(param_1,PTR_PTR_00144dd8);
  return;
}


// ===== 0012c440  facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps =====

/* facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps(facebook::react::PropsParserContext
   const&, facebook::react::RNGestureHandlerDetectorProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps
          (RNGestureHandlerDetectorProps *this,PropsParserContext *param_1,
          RNGestureHandlerDetectorProps *param_2,RawProps *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  function *in_x4;
  long lVar4;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0012c480 to 0012c48f has its CatchHandler @ 0012c5d8 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if (local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0012c4bc;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0012c4bc:
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 0012c4d0 to 0012c4e3 has its CatchHandler @ 0012c5ac */
  FUN_0012c610(this + 0x6e0);
  local_90[0] = CONCAT44(local_90[0]._4_4_,0xffffffff);
                    /* try { // try from 0012c4ec to 0012c50f has its CatchHandler @ 0012c594 */
  uVar2 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x6f8) = uVar2;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0012c51c to 0012c52f has its CatchHandler @ 0012c584 */
  FUN_0012c868(this + 0x700);
  local_90[0] = CONCAT44(local_90[0]._4_4_,3);
                    /* try { // try from 0012c538 to 0012c547 has its CatchHandler @ 0012c578 */
  uVar2 = FUN_0012cb70();
  *(undefined4 *)(this + 0x718) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012c610  FUN_0012c610 =====

void FUN_0012c610(undefined8 *param_1,char *param_2,undefined8 *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_2,"handlerTags",(char *)0x0);
  if (lVar2 == 0) {
    param_4 = (void *)*param_3;
    lVar2 = param_3[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = lVar2 - (long)param_4;
    if (uVar3 != 0) {
      if ((long)uVar3 < 0) {
        if (*(long *)(lVar1 + 0x28) != lVar4) goto LAB_0012c860;
        FUN_0013b6a0();
        goto LAB_0012c6f8;
      }
      __dest = operator_new(uVar3);
      *param_1 = __dest;
      param_1[2] = (long)__dest + uVar3;
      memcpy(__dest,param_4,uVar3);
      param_1[1] = (long)__dest + uVar3;
    }
  }
  else {
    uVar3 = FUN_0012e240();
    if ((uVar3 & 1) == 0) {
LAB_0012c6f8:
      if (*(long *)(lVar1 + 0x28) == lVar4) {
        FUN_0013b05c(param_1,param_4);
        return;
      }
      goto LAB_0012c860;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0012c6d4 to 0012c6df has its CatchHandler @ 0012c728 */
    FUN_0013b0e0(lVar2,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
LAB_0012c860:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012c868  FUN_0012c868 =====

void FUN_0012c868(undefined8 *param_1,char *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  lVar3 = facebook::react::RawProps::at(param_2,"virtualChildren",(char *)0x0);
  if (lVar3 == 0) {
    lVar3 = *param_3;
    lVar1 = param_3[1];
    param_4 = param_1 + 2;
    *param_4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    uVar6 = lVar1 - lVar3;
    if (uVar6 != 0) {
      if ((long)uVar6 < 0) {
        if (*(long *)(lVar2 + 0x28) != lVar7) goto LAB_0012caf0;
                    /* try { // try from 0012c96c to 0012c96f has its CatchHandler @ 0012cacc */
        FUN_0013c738();
        goto LAB_0012c970;
      }
                    /* try { // try from 0012c8dc to 0012c8e3 has its CatchHandler @ 0012cacc */
      pvVar4 = operator_new(uVar6);
      *param_1 = pvVar4;
      param_1[1] = pvVar4;
      param_1[2] = (long)pvVar4 + uVar6;
                    /* try { // try from 0012c8f4 to 0012c907 has its CatchHandler @ 0012cac0 */
      uVar5 = FUN_0013c74c(param_4,lVar3,lVar1,pvVar4);
      param_1[1] = uVar5;
    }
  }
  else {
    uVar6 = FUN_0012e240();
    if ((uVar6 & 1) == 0) {
LAB_0012c970:
      if (*(long *)(lVar2 + 0x28) == lVar7) {
        FUN_0013c008(param_1,param_4);
        return;
      }
      goto LAB_0012caf0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 0012c94c to 0012c957 has its CatchHandler @ 0012c9a4 */
    FUN_0013c0fc(lVar3,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == lVar7) {
    return;
  }
LAB_0012caf0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012caf4  FUN_0012caf4 =====

void FUN_0012caf4(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (puVar3 != puVar4) {
    do {
      puVar2 = puVar3 + -4;
      pvVar1 = (void *)*puVar2;
      if (pvVar1 != (void *)0x0) {
        puVar3[-3] = pvVar1;
        operator_delete(pvVar1);
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 0012cb70  FUN_0012cb70 =====

void FUN_0012cb70(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"pointerEvents",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_0012e240();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 0012cbe8 to 0012cbf3 has its CatchHandler @ 0012cc04 */
      FUN_0013cb14(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 0012cd24  facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps =====

/* facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps(facebook::react::PropsParserContext
   const&, facebook::react::RNGestureHandlerDetectorProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps
          (RNGestureHandlerDetectorProps *this,PropsParserContext *param_1,
          RNGestureHandlerDetectorProps *param_2,RawProps *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar3 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0012cd60 to 0012cd83 has its CatchHandler @ 0012ced4 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00144e20 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if (local_70 == local_90) {
    lVar4 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0012cdb0;
    lVar4 = 5;
    plVar3 = local_70;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0012cdb0:
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  *(undefined **)this = PTR_vtable_00144e18 + 0x20;
                    /* try { // try from 0012cdcc to 0012cddf has its CatchHandler @ 0012cea8 */
  FUN_0012c610(this + 0x6e0,param_3,param_2 + 0x6e0,local_90);
  local_90[0] = CONCAT44(local_90[0]._4_4_,0xffffffff);
                    /* try { // try from 0012cde8 to 0012ce0b has its CatchHandler @ 0012ce90 */
  uVar2 = FUN_001299f4(param_1,param_3,"moduleId",param_2 + 0x6f8,local_90,0,0);
  *(undefined4 *)(this + 0x6f8) = uVar2;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
                    /* try { // try from 0012ce18 to 0012ce2b has its CatchHandler @ 0012ce80 */
  FUN_0012c868(this + 0x700,param_3,param_2 + 0x700,local_90);
  local_90[0] = CONCAT44(local_90[0]._4_4_,3);
                    /* try { // try from 0012ce34 to 0012ce43 has its CatchHandler @ 0012ce74 */
  uVar2 = FUN_0012cb70(param_3,param_2 + 0x718,local_90);
  *(undefined4 *)(this + 0x718) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012cf0c  facebook::react::RNGestureHandlerDetectorProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNGestureHandlerDetectorProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNGestureHandlerDetectorProps::getDiffPropsImplementationTarget(void)

{
  return "RNGestureHandlerDetector";
}


// ===== 0012cf18  facebook::react::RNGestureHandlerDetectorProps::getDiffProps =====

/* facebook::react::RNGestureHandlerDetectorProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::RNGestureHandlerDetectorProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  dynamic *pdVar6;
  dynamic *pdVar7;
  Props *in_x1;
  size_t sVar8;
  undefined4 *in_x8;
  undefined1 uVar9;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  ulong uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int local_130 [2];
  undefined8 local_128;
  dynamic *local_120;
  dynamic *local_118;
  int local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  int local_d0 [2];
  undefined8 local_c8;
  dynamic *local_c0;
  dynamic *pdStack_b8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (((DAT_0014ae58 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0014ae58), iVar5 != 0)) {
    memset(&DAT_0014a738,0,0x720);
                    /* try { // try from 0012d4c4 to 0012d4c7 has its CatchHandler @ 0012d50c */
    FUN_0012d5dc();
    __cxa_atexit(FUN_0012d68c,&DAT_0014a738,&PTR_LOOP_00143540);
    __cxa_guard_release(&DAT_0014ae58);
  }
  pPVar1 = (Props *)&DAT_0014a738;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_80 = 0;
    local_a0[0] = 5;
    local_90 = 0;
    local_88 = 0;
    local_78 = 0x3f800000;
    *in_x8 = 5;
    local_98 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
LAB_0012d3f4:
    folly::dynamic::destroy();
  }
  else {
    facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    piVar12 = *(int **)(param_1 + 0x6e8);
    piVar14 = *(int **)(param_1 + 0x6e0);
    sVar8 = (long)piVar12 - (long)piVar14;
    if ((sVar8 != *(long *)(pPVar1 + 0x6e8) - (long)*(void **)(pPVar1 + 0x6e0)) ||
       (iVar5 = memcmp(piVar14,*(void **)(pPVar1 + 0x6e0),sVar8), uVar10 = extraout_x10, iVar5 != 0)
       ) {
      local_c0 = (dynamic *)0x0;
      pdStack_b8 = (dynamic *)0x0;
      local_d0[0] = 1;
      local_c8 = 0;
      pdVar6 = local_c0;
      for (; local_c0 = pdVar6, piVar14 != piVar12; piVar14 = piVar14 + 1) {
        local_98 = (long)*piVar14;
        local_a0[0] = 4;
        if (local_d0[0] != 1) {
          if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0012d464 to 0012d473 has its CatchHandler @ 0012d578 */
                    /* WARNING: Subroutine does not return */
            FUN_00123890(*(undefined8 *)PTR_name_00144f00);
          }
          goto LAB_0012d5d8;
        }
        if (pdVar6 < pdStack_b8) {
          folly::dynamic::dynamic(pdVar6,(dynamic *)local_a0);
          local_c0 = pdVar6 + 0x30;
        }
        else {
                    /* try { // try from 0012d020 to 0012d02b has its CatchHandler @ 0012d558 */
          local_c0 = (dynamic *)FUN_0012e0f0(&local_c8,local_a0);
        }
        folly::dynamic::destroy();
        pdVar6 = local_c0;
      }
                    /* try { // try from 0012d030 to 0012d043 has its CatchHandler @ 0012d548 */
      pdVar6 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar6,(dynamic *)local_d0);
      folly::dynamic::destroy();
      uVar10 = extraout_x10_00;
    }
    iVar5 = *(int *)(param_1 + 0x6f8);
    if (iVar5 != *(int *)(pPVar1 + 0x6f8)) {
      piVar14 = (int *)folly::dynamic::operator[]();
      uVar10 = extraout_x10_01;
      if (*piVar14 != 4) {
        folly::dynamic::destroy();
        *piVar14 = 4;
        uVar10 = extraout_x10_02;
      }
      *(long *)(piVar14 + 2) = (long)iVar5;
    }
    puVar15 = *(undefined8 **)(param_1 + 0x708);
    puVar16 = *(undefined8 **)(param_1 + 0x700);
    puVar13 = *(undefined8 **)(pPVar1 + 0x700);
    puVar4 = puVar16;
    if ((long)puVar15 - (long)puVar16 == *(long *)(pPVar1 + 0x708) - (long)puVar13) {
      for (; puVar4 != puVar15; puVar4 = puVar4 + 4) {
        sVar8 = puVar4[1] - (long)*puVar4;
        if (((sVar8 != puVar13[1] - (long)*puVar13) ||
            (iVar5 = memcmp((void *)*puVar4,(void *)*puVar13,sVar8), iVar5 != 0)) ||
           (*(int *)(puVar4 + 3) != *(int *)(puVar13 + 3))) goto LAB_0012d114;
        puVar13 = puVar13 + 4;
        uVar10 = extraout_x10_03;
      }
    }
    else {
LAB_0012d114:
      local_120 = (dynamic *)0x0;
      local_118 = (dynamic *)0x0;
      local_130[0] = 1;
      local_128 = 0;
      if (puVar16 != puVar15) {
        pdVar6 = (dynamic *)0x0;
        do {
          local_a0[0] = 5;
          local_80 = 0;
          local_88 = 0;
          local_78 = 0x3f800000;
          local_98 = 0;
          local_90 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_100[0] = 5;
          local_d8 = 0x3f800000;
          folly::dynamic::destroy();
          local_c0 = (dynamic *)0x0;
          pdStack_b8 = (dynamic *)0x0;
          local_d0[0] = 1;
          local_c8 = 0;
          piVar12 = (int *)puVar16[1];
          for (piVar14 = (int *)*puVar16; pdVar7 = local_c0, piVar14 != piVar12;
              piVar14 = piVar14 + 1) {
            local_98 = (long)*piVar14;
            local_a0[0] = 4;
            if (local_d0[0] != 1) {
              if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0012d440 to 0012d453 has its CatchHandler @ 0012d594 */
                    /* WARNING: Subroutine does not return */
                FUN_00123890(*(undefined8 *)PTR_name_00144f00);
              }
              goto LAB_0012d5d8;
            }
            if (local_c0 < pdStack_b8) {
              folly::dynamic::dynamic(local_c0,(dynamic *)local_a0);
              local_c0 = pdVar7 + 0x30;
            }
            else {
                    /* try { // try from 0012d20c to 0012d217 has its CatchHandler @ 0012d58c */
              local_c0 = (dynamic *)FUN_0012e0f0(&local_c8,local_a0);
            }
            folly::dynamic::destroy();
          }
                    /* try { // try from 0012d21c to 0012d22f has its CatchHandler @ 0012d560 */
          pdVar7 = (dynamic *)folly::dynamic::operator[](local_100,"handlerTags","");
          folly::dynamic::operator=(pdVar7,(dynamic *)local_d0);
          folly::dynamic::destroy();
          iVar5 = *(int *)(puVar16 + 3);
                    /* try { // try from 0012d244 to 0012d257 has its CatchHandler @ 0012d56c */
          piVar14 = (int *)folly::dynamic::operator[](local_100,&DAT_0010fe13,&DAT_0010fe1a);
          if (*piVar14 != 4) {
            folly::dynamic::destroy();
            *piVar14 = 4;
          }
          *(long *)(piVar14 + 2) = (long)iVar5;
          if (local_130[0] != 1) {
            if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* try { // try from 0012d488 to 0012d497 has its CatchHandler @ 0012d55c */
                    /* WARNING: Subroutine does not return */
              FUN_00123890(*(undefined8 *)PTR_name_00144f00);
            }
            goto LAB_0012d5d8;
          }
          if (pdVar6 < local_118) {
            folly::dynamic::dynamic(pdVar6,(dynamic *)local_100);
            pdVar6 = pdVar6 + 0x30;
          }
          else {
                    /* try { // try from 0012d290 to 0012d29f has its CatchHandler @ 0012d554 */
            pdVar6 = (dynamic *)FUN_0012e0f0(&local_128,local_100);
          }
          local_120 = pdVar6;
          folly::dynamic::destroy();
          puVar16 = puVar16 + 4;
        } while (puVar16 != puVar15);
      }
                    /* try { // try from 0012d2a8 to 0012d2bf has its CatchHandler @ 0012d53c */
      pdVar6 = (dynamic *)folly::dynamic::operator[](in_x8,"virtualChildren","");
      folly::dynamic::operator=(pdVar6,(dynamic *)local_130);
      folly::dynamic::destroy();
      uVar10 = extraout_x10_04;
    }
    iVar5 = *(int *)(param_1 + 0x718);
    if (iVar5 != *(int *)(pPVar1 + 0x718)) {
      if (iVar5 < 2) {
        if (iVar5 == 0) {
          local_d0[0] = CONCAT31(local_d0[0]._1_3_,0x6e);
          uVar2 = 0x656e6f;
LAB_0012d39c:
          piVar14 = local_100;
          uVar10 = (ulong)uVar2;
          uVar9 = 0x10;
          uVar11 = 0x2d786f62;
        }
        else {
          if (iVar5 != 1) {
LAB_0012d4f8:
            if (*(long *)(lVar3 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0012d508 to 0012d50b has its CatchHandler @ 0012d520 */
              abort();
            }
            goto LAB_0012d5d8;
          }
          piVar14 = local_d0;
          uVar9 = 8;
          uVar11 = 0x656e6f6e;
        }
      }
      else {
        if (iVar5 == 2) {
          local_d0[0] = CONCAT31(local_d0[0]._1_3_,0x6f);
          uVar2 = 0x796c6e;
          goto LAB_0012d39c;
        }
        if (iVar5 != 3) goto LAB_0012d4f8;
        piVar14 = local_d0;
        uVar9 = 8;
        uVar11 = 0x6f747561;
      }
      *(undefined1 *)piVar14 = 0;
      local_a0[0] = 6;
      local_98._0_5_ = CONCAT41(uVar11,uVar9);
      local_98 = CONCAT26((short)uVar10,CONCAT15(local_d0[0]._0_1_,(undefined5)local_98));
      local_90 = CONCAT62(local_90._2_6_,CONCAT11(local_100[0]._0_1_,(char)(uVar10 >> 0x10)));
      local_88 = 0;
                    /* try { // try from 0012d3d8 to 0012d3eb has its CatchHandler @ 0012d528 */
      pdVar6 = (dynamic *)folly::dynamic::operator[](in_x8,"pointerEvents","");
      folly::dynamic::operator=(pdVar6,(dynamic *)local_a0);
      goto LAB_0012d3f4;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
LAB_0012d5d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012d5dc  FUN_0012d5dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012d5dc(void)

{
  FUN_00122b78(&DAT_0014a738,PTR_PTR_00144e20 + 0x10);
  DAT_0014ad14 = 0;
  DAT_0014ad18 = 0;
  DAT_0014ad78 = 0;
  DAT_0014ad80 = 0;
  DAT_0014ade0 = 0;
  DAT_0014adf0 = 0;
  DAT_0014adf4 = 0;
  DAT_0014adf8 = 0;
  DAT_0014adfc = 0;
  DAT_0014ae00 = 0;
  DAT_0014ae04 = 0;
  DAT_0014ae08 = 0;
  DAT_0014ae0c = 0;
  DAT_0014ae10 = 0;
  DAT_0014ae14 = 0;
  DAT_0014ade8 = 0;
  DAT_0014adec = 0;
  DAT_0014ae18 = 0;
  DAT_0014a738 = PTR_vtable_00144e18 + 0x20;
  uRam000000000014ae28 = 0;
  _DAT_0014ae20 = 0;
  DAT_0014ae30 = 0xffffffff;
  DAT_0014ae48 = 0;
  uRam000000000014ae40 = 0;
  _DAT_0014ae38 = 0;
  DAT_0014ae50 = 3;
  return;
}


// ===== 0012d68c  FUN_0012d68c =====

void FUN_0012d68c(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x700);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x708);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -4;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-3] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 0x700);
    }
    *(undefined8 **)(param_1 + 0x708) = puVar4;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x6e0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x6e8) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00122a68(param_1,PTR_PTR_00144e20 + 8);
  return;
}


// ===== 0012d71c  facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps =====

/* facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps(facebook::react::PropsParserContext
   const&, facebook::react::RNGestureHandlerRootViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps
          (RNGestureHandlerRootViewProps *this,PropsParserContext *param_1,
          RNGestureHandlerRootViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  function *in_x4;
  long lVar5;
  uint local_90 [8];
  long *local_70;
  long local_58;
  
  puVar4 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0012d75c to 0012d76b has its CatchHandler @ 0012d844 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((uint *)local_70 == local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0012d798;
    lVar5 = 5;
    puVar4 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar4 + lVar5 * 8))();
LAB_0012d798:
  local_90[0] = 0xffffffff;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 0012d7a8 to 0012d7cb has its CatchHandler @ 0012d830 */
  uVar3 = FUN_001299f4(param_2);
  *(undefined4 *)(this + 0x6e0) = uVar3;
  local_90[0] = local_90[0] & 0xffffff00;
                    /* try { // try from 0012d7d4 to 0012d7f7 has its CatchHandler @ 0012d82c */
  bVar2 = FUN_0012965c(param_2);
  this[0x6e4] = (RNGestureHandlerRootViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012d894  facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps =====

/* facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps(facebook::react::PropsParserContext
   const&, facebook::react::RNGestureHandlerRootViewProps const&, facebook::react::RawProps const&)
    */

void __thiscall
facebook::react::RNGestureHandlerRootViewProps::RNGestureHandlerRootViewProps
          (RNGestureHandlerRootViewProps *this,PropsParserContext *param_1,
          RNGestureHandlerRootViewProps *param_2,RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  uint local_90 [8];
  long *local_70;
  long local_58;
  
  puVar4 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0012d8d0 to 0012d8f3 has its CatchHandler @ 0012d9d4 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_00144e10 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((uint *)local_70 == local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0012d920;
    lVar5 = 5;
    puVar4 = (uint *)local_70;
  }
  (**(code **)(*(long *)puVar4 + lVar5 * 8))();
LAB_0012d920:
  local_90[0] = 0xffffffff;
  *(undefined **)this = PTR_vtable_00144e08 + 0x20;
                    /* try { // try from 0012d938 to 0012d95b has its CatchHandler @ 0012d9c0 */
  uVar3 = FUN_001299f4(param_1,param_3,"moduleId",param_2 + 0x6e0,local_90,0,0);
  *(undefined4 *)(this + 0x6e0) = uVar3;
  local_90[0] = local_90[0] & 0xffffff00;
                    /* try { // try from 0012d964 to 0012d987 has its CatchHandler @ 0012d9bc */
  bVar2 = FUN_0012965c(param_1,param_3,"unstable_forceActive",param_2 + 0x6e4,local_90,0,0);
  this[0x6e4] = (RNGestureHandlerRootViewProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012da24  facebook::react::RNGestureHandlerRootViewProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNGestureHandlerRootViewProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNGestureHandlerRootViewProps::getDiffPropsImplementationTarget(void)

{
  return "RNGestureHandlerRootView";
}


// ===== 0012da30  facebook::react::RNGestureHandlerRootViewProps::getDiffProps =====

/* facebook::react::RNGestureHandlerRootViewProps::getDiffProps(facebook::react::Props const*) const
    */

void facebook::react::RNGestureHandlerRootViewProps::getDiffProps(Props *param_1)

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
  if (((DAT_0014b548 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0014b548), iVar4 != 0)) {
    memset(&DAT_0014ae60,0,0x6e8);
                    /* try { // try from 0012dbac to 0012dbaf has its CatchHandler @ 0012dbe0 */
    FUN_0012dc1c();
    __cxa_atexit(FUN_0012dcb0,&DAT_0014ae60,&PTR_LOOP_00143540);
    __cxa_guard_release(&DAT_0014b548);
  }
  pPVar1 = (Props *)&DAT_0014ae60;
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
    iVar4 = *(int *)(param_1 + 0x6e0);
    if (iVar4 != *(int *)(pPVar1 + 0x6e0)) {
      piVar5 = (int *)folly::dynamic::operator[]();
      if (*piVar5 != 4) {
        folly::dynamic::destroy();
        *piVar5 = 4;
      }
      *(long *)(piVar5 + 2) = (long)iVar4;
    }
    PVar2 = param_1[0x6e4];
    if (PVar2 != pPVar1[0x6e4]) {
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


// ===== 0012dc1c  FUN_0012dc1c =====

void FUN_0012dc1c(void)

{
  FUN_00122b78(&DAT_0014ae60,PTR_PTR_00144e10 + 0x10);
  DAT_0014b43c = 0;
  DAT_0014b440 = 0;
  DAT_0014b4a0 = 0;
  DAT_0014b4a8 = 0;
  DAT_0014b508 = 0;
  DAT_0014b518 = 0;
  DAT_0014b51c = 0;
  DAT_0014b520 = 0;
  DAT_0014b524 = 0;
  DAT_0014b528 = 0;
  DAT_0014b52c = 0;
  DAT_0014b530 = 0;
  DAT_0014b534 = 0;
  DAT_0014b538 = 0;
  DAT_0014b53c = 0;
  DAT_0014b510 = 0;
  DAT_0014b514 = 0;
  DAT_0014b544 = 0;
  DAT_0014ae60 = PTR_vtable_00144e08 + 0x20;
  DAT_0014b540 = 0xffffffff;
  return;
}


// ===== 0012dcb0  FUN_0012dcb0 =====

void FUN_0012dcb0(undefined8 param_1)

{
  FUN_00122a68(param_1,PTR_PTR_00144e10 + 8);
  return;
}


// ===== 0012dcc0  FUN_0012dcc0 =====

void FUN_0012dcc0(undefined8 param_1)

{
  FUN_00122a68(param_1,PTR_VTT_00144f08);
  return;
}


// ===== 0012dccc  FUN_0012dccc =====

void FUN_0012dccc(void *param_1)

{
  FUN_00122a68(param_1,PTR_VTT_00144f08);
  operator_delete(param_1);
  return;
}


// ===== 0012dcf8  FUN_0012dcf8 =====

void FUN_0012dcf8(undefined8 param_1)

{
  FUN_001231e4(param_1,&PTR_PTR_FUN_00144758);
  return;
}


// ===== 0012dd04  FUN_0012dd04 =====

void FUN_0012dd04(void *param_1)

{
  FUN_001231e4(param_1,&PTR_PTR_FUN_00144758);
  operator_delete(param_1);
  return;
}


// ===== 0012dd30  FUN_0012dd30 =====

void FUN_0012dd30(undefined4 *param_1)

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


// ===== 0012dda4  FUN_0012dda4 =====

void FUN_0012dda4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00144810;
  FUN_00121620(param_1 + 10);
  *param_1 = &PTR_FUN_00144850;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0012ddfc  FUN_0012ddfc =====

void FUN_0012ddfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00144810;
  FUN_00121620(param_1 + 10);
  *param_1 = &PTR_FUN_00144850;
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0012de50  FUN_0012de50 =====

void FUN_0012de50(long *param_1)

{
  *param_1 = (long)(PTR_vtable_00144f10 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[3]);
  return;
}


// ===== 0012de98  FUN_0012de98 =====

void FUN_0012de98(long *param_1)

{
  *param_1 = (long)(PTR_vtable_00144f10 + 0x20);
  folly::dynamic::destroy();
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    operator_delete((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}


// ===== 0012dedc  FUN_0012dedc =====

void FUN_0012dedc(void *param_1)

{
  FUN_00123350(param_1,PTR_PTR_00144dd8);
  operator_delete(param_1);
  return;
}


// ===== 0012df08  FUN_0012df08 =====

void FUN_0012df08(void *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)((long)param_1 + 0x700);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)((long)param_1 + 0x708);
    puVar2 = puVar4;
    if (puVar3 != puVar4) {
      do {
        puVar2 = puVar3 + -4;
        pvVar1 = (void *)*puVar2;
        if (pvVar1 != (void *)0x0) {
          puVar3[-3] = pvVar1;
          operator_delete(pvVar1);
        }
        puVar3 = puVar2;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)((long)param_1 + 0x700);
    }
    *(undefined8 **)((long)param_1 + 0x708) = puVar4;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)((long)param_1 + 0x6e0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x6e8) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_00122a68(param_1,PTR_PTR_00144e20 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0012dfa0  FUN_0012dfa0 =====

void FUN_0012dfa0(void *param_1)

{
  FUN_00122a68(param_1,PTR_PTR_00144e10 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0012dfd0  FUN_0012dfd0 =====

void FUN_0012dfd0(void)

{
  bad_array_new_length *this;
  
  this = (bad_array_new_length *)__cxa_allocate_exception(8);
  std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_00144ef8,PTR__bad_array_new_length_00144ed0);
}


// ===== 0012e004  FUN_0012e004 =====

void FUN_0012e004(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = (byte *)param_1[1];
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -8));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = (byte *)*param_1;
  }
  param_1[1] = pbVar2;
  operator_delete(pbVar3);
  return;
}


// ===== 0012e080  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

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
      FUN_00123150(this);
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


// ===== 0012e0f0  FUN_0012e0f0 =====

dynamic * FUN_0012e0f0(long *param_1,dynamic *param_2)

{
  ulong uVar1;
  dynamic *pdVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  dynamic *pdVar7;
  dynamic *this;
  dynamic *pdVar8;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
    FUN_0012e22c();
LAB_0012e228:
                    /* WARNING: Subroutine does not return */
    FUN_0012dfd0();
  }
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar6 = lVar5 * 0x5555555555555556;
  if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
    uVar6 = uVar1;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar6 = 0x555555555555555;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar6) goto LAB_0012e228;
    pvVar3 = operator_new(uVar6 * 0x30);
  }
  this = (dynamic *)((long)pvVar3 + lVar4 * 0x10);
  pvVar3 = (void *)((long)pvVar3 + uVar6 * 0x30);
  folly::dynamic::dynamic(this,param_2);
  pdVar8 = (dynamic *)*param_1;
  pdVar7 = (dynamic *)param_1[1];
  pdVar2 = this + 0x30;
  if (pdVar7 == pdVar8) {
    *param_1 = (long)this;
    param_1[1] = (long)pdVar2;
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      this = this + -0x30;
      pdVar7 = pdVar7 + -0x30;
      folly::dynamic::dynamic(this,pdVar7);
    } while (pdVar7 != pdVar8);
    pdVar7 = (dynamic *)*param_1;
    pdVar8 = (dynamic *)param_1[1];
    *param_1 = (long)this;
    param_1[1] = (long)pdVar2;
    param_1[2] = (long)pvVar3;
    for (; pdVar8 != pdVar7; pdVar8 = pdVar8 + -0x30) {
      folly::dynamic::destroy();
    }
  }
  if (pdVar7 != (dynamic *)0x0) {
    operator_delete(pdVar7);
  }
  return pdVar2;
}


// ===== 0012e22c  FUN_0012e22c =====

void FUN_0012e22c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 0012e240  FUN_0012e240 =====

bool FUN_0012e240(int *param_1)

{
  if (param_1[0xc] == 1) {
    return 1 < (uint)param_1[2];
  }
  if (param_1[0xc] == 0) {
    return *param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0012e304();
}


// ===== 0012e27c  FUN_0012e27c =====

void FUN_0012e27c(int *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1[0xc] == 1) {
    bVar1 = facebook::jsi::Value::asBool();
  }
  else {
    if (param_1[0xc] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0012e304();
    }
    if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00123890(*(undefined8 *)PTR_name_00144f28);
    }
    bVar1 = (char)param_1[2] != '\0';
  }
  *param_2 = bVar1 & 1;
  return;
}


// ===== 0012e2e8  FUN_0012e2e8 =====

void FUN_0012e2e8(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_0012e338(param_1,pbVar2,uVar1);
  return;
}


// ===== 0012e304  FUN_0012e304 =====

void FUN_0012e304(void)

{
  long *plVar1;
  
  plVar1 = (long *)__cxa_allocate_exception(8);
  *plVar1 = (long)(PTR_vtable_00144f20 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar1,PTR_typeinfo_00144f18,PTR__exception_00144ef0);
}


// ===== 0012e338  FUN_0012e338 =====

basic_ostream * FUN_0012e338(basic_ostream *param_1,long param_2,long param_3)

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
                    /* try { // try from 0012e370 to 0012e37b has its CatchHandler @ 0012e59c */
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry(local_90,param_1);
  if (local_90[0] == (sentry)0x0) goto LAB_0012e524;
  lVar8 = *(long *)(*(long *)param_1 + -0x18);
  uVar3 = *(uint *)(param_1 + lVar8 + 0x90);
  plVar9 = *(long **)(param_1 + lVar8 + 0x28);
  uVar1 = *(uint *)(param_1 + lVar8 + 8);
  if (uVar3 == 0xffffffff) {
                    /* try { // try from 0012e3a4 to 0012e3af has its CatchHandler @ 0012e58c */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 0012e3b0 to 0012e3cf has its CatchHandler @ 0012e578 */
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
                    /* try { // try from 0012e41c to 0012e467 has its CatchHandler @ 0012e58c */
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
                    /* try { // try from 0012e4ac to 0012e4b7 has its CatchHandler @ 0012e560 */
        uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,pvVar10,__n);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        if (uVar6 != __n) goto LAB_0012e508;
      }
      lVar11 = (param_2 + param_3) - lVar7;
                    /* try { // try from 0012e4e8 to 0012e4f7 has its CatchHandler @ 0012e58c */
      if ((lVar11 < 1) ||
         (lVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar7,lVar11), lVar7 == lVar11)) {
        *(undefined8 *)(param_1 + lVar8 + 0x18) = 0;
        goto LAB_0012e524;
      }
    }
  }
LAB_0012e508:
                    /* try { // try from 0012e51c to 0012e523 has its CatchHandler @ 0012e588 */
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
LAB_0012e524:
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_90);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012e5e8  FUN_0012e5e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012e5e8(ContextContainer *param_1,ulong param_2,ContextContainer *param_3,
                 ContextContainer **param_4)

{
  ContextContainer CVar1;
  ContextContainer CVar2;
  ContextContainer *pCVar3;
  ContextContainer *pCVar4;
  undefined1 auVar5 [16];
  undefined5 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float extraout_w0;
  float extraout_w0_00;
  uint uVar15;
  ulong uVar16;
  ContextContainer **ppCVar17;
  void *pvVar18;
  int extraout_var;
  int extraout_var_00;
  uint extraout_w8;
  uint uVar19;
  ulong extraout_x9;
  ulong extraout_x9_00;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  ulong uVar24;
  int iVar25;
  ContextContainer *pCVar26;
  ContextContainer **ppCVar27;
  long extraout_x16;
  long extraout_x16_00;
  long lVar28;
  ContextContainer *pCVar29;
  int iVar30;
  ContextContainer **ppCVar31;
  long lVar32;
  ulong uVar33;
  RawValue *pRVar34;
  long *plVar35;
  ContextContainer **ppCVar36;
  ContextContainer **ppCVar37;
  ContextContainer **ppCVar38;
  ContextContainer **ppCVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar43;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar60;
  ulong uVar61;
  ContextContainer *pCVar62;
  float fVar63;
  undefined8 uVar64;
  ulong uVar65;
  undefined8 in_d4;
  undefined7 uVar66;
  int iVar67;
  int iVar68;
  ulong uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 *local_2a0;
  float local_280;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  float local_254;
  uint uStack_250;
  uint local_24c;
  uint uStack_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  byte local_228 [8];
  ContextContainer *local_220;
  ContextContainer *local_218;
  ContextContainer *local_210 [6];
  ContextContainer *local_1e0;
  ContextContainer *pCStack_1d8;
  long *local_1d0;
  undefined8 local_1c8;
  ContextContainer *pCStack_1c0;
  ulong local_1b8;
  undefined8 uStack_1b0;
  ContextContainer *local_1a8;
  ulong uStack_1a0;
  int local_198;
  undefined4 uStack_194;
  ContextContainer *local_190;
  ContextContainer *pCStack_188;
  long *local_180;
  undefined8 uStack_178;
  ContextContainer *local_170;
  ulong uStack_168;
  undefined8 uStack_160;
  ContextContainer *pCStack_158;
  ulong local_150;
  undefined8 uStack_148;
  ContextContainer local_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined2 uStack_13d;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  ContextContainer *pCStack_138;
  long *local_130;
  int local_128;
  undefined4 uStack_124;
  ContextContainer *pCStack_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  ContextContainer *pCStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  ContextContainer *local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  long local_98;
  undefined3 uVar69;
  
  lVar28 = tpidr_el0;
  local_98 = *(long *)(lVar28 + 0x28);
  ppCVar31 = (ContextContainer **)(param_2 & 0xffffffff);
  iVar30 = (int)param_2;
  ppCVar27 = &local_1e0;
  uVar13 = facebook::react::getDefaultColorSpace();
  uVar16 = facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing();
  iVar60 = *(int *)((RawValue *)param_3 + 0x30);
  if ((uVar16 & 1) == 0) {
LAB_0012e718:
    if (iVar60 == 1) {
      pRVar34 = (RawValue *)param_3 + 8;
      iVar60 = *(int *)pRVar34;
      if (iVar60 != 3) {
        if (iVar60 == 7) {
          plVar35 = *(long **)param_3;
                    /* try { // try from 0012e788 to 0012e7f7 has its CatchHandler @ 00131ea0 */
          uVar55 = (**(code **)(*plVar35 + 0x88))
                             (plVar35,*(undefined8 *)((RawValue *)param_3 + 0x10));
          local_140 = SUB81(uVar55,0);
          uStack_13f = (undefined1)((ulong)uVar55 >> 8);
          uStack_13e = (undefined1)((ulong)uVar55 >> 0x10);
          uStack_13d = (undefined2)((ulong)uVar55 >> 0x18);
          uStack_13b = (undefined2)((ulong)uVar55 >> 0x28);
          uStack_139 = (undefined1)((ulong)uVar55 >> 0x38);
          uVar16 = (**(code **)(*plVar35 + 0x1e0))(plVar35,&local_140);
          if ((uVar16 & 1) == 0) {
            bVar12 = false;
          }
          else {
            local_190 = (ContextContainer *)
                        (**(code **)(*plVar35 + 0x88))
                                  (plVar35,CONCAT17(uStack_139,
                                                    CONCAT25(uStack_13b,
                                                             CONCAT23(uStack_13d,
                                                                      CONCAT12(uStack_13e,
                                                                               CONCAT11(uStack_13f,
                                                                                        local_140)))
                                                            )));
            lVar32 = (**(code **)(*plVar35 + 0x240))(plVar35,&local_190);
            if (lVar32 == 0) {
              bVar12 = true;
            }
            else {
              (**(code **)(*plVar35 + 0x260))(&local_f0,plVar35,&local_190,0);
              bVar12 = (int)local_f0 == 3;
              facebook::jsi::Value::~Value((Value *)&local_f0);
            }
            if (local_190 != (ContextContainer *)0x0) {
              (*(code *)**(undefined8 **)local_190)();
            }
          }
          puVar23 = (undefined8 *)
                    CONCAT17(uStack_139,
                             CONCAT25(uStack_13b,
                                      CONCAT23(uStack_13d,
                                               CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_140))))
                            );
          if (puVar23 != (undefined8 *)0x0) {
            (**(code **)*puVar23)();
          }
          iVar60 = *(int *)((RawValue *)param_3 + 0x30);
          if (bVar12) {
            if (iVar60 == 1) {
              plVar35 = *(long **)param_3;
              local_2a0 = (undefined8 *)
                          (**(code **)(*plVar35 + 0x88))
                                    (plVar35,*(undefined8 *)((RawValue *)param_3 + 0x10));
                    /* try { // try from 0012ef84 to 0012ef97 has its CatchHandler @ 00131dac */
              uVar55 = (**(code **)(*plVar35 + 0x88))(plVar35,local_2a0);
              local_140 = SUB81(uVar55,0);
              uStack_13f = (undefined1)((ulong)uVar55 >> 8);
              uStack_13e = (undefined1)((ulong)uVar55 >> 0x10);
              uStack_13d = (undefined2)((ulong)uVar55 >> 0x18);
              uStack_13b = (undefined2)((ulong)uVar55 >> 0x28);
              uStack_139 = (undefined1)((ulong)uVar55 >> 0x38);
                    /* try { // try from 0012efa4 to 0012efaf has its CatchHandler @ 00131da8 */
              uVar16 = (**(code **)(*plVar35 + 0x240))(plVar35,&local_140);
              if (uVar16 == 0) {
                ppCVar37 = (ContextContainer **)0x0;
                ppCVar17 = (ContextContainer **)0x0;
              }
              else {
                if (uVar16 >> 0x3e != 0) goto LAB_00131d94;
                    /* try { // try from 0012efc8 to 0012efcb has its CatchHandler @ 00131dbc */
                ppCVar17 = (ContextContainer **)operator_new(uVar16 << 2);
                ppCVar27 = (ContextContainer **)((long)ppCVar17 + uVar16 * 4);
                uVar33 = 0;
                ppCVar31 = ppCVar17;
                ppCVar37 = ppCVar17;
                do {
                    /* try { // try from 0012f00c to 0012f01f has its CatchHandler @ 00131eb0 */
                  (**(code **)(*plVar35 + 0x260))(&local_f0,plVar35,&local_140,uVar33);
                    /* try { // try from 0012f020 to 0012f07b has its CatchHandler @ 00131ebc */
                  dVar44 = (double)facebook::jsi::Value::asNumber();
                  if (ppCVar17 < ppCVar27) {
                    *(float *)ppCVar17 = (float)dVar44;
                    ppCVar36 = ppCVar31;
                    ppCVar38 = ppCVar17;
                  }
                  else {
                    lVar32 = (long)ppCVar17 - (long)ppCVar31;
                    uVar61 = (lVar32 >> 2) + 1;
                    if (uVar61 >> 0x3e != 0) goto LAB_00131c80;
                    uVar65 = (long)ppCVar27 - (long)ppCVar31 >> 1;
                    if (uVar65 <= uVar61) {
                      uVar65 = uVar61;
                    }
                    if (0x7ffffffffffffffb < (ulong)((long)ppCVar27 - (long)ppCVar31)) {
                      uVar65 = 0x3fffffffffffffff;
                    }
                    if (uVar65 == 0) {
                      pvVar18 = (void *)0x0;
                    }
                    else {
                      if (uVar65 >> 0x3e != 0) goto LAB_00131c98;
                      pvVar18 = operator_new(uVar65 << 2);
                    }
                    ppCVar38 = (ContextContainer **)((long)pvVar18 + (lVar32 >> 2) * 4);
                    *(float *)ppCVar38 = (float)dVar44;
                    ppCVar36 = ppCVar38;
                    if ((long)ppCVar17 - (long)ppCVar31 != 0) {
                      uVar61 = ((long)ppCVar17 - (long)ppCVar31) - 4;
                      if (0xab < uVar61) {
                        puVar20 = (uint *)((long)ppCVar17 + -4);
                        uVar24 = (long)pvVar18 + lVar32 + -4;
                        uVar70 = (long)puVar20 - (long)ppCVar31 & 0xfffffffffffffffc;
                        if (((uVar24 - uVar70 <= uVar24) &&
                            ((uint *)((long)puVar20 - uVar70) <= puVar20)) &&
                           (0x1f < (ulong)((long)ppCVar17 + (-lVar32 - (long)pvVar18)))) {
                          uVar61 = (uVar61 >> 2) + 1;
                          uVar24 = uVar61 & 0x7ffffffffffffff8;
                          ppCVar36 = (ContextContainer **)((long)ppCVar38 + uVar24 * -4);
                          puVar23 = (undefined8 *)((long)pvVar18 + lVar32 + -0x10);
                          ppCVar27 = ppCVar17 + -2;
                          uVar70 = uVar24;
                          do {
                            pCVar29 = ppCVar27[-2];
                            ppCVar37 = ppCVar27 + -1;
                            pCVar26 = *ppCVar27;
                            pCVar3 = ppCVar27[1];
                            uVar70 = uVar70 - 8;
                            ppCVar27 = ppCVar27 + -4;
                            puVar23[-1] = *ppCVar37;
                            puVar23[-2] = pCVar29;
                            puVar23[1] = pCVar3;
                            *puVar23 = pCVar26;
                            puVar23 = puVar23 + -4;
                          } while (uVar70 != 0);
                          ppCVar17 = (ContextContainer **)((long)ppCVar17 + uVar24 * -4);
                          if (uVar61 == uVar24) goto LAB_0012f0b8;
                        }
                      }
                      do {
                        ppCVar17 = (ContextContainer **)((long)ppCVar17 + -4);
                        ppCVar36 = (ContextContainer **)((long)ppCVar36 + -4);
                        *(uint *)ppCVar36 = *(uint *)ppCVar17;
                      } while (ppCVar17 != ppCVar31);
                    }
LAB_0012f0b8:
                    ppCVar27 = (ContextContainer **)((long)pvVar18 + uVar65 * 4);
                    ppCVar37 = ppCVar36;
                    if (ppCVar31 != (ContextContainer **)0x0) {
                      operator_delete(ppCVar31);
                    }
                  }
                  ppCVar17 = (ContextContainer **)((long)ppCVar38 + 4);
                  facebook::jsi::Value::~Value((Value *)&local_f0);
                  uVar33 = uVar33 + 1;
                  ppCVar31 = ppCVar36;
                } while (uVar33 != uVar16);
              }
              puVar23 = (undefined8 *)
                        CONCAT17(uStack_139,
                                 CONCAT25(uStack_13b,
                                          CONCAT23(uStack_13d,
                                                   CONCAT12(uStack_13e,
                                                            CONCAT11(uStack_13f,local_140)))));
              if (puVar23 != (undefined8 *)0x0) {
                (**(code **)*puVar23)();
              }
              if (local_2a0 != (undefined8 *)0x0) {
                (**(code **)*local_2a0)();
              }
LAB_0012f61c:
              uVar16 = (long)ppCVar17 - (long)ppCVar37;
              if (((ppCVar17 == ppCVar37) || (uVar16 < 5)) || (uVar16 == 8)) goto LAB_00131c68;
              uStack_248 = 0x3f800000;
              local_254 = *(float *)ppCVar37;
              uStack_250 = *(uint *)((long)ppCVar37 + 4);
              local_24c = *(uint *)(ppCVar37 + 1);
              if (uVar16 == 0x10) {
                uStack_248 = *(uint *)((long)ppCVar37 + 0xc);
              }
                    /* try { // try from 0012f664 to 0012f66b has its CatchHandler @ 00131e5c */
              local_244 = uVar13;
              uVar15 = facebook::react::colorFromComponents(&local_254);
              *(uint *)param_4 = uVar15;
              operator_delete(ppCVar37);
              goto LAB_0012f4e8;
            }
            if (iVar60 == 0) goto LAB_0012ecbc;
          }
          else {
            if (iVar60 == 1) {
              iVar60 = *(int *)pRVar34;
              goto LAB_0012f174;
            }
            if (iVar60 == 0) {
              iVar60 = *(int *)param_3;
              goto LAB_0012ecf8;
            }
          }
        }
        else {
LAB_0012f174:
          if (iVar60 != 7) goto LAB_0012f4d4;
          plVar35 = *(long **)param_3;
          uVar55 = (**(code **)(*plVar35 + 0x88))
                             (plVar35,*(undefined8 *)((RawValue *)param_3 + 0x10));
          local_140 = SUB81(uVar55,0);
          uStack_13f = (undefined1)((ulong)uVar55 >> 8);
          uStack_13e = (undefined1)((ulong)uVar55 >> 0x10);
          uStack_13d = (undefined2)((ulong)uVar55 >> 0x18);
          uStack_13b = (undefined2)((ulong)uVar55 >> 0x28);
          uStack_139 = (undefined1)((ulong)uVar55 >> 0x38);
                    /* try { // try from 0012f1a0 to 0012f1af has its CatchHandler @ 00131e30 */
          (**(code **)(*plVar35 + 0x218))(&local_190,plVar35,&local_140);
                    /* try { // try from 0012f1b8 to 0012f1c3 has its CatchHandler @ 00131e0c */
          lVar32 = (**(code **)(*plVar35 + 0x240))(plVar35,&local_190);
          if (lVar32 != 0) {
                    /* try { // try from 0012f1d0 to 0012f1e3 has its CatchHandler @ 00131e08 */
            (**(code **)(*plVar35 + 0x260))(&local_f0,plVar35,&local_190,0);
            local_1e0 = pCStack_e8;
            pCStack_e8 = (ContextContainer *)0x0;
            facebook::jsi::Value::~Value((Value *)&local_f0);
                    /* try { // try from 0012f200 to 0012f213 has its CatchHandler @ 00131dcc */
            (**(code **)(*plVar35 + 0x188))(&local_f0,plVar35,&local_140,&local_1e0);
            facebook::jsi::Value::~Value((Value *)&local_f0);
            if (local_1e0 != (ContextContainer *)0x0) {
              (*(code *)**(undefined8 **)local_1e0)();
            }
          }
          if (local_190 != (ContextContainer *)0x0) {
            (*(code *)**(undefined8 **)local_190)();
          }
          puVar23 = (undefined8 *)
                    CONCAT17(uStack_139,
                             CONCAT25(uStack_13b,
                                      CONCAT23(uStack_13d,
                                               CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_140))))
                            );
          if (puVar23 != (undefined8 *)0x0) {
            (**(code **)*puVar23)();
          }
          if (*(int *)((RawValue *)param_3 + 0x30) == 1) {
            FUN_00138aac(&local_f0,*(undefined8 *)param_3,pRVar34);
            goto LAB_0012f288;
          }
          if (*(int *)((RawValue *)param_3 + 0x30) == 0) goto LAB_0012f268;
        }
LAB_00131c34:
        if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
          FUN_0012e304();
        }
        goto LAB_00131f54;
      }
      dVar44 = (double)facebook::jsi::Value::asNumber();
      uVar16 = (ulong)dVar44;
LAB_0012e8d4:
      auVar45._8_8_ = uVar16;
      auVar45._0_8_ = uVar16;
      auVar45 = NEON_ushl(auVar45,_DAT_00110670,8);
      auVar57[0] = auVar45[0];
      auVar57._1_7_ = 0;
      auVar57[8] = auVar45[8];
      auVar57._9_7_ = 0;
      auVar45 = NEON_scvtf(auVar57,8);
      auVar56._0_8_ = uVar16 & 0xff;
      auVar56[8] = (undefined1)(uVar16 >> 0x18);
      auVar56._9_7_ = 0;
      auVar57 = NEON_scvtf(auVar56,8);
      auVar46._0_8_ = CONCAT44((float)auVar45._8_8_ / 255.0,(float)auVar45._0_8_ / 255.0);
      auVar46._8_4_ = (float)auVar57._0_8_ / 255.0;
      auVar46._12_4_ = (float)auVar57._8_8_ / 255.0;
      uStack_238 = auVar46._8_8_;
      local_240 = auVar46._0_8_;
      local_230 = uVar13;
      uVar15 = facebook::react::colorFromComponents(&local_240);
    }
    else {
      if (iVar60 != 0) goto LAB_00131c34;
      iVar60 = *(int *)param_3;
      if (iVar60 - 3U < 2) {
        if (iVar60 == 3) {
          uVar16 = FUN_00137738((RawValue *)param_3 + 8);
        }
        else {
          if (iVar60 != 4) {
            local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
            if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
              FUN_00123890("int/double/bool/string");
            }
            goto LAB_00131f54;
          }
          uVar16 = *(ulong *)((RawValue *)param_3 + 8);
        }
        goto LAB_0012e8d4;
      }
      if (iVar60 == 1) {
        if ((*(int **)((RawValue *)param_3 + 8) == *(int **)((RawValue *)param_3 + 0x10)) ||
           (**(int **)((RawValue *)param_3 + 8) - 3U < 2)) {
LAB_0012ecbc:
          uVar16 = folly::dynamic::size();
          if (uVar16 == 0) {
            ppCVar38 = (ContextContainer **)0x0;
            ppCVar17 = (ContextContainer **)0x0;
          }
          else {
            if (uVar16 >> 0x3e != 0) {
              if (*(long *)(lVar28 + 0x28) != local_98) goto LAB_00131f54;
              FUN_00137da4();
LAB_00131d94:
              if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131da4 to 00131da7 has its CatchHandler @ 00131dbc */
                uVar55 = FUN_00137da4();
                    /* catch() { ... } // from try @ 0012efa4 with catch @ 00131da8 */
                    /* catch() { ... } // from try @ 0012efc8 with catch @ 00131dbc
                       catch() { ... } // from try @ 00131da4 with catch @ 00131dbc */
                puVar23 = (undefined8 *)
                          CONCAT17(uStack_139,
                                   CONCAT25(uStack_13b,
                                            CONCAT23(uStack_13d,
                                                     CONCAT12(uStack_13e,
                                                              CONCAT11(uStack_13f,local_140)))));
                if (puVar23 != (undefined8 *)0x0) {
                  (**(code **)*puVar23)();
                }
                if (local_2a0 != (undefined8 *)0x0) {
                  (**(code **)*local_2a0)();
                }
                if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
                  FUN_0011cd74(uVar55);
                }
              }
              goto LAB_00131f54;
            }
            ppCVar17 = (ContextContainer **)operator_new(uVar16 * 4);
            ppCVar38 = (ContextContainer **)((long)ppCVar17 + uVar16 * 4);
          }
          if (*(int *)param_3 != 1) {
            if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131ce0 to 00131cef has its CatchHandler @ 00131e58 */
                    /* WARNING: Subroutine does not return */
              FUN_00123890(*(undefined8 *)PTR_name_00144f00);
            }
            goto LAB_00131f54;
          }
          param_1 = *(ContextContainer **)((RawValue *)param_3 + 8);
          param_3 = *(ContextContainer **)((RawValue *)param_3 + 0x10);
          if (param_1 != param_3) {
            ppCVar36 = (ContextContainer **)0x3fffffffffffffff;
            ppCVar27 = ppCVar17;
            ppCVar39 = param_4;
            do {
              iVar30 = (int)ppCVar31;
              iVar60 = *(int *)param_1;
              if (iVar60 < 4) {
                if (iVar60 == 2) {
                  dVar44 = (double)NEON_ucvtf((ulong)(byte)param_1[8]);
                }
                else {
                  if (iVar60 != 3) {
LAB_00131c48:
                    local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                    if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131c5c to 00131c67 has its CatchHandler @ 00131f28 */
                    /* WARNING: Subroutine does not return */
                      FUN_00123890("int/double/bool/string");
                    }
                    goto LAB_00131f54;
                  }
                  dVar44 = *(double *)(param_1 + 8);
                }
              }
              else if (iVar60 == 6) {
                uVar16 = (ulong)((byte)param_1[8] >> 1);
                local_190 = param_1 + 9;
                if (((byte)param_1[8] & 1) != 0) {
                  uVar16 = *(ulong *)(param_1 + 0x10);
                  local_190 = *(ContextContainer **)(param_1 + 0x18);
                }
                pCStack_188 = local_190 + uVar16;
                local_140 = SUB81(local_190,0);
                uStack_13f = (undefined1)((ulong)local_190 >> 8);
                uStack_13e = (undefined1)((ulong)local_190 >> 0x10);
                uStack_13d = (undefined2)((ulong)local_190 >> 0x18);
                uStack_13b = (undefined2)((ulong)local_190 >> 0x28);
                uStack_139 = (undefined1)((ulong)local_190 >> 0x38);
                pCStack_138 = pCStack_188;
                auVar45 = folly::detail::str_to_floating<double>(&local_140);
                dVar44 = auVar45._8_8_;
                if ((auVar45._0_8_ & 0xff) != 1) {
                  local_140 = SUB81(&local_190,0);
                  uStack_13f = (undefined1)((ulong)&local_190 >> 8);
                  uStack_13e = (undefined1)((ulong)&local_190 >> 0x10);
                  uStack_13d = (undefined2)((ulong)&local_190 >> 0x18);
                  uStack_13b = (undefined2)((ulong)&local_190 >> 0x28);
                  uStack_139 = (undefined1)((ulong)&local_190 >> 0x38);
                  if (*(long *)(lVar28 + 0x28) != local_98) goto LAB_00131f54;
                    /* try { // try from 0013025c to 00130267 has its CatchHandler @ 00131f2c */
                  FUN_00138410(&local_140,auVar45._0_8_ >> 8);
                  lVar28 = extraout_x16;
                  uVar15 = extraout_w8;
                  goto LAB_00130268;
                }
                uVar6 = CONCAT23(uStack_13d,CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_140)));
                pCVar29 = (ContextContainer *)CONCAT17(uStack_139,CONCAT25(uStack_13b,uVar6));
                local_e0 = 1;
                local_f0._0_4_ = (int)uVar6;
                local_f0._4_4_ = (undefined4)((ulong)pCVar29 >> 0x20);
                pCStack_e8 = pCStack_138;
                for (; pCStack_138 != pCVar29; pCVar29 = pCVar29 + 1) {
                  if (((byte)*pCVar29 != 0x20) && (4 < (byte)*pCVar29 - 9)) {
                    local_1e0 = (ContextContainer *)&local_f0;
                    local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                    if (*(long *)(lVar28 + 0x28) != local_98) goto LAB_00131f54;
                    /* try { // try from 001316cc to 001316d3 has its CatchHandler @ 00131f2c */
                    FUN_00138484(&local_1e0);
                    lVar28 = extraout_x16_00;
                    goto LAB_001316d4;
                  }
                }
              }
              else {
                if (iVar60 != 4) goto LAB_00131c48;
                    /* try { // try from 0012ed88 to 0012ee43 has its CatchHandler @ 00131f20 */
                dVar44 = (double)FUN_00137db8(param_1 + 8);
              }
              if (ppCVar17 < ppCVar38) {
                *(float *)ppCVar17 = (float)dVar44;
                ppCVar37 = ppCVar27;
                ppCVar39 = ppCVar17;
              }
              else {
                lVar32 = (long)ppCVar17 - (long)ppCVar27;
                uVar16 = (lVar32 >> 2) + 1;
                if (uVar16 >> 0x3e != 0) {
                  local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                  if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131c18 to 00131c33 has its CatchHandler @ 00131f28 */
                    FUN_00137da4();
LAB_00131c1c:
                    local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
                    if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
                      FUN_0012dfd0();
                    }
                  }
                  goto LAB_00131f54;
                }
                uVar33 = (long)ppCVar38 - (long)ppCVar27 >> 1;
                if (uVar33 <= uVar16) {
                  uVar33 = uVar16;
                }
                if (0x7ffffffffffffffb < (ulong)((long)ppCVar38 - (long)ppCVar27)) {
                  uVar33 = 0x3fffffffffffffff;
                }
                if (uVar33 == 0) {
                  pvVar18 = (void *)0x0;
                }
                else {
                  if (uVar33 >> 0x3e != 0) goto LAB_00131c1c;
                  pvVar18 = operator_new(uVar33 << 2);
                }
                ppCVar39 = (ContextContainer **)((long)pvVar18 + (lVar32 >> 2) * 4);
                *(float *)ppCVar39 = (float)dVar44;
                ppCVar31 = ppCVar39;
                if ((long)ppCVar17 - (long)ppCVar27 != 0) {
                  uVar16 = ((long)ppCVar17 - (long)ppCVar27) - 4;
                  if (0xab < uVar16) {
                    puVar20 = (uint *)((long)ppCVar17 + -4);
                    uVar65 = (long)pvVar18 + lVar32 + -4;
                    uVar61 = (long)puVar20 - (long)ppCVar27 & 0xfffffffffffffffc;
                    if (((uVar65 - uVar61 <= uVar65) &&
                        ((uint *)((long)puVar20 - uVar61) <= puVar20)) &&
                       (0x1f < (ulong)((long)ppCVar17 + (-lVar32 - (long)pvVar18)))) {
                      uVar16 = (uVar16 >> 2) + 1;
                      uVar65 = uVar16 & 0x7ffffffffffffff8;
                      ppCVar31 = (ContextContainer **)((long)ppCVar39 + uVar65 * -4);
                      puVar23 = (undefined8 *)((long)pvVar18 + lVar32 + -0x10);
                      ppCVar37 = ppCVar17 + -2;
                      uVar61 = uVar65;
                      do {
                        pCVar3 = ppCVar37[-2];
                        ppCVar38 = ppCVar37 + -1;
                        pCVar29 = *ppCVar37;
                        pCVar26 = ppCVar37[1];
                        uVar61 = uVar61 - 8;
                        ppCVar37 = ppCVar37 + -4;
                        puVar23[-1] = *ppCVar38;
                        puVar23[-2] = pCVar3;
                        puVar23[1] = pCVar26;
                        *puVar23 = pCVar29;
                        puVar23 = puVar23 + -4;
                      } while (uVar61 != 0);
                      ppCVar17 = (ContextContainer **)((long)ppCVar17 + uVar65 * -4);
                      if (uVar16 == uVar65) goto LAB_0012eea8;
                    }
                  }
                  do {
                    ppCVar17 = (ContextContainer **)((long)ppCVar17 + -4);
                    ppCVar31 = (ContextContainer **)((long)ppCVar31 + -4);
                    *(uint *)ppCVar31 = *(uint *)ppCVar17;
                  } while (ppCVar17 != ppCVar27);
                }
LAB_0012eea8:
                ppCVar38 = (ContextContainer **)((long)pvVar18 + uVar33 * 4);
                ppCVar37 = ppCVar31;
                if (ppCVar27 != (ContextContainer **)0x0) {
                  operator_delete(ppCVar27);
                }
              }
              ppCVar17 = (ContextContainer **)((long)ppCVar39 + 4);
              param_1 = param_1 + 0x30;
              ppCVar27 = ppCVar37;
              ppCVar39 = ppCVar17;
            } while (param_1 != param_3);
            goto LAB_0012f61c;
          }
LAB_00131c68:
          local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
          if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131c7c to 00131c7f has its CatchHandler @ 00131ea8 */
            FUN_00138534();
LAB_00131c80:
            local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
            if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131c94 to 00131caf has its CatchHandler @ 00131ea4 */
              FUN_00137da4();
LAB_00131c98:
              local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
              if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* WARNING: Subroutine does not return */
                FUN_0012dfd0();
              }
            }
          }
          goto LAB_00131f54;
        }
      }
      else {
LAB_0012ecf8:
        if (iVar60 == 5) {
LAB_0012f268:
          FUN_00138548(&local_f0,param_3);
LAB_0012f288:
          local_140 = (ContextContainer)0xa;
          uStack_13f = 0x73;
          uStack_13e = 0x70;
          uStack_13d = 0x6361;
          uStack_13b = 0x65;
          lVar32 = FUN_0013993c(&local_f0,&local_140);
          if (((byte)local_140 & 1) != 0) {
            operator_delete(local_130);
          }
          if (lVar32 != 0) {
            local_140 = (ContextContainer)0x2;
            uStack_13f = 0x72;
            uStack_13e = 0;
            lVar32 = FUN_0013993c(&local_f0,&local_140);
            if (lVar32 == 0) {
              if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131d00 to 00131d0b has its CatchHandler @ 00131e80 */
                    /* WARNING: Subroutine does not return */
                FUN_00136468("unordered_map::at: key not found");
              }
              goto LAB_00131f54;
            }
                    /* try { // try from 0012f2e4 to 0012f2eb has its CatchHandler @ 00131e80 */
            uVar13 = FUN_00134178(lVar32 + 0x28);
            if (((byte)local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_140 = (ContextContainer)0x2;
            uStack_13f = 0x67;
            uStack_13e = 0;
            lVar32 = FUN_0013993c(&local_f0,&local_140);
            if (lVar32 == 0) {
              if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131d1c to 00131d27 has its CatchHandler @ 00131e7c */
                    /* WARNING: Subroutine does not return */
                FUN_00136468("unordered_map::at: key not found");
              }
              goto LAB_00131f54;
            }
                    /* try { // try from 0012f31c to 0012f323 has its CatchHandler @ 00131e7c */
            uVar40 = FUN_00134178(lVar32 + 0x28);
            if (((byte)local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_140 = (ContextContainer)0x2;
            uStack_13f = 0x62;
            uStack_13e = 0;
            lVar32 = FUN_0013993c(&local_f0,&local_140);
            if (lVar32 == 0) {
              if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131d38 to 00131d43 has its CatchHandler @ 00131e78 */
                    /* WARNING: Subroutine does not return */
                FUN_00136468("unordered_map::at: key not found");
              }
              goto LAB_00131f54;
            }
                    /* try { // try from 0012f354 to 0012f35b has its CatchHandler @ 00131e78 */
            uVar41 = FUN_00134178(lVar32 + 0x28);
            if (((byte)local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            local_140 = (ContextContainer)0x2;
            uStack_13f = 0x61;
            uStack_13e = 0;
            lVar32 = FUN_0013993c(&local_f0,&local_140);
            if (lVar32 == 0) {
              if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131d54 to 00131d5f has its CatchHandler @ 00131e74 */
                    /* WARNING: Subroutine does not return */
                FUN_00136468("unordered_map::at: key not found");
              }
              goto LAB_00131f54;
            }
                    /* try { // try from 0012f38c to 0012f393 has its CatchHandler @ 00131e74 */
            uVar42 = FUN_00134178(lVar32 + 0x28);
            if (((byte)local_140 & 1) != 0) {
              operator_delete(local_130);
            }
                    /* try { // try from 0012f3a8 to 0012f3ab has its CatchHandler @ 00131e50 */
            uVar14 = facebook::react::getDefaultColorSpace();
            local_190 = (ContextContainer *)CONCAT17(local_190._7_1_,0x65636170730a);
            lVar32 = FUN_0013993c(&local_f0,&local_190);
            if (lVar32 == 0) {
              if (*(long *)(lVar28 + 0x28) == local_98) {
                    /* try { // try from 00131d70 to 00131d7b has its CatchHandler @ 00131e60 */
                    /* WARNING: Subroutine does not return */
                FUN_00136468("unordered_map::at: key not found");
              }
              goto LAB_00131f54;
            }
                    /* try { // try from 0012f3dc to 0012f3e7 has its CatchHandler @ 00131e60 */
            FUN_00134010(&local_140,lVar32 + 0x28);
            if (((ulong)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
            pCVar29 = (ContextContainer *)(ulong)((byte)local_140 >> 1);
            if (((byte)local_140 & 1) != 0) {
              pCVar29 = pCStack_138;
            }
            if (pCVar29 == (ContextContainer *)0x4) {
              plVar35 = (long *)((ulong)&local_140 | 1);
              if (((byte)local_140 & 1) != 0) {
                plVar35 = local_130;
              }
              if ((int)*plVar35 == 0x62677273) {
                uVar14 = 0;
              }
            }
            else if (pCVar29 == (ContextContainer *)0xa) {
              plVar35 = (long *)((ulong)&local_140 | 1);
              if (((byte)local_140 & 1) != 0) {
                plVar35 = local_130;
              }
              if (*plVar35 == 0x2d79616c70736964 && (short)plVar35[1] == 0x3370) {
                uVar14 = 1;
              }
            }
                    /* try { // try from 0012f554 to 0012f55b has its CatchHandler @ 00131e4c */
            local_268 = uVar13;
            uStack_264 = uVar40;
            local_260 = uVar41;
            uStack_25c = uVar42;
            local_258 = uVar14;
            uVar15 = facebook::react::colorFromComponents(&local_268);
            *(uint *)param_4 = uVar15;
            if (((byte)local_140 & 1) != 0) {
              operator_delete(local_130);
            }
            puVar23 = (undefined8 *)CONCAT71(uStack_df,local_e0);
            while (puVar23 != (undefined8 *)0x0) {
              pvVar18 = (void *)*puVar23;
              if (*(uint *)(puVar23 + 0xb) != 0xffffffff) {
                    /* try { // try from 0012f5ac to 0012f5b7 has its CatchHandler @ 00131f1c */
                (*(code *)(&PTR_FUN_00144948)[*(uint *)(puVar23 + 0xb)])(&local_140,puVar23 + 5);
              }
              *(undefined4 *)(puVar23 + 0xb) = 0xffffffff;
              if ((*(byte *)(puVar23 + 2) & 1) != 0) {
                operator_delete((void *)puVar23[4]);
              }
              operator_delete(puVar23);
              puVar23 = (undefined8 *)pvVar18;
            }
            pvVar18 = (void *)CONCAT44(local_f0._4_4_,(int)local_f0);
            local_f0._0_4_ = 0;
            local_f0._4_4_ = 0;
            local_f0 = (ContextContainer *)0x0;
            if (pvVar18 != (void *)0x0) {
              operator_delete(pvVar18);
            }
            goto LAB_0012f4e8;
          }
          puVar23 = (undefined8 *)CONCAT71(uStack_df,local_e0);
          while (puVar23 != (undefined8 *)0x0) {
            pvVar18 = (void *)*puVar23;
            if (*(uint *)(puVar23 + 0xb) != 0xffffffff) {
                    /* try { // try from 0012f4a0 to 0012f4ab has its CatchHandler @ 00131eb8 */
              (*(code *)(&PTR_FUN_00144948)[*(uint *)(puVar23 + 0xb)])(&local_140,puVar23 + 5);
            }
            *(undefined4 *)(puVar23 + 0xb) = 0xffffffff;
            if ((*(byte *)(puVar23 + 2) & 1) != 0) {
              operator_delete((void *)puVar23[4]);
            }
            operator_delete(puVar23);
            puVar23 = (undefined8 *)pvVar18;
          }
          pvVar18 = (void *)CONCAT44(local_f0._4_4_,(int)local_f0);
          local_f0._0_4_ = 0;
          local_f0._4_4_ = 0;
          if (pvVar18 != (void *)0x0) {
            operator_delete(pvVar18);
          }
        }
      }
LAB_0012f4d4:
      uVar15 = facebook::react::parsePlatformColor(param_1,iVar30,(RawValue *)param_3);
    }
    *(uint *)param_4 = uVar15;
  }
  else {
    pRVar34 = (RawValue *)param_3;
    if (iVar60 != 0) {
      if (iVar60 == 1) {
        pRVar34 = (RawValue *)param_3 + 8;
        goto LAB_0012e658;
      }
      goto LAB_00131c34;
    }
LAB_0012e658:
    if (*(int *)pRVar34 != 6) goto LAB_0012e718;
    FUN_00134010(local_228,param_3);
    ppCVar36 = &local_1e0;
    local_1d0 = (long *)0x0;
    pCStack_1d8 = (ContextContainer *)(ulong)(local_228[0] >> 1);
    local_1e0 = (ContextContainer *)((ulong)local_228 | 1);
    if ((local_228[0] & 1) != 0) {
      pCStack_1d8 = local_220;
      local_1e0 = local_218;
    }
    FUN_00134314(&local_1c8,&local_1e0);
    local_198 = 6;
    if ((int)local_1c8 == 0xe) {
      FUN_00134314(&local_f0,&local_1e0);
      local_1b8 = CONCAT71(uStack_df,local_e0);
      pCStack_1c0 = pCStack_e8;
      local_1c8._0_4_ = (int)local_f0;
      local_1c8._4_4_ = local_f0._4_4_;
      uStack_1a0 = uStack_c8;
      local_1a8 = local_d0;
      uStack_1b0 = uStack_d8;
    }
    uVar16 = local_1b8;
    pCVar29 = pCStack_1c0;
    iVar60 = (int)local_1c8;
    uStack_148 = CONCAT44(uStack_194,local_198);
    ppCVar39 = (ContextContainer **)&local_f0;
    uStack_168 = local_1b8;
    local_170 = pCStack_1c0;
    pCStack_158 = local_1a8;
    uStack_160 = uStack_1b0;
    auVar5._8_4_ = (int)local_1c8;
    auVar5._0_8_ = local_1d0;
    auVar5._12_4_ = local_1c8._4_4_;
    local_150 = uStack_1a0;
    pCStack_188 = pCStack_1d8;
    local_190 = local_1e0;
    uStack_178 = auVar5._8_8_;
    local_180 = local_1d0;
    if ((int)local_1c8 == local_198) {
      uVar16 = 0;
      uVar33 = 0;
      local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
    }
    else {
      if ((int)local_1c8 < 0xb) {
        if ((int)local_1c8 == 7) {
          FUN_00134314(&local_f0,&local_1e0);
          local_1b8 = CONCAT71(uStack_df,local_e0);
          pCStack_1c0 = pCStack_e8;
          local_1a8 = local_d0;
          uVar33 = extraout_x9;
          if ((int)local_f0 == 0xe) {
            FUN_00134314(&local_f0,&local_1e0);
            local_1b8 = CONCAT71(uStack_df,local_e0);
            uVar33 = extraout_x9_00;
          }
          uVar66 = uStack_df;
          uVar11 = local_e0;
          uVar13 = local_f0._4_4_;
          iVar60 = (int)local_f0;
          pCVar26 = (ContextContainer *)CONCAT44(local_f0._4_4_,(int)local_f0);
          pCStack_138 = pCStack_1d8;
          local_140 = SUB81(local_1e0,0);
          uStack_13f = (undefined1)((ulong)local_1e0 >> 8);
          uStack_13e = (undefined1)((ulong)local_1e0 >> 0x10);
          uStack_13d = (undefined2)((ulong)local_1e0 >> 0x18);
          uStack_13b = (undefined2)((ulong)local_1e0 >> 0x28);
          uStack_139 = (undefined1)((ulong)local_1e0 >> 0x38);
          pCStack_120 = pCStack_e8;
          local_128 = (int)local_f0;
          uStack_124 = local_f0._4_4_;
          local_130 = local_1d0;
          uStack_c0 = uStack_d8;
          uStack_110 = uStack_d8;
          local_118 = local_1b8;
          uStack_100 = (undefined4)uStack_c8;
          uStack_fc = (undefined4)(uStack_c8 >> 0x20);
          local_108 = SUB84(local_d0,0);
          uStack_104 = (undefined4)((ulong)local_d0 >> 0x20);
          local_f8 = 1;
          if (uVar16 == 0) {
            uVar16 = 0;
            lVar32 = 0;
          }
          else {
            uVar15 = 0x811c9dc5;
            do {
              CVar1 = *pCVar29;
              CVar2 = (ContextContainer)((byte)CVar1 | 0x20);
              if (0x19 < (byte)CVar1 - 0x41) {
                CVar2 = CVar1;
              }
              uVar16 = uVar16 - 1;
              uVar15 = (uVar15 ^ (int)(char)CVar2) * 0x1000193;
              pCVar29 = pCVar29 + 1;
            } while (uVar16 != 0);
            local_f0._0_4_ = (int)local_1e0;
            local_f0._4_4_ = (undefined4)((ulong)local_1e0 >> 0x20);
            local_e0 = SUB81(local_1d0,0);
            uStack_df = (undefined7)((ulong)local_1d0 >> 8);
            lVar32 = 0;
            if ((int)uVar15 < -0x196e1ac0) {
              if (uVar15 == 0xd70632a7) {
LAB_0012f8bc:
                local_210[0] = &local_140;
                uStack_c8 = local_1b8;
                local_d0 = pCStack_e8;
                auVar8._8_4_ = iVar60;
                auVar8._0_8_ = local_1d0;
                auVar8._12_4_ = uVar13;
                uStack_a8 = 1;
                pCStack_e8 = pCStack_1d8;
                uStack_d8 = auVar8._8_8_;
                uStack_b8 = local_108;
                uStack_b4 = uStack_104;
                local_b0 = uStack_100;
                uStack_ac = uStack_fc;
                uVar16 = FUN_00136ac4(local_210,6);
                if (uVar16 >> 0x20 == 0) {
                  local_130 = (long *)CONCAT71(uStack_df,local_e0);
                  local_140 = SUB41((int)local_f0,0);
                  uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                  uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                  uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                  uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                  uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                  local_128 = (int)uStack_d8;
                  uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
LAB_0012fb4c:
                  local_f0 = &local_140;
                  pCStack_138 = pCStack_e8;
                  pCStack_120 = local_d0;
                  local_118 = uStack_c8;
                  uStack_110 = uStack_c0;
                  local_108 = uStack_b8;
                  uStack_104 = uStack_b4;
                  uStack_100 = local_b0;
                  uStack_fc = uStack_ac;
                  local_f8 = uStack_a8;
                  uVar55 = FUN_00136ac4(&local_f0,6);
                  iVar60 = (int)((ulong)uVar55 >> 0x20);
                  fVar75 = (float)uVar55;
                  if (iVar60 == 1) {
LAB_0012fd50:
                    local_f0 = &local_140;
                    uVar55 = FUN_00136ac4(&local_f0,0);
                    iVar60 = (int)((ulong)uVar55 >> 0x20);
                    fVar74 = (float)uVar55;
                    if (iVar60 != 1) {
                      if (iVar60 != 2) goto LAB_0013044c;
                      fVar74 = (fVar74 / 100.0) * 255.0;
                    }
                    local_f0 = &local_140;
                    uVar55 = FUN_00136ac4(&local_f0,0);
                    iVar60 = (int)((ulong)uVar55 >> 0x20);
                    fVar76 = (float)uVar55;
                    if (iVar60 != 1) {
                      if (iVar60 != 2) goto LAB_0013044c;
                      fVar76 = (fVar76 / 100.0) * 255.0;
                    }
                    local_f0 = &local_140;
                    FUN_00136ac4(&local_f0,3);
                    if (extraout_var == 1) {
                      bVar12 = false;
                      fVar43 = extraout_w0;
                    }
                    else if (extraout_var == 2) {
                      bVar12 = false;
                      fVar43 = extraout_w0 / 100.0;
                    }
                    else {
                      fVar43 = 0.0;
                      bVar12 = true;
                    }
                    uVar15 = (uint)fVar75;
                    fVar63 = (float)(int)fVar75;
                    uVar55 = NEON_scvtf(CONCAT44((int)fVar74,(int)fVar76),4);
                    if (fVar75 != fVar63 && fVar75 < fVar63 == (NAN(fVar75) || NAN(fVar63))) {
                      uVar15 = uVar15 + 1;
                    }
                    if (0xfe < (int)uVar15) {
                      uVar15 = 0xff;
                    }
                    uVar55 = NEON_fcmgt(CONCAT44(fVar74,fVar76),uVar55,4);
                    uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
                    uVar55 = NEON_smin(CONCAT44((int)fVar74 - (int)((ulong)uVar55 >> 0x20),
                                                (int)fVar76 - (int)uVar55),0xff000000ff,4);
                    uVar55 = NEON_smax(uVar55,0,4);
joined_r0x00130a58:
                    if (bVar12) {
                      uVar19 = 0xff000000;
                    }
                    else {
                      fVar43 = fVar43 * 255.0;
                      uVar19 = (uint)fVar43;
                      fVar75 = (float)(int)fVar43;
                      if (fVar43 != fVar75 && fVar43 < fVar75 == (NAN(fVar43) || NAN(fVar75))) {
                        uVar19 = uVar19 + 1;
                      }
                      if (0xfe < (int)uVar19) {
                        uVar19 = 0xff;
                      }
                      uVar19 = (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) << 0x18;
                    }
                    lVar32 = 1;
                    uVar16 = NEON_ushl(uVar55,DAT_00110568,4);
                    uVar19 = (uint)CONCAT11((char)((uVar16 & 0xff0000ff0000) >> 0x10),
                                            (char)((uVar16 & 0xff0000ff0000) >> 0x28)) << 8 | uVar19
                    ;
                  }
                  else {
                    if (iVar60 == 2) {
                      fVar75 = (fVar75 / 100.0) * 255.0;
                      goto LAB_0012fd50;
                    }
LAB_0013044c:
                    lVar32 = 0;
                    uVar15 = 0;
                    uVar19 = 0;
                  }
                }
                else {
                  if (local_128 == 0xe) {
                    FUN_00134314(local_210,&local_140);
                    local_128 = (int)local_210[0];
                  }
                  bVar12 = local_128 != 3;
                  local_118 = uStack_c8;
                  pCStack_120 = local_d0;
                  local_108 = uStack_b8;
                  uStack_110 = uStack_c0;
                  local_130 = (long *)CONCAT71(uStack_df,local_e0);
                  uStack_fc = uStack_ac;
                  local_f8 = uStack_a8;
                  uStack_104 = uStack_b4;
                  uStack_100 = local_b0;
                  pCStack_138 = pCStack_e8;
                  local_140 = SUB41((int)local_f0,0);
                  uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                  uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                  uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                  uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                  uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                  local_128 = (int)uStack_d8;
                  uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
                  if (bVar12) goto LAB_0012fb4c;
                  local_f0 = &local_140;
                  uVar55 = FUN_00136ac4(&local_f0,6);
                  iVar60 = (int)((ulong)uVar55 >> 0x20);
                  fVar75 = (float)uVar55;
                  if (iVar60 == 1) {
                    local_f0 = &local_140;
                    uVar16 = FUN_00136c88(&local_f0);
                    uVar15 = (uint)(uVar16 >> 0x20);
                    if (uVar16 >> 0x20 == 0) goto LAB_00130170;
                    local_280 = (float)uVar16;
                    local_f0 = &local_140;
                    uVar33 = FUN_00136c88(&local_f0);
                    uVar16 = 0;
                    if (uVar33 >> 0x20 != 0) {
                      uVar16 = uVar33 | 0x100000000;
                    }
LAB_00130400:
                    if ((uVar16 & 0xff00000000) == 0) goto LAB_0013044c;
                    local_f0 = &local_140;
                    FUN_00136ac4(&local_f0,4);
                    if (extraout_var_00 == 1) {
                      bVar12 = false;
                      fVar43 = extraout_w0_00;
                    }
                    else if (extraout_var_00 == 2) {
                      bVar12 = false;
                      fVar43 = extraout_w0_00 / 100.0;
                    }
                    else {
                      fVar43 = 0.0;
                      bVar12 = true;
                    }
                    uVar15 = (uint)fVar75;
                    iVar60 = (int)(float)uVar16;
                    uVar55 = NEON_scvtf(CONCAT44((int)local_280,iVar60),4);
                    uVar55 = NEON_fcmgt(CONCAT44(local_280,(float)uVar16),uVar55,4);
                    fVar74 = (float)(int)fVar75;
                    uVar55 = NEON_smin(CONCAT44((int)local_280 - (int)((ulong)uVar55 >> 0x20),
                                                iVar60 - (int)uVar55),0xff000000ff,4);
                    if (fVar75 != fVar74 && fVar75 < fVar74 == (NAN(fVar75) || NAN(fVar74))) {
                      uVar15 = uVar15 + 1;
                    }
                    if (0xfe < (int)uVar15) {
                      uVar15 = 0xff;
                    }
                    uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
                    uVar55 = NEON_smax(uVar55,0,4);
                    goto joined_r0x00130a58;
                  }
                  if (iVar60 != 2) goto LAB_0013044c;
                  local_f0 = &local_140;
                  uVar16 = FUN_00136ea4(&local_f0);
                  uVar15 = (uint)(uVar16 >> 0x20);
                  if (uVar16 >> 0x20 != 0) {
                    local_f0 = &local_140;
                    uVar33 = FUN_00136ea4(&local_f0);
                    uVar15 = (uint)(uVar33 >> 0x20);
                    if (uVar33 >> 0x20 != 0) {
                      fVar75 = (fVar75 / 100.0) * 255.0;
                      local_280 = ((float)uVar16 / 100.0) * 255.0;
                      uVar16 = (ulong)(uint)(((float)uVar33 / 100.0) * 255.0) | 0x100000000;
                      goto LAB_00130400;
                    }
                  }
LAB_00130170:
                  lVar32 = 0;
                  uVar19 = 0;
                }
                uVar16 = (ulong)(uVar19 | uVar15);
                uVar33 = (ulong)((uVar19 | uVar15) >> 8);
                uVar11 = local_e0;
                uVar66 = uStack_df;
                pCVar26 = local_f0;
                goto LAB_00130abc;
              }
              uVar33 = 0xdc874826;
              uVar16 = 0;
              if (uVar15 != 0xdc874826) goto LAB_00130abc;
              local_e0 = uVar11;
              uStack_df = uVar66;
              local_f0 = &local_140;
              uVar55 = FUN_001370c0(&local_f0);
              if (1 < (int)((ulong)uVar55 >> 0x20) - 1U) goto LAB_001301c0;
              fVar43 = remainderf((float)uVar55,360.0);
              fVar75 = fVar43 + 360.0;
              if (0.0 <= fVar43) {
                fVar75 = fVar43;
              }
              local_f0 = &local_140;
              uVar55 = FUN_00136ac4(&local_f0,0);
              iVar60 = (int)((ulong)uVar55 >> 0x20);
              fVar43 = (float)uVar55;
              if (iVar60 != 1) {
                if (iVar60 != 2) goto LAB_001301c0;
                fVar43 = (fVar43 / 100.0) * 100.0;
              }
              local_f0 = &local_140;
              uVar55 = FUN_00136ac4(&local_f0,0);
              iVar60 = (int)((ulong)uVar55 >> 0x20);
              fVar74 = (float)uVar55;
              if (iVar60 != 1) {
                if (iVar60 != 2) goto LAB_001301c0;
                fVar74 = (fVar74 / 100.0) * 100.0;
              }
              local_f0 = &local_140;
              uVar55 = FUN_00136ac4(&local_f0,3);
              iVar60 = (int)((ulong)uVar55 >> 0x20);
              fVar76 = (float)uVar55;
              if (iVar60 == 1) {
LAB_00130460:
                uVar15 = FUN_00137564(fVar75 / 360.0,fVar43,fVar74);
                goto LAB_00130470;
              }
              if (iVar60 == 2) {
                fVar76 = fVar76 / 100.0;
                goto LAB_00130460;
              }
              uVar15 = FUN_00137564(fVar75 / 360.0,fVar43,fVar74);
              uVar19 = 0xff000000;
LAB_001304a4:
              lVar32 = 1;
              uVar19 = uVar19 | uVar15 & 0xffff00;
              uVar15 = uVar15 & 0xff;
            }
            else {
              if (uVar15 != 0xe691e540 && uVar15 != 0x18abb2f3) {
                uVar33 = 0x46f9077c;
                uVar16 = 0;
                if (uVar15 == 0x46f9077c) goto LAB_0012f8bc;
                goto LAB_00130abc;
              }
              local_210[0] = &local_140;
              uStack_c8 = local_1b8;
              local_d0 = pCStack_e8;
              auVar7._8_4_ = iVar60;
              auVar7._0_8_ = local_1d0;
              auVar7._12_4_ = uVar13;
              uStack_a8 = 1;
              pCStack_e8 = pCStack_1d8;
              uStack_d8 = auVar7._8_8_;
              uStack_b8 = local_108;
              uStack_b4 = uStack_104;
              local_b0 = uStack_100;
              uStack_ac = uStack_fc;
              uVar16 = FUN_001370c0(local_210);
              if (uVar16 >> 0x20 == 0) {
                local_130 = (long *)CONCAT71(uStack_df,local_e0);
                local_140 = SUB41((int)local_f0,0);
                uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                local_128 = (int)uStack_d8;
                uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
LAB_0012f9d8:
                pCStack_138 = pCStack_e8;
                pCStack_120 = local_d0;
                local_118 = uStack_c8;
                uStack_110 = uStack_c0;
                local_108 = uStack_b8;
                uStack_104 = uStack_b4;
                uStack_100 = local_b0;
                uStack_fc = uStack_ac;
                local_f8 = uStack_a8;
                local_f0 = &local_140;
                uVar55 = FUN_001370c0(&local_f0);
                if ((int)((ulong)uVar55 >> 0x20) - 1U < 2) {
                  fVar43 = remainderf((float)uVar55,360.0);
                  fVar75 = fVar43 + 360.0;
                  if (0.0 <= fVar43) {
                    fVar75 = fVar43;
                  }
                  local_f0 = &local_140;
                  uVar55 = FUN_00136ac4(&local_f0,0);
                  iVar60 = (int)((ulong)uVar55 >> 0x20);
                  fVar74 = (float)uVar55;
                  if (iVar60 != 1) {
                    if (iVar60 != 2) goto LAB_001301c0;
                    fVar74 = (fVar74 / 100.0) * 100.0;
                  }
                  local_f0 = &local_140;
                  uVar55 = FUN_00136ac4(&local_f0,0);
                  iVar60 = (int)((ulong)uVar55 >> 0x20);
                  fVar43 = (float)uVar55;
                  if (iVar60 != 1) {
                    if (iVar60 != 2) goto LAB_001301c0;
                    fVar43 = (fVar43 / 100.0) * 100.0;
                  }
                  local_f0 = &local_140;
                  fVar75 = fVar75 / 360.0;
                  uVar55 = FUN_00136ac4(&local_f0,3);
                  iVar60 = (int)((ulong)uVar55 >> 0x20);
                  fVar76 = (float)uVar55;
                  if (iVar60 != 1) {
                    if (iVar60 != 2) {
LAB_001303c8:
                      uVar15 = FUN_0013731c(fVar75,fVar74,fVar43);
                      uVar19 = 0xff000000;
                      goto LAB_001304a4;
                    }
                    fVar76 = fVar76 / 100.0;
                  }
LAB_00130370:
                  uVar15 = FUN_0013731c(fVar75,fVar74,fVar43);
LAB_00130470:
                  fVar76 = fVar76 * 255.0;
                  uVar19 = (uint)fVar76;
                  fVar75 = (float)(int)fVar76;
                  if (fVar76 != fVar75 && fVar76 < fVar75 == (NAN(fVar76) || NAN(fVar75))) {
                    uVar19 = uVar19 + 1;
                  }
                  if (0xfe < (int)uVar19) {
                    uVar19 = 0xff;
                  }
                  uVar19 = (uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU)) << 0x18;
                  goto LAB_001304a4;
                }
LAB_001301c0:
                lVar32 = 0;
                uVar15 = 0;
                uVar19 = 0;
              }
              else {
                if (local_128 == 0xe) {
                  FUN_00134314(local_210,&local_140);
                  local_128 = (int)local_210[0];
                }
                bVar12 = local_128 != 3;
                local_118 = uStack_c8;
                pCStack_120 = local_d0;
                local_108 = uStack_b8;
                uStack_110 = uStack_c0;
                local_130 = (long *)CONCAT71(uStack_df,local_e0);
                uStack_fc = uStack_ac;
                local_f8 = uStack_a8;
                uStack_104 = uStack_b4;
                uStack_100 = local_b0;
                pCStack_138 = pCStack_e8;
                local_140 = SUB41((int)local_f0,0);
                uStack_13f = (undefined1)((uint)(int)local_f0 >> 8);
                uStack_13e = (undefined1)((uint)(int)local_f0 >> 0x10);
                uStack_13d = (undefined2)(CONCAT44(local_f0._4_4_,(int)local_f0) >> 0x18);
                uStack_13b = (undefined2)((uint)local_f0._4_4_ >> 8);
                uStack_139 = (undefined1)((uint)local_f0._4_4_ >> 0x18);
                local_128 = (int)uStack_d8;
                uStack_124 = (undefined4)((ulong)uStack_d8 >> 0x20);
                if (bVar12) goto LAB_0012f9d8;
                local_f0 = &local_140;
                uVar55 = FUN_001370c0(&local_f0);
                if (1 < (int)((ulong)uVar55 >> 0x20) - 1U) goto LAB_001301c0;
                fVar43 = remainderf((float)uVar55,360.0);
                fVar75 = fVar43 + 360.0;
                if (0.0 <= fVar43) {
                  fVar75 = fVar43;
                }
                local_f0 = &local_140;
                uVar16 = FUN_00136ea4(&local_f0);
                uVar15 = (uint)(uVar16 >> 0x20);
                if (uVar16 >> 0x20 != 0) {
                  local_f0 = &local_140;
                  uVar33 = FUN_00136ea4(&local_f0);
                  uVar15 = (uint)(uVar33 >> 0x20);
                  if (uVar33 >> 0x20 == 0) goto LAB_0012f9cc;
                  fVar75 = fVar75 / 360.0;
                  fVar74 = ((float)uVar16 / 100.0) * 100.0;
                  fVar43 = ((float)uVar33 / 100.0) * 100.0;
                  local_f0 = &local_140;
                  uVar55 = FUN_00136ac4(&local_f0,4);
                  iVar60 = (int)((ulong)uVar55 >> 0x20);
                  fVar76 = (float)uVar55;
                  if (iVar60 != 1) {
                    if (iVar60 == 2) {
                      fVar76 = fVar76 / 100.0;
                      goto LAB_00130370;
                    }
                    goto LAB_001303c8;
                  }
                  goto LAB_00130370;
                }
LAB_0012f9cc:
                lVar32 = 0;
                uVar19 = 0;
              }
            }
            uVar33 = (ulong)(uVar19 >> 8);
            uVar16 = (ulong)uVar15;
            uVar11 = local_e0;
            uVar66 = uStack_df;
            pCVar26 = local_f0;
          }
LAB_00130abc:
          uStack_df = uVar66;
          local_e0 = uVar11;
          local_1a8 = (ContextContainer *)CONCAT44(uStack_104,local_108);
          uStack_1a0 = CONCAT44(uStack_fc,uStack_100);
          uStack_1b0 = uStack_110;
          local_1b8 = local_118;
          pCStack_1c0 = pCStack_120;
          local_1c8._0_4_ = local_128;
          local_1c8._4_4_ = uStack_124;
          local_1e0 = (ContextContainer *)
                      CONCAT17(uStack_139,
                               CONCAT25(uStack_13b,
                                        CONCAT23(uStack_13d,
                                                 CONCAT12(uStack_13e,CONCAT11(uStack_13f,local_140))
                                                )));
          uVar33 = (uVar33 & 0xffffff) << 8 | lVar32 << 0x20 | uVar16 & 0xff;
          local_1d0 = local_130;
          pCStack_1d8 = pCStack_138;
          if (uVar33 < 0x100000001) {
            uVar33 = 0;
          }
          local_f0 = pCVar26;
          if (local_128 == 0xe) {
            FUN_00134314(&local_f0,&local_1e0);
            local_1b8 = CONCAT71(uStack_df,local_e0);
            pCStack_1c0 = pCStack_e8;
            local_1c8._4_4_ = local_f0._4_4_;
            uStack_1a0 = uStack_c8;
            local_1a8 = local_d0;
            uStack_1b0 = uStack_d8;
            local_1c8._0_4_ = (int)local_f0;
          }
          uVar16 = local_1b8;
          if (((int)local_1c8 == 1) && (lVar32 != 0)) {
            uVar16 = lVar32 << 0x21;
            FUN_00134314(&local_f0,&local_1e0);
            local_1b8 = CONCAT71(uStack_df,local_e0);
            uVar33 = uVar33 & 0xffffffff;
            pCStack_1c0 = pCStack_e8;
            uStack_1b0 = uStack_d8;
            uStack_1a0 = uStack_c8;
            local_1a8 = local_d0;
            local_1c8 = local_f0;
            goto LAB_001315cc;
          }
        }
        else {
          if ((int)local_1c8 != 10) goto LAB_0012e9b0;
          FUN_00134314(&local_f0,&local_1e0);
          pCStack_1c0 = pCStack_e8;
          local_1c8._0_4_ = (int)local_f0;
          local_1c8._4_4_ = local_f0._4_4_;
          uStack_1a0 = uStack_c8;
          local_1a8 = local_d0;
          uStack_1b0 = uStack_d8;
          uVar16 = CONCAT71(uStack_df,local_e0);
          if ((int)local_f0 == 0xe) {
            FUN_00134314(&local_f0,&local_1e0);
            pCStack_1c0 = pCStack_e8;
            local_1c8._0_4_ = (int)local_f0;
            local_1c8._4_4_ = local_f0._4_4_;
            uStack_1a0 = uStack_c8;
            local_1a8 = local_d0;
            uStack_1b0 = uStack_d8;
            uVar16 = CONCAT71(uStack_df,local_e0);
            if ((int)local_f0 == 0xe) {
              FUN_00134314(&local_f0,&local_1e0);
              uStack_1a0 = uStack_c8;
              local_1a8 = local_d0;
              pCStack_1c0 = pCStack_e8;
              local_1c8._0_4_ = (int)local_f0;
              local_1c8._4_4_ = local_f0._4_4_;
              uStack_1b0 = uStack_d8;
              uVar16 = CONCAT71(uStack_df,local_e0);
            }
          }
        }
      }
      else if (((int)local_1c8 == 0xb) || ((int)local_1c8 == 0xc)) {
        FUN_00134314(&local_f0,&local_1e0);
        pCStack_1c0 = pCStack_e8;
        local_1c8._0_4_ = (int)local_f0;
        local_1c8._4_4_ = local_f0._4_4_;
        uStack_1a0 = uStack_c8;
        local_1a8 = local_d0;
        uStack_1b0 = uStack_d8;
        uVar16 = CONCAT71(uStack_df,local_e0);
        if ((int)local_f0 == 0xe) {
          FUN_00134314(&local_f0,&local_1e0);
          local_1b8 = CONCAT71(uStack_df,local_e0);
          pCStack_1c0 = pCStack_e8;
          local_1c8._0_4_ = (int)local_f0;
          local_1c8._4_4_ = local_f0._4_4_;
          uStack_1a0 = uStack_c8;
          local_1a8 = local_d0;
          uStack_1b0 = uStack_d8;
          uVar16 = local_1b8;
          if ((int)local_f0 == 0xe) {
            FUN_00134314(&local_f0,&local_1e0);
            uVar16 = local_1b8;
          }
        }
      }
      else {
LAB_0012e9b0:
        FUN_00134314(&local_f0,&local_1e0);
        auVar9._8_8_ = pCStack_e8;
        auVar9._0_8_ = local_f0;
        uVar16 = CONCAT71(uStack_df,local_e0);
        auVar10._8_8_ = uStack_d8;
        auVar10._0_8_ = uVar16;
        bVar12 = (int)local_1c8 == 0xf;
        pCStack_1c0 = pCStack_e8;
        local_1c8._0_4_ = (int)local_f0;
        local_1c8._4_4_ = local_f0._4_4_;
        uStack_1b0 = uStack_d8;
        uStack_1a0 = uStack_c8;
        local_1a8 = local_d0;
        if (bVar12) {
          bVar12 = false;
          if (local_1b8 < 9) {
            uVar19 = 0;
            uVar15 = 0;
            if ((1L << (local_1b8 & 0x3f) & 0x158U) != 0) {
              uVar33 = 0;
              do {
                CVar2 = pCVar29[uVar33];
                if (9 < (byte)CVar2 - 0x30) {
                  uVar15 = (byte)CVar2 | 0x20;
                  if (0x19 < (byte)CVar2 - 0x41) {
                    uVar15 = (uint)(byte)CVar2;
                  }
                  if (5 < uVar15 - 0x61) {
                    bVar12 = false;
                    uVar19 = 0;
                    uVar15 = 0;
                    goto LAB_0012ffa8;
                  }
                }
                uVar33 = uVar33 + 1;
              } while (local_1b8 != uVar33);
              bVar12 = false;
              auVar47._1_15_ = auVar9._1_15_;
              auVar48._5_11_ = auVar9._5_11_;
              if ((long)local_1b8 < 6) {
                iVar60 = (int)((ulong)DAT_00110560 >> 0x20);
                if (local_1b8 == 3) {
                  auVar51[0] = pCVar29[1];
                  auVar51._1_15_ = auVar47._1_15_;
                  auVar52._0_4_ = auVar51._0_4_;
                  auVar52[4] = pCVar29[2];
                  auVar52._5_11_ = auVar48._5_11_;
                  iVar22 = auVar52._4_4_;
                  uVar55 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar22 + 0xbf,auVar52._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar55 = NEON_bsl(uVar55,CONCAT44(iVar22,auVar52._0_4_) | 0x2000000020,
                                    auVar52._0_8_,1);
                  uVar64 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar22 + 0xd0,auVar52._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar33 = NEON_bif(auVar52._0_8_,uVar55,uVar64,1);
                  uVar55 = NEON_bit(DAT_001105b0,DAT_00110570,uVar64,1);
                  CVar2 = *pCVar29;
                  uVar19 = (uint)(byte)CVar2;
                  uVar15 = uVar19 | 0x20;
                  if (0x19 < (byte)CVar2 - 0x41) {
                    uVar15 = uVar19;
                  }
                  bVar12 = 9 < (byte)CVar2 - 0x30;
                  if (bVar12) {
                    uVar19 = uVar15;
                  }
                  iVar22 = -0x30;
                  if (bVar12) {
                    iVar22 = -0x57;
                  }
                  uVar15 = ((int)((ulong)uVar55 >> 0x20) + (int)((uVar33 & 0xff000000ff) >> 0x20)) *
                           iVar60 | 0xff000000;
                  uVar19 = uVar15 | (iVar22 + uVar19) * 0x11;
                  uVar15 = uVar15 | ((int)uVar55 + (int)(uVar33 & 0xff000000ff)) * (int)DAT_00110560
                                    & 0xff00U;
                }
                else {
                  uVar19 = 0;
                  uVar15 = 0;
                  if (local_1b8 != 4) goto LAB_0012ffa8;
                  auVar47[0] = pCVar29[1];
                  auVar48._0_4_ = auVar47._0_4_;
                  auVar48[4] = pCVar29[2];
                  iVar22 = auVar48._4_4_;
                  uVar55 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar22 + 0xbf,auVar48._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar55 = NEON_bsl(uVar55,CONCAT44(iVar22,auVar48._0_4_) | 0x2000000020,
                                    auVar48._0_8_,1);
                  uVar64 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar22 + 0xd0,auVar48._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar33 = NEON_bif(auVar48._0_8_,uVar55,uVar64,1);
                  uVar55 = NEON_bit(DAT_001105b0,DAT_00110570,uVar64,1);
                  CVar2 = *pCVar29;
                  uVar19 = (uint)(byte)CVar2;
                  uVar15 = uVar19 | 0x20;
                  if (0x19 < (byte)CVar2 - 0x41) {
                    uVar15 = uVar19;
                  }
                  bVar12 = 9 < (byte)CVar2 - 0x30;
                  CVar2 = pCVar29[3];
                  if (bVar12) {
                    uVar19 = uVar15;
                  }
                  iVar25 = -0x30;
                  iVar22 = iVar25;
                  if (bVar12) {
                    iVar22 = -0x57;
                  }
                  uVar33 = CONCAT44(((int)((ulong)uVar55 >> 0x20) +
                                    (int)((uVar33 & 0xff000000ff) >> 0x20)) * iVar60,
                                    ((int)uVar55 + (int)(uVar33 & 0xff000000ff)) * (int)DAT_00110560
                                   ) & 0xff00000000ff00;
                  uVar21 = (uint)(byte)CVar2;
                  uVar15 = uVar21 | 0x20;
                  if (0x19 < (byte)CVar2 - 0x41) {
                    uVar15 = uVar21;
                  }
                  if (9 < (byte)CVar2 - 0x30) {
                    iVar25 = -0x57;
                    uVar21 = uVar15;
                  }
                  uVar19 = (iVar22 + uVar19) * 0x11;
                  uVar15 = (uint)CONCAT11((char)(uVar33 >> 0x30),(char)(uVar33 >> 8)) << 8 |
                           (iVar25 + uVar21) * 0x11000000;
                }
              }
              else {
                uVar66 = (undefined7)((ulong)in_d4 >> 8);
                uVar69 = (undefined3)((ulong)in_d4 >> 0x28);
                if (local_1b8 == 6) {
                  auVar53[0] = pCVar29[2];
                  auVar53._1_15_ = auVar47._1_15_;
                  auVar58._1_15_ = auVar10._1_15_;
                  auVar58[0] = pCVar29[4];
                  auVar54._0_4_ = auVar53._0_4_;
                  auVar54[4] = pCVar29[3];
                  auVar54._5_11_ = auVar48._5_11_;
                  auVar59._5_11_ = auVar10._5_11_;
                  auVar59._0_4_ = auVar58._0_4_;
                  auVar59[4] = pCVar29[5];
                  iVar25 = (int)CONCAT71(uVar66,*pCVar29);
                  uVar64 = CONCAT35(uVar69,CONCAT14(pCVar29[1],iVar25));
                  iVar60 = auVar54._4_4_;
                  iVar22 = auVar59._4_4_;
                  iVar68 = (int)((ulong)uVar64 >> 0x20);
                  uVar72 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar60 + 0xbf,auVar54._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar71 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar22 + 0xbf,auVar59._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar73 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar60 + 0xd0,auVar54._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar55 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar68 + 0xbf,iVar25 + 0xbf) & 0xff000000ff,4);
                  uVar70 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar68 + 0xd0,iVar25 + 0xd0) & 0xff000000ff,4);
                  uVar72 = NEON_bsl(uVar72,CONCAT44(iVar60,auVar54._0_4_) | 0x2000000020,
                                    auVar54._0_8_,1);
                  uVar77 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar22 + 0xd0,auVar59._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar71 = NEON_bsl(uVar71,CONCAT44(iVar22,auVar59._0_4_) | 0x2000000020,
                                    auVar59._0_8_,1);
                  uVar33 = NEON_bif(auVar54._0_8_,uVar72,uVar73,1);
                  uVar61 = NEON_bif(auVar59._0_8_,uVar71,uVar77,1);
                  uVar55 = NEON_bsl(uVar55,CONCAT44(iVar68,iVar25) | 0x2000000020,uVar64,1);
                  uVar71 = NEON_bsl(uVar73,DAT_00110578,DAT_00110580,1);
                  uVar72 = NEON_bit(DAT_00110580,DAT_00110578,uVar77,1);
                  uVar65 = NEON_bit(uVar55,uVar64,uVar70,1);
                  uVar24 = (ulong)(CONCAT14(~(byte)(uVar70 >> 0x20),(uint)(byte)~(byte)uVar70) &
                                  0xffffffffa9) & 0xffffffa9ffffffff;
                  uVar64 = NEON_ushl(CONCAT44((int)((ulong)uVar72 >> 0x20) +
                                              (int)((uVar61 & 0xff000000ff) >> 0x20),
                                              (int)uVar72 + (int)(uVar61 & 0xff000000ff)),
                                     DAT_00110598,4);
                  uVar55 = NEON_ushl(CONCAT44((int)((ulong)uVar71 >> 0x20) +
                                              (int)((uVar33 & 0xff000000ff) >> 0x20),
                                              (int)uVar71 + (int)(uVar33 & 0xff000000ff)),
                                     DAT_00110588,4);
                  uVar15 = (int)((ulong)uVar64 >> 0x20) + (int)uVar64 | 0xff000000;
                  uVar21 = (int)((ulong)uVar55 >> 0x20) + (int)uVar55 & 0xff00;
                  uVar19 = uVar15 | (uint)(byte)((byte)((uVar70 & 0xffffffd0ffffffd0) >> 0x20) |
                                                (byte)(uVar24 >> 0x20)) +
                                    (int)((uVar65 & 0xff000000ff) >> 0x20) +
                                    ((uint)(byte)((byte)(uVar70 & 0xffffffd0ffffffd0) | (byte)uVar24
                                                 ) + (int)(uVar65 & 0xff000000ff)) * 0x10;
                }
                else {
                  uVar19 = 0;
                  uVar15 = 0;
                  if (local_1b8 != 8) goto LAB_0012ffa8;
                  auVar49[0] = pCVar29[2];
                  auVar49._1_15_ = auVar47._1_15_;
                  auVar50._0_4_ = auVar49._0_4_;
                  auVar50[4] = pCVar29[3];
                  auVar50._5_11_ = auVar48._5_11_;
                  iVar22 = (int)CONCAT71((int7)((ulong)local_d0 >> 8),pCVar29[4]);
                  uVar55 = CONCAT35((int3)((ulong)local_d0 >> 0x28),CONCAT14(pCVar29[5],iVar22));
                  iVar68 = (int)CONCAT71(uVar66,*pCVar29);
                  uVar72 = CONCAT35(uVar69,CONCAT14(pCVar29[1],iVar68));
                  iVar60 = auVar50._4_4_;
                  iVar25 = (int)((ulong)uVar55 >> 0x20);
                  iVar67 = (int)((ulong)uVar72 >> 0x20);
                  uVar71 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar60 + 0xbf,auVar50._0_4_ + 0xbf) & 0xff000000ff,4);
                  uVar73 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar25 + 0xbf,iVar22 + 0xbf) & 0xff000000ff,4);
                  uVar64 = NEON_cmhi(0x1a0000001a,
                                     CONCAT44(iVar67 + 0xbf,iVar68 + 0xbf) & 0xff000000ff,4);
                  uVar77 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar60 + 0xd0,auVar50._0_4_ + 0xd0) & 0xff000000ff,4);
                  uVar70 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar67 + 0xd0,iVar68 + 0xd0) & 0xff000000ff,4);
                  uVar71 = NEON_bsl(uVar71,CONCAT44(iVar60,auVar50._0_4_) | 0x2000000020,
                                    auVar50._0_8_,1);
                  uVar73 = NEON_bsl(uVar73,CONCAT44(iVar25,iVar22) | 0x2000000020,uVar55,1);
                  uVar78 = NEON_cmhi(0xa0000000a,
                                     CONCAT44(iVar25 + 0xd0,iVar22 + 0xd0) & 0xff000000ff,4);
                  uVar33 = NEON_bif(auVar50._0_8_,uVar71,uVar77,1);
                  uVar61 = NEON_bif(uVar55,uVar73,uVar78,1);
                  uVar55 = NEON_bsl(uVar64,CONCAT44(iVar67,iVar68) | 0x2000000020,uVar72,1);
                  uVar71 = NEON_bsl(uVar77,DAT_00110578,DAT_00110580,1);
                  uVar64 = NEON_bit(DAT_00110580,DAT_00110578,uVar78,1);
                  uVar65 = NEON_bit(uVar55,uVar72,uVar70,1);
                  uVar24 = (ulong)CONCAT14(~(byte)(uVar70 >> 0x20),(uint)(byte)~(byte)uVar70) &
                           0xffffffa9ffffffa9;
                  CVar2 = pCVar29[7];
                  iVar60 = 0;
                  if (9 < (byte)pCVar29[6] - 0x30) {
                    iVar60 = 9;
                  }
                  uVar55 = NEON_ushl(CONCAT44((int)((ulong)uVar71 >> 0x20) +
                                              (int)((uVar33 & 0xff000000ff) >> 0x20),
                                              (int)uVar71 + (int)(uVar33 & 0xff000000ff)),
                                     DAT_00110588,4);
                  uVar64 = NEON_ushl(CONCAT44((int)((ulong)uVar64 >> 0x20) +
                                              (int)((uVar61 & 0xff000000ff) >> 0x20),
                                              (int)uVar64 + (int)(uVar61 & 0xff000000ff)),
                                     DAT_00110598,4);
                  uVar19 = (uint)(byte)CVar2;
                  uVar15 = uVar19 | 0x20;
                  if (0x19 < (byte)CVar2 - 0x41) {
                    uVar15 = uVar19;
                  }
                  bVar12 = 9 < (byte)CVar2 - 0x30;
                  if (bVar12) {
                    uVar19 = uVar15;
                  }
                  iVar22 = 0xd0;
                  if (bVar12) {
                    iVar22 = 0xa9;
                  }
                  uVar15 = (iVar22 + uVar19) * 0x1000000 +
                           (iVar60 + (uint)(byte)pCVar29[6]) * 0x10000000;
                  uVar19 = (uint)(byte)((byte)((uVar70 & 0xffffffd0ffffffd0) >> 0x20) |
                                       (byte)(uVar24 >> 0x20)) +
                           (int)((uVar65 & 0xff000000ff) >> 0x20) +
                           ((uint)(byte)((byte)(uVar70 & 0xffffffd0ffffffd0) | (byte)uVar24) +
                           (int)(uVar65 & 0xff000000ff)) * 0x10;
                  uVar21 = (int)((ulong)uVar55 >> 0x20) + (int)uVar55 & 0xff00U |
                           (int)((ulong)uVar64 >> 0x20) + (int)uVar64 & 0xff0000U;
                }
                uVar15 = uVar15 | uVar21;
              }
              bVar12 = true;
            }
          }
          else {
            uVar19 = 0;
            uVar15 = 0;
          }
LAB_0012ffa8:
          uVar15 = uVar15 | uVar19 & 0xff;
          local_1b8 = uVar16;
LAB_0013159c:
          uVar16 = local_1b8;
          if (bVar12) {
            uVar33 = (ulong)uVar15 | 0x200000000;
LAB_00131664:
            local_1b8 = uVar16;
            uVar16 = uVar33 & 0x300000000;
            local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
            goto LAB_001315cc;
          }
        }
        else if (iVar60 == 8) {
          if (local_1b8 == 0) goto LAB_00131588;
          uVar15 = 0x811c9dc5;
          uVar19 = 0x811c9dc5;
          uVar33 = local_1b8;
          pCVar26 = pCVar29;
          do {
            CVar1 = *pCVar26;
            CVar2 = (ContextContainer)((byte)CVar1 | 0x20);
            if (0x19 < (byte)CVar1 - 0x41) {
              CVar2 = CVar1;
            }
            uVar33 = uVar33 - 1;
            uVar19 = (uVar19 ^ (int)(char)CVar2) * 0x1000193;
            pCVar26 = pCVar26 + 1;
          } while (uVar33 != 0);
          uVar33 = 0x10000001b;
          if (uVar19 == 0x96285d7a) {
            uVar33 = 0x10000005b;
          }
          else if (uVar19 != 0xca04efe0) {
            if (uVar19 != 0x2b251de3) {
              do {
                CVar1 = *pCVar29;
                CVar2 = (ContextContainer)((byte)CVar1 | 0x20);
                if (0x19 < (byte)CVar1 - 0x41) {
                  CVar2 = CVar1;
                }
                local_1b8 = local_1b8 - 1;
                uVar15 = (uVar15 ^ (int)(char)CVar2) * 0x1000193;
                pCVar29 = pCVar29 + 1;
              } while (local_1b8 != 0);
              if ((int)uVar15 < 0x817f94d) {
                if ((int)uVar15 < -0x4715782d) {
                  if ((int)uVar15 < -0x6308cb68) {
                    if ((int)uVar15 < -0x6fb63289) {
                      if ((int)uVar15 < -0x78580dab) {
                        if ((int)uVar15 < -0x7ca32c34) {
                          if (uVar15 == 0x82e33fb4) {
                            uVar15 = 0xfff0fa00;
                            local_1b8 = uVar16;
                            goto LAB_00131b68;
                          }
                          if (uVar15 != 0x82fbf5cd) goto LAB_00131588;
                          uVar19 = 0;
                          uVar15 = 0xffff0000;
                          bVar12 = true;
                          local_1b8 = uVar16;
                        }
                        else {
                          if (uVar15 != 0x835cd3cc) {
                            if (uVar15 == 0x848317f2) {
                              uVar15 = 64000;
                              uVar19 = 0xff;
                              goto LAB_00131954;
                            }
                            goto LAB_00131588;
                          }
                          uVar19 = 0x80;
LAB_0013193c:
                          uVar15 = 0x8000;
                          local_1b8 = uVar16;
LAB_00131940:
                          bVar12 = true;
                          uVar15 = uVar15 | 0xff000000;
                        }
                      }
                      else if ((int)uVar15 < -0x744d546a) {
                        if (uVar15 == 0x87a7f255) {
LAB_0013166c:
                          uVar19 = 0x2f;
                          bVar12 = true;
                          uVar15 = 0xff4f4f00;
                          local_1b8 = uVar16;
                        }
                        else {
                          if (uVar15 != 0x8989e5fe) goto LAB_00131588;
                          uVar15 = 0xffdec400;
LAB_00131358:
                          uVar19 = 0xb0;
                          bVar12 = true;
                          local_1b8 = uVar16;
                        }
                      }
                      else if (uVar15 == 0x8bb2ab96) {
                        uVar19 = 0x7c;
                        bVar12 = true;
                        uVar15 = 0xff00fc00;
                        local_1b8 = uVar16;
                      }
                      else {
                        if (uVar15 == 0x8c361729) {
                          uVar15 = 0xffd5ef00;
                          local_1b8 = uVar16;
                          goto LAB_00131b68;
                        }
                        if (uVar15 != 0x8e1fedcc) goto LAB_00131588;
                        uVar19 = 0x98;
                        bVar12 = true;
                        uVar15 = 0xff98fb00;
                        local_1b8 = uVar16;
                      }
                    }
                    else if ((int)uVar15 < -0x681f67a6) {
                      if ((int)uVar15 < -0x6c17ff8a) {
                        if (uVar15 == 0x9049cd77) {
                          uVar15 = 0x6b00;
                          uVar19 = 0x55;
                          local_1b8 = uVar16;
                          goto LAB_0013190c;
                        }
                        if (uVar15 != 0x907d3a11) goto LAB_00131588;
                        uVar19 = 0xdb;
                        bVar12 = true;
                        uVar15 = 0xff937000;
                        local_1b8 = uVar16;
                      }
                      else {
                        if (uVar15 == 0x93e80076) {
                          uVar15 = 0x5a00;
                          uVar19 = 0x6a;
                          local_1b8 = uVar16;
                          goto LAB_00131968;
                        }
                        if (uVar15 != 0x952635e8) goto LAB_00131588;
                        uVar19 = 0xde;
                        bVar12 = true;
                        uVar15 = 0xff87b800;
                        local_1b8 = uVar16;
                      }
                    }
                    else if ((int)uVar15 < -0x6591fd01) {
                      if (uVar15 == 0x97e0985a) {
                        uVar15 = 0xff004500;
                        local_1b8 = uVar16;
                        goto LAB_00131b68;
                      }
                      if (uVar15 != 0x9807620d) goto LAB_00131588;
                      uVar15 = 0xff5c5c00;
LAB_001313b8:
                      uVar19 = 0xcd;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                    else if (uVar15 == 0x9a6e02ff) {
                      uVar15 = 0xff800000;
LAB_00131bd0:
                      uVar19 = 0x80;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                    else {
                      if (uVar15 != 0x9b55348d) {
                        if (uVar15 == 0x9c3f19c6) {
                          uVar15 = 0xee00;
                          uVar19 = 0x90;
                          local_1b8 = uVar16;
                          goto LAB_001307b8;
                        }
                        goto LAB_00131588;
                      }
                      bVar12 = true;
                      uVar15 = 0xffe6f500;
                      uVar19 = 0xfd;
                      local_1b8 = uVar16;
                    }
                  }
                  else if ((int)uVar15 < -0x55c1c5e1) {
                    if ((int)uVar15 < -0x5c028161) {
                      if ((int)uVar15 < -0x5f000e2f) {
                        if (uVar15 == 0x9cf73498) {
                          uVar15 = 0xff8cb400;
                          goto LAB_00131a3c;
                        }
                        if (uVar15 == 0x9dea06b6) {
                          uVar19 = 0xff;
                          goto LAB_00130f68;
                        }
                      }
                      else {
                        if (uVar15 == 0xa0fff1d1) {
                          uVar19 = 0;
                          uVar15 = 0xff800000;
                          bVar12 = true;
                          local_1b8 = uVar16;
                          goto LAB_00131594;
                        }
                        if (uVar15 == 0xa124f36b) {
                          uVar15 = 0xffe0ff00;
                          local_1b8 = uVar16;
                          goto LAB_00131b68;
                        }
                      }
                      goto LAB_00131588;
                    }
                    if ((int)uVar15 < -0x57abc477) {
                      if (uVar15 == 0xa3fd7e9f) {
                        uVar19 = 0;
                        local_1b8 = uVar16;
                        goto LAB_00131ae4;
                      }
                      if (uVar15 != 0xa60f29ba) goto LAB_00131588;
                      uVar19 = 0x99;
                      bVar12 = true;
                      uVar15 = 0xffcc3200;
                      local_1b8 = uVar16;
                    }
                    else if (uVar15 == 0xa8543b89) {
                      uVar15 = 0xff20a500;
LAB_00131a18:
                      uVar19 = 0xda;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                    else {
                      if (uVar15 != 0xa9362f24) {
                        if (uVar15 == 0xa9ddfd93) {
                          uVar15 = 0xffcdfa00;
                          local_1b8 = uVar16;
                          goto LAB_00131b68;
                        }
                        goto LAB_00131588;
                      }
                      uVar19 = 0x93;
                      bVar12 = true;
                      uVar15 = 0xffdb7000;
                      local_1b8 = uVar16;
                    }
                  }
                  else if ((int)uVar15 < -0x4d08d6c1) {
                    if ((int)uVar15 < -0x5277da49) {
                      if (uVar15 == 0xaa3e3a1f) {
                        uVar15 = 0xfff5f000;
                        local_1b8 = uVar16;
                        goto LAB_00131878;
                      }
                      if (uVar15 == 0xace6ba3a) {
                        uVar15 = 0xffd67000;
                        goto LAB_00131a18;
                      }
                      goto LAB_00131588;
                    }
                    if (uVar15 == 0xad8825b7) {
                      uVar19 = 0x2e;
                      bVar12 = true;
                      uVar15 = 0xff578b00;
                      local_1b8 = uVar16;
                    }
                    else {
                      if (uVar15 != 0xafe34731) {
                        iVar60 = -0x4d6fe65a;
                        goto LAB_00131294;
                      }
                      uVar19 = 0;
                      uVar15 = 0;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                  }
                  else if ((int)uVar15 < -0x4aab06e0) {
                    if (uVar15 == 0xb2f7293f) {
                      uVar19 = 0xfa;
                      bVar12 = true;
                      uVar15 = 0xffd2fa00;
                      local_1b8 = uVar16;
                    }
                    else {
                      if (uVar15 != 0xb351bdbd) goto LAB_00131588;
                      uVar19 = 0x6b;
                      bVar12 = true;
                      uVar15 = 0xff238e00;
                      local_1b8 = uVar16;
                    }
                  }
                  else if (uVar15 == 0xb554f920) {
                    uVar19 = 0xc0;
                    bVar12 = true;
                    uVar15 = 0xffc0c000;
                    local_1b8 = uVar16;
                  }
                  else {
                    if (uVar15 != 0xb6adb06b) {
                      if (uVar15 == 0xb6b77908) {
                        uVar19 = 0x9a;
                        goto LAB_00130cac;
                      }
                      goto LAB_00131588;
                    }
                    uVar19 = 0xdd;
                    bVar12 = true;
                    uVar15 = 0xffdda000;
                    local_1b8 = uVar16;
                  }
                }
                else {
                  if ((int)uVar15 < -0x1dbc198f) {
                    if ((int)uVar15 < -0x336e1036) {
                      if (-0x40420b95 < (int)uVar15) {
                        if ((int)uVar15 < -0x3c8f41c5) {
                          if (uVar15 != 0xbfbdf46c) {
                            if (uVar15 == 0xc17f9b3a) {
                              uVar15 = 0xffc4e400;
                              local_1b8 = uVar16;
                              goto LAB_00131b68;
                            }
                            goto LAB_00131588;
                          }
                          uVar19 = 0x41;
                          bVar12 = true;
                          uVar15 = 0xffe16900;
                          local_1b8 = uVar16;
                        }
                        else if (uVar15 == 0xc370be3b) {
                          uVar15 = 0xd800;
                          uVar19 = 0xad;
LAB_001318b8:
                          bVar12 = true;
                          uVar15 = uVar15 | 0xffe60000;
                          local_1b8 = uVar16;
                        }
                        else {
                          if (uVar15 == 0xcbdc3f67) {
                            uVar15 = 0xffccd100;
                            goto LAB_00131b7c;
                          }
                          if (uVar15 != 0xcc8e0751) goto LAB_00131588;
                          uVar19 = 0x19;
                          bVar12 = true;
                          uVar15 = 0xff701900;
                          local_1b8 = uVar16;
                        }
                        goto LAB_00131594;
                      }
                      if ((int)uVar15 < -0x46d74c12) {
                        if (uVar15 == 0xb8ea87d3) {
                          uVar15 = 0x8b00;
                          uVar19 = 0x22;
                          goto LAB_00131a70;
                        }
                        if (uVar15 == 0xb8f04003) {
                          uVar15 = 0xff3f8500;
                          goto LAB_001313b8;
                        }
                      }
                      else {
                        if (uVar15 == 0xb928b3ee) {
                          uVar15 = 0xe600;
                          uVar19 = 0xe6;
LAB_00131954:
                          bVar12 = true;
                          uVar15 = uVar15 | 0xfffa0000;
                          local_1b8 = uVar16;
                          goto LAB_00131594;
                        }
                        iVar60 = -0x45654c66;
LAB_00131294:
                        if (uVar15 - iVar60 == 0) {
                          uVar19 = 0x80;
                          local_1b8 = uVar16;
                          goto LAB_00131ae4;
                        }
                      }
                    }
                    else if ((int)uVar15 < -0x2a6e5cb4) {
                      if (-0x3182a947 < (int)uVar15) {
                        if (uVar15 == 0xce7d56ba) {
                          uVar19 = 0;
                          bVar12 = true;
                          uVar15 = 0xff8b8b00;
                          local_1b8 = uVar16;
                        }
                        else {
                          if (uVar15 != 0xd57e7bfd) goto LAB_00131588;
                          uVar15 = 0xfffff800;
                          uVar19 = 0xf8;
                          bVar12 = true;
                          local_1b8 = uVar16;
                        }
                        goto LAB_00131594;
                      }
                      if (uVar15 == 0xcc91efca) {
                        uVar15 = 0xee00;
                        uVar19 = 0xaf;
                        goto LAB_00131920;
                      }
                      if (uVar15 == 0xcd4bddcf) {
                        uVar15 = 0xffd7eb00;
                        local_1b8 = uVar16;
                        goto LAB_00131748;
                      }
                    }
                    else {
                      if (-0x21fdf89b < (int)uVar15) {
                        if (uVar15 == 0xde020766) {
                          uVar15 = 0xffffff00;
                          local_1b8 = uVar16;
                        }
                        else {
                          if (uVar15 == 0xe15092fb) {
                            uVar15 = 0xffdcdc00;
                            goto LAB_00131bac;
                          }
                          if (uVar15 != 0xe1858adc) goto LAB_00131588;
                          uVar15 = 0xffe1e400;
                          local_1b8 = uVar16;
                        }
                        goto LAB_00131b68;
                      }
                      if (uVar15 == 0xd591a34c) {
                        uVar19 = 0xff;
                        bVar12 = true;
                        uVar15 = 0xfff5f000;
                        local_1b8 = uVar16;
                        goto LAB_00131594;
                      }
                      if (uVar15 == 0xd6e414eb) {
                        uVar15 = 0xf000;
                        uVar19 = 0xfa;
                        goto LAB_001318b8;
                      }
                    }
                    goto LAB_00131588;
                  }
                  if ((int)uVar15 < -0x72e0a5a) {
                    if ((int)uVar15 < -0x142760a4) {
                      if (-0x17ff7b67 < (int)uVar15) {
                        if (uVar15 == 0xe800849a) {
                          uVar15 = 0xff134500;
                          goto LAB_00131af8;
                        }
                        if (uVar15 == 0xe92d961d) {
                          uVar15 = 0xffb9da00;
                          local_1b8 = uVar16;
                          goto LAB_00131b68;
                        }
                        goto LAB_00131588;
                      }
                      if (uVar15 == 0xe243e671) {
                        uVar19 = 0x20;
                        bVar12 = true;
                        uVar15 = 0xffaab200;
                        local_1b8 = uVar16;
                      }
                      else {
                        if (uVar15 != 0xe707aada) goto LAB_00131588;
                        uVar19 = 0;
                        bVar12 = true;
                        uVar15 = 0xffd1ce00;
                        local_1b8 = uVar16;
                      }
                    }
                    else if ((int)uVar15 < -0xf9f466c) {
                      if (uVar15 != 0xebd89f5c) {
                        if (uVar15 == 0xec66d793) {
                          uVar15 = 0xff00d700;
                          local_1b8 = uVar16;
                          goto LAB_00131b68;
                        }
                        goto LAB_00131588;
                      }
                      uVar15 = 0xff000000;
LAB_00131af8:
                      uVar19 = 0x8b;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                    else if (uVar15 == 0xf060b994) {
                      uVar15 = 0xffffff00;
                      uVar19 = 0xe0;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                    else if (uVar15 == 0xf3aa9557) {
                      uVar19 = 0x7f;
                      bVar12 = true;
                      uVar15 = 0xffd4ff00;
                      local_1b8 = uVar16;
                    }
                    else {
                      if (uVar15 != 0xf79b7417) goto LAB_00131588;
                      uVar19 = 0;
                      bVar12 = true;
                      uVar15 = 0xff7fff00;
                      local_1b8 = uVar16;
                    }
                  }
                  else {
                    if ((int)uVar15 < 0x42602ee) {
                      if ((int)uVar15 < 0x11decbc) {
                        if (uVar15 == 0xf8d1f5a6) {
                          uVar15 = 0x8f00;
                          uVar19 = 0xbc;
LAB_00131b1c:
                          bVar12 = true;
                          uVar15 = uVar15 | 0xff8f0000;
                          local_1b8 = uVar16;
                          goto LAB_00131594;
                        }
                        if (uVar15 == 0xfdec2a8e) {
                          uVar19 = 0;
                          uVar15 = 0xffcd0000;
                          bVar12 = true;
                          local_1b8 = uVar16;
                          goto LAB_00131594;
                        }
                      }
                      else {
                        if (uVar15 == 0x11decbc) {
                          uVar19 = 0;
                          goto LAB_0013193c;
                        }
                        if (uVar15 == 0x340e137) {
                          uVar15 = 0xbc00;
                          uVar19 = 0x8f;
                          goto LAB_00131b1c;
                        }
                        if (uVar15 == 0x3e1343a) goto LAB_00131694;
                      }
                      goto LAB_00131588;
                    }
                    if ((int)uVar15 < 0x5b72af6) {
                      if (uVar15 != 0x42602ee) {
                        if (uVar15 == 0x43cb490) {
                          uVar15 = 0xffb3de00;
                          local_1b8 = uVar16;
                          goto LAB_0013187c;
                        }
                        goto LAB_00131588;
                      }
                      uVar15 = 0xff3c1400;
LAB_00131bac:
                      uVar19 = 0xdc;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                    else if (uVar15 == 0x5b72af6) {
                      uVar15 = 0xff8b3d00;
LAB_00131b7c:
                      uVar19 = 0x48;
                      bVar12 = true;
                      local_1b8 = uVar16;
                    }
                    else {
                      if (uVar15 == 0x5bf6449) {
                        uVar19 = 0xff;
                      }
                      else {
                        if (uVar15 != 0x7e34bbc) goto LAB_00131588;
                        uVar19 = 0;
                      }
LAB_00131b50:
                      bVar12 = true;
                      uVar15 = 0xff00ff00;
                      local_1b8 = uVar16;
                    }
                  }
                }
              }
              else {
                local_1b8 = uVar16;
                if ((int)uVar15 < 0x419e5a8a) {
LAB_00130268:
                  uVar16 = local_1b8;
                  if ((int)uVar15 < 0x225e036d) {
                    if ((int)uVar15 < 0x16ee77b1) {
                      if ((int)uVar15 < 0xba64a14) {
                        if ((int)uVar15 < 0x920e031) {
                          if (uVar15 == 0x817f94d) {
                            uVar19 = 0;
LAB_00131b2c:
                            bVar12 = true;
                            uVar15 = 0xff8b0000;
                          }
                          else {
                            if (uVar15 != 0x8a71a94) goto LAB_00131588;
                            uVar19 = 0xd8;
                            bVar12 = true;
                            uVar15 = 0xffd8bf00;
                          }
                        }
                        else if (uVar15 == 0x920e031) {
                          uVar15 = 0xfffafa00;
LAB_00131878:
                          uVar15 = uVar15 | 0x500;
LAB_0013187c:
                          uVar19 = 0xf5;
                          bVar12 = true;
                        }
                        else {
                          if (uVar15 != 0x9357b30) goto LAB_00131588;
                          uVar15 = 0xffface00;
LAB_00131210:
                          uVar19 = 0x87;
                          bVar12 = true;
                        }
                      }
                      else if ((int)uVar15 < 0xd8329fc) {
                        if (uVar15 != 0xba64a14) {
                          if (uVar15 == 0xc376f3c) {
                            uVar15 = 0x6400;
                            uVar19 = 0;
                            goto LAB_00131940;
                          }
                          goto LAB_00131588;
                        }
                        uVar19 = 0x3c;
                        bVar12 = true;
                        uVar15 = 0xff71b300;
                      }
                      else if (uVar15 == 0xd8329fc) {
                        uVar15 = 0xff00;
                        uVar19 = 0xad;
LAB_0013190c:
                        bVar12 = true;
                        uVar15 = uVar15 | 0xff2f0000;
                      }
                      else {
                        if ((uVar15 != 0xde1b599) && (uVar15 != 0x15d8c7d5)) goto LAB_00131588;
                        uVar15 = 0x8000;
                        uVar19 = 0x70;
LAB_001307b8:
                        bVar12 = true;
                        uVar15 = uVar15 | 0xff900000;
                      }
                    }
                    else if ((int)uVar15 < 0x1bdaa4b0) {
                      if ((int)uVar15 < 0x1a0e44ad) {
                        if (uVar15 != 0x16ee77b1) {
                          if (uVar15 == 0x17c1a698) {
                            uVar15 = 0xffb46900;
                            goto LAB_00131b68;
                          }
                          goto LAB_00131588;
                        }
                        uVar15 = 0xeb00;
                        uVar19 = 0xff;
LAB_00131968:
                        bVar12 = true;
                        uVar15 = uVar15 | 0xffcd0000;
                      }
                      else {
                        if (uVar15 == 0x1a0e44ad) {
                          uVar15 = 0x5500;
                          uVar19 = 0xba;
                          goto LAB_00131890;
                        }
                        if (uVar15 != 0x1a236609) goto LAB_00131588;
                        uVar19 = 0xb8;
                        bVar12 = true;
                        uVar15 = 0xff0b8600;
                      }
                    }
                    else if ((int)uVar15 < 0x1e17dfe8) {
                      if (uVar15 != 0x1bdaa4b0) {
                        if (uVar15 == 0x1c96ce4e) {
                          uVar15 = 0xffebce00;
                          goto LAB_00131210;
                        }
                        goto LAB_00131588;
                      }
                      uVar19 = 199;
                      bVar12 = true;
                      uVar15 = 0xff851500;
                    }
                    else {
                      if (uVar15 != 0x1e17dfe8) {
                        if (uVar15 == 0x1e8db068) {
                          uVar19 = 0x8b;
                          goto LAB_00131b2c;
                        }
                        if (uVar15 == 0x1ed7a4ea) {
                          uVar15 = 0xffdcf800;
                          goto LAB_00131b68;
                        }
                        goto LAB_00131588;
                      }
                      uVar15 = 0xff993300;
LAB_001317c8:
                      uVar19 = 0x66;
                      bVar12 = true;
                    }
                  }
                  else if ((int)uVar15 < 0x32db86df) {
                    if ((int)uVar15 < 0x29f41e26) {
                      if ((int)uVar15 < 0x23b55208) {
                        if (uVar15 == 0x225e036d) {
                          uVar15 = 0xffcbc000;
                          goto LAB_00131b68;
                        }
                        if (uVar15 == 0x22d8ff1c) {
                          uVar15 = 0xffaacd00;
                          goto LAB_001317c8;
                        }
                      }
                      else {
                        if (uVar15 == 0x23b55208) {
LAB_00131410:
                          uVar15 = 0xd300;
                          uVar19 = 0xd3;
LAB_00131890:
                          bVar12 = true;
                          uVar15 = uVar15 | 0xffd30000;
                          goto LAB_00131594;
                        }
                        if (uVar15 == 0x262562c3) {
                          uVar15 = 0xfffff800;
                          goto LAB_001316ec;
                        }
                      }
                      goto LAB_00131588;
                    }
                    if ((int)uVar15 < 0x30be372f) {
                      if (uVar15 != 0x29f41e26) {
                        if (uVar15 == 0x2bbe58fc) goto LAB_00131410;
                        goto LAB_00131588;
                      }
LAB_0013169c:
                      uVar19 = 0x69;
                      bVar12 = true;
                      uVar15 = 0xff696900;
                    }
                    else if (uVar15 == 0x30be372f) {
                      uVar19 = 0xa5;
                      bVar12 = true;
                      uVar15 = 0xff2a2a00;
                    }
                    else {
                      if (uVar15 == 0x31feb81a) goto LAB_0013169c;
                      if (uVar15 != 0x3227246b) goto LAB_00131588;
                      uVar19 = 0xa0;
                      bVar12 = true;
                      uVar15 = 0xff2d5200;
                    }
                  }
                  else if ((int)uVar15 < 0x39b3175f) {
                    if ((int)uVar15 < 0x3758c2e0) {
                      if (uVar15 != 0x32db86df) {
                        if (uVar15 != 0x35a2e5c3) goto LAB_00131588;
                        uVar15 = 0xff476300;
                        goto LAB_00131b68;
                      }
                      uVar19 = 0xe9;
                      bVar12 = true;
                      uVar15 = 0xff7a9600;
                    }
                    else if (uVar15 == 0x3758c2e0) {
                      uVar15 = 0xffffff00;
LAB_001316ec:
                      uVar19 = 0xf0;
                      bVar12 = true;
                    }
                    else if (uVar15 == 0x37ac1d26) {
LAB_00131680:
                      uVar19 = 0xa9;
                      bVar12 = true;
                      uVar15 = 0xffa9a900;
                    }
                    else {
                      if (uVar15 != 0x38540573) goto LAB_00131588;
                      uVar19 = 0xf5;
                      bVar12 = true;
                      uVar15 = 0xffdcf500;
                    }
                  }
                  else {
                    if (0x3edce36a < (int)uVar15) {
                      if (uVar15 == 0x3edce36b) {
                        uVar15 = 0xff008c00;
                      }
                      else {
                        if (uVar15 == 0x3fb6b71a) goto LAB_00131680;
                        if (uVar15 != 0x40f480dc) goto LAB_00131588;
                        uVar15 = 0xff000000;
                      }
                      goto LAB_00131b68;
                    }
                    if (uVar15 != 0x39b3175f) {
                      uVar19 = 0x3bb34073;
                      goto LAB_00131434;
                    }
                    uVar15 = 0xff728000;
LAB_00131748:
                    uVar19 = 0xfa;
                    bVar12 = true;
                  }
                }
                else if ((int)uVar15 < 0x6021b659) {
                  if ((int)uVar15 < 0x4c7a1b8f) {
                    if ((int)uVar15 < 0x45658504) {
                      if ((int)uVar15 < 0x429bb099) {
                        if (uVar15 == 0x419e5a8a) {
                          uVar19 = 0x8a;
                          bVar12 = true;
                          uVar15 = 0xffe22b00;
                        }
                        else {
                          uVar19 = 0x42374f95;
LAB_00130ee4:
                          if (uVar15 != uVar19) goto LAB_00131588;
                          uVar19 = 0;
                          uVar15 = 0xffffff00;
                          bVar12 = true;
                        }
                      }
                      else if (uVar15 == 0x429bb099) {
                        uVar15 = 0xff1e6900;
LAB_00131a3c:
                        uVar19 = 0xd2;
                        bVar12 = true;
                        local_1b8 = uVar16;
                      }
                      else {
                        uVar19 = 0x43bdda67;
LAB_00131434:
                        uVar16 = local_1b8;
                        if (uVar15 != uVar19) goto LAB_00131588;
                        uVar19 = 0x77;
                        bVar12 = true;
                        uVar15 = 0xff998800;
                      }
                    }
                    else {
                      if ((int)uVar15 < 0x46aadbde) {
                        if (uVar15 == 0x45658504) {
                          uVar15 = 0xffb5e400;
                        }
                        else {
                          if (uVar15 != 0x45b473eb) goto LAB_00131588;
                          uVar15 = 0xff00a500;
                        }
                      }
                      else {
                        if (uVar15 != 0x46aadbde) {
                          if (uVar15 != 0x480fb75e) {
                            uVar19 = 0x4961533a;
                            goto LAB_00130ee4;
                          }
                          uVar19 = 0x5f;
                          bVar12 = true;
                          uVar15 = 0xffa09e00;
                          goto LAB_00131594;
                        }
                        uVar15 = 0xffeef500;
                      }
LAB_00131b68:
                      uVar19 = 0xff;
                      bVar12 = true;
                    }
                  }
                  else if ((int)uVar15 < 0x54408ac8) {
                    if ((int)uVar15 < 0x4efa960c) {
                      if (uVar15 == 0x4c7a1b8f) {
                        uVar19 = 0xff;
                        bVar12 = true;
                        uVar15 = 0xffadde00;
                      }
                      else {
                        if (uVar15 != 0x4d77512b) goto LAB_00131588;
                        uVar19 = 0x4b;
                        bVar12 = true;
                        uVar15 = 0xff820000;
                      }
                    }
                    else if (uVar15 == 0x4efa960c) {
LAB_001316d4:
                      uVar19 = 0xf0;
LAB_00131ae4:
                      bVar12 = true;
                      uVar15 = 0xff808000;
                    }
                    else {
                      if (uVar15 == 0x4f9530f7) {
                        uVar15 = 0xff931400;
                        goto LAB_00131b68;
                      }
                      if (uVar15 != 0x51b1437e) goto LAB_00131588;
                      uVar15 = 0xffff9000;
                      uVar19 = 0x1e;
                      bVar12 = true;
                    }
                  }
                  else if ((int)uVar15 < 0x568f4ba4) {
                    if (uVar15 == 0x54408ac8) {
                      uVar19 = 0x46;
                      bVar12 = true;
                      uVar15 = 0xffb48200;
                    }
                    else {
                      if (uVar15 != 0x559a4808) goto LAB_00131588;
                      uVar19 = 100;
                      bVar12 = true;
                      uVar15 = 0xffed9500;
                    }
                  }
                  else if (uVar15 == 0x568f4ba4) {
                    uVar19 = 0;
                    uVar15 = 0xff000000;
                    bVar12 = true;
                  }
                  else if (uVar15 == 0x5cabe370) {
                    uVar19 = 0;
                    uVar15 = 0xffffbf00;
                    bVar12 = true;
                  }
                  else {
                    if (uVar15 != 0x5f247ea7) goto LAB_00131588;
                    uVar19 = 0x32;
LAB_00130cac:
                    bVar12 = true;
                    uVar15 = 0xff32cd00;
                    local_1b8 = uVar16;
                  }
                }
                else if ((int)uVar15 < 0x714b1745) {
                  if ((int)uVar15 < 0x677785b6) {
                    if ((int)uVar15 < 0x63e629e8) {
                      if (uVar15 == 0x6021b659) {
                        uVar15 = 0xffaae800;
LAB_001319f8:
                        uVar19 = 0xee;
                        bVar12 = true;
                      }
                      else {
                        if (uVar15 != 0x60605b18) goto LAB_00131588;
                        uVar19 = 0xf0;
LAB_00130f68:
                        bVar12 = true;
                        uVar15 = 0xfff0ff00;
                        local_1b8 = uVar16;
                      }
                      goto LAB_00131594;
                    }
                    if (uVar15 == 0x63e629e8) {
LAB_00131694:
                      uVar15 = 0xffff0000;
                      local_1b8 = uVar16;
                      goto LAB_00131b68;
                    }
                    if (uVar15 == 0x66bc38dd) {
                      uVar19 = 0x7f;
                      goto LAB_00131b50;
                    }
                  }
                  else if ((int)uVar15 < 0x6d9b9752) {
                    if (uVar15 == 0x677785b6) {
                      uVar15 = 0x2200;
                      uVar19 = 0xb2;
LAB_00131a70:
                      bVar12 = true;
                      uVar15 = uVar15 | 0xff220000;
                      local_1b8 = uVar16;
                      goto LAB_00131594;
                    }
                    if (uVar15 == 0x699ce1b7) {
                      uVar15 = 0xffc1b600;
                      goto LAB_00131b68;
                    }
                  }
                  else {
                    if (uVar15 == 0x6d9b9752) {
                      uVar15 = 0xff507f00;
                      goto LAB_00131b68;
                    }
                    if (uVar15 == 0x6e32ccf5) {
                      uVar15 = 0xff000000;
                      goto LAB_00131bd0;
                    }
                    if (uVar15 == 0x6fdd84bc) {
                      uVar15 = 0xffe6e000;
                      goto LAB_00131358;
                    }
                  }
LAB_00131588:
                  local_1b8 = uVar16;
                  bVar12 = false;
                  uVar19 = 0;
                  uVar15 = 0;
                }
                else if ((int)uVar15 < 0x772890e7) {
                  if ((int)uVar15 < 0x719339b9) {
                    if (uVar15 == 0x714b1745) {
                      uVar15 = 0xff7aa000;
                      goto LAB_00131b68;
                    }
                    if (uVar15 != 0x71780822) goto LAB_00131588;
                    uVar19 = 0;
                    bVar12 = true;
                    uVar15 = 0xff9afa00;
                  }
                  else {
                    if (uVar15 == 0x719339b9) {
                      uVar15 = 0xff8ce600;
                      goto LAB_001316ec;
                    }
                    if (uVar15 == 0x7495c772) {
                      uVar19 = 0x94;
                      bVar12 = true;
                      uVar15 = 0xffd30000;
                    }
                    else {
                      if (uVar15 != 0x7538805a) goto LAB_00131588;
                      uVar19 = 0x40;
                      bVar12 = true;
                      uVar15 = 0xffd0e000;
                    }
                  }
                }
                else if ((int)uVar15 < 0x7b75476a) {
                  if (uVar15 != 0x772890e7) {
                    if (uVar15 == 0x7b6d57f2) {
                      uVar15 = 0xffee8200;
                      goto LAB_001319f8;
                    }
                    goto LAB_00131588;
                  }
                  uVar15 = 0x6800;
                  uVar19 = 0x7b;
LAB_00131920:
                  bVar12 = true;
                  uVar15 = uVar15 | 0xffee0000;
                  local_1b8 = uVar16;
                }
                else if (uVar15 == 0x7b75476a) {
                  uVar19 = 0xf4;
                  bVar12 = true;
                  uVar15 = 0xff60a400;
                }
                else {
                  if (uVar15 != 0x7cacbc39) {
                    if (uVar15 == 0x7fb0e019) goto LAB_0013166c;
                    goto LAB_00131588;
                  }
                  uVar19 = 0xbd;
                  bVar12 = true;
                  uVar15 = 0xff6bb700;
                }
              }
LAB_00131594:
              uVar15 = uVar15 | uVar19;
              goto LAB_0013159c;
            }
            uVar33 = 0x10000001c;
          }
          goto LAB_00131664;
        }
      }
      local_1b8 = uVar16;
      uVar16 = 0;
      uVar33 = 0;
      ppCVar27[5] = ppCVar27[0xf];
      ppCVar27[4] = ppCVar27[0xe];
      ppCVar27[7] = ppCVar27[0x11];
      ppCVar27[6] = ppCVar27[0x10];
      *(undefined8 *)((long)ppCVar27 + 0x44) = *(undefined8 *)((long)ppCVar27 + 0x94);
      *(undefined8 *)((long)ppCVar27 + 0x3c) = *(undefined8 *)((long)ppCVar27 + 0x8c);
      ppCVar27[1] = ppCVar27[0xb];
      *ppCVar27 = ppCVar27[10];
      ppCVar27[3] = SUB168(*(undefined1 (*) [16])(ppCVar27 + 0xc),8);
      ppCVar27[2] = SUB168(*(undefined1 (*) [16])(ppCVar27 + 0xc),0);
      local_1c8 = (ContextContainer *)CONCAT44(local_1c8._4_4_,(int)local_1c8);
    }
LAB_001315cc:
    if ((int)local_1c8 == 0xe) {
      FUN_00134314(&local_f0,&local_1e0);
      pCVar3 = ppCVar39[2];
      pCVar4 = ppCVar39[3];
      pCVar29 = ppCVar39[4];
      pCVar26 = ppCVar39[5];
      pCVar62 = *ppCVar39;
      ppCVar36[4] = ppCVar39[1];
      ppCVar36[3] = pCVar62;
      ppCVar36[8] = pCVar26;
      ppCVar36[7] = pCVar29;
      ppCVar36[6] = pCVar4;
      ppCVar36[5] = pCVar3;
    }
    uVar16 = uVar33 & 0xffffffff | uVar16;
    if ((int)local_1c8 != 6) {
      uVar16 = 0;
    }
    if ((local_228[0] & 1) != 0) {
      operator_delete(local_218);
    }
    if ((uVar16 & 0x300000000) == 0x200000000) {
      uVar15 = (uint)uVar16;
      *(uint *)param_4 =
           uVar15 & 0xff000000 | uVar15 & 0xff00 | (uVar15 & 0xff) << 0x10 | uVar15 >> 0x10 & 0xff;
    }
    else {
      uVar15 = facebook::react::parsePlatformColor(param_1,iVar30,(RawValue *)param_3);
      *(uint *)param_4 = uVar15;
    }
  }
LAB_0012f4e8:
  if (*(long *)(lVar28 + 0x28) == local_98) {
    return;
  }
LAB_00131f54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00131f58  facebook::react::parsePlatformColor =====

/* facebook::react::parsePlatformColor(facebook::react::ContextContainer const&, int,
   facebook::react::RawValue const&) */

undefined4
facebook::react::parsePlatformColor(ContextContainer *param_1,int param_2,RawValue *param_3)

{
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  void *__s2;
  _jmethodID *p_Var7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  _jmethodID *p_Var15;
  _jobject *p_Var16;
  uint *puVar17;
  long lVar18;
  long *plVar19;
  byte *pbVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  char *pcVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  char *pcVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined8 *puVar30;
  ulong *puVar31;
  undefined8 *puVar32;
  ulong *puVar33;
  long *plVar34;
  _jmethodID *p_Var35;
  long lVar36;
  long *unaff_x20;
  long *plVar37;
  byte *pbVar38;
  byte *pbVar39;
  ulong uVar40;
  undefined *puVar41;
  uint uVar42;
  ulong *puVar43;
  long lVar44;
  ulong uVar45;
  ulong *puVar46;
  undefined2 uVar47;
  float fVar48;
  float fVar49;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  long *plStack_168;
  long *local_160;
  ulong local_158;
  float local_150;
  long local_140 [4];
  long *local_120;
  undefined8 local_110;
  char cStack_108;
  char acStack_107 [7];
  char *local_100;
  uint *local_f0;
  _jmethodID *local_e0;
  _jmethodID *p_Stack_d8;
  _jmethodID *local_d0;
  undefined8 *local_c0 [2];
  uint local_b0;
  undefined4 uStack_ac;
  char cStack_a8;
  char acStack_a7 [7];
  char *local_a0;
  uint *local_90;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_3 + 0x30) == 1) {
    if (*(int *)(param_3 + 8) == 7) {
      plVar29 = *(long **)param_3;
      local_c0[0] = (undefined8 *)
                    (**(code **)(*plVar29 + 0x88))(plVar29,*(undefined8 *)(param_3 + 0x10));
                    /* try { // try from 00132028 to 00132037 has its CatchHandler @ 00133d20 */
      (**(code **)(*plVar29 + 0x218))(&local_1a0,plVar29,local_c0);
                    /* try { // try from 00132040 to 0013204b has its CatchHandler @ 00133cfc */
      lVar18 = (**(code **)(*plVar29 + 0x240))(plVar29,&local_1a0);
      if (lVar18 != 0) {
                    /* try { // try from 0013205c to 0013206f has its CatchHandler @ 00133cd8 */
        (**(code **)(*plVar29 + 0x260))(&local_b0,plVar29,&local_1a0,0);
        local_1b8 = (undefined8 *)CONCAT71(acStack_a7,cStack_a8);
        cStack_a8 = '\0';
        acStack_a7[0] = '\0';
        acStack_a7[1] = '\0';
        acStack_a7[2] = '\0';
        acStack_a7[3] = '\0';
        acStack_a7[4] = '\0';
        acStack_a7[5] = '\0';
        acStack_a7[6] = '\0';
        facebook::jsi::Value::~Value((Value *)&local_b0);
                    /* try { // try from 0013208c to 0013209f has its CatchHandler @ 00133c9c */
        (**(code **)(*plVar29 + 0x188))(&local_110,plVar29,local_c0,&local_1b8);
        if ((uint)local_110 == 7) {
                    /* try { // try from 001320b8 to 00132127 has its CatchHandler @ 00133d40 */
          local_170 = (undefined8 *)
                      (**(code **)(*plVar29 + 0x88))
                                (plVar29,CONCAT17(acStack_107[6],
                                                  CONCAT61(acStack_107._0_6_,cStack_108)));
          uVar14 = (**(code **)(*plVar29 + 0x1e0))(plVar29,&local_170);
          if ((uVar14 & 1) == 0) {
            unaff_x20 = (long *)0x0;
          }
          else {
            local_e0 = (_jmethodID *)(**(code **)(*plVar29 + 0x88))(plVar29,local_170);
            lVar36 = (**(code **)(*plVar29 + 0x240))(plVar29,&local_e0);
            if (lVar36 == 0) {
              unaff_x20 = (long *)0x1;
            }
            else {
              (**(code **)(*plVar29 + 0x260))(&local_b0,plVar29,&local_e0,0);
              unaff_x20 = (long *)(ulong)(local_b0 == 6);
              facebook::jsi::Value::~Value((Value *)&local_b0);
            }
            if (local_e0 != (_jmethodID *)0x0) {
              (*(code *)**(undefined8 **)local_e0)();
            }
          }
          if (local_170 != (undefined8 *)0x0) {
            (**(code **)*local_170)();
          }
        }
        else {
          unaff_x20 = (long *)0x0;
        }
        facebook::jsi::Value::~Value((Value *)&local_110);
        if (local_1b8 != (undefined8 *)0x0) {
          (**(code **)*local_1b8)();
        }
      }
      if (local_1a0 != (undefined8 *)0x0) {
        (**(code **)*local_1a0)();
      }
      plVar29 = (long *)(ulong)((uint)(lVar18 == 0) | (uint)unaff_x20);
      if (local_c0[0] != (undefined8 *)0x0) {
        (**(code **)*local_c0[0])();
      }
      if ((lVar18 == 0) != 0 || ((ulong)unaff_x20 & 1) != 0) {
        if (*(int *)(param_3 + 0x30) == 1) {
          plVar34 = *(long **)param_3;
          local_188 = (undefined8 *)
                      (**(code **)(*plVar34 + 0x88))(plVar34,*(undefined8 *)(param_3 + 0x10));
                    /* try { // try from 001326d8 to 001326e7 has its CatchHandler @ 00133c3c */
          (**(code **)(*plVar34 + 0x218))(&local_190,plVar34,&local_188);
                    /* try { // try from 001326f0 to 001326fb has its CatchHandler @ 00133c34 */
          lVar18 = (**(code **)(*plVar34 + 0x240))(plVar34,&local_190);
          local_150 = 1.0;
          plStack_168 = (long *)0x0;
          local_170 = (undefined8 *)0x0;
          local_158 = 0;
          local_160 = (long *)0x0;
          if (lVar18 != 0) {
            lVar36 = 0;
            do {
                    /* try { // try from 00132750 to 00132763 has its CatchHandler @ 00133e30 */
              (**(code **)(*plVar34 + 0x260))(&local_1a0,plVar34,&local_190,lVar36);
                    /* try { // try from 00132770 to 00132777 has its CatchHandler @ 00133e38 */
              local_1a8 = (undefined8 *)(**(code **)(*plVar34 + 0x80))(plVar34,local_198);
                    /* try { // try from 00132784 to 00132797 has its CatchHandler @ 00133e40 */
              (**(code **)(*plVar34 + 0x188))(&local_1b8,plVar34,&local_188,&local_1a8);
              if ((int)local_1b8 != 0) {
                    /* try { // try from 001327a8 to 001327b7 has its CatchHandler @ 00133e00 */
                (**(code **)(*plVar34 + 0x120))(&local_110,plVar34,&local_1a8);
                    /* try { // try from 001327c4 to 001327cb has its CatchHandler @ 00133e08 */
                puVar32 = (undefined8 *)(**(code **)(*plVar34 + 0x88))(plVar34,local_1b0);
                    /* try { // try from 001327d8 to 001327e3 has its CatchHandler @ 00133e18 */
                local_180 = (undefined8 *)(**(code **)(*plVar34 + 0x88))(plVar34,puVar32);
                    /* try { // try from 001327f0 to 001327fb has its CatchHandler @ 00133e24 */
                lVar12 = (**(code **)(*plVar34 + 0x240))(plVar34,&local_180);
                local_e0 = (_jmethodID *)0x0;
                p_Stack_d8 = (_jmethodID *)0x0;
                local_d0 = (_jmethodID *)0x0;
                    /* try { // try from 00132808 to 00132813 has its CatchHandler @ 00133e2c */
                FUN_00139f74(&local_e0,lVar12);
                if (lVar12 != 0) {
                  lVar44 = 0;
                  do {
                    /* try { // try from 00132854 to 00132867 has its CatchHandler @ 00133ee4 */
                    (**(code **)(*plVar34 + 0x260))(local_c0,plVar34,&local_180,lVar44);
                    /* try { // try from 00132868 to 00132877 has its CatchHandler @ 00133eec */
                    facebook::jsi::Value::asString((IRuntime *)local_c0);
                    /* try { // try from 00132880 to 0013288f has its CatchHandler @ 00133ef4 */
                    (**(code **)(*plVar34 + 0x120))(&local_b0,plVar34,&local_178);
                    if (local_178 != (undefined8 *)0x0) {
                      (**(code **)*local_178)();
                    }
                    if (p_Stack_d8 < local_d0) {
                      *(char **)(p_Stack_d8 + 0x10) = local_a0;
                      *(ulong *)(p_Stack_d8 + 8) = CONCAT71(acStack_a7,cStack_a8);
                      *(ulong *)p_Stack_d8 = CONCAT44(uStack_ac,local_b0);
                      p_Stack_d8 = p_Stack_d8 + 0x18;
                    }
                    else {
                    /* try { // try from 001328b0 to 001328bb has its CatchHandler @ 00133e9c */
                      p_Stack_d8 = (_jmethodID *)FUN_0013a098(&local_e0,&local_b0);
                      if ((local_b0 & 1) != 0) {
                        operator_delete(local_a0);
                      }
                    }
                    facebook::jsi::Value::~Value((Value *)local_c0);
                    lVar44 = lVar44 + 1;
                  } while (lVar12 != lVar44);
                }
                if (local_180 != (undefined8 *)0x0) {
                  (**(code **)*local_180)();
                }
                if (puVar32 != (undefined8 *)0x0) {
                  (**(code **)*puVar32)(puVar32);
                }
                uVar14 = (ulong)((byte)local_110._0_1_ >> 1);
                pcVar5 = (char *)((ulong)&local_110 | 1);
                if (((uint)local_110 & 1) != 0) {
                  uVar14 = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
                  pcVar5 = local_100;
                }
                    /* try { // try from 00132918 to 0013291f has its CatchHandler @ 00133dfc */
                plVar11 = (long *)FUN_001391e0(&local_b0,pcVar5,uVar14);
                plVar13 = plStack_168;
                if (plStack_168 != (long *)0x0) {
                  uVar10 = NEON_cnt(plStack_168,1);
                  uVar47 = NEON_uaddlv(uVar10,1);
                  uVar14 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47) & 0xffffffff;
                  if (uVar14 < 2) {
                    plVar29 = (long *)((long)plStack_168 - 1U & (ulong)plVar11);
                  }
                  else {
                    plVar29 = plVar11;
                    if (plStack_168 <= plVar11) {
                      uVar40 = 0;
                      if (plStack_168 != (long *)0x0) {
                        uVar40 = (ulong)plVar11 / (ulong)plStack_168;
                      }
                      plVar29 = (long *)((long)plVar11 - uVar40 * (long)plStack_168);
                    }
                  }
                  if (((long *)local_170[(long)plVar29] != (long *)0x0) &&
                     (plVar37 = *(long **)local_170[(long)plVar29], plVar37 != (long *)0x0)) {
                    uVar40 = (long)plStack_168 - 1;
                    sVar6 = (ulong)((byte)local_110._0_1_ >> 1);
                    pcVar5 = (char *)((ulong)&local_110 | 1);
                    if (((uint)local_110 & 1) != 0) {
                      sVar6 = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
                      pcVar5 = local_100;
                    }
                    do {
                      plVar19 = (long *)plVar37[1];
                      if (plVar19 == plVar11) {
                        bVar2 = *(byte *)(plVar37 + 2);
                        uVar23 = (ulong)(bVar2 >> 1);
                        sVar1 = uVar23;
                        if ((bVar2 & 1) != 0) {
                          sVar1 = plVar37[3];
                        }
                        if (sVar1 == sVar6) {
                          if ((bVar2 & 1) == 0) {
                            if (bVar2 < 2) goto LAB_00132c64;
                            pcVar24 = (char *)((long)plVar37 + 0x11);
                            pcVar27 = pcVar5;
                            while (*pcVar24 == *pcVar27) {
                              uVar23 = uVar23 - 1;
                              pcVar24 = pcVar24 + 1;
                              pcVar27 = pcVar27 + 1;
                              if (uVar23 == 0) goto LAB_00132c64;
                            }
                          }
                          else {
                            iVar9 = memcmp((void *)plVar37[4],pcVar5,plVar37[3]);
                            if (iVar9 == 0) goto LAB_00132c64;
                          }
                        }
                      }
                      else {
                        if (uVar14 < 2) {
                          plVar19 = (long *)((ulong)plVar19 & uVar40);
                        }
                        else if (plVar13 <= plVar19) {
                          uVar23 = 0;
                          if (plVar13 != (long *)0x0) {
                            uVar23 = (ulong)plVar19 / (ulong)plVar13;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar23 * (long)plVar13);
                        }
                        if (plVar19 != plVar29) break;
                      }
                      plVar37 = (long *)*plVar37;
                    } while (plVar37 != (long *)0x0);
                  }
                }
                    /* try { // try from 00132a58 to 00132a5f has its CatchHandler @ 00133dd4 */
                plVar37 = (long *)operator_new(0x40);
                local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
                *plVar37 = 0;
                plVar37[1] = (long)plVar11;
                local_b0 = (uint)plVar37;
                uStack_ac = (undefined4)((ulong)plVar37 >> 0x20);
                cStack_a8 = (char)&local_160;
                acStack_a7 = SUB87((ulong)&local_160 >> 8,0);
                if (((uint)local_110 & 1) == 0) {
                  plVar37[3] = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
                  plVar37[2] = CONCAT44(local_110._4_4_,(uint)local_110);
                  plVar37[4] = (long)local_100;
                }
                else {
                    /* try { // try from 00132a94 to 00132a9b has its CatchHandler @ 00133d5c */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  __init_copy_ctor_external
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)(plVar37 + 2),local_100,
                             CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108)));
                }
                p_Var35 = local_d0;
                p_Var15 = p_Stack_d8;
                p_Stack_d8 = (_jmethodID *)0x0;
                local_d0 = (_jmethodID *)0x0;
                plVar37[7] = (long)p_Var35;
                plVar37[6] = (long)p_Var15;
                plVar37[5] = (long)local_e0;
                local_e0 = (_jmethodID *)0x0;
                local_a0 = (char *)CONCAT71(local_a0._1_7_,1);
                if ((plVar13 == (long *)0x0) ||
                   (local_150 * (float)plVar13 < (float)(local_158 + 1))) {
                  if (plVar13 < (long *)0x3) {
                    uVar14 = 1;
                  }
                  else {
                    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
                  }
                  plVar29 = (long *)(uVar14 | (long)plVar13 << 1);
                  plVar13 = (long *)(long)((float)(local_158 + 1) / local_150);
                  if (plVar29 <= plVar13) {
                    plVar29 = plVar13;
                  }
                  if ((long)plVar29 - 1U == 0) {
                    plVar29 = (long *)0x2;
                  }
                  else if (((ulong)plVar29 & (long)plVar29 - 1U) != 0) {
                    /* try { // try from 00132b2c to 00132baf has its CatchHandler @ 00133d58 */
                    plVar29 = (long *)std::__ndk1::__next_prime((ulong)plVar29);
                  }
                  plVar13 = plStack_168;
                  if (plStack_168 < plVar29) {
LAB_00132b44:
                    FUN_0013a1fc(&local_170,plVar29);
                  }
                  else if (plVar29 < plStack_168) {
                    plVar19 = (long *)(long)((float)local_158 / local_150);
                    if (plStack_168 < (long *)0x3) {
LAB_00132bac:
                      plVar19 = (long *)std::__ndk1::__next_prime((ulong)plVar19);
                    }
                    else {
                      uVar10 = NEON_cnt(plStack_168,1);
                      uVar47 = NEON_uaddlv(uVar10,1);
                      if (1 < (uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47))
                      goto LAB_00132bac;
                      if ((long *)0x1 < plVar19) {
                        plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
                      }
                    }
                    if (plVar29 <= plVar19) {
                      plVar29 = plVar19;
                    }
                    if (plVar29 < plVar13) goto LAB_00132b44;
                  }
                  plVar13 = plStack_168;
                  if (((ulong)plStack_168 & (long)plStack_168 - 1U) == 0) {
                    plVar29 = (long *)((long)plStack_168 - 1U & (ulong)plVar11);
                  }
                  else {
                    plVar29 = plVar11;
                    if (plStack_168 <= plVar11) {
                      uVar14 = 0;
                      if (plStack_168 != (long *)0x0) {
                        uVar14 = (ulong)plVar11 / (ulong)plStack_168;
                      }
                      plVar29 = (long *)((long)plVar11 - uVar14 * (long)plStack_168);
                    }
                  }
                }
                plVar11 = (long *)local_170[(long)plVar29];
                if (plVar11 == (long *)0x0) {
                  *plVar37 = (long)local_160;
                  local_170[(long)plVar29] = &local_160;
                  local_160 = plVar37;
                  if (*plVar37 != 0) {
                    plVar11 = *(long **)(*plVar37 + 8);
                    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
                      plVar11 = (long *)((ulong)plVar11 & (long)plVar13 - 1U);
                    }
                    else if (plVar13 <= plVar11) {
                      uVar14 = 0;
                      if (plVar13 != (long *)0x0) {
                        uVar14 = (ulong)plVar11 / (ulong)plVar13;
                      }
                      plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
                    }
                    plVar11 = local_170 + (long)plVar11;
                    goto LAB_00132c54;
                  }
                }
                else {
                  *plVar37 = *plVar11;
LAB_00132c54:
                  *plVar11 = (long)plVar37;
                }
                local_158 = local_158 + 1;
LAB_00132c64:
                p_Var15 = local_e0;
                p_Var35 = p_Stack_d8;
                if (local_e0 != (_jmethodID *)0x0) {
                  while (p_Var7 = p_Var35, p_Var7 != p_Var15) {
                    p_Var35 = p_Var7 + -0x18;
                    if (((byte)*p_Var35 & 1) != 0) {
                      operator_delete(*(void **)(p_Var7 + -8));
                    }
                  }
                  operator_delete(p_Var15);
                }
                if (((uint)local_110 & 1) != 0) {
                  operator_delete(local_100);
                }
              }
              facebook::jsi::Value::~Value((Value *)&local_1b8);
              if (local_1a8 != (undefined8 *)0x0) {
                (**(code **)*local_1a8)();
              }
              facebook::jsi::Value::~Value((Value *)&local_1a0);
              lVar36 = lVar36 + 1;
            } while (lVar36 != lVar18);
          }
          if (local_190 != (undefined8 *)0x0) {
            (**(code **)*local_190)();
          }
          if (local_188 != (undefined8 *)0x0) {
            (**(code **)*local_188)();
          }
          goto LAB_00132d04;
        }
        if (*(int *)(param_3 + 0x30) == 0) {
          local_150 = 1.0;
          plStack_168 = (long *)0x0;
          local_170 = (undefined8 *)0x0;
          local_158 = 0;
          local_160 = (long *)0x0;
          if (*(int *)param_3 != 5) {
            if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00133bd8 to 00133be7 has its CatchHandler @ 00133c2c */
                    /* WARNING: Subroutine does not return */
              FUN_00123890(*(undefined8 *)PTR_name_00144df0);
            }
            goto LAB_0013400c;
          }
          goto LAB_00132210;
        }
        goto LAB_00133ab8;
      }
      uVar8 = 0;
    }
    else {
LAB_00132140:
      uVar8 = 0;
    }
LAB_001339f8:
    if (*(long *)(lVar4 + 0x28) == local_78) {
      return uVar8;
    }
    goto LAB_0013400c;
  }
  if (*(int *)(param_3 + 0x30) != 0) {
LAB_00133ab8:
    if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_0012e304();
    }
    goto LAB_0013400c;
  }
  if ((*(int *)param_3 != 5) ||
     ((lVar18 = *(long *)(param_3 + 0x18), plVar29 = unaff_x20, lVar18 != 0 &&
      ((*(int *)(lVar18 + 0x40) != 1 ||
       ((*(int **)(lVar18 + 0x48) != *(int **)(lVar18 + 0x50) && (**(int **)(lVar18 + 0x48) != 6))))
      )))) goto LAB_00132140;
LAB_00132210:
  local_150 = 1.0;
  local_158 = 0;
  local_160 = (long *)0x0;
  plStack_168 = (long *)0x0;
  local_170 = (undefined8 *)0x0;
  plVar34 = *(long **)(param_3 + 0x18);
  if (plVar34 != (long *)0x0) {
    do {
      local_110._0_4_ = 0;
      local_110._4_4_ = 0;
      cStack_108 = '\0';
      acStack_107[0] = '\0';
      acStack_107[1] = '\0';
      acStack_107[2] = '\0';
      acStack_107[3] = '\0';
      acStack_107[4] = '\0';
      acStack_107[5] = '\0';
      acStack_107[6] = 0;
      local_100 = (char *)0x0;
                    /* try { // try from 00132260 to 00132273 has its CatchHandler @ 00133eb4 */
      uVar10 = folly::dynamic::size();
      FUN_00139f74(&local_110,uVar10);
      if ((int)plVar34[8] != 1) {
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00133a84 to 00133a93 has its CatchHandler @ 00133e68 */
                    /* WARNING: Subroutine does not return */
          FUN_00123890(*(undefined8 *)PTR_name_00144f00);
        }
        goto LAB_0013400c;
      }
      plVar29 = (long *)plVar34[9];
      plVar13 = (long *)plVar34[10];
      while( true ) {
        if (plVar29 == plVar13) break;
        if ((int)*plVar29 != 6) {
          local_110 = (ContextContainer *)CONCAT44(local_110._4_4_,(uint)local_110);
          if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00133a40 to 00133a4f has its CatchHandler @ 00133fdc */
                    /* WARNING: Subroutine does not return */
            FUN_00123890(*(undefined8 *)PTR_name_00144df8);
          }
          goto LAB_0013400c;
        }
        if ((*(byte *)(plVar29 + 1) & 1) == 0) {
          local_a0 = (char *)plVar29[3];
          uVar10 = plVar29[1];
          cStack_a8 = (char)plVar29[2];
          acStack_a7 = SUB87((ulong)plVar29[2] >> 8,0);
          local_b0 = (uint)uVar10;
          uStack_ac = (undefined4)((ulong)uVar10 >> 0x20);
        }
        else {
                    /* try { // try from 001322dc to 001322e3 has its CatchHandler @ 00133fc0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,(char *)plVar29[3],plVar29[2]);
        }
        pcVar5 = (char *)CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
        if (pcVar5 < local_100) {
          *(char **)(pcVar5 + 0x10) = local_a0;
          pcVar24 = pcVar5 + 0x18;
          *(ulong *)(pcVar5 + 8) = CONCAT71(acStack_a7,cStack_a8);
          *(ulong *)pcVar5 = CONCAT44(uStack_ac,local_b0);
          cStack_108 = (char)pcVar24;
          acStack_107._0_6_ = (undefined6)((ulong)pcVar24 >> 8);
          acStack_107[6] = (char)((ulong)pcVar24 >> 0x38);
        }
        else {
                    /* try { // try from 001322f0 to 001322fb has its CatchHandler @ 00133fc4 */
          uVar10 = FUN_0013a098(&local_110,&local_b0);
          cStack_108 = (char)uVar10;
          acStack_107._0_6_ = (undefined6)((ulong)uVar10 >> 8);
          acStack_107[6] = (char)((ulong)uVar10 >> 0x38);
          if ((local_b0 & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        plVar29 = plVar29 + 6;
      }
      if ((int)plVar34[2] != 6) {
        if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00133aa8 to 00133ab7 has its CatchHandler @ 00133e60 */
                    /* WARNING: Subroutine does not return */
          FUN_00123890(*(undefined8 *)PTR_name_00144df8);
        }
        goto LAB_0013400c;
      }
      pbVar38 = (byte *)(plVar34 + 3);
      uVar14 = plVar34[4];
      lVar18 = plVar34[5];
      if ((*pbVar38 & 1) == 0) {
        lVar18 = (long)plVar34 + 0x19;
        uVar14 = (ulong)(*pbVar38 >> 1);
      }
                    /* try { // try from 0013233c to 00132343 has its CatchHandler @ 00133e64 */
      plVar11 = (long *)FUN_001391e0(&local_b0,lVar18,uVar14);
      plVar13 = plStack_168;
      if (plStack_168 != (long *)0x0) {
        uVar10 = NEON_cnt(plStack_168,1);
        uVar47 = NEON_uaddlv(uVar10,1);
        uVar14 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47) & 0xffffffff;
        if (uVar14 < 2) {
          plVar29 = (long *)((long)plStack_168 - 1U & (ulong)plVar11);
        }
        else {
          plVar29 = plVar11;
          if (plStack_168 <= plVar11) {
            uVar40 = 0;
            if (plStack_168 != (long *)0x0) {
              uVar40 = (ulong)plVar11 / (ulong)plStack_168;
            }
            plVar29 = (long *)((long)plVar11 - uVar40 * (long)plStack_168);
          }
        }
        if (((undefined8 *)local_170[(long)plVar29] != (undefined8 *)0x0) &&
           (plVar37 = *(long **)local_170[(long)plVar29], plVar37 != (long *)0x0)) {
          uVar40 = (long)plStack_168 - 1;
          __s2 = (void *)((long)plVar34 + 0x19);
          sVar6 = (ulong)(*(byte *)(plVar34 + 3) >> 1);
          if ((*(byte *)(plVar34 + 3) & 1) != 0) {
            __s2 = (void *)plVar34[5];
            sVar6 = plVar34[4];
          }
          do {
            plVar19 = (long *)plVar37[1];
            if (plVar19 == plVar11) {
              bVar2 = *(byte *)(plVar37 + 2);
              sVar1 = (ulong)(bVar2 >> 1);
              if ((bVar2 & 1) != 0) {
                sVar1 = plVar37[3];
              }
              if (sVar1 == sVar6) {
                if ((bVar2 & 1) == 0) {
                  if (bVar2 < 2) goto LAB_00132668;
                  uVar23 = 0;
                  while (*(char *)((long)plVar37 + uVar23 + 0x11) == *(char *)((long)__s2 + uVar23))
                  {
                    uVar23 = uVar23 + 1;
                    if (bVar2 >> 1 == uVar23) goto LAB_00132668;
                  }
                }
                else {
                  iVar9 = memcmp((void *)plVar37[4],__s2,plVar37[3]);
                  if (iVar9 == 0) goto LAB_00132668;
                }
              }
            }
            else {
              if (uVar14 < 2) {
                plVar19 = (long *)((ulong)plVar19 & uVar40);
              }
              else if (plVar13 <= plVar19) {
                uVar23 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar23 = (ulong)plVar19 / (ulong)plVar13;
                }
                plVar19 = (long *)((long)plVar19 - uVar23 * (long)plVar13);
              }
              if (plVar19 != plVar29) break;
            }
            plVar37 = (long *)*plVar37;
          } while (plVar37 != (long *)0x0);
        }
      }
                    /* try { // try from 0013246c to 00132473 has its CatchHandler @ 00133e5c */
      plVar37 = (long *)operator_new(0x40);
      *plVar37 = 0;
      plVar37[1] = (long)plVar11;
      local_b0 = (uint)plVar37;
      uStack_ac = (undefined4)((ulong)plVar37 >> 0x20);
      cStack_a8 = (char)&local_160;
      acStack_a7 = SUB87((ulong)&local_160 >> 8,0);
      local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
      if ((*pbVar38 & 1) == 0) {
        lVar36 = plVar34[4];
        lVar18 = *(long *)pbVar38;
        plVar37[4] = plVar34[5];
        plVar37[3] = lVar36;
        plVar37[2] = lVar18;
      }
      else {
                    /* try { // try from 001324a8 to 001324af has its CatchHandler @ 00133e4c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(plVar37 + 2),(char *)plVar34[5],plVar34[4]);
      }
      plVar37[5] = 0;
      plVar37[6] = 0;
      plVar37[7] = 0;
      local_a0 = (char *)CONCAT71(local_a0._1_7_,1);
      if ((plVar13 == (long *)0x0) || (local_150 * (float)plVar13 < (float)(local_158 + 1))) {
        if (plVar13 < (long *)0x3) {
          uVar14 = 1;
        }
        else {
          uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
        }
        plVar29 = (long *)(uVar14 | (long)plVar13 << 1);
        plVar13 = (long *)(long)((float)(local_158 + 1) / local_150);
        if (plVar29 <= plVar13) {
          plVar29 = plVar13;
        }
        if ((long)plVar29 - 1U == 0) {
          plVar29 = (long *)0x2;
        }
        else if (((ulong)plVar29 & (long)plVar29 - 1U) != 0) {
                    /* try { // try from 00132534 to 001325b7 has its CatchHandler @ 00133e48 */
          plVar29 = (long *)std::__ndk1::__next_prime((ulong)plVar29);
        }
        plVar13 = plStack_168;
        if (plStack_168 < plVar29) {
LAB_0013254c:
          FUN_0013a1fc(&local_170,plVar29);
        }
        else if (plVar29 < plStack_168) {
          plVar19 = (long *)(long)((float)local_158 / local_150);
          if (plStack_168 < (long *)0x3) {
LAB_001325b4:
            plVar19 = (long *)std::__ndk1::__next_prime((ulong)plVar19);
          }
          else {
            uVar10 = NEON_cnt(plStack_168,1);
            uVar47 = NEON_uaddlv(uVar10,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47)) goto LAB_001325b4;
            if ((long *)0x1 < plVar19) {
              plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 + -1) & 0x3fU));
            }
          }
          if (plVar29 <= plVar19) {
            plVar29 = plVar19;
          }
          if (plVar29 < plVar13) goto LAB_0013254c;
        }
        plVar13 = plStack_168;
        if (((ulong)plStack_168 & (long)plStack_168 - 1U) == 0) {
          plVar29 = (long *)((long)plStack_168 - 1U & (ulong)plVar11);
        }
        else {
          plVar29 = plVar11;
          if (plStack_168 <= plVar11) {
            uVar14 = 0;
            if (plStack_168 != (long *)0x0) {
              uVar14 = (ulong)plVar11 / (ulong)plStack_168;
            }
            plVar29 = (long *)((long)plVar11 - uVar14 * (long)plStack_168);
          }
        }
      }
      plVar11 = (long *)local_170[(long)plVar29];
      if (plVar11 == (long *)0x0) {
        *plVar37 = (long)local_160;
        local_170[(long)plVar29] = &local_160;
        local_160 = plVar37;
        if (*plVar37 != 0) {
          plVar11 = *(long **)(*plVar37 + 8);
          if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar13 - 1U);
          }
          else if (plVar13 <= plVar11) {
            uVar14 = 0;
            if (plVar13 != (long *)0x0) {
              uVar14 = (ulong)plVar11 / (ulong)plVar13;
            }
            plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
          }
          plVar11 = local_170 + (long)plVar11;
          goto LAB_00132658;
        }
      }
      else {
        *plVar37 = *plVar11;
LAB_00132658:
        *plVar11 = (long)plVar37;
      }
      local_158 = local_158 + 1;
LAB_00132668:
      plVar29 = plVar37 + 5;
      pbVar38 = (byte *)*plVar29;
      if (pbVar38 != (byte *)0x0) {
        pbVar20 = (byte *)plVar37[6];
        pbVar39 = pbVar38;
        if (pbVar20 != pbVar38) {
          do {
            pbVar39 = pbVar20 + -0x18;
            if ((*pbVar39 & 1) != 0) {
              operator_delete(*(void **)(pbVar20 + -8));
            }
            pbVar20 = pbVar39;
          } while (pbVar39 != pbVar38);
          pbVar39 = (byte *)*plVar29;
        }
        plVar37[6] = (long)pbVar38;
        operator_delete(pbVar39);
        *plVar29 = 0;
        plVar37[6] = 0;
        plVar37[7] = 0;
      }
      plVar37[6] = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
      plVar37[5] = CONCAT44(local_110._4_4_,(uint)local_110);
      plVar37[7] = (long)local_100;
      plVar34 = (long *)*plVar34;
    } while (plVar34 != (long *)0x0);
  }
LAB_00132d04:
  acStack_107[6] = 0;
  local_110._0_4_ = CONCAT31((int3)s_resource_paths_0010f856._0_6_,0x1c);
  local_110._4_3_ = SUB63(s_resource_paths_0010f856._0_6_,3);
  local_110._7_1_ = (char)s_resource_paths_0010f856._6_2_;
  cStack_108 = SUB21(s_resource_paths_0010f856._6_2_,1);
  acStack_107[0] = s_resource_paths_0010f856[8];
  acStack_107[1] = s_resource_paths_0010f856[9];
  acStack_107[2] = s_resource_paths_0010f856[10];
  acStack_107[3] = s_resource_paths_0010f856[0xb];
  acStack_107[4] = s_resource_paths_0010f856[0xc];
  acStack_107[5] = s_resource_paths_0010f856[0xd];
                    /* try { // try from 00132d30 to 00132d3f has its CatchHandler @ 00133d4c */
  plVar13 = (long *)FUN_001391e0(&local_b0,(char *)((ulong)&local_110 | 1),0xe);
  plVar34 = plStack_168;
  if (plStack_168 != (long *)0x0) {
    uVar10 = NEON_cnt(plStack_168,1);
    uVar47 = NEON_uaddlv(uVar10,1);
    uVar14 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47) & 0xffffffff;
    if (uVar14 < 2) {
      plVar29 = (long *)((long)plStack_168 - 1U & (ulong)plVar13);
    }
    else {
      plVar29 = plVar13;
      if (plStack_168 <= plVar13) {
        uVar40 = 0;
        if (plStack_168 != (long *)0x0) {
          uVar40 = (ulong)plVar13 / (ulong)plStack_168;
        }
        plVar29 = (long *)((long)plVar13 - uVar40 * (long)plStack_168);
      }
    }
    if (((undefined8 *)local_170[(long)plVar29] != (undefined8 *)0x0) &&
       (plVar11 = *(long **)local_170[(long)plVar29], plVar11 != (long *)0x0)) {
      uVar40 = (long)plStack_168 - 1;
      uVar42 = (uint)local_110 & 1;
      pcVar5 = (char *)((ulong)&local_110 | 1);
      sVar6 = (ulong)((byte)local_110._0_1_ >> 1);
      if (((uint)local_110 & 1) != 0) {
        pcVar5 = local_100;
        sVar6 = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
      }
      do {
        plVar37 = (long *)plVar11[1];
        if (plVar37 == plVar13) {
          bVar2 = *(byte *)(plVar11 + 2);
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = plVar11[3];
          }
          if (sVar1 == sVar6) {
            if ((bVar2 & 1) == 0) {
              if (bVar2 < 2) goto LAB_00133048;
              uVar23 = 0;
              while (*(char *)((long)plVar11 + uVar23 + 0x11) == pcVar5[uVar23]) {
                uVar23 = uVar23 + 1;
                if (bVar2 >> 1 == uVar23) goto LAB_00133048;
              }
            }
            else {
              iVar9 = memcmp((void *)plVar11[4],pcVar5,plVar11[3]);
              if (iVar9 == 0) goto LAB_00133048;
            }
          }
        }
        else {
          if (uVar14 < 2) {
            plVar37 = (long *)((ulong)plVar37 & uVar40);
          }
          else if (plVar34 <= plVar37) {
            uVar23 = 0;
            if (plVar34 != (long *)0x0) {
              uVar23 = (ulong)plVar37 / (ulong)plVar34;
            }
            plVar37 = (long *)((long)plVar37 - uVar23 * (long)plVar34);
          }
          if (plVar37 != plVar29) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
                    /* try { // try from 00132e5c to 00132e63 has its CatchHandler @ 00133ce4 */
  plVar11 = (long *)operator_new(0x40);
  plVar11[3] = CONCAT17(acStack_107[6],CONCAT61(acStack_107._0_6_,cStack_108));
  plVar11[2] = CONCAT44(local_110._4_4_,(uint)local_110);
  plVar11[4] = (long)local_100;
  plVar11[5] = 0;
  local_b0 = (uint)plVar11;
  uStack_ac = (undefined4)((ulong)plVar11 >> 0x20);
  cStack_a8 = (char)&local_160;
  acStack_a7 = SUB87((ulong)&local_160 >> 8,0);
  *plVar11 = 0;
  plVar11[1] = (long)plVar13;
  local_110._0_4_ = 0;
  local_110._4_4_ = 0;
  cStack_108 = '\0';
  acStack_107[0] = '\0';
  acStack_107[1] = '\0';
  acStack_107[2] = '\0';
  acStack_107[3] = '\0';
  acStack_107[4] = '\0';
  acStack_107[5] = '\0';
  acStack_107[6] = 0;
  local_100 = (char *)0x0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  local_a0 = (char *)CONCAT71(local_a0._1_7_,1);
  if ((plVar34 == (long *)0x0) || (local_150 * (float)plVar34 < (float)(local_158 + 1))) {
    if (plVar34 < (long *)0x3) {
      uVar14 = 1;
    }
    else {
      uVar14 = (ulong)(((ulong)plVar34 & (long)plVar34 - 1U) != 0);
    }
    plVar29 = (long *)(uVar14 | (long)plVar34 << 1);
    plVar37 = (long *)(long)((float)(local_158 + 1) / local_150);
    if (plVar29 <= plVar37) {
      plVar29 = plVar37;
    }
    if ((long)plVar29 - 1U == 0) {
      plVar29 = (long *)0x2;
    }
    else if (((ulong)plVar29 & (long)plVar29 - 1U) != 0) {
                    /* try { // try from 00132f0c to 00132f8f has its CatchHandler @ 00133c54 */
      plVar29 = (long *)std::__ndk1::__next_prime((ulong)plVar29);
      plVar34 = plStack_168;
    }
    if (plVar34 < plVar29) {
LAB_00132f24:
      FUN_0013a1fc(&local_170,plVar29);
    }
    else if (plVar29 < plVar34) {
      plVar37 = (long *)(long)((float)local_158 / local_150);
      if (plVar34 < (long *)0x3) {
LAB_00132f8c:
        plVar37 = (long *)std::__ndk1::__next_prime((ulong)plVar37);
      }
      else {
        uVar10 = NEON_cnt(plVar34,1);
        uVar47 = NEON_uaddlv(uVar10,1);
        if (1 < (uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47)) goto LAB_00132f8c;
        if ((long *)0x1 < plVar37) {
          plVar37 = (long *)(1L << (-LZCOUNT((long)plVar37 + -1) & 0x3fU));
        }
      }
      if (plVar29 <= plVar37) {
        plVar29 = plVar37;
      }
      if (plVar29 < plVar34) goto LAB_00132f24;
    }
    plVar34 = plStack_168;
    if (((ulong)plStack_168 & (long)plStack_168 - 1U) == 0) {
      plVar29 = (long *)((long)plStack_168 - 1U & (ulong)plVar13);
    }
    else {
      plVar29 = plVar13;
      if (plStack_168 <= plVar13) {
        uVar14 = 0;
        if (plStack_168 != (long *)0x0) {
          uVar14 = (ulong)plVar13 / (ulong)plStack_168;
        }
        plVar29 = (long *)((long)plVar13 - uVar14 * (long)plStack_168);
      }
    }
  }
  plVar13 = (long *)local_170[(long)plVar29];
  if (plVar13 == (long *)0x0) {
    *plVar11 = (long)local_160;
    local_170[(long)plVar29] = &local_160;
    local_160 = plVar11;
    if (*plVar11 != 0) {
      plVar13 = *(long **)(*plVar11 + 8);
      if (((ulong)plVar34 & (long)plVar34 - 1U) == 0) {
        plVar13 = (long *)((ulong)plVar13 & (long)plVar34 - 1U);
      }
      else if (plVar34 <= plVar13) {
        uVar14 = 0;
        if (plVar34 != (long *)0x0) {
          uVar14 = (ulong)plVar13 / (ulong)plVar34;
        }
        plVar13 = (long *)((long)plVar13 - uVar14 * (long)plVar34);
      }
      plVar13 = local_170 + (long)plVar13;
      goto LAB_00133030;
    }
  }
  else {
    *plVar11 = *plVar13;
LAB_00133030:
    *plVar13 = (long)plVar11;
  }
  local_158 = local_158 + 1;
  uVar42 = (uint)local_110 & 1;
LAB_00133048:
  if (uVar42 != 0) {
    operator_delete(local_100);
  }
  if (((*PTR_getColorCacheMutex_00144e70 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_getColorCacheMutex_00144e70), iVar9 != 0)) {
    __cxa_atexit(PTR__mutex_00144db8,PTR_getColorCacheMutex_00144e68,&PTR_LOOP_00143540);
    __cxa_guard_release(PTR_getColorCacheMutex_00144e70);
  }
  if (((*PTR_getColorCache_00144e80 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_getColorCache_00144e80), iVar9 != 0)) {
                    /* try { // try from 00133b18 to 00133b1b has its CatchHandler @ 00133c18 */
    FUN_00139bc0();
    __cxa_atexit(FUN_00139cf0,PTR_getColorCache_00144e78,&PTR_LOOP_00143540);
    __cxa_guard_release(PTR_getColorCache_00144e80);
  }
  if (*(long *)PTR_setupCacheInvalidation_00144e88 != -1) {
    local_b0 = (uint)PTR_configurePlatformColorCacheInvalidationHook_00144ee8;
    uStack_ac = (undefined4)
                ((ulong)PTR_configurePlatformColorCacheInvalidationHook_00144ee8 >> 0x20);
    cStack_a8 = (char)&local_e0;
    acStack_a7 = SUB87((ulong)&local_e0 >> 8,0);
    local_110 = (ContextContainer *)&local_b0;
                    /* try { // try from 001330a0 to 001330b7 has its CatchHandler @ 00133cdc */
    std::__ndk1::__call_once((ulong *)PTR_setupCacheInvalidation_00144e88,&local_110,FUN_0013a5b4);
  }
  pbVar39 = (byte *)plVar11[6];
  puVar43 = (ulong *)(long)param_2;
  for (pbVar38 = (byte *)plVar11[5]; pbVar38 != pbVar39; pbVar38 = pbVar38 + 0x18) {
    uVar14 = *(ulong *)(pbVar38 + 8);
    pbVar20 = *(byte **)(pbVar38 + 0x10);
    if ((*pbVar38 & 1) == 0) {
      pbVar20 = pbVar38 + 1;
      uVar14 = (ulong)(*pbVar38 >> 1);
    }
                    /* try { // try from 001330ec to 001330f3 has its CatchHandler @ 00133e74 */
    lVar18 = FUN_001391e0(&local_b0,pbVar20,uVar14);
    puVar43 = (ulong *)((long)puVar43 * 0x40 + ((ulong)puVar43 >> 2) + 0x9e3779b9 + lVar18 ^
                       (ulong)puVar43);
  }
                    /* try { // try from 00133118 to 00133123 has its CatchHandler @ 00133d44 */
  std::__ndk1::mutex::lock();
  puVar41 = PTR_getColorCache_00144e78;
  if (*(long *)(PTR_getColorCache_00144e78 + 0x50) != 0) {
    puVar21 = *(ulong **)(PTR_getColorCache_00144e78 + 0x40);
    uVar10 = NEON_cnt(puVar21,1);
    uVar47 = NEON_uaddlv(uVar10,1);
    uVar14 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47) & 0xffffffff;
    if (uVar14 < 2) {
      puVar46 = (ulong *)((long)puVar21 - 1U & (ulong)puVar43);
    }
    else {
      puVar46 = puVar43;
      if (puVar21 <= puVar43) {
        uVar40 = 0;
        if (puVar21 != (ulong *)0x0) {
          uVar40 = (ulong)puVar43 / (ulong)puVar21;
        }
        puVar46 = (ulong *)((long)puVar43 - uVar40 * (long)puVar21);
      }
    }
    plVar29 = *(long **)(*(long *)(PTR_getColorCache_00144e78 + 0x38) + (long)puVar46 * 8);
    if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
      do {
        puVar32 = (undefined8 *)plVar29[2];
        if (puVar43 == (ulong *)puVar32[2]) {
          puVar26 = *(undefined8 **)(PTR_getColorCache_00144e78 + 0x70);
          if ((puVar32 != puVar26) && (puVar25 = (undefined8 *)*puVar32, puVar25 != puVar26)) {
            puVar28 = (undefined8 *)puVar26[1];
            puVar30 = (undefined8 *)puVar32[1];
            *puVar28 = puVar32;
            *puVar32 = puVar26;
            puVar32[1] = puVar28;
            puVar26[1] = puVar32;
            puVar25[1] = puVar30;
            *puVar30 = puVar25;
          }
          if (puVar32 != (undefined8 *)(puVar41 + 0x70)) {
            uVar8 = *(undefined4 *)(puVar32 + 3);
            goto LAB_001339d0;
          }
          break;
        }
        plVar29 = (long *)*plVar29;
        if (plVar29 == (long *)0x0) break;
        puVar33 = (ulong *)plVar29[1];
        if (uVar14 < 2) {
          puVar33 = (ulong *)((ulong)puVar33 & (long)puVar21 - 1U);
        }
        else if (puVar21 <= puVar33) {
          uVar40 = 0;
          if (puVar21 != (ulong *)0x0) {
            uVar40 = (ulong)puVar33 / (ulong)puVar21;
          }
          puVar33 = (ulong *)((long)puVar33 - uVar40 * (long)puVar21);
        }
      } while (puVar33 == puVar46);
    }
  }
  local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
  local_b0 = CONCAT31((int3)s_FabricUIManager_0010f197._0_7_,0x1e);
  uStack_ac = SUB74(s_FabricUIManager_0010f197._0_7_,3);
  cStack_a8 = s_FabricUIManager_0010f197[7];
  acStack_a7[0] = s_FabricUIManager_0010f197[8];
  acStack_a7[1] = s_FabricUIManager_0010f197[9];
  acStack_a7[2] = s_FabricUIManager_0010f197[10];
  acStack_a7[3] = s_FabricUIManager_0010f197[0xb];
  acStack_a7[4] = s_FabricUIManager_0010f197[0xc];
  acStack_a7[5] = s_FabricUIManager_0010f197[0xd];
  acStack_a7[6] = s_FabricUIManager_0010f197[0xe];
  cStack_108 = '\x01';
  local_110 = param_1;
                    /* try { // try from 0013324c to 00133253 has its CatchHandler @ 00133d38 */
  std::__ndk1::__shared_mutex_base::lock_shared();
  uVar14 = (ulong)((byte)local_b0._0_1_ >> 1);
  pcVar5 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    uVar14 = CONCAT71(acStack_a7,cStack_a8);
    pcVar5 = local_a0;
  }
                    /* try { // try from 00133274 to 0013327b has its CatchHandler @ 00133d34 */
  uVar14 = FUN_001391e0(local_c0,pcVar5,uVar14);
  uVar40 = *(ulong *)(param_1 + 0x98);
  if (uVar40 != 0) {
    uVar10 = NEON_cnt(uVar40,1);
    uVar47 = NEON_uaddlv(uVar10,1);
    uVar23 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47) & 0xffffffff;
    if (uVar23 < 2) {
      uVar45 = uVar40 - 1 & uVar14;
    }
    else {
      uVar45 = uVar14;
      if (uVar40 <= uVar14) {
        uVar45 = 0;
        if (uVar40 != 0) {
          uVar45 = uVar14 / uVar40;
        }
        uVar45 = uVar14 - uVar45 * uVar40;
      }
    }
    puVar32 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar45 * 8);
    if ((puVar32 != (undefined8 *)0x0) && (puVar21 = (ulong *)*puVar32, puVar21 != (ulong *)0x0)) {
      pcVar5 = (char *)((ulong)&local_b0 | 1);
      sVar6 = (ulong)((byte)local_b0._0_1_ >> 1);
      if ((local_b0 & 1) != 0) {
        pcVar5 = local_a0;
        sVar6 = CONCAT71(acStack_a7,cStack_a8);
      }
LAB_0013330c:
      uVar22 = puVar21[1];
      if (uVar22 != uVar14) {
        if (uVar23 < 2) {
          uVar22 = uVar22 & uVar40 - 1;
        }
        else if (uVar40 <= uVar22) {
          uVar3 = 0;
          if (uVar40 != 0) {
            uVar3 = uVar22 / uVar40;
          }
          uVar22 = uVar22 - uVar3 * uVar40;
        }
        if (uVar22 == uVar45) goto LAB_00133304;
        goto LAB_00133a50;
      }
      bVar2 = (byte)puVar21[2];
      uVar22 = (ulong)(bVar2 >> 1);
      sVar1 = uVar22;
      if ((bVar2 & 1) != 0) {
        sVar1 = puVar21[3];
      }
      if (sVar1 != sVar6) goto LAB_00133304;
      if ((bVar2 & 1) == 0) {
        if (1 < bVar2) {
          pcVar24 = (char *)((long)puVar21 + 0x11);
          pcVar27 = pcVar5;
          while (*pcVar24 == *pcVar27) {
            uVar22 = uVar22 - 1;
            pcVar24 = pcVar24 + 1;
            pcVar27 = pcVar27 + 1;
            if (uVar22 == 0) goto LAB_00133398;
          }
          goto LAB_00133304;
        }
      }
      else {
        iVar9 = memcmp((void *)puVar21[4],pcVar5,puVar21[3]);
        if (iVar9 != 0) goto LAB_00133304;
      }
LAB_00133398:
      uVar10 = *(undefined8 *)puVar21[5];
                    /* try { // try from 001333a0 to 001333bb has its CatchHandler @ 00133e7c */
      plVar29 = (long *)facebook::jni::Environment::current();
      p_Var15 = (_jmethodID *)(**(code **)(*plVar29 + 0xa8))(plVar29,uVar10);
      facebook::jni::throwPendingJniExceptionAsCppException();
      local_e0 = p_Var15;
                    /* try { // try from 001333c0 to 001333c7 has its CatchHandler @ 00133d30 */
      std::__ndk1::__shared_mutex_base::unlock_shared();
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      puVar41 = PTR_getColorCache_00144e78;
      if ((*PTR_getColorFromJava_00144e98 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_getColorFromJava_00144e98);
        if (iVar9 != 0) {
          jni::JObject::getClass();
                    /* try { // try from 00133b68 to 00133b6f has its CatchHandler @ 00133bfc */
          uVar10 = FUN_00139de4(&local_b0);
          *(undefined8 *)PTR_getColorFromJava_00144e90 = uVar10;
          jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
          ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                           *)&local_b0);
          __cxa_guard_release(PTR_getColorFromJava_00144e98);
        }
      }
      lVar18 = plVar11[5];
      lVar36 = plVar11[6];
      if ((*PTR_elementClass_00144ec0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_elementClass_00144ec0);
        if (iVar9 != 0) {
                    /* try { // try from 00133ba4 to 00133bb7 has its CatchHandler @ 00133be8 */
          facebook::jni::findClassStatic(PTR_kBaseName_00144ec8);
          __cxa_guard_release(PTR_elementClass_00144ec0);
        }
      }
                    /* try { // try from 00133404 to 00133447 has its CatchHandler @ 00133df4 */
      plVar29 = (long *)facebook::jni::Environment::current();
      puVar32 = (undefined8 *)
                (**(code **)(*plVar29 + 0x560))
                          (plVar29,(lVar36 - lVar18 >> 3) * -0x5555555555555555,
                           *(undefined8 *)PTR_elementClass_00144eb8,0);
      facebook::jni::throwCppExceptionIf(puVar32 == (undefined8 *)0x0);
      lVar18 = plVar11[5];
      local_c0[0] = puVar32;
      if (plVar11[6] != lVar18) {
        lVar36 = 0;
        uVar14 = 0;
        do {
          pbVar38 = (byte *)(lVar18 + lVar36);
          pbVar39 = *(byte **)(pbVar38 + 0x10);
          if ((*pbVar38 & 1) == 0) {
            pbVar39 = pbVar38 + 1;
          }
                    /* try { // try from 001334a0 to 001334a7 has its CatchHandler @ 00133e6c */
          facebook::jni::make_jstring((char *)pbVar39);
          uVar10 = CONCAT44(uStack_ac,local_b0);
                    /* try { // try from 001334ac to 001334cb has its CatchHandler @ 00133eb8 */
          plVar29 = (long *)facebook::jni::Environment::current();
          puVar32 = local_c0[0];
          (**(code **)(*plVar29 + 0x570))(plVar29,local_c0[0],uVar14 & 0xffffffff,uVar10);
          lVar18 = CONCAT44(uStack_ac,local_b0);
          if (lVar18 != 0) {
                    /* try { // try from 001334d4 to 001334e7 has its CatchHandler @ 00133e78 */
            plVar29 = (long *)facebook::jni::Environment::current();
            (**(code **)(*plVar29 + 0xb8))(plVar29,lVar18);
          }
          lVar18 = plVar11[5];
          uVar14 = uVar14 + 1;
          lVar36 = lVar36 + 0x18;
          uVar40 = (plVar11[6] - lVar18 >> 3) * -0x5555555555555555;
          puVar41 = PTR_getColorCache_00144e78;
        } while (uVar14 <= uVar40 && uVar40 - uVar14 != 0);
      }
      p_Var15 = local_e0;
                    /* try { // try from 001334f8 to 0013351f has its CatchHandler @ 00133dec */
      p_Var16 = (_jobject *)facebook::jni::Environment::current();
      uVar8 = _JNIEnv::CallIntMethod
                        (p_Var16,p_Var15,*(undefined8 *)PTR_getColorFromJava_00144e90,
                         (ulong)(uint)param_2,puVar32);
      facebook::jni::throwPendingJniExceptionAsCppException();
      lVar18 = *(long *)(puVar41 + 0x50);
      local_120 = (long *)0x0;
      local_f0 = (uint *)0x0;
      if (lVar18 == 0) {
        puVar46 = *(ulong **)(puVar41 + 0x40);
      }
      else {
        puVar46 = *(ulong **)(puVar41 + 0x40);
        uVar10 = NEON_cnt(puVar46,1);
        uVar47 = NEON_uaddlv(uVar10,1);
        uVar14 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47) & 0xffffffff;
        if (uVar14 < 2) {
          puVar33 = (ulong *)((long)puVar46 - 1U & (ulong)puVar43);
        }
        else {
          puVar33 = puVar43;
          if (puVar46 <= puVar43) {
            uVar40 = 0;
            if (puVar46 != (ulong *)0x0) {
              uVar40 = (ulong)puVar43 / (ulong)puVar46;
            }
            puVar33 = (ulong *)((long)puVar43 - uVar40 * (long)puVar46);
          }
        }
        plVar29 = *(long **)(*(long *)(puVar41 + 0x38) + (long)puVar33 * 8);
        if ((plVar29 == (long *)0x0) || (plVar29 = (long *)*plVar29, plVar29 == (long *)0x0))
        goto LAB_001335d4;
        while( true ) {
          plVar34 = (long *)plVar29[2];
          if (puVar43 == (ulong *)plVar34[2]) {
            *(undefined4 *)(plVar34 + 3) = uVar8;
            plVar29 = *(long **)(puVar41 + 0x70);
            if ((plVar34 != plVar29) && (lVar18 = *plVar34, (long *)lVar18 != plVar29)) {
              puVar26 = (undefined8 *)plVar29[1];
              plVar13 = (long *)plVar34[1];
              *puVar26 = plVar34;
              *plVar34 = (long)plVar29;
              plVar34[1] = (long)puVar26;
              plVar29[1] = (long)plVar34;
              *(long **)(lVar18 + 8) = plVar13;
              *plVar13 = lVar18;
            }
            goto LAB_0013393c;
          }
          plVar29 = (long *)*plVar29;
          if (plVar29 == (long *)0x0) break;
          puVar31 = (ulong *)plVar29[1];
          if (uVar14 < 2) {
            puVar31 = (ulong *)((ulong)puVar31 & (long)puVar46 - 1U);
          }
          else if (puVar46 <= puVar31) {
            uVar40 = 0;
            if (puVar46 != (ulong *)0x0) {
              uVar40 = (ulong)puVar31 / (ulong)puVar46;
            }
            puVar31 = (ulong *)((long)puVar31 - uVar40 * (long)puVar46);
          }
          if (puVar31 != puVar33) break;
        }
      }
LAB_001335d4:
                    /* try { // try from 001335d4 to 0013369b has its CatchHandler @ 00133d6c */
      plVar29 = (long *)operator_new(0x20);
      *plVar29 = 0;
      plVar29[1] = 0;
      plVar29[2] = (long)puVar43;
      *(undefined4 *)(plVar29 + 3) = uVar8;
      if (puVar46 != (ulong *)0x0) {
        uVar10 = NEON_cnt(puVar46,1);
        uVar47 = NEON_uaddlv(uVar10,1);
        uVar14 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47) & 0xffffffff;
        if (uVar14 < 2) {
          puVar21 = (ulong *)((long)puVar46 - 1U & (ulong)puVar43);
        }
        else {
          puVar21 = puVar43;
          if (puVar46 <= puVar43) {
            uVar40 = 0;
            if (puVar46 != (ulong *)0x0) {
              uVar40 = (ulong)puVar43 / (ulong)puVar46;
            }
            puVar21 = (ulong *)((long)puVar43 - uVar40 * (long)puVar46);
          }
        }
        plVar34 = *(long **)(*(long *)(puVar41 + 0x38) + (long)puVar21 * 8);
        if ((plVar34 == (long *)0x0) || (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0))
        goto LAB_00133694;
        while( true ) {
          puVar33 = (ulong *)plVar34[1];
          if (puVar33 == puVar43) {
            if (*(ulong **)(plVar34[2] + 0x10) != puVar43) goto LAB_00133658;
            goto LAB_00133884;
          }
          if (uVar14 < 2) {
            puVar33 = (ulong *)((ulong)puVar33 & (long)puVar46 - 1U);
          }
          else if (puVar46 <= puVar33) {
            uVar40 = 0;
            if (puVar46 != (ulong *)0x0) {
              uVar40 = (ulong)puVar33 / (ulong)puVar46;
            }
            puVar33 = (ulong *)((long)puVar33 - uVar40 * (long)puVar46);
          }
          if (puVar33 != puVar21) break;
LAB_00133658:
          plVar34 = (long *)*plVar34;
          if (plVar34 == (long *)0x0) break;
        }
      }
LAB_00133694:
      plVar34 = (long *)operator_new(0x18);
      fVar49 = *(float *)(puVar41 + 0x60);
      fVar48 = (float)(lVar18 + 1);
      *plVar34 = 0;
      plVar34[1] = (long)puVar43;
      plVar34[2] = (long)plVar29;
      if ((puVar46 == (ulong *)0x0) || (fVar49 * (float)puVar46 < fVar48)) {
        if (puVar46 < (ulong *)0x3) {
          uVar14 = 1;
        }
        else {
          uVar14 = (ulong)(((ulong)puVar46 & (long)puVar46 - 1U) != 0);
        }
        puVar21 = (ulong *)(uVar14 | (long)puVar46 << 1);
        puVar33 = (ulong *)(long)(fVar48 / fVar49);
        if (puVar21 <= puVar33) {
          puVar21 = puVar33;
        }
        if ((long)puVar21 - 1U == 0) {
          puVar21 = (ulong *)0x2;
        }
        else if (((ulong)puVar21 & (long)puVar21 - 1U) != 0) {
                    /* try { // try from 0013371c to 001337d7 has its CatchHandler @ 00133c44 */
          puVar21 = (ulong *)std::__ndk1::__next_prime((ulong)puVar21);
          puVar46 = *(ulong **)(puVar41 + 0x40);
        }
        if (puVar46 < puVar21) {
LAB_00133734:
          FUN_0013a44c(puVar21);
        }
        else if (puVar21 < puVar46) {
          puVar33 = (ulong *)(long)((float)*(ulong *)(puVar41 + 0x50) / *(float *)(puVar41 + 0x60));
          if (puVar46 < (ulong *)0x3) {
LAB_001337d4:
            puVar33 = (ulong *)std::__ndk1::__next_prime((ulong)puVar33);
          }
          else {
            uVar10 = NEON_cnt(puVar46,1);
            uVar47 = NEON_uaddlv(uVar10,1);
            if (1 < (uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar47)) goto LAB_001337d4;
            if ((ulong *)0x1 < puVar33) {
              puVar33 = (ulong *)(1L << (-LZCOUNT((long)puVar33 - 1) & 0x3fU));
            }
          }
          if (puVar21 <= puVar33) {
            puVar21 = puVar33;
          }
          if (puVar21 < puVar46) goto LAB_00133734;
        }
        puVar46 = *(ulong **)(puVar41 + 0x40);
        if (((ulong)puVar46 & (long)puVar46 - 1U) == 0) {
          puVar21 = (ulong *)((long)puVar46 - 1U & (ulong)puVar43);
        }
        else {
          puVar21 = puVar43;
          if (puVar46 <= puVar43) {
            uVar14 = 0;
            if (puVar46 != (ulong *)0x0) {
              uVar14 = (ulong)puVar43 / (ulong)puVar46;
            }
            puVar21 = (ulong *)((long)puVar43 - uVar14 * (long)puVar46);
          }
        }
      }
      lVar18 = *(long *)(puVar41 + 0x38);
      plVar13 = *(long **)(lVar18 + (long)puVar21 * 8);
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(puVar41 + 0x48);
        lVar36 = *plVar13;
        *plVar13 = (long)plVar34;
        *plVar34 = lVar36;
        *(long **)(lVar18 + (long)puVar21 * 8) = plVar13;
        if (*plVar34 != 0) {
          puVar43 = *(ulong **)(*plVar34 + 8);
          if (((ulong)puVar46 & (long)puVar46 - 1U) == 0) {
            puVar43 = (ulong *)((ulong)puVar43 & (long)puVar46 - 1U);
          }
          else if (puVar46 <= puVar43) {
            uVar14 = 0;
            if (puVar46 != (ulong *)0x0) {
              uVar14 = (ulong)puVar43 / (ulong)puVar46;
            }
            puVar43 = (ulong *)((long)puVar43 - uVar14 * (long)puVar46);
          }
          plVar13 = (long *)(*(long *)(puVar41 + 0x38) + (long)puVar43 * 8);
          goto LAB_00133874;
        }
      }
      else {
        *plVar34 = *plVar13;
LAB_00133874:
        *plVar13 = (long)plVar34;
      }
      *(long *)(puVar41 + 0x50) = *(long *)(puVar41 + 0x50) + 1;
LAB_00133884:
      lVar18 = *(long *)(puVar41 + 0x70);
      puVar26 = *(undefined8 **)(lVar18 + 8);
      *plVar29 = lVar18;
      plVar29[1] = (long)puVar26;
      *(long **)(lVar18 + 8) = plVar29;
      *puVar26 = plVar29;
      *(long *)(puVar41 + 0x68) = *(long *)(puVar41 + 0x68) + 1;
      if ((*(ulong *)(puVar41 + 0x80) != 0) &&
         (*(ulong *)(puVar41 + 0x80) < *(ulong *)(puVar41 + 0x50))) {
        uVar10 = *(undefined8 *)(puVar41 + 0x88);
        local_90 = local_f0;
        if (local_f0 != (uint *)0x0) {
          if (local_f0 == (uint *)&local_110) {
            local_90 = &local_b0;
            (**(code **)(local_110 + 0x18))(&local_110,&local_b0);
          }
          else {
                    /* try { // try from 001338d8 to 001338ff has its CatchHandler @ 00133d6c */
            local_90 = (uint *)(**(code **)(*(long *)local_f0 + 0x10))();
          }
        }
                    /* try { // try from 00133900 to 0013390f has its CatchHandler @ 00133c64 */
        FUN_0013a790(uVar10,&local_b0);
        if (local_90 == &local_b0) {
          lVar18 = 4;
          puVar17 = &local_b0;
        }
        else {
          if (local_90 == (uint *)0x0) goto LAB_0013393c;
          lVar18 = 5;
          puVar17 = local_90;
        }
        (**(code **)(*(long *)puVar17 + lVar18 * 8))();
      }
LAB_0013393c:
      if (local_f0 == (uint *)&local_110) {
        lVar18 = 4;
        puVar17 = (uint *)&local_110;
LAB_00133960:
        (**(code **)(*(long *)puVar17 + lVar18 * 8))();
        if (local_120 == local_140) {
          lVar18 = 4;
          plVar29 = local_140;
        }
        else {
          if (local_120 == (long *)0x0) goto LAB_0013399c;
          lVar18 = 5;
          plVar29 = local_120;
        }
        (**(code **)(*plVar29 + lVar18 * 8))();
      }
      else if (local_f0 != (uint *)0x0) {
        lVar18 = 5;
        puVar17 = local_f0;
        goto LAB_00133960;
      }
LAB_0013399c:
      if (puVar32 != (undefined8 *)0x0) {
                    /* try { // try from 001339a0 to 001339b3 has its CatchHandler @ 00133d54 */
        plVar29 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar29 + 0xb8))(plVar29,puVar32);
      }
      p_Var15 = local_e0;
      if (local_e0 != (_jmethodID *)0x0) {
                    /* try { // try from 001339bc to 001339cf has its CatchHandler @ 00133d50 */
        plVar29 = (long *)facebook::jni::Environment::current();
        (**(code **)(*plVar29 + 0xb0))(plVar29,p_Var15);
      }
LAB_001339d0:
      std::__ndk1::mutex::unlock();
      FUN_0013ab0c(local_160);
      puVar32 = local_170;
      local_170 = (undefined8 *)0x0;
      if (puVar32 != (undefined8 *)0x0) {
        operator_delete(puVar32);
      }
      goto LAB_001339f8;
    }
  }
LAB_00133a50:
  if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00133a64 to 00133a6f has its CatchHandler @ 00133e7c */
                    /* WARNING: Subroutine does not return */
    FUN_00136468("unordered_map::at: key not found");
  }
LAB_0013400c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00133304:
  puVar21 = (ulong *)*puVar21;
  if (puVar21 == (ulong *)0x0) goto LAB_00133a50;
  goto LAB_0013330c;
}


// ===== 00134010  FUN_00134010 =====

void FUN_00134010(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
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
                    /* try { // try from 00134098 to 001340a7 has its CatchHandler @ 00134140 */
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
      FUN_00123890(*(undefined8 *)PTR_name_00144df8);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_0012e304();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134178  FUN_00134178 =====

float FUN_00134178(int *param_1)

{
  byte ****ppppbVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  byte ***local_68;
  byte ***local_60;
  byte ***pppbStack_58;
  byte ***local_50;
  byte ***pppbStack_48;
  byte ***local_40;
  byte ***pppbStack_38;
  undefined1 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (param_1[0xc] == 1) {
    dVar5 = (double)facebook::jsi::Value::asNumber();
  }
  else {
    if (param_1[0xc] != 0) {
LAB_001342e0:
      if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
        FUN_0012e304();
      }
      goto LAB_00134310;
    }
    iVar2 = *param_1;
    if (iVar2 < 4) {
      if (iVar2 == 2) {
        dVar5 = (double)NEON_ucvtf((ulong)*(byte *)(param_1 + 2));
      }
      else {
        if (iVar2 != 3) {
LAB_001342f4:
          if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00123890("int/double/bool/string");
          }
          goto LAB_00134310;
        }
        dVar5 = *(double *)(param_1 + 2);
      }
    }
    else if (iVar2 == 6) {
      uVar4 = (ulong)(*(byte *)(param_1 + 2) >> 1);
      local_60 = (byte ***)((long)param_1 + 9);
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        uVar4 = *(ulong *)(param_1 + 4);
        local_60 = (byte ***)*(byte *****)(param_1 + 6);
      }
      pppbStack_58 = (byte ***)((long)local_60 + uVar4);
      local_50 = local_60;
      pppbStack_48 = pppbStack_58;
      auVar6 = folly::detail::str_to_floating<double>((Range *)&local_50);
      dVar5 = auVar6._8_8_;
      uVar4 = auVar6._0_8_;
      if ((uVar4 & 0xff) != 1) {
LAB_001342bc:
        local_50 = (byte ***)&local_60;
        if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_00134310;
        FUN_00138410(&local_50,uVar4 >> 8);
        goto LAB_001342e0;
      }
      local_40 = local_50;
      pppbStack_38 = pppbStack_48;
      local_30 = 1;
      for (ppppbVar1 = (byte ****)local_50; (byte ****)pppbStack_48 != ppppbVar1;
          ppppbVar1 = (byte ****)((long)ppppbVar1 + 1)) {
        if ((*(byte *)ppppbVar1 != 0x20) && (4 < *(byte *)ppppbVar1 - 9)) {
          local_68 = (byte ***)&local_40;
          if (*(long *)(lVar3 + 0x28) != local_28) goto LAB_00134310;
          uVar4 = FUN_00138484(&local_68);
          goto LAB_001342bc;
        }
      }
    }
    else {
      if (iVar2 != 4) goto LAB_001342f4;
      dVar5 = (double)FUN_00137db8(param_1 + 2);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return (float)dVar5;
  }
LAB_00134310:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00134314  FUN_00134314 =====

/* WARNING: Removing unreachable block (ram,0x00134718) */
/* WARNING: Removing unreachable block (ram,0x0013467c) */

void FUN_00134314(undefined4 *param_1,long *param_2)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint local_2c;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar5 = param_2[1];
  uVar9 = param_2[2];
  uVar8 = uVar5;
  if (uVar5 <= uVar9) {
    uVar10 = 0;
LAB_001343c4:
    if (((0x80 < uVar10) || (uVar10 == 0x5f)) || (uVar10 - 0x41 < 0x1a)) {
      lVar6 = *param_2;
LAB_001346c0:
      do {
        if (uVar9 < uVar5) {
          bVar2 = *(byte *)(lVar6 + uVar9);
          uVar10 = (uint)bVar2;
          if ((0x19 < bVar2 - 0x61) && (bVar2 < 0x81)) goto LAB_001346e0;
        }
        else {
          uVar10 = 0;
LAB_001346e0:
          if ((uVar10 != 0x5f) &&
             (((0x19 < uVar10 - 0x41 && (uVar10 != 0x2d)) && (9 < uVar10 - 0x30))))
          goto LAB_0013471c;
        }
        uVar9 = uVar9 + 1;
        param_2[2] = uVar9;
      } while( true );
    }
    if (uVar10 != 0) {
      lVar6 = *param_2;
      uVar8 = uVar5;
      if (uVar9 + 1 <= uVar5) {
        uVar8 = uVar9 + 1;
      }
      *param_1 = 4;
      *(long *)(param_1 + 2) = lVar6;
      *(ulong *)(param_1 + 4) = uVar8;
      *param_2 = lVar6 + uVar8;
      param_2[1] = uVar5 - uVar8;
      param_2[2] = 0;
      goto LAB_00134768;
    }
    *param_1 = 6;
    goto LAB_00134424;
  }
  lVar6 = *param_2;
  bVar2 = *(byte *)(lVar6 + uVar9);
  uVar10 = (uint)bVar2;
  switch((uint)bVar2) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    do {
      uVar7 = uVar9;
      if (0x20 < *(byte *)(lVar6 + uVar9) ||
          (1L << ((ulong)*(byte *)(lVar6 + uVar9) & 0x3f) & 0x100002600U) == 0) break;
      uVar9 = uVar9 + 1;
      param_2[2] = uVar9;
      uVar7 = uVar5;
    } while (uVar5 != uVar9);
    uVar11 = 0xe;
    param_2[2] = 0;
    if (uVar7 <= uVar5) {
      uVar8 = uVar7;
    }
    break;
  default:
    if (bVar2 - 0x30 < 10) {
      lVar3 = *(long *)(lVar3 + 0x28);
joined_r0x00134580:
      if (lVar3 == lVar4) {
        FUN_001347c4();
        return;
      }
      goto LAB_001347c0;
    }
    if (uVar10 - 0x61 < 0x1a) goto LAB_001346c0;
    goto LAB_001343c4;
  case 0x23:
    uVar7 = uVar9 + 1;
    if (uVar7 < uVar5) {
      uVar10 = (uint)*(byte *)(lVar6 + uVar7);
      if (*(byte *)(lVar6 + uVar7) - 0x61 < 0x1a) goto LAB_00134600;
    }
    else {
      uVar10 = 0;
    }
    if ((((0x80 < uVar10) || (uVar10 == 0x5f)) || (uVar10 - 0x41 < 0x1a)) ||
       ((uVar10 == 0x2d || (uVar10 - 0x30 < 10)))) {
LAB_00134600:
      uVar9 = 0;
      uVar8 = uVar5;
      if (uVar7 <= uVar5) {
        uVar8 = uVar7;
      }
      lVar6 = lVar6 + uVar8;
      uVar5 = uVar5 - uVar8;
      *param_2 = lVar6;
      param_2[1] = uVar5;
      do {
        param_2[2] = uVar9;
        if (uVar9 < uVar5) {
          bVar2 = *(byte *)(lVar6 + uVar9);
          uVar10 = (uint)bVar2;
          if ((0x19 < bVar2 - 0x61) && (bVar2 < 0x81)) goto LAB_00134644;
        }
        else {
          uVar10 = 0;
LAB_00134644:
          if ((uVar10 != 0x5f) &&
             (((0x19 < uVar10 - 0x41 && (uVar10 != 0x2d)) && (9 < uVar10 - 0x30))))
          goto LAB_00134680;
        }
        uVar9 = uVar9 + 1;
      } while( true );
    }
    goto LAB_001345dc;
  case 0x28:
    param_2[2] = 0;
    uVar11 = 0xb;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x29:
    param_2[2] = 0;
    uVar11 = 1;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x2b:
  case 0x2d:
    if (uVar9 + 1 < uVar5) {
      uVar10 = (uint)*(byte *)(lVar6 + uVar9 + 1);
      if (uVar10 - 0x30 < 10) goto LAB_00134574;
      if ((uVar10 == 0x2e) && (uVar9 + 2 < uVar5)) {
        bVar2 = *(byte *)(lVar6 + uVar9 + 2);
        goto joined_r0x00134570;
      }
    }
    goto LAB_001345dc;
  case 0x2c:
    param_2[2] = 0;
    uVar11 = 3;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x2e:
    if (uVar9 + 1 < uVar5) {
      bVar2 = *(byte *)(lVar6 + uVar9 + 1);
joined_r0x00134570:
      if (bVar2 - 0x30 < 10) {
LAB_00134574:
        lVar3 = *(long *)(lVar3 + 0x28);
        goto joined_r0x00134580;
      }
    }
LAB_001345dc:
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    *param_1 = 4;
    *param_2 = lVar6 + uVar8;
    param_2[1] = uVar5 - uVar8;
    param_2[2] = 0;
LAB_00134764:
    *(long *)(param_1 + 2) = lVar6;
    *(ulong *)(param_1 + 4) = uVar8;
LAB_00134768:
    param_1[6] = 0;
    if (*(long *)(lVar3 + 0x28) == lVar4) {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
      return;
    }
    goto LAB_001347c0;
  case 0x5b:
    param_2[2] = 0;
    uVar11 = 0xc;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x5d:
    param_2[2] = 0;
    uVar11 = 2;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x7b:
    param_2[2] = 0;
    uVar11 = 10;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    break;
  case 0x7d:
    param_2[2] = 0;
    *param_1 = 0;
    if (uVar9 + 1 <= uVar5) {
      uVar8 = uVar9 + 1;
    }
    goto LAB_001343b0;
  }
  *param_1 = uVar11;
LAB_001343b0:
  *param_2 = lVar6 + uVar8;
  param_2[1] = uVar5 - uVar8;
LAB_00134424:
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1[6] = 0;
    return;
  }
LAB_001347c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00134680:
  uVar8 = uVar5;
  if (uVar9 <= uVar5) {
    uVar8 = uVar9;
  }
  *param_1 = 0xf;
  *(long *)(param_1 + 2) = lVar6;
  *(ulong *)(param_1 + 4) = uVar8;
  *param_2 = lVar6 + uVar8;
  param_2[1] = uVar5 - uVar8;
  param_2[2] = 0;
  goto LAB_00134768;
LAB_0013471c:
  if (uVar9 <= uVar5) {
    uVar8 = uVar9;
  }
  pcVar1 = (char *)(lVar6 + uVar8);
  *param_2 = (long)pcVar1;
  param_2[1] = uVar5 - uVar8;
  param_2[2] = 0;
  if ((uVar5 <= uVar9) || (*pcVar1 != '(')) {
    *(long *)(param_1 + 2) = lVar6;
    *(ulong *)(param_1 + 4) = uVar8;
    *param_1 = 8;
    param_1[6] = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(ulong *)(param_1 + 7) = (ulong)local_2c;
    param_1[0xb] = 0;
    if (*(long *)(lVar3 + 0x28) == lVar4) {
      return;
    }
    goto LAB_001347c0;
  }
  param_2[2] = 0;
  *param_2 = (long)(pcVar1 + 1);
  param_2[1] = (uVar5 - uVar8) + -1;
  *param_1 = 7;
  goto LAB_00134764;
}


// ===== 001347c4  FUN_001347c4 =====

void FUN_001347c4(undefined4 *param_1,float param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ushort uVar33;
  bool bVar34;
  bool bVar35;
  undefined8 *__dest;
  long lVar36;
  undefined8 *__src;
  byte *pbVar37;
  byte *pbVar38;
  long lVar39;
  ulong uVar40;
  ulong *puVar41;
  byte *pbVar42;
  int iVar43;
  byte *pbVar44;
  byte *pbVar45;
  ulong uVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  ulong uVar50;
  ulong uVar51;
  byte *pbVar52;
  byte *pbVar53;
  undefined1 (*pauVar54) [16];
  long lVar55;
  long lVar56;
  byte *pbVar57;
  ulong uVar58;
  ulong uVar59;
  ulong uVar60;
  undefined8 *__s;
  byte *pbVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  float fVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  long lStack_490;
  ulong *local_488;
  ulong local_480;
  byte *local_478;
  undefined8 local_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined8 uStack_460;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong local_280;
  ulong uStack_278;
  undefined8 local_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  ulong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  long local_78;
  
  lVar26 = tpidr_el0;
  local_78 = *(long *)(lVar26 + 0x28);
  pbVar3 = (byte *)*param_3;
  pbVar4 = (byte *)param_3[1];
  pbVar57 = pbVar3 + (long)pbVar4;
  pbVar38 = pbVar57;
  if (pbVar4 != (byte *)0x0) {
    bVar5 = *pbVar3;
    if ((bVar5 == 0x2d) || (pbVar52 = pbVar3, bVar5 == 0x2b)) {
      if (pbVar4 != (byte *)0x1) {
        pbVar52 = pbVar3 + 1;
        if ((*pbVar52 == 0x2e) || (*pbVar52 - 0x30 < 10)) goto LAB_0013483c;
      }
    }
    else {
LAB_0013483c:
      lVar55 = 0;
      uVar59 = 0;
      lVar56 = (long)pbVar57 - (long)pbVar52;
      do {
        bVar7 = pbVar52[lVar55];
        if (9 < bVar7 - 0x30) {
          pbVar53 = pbVar52 + lVar55;
          if (bVar7 != 0x2e) {
            pbVar44 = (byte *)0x0;
            pbVar61 = (byte *)0x0;
            pbVar42 = (byte *)0x0;
            pbVar38 = pbVar53;
            lVar56 = lVar55;
            goto joined_r0x00134a64;
          }
          pbVar61 = pbVar3 + (long)(pbVar4 + (~(ulong)pbVar52 - lVar55));
          pbVar44 = pbVar53 + 1;
          pbVar45 = pbVar44;
          pbVar42 = pbVar44;
          if ((long)pbVar61 < 8) goto joined_r0x00134b9c;
          lVar56 = ~(ulong)pbVar52 - lVar55;
          goto LAB_001349a4;
        }
        lVar55 = lVar55 + 1;
        uVar59 = ((ulong)bVar7 + uVar59 * 10) - 0x30;
      } while (pbVar52 + lVar55 != pbVar57);
      pbVar44 = (byte *)0x0;
      pbVar61 = (byte *)0x0;
      pbVar42 = (byte *)0x0;
      lVar55 = lVar56;
      pbVar53 = pbVar57;
      if (lVar56 != 0) goto LAB_00134894;
    }
LAB_00134bb8:
    pbVar52 = pbVar3;
    if (bVar5 == 0x2d || bVar5 == 0x2b) {
      pbVar52 = pbVar3 + 1;
    }
    pbVar38 = pbVar3;
    if (2 < (long)pbVar57 - (long)pbVar52) {
      if ((*pbVar52 & 0xdf) == 0x49) {
        if (((pbVar52[1] & 0xdf) == 0x4e) && ((pbVar52[2] & 0xdf) == 0x46)) {
          if (((ulong)((long)pbVar57 - (long)pbVar52) < 8) ||
             (((((pbVar52[3] & 0xdf) != 0x49 || ((pbVar52[4] & 0xdf) != 0x4e)) ||
               ((pbVar52[5] & 0xdf) != 0x49)) ||
              (((pbVar52[6] & 0xdf) != 0x54 || ((pbVar52[7] & 0xdf) != 0x59)))))) {
            lVar55 = 3;
          }
          else {
            lVar55 = 8;
          }
          param_2 = -INFINITY;
          pbVar38 = pbVar52 + lVar55;
          if (bVar5 != 0x2d) {
            param_2 = INFINITY;
          }
        }
      }
      else if ((((*pbVar52 & 0xdf) == 0x4e) && ((pbVar52[1] & 0xdf) == 0x41)) &&
              ((pbVar52[2] & 0xdf) == 0x4e)) {
        pbVar53 = pbVar52 + 3;
        param_2 = -NAN;
        if (bVar5 != 0x2d) {
          param_2 = NAN;
        }
        pbVar38 = pbVar57;
        if (((pbVar53 != pbVar57) && (pbVar38 = pbVar53, pbVar52[3] == 0x28)) &&
           (pbVar52 = pbVar52 + 4, pbVar52 != pbVar57)) {
          uVar49 = (uint)*pbVar52;
          if (*pbVar52 != 0x29) {
            do {
              if (((0x19 < (uVar49 & 0xdf) - 0x41) && (uVar49 - 0x3a < 0xfffffff6 && uVar49 != 0x5f)
                  ) || (pbVar52 = pbVar52 + 1, pbVar52 == pbVar57)) goto LAB_00136274;
              uVar49 = (uint)*pbVar52;
            } while (uVar49 != 0x29);
          }
          pbVar38 = pbVar52 + 1;
        }
      }
    }
  }
  goto LAB_00136274;
  while( true ) {
    lVar56 = lVar56 + -8;
    pbVar42 = pbVar42 + 8;
    uVar50 = uVar50 * 10 + (uVar50 >> 8);
    uVar59 = uVar59 * 100000000 +
             ((uVar50 & 0xff000000ff) * 0xf424000000064 +
              (uVar50 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20);
    if ((long)(pbVar57 + lVar56) < 8) break;
LAB_001349a4:
    uVar50 = *(long *)pbVar42 + 0xcfcfcfcfcfcfcfd0;
    if (((*(long *)pbVar42 + 0x4646464646464646U | uVar50) & 0x8080808080808080) != 0) break;
  }
  pbVar45 = (byte *)-lVar56;
joined_r0x00134b9c:
  if (pbVar42 != pbVar57) {
    pbVar61 = pbVar42 + ((long)pbVar57 - (long)pbVar45);
    do {
      bVar7 = *pbVar42;
      pbVar38 = pbVar42;
      if (9 < bVar7 - 0x30) break;
      pbVar42 = pbVar42 + 1;
      uVar59 = uVar59 * 10 + (ulong)(byte)(bVar7 - 0x30);
      pbVar38 = pbVar61;
    } while (pbVar42 != pbVar57);
    pbVar61 = pbVar38 + (~(ulong)pbVar52 - lVar55);
  }
  pbVar42 = pbVar52 + (lVar55 - (long)pbVar38) + 1;
  lVar56 = lVar55 - (long)pbVar42;
joined_r0x00134a64:
  if (lVar56 == 0) goto LAB_00134bb8;
LAB_00134894:
  pbVar45 = pbVar52;
  if (pbVar38 == pbVar57) {
    lVar36 = 0;
    pbVar38 = pbVar57;
joined_r0x00134a78:
    if (0x13 < lVar56) goto LAB_00134a9c;
LAB_00134b3c:
    if ((byte *)0x14 < pbVar42 + 10) {
LAB_00134d44:
      bVar35 = true;
      goto LAB_00134d84;
    }
    if (*(float *)PTR_fmin_00144e30 + 1.0 == 1.0 - *(float *)PTR_fmin_00144e30) {
      if (0x1000000 < uVar59) goto LAB_00134d44;
      if ((long)pbVar42 < 0) {
        fVar66 = (float)uVar59 / *(float *)(&DAT_00111db4 + (long)pbVar42 * -4);
      }
      else {
        fVar66 = *(float *)(&DAT_00111db4 + (long)pbVar42 * 4) * (float)uVar59;
      }
      param_2 = -fVar66;
      if (bVar5 != 0x2d) {
        param_2 = fVar66;
      }
    }
    else {
      if (((long)pbVar42 < 0) || (*(ulong *)(&DAT_00111de0 + (long)pbVar42 * 8) < uVar59))
      goto LAB_00134d44;
      if (uVar59 == 0) {
        param_2 = -0.0;
        if (bVar5 != 0x2d) {
          param_2 = 0.0;
        }
      }
      else {
        param_2 = -(*(float *)(&DAT_00111db4 + (long)pbVar42 * 4) * (float)uVar59);
        if (bVar5 != 0x2d) {
          param_2 = *(float *)(&DAT_00111db4 + (long)pbVar42 * 4) * (float)uVar59;
        }
      }
    }
  }
  else {
    if (((*pbVar38 | 0x20) == 0x65) && (pbVar37 = pbVar38 + 1, pbVar37 != pbVar57)) {
      bVar7 = *pbVar37;
      if (bVar7 == 0x2d || bVar7 == 0x2b) {
        pbVar37 = pbVar38 + 2;
      }
      if ((pbVar37 != pbVar57) && (*pbVar37 - 0x30 < 10)) {
        lVar36 = 0;
        do {
          bVar6 = *pbVar37;
          pbVar38 = pbVar37;
          lVar39 = lVar36;
          if (9 < bVar6 - 0x30) break;
          pbVar37 = pbVar37 + 1;
          lVar39 = lVar36 * 10 + (ulong)(byte)(bVar6 - 0x30);
          if (0xfffffff < lVar36) {
            lVar39 = lVar36;
          }
          pbVar38 = pbVar57;
          lVar36 = lVar39;
        } while (pbVar37 != pbVar57);
        lVar36 = -lVar39;
        if (bVar7 != 0x2d) {
          lVar36 = lVar39;
        }
        pbVar42 = pbVar42 + lVar36;
        goto joined_r0x00134a78;
      }
    }
    lVar36 = 0;
    if (lVar56 < 0x14) goto LAB_00134b3c;
LAB_00134a9c:
    do {
      bVar7 = *pbVar45;
      if ((bVar7 != 0x30) && (bVar7 != 0x2e)) break;
      pbVar45 = pbVar45 + 1;
      lVar56 = lVar56 - (ulong)(bVar7 == 0x30);
    } while (pbVar45 != pbVar57);
    if (lVar56 < 0x14) goto LAB_00134b3c;
    uVar59 = 0;
    pbVar57 = pbVar52;
    lVar56 = lVar55;
    if (lVar55 == 0) {
LAB_00134b08:
      pbVar42 = pbVar44;
      pbVar37 = pbVar44;
      pbVar45 = pbVar44;
      pbVar57 = pbVar61;
      if (pbVar61 != (byte *)0x0) {
        do {
          pbVar57 = pbVar57 + -1;
          pbVar45 = pbVar37 + 1;
          uVar59 = ((ulong)*pbVar37 + uVar59 * 10) - 0x30;
          pbVar37 = pbVar45;
        } while (uVar59 < 1000000000000000000 && pbVar57 != (byte *)0x0);
      }
    }
    else {
      do {
        lVar56 = lVar56 + -1;
        pbVar45 = pbVar57 + 1;
        uVar59 = ((ulong)*pbVar57 + uVar59 * 10) - 0x30;
        pbVar57 = pbVar45;
      } while (uVar59 < 1000000000000000000 && lVar56 != 0);
      pbVar42 = pbVar53;
      if (uVar59 < 1000000000000000000) goto LAB_00134b08;
    }
    bVar35 = false;
    pbVar42 = pbVar42 + (lVar36 - (long)pbVar45);
LAB_00134d84:
    uVar46 = 0;
    uVar50 = 0;
    iVar47 = (int)pbVar42;
    if (((long)(pbVar42 + 0x40) < 0 == SCARRY8((long)pbVar42,0x40)) && (uVar59 != 0)) {
      if ((long)pbVar42 < 0x27) {
        uVar58 = uVar59 << (LZCOUNT(uVar59) & 0x3fU);
        auVar70._8_8_ = 0;
        auVar70._0_8_ = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ac) * 8);
        auVar73._8_8_ = 0;
        auVar73._0_8_ = uVar58;
        uVar46 = SUB168(auVar70 * auVar73,8);
        uVar50 = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ac) * 8) * uVar58;
        if ((((uVar46 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
           (auVar75._8_8_ = 0,
           auVar75._0_8_ = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ad) * 8),
           auVar78._8_8_ = 0, auVar78._0_8_ = uVar58, uVar58 = SUB168(auVar75 * auVar78,8),
           bVar34 = CARRY8(uVar58,uVar50), uVar50 = uVar58 + uVar50, bVar34)) {
          uVar46 = uVar46 + 1;
        }
        uVar64 = uVar46 >> 0x3f | 0x26;
        iVar43 = (-(int)LZCOUNT(uVar59) - (int)((long)uVar46 >> 0x3f)) + (iVar47 * 0x3526a >> 0x10);
        uVar58 = uVar46 >> uVar64;
        uVar49 = iVar43 + 0xbe;
        if ((int)uVar49 < 1) {
          if (1 - uVar49 < 0x40) {
            uVar58 = uVar58 >> ((ulong)(1 - uVar49) & 0x3f);
            uVar58 = (uVar58 & 1) + uVar58;
            uVar50 = uVar58 >> 1;
            uVar46 = (ulong)((uVar58 & 0x7000000) != 0);
          }
          else {
            uVar46 = 0;
            uVar50 = 0;
          }
        }
        else {
          uVar62 = uVar58;
          if ((((byte *)0xffffffffffffffe3 < pbVar42 + -0xb) && (uVar50 < 2)) &&
             (uVar62 = uVar58 & 0x3fffffc, uVar58 << uVar64 != uVar46 || (uVar58 & 3) != 1)) {
            uVar62 = uVar58;
          }
          uVar62 = (uVar62 & 1) + uVar62;
          bVar34 = uVar62 >> 0x19 != 0;
          uVar50 = uVar62 >> 1 & 0xffffffffff7fffff;
          if (bVar34) {
            uVar49 = iVar43 + 0xbf;
          }
          if (bVar34 || 0xfe < uVar49) {
            uVar50 = 0;
          }
          if (0xfe < (int)uVar49) {
            uVar49 = 0xff;
          }
          uVar46 = (ulong)uVar49;
        }
      }
      else {
        uVar50 = 0;
        uVar46 = 0xff;
      }
    }
    if (!bVar35) {
      uVar58 = 0;
      uVar49 = 0;
      if (((long)(pbVar42 + 0x40) < 0 == SCARRY8((long)pbVar42,0x40)) &&
         (uVar59 != 0xffffffffffffffff)) {
        if ((long)pbVar42 < 0x27) {
          uVar62 = LZCOUNT(uVar59 + 1);
          uVar65 = uVar59 + 1 << (uVar62 & 0x3f);
          auVar79._8_8_ = 0;
          auVar79._0_8_ = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ac) * 8);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar65;
          uVar64 = SUB168(auVar79 * auVar18,8);
          uVar58 = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ac) * 8) * uVar65;
          if ((((uVar64 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
             (auVar9._8_8_ = 0,
             auVar9._0_8_ = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ad) * 8),
             auVar19._8_8_ = 0, auVar19._0_8_ = uVar65, uVar65 = SUB168(auVar9 * auVar19,8),
             bVar35 = CARRY8(uVar65,uVar58), uVar58 = uVar65 + uVar58, bVar35)) {
            uVar64 = uVar64 + 1;
          }
          uVar65 = uVar64 >> 0x3f | 0x26;
          iVar43 = (-(int)uVar62 - (int)((long)uVar64 >> 0x3f)) + (iVar47 * 0x3526a >> 0x10);
          uVar62 = uVar64 >> uVar65;
          uVar49 = iVar43 + 0xbe;
          if ((int)uVar49 < 1) {
            if (1 - uVar49 < 0x40) {
              uVar62 = uVar62 >> ((ulong)(1 - uVar49) & 0x3f);
              uVar62 = (uVar62 & 1) + uVar62;
              uVar58 = uVar62 >> 1;
              uVar49 = (uint)((uVar62 & 0x7000000) != 0);
            }
            else {
              uVar49 = 0;
              uVar58 = 0;
            }
          }
          else {
            uVar60 = uVar62;
            if ((((byte *)0xffffffffffffffe3 < pbVar42 + -0xb) && (uVar58 < 2)) &&
               (uVar60 = uVar62 & 0x3fffffc, uVar62 << uVar65 != uVar64 || (uVar62 & 3) != 1)) {
              uVar60 = uVar62;
            }
            uVar60 = (uVar60 & 1) + uVar60;
            bVar35 = uVar60 >> 0x19 != 0;
            uVar58 = uVar60 >> 1 & 0xffffffffff7fffff;
            if (bVar35) {
              uVar49 = iVar43 + 0xbf;
            }
            if (bVar35 || 0xfe < uVar49) {
              uVar58 = 0;
            }
            if (0xfe < (int)uVar49) {
              uVar49 = 0xff;
            }
          }
        }
        else {
          uVar58 = 0;
          uVar49 = 0xff;
        }
      }
      if ((uVar50 != uVar58) || (uVar49 != (uint)uVar46)) {
        uVar50 = uVar59 << (LZCOUNT(uVar59) & 0x3fU);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ac) * 8);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar50;
        uVar46 = SUB168(auVar10 * auVar20,8);
        if ((((uVar46 ^ 0xffffffffffffffff) & 0x3fffffffff) == 0) &&
           (auVar11._8_8_ = 0,
           auVar11._0_8_ = *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ad) * 8),
           auVar21._8_8_ = 0, auVar21._0_8_ = uVar50,
           CARRY8(SUB168(auVar11 * auVar21,8),
                  *(ulong *)(&DAT_00111e40 + (long)(iVar47 * 2 + 0x2ac) * 8) * uVar50))) {
          uVar46 = uVar46 + 1;
        }
        uVar50 = uVar46 << (uVar46 >> 0x3f ^ 1);
        uVar46 = (ulong)(((-(int)LZCOUNT(uVar59) - (int)((long)uVar46 >> 0x3f)) +
                         (iVar47 * 0x3526a >> 0x10)) - 0x7f6a);
      }
    }
    if ((int)uVar46 < 0) {
      uVar58 = uVar59;
      if (uVar59 >> 4 < 0x271) {
        if (uVar59 < 100) goto LAB_0013514c;
LAB_00135114:
        do {
          uVar58 = uVar59 >> 4;
          uVar49 = (int)pbVar42 + 2;
          pbVar42 = (byte *)(ulong)uVar49;
          uVar59 = uVar59 / 100;
        } while (0x270 < uVar58);
      }
      else {
        do {
          pbVar42 = (byte *)(ulong)((int)pbVar42 + 4);
          uVar59 = uVar58 / 10000;
          bVar35 = 99999999 < uVar58;
          uVar58 = uVar59;
        } while (bVar35);
        if (99 < uVar59) goto LAB_00135114;
LAB_0013514c:
        uVar49 = (uint)pbVar42;
      }
      if (9 < uVar59) {
        do {
          uVar49 = (int)pbVar42 + 1;
          pbVar42 = (byte *)(ulong)uVar49;
          bVar35 = 99 < uVar59;
          uVar59 = uVar59 / 10;
        } while (bVar35);
      }
      pbVar42 = pbVar52 + lVar55;
      local_280 = 0;
      uStack_458 = 0;
      uStack_460._0_4_ = 0;
      uStack_460._4_4_ = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      local_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      local_420 = 0;
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      local_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      local_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      local_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      local_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      local_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      local_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      local_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      local_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      local_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      local_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      local_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      local_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_468 = 0;
      uStack_464 = 0;
      local_470._0_4_ = 0;
      local_470._4_4_ = 0;
      uVar59 = 0;
      pbVar57 = pbVar52;
      for (; (7 < lVar55 && (*(long *)pbVar52 == 0x3030303030303030)); pbVar52 = pbVar52 + 8) {
        lVar55 = lVar55 + -8;
        pbVar57 = pbVar57 + 8;
      }
      local_480 = uVar50;
      local_478 = pbVar61;
      if (pbVar52 != pbVar42) {
        pbVar57 = pbVar52 + ((long)pbVar53 - (long)pbVar57);
        do {
          pbVar53 = pbVar52;
          if (*pbVar52 != 0x30) break;
          pbVar52 = pbVar52 + 1;
          pbVar53 = pbVar57;
        } while (pbVar52 != pbVar42);
        if (pbVar53 != pbVar42) {
          uVar62 = 0;
          uVar58 = 0;
          local_488 = (ulong *)((ulong)&local_470 | 8);
          uVar64 = 0;
LAB_00135290:
          uVar65 = 0;
          if ((uVar58 - 0x73 < 0xfffffffffffffff8) && (7 < (long)pbVar42 - (long)pbVar53)) {
            uVar65 = (*(long *)pbVar53 + 0xcfcfcfcfcfcfcfd0U) * 10 +
                     (*(long *)pbVar53 + 0xcfcfcfcfcfcfcfd0U >> 8);
            uVar60 = (uVar65 & 0xff000000ff) * 0xf424000000064 +
                     (uVar65 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20;
            if ((uVar58 - 0x6b < 0xfffffffffffffff8) && (7 < (long)pbVar42 - (long)(pbVar53 + 8))) {
              uVar65 = 0x10;
              uVar63 = (*(long *)(pbVar53 + 8) + 0xcfcfcfcfcfcfcfd0U) * 10 +
                       (*(long *)(pbVar53 + 8) + 0xcfcfcfcfcfcfcfd0U >> 8);
              uVar60 = ((uVar63 & 0xff000000ff) * 0xf424000000064 +
                        (uVar63 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20) +
                       uVar60 * 100000000;
              pbVar53 = pbVar53 + 0x10;
              uVar58 = uVar58 + 0x10;
            }
            else {
              uVar65 = 8;
              pbVar53 = pbVar53 + 8;
              uVar58 = uVar58 + 8;
            }
          }
          else {
            uVar60 = 0;
          }
          if ((uVar58 < 0x72) &&
             (pbVar57 = pbVar53, uVar63 = uVar65, uVar51 = uVar58, pbVar53 != pbVar42)) {
            while( true ) {
              pbVar53 = pbVar57 + 1;
              uVar65 = uVar63 + 1;
              uVar60 = ((ulong)*pbVar57 + uVar60 * 10) - 0x30;
              uVar58 = uVar51 + 1;
              if (0x11 < uVar63) break;
              if ((pbVar53 == pbVar42) ||
                 (bVar35 = 0x70 < uVar51, pbVar57 = pbVar53, uVar63 = uVar65, uVar51 = uVar58,
                 bVar35)) break;
            }
          }
          local_470 = uVar59;
          if (uVar58 != 0x72) goto code_r0x001353ac;
          uVar48 = (uint)uVar62;
          uVar58 = uVar62;
          if (uVar48 == 0) {
            if (uVar60 == 0) goto LAB_0013585c;
            uVar58 = 0;
            goto LAB_0013584c;
          }
          uVar64 = *(ulong *)(&UNK_001146f0 + uVar65 * 8);
          lVar55 = 0;
          uVar59 = 0;
          do {
            uVar63 = *(ulong *)((long)&local_470 + lVar55) * uVar64;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = *(ulong *)((long)&local_470 + lVar55);
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar64;
            uVar65 = SUB168(auVar14 * auVar24,8);
            *(ulong *)((long)&local_470 + lVar55) = uVar63 + uVar59;
            lVar55 = lVar55 + 8;
            if (CARRY8(uVar63,uVar59)) {
              uVar65 = uVar65 + 1;
            }
            uVar59 = uVar65;
          } while (uVar62 * 8 - lVar55 != 0);
          if ((uVar48 < 0x3e) && (uVar65 != 0)) {
            uVar58 = (ulong)(uVar48 + 1);
            (&local_470)[uVar62] = uVar65;
            local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
          }
          uVar59 = local_470;
          if (uVar60 != 0) {
            bVar35 = CARRY8(local_470,uVar60);
            uVar59 = local_470 + uVar60;
            local_470._0_4_ = (uint)uVar59;
            local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
            if (bVar35) {
              puVar41 = (ulong *)((ulong)&local_470 | 8);
              uVar64 = uVar58;
              do {
                uVar64 = uVar64 - 1;
                if (uVar64 == 0) {
                  if ((uint)uVar58 < 0x3e) {
                    uVar60 = 1;
                    uVar62 = uVar58;
LAB_0013584c:
                    uVar48 = (int)uVar62 + 1;
                    local_470 = uVar59;
                    (&local_470)[uVar58] = uVar60;
                    local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
                    uVar58 = (ulong)uVar48;
                    uVar59 = local_470;
                  }
                  break;
                }
                uVar62 = *puVar41;
                *puVar41 = uVar62 + 1;
                puVar41 = puVar41 + 1;
              } while (0xfffffffffffffffe < uVar62);
            }
          }
LAB_0013585c:
          lVar55 = (long)pbVar42 - (long)pbVar53;
          do {
            uVar64 = uVar58;
            pbVar57 = pbVar44;
            pbVar52 = pbVar61;
            if (lVar55 < 8) {
              for (; pbVar53 != pbVar42; pbVar53 = pbVar53 + 1) {
                if (*pbVar53 != 0x30) goto LAB_001358b4;
              }
              if (pbVar44 != (byte *)0x0) {
                bVar35 = false;
                goto joined_r0x001358c8;
              }
LAB_001359c8:
              uVar58 = 0x72;
              goto LAB_00135b00;
            }
            if (*(long *)pbVar53 != 0x3030303030303030) goto LAB_001358b4;
            lVar55 = lVar55 + -8;
            pbVar53 = pbVar53 + 8;
          } while( true );
        }
      }
      uVar62 = 0;
      uVar58 = 0;
      uVar59 = 0;
LAB_00135464:
      uVar64 = uVar62;
      if (pbVar44 != (byte *)0x0) {
        pbVar52 = pbVar44 + (long)pbVar61;
        pbVar57 = pbVar44;
        pbVar53 = pbVar44;
        pbVar42 = pbVar61;
        if (uVar58 == 0) {
          for (; (7 < (long)pbVar42 && (*(long *)pbVar57 == 0x3030303030303030));
              pbVar57 = pbVar57 + 8) {
            pbVar53 = pbVar53 + 8;
            pbVar42 = pbVar42 + -8;
          }
          if (pbVar57 == pbVar52) {
            uVar58 = 0;
            goto LAB_00135b00;
          }
          pbVar53 = pbVar57 + (long)(pbVar44 + ((long)pbVar61 - (long)pbVar53));
          do {
            pbVar44 = pbVar57;
            if (*pbVar57 != 0x30) break;
            pbVar57 = pbVar57 + 1;
            pbVar44 = pbVar53;
          } while (pbVar57 != pbVar52);
        }
        if (pbVar44 != pbVar52) {
          uVar65 = uVar62;
LAB_001354cc:
          uVar60 = 0;
          if ((uVar58 - 0x73 < 0xfffffffffffffff8) && (7 < (long)pbVar52 - (long)pbVar44)) {
            uVar64 = (*(long *)pbVar44 + 0xcfcfcfcfcfcfcfd0U) * 10 +
                     (*(long *)pbVar44 + 0xcfcfcfcfcfcfcfd0U >> 8);
            uVar63 = (uVar64 & 0xff000000ff) * 0xf424000000064 +
                     (uVar64 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20;
            if ((uVar58 - 0x6b < 0xfffffffffffffff8) && (7 < (long)pbVar52 - (long)(pbVar44 + 8))) {
              uVar64 = (*(long *)(pbVar44 + 8) + 0xcfcfcfcfcfcfcfd0U) * 10 +
                       (*(long *)(pbVar44 + 8) + 0xcfcfcfcfcfcfcfd0U >> 8);
              uVar63 = ((uVar64 & 0xff000000ff) * 0xf424000000064 +
                        (uVar64 >> 0x10 & 0xff000000ff) * 0x271000000001 >> 0x20) +
                       uVar63 * 100000000;
              uVar60 = 0x10;
              pbVar44 = pbVar44 + 0x10;
              uVar58 = uVar58 + 0x10;
            }
            else {
              uVar60 = 8;
              pbVar44 = pbVar44 + 8;
              uVar58 = uVar58 + 8;
            }
          }
          else {
            uVar63 = 0;
          }
          if ((uVar58 < 0x72) &&
             (uVar64 = uVar60, pbVar57 = pbVar44, uVar51 = uVar58, pbVar44 != pbVar52)) {
            while( true ) {
              pbVar44 = pbVar57 + 1;
              uVar60 = uVar64 + 1;
              uVar63 = ((ulong)*pbVar57 + uVar63 * 10) - 0x30;
              uVar58 = uVar51 + 1;
              if (0x11 < uVar64) break;
              if ((pbVar44 == pbVar52) ||
                 (bVar35 = 0x70 < uVar51, uVar64 = uVar60, pbVar57 = pbVar44, uVar51 = uVar58,
                 bVar35)) break;
            }
          }
          local_470 = uVar59;
          if (uVar58 != 0x72) goto code_r0x001355e8;
          uVar48 = (uint)uVar62;
          uVar64 = uVar62;
          if (uVar48 == 0) {
            if (uVar63 == 0) goto LAB_001359f0;
            uVar64 = 0;
            goto LAB_001359e0;
          }
          uVar58 = *(ulong *)(&UNK_001146f0 + uVar60 * 8);
          lVar55 = 0;
          uVar59 = 0;
          do {
            uVar60 = *(ulong *)((long)&local_470 + lVar55) * uVar58;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = *(ulong *)((long)&local_470 + lVar55);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar58;
            uVar65 = SUB168(auVar15 * auVar25,8);
            *(ulong *)((long)&local_470 + lVar55) = uVar60 + uVar59;
            lVar55 = lVar55 + 8;
            if (CARRY8(uVar60,uVar59)) {
              uVar65 = uVar65 + 1;
            }
            uVar59 = uVar65;
          } while (uVar62 * 8 - lVar55 != 0);
          if ((uVar48 < 0x3e) && (uVar65 != 0)) {
            uVar64 = (ulong)(uVar48 + 1);
            (&local_470)[uVar62] = uVar65;
            local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
          }
          uVar59 = local_470;
          if (uVar63 != 0) {
            bVar35 = CARRY8(local_470,uVar63);
            uVar59 = local_470 + uVar63;
            local_470._0_4_ = (uint)uVar59;
            local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
            if (bVar35) {
              puVar41 = (ulong *)((ulong)&local_470 | 8);
              uVar58 = uVar64;
              do {
                uVar58 = uVar58 - 1;
                if (uVar58 == 0) {
                  if ((uint)uVar64 < 0x3e) {
                    uVar63 = 1;
                    uVar62 = uVar64;
LAB_001359e0:
                    uVar48 = (int)uVar62 + 1;
                    local_470 = uVar59;
                    (&local_470)[uVar64] = uVar63;
                    local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
                    uVar64 = (ulong)uVar48;
                    uVar59 = local_470;
                  }
                  break;
                }
                uVar62 = *puVar41;
                *puVar41 = uVar62 + 1;
                puVar41 = puVar41 + 1;
              } while (0xfffffffffffffffe < uVar62);
            }
          }
LAB_001359f0:
          lVar55 = (long)pbVar52 - (long)pbVar44;
          while( true ) {
            if (lVar55 < 8) {
              uVar58 = 0x72;
              for (; pbVar44 != pbVar52; pbVar44 = pbVar44 + 1) {
                if (*pbVar44 != 0x30) goto LAB_00135a44;
              }
              goto LAB_00135b00;
            }
            if (*(long *)pbVar44 != 0x3030303030303030) break;
            lVar55 = lVar55 + -8;
            pbVar44 = pbVar44 + 8;
          }
LAB_00135a44:
          uVar48 = (uint)uVar64;
          uVar58 = uVar64;
          if (uVar48 == 0) {
LAB_00135ae4:
            uVar64 = 0;
LAB_00135ae8:
            uVar48 = (int)uVar58 + 1;
            local_470 = uVar59;
            (&local_470)[uVar64] = 1;
            local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
            uVar64 = (ulong)uVar48;
            uVar59 = local_470;
          }
          else {
            lVar55 = 0;
            uVar58 = 0;
            local_470 = uVar59;
            do {
              auVar17._8_8_ = 0;
              auVar17._0_8_ = *(ulong *)((long)&local_470 + lVar55);
              uVar62 = SUB168(auVar17 * ZEXT816(10),8);
              uVar59 = *(ulong *)((long)&local_470 + lVar55) * 10;
              *(ulong *)((long)&local_470 + lVar55) = uVar58 + uVar59;
              lVar55 = lVar55 + 8;
              if (CARRY8(uVar58,uVar59)) {
                uVar62 = uVar62 + 1;
              }
              uVar58 = uVar62;
            } while (uVar64 * 8 - lVar55 != 0);
            if ((uVar48 < 0x3e) && (uVar62 != 0)) {
              (&local_470)[uVar64] = uVar62;
              uVar64 = (ulong)(uVar48 + 1);
              local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
            }
            bVar35 = local_470 == 0xffffffffffffffff;
            uVar59 = local_470 + 1;
            local_470._0_4_ = (uint)uVar59;
            local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
            if (bVar35) {
              uVar58 = 0x73;
              uVar62 = 1;
              while (uVar64 != uVar62) {
                lVar55 = (&local_470)[uVar62];
                (&local_470)[uVar62] = lVar55 + 1;
                uVar62 = uVar62 + 1;
                if (lVar55 != -1) goto LAB_00135b00;
              }
LAB_00136058:
              uVar58 = uVar64;
              if ((uint)uVar64 < 0x3e) goto LAB_00135ae8;
            }
          }
LAB_00135afc:
          uVar58 = 0x73;
        }
      }
LAB_00135b00:
      uVar49 = (uVar49 - (int)uVar58) + 1;
      local_470 = uVar59;
      if ((int)uVar49 < 0) {
        local_478 = (byte *)(uVar46 + 0x8000);
        iVar47 = (int)local_478;
        if (iVar47 == -0x28 || iVar47 + 0x28 < 0 != SCARRY4(iVar47,0x28)) {
          uVar8 = 1 - iVar47;
          uVar48 = uVar8;
          if (0x3f < (int)uVar8) {
            uVar48 = 0;
          }
          uVar59 = 0;
          if ((int)uVar8 < 0x40) {
            uVar59 = uVar50 >> ((ulong)uVar48 & 0x3f);
          }
          uVar48 = (uint)((uVar59 & 0xffffffffff800000) != 0);
        }
        else {
          uVar48 = iVar47 + 0x28;
          uVar59 = uVar50 >> 0x28 & 0x7fffff;
          if (0xfe < (int)uVar48) {
            uVar48 = 0xff;
            uVar59 = 0;
          }
        }
        uVar48 = ((uint)uVar59 | uVar48 << 0x17) & 0x7f800000;
        if (uVar48 == 0) {
          uVar59 = uVar59 & 0x7fffff;
          iVar47 = -0x95;
        }
        else {
          uVar59 = uVar59 & 0x7fffff | 0x800000;
          iVar47 = (uVar48 >> 0x17) - 0x96;
        }
        uStack_150 = 0;
        local_158 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_130 = 0;
        local_138 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_110 = 0;
        local_118 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_f0 = 0;
        local_f8 = 0;
        uStack_e0 = 0;
        uStack_e8 = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0;
        uStack_b0 = 0;
        local_b8 = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_88 = 0;
        uStack_160 = 0;
        local_168 = 0;
        local_270._0_4_ = (uint)(uVar59 << 1) | 1;
        uStack_170 = 0;
        local_178 = 0;
        uStack_180 = 0;
        local_188 = 0;
        local_270._4_4_ = 0;
        uStack_190 = 0;
        local_198 = 0;
        uVar48 = iVar47 + ~uVar49;
        uStack_1a0 = 0;
        local_1a8 = 0;
        uStack_1b0 = 0;
        local_1b8 = 0;
        uStack_1c0 = 0;
        local_1c8 = 0;
        uStack_1d0 = 0;
        local_1d8 = 0;
        uStack_1e0 = 0;
        local_1e8 = 0;
        uStack_1f0 = 0;
        local_1f8 = 0;
        uStack_200 = 0;
        local_208 = 0;
        uStack_210 = 0;
        local_218 = 0;
        uStack_220 = 0;
        local_228 = 0;
        uStack_230 = 0;
        local_238 = 0;
        uStack_240 = 0;
        local_248 = 0;
        uStack_250 = 0;
        local_258 = 0;
        uStack_260._0_4_ = 0;
        uStack_260._4_4_ = 0;
        uStack_268 = 0;
        uStack_264 = 0;
        local_80 = 1;
        FUN_001364e8(&local_270,-uVar49);
        uVar59 = uVar64;
        if ((int)uVar48 < 1) {
          if ((int)uVar48 < 0) {
            uVar48 = -uVar48;
            uVar50 = (ulong)uVar48 & 0x3f;
            if (((uVar48 & 0x3f) != 0) && (uVar49 = (uint)uVar64, uVar49 != 0)) {
              uVar46 = 0x40 - uVar50;
              if (uVar49 < 4) {
                uVar62 = 0;
                uVar65 = 0;
LAB_001360fc:
                lVar55 = uVar64 - uVar65;
                puVar41 = &local_470 + uVar65;
                uVar58 = uVar62;
                do {
                  uVar62 = *puVar41;
                  lVar55 = lVar55 + -1;
                  *puVar41 = uVar62 << uVar50 | uVar58 >> (uVar46 & 0x3f);
                  puVar41 = puVar41 + 1;
                  uVar58 = uVar62;
                } while (lVar55 != 0);
              }
              else {
                auVar72._8_8_ = uVar46;
                auVar72._0_8_ = uVar46;
                uVar67 = 0;
                uVar68 = 0;
                uVar62 = 0;
                uVar65 = uVar64 & 0xfffc;
                pauVar54 = (undefined1 (*) [16])&uStack_460;
                auVar70 = NEON_neg(auVar72,8);
                uVar58 = uVar65;
                do {
                  auVar77._4_4_ = uVar68;
                  auVar77._0_4_ = uVar67;
                  auVar77._8_8_ = uVar62;
                  auVar73 = pauVar54[-1];
                  uVar62 = *(ulong *)(*pauVar54 + 8);
                  uVar67 = (undefined4)*(undefined8 *)*pauVar54;
                  uVar68 = (undefined4)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
                  uVar58 = uVar58 - 4;
                  auVar75 = NEON_ext(auVar77,auVar73,8,1);
                  auVar78 = NEON_ext(auVar73,*pauVar54,8,1);
                  auVar31._8_8_ = uVar50;
                  auVar31._0_8_ = uVar50;
                  auVar73 = NEON_ushl(auVar73,auVar31,8);
                  auVar32._8_8_ = uVar50;
                  auVar32._0_8_ = uVar50;
                  auVar79 = NEON_ushl(*pauVar54,auVar32,8);
                  auVar75 = NEON_ushl(auVar75,auVar70,8);
                  auVar78 = NEON_ushl(auVar78,auVar70,8);
                  (*pauVar54)[0] = auVar73[8] | auVar75[8];
                  (*pauVar54)[1] = auVar73[9] | auVar75[9];
                  (*pauVar54)[2] = auVar73[10] | auVar75[10];
                  (*pauVar54)[3] = auVar73[0xb] | auVar75[0xb];
                  (*pauVar54)[4] = auVar73[0xc] | auVar75[0xc];
                  (*pauVar54)[5] = auVar73[0xd] | auVar75[0xd];
                  (*pauVar54)[6] = auVar73[0xe] | auVar75[0xe];
                  (*pauVar54)[7] = auVar73[0xf] | auVar75[0xf];
                  pauVar54[-1][0] = auVar73[0] | auVar75[0];
                  pauVar54[-1][1] = auVar73[1] | auVar75[1];
                  pauVar54[-1][2] = auVar73[2] | auVar75[2];
                  pauVar54[-1][3] = auVar73[3] | auVar75[3];
                  pauVar54[-1][4] = auVar73[4] | auVar75[4];
                  pauVar54[-1][5] = auVar73[5] | auVar75[5];
                  pauVar54[-1][6] = auVar73[6] | auVar75[6];
                  pauVar54[-1][7] = auVar73[7] | auVar75[7];
                  pauVar54[1][0] = auVar79[8] | auVar78[8];
                  pauVar54[1][1] = auVar79[9] | auVar78[9];
                  pauVar54[1][2] = auVar79[10] | auVar78[10];
                  pauVar54[1][3] = auVar79[0xb] | auVar78[0xb];
                  pauVar54[1][4] = auVar79[0xc] | auVar78[0xc];
                  pauVar54[1][5] = auVar79[0xd] | auVar78[0xd];
                  pauVar54[1][6] = auVar79[0xe] | auVar78[0xe];
                  pauVar54[1][7] = auVar79[0xf] | auVar78[0xf];
                  (*pauVar54)[0] = auVar79[0] | auVar78[0];
                  (*pauVar54)[1] = auVar79[1] | auVar78[1];
                  (*pauVar54)[2] = auVar79[2] | auVar78[2];
                  (*pauVar54)[3] = auVar79[3] | auVar78[3];
                  (*pauVar54)[4] = auVar79[4] | auVar78[4];
                  (*pauVar54)[5] = auVar79[5] | auVar78[5];
                  (*pauVar54)[6] = auVar79[6] | auVar78[6];
                  (*pauVar54)[7] = auVar79[7] | auVar78[7];
                  pauVar54 = pauVar54 + 2;
                } while (uVar58 != 0);
                if (uVar65 != uVar64) goto LAB_001360fc;
              }
              uVar62 = uVar62 >> (uVar46 & 0x3f);
              if (uVar62 != 0) {
                if (0x3d < uVar49) goto LAB_00136154;
                uVar59 = (ulong)(uVar49 + 1);
                (&local_470)[uVar64] = uVar62;
                local_280 = CONCAT62(local_280._2_6_,(short)(uVar49 + 1));
              }
            }
            if (((0x3f < uVar48) && ((int)uVar59 != 0)) &&
               (uVar50 = (ulong)(uVar48 >> 6), uVar50 + uVar59 < 0x3f)) {
              __s = &local_470;
              __dest = __s + uVar50;
              __src = &local_470;
              goto LAB_00135fe8;
            }
          }
        }
        else {
          uVar50 = (ulong)uVar48 & 0x3f;
          if ((uVar48 & 0x3f) != 0) {
            uVar33 = (ushort)local_80;
            uVar46 = local_80 & 0xffff;
            if ((ushort)local_80 != 0) {
              uVar58 = 0x40 - uVar50;
              if ((ushort)local_80 < 4) {
                uVar62 = 0;
                uVar65 = 0;
LAB_00135f60:
                lVar55 = uVar46 - uVar65;
                puVar41 = &local_270 + uVar65;
                uVar64 = uVar62;
                do {
                  uVar62 = *puVar41;
                  lVar55 = lVar55 + -1;
                  *puVar41 = uVar62 << uVar50 | uVar64 >> (uVar58 & 0x3f);
                  puVar41 = puVar41 + 1;
                  uVar64 = uVar62;
                } while (lVar55 != 0);
              }
              else {
                auVar71._8_8_ = uVar58;
                auVar71._0_8_ = uVar58;
                uVar67 = 0;
                uVar68 = 0;
                uVar62 = 0;
                uVar65 = local_80 & 0xfffc;
                pauVar54 = (undefined1 (*) [16])&uStack_260;
                auVar70 = NEON_neg(auVar71,8);
                uVar64 = uVar65;
                do {
                  auVar76._4_4_ = uVar68;
                  auVar76._0_4_ = uVar67;
                  auVar76._8_8_ = uVar62;
                  auVar73 = pauVar54[-1];
                  uVar62 = *(ulong *)(*pauVar54 + 8);
                  uVar67 = (undefined4)*(undefined8 *)*pauVar54;
                  uVar68 = (undefined4)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
                  uVar64 = uVar64 - 4;
                  auVar75 = NEON_ext(auVar76,auVar73,8,1);
                  auVar78 = NEON_ext(auVar73,*pauVar54,8,1);
                  auVar29._8_8_ = uVar50;
                  auVar29._0_8_ = uVar50;
                  auVar73 = NEON_ushl(auVar73,auVar29,8);
                  auVar30._8_8_ = uVar50;
                  auVar30._0_8_ = uVar50;
                  auVar79 = NEON_ushl(*pauVar54,auVar30,8);
                  auVar75 = NEON_ushl(auVar75,auVar70,8);
                  auVar78 = NEON_ushl(auVar78,auVar70,8);
                  (*pauVar54)[0] = auVar73[8] | auVar75[8];
                  (*pauVar54)[1] = auVar73[9] | auVar75[9];
                  (*pauVar54)[2] = auVar73[10] | auVar75[10];
                  (*pauVar54)[3] = auVar73[0xb] | auVar75[0xb];
                  (*pauVar54)[4] = auVar73[0xc] | auVar75[0xc];
                  (*pauVar54)[5] = auVar73[0xd] | auVar75[0xd];
                  (*pauVar54)[6] = auVar73[0xe] | auVar75[0xe];
                  (*pauVar54)[7] = auVar73[0xf] | auVar75[0xf];
                  pauVar54[-1][0] = auVar73[0] | auVar75[0];
                  pauVar54[-1][1] = auVar73[1] | auVar75[1];
                  pauVar54[-1][2] = auVar73[2] | auVar75[2];
                  pauVar54[-1][3] = auVar73[3] | auVar75[3];
                  pauVar54[-1][4] = auVar73[4] | auVar75[4];
                  pauVar54[-1][5] = auVar73[5] | auVar75[5];
                  pauVar54[-1][6] = auVar73[6] | auVar75[6];
                  pauVar54[-1][7] = auVar73[7] | auVar75[7];
                  pauVar54[1][0] = auVar79[8] | auVar78[8];
                  pauVar54[1][1] = auVar79[9] | auVar78[9];
                  pauVar54[1][2] = auVar79[10] | auVar78[10];
                  pauVar54[1][3] = auVar79[0xb] | auVar78[0xb];
                  pauVar54[1][4] = auVar79[0xc] | auVar78[0xc];
                  pauVar54[1][5] = auVar79[0xd] | auVar78[0xd];
                  pauVar54[1][6] = auVar79[0xe] | auVar78[0xe];
                  pauVar54[1][7] = auVar79[0xf] | auVar78[0xf];
                  (*pauVar54)[0] = auVar79[0] | auVar78[0];
                  (*pauVar54)[1] = auVar79[1] | auVar78[1];
                  (*pauVar54)[2] = auVar79[2] | auVar78[2];
                  (*pauVar54)[3] = auVar79[3] | auVar78[3];
                  (*pauVar54)[4] = auVar79[4] | auVar78[4];
                  (*pauVar54)[5] = auVar79[5] | auVar78[5];
                  (*pauVar54)[6] = auVar79[6] | auVar78[6];
                  (*pauVar54)[7] = auVar79[7] | auVar78[7];
                  pauVar54 = pauVar54 + 2;
                } while (uVar64 != 0);
                if (uVar65 != uVar46) goto LAB_00135f60;
              }
              uVar62 = uVar62 >> (uVar58 & 0x3f);
              if (uVar62 != 0) {
                if (0x3d < uVar33) goto LAB_00136154;
                (&local_270)[uVar46] = uVar62;
                local_80 = CONCAT62(local_80._2_6_,uVar33 + 1);
              }
            }
          }
          if (((0x3f < uVar48) && (uVar46 = local_80 & 0xffff, uVar46 != 0)) &&
             (uVar50 = (ulong)(uVar48 >> 6), uVar50 + uVar46 < 0x3f)) {
            __s = &local_270;
            __dest = __s + uVar50;
            __src = &local_270;
            uVar59 = uVar46;
LAB_00135fe8:
            memmove(__dest,__src,uVar59 << 3);
            memset(__s,0,uVar50 << 3);
            *(short *)(__s + 0x3e) = *(short *)(__s + 0x3e) + (short)uVar50;
            uVar59 = local_280 & 0xffff;
          }
        }
LAB_00136154:
        uVar49 = (uint)(ushort)local_80;
        uVar48 = (uint)uVar59;
        if (uVar49 <= uVar48 && uVar48 != uVar49) {
          uVar49 = 0;
          lVar55 = 1;
        }
        else if (uVar49 <= uVar48) {
          lVar55 = uVar59 << 3;
          do {
            uVar49 = (uint)(lVar55 == 0);
            if (lVar55 == 0) goto LAB_001361e0;
            puVar41 = (ulong *)((long)&local_478 + lVar55);
            puVar2 = (ulong *)((long)&uStack_278 + lVar55);
            if (*puVar2 < *puVar41) {
              lVar55 = 1;
              goto LAB_001361e0;
            }
            lVar55 = lVar55 + -8;
          } while (*puVar2 <= *puVar41);
          lVar55 = 0;
        }
        else {
          lVar55 = 0;
          uVar49 = 0;
        }
LAB_001361e0:
        iVar47 = (int)local_478;
        if (iVar47 == -0x28 || iVar47 + 0x28 < 0 != SCARRY4(iVar47,0x28)) {
          uVar8 = 1 - iVar47;
          uVar48 = uVar8;
          if (0x3f < (int)uVar8) {
            uVar48 = 0;
          }
          uVar50 = 0;
          if ((int)uVar8 < 0x40) {
            uVar50 = local_480 >> ((ulong)uVar48 & 0x3f);
          }
          uVar50 = uVar50 + ((uint)lVar55 | (uint)uVar50 & uVar49);
          uVar49 = (uint)((uVar50 & 0xffffffffff800000) != 0);
        }
        else {
          uVar59 = (local_480 >> 0x28) + (ulong)((uint)lVar55 | (uint)(local_480 >> 0x28) & uVar49);
          uVar50 = uVar59 & 0xffffffffff7fffff;
          bVar35 = uVar59 >> 0x18 != 0;
          iVar43 = 0x28;
          if (bVar35) {
            iVar43 = 0x29;
          }
          uVar49 = iVar43 + iVar47;
          if (bVar35 || 0xfe < uVar49) {
            uVar50 = 0;
          }
          if (0xfe < (int)uVar49) {
            uVar49 = 0xff;
          }
        }
      }
      else {
        uVar59 = FUN_001364e8(&local_470,(ulong)uVar49);
        if ((uVar59 & 1) != 0) {
          uVar59 = (ulong)uVar49 & 0x3f;
          if ((uVar49 & 0x3f) != 0) {
            uVar33 = (ushort)local_280;
            uVar50 = local_280 & 0xffff;
            if ((ushort)local_280 != 0) {
              uVar46 = 0x40 - uVar59;
              if ((ushort)local_280 < 4) {
                uVar64 = 0;
                uVar62 = 0;
LAB_00135d60:
                lVar55 = uVar50 - uVar62;
                puVar41 = &local_470 + uVar62;
                uVar58 = uVar64;
                do {
                  uVar64 = *puVar41;
                  lVar55 = lVar55 + -1;
                  *puVar41 = uVar64 << uVar59 | uVar58 >> (uVar46 & 0x3f);
                  puVar41 = puVar41 + 1;
                  uVar58 = uVar64;
                } while (lVar55 != 0);
              }
              else {
                auVar69._8_8_ = uVar46;
                auVar69._0_8_ = uVar46;
                uVar67 = 0;
                uVar68 = 0;
                uVar64 = 0;
                uVar62 = local_280 & 0xfffc;
                pauVar54 = (undefined1 (*) [16])&uStack_460;
                auVar70 = NEON_neg(auVar69,8);
                uVar58 = uVar62;
                do {
                  auVar74._4_4_ = uVar68;
                  auVar74._0_4_ = uVar67;
                  auVar74._8_8_ = uVar64;
                  auVar73 = pauVar54[-1];
                  uVar64 = *(ulong *)(*pauVar54 + 8);
                  uVar67 = (undefined4)*(undefined8 *)*pauVar54;
                  uVar68 = (undefined4)((ulong)*(undefined8 *)*pauVar54 >> 0x20);
                  uVar58 = uVar58 - 4;
                  auVar75 = NEON_ext(auVar74,auVar73,8,1);
                  auVar78 = NEON_ext(auVar73,*pauVar54,8,1);
                  auVar27._8_8_ = uVar59;
                  auVar27._0_8_ = uVar59;
                  auVar73 = NEON_ushl(auVar73,auVar27,8);
                  auVar28._8_8_ = uVar59;
                  auVar28._0_8_ = uVar59;
                  auVar79 = NEON_ushl(*pauVar54,auVar28,8);
                  auVar75 = NEON_ushl(auVar75,auVar70,8);
                  auVar78 = NEON_ushl(auVar78,auVar70,8);
                  (*pauVar54)[0] = auVar73[8] | auVar75[8];
                  (*pauVar54)[1] = auVar73[9] | auVar75[9];
                  (*pauVar54)[2] = auVar73[10] | auVar75[10];
                  (*pauVar54)[3] = auVar73[0xb] | auVar75[0xb];
                  (*pauVar54)[4] = auVar73[0xc] | auVar75[0xc];
                  (*pauVar54)[5] = auVar73[0xd] | auVar75[0xd];
                  (*pauVar54)[6] = auVar73[0xe] | auVar75[0xe];
                  (*pauVar54)[7] = auVar73[0xf] | auVar75[0xf];
                  pauVar54[-1][0] = auVar73[0] | auVar75[0];
                  pauVar54[-1][1] = auVar73[1] | auVar75[1];
                  pauVar54[-1][2] = auVar73[2] | auVar75[2];
                  pauVar54[-1][3] = auVar73[3] | auVar75[3];
                  pauVar54[-1][4] = auVar73[4] | auVar75[4];
                  pauVar54[-1][5] = auVar73[5] | auVar75[5];
                  pauVar54[-1][6] = auVar73[6] | auVar75[6];
                  pauVar54[-1][7] = auVar73[7] | auVar75[7];
                  pauVar54[1][0] = auVar79[8] | auVar78[8];
                  pauVar54[1][1] = auVar79[9] | auVar78[9];
                  pauVar54[1][2] = auVar79[10] | auVar78[10];
                  pauVar54[1][3] = auVar79[0xb] | auVar78[0xb];
                  pauVar54[1][4] = auVar79[0xc] | auVar78[0xc];
                  pauVar54[1][5] = auVar79[0xd] | auVar78[0xd];
                  pauVar54[1][6] = auVar79[0xe] | auVar78[0xe];
                  pauVar54[1][7] = auVar79[0xf] | auVar78[0xf];
                  (*pauVar54)[0] = auVar79[0] | auVar78[0];
                  (*pauVar54)[1] = auVar79[1] | auVar78[1];
                  (*pauVar54)[2] = auVar79[2] | auVar78[2];
                  (*pauVar54)[3] = auVar79[3] | auVar78[3];
                  (*pauVar54)[4] = auVar79[4] | auVar78[4];
                  (*pauVar54)[5] = auVar79[5] | auVar78[5];
                  (*pauVar54)[6] = auVar79[6] | auVar78[6];
                  (*pauVar54)[7] = auVar79[7] | auVar78[7];
                  pauVar54 = pauVar54 + 2;
                } while (uVar58 != 0);
                if (uVar62 != uVar50) goto LAB_00135d60;
              }
              uVar64 = uVar64 >> (uVar46 & 0x3f);
              if (uVar64 != 0) {
                if (0x3d < uVar33) goto LAB_00135e0c;
                (&local_470)[uVar50] = uVar64;
                local_280 = CONCAT62(local_280._2_6_,uVar33 + 1);
              }
            }
          }
          if (((0x3f < uVar49) && (uVar59 = local_280 & 0xffff, uVar59 != 0)) &&
             (uVar50 = (ulong)(uVar49 >> 6), uVar50 + uVar59 < 0x3f)) {
            memmove(&local_470 + uVar50,&local_470,uVar59 << 3);
            memset(&local_470,0,uVar50 * 8);
            local_280 = CONCAT62(local_280._2_6_,(ushort)local_280 + (short)(uVar49 >> 6));
          }
        }
LAB_00135e0c:
        uVar59 = local_280 & 0xffff;
        if ((ushort)local_280 == 0) {
          uVar48 = 0;
          uVar49 = 0;
          uVar50 = uVar59;
LAB_00135eac:
          uVar8 = 0;
          if (uVar50 == 0x8000000000) {
            uVar8 = uVar48 | (uint)(uVar59 >> 0x28) & 1;
          }
          uVar50 = (ulong)uVar8;
        }
        else {
          if ((ushort)local_280 == 1) {
            uVar48 = 0;
            uVar50 = LZCOUNT((&local_478)[uVar59]);
            uVar49 = (uint)uVar50;
            uVar46 = (long)(&local_478)[uVar59] << (uVar50 & 0x3f);
          }
          else {
            uVar50 = LZCOUNT((&local_478)[uVar59]);
            uVar49 = (uint)uVar50;
            lVar55 = (&local_480)[uVar59] << (uVar50 & 0x3f);
            uVar46 = (long)(&local_478)[uVar59] << (uVar50 & 0x3f) |
                     ((&local_480)[uVar59] >> 1) >> ((ulong)~uVar49 & 0x3f);
            if (((ushort)local_280 < 3) || ((&local_488)[uVar59] != (ulong *)0x0)) {
              uVar48 = (uint)(2 < (ushort)local_280 || lVar55 != 0);
            }
            else {
              lVar56 = uVar59 << 3;
              uVar50 = 2;
              do {
                uVar58 = uVar59;
                if (lVar56 == 0x18) break;
                plVar1 = (long *)((long)&lStack_490 + lVar56);
                lVar56 = lVar56 + -8;
                uVar58 = uVar50 + 1;
                uVar50 = uVar58;
              } while (*plVar1 == 0);
              uVar48 = (uint)(lVar55 != 0 || uVar58 < uVar59);
            }
          }
          uVar59 = uVar46;
          uVar50 = uVar46 & 0xffffffffff;
          if ((uVar46 & 0xffffffffff) < 0x8000000001) goto LAB_00135eac;
          uVar50 = 1;
        }
        uVar50 = uVar50 + (uVar59 >> 0x28);
        uVar59 = uVar50 >> 0x18;
        uVar50 = uVar50 & 0xffffffffff7fffff;
        iVar47 = 0x7e;
        if (uVar59 != 0) {
          iVar47 = 0x7f;
        }
        uVar49 = (iVar47 - uVar49) + (uint)(ushort)local_280 * 0x40;
        if (uVar59 != 0 || 0xfe < uVar49) {
          uVar50 = 0;
        }
        if (0xfe < uVar49) {
          uVar49 = 0xff;
        }
      }
      uVar46 = (ulong)uVar49;
    }
    param_2 = (float)((uint)uVar50 | (uint)(bVar5 == 0x2d) << 0x1f | (int)uVar46 << 0x17);
  }
LAB_00136274:
  uStack_264 = 0;
  uStack_260._0_4_ = 0;
  local_270._4_4_ = 0;
  uStack_268 = 0;
  pbVar38 = pbVar38 + (param_3[2] - (long)pbVar3);
  uStack_464 = 0;
  uStack_460._0_4_ = 0;
  local_470._4_4_ = 0;
  uStack_468 = 0;
  pbVar57 = pbVar4;
  if (pbVar38 <= pbVar4) {
    pbVar57 = pbVar38;
  }
  pbVar3 = pbVar3 + (long)pbVar57;
  uVar59 = (long)pbVar4 - (long)pbVar57;
  *param_3 = (long)pbVar3;
  param_3[1] = uVar59;
  param_3[2] = 0;
  if (pbVar38 < pbVar4) {
    bVar5 = *pbVar3;
    uVar49 = (uint)bVar5;
    if ((bVar5 - 0x61 < 0x1a) || (0x80 < bVar5)) goto LAB_0013633c;
  }
  else {
    uVar49 = 0;
  }
  if ((uVar49 != 0x5f) && (((0x19 < uVar49 - 0x41 && (uVar49 != 0x2d)) && (9 < uVar49 - 0x30)))) {
    if ((pbVar38 < pbVar4) && (*pbVar3 == 0x25)) {
      param_3[2] = 0;
      *param_3 = (long)(pbVar3 + 1);
      param_3[1] = uVar59 - 1;
      *param_1 = 0xd;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      param_1[6] = param_2;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
    }
    else {
      *param_1 = 9;
      *(undefined8 *)(param_1 + 3) = 0;
      *(ulong *)(param_1 + 1) = (ulong)(uint)local_270;
      param_1[5] = 0;
      param_1[6] = param_2;
      *(undefined8 *)(param_1 + 9) = 0;
      *(ulong *)(param_1 + 7) = (ulong)(uint)local_470;
      param_1[0xb] = 0;
    }
LAB_001363d0:
    if (*(long *)(lVar26 + 0x28) == local_78) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0013633c:
  uVar50 = 0;
  do {
    if (uVar50 < uVar59) {
      bVar5 = pbVar3[uVar50];
      uVar49 = (uint)bVar5;
      if ((0x19 < bVar5 - 0x61) && (bVar5 < 0x81)) goto LAB_0013637c;
    }
    else {
      uVar49 = 0;
LAB_0013637c:
      if ((uVar49 != 0x5f) && (((0x19 < uVar49 - 0x41 && (uVar49 != 0x2d)) && (9 < uVar49 - 0x30))))
      goto code_r0x001363a4;
    }
    uVar50 = uVar50 + 1;
    param_3[2] = uVar50;
  } while( true );
code_r0x001353ac:
  uVar48 = (uint)uVar64;
  uVar63 = uVar64;
  if (uVar48 == 0) {
    if (uVar60 != 0) {
      uVar63 = 0;
LAB_00135278:
      uVar48 = (int)uVar64 + 1;
      uVar62 = (ulong)uVar48;
      local_470 = uVar59;
      (&local_470)[uVar63] = uVar60;
      local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
      uVar63 = uVar62;
      uVar59 = local_470;
    }
  }
  else {
    uVar65 = *(ulong *)(&UNK_001146f0 + uVar65 * 8);
    lVar55 = 0;
    uVar59 = 0;
    do {
      uVar51 = *(ulong *)((long)&local_470 + lVar55);
      uVar40 = uVar51 * uVar65;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar65;
      uVar51 = SUB168(auVar12 * auVar22,8);
      *(ulong *)((long)&local_470 + lVar55) = uVar40 + uVar59;
      lVar55 = lVar55 + 8;
      if (CARRY8(uVar40,uVar59)) {
        uVar51 = uVar51 + 1;
      }
      uVar59 = uVar51;
    } while (uVar64 * 8 - lVar55 != 0);
    if ((uVar48 < 0x3e) && (uVar51 != 0)) {
      uVar63 = (ulong)(uVar48 + 1);
      (&local_470)[uVar64] = uVar51;
      local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
      uVar62 = uVar63;
    }
    uVar59 = local_470;
    if (uVar60 != 0) {
      bVar35 = CARRY8(local_470,uVar60);
      uVar59 = local_470 + uVar60;
      local_470._0_4_ = (uint)uVar59;
      local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
      puVar41 = local_488;
      uVar64 = uVar63;
      if (bVar35) {
        do {
          if (uVar64 - 1 == 0) {
            if ((uint)uVar63 < 0x3e) {
              uVar60 = 1;
              uVar64 = uVar63;
              goto LAB_00135278;
            }
            break;
          }
          uVar65 = *puVar41;
          *puVar41 = uVar65 + 1;
          puVar41 = puVar41 + 1;
          uVar64 = uVar64 - 1;
        } while (0xfffffffffffffffe < uVar65);
      }
    }
  }
  uVar64 = uVar63;
  if (pbVar53 == pbVar42) goto LAB_00135464;
  goto LAB_00135290;
LAB_001358b4:
  if (pbVar44 != (byte *)0x0) {
    bVar35 = true;
joined_r0x001358c8:
    do {
      if ((long)pbVar52 < 8) goto LAB_001358f4;
      if (*(long *)pbVar57 != 0x3030303030303030) break;
      pbVar57 = pbVar57 + 8;
      pbVar52 = pbVar52 + -8;
    } while( true );
  }
  goto LAB_00135920;
LAB_001358f4:
  for (; pbVar57 != pbVar44 + (long)pbVar61; pbVar57 = pbVar57 + 1) {
    if (*pbVar57 != 0x30) goto LAB_00135920;
  }
  if (!bVar35) goto LAB_001359c8;
LAB_00135920:
  uVar48 = (uint)uVar58;
  if (uVar48 == 0) goto LAB_00135ae4;
  lVar55 = 0;
  uVar62 = 0;
  local_470 = uVar59;
  do {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulong *)((long)&local_470 + lVar55);
    uVar65 = SUB168(auVar16 * ZEXT816(10),8);
    uVar59 = *(ulong *)((long)&local_470 + lVar55) * 10;
    *(ulong *)((long)&local_470 + lVar55) = uVar62 + uVar59;
    lVar55 = lVar55 + 8;
    if (CARRY8(uVar62,uVar59)) {
      uVar65 = uVar65 + 1;
    }
    uVar62 = uVar65;
  } while (uVar58 * 8 - lVar55 != 0);
  if ((uVar48 < 0x3e) && (uVar65 != 0)) {
    uVar64 = (ulong)(uVar48 + 1);
    (&local_470)[uVar58] = uVar65;
    local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
  }
  bVar35 = local_470 == 0xffffffffffffffff;
  uVar59 = local_470 + 1;
  local_470._0_4_ = (uint)uVar59;
  local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
  if (bVar35) {
    uVar58 = 0x73;
    uVar62 = 1;
    while (uVar64 != uVar62) {
      lVar55 = (&local_470)[uVar62];
      (&local_470)[uVar62] = lVar55 + 1;
      uVar62 = uVar62 + 1;
      if (lVar55 != -1) goto LAB_00135b00;
    }
    goto LAB_00136058;
  }
  goto LAB_00135afc;
code_r0x001355e8:
  uVar48 = (uint)uVar65;
  uVar64 = uVar65;
  if (uVar48 == 0) {
    if (uVar63 != 0) {
      uVar64 = 0;
LAB_001354b4:
      uVar48 = (int)uVar65 + 1;
      uVar62 = (ulong)uVar48;
      local_470 = uVar59;
      (&local_470)[uVar64] = uVar63;
      local_280 = CONCAT62(local_280._2_6_,(short)uVar48);
      uVar64 = uVar62;
      uVar59 = local_470;
    }
  }
  else {
    uVar60 = *(ulong *)(&UNK_001146f0 + uVar60 * 8);
    lVar55 = 0;
    uVar59 = 0;
    do {
      uVar51 = *(ulong *)((long)&local_470 + lVar55);
      uVar40 = uVar51 * uVar60;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar51;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar60;
      uVar51 = SUB168(auVar13 * auVar23,8);
      *(ulong *)((long)&local_470 + lVar55) = uVar40 + uVar59;
      lVar55 = lVar55 + 8;
      if (CARRY8(uVar40,uVar59)) {
        uVar51 = uVar51 + 1;
      }
      uVar59 = uVar51;
    } while (uVar65 * 8 - lVar55 != 0);
    if ((uVar48 < 0x3e) && (uVar51 != 0)) {
      uVar64 = (ulong)(uVar48 + 1);
      (&local_470)[uVar65] = uVar51;
      local_280 = CONCAT62(local_280._2_6_,(short)(uVar48 + 1));
      uVar62 = uVar64;
    }
    uVar59 = local_470;
    if (uVar63 != 0) {
      bVar35 = CARRY8(local_470,uVar63);
      uVar59 = local_470 + uVar63;
      local_470._0_4_ = (uint)uVar59;
      local_470._4_4_ = (undefined4)(uVar59 >> 0x20);
      puVar41 = (ulong *)((ulong)&local_470 | 8);
      uVar65 = uVar64;
      if (bVar35) {
        do {
          if (uVar65 - 1 == 0) {
            if ((uint)uVar64 < 0x3e) {
              uVar63 = 1;
              uVar65 = uVar64;
              goto LAB_001354b4;
            }
            break;
          }
          uVar60 = *puVar41;
          *puVar41 = uVar60 + 1;
          puVar41 = puVar41 + 1;
          uVar65 = uVar65 - 1;
        } while (0xfffffffffffffffe < uVar60);
      }
    }
  }
  uVar65 = uVar64;
  uVar64 = uVar62;
  if (pbVar44 == pbVar52) goto LAB_00135b00;
  goto LAB_001354cc;
code_r0x001363a4:
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar46 = uVar59;
  if (uVar50 <= uVar59) {
    uVar46 = uVar50;
  }
  *param_1 = 5;
  param_1[6] = param_2;
  *param_3 = (long)(pbVar3 + uVar46);
  param_3[1] = uVar59 - uVar46;
  param_3[2] = 0;
  *(byte **)(param_1 + 8) = pbVar3;
  *(ulong *)(param_1 + 10) = uVar46;
  goto LAB_001363d0;
}


// ===== 00136468  FUN_00136468 =====

void FUN_00136468(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00136484 to 0013648b has its CatchHandler @ 001364a4 */
  FUN_001364b8(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00144f38,PTR__out_of_range_00144ed8);
}


// ===== 001364b8  FUN_001364b8 =====

void FUN_001364b8(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_00144f40 + 0x10;
  return;
}


// ===== 001364e8  FUN_001364e8 =====

void FUN_001364e8(ulong *param_1,uint param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  size_t __n;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong local_460 [62];
  ushort local_270;
  undefined1 auStack_268 [496];
  ushort local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  if (0x86 < param_2) {
    uVar28 = (ulong)(ushort)param_1[0x3e];
    puVar22 = PTR_large_power_of_5_00144e38;
    do {
      uVar12 = (uint)uVar28;
      uVar27 = 0;
      uVar23 = uVar28 & 0xffff;
      local_78 = 0;
      if ((uVar12 & 0xffff) < 0x3f) {
        if ((uVar28 & 0xffff) != 0) {
          memcpy(auStack_268,param_1,uVar23 << 3);
          uVar27 = (ulong)(local_78 + uVar12);
          local_78 = (ushort)(local_78 + uVar12);
          puVar22 = PTR_large_power_of_5_00144e38;
          goto LAB_00136590;
        }
        uVar28 = 0;
        uVar27 = 0;
      }
      else {
LAB_00136590:
        uVar24 = 0;
        puVar13 = param_1;
        uVar26 = uVar23;
        do {
          uVar18 = *puVar13 * 0x13a1d71cff1b172d;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = *puVar13;
          uVar17 = SUB168(auVar2 * ZEXT816(0x13a1d71cff1b172d),8);
          *puVar13 = uVar18 + uVar24;
          if (CARRY8(uVar18,uVar24)) {
            uVar17 = uVar17 + 1;
          }
          uVar26 = uVar26 - 1;
          uVar24 = uVar17;
          puVar13 = puVar13 + 1;
        } while (uVar26 != 0);
        if (uVar17 != 0) {
          if (0x3d < (uVar12 & 0xffff)) goto LAB_00136890;
          uVar28 = (ulong)(uVar12 + 1);
          param_1[uVar23] = uVar17;
          *(short *)(param_1 + 0x3e) = (short)(uVar12 + 1);
        }
      }
      lVar25 = -1;
      uVar23 = 1;
      uVar26 = uVar28 & 0xffffffff;
      puVar13 = param_1 + 1;
      do {
        uVar24 = *(ulong *)(puVar22 + uVar23 * 8);
        if (uVar24 != 0) {
          local_270 = 0;
          if (0x3e < ((uint)uVar27 & 0xffff)) goto LAB_00136890;
          if ((uVar27 & 0xffff) == 0) {
            uVar12 = 0;
          }
          else {
            memcpy(local_460,auStack_268,(uVar27 & 0x1fff) << 3);
            uVar12 = (uint)local_270;
            puVar22 = PTR_large_power_of_5_00144e38;
          }
          uVar12 = uVar12 + (uint)uVar27;
          uVar17 = (ulong)uVar12;
          if ((uVar12 & 0xffff) == 0) {
            uVar17 = 0;
          }
          else {
            uVar15 = uVar17 & 0xffff;
            uVar20 = 0;
            puVar14 = local_460;
            uVar18 = uVar15;
            do {
              uVar21 = *puVar14 * uVar24;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = *puVar14;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar24;
              uVar19 = SUB168(auVar3 * auVar6,8);
              *puVar14 = uVar21 + uVar20;
              if (CARRY8(uVar21,uVar20)) {
                uVar19 = uVar19 + 1;
              }
              uVar18 = uVar18 - 1;
              uVar20 = uVar19;
              puVar14 = puVar14 + 1;
            } while (uVar18 != 0);
            if (uVar19 != 0) {
              if (0x3d < (uVar12 & 0xffff)) goto LAB_00136890;
              uVar17 = (ulong)(uVar12 + 1);
              local_460[uVar15] = uVar19;
            }
          }
          uVar24 = uVar26 & 0xffff;
          uVar17 = uVar17 & 0xffff;
          if ((uVar24 < uVar23) || (uVar24 - uVar23 < uVar17)) {
            uVar28 = uVar23 + uVar17;
            if (0x3e < uVar28) goto LAB_00136890;
            if (uVar24 < uVar28) {
              __n = (long)param_1 + (uVar28 * 8 - (long)(param_1 + uVar24));
              if (0 < (long)__n) {
                memset(param_1 + uVar24,0,__n);
                puVar22 = PTR_large_power_of_5_00144e38;
              }
            }
            uVar26 = uVar28 & 0xffffffff;
            *(short *)(param_1 + 0x3e) = (short)uVar28;
          }
          if ((int)uVar17 != 0) {
            puVar14 = local_460;
            puVar16 = puVar13;
            uVar24 = uVar17;
            bVar9 = false;
            do {
              uVar18 = *puVar16;
              uVar20 = *puVar14;
              bVar10 = (bool)(bVar9 & 0xfffffffffffffffe < uVar18 + uVar20);
              if (CARRY8(uVar18,uVar20)) {
                bVar10 = true;
              }
              uVar15 = uVar18 + uVar20 + 1;
              if (!bVar9) {
                uVar15 = uVar18 + uVar20;
              }
              uVar24 = uVar24 - 1;
              *puVar16 = uVar15;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
              bVar9 = bVar10;
            } while (uVar24 != 0);
            if (bVar10) {
              uVar18 = uVar26 & 0xffff;
              uVar24 = uVar23 + uVar17;
              if (uVar23 + uVar17 <= uVar18) {
                uVar24 = uVar18;
              }
              do {
                if (uVar24 + lVar25 == uVar17) {
                  if (0x3d < ((uint)uVar26 & 0xffff)) goto LAB_00136890;
                  uVar12 = (uint)uVar26 + 1;
                  uVar26 = (ulong)uVar12;
                  param_1[uVar18] = 1;
                  *(short *)(param_1 + 0x3e) = (short)uVar12;
                  uVar28 = uVar26;
                  break;
                }
                uVar20 = puVar13[uVar17];
                puVar13[uVar17] = uVar20 + 1;
                uVar17 = uVar17 + 1;
              } while (0xfffffffffffffffe < uVar20);
            }
          }
        }
        uVar23 = uVar23 + 1;
        puVar13 = puVar13 + 1;
        lVar25 = lVar25 + -1;
      } while (uVar23 != 5);
      if (((uVar26 & 0xffff) != 0) && (param_1[(uVar26 & 0xffff) - 1] == 0)) {
        do {
          uVar12 = (int)uVar26 - 1;
          uVar26 = (ulong)uVar12;
          if ((uVar12 & 0xffff) == 0) {
            uVar28 = 0;
            goto LAB_00136804;
          }
        } while (param_1[(ulong)(ushort)uVar12 - 1] == 0);
        uVar28 = (ulong)uVar12;
LAB_00136804:
        *(ushort *)(param_1 + 0x3e) = (ushort)uVar12;
      }
      param_2 = param_2 - 0x87;
    } while (0x86 < param_2);
  }
  if (0x1a < param_2) {
    uVar28 = (ulong)(ushort)param_1[0x3e];
    do {
      if (uVar28 != 0) {
        uVar27 = 0;
        puVar13 = param_1;
        uVar23 = uVar28;
        do {
          uVar24 = *puVar13 * 0x6765c793fa10079d;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = *puVar13;
          uVar26 = SUB168(auVar4 * ZEXT816(0x6765c793fa10079d),8);
          *puVar13 = uVar24 + uVar27;
          if (CARRY8(uVar24,uVar27)) {
            uVar26 = uVar26 + 1;
          }
          uVar23 = uVar23 - 1;
          uVar27 = uVar26;
          puVar13 = puVar13 + 1;
        } while (uVar23 != 0);
        if (uVar26 != 0) {
          if (0x3d < uVar28) goto LAB_00136890;
          param_1[uVar28] = uVar26;
          uVar28 = uVar28 + 1;
          *(short *)(param_1 + 0x3e) = (short)uVar28;
        }
      }
      param_2 = param_2 - 0x1b;
    } while (0x1a < param_2);
  }
  if (param_2 != 0) {
    uVar1 = (ushort)param_1[0x3e];
    if (uVar1 != 0) {
      uVar27 = *(ulong *)(&DAT_001147b8 + (ulong)param_2 * 8);
      uVar23 = 0;
      puVar13 = param_1;
      uVar28 = (ulong)uVar1;
      do {
        uVar24 = *puVar13 * uVar27;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *puVar13;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar27;
        uVar26 = SUB168(auVar5 * auVar7,8);
        *puVar13 = uVar24 + uVar23;
        if (CARRY8(uVar24,uVar23)) {
          uVar26 = uVar26 + 1;
        }
        uVar28 = uVar28 - 1;
        uVar23 = uVar26;
        puVar13 = puVar13 + 1;
      } while (uVar28 != 0);
      if (uVar26 != 0) {
        if (0x3d < uVar1) {
LAB_00136890:
          uVar11 = 0;
          goto LAB_001368f8;
        }
        param_1[uVar1] = uVar26;
        *(ushort *)(param_1 + 0x3e) = uVar1 + 1;
      }
    }
  }
  uVar11 = 1;
LAB_001368f8:
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
}


// ===== 0013692c  FUN_0013692c =====

void FUN_0013692c(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  int *piVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 != 6) {
    piVar3 = (int *)(param_1 + 0x18);
    bVar2 = *piVar3 == 0xe;
    if (bVar2) {
      FUN_00134314(&local_78,param_1);
      *(undefined8 *)(param_1 + 0x20) = uStack_70;
      *(undefined8 *)piVar3 = local_78;
      *(undefined8 *)(param_1 + 0x30) = uStack_60;
      *(undefined8 *)(param_1 + 0x28) = local_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_50;
      *(undefined8 *)(param_1 + 0x38) = local_58;
    }
    if (param_2 < 3) {
      if (param_2 == 0) goto LAB_0013695c;
      if (param_2 == 1) goto LAB_00136958;
      bVar2 = false;
      if ((*(int *)(param_1 + 0x18) != 4) || (*(long *)(param_1 + 0x28) != 1)) goto LAB_0013695c;
      if (**(char **)(param_1 + 0x20) != '/') goto LAB_00136ab8;
    }
    else if (param_2 == 3) {
      if (((*(int *)(param_1 + 0x18) != 4) || (*(long *)(param_1 + 0x28) != 1)) ||
         (**(char **)(param_1 + 0x20) != '/')) goto LAB_0013695c;
    }
    else if (param_2 == 5) {
      if (*piVar3 != 3) goto LAB_0013695c;
    }
    else if (*piVar3 != 3) {
LAB_00136ab8:
      bVar2 = false;
      goto LAB_0013695c;
    }
    FUN_00134314(&local_78,param_1);
    *(undefined8 *)(param_1 + 0x20) = uStack_70;
    *(undefined8 *)piVar3 = local_78;
    *(undefined8 *)(param_1 + 0x30) = uStack_60;
    *(undefined8 *)(param_1 + 0x28) = local_68;
    *(undefined8 *)(param_1 + 0x40) = uStack_50;
    *(undefined8 *)(param_1 + 0x38) = local_58;
    if (*(int *)(param_1 + 0x18) == 0xe) {
      FUN_00134314(&local_78,param_1);
      *(undefined8 *)(param_1 + 0x20) = uStack_70;
      *(undefined8 *)piVar3 = local_78;
      *(undefined8 *)(param_1 + 0x30) = uStack_60;
      *(undefined8 *)(param_1 + 0x28) = local_68;
      *(undefined8 *)(param_1 + 0x40) = uStack_50;
      *(undefined8 *)(param_1 + 0x38) = local_58;
    }
  }
LAB_00136958:
  bVar2 = true;
LAB_0013695c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


// ===== 00136ac4  FUN_00136ac4 =====

ulong FUN_00136ac4(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)*param_1;
  uStack_78 = puVar3[5];
  local_80 = puVar3[4];
  uStack_70 = puVar3[6];
  uStack_58 = (undefined4)puVar3[9];
  uStack_54 = (undefined4)((ulong)puVar3[9] >> 0x20);
  local_60 = (undefined4)puVar3[8];
  uStack_5c = (undefined4)((ulong)puVar3[8] >> 0x20);
  uStack_68 = (undefined4)puVar3[7];
  uStack_64 = (undefined4)((ulong)puVar3[7] >> 0x20);
  uStack_98 = puVar3[1];
  local_a0 = *puVar3;
  uStack_88 = puVar3[3];
  uStack_90 = puVar3[2];
  uVar4 = FUN_0013692c();
  puVar3 = (undefined8 *)*param_1;
  if ((uVar4 & 1) != 0) {
    puVar7 = (uint *)(puVar3 + 3);
    uVar1 = *puVar7;
    if (uVar1 != *(uint *)(puVar3 + 9)) {
      if ((int)uVar1 < 0xb) {
        if ((uVar1 == 7) || (uVar1 == 10)) goto LAB_00136b7c;
LAB_00136bf0:
        uVar4 = (ulong)*(uint *)(puVar3 + 6);
        FUN_00134314(&local_d0);
        puVar3[4] = uStack_c8;
        *(undefined8 *)puVar7 = local_d0;
        puVar3[6] = uStack_b8;
        puVar3[5] = uStack_c0;
        puVar3[8] = uStack_a8;
        puVar3[7] = local_b0;
        if ((uVar1 | 4) == 0xd) {
          uVar6 = 0x100000000;
          if (uVar1 != 9) {
            uVar6 = (ulong)(uVar1 == 0xd) << 0x21;
          }
          goto LAB_00136c58;
        }
      }
      else {
        if ((uVar1 != 0xb) && (uVar1 != 0xc)) goto LAB_00136bf0;
LAB_00136b7c:
        FUN_00134314(&local_d0);
        puVar3[8] = uStack_a8;
        puVar3[7] = local_b0;
        puVar3[4] = uStack_c8;
        *(undefined8 *)puVar7 = local_d0;
        puVar3[6] = uStack_b8;
        puVar3[5] = uStack_c0;
        lVar5 = *param_1;
        if (*(int *)(lVar5 + 0x18) == 0xe) {
          FUN_00134314(&local_d0);
          *(undefined8 *)(lVar5 + 0x40) = uStack_a8;
          *(undefined8 *)(lVar5 + 0x38) = local_b0;
          *(undefined8 *)(lVar5 + 0x20) = uStack_c8;
          *(undefined8 *)(lVar5 + 0x18) = local_d0;
          *(undefined8 *)(lVar5 + 0x30) = uStack_b8;
          *(undefined8 *)(lVar5 + 0x28) = uStack_c0;
          lVar5 = *param_1;
          if (*(int *)(lVar5 + 0x18) == 0xe) {
            FUN_00134314(&local_d0);
            *(undefined8 *)(lVar5 + 0x40) = uStack_a8;
            *(undefined8 *)(lVar5 + 0x38) = local_b0;
            *(undefined8 *)(lVar5 + 0x20) = uStack_c8;
            *(undefined8 *)(lVar5 + 0x18) = local_d0;
            *(undefined8 *)(lVar5 + 0x30) = uStack_b8;
            *(undefined8 *)(lVar5 + 0x28) = uStack_c0;
          }
        }
      }
      uVar4 = 0;
      puVar3 = (undefined8 *)*param_1;
      puVar3[5] = uStack_78;
      puVar3[4] = local_80;
      puVar3[7] = CONCAT44(uStack_64,uStack_68);
      puVar3[6] = uStack_70;
      *(ulong *)((long)puVar3 + 0x44) = CONCAT44(uStack_58,uStack_5c);
      *(ulong *)((long)puVar3 + 0x3c) = CONCAT44(local_60,uStack_64);
      puVar3[1] = uStack_98;
      *puVar3 = local_a0;
      puVar3[3] = uStack_88;
      puVar3[2] = uStack_90;
      uVar6 = 0;
      goto LAB_00136c58;
    }
  }
  uVar4 = 0;
  puVar3[5] = uStack_78;
  puVar3[4] = local_80;
  puVar3[7] = CONCAT44(uStack_64,uStack_68);
  puVar3[6] = uStack_70;
  *(ulong *)((long)puVar3 + 0x44) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)((long)puVar3 + 0x3c) = CONCAT44(local_60,uStack_64);
  puVar3[1] = uStack_98;
  *puVar3 = local_a0;
  puVar3[3] = uStack_88;
  puVar3[2] = uStack_90;
  uVar6 = 0;
LAB_00136c58:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 | uVar4;
}


// ===== 00136c88  FUN_00136c88 =====

ulong FUN_00136c88(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  uStack_78 = puVar5[5];
  local_80 = puVar5[4];
  uStack_70 = puVar5[6];
  piVar6 = (int *)(puVar5 + 3);
  iVar3 = *piVar6;
  uStack_68 = (undefined4)puVar5[7];
  uStack_64 = (undefined4)((ulong)puVar5[7] >> 0x20);
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  uStack_88 = puVar5[3];
  uStack_90 = puVar5[2];
  uStack_58 = (undefined4)puVar5[9];
  uStack_54 = (undefined4)((ulong)puVar5[9] >> 0x20);
  local_60 = (undefined4)puVar5[8];
  uStack_5c = (undefined4)((ulong)puVar5[8] >> 0x20);
  if (iVar3 == 0xe) {
    FUN_00134314(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    iVar3 = *(int *)(puVar5 + 3);
  }
  if (iVar3 == 3) {
    FUN_00134314(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    if (*(int *)(puVar5 + 3) == 0xe) {
      FUN_00134314(&local_d0,puVar5);
      puVar5[8] = uStack_a8;
      puVar5[7] = local_b0;
      puVar5[4] = uStack_c8;
      *(undefined8 *)piVar6 = local_d0;
      puVar5[6] = uStack_b8;
      puVar5[5] = uStack_c0;
    }
    puVar5 = (undefined8 *)*param_1;
    piVar6 = (int *)(puVar5 + 3);
    iVar3 = *piVar6;
    if (iVar3 == *(int *)(puVar5 + 9)) {
      uVar7 = 0;
      uVar4 = 0;
      puVar5[5] = uStack_78;
      puVar5[4] = local_80;
      puVar5[7] = CONCAT44(uStack_64,uStack_68);
      puVar5[6] = uStack_70;
      *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
      *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
      puVar5[1] = uStack_98;
      *puVar5 = local_a0;
      puVar5[3] = uStack_88;
      puVar5[2] = uStack_90;
      goto LAB_00136e74;
    }
    if (iVar3 < 0xb) {
      if ((iVar3 == 7) || (iVar3 == 10)) {
LAB_00136db0:
        FUN_00134314(&local_d0);
        puVar5[8] = uStack_a8;
        puVar5[7] = local_b0;
        puVar5[4] = uStack_c8;
        *(undefined8 *)piVar6 = local_d0;
        puVar5[6] = uStack_b8;
        puVar5[5] = uStack_c0;
        lVar2 = *param_1;
        if (*(int *)(lVar2 + 0x18) == 0xe) {
          FUN_00134314(&local_d0);
          *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
          *(undefined8 *)(lVar2 + 0x38) = local_b0;
          *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
          *(undefined8 *)(lVar2 + 0x18) = local_d0;
          *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
          *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          lVar2 = *param_1;
          if (*(int *)(lVar2 + 0x18) == 0xe) {
            FUN_00134314(&local_d0);
            *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
            *(undefined8 *)(lVar2 + 0x38) = local_b0;
            *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
            *(undefined8 *)(lVar2 + 0x18) = local_d0;
            *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
            *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          }
        }
        goto LAB_00136e50;
      }
    }
    else if ((iVar3 == 0xb) || (iVar3 == 0xc)) goto LAB_00136db0;
    uVar7 = (ulong)*(uint *)(puVar5 + 6);
    FUN_00134314(&local_d0);
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    if (iVar3 == 9) {
      uVar4 = 0x100000000;
      goto LAB_00136e74;
    }
  }
LAB_00136e50:
  uVar7 = 0;
  puVar5 = (undefined8 *)*param_1;
  uVar4 = 0;
  puVar5[5] = uStack_78;
  puVar5[4] = local_80;
  puVar5[7] = CONCAT44(uStack_64,uStack_68);
  puVar5[6] = uStack_70;
  *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
  puVar5[1] = uStack_98;
  *puVar5 = local_a0;
  puVar5[3] = uStack_88;
  puVar5[2] = uStack_90;
LAB_00136e74:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 | uVar7;
}


// ===== 00136ea4  FUN_00136ea4 =====

ulong FUN_00136ea4(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  uStack_78 = puVar5[5];
  local_80 = puVar5[4];
  uStack_70 = puVar5[6];
  piVar6 = (int *)(puVar5 + 3);
  iVar3 = *piVar6;
  uStack_68 = (undefined4)puVar5[7];
  uStack_64 = (undefined4)((ulong)puVar5[7] >> 0x20);
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  uStack_88 = puVar5[3];
  uStack_90 = puVar5[2];
  uStack_58 = (undefined4)puVar5[9];
  uStack_54 = (undefined4)((ulong)puVar5[9] >> 0x20);
  local_60 = (undefined4)puVar5[8];
  uStack_5c = (undefined4)((ulong)puVar5[8] >> 0x20);
  if (iVar3 == 0xe) {
    FUN_00134314(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    iVar3 = *(int *)(puVar5 + 3);
  }
  if (iVar3 == 3) {
    FUN_00134314(&local_d0,puVar5);
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    if (*(int *)(puVar5 + 3) == 0xe) {
      FUN_00134314(&local_d0,puVar5);
      puVar5[8] = uStack_a8;
      puVar5[7] = local_b0;
      puVar5[4] = uStack_c8;
      *(undefined8 *)piVar6 = local_d0;
      puVar5[6] = uStack_b8;
      puVar5[5] = uStack_c0;
    }
    puVar5 = (undefined8 *)*param_1;
    piVar6 = (int *)(puVar5 + 3);
    iVar3 = *piVar6;
    if (iVar3 == *(int *)(puVar5 + 9)) {
      uVar7 = 0;
      uVar4 = 0;
      puVar5[5] = uStack_78;
      puVar5[4] = local_80;
      puVar5[7] = CONCAT44(uStack_64,uStack_68);
      puVar5[6] = uStack_70;
      *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
      *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
      puVar5[1] = uStack_98;
      *puVar5 = local_a0;
      puVar5[3] = uStack_88;
      puVar5[2] = uStack_90;
      goto LAB_00137090;
    }
    if (iVar3 < 0xb) {
      if ((iVar3 == 7) || (iVar3 == 10)) {
LAB_00136fcc:
        FUN_00134314(&local_d0);
        puVar5[8] = uStack_a8;
        puVar5[7] = local_b0;
        puVar5[4] = uStack_c8;
        *(undefined8 *)piVar6 = local_d0;
        puVar5[6] = uStack_b8;
        puVar5[5] = uStack_c0;
        lVar2 = *param_1;
        if (*(int *)(lVar2 + 0x18) == 0xe) {
          FUN_00134314(&local_d0);
          *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
          *(undefined8 *)(lVar2 + 0x38) = local_b0;
          *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
          *(undefined8 *)(lVar2 + 0x18) = local_d0;
          *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
          *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          lVar2 = *param_1;
          if (*(int *)(lVar2 + 0x18) == 0xe) {
            FUN_00134314(&local_d0);
            *(undefined8 *)(lVar2 + 0x40) = uStack_a8;
            *(undefined8 *)(lVar2 + 0x38) = local_b0;
            *(undefined8 *)(lVar2 + 0x20) = uStack_c8;
            *(undefined8 *)(lVar2 + 0x18) = local_d0;
            *(undefined8 *)(lVar2 + 0x30) = uStack_b8;
            *(undefined8 *)(lVar2 + 0x28) = uStack_c0;
          }
        }
        goto LAB_0013706c;
      }
    }
    else if ((iVar3 == 0xb) || (iVar3 == 0xc)) goto LAB_00136fcc;
    uVar7 = (ulong)*(uint *)(puVar5 + 6);
    FUN_00134314(&local_d0);
    puVar5[4] = uStack_c8;
    *(undefined8 *)piVar6 = local_d0;
    puVar5[6] = uStack_b8;
    puVar5[5] = uStack_c0;
    puVar5[8] = uStack_a8;
    puVar5[7] = local_b0;
    if (iVar3 == 0xd) {
      uVar4 = 0x100000000;
      goto LAB_00137090;
    }
  }
LAB_0013706c:
  uVar7 = 0;
  puVar5 = (undefined8 *)*param_1;
  uVar4 = 0;
  puVar5[5] = uStack_78;
  puVar5[4] = local_80;
  puVar5[7] = CONCAT44(uStack_64,uStack_68);
  puVar5[6] = uStack_70;
  *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_60,uStack_64);
  puVar5[1] = uStack_98;
  *puVar5 = local_a0;
  puVar5[3] = uStack_88;
  puVar5[2] = uStack_90;
LAB_00137090:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 | uVar7;
}


// ===== 001370c0  FUN_001370c0 =====

ulong FUN_001370c0(long *param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  byte *pbVar12;
  float fVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar5 = (undefined8 *)*param_1;
  uStack_88 = puVar5[5];
  local_90 = puVar5[4];
  uStack_80 = puVar5[6];
  piVar11 = (int *)(puVar5 + 3);
  iVar2 = *piVar11;
  uStack_78 = (undefined4)puVar5[7];
  uStack_74 = (undefined4)((ulong)puVar5[7] >> 0x20);
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  uStack_98 = puVar5[3];
  uStack_a0 = puVar5[2];
  uStack_68 = (undefined4)puVar5[9];
  uStack_64 = (undefined4)((ulong)puVar5[9] >> 0x20);
  local_70 = (undefined4)puVar5[8];
  uStack_6c = (undefined4)((ulong)puVar5[8] >> 0x20);
  if (iVar2 == *(int *)(puVar5 + 9)) {
    uVar10 = 0;
    uVar9 = 0;
    goto LAB_001372cc;
  }
  if (10 < iVar2) {
    if ((iVar2 != 0xb) && (iVar2 != 0xc)) goto LAB_001371c8;
LAB_00137154:
    FUN_00134314(&local_e0);
    puVar5[8] = uStack_b8;
    puVar5[7] = local_c0;
    puVar5[4] = uStack_d8;
    *(undefined8 *)piVar11 = local_e0;
    puVar5[6] = uStack_c8;
    puVar5[5] = uStack_d0;
    lVar6 = *param_1;
    if (*(int *)(lVar6 + 0x18) == 0xe) {
      FUN_00134314(&local_e0);
      *(undefined8 *)(lVar6 + 0x40) = uStack_b8;
      *(undefined8 *)(lVar6 + 0x38) = local_c0;
      *(undefined8 *)(lVar6 + 0x20) = uStack_d8;
      *(undefined8 *)(lVar6 + 0x18) = local_e0;
      *(undefined8 *)(lVar6 + 0x30) = uStack_c8;
      *(undefined8 *)(lVar6 + 0x28) = uStack_d0;
      lVar6 = *param_1;
      if (*(int *)(lVar6 + 0x18) == 0xe) {
        FUN_00134314(&local_e0);
        *(undefined8 *)(lVar6 + 0x40) = uStack_b8;
        *(undefined8 *)(lVar6 + 0x38) = local_c0;
        *(undefined8 *)(lVar6 + 0x20) = uStack_d8;
        *(undefined8 *)(lVar6 + 0x18) = local_e0;
        *(undefined8 *)(lVar6 + 0x30) = uStack_c8;
        *(undefined8 *)(lVar6 + 0x28) = uStack_d0;
      }
    }
LAB_001372a8:
    uVar10 = 0;
    puVar5 = (undefined8 *)*param_1;
    uVar9 = 0;
    puVar5[5] = uStack_88;
    puVar5[4] = local_90;
    puVar5[7] = CONCAT44(uStack_74,uStack_78);
    puVar5[6] = uStack_80;
    *(ulong *)((long)puVar5 + 0x44) = CONCAT44(uStack_68,uStack_6c);
    *(ulong *)((long)puVar5 + 0x3c) = CONCAT44(local_70,uStack_74);
    puVar5[1] = uStack_a8;
    *puVar5 = local_b0;
    puVar5[3] = uStack_98;
    puVar5[2] = uStack_a0;
    goto LAB_001372cc;
  }
  if ((iVar2 == 7) || (iVar2 == 10)) goto LAB_00137154;
LAB_001371c8:
  pbVar12 = (byte *)puVar5[7];
  lVar6 = puVar5[8];
  fVar13 = *(float *)(puVar5 + 6);
  FUN_00134314(&local_e0);
  puVar5[4] = uStack_d8;
  *(undefined8 *)piVar11 = local_e0;
  puVar5[6] = uStack_c8;
  puVar5[5] = uStack_d0;
  puVar5[8] = uStack_b8;
  puVar5[7] = local_c0;
  if (iVar2 == 9) {
    uVar9 = 0x100000000;
  }
  else {
    if ((iVar2 != 5) || (lVar6 == 0)) goto LAB_001372a8;
    uVar7 = 0x811c9dc5;
    do {
      bVar3 = *pbVar12;
      bVar1 = bVar3 | 0x20;
      if (0x19 < bVar3 - 0x41) {
        bVar1 = bVar3;
      }
      lVar6 = lVar6 + -1;
      uVar7 = (uVar7 ^ (int)(char)bVar1) * 0x1000193;
      pbVar12 = pbVar12 + 1;
    } while (lVar6 != 0);
    if ((int)uVar7 < -0x39a67fe1) {
      if (uVar7 == 0x914bd27a) {
        fVar8 = 360.0;
      }
      else {
        if (uVar7 != 0x9f9a8919) goto LAB_001372a8;
        fVar8 = 0.9;
      }
LAB_00137300:
      fVar13 = fVar13 * fVar8;
    }
    else if (uVar7 != 0xc659801f) {
      if (uVar7 != 0x50ff2768) goto LAB_001372a8;
      fVar8 = 57.29578;
      goto LAB_00137300;
    }
    uVar9 = 0x200000000;
  }
  uVar10 = (ulong)(uint)fVar13;
LAB_001372cc:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9 | uVar10;
}


// ===== 0013731c  FUN_0013731c =====

uint FUN_0013731c(float param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  param_2 = param_2 / 100.0;
  fVar7 = param_1 + 0.33333334;
  param_3 = param_3 / 100.0;
  fVar2 = 1.0;
  if (param_2 == 1.0 || param_2 < 1.0 != NAN(param_2)) {
    fVar2 = param_2;
  }
  fVar4 = 0.0;
  if (0.0 <= param_2) {
    fVar4 = fVar2;
  }
  fVar2 = 1.0;
  if (param_3 == 1.0 || param_3 < 1.0 != NAN(param_3)) {
    fVar2 = param_3;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = fVar2;
  }
  fVar2 = (float)NEON_fmsub(fVar5,fVar4,fVar4 + fVar5);
  if (fVar5 < 0.5) {
    fVar2 = fVar5 * (fVar4 + 1.0);
  }
  fVar4 = fVar7 + 1.0;
  if (0.0 <= fVar7) {
    fVar4 = fVar7;
  }
  fVar5 = (float)NEON_fnmsub(fVar5,0x40000000,fVar2);
  fVar7 = fVar4 + -1.0;
  if (fVar4 == 1.0 || fVar4 < 1.0 != NAN(fVar4)) {
    fVar7 = fVar4;
  }
  if (0.16666667 <= fVar7) {
    fVar4 = fVar2;
    if ((0.5 <= fVar7) && (fVar4 = fVar5, fVar7 < 0.6666667)) {
      fVar3 = fVar2 - fVar5;
      fVar4 = 0.6666667 - fVar7;
      fVar7 = 6.0;
      goto LAB_001373c0;
    }
  }
  else {
    fVar4 = fVar2 - fVar5;
    fVar3 = 6.0;
LAB_001373c0:
    fVar4 = (float)NEON_fmadd(fVar4 * fVar3,fVar7,fVar5);
  }
  fVar7 = param_1 + 1.0;
  if (0.0 <= param_1) {
    fVar7 = param_1;
  }
  fVar3 = fVar7 + -1.0;
  if (fVar7 == 1.0 || fVar7 < 1.0 != NAN(fVar7)) {
    fVar3 = fVar7;
  }
  if (0.16666667 <= fVar3) {
    fVar7 = fVar2;
    if ((fVar3 < 0.5) || (fVar7 = fVar5, 0.6666667 <= fVar3)) goto LAB_00137488;
    fVar6 = fVar2 - fVar5;
    fVar7 = 0.6666667 - fVar3;
    fVar3 = 6.0;
  }
  else {
    fVar7 = fVar2 - fVar5;
    fVar6 = 6.0;
  }
  fVar7 = (float)NEON_fmadd(fVar7 * fVar6,fVar3,fVar5);
LAB_00137488:
  param_1 = param_1 + -0.33333334;
  fVar3 = param_1 + 1.0;
  if (0.0 <= param_1) {
    fVar3 = param_1;
  }
  fVar6 = fVar3 + -1.0;
  if (fVar3 == 1.0 || fVar3 < 1.0 != NAN(fVar3)) {
    fVar6 = fVar3;
  }
  if (0.16666667 <= fVar6) {
    fVar3 = fVar2;
    if ((0.5 <= fVar6) && (fVar3 = fVar5, fVar6 < 0.6666667)) {
      fVar3 = (float)NEON_fmadd((0.6666667 - fVar6) * (fVar2 - fVar5),0x40c00000,fVar5);
    }
  }
  else {
    fVar3 = (float)NEON_fmadd((fVar2 - fVar5) * 6.0,fVar6,fVar5);
  }
  uVar1 = NEON_ushl(CONCAT44((int)(float)(int)(fVar7 * 255.0),(int)(float)(int)(fVar3 * 255.0)),
                    DAT_00110568,4);
  return CONCAT13((byte)((ulong)uVar1 >> 0x18) | (byte)((ulong)uVar1 >> 0x38),
                  CONCAT12((byte)((ulong)uVar1 >> 0x10) | (byte)((ulong)uVar1 >> 0x30),
                           CONCAT11((byte)((ulong)uVar1 >> 8) | (byte)((ulong)uVar1 >> 0x28),
                                    (byte)uVar1 | (byte)((ulong)uVar1 >> 0x20)))) |
         (int)(fVar4 * 255.0);
}


// ===== 00137564  FUN_00137564 =====

uint FUN_00137564(float param_1,float param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar6 = CONCAT44(param_3 / 100.0,param_2 / 100.0);
  uVar7 = NEON_fmov(0x3f800000,4);
  uVar11 = NEON_fcmgt(uVar6,uVar7,4);
  uVar12 = NEON_fcmlt(uVar6,0,4);
  uVar6 = NEON_bit(uVar6,uVar7,uVar11,1);
  fVar5 = (float)CONCAT13((byte)((ulong)uVar6 >> 0x18) & ~(byte)((ulong)uVar12 >> 0x18),
                          CONCAT12((byte)((ulong)uVar6 >> 0x10) & ~(byte)((ulong)uVar12 >> 0x10),
                                   CONCAT11((byte)((ulong)uVar6 >> 8) & ~(byte)((ulong)uVar12 >> 8),
                                            (byte)uVar6 & ~(byte)uVar12)));
  fVar4 = (float)(CONCAT17((byte)((ulong)uVar6 >> 0x38) & ~(byte)((ulong)uVar12 >> 0x38),
                           CONCAT16((byte)((ulong)uVar6 >> 0x30) & ~(byte)((ulong)uVar12 >> 0x30),
                                    CONCAT15((byte)((ulong)uVar6 >> 0x28) &
                                             ~(byte)((ulong)uVar12 >> 0x28),
                                             CONCAT14((byte)((ulong)uVar6 >> 0x20) &
                                                      ~(byte)((ulong)uVar12 >> 0x20),fVar5)))) >>
                 0x20);
  fVar8 = fVar5 + fVar4;
  if (fVar8 < 1.0 == NAN(fVar8)) {
    uVar1 = (uint)((fVar5 / fVar8) * 255.0);
    uVar2 = uVar1;
    uVar3 = uVar1;
  }
  else {
    fVar9 = param_1 + 0.33333334;
    fVar8 = fVar9 + 1.0;
    if (0.0 <= fVar9) {
      fVar8 = fVar9;
    }
    fVar9 = fVar8 + -1.0;
    if (fVar8 == 1.0 || fVar8 < 1.0 != NAN(fVar8)) {
      fVar9 = fVar8;
    }
    uVar15 = NEON_fmadd(fVar9,0x40c00000,0);
    uVar14 = NEON_fmadd(0.6666667 - fVar9,0x40c00000,0);
    uVar13 = 0;
    if (fVar9 < 0.6666667) {
      uVar13 = uVar14;
    }
    uVar14 = 0x3f800000;
    if (0.5 <= fVar9) {
      uVar14 = uVar13;
    }
    if (fVar9 < 0.16666667) {
      uVar14 = uVar15;
    }
    fVar8 = param_1 + 1.0;
    if (0.0 <= param_1) {
      fVar8 = param_1;
    }
    fVar9 = fVar8 + -1.0;
    if (fVar8 == 1.0 || fVar8 < 1.0 != NAN(fVar8)) {
      fVar9 = fVar8;
    }
    uVar16 = NEON_fmadd(fVar9,0x40c00000,0);
    param_1 = param_1 + -0.33333334;
    uVar15 = NEON_fmadd(0.6666667 - fVar9,0x40c00000,0);
    uVar13 = 0;
    if (fVar9 < 0.6666667) {
      uVar13 = uVar15;
    }
    uVar15 = 0x3f800000;
    if (0.5 <= fVar9) {
      uVar15 = uVar13;
    }
    if (fVar9 < 0.16666667) {
      uVar15 = uVar16;
    }
    fVar8 = param_1 + 1.0;
    if (0.0 <= param_1) {
      fVar8 = param_1;
    }
    fVar9 = fVar8 + -1.0;
    if (fVar8 == 1.0 || fVar8 < 1.0 != NAN(fVar8)) {
      fVar9 = fVar8;
    }
    uVar16 = NEON_fmadd(0.6666667 - fVar9,0x40c00000,0);
    uVar13 = 0;
    if (fVar9 < 0.6666667) {
      uVar13 = uVar16;
    }
    uVar10 = NEON_fmadd(fVar9,0x40c00000,0);
    uVar16 = 0x3f800000;
    if (0.5 <= fVar9) {
      uVar16 = uVar13;
    }
    fVar4 = (1.0 - fVar5) - fVar4;
    if (fVar9 < 0.16666667) {
      uVar16 = uVar10;
    }
    fVar8 = (float)NEON_fmadd(uVar14,fVar4,fVar5);
    fVar9 = (float)NEON_fmadd(uVar15,fVar4,fVar5);
    fVar4 = (float)NEON_fmadd(uVar16,fVar4,fVar5);
    uVar1 = (uint)(fVar8 * 255.0);
    uVar2 = (int)(fVar9 * 255.0);
    uVar3 = (int)(fVar4 * 255.0);
  }
  return uVar2 << 8 | uVar3 << 0x10 | uVar1;
}


// ===== 00137738  FUN_00137738 =====

long FUN_00137738(double *param_1)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double *local_58;
  range_error arStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  dVar4 = *param_1;
  if (9.223372036854776e+18 <= dVar4) {
    if ((dVar4 <= 9.223372036854776e+18) &&
       (dVar3 = nextafter(9.223372036854776e+18,0.0),
       (long)(dVar4 - dVar3) <= (long)((long)dVar3 ^ 0x7fffffffffffffffU))) goto LAB_001377e8;
  }
  else if ((-9.223372036854776e+18 < dVar4) ||
          ((-9.223372036854776e+18 <= dVar4 &&
           (dVar3 = nextafter(-9.223372036854776e+18,0.0),
           -0x8000000000000000 - (long)dVar3 <= (long)(dVar4 - dVar3))))) {
LAB_001377e8:
    if (dVar4 == (double)(long)dVar4) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return (long)dVar4;
      }
      goto LAB_0013786c;
    }
  }
  local_58 = param_1;
  FUN_00137970(arStack_50,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00137840 to 00137847 has its CatchHandler @ 00137848 */
    uVar2 = FUN_00137934(arStack_50);
                    /* catch() { ... } // from try @ 00137840 with catch @ 00137848 */
    std::range_error::~range_error(arStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
LAB_0013786c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137870  FUN_00137870 =====

void FUN_00137870(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &PTR__exception_00144898;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 001378a8 to 001378ab has its CatchHandler @ 001378ac */
    uVar2 = FUN_001378d4();
                    /* catch() { ... } // from try @ 001378a8 with catch @ 001378ac */
    std::exception::~exception((exception *)&local_30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001378d4  FUN_001378d4 =====

void FUN_001378d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar1 = &PTR__exception_00144898;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,PTR_typeinfo_00144e40,PTR__exception_00144ef0);
}


// ===== 00137904  FUN_00137904 =====

void FUN_00137904(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00137928  FUN_00137928 =====

char * FUN_00137928(void)

{
  return "bad expected access";
}


// ===== 00137934  FUN_00137934 =====

void FUN_00137934(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x18);
  FUN_00137b54(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_typeinfo_00144e48,PTR__range_error_00144ee0);
}


// ===== 00137970  FUN_00137970 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00137970(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong local_198;
  ulong local_190;
  void *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  uint local_170;
  undefined4 local_168 [2];
  char *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  param_2 = (undefined8 *)*param_2;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_198 = 0;
                    /* try { // try from 001379a0 to 00137a0f has its CatchHandler @ 00137b24 */
  __strlen_chk(PTR_zarray_00144e50,5);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&local_198);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,0x10f5c6);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,(ulong)PTR_zarray_00144e50);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,0x10f9e3);
  local_168[0] = 0;
  local_160 = "Infinity";
  puStack_158 = &DAT_0010f6a9;
  local_170 = 0;
  local_150 = 0x45;
  local_180 = auStack_138;
  uStack_144 = _UNK_001105e8;
  local_14c = _DAT_001105e0;
  local_178 = 0x100;
                    /* try { // try from 00137a54 to 00137a63 has its CatchHandler @ 00137b0c */
  double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(*param_2,local_168,&local_180,0);
  local_180[(int)local_170] = 0;
  local_170 = 0xffffffff;
                    /* try { // try from 00137a78 to 00137a83 has its CatchHandler @ 00137b08 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_198,(ulong)auStack_138);
  if (-1 < (int)local_170) {
    local_180[local_170] = 0;
  }
  uVar1 = local_198 >> 1 & 0x7f;
  pvVar3 = (void *)((ulong)&local_198 | 1);
  if ((local_198 & 1) != 0) {
    uVar1 = local_190;
    pvVar3 = local_188;
  }
                    /* try { // try from 00137ab4 to 00137ac3 has its CatchHandler @ 00137af8 */
  folly::makeConversionError(param_1,0xd,pvVar3,(long)pvVar3 + uVar1);
  if ((local_198 & 1) != 0) {
    operator_delete(local_188);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00137b54  FUN_00137b54 =====

void FUN_00137b54(runtime_error *param_1,runtime_error *param_2)

{
  runtime_error rVar1;
  
  std::runtime_error::runtime_error(param_1,param_2);
  rVar1 = param_2[0x10];
  *(undefined ***)param_1 = &PTR__range_error_001448f0;
  param_1[0x10] = rVar1;
  return;
}


// ===== 00137b8c  FUN_00137b8c =====

void FUN_00137b8c(range_error *param_1)

{
  std::range_error::~range_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00137bb0  FUN_00137bb0 =====

void FUN_00137bb0(undefined8 *param_1,undefined4 param_2)

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
                    /* try { // try from 00137bf4 to 00137bfb has its CatchHandler @ 00137bfc */
    uVar2 = FUN_00137934(arStack_40);
                    /* catch() { ... } // from try @ 00137bf4 with catch @ 00137bfc */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137c24  FUN_00137c24 =====

void FUN_00137c24(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = &PTR__exception_00144930;
  local_30 = param_1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00137c60 to 00137c67 has its CatchHandler @ 00137c68 */
    uVar2 = FUN_00137c90(&local_38);
                    /* catch() { ... } // from try @ 00137c60 with catch @ 00137c68 */
    std::exception::~exception((exception *)&local_38);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137c90  FUN_00137c90 =====

void FUN_00137c90(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)__cxa_allocate_exception(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR__exception_00144930;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,PTR_typeinfo_00144e58,PTR__exception_00144ef0);
}


// ===== 00137cd0  FUN_00137cd0 =====

void FUN_00137cd0(exception *param_1)

{
  std::exception::~exception(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00137cf4  FUN_00137cf4 =====

void FUN_00137cf4(undefined8 *param_1)

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
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00137da0;
                    /* try { // try from 00137d40 to 00137d47 has its CatchHandler @ 00137d7c */
    FUN_00137934(arStack_40);
    param_1 = extraout_x8;
    uVar3 = extraout_w9;
  }
  if (uVar3 == 2) {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00137da0;
    FUN_00137c24(*(undefined1 *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar2 = FUN_00137870();
                    /* catch() { ... } // from try @ 00137d40 with catch @ 00137d7c */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
LAB_00137da0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137da4  FUN_00137da4 =====

void FUN_00137da4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 00137db8  FUN_00137db8 =====

undefined1  [16] FUN_00137db8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  long *local_58;
  range_error arStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_1;
  dVar6 = (double)lVar3;
  if (9.223372036854776e+18 <= dVar6) {
    if ((dVar6 <= 9.223372036854776e+18) &&
       (dVar4 = nextafter(9.223372036854776e+18,0.0),
       (long)(dVar6 - dVar4) <= (long)((long)dVar4 ^ 0x7fffffffffffffffU))) goto LAB_00137e70;
  }
  else if ((-9.223372036854776e+18 < dVar6) ||
          ((-9.223372036854776e+18 <= dVar6 &&
           (dVar4 = nextafter(-9.223372036854776e+18,0.0),
           -0x8000000000000000 - (long)dVar4 <= (long)(dVar6 - dVar4))))) {
LAB_00137e70:
    if (lVar3 == (long)dVar6) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar6;
        return auVar5;
      }
      goto LAB_00137ef4;
    }
  }
  local_58 = param_1;
  FUN_00137ef8(arStack_50,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00137ec8 to 00137ecf has its CatchHandler @ 00137ed0 */
    uVar2 = FUN_00137934(arStack_50);
                    /* catch() { ... } // from try @ 00137ec8 with catch @ 00137ed0 */
    std::range_error::~range_error(arStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
LAB_00137ef4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00137ef8  FUN_00137ef8 =====

void FUN_00137ef8(undefined8 param_1,undefined8 *param_2)

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
                    /* try { // try from 00137f28 to 00138217 has its CatchHandler @ 001383e0 */
  __strlen_chk(PTR_zarray_00144e60,7);
  puVar3 = PTR_data_00144f48;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)&local_68);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,0x10f5c6);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,(ulong)PTR_zarray_00144e60);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_68,0x10f9e3);
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
LAB_001383c4:
    if (uVar6 < *(ulong *)puVar3) {
      uVar9 = uVar9 + 1;
    }
    uVar5 = uVar6;
    uVar7 = uVar9;
    if (uVar9 < 3) goto LAB_001381f4;
  }
  else {
    if (uVar6 < *(ulong *)(puVar3 + 8)) {
      uVar9 = 1;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x10)) {
      uVar9 = 2;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x18)) {
      uVar9 = 3;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x20)) {
      uVar9 = 4;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x28)) {
      uVar9 = 5;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x30)) {
      uVar9 = 6;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x38)) {
      uVar9 = 7;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x40)) {
      uVar9 = 8;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x48)) {
      uVar9 = 9;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x50)) {
      uVar9 = 10;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x58)) {
      uVar9 = 0xb;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x60)) {
      uVar9 = 0xc;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x68)) {
      uVar9 = 0xd;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x70)) {
      uVar9 = 0xe;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x78)) {
      uVar9 = 0xf;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x80)) {
      uVar9 = 0x10;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x88)) {
      uVar9 = 0x11;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x90)) {
      uVar9 = 0x12;
      goto LAB_001383c4;
    }
    if (uVar6 < *(ulong *)(puVar3 + 0x98)) {
      uVar9 = 0x13;
      goto LAB_001383c4;
    }
    uVar5 = uVar6;
    uVar7 = 0x14;
  }
  do {
    uVar9 = uVar7 - 2;
    uVar6 = uVar5 / 100;
    *(undefined2 *)((long)&uStack_4e + uVar7) =
         *(undefined2 *)(PTR_data_00144f50 + (uVar5 % 100) * 2);
    uVar5 = uVar6;
    uVar7 = uVar9;
  } while (2 < uVar9);
LAB_001381f4:
  uVar4 = *(undefined2 *)(PTR_data_00144f50 + uVar6 * 2);
  if (uVar9 != 2) {
    local_4c[0] = CONCAT11(local_4c[0]._1_1_,
                           (char)((ushort)*(undefined2 *)(PTR_data_00144f50 + uVar6 * 2) >> 8));
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
                    /* try { // try from 00138234 to 00138243 has its CatchHandler @ 001383dc */
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


// ===== 00138410  FUN_00138410 =====

void FUN_00138410(undefined8 *param_1,undefined4 param_2)

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
                    /* try { // try from 00138454 to 0013845b has its CatchHandler @ 0013845c */
    uVar2 = FUN_00137934(arStack_40);
                    /* catch() { ... } // from try @ 00138454 with catch @ 0013845c */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00138484  FUN_00138484 =====

void FUN_00138484(undefined8 *param_1)

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
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00138530;
                    /* try { // try from 001384d0 to 001384d7 has its CatchHandler @ 0013850c */
    FUN_00137934(arStack_40);
    param_1 = extraout_x8;
    uVar3 = extraout_w9;
  }
  if (uVar3 == 2) {
    if (*(long *)(lVar1 + 0x28) != local_28) goto LAB_00138530;
    FUN_00137c24(*(undefined1 *)param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar2 = FUN_00137870();
                    /* catch() { ... } // from try @ 001384d0 with catch @ 0013850c */
    std::range_error::~range_error(arStack_40);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_0011cd74(uVar2);
    }
  }
LAB_00138530:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00138534  FUN_00138534 =====

void FUN_00138534(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00136468("vector");
}


// ===== 00138548  FUN_00138548 =====

void FUN_00138548(long *param_1,int *param_2)

{
  long *plVar1;
  dynamic *pdVar2;
  size_t sVar3;
  size_t sVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  void *__s2;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  long *plVar19;
  ulong unaff_x28;
  undefined2 uVar20;
  undefined8 uVar21;
  dynamic adStack_d0 [48];
  uint local_a0;
  dynamic *local_98;
  undefined8 local_90;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  iVar8 = *param_2;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (iVar8 == 5) {
    plVar19 = *(long **)(param_2 + 6);
    if (plVar19 != (long *)0x0) {
      plVar1 = param_1 + 2;
      do {
                    /* try { // try from 001385b8 to 001385c3 has its CatchHandler @ 00138aa4 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar19 + 8));
        local_a0 = 0;
        if ((int)plVar19[2] != 6) {
          if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 00138a10 to 00138a1f has its CatchHandler @ 00138a70 */
                    /* WARNING: Subroutine does not return */
            FUN_00123890(*(undefined8 *)PTR_name_00144df8);
          }
          goto LAB_00138aa0;
        }
        pbVar18 = (byte *)(plVar19 + 3);
        uVar9 = plVar19[4];
        lVar15 = plVar19[5];
        if ((*pbVar18 & 1) == 0) {
          lVar15 = (long)plVar19 + 0x19;
          uVar9 = (ulong)(*pbVar18 >> 1);
        }
                    /* try { // try from 001385f0 to 001385f7 has its CatchHandler @ 00138aa8 */
        uVar9 = FUN_001391e0(&local_98,lVar15,uVar9);
        uVar17 = param_1[1];
        if (uVar17 != 0) {
          uVar21 = NEON_cnt(uVar17,1);
          uVar20 = NEON_uaddlv(uVar21,1);
          uVar12 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
          if (uVar12 < 2) {
            unaff_x28 = uVar17 - 1 & uVar9;
          }
          else {
            unaff_x28 = uVar9;
            if (uVar17 <= uVar9) {
              uVar11 = 0;
              if (uVar17 != 0) {
                uVar11 = uVar9 / uVar17;
              }
              unaff_x28 = uVar9 - uVar11 * uVar17;
            }
          }
          puVar10 = *(undefined8 **)(*param_1 + unaff_x28 * 8);
          if ((puVar10 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar10, plVar16 != (long *)0x0)
             ) {
            __s2 = (void *)((long)plVar19 + 0x19);
            sVar3 = (ulong)(*(byte *)(plVar19 + 3) >> 1);
            if ((*(byte *)(plVar19 + 3) & 1) != 0) {
              __s2 = (void *)plVar19[5];
              sVar3 = plVar19[4];
            }
            do {
              uVar11 = plVar16[1];
              if (uVar11 == uVar9) {
                bVar5 = *(byte *)(plVar16 + 2);
                sVar4 = (ulong)(bVar5 >> 1);
                if ((bVar5 & 1) != 0) {
                  sVar4 = plVar16[3];
                }
                if (sVar4 == sVar3) {
                  if ((bVar5 & 1) == 0) {
                    if (bVar5 < 2) goto LAB_00138934;
                    uVar11 = 0;
                    while (*(char *)((long)plVar16 + uVar11 + 0x11) ==
                           *(char *)((long)__s2 + uVar11)) {
                      uVar11 = uVar11 + 1;
                      if (bVar5 >> 1 == uVar11) goto LAB_00138934;
                    }
                  }
                  else {
                    iVar8 = memcmp((void *)plVar16[4],__s2,plVar16[3]);
                    if (iVar8 == 0) goto LAB_00138934;
                  }
                }
              }
              else {
                if (uVar12 < 2) {
                  uVar11 = uVar11 & uVar17 - 1;
                }
                else if (uVar17 <= uVar11) {
                  uVar6 = 0;
                  if (uVar17 != 0) {
                    uVar6 = uVar11 / uVar17;
                  }
                  uVar11 = uVar11 - uVar6 * uVar17;
                }
                if (uVar11 != unaff_x28) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
        }
                    /* try { // try from 00138728 to 0013872f has its CatchHandler @ 00138a6c */
        plVar16 = (long *)operator_new(0x60);
        *plVar16 = 0;
        plVar16[1] = uVar9;
        if ((*pbVar18 & 1) == 0) {
          lVar14 = plVar19[4];
          lVar15 = *(long *)pbVar18;
          plVar16[4] = plVar19[5];
          plVar16[3] = lVar14;
          plVar16[2] = lVar15;
        }
        else {
                    /* try { // try from 00138760 to 00138767 has its CatchHandler @ 00138a54 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(plVar16 + 2),(char *)plVar19[5],plVar19[4]);
        }
        local_98 = (dynamic *)((ulong)local_98 & 0xffffffff00000000);
        local_90 = 0;
        folly::dynamic::dynamic((dynamic *)(plVar16 + 5),(dynamic *)&local_98);
        *(undefined4 *)(plVar16 + 0xb) = 0;
        folly::dynamic::destroy();
        if ((uVar17 == 0) || (*(float *)(param_1 + 4) * (float)uVar17 < (float)(param_1[3] + 1))) {
          if (uVar17 < 3) {
            uVar12 = 1;
          }
          else {
            uVar12 = (ulong)((uVar17 & uVar17 - 1) != 0);
          }
          uVar12 = uVar12 | uVar17 << 1;
          uVar17 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar12 <= uVar17) {
            uVar12 = uVar17;
          }
          if (uVar12 - 1 == 0) {
            uVar12 = 2;
          }
          else if ((uVar12 & uVar12 - 1) != 0) {
                    /* try { // try from 00138800 to 00138883 has its CatchHandler @ 00138a58 */
            uVar12 = std::__ndk1::__next_prime(uVar12);
          }
          uVar17 = param_1[1];
          if (uVar17 < uVar12) {
LAB_00138818:
            FUN_00139618(param_1,uVar12);
          }
          else if (uVar12 < uVar17) {
            uVar11 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
            if (uVar17 < 3) {
LAB_00138880:
              uVar11 = std::__ndk1::__next_prime(uVar11);
            }
            else {
              uVar21 = NEON_cnt(uVar17,1);
              uVar20 = NEON_uaddlv(uVar21,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20)) goto LAB_00138880;
              if (1 < uVar11) {
                uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
              }
            }
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (uVar12 < uVar17) goto LAB_00138818;
          }
          uVar17 = param_1[1];
          if ((uVar17 & uVar17 - 1) == 0) {
            unaff_x28 = uVar17 - 1 & uVar9;
          }
          else {
            unaff_x28 = uVar9;
            if (uVar17 <= uVar9) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar9 / uVar17;
              }
              unaff_x28 = uVar9 - uVar12 * uVar17;
            }
          }
        }
        lVar15 = *param_1;
        plVar13 = *(long **)(lVar15 + unaff_x28 * 8);
        if (plVar13 == (long *)0x0) {
          lVar14 = *plVar1;
          *plVar1 = (long)plVar16;
          *plVar16 = lVar14;
          *(long **)(lVar15 + unaff_x28 * 8) = plVar1;
          if (*plVar16 != 0) {
            uVar9 = *(ulong *)(*plVar16 + 8);
            if ((uVar17 & uVar17 - 1) == 0) {
              uVar9 = uVar9 & uVar17 - 1;
            }
            else if (uVar17 <= uVar9) {
              uVar12 = 0;
              if (uVar17 != 0) {
                uVar12 = uVar9 / uVar17;
              }
              uVar9 = uVar9 - uVar12 * uVar17;
            }
            plVar13 = (long *)(*param_1 + uVar9 * 8);
            goto LAB_00138924;
          }
        }
        else {
          *plVar16 = *plVar13;
LAB_00138924:
          *plVar13 = (long)plVar16;
        }
        param_1[3] = param_1[3] + 1;
LAB_00138934:
        pdVar2 = (dynamic *)(plVar16 + 5);
        if (pdVar2 == adStack_d0) {
LAB_001389a0:
          if (local_a0 != 0xffffffff) {
                    /* try { // try from 001389b8 to 001389c3 has its CatchHandler @ 00138a68 */
            (*(code *)(&PTR_FUN_00144948)[local_a0])(&local_98,adStack_d0);
          }
        }
        else {
          if (*(uint *)(plVar16 + 0xb) != 0xffffffff) {
            if (local_a0 != 0xffffffff) goto code_r0x00138988;
                    /* try { // try from 00138968 to 0013896f has its CatchHandler @ 00138a4c */
            (*(code *)(&PTR_FUN_00144948)[*(uint *)(plVar16 + 0xb)])(&local_98);
            *(undefined4 *)(plVar16 + 0xb) = 0xffffffff;
            goto LAB_001389a0;
          }
          if (local_a0 != 0xffffffff) {
code_r0x00138988:
                    /* try { // try from 00138994 to 0013899f has its CatchHandler @ 00138a50 */
            local_98 = pdVar2;
            (*(code *)(&
                      PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_assign[abi:ne180000]<std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___move_assignment<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00144958
                      )[local_a0])(&local_98,pdVar2,adStack_d0);
            goto LAB_001389a0;
          }
        }
        plVar19 = (long *)*plVar19;
      } while (plVar19 != (long *)0x0);
    }
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
  else if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 00138a34 to 00138a43 has its CatchHandler @ 00138a44 */
                    /* WARNING: Subroutine does not return */
    FUN_00123890(*(undefined8 *)PTR_name_00144df0);
  }
LAB_00138aa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00138aac  FUN_00138aac =====

void FUN_00138aac(long *param_1,IRuntime *param_2,long param_3)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  IRuntime *pIVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  ulong uVar21;
  ulong unaff_x28;
  undefined2 uVar22;
  undefined8 uVar23;
  byte local_120;
  undefined7 uStack_11f;
  size_t sStack_118;
  char *local_110;
  int local_108 [4];
  undefined8 *local_f8;
  Value aVStack_f0 [8];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  Value aVStack_d0 [16];
  IRuntime *local_c0;
  long *plStack_b8;
  undefined1 local_b0;
  IRuntime *local_a8;
  Value aVStack_a0 [40];
  uint local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  local_d8 = (undefined8 *)
             (**(code **)(*(long *)param_2 + 0x88))(param_2,*(undefined8 *)(param_3 + 8));
                    /* try { // try from 00138b00 to 00138b0f has its CatchHandler @ 00139068 */
  (**(code **)(*(long *)param_2 + 0x218))(&local_e0,param_2,&local_d8);
                    /* try { // try from 00138b18 to 00138b23 has its CatchHandler @ 00139060 */
  lVar9 = (**(code **)(*(long *)param_2 + 0x240))(param_2,&local_e0);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (lVar9 != 0) {
    lVar20 = 0;
    plVar1 = param_1 + 2;
    do {
                    /* try { // try from 00138b74 to 00138b87 has its CatchHandler @ 001390c4 */
      (**(code **)(*(long *)param_2 + 0x260))(aVStack_f0,param_2,&local_e0,lVar20);
                    /* try { // try from 00138b94 to 00138b9b has its CatchHandler @ 001390cc */
      local_f8 = (undefined8 *)(**(code **)(*(long *)param_2 + 0x80))(param_2,local_e8);
                    /* try { // try from 00138ba8 to 00138bbb has its CatchHandler @ 001390d4 */
      (**(code **)(*(long *)param_2 + 0x188))(local_108,param_2,&local_d8,&local_f8);
      if (local_108[0] != 0) {
                    /* try { // try from 00138bcc to 00138bdb has its CatchHandler @ 001390b4 */
        (**(code **)(*(long *)param_2 + 0x120))(&local_120,param_2,&local_f8);
                    /* try { // try from 00138bdc to 00138beb has its CatchHandler @ 001390ac */
        facebook::jsi::Value::Value(aVStack_d0,param_2,(Value *)local_108);
        local_c0 = param_2;
        facebook::jsi::Value::Value((Value *)&plStack_b8,aVStack_d0);
        local_a8 = local_c0;
        facebook::jsi::Value::Value(aVStack_a0,(Value *)&plStack_b8);
        local_78 = 1;
        facebook::jsi::Value::~Value((Value *)&plStack_b8);
        facebook::jsi::Value::~Value(aVStack_d0);
        sVar2 = (ulong)(local_120 >> 1);
        pcVar7 = (char *)((ulong)&local_120 | 1);
        if ((local_120 & 1) != 0) {
          sVar2 = sStack_118;
          pcVar7 = local_110;
        }
                    /* try { // try from 00138c4c to 00138c53 has its CatchHandler @ 001390b0 */
        uVar10 = FUN_001391e0(&local_c0,pcVar7,sVar2);
        uVar21 = param_1[1];
        if (uVar21 != 0) {
          uVar23 = NEON_cnt(uVar21,1);
          uVar22 = NEON_uaddlv(uVar23,1);
          uVar14 = CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22) & 0xffffffff;
          if (uVar14 < 2) {
            unaff_x28 = uVar21 - 1 & uVar10;
          }
          else {
            unaff_x28 = uVar10;
            if (uVar21 <= uVar10) {
              uVar13 = 0;
              if (uVar21 != 0) {
                uVar13 = uVar10 / uVar21;
              }
              unaff_x28 = uVar10 - uVar13 * uVar21;
            }
          }
          plVar12 = *(long **)(*param_1 + unaff_x28 * 8);
          if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
            sVar2 = (ulong)(local_120 >> 1);
            pcVar7 = (char *)((ulong)&local_120 | 1);
            if ((local_120 & 1) != 0) {
              sVar2 = sStack_118;
              pcVar7 = local_110;
            }
            do {
              uVar13 = plVar12[1];
              if (uVar13 == uVar10) {
                bVar4 = *(byte *)(plVar12 + 2);
                uVar13 = (ulong)(bVar4 >> 1);
                sVar3 = uVar13;
                if ((bVar4 & 1) != 0) {
                  sVar3 = plVar12[3];
                }
                if (sVar3 == sVar2) {
                  if ((bVar4 & 1) == 0) {
                    if (bVar4 < 2) goto LAB_00138fa8;
                    pcVar17 = (char *)((long)plVar12 + 0x11);
                    pcVar19 = pcVar7;
                    while (*pcVar17 == *pcVar19) {
                      uVar13 = uVar13 - 1;
                      pcVar17 = pcVar17 + 1;
                      pcVar19 = pcVar19 + 1;
                      if (uVar13 == 0) goto LAB_00138fa8;
                    }
                  }
                  else {
                    iVar8 = memcmp((void *)plVar12[4],pcVar7,plVar12[3]);
                    if (iVar8 == 0) goto LAB_00138fa8;
                  }
                }
              }
              else {
                if (uVar14 < 2) {
                  uVar13 = uVar13 & uVar21 - 1;
                }
                else if (uVar21 <= uVar13) {
                  uVar5 = 0;
                  if (uVar21 != 0) {
                    uVar5 = uVar13 / uVar21;
                  }
                  uVar13 = uVar13 - uVar5 * uVar21;
                }
                if (uVar13 != unaff_x28) break;
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
                    /* try { // try from 00138d78 to 00138d7f has its CatchHandler @ 0013908c */
        pIVar11 = (IRuntime *)operator_new(0x60);
        local_b0 = 0;
        *(undefined8 *)pIVar11 = 0;
        *(ulong *)(pIVar11 + 8) = uVar10;
        local_c0 = pIVar11;
        plStack_b8 = plVar1;
        if ((local_120 & 1) == 0) {
          *(size_t *)(pIVar11 + 0x18) = sStack_118;
          *(ulong *)(pIVar11 + 0x10) = CONCAT71(uStack_11f,local_120);
          *(char **)(pIVar11 + 0x20) = local_110;
        }
        else {
                    /* try { // try from 00138db4 to 00138dbb has its CatchHandler @ 00139070 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          __init_copy_ctor_external
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pIVar11 + 0x10),local_110,sStack_118);
        }
        pIVar11[0x28] = (IRuntime)0x0;
        *(undefined4 *)(pIVar11 + 0x58) = 0xffffffff;
        if (local_78 != 0xffffffff) {
                    /* try { // try from 00138de4 to 00138def has its CatchHandler @ 00139084 */
          (*(code *)(&
                    PTR___dispatch_abi_ne180000_<std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>___generic_construct[abi:ne180000]<std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>>(std___ndk1___variant_detail___ctor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>>&,std___ndk1___variant_detail___move_constructor<std___ndk1___variant_detail___traits<folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>,(std___ndk1___variant_detail__Trait)1>&&)__lambda(auto:1&,auto:2&&)_1_&&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&,std___ndk1___variant_detail___base<(std___ndk1___variant_detail__Trait)1,folly_dynamic,std___ndk1_pair<facebook_jsi_Runtime*,facebook_jsi_Value>>&&>_00144968
                    )[local_78])(aVStack_d0,pIVar11 + 0x28,&local_a8);
          *(uint *)(pIVar11 + 0x58) = local_78;
        }
        local_b0 = 1;
        if ((uVar21 == 0) || (*(float *)(param_1 + 4) * (float)uVar21 < (float)(param_1[3] + 1))) {
          if (uVar21 < 3) {
            uVar14 = 1;
          }
          else {
            uVar14 = (ulong)((uVar21 & uVar21 - 1) != 0);
          }
          uVar14 = uVar14 | uVar21 << 1;
          uVar21 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
          if (uVar14 <= uVar21) {
            uVar14 = uVar21;
          }
          if (uVar14 - 1 == 0) {
            uVar14 = 2;
          }
          else if ((uVar14 & uVar14 - 1) != 0) {
                    /* try { // try from 00138e70 to 00138ef3 has its CatchHandler @ 00139074 */
            uVar14 = std::__ndk1::__next_prime(uVar14);
          }
          uVar21 = param_1[1];
          if (uVar21 < uVar14) {
LAB_00138e88:
            FUN_00139618(param_1,uVar14);
          }
          else if (uVar14 < uVar21) {
            uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
            if (uVar21 < 3) {
LAB_00138ef0:
              uVar13 = std::__ndk1::__next_prime(uVar13);
            }
            else {
              uVar23 = NEON_cnt(uVar21,1);
              uVar22 = NEON_uaddlv(uVar23,1);
              if (1 < (uint)CONCAT62((int6)((ulong)uVar23 >> 0x10),uVar22)) goto LAB_00138ef0;
              if (1 < uVar13) {
                uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
              }
            }
            if (uVar14 <= uVar13) {
              uVar14 = uVar13;
            }
            if (uVar14 < uVar21) goto LAB_00138e88;
          }
          uVar21 = param_1[1];
          if ((uVar21 & uVar21 - 1) == 0) {
            unaff_x28 = uVar21 - 1 & uVar10;
          }
          else {
            unaff_x28 = uVar10;
            if (uVar21 <= uVar10) {
              uVar14 = 0;
              if (uVar21 != 0) {
                uVar14 = uVar10 / uVar21;
              }
              unaff_x28 = uVar10 - uVar14 * uVar21;
            }
          }
        }
        lVar18 = *param_1;
        puVar15 = *(undefined8 **)(lVar18 + unaff_x28 * 8);
        if (puVar15 == (undefined8 *)0x0) {
          lVar16 = *plVar1;
          *plVar1 = (long)pIVar11;
          *(long *)pIVar11 = lVar16;
          *(long **)(lVar18 + unaff_x28 * 8) = plVar1;
          if (*(long *)pIVar11 != 0) {
            uVar10 = *(ulong *)(*(long *)pIVar11 + 8);
            if ((uVar21 & uVar21 - 1) == 0) {
              uVar10 = uVar10 & uVar21 - 1;
            }
            else if (uVar21 <= uVar10) {
              uVar14 = 0;
              if (uVar21 != 0) {
                uVar14 = uVar10 / uVar21;
              }
              uVar10 = uVar10 - uVar14 * uVar21;
            }
            puVar15 = (undefined8 *)(*param_1 + uVar10 * 8);
            goto LAB_00138f98;
          }
        }
        else {
          *(undefined8 *)pIVar11 = *puVar15;
LAB_00138f98:
          *puVar15 = pIVar11;
        }
        param_1[3] = param_1[3] + 1;
LAB_00138fa8:
        if (local_78 != 0xffffffff) {
                    /* try { // try from 00138fc4 to 00138fcf has its CatchHandler @ 00139088 */
          (*(code *)(&PTR_FUN_00144948)[local_78])(&local_c0,&local_a8);
        }
        if ((local_120 & 1) != 0) {
          operator_delete(local_110);
        }
      }
      facebook::jsi::Value::~Value((Value *)local_108);
      if (local_f8 != (undefined8 *)0x0) {
        (**(code **)*local_f8)();
      }
      facebook::jsi::Value::~Value(aVStack_f0);
      lVar20 = lVar20 + 1;
    } while (lVar20 != lVar9);
  }
  if (local_e0 != (undefined8 *)0x0) {
    (**(code **)*local_e0)();
  }
  if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)();
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00139144  FUN_00139144 =====

void FUN_00139144(undefined8 *param_1)

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
                    /* try { // try from 0013918c to 00139197 has its CatchHandler @ 001391dc */
        (*(code *)(&PTR_FUN_00144948)[*(uint *)((long)pvVar2 + 0x58)])
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


// ===== 001391e0  FUN_001391e0 =====

ulong FUN_001391e0(undefined8 param_1,ulong *param_2,ulong param_3)

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


// ===== 00139618  FUN_00139618 =====

void FUN_00139618(long *param_1,ulong param_2)

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
      FUN_0012dfd0();
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


// ===== 00139774  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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
      goto LAB_00139830;
    }
                    /* try { // try from 001397e4 to 001397ef has its CatchHandler @ 00139834 */
    (*(code *)(&PTR_FUN_00144948)[uVar1])(&uStack_39,this);
  }
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  p_Var3 = (_func_decltype_auto *)folly::dynamic::dynamic(this,(dynamic *)param_3);
  *(undefined4 *)(this + 0x30) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return p_Var3;
  }
LAB_00139830:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00139838  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_assign[abi:ne180000]<std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__move_assignment<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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
      goto LAB_00139914;
    }
                    /* try { // try from 001398c0 to 001398cb has its CatchHandler @ 00139918 */
    (*(code *)(&PTR_FUN_00144948)[uVar1])(&uStack_39,puVar5);
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
LAB_00139914:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013991c  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<0ul,0ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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


// ===== 00139928  std::__ndk1::__variant_detail::__visitation::__base::__dispatcher<1ul,1ul>::__dispatch[abi:ne180000]<std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>::__generic_construct[abi:ne180000]<std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>>(std::__ndk1::__variant_detail::__ctor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>>&,std::__ndk1::__variant_detail::__move_constructor<std::__ndk1::__variant_detail::__traits<folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>,(std::__ndk1::__variant_detail::_Trait)1>&&)::{lambda(auto:1&,auto:2&&)#1}&&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&,std::__ndk1::__variant_detail::__base<(std::__ndk1::__variant_detail::_Trait)1,folly::dynamic,std::__ndk1::pair<facebook::jsi::Runtime*,facebook::jsi::Value>>&&> =====

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


// ===== 0013993c  FUN_0013993c =====

long * FUN_0013993c(long *param_1,byte *param_2)

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
                    /* try { // try from 00139988 to 0013998f has its CatchHandler @ 00139af4 */
  uVar8 = FUN_001391e0(&uStack_69,pbVar3,uVar8);
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
          if (uVar8 == uVar10) {
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
                  if (bVar4 >> 1 == uVar10) goto LAB_00139abc;
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
            if (uVar10 != uVar13) goto LAB_00139ab8;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_00139abc;
    }
  }
LAB_00139ab8:
  plVar9 = (long *)0x0;
LAB_00139abc:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00139af8  FUN_00139af8 =====

void FUN_00139af8(undefined8 *param_1)

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
                    /* try { // try from 00139b5c to 00139b67 has its CatchHandler @ 00139bbc */
      (*(code *)(&PTR_FUN_00144948)[*(uint *)(puVar2 + 0xb)])(&uStack_49,puVar2 + 5);
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


// ===== 00139bc0  FUN_00139bc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00139bc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_getColorCache_00144e78;
  *(undefined4 *)(PTR_getColorCache_00144e78 + 0x60) = 0x3f800000;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x50) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  puVar2[0x58] = puVar2[0x30];
  puVar2[100] = puVar2[0x31];
                    /* try { // try from 00139c00 to 00139c7f has its CatchHandler @ 00139cb8 */
  uVar3 = std::__ndk1::__next_prime(0x41);
  uVar5 = *(ulong *)(puVar2 + 0x40);
  if (uVar5 > uVar3 || uVar3 == uVar5) {
    if (uVar5 <= uVar3) goto LAB_00139c90;
    uVar4 = (ulong)((float)*(ulong *)(puVar2 + 0x50) / *(float *)(puVar2 + 0x60));
    if (uVar5 < 3) {
LAB_00139c7c:
      uVar4 = std::__ndk1::__next_prime(uVar4);
    }
    else {
      uVar7 = NEON_cnt(uVar5,1);
      uVar6 = NEON_uaddlv(uVar7,1);
      if (1 < (uint)CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6)) goto LAB_00139c7c;
      if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
    }
    if (uVar3 <= uVar4) {
      uVar3 = uVar4;
    }
    if (uVar5 <= uVar3) goto LAB_00139c90;
  }
  FUN_0013a44c(uVar3);
LAB_00139c90:
  uVar1 = _UNK_00110618;
  uVar7 = _DAT_00110610;
  *(undefined8 *)(puVar2 + 0x68) = 0;
  *(undefined **)(puVar2 + 0x70) = puVar2 + 0x70;
  *(undefined **)(puVar2 + 0x78) = puVar2 + 0x70;
  *(undefined8 *)(puVar2 + 0x88) = uVar1;
  *(undefined8 *)(puVar2 + 0x80) = uVar7;
  return;
}


// ===== 00139cf0  FUN_00139cf0 =====

void FUN_00139cf0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = param_1 + 0xe;
  plVar3 = (long *)*plVar5;
  while (plVar3 != plVar5) {
    plVar6 = (long *)*plVar3;
    operator_delete(plVar3);
    plVar3 = plVar6;
  }
  param_1[0xd] = 0;
  *plVar5 = 0;
  param_1[0xf] = 0;
  puVar1 = (undefined8 *)param_1[9];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar4;
  }
  pvVar4 = (void *)param_1[7];
  param_1[7] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar3 = (long *)param_1[4];
  if (plVar3 == param_1) {
    lVar2 = 4;
  }
  else {
    if (plVar3 == (long *)0x0) {
      return;
    }
    lVar2 = 5;
    param_1 = plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00139d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2 * 8))(param_1);
  return;
}


// ===== 00139da8  facebook::jni::JObject::getClass =====

/* facebook::jni::JObject::getClass() const */

void facebook::jni::JObject::getClass(void)

{
  undefined8 *in_x0;
  long *plVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  
                    /* try { // try from 00139dbc to 00139dcf has its CatchHandler @ 00139de0 */
  plVar1 = (long *)facebook::jni::Environment::current();
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1,*in_x0);
  *in_x8 = uVar2;
  return;
}


// ===== 00139de4  FUN_00139de4 =====

long FUN_00139de4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*param_1,"getColor",PTR_kDescriptor_00144eb0);
  facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00139e38  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00139e50 to 00139e63 has its CatchHandler @ 00139e74 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00139e78  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

/* facebook::jni::base_owned_ref<facebook::jni::JString,
   facebook::jni::LocalReferenceAllocator>::~base_owned_ref() */

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 != 0) {
                    /* try { // try from 00139e90 to 00139ea3 has its CatchHandler @ 00139eb4 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 00139eb8  FUN_00139eb8 =====

void FUN_00139eb8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00139ed0 to 00139ee3 has its CatchHandler @ 00139ef4 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 00139ef8  FUN_00139ef8 =====

void FUN_00139ef8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00139f10 to 00139f23 has its CatchHandler @ 00139f34 */
    plVar1 = (long *)facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 00139f38  FUN_00139f38 =====

void FUN_00139f38(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_0013ab0c(param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00139f74  FUN_00139f74 =====

void FUN_00139f74(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pbVar5 = (byte *)*param_1;
  if ((ulong)((param_1[2] - (long)pbVar5 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_0013a084();
                    /* WARNING: Subroutine does not return */
      FUN_00123164("vector");
    }
    pbVar6 = (byte *)param_1[1];
    pvVar2 = operator_new(param_2 * 0x18);
    lVar1 = (long)pvVar2 + ((long)pbVar6 - (long)pbVar5);
    pvVar2 = (void *)((long)pvVar2 + param_2 * 0x18);
    lVar3 = lVar1;
    if ((long)pbVar6 - (long)pbVar5 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar2;
    }
    else {
      do {
        uVar8 = *(undefined8 *)(pbVar6 + -0x10);
        uVar7 = *(undefined8 *)(pbVar6 + -0x18);
        *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(pbVar6 + -8);
        pbVar4 = pbVar6 + -0x18;
        *(undefined8 *)(lVar3 + -0x10) = uVar8;
        *(undefined8 *)(lVar3 + -0x18) = uVar7;
        lVar3 = lVar3 + -0x18;
        pbVar6[-0x10] = 0;
        pbVar6[-0xf] = 0;
        pbVar6[-0xe] = 0;
        pbVar6[-0xd] = 0;
        pbVar6[-0xc] = 0;
        pbVar6[-0xb] = 0;
        pbVar6[-10] = 0;
        pbVar6[-9] = 0;
        pbVar6[-8] = 0;
        pbVar6[-7] = 0;
        pbVar6[-6] = 0;
        pbVar6[-5] = 0;
        pbVar6[-4] = 0;
        pbVar6[-3] = 0;
        pbVar6[-2] = 0;
        pbVar6[-1] = 0;
        pbVar6[-0x18] = 0;
        pbVar6[-0x17] = 0;
        pbVar6[-0x16] = 0;
        pbVar6[-0x15] = 0;
        pbVar6[-0x14] = 0;
        pbVar6[-0x13] = 0;
        pbVar6[-0x12] = 0;
        pbVar6[-0x11] = 0;
        pbVar6 = pbVar4;
      } while (pbVar4 != pbVar5);
      pbVar5 = (byte *)*param_1;
      pbVar6 = (byte *)param_1[1];
      *param_1 = lVar3;
      param_1[1] = lVar1;
      param_1[2] = (long)pvVar2;
      while (pbVar4 = pbVar6, pbVar4 != pbVar5) {
        pbVar6 = pbVar4 + -0x18;
        if ((*pbVar6 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
      }
    }
    if (pbVar5 != (byte *)0x0) {
      operator_delete(pbVar5);
      return;
    }
  }
  return;
}


// ===== 0013a084  FUN_0013a084 =====

void FUN_0013a084(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00123164("vector");
}


// ===== 0013a098  FUN_0013a098 =====

undefined8 * FUN_0013a098(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    FUN_0013a084();
LAB_0013a1f8:
                    /* WARNING: Subroutine does not return */
    FUN_0012dfd0();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
    uVar7 = uVar1;
  }
  if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
    uVar7 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar7 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_0013a1f8;
    pvVar3 = operator_new(uVar7 * 0x18);
  }
  uVar8 = param_2[2];
  uVar13 = param_2[1];
  uVar12 = *param_2;
  puVar5 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pvVar3 = (void *)((long)pvVar3 + uVar7 * 0x18);
  pbVar10 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  puVar2 = puVar5 + 3;
  puVar5[1] = uVar13;
  *puVar5 = uVar12;
  puVar5[2] = uVar8;
  if (pbVar11 == pbVar10) {
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar3;
  }
  else {
    do {
      uVar12 = *(undefined8 *)(pbVar11 + -0x10);
      uVar8 = *(undefined8 *)(pbVar11 + -0x18);
      puVar5[-1] = *(undefined8 *)(pbVar11 + -8);
      pbVar9 = pbVar11 + -0x18;
      puVar5[-2] = uVar12;
      puVar5[-3] = uVar8;
      puVar5 = puVar5 + -3;
      pbVar11[-0x10] = 0;
      pbVar11[-0xf] = 0;
      pbVar11[-0xe] = 0;
      pbVar11[-0xd] = 0;
      pbVar11[-0xc] = 0;
      pbVar11[-0xb] = 0;
      pbVar11[-10] = 0;
      pbVar11[-9] = 0;
      pbVar11[-8] = 0;
      pbVar11[-7] = 0;
      pbVar11[-6] = 0;
      pbVar11[-5] = 0;
      pbVar11[-4] = 0;
      pbVar11[-3] = 0;
      pbVar11[-2] = 0;
      pbVar11[-1] = 0;
      pbVar11[-0x18] = 0;
      pbVar11[-0x17] = 0;
      pbVar11[-0x16] = 0;
      pbVar11[-0x15] = 0;
      pbVar11[-0x14] = 0;
      pbVar11[-0x13] = 0;
      pbVar11[-0x12] = 0;
      pbVar11[-0x11] = 0;
      pbVar11 = pbVar9;
    } while (pbVar9 != pbVar10);
    pbVar11 = (byte *)*param_1;
    pbVar10 = (byte *)param_1[1];
    *param_1 = (long)puVar5;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)pvVar3;
    while (pbVar9 = pbVar10, pbVar9 != pbVar11) {
      pbVar10 = pbVar9 + -0x18;
      if ((*pbVar10 & 1) != 0) {
        operator_delete(*(void **)(pbVar9 + -8));
      }
    }
  }
  if (pbVar11 != (byte *)0x0) {
    operator_delete(pbVar11);
  }
  return puVar2;
}


// ===== 0013a1fc  FUN_0013a1fc =====

void FUN_0013a1fc(long *param_1,ulong param_2)

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
      FUN_0012dfd0();
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


// ===== 0013a358  FUN_0013a358 =====

void FUN_0013a358(undefined8 *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) != '\0') {
    pbVar3 = *(byte **)((long)pvVar2 + 0x28);
    if (pbVar3 != (byte *)0x0) {
      pbVar1 = *(byte **)((long)pvVar2 + 0x30);
      pbVar4 = pbVar3;
      if (pbVar1 != pbVar3) {
        do {
          pbVar4 = pbVar1 + -0x18;
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar1 + -8));
          }
          pbVar1 = pbVar4;
        } while (pbVar4 != pbVar3);
        pbVar4 = *(byte **)((long)pvVar2 + 0x28);
      }
      *(byte **)((long)pvVar2 + 0x30) = pbVar3;
      operator_delete(pbVar4);
    }
    if ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar2 + 0x20));
    }
  }
  operator_delete(pvVar2);
  return;
}


// ===== 0013a3fc  FUN_0013a3fc =====

void FUN_0013a3fc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  void *pvVar3;
  
  puVar2 = PTR_getColorCache_00144e78;
  puVar1 = (undefined8 *)*(void **)(PTR_getColorCache_00144e78 + 0x48);
  while (puVar1 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar3;
  }
  pvVar3 = *(void **)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}


// ===== 0013a44c  FUN_0013a44c =====

void FUN_0013a44c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_getColorCache_00144e78;
  if (param_1 == 0) {
    pvVar3 = *(void **)(PTR_getColorCache_00144e78 + 0x38);
    *(undefined8 *)(PTR_getColorCache_00144e78 + 0x38) = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    *(undefined8 *)(puVar2 + 0x40) = 0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0012dfd0();
    }
    pvVar3 = operator_new(param_1 << 3);
    puVar2 = PTR_getColorCache_00144e78;
    pvVar4 = *(void **)(PTR_getColorCache_00144e78 + 0x38);
    *(void **)(PTR_getColorCache_00144e78 + 0x38) = pvVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    uVar5 = 0;
    *(ulong *)(puVar2 + 0x40) = param_1;
    do {
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_1 != uVar5);
    plVar7 = *(long **)(puVar2 + 0x48);
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar11 = NEON_cnt(param_1,1);
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
      if (uVar6 < 2) {
        uVar5 = uVar5 & param_1 - 1;
      }
      else if (param_1 <= uVar5) {
        uVar9 = 0;
        if (param_1 != 0) {
          uVar9 = uVar5 / param_1;
        }
        uVar5 = uVar5 - uVar9 * param_1;
      }
      *(undefined **)(*(long *)(puVar2 + 0x38) + uVar5 * 8) = puVar2 + 0x48;
      plVar8 = (long *)*plVar7;
      if (plVar8 != (long *)0x0) {
        do {
          uVar9 = plVar8[1];
          if (uVar6 < 2) {
            uVar9 = uVar9 & param_1 - 1;
          }
          else if (param_1 <= uVar9) {
            uVar1 = 0;
            if (param_1 != 0) {
              uVar1 = uVar9 / param_1;
            }
            uVar9 = uVar9 - uVar1 * param_1;
          }
          if (uVar9 != uVar5) {
            if (*(long *)(*(long *)(puVar2 + 0x38) + uVar9 * 8) == 0) {
              *(long **)(*(long *)(puVar2 + 0x38) + uVar9 * 8) = plVar7;
              uVar5 = uVar9;
            }
            else {
              *plVar7 = *plVar8;
              *plVar8 = **(long **)(*(long *)(puVar2 + 0x38) + uVar9 * 8);
              **(undefined8 **)(*(long *)(puVar2 + 0x38) + uVar9 * 8) = plVar8;
              plVar8 = plVar7;
            }
          }
          plVar7 = plVar8;
          plVar8 = (long *)*plVar7;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 0013a5b4  FUN_0013a5b4 =====

void FUN_0013a5b4(undefined8 *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  pppuVar2 = local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_00144988;
                    /* try { // try from 0013a5ec to 0013a5f3 has its CatchHandler @ 0013a640 */
  (**(code **)*param_1)(local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar3 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_0013a620;
    lVar3 = 5;
    pppuVar2 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar2 + lVar3 * 8))();
LAB_0013a620:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013a690  FUN_0013a690 =====

void FUN_0013a690(void)

{
  return;
}


// ===== 0013a694  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 0013a698  FUN_0013a698 =====

void FUN_0013a698(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_00144988;
  return;
}


// ===== 0013a6bc  FUN_0013a6bc =====

void FUN_0013a6bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00144988;
  return;
}


// ===== 0013a6cc  FUN_0013a6cc =====

void FUN_0013a6cc(void)

{
  return;
}


// ===== 0013a6d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00145020)();
  return;
}


// ===== 0013a6d4  FUN_0013a6d4 =====

void FUN_0013a6d4(void)

{
  long lVar1;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::mutex::lock();
  local_40 = 0;
                    /* try { // try from 0013a70c to 0013a713 has its CatchHandler @ 0013a73c */
  FUN_0013a790(*(undefined8 *)(PTR_getColorCache_00144e78 + 0x50),auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    std::__ndk1::mutex::unlock();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0013a768  FUN_0013a768 =====

long FUN_0013a768(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_00144ea0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0013a784  FUN_0013a784 =====

undefined * FUN_0013a784(void)

{
  return PTR_typeinfo_00144ea8;
}


// ===== 0013a790  FUN_0013a790 =====

void FUN_0013a790(long param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  long local_50;
  long local_48;
  
  puVar4 = PTR_getColorCache_00144e78;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_1 != 0) {
    lVar18 = 0;
    puVar1 = PTR_getColorCache_00144e78;
    if (*(long *)(param_2 + 0x20) != 0) {
      puVar1 = param_2;
    }
    do {
      if (*(undefined **)(puVar4 + 0x70) == (undefined *)0x0 ||
          *(undefined **)(puVar4 + 0x70) == puVar4 + 0x70) break;
      plVar17 = *(long **)(puVar4 + 0x78);
      lVar11 = *plVar17;
      plVar6 = (long *)plVar17[1];
      *(long *)(puVar4 + 0x68) = *(long *)(puVar4 + 0x68) + -1;
      *plVar6 = lVar11;
      *(long **)(lVar11 + 8) = plVar6;
      *plVar17 = 0;
      plVar17[1] = 0;
      uVar7 = *(ulong *)(puVar4 + 0x40);
      if (uVar7 != 0) {
        uVar9 = plVar17[2];
        uVar20 = NEON_cnt(uVar7,1);
        uVar19 = NEON_uaddlv(uVar20,1);
        uVar10 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
        if (uVar10 < 2) {
          uVar16 = uVar7 - 1 & uVar9;
        }
        else {
          uVar16 = uVar9;
          if (uVar7 <= uVar9) {
            uVar16 = 0;
            if (uVar7 != 0) {
              uVar16 = uVar9 / uVar7;
            }
            uVar16 = uVar9 - uVar16 * uVar7;
          }
        }
        lVar11 = *(long *)(puVar4 + 0x38);
        puVar12 = *(undefined8 **)(lVar11 + uVar16 * 8);
        if ((puVar12 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar12, plVar6 != (long *)0x0)) {
          uVar13 = uVar7 - 1;
LAB_0013a898:
          uVar14 = plVar6[1];
          if (uVar14 == uVar9) {
            if (*(ulong *)(plVar6[2] + 0x10) != uVar9) goto LAB_0013a890;
            if (uVar10 < 2) {
              uVar9 = uVar13 & uVar9;
            }
            else if (uVar7 <= uVar9) {
              uVar16 = 0;
              if (uVar7 != 0) {
                uVar16 = uVar9 / uVar7;
              }
              uVar9 = uVar9 - uVar16 * uVar7;
            }
            plVar5 = *(long **)(lVar11 + uVar9 * 8);
            do {
              plVar15 = plVar5;
              plVar5 = (long *)*plVar15;
            } while ((long *)*plVar15 != plVar6);
            if (plVar15 == (long *)(puVar4 + 0x48)) {
LAB_0013a960:
              if (*plVar6 != 0) {
                uVar16 = *(ulong *)(*plVar6 + 8);
                if (uVar10 < 2) {
                  uVar16 = uVar16 & uVar13;
                }
                else if (uVar7 <= uVar16) {
                  uVar14 = 0;
                  if (uVar7 != 0) {
                    uVar14 = uVar16 / uVar7;
                  }
                  uVar16 = uVar16 - uVar14 * uVar7;
                }
                if (uVar16 == uVar9) goto LAB_0013a998;
              }
              *(undefined8 *)(lVar11 + uVar9 * 8) = 0;
            }
            else {
              uVar16 = plVar15[1];
              if (uVar10 < 2) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar7 <= uVar16) {
                uVar14 = 0;
                if (uVar7 != 0) {
                  uVar14 = uVar16 / uVar7;
                }
                uVar16 = uVar16 - uVar14 * uVar7;
              }
              if (uVar16 != uVar9) goto LAB_0013a960;
            }
LAB_0013a998:
            lVar11 = *plVar6;
            if (lVar11 != 0) {
              uVar16 = *(ulong *)(lVar11 + 8);
              if (uVar10 < 2) {
                uVar16 = uVar16 & uVar13;
              }
              else if (uVar7 <= uVar16) {
                uVar10 = 0;
                if (uVar7 != 0) {
                  uVar10 = uVar16 / uVar7;
                }
                uVar16 = uVar16 - uVar10 * uVar7;
              }
              if (uVar16 != uVar9) {
                *(long **)(*(long *)(puVar4 + 0x38) + uVar16 * 8) = plVar15;
                lVar11 = *plVar6;
              }
            }
            lVar8 = *(long *)(puVar4 + 0x50);
            *plVar15 = lVar11;
            *plVar6 = 0;
            *(long *)(puVar4 + 0x50) = lVar8 + -1;
            operator_delete(plVar6);
            plVar6 = *(long **)(puVar1 + 0x20);
            goto joined_r0x0013a9f4;
          }
          if (uVar10 < 2) {
            uVar14 = uVar14 & uVar13;
          }
          else if (uVar7 <= uVar14) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar2 * uVar7;
          }
          if (uVar14 == uVar16) goto LAB_0013a890;
        }
      }
LAB_0013a8cc:
      plVar6 = *(long **)(puVar1 + 0x20);
joined_r0x0013a9f4:
      if (plVar6 != (long *)0x0) {
        local_50 = plVar17[2];
                    /* try { // try from 0013a8e4 to 0013a8ef has its CatchHandler @ 0013aa24 */
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_50,plVar17 + 3);
      }
      operator_delete(plVar17);
      lVar18 = lVar18 + 1;
    } while (lVar18 != param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0013a890:
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) goto LAB_0013a8cc;
  goto LAB_0013a898;
}


// ===== 0013aa4c  FUN_0013aa4c =====

void FUN_0013aa4c(long param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
                    /* try { // try from 0013aa60 to 0013aa63 has its CatchHandler @ 0013aa6c */
    std::__ndk1::__shared_mutex_base::unlock_shared();
  }
  return;
}


