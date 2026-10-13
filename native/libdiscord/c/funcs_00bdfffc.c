// ===== 00bdfffc  FUN_00bdfffc =====

void FUN_00bdfffc(void)

{
  return;
}


// ===== 00be0004  FUN_00be0004 =====

void FUN_00be0004(void)

{
  return;
}


// ===== 00be000c  FUN_00be000c =====

void FUN_00be000c(void)

{
  return;
}


// ===== 00be0014  FUN_00be0014 =====

void FUN_00be0014(void)

{
  return;
}


// ===== 00be001c  FUN_00be001c =====

void FUN_00be001c(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined2 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  *(undefined2 *)(param_1 + 4) = uVar2;
  puVar3 = param_1 + 5;
  *(undefined1 *)puVar3 = 0;
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x67) < '\0') {
      FUN_005478d8(puVar3,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x50);
      uVar4 = *(undefined8 *)(param_2 + 0x60);
      param_1[6] = *(undefined8 *)(param_2 + 0x58);
      *puVar3 = uVar5;
      param_1[7] = uVar4;
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 0x70);
  return;
}


// ===== 00be00a4  FUN_00be00a4 =====

void FUN_00be00a4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 0x10);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00be0114  FUN_00be0114 =====

void FUN_00be0114(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == param_1 + 0x10) {
      return;
    }
    if (*(long *)(lVar1 + 0x10) == param_2) break;
    lVar1 = *(long *)(lVar1 + 8);
  }
  FUN_00adf5f4(param_1 + 0x10,lVar1);
  return;
}


// ===== 00be014c  FUN_00be014c =====

bool FUN_00be014c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x78) == 1;
}


// ===== 00be0164  FUN_00be0164 =====

void FUN_00be0164(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)operator_new(0x18);
  if ((plVar1 != (long *)0x0) && (plVar1 != (long *)0xfffffffffffffff0)) {
    plVar3 = (long *)(param_1 + 8);
    lVar2 = *plVar3;
    plVar1[1] = (long)plVar3;
    plVar1[2] = param_2;
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar3 = (long)plVar1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00be01d4  FUN_00be01d4 =====

void FUN_00be01d4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  while( true ) {
    if (plVar2 == (long *)(param_1 + 8)) {
      return;
    }
    if (plVar2[2] == param_2) break;
    plVar2 = (long *)plVar2[1];
  }
  if (plVar2 != (long *)(param_1 + 8)) {
    plVar1 = (long *)plVar2[1];
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    if ((plVar2 != (long *)0xfffffffffffffff0) && (plVar2 != (long *)0x0)) {
      operator_delete(plVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:1412: libc++ Hardening assertion __p != end() failed: list::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 00be0280  FUN_00be0280 =====

void FUN_00be0280(long param_1)

{
  FUN_00bdfefc(param_1 + -8);
  return;
}


// ===== 00be028c  FUN_00be028c =====

void FUN_00be028c(long param_1)

{
  FUN_00bdfefc((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00be02c0  FUN_00be02c0 =====

void FUN_00be02c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe02c8);
  (*pcVar1)();
}


// ===== 00be02c8  FUN_00be02c8 =====

void FUN_00be02c8(long param_1)

{
  FUN_00bdfefc(param_1 + -8);
  return;
}


// ===== 00be02d4  FUN_00be02d4 =====

void FUN_00be02d4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe02dc);
  (*pcVar1)();
}


// ===== 00be02dc  FUN_00be02dc =====

void FUN_00be02dc(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d489d0;
  param_1[1] = &PTR_FUN_00d48a50;
  if (param_1[4] != 0) {
    plVar1 = (long *)param_1[3];
    plVar2 = *(long **)(param_1[2] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[4] = 0;
    while (plVar1 != param_1 + 2) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00be037c  FUN_00be037c =====

void FUN_00be037c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe0384);
  (*pcVar1)();
}


// ===== 00be0384  FUN_00be0384 =====

void FUN_00be0384(void)

{
  return;
}


// ===== 00be038c  FUN_00be038c =====

void FUN_00be038c(void)

{
  return;
}


// ===== 00be0394  FUN_00be0394 =====

void FUN_00be0394(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  param_1[-1] = &PTR_FUN_00d489d0;
  *param_1 = &PTR_FUN_00d48a50;
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    plVar2 = *(long **)(param_1[1] + 8);
    *(long **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    param_1[3] = 0;
    while (plVar1 != param_1 + 1) {
      if ((plVar1 == (long *)0xfffffffffffffff0) || (plVar1 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar1[1];
      operator_delete(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00be0434  FUN_00be0434 =====

void FUN_00be0434(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe043c);
  (*pcVar1)();
}


// ===== 00be043c  FUN_00be043c =====

undefined8 FUN_00be043c(void)

{
  return 0;
}


// ===== 00be0448  FUN_00be0448 =====

undefined8 FUN_00be0448(void)

{
  return 0;
}


// ===== 00be0454  FUN_00be0454 =====

void FUN_00be0454(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00be0460  FUN_00be0460 =====

void FUN_00be0460(undefined8 param_1)

{
  FUN_00897504(param_1);
  return;
}


// ===== 00be046c  FUN_00be046c =====

void FUN_00be046c(void)

{
  return;
}


// ===== 00be0474  FUN_00be0474 =====

void FUN_00be0474(void)

{
  return;
}


// ===== 00be047c  FUN_00be047c =====

void FUN_00be047c(void)

{
  return;
}


// ===== 00be0484  FUN_00be0484 =====

void FUN_00be0484(void)

{
  return;
}


// ===== 00be048c  FUN_00be048c =====

void FUN_00be048c(void)

{
  return;
}


// ===== 00be0494  FUN_00be0494 =====

void FUN_00be0494(undefined8 param_1,long param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  size_t __n;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *__s1;
  
  uVar4 = FUN_007e8e30(param_2 + 0x50);
  if (((uVar4 & 1) != 0) || (uVar4 = FUN_007e95f8(param_2 + 0x50), (uVar4 & 1) != 0)) {
    pcVar5 = "candidate has address of zero";
    uVar6 = 0x1d;
    goto LAB_00be04dc;
  }
  uVar2 = FUN_007e8eb4(param_2 + 0x50);
  __s1 = (undefined8 *)(param_2 + 0x20);
  __n = strlen(PTR_DAT_00d528f0);
  if ((long)*(char *)(param_2 + 0x37) < 0) {
    if (__n == *(size_t *)(param_2 + 0x28)) {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      __s1 = (undefined8 *)*__s1;
      goto LAB_00be053c;
    }
  }
  else if (__n == (long)*(char *)(param_2 + 0x37)) {
LAB_00be053c:
    iVar3 = memcmp(__s1,PTR_DAT_00d528f0,__n);
    if (iVar3 == 0) {
      piVar7 = (int *)(param_2 + 0x160);
      if (*(char *)(param_2 + 0x177) < '\0') {
        if (*(long *)(param_2 + 0x168) == 6) {
          piVar7 = *(int **)piVar7;
          goto LAB_00be0578;
        }
LAB_00be059c:
        bVar1 = false;
      }
      else {
        if (*(char *)(param_2 + 0x177) != '\x06') goto LAB_00be059c;
LAB_00be0578:
        bVar1 = *piVar7 == 0x69746361 && (short)piVar7[1] == 0x6576;
      }
      if ((uVar2 == 0) || (bVar1)) goto LAB_00be05ec;
    }
  }
  if (uVar2 < 0x400) {
    if ((uVar2 == 0x50) || (uVar2 == 0x1bb)) {
      uVar4 = FUN_007e9674(param_2 + 0x50);
      if ((uVar4 & 1) == 0) goto LAB_00be05ec;
      pcVar5 = "candidate has port of 80 or 443 with private IP address";
      uVar6 = 0x37;
    }
    else {
      pcVar5 = "candidate has port below 1024, but not 80 or 443";
      uVar6 = 0x30;
    }
LAB_00be04dc:
    FUN_00b0092c(param_1,3,pcVar5,uVar6);
    return;
  }
LAB_00be05ec:
  FUN_005ecd48(param_1);
  return;
}


// ===== 00be0620  FUN_00be0620 =====

void FUN_00be0620(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = 0;
  param_1[0x28] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  param_1[0x40] = 0;
  param_1[0x48] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x60) = 2;
  param_1[0x68] = 0;
  param_1[0x70] = 0;
  param_1[0x78] = 0;
  param_1[0x80] = 0;
  param_1[0x88] = 0;
  param_1[0x90] = 0;
  param_1[0x98] = 0;
  param_1[0xa0] = 0;
  param_1[0xa8] = 0;
  param_1[0xac] = 0;
  param_1[0xb0] = 0;
  param_1[0xb8] = 0;
  param_1[0xc0] = 0;
  param_1[200] = 0;
  param_1[0xd0] = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xdc] = 0;
  return;
}


// ===== 00be06ac  FUN_00be06ac =====

void FUN_00be06ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined1 *)((long)param_1 + 0x24) = param_5;
  param_1[5] = param_6;
  *(undefined1 *)(param_1 + 7) = param_7;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  param_1[8] = param_8;
  param_1[10] = param_9;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  return;
}


// ===== 00be0744  FUN_00be0744 =====

void FUN_00be0744(long *param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_2 + 0x6c);
  lVar3 = (long)iVar2 * 1000;
  *(bool *)(param_1 + 1) = iVar2 != -1;
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  *param_1 = lVar3;
  iVar2 = *(int *)(param_2 + 0x70);
  lVar3 = (long)iVar2 * 1000;
  *(bool *)(param_1 + 3) = iVar2 != -1;
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  param_1[2] = lVar3;
  *(uint *)(param_1 + 4) = (uint)(*(int *)(param_2 + 0x74) == 1);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)(param_2 + 0x78);
  lVar3 = *(long *)(param_2 + 0x144);
  *(byte *)(param_1 + 6) = (byte)((ulong)lVar3 >> 0x20) & 1;
  param_1[5] = (long)(int)lVar3 * 1000 & (lVar3 << 0x1f) >> 0x3f;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0xa4);
  uVar1 = *(undefined1 *)(param_2 + 0xa7);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined1 *)((long)param_1 + 0x39) = uVar1;
  lVar3 = *(long *)(param_2 + 0xa8);
  *(byte *)(param_1 + 0xe) = (byte)((ulong)lVar3 >> 0x20) & 1;
  param_1[0xd] = (long)(int)lVar3 * 1000 & (lVar3 << 0x1f) >> 0x3f;
  lVar3 = *(long *)(param_2 + 0xb0);
  *(byte *)(param_1 + 0x10) = (byte)((ulong)lVar3 >> 0x20) & 1;
  param_1[0xf] = (long)(int)lVar3 * 1000 & (lVar3 << 0x1f) >> 0x3f;
  lVar3 = *(long *)(param_2 + 0xb8);
  *(byte *)(param_1 + 0x12) = (byte)((ulong)lVar3 >> 0x20) & 1;
  param_1[0x11] = (long)(int)lVar3 * 1000 & (lVar3 << 0x1f) >> 0x3f;
  lVar3 = *(long *)(param_2 + 0xc0);
  *(byte *)(param_1 + 0x14) = (byte)((ulong)lVar3 >> 0x20) & 1;
  param_1[0x13] = (long)(int)lVar3 * 1000 & (lVar3 << 0x1f) >> 0x3f;
  param_1[0x15] = *(long *)(param_2 + 200);
  lVar3 = *(long *)(param_2 + 0xd0);
  *(byte *)(param_1 + 0x17) = (byte)((ulong)lVar3 >> 0x20) & 1;
  param_1[0x16] = (long)(int)lVar3 * 1000 & (lVar3 << 0x1f) >> 0x3f;
  lVar3 = *(long *)(param_2 + 0xd8);
  *(byte *)(param_1 + 0x19) = (byte)((ulong)lVar3 >> 0x20) & 1;
  param_1[0x18] = (long)(int)lVar3 * 1000 & (lVar3 << 0x1f) >> 0x3f;
  lVar3 = *(long *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  param_1[0x1a] = lVar3;
  return;
}


// ===== 00be08b0  FUN_00be08b0 =====

void FUN_00be08b0(void)

{
  return;
}


// ===== 00be08b8  FUN_00be08b8 =====

undefined8 FUN_00be08b8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    param_1 = (undefined8 *)&UNK_00258078;
  }
  return *param_1;
}


// ===== 00be08d8  FUN_00be08d8 =====

undefined8 FUN_00be08d8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) == '\0') {
    puVar1 = (undefined8 *)&UNK_00258080;
  }
  return *puVar1;
}


// ===== 00be08fc  FUN_00be08fc =====

undefined8 FUN_00be08fc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\0') {
    puVar1 = (undefined8 *)&UNK_00258088;
  }
  return *puVar1;
}


// ===== 00be0920  FUN_00be0920 =====

undefined8 FUN_00be0920(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x48) == '\0') {
    puVar1 = (undefined8 *)&UNK_00258090;
  }
  return *puVar1;
}


// ===== 00be0944  FUN_00be0944 =====

undefined8 FUN_00be0944(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x58) == '\0') {
    puVar1 = (undefined8 *)&UNK_00258098;
  }
  return *puVar1;
}


// ===== 00be0968  FUN_00be0968 =====

undefined8 FUN_00be0968(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x70) == '\0') {
    puVar1 = (undefined8 *)&UNK_002580a0;
  }
  return *puVar1;
}


// ===== 00be098c  FUN_00be098c =====

undefined8 FUN_00be098c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x80) == '\0') {
    puVar1 = (undefined8 *)&UNK_002580a8;
  }
  return *puVar1;
}


// ===== 00be09b0  FUN_00be09b0 =====

undefined8 FUN_00be09b0(long param_1)

{
  if (*(char *)(param_1 + 0x90) == '\x01') {
    return *(undefined8 *)(param_1 + 0x88);
  }
  return 0xfffffffffffffc18;
}


// ===== 00be09d0  FUN_00be09d0 =====

undefined8 FUN_00be09d0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xa0) == '\0') {
    puVar1 = (undefined8 *)&UNK_002580b0;
  }
  return *puVar1;
}


// ===== 00be09f4  FUN_00be09f4 =====

undefined4 FUN_00be09f4(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0xac) == '\0') {
    puVar1 = (undefined4 *)&DAT_00258074;
  }
  return *puVar1;
}


// ===== 00be0a18  FUN_00be0a18 =====

undefined8 FUN_00be0a18(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    puVar1 = (undefined8 *)&UNK_002580b8;
  }
  return *puVar1;
}


// ===== 00be0a3c  FUN_00be0a3c =====

undefined8 FUN_00be0a3c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xc0);
  if (*(char *)(param_1 + 200) == '\0') {
    puVar1 = (undefined8 *)&UNK_002580c0;
  }
  return *puVar1;
}


// ===== 00be0a60  FUN_00be0a60 =====

void FUN_00be0a60(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = param_2 + 0xd;
  if ((char)param_2[0xe] == '\0') {
    plVar2 = (long *)&UNK_002580a0;
  }
  lVar4 = *plVar2;
  plVar2 = param_2 + 0xf;
  if ((char)param_2[0x10] == '\0') {
    plVar2 = (long *)&UNK_002580a8;
  }
  if (lVar4 < *plVar2) {
    FUN_00b0092c(param_1,3,
                 "Ping interval of candidate pairs is shorter when ICE is strongly connected than that when ICE is weakly connected"
                 ,0x71);
    return;
  }
  plVar2 = param_2;
  if ((char)param_2[1] == '\0') {
    plVar2 = (long *)&UNK_00258078;
  }
  if ((char)param_2[0x12] == '\x01') {
    lVar5 = param_2[0x11];
  }
  else {
    lVar5 = -1000;
  }
  lVar1 = lVar4;
  if (lVar4 <= lVar5) {
    lVar1 = lVar5;
  }
  if (*plVar2 < lVar1) {
    FUN_00b0092c(param_1,3,"Receiving timeout is shorter than the minimal ping interval.",0x3c);
    return;
  }
  plVar2 = param_2 + 2;
  if ((char)param_2[3] == '\0') {
    plVar2 = (long *)&UNK_00258080;
  }
  if (*plVar2 < lVar4) {
    FUN_00b0092c(param_1,3,
                 "Ping interval of backup candidate pairs is shorter than that of general candidate pairs when ICE is strongly connected"
                 ,0x76);
    return;
  }
  plVar2 = param_2 + 5;
  if ((char)param_2[6] == '\0') {
    plVar2 = (long *)&UNK_00258088;
  }
  if (*plVar2 < lVar4) {
    FUN_00b0092c(param_1,3,
                 "Ping interval of stable and writable candidate pairs is shorter than that of general candidate pairs when ICE is strongly connected"
                 ,0x83);
    return;
  }
  plVar2 = param_2 + 0x13;
  if ((char)param_2[0x14] == '\0') {
    plVar2 = (long *)&UNK_002580b0;
  }
  plVar3 = param_2 + 0x16;
  if ((char)param_2[0x17] == '\0') {
    plVar3 = (long *)&UNK_002580b8;
  }
  if (*plVar3 < *plVar2) {
    FUN_00b0092c(param_1,3,
                 "The timeout period for the writability state to become UNRELIABLE is longer than that to become TIMEOUT."
                 ,0x68);
    return;
  }
  FUN_005ecd48();
  return;
}


// ===== 00be0be8  FUN_00be0be8 =====

void FUN_00be0be8(undefined8 *param_1)

{
  FUN_00bc82f0();
  *param_1 = &PTR_FUN_00d48a90;
  FUN_007b5d10(param_1 + 0x1e);
  FUN_007b5d10(param_1 + 0x22);
  FUN_007b5d10(param_1 + 0x26);
  param_1[0x2c] = FUN_00433984;
  param_1[0x2d] = 0;
  param_1[0x30] = FUN_00433984;
  param_1[0x31] = 0;
  param_1[0x34] = FUN_00433984;
  param_1[0x35] = 0;
  FUN_007b5d10(param_1 + 0x36);
  FUN_007b5d10(param_1 + 0x3a);
  FUN_007b5d10(param_1 + 0x3e);
  return;
}


// ===== 00be0c5c  FUN_00be0c5c =====

void FUN_00be0c5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d48a90;
  FUN_007b5d24(param_1 + 0x3e);
  FUN_007b5d24(param_1 + 0x3a);
  FUN_007b5d24(param_1 + 0x36);
  (*(code *)param_1[0x34])(0,param_1 + 0x32,param_1 + 0x32);
  (*(code *)param_1[0x30])(0,param_1 + 0x2e,param_1 + 0x2e);
  (*(code *)param_1[0x2c])(0,param_1 + 0x2a,param_1 + 0x2a);
  FUN_007b5d24(param_1 + 0x26);
  FUN_007b5d24(param_1 + 0x22);
  FUN_007b5d24(param_1 + 0x1e);
  FUN_00bc8354(param_1);
  return;
}


// ===== 00be0cfc  FUN_00be0cfc =====

void FUN_00be0cfc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe0d04);
  (*pcVar1)();
}


// ===== 00be0d04  FUN_00be0d04 =====

void FUN_00be0d04(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00be0f94;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00be0fa4;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x130,param_2,&local_48);
  return;
}


// ===== 00be0d9c  FUN_00be0d9c =====

void FUN_00be0d9c(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00be0fe4;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00be0ff4;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x1b0,param_2,&local_48);
  return;
}


// ===== 00be0e34  FUN_00be0e34 =====

void FUN_00be0e34(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00be0f94;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00be0fa4;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x1d0,param_2,&local_48);
  return;
}


// ===== 00be0ecc  FUN_00be0ecc =====

void FUN_00be0ecc(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00be0f94;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00be0fa4;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x1f0,param_2,&local_48);
  return;
}


// ===== 00be0f64  FUN_00be0f64 =====

void FUN_00be0f64(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00be0f74  FUN_00be0f74 =====

undefined1  [16] FUN_00be0f74(void)

{
  return ZEXT816(0);
}


// ===== 00be0f84  FUN_00be0f84 =====

void FUN_00be0f84(void)

{
  return;
}


// ===== 00be0f8c  FUN_00be0f8c =====

void FUN_00be0f8c(void)

{
  return;
}


// ===== 00be0f94  FUN_00be0f94 =====

void FUN_00be0f94(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00be0fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00be0fa4  FUN_00be0fa4 =====

void FUN_00be0fa4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00be0fe4  FUN_00be0fe4 =====

void FUN_00be0fe4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00be0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00be0ff4  FUN_00be0ff4 =====

void FUN_00be0ff4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00be1034  FUN_00be1034 =====

void FUN_00be1034(int *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 local_78 [16];
  char *local_68;
  ulong local_60;
  undefined1 *local_58;
  undefined1 uStack_31;
  
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  do {
    if (puVar1 == puVar2) {
      FUN_005ecd48(param_1);
      return;
    }
    puVar6 = (undefined8 *)puVar1[3];
    puVar3 = (undefined8 *)puVar1[4];
    if (puVar6 == puVar3) {
      lVar7 = (long)*(char *)((long)puVar1 + 0x17);
      if (lVar7 < 0) {
        if (puVar1[1] == 0) goto LAB_00be1220;
        *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
        puVar6 = (undefined8 *)*puVar1;
        lVar7 = puVar1[1];
      }
      else {
        if (*(char *)((long)puVar1 + 0x17) == '\0') {
LAB_00be1220:
          uVar4 = FUN_004249b0();
          if ((uVar4 & 1) == 0) {
            local_60 = 0xb6b;
LAB_00be119c:
            local_68 = "../../pc/ice_server_parsing.cc";
            local_58 = &uStack_31;
            local_78 = FUN_005eceec(5);
            FUN_00623bb0(&DAT_00255ab0,local_68,local_60 & 0xffffffff,
                         "ICE server parsing failed: Empty uri.",&DAT_001a2df6,local_78,
                         &DAT_001ca519);
          }
LAB_00be11e8:
          FUN_00b0092c(param_1,5,"ICE server parsing failed: Empty uri.",0x25);
          return;
        }
        *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
        puVar6 = puVar1;
      }
      FUN_00be1238(param_1,puVar1,puVar6,lVar7,param_3,param_4);
      if (*param_1 != 0) {
        return;
      }
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        operator_delete(*(void **)(param_1 + 2));
      }
    }
    else {
      do {
        lVar7 = (long)*(char *)((long)puVar6 + 0x17);
        if (lVar7 < 0) {
          lVar7 = puVar6[1];
        }
        if (lVar7 == 0) {
          uVar4 = FUN_004249b0();
          if ((uVar4 & 1) != 0) goto LAB_00be11e8;
          local_60 = 0xadb;
          goto LAB_00be119c;
        }
        *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
        lVar7 = (long)*(char *)((long)puVar6 + 0x17);
        puVar5 = puVar6;
        if (lVar7 < 0) {
          lVar7 = puVar6[1];
          puVar5 = (undefined8 *)*puVar6;
        }
        FUN_00be1238(param_1,puVar1,puVar5,lVar7,param_3,param_4);
        if (*param_1 != 0) {
          return;
        }
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          operator_delete(*(void **)(param_1 + 2));
        }
        puVar6 = puVar6 + 3;
      } while (puVar6 != puVar3);
    }
    puVar1 = puVar1 + 0x16;
  } while( true );
}


// ===== 00be1238  FUN_00be1238 =====

/* WARNING: Removing unreachable block (ram,0x00be20e0) */
/* WARNING: Removing unreachable block (ram,0x00be2174) */

void FUN_00be1238(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  byte bVar3;
  char *pcVar4;
  undefined **ppuVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  void *pvVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined **ppuVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  long lVar21;
  char *pcVar22;
  undefined4 uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined **ppuVar26;
  long lVar27;
  long lVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 auVar31 [12];
  undefined **local_1c0;
  undefined **ppuStack_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 local_120 [16];
  undefined1 uStack_109;
  undefined1 local_108 [16];
  undefined1 *local_f8;
  undefined1 local_f0 [8];
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_006252b4(&local_90,param_3,param_4,0x3f);
  ppuStack_98 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  if (puStack_88 == local_90) {
LAB_00be1f20:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  ppuStack_98 = (undefined **)local_90[1];
  local_a0 = (undefined **)*local_90;
  if ((long)puStack_88 - (long)local_90 == 0x20) {
    ppuStack_1b8 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
    local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_006252b4(&local_1c0,local_90[2],local_90[3],0x3d);
    if (ppuStack_1b8 == local_1c0) goto LAB_00be1f20;
    if ((local_1c0[1] == (undefined *)0x9) &&
       (*(long *)*local_1c0 == 0x726f70736e617274 && (char)*(long *)((long)*local_1c0 + 8) == 't'))
    {
      if (0x10 < (ulong)((long)ppuStack_1b8 - (long)local_1c0)) {
        uVar8 = FUN_00b00abc(local_1c0[2],local_1c0[3]);
        if (((uVar8 >> 0x20 & 1) == 0) || ((uVar8 & 0xfffffffd) != 0)) {
          uVar8 = FUN_004249b0();
          if ((uVar8 & 1) == 0) {
            local_f0 = (undefined1  [8])0x1bbb73;
            puStack_e8 = (undefined1 *)0x693;
            local_e0 = local_120;
            local_108 = FUN_005eceec(5);
            FUN_00623bb0(&DAT_00255ab0,local_f0,(ulong)puStack_e8 & 0xffffffff,
                         "ICE server parsing failed: Transport parameter should always be udp or tcp."
                         ,&DAT_001a2df6,local_108,&DAT_001ca519);
          }
          FUN_00b0092c(param_1,5,
                       "ICE server parsing failed: Transport parameter should always be udp or tcp."
                       ,0x4b);
          if (local_1c0 != (undefined **)0x0) {
            uVar24 = (ulong)((long)ppuStack_1b8 + (-0x10 - ((long)ppuStack_1b8 << 0x3c))) >> 4;
            uVar8 = (ulong)(((long)local_1c0 - (long)ppuStack_1b8 << 0x3c) -
                           ((long)local_1c0 - (long)ppuStack_1b8)) >> 4;
            if (uVar24 <= uVar8) {
              uVar8 = uVar24;
            }
            ppuVar17 = ppuStack_1b8;
            if ((1 < uVar8) &&
               ((((int)local_1c0 - (int)ppuStack_1b8 | -(int)ppuStack_1b8) & 0xfU) == 0)) {
              uVar8 = uVar8 & 0xffffffffffffffe;
              ppuVar17 = ppuStack_1b8 + uVar8 * -2;
              do {
                uVar8 = uVar8 - 2;
              } while (uVar8 != 0);
            }
            do {
              if (ppuVar17 == local_1c0) goto LAB_00be1b3c;
              ppuVar17 = ppuVar17 + -2;
            } while (ppuVar17 != (undefined **)0x0);
            goto LAB_00be15ac;
          }
          goto LAB_00be1540;
        }
        if (local_1c0 != (undefined **)0x0) {
          uVar25 = (ulong)((long)ppuStack_1b8 + (-0x10 - ((long)ppuStack_1b8 << 0x3c))) >> 4;
          uVar24 = (ulong)(((long)local_1c0 - (long)ppuStack_1b8 << 0x3c) -
                          ((long)local_1c0 - (long)ppuStack_1b8)) >> 4;
          if (uVar25 <= uVar24) {
            uVar24 = uVar25;
          }
          ppuVar17 = ppuStack_1b8;
          if ((1 < uVar24) &&
             ((((int)local_1c0 - (int)ppuStack_1b8 | -(int)ppuStack_1b8) & 0xfU) == 0)) {
            uVar24 = uVar24 & 0xffffffffffffffe;
            ppuVar17 = ppuStack_1b8 + uVar24 * -2;
            do {
              uVar24 = uVar24 - 2;
            } while (uVar24 != 0);
          }
          do {
            if (ppuVar17 == local_1c0) {
              ppuStack_1b8 = local_1c0;
              operator_delete(local_1c0);
              goto LAB_00be1400;
            }
            ppuVar17 = ppuVar17 + -2;
          } while (ppuVar17 != (undefined **)0x0);
          goto LAB_00be15ac;
        }
        goto LAB_00be1400;
      }
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        local_f0 = (undefined1  [8])0x1bbb73;
        puStack_e8 = (undefined1 *)0x653;
        local_e0 = local_120;
        local_108 = FUN_005eceec(5);
        FUN_00623bb0(&DAT_00255ab0,local_f0,(ulong)puStack_e8 & 0xffffffff,
                     "ICE server parsing failed: Transport parameter missing value.",&DAT_001a2df6,
                     local_108,&DAT_001ca519);
      }
      pcVar11 = "ICE server parsing failed: Transport parameter missing value.";
      uVar12 = 0x3d;
    }
    else {
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        local_f0 = (undefined1  [8])0x1bbb73;
        puStack_e8 = (undefined1 *)0x62b;
        local_e0 = local_120;
        local_108 = FUN_005eceec(5);
        FUN_00623bb0(&DAT_00255ab0,local_f0,(ulong)puStack_e8 & 0xffffffff,
                     "ICE server parsing failed: Invalid transport parameter key.",&DAT_001a2df6,
                     local_108,&DAT_001ca519);
      }
      pcVar11 = "ICE server parsing failed: Invalid transport parameter key.";
      uVar12 = 0x3b;
    }
    FUN_00b0092c(param_1,5,pcVar11,uVar12);
    if (local_1c0 != (undefined **)0x0) {
      uVar24 = (ulong)((long)ppuStack_1b8 + (-0x10 - ((long)ppuStack_1b8 << 0x3c))) >> 4;
      uVar8 = (ulong)(((long)local_1c0 - (long)ppuStack_1b8 << 0x3c) -
                     ((long)local_1c0 - (long)ppuStack_1b8)) >> 4;
      if (uVar24 <= uVar8) {
        uVar8 = uVar24;
      }
      ppuVar17 = ppuStack_1b8;
      if ((1 < uVar8) && ((((int)local_1c0 - (int)ppuStack_1b8 | -(int)ppuStack_1b8) & 0xfU) == 0))
      {
        uVar8 = uVar8 & 0xffffffffffffffe;
        ppuVar17 = ppuStack_1b8 + uVar8 * -2;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (ppuVar17 == local_1c0) goto LAB_00be1b3c;
        ppuVar17 = ppuVar17 + -2;
      } while (ppuVar17 != (undefined **)0x0);
      goto LAB_00be15ac;
    }
    goto LAB_00be1540;
  }
  uVar8 = 0;
LAB_00be1400:
  ppuVar5 = ppuStack_98;
  ppuVar17 = local_a0;
  local_1c0 = local_a0;
  ppuStack_1b8 = ppuStack_98;
  pvVar9 = memchr(local_a0,0x3a,(size_t)ppuStack_98);
  if ((pvVar9 == (void *)0x0) ||
     (ppuVar26 = (undefined **)((long)pvVar9 - (long)ppuVar17),
     ppuVar26 == (undefined **)0xffffffffffffffff)) {
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) == 0) {
      pcVar11 = "Missing \':\' in ICE URI: ";
      uVar12 = 0x2a2;
LAB_00be1494:
      FUN_00623bb0(&DAT_0021f2ce,"../../pc/ice_server_parsing.cc",uVar12,pcVar11,&local_1c0);
    }
LAB_00be1498:
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_0021f2ce,"../../pc/ice_server_parsing.cc",0x6db,
                   "Invalid transport parameter in ICE URI: ",&local_78);
    }
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      local_1c0 = (undefined **)0x1bbb73;
      ppuStack_1b8 = (undefined **)0x6f3;
      local_1b0 = local_108;
      _local_f0 = FUN_005eceec(5);
      FUN_00623bb0(&DAT_00255ab0,local_1c0,(ulong)ppuStack_1b8 & 0xffffffff,
                   "ICE server parsing failed: Invalid transport parameter in ICE URI",&DAT_001a2df6
                   ,local_f0,&DAT_001ca519);
    }
    pcVar11 = "ICE server parsing failed: Invalid transport parameter in ICE URI";
LAB_00be1534:
    uVar12 = 5;
    uVar13 = 0x41;
  }
  else {
    puVar19 = (undefined1 *)((long)ppuVar5 - ((long)ppuVar26 + 1));
    if (puVar19 == (undefined1 *)0x0) {
      uVar8 = FUN_004022fc();
      if ((uVar8 & 1) == 0) {
        pcVar11 = "Empty hostname in ICE URI: ";
        uVar12 = 0x2c2;
        goto LAB_00be1494;
      }
      goto LAB_00be1498;
    }
    ppuVar1 = ppuVar5;
    if (ppuVar26 <= ppuVar5) {
      ppuVar1 = ppuVar26;
    }
    ppuVar2 = ppuVar1;
    if ((undefined **)0x3 < ppuVar1) {
      ppuVar2 = (undefined **)0x4;
    }
    iVar7 = memcmp(ppuVar17,&DAT_001be672,(size_t)ppuVar2);
    if ((ppuVar1 == (undefined **)0x4) && (iVar7 == 0)) {
LAB_00be161c:
      bVar14 = false;
      bVar6 = true;
    }
    else {
      ppuVar2 = ppuVar1;
      if ((undefined **)0x4 < ppuVar1) {
        ppuVar2 = (undefined **)0x5;
      }
      iVar7 = memcmp(ppuVar17,"stuns",(size_t)ppuVar2);
      if ((ppuVar1 == (undefined **)0x5) && (iVar7 == 0)) goto LAB_00be161c;
      ppuVar2 = ppuVar1;
      if ((undefined **)0x3 < ppuVar1) {
        ppuVar2 = (undefined **)0x4;
      }
      iVar7 = memcmp(ppuVar17,&DAT_0019f030,(size_t)ppuVar2);
      if ((ppuVar1 == (undefined **)0x4) && (iVar7 == 0)) {
        bVar6 = false;
        bVar14 = false;
      }
      else {
        ppuVar2 = ppuVar1;
        if ((undefined **)0x4 < ppuVar1) {
          ppuVar2 = (undefined **)0x5;
        }
        iVar7 = memcmp(ppuVar17,"turns",(size_t)ppuVar2);
        if ((ppuVar1 != (undefined **)0x5) || (iVar7 != 0)) goto LAB_00be1498;
        bVar6 = false;
        bVar14 = true;
      }
    }
    if (ppuVar5 <= ppuVar26) {
LAB_00be2184:
                    /* WARNING: Subroutine does not return */
      FUN_005f55a8("string_view::substr");
    }
    if ((bVar6) && (0x10 < (ulong)((long)puStack_88 - (long)local_90))) {
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        local_1c0 = (undefined **)0x1bbb73;
        ppuStack_1b8 = (undefined **)0x753;
        local_1b0 = local_108;
        _local_f0 = FUN_005eceec(5);
        FUN_00623bb0(&DAT_00255ab0,local_1c0,(ulong)ppuStack_1b8 & 0xffffffff,
                     "ICE server parsing failed: Invalid stun url with query parameters",
                     &DAT_001a2df6,local_f0,&DAT_001ca519);
      }
      pcVar11 = "ICE server parsing failed: Invalid stun url with query parameters";
      goto LAB_00be1534;
    }
    pcVar11 = (char *)((long)ppuVar17 + (long)((long)ppuVar26 + 1));
    uVar15 = 0x14e5;
    if (!bVar14) {
      uVar15 = 0xd96;
    }
    uVar24 = (ulong)uVar15;
    uVar23 = 4;
    if (!bVar14) {
      uVar23 = (undefined4)uVar8;
    }
    pvVar10 = memchr(pcVar11,0x40,(size_t)puVar19);
    if ((pvVar10 == (void *)0x0) || ((long)pvVar10 - (long)pcVar11 == -1)) {
      if (*pcVar11 == '[') {
        puVar29 = (undefined1 *)((long)ppuVar17 + (long)ppuVar5);
        lVar28 = 0;
        do {
          lVar27 = lVar28;
          if (puVar29 + (lVar27 - (long)pvVar9) == (undefined1 *)0x1) goto LAB_00be1cf8;
          lVar28 = lVar27 + -1;
        } while (puVar29[lVar27 + -1] != ']');
        if ((undefined1 *)((long)ppuVar5 + (long)ppuVar17) + (lVar28 - (long)pvVar9) !=
            (undefined1 *)0x0) {
          if ((((undefined1 *)((long)ppuVar5 + (long)ppuVar17) + (lVar28 - (long)pvVar9) + -1 <=
                puVar19) &&
              (pvVar10 = memchr(puVar29 + lVar28,0x3a,-lVar28), pvVar10 != (void *)0x0)) &&
             ((long)pvVar10 - (long)pcVar11 != -1)) {
            if (puVar19 < (undefined1 *)((long)ppuVar5 + (long)ppuVar17) +
                          (lVar28 - (long)pvVar9) + 1) goto LAB_00be2184;
            if (lVar28 != -2) {
              lVar21 = lVar27 + 1;
              do {
                if ((byte)puVar29[lVar21] - 0x3a < 0xfffffff6) {
                  uVar24 = 0;
                  goto LAB_00be18f8;
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 != 0);
            }
            auVar31 = FUN_00675340((undefined1 *)((long)ppuVar5 + (long)ppuVar17) + lVar27 + 1,
                                   -2 - lVar28,10);
            uVar24 = auVar31._0_8_ & 0xffffffff | 0x100000000;
            if ((auVar31._8_4_ & (uint)(auVar31._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
              uVar24 = 0;
            }
            if (uVar24 >> 0x20 == 0) goto LAB_00be1cf8;
          }
LAB_00be18f8:
          pcVar11 = pcVar11 + 1;
          puVar30 = puVar19 + -1;
          if ((undefined1 *)((long)ppuVar5 + (long)ppuVar17) + (lVar28 - (long)pvVar9) + -2 <=
              puVar19 + -1) {
            puVar30 = (undefined1 *)((long)ppuVar5 + (long)ppuVar17) + (lVar28 - (long)pvVar9) + -2;
          }
LAB_00be1c3c:
          if (puVar30 != (undefined1 *)0x0) {
            if ((int)uVar24 - 0x10000U < 0xffff0001) {
              uVar8 = FUN_004249b0();
              if ((uVar8 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e94,"../../pc/ice_server_parsing.cc",0x85b,"Invalid port: ",
                             uVar24 & 0xffffffff);
              }
              uVar8 = FUN_004249b0();
              if ((uVar8 & 1) == 0) {
                local_1c0 = (undefined **)0x1bbb73;
                ppuStack_1b8 = (undefined **)0x86b;
                local_1b0 = local_108;
                _local_f0 = FUN_005eceec(5);
                FUN_00623bb0(&DAT_00255ab0,local_1c0,(ulong)ppuStack_1b8 & 0xffffffff,
                             "ICE server parsing failed: Invalid port",&DAT_001a2df6,local_f0,
                             &DAT_001ca519);
              }
              pcVar11 = "ICE server parsing failed: Invalid port";
              uVar12 = 5;
              uVar13 = 0x27;
              goto LAB_00be153c;
            }
            if (bVar6) {
              FUN_007e8ad0(&local_1c0,pcVar11,puVar30,uVar24 & 0xffffffff);
              local_f0 = (undefined1  [8])param_5;
              FUN_00be2580(local_f0,&local_1c0,&local_1c0);
              if ((long)local_1b0 < 0) {
                operator_delete(local_1c0);
              }
LAB_00be1de8:
              FUN_005ecd48(param_1);
              goto LAB_00be1540;
            }
            bVar3 = *(byte *)(param_2 + 0x47);
            uVar8 = *(ulong *)(param_2 + 0x38);
            if (-1 < (char)bVar3) {
              uVar8 = (ulong)bVar3;
            }
            if (uVar8 != 0) {
              uVar8 = *(ulong *)(param_2 + 0x50);
              if ((*(byte *)(param_2 + 0x5f) & 0x80) == 0) {
                uVar8 = (ulong)*(byte *)(param_2 + 0x5f);
              }
              if (uVar8 != 0) {
                if (((char)bVar3 < '\0') && (0x1fd < *(ulong *)(param_2 + 0x38))) {
                  uVar8 = FUN_004249b0();
                  if ((uVar8 & 1) == 0) {
                    local_1c0 = (undefined **)0x1bbb73;
                    ppuStack_1b8 = (undefined **)0x91b;
                    local_1b0 = local_108;
                    _local_f0 = FUN_005eceec(3);
                    FUN_00623bb0(&DAT_00255ab0,local_1c0,(ulong)ppuStack_1b8 & 0xffffffff,
                                 "ICE server parsing failed: TURN server username is too long",
                                 &DAT_001a2df6,local_f0,&DAT_001ca519);
                  }
                  pcVar11 = "ICE server parsing failed: TURN server username is too long";
                  uVar12 = 3;
                  uVar13 = 0x3b;
                  goto LAB_00be153c;
                }
                puVar19 = (undefined1 *)(long)*(char *)(param_2 + 0x7f);
                if ((long)puVar19 < 0) {
                  pcVar22 = *(char **)(param_2 + 0x68);
                  puVar19 = *(undefined1 **)(param_2 + 0x70);
                  bVar6 = puVar19 == (undefined1 *)0x0;
                }
                else {
                  pcVar22 = (char *)(param_2 + 0x68);
                  bVar6 = *(char *)(param_2 + 0x7f) == '\0';
                }
                puVar29 = puVar30;
                pcVar4 = pcVar11;
                if (!bVar6) {
                  puVar29 = puVar19;
                  pcVar4 = pcVar22;
                }
                puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
                local_f0 = (undefined1  [8])&DAT_aaaaaaaaaaaaaaaa;
                puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
                local_e0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
                local_d0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
                local_b0 = &DAT_aaaaaaaaaaaaaaaa;
                FUN_007e8ad0(local_f0,pcVar4,puVar29,uVar24 & 0xffffffff);
                uVar8 = *(ulong *)(param_2 + 0x70);
                if ((*(byte *)(param_2 + 0x7f) & 0x80) == 0) {
                  uVar8 = (ulong)*(byte *)(param_2 + 0x7f);
                }
                if (uVar8 != 0) {
                  local_1b0 = (undefined1 *)0x0;
                  local_1c0 = &PTR_FUN_00d385d8;
                  ppuStack_1b8 = (undefined **)0x0;
                  local_1a8 = (undefined1 *)0xaaaaaaaa00000000;
                  uVar8 = FUN_007ea3b0(pcVar11,puVar30,&local_1c0);
                  if ((uVar8 & 1) == 0) {
                    uVar8 = FUN_004249b0();
                    if ((uVar8 & 1) == 0) {
                      local_108._0_8_ = "../../pc/ice_server_parsing.cc";
                      local_108._8_8_ = 0x9a3;
                      local_f8 = &uStack_109;
                      local_120 = FUN_005eceec(3);
                      FUN_00623bb0(&DAT_00255ab0,local_108._0_8_,local_108._8_8_ & 0xffffffff,
                                   "ICE server parsing failed: IceServer has hostname field set, but URI does not contain an IP address."
                                   ,&DAT_001a2df6,local_120,&DAT_001ca519);
                    }
                    FUN_00b0092c(param_1,3,
                                 "ICE server parsing failed: IceServer has hostname field set, but URI does not contain an IP address."
                                 ,100);
                    goto LAB_00be1540;
                  }
                  FUN_007e8e8c(local_f0,&local_1c0);
                }
                ppuStack_1b8 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
                local_1c0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
                local_1a8 = &DAT_aaaaaaaaaaaaaaaa;
                local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
                local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
                local_180 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
                uVar8 = *(ulong *)(param_2 + 0x38);
                lVar28 = *(long *)(param_2 + 0x30);
                if (-1 < (char)*(byte *)(param_2 + 0x47)) {
                  uVar8 = (ulong)*(byte *)(param_2 + 0x47);
                  lVar28 = param_2 + 0x30;
                }
                puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
                local_160 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
                local_140 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
                uVar24 = *(ulong *)(param_2 + 0x50);
                lVar27 = *(long *)(param_2 + 0x48);
                if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
                  uVar24 = (ulong)*(byte *)(param_2 + 0x5f);
                  lVar27 = param_2 + 0x48;
                }
                FUN_00be28d0(&local_1c0,local_f0,lVar28,uVar8,lVar27,uVar24,uVar23);
                if (*(int *)(param_2 + 0x60) == 1) {
                  puStack_178 = (undefined1 *)CONCAT44(puStack_178._4_4_,1);
                }
                if (&puStack_170 != (undefined1 **)(param_2 + 0x80)) {
                  FUN_007eeac8();
                }
                if (&puStack_158 != (undefined1 **)(param_2 + 0x98)) {
                  FUN_007eeac8();
                }
                FUN_00be2694(param_6,&local_1c0);
                FUN_00be2ca4(&local_1c0);
                goto LAB_00be1de8;
              }
            }
            uVar8 = FUN_004249b0();
            if ((uVar8 & 1) == 0) {
              local_1c0 = (undefined **)0x1bbb73;
              ppuStack_1b8 = (undefined **)0x8eb;
              local_1b0 = local_108;
              _local_f0 = FUN_005eceec(3);
              FUN_00623bb0(&DAT_00255ab0,local_1c0,(ulong)ppuStack_1b8 & 0xffffffff,
                           "ICE server parsing failed: TURN server with empty username or password",
                           &DAT_001a2df6,local_f0,&DAT_001ca519);
            }
            pcVar11 = "ICE server parsing failed: TURN server with empty username or password";
            uVar12 = 3;
            uVar13 = 0x46;
            goto LAB_00be153c;
          }
        }
      }
      else {
        pvVar9 = memchr(pcVar11,0x3a,(size_t)puVar19);
        if ((pvVar9 == (void *)0x0) ||
           (puVar29 = (undefined1 *)((long)pvVar9 - (long)pcVar11),
           puVar29 == (undefined1 *)0xffffffffffffffff)) {
LAB_00be1c04:
          puVar29 = (undefined1 *)0x0;
          do {
            pvVar9 = memchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-._~%!$&\'()*+,;="
                            ,(uint)(byte)pcVar11[(long)puVar29],0x4e);
            puVar30 = puVar19;
            if (pvVar9 == (void *)0x0) {
              if (puVar29 != (undefined1 *)0xffffffffffffffff) goto LAB_00be1cf8;
              break;
            }
            puVar29 = puVar29 + 1;
          } while (puVar19 != puVar29);
          goto LAB_00be1c3c;
        }
        if (puVar19 <= puVar29) goto LAB_00be2184;
        puVar30 = puVar29 + 1;
        if ((long)puVar19 - (long)puVar30 != 0) {
          puVar18 = (undefined1 *)((long)ppuVar5 + (long)ppuVar17) + ~(ulong)pvVar9;
          pbVar20 = (byte *)(pcVar11 + (long)puVar30);
          do {
            if (*pbVar20 - 0x3a < 0xfffffff6) {
              uVar24 = 0;
              goto LAB_00be1bfc;
            }
            puVar18 = puVar18 + -1;
            pbVar20 = pbVar20 + 1;
          } while (puVar18 != (undefined1 *)0x0);
        }
        auVar31 = FUN_00675340(pcVar11 + (long)puVar30,(long)puVar19 - (long)puVar30,10);
        uVar24 = auVar31._0_8_ & 0xffffffff | 0x100000000;
        if ((auVar31._8_4_ & (uint)(auVar31._0_8_ + 0x80000000 >> 0x20 == 0)) == 0) {
          uVar24 = 0;
        }
        if (uVar24 >> 0x20 != 0) {
LAB_00be1bfc:
          puVar19 = puVar29;
          if (puVar29 != (undefined1 *)0x0) goto LAB_00be1c04;
        }
      }
LAB_00be1cf8:
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_0021f2ce,"../../pc/ice_server_parsing.cc",0x82b,
                     "Invalid hostname format: ",&local_a0);
      }
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        local_1c0 = (undefined **)0x1bbb73;
        ppuStack_1b8 = (undefined **)0x83b;
        local_1b0 = local_108;
        _local_f0 = FUN_005eceec(5);
        FUN_00623bb0(&DAT_00255ab0,local_1c0,(ulong)ppuStack_1b8 & 0xffffffff,
                     "ICE server parsing failed: Invalid hostname format",&DAT_001a2df6,local_f0,
                     &DAT_001ca519);
      }
      pcVar11 = "ICE server parsing failed: Invalid hostname format";
      uVar12 = 5;
      uVar13 = 0x32;
    }
    else {
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_0021f2ce,"../../pc/ice_server_parsing.cc",0x7db,
                     "Invalid url with long deprecated user@host syntax: ",&local_a0);
      }
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        local_1c0 = (undefined **)0x1bbb73;
        ppuStack_1b8 = (undefined **)0x7fb;
        local_1b0 = local_108;
        _local_f0 = FUN_005eceec(5);
        FUN_00623bb0(&DAT_00255ab0,local_1c0,(ulong)ppuStack_1b8 & 0xffffffff,
                     "ICE server parsing failed: Invalid url with long deprecated user@host syntax",
                     &DAT_001a2df6,local_f0,&DAT_001ca519);
      }
      pcVar11 = "ICE server parsing failed: Invalid url with long deprecated user@host syntax";
      uVar12 = 5;
      uVar13 = 0x4c;
    }
  }
LAB_00be153c:
  FUN_00b0092c(param_1,uVar12,pcVar11,uVar13);
  goto LAB_00be1540;
LAB_00be1b3c:
  ppuStack_1b8 = local_1c0;
  operator_delete(local_1c0);
LAB_00be1540:
  if (local_90 == (undefined8 *)0x0) {
    return;
  }
  uVar24 = (ulong)((long)puStack_88 + (-0x10 - ((long)puStack_88 << 0x3c))) >> 4;
  uVar8 = (ulong)(((long)local_90 - (long)puStack_88 << 0x3c) - ((long)local_90 - (long)puStack_88))
          >> 4;
  if (uVar24 <= uVar8) {
    uVar8 = uVar24;
  }
  puVar16 = puStack_88;
  if ((1 < uVar8) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 0xfU) == 0)) {
    uVar8 = uVar8 & 0xffffffffffffffe;
    puVar16 = puStack_88 + uVar8 * -2;
    do {
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
  }
  do {
    if (puVar16 == local_90) {
      puStack_88 = local_90;
      operator_delete(local_90);
      return;
    }
    puVar16 = puVar16 + -2;
  } while (puVar16 != (undefined8 *)0x0);
LAB_00be15ac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00be2190  FUN_00be2190 =====

void FUN_00be2190(int *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined8 local_50;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00be1034(&local_70);
  if ((int)local_70 == 0) {
    puVar6 = (undefined8 *)*param_4;
    puVar8 = (undefined8 *)param_4[1];
    if (0x20 < (ulong)(((long)puVar8 - (long)puVar6 >> 5) * -0x3333333333333333)) {
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001fd8a8,"../../pc/ice_server_parsing.cc",0xc0a,
                     "Number of configured TURN servers is ",
                     (param_4[1] - *param_4 >> 5) * -0x3333333333333333,
                     " which exceeds the maximum allowed number of ",0x20);
      }
      FUN_00be2358(param_4,0x20);
      puVar6 = (undefined8 *)*param_4;
      puVar8 = (undefined8 *)param_4[1];
    }
    if (puVar6 != puVar8) {
      puVar1 = (undefined8 *)(param_2 + 0x120);
      puVar6 = puVar6 + 0x11;
      do {
        if (puVar6 != puVar1) {
          bVar2 = *(byte *)(param_2 + 0x137);
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            uVar5 = *(ulong *)(param_2 + 0x128);
            puVar3 = *(undefined8 **)(param_2 + 0x120);
            if (-1 < (char)bVar2) {
              uVar5 = (ulong)bVar2;
              puVar3 = puVar1;
            }
            FUN_00547f08(puVar6,puVar3,uVar5);
          }
          else if ((char)bVar2 < '\0') {
            FUN_00547fc0(puVar6,*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x128));
          }
          else {
            uVar9 = *(undefined8 *)(param_2 + 0x128);
            uVar7 = *puVar1;
            puVar6[2] = *(undefined8 *)(param_2 + 0x130);
            puVar6[1] = uVar9;
            *puVar6 = uVar7;
          }
        }
        puVar3 = puVar6 + 3;
        puVar6 = puVar6 + 0x14;
      } while (puVar3 != puVar8);
    }
    FUN_005ecd48(param_1);
  }
  else {
    *param_1 = (int)local_70;
    if ((long)local_58 < 0) {
      FUN_005478d8(param_1 + 2,puStack_68,puStack_60);
    }
    else {
      puVar6 = (undefined8 *)((ulong)&local_70 | 8);
      uVar9 = *puVar6;
      uVar7 = puVar6[2];
      *(undefined8 *)(param_1 + 4) = puVar6[1];
      *(undefined8 *)(param_1 + 2) = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar7;
    }
    iVar4 = (int)local_50;
    param_1[8] = iVar4;
    *(undefined4 *)((long)param_1 + 0x23) = local_50._3_4_;
  }
  if ((long)local_58 < 0) {
    operator_delete(puStack_68);
  }
  return;
}


// ===== 00be2358  FUN_00be2358 =====

void FUN_00be2358(long *param_1,ulong param_2)

{
  bool bVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  
  pvVar7 = (void *)*param_1;
  pvVar6 = (void *)param_1[1];
  lVar8 = (long)pvVar6 - (long)pvVar7;
  bVar1 = param_2 < (ulong)((lVar8 >> 5) * -0x3333333333333333);
  lVar11 = param_2 + (lVar8 >> 5) * 0x3333333333333333;
  if (bVar1 || lVar11 == 0) {
    if (bVar1) {
      pvVar7 = (void *)((long)pvVar7 + param_2 * 0xa0);
      while (pvVar7 != pvVar6) {
        pvVar6 = (void *)((long)pvVar6 + -0xa0);
        if (pvVar6 == (void *)0x0) goto LAB_00be2564;
        FUN_00be2ca4(pvVar6);
      }
      param_1[1] = (long)pvVar7;
    }
  }
  else {
    lVar4 = param_1[2] - (long)pvVar7 >> 5;
    uVar3 = lVar4 * -0x3333333333333333;
    if (uVar3 < param_2) {
      if (0x199999999999999 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00be2894();
      }
      uVar5 = lVar4 * -0x6666666666666666;
      if (uVar5 < param_2 || uVar5 - param_2 == 0) {
        uVar5 = param_2;
      }
      if (0xcccccccccccccb < uVar3) {
        uVar5 = 0x199999999999999;
      }
      if (0x199999999999999 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar5 * 0xa0);
      lVar4 = (long)pvVar2 + lVar8;
      lVar11 = lVar11 * 0xa0;
      if (lVar11 == 0) {
        lVar10 = (long)pvVar2 + lVar8;
      }
      else {
        lVar10 = lVar4 + lVar11;
        lVar8 = lVar4;
        do {
          if (lVar8 == 0) goto LAB_00be2550;
          FUN_00be28ac(lVar8);
          lVar11 = lVar11 + -0xa0;
          lVar8 = lVar8 + 0xa0;
        } while (lVar11 != 0);
        pvVar7 = (void *)*param_1;
        pvVar6 = (void *)param_1[1];
        lVar8 = (long)pvVar6 - (long)pvVar7;
      }
      pvVar9 = pvVar7;
      lVar11 = lVar4 - lVar8;
      if (pvVar7 != pvVar6) {
        do {
          if (lVar11 == 0) {
LAB_00be2550:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00be2b28(lVar11,pvVar9);
          pvVar9 = (void *)((long)pvVar9 + 0xa0);
          lVar11 = lVar11 + 0xa0;
        } while (pvVar9 != pvVar6);
        do {
          if (pvVar7 == (void *)0x0) {
LAB_00be2564:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          FUN_00be2ca4(pvVar7);
          pvVar7 = (void *)((long)pvVar7 + 0xa0);
        } while (pvVar7 != pvVar6);
        pvVar7 = (void *)*param_1;
      }
      *param_1 = lVar4 - lVar8;
      param_1[1] = lVar10;
      param_1[2] = (long)((long)pvVar2 + uVar5 * 0xa0);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        return;
      }
    }
    else {
      lVar11 = lVar11 * 0xa0;
      pvVar7 = pvVar6;
      if (lVar11 != 0) {
        pvVar7 = (void *)((long)pvVar6 + lVar11);
        do {
          if (pvVar6 == (void *)0x0) goto LAB_00be2550;
          FUN_00be28ac(pvVar6);
          lVar11 = lVar11 + -0xa0;
          pvVar6 = (void *)((long)pvVar6 + 0xa0);
        } while (lVar11 != 0);
      }
      param_1[1] = (long)pvVar7;
    }
  }
  return;
}


// ===== 00be2580  FUN_00be2580 =====

undefined1  [16] FUN_00be2580(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = (long *)*param_1;
  plVar7 = plVar6 + 1;
  plVar8 = plVar7;
  plVar1 = (long *)*plVar7;
joined_r0x00be25a8:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00be25f8:
      puVar3 = (undefined8 *)operator_new(0x68);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        if (puVar3 + 4 != (undefined8 *)0x0) {
          FUN_007e8cec(puVar3 + 4,param_3);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = plVar8;
          *plVar7 = (long)puVar3;
          puVar4 = puVar3;
          if (*(long *)*plVar6 != 0) {
            *plVar6 = *(long *)*plVar6;
            puVar4 = (undefined8 *)*plVar7;
          }
          FUN_005d5b94(plVar6[1],puVar4);
          uVar5 = 1;
          plVar6[2] = plVar6[2] + 1;
LAB_00be2654:
          auVar9._8_8_ = uVar5;
          auVar9._0_8_ = puVar3;
          return auVar9;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = FUN_007e97f4(param_2,plVar1 + 4);
    plVar8 = plVar1;
    if ((uVar2 & 1) != 0) {
      plVar7 = plVar1;
      plVar1 = (long *)*plVar1;
      goto joined_r0x00be25a8;
    }
    uVar2 = FUN_007e97f4(plVar1 + 4,param_2);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)*plVar7;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = 0;
        goto LAB_00be2654;
      }
      goto LAB_00be25f8;
    }
    plVar7 = plVar1 + 1;
    plVar1 = (long *)*plVar7;
  } while( true );
}


// ===== 00be2694  FUN_00be2694 =====

long FUN_00be2694(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00be2b28(uVar1);
    lVar2 = uVar1 + 0xa0;
  }
  else {
    lVar2 = FUN_00be2700(param_1);
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xa0;
}


// ===== 00be2700  FUN_00be2700 =====

long FUN_00be2700(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 5) * -0x3333333333333333 + 1;
  if (0x199999999999999 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00be2894();
  }
  lVar4 = param_1[2] - *param_1 >> 5;
  uVar5 = lVar4 * -0x6666666666666666;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0xcccccccccccccb < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar5 = 0x199999999999999;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x199999999999999 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 * 0xa0);
    lVar6 = (long)pvVar2 + lVar6;
  }
  if (lVar6 == 0) {
LAB_00be2864:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_00be2b28(lVar6,param_2);
  pvVar7 = (void *)*param_1;
  pvVar1 = (void *)param_1[1];
  lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
  pvVar8 = pvVar7;
  lVar9 = lVar4;
  if (pvVar1 != pvVar7) {
    do {
      if (lVar9 == 0) goto LAB_00be2864;
      FUN_00be2b28(lVar9,pvVar8);
      pvVar8 = (void *)((long)pvVar8 + 0xa0);
      lVar9 = lVar9 + 0xa0;
    } while (pvVar8 != pvVar1);
    do {
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00be2ca4(pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0xa0);
    } while (pvVar7 != pvVar1);
    pvVar7 = (void *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar6 + 0xa0;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0xa0);
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  return lVar6 + 0xa0;
}


// ===== 00be2894  FUN_00be2894 =====

void FUN_00be2894(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00be28ac  FUN_00be28ac =====

void FUN_00be28ac(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  return;
}


// ===== 00be28d0  FUN_00be28d0 =====

void FUN_00be28d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  ulong uVar1;
  long lVar2;
  void *local_80 [2];
  char cStack_69;
  undefined4 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00be29b8(param_1 + 3,param_3,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_007e8cec(local_80,param_2);
  uVar1 = param_1[1];
  local_38 = param_7;
  if (uVar1 < (ulong)param_1[2]) {
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007e8cec(uVar1,local_80);
    lVar2 = uVar1 + 0x50;
    *(undefined4 *)(uVar1 + 0x48) = local_38;
  }
  else {
    lVar2 = FUN_00be4324(param_1,local_80);
  }
  param_1[1] = lVar2;
  if (cStack_69 < '\0') {
    operator_delete(local_80[0]);
  }
  return;
}


// ===== 00be29b8  FUN_00be29b8 =====

void FUN_00be29b8(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,
                 ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      puVar3 = param_1;
    }
    else {
      uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      puVar3 = (undefined8 *)operator_new(uVar2);
      *param_1 = puVar3;
      param_1[1] = param_3;
      param_1[2] = uVar2 | 0x8000000000000000;
    }
    if ((undefined8 *)((long)puVar3 + param_3) < puVar3) {
LAB_00be2afc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < puVar3) || ((undefined8 *)((long)puVar3 + param_3) <= param_2)) {
      memmove(puVar3,param_2,param_3);
      *(undefined1 *)((long)puVar3 + param_3) = 0;
      if (0x7ffffffffffffff6 < param_5) goto LAB_00be2b24;
      if (param_5 < 0x17) {
        puVar3 = param_1 + 3;
        *(char *)((long)param_1 + 0x2f) = (char)param_5;
      }
      else {
        uVar1 = (param_5 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        puVar3 = (undefined8 *)operator_new(uVar2);
        param_1[3] = puVar3;
        param_1[4] = param_5;
        param_1[5] = uVar2 | 0x8000000000000000;
      }
      if ((undefined8 *)((long)puVar3 + param_5) < puVar3) goto LAB_00be2afc;
      if ((param_4 < puVar3) || ((undefined8 *)((long)puVar3 + param_5) <= param_4)) {
        memmove(puVar3,param_4,param_5);
        *(undefined1 *)((long)puVar3 + param_5) = 0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00be2b24:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00be2b28  FUN_00be2b28 =====

/* WARNING: Removing unreachable block (ram,0x00be2d9c) */
/* WARNING: Removing unreachable block (ram,0x00be2dfc) */

void FUN_00be2b28(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar11 = *param_2;
  lVar12 = param_2[1];
  uVar3 = lVar12 - lVar11;
  if (uVar3 != 0) {
    if (0x333333333333333 < (ulong)(((long)uVar3 >> 4) * -0x3333333333333333)) {
      plVar5 = (long *)FUN_00be45bc();
      if (*(char *)((long)plVar5 + 0x9f) < '\0') {
        operator_delete((void *)plVar5[0x11]);
        pvVar4 = (void *)plVar5[0xd];
      }
      else {
        pvVar4 = (void *)plVar5[0xd];
      }
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)plVar5[10];
      }
      else {
        pvVar9 = (void *)plVar5[0xe];
        pvVar7 = pvVar4;
        if (pvVar4 != pvVar9) {
          do {
            pvVar9 = (void *)((long)pvVar9 + -0x18);
            if (pvVar9 == (void *)0x0) goto LAB_00be2e70;
          } while (pvVar9 != pvVar4);
          pvVar7 = (void *)plVar5[0xd];
        }
        plVar5[0xe] = (long)pvVar4;
        operator_delete(pvVar7);
        pvVar4 = (void *)plVar5[10];
      }
      if (pvVar4 == (void *)0x0) {
        cVar2 = *(char *)((long)plVar5 + 0x47);
      }
      else {
        pvVar9 = (void *)plVar5[0xb];
        pvVar7 = pvVar4;
        if (pvVar4 != pvVar9) {
          do {
            pvVar9 = (void *)((long)pvVar9 + -0x18);
            if (pvVar9 == (void *)0x0) goto LAB_00be2e70;
          } while (pvVar9 != pvVar4);
          pvVar7 = (void *)plVar5[10];
        }
        plVar5[0xb] = (long)pvVar4;
        operator_delete(pvVar7);
        cVar2 = *(char *)((long)plVar5 + 0x47);
      }
      if (cVar2 < '\0') {
        operator_delete((void *)plVar5[6]);
        cVar2 = *(char *)((long)plVar5 + 0x2f);
      }
      else {
        cVar2 = *(char *)((long)plVar5 + 0x2f);
      }
      if (cVar2 < '\0') {
        operator_delete((void *)plVar5[3]);
        puVar10 = (undefined8 *)*plVar5;
      }
      else {
        puVar10 = (undefined8 *)*plVar5;
      }
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
      puVar8 = (undefined8 *)plVar5[1];
      puVar6 = puVar10;
      if (puVar10 != puVar8) {
        do {
          puVar6 = puVar8 + -10;
          if (puVar6 == (undefined8 *)0x0) {
LAB_00be2e70:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if (*(char *)((long)puVar8 + -0x39) < '\0') {
            operator_delete((void *)*puVar6);
          }
          puVar8 = puVar6;
        } while (puVar6 != puVar10);
        puVar6 = (undefined8 *)*plVar5;
      }
      plVar5[1] = (long)puVar10;
      operator_delete(puVar6);
      return;
    }
    pvVar4 = operator_new(uVar3);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (long)pvVar4 + uVar3;
    do {
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007e8cec(pvVar4,lVar11);
      puVar1 = (undefined4 *)(lVar11 + 0x48);
      lVar11 = lVar11 + 0x50;
      *(undefined4 *)((long)pvVar4 + 0x48) = *puVar1;
      pvVar4 = (void *)((long)pvVar4 + 0x50);
    } while (lVar11 != lVar12);
    param_1[1] = pvVar4;
  }
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    FUN_005478d8(param_1 + 3,param_2[3],param_2[4]);
    cVar2 = *(char *)((long)param_2 + 0x47);
  }
  else {
    lVar12 = param_2[4];
    lVar11 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = lVar12;
    param_1[3] = lVar11;
    cVar2 = *(char *)((long)param_2 + 0x47);
  }
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 6,param_2[6],param_2[7]);
  }
  else {
    lVar12 = param_2[7];
    lVar11 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = lVar12;
    param_1[6] = lVar11;
  }
  *(int *)(param_1 + 9) = (int)param_2[9];
  FUN_00843ef4(param_1 + 10,param_2 + 10);
  FUN_00843ef4(param_1 + 0xd,param_2 + 0xd);
  param_1[0x10] = param_2[0x10];
  if (-1 < *(char *)((long)param_2 + 0x9f)) {
    lVar12 = param_2[0x12];
    lVar11 = param_2[0x11];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = lVar12;
    param_1[0x11] = lVar11;
    return;
  }
  FUN_005478d8(param_1 + 0x11,param_2[0x11],param_2[0x12]);
  return;
}


// ===== 00be2ca4  FUN_00be2ca4 =====

/* WARNING: Removing unreachable block (ram,0x00be2d9c) */
/* WARNING: Removing unreachable block (ram,0x00be2dfc) */

void FUN_00be2ca4(long *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
    pvVar6 = (void *)param_1[0xd];
  }
  else {
    pvVar6 = (void *)param_1[0xd];
  }
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)param_1[10];
  }
  else {
    pvVar5 = (void *)param_1[0xe];
    pvVar3 = pvVar6;
    if (pvVar6 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x18);
        if (pvVar5 == (void *)0x0) goto LAB_00be2e70;
      } while (pvVar5 != pvVar6);
      pvVar3 = (void *)param_1[0xd];
    }
    param_1[0xe] = (long)pvVar6;
    operator_delete(pvVar3);
    pvVar6 = (void *)param_1[10];
  }
  if (pvVar6 == (void *)0x0) {
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  else {
    pvVar5 = (void *)param_1[0xb];
    pvVar3 = pvVar6;
    if (pvVar6 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0x18);
        if (pvVar5 == (void *)0x0) goto LAB_00be2e70;
      } while (pvVar5 != pvVar6);
      pvVar3 = (void *)param_1[10];
    }
    param_1[0xb] = (long)pvVar6;
    operator_delete(pvVar3);
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x2f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[3]);
    puVar7 = (undefined8 *)*param_1;
  }
  else {
    puVar7 = (undefined8 *)*param_1;
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)param_1[1];
  puVar2 = puVar7;
  if (puVar7 != puVar4) {
    do {
      puVar2 = puVar4 + -10;
      if (puVar2 == (undefined8 *)0x0) {
LAB_00be2e70:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar4 + -0x39) < '\0') {
        operator_delete((void *)*puVar2);
      }
      puVar4 = puVar2;
    } while (puVar2 != puVar7);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = (long)puVar7;
  operator_delete(puVar2);
  return;
}


// ===== 00be2e84  FUN_00be2e84 =====

void FUN_00be2e84(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined8 *param_5,ulong param_6,undefined8 *param_7,ulong param_8,
                 undefined4 param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_00d48b98;
  *(undefined4 *)(param_1 + 1) = param_9;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      puVar3 = param_1 + 2;
      *(char *)((long)param_1 + 0x27) = (char)param_3;
    }
    else {
      uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      puVar3 = (undefined8 *)operator_new(uVar2);
      param_1[2] = puVar3;
      param_1[3] = param_3;
      param_1[4] = uVar2 | 0x8000000000000000;
    }
    if ((undefined8 *)((long)puVar3 + param_3) < puVar3) {
LAB_00be30ac:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < puVar3) || ((undefined8 *)((long)puVar3 + param_3) <= param_2)) {
      memmove(puVar3,param_2,param_3);
      *(undefined1 *)((long)puVar3 + param_3) = 0;
      *(undefined4 *)(param_1 + 5) = param_4;
      if (0x7ffffffffffffff6 < param_6) goto LAB_00be30d4;
      if (param_6 < 0x17) {
        puVar3 = param_1 + 6;
        *(char *)((long)param_1 + 0x47) = (char)param_6;
      }
      else {
        uVar1 = (param_6 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        puVar3 = (undefined8 *)operator_new(uVar2);
        param_1[6] = puVar3;
        param_1[7] = param_6;
        param_1[8] = uVar2 | 0x8000000000000000;
      }
      if ((undefined8 *)((long)puVar3 + param_6) < puVar3) goto LAB_00be30ac;
      if ((param_5 < puVar3) || ((undefined8 *)((long)puVar3 + param_6) <= param_5)) {
        memmove(puVar3,param_5,param_6);
        *(undefined1 *)((long)puVar3 + param_6) = 0;
        if (0x7ffffffffffffff6 < param_8) goto LAB_00be30d4;
        if (param_8 < 0x17) {
          puVar3 = param_1 + 9;
          *(char *)((long)param_1 + 0x5f) = (char)param_8;
        }
        else {
          uVar1 = (param_8 & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          puVar3 = (undefined8 *)operator_new(uVar2);
          param_1[9] = puVar3;
          param_1[10] = param_8;
          param_1[0xb] = uVar2 | 0x8000000000000000;
        }
        if ((undefined8 *)((long)puVar3 + param_8) < puVar3) goto LAB_00be30ac;
        if ((param_7 < puVar3) || ((undefined8 *)((long)puVar3 + param_8) <= param_7)) {
          memmove(puVar3,param_7,param_8);
          *(undefined1 *)((long)puVar3 + param_8) = 0;
          *(undefined1 *)(param_1 + 0xc) = 0;
          FUN_007b5d10(param_1 + 0xd);
          FUN_007b5d10(param_1 + 0x11);
          FUN_007b5d10(param_1 + 0x15);
          FUN_007b5d10(param_1 + 0x19);
          FUN_007b5d10(param_1 + 0x1d);
          FUN_007b5d10(param_1 + 0x21);
          FUN_007b5d10(param_1 + 0x25);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00be30d4:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00be30d8  FUN_00be30d8 =====

void FUN_00be30d8(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_00d48b98;
  FUN_007b5d24(param_1 + 0x25);
  FUN_007b5d24(param_1 + 0x21);
  FUN_007b5d24(param_1 + 0x1d);
  FUN_007b5d24(param_1 + 0x19);
  FUN_007b5d24(param_1 + 0x15);
  FUN_007b5d24(param_1 + 0x11);
  FUN_007b5d24(param_1 + 0xd);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x47);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[6]);
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x27);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)param_1[2]);
  return;
}


// ===== 00be31a4  FUN_00be31a4 =====

void FUN_00be31a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe31ac);
  (*pcVar1)();
}


// ===== 00be31ac  FUN_00be31ac =====

undefined8 FUN_00be31ac(void)

{
  return 0;
}


// ===== 00be31b8  FUN_00be31b8 =====

undefined8 FUN_00be31b8(void)

{
  return 0;
}


// ===== 00be31c4  FUN_00be31c4 =====

undefined4 FUN_00be31c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


// ===== 00be31d0  FUN_00be31d0 =====

void FUN_00be31d0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


// ===== 00be31dc  FUN_00be31dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00be31dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_00d48c40;
  uVar1 = _UNK_001f2558;
  uVar2 = _DAT_001f2550;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 1000;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined4 *)((long)param_1 + 0x24) = 7;
  *(undefined8 *)((long)param_1 + 0x14) = uVar1;
  *(undefined8 *)((long)param_1 + 0xc) = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[9] = param_1 + 10;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x12] = 0;
  FUN_007b5d10(param_1 + 0x18);
  uVar2 = FUN_008368a8();
  param_1[0x1c] = uVar2;
  return;
}


// ===== 00be3284  FUN_00be3284 =====

void FUN_00be3284(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}


// ===== 00be3294  FUN_00be3294 =====

void FUN_00be3294(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d48c40;
  FUN_007b5d24(param_1 + 0x18);
  plVar4 = (long *)param_1[0x10];
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[0x11];
    plVar1 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) goto LAB_00be33a0;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar1 = (long *)param_1[0x10];
    }
    param_1[0x11] = plVar4;
    operator_delete(plVar1);
  }
  pvVar6 = (void *)param_1[0xc];
  if (pvVar6 != (void *)0x0) {
    pvVar5 = (void *)param_1[0xd];
    pvVar2 = pvVar6;
    if (pvVar6 != pvVar5) {
      do {
        pvVar5 = (void *)((long)pvVar5 + -0xa0);
        if (pvVar5 == (void *)0x0) {
LAB_00be33a0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00be2ca4(pvVar5);
      } while (pvVar5 != pvVar6);
      pvVar2 = (void *)param_1[0xc];
    }
    param_1[0xd] = pvVar6;
    operator_delete(pvVar2);
  }
  local_18 = param_1 + 9;
  FUN_00b8b8d8(&local_18,param_1[10]);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  return;
}


// ===== 00be33b4  FUN_00be33b4 =====

void FUN_00be33b4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe33bc);
  (*pcVar1)();
}


// ===== 00be33bc  FUN_00be33bc =====

void FUN_00be33bc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb8) = param_2;
  return;
}


// ===== 00be33c8  FUN_00be33c8 =====

undefined8
FUN_00be33c8(long *param_1,long *param_2,long *param_3,int param_4,undefined4 param_5,long param_6,
            int *param_7)

{
  undefined8 ****ppppuVar1;
  undefined1 *puVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_a8;
  undefined8 ***local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined8 ***pppuStack_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  if (param_2[2] == param_1[0xb]) {
    plVar13 = (long *)*param_2;
    if (plVar13 != param_2 + 1) {
      plVar11 = (long *)param_1[9];
      do {
        uVar8 = FUN_007e973c(plVar13 + 4,plVar11 + 4);
        if ((uVar8 & 1) == 0) goto LAB_00be34f8;
        plVar9 = (long *)plVar13[1];
        plVar12 = plVar13;
        if ((long *)plVar13[1] == (long *)0x0) {
          do {
            plVar13 = (long *)plVar12[2];
            bVar6 = plVar12 != (long *)*plVar13;
            plVar12 = plVar13;
          } while (bVar6);
        }
        else {
          do {
            plVar13 = plVar9;
            plVar9 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
        plVar9 = (long *)plVar11[1];
        plVar12 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar12[2];
            bVar6 = plVar12 != (long *)*plVar11;
            plVar12 = plVar11;
          } while (bVar6);
        }
        else {
          do {
            plVar11 = plVar9;
            plVar9 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      } while (plVar13 != param_2 + 1);
    }
    if (param_3[1] - *param_3 == param_1[0xd] - param_1[0xc]) {
      local_a0 = (undefined8 ***)((ulong)local_a0 & 0xffffffffffffff00);
      local_a8 = (long *)CONCAT71(local_a8._1_7_,0xaa);
      uVar7 = FUN_00be45d4();
      uVar7 = uVar7 ^ 1;
    }
    else {
LAB_00be34f8:
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 1;
  }
  if (param_1 + 9 == param_2) goto LAB_00be357c;
  if (param_1[0xb] == 0) {
    lVar10 = FUN_00be483c(param_1 + 9,param_2[1],param_1 + 9);
    plVar13 = param_1 + 10;
    *plVar13 = lVar10;
    if (lVar10 != 0) {
      *(long **)(lVar10 + 0x10) = plVar13;
      plVar11 = (long *)*plVar13;
      goto joined_r0x00be3558;
    }
  }
  else {
    plVar11 = (long *)FUN_00be4748(param_1 + 9,param_1[10],param_2[1],0,param_1 + 9);
    param_1[10] = (long)plVar11;
joined_r0x00be3558:
    if (plVar11 == (long *)0x0) {
      plVar13 = param_1 + 10;
    }
    else {
      do {
        plVar13 = plVar11;
        plVar11 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
  }
  param_1[9] = (long)plVar13;
  param_1[0xb] = param_2[2];
LAB_00be357c:
  if (param_1 + 0xc != param_3) {
    FUN_00be4900(param_1 + 0xc,*param_3,param_3[1],
                 (param_3[1] - *param_3 >> 5) * -0x3333333333333333);
  }
  *(undefined4 *)(param_1 + 0x13) = param_5;
  *(int *)(param_1 + 0xf) = param_4;
  if ((uVar7 & 1) == 0) {
    plVar13 = (long *)param_1[0x11];
  }
  else {
    plVar13 = (long *)param_1[0x10];
    plVar11 = (long *)param_1[0x11];
    if (plVar13 != plVar11) {
      do {
        plVar11 = plVar11 + -1;
        if (plVar11 == (long *)0x0) goto LAB_00be3874;
        plVar9 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
      } while (plVar11 != plVar13);
      param_4 = (int)param_1[0xf];
    }
    param_1[0x11] = (long)plVar13;
  }
  plVar11 = (long *)param_1[0x10];
  param_1[0x14] = param_6;
  if (param_4 < (int)((ulong)((long)plVar13 - (long)plVar11) >> 3)) {
    do {
      if (plVar11 == plVar13) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                  );
      }
      plVar11 = (long *)plVar13[-1];
      plVar13[-1] = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      if (param_1[0x10] == param_1[0x11]) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:492: libc++ Hardening assertion !empty() failed: vector::pop_back called on an empty vector\n"
                  );
      }
      plVar13 = (long *)(param_1[0x11] + -8);
      if (plVar13 == (long *)0x0) {
LAB_00be3874:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar11 = (long *)*plVar13;
      *plVar13 = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      plVar11 = (long *)param_1[0x10];
      param_4 = (int)param_1[0xf];
      param_1[0x11] = (long)plVar13;
    } while (param_4 < (int)((ulong)((long)plVar13 - (long)plVar11) >> 3));
  }
  iVar5 = param_7[1];
  lVar10 = (long)*param_7 * 1000;
  if ((char)iVar5 == '\0') {
    lVar10 = 0;
  }
  param_1[0x15] = lVar10;
  *(char *)(param_1 + 0x16) = (char)iVar5;
  plVar9 = plVar13;
  if (plVar11 != plVar13) {
    do {
      plVar9 = plVar11 + 1;
      (**(code **)(*(long *)*plVar11 + 0x58))((long *)*plVar11,param_1 + 0x15);
      plVar11 = plVar9;
    } while (plVar9 != plVar13);
    plVar13 = (long *)param_1[0x11];
    param_4 = (int)param_1[0xf];
    plVar9 = (long *)param_1[0x10];
  }
  if ((int)((ulong)((long)plVar13 - (long)plVar9) >> 3) < param_4) {
    do {
      pppuStack_88 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      local_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00be5760(&local_a0);
      ppppuVar1 = (undefined8 ****)local_a0;
      puVar4 = puStack_98;
      if (-1 < (long)local_90) {
        ppppuVar1 = &local_a0;
        puVar4 = (undefined1 *)((ulong)local_90 >> 0x38);
      }
      puVar2 = puStack_80;
      ppppuVar3 = (undefined8 ****)pppuStack_88;
      if (-1 < (long)local_78) {
        puVar2 = (undefined1 *)((ulong)local_78 >> 0x38);
        ppppuVar3 = &pppuStack_88;
      }
      plVar13 = (long *)(**(code **)(*param_1 + 0x48))
                                  (param_1,&DAT_001b3348,0,0,ppppuVar1,puVar4,ppppuVar3,puVar2);
      *(undefined1 *)(plVar13 + 0xc) = 1;
      if (*(char *)((long)plVar13 + 0x27) < '\0') {
        *(undefined1 *)plVar13[2] = 0;
        plVar13[3] = 0;
      }
      else {
        *(undefined1 *)(plVar13 + 2) = 0;
        *(undefined1 *)((long)plVar13 + 0x27) = 0;
      }
      (**(code **)(*plVar13 + 0x18))(plVar13);
      plVar11 = (long *)param_1[0x11];
      local_a8 = plVar13;
      if (plVar11 < (long *)param_1[0x12]) {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_a8 = (long *)0x0;
        plVar9 = plVar11 + 1;
        *plVar11 = (long)plVar13;
      }
      else {
        plVar9 = (long *)FUN_00be4ff8(param_1 + 0x10,&local_a8);
      }
      plVar13 = local_a8;
      param_1[0x11] = (long)plVar9;
      local_a8 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      if ((long)local_78 < 0) {
        operator_delete(pppuStack_88);
      }
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
    } while ((int)((ulong)(param_1[0x11] - param_1[0x10]) >> 3) < (int)param_1[0xf]);
  }
  return 1;
}


// ===== 00be38c4  FUN_00be38c4 =====

long * FUN_00be38c4(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x48))();
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined4 *)((long)param_1 + 0x24));
  return plVar1;
}


// ===== 00be390c  FUN_00be390c =====

long * FUN_00be390c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  ppuVar1 = &local_a0;
  if (*(long *)(param_1 + 0x80) == *(long *)(param_1 + 0x88)) {
    return (long *)0x0;
  }
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b184fc(&local_a0,param_5,param_6,param_7,param_8,0);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    ppuVar1 = (undefined1 **)0x0;
  }
  plVar2 = (long *)FUN_00be3b20(param_1,ppuVar1);
  if (*(long **)(param_1 + 0x88) == plVar2) {
    plVar4 = (long *)0x0;
    goto joined_r0x00be3af0;
  }
  plVar4 = (long *)*plVar2;
  *plVar2 = 0;
  FUN_00be3c34(plVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(plVar4 + 0xc) = 0;
  (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(param_1 + 0x24));
  plVar5 = *(long **)(param_1 + 0x88);
  if (plVar5 == plVar2) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar3 = plVar2 + 1;
  if (plVar2 + 1 == plVar5) {
    if (plVar2 != plVar5) {
LAB_00be3a6c:
      do {
        plVar5 = plVar5 + -1;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        plVar3 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
      } while (plVar5 != plVar2);
    }
  }
  else {
    do {
      plVar2 = plVar3;
      plVar3 = (long *)plVar2[-1];
      plVar2[-1] = *plVar2;
      *plVar2 = 0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plVar2 + 1;
    } while (plVar2 + 1 != plVar5);
    plVar5 = *(long **)(param_1 + 0x88);
    if (plVar2 != plVar5) goto LAB_00be3a6c;
  }
  *(long **)(param_1 + 0x88) = plVar2;
joined_r0x00be3af0:
  if ((long)local_78 < 0) {
    operator_delete(puStack_88);
  }
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  return plVar4;
}


// ===== 00be3b20  FUN_00be3b20 =====

long * FUN_00be3b20(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  
  plVar5 = *(long **)(param_1 + 0x80);
  plVar6 = *(long **)(param_1 + 0x88);
  if (plVar5 != plVar6) {
    plVar10 = plVar5;
    do {
      if (param_2 == (undefined8 *)0x0) {
        return plVar5;
      }
      lVar11 = *plVar10;
      bVar7 = *(byte *)((long)param_2 + 0x17);
      bVar8 = *(byte *)(lVar11 + 0x47);
      sVar1 = *(size_t *)(lVar11 + 0x38);
      if (-1 < (char)bVar8) {
        sVar1 = (ulong)bVar8;
      }
      sVar2 = param_2[1];
      if (-1 < (char)bVar7) {
        sVar2 = (ulong)bVar7;
      }
      if (sVar1 == sVar2) {
        puVar3 = (undefined8 *)*(void **)(lVar11 + 0x30);
        if (-1 < (char)bVar8) {
          puVar3 = (undefined8 *)(lVar11 + 0x30);
        }
        puVar4 = (undefined8 *)*param_2;
        if (-1 < (char)bVar7) {
          puVar4 = param_2;
        }
        iVar9 = memcmp(puVar3,puVar4,sVar1);
        if (iVar9 == 0) {
          bVar7 = *(byte *)(lVar11 + 0x5f);
          bVar8 = *(byte *)((long)param_2 + 0x2f);
          sVar1 = *(size_t *)(lVar11 + 0x50);
          if (-1 < (char)bVar7) {
            sVar1 = (ulong)bVar7;
          }
          sVar2 = param_2[4];
          if (-1 < (char)bVar8) {
            sVar2 = (ulong)bVar8;
          }
          if (sVar1 == sVar2) {
            puVar3 = (undefined8 *)*(void **)(lVar11 + 0x48);
            if (-1 < (char)bVar7) {
              puVar3 = (undefined8 *)(lVar11 + 0x48);
            }
            puVar4 = (undefined8 *)param_2[3];
            if (-1 < (char)bVar8) {
              puVar4 = param_2 + 3;
            }
            iVar9 = memcmp(puVar3,puVar4,sVar1);
            if (iVar9 == 0) {
              return plVar10;
            }
          }
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar6);
  }
  return plVar6;
}


// ===== 00be3c34  FUN_00be3c34 =====

void FUN_00be3c34(long *param_1,undefined8 ***param_2,ulong param_3,undefined4 param_4,
                 undefined8 ***param_5,ulong param_6,undefined8 ***param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 ***pppuVar4;
  undefined8 **local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      local_68 = CONCAT17((char)param_3,(undefined7)local_68);
      pppuVar4 = &local_78;
    }
    else {
      uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppuVar4 = (undefined8 ***)operator_new(uVar2);
      local_68 = uVar2 | 0x8000000000000000;
      local_78 = pppuVar4;
      uStack_70 = param_3;
    }
    if ((undefined8 ***)((long)pppuVar4 + param_3) < pppuVar4) {
LAB_00be3ea0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < pppuVar4) || ((undefined8 ***)((long)pppuVar4 + param_3) <= param_2)) {
      memmove(pppuVar4,param_2,param_3);
      cVar3 = *(char *)((long)param_1 + 0x27);
      *(undefined1 *)((long)pppuVar4 + param_3) = 0;
      if (cVar3 < '\0') {
        operator_delete((void *)param_1[2]);
      }
      *(undefined4 *)(param_1 + 5) = param_4;
      param_1[3] = uStack_70;
      param_1[2] = (long)local_78;
      param_1[4] = local_68;
      if (0x7ffffffffffffff6 < param_6) goto LAB_00be3ec8;
      if (param_6 < 0x17) {
        local_68 = CONCAT17((char)param_6,(undefined7)local_68);
        pppuVar4 = &local_78;
      }
      else {
        uVar1 = (param_6 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        pppuVar4 = (undefined8 ***)operator_new(uVar2);
        local_68 = uVar2 | 0x8000000000000000;
        local_78 = pppuVar4;
        uStack_70 = param_6;
      }
      if ((undefined8 ***)((long)pppuVar4 + param_6) < pppuVar4) goto LAB_00be3ea0;
      if ((param_5 < pppuVar4) || ((undefined8 ***)((long)pppuVar4 + param_6) <= param_5)) {
        memmove(pppuVar4,param_5,param_6);
        cVar3 = *(char *)((long)param_1 + 0x47);
        *(undefined1 *)((long)pppuVar4 + param_6) = 0;
        if (cVar3 < '\0') {
          operator_delete((void *)param_1[6]);
        }
        param_1[7] = uStack_70;
        param_1[6] = (long)local_78;
        param_1[8] = local_68;
        if (0x7ffffffffffffff6 < param_8) goto LAB_00be3ec8;
        if (param_8 < 0x17) {
          local_68 = CONCAT17((char)param_8,(undefined7)local_68);
          pppuVar4 = &local_78;
        }
        else {
          uVar1 = (param_8 & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          pppuVar4 = (undefined8 ***)operator_new(uVar2);
          local_68 = uVar2 | 0x8000000000000000;
          local_78 = pppuVar4;
          uStack_70 = param_8;
        }
        if ((undefined8 ***)((long)pppuVar4 + param_8) < pppuVar4) goto LAB_00be3ea0;
        if ((param_7 < pppuVar4) || ((undefined8 ***)((long)pppuVar4 + param_8) <= param_7)) {
          memmove(pppuVar4,param_7,param_8);
          cVar3 = *(char *)((long)param_1 + 0x5f);
          *(undefined1 *)((long)pppuVar4 + param_8) = 0;
          if (cVar3 < '\0') {
            operator_delete((void *)param_1[9]);
          }
          param_1[10] = uStack_70;
          param_1[9] = (long)local_78;
          param_1[0xb] = local_68;
          (**(code **)(*param_1 + 0x90))(param_1);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00be3ec8:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00be3ecc  FUN_00be3ecc =====

void FUN_00be3ecc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x80);
  plVar3 = *(long **)(param_1 + 0x88);
  while( true ) {
    if (plVar1 == plVar3) {
      *(long **)(param_1 + 0x88) = plVar1;
      return;
    }
    plVar3 = plVar3 + -1;
    if (plVar3 == (long *)0x0) break;
    plVar2 = (long *)*plVar3;
    *plVar3 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00be3f50  FUN_00be3f50 =====

void FUN_00be3f50(long param_1,int param_2)

{
  int local_28;
  int iStack_24;
  int *local_20;
  int *piStack_18;
  
  iStack_24 = *(int *)(param_1 + 0x24);
  if (iStack_24 != param_2) {
    *(int *)(param_1 + 0x24) = param_2;
    piStack_18 = &local_28;
    local_20 = &iStack_24;
    local_28 = param_2;
    FUN_007b6160(param_1 + 0xc0,&local_20,FUN_00be5108);
  }
  return;
}


// ===== 00be3fa8  FUN_00be3fa8 =====

void FUN_00be3fa8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  for (puVar2 = *(undefined8 **)(param_1 + 0x80); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x50))((long *)*puVar2,param_2);
  }
  return;
}


// ===== 00be3ffc  FUN_00be3ffc =====

void FUN_00be3ffc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined1 local_38;
  
  plVar1 = *(long **)(param_2 + 0x80);
  plVar3 = *(long **)(param_2 + 0x88);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (plVar1 == plVar3) {
      return;
    }
    lVar9 = *plVar1;
    lVar6 = (long)*(char *)(lVar9 + 0x47);
    if (lVar6 < 0) {
      lVar5 = *(long *)(lVar9 + 0x30);
      lVar6 = *(long *)(lVar9 + 0x38);
      lVar8 = (long)*(char *)(lVar9 + 0x5f);
      if (lVar8 < 0) goto LAB_00be406c;
LAB_00be4058:
      lVar7 = lVar9 + 0x48;
    }
    else {
      lVar5 = lVar9 + 0x30;
      lVar8 = (long)*(char *)(lVar9 + 0x5f);
      if (-1 < lVar8) goto LAB_00be4058;
LAB_00be406c:
      lVar7 = *(long *)(lVar9 + 0x48);
      lVar8 = *(long *)(lVar9 + 0x50);
    }
    FUN_00b184fc(&local_68,lVar5,lVar6,lVar7,lVar8,0);
    puVar2 = (undefined8 *)param_1[1];
    if (puVar2 < (undefined8 *)param_1[2]) {
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2[2] = local_58;
      puVar2[1] = uStack_60;
      *puVar2 = local_68;
      uStack_60 = 0;
      local_58 = 0;
      local_68 = (void *)0x0;
      puVar2[4] = uStack_48;
      puVar2[3] = local_50;
      puVar2[5] = local_40;
      uStack_48 = 0;
      local_40 = 0;
      local_50 = (void *)0x0;
      *(undefined1 *)(puVar2 + 6) = local_38;
      param_1[1] = puVar2 + 7;
    }
    else {
      uVar4 = FUN_00be5128(param_1,&local_68);
      param_1[1] = uVar4;
      if (local_40 < 0) {
        operator_delete(local_50);
      }
    }
    if (local_58 < 0) {
      operator_delete(local_68);
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


// ===== 00be4140  FUN_00be4140 =====

void FUN_00be4140(undefined8 param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = FUN_00aff2e0(param_3);
  if (((uVar4 & 1) == 0) && (uVar4 = FUN_00aff308(param_3), (uVar4 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x50))(param_2);
  }
  if ((((*(uint *)((long)param_2 + 0xc) ^ 0xffffffff) & 0xc00) == 0) ||
     ((*(byte *)((long)param_2 + 0x24) & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x50))(param_2);
    uVar4 = uVar4 & 0xffffffff;
  }
  uVar3 = *(uint *)((long)param_2 + 0x24);
  uVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  uVar5 = FUN_00aff2f4(param_3);
  if ((((uVar4 & 1) == 0) || ((uVar5 & 1) == 0)) &&
     ((uVar4 = FUN_00aff31c(param_3), (uVar4 & 1) == 0 || ((uVar3 >> 1 & 1) != 0)))) {
    uVar3 = FUN_00aff308(param_3);
    uVar2 = uVar2 & uVar3;
  }
  else {
    uVar2 = 1;
  }
  FUN_00b00460(param_1,param_3,uVar1 & 1,uVar2 & 1,0);
  return;
}


// ===== 00be4244  FUN_00be4244 =====

void FUN_00be4244(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00be54bc;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00be54cc;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x68,param_2,&local_48);
  return;
}


// ===== 00be42dc  FUN_00be42dc =====

void FUN_00be42dc(void)

{
  return;
}


// ===== 00be42e4  FUN_00be42e4 =====

void FUN_00be42e4(void)

{
  return;
}


// ===== 00be42ec  FUN_00be42ec =====

void FUN_00be42ec(void)

{
  return;
}


// ===== 00be42f4  FUN_00be42f4 =====

void FUN_00be42f4(void)

{
  return;
}


// ===== 00be42fc  FUN_00be42fc =====

void FUN_00be42fc(void)

{
  return;
}


// ===== 00be4304  FUN_00be4304 =====

void FUN_00be4304(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}


// ===== 00be4310  FUN_00be4310 =====

void FUN_00be4310(void)

{
  return;
}


// ===== 00be4318  FUN_00be4318 =====

undefined8 FUN_00be4318(void)

{
  return 0;
}


// ===== 00be4324  FUN_00be4324 =====

long FUN_00be4324(long *param_1,long param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar4 = (lVar7 >> 4) * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar4) {
    FUN_00be45bc();
LAB_00be44b0:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  lVar5 = param_1[2] - *param_1 >> 4;
  uVar6 = lVar5 * -0x6666666666666666;
  if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
    uVar6 = uVar4;
  }
  if (0x199999999999998 < (ulong)(lVar5 * -0x3333333333333333)) {
    uVar6 = 0x333333333333333;
  }
  if (uVar6 != 0) {
    if (0x333333333333333 < uVar6) goto LAB_00be44b0;
    local_50 = operator_new(uVar6 * 0x50);
  }
  puVar2 = (undefined8 *)((long)local_50 + lVar7);
  local_38 = (void *)((long)local_50 + uVar6 * 0x50);
  local_48 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_007e8cec(puVar2,param_2);
  local_40 = puVar2 + 10;
  *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_2 + 0x48);
  FUN_00be44b4(param_1,&local_50);
  puVar3 = local_48;
  lVar7 = param_1[1];
  puVar2 = local_40;
  while( true ) {
    if (puVar3 == puVar2) {
      if (local_50 != (void *)0x0) {
        local_40 = puVar2;
        operator_delete(local_50);
      }
      return lVar7;
    }
    puVar8 = puVar2 + -10;
    if (puVar8 == (undefined8 *)0x0) break;
    pcVar1 = (char *)((long)puVar2 + -0x39);
    puVar2 = puVar8;
    if (*pcVar1 < '\0') {
      operator_delete((void *)*puVar8);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00be44b4  FUN_00be44b4 =====

void FUN_00be44b4(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar7 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar3 = (long)puVar7 + (param_2[1] - (long)puVar2);
  puVar6 = puVar7;
  lVar4 = lVar3;
  if (puVar2 != puVar7) {
    do {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007e8cec(lVar4,puVar6);
      puVar1 = puVar6 + 10;
      *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(puVar6 + 9);
      puVar6 = puVar1;
      lVar4 = lVar4 + 0x50;
    } while (puVar1 != puVar2);
    do {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        operator_delete((void *)*puVar7);
      }
      puVar7 = puVar7 + 10;
    } while (puVar7 != puVar2);
  }
  param_2[1] = lVar3;
  lVar3 = *param_1;
  lVar5 = param_1[2];
  param_1[1] = lVar3;
  lVar8 = param_2[1];
  lVar4 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar8;
  param_1[2] = lVar4;
  param_2[2] = lVar3;
  param_2[3] = lVar5;
  *param_2 = lVar3;
  param_2[1] = lVar3;
  return;
}


// ===== 00be45bc  FUN_00be45bc =====

void FUN_00be45bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00be45d4  FUN_00be45d4 =====

undefined8 FUN_00be45d4(long *param_1,long *param_2,long *param_3)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  
  if (param_1 == param_2) {
    return 1;
  }
  while( true ) {
    lVar5 = *param_1;
    lVar7 = param_1[1];
    lVar6 = *param_3;
    if (lVar7 - lVar5 != param_3[1] - lVar6) {
      return 0;
    }
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x50) {
      uVar11 = FUN_007e973c(lVar5,lVar6);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      if (*(int *)(lVar5 + 0x48) != *(int *)(lVar6 + 0x48)) {
        return 0;
      }
      lVar6 = lVar6 + 0x50;
    }
    bVar8 = *(byte *)((long)param_1 + 0x2f);
    bVar9 = *(byte *)((long)param_3 + 0x2f);
    sVar1 = param_1[4];
    if (-1 < (char)bVar8) {
      sVar1 = (ulong)bVar8;
    }
    sVar2 = param_3[4];
    if (-1 < (char)bVar9) {
      sVar2 = (ulong)bVar9;
    }
    if (sVar1 != sVar2) {
      return 0;
    }
    plVar3 = (long *)param_1[3];
    if (-1 < (char)bVar8) {
      plVar3 = param_1 + 3;
    }
    plVar4 = (long *)param_3[3];
    if (-1 < (char)bVar9) {
      plVar4 = param_3 + 3;
    }
    iVar10 = memcmp(plVar3,plVar4,sVar1);
    if (iVar10 != 0) {
      return 0;
    }
    bVar8 = *(byte *)((long)param_1 + 0x47);
    bVar9 = *(byte *)((long)param_3 + 0x47);
    sVar1 = param_1[7];
    if (-1 < (char)bVar8) {
      sVar1 = (ulong)bVar8;
    }
    sVar2 = param_3[7];
    if (-1 < (char)bVar9) {
      sVar2 = (ulong)bVar9;
    }
    if (sVar1 != sVar2) break;
    plVar3 = (long *)param_1[6];
    if (-1 < (char)bVar8) {
      plVar3 = param_1 + 6;
    }
    plVar4 = (long *)param_3[6];
    if (-1 < (char)bVar9) {
      plVar4 = param_3 + 6;
    }
    iVar10 = memcmp(plVar3,plVar4,sVar1);
    if (iVar10 != 0) {
      return 0;
    }
    param_1 = param_1 + 0x14;
    param_3 = param_3 + 0x14;
    if (param_1 == param_2) {
      return 1;
    }
  }
  return 0;
}


// ===== 00be4748  FUN_00be4748 =====

long * FUN_00be4748(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  undefined8 local_38;
  
  if (param_3 == (long *)0x0) {
    local_38 = param_1;
    FUN_00b8b8d8(&local_38,param_2);
    param_2 = (long *)0x0;
  }
  else {
    FUN_007e8d84(param_2 + 4,param_3 + 4);
    *(char *)(param_2 + 3) = (char)param_3[3];
    lVar1 = *param_3;
    if (*param_2 == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_00be483c(param_5,lVar1,param_5);
        *param_2 = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_00be4748(param_1,*param_2,lVar1,0,param_5);
      *param_2 = lVar1;
    }
    lVar1 = param_3[1];
    if (param_2[1] == 0) {
      if (lVar1 != 0) {
        lVar1 = FUN_00be483c(param_5,lVar1,param_5);
        param_2[1] = lVar1;
        *(long **)(lVar1 + 0x10) = param_2;
      }
    }
    else {
      lVar1 = FUN_00be4748(param_1,param_2[1],lVar1,0,param_5);
      param_2[1] = lVar1;
    }
  }
  return param_2;
}


// ===== 00be483c  FUN_00be483c =====

long * FUN_00be483c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  plVar2 = (long *)operator_new(0x68);
  if (plVar2 != (long *)0x0) {
    *plVar2 = 0;
    if (plVar2 + 4 != (long *)0x0) {
      FUN_007e8cec(plVar2 + 4,param_2 + 4);
      lVar3 = FUN_00be483c(param_1,*param_2,param_3);
      lVar4 = FUN_00be483c(param_1,param_2[1],param_3);
      uVar1 = *(undefined1 *)(param_2 + 3);
      *plVar2 = lVar3;
      plVar2[1] = lVar4;
      *(undefined1 *)(plVar2 + 3) = uVar1;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 0x10) = plVar2;
        lVar4 = plVar2[1];
      }
      if (lVar4 == 0) {
        return plVar2;
      }
      *(long **)(lVar4 + 0x10) = plVar2;
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00be4900  FUN_00be4900 =====

void FUN_00be4900(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  
  lVar3 = param_1[2];
  pvVar5 = (void *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)pvVar5 >> 5) * -0x3333333333333333)) {
    pvVar6 = (void *)param_1[1];
    lVar3 = (long)pvVar6 - (long)pvVar5;
    if ((ulong)((lVar3 >> 5) * -0x3333333333333333) < param_4) {
      lVar1 = param_2;
      pvVar2 = pvVar6;
      if (pvVar6 != pvVar5) {
        lVar1 = param_2 + lVar3;
        do {
          FUN_00be4b58(pvVar5,param_2);
          lVar3 = lVar3 + -0xa0;
          param_2 = param_2 + 0xa0;
          pvVar5 = (void *)((long)pvVar5 + 0xa0);
        } while (lVar3 != 0);
        pvVar6 = (void *)param_1[1];
        pvVar2 = pvVar6;
      }
      while( true ) {
        if (lVar1 == param_3) {
          param_1[1] = pvVar2;
          return;
        }
        if (pvVar6 == (void *)0x0) break;
        FUN_00be2b28(pvVar6,lVar1);
        pvVar6 = (void *)((long)pvVar6 + 0xa0);
        lVar1 = lVar1 + 0xa0;
        pvVar2 = (void *)((long)pvVar2 + 0xa0);
      }
LAB_00be4b2c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (param_2 != param_3) {
      do {
        FUN_00be4b58(pvVar5,param_2);
        param_2 = param_2 + 0xa0;
        pvVar5 = (void *)((long)pvVar5 + 0xa0);
      } while (param_2 != param_3);
      pvVar6 = (void *)param_1[1];
    }
    while (pvVar5 != pvVar6) {
      pvVar6 = (void *)((long)pvVar6 + -0xa0);
      if (pvVar6 == (void *)0x0) goto LAB_00be4b40;
      FUN_00be2ca4(pvVar6);
    }
LAB_00be4b0c:
    param_1[1] = pvVar5;
    return;
  }
  if (pvVar5 != (void *)0x0) {
    pvVar6 = (void *)param_1[1];
    pvVar2 = pvVar5;
    if (pvVar5 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0xa0);
        if (pvVar6 == (void *)0x0) {
LAB_00be4b40:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00be2ca4(pvVar6);
      } while (pvVar6 != pvVar5);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar5;
    operator_delete(pvVar2);
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x19999999999999a) {
    uVar4 = (lVar3 >> 5) * -0x6666666666666666;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0xcccccccccccccb < (ulong)((lVar3 >> 5) * -0x3333333333333333)) {
      uVar4 = 0x199999999999999;
    }
    if (uVar4 < 0x19999999999999a) {
      pvVar5 = operator_new(uVar4 * 0xa0);
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (void *)((long)pvVar5 + uVar4 * 0xa0);
      if (param_2 != param_3) {
        do {
          if (pvVar5 == (void *)0x0) goto LAB_00be4b2c;
          FUN_00be2b28(pvVar5,param_2);
          param_2 = param_2 + 0xa0;
          pvVar5 = (void *)((long)pvVar5 + 0xa0);
        } while (param_2 != param_3);
      }
      goto LAB_00be4b0c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00be2894();
}


// ===== 00be4b58  FUN_00be4b58 =====

long * FUN_00be4b58(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == param_2) {
    FUN_00be4c7c(param_1 + 3,param_2 + 3);
    *(int *)(param_1 + 9) = (int)param_2[9];
    param_1[0x10] = param_2[0x10];
  }
  else {
    FUN_00be4d54(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 4) * -0x3333333333333333);
    FUN_00be4c7c(param_1 + 3,param_2 + 3);
    *(int *)(param_1 + 9) = (int)param_2[9];
    FUN_007eeac8(param_1 + 10,param_2[10],param_2[0xb],
                 (param_2[0xb] - param_2[10] >> 3) * -0x5555555555555555);
    FUN_007eeac8(param_1 + 0xd,param_2[0xd],param_2[0xe],
                 (param_2[0xe] - param_2[0xd] >> 3) * -0x5555555555555555);
    param_1[0x10] = param_2[0x10];
    bVar2 = *(byte *)((long)param_2 + 0x9f);
    if (*(char *)((long)param_1 + 0x9f) < '\0') {
      uVar1 = param_2[0x12];
      plVar3 = (long *)param_2[0x11];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        plVar3 = param_2 + 0x11;
      }
      FUN_00547f08(param_1 + 0x11,plVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x11,param_2[0x11],param_2[0x12]);
    }
    else {
      lVar5 = param_2[0x12];
      lVar4 = param_2[0x11];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = lVar5;
      param_1[0x11] = lVar4;
    }
  }
  return param_1;
}


// ===== 00be4c7c  FUN_00be4c7c =====

undefined8 * FUN_00be4c7c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      uVar1 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2;
      }
      FUN_00547f08(param_1,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1,*param_2,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
    bVar2 = *(byte *)((long)param_2 + 0x2f);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      uVar1 = param_2[4];
      puVar3 = (undefined8 *)param_2[3];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 3;
      }
      FUN_00547f08(param_1 + 3,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 3,param_2[3],param_2[4]);
    }
    else {
      uVar5 = param_2[4];
      uVar4 = param_2[3];
      param_1[5] = param_2[5];
      param_1[4] = uVar5;
      param_1[3] = uVar4;
    }
  }
  return param_1;
}


// ===== 00be4d54  FUN_00be4d54 =====

undefined8 * FUN_00be4d54(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  size_t __n;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  void *__dest;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  
  lVar7 = param_1[2];
  puVar14 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar7 - (long)puVar14 >> 4) * -0x3333333333333333)) {
    puVar8 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar8 - (long)puVar14 >> 4) * -0x3333333333333333) < param_4) {
      puVar3 = param_1;
      lVar7 = param_2;
      puVar13 = puVar8;
      if (puVar8 != puVar14) {
        lVar7 = param_2 + ((long)puVar8 - (long)puVar14);
        do {
          puVar3 = (undefined8 *)FUN_007e8d84(puVar14,param_2);
          puVar2 = (undefined4 *)(param_2 + 0x48);
          param_2 = param_2 + 0x50;
          *(undefined4 *)(puVar14 + 9) = *puVar2;
          puVar14 = puVar14 + 10;
        } while (param_2 != lVar7);
        puVar8 = (undefined8 *)param_1[1];
        puVar13 = puVar8;
      }
      while( true ) {
        if (lVar7 == param_3) {
          param_1[1] = puVar8;
          return puVar3;
        }
        if (puVar13 == (undefined8 *)0x0) break;
        puVar3 = (undefined8 *)FUN_007e8cec(puVar13,lVar7);
        puVar8 = puVar8 + 10;
        *(undefined4 *)(puVar13 + 9) = *(undefined4 *)(lVar7 + 0x48);
        lVar7 = lVar7 + 0x50;
        puVar13 = puVar13 + 10;
      }
LAB_00be4fcc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar3 = param_1;
    if (param_2 != param_3) {
      do {
        puVar3 = (undefined8 *)FUN_007e8d84(puVar14,param_2);
        puVar2 = (undefined4 *)(param_2 + 0x48);
        param_2 = param_2 + 0x50;
        *(undefined4 *)(puVar14 + 9) = *puVar2;
        puVar14 = puVar14 + 10;
      } while (param_2 != param_3);
      puVar8 = (undefined8 *)param_1[1];
    }
    while (puVar14 != puVar8) {
      puVar13 = puVar8 + -10;
      if (puVar13 == (undefined8 *)0x0) goto LAB_00be4fe0;
      pcVar1 = (char *)((long)puVar8 + -0x39);
      puVar8 = puVar13;
      if (*pcVar1 < '\0') {
        puVar3 = (undefined8 *)*puVar13;
        operator_delete(puVar3);
      }
    }
LAB_00be4fb0:
    param_1[1] = puVar14;
    return puVar3;
  }
  if (puVar14 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)param_1[1];
    puVar3 = puVar14;
    if (puVar14 != puVar8) {
      do {
        puVar3 = puVar8 + -10;
        if (puVar3 == (undefined8 *)0x0) {
LAB_00be4fe0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (*(char *)((long)puVar8 + -0x39) < '\0') {
          operator_delete((void *)*puVar3);
        }
        puVar8 = puVar3;
      } while (puVar3 != puVar14);
      puVar3 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar14;
    operator_delete(puVar3);
    lVar7 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x333333333333334) {
    uVar11 = (lVar7 >> 4) * -0x6666666666666666;
    if (uVar11 < param_4 || uVar11 - param_4 == 0) {
      uVar11 = param_4;
    }
    if (0x199999999999998 < (ulong)((lVar7 >> 4) * -0x3333333333333333)) {
      uVar11 = 0x333333333333333;
    }
    if (uVar11 < 0x333333333333334) {
      puVar3 = (undefined8 *)operator_new(uVar11 * 0x50);
      *param_1 = puVar3;
      param_1[1] = puVar3;
      param_1[2] = puVar3 + uVar11 * 10;
      puVar14 = puVar3;
      if (param_2 != param_3) {
        do {
          if (puVar14 == (undefined8 *)0x0) goto LAB_00be4fcc;
          puVar3 = (undefined8 *)FUN_007e8cec(puVar14,param_2);
          puVar2 = (undefined4 *)(param_2 + 0x48);
          param_2 = param_2 + 0x50;
          *(undefined4 *)(puVar14 + 9) = *puVar2;
          puVar14 = puVar14 + 10;
        } while (param_2 != param_3);
      }
      goto LAB_00be4fb0;
    }
  }
  auVar15 = FUN_00be45bc();
  plVar4 = auVar15._0_8_;
  puVar14 = (undefined8 *)(plVar4[1] - *plVar4);
  uVar11 = ((long)puVar14 >> 3) + 1;
  if (uVar11 >> 0x3d != 0) {
    FUN_00be50f0();
LAB_00be50ec:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar9 = plVar4[2] - *plVar4;
  uVar12 = (long)uVar9 >> 2;
  if (uVar12 <= uVar11) {
    uVar12 = uVar11;
  }
  if (0x7ffffffffffffff7 < uVar9) {
    uVar12 = 0x1fffffffffffffff;
  }
  if (uVar12 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (uVar12 >> 0x3d != 0) goto LAB_00be50ec;
    pvVar5 = operator_new(uVar12 << 3);
    puVar14 = (undefined8 *)((long)pvVar5 + (long)puVar14);
  }
  if (puVar14 != (undefined8 *)0x0) {
    uVar10 = *auVar15._8_8_;
    *auVar15._8_8_ = 0;
    *puVar14 = uVar10;
    __n = plVar4[1] - *plVar4;
    __dest = (void *)((long)puVar14 - __n);
    memcpy(__dest,(void *)*plVar4,__n);
    pvVar6 = (void *)*plVar4;
    *plVar4 = (long)__dest;
    plVar4[1] = (long)(puVar14 + 1);
    plVar4[2] = (long)((long)pvVar5 + uVar12 * 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    return puVar14 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00be4ff8  FUN_00be4ff8 =====

undefined8 * FUN_00be4ff8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00be50f0();
LAB_00be50ec:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00be50ec;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00be50f0  FUN_00be50f0 =====

void FUN_00be50f0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00be5108  FUN_00be5108 =====

void FUN_00be5108(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00be5124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined4 *)*param_1,*(undefined4 *)param_1[1]);
  return;
}


// ===== 00be5128  FUN_00be5128 =====

long FUN_00be5128(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar4 = param_1[1] - *param_1;
  uVar1 = (lVar4 >> 3) * 0x6db6db6db6db6db7 + 1;
  if (0x492492492492492 < uVar1) {
    FUN_00be54a4();
LAB_00be5284:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  lVar2 = param_1[2] - *param_1 >> 3;
  uVar3 = lVar2 * -0x2492492492492492;
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar3 = uVar1;
  }
  if (0x249249249249248 < (ulong)(lVar2 * 0x6db6db6db6db6db7)) {
    uVar3 = 0x492492492492492;
  }
  if (uVar3 != 0) {
    if (0x492492492492492 < uVar3) goto LAB_00be5284;
    local_50 = operator_new(uVar3 * 0x38);
  }
  local_38 = (void *)((long)local_50 + uVar3 * 0x38);
  local_48 = (undefined8 *)((long)local_50 + lVar4);
  if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar6 = param_2[1];
  uVar5 = *param_2;
  local_48[2] = param_2[2];
  local_48[1] = uVar6;
  *local_48 = uVar5;
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  local_48[5] = param_2[5];
  local_48[4] = uVar6;
  local_48[3] = uVar5;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined1 *)(local_48 + 6) = *(undefined1 *)(param_2 + 6);
  local_40 = local_48 + 7;
  FUN_00be5288(param_1,&local_50);
  lVar4 = param_1[1];
  FUN_00be53d0(&local_50);
  return lVar4;
}


// ===== 00be5288  FUN_00be5288 =====

void FUN_00be5288(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar10 + (param_2[1] - (long)puVar3));
  puVar5 = puVar10;
  puVar7 = puVar2;
  if (puVar3 != puVar10) {
    do {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar8 = puVar5[1];
      uVar6 = *puVar5;
      puVar7[2] = puVar5[2];
      puVar7[1] = uVar8;
      *puVar7 = uVar6;
      uVar8 = puVar5[4];
      uVar6 = puVar5[3];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      puVar7[5] = puVar5[5];
      puVar7[4] = uVar8;
      puVar7[3] = uVar6;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[3] = 0;
      puVar1 = puVar5 + 7;
      *(undefined1 *)(puVar7 + 6) = *(undefined1 *)(puVar5 + 6);
      puVar5 = puVar1;
      puVar7 = puVar7 + 7;
    } while (puVar1 != puVar3);
    do {
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar10 + 0x2f) < '\0') {
        operator_delete((void *)puVar10[3]);
        cVar4 = *(char *)((long)puVar10 + 0x17);
      }
      else {
        cVar4 = *(char *)((long)puVar10 + 0x17);
      }
      if (cVar4 < '\0') {
        operator_delete((void *)*puVar10);
      }
      puVar10 = puVar10 + 7;
    } while (puVar10 != puVar3);
  }
  param_2[1] = puVar2;
  uVar6 = *param_1;
  uVar9 = param_1[2];
  param_1[1] = uVar6;
  uVar11 = param_2[1];
  uVar8 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar11;
  param_1[2] = uVar8;
  param_2[2] = uVar6;
  param_2[3] = uVar9;
  *param_2 = uVar6;
  param_2[1] = uVar6;
  return;
}


// ===== 00be53d0  FUN_00be53d0 =====

void FUN_00be53d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  while (puVar1 != puVar3) {
    puVar4 = puVar3 + -7;
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (*(char *)((long)puVar3 + -9) < '\0') {
      operator_delete((void *)puVar3[-4]);
      cVar2 = *(char *)((long)puVar3 + -0x21);
    }
    else {
      cVar2 = *(char *)((long)puVar3 + -0x21);
    }
    puVar3 = puVar4;
    if (cVar2 < '\0') {
      operator_delete((void *)*puVar4);
    }
  }
  param_1[2] = puVar3;
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00be54a4  FUN_00be54a4 =====

void FUN_00be54a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00be54bc  FUN_00be54bc =====

void FUN_00be54bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00be54c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00be54cc  FUN_00be54cc =====

void FUN_00be54cc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00be550c  FUN_00be550c =====

void FUN_00be550c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d48ca8;
  param_1[1] = 0;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  uVar5 = lVar3 - lVar2;
  if (uVar5 != 0) {
    if (0x492492492492492 < (ulong)(((long)uVar5 >> 3) * 0x6db6db6db6db6db7)) {
      puVar7 = (undefined8 *)FUN_00be54a4();
      puVar10 = (undefined8 *)puVar7[1];
      *puVar7 = &PTR_FUN_00d48ca8;
      if (puVar10 == (undefined8 *)0x0) {
        return;
      }
      puVar9 = (undefined8 *)puVar7[2];
      puVar8 = puVar10;
      if (puVar10 != puVar9) {
        do {
          puVar8 = puVar9 + -7;
          if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if (*(char *)((long)puVar9 + -9) < '\0') {
            operator_delete((void *)puVar9[-4]);
            cVar4 = *(char *)((long)puVar9 + -0x21);
          }
          else {
            cVar4 = *(char *)((long)puVar9 + -0x21);
          }
          if (cVar4 < '\0') {
            operator_delete((void *)*puVar8);
          }
          puVar9 = puVar8;
        } while (puVar8 != puVar10);
        puVar8 = (undefined8 *)puVar7[1];
      }
      puVar7[2] = puVar10;
      operator_delete(puVar8);
      return;
    }
    pvVar6 = operator_new(uVar5);
    param_1[1] = pvVar6;
    param_1[2] = pvVar6;
    param_1[3] = (long)pvVar6 + uVar5;
    lVar11 = 0;
    do {
      puVar7 = (undefined8 *)((long)pvVar6 + lVar11);
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar10 = (undefined8 *)(lVar2 + lVar11);
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        FUN_005478d8(puVar7,*(undefined8 *)(lVar2 + lVar11),((undefined8 *)(lVar2 + lVar11))[1]);
      }
      else {
        uVar13 = puVar10[1];
        uVar12 = *puVar10;
        puVar7[2] = puVar10[2];
        puVar7[1] = uVar13;
        *puVar7 = uVar12;
      }
      lVar1 = lVar2 + lVar11;
      if (*(char *)(lVar1 + 0x2f) < '\0') {
        FUN_005478d8((long)pvVar6 + lVar11 + 0x18,*(undefined8 *)(lVar1 + 0x18),
                     *(undefined8 *)(lVar1 + 0x20));
      }
      else {
        uVar13 = *(undefined8 *)(lVar1 + 0x20);
        uVar12 = *(undefined8 *)(lVar1 + 0x18);
        *(undefined8 *)((long)pvVar6 + lVar11 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *(undefined8 *)((long)pvVar6 + lVar11 + 0x20) = uVar13;
        *(undefined8 *)((long)pvVar6 + lVar11 + 0x18) = uVar12;
      }
      lVar1 = lVar11 + 0x38;
      *(undefined1 *)((long)pvVar6 + lVar11 + 0x30) = *(undefined1 *)(lVar2 + lVar11 + 0x30);
      lVar11 = lVar1;
    } while (lVar2 + lVar1 != lVar3);
    param_1[2] = (long)pvVar6 + lVar1;
  }
  return;
}


// ===== 00be5650  FUN_00be5650 =====

void FUN_00be5650(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_00d48ca8;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[2];
  puVar2 = puVar4;
  if (puVar4 != puVar3) {
    do {
      puVar2 = puVar3 + -7;
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar3 + -9) < '\0') {
        operator_delete((void *)puVar3[-4]);
        cVar1 = *(char *)((long)puVar3 + -0x21);
      }
      else {
        cVar1 = *(char *)((long)puVar3 + -0x21);
      }
      if (cVar1 < '\0') {
        operator_delete((void *)*puVar2);
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)param_1[1];
  }
  param_1[2] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 00be5730  FUN_00be5730 =====

void FUN_00be5730(void *param_1)

{
  FUN_00be5650();
  operator_delete(param_1);
  return;
}


// ===== 00be5760  FUN_00be5760 =====

void FUN_00be5760(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined1 *local_60;
  ulong uStack_58;
  byte bStack_49;
  undefined8 **local_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_00835a20(&local_48,(long)*(int *)PTR_DAT_00d52608);
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < (char)bStack_31) {
    pppuVar1 = &local_48;
    uStack_40 = (ulong)bStack_31;
  }
  FUN_00835a20(&local_60,(long)*(int *)PTR_DAT_00d52610);
  ppuVar2 = (undefined1 **)local_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    ppuVar2 = &local_60;
  }
  FUN_00b184fc(param_1,pppuVar1,uStack_40,ppuVar2,uStack_58,0);
  if ((char)bStack_49 < '\0') {
    operator_delete(local_60);
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}


// ===== 00be5844  FUN_00be5844 =====

/* WARNING: Removing unreachable block (ram,0x00be5934) */
/* WARNING: Removing unreachable block (ram,0x00be58e4) */
/* WARNING: Removing unreachable block (ram,0x00be58d0) */
/* WARNING: Removing unreachable block (ram,0x00be594c) */

void FUN_00be5844(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (*(long *)(param_2 + 8) == lVar2) {
    FUN_00be5760(param_1);
    return;
  }
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  uVar5 = *(undefined8 *)(lVar2 + -0x30);
  uVar4 = *(undefined8 *)(lVar2 + -0x38);
  param_1[2] = *(undefined8 *)(lVar2 + -0x28);
  param_1[1] = uVar5;
  *param_1 = uVar4;
  uVar5 = *(undefined8 *)(lVar2 + -0x18);
  uVar4 = *(undefined8 *)(lVar2 + -0x20);
  param_1[5] = *(undefined8 *)(lVar2 + -0x10);
  param_1[4] = uVar5;
  param_1[3] = uVar4;
  lVar1 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(lVar2 + -8);
  if (lVar1 != lVar3) {
    lVar3 = lVar3 + -0x38;
    if (lVar3 != 0) {
      *(long *)(param_2 + 0x10) = lVar3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:492: libc++ Hardening assertion !empty() failed: vector::pop_back called on an empty vector\n"
            );
}


// ===== 00be5988  FUN_00be5988 =====

bool FUN_00be5988(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((int)param_1[3] != (int)param_2[3]) {
    return false;
  }
  lVar5 = *param_1;
  lVar1 = param_1[1];
  lVar6 = *param_2;
  if (lVar1 - lVar5 == param_2[1] - lVar6) {
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0xb0) {
      uVar4 = FUN_00bf38dc(lVar5,lVar6);
      if ((uVar4 & 1) == 0) {
        return false;
      }
      lVar6 = lVar6 + 0xb0;
    }
    if ((((((*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c)) &&
           ((int)param_1[4] == (int)param_2[4])) && ((int)param_1[0xb] == (int)param_2[0xb])) &&
         ((*(int *)((long)param_1 + 0x5c) == *(int *)((long)param_2 + 0x5c) &&
          ((int)param_1[0xc] == (int)param_2[0xc])))) &&
        ((*(char *)((long)param_1 + 100) == *(char *)((long)param_2 + 100) &&
         (((int)param_1[0xd] == (int)param_2[0xd] &&
          (*(int *)((long)param_1 + 0x6c) == *(int *)((long)param_2 + 0x6c))))))) &&
       (((int)param_1[0xe] == (int)param_2[0xe] &&
        (*(int *)((long)param_1 + 0x74) == *(int *)((long)param_2 + 0x74))))) {
      plVar2 = (long *)param_1[5];
      plVar3 = (long *)param_2[5];
      if (param_1[6] - param_1[5] == param_2[6] - param_2[5]) {
        do {
          if (plVar2 == (long *)param_1[6]) {
            if ((char)param_1[0xf] != (char)param_2[0xf]) {
              return false;
            }
            uVar4 = FUN_00be5d4c((long)param_1 + 0x7c,(long)param_2 + 0x7c);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if (*(char *)((long)param_1 + 0x44) != *(char *)((long)param_2 + 0x44)) {
              return false;
            }
            if ((int)param_1[9] != (int)param_2[9]) {
              return false;
            }
            if (*(char *)((long)param_1 + 0x4c) != *(char *)((long)param_2 + 0x4c)) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 10,param_2 + 10);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if ((int)param_1[8] != (int)param_2[8]) {
              return false;
            }
            if (*(char *)((long)param_1 + 0x9c) != *(char *)((long)param_2 + 0x9c)) {
              return false;
            }
            if ((int)param_1[0x14] != (int)param_2[0x14]) {
              return false;
            }
            if (*(char *)((long)param_1 + 0xa4) != *(char *)((long)param_2 + 0xa4)) {
              return false;
            }
            if (*(char *)((long)param_1 + 0xa5) != *(char *)((long)param_2 + 0xa5)) {
              return false;
            }
            if (*(char *)((long)param_1 + 0xa6) != *(char *)((long)param_2 + 0xa6)) {
              return false;
            }
            if (*(char *)((long)param_1 + 0xa7) != *(char *)((long)param_2 + 0xa7)) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 0x15,param_2 + 0x15);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 0x16,param_2 + 0x16);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 0x17,param_2 + 0x17);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 0x18,param_2 + 0x18);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 0x19,param_2 + 0x19);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 0x1a,param_2 + 0x1a);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_00843590(param_1 + 0x1b,param_2 + 0x1b);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if (param_1[0x1c] != param_2[0x1c]) {
              return false;
            }
            if ((int)param_1[0x1e] != (int)param_2[0x1e]) {
              return false;
            }
            uVar4 = FUN_00be5e0c(param_1 + 0x1d,param_2 + 0x1d);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_007ec0b4(param_1 + 0x1f,param_2 + 0x1f);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if ((char)param_1[0x23] != (char)param_2[0x23]) {
              return false;
            }
            uVar4 = FUN_005f0614(param_1 + 0x24,param_2 + 0x24);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if ((char)param_1[0x27] != (char)param_2[0x27]) {
              return false;
            }
            uVar4 = FUN_00843590((long)param_1 + 0x13c,(long)param_2 + 0x13c);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            uVar4 = FUN_00843590((long)param_1 + 0x144,(long)param_2 + 0x144);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if (*(int *)((long)param_1 + 0x14c) != *(int *)((long)param_2 + 0x14c)) {
              return false;
            }
            uVar4 = FUN_00be5e64(param_1 + 0x2a,param_2 + 0x2a);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if ((int)param_1[0x2d] != (int)param_2[0x2d]) {
              return false;
            }
            if (*(int *)((long)param_1 + 0x16c) != *(int *)((long)param_2 + 0x16c)) {
              return false;
            }
            if ((int)param_1[0x2e] != (int)param_2[0x2e]) {
              return false;
            }
            uVar4 = FUN_0065961c(param_1 + 0x2f,param_2 + 0x2f);
            if ((uVar4 & 1) == 0) {
              return false;
            }
            if ((char)param_1[0x31] != (char)param_2[0x31]) {
              return false;
            }
            return *(int *)((long)param_1 + 0x18c) == *(int *)((long)param_2 + 0x18c);
          }
          lVar5 = *plVar2;
          lVar6 = *plVar3;
          plVar2 = plVar2 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar5 == lVar6);
      }
    }
  }
  return false;
}


// ===== 00be5d4c  FUN_00be5d4c =====

bool FUN_00be5d4c(char *param_1,char *param_2)

{
  if ((((((*param_1 == *param_2) && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])) &&
       ((param_1[6] == param_2[6] && (param_1[7] == param_2[7])))) &&
      ((param_1[8] == param_2[8] &&
       ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc) && (param_1[0x10] == param_2[0x10]))))))
     && ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
         (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))))) {
    return param_1[0x1c] == param_2[0x1c];
  }
  return false;
}


// ===== 00be5e0c  FUN_00be5e0c =====

bool FUN_00be5e0c(int *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_2 + 1);
  bVar2 = *(byte *)(param_1 + 1) == bVar1;
  if ((bVar1 & *(byte *)(param_1 + 1)) != 0) {
    if ((bVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    bVar2 = *param_1 == *param_2;
  }
  return bVar2;
}


// ===== 00be5e64  FUN_00be5e64 =====

byte FUN_00be5e64(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar2 = param_1[1];
  lVar5 = *param_2;
  if (lVar2 - lVar4 == param_2[1] - lVar5) {
    if (lVar4 == lVar2) {
      bVar3 = 1;
    }
    else {
      do {
        bVar3 = FUN_007e9cb8(lVar4,lVar5);
        piVar1 = (int *)(lVar4 + 0x20);
        lVar4 = lVar4 + 0x28;
        bVar3 = bVar3 & *piVar1 == *(int *)(lVar5 + 0x20);
        if (lVar4 == lVar2) {
          return bVar3;
        }
        lVar5 = lVar5 + 0x28;
      } while (bVar3 != 0);
    }
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}


// ===== 00be5ef0  FUN_00be5ef0 =====

void FUN_00be5ef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 long *param_5,long param_6,long param_7,ulong param_8,undefined8 param_9)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong in_stack_ffffffffffffff60;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  long *local_68;
  
  local_6c[0] = *(int *)(param_6 + 0xf0) == 1;
  if ((*param_4 & 1) == 0) {
    if (*(long *)(param_7 + 0x30) == 0) {
      local_70[0] = *(long *)(param_6 + 0x28) != *(long *)(param_6 + 0x30);
    }
    else {
      local_70[0] = true;
    }
  }
  else {
    local_70[0] = false;
  }
  local_68 = param_5;
  if (((DAT_00dbad08 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbad08), iVar2 != 0)) {
    DAT_00dbad00 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbad08);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbad00 != '\0') {
    local_88 = &local_80;
    FUN_0066d348(0x42,DAT_00dbad00,"PeerConnection::Create",0,0,0,0,0,
                 in_stack_ffffffffffffff60 & 0xffffffffffffff00);
    local_80 = DAT_00dbad00;
    pcStack_78 = "PeerConnection::Create";
  }
  puVar3 = (undefined8 *)operator_new(0x508);
  FUN_00bf4cf8(puVar3,param_6,param_2,param_3,param_4,local_6c,&local_68,param_7,param_8,param_9,
               local_70);
  *param_1 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,param_8 & 0xffffffffffffff00);
  }
  plVar1 = local_68;
  local_68 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xe8))();
  }
  return;
}


// ===== 00be6104  FUN_00be6104 =====

void FUN_00be6104(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                 byte param_6,long param_7,long *param_8,undefined8 param_9,undefined8 param_10,
                 byte param_11)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *local_c8;
  long *local_c0;
  undefined1 uStack_b1;
  long *local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  long *local_90 [2];
  code *local_80;
  undefined *local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  param_1[1] = (long)&PTR_FUN_00d49078;
  *param_1 = (long)&PTR_FUN_00d48cc8;
  param_1[2] = (long)&PTR_FUN_00d491b8;
  lVar11 = *param_3;
  plVar9 = param_1 + 3;
  *plVar9 = lVar11;
  if (lVar11 != 0) {
    FUN_00d0f740(1,lVar11 + 8);
  }
  lVar13 = param_3[4];
  lVar11 = param_3[3];
  lVar14 = param_3[1];
  param_1[5] = param_3[2];
  param_1[4] = lVar14;
  param_1[7] = lVar13;
  param_1[6] = lVar11;
  lVar11 = *param_4;
  param_1[8] = lVar11;
  if (lVar11 != 0) {
    FUN_00d0f740(1);
  }
  lVar11 = *param_5;
  *(int *)(param_1 + 10) = (int)param_5[1];
  param_1[9] = lVar11;
  lVar11 = *param_8;
  *(byte *)(param_1 + 0xc) = param_6 & 1;
  *(byte *)((long)param_1 + 0x61) = param_11 & 1;
  *(undefined1 *)((long)param_1 + 0x62) = 0;
  param_1[0xb] = lVar11;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  FUN_00b1e168(param_1 + 0xf,param_2);
  lVar11 = param_8[2];
  param_8[2] = 0;
  param_1[0x41] = lVar11;
  lVar11 = param_8[1];
  param_8[1] = 0;
  param_1[0x42] = lVar11;
  lVar11 = param_8[9];
  param_8[9] = 0;
  param_1[0x43] = lVar11;
  lVar11 = param_8[3];
  param_8[3] = 0;
  param_1[0x44] = lVar11;
  lVar11 = param_8[4];
  param_8[4] = 0;
  param_1[0x45] = lVar11;
  lVar11 = param_8[5];
  param_8[5] = 0;
  param_1[0x46] = lVar11;
  lVar11 = param_8[7];
  param_8[7] = 0;
  param_1[0x48] = param_7;
  param_1[0x47] = lVar11;
  param_1[0x49] = 0;
  FUN_007ebca0(param_1 + 0x4a);
  FUN_007ebd38(param_1 + 0x4b,1,*(undefined8 *)(param_1[8] + 0x20));
  FUN_007ebd38(param_1 + 0x4c,param_1[0x48] != 0,*(undefined8 *)(param_1[8] + 0x30));
  lVar11 = param_1[5];
  param_1[0x4d] = param_1[0x48];
  pvVar5 = operator_new(0xa0);
  local_b0[0] = (long *)PTR_FUN_00d52060;
  local_a0 = FUN_004473ec;
  pcStack_98 = FUN_00bf5674;
  FUN_00bff1ac(pvVar5,param_1,lVar11,local_b0);
  (*local_a0)(0,local_b0,local_b0);
  param_1[0x4e] = (long)pvVar5;
  FUN_00c79334(param_1 + 0x4f,param_1,plVar9,50000);
  uVar6 = FUN_008368a8();
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  FUN_00624934(param_1 + 0x6c,0x16,uVar6 & 0x7fffffffffffffff);
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  puVar3 = PTR_DAT_00d52ed8;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = (long)(puVar3 + 0xa0);
  *(undefined4 *)(param_1 + 0x7e) = 0x3ff;
  param_1[0x7b] = (long)(puVar3 + 0x10);
  param_1[0x86] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x87] = (long)param_1;
  FUN_009881bc(param_1 + 0x88);
  param_1[0x89] = (long)(param_1 + 0x7b);
  FUN_007ebca0(param_1 + 0x8a);
  lVar11 = *(long *)(param_1[8] + 0x38);
  FUN_007ebca0(param_1 + 0x8b);
  param_1[0x8c] = lVar11;
  FUN_00b64d28(param_1 + 0x8d);
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  puVar7 = (undefined8 *)operator_new(0x70);
  lVar13 = *param_1;
  lVar11 = param_1[8];
  *puVar7 = &PTR_FUN_00d49700;
  puVar7[1] = param_1;
  uVar15 = *(undefined8 *)(lVar11 + 0x40);
  uVar1 = *(undefined1 *)(lVar11 + 0xb8);
  uVar8 = (**(code **)(lVar13 + 0x388))(param_1);
  FUN_00bda938(puVar7 + 2,uVar15,uVar1,uVar8);
  param_1[0x97] = (long)puVar7;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  FUN_009881bc(param_1 + 0x9e);
  param_1[0x9f] = (long)param_1;
  lVar11 = FUN_00be67f8(param_1,param_9,param_10);
  param_1[0x94] = lVar11;
  if (param_1[0x4d] != 0) {
    local_b0[0] = param_1;
    (**(code **)(**(long **)(param_1[8] + 0x30) + 0x60))
              (*(long **)(param_1[8] + 0x30),local_b0,FUN_00bf56f0,&uStack_b1);
  }
  lVar11 = param_8[6];
  param_8[6] = 0;
  lVar13 = param_8[8];
  param_8[8] = 0;
  lVar11 = FUN_00ca2884(plVar9,param_1 + 1,param_1 + 0xf,lVar11,lVar13,param_1[8],param_1[0x97]);
  plVar12 = (long *)param_1[0x95];
  param_1[0x95] = lVar11;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  uVar4 = (**(code **)(*param_1 + 0x340))(param_1);
  lVar13 = param_1[8];
  lVar14 = param_1[0x97];
  lVar11 = param_1[0x4e];
  pvVar5 = operator_new(0x140);
  local_a0 = FUN_004473ec;
  pcStack_98 = FUN_00bf57c8;
  local_b0[0] = param_1;
  FUN_00cdc980(pvVar5,plVar9,param_1[0x4d],uVar4 & 1,lVar13,lVar14,param_1 + 0x7a,param_1[0xb],
               lVar11,local_b0);
  (*local_a0)(0,local_b0,local_b0);
  plVar12 = (long *)param_1[0x96];
  param_1[0x96] = (long)pvVar5;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  uVar6 = (**(code **)(*param_1 + 0x340))(param_1);
  if (((uVar6 & 1) == 0) && (lVar11 = param_1[8], *(char *)(lVar11 + 5) == '\x01')) {
    lVar16 = param_1[0x96];
    lVar17 = *(long *)(lVar11 + 0x38);
    lVar13 = param_1[0x97];
    lVar14 = param_1[0x4e];
    puVar7 = (undefined8 *)operator_new(0x210);
    FUN_00c0a998(puVar7,plVar9,0,lVar11,lVar13,lVar14);
    *(undefined4 *)(puVar7 + 0x40) = 0;
    *puVar7 = &PTR_FUN_00d498d8;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar7 + 0x40);
    }
    plVar12 = (long *)operator_new(0x20);
    plVar12[1] = lVar17;
    plVar12[2] = (long)puVar7;
    *plVar12 = (long)&PTR_FUN_00d49730;
    *(undefined4 *)(plVar12 + 3) = 0;
    local_c0 = plVar12;
    if (plVar12 != (long *)0x0) {
      FUN_00d0f740(1,plVar12 + 3);
    }
    puVar7 = *(undefined8 **)(lVar16 + 0x38);
    if (puVar7 < *(undefined8 **)(lVar16 + 0x40)) {
      if (puVar7 == (undefined8 *)0x0) goto LAB_00be6790;
      *puVar7 = plVar12;
      if (plVar12 != (long *)0x0) {
        (**(code **)*plVar12)(plVar12);
      }
      puVar7 = puVar7 + 1;
    }
    else {
      puVar7 = (undefined8 *)FUN_00bf3be4(lVar16 + 0x30,&local_c0);
    }
    *(undefined8 **)(lVar16 + 0x38) = puVar7;
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 8))();
    }
    lVar11 = param_1[8];
    lVar16 = param_1[0x96];
    lVar13 = param_1[0x97];
    lVar14 = param_1[0x4e];
    lVar17 = *(long *)(lVar11 + 0x38);
    puVar7 = (undefined8 *)operator_new(0x210);
    FUN_00c0a998(puVar7,plVar9,1,lVar11,lVar13,lVar14);
    *puVar7 = &PTR_FUN_00d498d8;
    *(undefined4 *)(puVar7 + 0x40) = 0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d0f740(1,puVar7 + 0x40);
    }
    plVar9 = (long *)operator_new(0x20);
    plVar9[1] = lVar17;
    plVar9[2] = (long)puVar7;
    *plVar9 = (long)&PTR_FUN_00d49730;
    *(undefined4 *)(plVar9 + 3) = 0;
    local_c8 = plVar9;
    if (plVar9 != (long *)0x0) {
      FUN_00d0f740(1,plVar9 + 3);
    }
    puVar7 = *(undefined8 **)(lVar16 + 0x38);
    if (puVar7 < *(undefined8 **)(lVar16 + 0x40)) {
      if (puVar7 == (undefined8 *)0x0) {
LAB_00be6790:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar7 = plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)*plVar9)(plVar9);
      }
      puVar7 = puVar7 + 1;
    }
    else {
      puVar7 = (undefined8 *)FUN_00bf3be4(lVar16 + 0x30,&local_c8);
    }
    *(undefined8 **)(lVar16 + 0x38) = puVar7;
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 8))();
    }
  }
  if ((char)param_1[0x37] == '\x01') {
    uVar10 = *(undefined4 *)((long)param_1 + 0x1b4);
  }
  else {
    uVar10 = 60000;
  }
  local_80 = FUN_00bf7e70;
  local_78 = &DAT_00258118;
  local_90[0] = param_1;
  FUN_00ce5f40(param_1 + 0x8b,local_90,uVar10);
  if (*(code **)(local_78 + 8) != (code *)0x0) {
    (**(code **)(local_78 + 8))(local_90[0]);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00be67c8  FUN_00be67c8 =====

undefined8 FUN_00be67c8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
}


// ===== 00be67d8  FUN_00be67d8 =====

undefined8 FUN_00be67d8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x30);
}


// ===== 00be67e8  FUN_00be67e8 =====

undefined8 FUN_00be67e8(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38);
}


// ===== 00be67f8  FUN_00be67f8 =====

undefined1 * FUN_00be67f8(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_439;
  undefined1 **local_438;
  long **local_430;
  undefined1 *local_428;
  undefined8 local_420;
  undefined1 *puStack_418;
  undefined1 *puStack_410;
  undefined1 *puStack_408;
  undefined1 *local_400;
  undefined1 *puStack_3f8;
  undefined1 *local_3f0;
  undefined1 *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined1 *local_3d8;
  long *local_3d0;
  undefined1 *puStack_3c8;
  long *local_3c0;
  undefined1 *puStack_3b8;
  code *local_3b0;
  code *pcStack_3a8;
  long *local_3a0;
  undefined1 *puStack_398;
  code *local_390;
  code *pcStack_388;
  undefined1 *local_380;
  undefined1 *puStack_378;
  undefined1 *local_370;
  undefined1 *puStack_368;
  code *local_360;
  code *pcStack_358;
  long *local_350;
  undefined1 *puStack_348;
  code *local_340;
  code *pcStack_338;
  long *local_330;
  undefined1 *puStack_328;
  code *local_320;
  code *pcStack_318;
  long *local_310;
  undefined1 *puStack_308;
  code *local_300;
  code *pcStack_2f8;
  long *local_2f0;
  undefined1 *puStack_2e8;
  code *local_2e0;
  code *pcStack_2d8;
  long *local_2d0;
  undefined1 *puStack_2c8;
  code *local_2c0;
  code *pcStack_2b8;
  long *local_2b0;
  undefined1 *puStack_2a8;
  code *local_2a0;
  code *pcStack_298;
  long *local_290;
  undefined1 *puStack_288;
  code *local_280;
  code *pcStack_278;
  long *local_270;
  undefined1 *puStack_268;
  code *local_260;
  code *pcStack_258;
  long *local_250;
  void *local_248;
  long *local_240;
  long lStack_238;
  long *local_230;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_00ce1c44(param_1 + 0x7a,2);
  }
  if (*param_3 != param_3[1]) {
    FUN_00ce1c44(param_1 + 0x7a,1);
  }
  puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_408 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_410 = &DAT_aaaaaaaaaaaaaaaa;
  pcStack_3a8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_3b0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_398 = &DAT_aaaaaaaaaaaaaaaa;
  local_3a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_388 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_390 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_378 = &DAT_aaaaaaaaaaaaaaaa;
  local_380 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_368 = &DAT_aaaaaaaaaaaaaaaa;
  local_370 = &DAT_aaaaaaaaaaaaaaaa;
  pcStack_358 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_360 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_348 = &DAT_aaaaaaaaaaaaaaaa;
  local_350 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_338 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_340 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_328 = &DAT_aaaaaaaaaaaaaaaa;
  local_330 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_318 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_320 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_308 = &DAT_aaaaaaaaaaaaaaaa;
  local_310 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_2f8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_300 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_2e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2f0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_2d8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_2e0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_2c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2d0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_2b8 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_2c0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_298 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_2a0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
  local_290 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_278 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_280 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
  local_270 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  pcStack_258 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  local_260 = (code *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_3e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_3f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_3d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_3c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_3d0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_3b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_3c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_420 = 0x2aaaaaa01;
  puStack_3f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_400 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007ebea0((ulong)&local_420 | 8);
  local_3b0 = FUN_00433984;
  pcStack_3a8 = (code *)0x0;
  local_390 = FUN_00433984;
  local_360 = FUN_004473ec;
  pcStack_358 = FUN_00bf3ea0;
  local_340 = FUN_004473ec;
  pcStack_338 = FUN_00bf3ea8;
  local_320 = FUN_004473ec;
  pcStack_318 = FUN_00bf3eb0;
  local_300 = FUN_004473ec;
  pcStack_2f8 = FUN_00bf3eb8;
  local_2e0 = FUN_004473ec;
  pcStack_2d8 = FUN_00bf3ec0;
  local_2c0 = FUN_004473ec;
  pcStack_2b8 = FUN_00bf3ec8;
  local_2a0 = FUN_004473ec;
  pcStack_298 = FUN_00bf3ed0;
  local_280 = FUN_004473ec;
  pcStack_278 = FUN_00bf3ed8;
  local_420 = CONCAT71(local_420._1_7_,*(undefined1 *)((long)param_1 + 0x11e));
  local_420 = CONCAT44((int)param_1[10],(undefined4)local_420);
  puStack_3e0 = (undefined1 *)0x0;
  puStack_3e8 = (undefined1 *)0x0;
  local_3d0 = (long *)0x0;
  local_3d8 = (undefined1 *)0x0;
  puStack_3f8 = *(undefined1 **)((long)param_1 + 0x94);
  local_3f0 = (undefined1 *)
              (CONCAT71((int7)((ulong)local_3f0 >> 8),(char)param_1[9]) & 0xffffffffffff00ff);
  pcStack_388 = (code *)0x0;
  local_380 = (undefined1 *)0x0;
  local_260 = FUN_004473ec;
  pcStack_258 = FUN_00bf3ee0;
  puStack_418 = (undefined1 *)CONCAT35(puStack_418._5_3_,(int5)param_1[0x2e]);
  if ((long *)((ulong)&local_420 | 8) != param_1 + 0x2e) {
    FUN_005d4868(&puStack_410,param_1[0x2f],param_1[0x30],param_1[0x30] - param_1[0x2f] >> 1);
  }
  uVar2 = (**(code **)(*param_1 + 0x388))(param_1);
  FUN_007ec1e4(&puStack_410,uVar2,0);
  local_3d0 = param_1 + 2;
  (*local_3b0)(0,&local_3c0,&local_3c0);
  local_3b0 = FUN_004473ec;
  pcStack_3a8 = FUN_00bfec08;
  local_3c0 = param_1;
  (*local_390)(0,&local_3a0,&local_3a0);
  local_390 = FUN_004473ec;
  pcStack_388 = FUN_00bfedd4;
  if (*(char *)((long)param_1 + 0x61) == '\x01') {
    local_380 = *(undefined1 **)(param_1[8] + 0xb0);
  }
  local_3d8 = (undefined1 *)param_1[0x46];
  puStack_3e0 = (undefined1 *)param_1[0x45];
  puStack_3e8 = (undefined1 *)param_1[0x44];
  local_3a0 = param_1;
  FUN_00988288(&local_438,param_1 + 0x9e);
  lVar5 = param_1[0x9f];
  FUN_00988398(&local_250,&local_438);
  local_248 = (void *)lVar5;
  FUN_00988108(&local_438);
  puVar3 = (undefined1 *)operator_new(0x10);
  FUN_0098815c(puVar3,&local_250);
  *(void **)(puVar3 + 8) = local_248;
  (*local_360)(0,&local_370,&local_370);
  local_360 = FUN_00bf7ff0;
  pcStack_358 = FUN_00bf7f80;
  local_370 = puVar3;
  FUN_00988344(&local_250);
  (*local_340)(0,&local_350,&local_350);
  local_340 = FUN_004473ec;
  pcStack_338 = FUN_00bf8058;
  local_350 = param_1;
  (*local_320)(0,&local_330,&local_330);
  local_320 = FUN_004473ec;
  pcStack_318 = FUN_00bf83b0;
  local_330 = param_1;
  (*local_300)(0,&local_310,&local_310);
  local_300 = FUN_004473ec;
  pcStack_2f8 = FUN_00bf8488;
  local_310 = param_1;
  (*local_2e0)(0,&local_2f0,&local_2f0);
  local_2e0 = FUN_004473ec;
  pcStack_2d8 = FUN_00bf860c;
  local_2f0 = param_1;
  (*local_2c0)(0,&local_2d0,&local_2d0);
  local_2c0 = FUN_004473ec;
  pcStack_2b8 = FUN_00bf86e4;
  local_2d0 = param_1;
  (*local_2a0)(0,&local_2b0,&local_2b0);
  local_2a0 = FUN_004473ec;
  pcStack_298 = FUN_00bf87bc;
  local_2b0 = param_1;
  (*local_280)(0,&local_290,&local_290);
  local_280 = FUN_004473ec;
  pcStack_278 = FUN_00bf8b74;
  local_290 = param_1;
  (*local_260)(0,&local_270,&local_270);
  lVar5 = param_1[0x42];
  lVar7 = param_1[0x41];
  local_260 = FUN_004473ec;
  pcStack_258 = FUN_00bf8f80;
  lVar8 = param_1[0x43];
  uVar2 = *(undefined8 *)(param_1[8] + 0x38);
  uVar6 = *(undefined8 *)(param_1[8] + 0x20);
  local_270 = param_1;
  pvVar4 = operator_new(0x400);
  FUN_00bf9364(&local_250,&local_420);
  FUN_00c33e1c(pvVar4,param_1 + 3,uVar2,uVar6,lVar5,lVar7,lVar8,&local_250);
  FUN_00be6e2c(&local_250);
  local_438 = &local_428;
  local_250 = param_1 + 0xf;
  local_428 = &DAT_aaaaaaaaaaaaaaaa;
  local_430 = &local_250;
  local_248 = pvVar4;
  local_240 = param_1;
  lStack_238 = param_2;
  local_230 = param_3;
  (**(code **)(**(long **)(param_1[8] + 0x20) + 0x60))
            (*(long **)(param_1[8] + 0x20),&local_438,FUN_00bf95b4,&uStack_439);
  pvVar4 = local_248;
  puVar3 = local_428;
  local_248 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    FUN_00c33f1c(pvVar4);
    operator_delete(pvVar4);
  }
  FUN_00be6e2c(&local_420);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00be6cf4  FUN_00be6cf4 =====

void FUN_00be6cf4(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 local_50;
  undefined7 uStack_4f;
  long lStack_48;
  undefined7 local_40;
  char cStack_39;
  undefined1 uStack_31;
  long *local_30;
  long *plStack_28;
  
  if ((param_1[0x94] != 0) || (*param_2 != param_2[1])) {
    local_30 = param_1;
    plStack_28 = param_2;
    (**(code **)(**(long **)(param_1[8] + 0x20) + 0x60))
              (*(long **)(param_1[8] + 0x20),&local_30,FUN_00bf9634,&uStack_31);
    if (param_1[0x94] != 0) {
      param_1[0x94] = 0;
      if ((char)param_1[0x72] == '\x01') {
        if (*(char *)((long)param_1 + 0x38f) < '\0') {
          operator_delete((void *)param_1[0x6f]);
        }
        *(undefined1 *)(param_1 + 0x72) = 0;
      }
      FUN_005d3510(&local_50,&DAT_001b3348);
      if (*(char *)((long)param_1 + 0x3cf) < '\0') {
        operator_delete((void *)param_1[0x77]);
      }
      lVar1 = CONCAT17(cStack_39,local_40);
      cStack_39 = '\0';
      param_1[0x78] = lStack_48;
      param_1[0x77] = CONCAT71(uStack_4f,local_50);
      param_1[0x79] = lVar1;
      local_50 = 0;
      (**(code **)(*param_1 + 0xb8))(param_1);
      if (cStack_39 < '\0') {
        operator_delete((void *)CONCAT71(uStack_4f,local_50));
      }
    }
  }
  return;
}


// ===== 00be6dfc  FUN_00be6dfc =====

void FUN_00be6dfc(long param_1)

{
  FUN_00bf4ea4(param_1 + -8);
  return;
}


// ===== 00be6e08  FUN_00be6e08 =====

void FUN_00be6e08(long param_1)

{
  FUN_00bf4ea4(param_1 + -0x10);
  return;
}


// ===== 00be6e14  FUN_00be6e14 =====

void FUN_00be6e14(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe6e1c);
  (*pcVar1)();
}


// ===== 00be6e1c  FUN_00be6e1c =====

void FUN_00be6e1c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe6e24);
  (*pcVar1)();
}


// ===== 00be6e24  FUN_00be6e24 =====

void FUN_00be6e24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe6e2c);
  (*pcVar1)();
}


// ===== 00be6e2c  FUN_00be6e2c =====

void FUN_00be6e2c(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  (**(code **)(param_1 + 0x1c0))(0,param_1 + 0x1b0,param_1 + 0x1b0);
  (**(code **)(param_1 + 0x1a0))(0,param_1 + 400,param_1 + 400);
  (**(code **)(param_1 + 0x180))(0,param_1 + 0x170,param_1 + 0x170);
  (**(code **)(param_1 + 0x160))(0,param_1 + 0x150,param_1 + 0x150);
  (**(code **)(param_1 + 0x140))(0,param_1 + 0x130,param_1 + 0x130);
  (**(code **)(param_1 + 0x120))(0,param_1 + 0x110,param_1 + 0x110);
  (**(code **)(param_1 + 0x100))(0,param_1 + 0xf0,param_1 + 0xf0);
  (**(code **)(param_1 + 0xe0))(0,param_1 + 0xd0,param_1 + 0xd0);
  (**(code **)(param_1 + 0xc0))(0,param_1 + 0xb0,param_1 + 0xb0);
  (**(code **)(param_1 + 0x90))(0,param_1 + 0x80,param_1 + 0x80);
  (**(code **)(param_1 + 0x70))(0,param_1 + 0x60,param_1 + 0x60);
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x18);
  uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
    uVar3 = uVar3 & 0x7ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      *(void **)(param_1 + 0x18) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -2);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00be6fc0  FUN_00be6fc0 =====

undefined8 FUN_00be6fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *****pppppiVar1;
  bool bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  int ****local_48;
  ulong local_40;
  byte bStack_31;
  
  pvVar4 = *(void **)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x498) = param_2;
  if (pvVar4 != (void *)0x0) {
    FUN_00c33f1c(pvVar4);
    operator_delete(pvVar4);
  }
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00be0744(&local_130,param_3);
  if (*(char *)(param_1 + 0x61) == '\x01') {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
              (&local_48,*(long **)(param_1 + 0x20),"WebRTC-IceHandshakeDtls",0x17);
    if (-1 < (char)bStack_31) {
      local_40 = (ulong)bStack_31;
    }
    if (local_40 < 7) {
      bVar2 = false;
    }
    else {
      pppppiVar1 = (int *****)local_48;
      if (-1 < (char)bStack_31) {
        pppppiVar1 = &local_48;
      }
      bVar2 = *(int *)pppppiVar1 == 0x62616e45 && *(int *)((long)pppppiVar1 + 3) == 0x64656c62;
    }
    if ((char)bStack_31 < '\0') {
      operator_delete(local_48);
    }
  }
  else {
    bVar2 = false;
  }
  uStack_58._0_5_ = CONCAT14(bVar2,(undefined4)uStack_58);
  FUN_00c35830(*(undefined8 *)(param_1 + 0x498),&local_130);
  uVar3 = *(undefined8 *)(param_1 + 0x498);
  FUN_00be08b0(&local_130);
  return uVar3;
}


// ===== 00be7108  FUN_00be7108 =====

void FUN_00be7108(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x340))();
  if ((uVar1 & 1) == 0) {
    FUN_00cb5188(param_1,param_2[0x95]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/peer_connection.cc",0x38a,"!IsUnifiedPlan()",&DAT_001fbee0,
               "local_streams is not available with Unified Plan SdpSemantics. Please use GetSenders instead."
              );
}


// ===== 00be7170  FUN_00be7170 =====

void FUN_00be7170(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x340))();
  if ((uVar1 & 1) == 0) {
    FUN_00cb5210(param_1,param_2[0x95]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/peer_connection.cc",0x392,"!IsUnifiedPlan()",&DAT_001fbee0,
               "remote_streams is not available with Unified Plan SdpSemantics. Please use GetReceivers instead."
              );
}


// ===== 00be71d8  FUN_00be71d8 =====

uint FUN_00be71d8(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  uVar3 = (**(code **)(*param_1 + 0x340))();
  if ((uVar3 & 1) == 0) {
    if (((DAT_00dbad28 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbad28), iVar2 != 0)) {
      DAT_00dbad20 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00dbad28);
    }
    local_58 = (char **)0x0;
    pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00dbad20 != '\0') {
      local_58 = &local_50;
      FUN_0066d348(0x42,DAT_00dbad20,"PeerConnection::AddStream",0,0,0,0,0,0);
      local_50 = DAT_00dbad20;
      pcStack_48 = "PeerConnection::AddStream";
    }
    if ((*(byte *)(param_1[8] + 5) & 1) == 0) {
      uVar3 = FUN_004249b0();
      if ((uVar3 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x1cf3,
                     "AddStream: Not configured for media");
      }
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00cb5298(param_1[0x95],param_2);
    }
    if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
      FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/peer_connection.cc",0x39a,"!IsUnifiedPlan()",&DAT_001fbee0,
               "AddStream is not available with Unified Plan SdpSemantics. Please use AddTrack instead."
              );
}


// ===== 00be737c  FUN_00be737c =====

void FUN_00be737c(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  uVar2 = (**(code **)(*param_1 + 0x340))();
  if ((uVar2 & 1) == 0) {
    if (((DAT_00dbad38 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbad38), iVar1 != 0)) {
      DAT_00dbad30 = (char *)FUN_0066d328("webrtc");
      FUN_0054ff1c(&DAT_00dbad38);
    }
    local_58 = (char **)0x0;
    pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    if (*DAT_00dbad30 != '\0') {
      local_58 = &local_50;
      FUN_0066d348(0x42,DAT_00dbad30,"PeerConnection::RemoveStream",0,0,0,0,0,0);
      local_50 = DAT_00dbad30;
      pcStack_48 = "PeerConnection::RemoveStream";
    }
    FUN_00cb56f8(param_1[0x95],param_2);
    if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
      FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/peer_connection.cc",0x3a7,"!IsUnifiedPlan()",&DAT_001fbee0,
               "RemoveStream is not available with Unified Plan SdpSemantics. Please use RemoveTrack instead."
              );
}


// ===== 00be74d4  FUN_00be74d4 =====

void FUN_00be74d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *local_8;
  
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  local_8 = plVar1;
  FUN_00be752c(param_1,&local_8,param_3,0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be7518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 00be752c  FUN_00be752c =====

/* WARNING: Removing unreachable block (ram,0x00be7bf4) */
/* WARNING: Removing unreachable block (ram,0x00be7fa4) */
/* WARNING: Removing unreachable block (ram,0x00be7ffc) */
/* WARNING: Removing unreachable block (ram,0x00be8120) */
/* WARNING: Removing unreachable block (ram,0x00be8108) */
/* WARNING: Removing unreachable block (ram,0x00be7fe4) */
/* WARNING: Removing unreachable block (ram,0x00be7d6c) */
/* WARNING: Removing unreachable block (ram,0x00be8004) */

void FUN_00be752c(int *param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint7 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  size_t sVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong in_stack_fffffffffffffed0;
  long *local_120;
  long *local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  char acStack_e0 [6];
  char cStack_da;
  char cStack_d9;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  byte bStack_cb;
  undefined1 local_ca;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  undefined1 uStack_41;
  
  if (((DAT_00dbad48 & 1) == 0) && (iVar12 = FUN_0054fdd4(&DAT_00dbad48), iVar12 != 0)) {
    DAT_00dbad40 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbad48);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbad40 != '\0') {
    in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
    FUN_0066d348(0x42,DAT_00dbad40,"PeerConnection::AddTrack",0,0,0,0,0,in_stack_fffffffffffffed0);
    local_70 = DAT_00dbad40;
    pcStack_68 = "PeerConnection::AddTrack";
    local_78 = &local_70;
  }
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    uVar14 = FUN_004249b0();
    if ((uVar14 & 1) == 0) {
      local_f0 = "../../pc/peer_connection.cc";
      local_e8._0_4_ = 0x1e1b;
      local_e8._4_2_ = 0;
      local_e8._6_1_ = '\0';
      local_e8._7_1_ = '\0';
      acStack_e0 = SUB86(&local_90,0);
      cStack_da = (char)((ulong)&local_90 >> 0x30);
      cStack_d9 = (char)((ulong)&local_90 >> 0x38);
      local_110 = FUN_005eceec(1);
      FUN_00623bb0(&DAT_00255ab0,local_f0,(undefined4)local_e8,"Not configured for media",
                   &DAT_001a2df6,local_110,&DAT_001ca519);
    }
    pcVar15 = (char *)operator_new(0x20);
    uVar3 = s_Not_configured_for_media_001ddb57._16_8_;
    uVar22 = s_Not_configured_for_media_001ddb57._8_8_;
    uVar16 = s_Not_configured_for_media_001ddb57._0_8_;
    if (pcVar15 + 0x18 < pcVar15) goto LAB_00be8148;
    if ((pcVar15 < "ot configured for media") && ("Not configured for media" < pcVar15 + 0x18))
    goto LAB_00be8134;
    uVar20 = 0x18;
    pcVar15[0x18] = '\0';
    *(undefined8 *)(pcVar15 + 8) = uVar22;
    *(undefined8 *)pcVar15 = uVar16;
    *(undefined8 *)(pcVar15 + 0x10) = uVar3;
    *param_1 = 1;
  }
  else {
    if ((long *)*param_3 == (long *)0x0) {
      uVar14 = FUN_004249b0();
      if ((uVar14 & 1) == 0) {
        local_f0 = "../../pc/peer_connection.cc";
        local_e8._0_4_ = 0x1e33;
        local_e8._4_2_ = 0;
        local_e8._6_1_ = '\0';
        local_e8._7_1_ = '\0';
        acStack_e0 = SUB86(&local_90,0);
        cStack_da = (char)((ulong)&local_90 >> 0x30);
        cStack_d9 = (char)((ulong)&local_90 >> 0x38);
        local_110 = FUN_005eceec(3);
        FUN_00623bb0(&DAT_00255ab0,local_f0,(undefined4)local_e8,"Track is null.",&DAT_001a2df6,
                     local_110,&DAT_001ca519);
      }
      local_f0 = (char *)CONCAT44(local_f0._4_4_,3);
      local_d8 = CONCAT17(0xe,(undefined7)local_d8);
      if ((&local_e8 < "rack is null.") && ("Track is null." < &cStack_da)) goto LAB_00be8134;
      cStack_da = '\0';
      local_d0 = 0;
      local_e8._0_4_ = (undefined4)s_Track_is_null__001e686b._0_6_;
      local_e8._4_2_ = SUB62(s_Track_is_null__001e686b._0_6_,4);
      local_e8._6_1_ = s_Track_is_null__001e686b[6];
      local_e8._7_1_ = s_Track_is_null__001e686b[7];
      acStack_e0[0] = s_Track_is_null__001e686b[8];
      acStack_e0[1] = s_Track_is_null__001e686b[9];
      acStack_e0[2] = s_Track_is_null__001e686b[10];
      acStack_e0[3] = s_Track_is_null__001e686b[0xb];
      acStack_e0[4] = s_Track_is_null__001e686b[0xc];
      acStack_e0[5] = s_Track_is_null__001e686b[0xd];
      local_cc = 0;
      uVar5 = (uint7)(uint6)s_Track_is_null__001e686b._8_6_;
      uVar16 = CONCAT26(s_Track_is_null__001e686b._6_2_,s_Track_is_null__001e686b._0_6_);
      local_ca = 0;
      *param_1 = 3;
      *(ulong *)(param_1 + 6) = local_d8;
      *(ulong *)(param_1 + 4) = CONCAT17(cStack_d9,uVar5);
      *(undefined8 *)(param_1 + 2) = uVar16;
      param_1[8] = 0;
      *(uint *)((long)param_1 + 0x23) = (uint)bStack_cb << 0x10;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      auVar6 = local_110;
      auVar7 = local_a8;
      auVar8 = local_b8;
      goto LAB_00be8094;
    }
    (**(code **)(*(long *)*param_3 + 0x20))(&local_f0);
    puVar9 = PTR_s_audio_00d48a78;
    if (PTR_s_audio_00d48a78 == (undefined *)0x0) goto LAB_00be815c;
    sVar13 = strlen(PTR_s_audio_00d48a78);
    cVar10 = cStack_d9;
    if ((long)cStack_d9 < 0) {
      if (sVar13 == CONCAT26(local_e8._6_2_,CONCAT24(local_e8._4_2_,(undefined4)local_e8))) {
        plVar18 = (long *)local_f0;
        if (sVar13 == 0xffffffffffffffff) goto LAB_00be81a0;
        goto LAB_00be7800;
      }
LAB_00be780c:
      (**(code **)(*(long *)*param_3 + 0x20))(local_110);
      puVar9 = PTR_s_video_00d48a70;
      if (PTR_s_video_00d48a70 == (undefined *)0x0) {
LAB_00be815c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
                  );
      }
      sVar13 = strlen(PTR_s_video_00d48a70);
      if ((long)local_100._7_1_ < 0) {
        if (sVar13 == local_110._8_8_) {
          if (sVar13 == 0xffffffffffffffff) {
LAB_00be81a0:
                    /* WARNING: Subroutine does not return */
            FUN_005f5590();
          }
          iVar12 = memcmp((void *)local_110._0_8_,puVar9,sVar13);
          bVar11 = iVar12 != 0;
        }
        else {
          bVar11 = true;
        }
        operator_delete((void *)local_110._0_8_);
      }
      else {
        if (sVar13 == (long)local_100._7_1_) {
          iVar12 = memcmp(local_110,puVar9,sVar13);
          bVar11 = iVar12 != 0;
          if (cStack_d9 < '\0') goto LAB_00be78a4;
          goto LAB_00be7b30;
        }
        bVar11 = true;
      }
      if (-1 < cStack_d9) goto LAB_00be7b30;
LAB_00be78a4:
      operator_delete(local_f0);
      if (bVar11) goto LAB_00be7b34;
    }
    else {
      if (sVar13 != (long)cStack_d9) goto LAB_00be780c;
      plVar18 = &local_f0;
LAB_00be7800:
      iVar12 = memcmp(plVar18,puVar9,sVar13);
      if (iVar12 != 0) goto LAB_00be780c;
      bVar11 = false;
      if (((uint)(int)cVar10 >> 7 & 1) != 0) goto LAB_00be78a4;
LAB_00be7b30:
      if (bVar11) {
LAB_00be7b34:
        uVar14 = FUN_004249b0();
        if ((uVar14 & 1) == 0) {
          local_f0 = "../../pc/peer_connection.cc";
          local_e8._0_4_ = 0x1e5b;
          local_e8._4_2_ = 0;
          local_e8._6_1_ = '\0';
          local_e8._7_1_ = '\0';
          acStack_e0 = SUB86(local_b8,0);
          cStack_da = (char)((ulong)local_b8 >> 0x30);
          cStack_d9 = (char)((ulong)local_b8 >> 0x38);
          (**(code **)(*(long *)*param_3 + 0x20))(&local_90);
          puVar17 = (undefined8 *)FUN_00547994(&local_90,0,"Track has invalid kind: ",0x18);
          local_110._8_8_ = puVar17[1];
          local_110._0_8_ = *puVar17;
          local_100 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
          local_a8 = FUN_005eceec(3);
          FUN_00623bb0(&DAT_00255ab6,local_f0,(undefined4)local_e8,local_110,&DAT_001a2df6,local_a8,
                       &DAT_001ca519);
          if (local_100 < 0) {
            operator_delete((void *)local_110._0_8_);
          }
        }
        (**(code **)(*(long *)*param_3 + 0x20))(&local_90);
        plVar18 = (long *)FUN_00547994(&local_90,0,"Track has invalid kind: ",0x18);
        lVar21 = plVar18[2];
        local_110._8_8_ = plVar18[1];
        local_110._0_8_ = *plVar18;
        *plVar18 = 0;
        plVar18[1] = 0;
        plVar18[2] = 0;
        local_100._7_1_ = (char)((ulong)lVar21 >> 0x38);
        uVar14 = (ulong)local_100._7_1_;
        local_100 = lVar21;
        if ((long)uVar14 < 0) {
          if (0x7ffffffffffffff6 < (ulong)local_110._8_8_) goto LAB_00be81a4;
          uVar14 = local_110._8_8_;
          puVar17 = (undefined8 *)local_110._0_8_;
          if (0x16 < (ulong)local_110._8_8_) goto LAB_00be7ca4;
LAB_00be7c6c:
          local_f0 = (char *)CONCAT44(local_f0._4_4_,3);
          puVar19 = &local_e8;
          local_d8 = CONCAT17((char)uVar14,(undefined7)local_d8);
        }
        else {
          puVar17 = (undefined8 *)local_110;
          if (uVar14 < 0x17) goto LAB_00be7c6c;
LAB_00be7ca4:
          local_f0 = (char *)CONCAT44(local_f0._4_4_,3);
          uVar1 = (uVar14 & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          puVar19 = (undefined8 *)operator_new(uVar2);
          local_d8 = uVar2 | 0x8000000000000000;
          local_e8._0_4_ = SUB84(puVar19,0);
          local_e8._4_2_ = (undefined2)((ulong)puVar19 >> 0x20);
          local_e8._6_2_ = (undefined2)((ulong)puVar19 >> 0x30);
          acStack_e0 = SUB86(uVar14,0);
          cStack_da = (char)(uVar14 >> 0x30);
          cStack_d9 = (char)(uVar14 >> 0x38);
        }
        if ((undefined8 *)((long)puVar19 + uVar14) < puVar19) goto LAB_00be8148;
        if ((puVar19 <= puVar17) && (puVar17 < (undefined8 *)((long)puVar19 + uVar14)))
        goto LAB_00be8134;
        memmove(puVar19,puVar17,uVar14);
        auVar6._8_8_ = local_110._8_8_;
        auVar6._0_8_ = local_110._0_8_;
        *(undefined1 *)((long)puVar19 + uVar14) = 0;
        auVar8._8_8_ = local_b8._8_8_;
        auVar8._0_8_ = local_b8._0_8_;
        local_d0 = 0;
        local_cc = 0;
        local_ca = 0;
        *param_1 = (int)local_f0;
        if ((long)local_d8 < 0) {
          FUN_005478d8(param_1 + 2,
                       CONCAT26(local_e8._6_2_,CONCAT24(local_e8._4_2_,(undefined4)local_e8)),
                       CONCAT17(cStack_d9,CONCAT16(cStack_da,acStack_e0)));
          *(undefined1 *)(param_1 + 10) = 0;
          param_1[8] = local_d0;
          *(uint *)((long)param_1 + 0x23) =
               CONCAT13(local_ca,CONCAT12(bStack_cb,CONCAT11(local_cc,local_d0._3_1_)));
          *(undefined1 *)(param_1 + 0xc) = 0;
          operator_delete((void *)CONCAT26(local_e8._6_2_,
                                           CONCAT24(local_e8._4_2_,(undefined4)local_e8)));
          auVar8._8_8_ = local_b8._8_8_;
          auVar8._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_110._8_8_;
          auVar6._0_8_ = local_110._0_8_;
        }
        else {
          *(undefined1 *)(param_1 + 10) = 0;
          *(ulong *)(param_1 + 4) = CONCAT17(cStack_d9,CONCAT16(cStack_da,acStack_e0));
          *(ulong *)(param_1 + 2) =
               CONCAT26(local_e8._6_2_,CONCAT24(local_e8._4_2_,(undefined4)local_e8));
          *(ulong *)(param_1 + 6) = local_d8;
          param_1[8] = 0;
          *(uint *)((long)param_1 + 0x23) = (uint)bStack_cb << 0x10;
          *(undefined1 *)(param_1 + 0xc) = 0;
        }
        auVar7 = local_a8;
        if (local_100 < 0) {
          operator_delete((void *)local_110._0_8_);
          auVar8._8_8_ = local_b8._8_8_;
          auVar8._0_8_ = local_b8._0_8_;
          auVar6._8_8_ = local_110._8_8_;
          auVar6._0_8_ = local_110._0_8_;
          auVar7 = local_a8;
        }
        goto LAB_00be8094;
      }
    }
    uVar14 = (**(code **)(*param_2 + 0x2b0))(param_2);
    if ((uVar14 & 1) == 0) {
      uVar16 = (**(code **)(*param_2 + 0x2e8))(param_2);
      FUN_00cdf444(&local_f0,uVar16,*param_3);
      if ((long *)local_f0 == (long *)0x0) {
        *(undefined1 **)(param_1 + 2) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
        *param_1 = 10;
        lVar21 = *param_2;
        *(undefined1 **)(param_1 + 6) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 4) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 10) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 **)(param_1 + 0xc) = &DAT_aaaaaaaaaaaaaaaa;
        *(undefined1 *)((long)param_1 + 0x26) = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined8 *)((long)param_1 + 0x1d) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined1 *)(param_1 + 0xc) = 0;
        uVar14 = (**(code **)(lVar21 + 0x340))(param_2);
        if ((uVar14 & 1) == 0) {
          uVar16 = (**(code **)(*param_2 + 0x2e8))(param_2);
          local_120 = (long *)*param_3;
          if (local_120 != (long *)0x0) {
            (**(code **)*local_120)();
          }
          FUN_00cdce90(&local_f0,uVar16,&local_120,param_4,param_5);
          FUN_00b8f250(param_1,&local_f0);
          FUN_00be8278(&local_f0);
          if (local_120 != (long *)0x0) {
            (**(code **)(*local_120 + 8))();
          }
        }
        else {
          uVar16 = (**(code **)(*param_2 + 0x2e8))(param_2);
          lVar21 = param_2[0x95];
          (**(code **)(*param_2 + 0x368))(local_110,param_2);
          local_118 = (long *)*param_3;
          uVar22 = *(undefined8 *)(param_2[0x95] + 400);
          if (local_118 != (long *)0x0) {
            (**(code **)*local_118)();
          }
          FUN_00cdd730(&local_f0,uVar16,(long)param_2 + 0xf4,lVar21 + 0x128,lVar21 + 0x178,local_110
                       ,uVar22,&local_118,param_4,param_5);
          FUN_00b8f250(param_1,&local_f0);
          FUN_00be8278(&local_f0);
          in_stack_fffffffffffffed0 = param_5;
          if (local_118 != (long *)0x0) {
            (**(code **)(*local_118 + 8))();
            in_stack_fffffffffffffed0 = param_5;
          }
          FUN_00bf3ee8(local_110 + 8);
        }
        auVar8._8_8_ = local_b8._8_8_;
        auVar8._0_8_ = local_b8._0_8_;
        auVar7._8_8_ = local_a8._8_8_;
        auVar7._0_8_ = local_a8._0_8_;
        auVar6._8_8_ = local_110._8_8_;
        auVar6._0_8_ = local_110._0_8_;
        if (*param_1 == 0) {
          FUN_00ca2f64(param_2[0x95]);
          FUN_00bff64c(param_2[0x4e],*param_3);
          auVar8._8_8_ = local_b8._8_8_;
          auVar8._0_8_ = local_b8._0_8_;
          auVar7._8_8_ = local_a8._8_8_;
          auVar7._0_8_ = local_a8._0_8_;
          auVar6._8_8_ = local_110._8_8_;
          auVar6._0_8_ = local_110._0_8_;
        }
        goto LAB_00be8094;
      }
      (**(code **)(*(long *)local_f0 + 8))();
      uVar14 = FUN_004249b0();
      if ((uVar14 & 1) == 0) {
        local_f0 = "../../pc/peer_connection.cc";
        local_e8._0_4_ = 0x1ea3;
        local_e8._4_2_ = 0;
        local_e8._6_1_ = '\0';
        local_e8._7_1_ = '\0';
        acStack_e0 = SUB86(&uStack_41,0);
        cStack_da = (char)((ulong)&uStack_41 >> 0x30);
        cStack_d9 = (char)((ulong)&uStack_41 >> 0x38);
        (**(code **)(*(long *)*param_3 + 0x28))(local_a8);
        FUN_00be81fc(&local_90,"Sender already exists for track ",local_a8);
        FUN_00bd81ec(local_110,&local_90,&DAT_001ea377);
        local_b8 = FUN_005eceec(3);
        FUN_00623bb0(&DAT_00255ab6,local_f0,(undefined4)local_e8,local_110,&DAT_001a2df6,local_b8,
                     &DAT_001ca519);
        if (local_100._7_1_ < '\0') {
          operator_delete((void *)local_110._0_8_);
        }
      }
      (**(code **)(*(long *)*param_3 + 0x28))(local_a8);
      puVar17 = (undefined8 *)FUN_00547994(local_a8,0,"Sender already exists for track ",0x20);
      uStack_88 = puVar17[1];
      local_90 = *puVar17;
      local_80 = puVar17[2];
      puVar17[1] = 0;
      puVar17[2] = 0;
      *puVar17 = 0;
      plVar18 = (long *)FUN_00547cac(&local_90,&DAT_001ea377,1);
      lVar21 = plVar18[2];
      local_110._8_8_ = plVar18[1];
      local_110._0_8_ = *plVar18;
      *plVar18 = 0;
      plVar18[1] = 0;
      plVar18[2] = 0;
      local_100._7_1_ = (char)((ulong)lVar21 >> 0x38);
      uVar14 = (ulong)local_100._7_1_;
      local_100 = lVar21;
      if ((long)uVar14 < 0) {
        if (0x7ffffffffffffff6 < (ulong)local_110._8_8_) {
LAB_00be81a4:
          local_f0 = (char *)CONCAT44(local_f0._4_4_,3);
                    /* WARNING: Subroutine does not return */
          FUN_005d45ec();
        }
        uVar14 = local_110._8_8_;
        puVar17 = (undefined8 *)local_110._0_8_;
        if (0x16 < (ulong)local_110._8_8_) goto LAB_00be7ed4;
LAB_00be7afc:
        local_f0 = (char *)CONCAT44(local_f0._4_4_,3);
        puVar19 = &local_e8;
        local_d8 = CONCAT17((char)uVar14,(undefined7)local_d8);
      }
      else {
        puVar17 = (undefined8 *)local_110;
        if (uVar14 < 0x17) goto LAB_00be7afc;
LAB_00be7ed4:
        local_f0 = (char *)CONCAT44(local_f0._4_4_,3);
        uVar1 = (uVar14 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        puVar19 = (undefined8 *)operator_new(uVar2);
        local_d8 = uVar2 | 0x8000000000000000;
        local_e8._0_4_ = SUB84(puVar19,0);
        local_e8._4_2_ = (undefined2)((ulong)puVar19 >> 0x20);
        local_e8._6_2_ = (undefined2)((ulong)puVar19 >> 0x30);
        acStack_e0 = SUB86(uVar14,0);
        cStack_da = (char)(uVar14 >> 0x30);
        cStack_d9 = (char)(uVar14 >> 0x38);
      }
      if ((undefined8 *)((long)puVar19 + uVar14) < puVar19) {
LAB_00be8148:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((puVar19 <= puVar17) && (puVar17 < (undefined8 *)((long)puVar19 + uVar14))) {
LAB_00be8134:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(puVar19,puVar17,uVar14);
      auVar6._8_8_ = local_110._8_8_;
      auVar6._0_8_ = local_110._0_8_;
      *(undefined1 *)((long)puVar19 + uVar14) = 0;
      auVar7._8_8_ = local_a8._8_8_;
      auVar7._0_8_ = local_a8._0_8_;
      local_d0 = 0;
      local_cc = 0;
      local_ca = 0;
      *param_1 = (int)local_f0;
      if ((long)local_d8 < 0) {
        FUN_005478d8(param_1 + 2,
                     CONCAT26(local_e8._6_2_,CONCAT24(local_e8._4_2_,(undefined4)local_e8)),
                     CONCAT17(cStack_d9,CONCAT16(cStack_da,acStack_e0)));
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[8] = local_d0;
        *(uint *)((long)param_1 + 0x23) =
             CONCAT13(local_ca,CONCAT12(bStack_cb,CONCAT11(local_cc,local_d0._3_1_)));
        *(undefined1 *)(param_1 + 0xc) = 0;
        operator_delete((void *)CONCAT26(local_e8._6_2_,
                                         CONCAT24(local_e8._4_2_,(undefined4)local_e8)));
        auVar7._8_8_ = local_a8._8_8_;
        auVar7._0_8_ = local_a8._0_8_;
        auVar6._8_8_ = local_110._8_8_;
        auVar6._0_8_ = local_110._0_8_;
      }
      else {
        *(undefined1 *)(param_1 + 10) = 0;
        *(ulong *)(param_1 + 4) = CONCAT17(cStack_d9,CONCAT16(cStack_da,acStack_e0));
        *(ulong *)(param_1 + 2) =
             CONCAT26(local_e8._6_2_,CONCAT24(local_e8._4_2_,(undefined4)local_e8));
        *(ulong *)(param_1 + 6) = local_d8;
        param_1[8] = 0;
        *(uint *)((long)param_1 + 0x23) = (uint)bStack_cb << 0x10;
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      auVar8 = local_b8;
      if (local_100 < 0) {
        operator_delete((void *)local_110._0_8_);
        auVar7._8_8_ = local_a8._8_8_;
        auVar7._0_8_ = local_a8._0_8_;
        auVar6._8_8_ = local_110._8_8_;
        auVar6._0_8_ = local_110._0_8_;
        auVar8 = local_b8;
      }
      goto LAB_00be8094;
    }
    uVar14 = FUN_004249b0();
    if ((uVar14 & 1) == 0) {
      local_f0 = "../../pc/peer_connection.cc";
      local_e8._0_4_ = 0x1e7b;
      local_e8._4_2_ = 0;
      local_e8._6_1_ = '\0';
      local_e8._7_1_ = '\0';
      acStack_e0 = SUB86(&local_90,0);
      cStack_da = (char)((ulong)&local_90 >> 0x30);
      cStack_d9 = (char)((ulong)&local_90 >> 0x38);
      local_110 = FUN_005eceec(6);
      FUN_00623bb0(&DAT_00255ab0,local_f0,(undefined4)local_e8,"PeerConnection is closed.",
                   &DAT_001a2df6,local_110,&DAT_001ca519);
    }
    pcVar15 = (char *)operator_new(0x20);
    uVar22 = s_PeerConnection_is_closed__001be6cf._17_8_;
    uVar16 = s_PeerConnection_is_closed__001be6cf._0_8_;
    if (pcVar15 + 0x19 < pcVar15) goto LAB_00be8148;
    if ((pcVar15 < "eerConnection is closed.") && ("PeerConnection is closed." < pcVar15 + 0x19))
    goto LAB_00be8134;
    uVar3 = CONCAT71(s_PeerConnection_is_closed__001be6cf._9_7_,
                     s_PeerConnection_is_closed__001be6cf[8]);
    uVar4 = CONCAT17(s_PeerConnection_is_closed__001be6cf[0x10],
                     s_PeerConnection_is_closed__001be6cf._9_7_);
    pcVar15[0x19] = '\0';
    *(undefined8 *)(pcVar15 + 8) = uVar3;
    *(undefined8 *)pcVar15 = uVar16;
    uVar20 = 0x19;
    *(undefined8 *)(pcVar15 + 0x11) = uVar22;
    *(undefined8 *)(pcVar15 + 9) = uVar4;
    *param_1 = 6;
  }
  FUN_005478d8(param_1 + 2,pcVar15,uVar20);
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  operator_delete(pcVar15);
  auVar8._8_8_ = local_b8._8_8_;
  auVar8._0_8_ = local_b8._0_8_;
  auVar7._8_8_ = local_a8._8_8_;
  auVar7._0_8_ = local_a8._0_8_;
  auVar6 = local_110;
LAB_00be8094:
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    local_110 = auVar6;
    local_a8 = auVar7;
    local_b8 = auVar8;
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,in_stack_fffffffffffffed0 & 0xffffffffffffff00
                );
  }
  return;
}


// ===== 00be81a8  FUN_00be81a8 =====

void FUN_00be81a8(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *local_8;
  
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  local_8 = plVar1;
  FUN_00be752c(param_1,&local_8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00be81e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}


// ===== 00be81fc  FUN_00be81fc =====

void FUN_00be81fc(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    puVar2 = (undefined8 *)FUN_00547994(param_3,0,param_2,sVar1);
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
    uVar3 = puVar2[2];
    *puVar2 = 0;
    puVar2[1] = 0;
    param_1[1] = uVar5;
    *param_1 = uVar4;
    param_1[2] = uVar3;
    puVar2[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string:3209: libc++ Hardening assertion __s != nullptr failed: string::insert received nullptr\n"
            );
}


// ===== 00be8278  FUN_00be8278 =====

void FUN_00be8278(long param_1)

{
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long **)(param_1 + 0x28) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


// ===== 00be82e0  FUN_00be82e0 =====

/* WARNING: Removing unreachable block (ram,0x00be87ec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00be82e0(undefined8 param_1,long *param_2,long *param_3)

{
  long *******ppppppplVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long ******pppppplVar8;
  undefined1 local_c0 [16];
  void *local_b0 [2];
  char cStack_99;
  void *local_98 [2];
  char cStack_81;
  undefined1 local_80 [16];
  undefined8 local_70;
  long *******local_60;
  ulong uStack_58;
  void **local_50;
  
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      local_60 = (long *******)0x1c9f9c;
      uStack_58 = 0x1f7b;
      local_50 = local_98;
      local_80 = FUN_005eceec(1);
      FUN_00623bb0(&DAT_00255ab0,local_60,uStack_58 & 0xffffffff,"Not configured for media",
                   &DAT_001a2df6,local_80,&DAT_001ca519);
    }
    FUN_00b0092c(param_1,1,"Not configured for media",0x18);
    return;
  }
  if (*param_3 == 0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      local_60 = (long *******)0x1c9f9c;
      uStack_58 = 0x1f93;
      local_50 = local_98;
      local_80 = FUN_005eceec(3);
      FUN_00623bb0(&DAT_00255ab0,local_60,uStack_58 & 0xffffffff,"Sender is null.",&DAT_001a2df6,
                   local_80,&DAT_001ca519);
    }
    FUN_00b0092c(param_1,3,"Sender is null.",0xf);
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x2b0))();
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      local_60 = (long *******)0x1c9f9c;
      uStack_58 = 0x1fb3;
      local_50 = local_98;
      local_80 = FUN_005eceec(6);
      FUN_00623bb0(&DAT_00255ab0,local_60,uStack_58 & 0xffffffff,"PeerConnection is closed.",
                   &DAT_001a2df6,local_80,&DAT_001ca519);
    }
    FUN_00b0092c(param_1,6,"PeerConnection is closed.",0x19);
    return;
  }
  uVar4 = (**(code **)(*param_2 + 0x340))(param_2);
  if ((uVar4 & 1) == 0) {
    iVar3 = (**(code **)(*(long *)*param_3 + 0x40))();
    if (iVar3 == 0) {
      (**(code **)(*param_2 + 0x2e8))(param_2);
      FUN_00cdcb20(&local_60);
    }
    else {
      (**(code **)(*param_2 + 0x2e8))(param_2);
      FUN_00cdcd04(&local_60);
    }
    uVar4 = FUN_00c0c634(local_60[2],*param_3);
    if (local_60 != (long *******)0x0) {
      (*(code *)(*local_60)[1])(local_60);
    }
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_004249b0();
      if ((uVar4 & 1) == 0) {
        local_60 = (long *******)0x1c9f9c;
        uStack_58 = 0x20b3;
        local_50 = (void **)&stack0xffffffffffffffdf;
        (**(code **)(*(long *)*param_3 + 0x48))(local_b0);
        FUN_00be81fc(local_98,"Couldn\'t find sender ",local_b0);
        FUN_00bd81ec(local_80,local_98," to remove.");
        local_c0 = FUN_005eceec(3);
        FUN_00623bb0(&DAT_00255ab6,local_60,uStack_58 & 0xffffffff,local_80,&DAT_001a2df6,local_c0,
                     &DAT_001ca519);
        if (local_70._7_1_ < '\0') {
          operator_delete((void *)local_80._0_8_);
        }
        if (cStack_81 < '\0') {
          operator_delete(local_98[0]);
        }
        if (cStack_99 < '\0') {
          operator_delete(local_b0[0]);
        }
      }
      (**(code **)(*(long *)*param_3 + 0x48))(local_98);
      puVar6 = (undefined8 *)FUN_00547994(local_98,0,"Couldn\'t find sender ",0x15);
      local_80._8_8_ = puVar6[1];
      local_80._0_8_ = *puVar6;
      local_70 = puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      puVar6 = (undefined8 *)FUN_00547cac(local_80," to remove.",0xb);
      uStack_58 = puVar6[1];
      local_60 = (long *******)*puVar6;
      local_50 = (void **)puVar6[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      uVar4 = uStack_58;
      ppppppplVar1 = local_60;
      if (-1 < (long)local_50) {
        uVar4 = (ulong)local_50 >> 0x38;
        ppppppplVar1 = (long *******)&local_60;
      }
      FUN_00b0092c(param_1,3,ppppppplVar1,uVar4);
      if (local_70 < 0) {
        operator_delete((void *)local_80._0_8_);
      }
      if (-1 < cStack_81) {
        return;
      }
      operator_delete(local_98[0]);
      return;
    }
    goto LAB_00be865c;
  }
  pppppplVar8 = (long ******)*param_3;
  local_80._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  if (pppppplVar8 != (long ******)0x0) {
    (*(code *)**pppppplVar8)(pppppplVar8);
  }
  lVar5 = (**(code **)(*param_2 + 0x2e8))(param_2);
  local_60 = (long *******)pppppplVar8;
  if (pppppplVar8 != (long ******)0x0) {
    (*(code *)**pppppplVar8)(pppppplVar8);
  }
  FUN_00ccd778(local_80,lVar5 + 0x30,&local_60);
  if (local_60 != (long *******)0x0) {
    (*(code *)(*local_60)[1])();
  }
  if (pppppplVar8 != (long ******)0x0) {
    (*(code *)(*pppppplVar8)[1])(pppppplVar8);
  }
  if (((long *)local_80._0_8_ == (long *)0x0) ||
     ((**(code **)(*(long *)*param_3 + 0x28))(&local_60), local_60 == (long *******)0x0)) {
    FUN_005ecd48(param_1);
    bVar2 = false;
  }
  else {
    (*(code *)(*local_60)[1])();
    (**(code **)(*(long *)*param_3 + 0x20))((long *)*param_3,0);
    iVar3 = (**(code **)(*(long *)local_80._0_8_ + 0x50))();
    if (iVar3 == 0) {
      lVar5 = *(long *)(local_80._0_8_ + 0x10);
      uVar7 = 2;
LAB_00be8838:
      *(undefined4 *)(lVar5 + 0x84) = uVar7;
    }
    else {
      iVar3 = (**(code **)(*(long *)local_80._0_8_ + 0x50))();
      if (iVar3 == 1) {
        uVar7 = 3;
        lVar5 = *(long *)(local_80._0_8_ + 0x10);
        goto LAB_00be8838;
      }
    }
    bVar2 = true;
  }
  if ((long *)local_80._0_8_ != (long *)0x0) {
    (**(code **)(*(long *)local_80._0_8_ + 8))();
  }
  if (!bVar2) {
    return;
  }
LAB_00be865c:
  FUN_00ca2f64(param_2[0x95]);
  FUN_005ecd48(param_1);
  return;
}


// ===== 00be8890  FUN_00be8890 =====

void FUN_00be8890(undefined4 *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  char *local_78;
  ulong local_70;
  undefined1 *local_68;
  long *local_40;
  undefined1 local_38 [16];
  undefined1 uStack_21;
  
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      local_78 = "../../pc/peer_connection.cc";
      local_70 = 0x213b;
      local_68 = &uStack_21;
      local_38 = FUN_005eceec(1);
      FUN_00623bb0(&DAT_00255ab0,local_78,local_70 & 0xffffffff,"Not configured for media",
                   &DAT_001a2df6,local_38,&DAT_001ca519);
    }
    pcVar5 = (char *)operator_new(0x20);
    uVar3 = s_Not_configured_for_media_001ddb57._16_8_;
    uVar2 = s_Not_configured_for_media_001ddb57._8_8_;
    uVar1 = s_Not_configured_for_media_001ddb57._0_8_;
    if (pcVar5 + 0x18 < pcVar5) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar5 < "ot configured for media") && ("Not configured for media" < pcVar5 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    pcVar5[0x18] = '\0';
    *(undefined8 *)(pcVar5 + 8) = uVar2;
    *(undefined8 *)pcVar5 = uVar1;
    *(undefined8 *)(pcVar5 + 0x10) = uVar3;
    *param_1 = 1;
    FUN_005478d8(param_1 + 2,pcVar5,0x18);
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    operator_delete(pcVar5);
  }
  else {
    local_40 = (long *)*param_3;
    if (local_40 != (long *)0x0) {
      (**(code **)*local_40)();
    }
    FUN_00b1d314(&local_78);
    (**(code **)(*param_2 + 0x60))(param_1,param_2,&local_40,&local_78);
    FUN_00b1d330(&local_78);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 8))();
    }
  }
  return;
}


// ===== 00be8a2c  FUN_00be8a2c =====

void FUN_00be8a2c(undefined4 *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  uint6 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  size_t sVar9;
  char *pcVar10;
  undefined4 uVar11;
  long *local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined5 uStack_70;
  char cStack_6b;
  undefined1 uStack_6a;
  char cStack_69;
  undefined7 local_68;
  undefined1 uStack_61;
  byte bStack_5b;
  undefined1 local_58 [16];
  undefined1 uStack_41;
  
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      local_80 = "../../pc/peer_connection.cc";
      local_78 = 0x219b;
      uStack_74 = 0;
      uStack_70 = SUB85(&uStack_41,0);
      cStack_6b = (char)((ulong)&uStack_41 >> 0x28);
      uStack_6a = (undefined1)((ulong)&uStack_41 >> 0x30);
      cStack_69 = (char)((ulong)&uStack_41 >> 0x38);
      local_58 = FUN_005eceec(1);
      FUN_00623bb0(&DAT_00255ab0,local_80,local_78,"Not configured for media",&DAT_001a2df6,local_58
                   ,&DAT_001ca519);
    }
    pcVar10 = (char *)operator_new(0x20);
    uVar4 = s_Not_configured_for_media_001ddb57._16_8_;
    uVar3 = s_Not_configured_for_media_001ddb57._8_8_;
    uVar2 = s_Not_configured_for_media_001ddb57._0_8_;
    if (pcVar10 + 0x18 < pcVar10) goto LAB_00be8ecc;
    if ((pcVar10 < "ot configured for media") && ("Not configured for media" < pcVar10 + 0x18))
    goto LAB_00be8eb8;
    pcVar10[0x18] = '\0';
    *(undefined8 *)(pcVar10 + 8) = uVar3;
    *(undefined8 *)pcVar10 = uVar2;
    *(undefined8 *)(pcVar10 + 0x10) = uVar4;
    *param_1 = 1;
    FUN_005478d8(param_1 + 2,pcVar10,0x18);
    param_1[8] = 0;
    goto LAB_00be8dd8;
  }
  uVar8 = (**(code **)(*param_2 + 0x340))();
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/peer_connection.cc",0x435,"IsUnifiedPlan()",&DAT_001fbee0,
                 "AddTransceiver is only available with Unified Plan SdpSemantics");
  }
  if ((long *)*param_3 == (long *)0x0) {
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      local_80 = "../../pc/peer_connection.cc";
      local_78 = 0x21c3;
      uStack_74 = 0;
      uStack_70 = SUB85(&uStack_41,0);
      cStack_6b = (char)((ulong)&uStack_41 >> 0x28);
      uStack_6a = (undefined1)((ulong)&uStack_41 >> 0x30);
      cStack_69 = (char)((ulong)&uStack_41 >> 0x38);
      local_58 = FUN_005eceec(3);
      FUN_00623bb0(&DAT_00255ab0,local_80,local_78,"track is null",&DAT_001a2df6,local_58,
                   &DAT_001ca519);
    }
    uStack_61 = 0xd;
    if (("rack is null" <= &local_78) || (&cStack_6b <= "track is null")) {
      local_78 = (undefined4)s_track_is_null_001c725b._0_5_;
      uStack_74 = CONCAT31(s_track_is_null_001c725b._5_3_,SUB51(s_track_is_null_001c725b._0_5_,4));
      uVar1 = (uint6)(uint5)s_track_is_null_001c725b._8_5_;
      *param_1 = 3;
      *(ulong *)(param_1 + 6) = CONCAT17(0xd,local_68);
      *(ulong *)(param_1 + 4) = CONCAT17(cStack_69,CONCAT16(uStack_6a,uVar1));
      *(ulong *)(param_1 + 2) = CONCAT44(uStack_74,local_78);
      param_1[8] = 0;
      *(uint *)((long)param_1 + 0x23) = (uint)bStack_5b << 0x10;
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      return;
    }
    goto LAB_00be8eb8;
  }
  (**(code **)(*(long *)*param_3 + 0x20))(&local_80);
  puVar6 = PTR_s_audio_00d48a78;
  if (PTR_s_audio_00d48a78 == (undefined *)0x0) {
LAB_00be8ee0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
              );
  }
  sVar9 = strlen(PTR_s_audio_00d48a78);
  pcVar10 = local_80;
  if ((long)cStack_69 < 0) {
    if (sVar9 == CONCAT44(uStack_74,local_78)) {
      if (sVar9 == 0xffffffffffffffff) goto LAB_00be8f1c;
      iVar7 = memcmp(local_80,puVar6,sVar9);
      operator_delete(pcVar10);
      if (iVar7 == 0) {
        uVar11 = 0;
        goto LAB_00be8e48;
      }
    }
    else {
      operator_delete(local_80);
    }
  }
  else if ((sVar9 == (long)cStack_69) && (iVar7 = memcmp(&local_80,puVar6,sVar9), iVar7 == 0)) {
    uVar11 = 0;
    goto LAB_00be8e48;
  }
  (**(code **)(*(long *)*param_3 + 0x20))(&local_80);
  puVar6 = PTR_s_video_00d48a70;
  if (PTR_s_video_00d48a70 == (undefined *)0x0) goto LAB_00be8ee0;
  sVar9 = strlen(PTR_s_video_00d48a70);
  pcVar10 = local_80;
  if ((long)cStack_69 < 0) {
    if (sVar9 == CONCAT44(uStack_74,local_78)) {
      if (sVar9 == 0xffffffffffffffff) {
LAB_00be8f1c:
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      iVar7 = memcmp(local_80,puVar6,sVar9);
      operator_delete(pcVar10);
      goto joined_r0x00be8e40;
    }
    operator_delete(local_80);
    uVar8 = FUN_004249b0();
  }
  else {
    if (sVar9 == (long)cStack_69) {
      iVar7 = memcmp(&local_80,puVar6,sVar9);
joined_r0x00be8e40:
      if (iVar7 == 0) {
        uVar11 = 1;
LAB_00be8e48:
        local_88 = (long *)*param_3;
        if (local_88 != (long *)0x0) {
          (**(code **)*local_88)();
        }
        (**(code **)(*param_2 + 0x370))(param_1,param_2,uVar11,&local_88,param_4,1);
        if (local_88 == (long *)0x0) {
          return;
        }
        (**(code **)(*local_88 + 8))();
        return;
      }
    }
    uVar8 = FUN_004249b0();
  }
  if ((uVar8 & 1) == 0) {
    local_80 = "../../pc/peer_connection.cc";
    local_78 = 0x220b;
    uStack_74 = 0;
    uStack_70 = SUB85(&uStack_41,0);
    cStack_6b = (char)((ulong)&uStack_41 >> 0x28);
    uStack_6a = (undefined1)((ulong)&uStack_41 >> 0x30);
    cStack_69 = (char)((ulong)&uStack_41 >> 0x38);
    local_58 = FUN_005eceec(3);
    FUN_00623bb0(&DAT_00255ab0,local_80,local_78,"Track kind is not audio or video",&DAT_001a2df6,
                 local_58,&DAT_001ca519);
  }
  pcVar10 = (char *)operator_new(0x28);
  uVar5 = s_Track_kind_is_not_audio_or_video_001ddb70._24_8_;
  uVar4 = s_Track_kind_is_not_audio_or_video_001ddb70._16_8_;
  uVar3 = s_Track_kind_is_not_audio_or_video_001ddb70._8_8_;
  uVar2 = s_Track_kind_is_not_audio_or_video_001ddb70._0_8_;
  if (pcVar10 + 0x20 < pcVar10) {
LAB_00be8ecc:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((pcVar10 < "rack kind is not audio or video") &&
     ("Track kind is not audio or video" < pcVar10 + 0x20)) {
LAB_00be8eb8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  pcVar10[0x20] = '\0';
  *(undefined8 *)(pcVar10 + 8) = uVar3;
  *(undefined8 *)pcVar10 = uVar2;
  *(undefined8 *)(pcVar10 + 0x18) = uVar5;
  *(undefined8 *)(pcVar10 + 0x10) = uVar4;
  *param_1 = 3;
  FUN_005478d8(param_1 + 2,pcVar10,0x20);
  param_1[8] = 0;
LAB_00be8dd8:
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  operator_delete(pcVar10);
  return;
}


// ===== 00be8f20  FUN_00be8f20 =====

void FUN_00be8f20(undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined1 auStack_68 [56];
  
  FUN_00b1d314(auStack_68);
  (**(code **)(*param_2 + 0x70))(param_1,param_2,param_3,auStack_68);
  FUN_00b1d330(auStack_68);
  return;
}


// ===== 00be8f88  FUN_00be8f88 =====

void FUN_00be8f88(undefined4 *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char *pcVar6;
  long *local_68;
  undefined1 local_60 [16];
  undefined1 uStack_49;
  char *local_48;
  ulong local_40;
  undefined1 *local_38;
  
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      local_48 = "../../pc/peer_connection.cc";
      local_40 = 0x228b;
      local_38 = &uStack_49;
      local_60 = FUN_005eceec(1);
      FUN_00623bb0(&DAT_00255ab0,local_48,local_40 & 0xffffffff,"Not configured for media",
                   &DAT_001a2df6,local_60,&DAT_001ca519);
    }
    pcVar6 = (char *)operator_new(0x20);
    uVar3 = s_Not_configured_for_media_001ddb57._16_8_;
    uVar2 = s_Not_configured_for_media_001ddb57._8_8_;
    uVar1 = s_Not_configured_for_media_001ddb57._0_8_;
    if (pcVar6 + 0x18 < pcVar6) goto LAB_00be91c8;
    if ((pcVar6 < "ot configured for media") && ("Not configured for media" < pcVar6 + 0x18))
    goto LAB_00be91dc;
    pcVar6[0x18] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *param_1 = 1;
    FUN_005478d8(param_1 + 2,pcVar6,0x18);
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0x340))();
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../pc/peer_connection.cc",0x453,"IsUnifiedPlan()",&DAT_001fbee0,
                   "AddTransceiver is only available with Unified Plan SdpSemantics");
    }
    if (param_3 < 2) {
      local_68 = (long *)0x0;
      (**(code **)(*param_2 + 0x370))(param_1,param_2,param_3,&local_68,param_4,1);
      if (local_68 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_68 + 8))();
      return;
    }
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) == 0) {
      local_48 = "../../pc/peer_connection.cc";
      local_40 = 0x22bb;
      local_38 = &uStack_49;
      local_60 = FUN_005eceec(3);
      FUN_00623bb0(&DAT_00255ab0,local_48,local_40 & 0xffffffff,"media type is not audio or video",
                   &DAT_001a2df6,local_60,&DAT_001ca519);
    }
    pcVar6 = (char *)operator_new(0x28);
    uVar4 = s_media_type_is_not_audio_or_video_001ad2d3._24_8_;
    uVar3 = s_media_type_is_not_audio_or_video_001ad2d3._16_8_;
    uVar2 = s_media_type_is_not_audio_or_video_001ad2d3._8_8_;
    uVar1 = s_media_type_is_not_audio_or_video_001ad2d3._0_8_;
    if (pcVar6 + 0x20 < pcVar6) {
LAB_00be91c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar6 < "edia type is not audio or video") &&
       ("media type is not audio or video" < pcVar6 + 0x20)) {
LAB_00be91dc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    pcVar6[0x20] = '\0';
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
    *(undefined8 *)(pcVar6 + 0x18) = uVar4;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *param_1 = 3;
    FUN_005478d8(param_1 + 2,pcVar6,0x20);
  }
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  operator_delete(pcVar6);
  return;
}


// ===== 00be9218  FUN_00be9218 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00be9218(undefined4 *param_1,long *param_2,int param_3,long *param_4,undefined4 *param_5,
                 ulong param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  undefined1 *puVar11;
  void *pvVar12;
  long lVar13;
  undefined1 auVar14 [8];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  long *plVar19;
  undefined4 uVar20;
  char *pcVar21;
  char *pcVar22;
  undefined8 uVar23;
  char **ppcVar24;
  char *******pppppppcVar25;
  long **__n;
  char *******pppppppcVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  char *pcVar35;
  undefined8 *puVar36;
  undefined1 *puVar37;
  undefined8 uVar38;
  long *local_3c8;
  long *local_3c0;
  undefined1 local_3b8 [8];
  void *local_3b0;
  undefined8 local_3a8;
  char *******local_3a0;
  char *******pppppppcStack_398;
  long **pplStack_390;
  undefined8 local_388;
  undefined4 local_380;
  undefined1 local_37c;
  byte bStack_37b;
  undefined1 local_37a;
  undefined1 local_370 [16];
  undefined1 *local_360;
  undefined1 *local_358;
  undefined1 *local_350;
  char *local_348;
  char *local_340;
  undefined8 local_338;
  char *local_330;
  undefined1 *puStack_328;
  char *******local_320;
  undefined1 *puStack_318;
  undefined1 *local_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 *local_2f0;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 local_200 [16];
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 local_158 [216];
  char local_80;
  long local_78;
  
  lVar13 = tpidr_el0;
  local_78 = *(long *)(lVar13 + 0x28);
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    uVar30 = FUN_004249b0();
    if ((uVar30 & 1) == 0) {
      local_330 = "../../pc/peer_connection.cc";
      puStack_328 = (undefined1 *)0x2323;
      local_320 = (char *******)local_370;
      local_200 = FUN_005eceec(1);
      FUN_00623bb0(&DAT_00255ab0,local_330,(ulong)puStack_328 & 0xffffffff,
                   "Not configured for media",&DAT_001a2df6,local_200,&DAT_001ca519);
    }
    pcVar22 = (char *)operator_new(0x20);
    uVar16 = s_Not_configured_for_media_001ddb57._16_8_;
    uVar38 = s_Not_configured_for_media_001ddb57._8_8_;
    uVar23 = s_Not_configured_for_media_001ddb57._0_8_;
    if (pcVar22 + 0x18 < pcVar22) goto LAB_00bea0fc;
    if ((pcVar22 < "ot configured for media") && ("Not configured for media" < pcVar22 + 0x18))
    goto LAB_00bea110;
    uVar28 = 0x18;
    pcVar22[0x18] = '\0';
    *(undefined8 *)(pcVar22 + 8) = uVar38;
    *(undefined8 *)pcVar22 = uVar23;
    *(undefined8 *)(pcVar22 + 0x10) = uVar16;
    *param_1 = 1;
LAB_00be93d0:
    FUN_005478d8(param_1 + 2,pcVar22,uVar28);
LAB_00be93dc:
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    operator_delete(pcVar22);
    goto LAB_00bea0b4;
  }
  puVar29 = *(undefined8 **)(param_5 + 8);
  puVar36 = *(undefined8 **)(param_5 + 10);
  if (puVar29 == puVar36) {
    bVar18 = 1;
  }
  else {
    uVar30 = ((long)puVar36 - (long)puVar29) * 0x6bca1af286bca1b - 0x10U >> 4;
    if ((uVar30 == 0) || (((uint)((int)puVar36 - (int)puVar29) >> 3 & 1) != 0)) {
      lVar33 = 0;
      puVar31 = puVar29;
LAB_00be9400:
      do {
        puVar5 = puVar31 + 0x26;
        uVar30 = puVar31[0x15];
        if ((*(byte *)((long)puVar31 + 0xb7) & 0x80) == 0) {
          uVar30 = (ulong)*(byte *)((long)puVar31 + 0xb7);
        }
        if (uVar30 != 0) {
          lVar33 = lVar33 + 1;
        }
        puVar31 = puVar5;
      } while (puVar5 != puVar36);
    }
    else {
      uVar30 = uVar30 + 1;
      lVar32 = 0;
      lVar33 = 0;
      uVar34 = uVar30 & 0x1ffffffffffffffe;
      puVar31 = puVar29;
      do {
        pbVar1 = (byte *)((long)puVar31 + 0xb7);
        pbVar2 = (byte *)((long)puVar31 + 0x1e7);
        puVar3 = puVar31 + 0x15;
        puVar4 = puVar31 + 0x3b;
        puVar31 = puVar31 + 0x4c;
        uVar8 = *puVar3;
        if ((*pbVar1 & 0x80) == 0) {
          uVar8 = (ulong)*pbVar1;
        }
        uVar9 = *puVar4;
        if ((*pbVar2 & 0x80) == 0) {
          uVar9 = (ulong)*pbVar2;
        }
        if (uVar8 != 0) {
          lVar32 = lVar32 + 1;
        }
        if (uVar9 != 0) {
          lVar33 = lVar33 + 1;
        }
        uVar34 = uVar34 - 2;
      } while (uVar34 != 0);
      lVar33 = lVar33 + lVar32;
      puVar31 = puVar29 + (uVar30 & 0x1ffffffffffffffe) * 0x26;
      if (uVar30 != (uVar30 & 0x1ffffffffffffffe)) goto LAB_00be9400;
    }
    if (lVar33 == 0) {
      bVar18 = 1;
    }
    else {
      if (lVar33 != ((long)puVar36 - (long)puVar29 >> 4) * -0x79435e50d79435e5) {
        uVar30 = FUN_004249b0();
        if ((uVar30 & 1) == 0) {
          local_330 = "../../pc/peer_connection.cc";
          puStack_328 = (undefined1 *)0x23b3;
          local_320 = (char *******)local_370;
          local_200 = FUN_005eceec(3);
          FUN_00623bb0(&DAT_00255ab0,local_330,(ulong)puStack_328 & 0xffffffff,
                       "RIDs must be provided for either all or none of the send encodings.",
                       &DAT_001a2df6,local_200,&DAT_001ca519);
        }
        pcVar22 = (char *)operator_new(0x48);
        uVar28 = s_RIDs_must_be_provided_for_either_001c434e._24_8_;
        uVar16 = s_RIDs_must_be_provided_for_either_001c434e._16_8_;
        uVar38 = s_RIDs_must_be_provided_for_either_001c434e._8_8_;
        uVar23 = s_RIDs_must_be_provided_for_either_001c434e._0_8_;
        if (pcVar22 + 0x43 < pcVar22) goto LAB_00bea0fc;
        if ((pcVar22 < "IDs must be provided for either all or none of the send encodings.") &&
           ("RIDs must be provided for either all or none of the send encodings." < pcVar22 + 0x43))
        goto LAB_00bea110;
        pcVar22[0x3f] = 'n';
        pcVar22[0x40] = 'g';
        pcVar22[0x41] = 's';
        pcVar22[0x42] = '.';
        *(undefined8 *)(pcVar22 + 8) = uVar38;
        *(undefined8 *)pcVar22 = uVar23;
        *(undefined8 *)(pcVar22 + 0x18) = uVar28;
        *(undefined8 *)(pcVar22 + 0x10) = uVar16;
        uVar28 = s_RIDs_must_be_provided_for_either_001c434e._56_8_;
        uVar16 = s_RIDs_must_be_provided_for_either_001c434e._48_8_;
        uVar38 = s_RIDs_must_be_provided_for_either_001c434e._40_8_;
        uVar23 = s_RIDs_must_be_provided_for_either_001c434e._32_8_;
        pcVar22[0x43] = '\0';
        *param_1 = 3;
        *(undefined8 *)(pcVar22 + 0x28) = uVar38;
        *(undefined8 *)(pcVar22 + 0x20) = uVar23;
        *(undefined8 *)(pcVar22 + 0x38) = uVar28;
        *(undefined8 *)(pcVar22 + 0x30) = uVar16;
        FUN_005478d8(param_1 + 2,pcVar22,0x43);
        goto LAB_00be93dc;
      }
      puVar29 = puVar29 + 0x14;
      do {
        uVar30 = puVar29[1];
        puVar31 = (undefined8 *)*puVar29;
        if (-1 < (char)*(byte *)((long)puVar29 + 0x17)) {
          uVar30 = (ulong)*(byte *)((long)puVar29 + 0x17);
          puVar31 = puVar29;
        }
        uVar30 = FUN_007ccd50(puVar31,uVar30);
      } while ((puVar29 + 0x12 != puVar36) && (puVar29 = puVar29 + 0x26, (uVar30 & 1) != 0));
      if ((uVar30 & 1) == 0) {
        uVar30 = FUN_004249b0();
        if ((uVar30 & 1) == 0) {
          local_330 = "../../pc/peer_connection.cc";
          puStack_328 = (undefined1 *)0x23f3;
          local_320 = (char *******)local_370;
          local_200 = FUN_005eceec(3);
          FUN_00623bb0(&DAT_00255ab0,local_330,(ulong)puStack_328 & 0xffffffff,
                       "Invalid RID value provided.",&DAT_001a2df6,local_200,&DAT_001ca519);
        }
        pcVar22 = (char *)operator_new(0x20);
        uVar38 = s_Invalid_RID_value_provided__001aa9bd._19_8_;
        uVar23 = s_Invalid_RID_value_provided__001aa9bd._0_8_;
        if (pcVar22 + 0x1b < pcVar22) goto LAB_00bea0fc;
        if ((pcVar22 < "nvalid RID value provided.") &&
           ("Invalid RID value provided." < pcVar22 + 0x1b)) goto LAB_00bea110;
        uVar16 = CONCAT53(s_Invalid_RID_value_provided__001aa9bd._11_5_,
                          s_Invalid_RID_value_provided__001aa9bd._8_3_);
        uVar17 = CONCAT35(s_Invalid_RID_value_provided__001aa9bd._16_3_,
                          s_Invalid_RID_value_provided__001aa9bd._11_5_);
        pcVar22[0x1b] = '\0';
        *(undefined8 *)(pcVar22 + 8) = uVar16;
        *(undefined8 *)pcVar22 = uVar23;
        uVar28 = 0x1b;
        *(undefined8 *)(pcVar22 + 0x13) = uVar38;
        *(undefined8 *)(pcVar22 + 0xb) = uVar17;
        *param_1 = 3;
        goto LAB_00be93d0;
      }
      puVar29 = *(undefined8 **)(param_5 + 8);
      puVar36 = *(undefined8 **)(param_5 + 10);
      bVar18 = 0;
    }
  }
  for (; puVar29 != puVar36; puVar29 = puVar29 + 0x26) {
    if (*(char *)((long)puVar29 + 4) == '\x01') {
      uVar30 = FUN_004249b0();
      if ((uVar30 & 1) == 0) {
        local_330 = "../../pc/peer_connection.cc";
        puStack_328 = (undefined1 *)0x243b;
        local_320 = (char *******)local_370;
        local_200 = FUN_005eceec(2);
        FUN_00623bb0(&DAT_00255ab0,local_330,(ulong)puStack_328 & 0xffffffff,
                     "Attempted to set an unimplemented parameter of RtpParameters.",&DAT_001a2df6,
                     local_200,&DAT_001ca519);
      }
      pcVar22 = (char *)operator_new(0x40);
      uVar17 = s_Attempted_to_set_an_unimplemente_001a2499._32_8_;
      uVar28 = s_Attempted_to_set_an_unimplemente_001a2499._24_8_;
      uVar16 = s_Attempted_to_set_an_unimplemente_001a2499._16_8_;
      uVar38 = s_Attempted_to_set_an_unimplemente_001a2499._8_8_;
      uVar23 = s_Attempted_to_set_an_unimplemente_001a2499._0_8_;
      if (pcVar22 + 0x3d < pcVar22) goto LAB_00bea0fc;
      if ((pcVar22 < "ttempted to set an unimplemented parameter of RtpParameters.") &&
         ("Attempted to set an unimplemented parameter of RtpParameters." < pcVar22 + 0x3d))
      goto LAB_00bea110;
      uVar15 = CONCAT35(s_Attempted_to_set_an_unimplemente_001a2499._45_3_,
                        s_Attempted_to_set_an_unimplemente_001a2499._40_5_);
      pcVar22[0x3d] = '\0';
      *(undefined8 *)(pcVar22 + 8) = uVar38;
      *(undefined8 *)pcVar22 = uVar23;
      *(undefined8 *)(pcVar22 + 0x18) = uVar28;
      *(undefined8 *)(pcVar22 + 0x10) = uVar16;
      uVar38 = s_Attempted_to_set_an_unimplemente_001a2499._53_8_;
      uVar23 = CONCAT53(s_Attempted_to_set_an_unimplemente_001a2499._48_5_,
                        s_Attempted_to_set_an_unimplemente_001a2499._45_3_);
      *(undefined8 *)(pcVar22 + 0x28) = uVar15;
      *(undefined8 *)(pcVar22 + 0x20) = uVar17;
      *(undefined8 *)(pcVar22 + 0x35) = uVar38;
      *(undefined8 *)(pcVar22 + 0x2d) = uVar23;
      *param_1 = 2;
      FUN_005478d8(param_1 + 2,pcVar22,0x3d);
      goto LAB_00be93dc;
    }
  }
  local_200._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
  local_200._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00669500(local_200);
  if (&local_1a0 != (undefined1 **)(param_5 + 8)) {
    FUN_00b6211c(&local_1a0,*(long *)(param_5 + 8),*(long *)(param_5 + 10),
                 (*(long *)(param_5 + 10) - *(long *)(param_5 + 8) >> 4) * -0x79435e50d79435e5);
  }
  puVar37 = puStack_198;
  uVar34 = ((long)puStack_198 - (long)local_1a0 >> 4) * -0x79435e50d79435e5;
  uVar30 = 3;
  if (param_3 != 1) {
    uVar30 = 1;
  }
  puVar6 = puStack_198;
  if (uVar30 <= uVar34 && uVar34 - uVar30 != 0) {
    lVar33 = (long)puStack_198 - (long)(local_1a0 + uVar30 * 0x130);
    if (puStack_198 < local_1a0 + uVar30 * 0x130) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (lVar33 != 0) {
      puVar6 = local_1a0 + uVar30 * 0x130;
      for (puVar7 = puVar6 + lVar33; puVar11 = puStack_198, puVar7 != puVar37;
          puVar7 = puVar7 + 0x130) {
        FUN_00b62384(puVar6,puVar7);
        puVar6 = puVar6 + 0x130;
      }
      while (puVar6 != puVar11) {
        puVar11 = puVar11 + -0x130;
        if (puVar11 == (undefined1 *)0x0) goto LAB_00bea0e8;
        FUN_0066919c(puVar11);
      }
    }
  }
  puStack_198 = puVar6;
  if ((long)puStack_198 - (long)local_1a0 == 0x130) {
    lVar33 = (long)(char)local_1a0[0xb7];
    if (lVar33 < 0) {
      lVar33 = *(long *)(local_1a0 + 0xa8);
    }
    if (lVar33 != 0) {
      uVar30 = FUN_00417e08();
      if ((uVar30 & 1) == 0) {
        if (puStack_198 == local_1a0) goto LAB_00bea138;
        FUN_00623bb0(&DAT_001f4eff,"../../pc/peer_connection.cc",0x24c9,"Removing RID: ",
                     local_1a0 + 0xa0,&DAT_001ea377);
      }
      if (puStack_198 == local_1a0) {
LAB_00bea138:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if ((char)local_1a0[0xb7] < '\0') {
        **(undefined1 **)(local_1a0 + 0xa0) = 0;
        *(undefined8 *)(local_1a0 + 0xa8) = 0;
      }
      else {
        local_1a0[0xa0] = 0;
        local_1a0[0xb7] = 0;
      }
    }
  }
  bVar10 = (bool)(bVar18 ^ 1);
  if ((ulong)(((long)puStack_198 - (long)local_1a0 >> 4) * -0x79435e50d79435e5) < 2) {
    bVar10 = true;
  }
  if (!bVar10) {
    puStack_328 = &DAT_aaaaaaaaaaaaaaaa;
    local_330 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_318 = &DAT_aaaaaaaaaaaaaaaa;
    local_320 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
    FUN_008970a8(&local_330);
    puVar6 = puStack_198;
    for (puVar37 = local_1a0; puVar37 != puVar6; puVar37 = puVar37 + 0x130) {
      FUN_00897274(local_370,&local_330);
      if ((char)puVar37[0xb7] < '\0') {
        operator_delete(*(void **)(puVar37 + 0xa0));
      }
      *(undefined1 **)(puVar37 + 0xb0) = local_360;
      *(undefined8 *)(puVar37 + 0xa8) = local_370._8_8_;
      *(undefined8 *)(puVar37 + 0xa0) = local_370._0_8_;
    }
    FUN_00897240(&local_330);
  }
  if (local_1a0 == puStack_198) {
    FUN_00668fb0(&local_330);
    puVar37 = puStack_198;
    if (puStack_198 < local_190) {
      if (puStack_198 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00669028(puStack_198,&local_330);
      puStack_198 = puVar37 + 0x130;
    }
    else {
      puStack_198 = (undefined1 *)FUN_00bf3f88(&local_1a0,&local_330);
    }
    FUN_0066919c(&local_330);
  }
  uVar30 = FUN_00c20ec0(local_200);
  if ((uVar30 & 1) == 0) {
    local_348 = (char *)0x0;
    local_340 = (char *)0x0;
    local_338 = 0;
    puStack_328 = &DAT_aaaaaaaaaaaaaaaa;
    local_330 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_318 = &DAT_aaaaaaaaaaaaaaaa;
    local_320 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
    puStack_308 = &DAT_aaaaaaaaaaaaaaaa;
    local_310 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_300 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_2f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_2e0 = &DAT_aaaaaaaaaaaaaaaa;
    uVar38 = *(undefined8 *)(param_2[8] + 0x40);
    uVar23 = (**(code **)(*param_2 + 0x388))(param_2);
    FUN_00bda938(&local_330,uVar38,0,uVar23);
    if (param_3 == 1) {
      ppcVar24 = (char **)FUN_00bd76f0();
    }
    else {
      ppcVar24 = (char **)FUN_00bd76dc(&local_330);
    }
    if (&local_348 != ppcVar24) {
      FUN_0088fd38(&local_348,*ppcVar24,ppcVar24[1],
                   ((long)ppcVar24[1] - (long)*ppcVar24 >> 3) * -0x7b425ed097b425ed);
    }
    local_158[0] = 0;
    local_80 = '\0';
    pcVar22 = (char *)0x0;
    if ((long)local_340 - (long)local_348 != 0) {
      pcVar22 = local_348;
    }
    local_370._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_370._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_358 = &DAT_aaaaaaaaaaaaaaaa;
    local_360 = &DAT_aaaaaaaaaaaaaaaa;
    local_350 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00b6b5c4(local_370,local_200,pcVar22,
                 ((long)local_340 - (long)local_348 >> 3) * -0x7b425ed097b425ed,local_158,param_2[4]
                );
    if (local_80 == '\x01') {
      FUN_00890cb8(local_158);
    }
    if (local_370._0_4_ == 0) {
      uVar30 = FUN_00417e08();
      if ((uVar30 & 1) == 0) {
        local_3a0 = (char *******)0x1c9f9c;
        pppppppcStack_398 = (char *******)0x2619;
        pplStack_390 = &local_3c0;
        FUN_00667e40(local_3b8,param_3);
        FUN_00623bb0(&DAT_001f4eff,local_3a0,(ulong)pppppppcStack_398 & 0xffffffff,"Adding ",
                     local_3b8," transceiver in response to a call to AddTransceiver.");
        if ((long)local_3a8 < 0) {
          operator_delete((void *)local_3b8);
        }
      }
      pplStack_390 = (long **)&DAT_aaaaaaaaaaaaaaaa;
      pppppppcStack_398 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      local_3a0 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      if (*param_4 == 0) {
        FUN_00835cc0(&local_3a0);
      }
      else {
        uVar23 = (**(code **)(*param_2 + 0x2e8))(param_2);
        (**(code **)(*(long *)*param_4 + 0x28))(local_3b8,(long *)*param_4);
        auVar14 = local_3b8;
        if (-1 < (long)local_3a8) {
          local_3b0 = (void *)(local_3a8 >> 0x38);
          auVar14 = (undefined1  [8])local_3b8;
        }
        FUN_00cde118(&local_3c0,uVar23,auVar14,local_3b0);
        if (local_3c0 == (long *)0x0) {
          (**(code **)(*(long *)*param_4 + 0x28))(&local_3a0);
        }
        else {
          FUN_00835cc0(&local_3a0);
        }
        if (local_3c0 != (long *)0x0) {
          (**(code **)(*local_3c0 + 8))();
        }
        if (local_3a8._7_1_ < '\0') {
          operator_delete((void *)local_3b8);
        }
      }
      local_3c0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      uVar23 = (**(code **)(*param_2 + 0x2e8))(param_2);
      lVar33 = param_2[0x95];
      local_3c8 = (long *)*param_4;
      uVar38 = *(undefined8 *)(lVar33 + 400);
      if (local_3c8 != (long *)0x0) {
        (**(code **)*local_3c8)();
      }
      pppppppcVar25 = pppppppcStack_398;
      pppppppcVar26 = local_3a0;
      if (-1 < (long)pplStack_390) {
        pppppppcVar25 = (char *******)((ulong)pplStack_390 >> 0x38);
        pppppppcVar26 = (char *******)&local_3a0;
      }
      local_3b8 = (undefined1  [8])0x0;
      local_3b0 = (void *)0x0;
      local_3a8 = 0;
      FUN_00cde44c(&local_3c0,uVar23,(long)param_2 + 0xf4,lVar33 + 0x128,lVar33 + 0x178,
                   param_2 + 0x2e,uVar38,param_3,&local_3c8,param_5 + 2,&local_1a0,local_3b8,
                   pppppppcVar26,pppppppcVar25,&DAT_001b3348,0);
      auVar14 = local_3b8;
      pvVar12 = local_3b0;
      if (local_3b8 != (undefined1  [8])0x0) {
        while (auVar14 != (undefined1  [8])pvVar12) {
          pvVar12 = (void *)((long)pvVar12 + -0x28);
          if (pvVar12 == (void *)0x0) goto LAB_00bea0e8;
          FUN_00668d5c(pvVar12);
        }
        local_3b0 = (void *)auVar14;
        operator_delete((void *)local_3b8);
      }
      if (local_3c8 != (long *)0x0) {
        (**(code **)(*local_3c8 + 8))();
      }
      *(undefined4 *)(local_3c0[2] + 0x84) = *param_5;
      if ((param_6 & 1) != 0) {
        FUN_00ca2f64(param_2[0x95]);
      }
      plVar19 = local_3c0;
      if (local_3c0 == (long *)0x0) {
        plVar27 = (long *)0x0;
      }
      else {
        (**(code **)*local_3c0)(local_3c0);
        plVar27 = local_3c0;
      }
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x26) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 2) = 0;
      *(undefined8 *)((long)param_1 + 0x1d) = 0;
      *(long **)(param_1 + 10) = plVar19;
      *(undefined1 *)(param_1 + 0xc) = 1;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 8))();
      }
      pppppppcVar25 = local_3a0;
      if ((long)pplStack_390 < 0) {
LAB_00bea030:
        operator_delete(pppppppcVar25);
      }
    }
    else {
      if (local_370._0_4_ == 7) {
        local_370._0_4_ = 1;
      }
      uVar30 = FUN_004249b0();
      if ((uVar30 & 1) == 0) {
        local_3a0 = (char *******)0x1c9f9c;
        pppppppcStack_398 = (char *******)0x2603;
        pplStack_390 = &local_3c0;
        uVar23 = FUN_005ecd5c(local_370);
        _local_3b8 = FUN_005eceec(local_370._0_8_ & 0xffffffff);
        FUN_00623bb0(&DAT_00255ab0,local_3a0,(ulong)pppppppcStack_398 & 0xffffffff,uVar23,
                     &DAT_001a2df6,local_3b8,&DAT_001ca519);
      }
      uVar20 = local_370._0_4_;
      pppppppcVar25 = (char *******)FUN_005ecd5c(local_370);
      if (pppppppcVar25 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                  );
      }
      __n = (long **)strlen((char *)pppppppcVar25);
      local_3a0 = (char *******)CONCAT44(local_3a0._4_4_,uVar20);
      if ((long **)0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      pppppppcVar26 = (char *******)&pppppppcStack_398;
      if (__n < (long **)0x17) {
        local_388 = CONCAT17((char)__n,(undefined7)local_388);
      }
      else {
        uVar30 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
        uVar34 = 0x19;
        if (uVar30 != 0x18) {
          uVar34 = uVar30;
        }
        pppppppcVar26 = (char *******)operator_new(uVar34);
        local_388 = uVar34 | 0x8000000000000000;
        pppppppcStack_398 = pppppppcVar26;
        pplStack_390 = __n;
      }
      if ((char *******)((long)pppppppcVar26 + (long)__n) < pppppppcVar26) goto LAB_00bea0fc;
      if ((pppppppcVar26 <= pppppppcVar25) &&
         (pppppppcVar25 < (char *******)((long)pppppppcVar26 + (long)__n))) goto LAB_00bea110;
      memmove(pppppppcVar26,pppppppcVar25,(size_t)__n);
      *(undefined1 *)((long)pppppppcVar26 + (long)__n) = 0;
      pppppppcVar25 = pppppppcStack_398;
      local_380 = 0;
      local_37c = 0;
      local_37a = 0;
      *param_1 = local_3a0._0_4_;
      if ((long)local_388 < 0) {
        FUN_005478d8(param_1 + 2,pppppppcStack_398,pplStack_390);
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[8] = local_380;
        *(uint *)((long)param_1 + 0x23) =
             CONCAT13(local_37a,CONCAT12(bStack_37b,CONCAT11(local_37c,local_380._3_1_)));
        *(undefined1 *)(param_1 + 0xc) = 0;
        goto LAB_00bea030;
      }
      *(undefined1 *)(param_1 + 10) = 0;
      *(long ***)(param_1 + 4) = pplStack_390;
      *(char ********)(param_1 + 2) = pppppppcStack_398;
      *(ulong *)(param_1 + 6) = local_388;
      param_1[8] = 0;
      *(uint *)((long)param_1 + 0x23) = (uint)bStack_37b << 0x10;
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if ((long)local_358 < 0) {
      operator_delete((void *)local_370._8_8_);
    }
    FUN_00b89cf8(&local_330);
    pcVar21 = local_348;
    pcVar22 = local_348;
    pcVar35 = local_340;
    if (local_348 != (char *)0x0) {
      while (local_348 = pcVar22, pcVar21 != pcVar35) {
        pcVar35 = pcVar35 + -0xd8;
        if (pcVar35 == (char *)0x0) {
LAB_00bea0e8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (*(code *)**(undefined8 **)pcVar35)(pcVar35);
        pcVar22 = local_348;
      }
      local_340 = pcVar21;
      goto LAB_00bea0a8;
    }
  }
  else {
    uVar30 = FUN_004249b0();
    if ((uVar30 & 1) == 0) {
      local_330 = "../../pc/peer_connection.cc";
      puStack_328 = (undefined1 *)0x256b;
      local_320 = (char *******)&local_3a0;
      local_370 = FUN_005eceec(2);
      FUN_00623bb0(&DAT_00255ab0,local_330,(ulong)puStack_328 & 0xffffffff,
                   "Attempted to set an unimplemented parameter of RtpParameters.",&DAT_001a2df6,
                   local_370,&DAT_001ca519);
    }
    pcVar22 = (char *)operator_new(0x40);
    uVar17 = s_Attempted_to_set_an_unimplemente_001a2499._32_8_;
    uVar28 = s_Attempted_to_set_an_unimplemente_001a2499._24_8_;
    uVar16 = s_Attempted_to_set_an_unimplemente_001a2499._16_8_;
    uVar38 = s_Attempted_to_set_an_unimplemente_001a2499._8_8_;
    uVar23 = s_Attempted_to_set_an_unimplemente_001a2499._0_8_;
    if (pcVar22 + 0x3d < pcVar22) {
LAB_00bea0fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar22 < "ttempted to set an unimplemented parameter of RtpParameters.") &&
       ("Attempted to set an unimplemented parameter of RtpParameters." < pcVar22 + 0x3d)) {
LAB_00bea110:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    uVar15 = CONCAT35(s_Attempted_to_set_an_unimplemente_001a2499._45_3_,
                      s_Attempted_to_set_an_unimplemente_001a2499._40_5_);
    pcVar22[0x3d] = '\0';
    *(undefined8 *)(pcVar22 + 8) = uVar38;
    *(undefined8 *)pcVar22 = uVar23;
    *(undefined8 *)(pcVar22 + 0x18) = uVar28;
    *(undefined8 *)(pcVar22 + 0x10) = uVar16;
    uVar38 = s_Attempted_to_set_an_unimplemente_001a2499._53_8_;
    uVar23 = CONCAT53(s_Attempted_to_set_an_unimplemente_001a2499._48_5_,
                      s_Attempted_to_set_an_unimplemente_001a2499._45_3_);
    *(undefined8 *)(pcVar22 + 0x28) = uVar15;
    *(undefined8 *)(pcVar22 + 0x20) = uVar17;
    *(undefined8 *)(pcVar22 + 0x35) = uVar38;
    *(undefined8 *)(pcVar22 + 0x2d) = uVar23;
    *param_1 = 2;
    FUN_005478d8(param_1 + 2,pcVar22,0x3d);
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
LAB_00bea0a8:
    operator_delete(pcVar22);
  }
  FUN_0066981c(local_200);
LAB_00bea0b4:
  if (*(long *)(lVar13 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00bea18c  FUN_00bea18c =====

void FUN_00bea18c(long param_1)

{
  FUN_00be9218(param_1 + -8);
  return;
}


// ===== 00bea198  FUN_00bea198 =====

/* WARNING: Removing unreachable block (ram,0x00bea74c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00bea198(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long *******ppppppplVar4;
  long *plVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long ******pppppplVar13;
  long *plVar14;
  size_t sVar15;
  long lVar16;
  long *local_a8;
  long *local_a0;
  long *******local_98;
  ulong uStack_90;
  ulong local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  long *local_38;
  
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x26fb,"Not configured for media");
    }
    *param_1 = 0;
    return;
  }
  uVar8 = (**(code **)(*param_2 + 0x340))();
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/peer_connection.cc",0x4e2,"!IsUnifiedPlan()",&DAT_001fbee0,
                 "CreateSender is not available with Unified Plan SdpSemantics. Please use AddTransceiver instead."
                );
  }
  if (((DAT_00dbad58 & 1) == 0) && (iVar7 = FUN_0054fdd4(&DAT_00dbad58), iVar7 != 0)) {
    DAT_00dbad50 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbad58);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbad50 != '\0') {
    FUN_0066d348(0x42,DAT_00dbad50,"PeerConnection::CreateSender",0,0,0,0,0,0);
    local_60 = DAT_00dbad50;
    pcStack_58 = "PeerConnection::CreateSender";
    local_68 = &local_60;
  }
  uVar8 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if ((uVar8 & 1) != 0) {
    *param_1 = 0;
    goto LAB_00bea774;
  }
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  uVar8 = *(ulong *)(param_4 + 8);
  if ((*(byte *)(param_4 + 0x17) & 0x80) == 0) {
    uVar8 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar8 == 0) {
    FUN_00835cc0(&local_98);
    if (local_78 < local_70) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      plVar12 = local_78 + 3;
      local_78[2] = local_88;
      local_78[1] = uStack_90;
      *local_78 = (long)local_98;
      uStack_90 = 0;
      local_88 = 0;
      local_98 = (long *******)0x0;
    }
    else {
      plVar12 = (long *)FUN_00ad3390(&local_80,&local_98);
    }
    local_78 = plVar12;
    if ((long)local_88 < 0) {
      operator_delete(local_98);
      uVar8 = FUN_00417e08();
    }
    else {
      uVar8 = FUN_00417e08();
    }
    if ((uVar8 & 1) == 0) {
      if (local_78 == local_80) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      FUN_00623bb0(&DAT_001f4e90,"../../pc/peer_connection.cc",0x2779,
                   "No stream_id specified for sender. Generated stream ID: ");
    }
  }
  else {
    local_78 = (long *)FUN_009d56fc(&local_80,param_4);
  }
  puVar6 = PTR_s_audio_00d48a78;
  if (PTR_s_audio_00d48a78 == (undefined *)0x0) goto LAB_00bea7e0;
  sVar9 = strlen(PTR_s_audio_00d48a78);
  cVar3 = *(char *)((long)param_3 + 0x17);
  sVar15 = (size_t)cVar3;
  if ((long)sVar15 < 0) {
    if (sVar9 == param_3[1]) {
      if (sVar9 == 0xffffffffffffffff) goto LAB_00bea884;
      puVar10 = (undefined8 *)*param_3;
      goto LAB_00bea3a8;
    }
LAB_00bea3b4:
    puVar6 = PTR_s_video_00d48a70;
    if (PTR_s_video_00d48a70 == (undefined *)0x0) {
LAB_00bea7e0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
                );
    }
    sVar9 = strlen(PTR_s_video_00d48a70);
    if (cVar3 < '\0') {
      if (sVar9 == param_3[1]) {
        if (sVar9 == 0xffffffffffffffff) {
LAB_00bea884:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        puVar10 = (undefined8 *)*param_3;
        goto LAB_00bea3fc;
      }
    }
    else {
      puVar10 = param_3;
      if (sVar9 == sVar15) {
LAB_00bea3fc:
        iVar7 = memcmp(puVar10,puVar6,sVar9);
        if (iVar7 == 0) {
          local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          uVar1 = *(undefined8 *)(param_2[8] + 0x30);
          uVar2 = *(undefined8 *)(param_2[8] + 0x38);
          FUN_00835cc0(&local_98);
          uVar8 = uStack_90;
          ppppppplVar4 = local_98;
          if (-1 < (long)local_88) {
            uVar8 = local_88 >> 0x38;
            ppppppplVar4 = (long *******)&local_98;
          }
          (**(code **)(*param_2 + 0x2e8))(param_2);
          uVar11 = FUN_00cdccac();
          FUN_00c25b68(&local_38,param_2 + 3,uVar2,uVar1,ppppppplVar4,uVar8,0,uVar11);
          if ((long)local_88 < 0) {
            operator_delete(local_98);
          }
          plVar12 = local_38;
          lVar16 = *(long *)(param_2[8] + 0x38);
          if (local_38 != (long *)0x0) {
            (**(code **)*local_38)(local_38);
          }
          plVar14 = (long *)operator_new(0x28);
          plVar14[2] = lVar16;
          plVar14[3] = (long)plVar12;
          *plVar14 = (long)&PTR_FUN_00d499e0;
          plVar14[1] = (long)&PTR_FUN_00d49ab8;
          *(undefined4 *)(plVar14 + 4) = 0;
          if (plVar14 != (long *)0x0) {
            FUN_00d0f740(1,plVar14 + 4);
          }
          (**(code **)(*param_2 + 0x2e8))(param_2);
          FUN_00cdcd04(&local_98);
          pppppplVar13 = local_98[2];
          local_a8 = plVar14;
          if (plVar14 != (long *)0x0) {
            (**(code **)*plVar14)(plVar14);
          }
          FUN_00c0c364(pppppplVar13,&local_a8);
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 8))();
          }
          if (local_98 != (long *******)0x0) {
            (*(code *)(*local_98)[1])();
          }
          if (local_38 != (long *)0x0) {
            lVar16 = *local_38;
            goto LAB_00bea6f0;
          }
          goto LAB_00bea6f8;
        }
      }
    }
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e90,"../../pc/peer_connection.cc",0x284b,
                   "CreateSender called with invalid kind: ",param_3);
    }
    plVar14 = (long *)0x0;
  }
  else {
    puVar10 = param_3;
    if (sVar9 != sVar15) goto LAB_00bea3b4;
LAB_00bea3a8:
    iVar7 = memcmp(puVar10,puVar6,sVar9);
    if (iVar7 != 0) goto LAB_00bea3b4;
    local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    uVar1 = *(undefined8 *)(param_2[8] + 0x30);
    uVar2 = *(undefined8 *)(param_2[8] + 0x38);
    FUN_00835cc0(&local_98);
    lVar16 = param_2[0x4e];
    uVar8 = uStack_90;
    ppppppplVar4 = local_98;
    if (-1 < (long)local_88) {
      uVar8 = local_88 >> 0x38;
      ppppppplVar4 = (long *******)&local_98;
    }
    (**(code **)(*param_2 + 0x2e8))(param_2);
    uVar11 = FUN_00cdcac8();
    FUN_00c24a94(&local_38,param_2 + 3,uVar2,uVar1,ppppppplVar4,uVar8,lVar16,0,uVar11);
    if ((long)local_88 < 0) {
      operator_delete(local_98);
    }
    lVar16 = *(long *)(param_2[8] + 0x38);
    plVar12 = local_38 + 1;
    plVar5 = (long *)0x0;
    if (local_38 != (long *)0x0) {
      (**(code **)*plVar12)();
      plVar5 = plVar12;
    }
    plVar14 = (long *)operator_new(0x28);
    plVar14[2] = lVar16;
    plVar14[3] = (long)plVar5;
    *plVar14 = (long)&PTR_FUN_00d499e0;
    plVar14[1] = (long)&PTR_FUN_00d49ab8;
    *(undefined4 *)(plVar14 + 4) = 0;
    if (plVar14 != (long *)0x0) {
      FUN_00d0f740(1,plVar14 + 4);
    }
    (**(code **)(*param_2 + 0x2e8))(param_2);
    FUN_00cdcb20(&local_98);
    pppppplVar13 = local_98[2];
    local_a0 = plVar14;
    if (plVar14 != (long *)0x0) {
      (**(code **)*plVar14)(plVar14);
    }
    FUN_00c0c364(pppppplVar13,&local_a0);
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 8))();
    }
    if (local_98 != (long *******)0x0) {
      (*(code *)(*local_98)[1])();
    }
    if (local_38 != (long *)0x0) {
      lVar16 = local_38[1];
LAB_00bea6f0:
      (**(code **)(lVar16 + 8))();
    }
LAB_00bea6f8:
    if (plVar14 != (long *)0x0) {
      (**(code **)(*(long *)plVar14[3] + 0xd0))((long *)plVar14[3],&local_80);
    }
  }
  *param_1 = plVar14;
  plVar12 = local_78;
  if (local_80 != (long *)0x0) {
    while (local_80 != plVar12) {
      plVar12 = plVar12 + -3;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_00bea774:
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00bea888  FUN_00bea888 =====

void FUN_00bea888(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_48;
  long *local_40;
  long *local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = param_2[8];
  param_1[2] = 0;
  if (*(char *)(lVar5 + 5) == '\x01') {
    (**(code **)(*param_2 + 0x2f0))();
    FUN_00cdea68(&local_48);
    plVar2 = local_40;
    plVar1 = local_48;
    for (plVar6 = local_48; local_48 = plVar1, plVar6 != plVar2; plVar6 = plVar6 + 1) {
      local_18 = (long *)*plVar6;
      if (local_18 != (long *)0x0) {
        (**(code **)*local_18)();
      }
      plVar3 = local_18;
      plVar1 = (long *)param_1[1];
      if (plVar1 < (long *)param_1[2]) {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_18 = (long *)0x0;
        plVar4 = plVar1 + 1;
        *plVar1 = (long)plVar3;
      }
      else {
        plVar4 = (long *)FUN_00bf4134(param_1,&local_18);
      }
      param_1[1] = plVar4;
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 8))(local_18);
      }
      plVar1 = local_48;
    }
    plVar6 = local_40;
    if (plVar1 != (long *)0x0) {
      while (plVar1 != plVar6) {
        plVar6 = plVar6 + -1;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 8))();
        }
      }
      operator_delete(local_48);
    }
  }
  return;
}


// ===== 00bea9f0  FUN_00bea9f0 =====

void FUN_00bea9f0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_48;
  long *local_40;
  long *local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = param_2[8];
  param_1[2] = 0;
  if (*(char *)(lVar5 + 5) == '\x01') {
    (**(code **)(*param_2 + 0x2f0))();
    FUN_00cdecc4(&local_48);
    plVar2 = local_40;
    plVar1 = local_48;
    for (plVar6 = local_48; local_48 = plVar1, plVar6 != plVar2; plVar6 = plVar6 + 1) {
      local_18 = (long *)*plVar6;
      if (local_18 != (long *)0x0) {
        (**(code **)*local_18)();
      }
      plVar3 = local_18;
      plVar1 = (long *)param_1[1];
      if (plVar1 < (long *)param_1[2]) {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        local_18 = (long *)0x0;
        plVar4 = plVar1 + 1;
        *plVar1 = (long)plVar3;
      }
      else {
        plVar4 = (long *)FUN_00bf43e4(param_1,&local_18);
      }
      param_1[1] = plVar4;
      if (local_18 != (long *)0x0) {
        (**(code **)(*local_18 + 8))(local_18);
      }
      plVar1 = local_48;
    }
    plVar6 = local_40;
    if (plVar1 != (long *)0x0) {
      while (plVar1 != plVar6) {
        plVar6 = plVar6 + -1;
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 8))();
        }
      }
      operator_delete(local_48);
    }
  }
  return;
}


// ===== 00beab58  FUN_00beab58 =====

void FUN_00beab58(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *local_48;
  
  uVar4 = (**(code **)(*param_2 + 0x340))();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/peer_connection.cc",0x52f,"IsUnifiedPlan()",&DAT_001fbee0,
                 "GetTransceivers is only supported with Unified Plan SdpSemantics.");
  }
  lVar9 = param_2[8];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(char *)(lVar9 + 5) == '\x01') {
    lVar5 = (**(code **)(*param_2 + 0x2f0))(param_2);
    lVar9 = *(long *)(lVar5 + 0x30);
    lVar5 = *(long *)(lVar5 + 0x38);
    uVar4 = lVar5 - lVar9;
    if (uVar4 != 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bf3e88();
      }
      plVar6 = (long *)operator_new(uVar4);
      lVar10 = 0;
      do {
        if ((long *)((long)plVar6 + lVar10) == (long *)0x0) goto LAB_00beacf0;
        puVar7 = *(undefined8 **)(lVar9 + lVar10);
        *(long *)((long)plVar6 + lVar10) = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)();
        }
        lVar10 = lVar10 + 8;
        lVar2 = lVar10;
        plVar11 = plVar6;
      } while (lVar9 + lVar10 != lVar5);
      for (; lVar2 != 0; lVar2 = lVar2 + -8) {
        local_48 = (long *)*plVar11;
        if (local_48 != (long *)0x0) {
          (**(code **)*local_48)();
        }
        plVar3 = local_48;
        plVar1 = (long *)param_1[1];
        if (plVar1 < (long *)param_1[2]) {
          if (plVar1 == (long *)0x0) {
LAB_00beacf0:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          local_48 = (long *)0x0;
          plVar8 = plVar1 + 1;
          *plVar1 = (long)plVar3;
        }
        else {
          plVar8 = (long *)FUN_00bf4694(param_1,&local_48);
        }
        param_1[1] = plVar8;
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 8))(local_48);
        }
        plVar11 = plVar11 + 1;
      }
      if (plVar6 != (long *)0x0) {
        if (lVar10 != 0) {
          plVar11 = (long *)((long)plVar6 + lVar10);
          lVar10 = -lVar10;
          do {
            plVar11 = plVar11 + -1;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if ((long *)*plVar11 != (long *)0x0) {
              (**(code **)(*(long *)*plVar11 + 8))();
            }
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0);
        }
        operator_delete(plVar6);
      }
    }
  }
  return;
}


// ===== 00bead44  FUN_00bead44 =====

undefined4 FUN_00bead44(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *local_80 [2];
  char cStack_69;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00dbad68 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbad68), iVar1 != 0)) {
    DAT_00dbad60 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbad68);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbad60 != '\0') {
    FUN_0066d348(0x42,DAT_00dbad60,"PeerConnection::GetStats (legacy)",0,0,0,0,0,0);
    local_60 = DAT_00dbad60;
    pcStack_58 = "PeerConnection::GetStats (legacy)";
    local_68 = &local_60;
  }
  if (param_2 == 0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x2a03,
                   "Legacy GetStats - observer is NULL.");
    }
LAB_00beaee4:
    uVar3 = 0;
  }
  else {
    FUN_00bfffec(*(undefined8 *)(param_1 + 0x270),param_4);
    if (param_3 != (long *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x270);
      (**(code **)(*param_3 + 0x28))(local_80,param_3);
      uVar2 = FUN_00c015c0(uVar4,local_80);
      if (cStack_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          (**(code **)(*param_3 + 0x28))(local_80,param_3);
          FUN_00623bb0(&DAT_001f4e90,"../../pc/peer_connection.cc",0x2a62,
                       "Legacy GetStats is called with an invalid track: ",local_80);
          if (cStack_69 < '\0') {
            operator_delete(local_80[0]);
          }
        }
        goto LAB_00beaee4;
      }
    }
    FUN_00ce5e40(param_1 + 0x458,param_2,*(undefined8 *)(param_1 + 0x270),param_3);
    uVar3 = 1;
  }
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return uVar3;
}


// ===== 00beaf74  FUN_00beaf74 =====

void FUN_00beaf74(long param_1,long *param_2)

{
  int iVar1;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  long *local_28;
  
  if (((DAT_00dbad78 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbad78), iVar1 != 0)) {
    DAT_00dbad70 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbad78);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbad70 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbad70,"PeerConnection::GetStats",0,0,0,0,0,0);
    local_50 = DAT_00dbad70;
    pcStack_48 = "PeerConnection::GetStats";
  }
  local_28 = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  FUN_00c79748(param_1 + 0x278,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00beb0c0  FUN_00beb0c0 =====

void FUN_00beb0c0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *local_88;
  long *local_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00dbad88 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbad88), iVar4 != 0)) {
    DAT_00dbad80 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbad88);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbad80 != '\0') {
    FUN_0066d348(0x42,DAT_00dbad80,"PeerConnection::GetStats",0,0,0,0,0,0);
    local_70 = DAT_00dbad80;
    pcStack_68 = "PeerConnection::GetStats";
    local_78 = &local_70;
  }
  if (*param_2 == 0) {
LAB_00beb1cc:
    local_80 = (long *)0x0;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x2e8))(param_1);
    lVar9 = *(long *)(lVar5 + 0x30);
    lVar5 = *(long *)(lVar5 + 0x38);
    uVar16 = lVar5 - lVar9;
    if (uVar16 == 0) goto LAB_00beb1cc;
    if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    plVar6 = (long *)operator_new(uVar16);
    lVar13 = 0;
    do {
      lVar18 = lVar13;
      if ((long *)((long)plVar6 + lVar18) == (long *)0x0) {
LAB_00beb4b0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar7 = *(undefined8 **)(lVar9 + lVar18);
      *(long *)((long)plVar6 + lVar18) = (long)puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)();
      }
      lVar13 = lVar18 + 8;
    } while (lVar9 + lVar13 != lVar5);
    plVar15 = plVar6;
    if (lVar13 != 0) {
LAB_00beb21c:
      lVar9 = *(long *)(*(long *)(*plVar15 + 0x10) + 0x50);
      lVar5 = *(long *)(*(long *)(*plVar15 + 0x10) + 0x58);
      uVar16 = lVar5 - lVar9;
      if (uVar16 != 0) {
        if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bf4944();
        }
        plVar8 = (long *)operator_new(uVar16);
        uVar16 = 0xffffffffffffffff;
        uVar2 = 1;
        plVar17 = plVar8;
        lVar1 = 0;
        do {
          lVar12 = lVar1;
          plVar14 = plVar17;
          uVar11 = uVar2;
          if ((long *)((long)plVar8 + lVar12) == (long *)0x0) goto LAB_00beb4b0;
          puVar7 = *(undefined8 **)(lVar9 + lVar12);
          *(long *)((long)plVar8 + lVar12) = (long)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)();
          }
          lVar1 = lVar12 + 8;
          uVar16 = uVar16 + 1;
          uVar2 = (ulong)((int)uVar11 + 1);
          plVar17 = plVar14 + 1;
        } while (lVar9 + lVar1 != lVar5);
        if (lVar1 != 0) {
          lVar9 = *param_2;
          plVar17 = plVar8;
          if ((~(uint)uVar16 & 3) != 0) {
            uVar11 = uVar11 & 3;
            plVar10 = plVar8;
            do {
              plVar17 = plVar10 + 1;
              lVar5 = *plVar10;
              if (lVar5 == lVar9) goto LAB_00beb338;
              uVar11 = uVar11 - 1;
              plVar10 = plVar17;
            } while (uVar11 != 0);
          }
          if (2 < (uVar16 & 0x1fffffffffffffff)) {
            do {
              lVar5 = *plVar17;
              if ((((lVar5 == lVar9) || (lVar5 = plVar17[1], lVar5 == lVar9)) ||
                  (lVar5 = plVar17[2], lVar5 == lVar9)) || (lVar5 = plVar17[3], lVar5 == lVar9))
              goto LAB_00beb338;
              plVar10 = plVar17 + 3;
              plVar17 = plVar17 + 4;
            } while ((long *)((long)plVar8 + lVar12) != plVar10);
          }
        }
        plVar17 = (long *)0x0;
        goto LAB_00beb350;
      }
      goto LAB_00beb210;
    }
LAB_00beb388:
    plVar17 = (long *)0x0;
LAB_00beb38c:
    if (plVar6 != (long *)0x0) {
      if (lVar13 != 0) {
        lVar13 = -lVar13;
        plVar15 = (long *)((long)plVar6 + lVar18);
        do {
          if (plVar15 == (long *)0x0) {
LAB_00beb4c4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar15 != (long *)0x0) {
            (**(code **)(*(long *)*plVar15 + 8))();
          }
          lVar13 = lVar13 + 8;
          plVar15 = plVar15 + -1;
        } while (lVar13 != 0);
      }
      operator_delete(plVar6);
    }
    local_80 = plVar17;
    if (plVar17 != (long *)0x0) {
      (**(code **)*plVar17)(plVar17);
      bVar3 = false;
      goto LAB_00beb3f0;
    }
  }
  bVar3 = true;
  plVar17 = local_80;
LAB_00beb3f0:
  local_88 = (long *)*param_3;
  if (local_88 != (long *)0x0) {
    (**(code **)*local_88)();
  }
  FUN_00c79c08(param_1 + 0x4f,&local_80,&local_88);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 8))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 8))();
  }
  if (!bVar3) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return;
LAB_00beb338:
  plVar17 = *(long **)(lVar5 + 0x18);
  if (plVar17 != (long *)0x0) {
    (**(code **)*plVar17)(plVar17);
  }
LAB_00beb350:
  if (plVar8 != (long *)0x0) {
    if (lVar1 != 0) {
      lVar12 = -8 - lVar12;
      do {
        if (plVar14 == (long *)0x0) goto LAB_00beb4c4;
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 8))();
        }
        lVar12 = lVar12 + 8;
        plVar14 = plVar14 + -1;
      } while (lVar12 != 0);
    }
    operator_delete(plVar8);
  }
  if (plVar17 != (long *)0x0) goto LAB_00beb38c;
LAB_00beb210:
  bVar3 = (long *)((long)plVar6 + lVar18) == plVar15;
  plVar15 = plVar15 + 1;
  if (bVar3) goto LAB_00beb388;
  goto LAB_00beb21c;
}


// ===== 00beb510  FUN_00beb510 =====

void FUN_00beb510(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long *local_88;
  long *local_80;
  undefined1 **local_78;
  undefined1 *local_70;
  char *pcStack_68;
  
  plVar13 = (long *)&DAT_00dba000;
  plVar14 = param_1;
  plVar16 = param_3;
  plVar17 = param_2;
  if ((DAT_00dbad98 & 1) == 0) goto LAB_00beb92c;
  do {
    local_78 = (undefined1 **)0x0;
    pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    if (*(char *)plVar13[0x1b2] != '\0') {
      FUN_0066d348(0x42,(char *)plVar13[0x1b2],"PeerConnection::GetStats",0,0,0,0,0,0);
      local_70 = (undefined1 *)plVar13[0x1b2];
      pcStack_68 = "PeerConnection::GetStats";
      local_78 = &local_70;
    }
    if (*plVar17 == 0) {
LAB_00beb61c:
      local_80 = (long *)0x0;
      goto LAB_00beb624;
    }
    lVar5 = (**(code **)(*plVar14 + 0x2e8))(plVar14);
    plVar13 = *(long **)(lVar5 + 0x30);
    puVar1 = *(undefined **)(lVar5 + 0x38);
    uVar18 = (long)puVar1 - (long)plVar13;
    if (uVar18 == 0) goto LAB_00beb61c;
    if ((long)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    plVar6 = (long *)operator_new(uVar18);
    lVar5 = 0;
    do {
      lVar20 = lVar5;
      if ((long *)((long)plVar6 + lVar20) == (long *)0x0) {
LAB_00beb900:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar7 = *(undefined8 **)((long)plVar13 + lVar20);
      *(long *)((long)plVar6 + lVar20) = (long)puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)();
      }
      lVar5 = lVar20 + 8;
    } while ((undefined *)((long)plVar13 + lVar5) != puVar1);
    param_1 = plVar14;
    param_3 = plVar6;
    if (lVar5 == 0) {
LAB_00beb7d8:
      plVar19 = (long *)0x0;
LAB_00beb7dc:
      if (plVar6 != (long *)0x0) {
        if (lVar5 != 0) {
          lVar5 = -lVar5;
          plVar13 = (long *)((long)plVar6 + lVar20);
          do {
            if (plVar13 == (long *)0x0) {
LAB_00beb914:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if ((long *)*plVar13 != (long *)0x0) {
              (**(code **)(*(long *)*plVar13 + 8))();
            }
            lVar5 = lVar5 + 8;
            plVar13 = plVar13 + -1;
          } while (lVar5 != 0);
        }
        operator_delete(plVar6);
      }
      local_80 = plVar19;
      if (plVar19 == (long *)0x0) {
LAB_00beb624:
        bVar3 = true;
        plVar19 = local_80;
      }
      else {
        (**(code **)*plVar19)(plVar19);
        bVar3 = false;
      }
      local_88 = (long *)*plVar16;
      if (local_88 != (long *)0x0) {
        (**(code **)*local_88)();
      }
      FUN_00c79c8c(plVar14 + 0x4f,&local_80,&local_88);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 8))();
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 8))();
      }
      if (!bVar3) {
        (**(code **)(*plVar19 + 8))(plVar19);
      }
      if ((local_78 != (undefined1 **)0x0) && (**local_78 != '\0')) {
        FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
      }
      return;
    }
LAB_00beb66c:
    lVar9 = *(long *)(*(long *)(*param_3 + 0x10) + 0x68);
    param_2 = *(long **)(*(long *)(*param_3 + 0x10) + 0x70);
    uVar18 = (long)param_2 - lVar9;
    if (uVar18 == 0) goto LAB_00beb660;
    if (-1 < (long)uVar18) {
      plVar8 = (long *)operator_new(uVar18);
      uVar18 = 0xffffffffffffffff;
      uVar2 = 1;
      plVar19 = plVar8;
      param_1 = (long *)0x0;
      do {
        plVar13 = param_1;
        plVar15 = plVar19;
        uVar12 = uVar2;
        if ((long *)((long)plVar8 + (long)plVar13) == (long *)0x0) goto LAB_00beb900;
        puVar7 = *(undefined8 **)(lVar9 + (long)plVar13);
        *(long *)((long)plVar8 + (long)plVar13) = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)();
        }
        param_1 = plVar13 + 1;
        uVar18 = uVar18 + 1;
        uVar2 = (ulong)((int)uVar12 + 1);
        plVar19 = plVar15 + 1;
      } while ((long *)(lVar9 + (long)param_1) != param_2);
      if (param_1 != (long *)0x0) {
        lVar9 = *plVar17;
        plVar19 = plVar8;
        if ((~(uint)uVar18 & 3) != 0) {
          uVar12 = uVar12 & 3;
          plVar10 = plVar8;
          do {
            plVar19 = plVar10 + 1;
            lVar11 = *plVar10;
            if (lVar11 == lVar9) goto LAB_00beb788;
            uVar12 = uVar12 - 1;
            plVar10 = plVar19;
          } while (uVar12 != 0);
        }
        if (2 < (uVar18 & 0x1fffffffffffffff)) {
          do {
            lVar11 = *plVar19;
            if ((((lVar11 == lVar9) || (lVar11 = plVar19[1], lVar11 == lVar9)) ||
                (lVar11 = plVar19[2], lVar11 == lVar9)) || (lVar11 = plVar19[3], lVar11 == lVar9))
            goto LAB_00beb788;
            plVar10 = plVar19 + 3;
            plVar19 = plVar19 + 4;
          } while ((long *)((undefined *)((long)plVar8 + (long)param_1) + -8) != plVar10);
        }
      }
      plVar19 = (long *)0x0;
      goto LAB_00beb7a0;
    }
    FUN_00bf495c();
LAB_00beb92c:
    iVar4 = FUN_0054fdd4(&DAT_00dbad98);
    plVar14 = param_1;
    plVar16 = param_3;
    plVar17 = param_2;
    if (iVar4 != 0) {
      lVar5 = FUN_0066d328("webrtc");
      plVar13[0x1b2] = lVar5;
      FUN_0054ff1c(&DAT_00dbad98);
    }
  } while( true );
LAB_00beb788:
  plVar19 = *(long **)(lVar11 + 0x20);
  if (plVar19 != (long *)0x0) {
    (**(code **)*plVar19)(plVar19);
  }
LAB_00beb7a0:
  if (plVar8 != (long *)0x0) {
    if (param_1 != (long *)0x0) {
      plVar13 = (long *)(-8 - (long)plVar13);
      do {
        if (plVar15 == (long *)0x0) goto LAB_00beb914;
        if ((long *)*plVar15 != (long *)0x0) {
          (**(code **)(*(long *)*plVar15 + 8))();
        }
        plVar13 = plVar13 + 1;
        plVar15 = plVar15 + -1;
      } while (plVar13 != (long *)0x0);
    }
    operator_delete(plVar8);
  }
  if (plVar19 != (long *)0x0) goto LAB_00beb7dc;
LAB_00beb660:
  bVar3 = (long *)((long)plVar6 + lVar20) == param_3;
  param_3 = param_3 + 1;
  if (bVar3) goto LAB_00beb7d8;
  goto LAB_00beb66c;
}


// ===== 00beb960  FUN_00beb960 =====

void FUN_00beb960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00beb970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4a8) + 0x10))();
  return;
}


// ===== 00beb974  FUN_00beb974 =====

undefined4 FUN_00beb974(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}


// ===== 00beb980  FUN_00beb980 =====

undefined4 FUN_00beb980(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}


// ===== 00beb98c  FUN_00beb98c =====

undefined4 FUN_00beb98c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}


// ===== 00beb998  FUN_00beb998 =====

undefined4 FUN_00beb998(long param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}


// ===== 00beb9a4  FUN_00beb9a4 =====

uint FUN_00beb9a4(long *param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  lVar3 = (**(code **)(*param_1 + 0xe0))();
  if (((lVar3 == 0) && (lVar3 = (**(code **)(*param_1 + 0xf0))(param_1), lVar3 == 0)) ||
     (lVar1 = *(long *)(*(long *)(lVar3 + 0x38) + 0x18),
     lVar1 == *(long *)(*(long *)(lVar3 + 0x38) + 0x20))) {
    uVar4 = 0;
    iVar5 = 0;
  }
  else {
    piVar6 = *(int **)(lVar1 + 0x18);
    piVar2 = *(int **)(lVar1 + 0x20);
    if (piVar6 == piVar2) {
      uVar4 = 0;
    }
    else {
      do {
        if (*(char *)((long)piVar6 + 0x17) < '\0') {
          piVar8 = *(int **)piVar6;
          if (*(long *)(piVar6 + 2) == 7) goto LAB_00beba3c;
        }
        else {
          piVar8 = piVar6;
          if (*(char *)((long)piVar6 + 0x17) == '\a') {
LAB_00beba3c:
            piVar7 = piVar6;
            if (*piVar8 == 0x63697274 && *(int *)((long)piVar8 + 3) == 0x656c6b63) break;
          }
        }
        piVar6 = piVar6 + 6;
        piVar7 = piVar2;
      } while (piVar6 != piVar2);
      uVar4 = (uint)(piVar7 != piVar2);
    }
    iVar5 = 1;
  }
  return uVar4 | iVar5 << 8;
}


// ===== 00beba8c  FUN_00beba8c =====

/* WARNING: Removing unreachable block (ram,0x00bebeb4) */

void FUN_00beba8c(int *param_1,long *param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int local_138 [2];
  void *local_130;
  undefined8 uStack_128;
  long local_120;
  undefined4 local_118;
  undefined3 uStack_114;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  long *local_e8;
  byte local_e0;
  undefined6 uStack_df;
  undefined4 uStack_d9;
  undefined4 local_d4;
  char *local_c0;
  ulong uStack_b8;
  int *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  long *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined4 uStack_84;
  undefined1 *local_80;
  char **local_78;
  char *local_70;
  char *pcStack_68;
  
  if (((DAT_00dbada8 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00dbada8), iVar8 != 0)) {
    DAT_00dbada0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbada8);
  }
  local_78 = (char **)0x0;
  pcStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbada0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbada0,"PeerConnection::CreateDataChannel",0,0,0,0,0,0);
    local_70 = DAT_00dbada0;
    pcStack_68 = "PeerConnection::CreateDataChannel";
    local_78 = &local_70;
  }
  uVar9 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if ((uVar9 & 1) == 0) {
    uVar7 = FUN_00c984ec(param_2 + 0x7b);
    uStack_87 = 0xaa;
    uStack_85 = 0xaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (char *)0xaaaaaa00aaaa0100;
    uStack_b8 = 0xaaaaaa00aaaaaa00;
    local_b0 = (int *)0xaaaaaaaaaaaaaa00;
    local_a0 = (undefined1 *)0x0;
    local_98 = (long *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_90 = 0xaaaaaa00;
    uStack_8c = 0xffffffff;
    uStack_88 = 0;
    uStack_86 = 0;
    uStack_84 = 0;
    if (param_4 != 0) {
      FUN_00c9bca4(local_110,param_4);
      local_b0 = (int *)CONCAT71(local_b0._1_7_,local_100._0_1_);
      uStack_b8 = local_110._8_8_;
      local_c0 = (char *)local_110._0_8_;
      local_a0 = uStack_f0;
      puStack_a8 = puStack_f8;
      local_98 = local_e8;
      local_90 = (undefined4)CONCAT61(uStack_df,local_e0);
      uStack_8c = CONCAT13((char)uStack_d9,(int3)((uint6)uStack_df >> 0x18));
      uStack_88 = (undefined1)((uint)uStack_d9 >> 8);
      uStack_87 = (undefined1)((uint)uStack_d9 >> 0x10);
      uStack_86 = (undefined1)((uint)uStack_d9 >> 0x18);
      uStack_84 = local_d4;
    }
    uVar11 = FUN_00cb6af4(param_2[0x95]);
    local_80._0_5_ = (undefined5)uVar11;
    local_e0 = 0xaa;
    uStack_df = 0xaaaaaaaaaaaa;
    uStack_d9 = CONCAT31(uStack_d9._1_3_,0xaa);
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    local_e8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    uStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
    uVar9 = param_3[1];
    puVar12 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar9 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar12 = param_3;
    }
    local_110._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
    local_110._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00c9a4f4(local_110,param_2 + 0x7b,puVar12,uVar9,&local_c0);
    if (local_110._0_4_ == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
      plVar6 = local_e8;
      if ((local_e0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      local_e8 = (long *)0x0;
      if (((int)param_2[0x2d] == 1) || ((uVar7 & 1) == 0 && (int)param_2[0x2d] == 0)) {
        FUN_00ca2f64(param_2[0x95]);
      }
      (**(code **)(*param_2 + 0x328))(param_2,4);
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0x26) = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined8 *)((long)param_1 + 0x1d) = 0;
      *(long **)(param_1 + 10) = plVar6;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    else {
      local_138[0] = local_110._0_4_;
      if ((long)puStack_f8 < 0) {
        FUN_005478d8(&local_130,local_110._8_8_,local_100);
      }
      else {
        puVar12 = (undefined8 *)((ulong)local_110 | 8);
        uStack_128 = puVar12[1];
        local_130 = (void *)*puVar12;
        local_120 = puVar12[2];
      }
      local_118 = (int)uStack_f0;
      *param_1 = local_138[0];
      uStack_114 = (undefined3)((ulong)uStack_f0 >> 0x20);
      if (local_120 < 0) {
        FUN_005478d8(param_1 + 2,local_130,uStack_128);
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[8] = local_118;
        *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_114,local_118._3_1_);
        *(undefined1 *)(param_1 + 0xc) = 0;
        if (local_120 < 0) {
          operator_delete(local_130);
        }
      }
      else {
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined8 *)(param_1 + 4) = uStack_128;
        *(void **)(param_1 + 2) = local_130;
        *(long *)(param_1 + 6) = local_120;
        param_1[8] = local_118;
        *(undefined4 *)((long)param_1 + 0x23) = uStack_f0._3_4_;
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
    }
    if (((local_e0 & 1) != 0) && (local_e8 != (long *)0x0)) {
      (**(code **)(*local_e8 + 8))();
    }
    if ((long)puStack_f8 < 0) {
      operator_delete((void *)local_110._8_8_);
    }
  }
  else {
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) == 0) {
      local_c0 = "../../pc/peer_connection.cc";
      uStack_b8 = 0x2e8b;
      local_b0 = local_138;
      local_110 = FUN_005eceec(6);
      FUN_00623bb0(&DAT_00255ab0,local_c0,uStack_b8 & 0xffffffff,
                   "CreateDataChannelOrError: PeerConnection is closed.",&DAT_001a2df6,local_110,
                   &DAT_001ca519);
    }
    pcVar10 = (char *)operator_new(0x38);
    uVar5 = s_CreateDataChannelOrError__PeerCo_00199445._40_8_;
    uVar4 = s_CreateDataChannelOrError__PeerCo_00199445._32_8_;
    uVar3 = s_CreateDataChannelOrError__PeerCo_00199445._24_8_;
    uVar2 = s_CreateDataChannelOrError__PeerCo_00199445._16_8_;
    uVar1 = s_CreateDataChannelOrError__PeerCo_00199445._8_8_;
    uVar11 = s_CreateDataChannelOrError__PeerCo_00199445._0_8_;
    if (pcVar10 + 0x33 < pcVar10) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar10 < "reateDataChannelOrError: PeerConnection is closed.") &&
       ("CreateDataChannelOrError: PeerConnection is closed." < pcVar10 + 0x33)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    pcVar10[0x2f] = 's';
    pcVar10[0x30] = 'e';
    pcVar10[0x31] = 'd';
    pcVar10[0x32] = '.';
    *(undefined8 *)(pcVar10 + 8) = uVar1;
    *(undefined8 *)pcVar10 = uVar11;
    *(undefined8 *)(pcVar10 + 0x18) = uVar3;
    *(undefined8 *)(pcVar10 + 0x10) = uVar2;
    *(undefined8 *)(pcVar10 + 0x28) = uVar5;
    *(undefined8 *)(pcVar10 + 0x20) = uVar4;
    pcVar10[0x33] = '\0';
    *param_1 = 6;
    FUN_005478d8(param_1 + 2,pcVar10,0x33);
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    operator_delete(pcVar10);
  }
  if ((local_78 != (char **)0x0) && (**local_78 != '\0')) {
    FUN_0066d348(0x45,*local_78,local_78[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00bebf8c  FUN_00bebf8c =====

void FUN_00bebf8c(long param_1)

{
  FUN_00ca2ec0(*(undefined8 *)(param_1 + 0x4a8));
  return;
}


// ===== 00bebf98  FUN_00bebf98 =====

void FUN_00bebf98(long param_1)

{
  FUN_00ca30b4(*(undefined8 *)(param_1 + 0x4a8));
  return;
}


// ===== 00bebfa4  FUN_00bebfa4 =====

void FUN_00bebfa4(long param_1)

{
  FUN_00cb1788(*(undefined8 *)(param_1 + 0x4a8));
  return;
}


// ===== 00bebfb0  FUN_00bebfb0 =====

void FUN_00bebfb0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *local_80;
  undefined8 uStack_78;
  code *local_70;
  code *pcStack_68;
  long local_58;
  long lStack_50;
  undefined1 uStack_41;
  undefined1 *local_28;
  
  local_58 = param_3;
  lStack_50 = param_2;
  uVar1 = FUN_00bec0ac(&lStack_50,&local_58,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)operator_new(0x18);
    lVar4 = *(long *)(param_1 + 0x40);
    *plVar2 = param_1;
    plVar2[1] = param_3;
    plVar2[2] = param_2;
    uStack_78 = 0x18;
    local_70 = FUN_005ea56c;
    pcStack_68 = FUN_00bfc094;
    local_80 = plVar2;
    uVar1 = FUN_007e18fc(*(undefined8 *)(lVar4 + 0x38));
    if ((uVar1 & 1) == 0) {
      plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
      local_28 = (undefined1 *)&local_80;
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_28,FUN_00bff02c,&uStack_41);
      pcVar3 = local_70;
    }
    else {
      FUN_00ca32e8(*(undefined8 *)(*plVar2 + 0x4a8),plVar2[2],plVar2[1]);
      pcVar3 = FUN_005ea56c;
    }
    (*pcVar3)(0,&local_80,&local_80);
  }
  return;
}


// ===== 00bec0ac  FUN_00bec0ac =====

undefined8 FUN_00bec0ac(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulong uVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long *local_80;
  undefined4 local_78;
  code *local_70;
  code *pcStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 uStack_53;
  undefined1 local_52;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0xcf3,"Observer is NULL.");
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_00afbfb8();
      return 1;
    }
    pcVar8 = (char *)operator_new(0x20);
    uVar4 = s_SessionDescription_is_NULL__001c148c._19_8_;
    uVar3 = s_SessionDescription_is_NULL__001c148c._0_8_;
    if (pcVar8 + 0x1b < pcVar8) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar8 < "essionDescription is NULL.") && ("SessionDescription is NULL." < pcVar8 + 0x1b))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    uVar1 = CONCAT53(s_SessionDescription_is_NULL__001c148c._11_5_,
                     s_SessionDescription_is_NULL__001c148c._8_3_);
    uVar2 = CONCAT35(s_SessionDescription_is_NULL__001c148c._16_3_,
                     s_SessionDescription_is_NULL__001c148c._11_5_);
    pcVar8[0x1b] = '\0';
    *(undefined8 *)(pcVar8 + 8) = uVar1;
    *(undefined8 *)pcVar8 = uVar3;
    *(undefined8 *)(pcVar8 + 0x13) = uVar4;
    *(undefined8 *)(pcVar8 + 0xb) = uVar2;
    local_80 = plVar10;
    (**(code **)*plVar10)(plVar10);
    local_78 = 3;
    FUN_005478d8(&local_70,pcVar8,0x1b);
    cVar6 = cStack_59;
    uVar5 = local_78;
    plVar10 = local_80;
    local_58 = 0;
    local_54 = 0;
    local_52 = 0;
    plVar9 = (long *)operator_new(0x30);
    local_80 = (long *)0x0;
    *plVar9 = (long)plVar10;
    *(undefined4 *)(plVar9 + 1) = uVar5;
    if (cVar6 < '\0') {
      FUN_005478d8(plVar9 + 2,local_70,pcStack_68);
      *(undefined4 *)(plVar9 + 5) = local_58;
      *(uint *)((long)plVar9 + 0x2b) =
           CONCAT13(local_52,CONCAT12(uStack_53,CONCAT11(local_54,local_58._3_1_)));
      if (cStack_59 < '\0') {
        operator_delete(local_70);
      }
    }
    else {
      *(undefined4 *)(plVar9 + 5) = 0;
      *(undefined1 *)((long)plVar9 + 0x2c) = 0;
      plVar9[3] = (long)pcStack_68;
      plVar9[2] = (long)local_70;
      plVar9[4] = CONCAT17(cStack_59,local_60);
      *(undefined1 *)((long)plVar9 + 0x2e) = 0;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    local_70 = FUN_00bfc008;
    pcStack_68 = FUN_00bfbf68;
    local_80 = plVar9;
    (**(code **)(*param_3 + 8))(param_3,&local_80,&uStack_31,&uStack_32);
    (*local_70)(0,&local_80,&local_80);
    operator_delete(pcVar8);
  }
  return 0;
}


// ===== 00bec2c8  FUN_00bec2c8 =====

void FUN_00bec2c8(long param_1,void *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *local_a0 [2];
  code *local_90;
  code *pcStack_88;
  long *local_80;
  undefined4 local_78;
  code *local_70;
  code *pcStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 uStack_53;
  undefined1 local_52;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  plVar12 = (long *)*param_3;
  if (plVar12 == (long *)0x0) {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0xcf3,"Observer is NULL.");
    }
    if (param_2 != (void *)0x0) {
      FUN_00afbecc(param_2);
      operator_delete(param_2);
      return;
    }
  }
  else if (param_2 == (void *)0x0) {
    plVar11 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
    pcVar7 = (char *)operator_new(0x20);
    uVar3 = s_SessionDescription_is_NULL__001c148c._19_8_;
    uVar10 = s_SessionDescription_is_NULL__001c148c._0_8_;
    if (pcVar7 + 0x1b < pcVar7) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar7 < "essionDescription is NULL.") && ("SessionDescription is NULL." < pcVar7 + 0x1b))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    uVar1 = CONCAT53(s_SessionDescription_is_NULL__001c148c._11_5_,
                     s_SessionDescription_is_NULL__001c148c._8_3_);
    uVar2 = CONCAT35(s_SessionDescription_is_NULL__001c148c._16_3_,
                     s_SessionDescription_is_NULL__001c148c._11_5_);
    pcVar7[0x1b] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar1;
    *(undefined8 *)pcVar7 = uVar10;
    *(undefined8 *)(pcVar7 + 0x13) = uVar3;
    *(undefined8 *)(pcVar7 + 0xb) = uVar2;
    *param_3 = 0;
    local_78 = 3;
    local_80 = plVar12;
    FUN_005478d8(&local_70,pcVar7,0x1b);
    cVar5 = cStack_59;
    uVar4 = local_78;
    plVar12 = local_80;
    local_58 = 0;
    local_54 = 0;
    local_52 = 0;
    plVar8 = (long *)operator_new(0x30);
    local_80 = (long *)0x0;
    *plVar8 = (long)plVar12;
    *(undefined4 *)(plVar8 + 1) = uVar4;
    if (cVar5 < '\0') {
      FUN_005478d8(plVar8 + 2,local_70,pcStack_68);
      *(undefined4 *)(plVar8 + 5) = local_58;
      *(uint *)((long)plVar8 + 0x2b) =
           CONCAT13(local_52,CONCAT12(uStack_53,CONCAT11(local_54,local_58._3_1_)));
      if (cStack_59 < '\0') {
        operator_delete(local_70);
      }
    }
    else {
      *(undefined4 *)(plVar8 + 5) = 0;
      *(undefined1 *)((long)plVar8 + 0x2c) = 0;
      plVar8[3] = (long)pcStack_68;
      plVar8[2] = (long)local_70;
      plVar8[4] = CONCAT17(cStack_59,local_60);
      *(undefined1 *)((long)plVar8 + 0x2e) = 0;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    local_70 = FUN_00bfc14c;
    pcStack_68 = FUN_00bfc0ac;
    local_80 = plVar8;
    (**(code **)(*plVar11 + 8))(plVar11,&local_80,&uStack_31,&uStack_32);
    (*local_70)(0,&local_80,&local_80);
    operator_delete(pcVar7);
  }
  else {
    FUN_00afbfb8(param_2);
    lVar13 = *param_3;
    *param_3 = 0;
    plVar12 = (long *)operator_new(0x18);
    lVar9 = *(long *)(param_1 + 0x40);
    *plVar12 = param_1;
    plVar12[1] = (long)param_2;
    plVar12[2] = lVar13;
    local_90 = FUN_00bfc24c;
    pcStack_88 = FUN_00bfc1d8;
    local_a0[0] = plVar12;
    uVar6 = FUN_007e18fc(*(undefined8 *)(lVar9 + 0x38));
    if ((uVar6 & 1) == 0) {
      plVar12 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
      local_80 = (long *)local_a0;
      (**(code **)(*plVar12 + 0x60))(plVar12,&local_80,FUN_00bff02c,&uStack_31);
    }
    else {
      lVar9 = plVar12[1];
      local_80 = (long *)plVar12[2];
      uVar10 = *(undefined8 *)(*plVar12 + 0x4a8);
      plVar12[1] = 0;
      if (local_80 != (long *)0x0) {
        (**(code **)*local_80)();
      }
      FUN_00ca3528(uVar10,lVar9,&local_80);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 8))();
      }
    }
    (*local_90)(0,local_a0,local_a0);
  }
  return;
}


// ===== 00bec5e0  FUN_00bec5e0 =====

void FUN_00bec5e0(long param_1)

{
  FUN_00ca3768(*(undefined8 *)(param_1 + 0x4a8));
  return;
}


// ===== 00bec5ec  FUN_00bec5ec =====

void FUN_00bec5ec(long param_1,long *param_2)

{
  undefined8 uVar1;
  long *local_8;
  
  local_8 = (long *)*param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x4a8);
  if (local_8 != (long *)0x0) {
    (**(code **)*local_8)();
  }
  FUN_00ca3890(uVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00bec64c  FUN_00bec64c =====

void FUN_00bec64c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *local_80;
  undefined8 uStack_78;
  code *local_70;
  code *pcStack_68;
  long local_58;
  long lStack_50;
  undefined1 uStack_41;
  undefined1 *local_28;
  
  local_58 = param_3;
  lStack_50 = param_2;
  uVar1 = FUN_00bec0ac(&lStack_50,&local_58,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)operator_new(0x18);
    lVar4 = *(long *)(param_1 + 0x40);
    *plVar2 = param_1;
    plVar2[1] = param_3;
    plVar2[2] = param_2;
    uStack_78 = 0x18;
    local_70 = FUN_005ea56c;
    pcStack_68 = FUN_00bfc2e0;
    local_80 = plVar2;
    uVar1 = FUN_007e18fc(*(undefined8 *)(lVar4 + 0x38));
    if ((uVar1 & 1) == 0) {
      plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
      local_28 = (undefined1 *)&local_80;
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_28,FUN_00bff02c,&uStack_41);
      pcVar3 = local_70;
    }
    else {
      FUN_00ca7bec(*(undefined8 *)(*plVar2 + 0x4a8),plVar2[2],plVar2[1]);
      pcVar3 = FUN_005ea56c;
    }
    (*pcVar3)(0,&local_80,&local_80);
  }
  return;
}


// ===== 00bec748  FUN_00bec748 =====

void FUN_00bec748(long param_1,void *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *local_a0 [2];
  code *local_90;
  code *pcStack_88;
  long *local_80;
  undefined4 local_78;
  code *local_70;
  code *pcStack_68;
  undefined7 local_60;
  char cStack_59;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 uStack_53;
  undefined1 local_52;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  plVar12 = (long *)*param_3;
  if (plVar12 == (long *)0x0) {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0xcf3,"Observer is NULL.");
    }
    if (param_2 != (void *)0x0) {
      FUN_00afbecc(param_2);
      operator_delete(param_2);
      return;
    }
  }
  else if (param_2 == (void *)0x0) {
    plVar11 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
    pcVar7 = (char *)operator_new(0x20);
    uVar3 = s_SessionDescription_is_NULL__001c148c._19_8_;
    uVar10 = s_SessionDescription_is_NULL__001c148c._0_8_;
    if (pcVar7 + 0x1b < pcVar7) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar7 < "essionDescription is NULL.") && ("SessionDescription is NULL." < pcVar7 + 0x1b))
    {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    uVar1 = CONCAT53(s_SessionDescription_is_NULL__001c148c._11_5_,
                     s_SessionDescription_is_NULL__001c148c._8_3_);
    uVar2 = CONCAT35(s_SessionDescription_is_NULL__001c148c._16_3_,
                     s_SessionDescription_is_NULL__001c148c._11_5_);
    pcVar7[0x1b] = '\0';
    *(undefined8 *)(pcVar7 + 8) = uVar1;
    *(undefined8 *)pcVar7 = uVar10;
    *(undefined8 *)(pcVar7 + 0x13) = uVar3;
    *(undefined8 *)(pcVar7 + 0xb) = uVar2;
    *param_3 = 0;
    local_78 = 3;
    local_80 = plVar12;
    FUN_005478d8(&local_70,pcVar7,0x1b);
    cVar5 = cStack_59;
    uVar4 = local_78;
    plVar12 = local_80;
    local_58 = 0;
    local_54 = 0;
    local_52 = 0;
    plVar8 = (long *)operator_new(0x30);
    local_80 = (long *)0x0;
    *plVar8 = (long)plVar12;
    *(undefined4 *)(plVar8 + 1) = uVar4;
    if (cVar5 < '\0') {
      FUN_005478d8(plVar8 + 2,local_70,pcStack_68);
      *(undefined4 *)(plVar8 + 5) = local_58;
      *(uint *)((long)plVar8 + 0x2b) =
           CONCAT13(local_52,CONCAT12(uStack_53,CONCAT11(local_54,local_58._3_1_)));
      if (cStack_59 < '\0') {
        operator_delete(local_70);
      }
    }
    else {
      *(undefined4 *)(plVar8 + 5) = 0;
      *(undefined1 *)((long)plVar8 + 0x2c) = 0;
      plVar8[3] = (long)pcStack_68;
      plVar8[2] = (long)local_70;
      plVar8[4] = CONCAT17(cStack_59,local_60);
      *(undefined1 *)((long)plVar8 + 0x2e) = 0;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 8))();
    }
    local_70 = FUN_00bfc398;
    pcStack_68 = FUN_00bfc2f8;
    local_80 = plVar8;
    (**(code **)(*plVar11 + 8))(plVar11,&local_80,&uStack_31,&uStack_32);
    (*local_70)(0,&local_80,&local_80);
    operator_delete(pcVar7);
  }
  else {
    FUN_00afbfb8(param_2);
    lVar13 = *param_3;
    *param_3 = 0;
    plVar12 = (long *)operator_new(0x18);
    lVar9 = *(long *)(param_1 + 0x40);
    *plVar12 = param_1;
    plVar12[1] = (long)param_2;
    plVar12[2] = lVar13;
    local_90 = FUN_00bfc498;
    pcStack_88 = FUN_00bfc424;
    local_a0[0] = plVar12;
    uVar6 = FUN_007e18fc(*(undefined8 *)(lVar9 + 0x38));
    if ((uVar6 & 1) == 0) {
      plVar12 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
      local_80 = (long *)local_a0;
      (**(code **)(*plVar12 + 0x60))(plVar12,&local_80,FUN_00bff02c,&uStack_31);
    }
    else {
      lVar9 = plVar12[1];
      local_80 = (long *)plVar12[2];
      uVar10 = *(undefined8 *)(*plVar12 + 0x4a8);
      plVar12[1] = 0;
      if (local_80 != (long *)0x0) {
        (**(code **)*local_80)();
      }
      FUN_00ca7e2c(uVar10,lVar9,&local_80);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 8))();
      }
    }
    (*local_90)(0,local_a0,local_a0);
  }
  return;
}


// ===== 00beca60  FUN_00beca60 =====

void FUN_00beca60(undefined8 param_1,long param_2)

{
  FUN_00b1e168(param_1,param_2 + 0x78);
  return;
}


// ===== 00beca70  FUN_00beca70 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00beca70(int *param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *******pppppppuVar7;
  undefined1 *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *pvVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  undefined1 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined1 uStack_549;
  void *local_548;
  void *local_540;
  undefined8 local_538;
  undefined1 local_530 [8];
  ulong uStack_528;
  undefined1 *local_520;
  undefined1 *puStack_518;
  undefined8 local_510;
  undefined1 *local_508;
  undefined1 *local_500;
  undefined1 *puStack_4f8;
  undefined1 *local_4f0;
  undefined1 *puStack_4e8;
  undefined1 *local_4e0;
  undefined1 *puStack_4d8;
  undefined1 *puStack_4d0;
  undefined1 *puStack_4c8;
  undefined1 *local_4c0;
  undefined1 *puStack_4b8;
  undefined1 *local_4b0;
  undefined1 *puStack_4a8;
  undefined1 *puStack_4a0;
  undefined1 *puStack_498;
  undefined1 *local_490;
  undefined1 *puStack_488;
  undefined1 *puStack_480;
  undefined1 *puStack_478;
  undefined8 local_470;
  undefined1 *puStack_468;
  undefined1 *puStack_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 *puStack_440;
  undefined1 *puStack_438;
  undefined1 *local_430;
  undefined1 *puStack_428;
  undefined1 *puStack_420;
  undefined1 *puStack_418;
  undefined1 *local_410;
  undefined1 *puStack_408;
  undefined1 *puStack_400;
  undefined1 *puStack_3f8;
  undefined1 *local_3f0;
  undefined1 *puStack_3e8;
  undefined1 *puStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 *local_3d0;
  undefined1 *puStack_3c8;
  undefined1 *puStack_3c0;
  undefined1 *puStack_3b8;
  undefined1 *local_3b0;
  undefined1 *puStack_3a8;
  undefined1 *puStack_3a0;
  undefined1 *puStack_398;
  undefined1 *local_390;
  undefined1 *puStack_388;
  undefined1 *puStack_380;
  undefined1 *local_378;
  undefined1 *local_370;
  char *pcStack_368;
  undefined1 *local_360;
  undefined5 uStack_358;
  undefined2 uStack_353;
  uint uStack_351;
  undefined1 uStack_34d;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  undefined1 uStack_34a;
  undefined1 uStack_349;
  char **local_348;
  char *local_340;
  char *pcStack_338;
  undefined1 local_330 [16];
  undefined8 local_320;
  char ***pppcStack_318;
  void **local_310;
  undefined1 **ppuStack_308;
  undefined1 local_300;
  char **local_250;
  char *pcStack_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined1 *local_230;
  undefined1 local_220 [8];
  undefined8 *******pppppppuStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 *puStack_178;
  undefined8 local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 local_88 [20];
  byte local_74 [20];
  
  if (((DAT_00dbadb8 & 1) == 0) && (iVar18 = FUN_0054fdd4(&DAT_00dbadb8), iVar18 != 0)) {
    DAT_00dbadb0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbadb8);
  }
  local_348 = (char **)0x0;
  pcStack_338 = &DAT_aaaaaaaaaaaaaaaa;
  local_340 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbadb0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbadb0,"PeerConnection::SetConfiguration",0,0,0,0,0,0);
    local_340 = DAT_00dbadb0;
    pcStack_338 = "PeerConnection::SetConfiguration";
    local_348 = &local_340;
  }
  uVar19 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if ((uVar19 & 1) != 0) {
    uVar19 = FUN_004249b0();
    if ((uVar19 & 1) == 0) {
      local_530 = (undefined1  [8])0x1c9f9c;
      uStack_528 = 0x325b;
      local_520 = local_330;
      _local_220 = FUN_005eceec(6);
      FUN_00623bb0(&DAT_00255ab0,local_530,uStack_528 & 0xffffffff,
                   "SetConfiguration: PeerConnection is closed.",&DAT_001a2df6,local_220,
                   &DAT_001ca519);
    }
    FUN_00b0092c(param_1,6,"SetConfiguration: PeerConnection is closed.",0x2b);
    goto joined_r0x00becd48;
  }
  lVar20 = (**(code **)(*param_2 + 200))(param_2);
  uVar26 = *(uint *)(param_3 + 8);
  uStack_34d = 0xaa;
  uStack_34c = 0xaa;
  uStack_34b = 0xaa;
  uStack_34a = 0xaa;
  uStack_349 = 0xaa;
  pcStack_368 = &DAT_aaaaaaaaaaaaaaaa;
  local_370 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_358 = 0xaaaaaaaaaa;
  uStack_353 = 0xaaaa;
  uStack_351 = 0xaaaaaaaa;
  local_360 = &DAT_aaaaaaaaaaaaaaaa;
  if (lVar20 == 0) {
    uVar19 = 0;
    if (uVar26 < 0x10000) goto LAB_00becc28;
LAB_00becbf0:
    uStack_34a = 0;
    local_370 = (undefined1 *)0xaaaaaaaa00000004;
    local_360 = (undefined1 *)0x0;
    uStack_358 = 0;
    pcStack_368 = (char *)0x0;
    uStack_353 = 0;
    uStack_351 = 0;
    uStack_34d = 0;
    uStack_34c = 0;
    *param_1 = 4;
LAB_00becd1c:
    puVar23 = (undefined8 *)((ulong)&local_370 | 8);
    uVar27 = *puVar23;
    uVar24 = puVar23[2];
    *(undefined8 *)(param_1 + 4) = puVar23[1];
    *(undefined8 *)(param_1 + 2) = uVar27;
    *(undefined8 *)(param_1 + 6) = uVar24;
LAB_00becd2c:
    auVar9._8_8_ = pppppppuStack_218;
    auVar9._0_8_ = local_220;
    param_1[8] = CONCAT13(uStack_34d,uStack_351._1_3_);
    *(uint *)((long)param_1 + 0x23) =
         CONCAT13(uStack_34a,CONCAT12(uStack_34b,CONCAT11(uStack_34c,uStack_34d)));
    auVar10 = _local_530;
  }
  else {
    uVar19 = (ulong)*(uint *)(param_2 + 0x17) | 0x100000000;
    if (0xffff < uVar26) goto LAB_00becbf0;
LAB_00becc28:
    if ((uVar19 >> 0x20 != 0) && (uVar26 != (uint)uVar19)) {
      uVar19 = FUN_004249b0();
      if ((uVar19 & 1) == 0) {
        _local_530 = FUN_005eceec(7);
        FUN_00623bb0(&DAT_00255ab0,"../../pc/peer_connection.cc",0x8cb,
                     "Can\'t change candidate pool size after calling SetLocalDescription.",
                     &DAT_001a2df6,local_530,&DAT_001ca519);
      }
      local_370 = (undefined1 *)CONCAT44(local_370._4_4_,7);
      pcStack_368 = (char *)operator_new(0x48);
      uVar12 = s_Can_t_change_candidate_pool_size_001b5bb6._24_8_;
      uVar11 = s_Can_t_change_candidate_pool_size_001b5bb6._16_8_;
      uVar27 = s_Can_t_change_candidate_pool_size_001b5bb6._8_8_;
      uVar24 = s_Can_t_change_candidate_pool_size_001b5bb6._0_8_;
      uStack_358 = (undefined5)_UNK_001f2168;
      uStack_353 = (undefined2)((ulong)_UNK_001f2168 >> 0x28);
      uStack_351._0_1_ = (byte)((ulong)_UNK_001f2168 >> 0x38);
      local_360 = _DAT_001f2160;
      if (pcStack_368 + 0x43 < pcStack_368) {
LAB_00bed710:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((pcStack_368 < "an\'t change candidate pool size after calling SetLocalDescription.") &&
         ("Can\'t change candidate pool size after calling SetLocalDescription." <
          pcStack_368 + 0x43)) {
LAB_00bed724:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      pcStack_368[0x43] = '\0';
      pcStack_368[0x3f] = 'i';
      pcStack_368[0x40] = 'o';
      pcStack_368[0x41] = 'n';
      pcStack_368[0x42] = '.';
      *(undefined8 *)(pcStack_368 + 8) = uVar27;
      *(undefined8 *)pcStack_368 = uVar24;
      *(undefined8 *)(pcStack_368 + 0x18) = uVar12;
      *(undefined8 *)(pcStack_368 + 0x10) = uVar11;
      uVar11 = s_Can_t_change_candidate_pool_size_001b5bb6._56_8_;
      uVar27 = s_Can_t_change_candidate_pool_size_001b5bb6._48_8_;
      uVar24 = s_Can_t_change_candidate_pool_size_001b5bb6._32_8_;
      uStack_351 = (uint)(byte)uStack_351;
      uStack_34d = 0;
      uStack_34c = 0;
      *(undefined8 *)(pcStack_368 + 0x28) = s_Can_t_change_candidate_pool_size_001b5bb6._40_8_;
      *(undefined8 *)(pcStack_368 + 0x20) = uVar24;
      *(undefined8 *)(pcStack_368 + 0x38) = uVar11;
      *(undefined8 *)(pcStack_368 + 0x30) = uVar27;
      uStack_34a = 0;
      iVar18 = 7;
LAB_00becd04:
      *param_1 = iVar18;
      if (-1 < (char)(byte)uStack_351) goto LAB_00becd1c;
      FUN_005478d8(param_1 + 2,pcStack_368,local_360);
      goto LAB_00becd2c;
    }
    FUN_005ecd48(&local_370);
    iVar18 = (int)local_370;
    if ((int)local_370 != 0) goto LAB_00becd04;
    if ((lVar20 == 0) || (uVar19 = FUN_007ec14c(param_3 + 0x1f,param_2 + 0x2e), (uVar19 & 1) == 0))
    {
      puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
      local_490 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_480 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
      local_470 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_460 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
      local_450 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_438 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_440 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_428 = &DAT_aaaaaaaaaaaaaaaa;
      local_430 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_420 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_408 = &DAT_aaaaaaaaaaaaaaaa;
      local_410 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3f8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_400 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_398 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_388 = &DAT_aaaaaaaaaaaaaaaa;
      local_390 = &DAT_aaaaaaaaaaaaaaaa;
      local_378 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_380 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_518 = &DAT_aaaaaaaaaaaaaaaa;
      local_520 = &DAT_aaaaaaaaaaaaaaaa;
      local_508 = &DAT_aaaaaaaaaaaaaaaa;
      local_510 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_500 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4d0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_528 = (ulong)&DAT_aaaaaaaaaaaaaaaa;
      local_530 = (undefined1  [8])&DAT_aaaaaaaaaaaaaaaa;
      puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_200 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
      local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_188 = &DAT_aaaaaaaaaaaaaaaa;
      local_190 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
      local_180 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      local_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      local_d8 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      pppppppuStack_218 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
      local_220 = (undefined1  [8])&DAT_aaaaaaaaaaaaaaaa;
      FUN_00b1e168(local_220,param_2 + 0xf);
      puStack_208 = (undefined1 *)CONCAT44(puStack_208._4_4_,(int)param_3[3]);
      puStack_128 = (undefined1 *)CONCAT35(puStack_128._5_3_,(int5)param_3[0x1f]);
      if ((long *)local_220 == param_3) {
        local_98 = (undefined1 *)CONCAT71(local_98._1_7_,(char)param_3[0x31]);
      }
      else {
        FUN_005d4868(&puStack_120,param_3[0x20],param_3[0x21],param_3[0x21] - param_3[0x20] >> 1);
        local_98 = (undefined1 *)CONCAT71(local_98._1_7_,(char)param_3[0x31]);
        FUN_00b91838(local_220,*param_3,param_3[1],(param_3[1] - *param_3 >> 4) * 0x2e8ba2e8ba2e8ba3
                    );
      }
      local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,(int)param_3[8]);
      uStack_188._0_5_ = CONCAT14(*(undefined1 *)((long)param_3 + 0x9c),(undefined4)uStack_188);
      local_180 = (undefined1 *)
                  CONCAT17(*(undefined1 *)((long)param_3 + 0xa7),(undefined7)local_180);
      puStack_168 = (undefined1 *)CONCAT35(puStack_168._5_3_,(int5)param_3[0x17]);
      puStack_178 = (undefined1 *)CONCAT35(puStack_178._5_3_,(int5)param_3[0x15]);
      local_170 = (undefined1 *)
                  CONCAT44(CONCAT31(local_170._5_3_,*(undefined1 *)((long)param_3 + 0xb4)),
                           (int)param_3[0x16]);
      local_160 = (undefined1 *)CONCAT35(local_160._5_3_,(int5)param_3[0x18]);
      puStack_158 = (undefined1 *)CONCAT35(puStack_158._5_3_,(int5)param_3[0x19]);
      local_150 = (undefined1 *)CONCAT35(local_150._5_3_,(int5)param_3[0x1a]);
      local_140 = (undefined1 *)param_3[0x1c];
      local_180 = (undefined1 *)CONCAT44(local_180._4_4_,(int)param_3[0x14]);
      uStack_148 = (undefined1 *)
                   CONCAT44(CONCAT31(uStack_148._5_3_,*(undefined1 *)((long)param_3 + 0xdc)),
                            (int)param_3[0x1b]);
      local_138 = (undefined1 *)
                  CONCAT44(CONCAT31(local_138._5_3_,*(undefined1 *)((long)param_3 + 0xec)),
                           (int)param_3[0x1d]);
      if ((long *)local_220 != param_3) {
        bVar4 = *(byte *)((long)param_3 + 0x137);
        if ((long)local_f0 < 0) {
          uVar19 = param_3[0x25];
          plVar6 = (long *)param_3[0x24];
          if (-1 < (char)bVar4) {
            uVar19 = (ulong)bVar4;
            plVar6 = param_3 + 0x24;
          }
          FUN_00547f08(&local_100,plVar6,uVar19);
        }
        else if ((char)bVar4 < '\0') {
          FUN_00547fc0(&local_100,param_3[0x24],param_3[0x25]);
        }
        else {
          puStack_f8 = (undefined1 *)param_3[0x25];
          local_100 = (undefined1 *)param_3[0x24];
          local_f0 = (undefined1 *)param_3[0x26];
        }
      }
      uStack_e0 = (undefined1 *)
                  CONCAT44(*(undefined4 *)((long)param_3 + 0x144),(undefined4)uStack_e0);
      local_d8 = (undefined1 *)CONCAT71(local_d8._1_7_,(char)param_3[0x29]);
      uVar19 = FUN_00be5988(param_3,local_220);
      if ((uVar19 & 1) == 0) {
        uVar19 = FUN_004249b0();
        if ((uVar19 & 1) == 0) {
          local_330 = FUN_005eceec(7);
          FUN_00623bb0(&DAT_00255ab0,"../../pc/peer_connection.cc",0xa7b,
                       "Modifying the configuration in an unsupported way.",&DAT_001a2df6,local_330,
                       &DAT_001ca519);
        }
        pcVar21 = (char *)operator_new(0x38);
        uVar12 = s_Modifying_the_configuration_in_a_001e3ad6._24_8_;
        uVar11 = s_Modifying_the_configuration_in_a_001e3ad6._16_8_;
        uVar27 = s_Modifying_the_configuration_in_a_001e3ad6._8_8_;
        uVar24 = s_Modifying_the_configuration_in_a_001e3ad6._0_8_;
        if (pcVar21 + 0x32 < pcVar21) goto LAB_00bed710;
        if ((pcVar21 < "odifying the configuration in an unsupported way.") &&
           ("Modifying the configuration in an unsupported way." < pcVar21 + 0x32))
        goto LAB_00bed724;
        pcVar21[0x30] = 'y';
        uVar14 = s_Modifying_the_configuration_in_a_001e3ad6._40_8_;
        uVar13 = s_Modifying_the_configuration_in_a_001e3ad6._32_8_;
        pcVar21[0x31] = '.';
        *(undefined8 *)(pcVar21 + 8) = uVar27;
        *(undefined8 *)pcVar21 = uVar24;
        *(undefined8 *)(pcVar21 + 0x18) = uVar12;
        *(undefined8 *)(pcVar21 + 0x10) = uVar11;
        *(undefined8 *)(pcVar21 + 0x28) = uVar14;
        *(undefined8 *)(pcVar21 + 0x20) = uVar13;
        pcVar21[0x32] = '\0';
        local_530._0_4_ = 7;
        FUN_005478d8((ulong)local_530 | 8,pcVar21,0x32);
        puVar1 = local_510;
        local_510._0_6_ = (uint6)local_510 & 0xff0000000000;
        local_510._7_1_ = SUB81(puVar1,7);
        local_510._0_7_ = (uint7)(uint6)local_510;
        local_508 = (undefined1 *)((ulong)local_508 & 0xffffffffffffff00);
        local_378 = (undefined1 *)((ulong)local_378 & 0xffffffffffffff00);
LAB_00bed208:
        operator_delete(pcVar21);
      }
      else {
        pcStack_248 = &DAT_aaaaaaaaaaaaaaaa;
        local_250 = (char **)&DAT_aaaaaaaaaaaaaaaa;
        local_238 = &DAT_aaaaaaaaaaaaaaaa;
        local_240 = &DAT_aaaaaaaaaaaaaaaa;
        local_230 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00be0744(local_330,local_220);
        FUN_00be0a60(&local_250,local_330);
        FUN_00be08b0(local_330);
        puVar23 = (undefined8 *)((ulong)local_530 | 8);
        if ((int)local_250 == 0) {
          puVar23[1] = 0;
          puVar23[2] = 0;
          *puVar23 = 0;
          *(undefined8 *)((long)puVar23 + 0x15) = 0;
          local_530 = (undefined1  [8])((ulong)(uint)local_530._4_4_ << 0x20);
          local_510._0_7_ = (uint7)(uint6)local_510;
          FUN_00b1e168(&local_508,local_220);
          uVar22 = 1;
        }
        else {
          local_530._0_4_ = (int)local_250;
          if ((long)local_238 < 0) {
            FUN_005478d8(puVar23,pcStack_248,local_240);
          }
          else {
            puVar25 = (undefined8 *)((ulong)&local_250 | 8);
            uVar27 = *puVar25;
            uVar24 = puVar25[2];
            puVar23[1] = puVar25[1];
            *puVar23 = uVar27;
            puVar23[2] = uVar24;
          }
          uVar22 = 0;
          local_508 = (undefined1 *)((ulong)local_508 & 0xffffffffffffff00);
          local_510._0_7_ = (uint7)local_230;
        }
        local_378 = (undefined1 *)CONCAT71(local_378._1_7_,uVar22);
        pcVar21 = pcStack_248;
        if ((long)local_238 < 0) goto LAB_00bed208;
      }
      FUN_00b1e590(local_220);
      if (local_530._0_4_ == 0) {
        local_250 = &pcStack_248;
        pcStack_248 = (char *)0x0;
        local_240 = (undefined1 *)0x0;
        local_548 = (void *)0x0;
        local_540 = (void *)0x0;
        local_538 = 0;
        FUN_00be2190(local_220,param_3,&local_250,&local_548);
        puVar23 = (undefined8 *)((ulong)&local_370 | 8);
        local_370 = (undefined1 *)CONCAT44(local_370._4_4_,local_220._0_4_);
        if ((char)(byte)uStack_351 < '\0') {
          puVar1 = local_210;
          pppppppuVar7 = pppppppuStack_218;
          if (-1 < (long)puStack_208) {
            puVar1 = (undefined1 *)((ulong)puStack_208 >> 0x38);
            pppppppuVar7 = &pppppppuStack_218;
          }
          FUN_00547f08(puVar23,pppppppuVar7,puVar1);
LAB_00bed310:
          uStack_351._1_3_ = SUB83(local_200,0);
          uStack_34d = (undefined1)((ulong)local_200 >> 0x18);
          uStack_34c = (undefined1)((ulong)local_200 >> 0x20);
          uStack_34b = (undefined1)((ulong)local_200 >> 0x28);
          uStack_34a = (undefined1)((ulong)local_200 >> 0x30);
          if ((long)puStack_208 < 0) {
            operator_delete(pppppppuStack_218);
          }
        }
        else {
          if ((long)puStack_208 < 0) {
            FUN_00547fc0(puVar23,pppppppuStack_218,local_210);
            goto LAB_00bed310;
          }
          puVar23[2] = puStack_208;
          puVar23[1] = local_210;
          *puVar23 = pppppppuStack_218;
          uStack_351._1_3_ = SUB83(local_200,0);
          uStack_34d = (undefined1)((ulong)local_200 >> 0x18);
          uStack_34c = (undefined1)((ulong)local_200 >> 0x20);
          uStack_34b = (undefined1)((ulong)local_200 >> 0x28);
          uStack_34a = (undefined1)((ulong)local_200 >> 0x30);
        }
        if ((int)local_370 == 0) {
          if (local_240 != (undefined1 *)0x0) {
            FUN_00ce1c44(param_2 + 0x7a,2);
          }
          if (local_548 != local_540) {
            FUN_00ce1c44(param_2 + 0x7a,1);
          }
          puVar1 = local_500;
          if (((ulong)local_378 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                      );
          }
          lVar3 = param_2[0xf];
          puVar8 = local_508;
          if ((long)local_500 - (long)local_508 == param_2[0x10] - lVar3) {
            for (; puVar8 != puVar1; puVar8 = puVar8 + 0xb0) {
              uVar19 = FUN_00bf38dc(puVar8,lVar3);
              if ((uVar19 & 1) == 0) goto LAB_00bed488;
              lVar3 = lVar3 + 0xb0;
            }
            iVar18 = (int)param_2[0x12];
            if ((iVar18 == (int)local_4f0) || ((*(byte *)((long)param_2 + 0x11f) & 1) == 0)) {
              if (iVar18 != (int)local_4f0) goto LAB_00bed488;
            }
            else {
              if (iVar18 - 1U < 3) {
                uVar26 = *(uint *)(&DAT_00258174 + (ulong)(iVar18 - 1U) * 4);
              }
              else {
                uVar26 = 0xffffffff;
              }
              if ((int)local_4f0 - 1U < 3) {
                uVar26 = *(uint *)(&DAT_00258180 + (ulong)((int)local_4f0 - 1U) * 4) | uVar26;
              }
              if (uVar26 != 0xffffffff) goto LAB_00bed488;
            }
            local_470._4_1_ = (char)((ulong)local_470 >> 0x20);
            if (local_470._4_1_ != '\0') {
              puStack_468._0_4_ = 1;
            }
            if ((*(byte *)((long)param_2 + 0x114) & 1) == 0) {
              iVar18 = (int)param_2[0x23];
            }
            else {
              iVar18 = 1;
            }
            bVar17 = (int)puStack_468 != iVar18;
          }
          else {
LAB_00bed488:
            bVar17 = true;
          }
          pppppppuStack_218 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
          local_220 = (undefined1  [8])&DAT_aaaaaaaaaaaaaaaa;
          puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
          local_210 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
          local_200 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
          local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_188 = &DAT_aaaaaaaaaaaaaaaa;
          local_190 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
          local_180 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
          local_170 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_00be0744(local_220,&local_508);
          if (*(char *)((long)param_2 + 0x61) == '\x01') {
            (**(code **)(*(long *)param_2[4] + 0x10))
                      (local_330,(long *)param_2[4],"WebRTC-IceHandshakeDtls",0x17);
            uVar19 = local_330._8_8_;
            if (-1 < (char)local_320._7_1_) {
              uVar19 = (ulong)local_320._7_1_;
            }
            if (uVar19 < 7) {
              bVar16 = false;
            }
            else {
              piVar2 = (int *)local_330._0_8_;
              if (-1 < (char)local_320._7_1_) {
                piVar2 = (int *)local_330;
              }
              bVar16 = *piVar2 == 0x62616e45 && *(int *)((long)piVar2 + 3) == 0x64656c62;
            }
            if ((char)local_320._7_1_ < '\0') {
              operator_delete((void *)local_330._0_8_);
            }
          }
          else {
            bVar16 = false;
          }
          uStack_148._0_5_ = CONCAT14(bVar16,(undefined4)uStack_148);
          local_88._8_8_ = local_330;
          pppcStack_318 = &local_250;
          local_310 = &local_548;
          local_88._0_8_ = local_74;
          local_330[8] = bVar17;
          local_74[0] = 0xaa;
          local_330._0_8_ = param_2;
          local_320 = local_220;
          ppuStack_308 = &local_508;
          local_300 = lVar20 != 0;
          (**(code **)(**(long **)(param_2[8] + 0x20) + 0x60))
                    (*(long **)(param_2[8] + 0x20),local_88,FUN_00bfc52c,&uStack_549);
          if ((local_74[0] & 1) == 0) {
            uVar19 = FUN_004249b0();
            if ((uVar19 & 1) == 0) {
              local_330._0_8_ = "../../pc/peer_connection.cc";
              local_330._8_8_ = 0x34a3;
              local_320 = local_74;
              local_88._0_16_ = FUN_005eceec(10);
              FUN_00623bb0(&DAT_00255ab0,local_330._0_8_,local_330._8_8_ & 0xffffffff,
                           "Failed to apply configuration to PortAllocator.",&DAT_001a2df6,local_88,
                           &DAT_001ca519);
            }
            FUN_00b0092c(param_1,10,"Failed to apply configuration to PortAllocator.",0x2f);
          }
          else {
            FUN_00b91634(param_2 + 0xf,&local_508);
            FUN_005ecd48(param_1);
          }
          FUN_00be08b0(local_220);
        }
        else {
          *param_1 = (int)local_370;
          if ((char)(byte)uStack_351 < '\0') {
            FUN_005478d8(param_1 + 2,pcStack_368,local_360);
          }
          else {
            uVar27 = *puVar23;
            uVar24 = puVar23[2];
            *(undefined8 *)(param_1 + 4) = puVar23[1];
            *(undefined8 *)(param_1 + 2) = uVar27;
            *(undefined8 *)(param_1 + 6) = uVar24;
          }
          param_1[8] = CONCAT13(uStack_34d,uStack_351._1_3_);
          *(uint *)((long)param_1 + 0x23) =
               CONCAT13(uStack_34a,CONCAT12(uStack_34b,CONCAT11(uStack_34c,uStack_34d)));
        }
        pvVar15 = local_548;
        pvVar5 = local_540;
        if (local_548 != (void *)0x0) {
          while (pvVar15 != pvVar5) {
            pvVar5 = (void *)((long)pvVar5 + -0xa0);
            if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            FUN_00be2ca4(pvVar5);
          }
          local_540 = pvVar15;
          operator_delete(local_548);
        }
        local_220 = (undefined1  [8])&local_250;
        FUN_00b8b8d8(local_220,pcStack_248);
      }
      else {
        *param_1 = local_530._0_4_;
        if ((long)puStack_518 < 0) {
          FUN_005478d8(param_1 + 2,uStack_528,local_520);
        }
        else {
          puVar23 = (undefined8 *)((ulong)local_530 | 8);
          uVar27 = *puVar23;
          uVar24 = puVar23[2];
          *(undefined8 *)(param_1 + 4) = puVar23[1];
          *(undefined8 *)(param_1 + 2) = uVar27;
          *(undefined8 *)(param_1 + 6) = uVar24;
        }
        iVar18 = (int)local_510;
        param_1[8] = iVar18;
        *(undefined4 *)((long)param_1 + 0x23) = local_510._3_4_;
      }
      auVar10._8_8_ = uStack_528;
      auVar10._0_8_ = local_530;
      auVar9._8_8_ = pppppppuStack_218;
      auVar9._0_8_ = local_220;
      if ((char)local_378 == '\x01') {
        FUN_00b1e590(&local_508);
        auVar10._8_8_ = uStack_528;
        auVar10._0_8_ = local_530;
        auVar9._8_8_ = pppppppuStack_218;
        auVar9._0_8_ = local_220;
      }
      if ((long)puStack_518 < 0) {
        operator_delete((void *)uStack_528);
        auVar10._8_8_ = uStack_528;
        auVar10._0_8_ = local_530;
        auVar9._8_8_ = pppppppuStack_218;
        auVar9._0_8_ = local_220;
      }
    }
    else {
      uVar19 = FUN_004249b0();
      if ((uVar19 & 1) == 0) {
        local_530 = (undefined1  [8])0x1c9f9c;
        uStack_528 = 0x32eb;
        local_520 = local_330;
        _local_220 = FUN_005eceec(7);
        FUN_00623bb0(&DAT_00255ab0,local_530,uStack_528 & 0xffffffff,
                     "Can\'t change crypto_options after calling SetLocalDescription.",&DAT_001a2df6
                     ,local_220,&DAT_001ca519);
      }
      FUN_00b0092c(param_1,7,"Can\'t change crypto_options after calling SetLocalDescription.",0x3e)
      ;
      auVar10._8_8_ = uStack_528;
      auVar10._0_8_ = local_530;
      auVar9 = _local_220;
    }
  }
  _local_220 = auVar9;
  _local_530 = auVar10;
  if ((char)(byte)uStack_351 < '\0') {
    operator_delete(pcStack_368);
  }
joined_r0x00becd48:
  if ((local_348 != (char **)0x0) && (**local_348 != '\0')) {
    FUN_0066d348(0x45,*local_348,local_348[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00bed77c  FUN_00bed77c =====

void FUN_00bed77c(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xb8))();
  FUN_00cb2f8c(param_1[0x95],param_2);
  return;
}


// ===== 00bed7b8  FUN_00bed7b8 =====

void FUN_00bed7b8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar5 = (undefined8 *)param_3[3];
  lVar3 = *param_3;
  lVar1 = param_3[1];
  uVar4 = *(undefined8 *)(param_1 + 0x4a8);
  lVar7 = param_3[3];
  lVar6 = param_3[2];
  if ((code *)*puVar5 != (code *)0x0) {
    lVar3 = (*(code *)*puVar5)(lVar3);
  }
  local_68 = FUN_00bfc5c8;
  local_60 = &PTR_FUN_00d49bc8;
  local_78[0] = (long *)operator_new(0x28);
  *local_78[0] = param_1;
  local_78[0][1] = lVar3;
  local_78[0][2] = lVar1;
  local_78[0][4] = lVar7;
  local_78[0][3] = lVar6;
  if (puVar5[1] != 0) {
    puVar5 = (undefined8 *)&DAT_001fbc50;
  }
  FUN_00cb3890(uVar4,param_2,local_78);
  if ((code *)local_60[1] != (code *)0x0) {
    (*(code *)local_60[1])(local_78[0]);
  }
  if ((code *)puVar5[1] != (code *)0x0) {
    (*(code *)puVar5[1])(lVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00bed8c0  FUN_00bed8c0 =====

uint FUN_00bed8c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbadc8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbadc8), iVar2 != 0)) {
    DAT_00dbadc0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbadc8);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbadc0 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbadc0,"PeerConnection::RemoveIceCandidate",0,0,0,0,0,0);
    local_50 = DAT_00dbadc0;
    pcStack_48 = "PeerConnection::RemoveIceCandidate";
  }
  uVar1 = FUN_00cb3bd8(*(undefined8 *)(param_1 + 0x4a8),param_2);
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar1 & 1;
}


// ===== 00bed9e8  FUN_00bed9e8 =====

void FUN_00bed9e8(char *param_1,long param_2,int *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  char *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 local_40 [16];
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x30));
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(*(long *)(param_2 + 0x40) + 0x30);
    local_50 = local_40;
    *(undefined1 **)(param_1 + 0x20) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 8) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)param_1 = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 0x18) = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 **)(param_1 + 0x10) = &DAT_aaaaaaaaaaaaaaaa;
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[0x26] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    local_58 = param_1;
    local_40._0_8_ = param_2;
    local_40._8_8_ = param_3;
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_58,FUN_00bfc79c,&uStack_11);
    return;
  }
  plVar2 = *(long **)(param_2 + 0x240);
  if (plVar2 == (long *)0x0) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      local_58 = "../../pc/peer_connection.cc";
      local_50 = (undefined1 *)0x35cb;
      local_48 = &uStack_11;
      local_40 = FUN_005eceec(6);
      FUN_00623bb0(&DAT_00255ab0,local_58,(ulong)local_50 & 0xffffffff,"PeerConnection is closed.",
                   &DAT_001a2df6,local_40,&DAT_001ca519);
    }
    pcVar4 = "PeerConnection is closed.";
    uVar3 = 6;
    uVar5 = 0x19;
    goto LAB_00bede40;
  }
  if ((char)param_3[1] == '\x01') {
    if (*param_3 < 0) {
      uVar1 = FUN_004249b0();
      if ((uVar1 & 1) == 0) {
        local_58 = "../../pc/peer_connection.cc";
        local_50 = (undefined1 *)0x360b;
        local_48 = &uStack_11;
        local_40 = FUN_005eceec(3);
        FUN_00623bb0(&DAT_00255ab0,local_58,(ulong)local_50 & 0xffffffff,"min_bitrate_bps <= 0",
                     &DAT_001a2df6,local_40,&DAT_001ca519);
      }
      pcVar4 = "min_bitrate_bps <= 0";
      uVar3 = 3;
      uVar5 = 0x14;
      goto LAB_00bede40;
    }
    if ((*(byte *)(param_3 + 3) & 1) != 0) {
      iVar6 = param_3[2];
      if (*param_3 <= iVar6) goto LAB_00bedb94;
      uVar1 = FUN_004249b0();
      if ((uVar1 & 1) == 0) {
        local_58 = "../../pc/peer_connection.cc";
        local_50 = (undefined1 *)0x3633;
        local_48 = &uStack_11;
        local_40 = FUN_005eceec(3);
        FUN_00623bb0(&DAT_00255ab0,local_58,(ulong)local_50 & 0xffffffff,
                     "start_bitrate_bps < min_bitrate_bps",&DAT_001a2df6,local_40,&DAT_001ca519);
      }
      pcVar4 = "start_bitrate_bps < min_bitrate_bps";
LAB_00bedc0c:
      uVar3 = 3;
      uVar5 = 0x23;
      goto LAB_00bede40;
    }
LAB_00bedc1c:
    if ((*(byte *)(param_3 + 5) & 1) == 0) goto LAB_00bedd28;
  }
  else {
    if ((*(byte *)(param_3 + 3) & 1) == 0) goto LAB_00bedc1c;
    iVar6 = param_3[2];
    if (iVar6 < 0) {
      uVar1 = FUN_004249b0();
      if ((uVar1 & 1) == 0) {
        local_58 = "../../pc/peer_connection.cc";
        local_50 = (undefined1 *)0x364b;
        local_48 = &uStack_11;
        local_40 = FUN_005eceec(3);
        FUN_00623bb0(&DAT_00255ab0,local_58,(ulong)local_50 & 0xffffffff,"curent_bitrate_bps < 0",
                     &DAT_001a2df6,local_40,&DAT_001ca519);
      }
      pcVar4 = "curent_bitrate_bps < 0";
      uVar3 = 3;
      uVar5 = 0x16;
      goto LAB_00bede40;
    }
LAB_00bedb94:
    if (*(byte *)(param_3 + 5) == 0) goto LAB_00bedd28;
    if (param_3[4] < iVar6) {
      uVar1 = FUN_004249b0();
      if ((uVar1 & 1) == 0) {
        local_58 = "../../pc/peer_connection.cc";
        local_50 = (undefined1 *)0x367b;
        local_48 = &uStack_11;
        local_40 = FUN_005eceec(3);
        FUN_00623bb0(&DAT_00255ab0,local_58,(ulong)local_50 & 0xffffffff,
                     "max_bitrate_bps < start_bitrate_bps",&DAT_001a2df6,local_40,&DAT_001ca519);
      }
      pcVar4 = "max_bitrate_bps < start_bitrate_bps";
      goto LAB_00bedc0c;
    }
  }
  if (((char)param_3[1] == '\0') || (*param_3 <= param_3[4])) {
    if (-1 < param_3[4]) {
LAB_00bedd28:
      (**(code **)(*plVar2 + 0xb0))(plVar2,param_3);
      FUN_005ecd48(param_1);
      return;
    }
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      local_58 = "../../pc/peer_connection.cc";
      local_50 = (undefined1 *)0x36ab;
      local_48 = &uStack_11;
      local_40 = FUN_005eceec(3);
      FUN_00623bb0(&DAT_00255ab0,local_58,(ulong)local_50 & 0xffffffff,"max_bitrate_bps < 0",
                   &DAT_001a2df6,local_40,&DAT_001ca519);
    }
    pcVar4 = "max_bitrate_bps < 0";
    uVar3 = 3;
    uVar5 = 0x13;
  }
  else {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      local_58 = "../../pc/peer_connection.cc";
      local_50 = (undefined1 *)0x3693;
      local_48 = &uStack_11;
      local_40 = FUN_005eceec(3);
      FUN_00623bb0(&DAT_00255ab0,local_58,(ulong)local_50 & 0xffffffff,
                   "max_bitrate_bps < min_bitrate_bps",&DAT_001a2df6,local_40,&DAT_001ca519);
    }
    pcVar4 = "max_bitrate_bps < min_bitrate_bps";
    uVar3 = 3;
    uVar5 = 0x21;
  }
LAB_00bede40:
  FUN_00b0092c(param_1,uVar3,pcVar4,uVar5);
  return;
}


// ===== 00bede5c  FUN_00bede5c =====

void FUN_00bede5c(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar3 = *(long *)(param_1 + 0x260);
  plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x30);
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  uVar1 = *param_2;
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar3;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00bfc870;
  local_50[0][2] = param_1;
  *(undefined1 *)(local_50[0] + 3) = uVar1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bedf24  FUN_00bedf24 =====

void FUN_00bedf24(long *param_1,byte param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uStack_31;
  long *local_30;
  byte local_28;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(param_1[8] + 0x30));
  if ((uVar1 & 1) == 0) {
    local_28 = param_2 & 1;
    local_30 = param_1;
    (**(code **)(**(long **)(param_1[8] + 0x30) + 0x60))
              (*(long **)(param_1[8] + 0x30),&local_30,FUN_00bfc8b4,&uStack_31);
  }
  else {
    local_30 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar2 = (long *)FUN_00b96b10(param_1[0x49]);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
    (**(code **)(*plVar2 + 0x28))(&local_30);
    (**(code **)(*local_30 + 0x30))(local_30,param_2 & 1);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
  }
  return;
}


// ===== 00bedfec  FUN_00bedfec =====

void FUN_00bedfec(long *param_1,byte param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 uStack_31;
  long *local_30;
  byte local_28;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(param_1[8] + 0x30));
  if ((uVar1 & 1) == 0) {
    local_28 = param_2 & 1;
    local_30 = param_1;
    (**(code **)(**(long **)(param_1[8] + 0x30) + 0x60))
              (*(long **)(param_1[8] + 0x30),&local_30,FUN_00bfc8d0,&uStack_31);
  }
  else {
    local_30 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    plVar2 = (long *)FUN_00b96b10(param_1[0x49]);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
    (**(code **)(*plVar2 + 0x28))(&local_30);
    (**(code **)(*local_30 + 0x38))(local_30,param_2 & 1);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 8))();
    }
  }
  return;
}


// ===== 00bee0b4  FUN_00bee0b4 =====

void FUN_00bee0b4(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *local_48;
  long local_40;
  long *local_38;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x30));
  if ((uVar1 & 1) == 0) {
    local_38 = (long *)*param_2;
    plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x30);
    local_40 = param_1;
    if (local_38 != (long *)0x0) {
      (**(code **)*local_38)();
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_40,FUN_00bfc8ec,&uStack_11);
    plVar2 = local_38;
  }
  else {
    plVar2 = *(long **)(param_1 + 0x240);
    if (plVar2 == (long *)0x0) {
      return;
    }
    local_48 = (long *)*param_2;
    if (local_48 != (long *)0x0) {
      (**(code **)*local_48)();
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,&local_48);
    plVar2 = local_48;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return;
}


// ===== 00bee190  FUN_00bee190 =====

undefined1 FUN_00bee190(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long local_48;
  long *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  long *plStack_28;
  undefined1 local_4 [3];
  undefined1 uStack_1;
  
  local_30 = local_4;
  plStack_28 = &local_48;
  plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x30);
  local_4[0] = 0xaa;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_30,FUN_00bfc954,&uStack_1);
  uVar1 = local_4[0];
  plVar2 = local_40;
  local_40 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  return uVar1;
}


// ===== 00bee21c  FUN_00bee21c =====

uint FUN_00bee21c(long *param_1,undefined8 param_2)

{
  long *****ppppplVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long ****local_48;
  ulong local_40;
  byte bStack_31;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0x388))();
  (**(code **)(*plVar3 + 0x10))(&local_48,plVar3,"WebRTC-RtcEventLogNewFormat",0x1b);
  if (-1 < (char)bStack_31) {
    local_40 = (ulong)bStack_31;
  }
  if (local_40 < 8) {
    uVar4 = 5000;
  }
  else {
    ppppplVar1 = (long *****)local_48;
    if (-1 < (char)bStack_31) {
      ppppplVar1 = &local_48;
    }
    uVar4 = 5000;
    if (*ppppplVar1 == (long ****)0x64656c6261736944) {
      uVar4 = 0;
    }
  }
  if ((char)bStack_31 < '\0') {
    operator_delete(local_48);
  }
  uVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,param_2,uVar4);
  return uVar2 & 1;
}


// ===== 00bee304  FUN_00bee304 =====

void FUN_00bee304(long param_1)

{
  long *plVar1;
  undefined1 uStack_19;
  long local_18;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 0x30);
  local_18 = param_1;
  (**(code **)(*plVar1 + 0x60))(plVar1,&local_18,FUN_00bfc9dc,&uStack_19);
  return;
}


// ===== 00bee350  FUN_00bee350 =====

void FUN_00bee350(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  lVar2 = *(long *)(param_1 + 600);
  plVar1 = *(long **)(*(long *)(param_1 + 0x40) + 0x20);
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar2;
  local_50[0][4] = (long)FUN_00bfca0c;
  local_50[0][5] = (long)FUN_00bfc9f4;
  local_50[0][2] = param_1;
  local_50[0][3] = param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar1 + 8))(plVar1,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00bee410  FUN_00bee410 =====

void FUN_00bee410(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 local_8;
  
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  FUN_00c35780(&local_8,*(undefined8 *)(param_2 + 0x498),puVar2,uVar1);
  *param_1 = local_8;
  return;
}


// ===== 00bee460  FUN_00bee460 =====

void FUN_00bee460(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_8;
  
  if ((*(byte *)(param_2 + 0x3b0) & 1) == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = (long)*(char *)(param_2 + 0x3af);
    if (lVar2 < 0) {
      lVar1 = *(long *)(param_2 + 0x398);
      lVar2 = *(long *)(param_2 + 0x3a0);
    }
    else {
      lVar1 = param_2 + 0x398;
    }
    FUN_00c357d8(&local_8,*(undefined8 *)(param_2 + 0x498),lVar1,lVar2);
    *param_1 = local_8;
  }
  return;
}


// ===== 00bee4c4  FUN_00bee4c4 =====

undefined8 FUN_00bee4c4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_30;
  long lStack_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bee508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x4a8) + 0x18))();
    return uVar2;
  }
  lStack_28 = param_1 + 0x4c0;
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
  local_30 = param_1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_30,FUN_00bfca5c,&uStack_1);
  return *(undefined8 *)(param_1 + 0x4c0);
}


// ===== 00bee550  FUN_00bee550 =====

undefined8 FUN_00bee550(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_30;
  long lStack_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bee594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x4a8) + 0x20))();
    return uVar2;
  }
  lStack_28 = param_1 + 0x4c8;
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
  local_30 = param_1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_30,FUN_00bfcacc,&uStack_1);
  return *(undefined8 *)(param_1 + 0x4c8);
}


// ===== 00bee5dc  FUN_00bee5dc =====

undefined8 FUN_00bee5dc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_30;
  long lStack_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bee620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x4a8) + 0x28))();
    return uVar2;
  }
  lStack_28 = param_1 + 0x4d0;
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
  local_30 = param_1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_30,FUN_00bfcb3c,&uStack_1);
  return *(undefined8 *)(param_1 + 0x4d0);
}


// ===== 00bee668  FUN_00bee668 =====

undefined8 FUN_00bee668(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_30;
  long lStack_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bee6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x4a8) + 0x30))();
    return uVar2;
  }
  lStack_28 = param_1 + 0x4d8;
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
  local_30 = param_1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_30,FUN_00bfcbac,&uStack_1);
  return *(undefined8 *)(param_1 + 0x4d8);
}


// ===== 00bee6f4  FUN_00bee6f4 =====

undefined8 FUN_00bee6f4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_30;
  long lStack_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bee738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x4a8) + 0x38))();
    return uVar2;
  }
  lStack_28 = param_1 + 0x4e0;
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
  local_30 = param_1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_30,FUN_00bfcc1c,&uStack_1);
  return *(undefined8 *)(param_1 + 0x4e0);
}


// ===== 00bee780  FUN_00bee780 =====

undefined8 FUN_00bee780(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_30;
  long lStack_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x38));
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bee7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x4a8) + 0x40))();
    return uVar2;
  }
  lStack_28 = param_1 + 0x4e8;
  plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0x38);
  local_30 = param_1;
  (**(code **)(*plVar3 + 0x60))(plVar3,&local_30,FUN_00bfcc8c,&uStack_1);
  return *(undefined8 *)(param_1 + 0x4e8);
}


// ===== 00bee80c  FUN_00bee80c =====

void FUN_00bee80c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  undefined1 uStack_f1;
  long *local_f0;
  void **ppvStack_e8;
  void *local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  long *local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  long *local_90 [2];
  code *local_80;
  code *pcStack_78;
  char **local_68;
  char *local_60;
  char *pcStack_58;
  
  if (((DAT_00dbadd8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbadd8), iVar4 != 0)) {
    DAT_00dbadd0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbadd8);
  }
  local_68 = (char **)0x0;
  pcStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbadd0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbadd0,"PeerConnection::Close",0,0,0,0,0,0);
    local_60 = DAT_00dbadd0;
    pcStack_58 = "PeerConnection::Close";
    local_68 = &local_60;
  }
  uVar5 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if ((uVar5 & 1) == 0) {
    FUN_00bfffec(param_1[0x4e],0);
    *(undefined4 *)((long)param_1 + 100) = 6;
    local_80 = FUN_004473ec;
    pcStack_78 = FUN_00bfccfc;
    local_90[0] = param_1;
    (**(code **)(*param_1 + 0x2a8))(param_1,local_90);
    (*local_80)(0,local_90,local_90);
    local_a0 = FUN_004473ec;
    pcStack_98 = FUN_00bfcd1c;
    param_1[0xd] = DAT_001f5160;
    local_b0[0] = param_1;
    (**(code **)(*param_1 + 0x2a8))(param_1,local_b0);
    (*local_a0)(0,local_b0,local_b0);
    FUN_00ca2c78(param_1[0x95]);
    (**(code **)(*param_1 + 0x328))(param_1,0x400);
    if (*(char *)(param_1[8] + 5) == '\x01') {
      lVar6 = (**(code **)(*param_1 + 0x2e8))(param_1);
      lVar9 = *(long *)(lVar6 + 0x30);
      lVar6 = *(long *)(lVar6 + 0x38);
      uVar5 = lVar6 - lVar9;
      if (uVar5 != 0) {
        if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bf3e88();
        }
        puVar7 = (undefined8 *)operator_new(uVar5);
        lVar11 = 0;
        do {
          if ((long *)((long)puVar7 + lVar11) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar8 = *(undefined8 **)(lVar9 + lVar11);
          *(long *)((long)puVar7 + lVar11) = (long)puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            (**(code **)*puVar8)();
          }
          lVar11 = lVar11 + 8;
          lVar2 = lVar11;
          puVar8 = puVar7;
        } while (lVar9 + lVar11 != lVar6);
        for (; lVar2 != 0; lVar2 = lVar2 + -8) {
          uVar5 = (**(code **)(*(long *)*puVar8 + 0x40))();
          if ((uVar5 & 1) == 0) {
            (**(code **)(*(long *)*puVar8 + 0x88))();
          }
          puVar8 = puVar8 + 1;
        }
        if (puVar7 != (undefined8 *)0x0) {
          if (lVar11 != 0) {
            plVar12 = (long *)((long)puVar7 + lVar11);
            lVar11 = -lVar11;
            do {
              plVar12 = plVar12 + -1;
              if (plVar12 == (long *)0x0) goto LAB_00beec28;
              if ((long *)*plVar12 != (long *)0x0) {
                (**(code **)(*(long *)*plVar12 + 8))();
              }
              lVar11 = lVar11 + 8;
            } while (lVar11 != 0);
          }
          operator_delete(puVar7);
        }
      }
    }
    local_c8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_e0 = (void *)0x0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    FUN_00cbf948(param_1[0x95],&local_c8,&local_e0);
    FUN_00be6cf4(param_1,&local_c8);
    pvVar10 = *(void **)(param_1[0x95] + 0x20);
    *(undefined8 *)(param_1[0x95] + 0x20) = 0;
    if (pvVar10 != (void *)0x0) {
      FUN_00ccf7fc(pvVar10);
      operator_delete(pvVar10);
    }
    lVar9 = param_1[8];
    if (*(char *)(lVar9 + 5) == '\x01') {
      FUN_00cdcaa4(param_1[0x96]);
      lVar9 = param_1[8];
    }
    ppvStack_e8 = &local_e0;
    local_f0 = param_1;
    (**(code **)(**(long **)(lVar9 + 0x30) + 0x60))
              (*(long **)(lVar9 + 0x30),&local_f0,FUN_00bfcd3c,&uStack_f1);
    FUN_00ce1c58(param_1 + 0x7a,param_1[0xb]);
    FUN_00beec84(param_1);
    FUN_00ca2c6c(param_1[0x95]);
    FUN_00c99b00(param_1 + 0x7b);
    pvVar3 = local_e0;
    param_1[0xb] = 0;
    pvVar10 = local_d8;
    if (local_e0 != (void *)0x0) {
      while (pvVar3 != pvVar10) {
        pvVar1 = (void *)((long)pvVar10 + -0x20);
        if (pvVar1 == (void *)0x0) goto LAB_00beec28;
        (**(code **)((long)pvVar10 + -0x10))(0,pvVar1,pvVar1);
        pvVar10 = pvVar1;
      }
      local_d8 = pvVar3;
      operator_delete(local_e0);
    }
    pvVar3 = local_c8;
    pvVar10 = local_c0;
    if (local_c8 != (void *)0x0) {
      while (pvVar3 != pvVar10) {
        pvVar1 = (void *)((long)pvVar10 + -0x20);
        if (pvVar1 == (void *)0x0) {
LAB_00beec28:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)((long)pvVar10 + -0x10))(0,pvVar1,pvVar1);
        pvVar10 = pvVar1;
      }
      local_c0 = pvVar3;
      operator_delete(local_c8);
    }
  }
  if ((local_68 != (char **)0x0) && (**local_68 != '\0')) {
    FUN_0066d348(0x45,*local_68,local_68[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00beec84  FUN_00beec84 =====

void FUN_00beec84(long *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)((long)param_1 + 0x62) == '\x01') {
    piVar2 = (int *)(**(code **)(*param_1 + 200))();
    iVar1 = *piVar2;
    if (iVar1 == 2) {
      pcVar3 = "WebRTC.PeerConnection.SdpMunging.Answer.ConnectionClosed";
      uVar5 = 0x38;
    }
    else if (iVar1 == 1) {
      pcVar3 = "WebRTC.PeerConnection.SdpMunging.PrAnswer.ConnectionClosed";
      uVar5 = 0x3a;
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      pcVar3 = "WebRTC.PeerConnection.SdpMunging.Offer.ConnectionClosed";
      uVar5 = 0x37;
    }
    lVar4 = FUN_0066631c(pcVar3,uVar5,0x66);
    if (lVar4 != 0) {
      FUN_00666568(lVar4,*(undefined4 *)(param_1[0x95] + 0x58));
      return;
    }
  }
  return;
}


// ===== 00beed28  FUN_00beed28 =====

/* WARNING: Removing unreachable block (ram,0x00beee4c) */
/* WARNING: Removing unreachable block (ram,0x00beede4) */
/* WARNING: Removing unreachable block (ram,0x00beedc8) */
/* WARNING: Removing unreachable block (ram,0x00beee30) */
/* WARNING: Removing unreachable block (ram,0x00beee8c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00beed28(long *param_1,int param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  char *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  char *local_b0;
  char **ppcStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char **local_88;
  undefined *local_80;
  void **ppvStack_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined **local_58;
  void *local_48;
  undefined8 uStack_40;
  undefined1 uStack_15;
  int local_14;
  
  if ((*(int *)((long)param_1 + 100) != param_2) &&
     (local_14 = param_2, uVar2 = (**(code **)(*param_1 + 0x2b0))(), (uVar2 & 1) == 0)) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      local_c8 = "../../pc/peer_connection.cc";
      local_c0 = 0x3e01;
      local_b8 = &uStack_15;
      ppcStack_a8 = &local_c8;
      local_b0 = "Changing IceConnectionState ";
      FUN_00bfcdd8(&local_70,(int *)((long)param_1 + 100));
      local_88 = &local_b0;
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      ppvStack_78 = &local_a0;
      local_80 = &DAT_001dce1a;
      FUN_00bfcdd8(&local_48,&local_14);
      local_58 = &local_80;
      uStack_68 = uStack_40;
      local_70 = local_48;
                    /* WARNING: Load size is inaccurate */
      puVar1 = *(undefined8 **)((long)ppvStack_78[3] + 8);
      FUN_00623bb0("\r\t\n\t\n",*puVar1,*(undefined4 *)(puVar1 + 1),*ppvStack_78[3],ppvStack_78,
                   local_80,&local_70);
      param_2 = local_14;
      if (local_90 < 0) {
        operator_delete(local_a0);
        param_2 = local_14;
      }
    }
    *(int *)((long)param_1 + 100) = param_2;
    local_e0 = FUN_004473ec;
    pcStack_d8 = FUN_00bfcf50;
    local_f0[0] = param_1;
    (**(code **)(*param_1 + 0x2a8))(param_1,local_f0);
    (*local_e0)(0,local_f0,local_f0);
  }
  return;
}


// ===== 00beef14  FUN_00beef14 =====

void FUN_00beef14(long param_1)

{
  FUN_00beed28(param_1 + -8);
  return;
}


// ===== 00beef20  FUN_00beef20 =====

/* WARNING: Removing unreachable block (ram,0x00bef044) */
/* WARNING: Removing unreachable block (ram,0x00beefdc) */
/* WARNING: Removing unreachable block (ram,0x00beefc0) */
/* WARNING: Removing unreachable block (ram,0x00bef028) */
/* WARNING: Removing unreachable block (ram,0x00bef084) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00beef20(long *param_1,int param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  char *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  char *local_b0;
  char **ppcStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  char **local_88;
  undefined *local_80;
  void **ppvStack_78;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined **local_58;
  void *local_48;
  undefined8 uStack_40;
  undefined1 uStack_15;
  int local_14;
  
  if (((int)param_1[0xd] != param_2) &&
     (local_14 = param_2, uVar2 = (**(code **)(*param_1 + 0x2b0))(), (uVar2 & 1) == 0)) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      local_c8 = "../../pc/peer_connection.cc";
      local_c0 = 0x3eb1;
      local_b8 = &uStack_15;
      ppcStack_a8 = &local_c8;
      local_b0 = "Changing standardized IceConnectionState ";
      FUN_00bfcdd8(&local_70,param_1 + 0xd);
      local_88 = &local_b0;
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      ppvStack_78 = &local_a0;
      local_80 = &DAT_001dce1a;
      FUN_00bfcdd8(&local_48,&local_14);
      local_58 = &local_80;
      uStack_68 = uStack_40;
      local_70 = local_48;
                    /* WARNING: Load size is inaccurate */
      puVar1 = *(undefined8 **)((long)ppvStack_78[3] + 8);
      FUN_00623bb0("\r\t\n\t\n",*puVar1,*(undefined4 *)(puVar1 + 1),*ppvStack_78[3],ppvStack_78,
                   local_80,&local_70);
      param_2 = local_14;
      if (local_90 < 0) {
        operator_delete(local_a0);
        param_2 = local_14;
      }
    }
    *(int *)(param_1 + 0xd) = param_2;
    local_f0[0] = &local_14;
    local_e0 = FUN_004473ec;
    pcStack_d8 = FUN_00bfcf70;
    (**(code **)(*param_1 + 0x2a8))(param_1,local_f0);
    (*local_e0)(0,local_f0,local_f0);
  }
  return;
}


// ===== 00bef110  FUN_00bef110 =====

/* WARNING: Removing unreachable block (ram,0x00bef7a0) */
/* WARNING: Removing unreachable block (ram,0x00bef7bc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00bef110(long *param_1)

{
  byte *******pppppppbVar1;
  void *__src;
  byte *****pppppbVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long *plVar13;
  void *__dest;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long *plVar19;
  long *plVar20;
  char cVar21;
  long *plVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 uStack_119;
  char *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *local_100;
  char **ppcStack_f8;
  byte *******local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  char **local_d8;
  byte ******local_d0;
  byte *******pppppppbStack_c8;
  byte *******local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  byte *******local_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined1 *local_70;
  byte *******local_68;
  undefined1 *puStack_60;
  undefined7 local_58;
  undefined1 uStack_51;
  
  uVar6 = *(uint *)((long)param_1 + 0x94);
  lVar7 = FUN_0066631c("WebRTC.PeerConnection.BundlePolicy",0x22,3);
  if (lVar7 != 0) {
    if (2 < uVar6) {
      uVar6 = 3;
    }
    FUN_00666568(lVar7,uVar6);
  }
  piVar8 = (int *)(**(code **)(*param_1 + 200))(param_1);
  if (*piVar8 == 1) {
    uVar18 = 1;
  }
  else {
    piVar8 = (int *)(**(code **)(*param_1 + 0xd0))(param_1);
    uVar18 = 2;
    if (*piVar8 != 1) {
      uVar18 = 0;
    }
  }
  lVar7 = FUN_0066631c("WebRTC.PeerConnection.ProvisionalAnswer",0x27,3);
  if (lVar7 != 0) {
    FUN_00666568(lVar7,uVar18);
  }
  puStack_78 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  lVar9 = (**(code **)(*param_1 + 0xd0))(param_1);
  puStack_78 = (undefined8 *)0x0;
  local_70 = (undefined1 *)0x0;
  local_80 = (undefined8 *)0x0;
  lVar7 = *(long *)(*(long *)(lVar9 + 0x38) + 0x18);
  lVar9 = *(long *)(*(long *)(lVar9 + 0x38) + 0x20);
  FUN_00b17cac(&local_80,lVar7,lVar9,(lVar9 - lVar7 >> 4) * 0x6db6db6db6db6db7);
  if (local_80 != puStack_78) {
    uStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = (byte *******)&DAT_aaaaaaaaaaaaaaaa;
    local_a8 = (byte *******)&DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    lVar7 = (long)*(char *)((long)local_80 + 0x47);
    if (lVar7 < 0) {
      puVar11 = (undefined8 *)local_80[6];
      lVar7 = local_80[7];
      lVar9 = (long)*(char *)((long)local_80 + 0x5f);
      if (lVar9 < 0) goto LAB_00bef25c;
LAB_00bef248:
      puVar10 = local_80 + 9;
    }
    else {
      puVar11 = local_80 + 6;
      lVar9 = (long)*(char *)((long)local_80 + 0x5f);
      if (-1 < lVar9) goto LAB_00bef248;
LAB_00bef25c:
      puVar10 = (undefined8 *)local_80[9];
      lVar9 = local_80[10];
    }
    plVar22 = (long *)local_80[3];
    plVar13 = (long *)local_80[4];
    if (plVar22 == plVar13) {
      bVar5 = false;
    }
    else {
      do {
        if (*(char *)((long)plVar22 + 0x17) < '\0') {
          plVar20 = (long *)*plVar22;
          if (plVar22[1] == 0xc) goto LAB_00bef288;
        }
        else {
          plVar20 = plVar22;
          if (*(char *)((long)plVar22 + 0x17) == '\f') {
LAB_00bef288:
            plVar19 = plVar22;
            if (*plVar20 == 0x616e696d6f6e6572 && (int)plVar20[1] == 0x6e6f6974) break;
          }
        }
        plVar22 = plVar22 + 3;
        plVar19 = plVar13;
      } while (plVar22 != plVar13);
      bVar5 = plVar19 != plVar13;
    }
    FUN_00b184fc(&local_c0,puVar11,lVar7,puVar10,lVar9,bVar5);
    pppppppbVar1 = local_c0;
    if (-1 < (long)local_b0._7_1_) {
      pppppppbVar1 = (byte *******)&local_c0;
    }
    puVar4 = puStack_b8;
    if (-1 < (long)local_b0) {
      puVar4 = (undefined1 *)(long)local_b0._7_1_;
    }
    for (; puVar4 != (undefined1 *)0x0; puVar4 = puVar4 + -1) {
      if ((*(byte *)pppppppbVar1 - 0x23 < 0x3d) &&
         ((0x1000000004000401U >> ((ulong)(*(byte *)pppppppbVar1 - 0x23) & 0x3f) & 1) != 0)) {
        uVar6 = 0;
        goto LAB_00bef348;
      }
      pppppppbVar1 = (byte *******)((long)pppppppbVar1 + 1);
    }
    uVar6 = 1;
LAB_00bef348:
    pppppppbVar1 = local_a8;
    if (-1 < (long)uStack_98._7_1_) {
      pppppppbVar1 = (byte *******)&local_a8;
    }
    puVar4 = local_a0;
    if (-1 < (long)uStack_98) {
      puVar4 = (undefined1 *)(long)uStack_98._7_1_;
    }
    for (; puVar4 != (undefined1 *)0x0; puVar4 = puVar4 + -1) {
      if ((*(byte *)pppppppbVar1 - 0x23 < 0x3d) &&
         ((0x1000000004000401U >> ((ulong)(*(byte *)pppppppbVar1 - 0x23) & 0x3f) & 1) != 0)) {
        uVar24 = 0;
        goto LAB_00bef39c;
      }
      pppppppbVar1 = (byte *******)((long)pppppppbVar1 + 1);
    }
    uVar24 = 1;
LAB_00bef39c:
    lVar7 = FUN_0066631c("WebRTC.PeerConnection.ValidIceChars",0x23,2);
    if (lVar7 != 0) {
      FUN_00666568(lVar7,uVar24 & uVar6);
    }
    if (puStack_78 == local_80) {
LAB_00bef8d4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                );
    }
    if ((local_80[0xd] != 0) &&
       (lVar7 = FUN_0066631c("WebRTC.PeerConnection.DtlsFingerprintLegacySha1",0x2f,2), lVar7 != 0))
    {
      if (puStack_78 == local_80) goto LAB_00bef8d4;
      puVar10 = (undefined8 *)local_80[0xd];
      lVar9 = (long)*(char *)((long)puVar10 + 0x17);
      puVar11 = puVar10;
      if (lVar9 < 0) {
        puVar11 = (undefined8 *)*puVar10;
        lVar9 = puVar10[1];
      }
      uVar6 = FUN_0061ff84(puVar11,lVar9,"sha-1",5);
      FUN_00666568(lVar7,uVar6 & 1);
    }
    if ((long)uStack_98 < 0) {
      operator_delete(local_a8);
    }
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
  }
  lVar7 = param_1[0x13];
  lVar9 = FUN_0066631c("WebRTC.PeerConnection.RtcpMuxPolicy",0x23,2);
  if (lVar9 != 0) {
    uVar18 = 0;
    if ((int)lVar7 != 1) {
      uVar18 = 2;
    }
    if ((int)lVar7 == 0) {
      uVar18 = 1;
    }
    FUN_00666568(lVar9,uVar18);
  }
  piVar8 = (int *)(**(code **)(*param_1 + 200))(param_1);
  iVar3 = *piVar8;
  if (iVar3 == 2) {
    pcVar12 = "WebRTC.PeerConnection.SdpMunging.Answer.ConnectionEstablished";
    uVar17 = 0x3d;
LAB_00bef4c0:
    lVar7 = FUN_0066631c(pcVar12,uVar17,0x66);
    if (lVar7 != 0) {
      FUN_00666568(lVar7,*(undefined4 *)(param_1[0x95] + 0x58));
    }
  }
  else {
    if (iVar3 == 1) {
      pcVar12 = "WebRTC.PeerConnection.SdpMunging.PrAnswer.ConnectionEstablished";
      uVar17 = 0x3f;
      goto LAB_00bef4c0;
    }
    if (iVar3 == 0) {
      pcVar12 = "WebRTC.PeerConnection.SdpMunging.Offer.ConnectionEstablished";
      uVar17 = 0x3c;
      goto LAB_00bef4c0;
    }
  }
  piVar8 = (int *)(**(code **)(*param_1 + 200))(param_1);
  if ((*piVar8 == 2) || (piVar8 = (int *)(**(code **)(*param_1 + 200))(param_1), *piVar8 == 1)) {
    lVar7 = 200;
LAB_00bef514:
    lVar7 = (**(code **)(*param_1 + lVar7))(param_1);
    plVar22 = *(long **)(lVar7 + 0x38);
    if (plVar22 != (long *)0x0) {
      lVar7 = FUN_00cdb358(plVar22);
      if ((lVar7 == 0) || ((*(byte *)(lVar7 + 4) & 1) != 0)) {
LAB_00bef5ac:
        cVar21 = '\0';
      }
      else {
        plVar13 = (long *)FUN_00b174c8();
        lVar7 = (**(code **)(*plVar13 + 0x40))();
        if (lVar7 == 0) goto LAB_00bef5ac;
        cVar21 = *(char *)(lVar7 + 0x150);
        if (cVar21 == '\x01') {
          __src = *(void **)(lVar7 + 0x138);
          uVar15 = *(long *)(lVar7 + 0x140) - (long)__src;
          if (uVar15 != 0) {
            if ((long)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d34c0();
            }
            __dest = operator_new(uVar15);
            memcpy(__dest,__src,uVar15);
            if (__dest != (void *)0x0) {
              if ((long)__dest + (uVar15 - 1) < uVar15) {
LAB_00bef8c0:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(__dest);
            }
          }
        }
      }
      lVar7 = FUN_0066631c("WebRTC.PeerConnection.NegotiatedSctpSnap",0x28,2);
      if (lVar7 != 0) {
        FUN_00666568(lVar7,cVar21);
      }
      lVar9 = plVar22[1];
      for (lVar7 = *plVar22; lVar7 != lVar9; lVar7 = lVar7 + 0x28) {
        lVar14 = FUN_00b174c8(lVar7);
        if ((*(byte *)(lVar14 + 0x23) & 1) != 0) {
          uVar18 = 6;
          goto LAB_00bef6f4;
        }
        uVar15 = FUN_00bf4974();
        if ((uVar15 & 1) != 0) {
          uVar18 = 5;
          goto LAB_00bef6f4;
        }
      }
      uVar18 = 0;
LAB_00bef6f4:
      lVar7 = FUN_0066631c("WebRTC.PeerConnection.NegotiatedFeedbackType",0x2c,6);
      puVar11 = local_80;
      if (lVar7 != 0) {
        FUN_00666568(lVar7,uVar18);
        puVar11 = local_80;
      }
      goto joined_r0x00bef718;
    }
  }
  else {
    piVar8 = (int *)(**(code **)(*param_1 + 0xd0))(param_1);
    if ((*piVar8 == 2) || (piVar8 = (int *)(**(code **)(*param_1 + 0xd0))(param_1), *piVar8 == 1)) {
      lVar7 = 0xd0;
      goto LAB_00bef514;
    }
  }
  uVar15 = FUN_00417e08();
  puVar11 = local_80;
  if ((uVar15 & 1) == 0) {
    local_118 = "../../pc/peer_connection.cc";
    local_110 = 0x42a9;
    local_108 = &uStack_119;
    ppcStack_f8 = &local_118;
    local_100 = "Connection established without an answer, local=";
    puVar16 = (undefined4 *)(**(code **)(*param_1 + 200))(param_1);
    local_120 = *puVar16;
    FUN_00bfcfb0(&local_c0,&local_120);
    if ((long)local_b0 < 0) {
      FUN_005478d8(&local_f0,local_c0,puStack_b8);
      local_d8 = &local_100;
      if ((long)local_b0 < 0) {
        operator_delete(local_c0);
      }
    }
    else {
      local_d8 = &local_100;
      puStack_e8 = puStack_b8;
      local_f0 = local_c0;
      local_e0 = local_b0;
    }
    pppppppbStack_c8 = (byte *******)&local_f0;
    local_d0 = (byte ******)0x1ee986;
    puVar16 = (undefined4 *)(**(code **)(*param_1 + 0xd0))(param_1);
    local_124 = *puVar16;
    FUN_00bfcfb0(&local_68,&local_124);
    local_b0 = (undefined1 *)CONCAT17(uStack_51,local_58);
    local_a8 = &local_d0;
    puStack_b8 = puStack_60;
    local_c0 = local_68;
    pppppbVar2 = pppppppbStack_c8[3][1];
    FUN_00623bb0("\r\t\n\t\n",*pppppbVar2,*(undefined4 *)(pppppbVar2 + 1),*pppppppbStack_c8[3],
                 pppppppbStack_c8,local_d0,&local_c0);
    if ((long)local_b0 < 0) {
      operator_delete(local_c0);
    }
    puVar11 = local_80;
    if ((long)local_e0 < 0) {
      operator_delete(local_f0);
      puVar11 = local_80;
    }
  }
joined_r0x00bef718:
  local_80 = puVar11;
  puVar10 = puStack_78;
  if (puVar11 != (undefined8 *)0x0) {
    while (puVar11 != puVar10) {
      puVar23 = puVar10 + -0xe;
      if (puVar23 == (undefined8 *)0x0) goto LAB_00bef8c0;
      FUN_00b194c8(puVar10 + -0xb);
      pcVar12 = (char *)((long)puVar10 + -0x59);
      puVar10 = puVar23;
      if (*pcVar12 < '\0') {
        operator_delete((void *)*puVar23);
      }
    }
    puStack_78 = puVar11;
    operator_delete(local_80);
  }
  return;
}


// ===== 00bef8ec  FUN_00bef8ec =====

void FUN_00bef8ec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined8 *local_28;
  
  local_28 = param_2;
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x328))(param_1,0x80);
    uVar1 = FUN_007e9674(param_2 + 0xe);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*param_1 + 0x328))(param_1,0x800);
    }
    uVar1 = FUN_007e95a4(param_2 + 0xe);
    if ((uVar1 & 1) != 0) {
      (**(code **)(*param_1 + 0x328))(param_1,0x2000);
    }
    if (*(int *)(param_2 + 0x12) == 10) {
      (**(code **)(*param_1 + 0x328))(param_1,0x8000);
    }
    (**(code **)(*param_1 + 0xb8))(param_1);
    local_50[0] = &local_28;
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bfd140;
    (**(code **)(*param_1 + 0x2a8))(param_1,local_50);
    (*local_40)(0,local_50,local_50);
    param_2 = local_28;
  }
  local_28 = (undefined8 *)0x0;
  if (param_2 != (undefined8 *)0x0) {
    FUN_00aff0f8(param_2 + 4);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      operator_delete((void *)*param_2);
    }
    operator_delete(param_2);
  }
  return;
}


// ===== 00befa30  FUN_00befa30 =====

void FUN_00befa30(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 **local_240 [2];
  code *local_230;
  code *pcStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  uVar2 = (**(code **)(*param_1 + 0x2b0))();
  if ((uVar2 & 1) == 0) {
    lVar3 = *param_4;
    lVar1 = param_4[1];
    if (lVar3 != lVar1) {
      do {
        puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
        local_210 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
        local_190 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
        local_170 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        local_130 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
        local_110 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        local_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
        local_220 = &DAT_aaaaaaaaaaaaaaaa;
        local_70 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00afd3f8(&local_220,param_2,param_3,0xffffffff,lVar3);
        local_230 = FUN_004473ec;
        pcStack_228 = FUN_00bfd190;
        local_240[0] = &local_220;
        (**(code **)(*param_1 + 0x2a8))(param_1,local_240);
        (*local_230)(0,local_240,local_240);
        FUN_00aff0f8(&puStack_200);
        if ((long)local_210 < 0) {
          operator_delete(local_220);
        }
        lVar3 = lVar3 + 0x198;
      } while (lVar3 != lVar1);
    }
  }
  return;
}


// ===== 00befb74  FUN_00befb74 =====

long FUN_00befb74(long param_1)

{
  return param_1 + 8;
}


// ===== 00befb80  FUN_00befb80 =====

long FUN_00befb80(long param_1)

{
  return param_1 + 0x1a0;
}


// ===== 00befb8c  FUN_00befb8c =====

/* WARNING: Removing unreachable block (ram,0x00befd2c) */
/* WARNING: Removing unreachable block (ram,0x00befda8) */
/* WARNING: Removing unreachable block (ram,0x00befd84) */

char FUN_00befb8c(long *param_1,undefined8 ****param_2,long **param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined8 ***__src;
  long **__n;
  ulong uVar7;
  undefined8 ****__dest;
  undefined8 ***local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined1 uStack_81;
  long *local_80;
  undefined8 ***pppuStack_78;
  undefined8 **local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  ulong local_58;
  undefined8 ***local_50;
  long **local_48;
  
  local_50 = param_2;
  local_48 = param_3;
  uVar7 = FUN_00417e08();
  if ((uVar7 & 1) == 0) {
    FUN_00623bb0(&DAT_0021f2ce,"../../pc/peer_connection.cc",0x46c9,"Creating data channel, mid=",
                 &local_50);
  }
  pppuStack_78 = &local_50;
  local_a0 = &local_70;
  pplStack_98 = &local_80;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 ***)0xaaaaaaaaaaaaaa00;
  local_58 = 0xaaaaaaaaaaaaaa00;
  local_80 = param_1;
  (**(code **)(**(long **)(param_1[8] + 0x20) + 0x60))
            (*(long **)(param_1[8] + 0x20),&local_a0,FUN_00bfd1c8,&uStack_81);
  __n = local_48;
  __src = local_50;
  cVar6 = (char)local_58;
  if ((char)local_58 == '\x01') {
    if ((long **)0x7ffffffffffffff6 < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_005d45ec();
    }
    if (local_48 < (long **)0x17) {
      local_90 = CONCAT17((char)local_48,(undefined7)local_90);
      __dest = &local_a0;
    }
    else {
      uVar7 = ((ulong)local_48 & 0x7ffffffffffffff8) + 8;
      uVar1 = 0x19;
      if (uVar7 != 0x18) {
        uVar1 = uVar7;
      }
      __dest = (undefined8 ****)operator_new(uVar1);
      local_90 = uVar1 | 0x8000000000000000;
      pplStack_98 = __n;
      local_a0 = __dest;
    }
    if ((undefined8 ****)((long)__dest + (long)__n) < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((__dest <= __src) && (__src < (undefined8 ****)((long)__dest + (long)__n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,__src,(size_t)__n);
    lVar2 = param_1[0x72];
    *(undefined1 *)((long)__dest + (long)__n) = 0;
    if ((char)lVar2 == '\x01') {
      if (*(char *)((long)param_1 + 0x38f) < '\0') {
        operator_delete((void *)param_1[0x6f]);
      }
    }
    else {
      if (param_1 + 0x6f == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)(param_1 + 0x72) = 1;
    }
    puVar5 = local_60;
    puVar4 = puStack_68;
    ppuVar3 = local_70;
    param_1[0x70] = (long)pplStack_98;
    param_1[0x6f] = (long)local_a0;
    param_1[0x71] = local_90;
    if ((local_58 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    if (*(char *)((long)param_1 + 0x3cf) < '\0') {
      operator_delete((void *)param_1[0x77]);
    }
    param_1[0x78] = (long)puVar4;
    param_1[0x77] = (long)ppuVar3;
    param_1[0x79] = (long)puVar5;
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  return cVar6;
}


// ===== 00befe1c  FUN_00befe1c =====

void FUN_00befe1c(long param_1)

{
  FUN_00befb8c(param_1 + -8);
  return;
}


// ===== 00befe28  FUN_00befe28 =====

void FUN_00befe28(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 local_50;
  undefined7 uStack_4f;
  long lStack_48;
  undefined7 local_40;
  char cStack_39;
  undefined1 uStack_31;
  long *local_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x4769,"Data channel not configured."
                  );
      return;
    }
  }
  else {
    local_30 = param_1;
    uStack_28 = param_2;
    (**(code **)(**(long **)(param_1[8] + 0x20) + 0x60))
              (*(long **)(param_1[8] + 0x20),&local_30,FUN_00bfd2dc,&uStack_31);
    if ((char)param_1[0x72] == '\x01') {
      if (*(char *)((long)param_1 + 0x38f) < '\0') {
        operator_delete((void *)param_1[0x6f]);
      }
      *(undefined1 *)(param_1 + 0x72) = 0;
    }
    FUN_005d3510(&local_50,&DAT_001b3348);
    if (*(char *)((long)param_1 + 0x3cf) < '\0') {
      operator_delete((void *)param_1[0x77]);
    }
    lVar1 = CONCAT17(cStack_39,local_40);
    cStack_39 = '\0';
    param_1[0x78] = lStack_48;
    param_1[0x77] = CONCAT71(uStack_4f,local_50);
    param_1[0x79] = lVar1;
    local_50 = 0;
    (**(code **)(*param_1 + 0xb8))(param_1);
    if (cStack_39 < '\0') {
      operator_delete((void *)CONCAT71(uStack_4f,local_50));
    }
  }
  return;
}


// ===== 00beff54  FUN_00beff54 =====

void FUN_00beff54(long param_1)

{
  FUN_00befe28(param_1 + -8);
  return;
}


// ===== 00beff60  FUN_00beff60 =====

void FUN_00beff60(long param_1)

{
  FUN_00c81abc(param_1 + 0x278);
  return;
}


// ===== 00beff6c  FUN_00beff6c =====

uint FUN_00beff6c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long ****pppplVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long ***ppplVar6;
  undefined4 uVar7;
  long **pplVar8;
  ulong uVar9;
  long ***ppplVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long ***local_78;
  long **local_70;
  undefined8 local_68;
  
  (**(code **)(*(long *)param_1[0x42] + 0x10))();
  uVar11 = *(uint *)(param_1[0x42] + 0xc);
  plVar4 = (long *)(**(code **)(*param_1 + 0x388))(param_1);
  (**(code **)(*plVar4 + 0x10))(&local_78,plVar4,"WebRTC-IPv6Default",0x12);
  if (-1 < (char)local_68._7_1_) {
    local_70 = (long **)(ulong)local_68._7_1_;
  }
  if (local_70 < 8) {
    bVar3 = false;
  }
  else {
    pppplVar1 = (long ****)local_78;
    if (-1 < (char)local_68._7_1_) {
      pppplVar1 = &local_78;
    }
    bVar3 = *pppplVar1 == (long ***)0x64656c6261736944;
  }
  if ((char)local_68._7_1_ < '\0') {
    operator_delete(local_78);
  }
  uVar11 = uVar11 | 0x4140;
  uVar13 = uVar11 & 0xffffffbf;
  if (!bVar3) {
    uVar13 = uVar11;
  }
  if (*(char *)(param_4 + 0x44) == '\x01') {
    uVar13 = uVar13 & 0xffffbfff;
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x48a1,
                   "IPv6 candidates on Wi-Fi are disabled.");
    }
  }
  if (*(int *)(param_4 + 0x58) == 1) {
    uVar13 = uVar13 | 8;
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x48c9,"TCP candidates are disabled."
                  );
    }
  }
  if (*(int *)(param_4 + 0x5c) == 1) {
    uVar13 = uVar13 | 0x2000;
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x48f9,
                   "Do not gather candidates on high-cost networks");
    }
  }
  if (*(char *)(param_4 + 0x4c) == '\x01') {
    uVar13 = uVar13 | 0x10000;
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x4921,
                   "Disable candidates on link-local network interfaces.");
    }
  }
  *(uint *)(param_1[0x42] + 0xc) = uVar13;
  *(undefined4 *)(param_1[0x42] + 0x1c) = 0x32;
  uVar11 = *(int *)(param_4 + 0x18) - 1;
  if (uVar11 < 3) {
    uVar7 = *(undefined4 *)(&DAT_00258180 + (ulong)uVar11 * 4);
  }
  else {
    uVar7 = 0;
  }
  FUN_00be3f50(param_1[0x42],uVar7);
  *(undefined4 *)(param_1[0x42] + 0x18) = *(undefined4 *)(param_4 + 0x48);
  lVar12 = *param_3;
  lVar2 = param_3[1];
  local_78 = (long ***)0x0;
  local_70 = (long **)0x0;
  local_68 = 0;
  uVar5 = lVar2 - lVar12;
  if (uVar5 != 0) {
    if (0x199999999999999 < (ulong)(((long)uVar5 >> 5) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_00be2894();
    }
    ppplVar6 = (long ***)operator_new(uVar5);
    lVar15 = 0;
    uVar14 = 0xffffffffffffffff;
    local_68 = (long)ppplVar6 + uVar5;
    local_78 = ppplVar6;
    do {
      if ((long)ppplVar6 + lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00be2b28((long)ppplVar6 + lVar15,lVar12);
      lVar12 = lVar12 + 0xa0;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0xa0;
    } while (lVar12 != lVar2);
    local_70 = (long **)((long)ppplVar6 + lVar15);
    if (lVar15 != 0) {
      pplVar8 = (long **)param_1[0x47];
      if ((uVar14 & 0x7ffffffffffffff) != 0) {
        uVar5 = (uVar14 & 0x7ffffffffffffff) + 1;
        ppplVar10 = ppplVar6 + 0x24;
        uVar9 = uVar5 & 0xffffffffffffffe;
        ppplVar6 = ppplVar6 + uVar9 * 0x14;
        uVar14 = (uVar14 & 0x7ffffffffffffff) + 1 & 0xffffffffffffffe;
        do {
          ppplVar10[-0x14] = pplVar8;
          uVar14 = uVar14 - 2;
          *ppplVar10 = pplVar8;
          ppplVar10 = ppplVar10 + 0x28;
        } while (uVar14 != 0);
        if (uVar5 == uVar9) goto LAB_00bf0278;
      }
      ppplVar6 = ppplVar6 + -0x14;
      do {
        ppplVar6[0x24] = pplVar8;
        ppplVar6 = ppplVar6 + 0x14;
      } while ((long ***)local_70 + -0x14 != ppplVar6);
    }
  }
LAB_00bf0278:
  uVar7 = *(undefined4 *)(param_4 + 0xa0);
  if (*(char *)(param_4 + 0x9c) != '\0') {
    uVar7 = 1;
  }
  FUN_00be33c8(param_1[0x42],param_2,&local_78,*(undefined4 *)(param_4 + 0x40),uVar7,
               *(undefined8 *)(param_4 + 0xe0),param_4 + 0xd8);
  ppplVar10 = local_78;
  ppplVar6 = (long ***)local_70;
  if (local_78 != (long ***)0x0) {
    while (ppplVar10 != ppplVar6) {
      ppplVar6 = ppplVar6 + -0x14;
      if (ppplVar6 == (long ***)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00be2ca4(ppplVar6);
    }
    local_70 = (long **)ppplVar10;
    operator_delete(local_78);
  }
  return uVar13 >> 6 & 1;
}


// ===== 00bf033c  FUN_00bf033c =====

uint FUN_00bf033c(long param_1,undefined8 param_2,long *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  void *local_80;
  void *local_78;
  long local_70;
  undefined8 local_68;
  
  if (param_4 - 1U < 3) {
    uVar6 = *(undefined4 *)(&DAT_00258180 + (ulong)(param_4 - 1U) * 4);
  }
  else {
    uVar6 = 0;
  }
  local_68 = param_8;
  FUN_00be3f50(*(undefined8 *)(param_1 + 0x210),uVar6);
  lVar8 = *param_3;
  lVar1 = param_3[1];
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  uVar2 = lVar1 - lVar8;
  if (uVar2 != 0) {
    if (0x199999999999999 < (ulong)(((long)uVar2 >> 5) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_00be2894();
    }
    pvVar5 = operator_new(uVar2);
    lVar11 = 0;
    uVar12 = 0xffffffffffffffff;
    local_70 = (long)pvVar5 + uVar2;
    local_80 = pvVar5;
    do {
      if ((long)pvVar5 + lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00be2b28((long)pvVar5 + lVar11,lVar8);
      lVar8 = lVar8 + 0xa0;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0xa0;
    } while (lVar8 != lVar1);
    local_78 = (void *)((long)pvVar5 + lVar11);
    if (lVar11 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x238);
      if ((uVar12 & 0x7ffffffffffffff) != 0) {
        uVar2 = (uVar12 & 0x7ffffffffffffff) + 1;
        puVar10 = (undefined8 *)((long)pvVar5 + 0x120);
        uVar9 = uVar2 & 0xffffffffffffffe;
        pvVar5 = (void *)((long)pvVar5 + uVar9 * 0xa0);
        uVar12 = (uVar12 & 0x7ffffffffffffff) + 1 & 0xffffffffffffffe;
        do {
          puVar10[-0x14] = uVar7;
          uVar12 = uVar12 - 2;
          *puVar10 = uVar7;
          puVar10 = puVar10 + 0x28;
        } while (uVar12 != 0);
        if (uVar2 == uVar9) goto LAB_00bf048c;
      }
      lVar8 = (long)pvVar5 + -0xa0;
      do {
        *(undefined8 *)(lVar8 + 0x120) = uVar7;
        lVar8 = lVar8 + 0xa0;
      } while ((long)local_78 + -0xa0 != lVar8);
    }
  }
LAB_00bf048c:
  uVar4 = FUN_00be33c8(*(undefined8 *)(param_1 + 0x210),param_2,&local_80,param_5,param_6,param_7,
                       &local_68);
  pvVar3 = local_80;
  pvVar5 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar5) {
      pvVar5 = (void *)((long)pvVar5 + -0xa0);
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00be2ca4(pvVar5);
    }
    local_78 = pvVar3;
    operator_delete(local_80);
  }
  return uVar4 & 1;
}


// ===== 00bf0548  FUN_00bf0548 =====

ulong FUN_00bf0548(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x3b0) == '\x01') {
    lVar3 = (long)*(char *)(param_1 + 0x3af);
    if (lVar3 < 0) {
      lVar2 = *(long *)(param_1 + 0x398);
      lVar3 = *(long *)(param_1 + 0x3a0);
    }
    else {
      lVar2 = param_1 + 0x398;
    }
    uVar1 = FUN_00c35a2c(*(undefined8 *)(param_1 + 0x498),lVar2,lVar3);
    return uVar1 & 0xffffffffff;
  }
  return 0;
}


// ===== 00bf05a0  FUN_00bf05a0 =====

ulong FUN_00bf05a0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x3a8) == '\x01') {
    lVar3 = (long)*(char *)(param_1 + 0x3a7);
    if (lVar3 < 0) {
      lVar2 = *(long *)(param_1 + 0x390);
      lVar3 = *(long *)(param_1 + 0x398);
    }
    else {
      lVar2 = param_1 + 0x390;
    }
    uVar1 = FUN_00c35a2c(*(undefined8 *)(param_1 + 0x490),lVar2,lVar3);
    return uVar1 & 0xffffffffff;
  }
  return 0;
}


// ===== 00bf05f8  FUN_00bf05f8 =====

undefined8 FUN_00bf05f8(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = (**(code **)(*param_1 + 200))();
  if ((lVar2 == 0) || (lVar2 = (**(code **)(*param_1 + 0xd0))(param_1), lVar2 == 0)) {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x4b89,
                   "Local and Remote descriptions must be applied to get the SSL Role of the session."
                  );
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x2f8))(param_1);
    uVar4 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    uVar4 = FUN_00c35a2c(uVar3,puVar1,uVar4);
    if ((uVar4 >> 0x20 & 1) != 0) {
      *param_3 = (int)uVar4;
      return 1;
    }
  }
  return 0;
}


// ===== 00bf06b8  FUN_00bf06b8 =====

void FUN_00bf06b8(long param_1)

{
  FUN_00c99c88(param_1 + 0x3d8);
  return;
}


// ===== 00bf06c4  FUN_00bf06c4 =====

void FUN_00bf06c4(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(char *)(param_2 + 0x390) == '\x01') && (*(long *)(param_2 + 0x4a0) != 0)) {
    if (*(char *)(param_2 + 0x3cf) < '\0') {
      FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x3b8),*(undefined8 *)(param_2 + 0x3c0));
      uVar1 = 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x3b8);
      uVar2 = *(undefined8 *)(param_2 + 0x3c8);
      param_1[1] = *(undefined8 *)(param_2 + 0x3c0);
      *param_1 = uVar3;
      param_1[2] = uVar2;
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}


// ===== 00bf0744  FUN_00bf0744 =====

void FUN_00bf0744(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_2 + 0x390);
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (cVar1 == '\x01') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)(param_2 + 0x38f) < '\0') {
      FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x378),*(undefined8 *)(param_2 + 0x380));
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x378);
      uVar2 = *(undefined8 *)(param_2 + 0x388);
      param_1[1] = *(undefined8 *)(param_2 + 0x380);
      *param_1 = uVar3;
      param_1[2] = uVar2;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}


// ===== 00bf07cc  FUN_00bf07cc =====

void FUN_00bf07cc(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_2 + 0x388);
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (cVar1 == '\x01') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (*(char *)(param_2 + 0x387) < '\0') {
      FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x370),*(undefined8 *)(param_2 + 0x378));
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x370);
      uVar2 = *(undefined8 *)(param_2 + 0x380);
      param_1[1] = *(undefined8 *)(param_2 + 0x378);
      *param_1 = uVar3;
      param_1[2] = uVar2;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}


// ===== 00bf0854  FUN_00bf0854 =====

void FUN_00bf0854(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_007ebde8(*(undefined8 *)(param_2 + 600));
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00bf089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x210) + 0x40))(*(long **)(param_2 + 0x210),param_1);
    return;
  }
  return;
}


// ===== 00bf08b0  FUN_00bf08b0 =====

void FUN_00bf08b0(undefined8 *param_1,long param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  void *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  void *pvStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined1 local_94 [4];
  char **local_90;
  char *local_88;
  char *pcStack_80;
  undefined1 uStack_71;
  long *local_70;
  undefined8 *puStack_68;
  
  if (((DAT_00dbade8 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbade8), iVar2 != 0)) {
    DAT_00dbade0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbade8);
  }
  local_90 = (char **)0x0;
  pcStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbade0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbade0,"PeerConnection::GetTransportStatsByNames",0,0,0,0,0,0);
    local_88 = DAT_00dbade0;
    pcStack_80 = "PeerConnection::GetTransportStatsByNames";
    local_90 = &local_88;
  }
  uVar3 = FUN_007ebde8(*(undefined8 *)(param_2 + 600));
  if ((uVar3 & 1) == 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 1;
  }
  else {
    local_94[0] = 0xaa;
    FUN_007e0b10(local_94);
    plVar10 = (long *)*param_3;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 1;
    while (plVar10 != param_3 + 1) {
      pvStack_b8 = (void *)0x0;
      local_c0 = 0;
      local_a8 = 0;
      local_b0 = (void *)0x0;
      uStack_c8 = 0;
      local_d0 = (void *)0x0;
      lVar6 = (long)*(char *)((long)plVar10 + 0x37);
      if (lVar6 < 0) {
        lVar5 = plVar10[4];
        lVar6 = plVar10[5];
      }
      else {
        lVar5 = (long)(plVar10 + 4);
      }
      uVar3 = FUN_00c3617c(*(undefined8 *)(param_2 + 0x498),lVar5,lVar6,&local_d0);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_004249b0();
        if ((uVar3 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e90,"../../pc/peer_connection.cc",0x4db3,
                       "Failed to get transport stats for transport_name=",plVar10 + 4);
        }
        pvVar9 = pvStack_b8;
        pvVar8 = local_b0;
        if (pvStack_b8 != (void *)0x0) {
          while (pvVar9 != pvVar8) {
            pvVar8 = (void *)((long)pvVar8 + -0xc0);
            if (pvVar8 == (void *)0x0) goto LAB_00bf0be0;
            FUN_00c720b0(pvVar8);
          }
          local_b0 = pvVar9;
          operator_delete(pvStack_b8);
        }
      }
      else {
        local_70 = plVar10 + 4;
        puStack_68 = param_1;
        lVar6 = FUN_00bfd370(&puStack_68,plVar10 + 4,&DAT_001f94c3,&local_70,&uStack_71);
        if (*(char *)(lVar6 + 0x4f) < '\0') {
          operator_delete(*(void **)(lVar6 + 0x38));
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x40) = 0;
          *(undefined8 *)(lVar6 + 0x48) = 0;
        }
        *(ulong *)(lVar6 + 0x48) = local_c0;
        *(undefined8 *)(lVar6 + 0x40) = uStack_c8;
        *(void **)(lVar6 + 0x38) = local_d0;
        local_c0 = local_c0 & 0xffffffffffffff;
        local_d0 = (void *)((ulong)local_d0 & 0xffffffffffffff00);
        puVar7 = (undefined8 *)(lVar6 + 0x50);
        pvVar8 = (void *)*puVar7;
        if (pvVar8 != (void *)0x0) {
          pvVar9 = *(void **)(lVar6 + 0x58);
          pvVar4 = pvVar8;
          if (pvVar8 != pvVar9) {
            do {
              pvVar9 = (void *)((long)pvVar9 + -0xc0);
              if (pvVar9 == (void *)0x0) {
LAB_00bf0be0:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              FUN_00c720b0(pvVar9);
            } while (pvVar9 != pvVar8);
            pvVar4 = (void *)*puVar7;
          }
          *(void **)(lVar6 + 0x58) = pvVar8;
          operator_delete(pvVar4);
          *puVar7 = 0;
          *(undefined8 *)(lVar6 + 0x58) = 0;
          *(undefined8 *)(lVar6 + 0x60) = 0;
        }
        *(void **)(lVar6 + 0x50) = pvStack_b8;
        *(void **)(lVar6 + 0x58) = local_b0;
        *(undefined8 *)(lVar6 + 0x60) = local_a8;
        pvStack_b8 = (void *)0x0;
        local_b0 = (void *)0x0;
        local_a8 = 0;
      }
      if ((long)local_c0 < 0) {
        operator_delete(local_d0);
        plVar11 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) goto LAB_00bf0b48;
LAB_00bf0b38:
        do {
          plVar10 = plVar11;
          plVar11 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      else {
        plVar11 = (long *)plVar10[1];
        if ((long *)plVar10[1] != (long *)0x0) goto LAB_00bf0b38;
LAB_00bf0b48:
        do {
          plVar11 = (long *)plVar10[2];
          bVar1 = plVar10 != (long *)*plVar11;
          plVar10 = plVar11;
        } while (bVar1);
      }
    }
    FUN_007e0b18(local_94);
  }
  if ((local_90 != (char **)0x0) && (**local_90 != '\0')) {
    FUN_0066d348(0x45,*local_90,local_90[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00bf0c24  FUN_00bf0c24 =====

bool FUN_00bf0c24(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  void *local_18;
  
  uVar5 = FUN_007ebde8(*(undefined8 *)(param_1 + 600));
  bVar3 = false;
  if ((param_3 != (long *)0x0) && ((uVar5 & 1) != 0)) {
    uVar5 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    FUN_00c35cc4(&local_18,*(undefined8 *)(param_1 + 0x498),puVar1,uVar5);
    pvVar2 = local_18;
    pvVar6 = (void *)*param_3;
    local_18 = (void *)0x0;
    *param_3 = (long)pvVar2;
    if (pvVar6 != (void *)0x0) {
      iVar4 = FUN_00d0f7a0(0xffffffff,pvVar6);
      if (iVar4 == 1) {
        FUN_00833e18(pvVar6);
        operator_delete(pvVar6);
      }
      pvVar2 = local_18;
      if ((local_18 != (void *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_18), iVar4 == 1)) {
        FUN_00833e18(pvVar2);
        operator_delete(pvVar2);
      }
    }
    bVar3 = *param_3 != 0;
  }
  return bVar3;
}


// ===== 00bf0d0c  FUN_00bf0d0c =====

void FUN_00bf0d0c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00c35d10(*(undefined8 *)(param_1 + 0x498),puVar2,uVar1);
  return;
}


// ===== 00bf0d30  FUN_00bf0d30 =====

void FUN_00bf0d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf0d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x4a8) + 0x50))();
  return;
}


// ===== 00bf0d44  FUN_00bf0d44 =====

void FUN_00bf0d44(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00c359c8(*(undefined8 *)(param_1 + 0x4a0),puVar2,uVar1);
  return;
}


// ===== 00bf0d68  FUN_00bf0d68 =====

void FUN_00bf0d68(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_00c359c8(*(undefined8 *)(param_1 + 0x498),puVar2,uVar1);
  return;
}


// ===== 00bf0d8c  FUN_00bf0d8c =====

/* WARNING: Removing unreachable block (ram,0x00bf0fe0) */
/* WARNING: Removing unreachable block (ram,0x00bf1010) */

void FUN_00bf0d8c(long *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 uStack_95;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  long *local_70;
  undefined1 *puStack_68;
  code *local_60;
  code *local_58;
  
  if (param_2 < 2) {
    if (param_2 == 0) {
      if ((*(uint *)((long)param_1 + 100) & 0xfffffffe) != 2) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 800);
      uVar9 = 5;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 800);
      uVar9 = 4;
    }
  }
  else {
    if (param_2 == 2) {
      uVar4 = FUN_00417e08();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x4f71,
                     "Changing to ICE connected state because all transports are writable.");
      }
      local_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      if (*(char *)(param_1[8] + 5) == '\x01') {
        lVar5 = (**(code **)(*param_1 + 0x2e8))(param_1);
        lVar12 = *(long *)(lVar5 + 0x30);
        lVar5 = *(long *)(lVar5 + 0x38);
        uVar4 = lVar5 - lVar12;
        if (uVar4 != 0) {
          if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00bf3e88();
          }
          pvVar6 = operator_new(uVar4);
          lVar13 = 0;
          do {
            if ((long *)((long)pvVar6 + lVar13) == (long *)0x0) goto LAB_00bf11e8;
            puVar7 = *(undefined8 **)(lVar12 + lVar13);
            *(long *)((long)pvVar6 + lVar13) = (long)puVar7;
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)();
            }
            lVar13 = lVar13 + 8;
          } while (lVar12 + lVar13 != lVar5);
          if (lVar13 == 0) {
            if (pvVar6 == (void *)0x0) goto LAB_00bf1074;
          }
          else {
            plVar10 = (long *)((long)pvVar6 + lVar13);
            lVar12 = 0;
            lVar5 = -lVar13;
            do {
              if (*(long *)((*(long **)((long)pvVar6 + lVar12))[2] + 0xf0) != 0) {
                puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
                local_70 = (long *)&DAT_aaaaaaaaaaaaaaaa;
                local_58 = (code *)&DAT_aaaaaaaaaaaaaaaa;
                local_60 = (code *)&DAT_aaaaaaaaaaaaaaaa;
                (**(code **)(**(long **)((long)pvVar6 + lVar12) + 0x28))(&local_70);
                if ((char)local_58 == '\x01') {
                  local_94 = (**(code **)(**(long **)((long)pvVar6 + lVar12) + 0x20))();
                  if (puStack_88 < local_80) {
                    if (puStack_88 == (undefined8 *)0x0) {
LAB_00bf11e8:
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                                );
                    }
                    puStack_88[2] = local_60;
                    puStack_88[1] = puStack_68;
                    *puStack_88 = local_70;
                    *(undefined4 *)(puStack_88 + 3) = local_94;
                    puStack_88 = puStack_88 + 4;
                  }
                  else {
                    puStack_88 = (undefined8 *)FUN_00bf4b44(&local_90,&local_70,&local_94);
                  }
                }
              }
              lVar2 = lVar12 - lVar13;
              lVar12 = lVar12 + 8;
            } while (lVar2 != -8);
            if (pvVar6 == (void *)0x0) goto LAB_00bf1074;
            do {
              plVar10 = plVar10 + -1;
              if (plVar10 == (long *)0x0) goto LAB_00bf11d4;
              if ((long *)*plVar10 != (long *)0x0) {
                (**(code **)(*(long *)*plVar10 + 8))();
              }
              lVar5 = lVar5 + 8;
            } while (lVar5 != 0);
          }
          operator_delete(pvVar6);
        }
      }
LAB_00bf1074:
      lVar12 = param_1[0x4b];
      plVar10 = *(long **)(param_1[8] + 0x20);
      if (lVar12 != 0) {
        FUN_00d0f740(1,lVar12);
      }
      puVar11 = local_80;
      puVar3 = puStack_88;
      puVar7 = local_90;
      local_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      local_80 = (undefined8 *)0x0;
      plVar8 = (long *)operator_new(0x20);
      *plVar8 = (long)param_1;
      plVar8[3] = (long)puVar11;
      plVar8[2] = (long)puVar3;
      plVar8[1] = (long)puVar7;
      local_70 = (long *)operator_new(0x30);
      *local_70 = lVar12;
      local_70[4] = (long)FUN_00bfd668;
      local_70[5] = (long)FUN_00bfd4ec;
      local_70[2] = (long)plVar8;
      local_60 = FUN_005db390;
      local_58 = FUN_005db348;
      (**(code **)(*plVar10 + 8))(plVar10,&local_70,&local_94,&uStack_95);
      (*local_60)(0,&local_70,&local_70);
      puVar3 = local_90;
      puVar7 = puStack_88;
      if (local_90 != (undefined8 *)0x0) {
        while (puVar3 != puVar7) {
          puVar11 = puVar7 + -4;
          if (puVar11 == (undefined8 *)0x0) {
LAB_00bf11d4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pcVar1 = (char *)((long)puVar7 + -9);
          puVar7 = puVar11;
          if (*pcVar1 < '\0') {
            operator_delete((void *)*puVar11);
          }
        }
        puStack_88 = puVar3;
        operator_delete(local_90);
      }
      (**(code **)(*param_1 + 800))(param_1,2);
      (**(code **)(*param_1 + 0x328))(param_1,0x200);
      return;
    }
    if (param_2 != 3) {
      return;
    }
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection.cc",0x5049,
                   "Changing to ICE completed state because all transports are complete.");
    }
    if (*(int *)((long)param_1 + 100) != 2) {
      (**(code **)(*param_1 + 800))(param_1,2);
    }
    (**(code **)(*param_1 + 800))(param_1,3);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x328);
    uVar9 = 0x200;
  }
                    /* WARNING: Could not recover jumptable at 0x00bf0e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar9);
  return;
}


// ===== 00bf1200  FUN_00bf1200 =====

void FUN_00bf1200(long *param_1,void *param_2,size_t param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  size_t *__s2;
  size_t sVar5;
  ulong uVar6;
  size_t *psVar7;
  void *local_60;
  size_t sStack_58;
  
  local_60 = param_2;
  sStack_58 = param_3;
  lVar2 = (**(code **)(*param_1 + 200))();
  if (lVar2 != 0) {
    lVar3 = (**(code **)(*param_1 + 200))(param_1);
    lVar2 = **(long **)(lVar3 + 0x38);
    lVar3 = (*(long **)(lVar3 + 0x38))[1] - lVar2;
    if (lVar3 != 0) {
      uVar6 = 0;
      psVar7 = (size_t *)(lVar2 + 0x10);
      do {
        sVar5 = (size_t)*(char *)((long)psVar7 + 0xf);
        if ((long)sVar5 < 0) {
          __s2 = (size_t *)psVar7[-1];
          sVar5 = *psVar7;
        }
        else {
          __s2 = psVar7 + -1;
        }
        if ((param_3 == sVar5) && (iVar1 = memcmp(param_2,__s2,param_3), iVar1 == 0)) {
          lVar2 = *param_4;
          if (lVar2 == param_4[1]) {
            return;
          }
          do {
            pvVar4 = operator_new(0x1b8);
            FUN_00afd3f8(pvVar4,param_2,param_3,uVar6 & 0xffffffff,lVar2);
            FUN_00cb3d88(param_1[0x95],pvVar4);
            FUN_00bef8ec(param_1,pvVar4);
            lVar2 = lVar2 + 0x198;
          } while (lVar2 != param_4[1]);
          return;
        }
        uVar6 = uVar6 + 1;
        psVar7 = psVar7 + 5;
      } while ((lVar3 >> 3) * -0x3333333333333333 - uVar6 != 0);
    }
  }
  uVar6 = FUN_004249b0();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001ff3ea,"../../pc/peer_connection.cc",0x510b,
                 "OnTransportControllerCandidatesGathered: content name ",&local_60," not found");
  }
  return;
}


// ===== 00bf1370  FUN_00bf1370 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf1370(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 uStack_39;
  long local_38;
  undefined8 *local_30;
  long *local_28;
  
  uVar3 = FUN_007e18fc(*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x30));
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x40) + 0x30);
    *param_1 = 0;
    param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
    uVar2 = _UNK_001f3068;
    uVar1 = _DAT_001f3060;
    local_28 = &local_38;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    local_38 = param_2;
    local_30 = param_1;
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_30,FUN_00bfd748,&uStack_39);
  }
  else {
    local_30 = (undefined8 *)CONCAT71(local_30._1_7_,0xaa);
    FUN_007e0b10(&local_30);
    if (*(long **)(param_2 + 0x240) == (long *)0x0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 5) = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
    }
    else {
      (**(code **)(**(long **)(param_2 + 0x240) + 0x70))(param_1);
    }
    FUN_007e0b18(&local_30);
  }
  return;
}


// ===== 00bf1470  FUN_00bf1470 =====

void FUN_00bf1470(undefined1 *param_1,long param_2)

{
  long *plVar1;
  
  if (*(char *)(*(long *)(param_2 + 0x40) + 5) == '\x01') {
    plVar1 = (long *)FUN_00b96b10(*(undefined8 *)(param_2 + 0x248));
    plVar1 = (long *)(**(code **)(*plVar1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00bf14c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x70))(param_1);
    return;
  }
  *param_1 = 0;
  param_1[0x28] = 0;
  return;
}


// ===== 00bf14dc  FUN_00bf14dc =====

void FUN_00bf14dc(undefined8 *param_1,long param_2,undefined8 ****param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined8 ****__dest;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 ***local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 ***local_50;
  ulong uStack_48;
  
  local_50 = param_3;
  uStack_48 = param_4;
  if (0x7ffffffffffffff6 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_4 < 0x17) {
    local_58 = CONCAT17((char)param_4,(undefined7)local_58);
    __dest = &local_68;
  }
  else {
    uVar6 = (param_4 & 0x7ffffffffffffff8) + 8;
    uVar1 = 0x19;
    if (uVar6 != 0x18) {
      uVar1 = uVar6;
    }
    __dest = (undefined8 ****)operator_new(uVar1);
    local_58 = uVar1 | 0x8000000000000000;
    local_68 = __dest;
    uStack_60 = param_4;
  }
  if ((undefined8 ****)((long)__dest + param_4) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= param_3) && (param_3 < (undefined8 ****)((long)__dest + param_4))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,param_3,param_4);
  cVar2 = *(char *)(param_2 + 0x3b0);
  *(undefined1 *)((long)__dest + param_4) = 0;
  puVar8 = (undefined8 *)(param_2 + 0x398);
  if (cVar2 == '\x01') {
    if (*(char *)(param_2 + 0x3af) < '\0') {
      operator_delete(*(void **)(param_2 + 0x398));
    }
  }
  else {
    if (puVar8 == (undefined8 *)0x0) goto LAB_00bf1754;
    *(undefined1 *)(param_2 + 0x3b0) = 1;
  }
  *(ulong *)(param_2 + 0x3a0) = uStack_60;
  *puVar8 = local_68;
  *(ulong *)(param_2 + 0x3a8) = local_58;
  if ((*(byte *)(param_2 + 0x3b0) & 1) == 0) {
LAB_00bf1718:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  if (*(char *)(param_2 + 0x3af) < '\0') {
    lVar4 = FUN_00c35720(*(undefined8 *)(param_2 + 0x498),*(undefined8 *)(param_2 + 0x398),
                         *(undefined8 *)(param_2 + 0x3a0));
  }
  else {
    lVar4 = FUN_00c35720(*(undefined8 *)(param_2 + 0x498),param_2 + 0x398);
  }
  if (lVar4 == 0) {
    uVar6 = FUN_004249b0();
    if ((uVar6 & 1) == 0) {
      FUN_00623bb0(&DAT_0021f2ce,"../../pc/peer_connection.cc",0x53fb,
                   "Data channel transport is not available for data channels, mid=",&local_50);
    }
    if (*(char *)(param_2 + 0x3b0) == '\x01') {
      if (*(char *)(param_2 + 0x3af) < '\0') {
        operator_delete(*(void **)(param_2 + 0x398));
      }
      *(undefined1 *)(param_2 + 0x3b0) = 0;
    }
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    bVar3 = *(byte *)(param_2 + 0x3b0);
    param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
    *param_1 = &DAT_aaaaaaaaaaaaaaaa;
    param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
    param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if ((bVar3 & 1) == 0) goto LAB_00bf1718;
    lVar7 = (long)*(char *)(param_2 + 0x3af);
    if (lVar7 < 0) {
      puVar8 = *(undefined8 **)(param_2 + 0x398);
      lVar7 = *(long *)(param_2 + 0x3a0);
    }
    puVar8 = (undefined8 *)FUN_00c35754(*(undefined8 *)(param_2 + 0x498),puVar8,lVar7);
    if (puVar8 == (undefined8 *)0x0) {
      FUN_005d3510(&local_68,&DAT_001b3348);
      if (param_1 == (undefined8 *)0x0) {
LAB_00bf1754:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[1] = uStack_60;
      *param_1 = local_68;
      param_1[2] = local_58;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      FUN_00600e24(param_1,uVar5);
    }
    FUN_00c99a18(param_2 + 0x3d8,lVar4);
  }
  return;
}


// ===== 00bf176c  FUN_00bf176c =====

void FUN_00bf176c(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  if (*(char *)(param_1 + 0x3b0) == '\x01') {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x3b0) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      FUN_00623bb0(&DAT_001f4e90,"../../pc/peer_connection.cc",0x54d1,
                   "Tearing down data channel transport for mid=",param_1 + 0x398);
    }
    if (*(char *)(param_1 + 0x3b0) == '\x01') {
      if (*(char *)(param_1 + 0x3af) < '\0') {
        operator_delete(*(void **)(param_1 + 0x398));
      }
      *(undefined1 *)(param_1 + 0x3b0) = 0;
    }
  }
  local_48[0] = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    FUN_005478d8(&local_40,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uStack_38 = *(undefined8 *)(param_2 + 4);
    local_40 = *(void **)(param_2 + 2);
    local_30 = *(long *)(param_2 + 6);
  }
  local_28 = (undefined3)param_2[8];
  uStack_25 = (undefined1)*(undefined4 *)((long)param_2 + 0x23);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_2 + 0x23) >> 8);
  FUN_00c99ba8(param_1 + 0x3d8,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bf1880  FUN_00bf1880 =====

undefined8 FUN_00bf1880(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 == param_3[1]) {
    return 1;
  }
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)param_2[1]) {
    do {
      auVar3 = FUN_00bfd9c4(param_3,piVar2 + 2);
      lVar1 = param_3[1];
      if (auVar3._0_8_ != auVar3._8_8_) {
        lVar1 = auVar3._0_8_;
      }
      if ((((param_3[1] != lVar1) && ((*(byte *)(piVar2 + 1) & 1) == 0)) &&
          ((*(byte *)((long)piVar2 + 5) & 1) == 0)) &&
         ((*piVar2 == 0 && (lVar1 = FUN_00b174c8(piVar2), *(char *)(lVar1 + 0x20) != '\x01')))) {
        return 0;
      }
      piVar2 = piVar2 + 10;
    } while (piVar2 != (int *)param_2[1]);
  }
  return 1;
}


// ===== 00bf1940  FUN_00bf1940 =====

undefined8 FUN_00bf1940(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 == param_3[1]) {
    return 1;
  }
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)param_2[1]) {
    do {
      auVar3 = FUN_00bfd9c4(param_3,piVar2 + 2);
      lVar1 = param_3[1];
      if (auVar3._0_8_ != auVar3._8_8_) {
        lVar1 = auVar3._0_8_;
      }
      if ((((param_3[1] != lVar1) && ((*(byte *)(piVar2 + 1) & 1) == 0)) &&
          ((*(byte *)((long)piVar2 + 5) & 1) == 0)) &&
         ((*piVar2 == 0 && (lVar1 = FUN_00b174c8(piVar2), *(char *)(lVar1 + 0x20) != '\x01')))) {
        return 0;
      }
      piVar2 = piVar2 + 10;
    } while (piVar2 != (int *)param_2[1]);
  }
  return 1;
}


// ===== 00bf1a00  FUN_00bf1a00 =====

void FUN_00bf1a00(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  puVar3 = PTR_s_BUNDLE_00d52600;
  uVar11 = *(undefined8 *)(param_2 + 0x38);
  sVar5 = strlen(PTR_s_BUNDLE_00d52600);
  uVar6 = FUN_00b17a18(uVar11,puVar3,sVar5);
  lVar8 = **(long **)(param_2 + 0x38);
  lVar2 = (*(long **)(param_2 + 0x38))[1];
  if (lVar8 == lVar2) {
    bVar1 = false;
    iVar12 = 0;
    iVar13 = 0;
  }
  else {
    iVar13 = 0;
    iVar12 = 0;
    iVar14 = 0;
    do {
      plVar7 = (long *)FUN_00b174c8(lVar8);
      iVar4 = (**(code **)(*plVar7 + 0x10))();
      if (iVar4 == 2) {
        iVar14 = iVar14 + 1;
      }
      else if (iVar4 == 1) {
        iVar12 = iVar12 + 1;
      }
      else if (iVar4 == 0) {
        iVar13 = iVar13 + 1;
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != lVar2);
    bVar1 = 0 < iVar14;
  }
  if (iVar13 == 0 && iVar12 == 0) {
    uVar10 = 4;
    if ((uVar6 & 1) == 0) {
      uVar10 = 1;
    }
    if (!bVar1) {
      uVar10 = 0;
    }
  }
  else if (*(int *)(param_1 + 0x168) == 0) {
    uVar10 = 7;
    if ((uVar6 & 1) != 0) {
      uVar10 = 8;
    }
  }
  else {
    if (iVar13 < 2 && iVar12 < 2) {
      uVar9 = 2;
      uVar10 = 5;
    }
    else {
      uVar9 = 3;
      uVar10 = 6;
    }
    if ((uVar6 & 1) == 0) {
      uVar10 = uVar9;
    }
  }
  lVar8 = FUN_0066631c("WebRTC.PeerConnection.BundleUsage",0x21,9);
  if (lVar8 != 0) {
    FUN_00666568(lVar8,uVar10);
    return;
  }
  return;
}


// ===== 00bf1b84  FUN_00bf1b84 =====

void FUN_00bf1b84(long param_1)

{
  FUN_00bf1a00(param_1 + -8);
  return;
}


// ===== 00bf1b90  FUN_00bf1b90 =====

void FUN_00bf1b90(long param_1)

{
  FUN_00ce1c44(param_1 + 0x3d0);
  return;
}


// ===== 00bf1b9c  FUN_00bf1b9c =====

void FUN_00bf1b9c(long param_1)

{
  FUN_00ce1c44(param_1 + 0x3c8);
  return;
}


// ===== 00bf1ba8  FUN_00bf1ba8 =====

void FUN_00bf1ba8(long param_1,undefined8 ***param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 **ppuVar3;
  undefined8 ***__dest;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 uStack_3d9;
  long local_3d8;
  undefined8 **local_3d0;
  ulong uStack_3c8;
  undefined8 local_3c0;
  undefined1 auStack_3b8 [408];
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 uStack_81;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00afef10(&local_220,param_4);
  local_130 = (undefined1 *)((ulong)local_130 & 0xffffffff00000000);
  FUN_00b008fc(&puStack_1e8,&DAT_001b3348,0);
  local_130 = (undefined1 *)((ulong)local_130 & 0xffffffff);
  lVar6 = *(long *)(param_1 + 600);
  plVar5 = *(long **)(*(long *)(param_1 + 0x40) + 0x20);
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6);
  }
  local_3d8 = param_1;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  __dest = &local_3d0;
  if (param_3 < 0x17) {
    local_3c0 = CONCAT17((char)param_3,(undefined7)local_3c0);
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_3c0 = uVar2 | 0x8000000000000000;
    local_3d0 = __dest;
    uStack_3c8 = param_3;
  }
  if (__dest <= (undefined8 ***)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 ***)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    FUN_00afef10(auStack_3b8,&local_220);
    plVar4 = (long *)operator_new(0x1b8);
    uVar1 = uStack_3c8;
    ppuVar3 = local_3d0;
    local_3d0 = (undefined8 **)0x0;
    uStack_3c8 = 0;
    *plVar4 = local_3d8;
    plVar4[2] = uVar1;
    plVar4[1] = (long)ppuVar3;
    plVar4[3] = local_3c0;
    local_3c0 = 0;
    FUN_00afef10(plVar4 + 4,auStack_3b8);
    local_80[0] = (long *)operator_new(0x30);
    *local_80[0] = lVar6;
    local_80[0][4] = (long)FUN_00bfdd44;
    local_80[0][5] = (long)FUN_00bfdaf4;
    local_80[0][2] = (long)plVar4;
    local_70 = FUN_005db390;
    pcStack_68 = FUN_005db348;
    (**(code **)(*plVar5 + 8))(plVar5,local_80,&uStack_81,&uStack_3d9);
    (*local_70)(0,local_80,local_80);
    FUN_00aff0f8(auStack_3b8);
    if ((long)local_3c0 < 0) {
      operator_delete(local_3d0);
    }
    FUN_00aff0f8(&local_220);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00bf1e14  FUN_00bf1e14 =====

void FUN_00bf1e14(long param_1)

{
  FUN_00bf1ba8(param_1 + -8);
  return;
}


// ===== 00bf1e20  FUN_00bf1e20 =====

undefined1 FUN_00bf1e20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}


// ===== 00bf1e2c  FUN_00bf1e2c =====

undefined1 FUN_00bf1e2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}


// ===== 00bf1e38  FUN_00bf1e38 =====

void FUN_00bf1e38(long *param_1,int param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  long *local_40 [2];
  code *local_30;
  code *local_28;
  
  if (param_2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
    if ((uVar1 & 1) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xe) = 0;
    pcVar3 = *(code **)(*param_1 + 0x2a8);
  }
  else {
    if (param_2 == 2) {
      uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar2 = 2;
    }
    else {
      if (param_2 != 1) {
        uVar1 = FUN_004249b0();
        if ((uVar1 & 1) != 0) {
          return;
        }
        FUN_00623bb0(&DAT_001f6220,"../../pc/peer_connection.cc",0x5aab,"Unknown state received: ",
                     param_2);
        return;
      }
      uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1);
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar2 = 1;
    }
    *(undefined4 *)(param_1 + 0xe) = uVar2;
    pcVar3 = *(code **)(*param_1 + 0x2a8);
  }
  local_28 = FUN_00bfd120;
  local_30 = FUN_004473ec;
  local_40[0] = param_1;
  (*pcVar3)(param_1,local_40);
  (*local_30)(0,local_40,local_40);
  return;
}


// ===== 00bf1f70  FUN_00bf1f70 =====

void FUN_00bf1f70(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *local_a0;
  ulong uStack_98;
  long local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  undefined4 local_28;
  undefined1 local_24 [4];
  
  if (((DAT_00dbadf8 & 1) == 0) && (iVar4 = FUN_0054fdd4(&DAT_00dbadf8), iVar4 != 0)) {
    DAT_00dbadf0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbadf8);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbadf0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbadf0,"PeerConnection::ReportTransportStats",0,0,0,0,0,0);
    local_50 = DAT_00dbadf0;
    pcStack_48 = "PeerConnection::ReportTransportStats";
    local_58 = &local_50;
  }
  local_24[0] = 0xaa;
  FUN_007e0b10(local_24);
  puVar6 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 4) {
    lVar11 = (long)*(char *)((long)puVar6 + 0x17);
    puVar9 = puVar6;
    if (lVar11 < 0) {
      lVar11 = puVar6[1];
      puVar9 = (undefined8 *)*puVar6;
    }
    plVar8 = (long *)FUN_00c356f8(*(undefined8 *)(param_1 + 0x498),puVar9,lVar11);
    if (plVar8 != (long *)0x0) {
      puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x18))();
      uStack_98 = puVar9[1];
      local_a0 = (undefined8 *)*puVar9;
      if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
        uStack_98 = (ulong)*(byte *)((long)puVar9 + 0x17);
        local_a0 = puVar9;
      }
      uVar7 = FUN_00bf22cc(&local_70,&local_a0);
      FUN_00bfe7f4(0,uVar7,uVar7,puVar6 + 3);
    }
  }
  puVar1 = local_70;
  puVar9 = local_70;
  puVar6 = local_68;
  if ((*(byte *)(param_1 + 0x3b0) & 1) != 0) {
    if (*(char *)(param_1 + 0x3af) < '\0') {
      puVar5 = (undefined8 *)
               FUN_00c35754(*(undefined8 *)(param_1 + 0x498),*(undefined8 *)(param_1 + 0x398),
                            *(undefined8 *)(param_1 + 0x3a0));
    }
    else {
      puVar5 = (undefined8 *)FUN_00c35754(*(undefined8 *)(param_1 + 0x498),param_1 + 0x398);
    }
    puVar1 = local_70;
    puVar9 = local_70;
    puVar6 = local_68;
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)(**(code **)*puVar5)();
      uStack_98 = puVar6[1];
      local_a0 = (undefined8 *)*puVar6;
      if (-1 < (char)*(byte *)((long)puVar6 + 0x17)) {
        uStack_98 = (ulong)*(byte *)((long)puVar6 + 0x17);
        local_a0 = puVar6;
      }
      uVar7 = FUN_00bf22cc(&local_70,&local_a0);
      local_28 = 2;
      FUN_00bfe8f0(0,uVar7,uVar7,&local_28);
      puVar1 = local_70;
      puVar9 = local_70;
      puVar6 = local_68;
    }
  }
  for (; puVar5 = local_68, local_70 = puVar9, puVar1 != local_68; puVar1 = puVar1 + 5) {
    pvStack_88 = (void *)0x0;
    local_90 = 0;
    local_78 = 0;
    local_80 = (void *)0x0;
    uStack_98 = 0;
    local_a0 = (undefined8 *)0x0;
    local_68 = puVar6;
    uVar10 = FUN_00c3617c(*(undefined8 *)(param_1 + 0x498),*puVar1,puVar1[1],&local_a0);
    if ((uVar10 & 1) != 0) {
      FUN_00bf23f8(&local_a0);
      FUN_00bf2668(*(undefined1 *)(param_1 + 0x61),&local_a0,puVar1 + 2);
    }
    pvVar3 = pvStack_88;
    pvVar2 = local_80;
    if (pvStack_88 != (void *)0x0) {
      while (pvVar3 != pvVar2) {
        pvVar2 = (void *)((long)pvVar2 + -0xc0);
        if (pvVar2 == (void *)0x0) goto LAB_00bf2288;
        FUN_00c720b0(pvVar2);
      }
      local_80 = pvVar3;
      operator_delete(pvStack_88);
    }
    if (local_90 < 0) {
      operator_delete(local_a0);
    }
    puVar9 = local_70;
    puVar6 = local_68;
    local_68 = puVar5;
  }
  local_68 = puVar6;
  if (puVar9 != (undefined8 *)0x0) {
    while (puVar9 != puVar6) {
      if (puVar6 + -5 == (undefined8 *)0x0) {
LAB_00bf2288:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      local_a0 = puVar6 + -3;
      FUN_00bf4c84(&local_a0,puVar6[-2]);
      puVar6 = puVar6 + -5;
    }
    local_68 = puVar9;
    operator_delete(local_70);
  }
  FUN_007e0b18(local_24);
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00bf22cc  FUN_00bf22cc =====

undefined8 * FUN_00bf22cc(long *param_1,undefined8 *param_2)

{
  size_t sVar1;
  void *__s2;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 **local_68;
  
  puVar7 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar5 = (long)puVar2 - (long)puVar7;
  if (lVar5 != 0) {
    __s2 = (void *)*param_2;
    uVar3 = param_2[1];
    uVar8 = (lVar5 >> 3) * -0x3333333333333333;
    do {
      uVar9 = uVar8 >> 1;
      puVar10 = puVar7 + uVar9 * 5;
      uVar4 = puVar10[1];
      sVar1 = uVar3;
      if (uVar4 <= uVar3) {
        sVar1 = uVar4;
      }
      iVar6 = memcmp((void *)*puVar10,__s2,sVar1);
      if (iVar6 == 0) {
        if (uVar4 < uVar3) goto LAB_00bf2320;
      }
      else if (iVar6 < 0) {
LAB_00bf2320:
        puVar7 = puVar10 + 5;
        uVar9 = uVar8 + ~uVar9;
      }
      uVar8 = uVar9;
    } while (uVar8 != 0);
  }
  if (puVar7 != puVar2) {
    uVar3 = puVar7[1];
    uVar8 = param_2[1];
    sVar1 = uVar3;
    if (uVar8 <= uVar3) {
      sVar1 = uVar8;
    }
    iVar6 = memcmp((void *)*param_2,(void *)*puVar7,sVar1);
    if (iVar6 == 0) {
      if (uVar3 <= uVar8) goto LAB_00bf23c4;
    }
    else if (-1 < iVar6) goto LAB_00bf23c4;
  }
  local_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  puVar7 = (undefined8 *)FUN_00bfdf24(param_1,puVar7,param_2,&local_80);
  local_68 = &local_80;
  FUN_00bf4c84(&local_68,local_78);
LAB_00bf23c4:
  return puVar7 + 2;
}


// ===== 00bf23f8  FUN_00bf23f8 =====

void FUN_00bf23f8(long param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 0x18);
  do {
    if (lVar7 == *(long *)(param_1 + 0x20)) {
      return;
    }
    for (pcVar1 = *(char **)(lVar7 + 0x50); pcVar1 != *(char **)(lVar7 + 0x58);
        pcVar1 = pcVar1 + 0x3f8) {
      if (*pcVar1 == '\x01') {
        sVar4 = strlen(PTR_DAT_00d528f0);
        if ((long)pcVar1[0xaf] < 0) {
          if (sVar4 == *(size_t *)(pcVar1 + 0xa0)) {
            if (sVar4 == 0xffffffffffffffff) goto LAB_00bf2664;
            pcVar6 = *(char **)(pcVar1 + 0x98);
            goto LAB_00bf248c;
          }
LAB_00bf24a0:
          uVar5 = FUN_00aff31c(pcVar1 + 0x78);
          if ((uVar5 & 1) != 0) {
            pcVar6 = pcVar1 + 0xb0;
            if ((long)pcVar1[199] < 0) {
              if (sVar4 == *(size_t *)(pcVar1 + 0xb8)) {
                if (sVar4 == 0xffffffffffffffff) goto LAB_00bf2664;
                pcVar6 = *(char **)pcVar6;
                goto LAB_00bf24dc;
              }
            }
            else if (sVar4 == (long)pcVar1[199]) {
LAB_00bf24dc:
              iVar2 = memcmp(pcVar6,PTR_DAT_00d528f0,sVar4);
              if (iVar2 == 0) goto LAB_00bf2570;
            }
          }
          sVar4 = strlen("udp");
          if ((long)pcVar1[0xaf] < 0) {
            if (sVar4 == *(size_t *)(pcVar1 + 0xa0)) {
              if (sVar4 == 0xffffffffffffffff) {
LAB_00bf2664:
                    /* WARNING: Subroutine does not return */
                FUN_005f5590();
              }
              pcVar6 = *(char **)(pcVar1 + 0x98);
              goto LAB_00bf2530;
            }
          }
          else {
            pcVar6 = pcVar1 + 0x98;
            if (sVar4 == (long)pcVar1[0xaf]) {
LAB_00bf2530:
              iVar2 = memcmp(pcVar6,&DAT_00254717,sVar4);
              if (iVar2 == 0) {
                pcVar6 = "WebRTC.PeerConnection.CandidatePairType_UDP";
                goto LAB_00bf2584;
              }
            }
          }
          uVar5 = FUN_004022fc();
          if ((uVar5 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e90,"../../pc/peer_connection.cc",0x5cc2,
                         "ReportBestConnectionState: No histogram for ",pcVar1 + 0x98);
          }
        }
        else {
          pcVar6 = pcVar1 + 0x98;
          if (sVar4 != (long)pcVar1[0xaf]) goto LAB_00bf24a0;
LAB_00bf248c:
          iVar2 = memcmp(pcVar6,PTR_DAT_00d528f0,sVar4);
          if (iVar2 != 0) goto LAB_00bf24a0;
LAB_00bf2570:
          pcVar6 = "WebRTC.PeerConnection.CandidatePairType_TCP";
LAB_00bf2584:
          lVar7 = FUN_0066631c(pcVar6,0x2b,0x18);
          if (lVar7 != 0) {
            uVar3 = FUN_00bf284c(pcVar1 + 0x78,pcVar1 + 0x210);
            FUN_00666568(lVar7,uVar3);
          }
        }
        if (*(int *)(pcVar1 + 0xe8) == 10) {
          lVar7 = FUN_0066631c("WebRTC.PeerConnection.IPMetrics",0x1f,4);
          if (lVar7 == 0) {
            return;
          }
          uVar8 = 3;
        }
        else {
          if (*(int *)(pcVar1 + 0xe8) != 2) {
            lVar7 = (long)pcVar1[0xdf];
            if (lVar7 < 0) {
              lVar7 = *(long *)(pcVar1 + 0xd0);
            }
            if ((lVar7 != 0) && (uVar5 = FUN_007e95a4(pcVar1 + 200), (uVar5 & 1) != 0)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../pc/peer_connection.cc",0xba7,
                         "!local.address().hostname().empty() && local.address().IsUnresolvedIP()",
                         &DAT_001f5fa0);
          }
          lVar7 = FUN_0066631c("WebRTC.PeerConnection.IPMetrics",0x1f,4);
          if (lVar7 == 0) {
            return;
          }
          uVar8 = 2;
        }
        FUN_00666568(lVar7,uVar8);
        return;
      }
    }
    lVar7 = lVar7 + 0xc0;
  } while( true );
}


// ===== 00bf2668  FUN_00bf2668 =====

void FUN_00bf2668(ulong param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined8 *puVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  
  if ((((param_1 & 1) != 0) &&
      (lVar7 = *(long *)(param_2 + 0x18), lVar7 != *(long *)(param_2 + 0x20))) &&
     (iVar1 = *(int *)(lVar7 + 0xc), *(int *)(lVar7 + 8) != 0 || iVar1 != 0)) {
    if (iVar1 != 0) {
      plVar12 = (long *)*param_3;
      if (plVar12 != param_3 + 1) {
        do {
          iVar2 = *(int *)((long)plVar12 + 0x1c);
          if (iVar2 == 2) {
            pcVar8 = "WebRTC.PeerConnection.SslCipherSuite.Data";
            uVar9 = 0x29;
LAB_00bf2718:
            lVar7 = thunk_FUN_0066631c(pcVar8,uVar9,0xffff);
            if (lVar7 != 0) {
              FUN_00666568(lVar7,iVar1);
            }
          }
          else {
            if (iVar2 == 1) {
              uVar9 = 0x2a;
              pcVar8 = "WebRTC.PeerConnection.SslCipherSuite.Video";
              goto LAB_00bf2718;
            }
            if (iVar2 == 0) {
              uVar9 = 0x2a;
              pcVar8 = "WebRTC.PeerConnection.SslCipherSuite.Audio";
              goto LAB_00bf2718;
            }
          }
          plVar5 = (long *)plVar12[1];
          plVar13 = plVar12;
          if ((long *)plVar12[1] == (long *)0x0) {
            do {
              plVar12 = (long *)plVar13[2];
              bVar6 = plVar13 != (long *)*plVar12;
              plVar13 = plVar12;
            } while (bVar6);
          }
          else {
            do {
              plVar12 = plVar5;
              plVar5 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
        } while (plVar12 != param_3 + 1);
        lVar7 = *(long *)(param_2 + 0x18);
        if (*(long *)(param_2 + 0x20) == lVar7) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
      }
    }
    sVar3 = *(short *)(lVar7 + 0xb8);
    if (sVar3 != 0) {
      puVar10 = (undefined8 *)*param_3;
      if (puVar10 != param_3 + 1) {
        do {
          iVar1 = *(int *)((long)puVar10 + 0x1c);
          if (iVar1 == 2) {
            pcVar8 = "WebRTC.PeerConnection.SslPeerSignatureAlgorithm.Data";
            uVar9 = 0x34;
LAB_00bf27d8:
            lVar7 = thunk_FUN_0066631c(pcVar8,uVar9,0xffff);
            if (lVar7 != 0) {
              FUN_00666568(lVar7,sVar3);
            }
          }
          else {
            if (iVar1 == 1) {
              uVar9 = 0x35;
              pcVar8 = "WebRTC.PeerConnection.SslPeerSignatureAlgorithm.Video";
              goto LAB_00bf27d8;
            }
            if (iVar1 == 0) {
              uVar9 = 0x35;
              pcVar8 = "WebRTC.PeerConnection.SslPeerSignatureAlgorithm.Audio";
              goto LAB_00bf27d8;
            }
          }
          puVar4 = (undefined8 *)puVar10[1];
          puVar11 = puVar10;
          if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
            do {
              puVar10 = (undefined8 *)puVar11[2];
              bVar6 = puVar11 != (undefined8 *)*puVar10;
              puVar11 = puVar10;
            } while (bVar6);
          }
          else {
            do {
              puVar10 = puVar4;
              puVar4 = (undefined8 *)*puVar10;
            } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
          }
        } while (puVar10 != param_3 + 1);
      }
    }
  }
  return;
}


// ===== 00bf284c  FUN_00bf284c =====

int FUN_00bf284c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_00aff2e0();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00aff2e0(param_2), (uVar1 & 1) != 0)) {
    uVar1 = *(ulong *)(param_1 + 0x58);
    if ((*(byte *)(param_1 + 0x67) & 0x80) == 0) {
      uVar1 = (ulong)*(byte *)(param_1 + 0x67);
    }
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_007e95a4(param_1 + 0x50);
      uVar1 = uVar1 & 0xffffffff;
    }
    uVar2 = *(ulong *)(param_2 + 0x58);
    if ((*(byte *)(param_2 + 0x67) & 0x80) == 0) {
      uVar2 = (ulong)*(byte *)(param_2 + 0x67);
    }
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_007e95a4(param_2 + 0x50);
      uVar2 = uVar2 & 0xffffffff;
    }
    FUN_007e8ea8(param_1 + 0x50);
    uVar3 = FUN_007ea56c();
    FUN_007e8ea8(param_2 + 0x50);
    uVar4 = FUN_007ea56c();
    if ((uVar1 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        iVar5 = 0x11;
        iVar6 = 0x17;
      }
      else {
        iVar5 = 0xf;
        iVar6 = 0x16;
      }
    }
    else {
      iVar5 = 0x14;
      iVar6 = 0x13;
    }
    if ((uVar4 & 1) == 0) {
      iVar5 = iVar5 + 1;
    }
    if ((uVar2 & 1) != 0) {
      return iVar6;
    }
    return iVar5;
  }
  uVar1 = FUN_00aff2e0(param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00aff2f4(param_1);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_00aff31c(param_1);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_00aff308(param_1);
        if ((uVar1 & 1) != 0) {
          uVar1 = FUN_00aff2e0(param_2);
          if ((uVar1 & 1) != 0) {
            return 0xc;
          }
          uVar1 = FUN_00aff2f4(param_2);
          if ((uVar1 & 1) != 0) {
            return 0xd;
          }
          uVar1 = FUN_00aff31c(param_2);
          if ((uVar1 & 1) != 0) {
            return 0xe;
          }
        }
      }
      else {
        uVar1 = FUN_00aff2e0(param_2);
        if ((uVar1 & 1) != 0) {
          return 8;
        }
        uVar1 = FUN_00aff2f4(param_2);
        if ((uVar1 & 1) != 0) {
          return 9;
        }
        uVar1 = FUN_00aff31c(param_2);
        if ((uVar1 & 1) != 0) {
          return 10;
        }
        uVar1 = FUN_00aff308(param_2);
        if ((uVar1 & 1) != 0) {
          return 0xb;
        }
      }
    }
    else {
      uVar1 = FUN_00aff2e0(param_2);
      if ((uVar1 & 1) != 0) {
        return 4;
      }
      uVar1 = FUN_00aff2f4(param_2);
      if ((uVar1 & 1) != 0) {
        return 5;
      }
      uVar1 = FUN_00aff31c(param_2);
      if ((uVar1 & 1) != 0) {
        return 6;
      }
      uVar1 = FUN_00aff308(param_2);
      if ((uVar1 & 1) != 0) {
        return 7;
      }
    }
  }
  else {
    uVar1 = FUN_00aff2f4(param_2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    uVar1 = FUN_00aff31c(param_2);
    if ((uVar1 & 1) != 0) {
      return 2;
    }
    uVar1 = FUN_00aff308(param_2);
    if ((uVar1 & 1) != 0) {
      return 3;
    }
  }
  return 0x18;
}


// ===== 00bf2a84  FUN_00bf2a84 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_00bf2a84(long ****param_1,void *param_2,long ***param_3,long *param_4,long *param_5,
                 undefined8 param_6)

{
  long lVar1;
  long ***ppplVar2;
  long *******__s2;
  long ****__s2_00;
  byte bVar3;
  ulong uVar4;
  long *******ppppppplVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *****ppppplVar12;
  long lVar13;
  long lVar14;
  long **pplVar15;
  long *****ppppplVar16;
  long *plVar17;
  uint local_bc;
  undefined1 uStack_a9;
  long ****local_a8;
  long ****local_a0;
  long ****pppplStack_98;
  long ****local_90;
  undefined1 uStack_81;
  long *******local_80;
  long ***local_78;
  code *local_70;
  code *local_68;
  
  if (*(char *)((long)param_1[8] + 5) == '\x01') {
    lVar8 = (*(code *)(*param_1)[0x5d])(param_1);
    lVar13 = *(long *)(lVar8 + 0x30);
    lVar8 = *(long *)(lVar8 + 0x38);
    uVar4 = lVar8 - lVar13;
    if (uVar4 != 0) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bf3e88();
      }
      pvVar9 = operator_new(uVar4);
      lVar14 = 0;
      do {
        if ((long *)((long)pvVar9 + lVar14) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar10 = *(undefined8 **)(lVar13 + lVar14);
        *(long *)((long)pvVar9 + lVar14) = (long)puVar10;
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)();
        }
        lVar14 = lVar14 + 8;
      } while (lVar13 + lVar14 != lVar8);
      if (lVar14 == 0) {
        local_bc = 1;
        if (pvVar9 == (void *)0x0) goto LAB_00bf2ca0;
      }
      else {
        plVar11 = (long *)((long)pvVar9 + lVar14);
        lVar13 = 0;
        lVar8 = -lVar14;
        local_bc = 1;
        do {
          plVar17 = *(long **)(*(long *)((long)pvVar9 + lVar13) + 0x10);
          if ((plVar17[0x1e] != 0) &&
             ((**(code **)(*plVar17 + 0x28))(&local_80,plVar17), pcVar6 = local_70,
             ppppppplVar5 = local_80, ((ulong)local_68 & 1) != 0)) {
            ppplVar2 = local_78;
            if (-1 < (long)local_70) {
              ppplVar2 = (long ***)((ulong)local_70 >> 0x38);
            }
            if (param_3 == ppplVar2) {
              __s2 = local_80;
              if (-1 < (long)local_70) {
                __s2 = (long *******)&local_80;
              }
              iVar7 = memcmp(param_2,__s2,(size_t)param_3);
              if ((long)pcVar6 < 0) {
                operator_delete(ppppppplVar5);
              }
              if (iVar7 == 0) {
                local_bc = FUN_00c0edf8(plVar17,param_4);
              }
            }
            else if ((long)local_70 < 0) {
              operator_delete(local_80);
            }
          }
          lVar1 = lVar13 - lVar14;
          lVar13 = lVar13 + 8;
        } while (lVar1 != -8);
        if (pvVar9 == (void *)0x0) goto LAB_00bf2ca0;
        do {
          plVar11 = plVar11 + -1;
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar11 != (long *)0x0) {
            (**(code **)(*(long *)*plVar11 + 8))();
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      operator_delete(pvVar9);
      goto LAB_00bf2ca0;
    }
  }
  local_bc = 1;
LAB_00bf2ca0:
  if (*(char *)(param_1 + 0x76) == '\x01') {
    bVar3 = *(byte *)((long)param_1 + 0x3af);
    ppplVar2 = param_1[0x74];
    if (-1 < (char)bVar3) {
      ppplVar2 = (long ***)(ulong)bVar3;
    }
    if (param_3 == ppplVar2) {
      __s2_00 = (long ****)param_1[0x73];
      if (-1 < (char)bVar3) {
        __s2_00 = param_1 + 0x73;
      }
      iVar7 = memcmp(param_2,__s2_00,(size_t)param_3);
      if ((iVar7 == 0) && (FUN_00c99c6c(param_1 + 0x7b,param_6), *param_5 != 0)) {
        ppppplVar16 = (long *****)param_1[0x4a];
        pplVar15 = param_1[8][7];
        if (ppppplVar16 != (long *****)0x0) {
          FUN_00d0f740(1,ppppplVar16);
        }
        local_a8 = param_1;
        plVar11 = (long *)(**(code **)(*param_4 + 0x18))(param_4);
        if (*(char *)((long)plVar11 + 0x17) < '\0') {
          FUN_005478d8(&local_a0,*plVar11,plVar11[1]);
          param_1 = local_a8;
        }
        else {
          local_90 = (long ****)plVar11[2];
          pppplStack_98 = (long ****)plVar11[1];
          local_a0 = (long ****)*plVar11;
        }
        ppppplVar12 = (long *****)operator_new(0x20);
        *ppppplVar12 = param_1;
        ppppplVar12[2] = pppplStack_98;
        ppppplVar12[1] = local_a0;
        ppppplVar12[3] = local_90;
        local_a0 = (long ****)0x0;
        pppplStack_98 = (long ****)0x0;
        local_90 = (long ****)0x0;
        local_80 = (long *******)operator_new(0x30);
        *local_80 = (long ******)ppppplVar16;
        ((long ******)local_80)[4] = (long *****)FUN_00bfeaa0;
        ((long ******)local_80)[5] = (long *****)FUN_00bfe9ec;
        ((long ******)local_80)[2] = ppppplVar12;
        local_70 = FUN_005db390;
        local_68 = FUN_005db348;
        (*(code *)(*pplVar15)[1])(pplVar15,&local_80,&uStack_81,&uStack_a9);
        (*local_70)(0,&local_80,&local_80);
        if ((long)local_90 < 0) {
          operator_delete(local_a0);
        }
      }
    }
  }
  return local_bc & 1;
}


// ===== 00bf2e60  FUN_00bf2e60 =====

void FUN_00bf2e60(long param_1)

{
  FUN_00bf2a84(param_1 + -0x10);
  return;
}


// ===== 00bf2e6c  FUN_00bf2e6c =====

void FUN_00bf2e6c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 0x58));
  return;
}


// ===== 00bf2e84  FUN_00bf2e84 =====

void FUN_00bf2e84(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00bf2e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x18))(param_2,*(undefined8 *)(param_1 + 0x50));
  return;
}


// ===== 00bf2e9c  FUN_00bf2e9c =====

void FUN_00bf2e9c(undefined8 param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uStack_f9;
  long local_f8;
  void *local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  char local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  char local_90;
  undefined1 uStack_81;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  
  lVar8 = *(long *)(param_2 + 600);
  plVar7 = *(long **)(*(long *)(param_2 + 0x40) + 0x20);
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8);
  }
  local_f8 = param_2;
  if ((*(byte *)(param_2 + 0x390) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  if (*(char *)(param_2 + 0x38f) < '\0') {
    FUN_005478d8(&local_f0,*(undefined8 *)(param_2 + 0x378),*(undefined8 *)(param_2 + 0x380));
  }
  else {
    lStack_e8 = *(long *)(param_2 + 0x380);
    local_f0 = *(void **)(param_2 + 0x378);
    local_e0 = *(long *)(param_2 + 0x388);
  }
  lVar2 = param_3[5];
  lStack_d0 = param_3[1];
  local_d8 = *param_3;
  local_c8 = (void *)((ulong)local_c8 & 0xffffffffffffff00);
  local_b0 = '\0';
  if ((char)lVar2 == '\x01') {
    pvVar5 = (void *)param_3[2];
    local_c8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_b8 = (void *)0x0;
    uVar1 = param_3[3] - (long)pvVar5;
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) goto LAB_00bf31f8;
      local_c8 = operator_new(uVar1);
      pvVar6 = (void *)((long)local_c8 + uVar1);
      local_c0 = local_c8;
      local_b8 = pvVar6;
      memcpy(local_c8,pvVar5,uVar1);
      local_c0 = pvVar6;
    }
    local_b0 = '\x01';
  }
  lVar3 = param_3[9];
  local_a8 = (void *)((ulong)local_a8 & 0xffffffffffffff00);
  local_90 = '\0';
  if ((char)lVar3 == '\x01') {
    pvVar5 = (void *)param_3[6];
    local_a8 = (void *)0x0;
    local_a0 = (void *)0x0;
    local_98 = (void *)0x0;
    uVar1 = param_3[7] - (long)pvVar5;
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) goto LAB_00bf31f8;
      local_a8 = operator_new(uVar1);
      pvVar6 = (void *)((long)local_a8 + uVar1);
      local_a0 = local_a8;
      local_98 = pvVar6;
      memcpy(local_a8,pvVar5,uVar1);
      local_a0 = pvVar6;
    }
    local_90 = '\x01';
  }
  plVar4 = (long *)operator_new(0x70);
  pvVar6 = local_c8;
  lVar9 = lStack_e8;
  pvVar5 = local_f0;
  local_f0 = (void *)0x0;
  lStack_e8 = 0;
  *plVar4 = local_f8;
  plVar4[2] = lVar9;
  plVar4[1] = (long)pvVar5;
  lVar10 = param_3[1];
  lVar9 = *param_3;
  plVar4[3] = local_e0;
  local_e0 = 0;
  plVar4[5] = lVar10;
  plVar4[4] = lVar9;
  *(undefined1 *)(plVar4 + 6) = 0;
  *(undefined1 *)(plVar4 + 9) = 0;
  if ((char)lVar2 != '\0') {
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    uVar1 = (long)local_c0 - (long)local_c8;
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) goto LAB_00bf31f8;
      pvVar5 = operator_new(uVar1);
      plVar4[6] = (long)pvVar5;
      plVar4[8] = (long)pvVar5 + uVar1;
      memcpy(pvVar5,pvVar6,uVar1);
      plVar4[7] = (long)pvVar5 + uVar1;
    }
    *(undefined1 *)(plVar4 + 9) = 1;
  }
  pvVar5 = local_a8;
  *(undefined1 *)(plVar4 + 10) = 0;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  if ((char)lVar3 != '\0') {
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    uVar1 = (long)local_a0 - (long)local_a8;
    if (uVar1 != 0) {
      if ((long)uVar1 < 0) {
LAB_00bf31f8:
                    /* WARNING: Subroutine does not return */
        FUN_005d34c0();
      }
      pvVar6 = operator_new(uVar1);
      plVar4[10] = (long)pvVar6;
      plVar4[0xc] = (long)pvVar6 + uVar1;
      memcpy(pvVar6,pvVar5,uVar1);
      plVar4[0xb] = (long)pvVar6 + uVar1;
    }
    *(undefined1 *)(plVar4 + 0xd) = 1;
  }
  local_80[0] = (long *)operator_new(0x30);
  *local_80[0] = lVar8;
  local_80[0][4] = (long)FUN_00bfeba0;
  local_80[0][5] = (long)FUN_00bfeb18;
  local_80[0][2] = (long)plVar4;
  local_70 = FUN_005db390;
  pcStack_68 = FUN_005db348;
  (**(code **)(*plVar7 + 8))(plVar7,local_80,&uStack_81,&uStack_f9);
  (*local_70)(0,local_80,local_80);
  if ((local_90 == '\x01') && (local_a8 != (void *)0x0)) {
    if ((long)local_a0 - 1U < (ulong)((long)local_a0 - (long)local_a8)) goto LAB_00bf31fc;
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  if ((local_b0 == '\x01') && (local_c8 != (void *)0x0)) {
    if ((long)local_c0 - 1U < (ulong)((long)local_c0 - (long)local_c8)) {
LAB_00bf31fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (local_e0 < 0) {
    operator_delete(local_f0);
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00bf3210  FUN_00bf3210 =====

void FUN_00bf3210(long param_1)

{
  void *pvVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\x01') &&
     (pvVar1 = *(void **)(param_1 + 0x50), pvVar1 != (void *)0x0)) {
    if (*(long *)(param_1 + 0x58) - 1U < (ulong)(*(long *)(param_1 + 0x58) - (long)pvVar1))
    goto LAB_00bf32c8;
    *(void **)(param_1 + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  if ((*(char *)(param_1 + 0x48) == '\x01') &&
     (pvVar1 = *(void **)(param_1 + 0x30), pvVar1 != (void *)0x0)) {
    if (*(long *)(param_1 + 0x38) - 1U < (ulong)(*(long *)(param_1 + 0x38) - (long)pvVar1)) {
LAB_00bf32c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    *(void **)(param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 8));
  return;
}


// ===== 00bf32dc  FUN_00bf32dc =====

void FUN_00bf32dc(long param_1)

{
  FUN_00bf2e9c(param_1 + -8);
  return;
}


// ===== 00bf32e8  FUN_00bf32e8 =====

void FUN_00bf32e8(undefined4 *param_1,long param_2)

{
  void *__src;
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ulong __n;
  void *__dest;
  
  __src = *(void **)(param_2 + 0x178);
  lVar1 = *(long *)(param_2 + 0x180);
  uVar2 = *(undefined4 *)(param_2 + 0x170);
  uVar3 = *(undefined1 *)(param_2 + 0x174);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  __n = lVar1 - (long)__src;
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    __dest = operator_new(__n);
    *(void **)(param_1 + 2) = __dest;
    *(ulong *)(param_1 + 6) = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    *(ulong *)(param_1 + 4) = (long)__dest + __n;
  }
  return;
}


// ===== 00bf3364  FUN_00bf3364 =====

void FUN_00bf3364(undefined4 *param_1,long param_2)

{
  void *__src;
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ulong __n;
  void *__dest;
  
  __src = *(void **)(param_2 + 0x170);
  lVar1 = *(long *)(param_2 + 0x178);
  uVar2 = *(undefined4 *)(param_2 + 0x168);
  uVar3 = *(undefined1 *)(param_2 + 0x16c);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  __n = lVar1 - (long)__src;
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d4754();
    }
    __dest = operator_new(__n);
    *(void **)(param_1 + 2) = __dest;
    *(ulong *)(param_1 + 6) = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    *(ulong *)(param_1 + 4) = (long)__dest + __n;
  }
  return;
}


// ===== 00bf33e0  FUN_00bf33e0 =====

void FUN_00bf33e0(long param_1)

{
  if (*(long *)(param_1 + 0x270) != 0) {
    FUN_00c02f60();
  }
  FUN_00c7a8c0(param_1 + 0x278);
  return;
}


// ===== 00bf3414  FUN_00bf3414 =====

void FUN_00bf3414(long param_1)

{
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN_00c02f60();
  }
  FUN_00c7a8c0(param_1 + 0x270);
  return;
}


// ===== 00bf3448  FUN_00bf3448 =====

void FUN_00bf3448(long param_1)

{
  FUN_00cb5104(*(undefined8 *)(param_1 + 0x4a8));
  return;
}


// ===== 00bf3454  FUN_00bf3454 =====

byte FUN_00bf3454(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x4a8) + 0x199) == '\x01') {
    return *(byte *)(*(long *)(param_1 + 0x4a8) + 0x198) & 1;
  }
  return 0;
}


// ===== 00bf347c  FUN_00bf347c =====

void FUN_00bf347c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((*(byte *)(param_2[8] + 5) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x2f0))();
    plVar6 = *(long **)(lVar3 + 0x30);
    plVar1 = *(long **)(lVar3 + 0x38);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar2 = (long)plVar1 - (long)plVar6;
    if (uVar2 != 0) {
      if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bf3e88();
      }
      plVar4 = (long *)operator_new(uVar2);
      *param_1 = plVar4;
      param_1[2] = (long)plVar4 + uVar2;
      do {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar5 = (undefined8 *)*plVar6;
        *plVar4 = (long)puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)();
        }
        plVar6 = plVar6 + 1;
        plVar4 = plVar4 + 1;
      } while (plVar6 != plVar1);
      param_1[1] = plVar4;
    }
  }
  return;
}


// ===== 00bf3554  FUN_00bf3554 =====

void FUN_00bf3554(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf3564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x328))(param_1,4);
  return;
}


// ===== 00bf3568  FUN_00bf3568 =====

void FUN_00bf3568(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf3574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))();
  return;
}


// ===== 00bf3578  FUN_00bf3578 =====

void FUN_00bf3578(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x377)) {
    uVar2 = *(undefined8 *)(param_2 + 0x360);
    uVar1 = *(undefined8 *)(param_2 + 0x370);
    param_1[1] = *(undefined8 *)(param_2 + 0x368);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x360),*(undefined8 *)(param_2 + 0x368));
  return;
}


// ===== 00bf35ac  FUN_00bf35ac =====

bool FUN_00bf35ac(long param_1)

{
  int iVar1;
  
  if (*(long **)(param_1 + 0x4a8) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x4a8) + 0x10))();
    return iVar1 == 5;
  }
  return true;
}


// ===== 00bf35ec  FUN_00bf35ec =====

undefined8 FUN_00bf35ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}


// ===== 00bf35f8  FUN_00bf35f8 =====

long FUN_00bf35f8(long param_1)

{
  return param_1 + 0x3d8;
}


// ===== 00bf3604  FUN_00bf3604 =====

undefined1 FUN_00bf3604(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}


// ===== 00bf3610  FUN_00bf3610 =====

long FUN_00bf3610(long param_1)

{
  return param_1 + 0x78;
}


// ===== 00bf361c  FUN_00bf361c =====

long FUN_00bf361c(long param_1)

{
  return param_1 + 0x458;
}


// ===== 00bf3628  FUN_00bf3628 =====

undefined8 FUN_00bf3628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4b0);
}


// ===== 00bf3634  FUN_00bf3634 =====

undefined8 FUN_00bf3634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4b0);
}


// ===== 00bf3640  FUN_00bf3640 =====

undefined8 FUN_00bf3640(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4a0);
}


// ===== 00bf364c  FUN_00bf364c =====

undefined8 FUN_00bf364c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x498);
}


// ===== 00bf3658  FUN_00bf3658 =====

undefined8 FUN_00bf3658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}


// ===== 00bf3664  FUN_00bf3664 =====

undefined8 FUN_00bf3664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x268);
}


// ===== 00bf3670  FUN_00bf3670 =====

long FUN_00bf3670(long param_1)

{
  return param_1 + 0x48;
}


// ===== 00bf367c  FUN_00bf367c =====

undefined1 FUN_00bf367c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}


// ===== 00bf3688  FUN_00bf3688 =====

long FUN_00bf3688(long param_1)

{
  return param_1 + 0x18;
}


// ===== 00bf3694  FUN_00bf3694 =====

undefined8 FUN_00bf3694(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00bf36a0  FUN_00bf36a0 =====

long FUN_00bf36a0(long param_1)

{
  return param_1 + 0x468;
}


// ===== 00bf36ac  FUN_00bf36ac =====

void FUN_00bf36ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (-1 < *(char *)(param_2 + 0x36f)) {
    uVar2 = *(undefined8 *)(param_2 + 0x358);
    uVar1 = *(undefined8 *)(param_2 + 0x368);
    param_1[1] = *(undefined8 *)(param_2 + 0x360);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_005478d8(param_1,*(undefined8 *)(param_2 + 0x358),*(undefined8 *)(param_2 + 0x360));
  return;
}


// ===== 00bf36e0  FUN_00bf36e0 =====

long FUN_00bf36e0(long param_1)

{
  return param_1 + 0x70;
}


// ===== 00bf36ec  FUN_00bf36ec =====

long FUN_00bf36ec(long param_1)

{
  return param_1 + 0x450;
}


// ===== 00bf36f8  FUN_00bf36f8 =====

undefined8 FUN_00bf36f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4a8);
}


// ===== 00bf3704  FUN_00bf3704 =====

undefined8 FUN_00bf3704(long param_1)

{
  return *(undefined8 *)(param_1 + 0x4a8);
}


// ===== 00bf3710  FUN_00bf3710 =====

undefined1 FUN_00bf3710(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}


// ===== 00bf371c  FUN_00bf371c =====

long FUN_00bf371c(long param_1)

{
  return param_1 + 0x40;
}


// ===== 00bf3728  FUN_00bf3728 =====

undefined8 FUN_00bf3728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x498);
}


// ===== 00bf3734  FUN_00bf3734 =====

undefined8 FUN_00bf3734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x490);
}


// ===== 00bf3740  FUN_00bf3740 =====

long FUN_00bf3740(long param_1)

{
  return param_1 + 0x3d0;
}


// ===== 00bf374c  FUN_00bf374c =====

undefined8 FUN_00bf374c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}


// ===== 00bf3758  FUN_00bf3758 =====

undefined8 FUN_00bf3758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x268);
}


// ===== 00bf3764  FUN_00bf3764 =====

void FUN_00bf3764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf3770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 0x1a8))();
  return;
}


// ===== 00bf3774  FUN_00bf3774 =====

bool FUN_00bf3774(long param_1)

{
  int iVar1;
  
  if (*(long **)(param_1 + 0x4a0) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x4a0) + 0x10))();
    return iVar1 == 5;
  }
  return true;
}


// ===== 00bf37b4  FUN_00bf37b4 =====

undefined1 FUN_00bf37b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}


// ===== 00bf37c0  FUN_00bf37c0 =====

/* WARNING: Removing unreachable block (ram,0x00bf3808) */

void FUN_00bf37c0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined7 uStack_77;
  void *local_70;
  char local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  void *local_50;
  char local_40;
  undefined1 auStack_38 [40];
  
  uStack_7c = 0x400;
  local_78 = 0;
  local_60 = '\0';
  local_58 = 0;
  local_40 = '\0';
  local_88 = param_2;
  uStack_84 = param_3;
  local_80 = param_4;
  (**(code **)(*param_1 + 0xd8))(auStack_38,param_1,&local_88);
  if ((local_40 == '\x01') && (pvVar1 = (void *)CONCAT71(uStack_57,local_58), pvVar1 != (void *)0x0)
     ) {
    if ((long)local_50 - 1U < (ulong)((long)local_50 - (long)pvVar1)) goto LAB_00bf3898;
    local_50 = pvVar1;
    operator_delete(pvVar1);
  }
  if ((local_60 == '\x01') && (pvVar1 = (void *)CONCAT71(uStack_77,local_78), pvVar1 != (void *)0x0)
     ) {
    if ((long)local_70 - 1U < (ulong)((long)local_70 - (long)pvVar1)) {
LAB_00bf3898:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_70 = pvVar1;
    operator_delete(pvVar1);
  }
  return;
}


// ===== 00bf38ac  FUN_00bf38ac =====

undefined8 FUN_00bf38ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}


// ===== 00bf38b8  FUN_00bf38b8 =====

long FUN_00bf38b8(long param_1)

{
  return param_1 + 0x10;
}


// ===== 00bf38c4  FUN_00bf38c4 =====

undefined8 FUN_00bf38c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 00bf38d0  FUN_00bf38d0 =====

long FUN_00bf38d0(long param_1)

{
  return param_1 + 0x460;
}


// ===== 00bf38dc  FUN_00bf38dc =====

undefined8 FUN_00bf38dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *__s1;
  undefined8 *__s2;
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  bVar6 = *(byte *)((long)param_1 + 0x17);
  bVar7 = *(byte *)((long)param_2 + 0x17);
  sVar1 = param_1[1];
  if (-1 < (char)bVar6) {
    sVar1 = (ulong)bVar6;
  }
  sVar2 = param_2[1];
  if (-1 < (char)bVar7) {
    sVar2 = (ulong)bVar7;
  }
  if (sVar1 == sVar2) {
    puVar3 = (undefined8 *)*param_1;
    if (-1 < (char)bVar6) {
      puVar3 = param_1;
    }
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)bVar7) {
      puVar4 = param_2;
    }
    iVar8 = memcmp(puVar3,puVar4,sVar1);
    if (iVar8 == 0) {
      puVar3 = (undefined8 *)param_1[3];
      puVar5 = (undefined8 *)param_1[4];
      puVar4 = (undefined8 *)param_2[3];
      if ((long)puVar5 - (long)puVar3 == param_2[4] - (long)puVar4) {
        for (; puVar3 != puVar5; puVar3 = puVar3 + 3) {
          bVar6 = *(byte *)((long)puVar3 + 0x17);
          bVar7 = *(byte *)((long)puVar4 + 0x17);
          sVar1 = puVar3[1];
          if (-1 < (char)bVar6) {
            sVar1 = (ulong)bVar6;
          }
          sVar2 = puVar4[1];
          if (-1 < (char)bVar7) {
            sVar2 = (ulong)bVar7;
          }
          if (sVar1 != sVar2) {
            return 0;
          }
          __s1 = (undefined8 *)*puVar3;
          if (-1 < (char)bVar6) {
            __s1 = puVar3;
          }
          __s2 = (undefined8 *)*puVar4;
          if (-1 < (char)bVar7) {
            __s2 = puVar4;
          }
          iVar8 = memcmp(__s1,__s2,sVar1);
          if (iVar8 != 0) {
            return 0;
          }
          puVar4 = puVar4 + 3;
        }
        bVar6 = *(byte *)((long)param_1 + 0x47);
        bVar7 = *(byte *)((long)param_2 + 0x47);
        sVar1 = param_1[7];
        if (-1 < (char)bVar6) {
          sVar1 = (ulong)bVar6;
        }
        sVar2 = param_2[7];
        if (-1 < (char)bVar7) {
          sVar2 = (ulong)bVar7;
        }
        if (sVar1 == sVar2) {
          puVar3 = (undefined8 *)param_1[6];
          if (-1 < (char)bVar6) {
            puVar3 = param_1 + 6;
          }
          puVar4 = (undefined8 *)param_2[6];
          if (-1 < (char)bVar7) {
            puVar4 = param_2 + 6;
          }
          iVar8 = memcmp(puVar3,puVar4,sVar1);
          if (iVar8 == 0) {
            bVar6 = *(byte *)((long)param_1 + 0x5f);
            bVar7 = *(byte *)((long)param_2 + 0x5f);
            sVar1 = param_1[10];
            if (-1 < (char)bVar6) {
              sVar1 = (ulong)bVar6;
            }
            sVar2 = param_2[10];
            if (-1 < (char)bVar7) {
              sVar2 = (ulong)bVar7;
            }
            if (sVar1 == sVar2) {
              puVar3 = (undefined8 *)param_1[9];
              if (-1 < (char)bVar6) {
                puVar3 = param_1 + 9;
              }
              puVar4 = (undefined8 *)param_2[9];
              if (-1 < (char)bVar7) {
                puVar4 = param_2 + 9;
              }
              iVar8 = memcmp(puVar3,puVar4,sVar1);
              if ((iVar8 == 0) && (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) {
                bVar6 = *(byte *)((long)param_1 + 0x7f);
                bVar7 = *(byte *)((long)param_2 + 0x7f);
                sVar1 = param_1[0xe];
                if (-1 < (char)bVar6) {
                  sVar1 = (ulong)bVar6;
                }
                sVar2 = param_2[0xe];
                if (-1 < (char)bVar7) {
                  sVar2 = (ulong)bVar7;
                }
                if (sVar1 == sVar2) {
                  puVar3 = (undefined8 *)param_1[0xd];
                  if (-1 < (char)bVar6) {
                    puVar3 = param_1 + 0xd;
                  }
                  puVar4 = (undefined8 *)param_2[0xd];
                  if (-1 < (char)bVar7) {
                    puVar4 = param_2 + 0xd;
                  }
                  iVar8 = memcmp(puVar3,puVar4,sVar1);
                  if ((iVar8 == 0) &&
                     (uVar9 = FUN_00bf3b30(param_1 + 0x10,param_2 + 0x10), (uVar9 & 1) != 0)) {
                    uVar10 = FUN_00bf3b30(param_1 + 0x13,param_2 + 0x13);
                    return uVar10;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ===== 00bf3b30  FUN_00bf3b30 =====

undefined8 FUN_00bf3b30(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_2;
  if ((long)puVar4 - (long)puVar2 == param_2[1] - (long)puVar3) {
    for (; puVar2 != puVar4; puVar2 = puVar2 + 3) {
      bVar5 = *(byte *)((long)puVar2 + 0x17);
      bVar6 = *(byte *)((long)puVar3 + 0x17);
      __n = puVar2[1];
      if (-1 < (char)bVar5) {
        __n = (ulong)bVar5;
      }
      sVar1 = puVar3[1];
      if (-1 < (char)bVar6) {
        sVar1 = (ulong)bVar6;
      }
      if (__n != sVar1) goto LAB_00bf3bcc;
      __s1 = (undefined8 *)*puVar2;
      if (-1 < (char)bVar5) {
        __s1 = puVar2;
      }
      __s2 = (undefined8 *)*puVar3;
      if (-1 < (char)bVar6) {
        __s2 = puVar3;
      }
      iVar7 = memcmp(__s1,__s2,__n);
      if (iVar7 != 0) goto LAB_00bf3bcc;
      puVar3 = puVar3 + 3;
    }
    uVar8 = 1;
  }
  else {
LAB_00bf3bcc:
    uVar8 = 0;
  }
  return uVar8;
}


// ===== 00bf3be4  FUN_00bf3be4 =====

long * FUN_00bf3be4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar6 = *param_1;
  lVar16 = param_1[1];
  plVar15 = (long *)(lVar16 - lVar6);
  uVar1 = ((long)plVar15 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bf3e88();
  }
  uVar8 = param_1[2] - lVar6 >> 2;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 == 0) {
    pvVar4 = (void *)0x0;
    plVar2 = plVar15;
  }
  else {
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar4 = operator_new(uVar8 << 3);
    plVar2 = (long *)((long)pvVar4 + (long)plVar15);
  }
  if (plVar2 == (long *)0x0) {
LAB_00bf3e58:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar5 = (undefined8 *)*param_2;
  *plVar2 = (long)puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  plVar13 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  lVar17 = (long)plVar3 - (long)plVar13;
  plVar14 = (long *)((long)plVar2 - ((long)plVar3 - (long)plVar13));
  if (lVar17 != 0) {
    uVar10 = lVar17 - 8U >> 3;
    uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
    uVar1 = uVar12;
    if (uVar10 <= uVar12) {
      uVar1 = uVar10;
    }
    plVar7 = plVar13;
    plVar9 = plVar14;
    if (0x3b < uVar1) {
      if (uVar10 <= uVar12) {
        uVar12 = uVar10;
      }
      if ((((((int)lVar6 - (int)((long)pvVar4 + lVar16) | (int)plVar3 - (int)plVar13) & 7U) == 0) &&
          (plVar13 <= plVar13 + uVar12)) && (plVar14 <= plVar14 + uVar12)) {
        uVar12 = (ulong)((lVar17 + lVar6) - ((long)pvVar4 + lVar16)) >> 3;
        if (uVar10 <= uVar12) {
          uVar12 = uVar10;
        }
        if (((long *)((long)pvVar4 + ((uVar12 * 8 + lVar16) - (lVar17 + lVar6)) + 8) <= plVar13) ||
           (plVar13 + uVar12 + 1 <= plVar14)) {
          uVar12 = uVar1 + 1 & 3;
          uVar10 = 4;
          if (uVar12 != 0) {
            uVar10 = uVar12;
          }
          lVar6 = (uVar1 + 1) - uVar10;
          plVar7 = plVar13 + lVar6;
          plVar9 = plVar14 + lVar6;
          plVar15 = (long *)((long)(plVar15 + -(lVar17 >> 3)) + (long)pvVar4 + 0x10);
          plVar11 = plVar13 + 2;
          do {
            lVar17 = plVar11[-1];
            lVar16 = plVar11[-2];
            lVar19 = plVar11[1];
            lVar18 = *plVar11;
            lVar6 = lVar6 + -4;
            plVar11[-1] = 0;
            plVar11[-2] = 0;
            plVar11[1] = 0;
            *plVar11 = 0;
            plVar15[-1] = lVar17;
            plVar15[-2] = lVar16;
            plVar15[1] = lVar19;
            *plVar15 = lVar18;
            plVar15 = plVar15 + 4;
            plVar11 = plVar11 + 4;
          } while (lVar6 != 0);
        }
      }
    }
    do {
      if (plVar9 == (long *)0x0) goto LAB_00bf3e58;
      lVar6 = *plVar7;
      plVar15 = plVar7 + 1;
      *plVar7 = 0;
      *plVar9 = lVar6;
      plVar7 = plVar15;
      plVar9 = plVar9 + 1;
    } while (plVar15 != plVar3);
    do {
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar13 != (long *)0x0) {
        (**(code **)(*(long *)*plVar13 + 8))();
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar3);
    plVar13 = (long *)*param_1;
  }
  *param_1 = (long)plVar14;
  param_1[1] = (long)(plVar2 + 1);
  param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  return plVar2 + 1;
}


// ===== 00bf3e88  FUN_00bf3e88 =====

void FUN_00bf3e88(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bf3ea0  FUN_00bf3ea0 =====

void FUN_00bf3ea0(void)

{
  return;
}


// ===== 00bf3ea8  FUN_00bf3ea8 =====

void FUN_00bf3ea8(void)

{
  return;
}


// ===== 00bf3eb0  FUN_00bf3eb0 =====

void FUN_00bf3eb0(void)

{
  return;
}


// ===== 00bf3eb8  FUN_00bf3eb8 =====

void FUN_00bf3eb8(void)

{
  return;
}


// ===== 00bf3ec0  FUN_00bf3ec0 =====

void FUN_00bf3ec0(void)

{
  return;
}


// ===== 00bf3ec8  FUN_00bf3ec8 =====

void FUN_00bf3ec8(void)

{
  return;
}


// ===== 00bf3ed0  FUN_00bf3ed0 =====

void FUN_00bf3ed0(void)

{
  return;
}


// ===== 00bf3ed8  FUN_00bf3ed8 =====

void FUN_00bf3ed8(void)

{
  return;
}


// ===== 00bf3ee0  FUN_00bf3ee0 =====

void FUN_00bf3ee0(void)

{
  return;
}


// ===== 00bf3ee8  FUN_00bf3ee8 =====

void FUN_00bf3ee8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  uVar4 = (ulong)((long)pvVar2 + ((long)pvVar2 << 0x3f) + -2) >> 1;
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3f) - ((long)pvVar1 - (long)pvVar2)) >> 1;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (uint)pvVar2 | (uint)pvVar2) & 1) == 0)) {
    uVar3 = uVar3 & 0x7ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -2);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      param_1[1] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -2);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00bf3f88  FUN_00bf3f88 =====

long FUN_00bf3f88(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 4) * -0x79435e50d79435e5 + 1;
  if (0xd79435e50d7943 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066a5d8();
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar4 * 0xd79435e50d79436;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x6bca1af286bca0 < (ulong)(lVar4 * -0x79435e50d79435e5)) {
    uVar5 = 0xd79435e50d7943;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0xd79435e50d7943 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 * 0x130);
    lVar6 = (long)pvVar2 + lVar6;
  }
  if (lVar6 == 0) {
LAB_00bf4104:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_00669028(lVar6,param_2);
  pvVar7 = (void *)*param_1;
  pvVar1 = (void *)param_1[1];
  lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
  pvVar8 = pvVar7;
  lVar9 = lVar4;
  if (pvVar1 != pvVar7) {
    do {
      if (lVar9 == 0) goto LAB_00bf4104;
      FUN_00669028(lVar9,pvVar8);
      pvVar8 = (void *)((long)pvVar8 + 0x130);
      lVar9 = lVar9 + 0x130;
    } while (pvVar8 != pvVar1);
    do {
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0066919c(pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0x130);
    } while (pvVar7 != pvVar1);
    pvVar7 = (void *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar6 + 0x130;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0x130);
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  return lVar6 + 0x130;
}


// ===== 00bf4134  FUN_00bf4134 =====

undefined8 * FUN_00bf4134(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar6 = *param_1;
  lVar17 = param_1[1];
  puVar16 = (undefined8 *)(lVar17 - lVar6);
  uVar1 = ((long)puVar16 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      puVar2 = puVar16;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00bf43c8;
      pvVar4 = operator_new(uVar8 << 3);
      puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
    }
    if (puVar2 == (undefined8 *)0x0) {
LAB_00bf439c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    plVar14 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar18 = (long)plVar3 - (long)plVar14;
    plVar15 = (long *)((long)puVar2 - ((long)plVar3 - (long)plVar14));
    if (lVar18 != 0) {
      uVar11 = lVar18 - 8U >> 3;
      uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
      uVar1 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = uVar11;
      }
      plVar7 = plVar14;
      plVar9 = plVar15;
      if (0x3b < uVar1) {
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar17) | (int)plVar3 - (int)plVar14) & 7U) == 0)
            && (plVar14 <= plVar14 + uVar13)) && (plVar15 <= plVar15 + uVar13)) {
          uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          if (((long *)((long)pvVar4 + ((uVar13 * 8 + lVar17) - (lVar18 + lVar6)) + 8) <= plVar14)
             || (plVar14 + uVar13 + 1 <= plVar15)) {
            uVar13 = uVar1 + 1 & 3;
            uVar11 = 4;
            if (uVar13 != 0) {
              uVar11 = uVar13;
            }
            lVar6 = (uVar1 + 1) - uVar11;
            plVar7 = plVar14 + lVar6;
            plVar9 = plVar15 + lVar6;
            plVar10 = (long *)((long)(puVar16 + -(lVar18 >> 3)) + (long)pvVar4 + 0x10);
            plVar12 = plVar14 + 2;
            do {
              lVar18 = plVar12[-1];
              lVar17 = plVar12[-2];
              lVar20 = plVar12[1];
              lVar19 = *plVar12;
              lVar6 = lVar6 + -4;
              plVar12[-1] = 0;
              plVar12[-2] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
              plVar10[-1] = lVar18;
              plVar10[-2] = lVar17;
              plVar10[1] = lVar20;
              *plVar10 = lVar19;
              plVar10 = plVar10 + 4;
              plVar12 = plVar12 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00bf439c;
        lVar6 = *plVar7;
        plVar10 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar10;
        plVar9 = plVar9 + 1;
      } while (plVar10 != plVar3);
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 8))();
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
      plVar14 = (long *)*param_1;
    }
    *param_1 = (long)plVar15;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
    return puVar2 + 1;
  }
  FUN_00bf43cc();
LAB_00bf43c8:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bf43cc  FUN_00bf43cc =====

void FUN_00bf43cc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bf43e4  FUN_00bf43e4 =====

undefined8 * FUN_00bf43e4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar6 = *param_1;
  lVar17 = param_1[1];
  puVar16 = (undefined8 *)(lVar17 - lVar6);
  uVar1 = ((long)puVar16 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      puVar2 = puVar16;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00bf4678;
      pvVar4 = operator_new(uVar8 << 3);
      puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
    }
    if (puVar2 == (undefined8 *)0x0) {
LAB_00bf464c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    plVar14 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar18 = (long)plVar3 - (long)plVar14;
    plVar15 = (long *)((long)puVar2 - ((long)plVar3 - (long)plVar14));
    if (lVar18 != 0) {
      uVar11 = lVar18 - 8U >> 3;
      uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
      uVar1 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = uVar11;
      }
      plVar7 = plVar14;
      plVar9 = plVar15;
      if (0x3b < uVar1) {
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar17) | (int)plVar3 - (int)plVar14) & 7U) == 0)
            && (plVar14 <= plVar14 + uVar13)) && (plVar15 <= plVar15 + uVar13)) {
          uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          if (((long *)((long)pvVar4 + ((uVar13 * 8 + lVar17) - (lVar18 + lVar6)) + 8) <= plVar14)
             || (plVar14 + uVar13 + 1 <= plVar15)) {
            uVar13 = uVar1 + 1 & 3;
            uVar11 = 4;
            if (uVar13 != 0) {
              uVar11 = uVar13;
            }
            lVar6 = (uVar1 + 1) - uVar11;
            plVar7 = plVar14 + lVar6;
            plVar9 = plVar15 + lVar6;
            plVar10 = (long *)((long)(puVar16 + -(lVar18 >> 3)) + (long)pvVar4 + 0x10);
            plVar12 = plVar14 + 2;
            do {
              lVar18 = plVar12[-1];
              lVar17 = plVar12[-2];
              lVar20 = plVar12[1];
              lVar19 = *plVar12;
              lVar6 = lVar6 + -4;
              plVar12[-1] = 0;
              plVar12[-2] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
              plVar10[-1] = lVar18;
              plVar10[-2] = lVar17;
              plVar10[1] = lVar20;
              *plVar10 = lVar19;
              plVar10 = plVar10 + 4;
              plVar12 = plVar12 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00bf464c;
        lVar6 = *plVar7;
        plVar10 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar10;
        plVar9 = plVar9 + 1;
      } while (plVar10 != plVar3);
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 8))();
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
      plVar14 = (long *)*param_1;
    }
    *param_1 = (long)plVar15;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
    return puVar2 + 1;
  }
  FUN_00bf467c();
LAB_00bf4678:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bf467c  FUN_00bf467c =====

void FUN_00bf467c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bf4694  FUN_00bf4694 =====

undefined8 * FUN_00bf4694(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar6 = *param_1;
  lVar17 = param_1[1];
  puVar16 = (undefined8 *)(lVar17 - lVar6);
  uVar1 = ((long)puVar16 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar8 = param_1[2] - lVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - lVar6)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
      puVar2 = puVar16;
    }
    else {
      if (uVar8 >> 0x3d != 0) goto LAB_00bf4928;
      pvVar4 = operator_new(uVar8 << 3);
      puVar2 = (undefined8 *)((long)pvVar4 + (long)puVar16);
    }
    if (puVar2 == (undefined8 *)0x0) {
LAB_00bf48fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar2 = uVar5;
    plVar14 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    lVar18 = (long)plVar3 - (long)plVar14;
    plVar15 = (long *)((long)puVar2 - ((long)plVar3 - (long)plVar14));
    if (lVar18 != 0) {
      uVar11 = lVar18 - 8U >> 3;
      uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
      uVar1 = uVar13;
      if (uVar11 <= uVar13) {
        uVar1 = uVar11;
      }
      plVar7 = plVar14;
      plVar9 = plVar15;
      if (0x3b < uVar1) {
        if (uVar11 <= uVar13) {
          uVar13 = uVar11;
        }
        if ((((((int)lVar6 - (int)((long)pvVar4 + lVar17) | (int)plVar3 - (int)plVar14) & 7U) == 0)
            && (plVar14 <= plVar14 + uVar13)) && (plVar15 <= plVar15 + uVar13)) {
          uVar13 = (ulong)((lVar18 + lVar6) - ((long)pvVar4 + lVar17)) >> 3;
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          if (((long *)((long)pvVar4 + ((uVar13 * 8 + lVar17) - (lVar18 + lVar6)) + 8) <= plVar14)
             || (plVar14 + uVar13 + 1 <= plVar15)) {
            uVar13 = uVar1 + 1 & 3;
            uVar11 = 4;
            if (uVar13 != 0) {
              uVar11 = uVar13;
            }
            lVar6 = (uVar1 + 1) - uVar11;
            plVar7 = plVar14 + lVar6;
            plVar9 = plVar15 + lVar6;
            plVar10 = (long *)((long)(puVar16 + -(lVar18 >> 3)) + (long)pvVar4 + 0x10);
            plVar12 = plVar14 + 2;
            do {
              lVar18 = plVar12[-1];
              lVar17 = plVar12[-2];
              lVar20 = plVar12[1];
              lVar19 = *plVar12;
              lVar6 = lVar6 + -4;
              plVar12[-1] = 0;
              plVar12[-2] = 0;
              plVar12[1] = 0;
              *plVar12 = 0;
              plVar10[-1] = lVar18;
              plVar10[-2] = lVar17;
              plVar10[1] = lVar20;
              *plVar10 = lVar19;
              plVar10 = plVar10 + 4;
              plVar12 = plVar12 + 4;
            } while (lVar6 != 0);
          }
        }
      }
      do {
        if (plVar9 == (long *)0x0) goto LAB_00bf48fc;
        lVar6 = *plVar7;
        plVar10 = plVar7 + 1;
        *plVar7 = 0;
        *plVar9 = lVar6;
        plVar7 = plVar10;
        plVar9 = plVar9 + 1;
      } while (plVar10 != plVar3);
      do {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar14 != (long *)0x0) {
          (**(code **)(*(long *)*plVar14 + 8))();
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar3);
      plVar14 = (long *)*param_1;
    }
    *param_1 = (long)plVar15;
    param_1[1] = (long)(puVar2 + 1);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 8);
    if (plVar14 != (long *)0x0) {
      operator_delete(plVar14);
    }
    return puVar2 + 1;
  }
  FUN_00bf492c();
LAB_00bf4928:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00bf492c  FUN_00bf492c =====

void FUN_00bf492c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bf4944  FUN_00bf4944 =====

void FUN_00bf4944(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bf495c  FUN_00bf495c =====

void FUN_00bf495c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bf4974  FUN_00bf4974 =====

uint FUN_00bf4974(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  size_t sVar4;
  long lVar5;
  void *local_70 [2];
  char cStack_59;
  void *local_58;
  char cStack_41;
  
  lVar1 = *(long *)(param_1 + 0x110);
  lVar2 = *(long *)(param_1 + 0x118);
  if (lVar1 == lVar2) {
    uVar3 = 0;
  }
  else {
    sVar4 = strlen("transport-cc");
    do {
      lVar5 = lVar1 + 0xd8;
      FUN_00bf4a50(local_70,"transport-cc",sVar4);
      uVar3 = FUN_00890188(lVar1 + 0xc0,local_70);
      if (cStack_41 < '\0') {
        operator_delete(local_58);
      }
      if (cStack_59 < '\0') {
        operator_delete(local_70[0]);
      }
      lVar1 = lVar5;
    } while ((uVar3 & 1) == 0 && lVar5 != lVar2);
  }
  return uVar3 & 1;
}


// ===== 00bf4a50  FUN_00bf4a50 =====

void FUN_00bf4a50(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *__dest;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    __dest = param_1;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    puVar3 = PTR_DAT_00d52230;
    *(undefined1 *)((long)__dest + param_3) = 0;
    FUN_005d3510(param_1 + 3,puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00bf4b44  FUN_00bf4b44 =====

undefined8 * FUN_00bf4b44(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  void *__dest;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_00bf4c6c();
LAB_00bf4c68:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 4;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar4) {
    uVar5 = 0x7ffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3b != 0) goto LAB_00bf4c68;
    pvVar2 = operator_new(uVar5 << 5);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar6,*param_2,param_2[1]);
    }
    else {
      uVar8 = param_2[1];
      uVar7 = *param_2;
      puVar6[2] = param_2[2];
      puVar6[1] = uVar8;
      *puVar6 = uVar7;
    }
    *(undefined4 *)(puVar6 + 3) = *param_3;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 4);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x20);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00bf4c6c  FUN_00bf4c6c =====

void FUN_00bf4c6c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00bf4c84  FUN_00bf4c84 =====

void FUN_00bf4c84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00bf4c84(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe4) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00bf4cf8  FUN_00bf4cf8 =====

void FUN_00bf4cf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined1 *param_6,undefined8 *param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined1 *param_11)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *local_68;
  
  pvVar4 = (void *)*param_4;
  local_68 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    uVar3 = *param_7;
    uVar1 = *param_6;
    *param_7 = 0;
    FUN_00be6104(param_1,param_2,param_3,&local_68,param_5,uVar1,uVar3,param_8,param_9,param_10,
                 *param_11);
  }
  else {
    FUN_00d0f740(1,pvVar4);
    uVar3 = *param_7;
    uVar1 = *param_6;
    *param_7 = 0;
    FUN_00be6104(param_1,param_2,param_3,&local_68,param_5,uVar1,uVar3,param_8,param_9,param_10,
                 *param_11);
    iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4);
    if (iVar2 == 1) {
      FUN_00b96ecc(pvVar4);
      operator_delete(pvVar4);
    }
  }
  *param_1 = &PTR_FUN_00d491e0;
  param_1[1] = &PTR_FUN_00d49598;
  param_1[2] = &PTR_FUN_00d496d8;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


// ===== 00bf4e28  FUN_00bf4e28 =====

void FUN_00bf4e28(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x500);
  return;
}


// ===== 00bf4e4c  FUN_00bf4e4c =====

bool FUN_00bf4e4c(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0xa0);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00bf4ea4  FUN_00bf4ea4 =====

void FUN_00bf4ea4(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined1 uStack_89;
  undefined8 *local_88;
  void **ppvStack_80;
  void *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  *param_1 = &PTR_FUN_00d48cc8;
  param_1[1] = &PTR_FUN_00d49078;
  param_1[2] = &PTR_FUN_00d491b8;
  if (((DAT_00dbad18 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbad18), iVar2 != 0)) {
    DAT_00dbad10 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbad18);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbad10 != '\0') {
    FUN_0066d348(0x42,DAT_00dbad10,"PeerConnection::~PeerConnection",0,0,0,0,0,0);
    local_40 = DAT_00dbad10;
    pcStack_38 = "PeerConnection::~PeerConnection";
    local_48 = &local_40;
  }
  FUN_00ca2c6c(param_1[0x95]);
  FUN_00c99b00(param_1 + 0x7b);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = 0;
  FUN_00cbf948(param_1[0x95],&local_60,&local_78);
  plVar3 = (long *)param_1[0x4e];
  param_1[0x4e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_00c7a9c4(param_1 + 0x4f,&local_60,&local_78);
  FUN_00be6cf4(param_1,&local_60);
  local_88 = param_1;
  ppvStack_80 = &local_78;
  (**(code **)(**(long **)(param_1[8] + 0x30) + 0x60))
            (*(long **)(param_1[8] + 0x30),&local_88,FUN_00bf7e84,&uStack_89);
  lVar5 = param_1[0x95];
  if (lVar5 != 0) {
    pvVar7 = *(void **)(lVar5 + 0x20);
    *(undefined8 *)(lVar5 + 0x20) = 0;
    if (pvVar7 != (void *)0x0) {
      FUN_00ccf7fc(pvVar7);
      operator_delete(pvVar7);
    }
  }
  FUN_00c99b00(param_1 + 0x7b);
  pvVar4 = local_78;
  pvVar7 = local_70;
  if (local_78 != (void *)0x0) {
    while (pvVar4 != pvVar7) {
      pvVar6 = (void *)((long)pvVar7 + -0x20);
      if (pvVar6 == (void *)0x0) goto LAB_00bf5568;
      (**(code **)((long)pvVar7 + -0x10))(0,pvVar6,pvVar6);
      pvVar7 = pvVar6;
    }
    local_70 = pvVar4;
    operator_delete(local_78);
  }
  pvVar4 = local_60;
  pvVar7 = local_58;
  if (local_60 != (void *)0x0) {
    while (pvVar4 != pvVar7) {
      pvVar6 = (void *)((long)pvVar7 + -0x20);
      if (pvVar6 == (void *)0x0) goto LAB_00bf5568;
      (**(code **)((long)pvVar7 + -0x10))(0,pvVar6,pvVar6);
      pvVar7 = pvVar6;
    }
    local_58 = pvVar4;
    operator_delete(local_60);
  }
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  param_1[0x9f] = 0;
  FUN_009881c8(param_1 + 0x9e);
  pvVar7 = (void *)param_1[0x9d];
  param_1[0x9d] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00afbecc(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x9c];
  param_1[0x9c] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00afbecc(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x9b];
  param_1[0x9b] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00afbecc(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x9a];
  param_1[0x9a] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00afbecc(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x99];
  param_1[0x99] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00afbecc(pvVar7);
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x98];
  param_1[0x98] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00afbecc(pvVar7);
    operator_delete(pvVar7);
  }
  plVar3 = (long *)param_1[0x97];
  param_1[0x97] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x96];
  param_1[0x96] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x95];
  param_1[0x95] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pvVar7 = (void *)param_1[0x93];
  param_1[0x93] = 0;
  if (pvVar7 != (void *)0x0) {
    FUN_00c33f1c(pvVar7);
    operator_delete(pvVar7);
  }
  local_48 = (char **)(param_1 + 0x90);
  FUN_00b612bc(&local_48,param_1[0x91]);
  pvVar7 = (void *)param_1[0x8d];
  if (pvVar7 != (void *)0x0) {
    pvVar4 = pvVar7;
    pvVar6 = (void *)param_1[0x8e];
    if (pvVar7 != (void *)param_1[0x8e]) {
      do {
        pvVar4 = (void *)((long)pvVar6 + -0xe0);
        if (pvVar4 == (void *)0x0) {
LAB_00bf5568:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00890cb8((long)pvVar6 + -0xd8);
        pvVar6 = pvVar4;
      } while (pvVar4 != pvVar7);
      pvVar4 = (void *)param_1[0x8d];
    }
    param_1[0x8e] = pvVar7;
    operator_delete(pvVar4);
  }
  FUN_007ebdcc(param_1[0x8b]);
  pvVar7 = (void *)param_1[0x8b];
  if ((pvVar7 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar2 == 1)) {
    operator_delete(pvVar7);
  }
  FUN_00c982e4(param_1 + 0x7b);
  if (*(char *)((long)param_1 + 0x3cf) < '\0') {
    operator_delete((void *)param_1[0x77]);
  }
  if ((*(char *)(param_1 + 0x76) == '\x01') && (*(char *)((long)param_1 + 0x3af) < '\0')) {
    operator_delete((void *)param_1[0x73]);
  }
  if ((*(char *)(param_1 + 0x72) == '\x01') && (*(char *)((long)param_1 + 0x38f) < '\0')) {
    operator_delete((void *)param_1[0x6f]);
    cVar1 = *(char *)((long)param_1 + 0x377);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x377);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x6c]);
  }
  FUN_00c7947c(param_1 + 0x4f);
  plVar3 = (long *)param_1[0x4e];
  param_1[0x4e] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pvVar7 = (void *)param_1[0x4c];
  if ((pvVar7 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar2 == 1)) {
    operator_delete(pvVar7);
  }
  pvVar7 = (void *)param_1[0x4b];
  if ((pvVar7 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar2 == 1)) {
    operator_delete(pvVar7);
  }
  FUN_007ebdcc(param_1[0x4a]);
  pvVar7 = (void *)param_1[0x4a];
  if ((pvVar7 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar2 == 1)) {
    operator_delete(pvVar7);
  }
  plVar3 = (long *)param_1[0x49];
  param_1[0x49] = 0;
  if (plVar3 != (long *)0x0) {
    pvVar7 = (void *)*plVar3;
    if (*(long *)((long)pvVar7 + 0x40) != 0) {
      FUN_00b970c4(pvVar7);
      pvVar7 = (void *)*plVar3;
    }
    if ((pvVar7 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar2 == 1)) {
      FUN_00b96ecc(pvVar7);
      operator_delete(pvVar7);
    }
    operator_delete(plVar3);
  }
  plVar3 = (long *)param_1[0x48];
  param_1[0x48] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xe8))();
  }
  plVar3 = (long *)param_1[0x47];
  param_1[0x47] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x46];
  param_1[0x46] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x45];
  param_1[0x45] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x44];
  param_1[0x44] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x43];
  param_1[0x43] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x42];
  param_1[0x42] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = (long *)param_1[0x41];
  param_1[0x41] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_00b1e590(param_1 + 0xf);
  pvVar7 = (void *)param_1[8];
  if ((pvVar7 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar2 == 1)) {
    FUN_00b96ecc(pvVar7);
    operator_delete(pvVar7);
  }
  plVar3 = (long *)param_1[3];
  if ((plVar3 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar2 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}


// ===== 00bf55ac  FUN_00bf55ac =====

void FUN_00bf55ac(void *param_1)

{
  FUN_00bf4ea4();
  operator_delete(param_1);
  return;
}


// ===== 00bf55dc  FUN_00bf55dc =====

bool FUN_00bf55dc(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x500) == 1;
}


// ===== 00bf55f4  FUN_00bf55f4 =====

void FUN_00bf55f4(long param_1)

{
  FUN_00bf4ea4(param_1 + -8);
  return;
}


// ===== 00bf5600  FUN_00bf5600 =====

void FUN_00bf5600(long param_1)

{
  FUN_00bf4ea4((void *)(param_1 + -8));
  operator_delete((void *)(param_1 + -8));
  return;
}


// ===== 00bf5634  FUN_00bf5634 =====

void FUN_00bf5634(long param_1)

{
  FUN_00bf4ea4(param_1 + -0x10);
  return;
}


// ===== 00bf5640  FUN_00bf5640 =====

void FUN_00bf5640(long param_1)

{
  FUN_00bf4ea4((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}


// ===== 00bf5674  FUN_00bf5674 =====

void FUN_00bf5674(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf567c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}


// ===== 00bf5680  FUN_00bf5680 =====

void FUN_00bf5680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49700;
  FUN_00b89cf8(param_1 + 2);
  return;
}


// ===== 00bf5694  FUN_00bf5694 =====

void FUN_00bf5694(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d49700;
  FUN_00b89cf8(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 00bf56d0  FUN_00bf56d0 =====

long FUN_00bf56d0(long param_1)

{
  return *(long *)(*(long *)(param_1 + 8) + 0x4a8) + 0x1b0;
}


// ===== 00bf56e4  FUN_00bf56e4 =====

long FUN_00bf56e4(long param_1)

{
  return param_1 + 0x10;
}


// ===== 00bf56f0  FUN_00bf56f0 =====

void FUN_00bf56f0(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  lVar6 = *param_1;
  lVar3 = *(long *)(lVar6 + 0x40);
  if (*(char *)(lVar3 + 5) == '\x01') {
    plVar2 = (long *)operator_new(8);
    if (lVar3 != 0) {
      FUN_00d0f740(1,lVar3);
    }
    *plVar2 = lVar3;
    if (*(long *)(lVar3 + 0x40) != 0) {
      FUN_00b9709c(lVar3);
    }
    plVar4 = *(long **)(lVar6 + 0x248);
    *(long **)(lVar6 + 0x248) = plVar2;
    if (plVar4 != (long *)0x0) {
      pvVar5 = (void *)*plVar4;
      if (*(long *)((long)pvVar5 + 0x40) != 0) {
        FUN_00b970c4(pvVar5);
        pvVar5 = (void *)*plVar4;
      }
      if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
        FUN_00b96ecc(pvVar5);
        operator_delete(pvVar5);
      }
      operator_delete(plVar4);
      return;
    }
  }
  return;
}


// ===== 00bf57c8  FUN_00bf57c8 =====

void FUN_00bf57c8(long *param_1)

{
  FUN_00ca2f64(*(undefined8 *)(*param_1 + 0x4a8));
  return;
}


// ===== 00bf57d8  FUN_00bf57d8 =====

void FUN_00bf57d8(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x18);
  return;
}


// ===== 00bf57fc  FUN_00bf57fc =====

bool FUN_00bf57fc(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 3);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00bf5854  FUN_00bf5854 =====

void FUN_00bf5854(undefined8 *param_1)

{
  undefined8 *local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  *param_1 = &PTR_FUN_00d49808;
  pcStack_90 = FUN_00bf6a2c;
  local_88 = 0;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = param_1;
  FUN_0066f1ac((long)&local_80 + 4);
  FUN_00bf6a68(&local_98,param_1[1]);
  FUN_0066f2b0((long)&local_80 + 4);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  return;
}


// ===== 00bf58e0  FUN_00bf58e0 =====

void FUN_00bf58e0(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d49808;
  local_c0 = FUN_00bf6a2c;
  local_b8 = 0;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[1];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf6b2c;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00bf5a00  FUN_00bf5a00 =====

void FUN_00bf5a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bf5a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}


// ===== 00bf5a14  FUN_00bf5a14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf5a14(undefined8 param_1,long param_2)

{
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c8 = *(undefined8 *)(param_2 + 0x10);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (void *)0xaaaaaaaaaaaaaa00;
  uStack_b8 = _UNK_001f46e8;
  local_c0 = _DAT_001f46e0;
  local_98 = 0xaaaaaaaaaaaaaa00;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bf6b70(param_1,&local_c8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  if (((char)local_98 == '\x01') && ((long)local_a0 < 0)) {
    operator_delete(local_b0);
  }
  return;
}


// ===== 00bf5ac4  FUN_00bf5ac4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf5ac4(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x10);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f4c48;
  local_a8 = _DAT_001f4c40;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bf6dbc(param_1,&local_b0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00bf5b5c  FUN_00bf5b5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf5b5c(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x10);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f46f8;
  local_a8 = _DAT_001f46f0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bf6f44(param_1,&local_b0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00bf5bf4  FUN_00bf5bf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00bf5bf4(long param_1)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x10);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f2798;
  local_b8 = _DAT_001f2790;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bf70cc;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_a8;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    bVar1 = (*pcVar3)();
    local_a8 = (undefined1 *)(CONCAT71(local_a8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return bVar1 & 1;
}


// ===== 00bf5d04  FUN_00bf5d04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00bf5d04(long param_1)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x10);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f2338;
  local_b8 = _DAT_001f2330;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bf70cc;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_a8;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    bVar1 = (*pcVar3)();
    local_a8 = (undefined1 *)(CONCAT71(local_a8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return bVar1 & 1;
}


// ===== 00bf5e14  FUN_00bf5e14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00bf5e14(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x10);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f3ab8;
  local_c0 = _DAT_001f3ab0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bf711c;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00bf5f18  FUN_00bf5f18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf5f18(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined2 uStack_ab;
  char cStack_a9;
  undefined5 uStack_a8;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined4 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined4 local_34;
  
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  puStack_a0 = &local_34;
  uStack_a3 = 0xaa;
  uStack_a1 = 0xaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = 0xaaaaaaaa00000000;
  uStack_d0 = _UNK_001f1cc8;
  local_d8 = _DAT_001f1cc0;
  uStack_a2 = 0;
  pvStack_c0 = (void *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ab = 0;
  cStack_a9 = '\0';
  uStack_a8 = 0;
  local_34 = param_3;
  FUN_0066f1ac(&local_98);
  FUN_00bf7168(param_1,&local_e0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_98);
  if (cStack_a9 < '\0') {
    operator_delete(pvStack_c0);
  }
  return;
}


// ===== 00bf5fe8  FUN_00bf5fe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00bf5fe8(long param_1)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x10);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f2918;
  local_b8 = _DAT_001f2910;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bf70cc;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_a8;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    bVar1 = (*pcVar3)();
    local_a8 = (undefined1 *)(CONCAT71(local_a8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return bVar1 & 1;
}


// ===== 00bf60f8  FUN_00bf60f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00bf60f8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x10);
  uStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f1ac8;
  local_c0 = _DAT_001f1ac0;
  local_b0 = 0xaaaaaa00aaaaaa00;
  FUN_0066f1ac((long)&uStack_a8 + 4);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bf7378;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&uStack_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    uVar2 = (*pcVar3)();
    local_b0._0_5_ = (undefined5)uVar2;
  }
  uVar1 = local_b0;
  FUN_0066f2b0((long)&uStack_a8 + 4);
  return uVar1 & 0xffffffffff;
}


// ===== 00bf6208  FUN_00bf6208 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00bf6208(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x10);
  uStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f4898;
  local_c0 = _DAT_001f4890;
  local_b0 = 0xaaaaaa00aaaaaa00;
  FUN_0066f1ac((long)&uStack_a8 + 4);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bf7378;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&uStack_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    uVar2 = (*pcVar3)();
    local_b0._0_5_ = (undefined5)uVar2;
  }
  uVar1 = local_b0;
  FUN_0066f2b0((long)&uStack_a8 + 4);
  return uVar1 & 0xffffffffff;
}


// ===== 00bf6318  FUN_00bf6318 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf6318(undefined8 param_1,long param_2)

{
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined2 uStack_9b;
  char cStack_99;
  undefined5 uStack_98;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  local_d0 = *(undefined8 *)(param_2 + 0x10);
  uStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_93 = 0xaa;
  uStack_91 = 0xaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = 0xaaaaaaaa00000000;
  uStack_c0 = _UNK_001f42b8;
  local_c8 = _DAT_001f42b0;
  uStack_92 = 0;
  pvStack_b0 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9b = 0;
  cStack_99 = '\0';
  uStack_98 = 0;
  FUN_0066f1ac((long)&uStack_90 + 4);
  FUN_00bf73cc(param_1,&local_d0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&uStack_90 + 4);
  if (cStack_99 < '\0') {
    operator_delete(pvStack_b0);
  }
  return;
}


// ===== 00bf63dc  FUN_00bf63dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf63dc(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x10);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3508;
  local_b8 = _DAT_001f3500;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00bf75d0;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar3 + 8))(plVar3,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar2 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return;
}


// ===== 00bf64d8  FUN_00bf64d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf64d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  undefined5 local_b8;
  undefined2 uStack_b3;
  char cStack_b1;
  undefined5 local_b0;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_e8 = *(undefined8 *)(param_2 + 0x10);
  puStack_a8 = &local_40;
  uStack_ab = 0xaa;
  uStack_a9 = 0xaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = 0xaaaaaaaa00000000;
  uStack_d8 = _UNK_001f2e88;
  local_e0 = _DAT_001f2e80;
  uStack_aa = 0;
  pvStack_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b3 = 0;
  cStack_b1 = '\0';
  local_b0 = 0;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_0066f1ac(&puStack_a0);
  FUN_00bf7614(param_1,&local_e8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_a0);
  if (cStack_b1 < '\0') {
    operator_delete(pvStack_c8);
  }
  return;
}


// ===== 00bf659c  FUN_00bf659c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf659c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long local_f0;
  code *local_e8;
  ulong uStack_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  local_f0 = *(long *)(param_2 + 0x10);
  local_d8 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = (code *)0x0;
  uStack_e0 = _UNK_001f3ac8;
  local_e8 = _DAT_001f3ac0;
  FUN_0066f1ac((long)&local_c0 + 4);
  plVar4 = *(long **)(param_2 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_50 = FUN_004473ec;
    pcStack_48 = FUN_00bf78f8;
    local_60 = &local_f0;
    (**(code **)(*plVar4 + 8))(plVar4,&local_60,&uStack_21,&uStack_22);
    (*local_50)(0,&local_60,&local_60);
    FUN_0066f318((long)&local_c0 + 4,0x7fffffffffffffff,3000000);
    pcVar3 = local_c8;
    puVar6 = local_d8;
    puStack_58 = puStack_d0;
  }
  else {
    pcVar3 = local_e8;
    if ((uStack_e0 & 1) != 0) {
      pcVar3 = *(code **)(local_e8 + *(long *)(local_f0 + ((long)uStack_e0 >> 1)));
    }
    (*pcVar3)(&local_60);
    puVar1 = local_d8;
    pcVar3 = local_50;
    puVar6 = local_60;
    puVar5 = puStack_d0;
    if (local_d8 != (undefined8 *)0x0) {
      while (puVar1 != puVar5) {
        puVar5 = puVar5 + -0x14;
        if (puVar5 == (undefined8 *)0x0) goto LAB_00bf6774;
        (**(code **)*puVar5)(puVar5);
      }
      puStack_d0 = puVar1;
      operator_delete(local_d8);
      pcVar3 = local_50;
      puVar6 = local_60;
    }
  }
  param_1[1] = puStack_58;
  *param_1 = puVar6;
  param_1[2] = pcVar3;
  puStack_d0 = (undefined8 *)0x0;
  local_c8 = (code *)0x0;
  local_d8 = (undefined8 *)0x0;
  FUN_0066f2b0((long)&local_c0 + 4);
  puVar5 = local_d8;
  puVar6 = puStack_d0;
  if (local_d8 != (undefined8 *)0x0) {
    while (puVar5 != puVar6) {
      puVar6 = puVar6 + -0x14;
      if (puVar6 == (undefined8 *)0x0) {
LAB_00bf6774:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar6)(puVar6);
    }
    puStack_d0 = puVar5;
    operator_delete(local_d8);
  }
  return;
}


// ===== 00bf6788  FUN_00bf6788 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf6788(undefined8 param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x10);
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0;
  uStack_b0 = _UNK_001f3ad8;
  local_b8 = _DAT_001f3ad0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bf792c(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  pvVar2 = local_a8;
  pvVar1 = local_a0;
  if (local_a8 != (void *)0x0) {
    while (pvVar2 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x28);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668d5c(pvVar1);
    }
    local_a0 = pvVar2;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00bf6868  FUN_00bf6868 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf6868(undefined8 param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x10);
  local_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0;
  uStack_b0 = _UNK_001f3f38;
  local_b8 = _DAT_001f3f30;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00bf792c(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  pvVar2 = local_a8;
  pvVar1 = local_a0;
  if (local_a8 != (void *)0x0) {
    while (pvVar2 != pvVar1) {
      pvVar1 = (void *)((long)pvVar1 + -0x28);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668d5c(pvVar1);
    }
    local_a0 = pvVar2;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00bf6948  FUN_00bf6948 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf6948(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  undefined5 local_b8;
  undefined2 uStack_b3;
  char cStack_b1;
  undefined5 local_b0;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_e8 = *(undefined8 *)(param_2 + 0x10);
  puStack_a8 = &local_40;
  uStack_ab = 0xaa;
  uStack_a9 = 0xaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = 0xaaaaaaaa00000000;
  uStack_d8 = _UNK_001f4a88;
  local_e0 = _DAT_001f4a80;
  uStack_aa = 0;
  pvStack_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b3 = 0;
  cStack_b1 = '\0';
  local_b0 = 0;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_0066f1ac(&puStack_a0);
  FUN_00bf7b94(param_1,&local_e8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_a0);
  if (cStack_b1 < '\0') {
    operator_delete(pvStack_c8);
  }
  return;
}


// ===== 00bf6a0c  FUN_00bf6a0c =====

bool FUN_00bf6a0c(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x18) == 1;
}


// ===== 00bf6a24  FUN_00bf6a24 =====

void FUN_00bf6a24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf6a2c);
  (*pcVar1)();
}


// ===== 00bf6a2c  FUN_00bf6a2c =====

void FUN_00bf6a2c(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 00bf6a68  FUN_00bf6a68 =====

void FUN_00bf6a68(long *param_1,long *param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar1 = FUN_007e18fc(param_2);
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)param_1[1];
    if ((param_1[2] & 1U) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_1 + (param_1[2] >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00bf6ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  local_30 = FUN_004473ec;
  pcStack_28 = FUN_00bf6b2c;
  local_40[0] = param_1;
  (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
  (*local_30)(0,local_40,local_40);
  FUN_0066f318((long)param_1 + 0x1c,0x7fffffffffffffff,3000000);
  return;
}


// ===== 00bf6b2c  FUN_00bf6b2c =====

void FUN_00bf6b2c(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00bf6b70  FUN_00bf6b70 =====

void FUN_00bf6b70(undefined8 *param_1,long param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf6d88;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x3c,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00bf6c70(param_2,0);
  }
  cVar1 = *(char *)(param_2 + 0x30);
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (cVar1 == '\x01') {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_1[2] = uVar3;
    param_1[1] = uVar5;
    *param_1 = uVar4;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}


// ===== 00bf6c70  FUN_00bf6c70 =====

void FUN_00bf6c70(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  void *local_40;
  long lStack_38;
  ulong local_30;
  char local_28;
  
  pcVar6 = (code *)param_1[1];
  puVar1 = (ulong *)(param_1 + 3);
  if ((param_1[2] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(*param_1 + (param_1[2] >> 1)));
  }
  (*pcVar6)(&local_40);
  uVar5 = local_30;
  lVar4 = lStack_38;
  pvVar3 = local_40;
  cVar2 = (char)param_1[6];
  if (cVar2 == local_28) {
    if (cVar2 != '\0') {
      if (*(char *)((long)param_1 + 0x2f) < '\0') {
        operator_delete((void *)param_1[3]);
      }
      uVar5 = local_30;
      pvVar3 = local_40;
      local_30 = local_30 & 0xffffffffffffff;
      local_40 = (void *)((ulong)local_40 & 0xffffffffffffff00);
      param_1[4] = lStack_38;
      *puVar1 = (ulong)pvVar3;
      param_1[5] = uVar5;
    }
  }
  else if (cVar2 == '\0') {
    if (puVar1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lStack_38 = 0;
    local_30 = 0;
    local_40 = (void *)0x0;
    param_1[5] = uVar5;
    param_1[4] = lVar4;
    *puVar1 = (ulong)pvVar3;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      operator_delete((void *)param_1[3]);
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  if ((local_28 == '\x01') && ((long)local_30 < 0)) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00bf6d88  FUN_00bf6d88 =====

void FUN_00bf6d88(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00bf6c70(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x3c);
  return;
}


// ===== 00bf6dbc  FUN_00bf6dbc =====

void FUN_00bf6dbc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf6ec4;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00bf6ec4  FUN_00bf6ec4 =====

void FUN_00bf6ec4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00bf6f44  FUN_00bf6f44 =====

void FUN_00bf6f44(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00bf704c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00bf704c  FUN_00bf704c =====

void FUN_00bf704c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00bf70cc  FUN_00bf70cc =====

void FUN_00bf70cc(undefined8 *param_1)

{
  byte bVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  bVar1 = (*pcVar2)();
  *(byte *)(plVar3 + 3) = bVar1 & 1;
  FUN_0066f2dc((long)plVar3 + 0x1c);
  return;
}


// ===== 00bf711c  FUN_00bf711c =====

void FUN_00bf711c(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


