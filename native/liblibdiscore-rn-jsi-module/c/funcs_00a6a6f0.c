// ===== 00a6a6f0  FUN_00a6a6f0 =====

void FUN_00a6a6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00afaa38,param_2,param_3);
  return;
}


// ===== 00a6a704  FUN_00a6a704 =====

bool FUN_00a6a704(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    lVar3 = <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all(*param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_00a6a80c;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all
                        (*param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_00a6a80c:
        uVar4 = param_1[1];
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 00a6a83c to 00a6a843 has its CatchHandler @ 00a6a860 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
        param_1[1] = lVar3;
        return lVar3 != 0;
      }
      lVar3 = 0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
        lVar3 = <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all
                          (*param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = <std::io::stdio::StdoutLock_as_core::io::write::Write>::write_all
                          (*param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_00a6a80c;
    }
  }
  return lVar3 != 0;
}


// ===== 00a6a868  FUN_00a6a868 =====

void FUN_00a6a868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00afaa68,param_2,param_3);
  return;
}


// ===== 00a6a87c  FUN_00a6a87c =====

bool FUN_00a6a87c(long param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    lVar3 = FUN_00a6aea4(param_1,&local_34,1);
    if (lVar3 != 0) goto LAB_00a6a974;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_00a6aea4(param_1,&local_34,2);
      if (lVar3 != 0) {
LAB_00a6a974:
        uVar4 = *(ulong *)(param_1 + 8);
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 00a6a9a4 to 00a6a9ab has its CatchHandler @ 00a6a9c8 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
        *(long *)(param_1 + 8) = lVar3;
        return lVar3 != 0;
      }
      lVar3 = 0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
        lVar3 = FUN_00a6aea4(param_1,&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_00a6aea4(param_1,&local_34,4);
      }
      if (lVar3 != 0) goto LAB_00a6a974;
    }
  }
  return lVar3 != 0;
}


// ===== 00a6a9d0  FUN_00a6a9d0 =====

void FUN_00a6a9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00afaa98,param_2,param_3);
  return;
}


// ===== 00a6a9e4  FUN_00a6a9e4 =====

bool FUN_00a6a9e4(long param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  if (param_2 < 0x80) {
    local_34 = param_2 & 0xff;
    lVar3 = FUN_00a6b090(&local_34,1);
    if (lVar3 != 0) goto LAB_00a6aadc;
    lVar3 = 0;
  }
  else {
    uVar2 = (undefined1)param_2;
    if (param_2 < 0x800) {
      local_34 = (CONCAT11(uVar2,(char)(param_2 >> 6)) & 0x3fff | 0x8000) | 0xc0;
      lVar3 = FUN_00a6b090(&local_34,2);
      if (lVar3 != 0) {
LAB_00a6aadc:
        uVar4 = *(ulong *)(param_1 + 8);
        if (((uVar4 != 0) && (1 < (uVar4 & 3) - 2)) && ((uVar4 & 3) != 0)) {
          local_28 = uVar4 - 1;
          local_30 = 3;
                    /* try { // try from 00a6ab0c to 00a6ab13 has its CatchHandler @ 00a6ab30 */
          <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
        }
        *(long *)(param_1 + 8) = lVar3;
        return lVar3 != 0;
      }
      lVar3 = 0;
    }
    else {
      bVar1 = (byte)(param_2 >> 6);
      if (param_2 >> 0x10 == 0) {
        local_34._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
        local_34 = CONCAT31(CONCAT12(uVar2,(short)local_34) >> 8,(char)(param_2 >> 0xc)) & 0x3fffff
                   | 0x8000e0;
        lVar3 = FUN_00a6b090(&local_34,3);
      }
      else {
        local_34 = CONCAT31(CONCAT21(CONCAT11(uVar2,bVar1),(char)(param_2 >> 0xc)),
                            (char)(param_2 >> 0x12)) & 0x3f3f3fff | 0x808080f0;
        lVar3 = FUN_00a6b090(&local_34,4);
      }
      if (lVar3 != 0) goto LAB_00a6aadc;
    }
  }
  return lVar3 != 0;
}


// ===== 00a6ab38  FUN_00a6ab38 =====

void FUN_00a6ab38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00afaac8,param_2,param_3);
  return;
}


// ===== 00a6ab4c  FUN_00a6ab4c =====

void FUN_00a6ab4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = &DAT_003823b5;
  param_1[2] = 0x12;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}


// ===== 00a6ab6c  FUN_00a6ab6c =====

void FUN_00a6ab6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = &DAT_003823c7;
  param_1[2] = 0x1a;
  param_1[3] = param_2;
  param_1[4] = param_3;
  return;
}


// ===== 00a6ab8c  FUN_00a6ab8c =====

ulong FUN_00a6ab8c(int param_1,undefined8 param_2)

{
  char *pcVar1;
  size_t sVar2;
  ulong uVar3;
  long local_d8;
  void *local_d0;
  undefined8 uStack_c8;
  char local_c0 [136];
  undefined1 auStack_38 [24];
  
  local_c0[8] = '\0';
  local_c0[9] = '\0';
  local_c0[10] = '\0';
  local_c0[0xb] = '\0';
  local_c0[0xc] = '\0';
  local_c0[0xd] = '\0';
  local_c0[0xe] = '\0';
  local_c0[0xf] = '\0';
  local_c0[0] = '\0';
  local_c0[1] = '\0';
  local_c0[2] = '\0';
  local_c0[3] = '\0';
  local_c0[4] = '\0';
  local_c0[5] = '\0';
  local_c0[6] = '\0';
  local_c0[7] = '\0';
  local_c0[0x18] = '\0';
  local_c0[0x19] = '\0';
  local_c0[0x1a] = '\0';
  local_c0[0x1b] = '\0';
  local_c0[0x1c] = '\0';
  local_c0[0x1d] = '\0';
  local_c0[0x1e] = '\0';
  local_c0[0x1f] = '\0';
  local_c0[0x10] = '\0';
  local_c0[0x11] = '\0';
  local_c0[0x12] = '\0';
  local_c0[0x13] = '\0';
  local_c0[0x14] = '\0';
  local_c0[0x15] = '\0';
  local_c0[0x16] = '\0';
  local_c0[0x17] = '\0';
  local_c0[0x28] = '\0';
  local_c0[0x29] = '\0';
  local_c0[0x2a] = '\0';
  local_c0[0x2b] = '\0';
  local_c0[0x2c] = '\0';
  local_c0[0x2d] = '\0';
  local_c0[0x2e] = '\0';
  local_c0[0x2f] = '\0';
  local_c0[0x20] = '\0';
  local_c0[0x21] = '\0';
  local_c0[0x22] = '\0';
  local_c0[0x23] = '\0';
  local_c0[0x24] = '\0';
  local_c0[0x25] = '\0';
  local_c0[0x26] = '\0';
  local_c0[0x27] = '\0';
  local_c0[0x38] = '\0';
  local_c0[0x39] = '\0';
  local_c0[0x3a] = '\0';
  local_c0[0x3b] = '\0';
  local_c0[0x3c] = '\0';
  local_c0[0x3d] = '\0';
  local_c0[0x3e] = '\0';
  local_c0[0x3f] = '\0';
  local_c0[0x30] = '\0';
  local_c0[0x31] = '\0';
  local_c0[0x32] = '\0';
  local_c0[0x33] = '\0';
  local_c0[0x34] = '\0';
  local_c0[0x35] = '\0';
  local_c0[0x36] = '\0';
  local_c0[0x37] = '\0';
  local_c0[0x48] = '\0';
  local_c0[0x49] = '\0';
  local_c0[0x4a] = '\0';
  local_c0[0x4b] = '\0';
  local_c0[0x4c] = '\0';
  local_c0[0x4d] = '\0';
  local_c0[0x4e] = '\0';
  local_c0[0x4f] = '\0';
  local_c0[0x40] = '\0';
  local_c0[0x41] = '\0';
  local_c0[0x42] = '\0';
  local_c0[0x43] = '\0';
  local_c0[0x44] = '\0';
  local_c0[0x45] = '\0';
  local_c0[0x46] = '\0';
  local_c0[0x47] = '\0';
  local_c0[0x58] = '\0';
  local_c0[0x59] = '\0';
  local_c0[0x5a] = '\0';
  local_c0[0x5b] = '\0';
  local_c0[0x5c] = '\0';
  local_c0[0x5d] = '\0';
  local_c0[0x5e] = '\0';
  local_c0[0x5f] = '\0';
  local_c0[0x50] = '\0';
  local_c0[0x51] = '\0';
  local_c0[0x52] = '\0';
  local_c0[0x53] = '\0';
  local_c0[0x54] = '\0';
  local_c0[0x55] = '\0';
  local_c0[0x56] = '\0';
  local_c0[0x57] = '\0';
  local_c0[0x68] = '\0';
  local_c0[0x69] = '\0';
  local_c0[0x6a] = '\0';
  local_c0[0x6b] = '\0';
  local_c0[0x6c] = '\0';
  local_c0[0x6d] = '\0';
  local_c0[0x6e] = '\0';
  local_c0[0x6f] = '\0';
  local_c0[0x60] = '\0';
  local_c0[0x61] = '\0';
  local_c0[0x62] = '\0';
  local_c0[99] = '\0';
  local_c0[100] = '\0';
  local_c0[0x65] = '\0';
  local_c0[0x66] = '\0';
  local_c0[0x67] = '\0';
  local_c0[0x78] = '\0';
  local_c0[0x79] = '\0';
  local_c0[0x7a] = '\0';
  local_c0[0x7b] = '\0';
  local_c0[0x7c] = '\0';
  local_c0[0x7d] = '\0';
  local_c0[0x7e] = '\0';
  local_c0[0x7f] = '\0';
  local_c0[0x70] = '\0';
  local_c0[0x71] = '\0';
  local_c0[0x72] = '\0';
  local_c0[0x73] = '\0';
  local_c0[0x74] = '\0';
  local_c0[0x75] = '\0';
  local_c0[0x76] = '\0';
  local_c0[0x77] = '\0';
  pcVar1 = strerror_r(param_1,local_c0,0x80);
  if (-1 < (int)pcVar1) {
    sVar2 = strlen(local_c0);
    <alloc::string::alloc::string::String>::from_utf8_lossy(auStack_38,local_c0,sVar2);
    <alloc::string::String_as_core::convert::From<alloc::borrow::Cow<str>>>::from
              (&local_d8,auStack_38);
                    /* try { // try from 00a6abec to 00a6abf7 has its CatchHandler @ 00a6ac3c */
    uVar3 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,local_d0,uStack_c8);
    if (local_d8 != 0) {
      uVar3 = uVar3 & 0xffffffff;
      free(local_d0);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_003830e2,0x25,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afbaf8);
}


// ===== 00a6ac5c  FUN_00a6ac5c =====

void FUN_00a6ac5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  core::fmt::write(param_1,&PTR_FUN_00afac20,param_2,param_3);
  return;
}


// ===== 00a6ac70  FUN_00a6ac70 =====

undefined1  [16] FUN_00a6ac70(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00a6ac80  FUN_00a6ac80 =====

undefined8 FUN_00a6ac80(void)

{
  return 0;
}


// ===== 00a6ac88  FUN_00a6ac88 =====

void FUN_00a6ac88(void)

{
  return;
}


// ===== 00a6ac8c  FUN_00a6ac8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6ac8c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0b40;
  param_1[1] = _UNK_002a0b48;
  *param_1 = uVar1;
  return;
}


// ===== 00a6aca0  FUN_00a6aca0 =====

undefined ** FUN_00a6aca0(undefined8 param_1,long param_2,undefined **param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  size_t *psVar14;
  iovec *__iovec;
  
  puVar3 = PTR_PTR_00b01168;
  ppuVar4 = (undefined **)0x0;
  if (param_3 != (undefined **)0x0) {
    lVar8 = (long)param_3 * 0x10;
    uVar11 = lVar8 - 0x10;
    plVar12 = (long *)(param_2 + 8);
    do {
      ppuVar5 = ppuVar4;
      if (*plVar12 != 0) break;
      lVar8 = lVar8 + -0x10;
      ppuVar4 = (undefined **)((long)ppuVar4 + 1);
      ppuVar5 = (undefined **)((uVar11 >> 4) + 1);
      plVar12 = plVar12 + 2;
    } while (lVar8 != 0);
    if (param_3 < ppuVar5) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (ppuVar5,param_3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb390);
    }
    if ((long)param_3 - (long)ppuVar5 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      __iovec = (iovec *)(param_2 + (long)ppuVar5 * 0x10);
      uVar11 = (long)param_3 - (long)ppuVar5;
      do {
        while( true ) {
          uVar6 = uVar11;
          if (0x3ff < uVar11) {
            uVar6 = 0x400;
          }
          uVar6 = writev(2,__iovec,(int)uVar6);
          if (uVar6 == 0xffffffffffffffff) break;
          if (uVar6 == 0) {
            return &PTR_DAT_00afb878;
          }
          lVar8 = uVar11 * 0x10;
          uVar9 = 0;
          uVar13 = lVar8 - 0x10;
          psVar14 = &__iovec->iov_len;
          do {
            uVar2 = uVar6 - *psVar14;
            uVar10 = uVar9;
            if (uVar6 < *psVar14) break;
            lVar8 = lVar8 + -0x10;
            uVar9 = uVar9 + 1;
            uVar6 = uVar2;
            uVar10 = (uVar13 >> 4) + 1;
            psVar14 = psVar14 + 2;
          } while (lVar8 != 0);
          if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
            core::slice::index::slice_index_fail
                      (uVar10,uVar11,uVar11,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb390);
          }
          if (uVar11 - uVar10 == 0) {
            if (uVar6 == 0) {
              return (undefined **)0x0;
            }
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_0038298a,0x4f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb378);
          }
          __iovec = __iovec + uVar10;
          if (__iovec->iov_len < uVar6) {
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      (&DAT_00382967,0x47,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afb360);
          }
          __iovec->iov_base = (void *)((long)__iovec->iov_base + uVar6);
          __iovec->iov_len = __iovec->iov_len - uVar6;
          uVar11 = uVar11 - uVar10;
        }
        piVar7 = (int *)__errno();
        iVar1 = *piVar7;
        if (*(undefined ***)puVar3 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
        ppuVar4 = (undefined **)((long)iVar1 << 0x20 | 2);
                    /* try { // try from 00a6addc to 00a6adeb has its CatchHandler @ 00a6ae88 */
        lVar8 = core::io::error::os_functions::get_os_functions();
        uVar6 = (**(code **)(lVar8 + 0x10))(iVar1);
      } while ((uVar6 & 1) != 0);
    }
  }
  return ppuVar4;
}


// ===== 00a6aea4  FUN_00a6aea4 =====

undefined ** FUN_00a6aea4(undefined8 param_1,void *param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_00b01168;
  if (param_3 != 0) {
    do {
      uVar3 = write(2,param_2,param_3);
      if (uVar3 == 0xffffffffffffffff) {
        piVar4 = (int *)__errno();
        iVar1 = *piVar4;
        if (*(undefined ***)puVar2 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
                    /* try { // try from 00a6af48 to 00a6af57 has its CatchHandler @ 00a6afb0 */
        lVar5 = core::io::error::os_functions::get_os_functions();
        uVar3 = (**(code **)(lVar5 + 0x10))(iVar1);
        if ((uVar3 & 1) == 0) {
          return (undefined **)((long)iVar1 << 0x20 | 2);
        }
      }
      else {
        if (uVar3 == 0) {
          return &PTR_DAT_00afb878;
        }
        if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar3,param_3,param_3,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc890);
        }
        param_2 = (void *)((long)param_2 + uVar3);
        param_3 = param_3 - uVar3;
      }
    } while (param_3 != 0);
  }
  return (undefined **)0x0;
}


// ===== 00a6afc8  FUN_00a6afc8 =====

ulong FUN_00a6afc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  ulong local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = param_1;
                    /* try { // try from 00a6afe4 to 00a6aff3 has its CatchHandler @ 00a6b078 */
  iVar1 = core::fmt::write(&local_40,&PTR_FUN_00afaa98,param_2,param_3);
  if (iVar1 == 0) {
    if (local_38 != 0) {
      if ((1 < (local_38 & 3) - 2) && ((local_38 & 3) != 0)) {
        local_28 = local_38 - 1;
        local_30 = 3;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
      }
      return 0;
    }
  }
  else if (local_38 == 0) {
                    /* try { // try from 00a6b05c to 00a6b073 has its CatchHandler @ 00a6b078 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_fmt(&DAT_00382152,0xad,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afa9f0);
  }
  return local_38;
}


// ===== 00a6b090  FUN_00a6b090 =====

undefined ** FUN_00a6b090(void *param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_00b01168;
  if (param_2 != 0) {
    do {
      uVar3 = write(1,param_1,param_2);
      if (uVar3 == 0xffffffffffffffff) {
        piVar4 = (int *)__errno();
        iVar1 = *piVar4;
        if (*(undefined ***)puVar2 != &PTR_FUN_00afaaf8) {
          core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
        }
                    /* try { // try from 00a6b134 to 00a6b143 has its CatchHandler @ 00a6b19c */
        lVar5 = core::io::error::os_functions::get_os_functions();
        uVar3 = (**(code **)(lVar5 + 0x10))(iVar1);
        if ((uVar3 & 1) == 0) {
          return (undefined **)((long)iVar1 << 0x20 | 2);
        }
      }
      else {
        if (uVar3 == 0) {
          return &PTR_DAT_00afb878;
        }
        if (param_2 < uVar3) {
                    /* WARNING: Subroutine does not return */
          core::slice::index::slice_index_fail
                    (uVar3,param_2,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc890);
        }
        param_1 = (void *)((long)param_1 + uVar3);
        param_2 = param_2 - uVar3;
      }
    } while (param_2 != 0);
  }
  return (undefined **)0x0;
}


// ===== 00a6b1b4  FUN_00a6b1b4 =====

undefined1  [16] FUN_00a6b1b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 00a6b1c4  FUN_00a6b1c4 =====

undefined8 FUN_00a6b1c4(void)

{
  return 0;
}


// ===== 00a6b1cc  FUN_00a6b1cc =====

void FUN_00a6b1cc(void)

{
  return;
}


// ===== 00a6b1d0  FUN_00a6b1d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6b1d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 00a6b1e4  FUN_00a6b1e4 =====

void FUN_00a6b1e4(undefined8 param_1,undefined8 param_2)

{
  std::panicking::default_hook(param_2);
  return;
}


// ===== 00a6b1ec  FUN_00a6b1ec =====

void FUN_00a6b1ec(undefined8 param_1,undefined8 param_2)

{
  std::panicking::default_hook(param_2);
  return;
}


// ===== 00a6b1f4  FUN_00a6b1f4 =====

void FUN_00a6b1f4(undefined8 param_1)

{
  FUN_00a51514(param_1);
  return;
}


// ===== 00a6b1fc  FUN_00a6b1fc =====

void FUN_00a6b1fc(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  __dev_t local_a0;
  __ino_t _Stack_98;
  __nlink_t _Stack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __dev_t _Stack_78;
  __off_t _Stack_70;
  __blksize_t _Stack_68;
  __blkcnt_t local_60;
  __time_t _Stack_58;
  long lStack_50;
  __time_t _Stack_48;
  long local_40;
  __time_t _Stack_38;
  long lStack_30;
  long lStack_28;
  
  _Stack_98 = 0;
  local_a0 = 0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  _Stack_90 = 0;
  _Stack_78 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  _Stack_68 = 0;
  _Stack_70 = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  lStack_50 = 0;
  _Stack_38 = 0;
  local_40 = 0;
  lStack_28 = 0;
  lStack_30 = 0;
  iVar1 = stat(param_3,(stat *)&local_a0);
  if (iVar1 != -1) {
    param_1[10] = _Stack_58;
    param_1[9] = local_60;
    param_1[0xc] = _Stack_48;
    param_1[0xb] = lStack_50;
    param_1[0xe] = _Stack_38;
    param_1[0xd] = local_40;
    param_1[0x10] = lStack_28;
    param_1[0xf] = lStack_30;
    param_1[2] = _Stack_98;
    param_1[1] = local_a0;
    param_1[4] = uStack_88;
    param_1[3] = _Stack_90;
    param_1[6] = _Stack_78;
    param_1[5] = local_80;
    param_1[8] = _Stack_68;
    param_1[7] = _Stack_70;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 00a6b2d0  FUN_00a6b2d0 =====

void FUN_00a6b2d0(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  __dev_t local_a0;
  __ino_t _Stack_98;
  __nlink_t _Stack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __dev_t _Stack_78;
  __off_t _Stack_70;
  __blksize_t _Stack_68;
  __blkcnt_t local_60;
  __time_t _Stack_58;
  long lStack_50;
  __time_t _Stack_48;
  long local_40;
  __time_t _Stack_38;
  long lStack_30;
  long lStack_28;
  
  _Stack_98 = 0;
  local_a0 = 0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  _Stack_90 = 0;
  _Stack_78 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  _Stack_68 = 0;
  _Stack_70 = 0;
  _Stack_58 = 0;
  local_60 = 0;
  _Stack_48 = 0;
  lStack_50 = 0;
  _Stack_38 = 0;
  local_40 = 0;
  lStack_28 = 0;
  lStack_30 = 0;
  iVar1 = lstat(param_3,(stat *)&local_a0);
  if (iVar1 != -1) {
    param_1[10] = _Stack_58;
    param_1[9] = local_60;
    param_1[0xc] = _Stack_48;
    param_1[0xb] = lStack_50;
    param_1[0xe] = _Stack_38;
    param_1[0xd] = local_40;
    param_1[0x10] = lStack_28;
    param_1[0xf] = lStack_30;
    param_1[2] = _Stack_98;
    param_1[1] = local_a0;
    param_1[4] = uStack_88;
    param_1[3] = _Stack_90;
    param_1[6] = _Stack_78;
    param_1[5] = local_80;
    param_1[8] = _Stack_68;
    param_1[7] = _Stack_70;
    *param_1 = 0;
    return;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 != &PTR_FUN_00afaaf8) {
    core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  }
  *param_1 = 1;
  param_1[1] = (long)iVar1 << 0x20 | 2;
  return;
}


// ===== 00a6b3a4  FUN_00a6b3a4 =====

ulong FUN_00a6b3a4(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = rmdir(param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a6b428  FUN_00a6b428 =====

ulong FUN_00a6b428(undefined8 param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = unlink(param_2);
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_PTR_00b01168 == &PTR_FUN_00afaaf8) {
    return (long)iVar1 << 0x20 | 2;
  }
  core::io::error::os_functions::set_functions::set_functions_inner(&PTR_FUN_00afaaf8);
  return (long)iVar1 << 0x20 | 2;
}


// ===== 00a6b4ac  FUN_00a6b4ac =====

void FUN_00a6b4ac(undefined8 param_1)

{
  FUN_00a51bd8(param_1);
  return;
}


// ===== 00a6b4b4  FUN_00a6b4b4 =====

void FUN_00a6b4b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00a538a4(param_2);
  return;
}


// ===== 00a6b4bc  rust_eh_personality =====

/* WARNING: Type propagation algorithm not settling */

undefined4
rust_eh_personality(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *unaff_x22;
  byte *pbVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 local_88;
  int local_7c;
  undefined8 *local_78;
  undefined8 *puStack_70;
  byte *local_68;
  
  if (param_1 != 1) {
    return 3;
  }
  local_88 = param_5;
  pbVar6 = (byte *)FUN_00ab26a8(param_5);
  local_7c = 0;
  lVar7 = FUN_00ab6460(param_5,&local_7c);
  bVar5 = local_7c == 0;
  pbVar8 = (byte *)FUN_00ab26dc(param_5);
  local_78 = &local_88;
  puStack_70 = local_78;
  if (pbVar6 == (byte *)0x0) {
    uVar12 = 0;
    pbVar8 = unaff_x22;
    goto joined_r0x00a6b71c;
  }
  pbVar16 = pbVar6 + 1;
  bVar2 = *pbVar6;
  pbVar9 = pbVar8;
  local_68 = pbVar16;
  if (bVar2 != 0xff) {
    bVar3 = bVar2 >> 4 & 7;
    if (bVar3 < 3) {
      if (bVar3 == 0) goto LAB_00a6b7bc;
      if (bVar3 != 1) {
        if (bVar3 != 2) {
          return 3;
        }
        lVar10 = -0x18;
        puVar11 = &UNK_00afb8c0;
        goto LAB_00a6b770;
      }
      auVar20 = FUN_00a53720(&local_68,bVar2 & 0xf);
      lVar10 = auVar20._8_8_;
      pbVar9 = pbVar16;
joined_r0x00a6b7a4:
      if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        return 3;
      }
      pbVar9 = pbVar9 + lVar10;
    }
    else {
      if (bVar3 == 3) {
        lVar10 = -0x10;
        puVar11 = &UNK_00afb8f0;
LAB_00a6b770:
                    /* try { // try from 00a6b774 to 00a6b777 has its CatchHandler @ 00a6b830 */
        pbVar9 = (byte *)(**(code **)(puVar11 + 0x28))(&stack0xffffffffffffffa0 + lVar10);
        if (pbVar9 != (byte *)0x0) goto LAB_00a6b780;
      }
      else {
        if (bVar3 != 5) {
          if (bVar3 != 4) {
            return 3;
          }
          if (pbVar8 == (byte *)0x0) {
            return 3;
          }
LAB_00a6b780:
          auVar20 = FUN_00a53720(&local_68,bVar2 & 0xf);
          lVar10 = auVar20._8_8_;
          goto joined_r0x00a6b7a4;
        }
        pbVar16 = (byte *)((ulong)(pbVar6 + 8) & 0xfffffffffffffff8);
      }
LAB_00a6b7bc:
      if ((bVar2 & 0xf) != 0) {
        return 3;
      }
      local_68 = pbVar16 + 8;
      pbVar9 = *(byte **)pbVar16;
    }
    if ((char)bVar2 < '\0') {
      pbVar9 = *(byte **)pbVar9;
    }
  }
  pbVar16 = local_68 + 1;
  pbVar6 = pbVar16;
  if (*local_68 != 0xff) {
    do {
      pbVar16 = pbVar6 + 1;
      bVar2 = *pbVar6;
      pbVar6 = pbVar16;
    } while ((char)bVar2 < '\0');
  }
  pbVar15 = (byte *)(lVar7 - (ulong)bVar5);
  bVar2 = *pbVar16;
  uVar17 = 0;
  uVar12 = 0;
  pbVar6 = pbVar16 + 1;
  do {
    pbVar16 = pbVar6 + 1;
    bVar3 = *pbVar6;
    uVar14 = uVar12 & 0x3f;
    uVar12 = uVar12 + 7;
    uVar17 = ((ulong)bVar3 & 0x7f) << uVar14 | uVar17;
    pbVar6 = pbVar16;
  } while ((char)bVar3 < '\0');
  uVar12 = 4;
  local_68 = pbVar16;
  do {
    if (pbVar16 + uVar17 <= local_68) goto joined_r0x00a6b71c;
    auVar20 = FUN_00a53720(&local_68,bVar2);
    if ((auVar20 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 3;
    }
    auVar18 = FUN_00a53720(&local_68,bVar2);
    if ((auVar18 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 3;
    }
    auVar19 = FUN_00a53720(&local_68,bVar2);
    if ((auVar19 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      return 3;
    }
    uVar13 = 0;
    uVar14 = 0;
    pbVar6 = local_68;
    do {
      local_68 = pbVar6 + 1;
      bVar3 = *pbVar6;
      uVar4 = uVar14 & 0x3f;
      uVar14 = uVar14 + 7;
      uVar13 = ((ulong)bVar3 & 0x7f) << uVar4 | uVar13;
      pbVar6 = local_68;
    } while ((char)bVar3 < '\0');
    if (pbVar15 < pbVar8 + auVar20._8_8_) goto joined_r0x00a6b71c;
  } while (pbVar8 + auVar20._8_8_ + auVar18._8_8_ <= pbVar15);
  if (auVar19._8_8_ == 0) {
    uVar12 = 0;
  }
  else {
    pbVar8 = pbVar9 + auVar19._8_8_;
    if (uVar13 == 0) {
      uVar12 = 1;
    }
    else {
      uVar14 = 0;
      uVar12 = 0;
      pbVar6 = pbVar16 + uVar13 + uVar17 + -1;
      do {
        bVar2 = *pbVar6;
        uVar17 = uVar12 & 0x3f;
        uVar1 = (int)uVar12 + 7;
        uVar12 = (ulong)uVar1;
        uVar14 = ((ulong)bVar2 & 0x7f) << uVar17 | uVar14;
        pbVar6 = pbVar6 + 1;
      } while ((char)bVar2 < '\0');
      uVar17 = 0;
      if (0x3f < bVar2 && uVar1 < 0x40) {
        uVar17 = -1L << (uVar12 & 0x3f);
      }
      uVar12 = 2;
      if ((long)(uVar14 | uVar17) < 1) {
        uVar12 = 3;
      }
      if ((uVar14 | uVar17) == 0) {
        uVar12 = 1;
      }
    }
  }
joined_r0x00a6b71c:
  if ((param_2 & 1) != 0) {
    return (&DAT_00383cc4)[uVar12];
  }
  if (uVar12 < 3) {
    if (1 < uVar12 - 1) {
      return 8;
    }
  }
  else {
    if (uVar12 != 3) {
      return 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
      return 8;
    }
  }
  thunk_FUN_00ab2898(param_5,0,param_4);
  thunk_FUN_00ab2898(param_5,1,0);
  FUN_00ab2764(param_5,pbVar8);
  return 7;
}


// ===== 00a6b834  FUN_00a6b834 =====

void FUN_00a6b834(void)

{
  FUN_00a29778();
  return;
}


// ===== 00a6b840  FUN_00a6b840 =====

void FUN_00a6b840(void)

{
  void *in_stack_00000208;
  
  free(in_stack_00000208);
  return;
}


// ===== 00a6b850  FUN_00a6b850 =====

void FUN_00a6b850(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6b860  FUN_00a6b860 =====

void FUN_00a6b860(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6b86c  FUN_00a6b86c =====

void FUN_00a6b86c(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6b878  FUN_00a6b878 =====

void FUN_00a6b878(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6b884  FUN_00a6b884 =====

void FUN_00a6b884(void *param_1)

{
  free(param_1);
  return;
}


// ===== 00a6b890  FUN_00a6b890 =====

void FUN_00a6b890(void *param_1)

{
  free(param_1);
  return;
}


// ===== 00a6b898  FUN_00a6b898 =====

undefined1  [16] FUN_00a6b898(void)

{
  undefined1 in_stack_00000410 [16];
  
  return in_stack_00000410;
}


// ===== 00a6b910  FUN_00a6b910 =====

void FUN_00a6b910(void)

{
  return;
}


// ===== 00a6b920  FUN_00a6b920 =====

void FUN_00a6b920(void)

{
  return;
}


// ===== 00a6b930  FUN_00a6b930 =====

void FUN_00a6b930(void *param_1)

{
  free(param_1);
  return;
}


// ===== 00a6b938  FUN_00a6b938 =====

void FUN_00a6b938(void)

{
  void *unaff_x20;
  
  free(unaff_x20);
  return;
}


// ===== 00a6b948  FUN_00a6b948 =====

void FUN_00a6b948(void)

{
  FUN_00a20f74();
  return;
}


// ===== 00a6b954  FUN_00a6b954 =====

void FUN_00a6b954(void *param_1)

{
  free(param_1);
  return;
}


// ===== 00a6b960  FUN_00a6b960 =====

void FUN_00a6b960(void)

{
  FUN_00a43f68(&stack0x000004a0,&stack0x00000410);
  return;
}


// ===== 00a6b96c  FUN_00a6b96c =====

int FUN_00a6b96c(void)

{
  int iVar1;
  void *in_stack_00000248;
  size_t in_stack_00000250;
  
  iVar1 = munmap(in_stack_00000248,in_stack_00000250);
  return iVar1;
}


// ===== 00a6b978  FUN_00a6b978 =====

void FUN_00a6b978(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6b984  FUN_00a6b984 =====

void FUN_00a6b984(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6b990  FUN_00a6b990 =====

void FUN_00a6b990(void)

{
  return;
}


// ===== 00a6b9a8  FUN_00a6b9a8 =====

void FUN_00a6b9a8(void)

{
  return;
}


// ===== 00a6b9b4  FUN_00a6b9b4 =====

void FUN_00a6b9b4(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6b9bc  FUN_00a6b9bc =====

undefined1 * FUN_00a6b9bc(void)

{
  return &stack0x00000ec0;
}


// ===== 00a6b9c8  FUN_00a6b9c8 =====

void FUN_00a6b9c8(void)

{
                    /* WARNING: Subroutine does not return */
  core::panicking::assert_failed_inner();
}


// ===== 00a6b9e4  FUN_00a6b9e4 =====

void FUN_00a6b9e4(long param_1)

{
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(param_1 + 8);
  return;
}


// ===== 00a6b9ec  FUN_00a6b9ec =====

void FUN_00a6b9ec(void)

{
  FUN_004b25a4(0x138,8);
  return;
}


// ===== 00a6b9f8  FUN_00a6b9f8 =====

void FUN_00a6b9f8(void)

{
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::InlinedFunctionAddress>>::
  grow_one(&stack0x000003a0);
  return;
}


// ===== 00a6ba00  FUN_00a6ba00 =====

void FUN_00a6ba00(void)

{
  void *unaff_x24;
  
  free(unaff_x24);
  return;
}


// ===== 00a6ba14  FUN_00a6ba14 =====

void FUN_00a6ba14(void)

{
  long unaff_x29;
  
  FUN_00a6afc8(unaff_x29 + 0x1f,&DAT_002ab692,&stack0x00000010);
  return;
}


// ===== 00a6ba28  FUN_00a6ba28 =====

void FUN_00a6ba28(void)

{
  void *in_stack_000007f0;
  
  free(in_stack_000007f0);
  return;
}


// ===== 00a6ba3c  FUN_00a6ba3c =====

void FUN_00a6ba3c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00ab2530();
}


// ===== 00a6ba44  FUN_00a6ba44 =====

void FUN_00a6ba44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  <std::sys::sync::once::futex::[0]::std::sys::sync::once::futex::Once>::call
            (param_2,1,&stack0x00000010);
  return;
}


// ===== 00a6ba58  FUN_00a6ba58 =====

void FUN_00a6ba58(void)

{
  return;
}


// ===== 00a6ba78  FUN_00a6ba78 =====

void FUN_00a6ba78(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6ba80  FUN_00a6ba80 =====

void FUN_00a6ba80(void *param_1)

{
  memcpy(param_1,&stack0x00000260,0x138);
  return;
}


// ===== 00a6ba90  FUN_00a6ba90 =====

void FUN_00a6ba90(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6ba98  FUN_00a6ba98 =====

void FUN_00a6ba98(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6baa0  FUN_00a6baa0 =====

void FUN_00a6baa0(void)

{
  FUN_00a40210(&DAT_00b0f898);
  return;
}


// ===== 00a6bab0  FUN_00a6bab0 =====

void FUN_00a6bab0(void)

{
  memcpy(&stack0x00000ec0,&stack0x00000260,0x268);
  return;
}


// ===== 00a6bac0  FUN_00a6bac0 =====

void FUN_00a6bac0(void *param_1)

{
  free(param_1);
  return;
}


// ===== 00a6bac8  FUN_00a6bac8 =====

void FUN_00a6bac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x29;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
  FUN_00a6afc8(unaff_x29 + 0x1f,param_3,&stack0x00000010);
  return;
}


// ===== 00a6bad8  FUN_00a6bad8 =====

void FUN_00a6bad8(void)

{
  void *unaff_x20;
  
  memcpy(unaff_x20,&stack0x00000ec0,0x268);
  return;
}


// ===== 00a6bae8  FUN_00a6bae8 =====

void FUN_00a6bae8(void)

{
  memcpy(&stack0x000004a0,&stack0x000006f0,0x1e0);
  return;
}


// ===== 00a6baf8  FUN_00a6baf8 =====

void FUN_00a6baf8(void)

{
  return;
}


// ===== 00a6bb14  FUN_00a6bb14 =====

void FUN_00a6bb14(void)

{
  return;
}


// ===== 00a6bb24  FUN_00a6bb24 =====

void FUN_00a6bb24(void)

{
  return;
}


// ===== 00a6bb34  FUN_00a6bb34 =====

void FUN_00a6bb34(void)

{
  return;
}


// ===== 00a6bb40  FUN_00a6bb40 =====

void FUN_00a6bb40(void)

{
  return;
}


// ===== 00a6bb58  FUN_00a6bb58 =====

void FUN_00a6bb58(void)

{
  return;
}


// ===== 00a6bb70  FUN_00a6bb70 =====

void FUN_00a6bb70(void)

{
  return;
}


// ===== 00a6bb7c  FUN_00a6bb7c =====

void FUN_00a6bb7c(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  long unaff_x29;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001e0;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x29 + -0xb0) + unaff_x20 * 0x10);
  *puVar1 = in_stack_000001d0;
  puVar1[1] = in_stack_000001e0;
  return;
}


// ===== 00a6bb94  FUN_00a6bb94 =====

void FUN_00a6bb94(void)

{
  FUN_00a20ff4(PTR_HOOK_00b01380);
  return;
}


// ===== 00a6bba0  FUN_00a6bba0 =====

void FUN_00a6bba0(void)

{
  FUN_00a4093c();
  return;
}


// ===== 00a6bba8  FUN_00a6bba8 =====

void FUN_00a6bba8(void)

{
  FUN_00a20f74();
  return;
}


// ===== 00a6bbb4  FUN_00a6bbb4 =====

void FUN_00a6bbb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00a19824(param_3 + 0x1f8,param_2,param_3,param_3 + 0x10);
  return;
}


// ===== 00a6bbc0  FUN_00a6bbc0 =====

void FUN_00a6bbc0(long param_1)

{
  FUN_00a1f7fc(param_1 + 0x10);
  return;
}


// ===== 00a6bbc8  FUN_00a6bbc8 =====

void FUN_00a6bbc8(void)

{
  <alloc::sync::[n]::alloc::sync::Arc<gimli::read::abbrev::Abbreviations>>::drop_slow
            (&stack0x00000898);
  return;
}


// ===== 00a6bbd4  FUN_00a6bbd4 =====

void FUN_00a6bbd4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_00000240;
  
                    /* WARNING: Could not recover jumptable at 0x00a6bbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(in_stack_00000240,&stack0x00000260);
  return;
}


// ===== 00a6bbe0  FUN_00a6bbe0 =====

void FUN_00a6bbe0(long param_1)

{
  <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(param_1 + 8);
  return;
}


// ===== 00a6bbec  FUN_00a6bbec =====

void FUN_00a6bbec(void)

{
  FUN_00a200c4(&stack0x000003f0);
  return;
}


// ===== 00a6bbf4  FUN_00a6bbf4 =====

void FUN_00a6bbf4(void)

{
  FUN_00a21e4c(&stack0x00001220);
  return;
}


// ===== 00a6bc00  FUN_00a6bc00 =====

void FUN_00a6bc00(void)

{
  FUN_00a21e4c(&stack0x000011c0);
  return;
}


// ===== 00a6bc0c  FUN_00a6bc0c =====

void FUN_00a6bc0c(void)

{
  <alloc[c1f8e832b0d782c7]::sync::Arc<gimli[1de8a57408df84df]::read::dwarf::Dwarf<gimli[1de8a57408df84df]::read::endian_slice::EndianSlice<gimli[1de8a57408df84df]::endianity::LittleEndian>>>>
  ::drop_slow(&stack0x000012a0);
  return;
}


// ===== 00a6bc18  FUN_00a6bc18 =====

void FUN_00a6bc18(void)

{
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(0x10);
}


// ===== 00a6bc24  FUN_00a6bc24 =====

void FUN_00a6bc24(void)

{
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x138);
}


// ===== 00a6bc30  FUN_00a6bc30 =====

void FUN_00a6bc30(void)

{
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afaf00);
}


// ===== 00a6bc3c  FUN_00a6bc3c =====

void FUN_00a6bc3c(void)

{
  return;
}


// ===== 00a6bc50  FUN_00a6bc50 =====

void FUN_00a6bc50(void)

{
  return;
}


// ===== 00a6bc5c  FUN_00a6bc5c =====

void FUN_00a6bc5c(void)

{
  return;
}


// ===== 00a6bc70  FUN_00a6bc70 =====

void FUN_00a6bc70(void)

{
  return;
}


// ===== 00a6bc7c  FUN_00a6bc7c =====

void FUN_00a6bc7c(void)

{
  return;
}


// ===== 00a6bc88  FUN_00a6bc88 =====

void FUN_00a6bc88(void)

{
  return;
}


// ===== 00a6bc9c  FUN_00a6bc9c =====

void FUN_00a6bc9c(void)

{
  return;
}


// ===== 00a6bca8  FUN_00a6bca8 =====

void FUN_00a6bca8(void)

{
  return;
}


// ===== 00a6bcbc  FUN_00a6bcbc =====

undefined1 * FUN_00a6bcbc(void)

{
  return &stack0x00000260;
}


// ===== 00a6bcc8  FUN_00a6bcc8 =====

void FUN_00a6bcc8(void)

{
  return;
}


// ===== 00a6bcdc  FUN_00a6bcdc =====

void FUN_00a6bcdc(void)

{
  return;
}


// ===== 00a6bcf0  FUN_00a6bcf0 =====

void FUN_00a6bcf0(void)

{
  return;
}


// ===== 00a6bd04  FUN_00a6bd04 =====

void FUN_00a6bd04(void)

{
  return;
}


// ===== 00a6bd10  FUN_00a6bd10 =====

void FUN_00a6bd10(void)

{
  return;
}


// ===== 00a6bd1c  FUN_00a6bd1c =====

void FUN_00a6bd1c(void)

{
  return;
}


// ===== 00a6bd30  FUN_00a6bd30 =====

void FUN_00a6bd30(void)

{
  return;
}


// ===== 00a6bd3c  FUN_00a6bd3c =====

void FUN_00a6bd3c(void *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = *(void **)((long)param_1 + 0x28);
  puVar1 = *(undefined8 **)((long)param_1 + 0x30);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00a6bd5c to 00a6bd63 has its CatchHandler @ 00a6bd94 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 00a6bdc8  FUN_00a6bdc8 =====

void FUN_00a6bdc8(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00a6bde8 to 00a6bdef has its CatchHandler @ 00a6be20 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00a6be40  __rustc::__rust_start_panic =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_start_panic */

void __rustcall __rustc::__rust_start_panic(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  auVar2 = (**(code **)(param_2 + 0x20))();
  __rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x38,8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0x54535552005a4f4d;
    puVar1[1] = FUN_00a6bf48;
    puVar1[4] = &DAT_00383cd8;
    *(undefined1 (*) [16])(puVar1 + 5) = auVar2;
    FUN_00ab2304();
    return;
  }
                    /* try { // try from 00a6beb4 to 00a6bebf has its CatchHandler @ 00a6bec4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x38);
}


// ===== 00a6bee0  __rustc::__rust_panic_cleanup =====

/* WARNING: Unknown calling convention: __rustcall */
/* __rustc::__rust_panic_cleanup */

undefined1  [16] __rustcall __rustc::__rust_panic_cleanup(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 extraout_x1;
  
  if (*param_1 == 0x54535552005a4f4d) {
    if ((undefined *)param_1[4] == &DAT_00383cd8) {
      auVar1 = *(undefined1 (*) [16])(param_1 + 5);
      free(param_1);
      return auVar1;
    }
  }
  else {
    FUN_00ab2710();
  }
  __rust_foreign_exception();
  FUN_00a6bd3c(extraout_x1);
  __rust_drop_panic();
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_cannot_unwind();
}


// ===== 00a6bf48  FUN_00a6bf48 =====

void FUN_00a6bf48(undefined8 param_1,undefined8 param_2)

{
                    /* try { // try from 00a6bf54 to 00a6bf57 has its CatchHandler @ 00a6bf5c */
  FUN_00a6bd3c(param_2);
  __rustc::__rust_drop_panic();
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a6bf54 with catch @ 00a6bf5c */
  core::panicking::panic_cannot_unwind();
}


// ===== 00a6bf60  core[bcece726f298455b]::slice::sort::stable::driftsort_main::<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry,<[object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry]>::sort_by_key<u64,<object[7799461ce5ce568]::read::symbol_map::SymbolMap<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>>::new::{closure#0}>::{closure#0},alloc[c1f8e832b0d782c7]::vec::Vec<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>> =====

/* core[bcece726f298455b]::slice::sort::stable::driftsort_main::<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry,
   <[object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry]>::sort_by_key<u64,
   <object[7799461ce5ce568]::read::symbol_map::SymbolMap<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>>::new::{closure#0}>::{closure#0},
   alloc[c1f8e832b0d782c7]::vec::Vec<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>> */

void core[bcece726f298455b]::slice::sort::stable::driftsort_main::
     <object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry,<[object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry]>::sort_by_key<u64,<object[7799461ce5ce568]::read::symbol_map::SymbolMap<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>>::new::_closure_0_>::_closure_0_,alloc[c1f8e832b0d782c7]::vec::Vec<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *__ptr;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_1060 [512];
  
  __ptr = local_1060;
  uVar3 = param_2 - (param_2 >> 1);
  local_1060[0] = 0;
  uVar1 = param_2;
  if (199999 < param_2) {
    uVar1 = 200000;
  }
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x31) {
    uVar2 = 0x30;
  }
  if (uVar1 < 0x67) {
    uVar2 = 0x66;
  }
  else {
    lVar4 = uVar2 * 0x28;
    if (0x333333333333333 < uVar3) {
      uVar5 = 0;
LAB_00a6bfe4:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar5,lVar4);
    }
    if (lVar4 == 0) {
      uVar2 = 0;
      __ptr = (undefined8 *)&DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar5 = 8;
      __ptr = (undefined8 *)FUN_004b25a4(lVar4,8);
      if (__ptr == (undefined8 *)0x0) goto LAB_00a6bfe4;
    }
    uVar3 = uVar2 * 5;
  }
                    /* try { // try from 00a6c040 to 00a6c04b has its CatchHandler @ 00a6c084 */
  FUN_00a6c220(uVar3,param_1,param_2,__ptr,uVar2,param_2 < 0x41,param_3);
  if (0x66 < uVar1) {
    free(__ptr);
  }
  return;
}


// ===== 00a6c0a8  FUN_00a6c0a8 =====

long FUN_00a6c0a8(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar3 = param_4 * 0x118;
    lVar4 = param_4 * 0xa0;
    param_1 = FUN_00a6c0a8(param_1,param_1 + lVar4,param_1 + lVar3,param_4);
    param_2 = FUN_00a6c0a8(param_2,param_2 + lVar4,param_2 + lVar3,param_4);
    param_3 = FUN_00a6c0a8(param_3,param_3 + lVar4,param_3 + lVar3,param_4);
  }
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_2 + 0x10);
  lVar3 = param_3;
  if (uVar1 < uVar2 == uVar2 < *(ulong *)(param_3 + 0x10)) {
    lVar3 = param_2;
  }
  if (uVar1 < uVar2 == uVar1 < *(ulong *)(param_3 + 0x10)) {
    param_1 = lVar3;
  }
  return param_1;
}


// ===== 00a6c178  FUN_00a6c178 =====

void FUN_00a6c178(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = 0;
  puVar1 = param_1 + 5;
  puVar6 = param_1;
  do {
    puVar5 = puVar1;
    uVar4 = puVar6[7];
    if (uVar4 < (ulong)puVar6[2]) {
      uVar9 = puVar5[1];
      uVar8 = *puVar5;
      uVar11 = puVar6[9];
      uVar10 = puVar6[8];
      lVar2 = lVar3;
      do {
        lVar7 = lVar2;
        puVar1 = (undefined8 *)((long)param_1 + lVar7);
        puVar1[9] = puVar1[4];
        puVar1[6] = puVar1[1];
        puVar1[5] = *puVar1;
        puVar1[8] = puVar1[3];
        puVar1[7] = puVar1[2];
        puVar6 = param_1;
        if (lVar7 == 0) goto LAB_00a6c198;
        lVar2 = lVar7 + -0x28;
      } while (uVar4 < (ulong)puVar1[-3]);
      puVar6 = (undefined8 *)((long)param_1 + lVar7);
LAB_00a6c198:
      puVar6[1] = uVar9;
      *puVar6 = uVar8;
      puVar1[2] = uVar4;
      puVar1[4] = uVar11;
      puVar1[3] = uVar10;
    }
    lVar3 = lVar3 + 0x28;
    puVar1 = puVar5 + 5;
    puVar6 = puVar5;
    if (puVar5 + 5 == param_1 + param_2 * 5) {
      return;
    }
  } while( true );
}


// ===== 00a6c220  FUN_00a6c220 =====

void FUN_00a6c220(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,uint param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *__src;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *__dest;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong local_310;
  ulong local_2c0 [66];
  byte abStack_ab [75];
  
  if (param_2 < 2) {
    return;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = 0x4000000000000000 / param_2;
  }
  if (uVar2 * param_2 != 0x4000000000000000) {
    uVar2 = uVar2 + 1;
  }
  if (param_2 < 0x1001) {
    local_310 = param_2 - (param_2 >> 1);
    if (0x3f < local_310) {
      local_310 = 0x40;
    }
  }
  else {
    local_310 = core::slice::sort::stable::drift::sqrt_approx(param_2);
  }
  uVar14 = 0;
  uVar13 = 0;
  uVar16 = 1;
  uVar10 = param_2;
  if (param_2 == 0) goto LAB_00a6c344;
LAB_00a6c2e8:
  lVar4 = param_1 + uVar14 * 0x28;
  if (uVar10 < local_310) {
LAB_00a6c2f8:
    if ((param_5 & 1) == 0) {
      if (local_310 <= uVar10) {
        uVar10 = local_310;
      }
      uVar10 = uVar10 << 1;
    }
    else {
      if (0x1f < uVar10) {
        uVar10 = 0x20;
      }
      core::slice::sort::stable::quicksort::
      quicksort<object::read::symbol_map::ObjectMapEntry,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::SymbolMap<_backref_15_>>::new::_closure_0_>::_closure_0_>
                (lVar4,uVar10,param_3,param_4,0,0,param_6);
      uVar10 = uVar10 << 1 | 1;
    }
    goto LAB_00a6c380;
  }
  if (1 < uVar10) {
    uVar17 = *(ulong *)(lVar4 + 0x38);
    if (uVar17 < *(ulong *)(lVar4 + 0x10)) {
      if (uVar10 == 2) {
        if (2 < local_310) goto LAB_00a6c2f8;
        uVar19 = 1;
        uVar10 = 2;
      }
      else {
        uVar7 = 2;
        puVar11 = (ulong *)(param_1 + 0x60 + uVar14 * 0x28);
        uVar6 = uVar17;
        do {
          uVar20 = *puVar11;
          uVar19 = uVar7;
          if (uVar6 <= uVar20) break;
          uVar7 = uVar7 + 1;
          uVar19 = uVar10;
          puVar11 = puVar11 + 5;
          uVar6 = uVar20;
        } while (uVar10 != uVar7);
LAB_00a6c6a8:
        if (uVar19 < local_310) goto LAB_00a6c2f8;
        uVar10 = uVar19;
        if ((*(ulong *)(lVar4 + 0x10) <= uVar17) || (uVar19 = uVar19 >> 1, uVar19 == 0))
        goto LAB_00a6c364;
      }
      puVar15 = (undefined8 *)(param_1 + 0x20 + uVar14 * 0x28);
      puVar5 = (undefined8 *)(param_1 + -8 + uVar14 * 0x28 + uVar10 * 0x28);
      do {
        uVar21 = puVar5[-4];
        uVar23 = puVar5[-1];
        uVar22 = puVar5[-2];
        uVar19 = uVar19 - 1;
        uVar25 = puVar15[-3];
        uVar24 = puVar15[-4];
        uVar27 = puVar15[-1];
        uVar26 = puVar15[-2];
        uVar9 = *puVar5;
        uVar12 = *puVar15;
        puVar15[-3] = puVar5[-3];
        puVar15[-4] = uVar21;
        puVar15[-1] = uVar23;
        puVar15[-2] = uVar22;
        puVar5[-3] = uVar25;
        puVar5[-4] = uVar24;
        puVar5[-1] = uVar27;
        puVar5[-2] = uVar26;
        *puVar15 = uVar9;
        *puVar5 = uVar12;
        puVar15 = puVar15 + 5;
        puVar5 = puVar5 + -5;
      } while (uVar19 != 0);
    }
    else {
      if (uVar10 != 2) {
        uVar7 = 2;
        puVar11 = (ulong *)(param_1 + 0x60 + uVar14 * 0x28);
        uVar6 = uVar17;
        do {
          uVar20 = *puVar11;
          uVar19 = uVar7;
          if (uVar20 < uVar6) break;
          uVar7 = uVar7 + 1;
          uVar19 = uVar10;
          puVar11 = puVar11 + 5;
          uVar6 = uVar20;
        } while (uVar10 != uVar7);
        goto LAB_00a6c6a8;
      }
      if (2 < local_310) goto LAB_00a6c2f8;
      uVar10 = 2;
    }
  }
LAB_00a6c364:
  uVar10 = uVar10 << 1 | 1;
LAB_00a6c380:
  lVar4 = LZCOUNT((uVar14 * 2 + (uVar10 >> 1)) * uVar2 ^ (uVar14 * 2 - (uVar16 >> 1)) * uVar2);
  uVar17 = uVar16;
  do {
    uVar16 = uVar10;
    if (1 < uVar13) {
      do {
        while( true ) {
          uVar10 = uVar13 - 1;
          if ((uint)abStack_ab[uVar13] < (uint)lVar4) goto LAB_00a6c5d0;
          uVar20 = uVar17 >> 1;
          uVar6 = local_2c0[uVar10];
          uVar19 = uVar6 >> 1;
          uVar7 = uVar19 + uVar20;
          uVar13 = uVar10;
          if (uVar7 <= param_4 && (((uint)uVar6 | (uint)uVar17) & 1) == 0) break;
          puVar15 = (undefined8 *)(param_1 + (uVar14 - uVar7) * 0x28);
          if ((uVar6 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<object::read::symbol_map::ObjectMapEntry,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::SymbolMap<_backref_15_>>::new::_closure_0_>::_closure_0_>
                      (puVar15,uVar19,param_3,param_4,(int)LZCOUNT(uVar19 | 1) << 1 ^ 0x7e,0,param_6
                      );
          }
          if ((uVar17 & 1) == 0) {
            core::slice::sort::stable::quicksort::
            quicksort<object::read::symbol_map::ObjectMapEntry,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::SymbolMap<_backref_15_>>::new::_closure_0_>::_closure_0_>
                      (puVar15 + uVar19 * 5,uVar20,param_3,param_4,
                       (int)LZCOUNT(uVar20 | 1) << 1 ^ 0x7e,0,param_6);
          }
          if ((uVar20 != 0) && (uVar19 != 0)) {
            uVar17 = uVar20;
            if (uVar19 <= uVar20) {
              uVar17 = uVar19;
            }
            if (uVar17 <= param_4) {
              puVar18 = puVar15 + uVar19 * 5;
              puVar5 = puVar18;
              if (uVar19 <= uVar20) {
                puVar5 = puVar15;
              }
              memcpy(param_3,puVar5,uVar17 * 0x28);
              puVar5 = param_3 + uVar17 * 5;
              __src = param_3;
              puVar8 = (undefined8 *)(param_1 + -0x28 + uVar14 * 0x28);
              if (uVar20 < uVar19) {
                do {
                  bVar3 = (ulong)puVar18[-3] <= (ulong)puVar5[-3];
                  puVar1 = puVar18 + -5;
                  if (bVar3) {
                    puVar1 = puVar5 + -5;
                  }
                  __dest = puVar18 + -5 + (ulong)bVar3 * 5;
                  uVar12 = *puVar1;
                  uVar22 = puVar1[3];
                  uVar21 = puVar1[2];
                  puVar5 = puVar5 + -5 + (ulong)!bVar3 * 5;
                  uVar9 = puVar1[4];
                  puVar8[1] = puVar1[1];
                  *puVar8 = uVar12;
                  puVar8[3] = uVar22;
                  puVar8[2] = uVar21;
                  puVar8[4] = uVar9;
                  puVar8 = puVar8 + -5;
                  puVar18 = __dest;
                } while (__dest != puVar15 && puVar5 != param_3);
              }
              else {
                do {
                  bVar3 = (ulong)__src[2] <= (ulong)puVar18[2];
                  puVar8 = puVar18;
                  if (bVar3) {
                    puVar8 = __src;
                  }
                  __src = __src + (ulong)bVar3 * 5;
                  uVar12 = *puVar8;
                  uVar22 = puVar8[3];
                  uVar21 = puVar8[2];
                  puVar18 = puVar18 + (ulong)!bVar3 * 5;
                  uVar9 = puVar8[4];
                  puVar15[1] = puVar8[1];
                  *puVar15 = uVar12;
                  puVar15[3] = uVar22;
                  puVar15[2] = uVar21;
                  puVar15[4] = uVar9;
                  __dest = puVar15 + 5;
                  puVar15 = __dest;
                } while (__src != puVar5 && puVar18 != (undefined8 *)(param_1 + uVar14 * 0x28));
              }
              memcpy(__dest,__src,(long)puVar5 - (long)__src);
            }
          }
          uVar17 = uVar7 * 2 | 1;
          if (uVar10 < 2) goto LAB_00a6c5c4;
        }
        uVar17 = uVar7 * 2;
      } while (1 < uVar10);
LAB_00a6c5c4:
      uVar13 = 1;
    }
LAB_00a6c5d0:
    abStack_ab[uVar13 + 1] = (byte)lVar4;
    local_2c0[uVar13] = uVar17;
    if (param_2 <= uVar14) {
      if ((uVar17 & 1) != 0) {
        return;
      }
      core::slice::sort::stable::quicksort::
      quicksort<object::read::symbol_map::ObjectMapEntry,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::SymbolMap<_backref_15_>>::new::_closure_0_>::_closure_0_>
                (param_1,param_2,param_3,param_4,(int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e,0,param_6);
      return;
    }
    uVar14 = uVar14 + (uVar16 >> 1);
    uVar13 = uVar13 + 1;
    uVar10 = param_2 - uVar14;
    if (uVar14 <= param_2 && uVar10 != 0) goto LAB_00a6c2e8;
LAB_00a6c344:
    lVar4 = 0;
    uVar10 = 1;
    uVar17 = uVar16;
  } while( true );
}


// ===== 00a6c754  core::slice::sort::stable::quicksort::quicksort<object::read::symbol_map::ObjectMapEntry,<alloc::slice::[{backref_15}]>::sort_by_key<u64,<{backref_23}::{backref_23}::SymbolMap<{backref_15}>>::new::{closure#0}>::{closure#0}> =====

/* WARNING: Unknown calling convention: __rustcall */
/* core::slice::sort::stable::quicksort::quicksort<object::read::symbol_map::ObjectMapEntry,
   <alloc::slice::[{backref 15}]>::sort_by_key<u64, <{backref 23}::{backref 23}::SymbolMap<{backref
   15}>>::new::{closure#0}>::{closure#0}> */

void __rustcall
core::slice::sort::stable::quicksort::
quicksort<object::read::symbol_map::ObjectMapEntry,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::SymbolMap<_backref_15_>>::new::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4,int param_5,
          long param_6,undefined8 param_7)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (0x20 < param_2) {
    do {
      if (param_5 == 0) {
        FUN_00a6c220(param_1,param_2,param_3,param_4,1,param_7);
        return;
      }
      if (param_2 < 0x40) {
        uVar12 = param_1[2];
        uVar17 = (param_1 + (param_2 >> 3) * 0x14)[2];
        uVar21 = (param_1 + (param_2 >> 3) * 0x23)[2];
        puVar13 = param_1 + (param_2 >> 3) * 0x23;
        if (uVar12 < uVar17 == uVar17 < uVar21) {
          puVar13 = param_1 + (param_2 >> 3) * 0x14;
        }
        puVar7 = param_1;
        if (uVar12 < uVar17 == uVar12 < uVar21) {
          puVar7 = puVar13;
        }
      }
      else {
        puVar7 = (undefined8 *)FUN_00a6c0a8(param_1);
      }
      param_5 = param_5 + -1;
      uVar17 = (ulong)((long)puVar7 - (long)param_1) >> 3;
      uStack_88 = puVar7[1];
      local_90 = *puVar7;
      uStack_78 = puVar7[3];
      uStack_80 = puVar7[2];
      uVar12 = uVar17 * -0x3333333333333333;
      local_70 = puVar7[4];
      if ((param_6 == 0) || (*(ulong *)(param_6 + 0x10) < (ulong)puVar7[2])) {
        if (param_2 <= param_4) {
          puVar14 = param_3 + param_2 * 5;
          uVar21 = 0;
          puVar15 = param_1 + uVar17;
          puVar13 = param_1;
          uVar10 = uVar12;
          if (puVar15 <= param_1) goto LAB_00a6ca84;
LAB_00a6ca4c:
          do {
            puVar1 = puVar13 + 2;
            puVar14 = puVar14 + -5;
            uVar22 = puVar13[1];
            uVar19 = *puVar13;
            uVar20 = puVar13[3];
            uVar23 = puVar13[2];
            puVar9 = puVar13 + 4;
            puVar13 = puVar13 + 5;
            puVar8 = param_3;
            if ((ulong)puVar7[2] <= *puVar1) {
              puVar8 = puVar14;
            }
            puVar8 = puVar8 + uVar21 * 5;
            if ((ulong)puVar7[2] > *puVar1) {
              uVar21 = uVar21 + 1;
            }
            puVar8[4] = *puVar9;
            puVar8[1] = uVar22;
            *puVar8 = uVar19;
            puVar8[3] = uVar20;
            puVar8[2] = uVar23;
          } while (puVar13 < puVar15);
LAB_00a6ca84:
          if (uVar10 != param_2) goto code_r0x00a6ca8c;
          memcpy(param_1,param_3,uVar21 * 0x28);
          lVar16 = param_2 - uVar21;
          if (lVar16 != 0) {
            puVar13 = param_1 + uVar21 * 5;
            puVar14 = param_3 + param_2 * 5 + -5;
            lVar11 = lVar16;
            do {
              puVar15 = puVar14 + 1;
              uVar20 = *puVar14;
              uVar22 = puVar14[3];
              uVar19 = puVar14[2];
              lVar11 = lVar11 + -1;
              uVar23 = puVar14[4];
              puVar14 = puVar14 + -5;
              puVar13[1] = *puVar15;
              *puVar13 = uVar20;
              puVar13[3] = uVar22;
              puVar13[2] = uVar19;
              puVar13[4] = uVar23;
              puVar13 = puVar13 + 5;
            } while (lVar11 != 0);
          }
          if (uVar21 == 0) goto LAB_00a6cb40;
          if (param_2 < uVar21) {
                    /* WARNING: Subroutine does not return */
            panicking::panic_fmt
                      (&DAT_00383cd9,0x13,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc9c0);
          }
          quicksort<object::read::symbol_map::ObjectMapEntry,<alloc::slice::[_backref_15_]>::sort_by_key<u64,<_backref_23_::_backref_23_::SymbolMap<_backref_15_>>::new::_closure_0_>::_closure_0_>
                    (param_1 + uVar21 * 5,lVar16,param_3,param_4,param_5,&local_90,param_7);
          param_2 = uVar21;
          goto joined_r0x00a6cc34;
        }
        goto LAB_00a6cf14;
      }
LAB_00a6cb40:
      if (param_4 < param_2) goto LAB_00a6cf14;
      puVar14 = param_3 + param_2 * 5;
      uVar21 = 0;
      puVar15 = param_1 + uVar17;
      puVar13 = param_1;
      if (puVar15 <= param_1) goto LAB_00a6cb98;
LAB_00a6cb60:
      do {
        puVar1 = puVar13 + 2;
        puVar14 = puVar14 + -5;
        uVar22 = puVar13[1];
        uVar19 = *puVar13;
        uVar20 = puVar13[3];
        uVar23 = puVar13[2];
        puVar9 = puVar13 + 4;
        puVar13 = puVar13 + 5;
        puVar8 = param_3;
        if ((ulong)puVar7[2] < *puVar1) {
          puVar8 = puVar14;
        }
        puVar8 = puVar8 + uVar21 * 5;
        if ((ulong)puVar7[2] >= *puVar1) {
          uVar21 = uVar21 + 1;
        }
        puVar8[4] = *puVar9;
        puVar8[1] = uVar22;
        *puVar8 = uVar19;
        puVar8[3] = uVar20;
        puVar8[2] = uVar23;
      } while (puVar13 < puVar15);
LAB_00a6cb98:
      if (uVar12 != param_2) goto code_r0x00a6cba0;
      memcpy(param_1,param_3,uVar21 * 0x28);
      uVar12 = param_2 - uVar21;
      if (uVar12 == 0) {
        return;
      }
      puVar7 = param_1 + uVar21 * 5;
      puVar13 = param_3 + param_2 * 5 + -5;
      uVar17 = uVar12;
      do {
        puVar14 = puVar13 + 1;
        uVar20 = *puVar13;
        uVar22 = puVar13[3];
        uVar19 = puVar13[2];
        uVar17 = uVar17 - 1;
        uVar23 = puVar13[4];
        puVar13 = puVar13 + -5;
        puVar7[1] = *puVar14;
        *puVar7 = uVar20;
        puVar7[3] = uVar22;
        puVar7[2] = uVar19;
        puVar7[4] = uVar23;
        puVar7 = puVar7 + 5;
      } while (uVar17 != 0);
      if (param_2 < uVar21) {
                    /* WARNING: Subroutine does not return */
        index::slice_index_fail
                  (uVar21,param_2,param_2,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc9d8);
      }
      param_1 = param_1 + uVar21 * 5;
      param_6 = 0;
      param_2 = uVar12;
joined_r0x00a6cc34:
      if (param_2 < 0x21) break;
    } while( true );
  }
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
LAB_00a6cf14:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0xa6cf18);
    (*pcVar4)();
  }
  uVar12 = param_2 >> 1;
  if (param_2 < 8) {
    uVar24 = param_1[1];
    uVar22 = *param_1;
    uVar19 = param_1[3];
    uVar20 = param_1[2];
    param_3[4] = param_1[4];
    puVar7 = param_1 + uVar12 * 5;
    puVar13 = param_3 + uVar12 * 5;
    uVar23 = puVar7[4];
    param_3[1] = uVar24;
    *param_3 = uVar22;
    param_3[3] = uVar19;
    param_3[2] = uVar20;
    uVar24 = puVar7[1];
    uVar22 = *puVar7;
    uVar19 = puVar7[3];
    uVar20 = puVar7[2];
    uVar17 = 1;
    puVar13[4] = uVar23;
    puVar13[1] = uVar24;
    *puVar13 = uVar22;
    puVar13[3] = uVar19;
    puVar13[2] = uVar20;
    uVar21 = param_2 - uVar12;
    if (uVar12 < 2) goto LAB_00a6cd38;
  }
  else {
    puVar7 = param_1 + (ulong)((ulong)param_1[2] <= (ulong)param_1[7]) * 5;
    lVar16 = 0x50;
    if ((ulong)param_1[0xc] <= (ulong)param_1[0x11]) {
      lVar16 = 0x78;
    }
    puVar13 = param_1 + (ulong)((ulong)param_1[2] > (ulong)param_1[7]) * 5;
    lVar11 = 0x78;
    if ((ulong)param_1[0xc] <= (ulong)param_1[0x11]) {
      lVar11 = 0x50;
    }
    puVar14 = (undefined8 *)((long)param_1 + lVar16);
    puVar15 = (undefined8 *)((long)param_1 + lVar11);
    puVar9 = puVar15;
    if ((ulong)puVar7[2] <= (ulong)puVar14[2]) {
      puVar9 = puVar7;
    }
    puVar8 = puVar7;
    if ((ulong)puVar13[2] <= (ulong)puVar15[2]) {
      puVar8 = puVar15;
      puVar15 = puVar13;
      puVar13 = puVar9;
    }
    if ((ulong)puVar7[2] <= (ulong)puVar14[2]) {
      puVar7 = puVar14;
      puVar14 = puVar8;
    }
    puVar9 = param_3 + uVar12 * 5;
    uVar17 = param_1[uVar12 * 5 + 7];
    uVar23 = *puVar15;
    uVar19 = puVar15[3];
    uVar20 = puVar15[2];
    uVar21 = param_1[uVar12 * 5 + 2];
    puVar8 = puVar13;
    if ((ulong)puVar13[2] <= (ulong)puVar14[2]) {
      puVar8 = puVar14;
      puVar14 = puVar13;
    }
    uVar10 = param_1[uVar12 * 5 + 0x11];
    uVar22 = puVar15[4];
    uVar18 = param_1[uVar12 * 5 + 0xc];
    param_3[1] = puVar15[1];
    *param_3 = uVar23;
    param_3[3] = uVar19;
    param_3[2] = uVar20;
    uVar19 = puVar14[1];
    uVar20 = *puVar14;
    uVar25 = puVar14[3];
    uVar24 = puVar14[2];
    param_3[4] = uVar22;
    uVar23 = puVar14[4];
    puVar13 = param_1 + uVar12 * 5 + (ulong)(uVar21 <= uVar17) * 5;
    puVar14 = param_1 + uVar12 * 5 + (ulong)(uVar21 > uVar17) * 5;
    lVar16 = 0x50;
    if (uVar18 <= uVar10) {
      lVar16 = 0x78;
    }
    lVar11 = 0x78;
    if (uVar18 <= uVar10) {
      lVar11 = 0x50;
    }
    puVar15 = (undefined8 *)((long)param_1 + lVar16 + uVar12 * 0x28);
    puVar2 = (undefined8 *)((long)param_1 + lVar11 + uVar12 * 0x28);
    param_3[8] = uVar25;
    param_3[7] = uVar24;
    uVar17 = puVar15[2];
    uVar21 = puVar13[2];
    param_3[6] = uVar19;
    param_3[5] = uVar20;
    uVar22 = puVar8[1];
    uVar19 = *puVar8;
    uVar25 = puVar8[3];
    uVar24 = puVar8[2];
    uVar20 = puVar8[4];
    param_3[9] = uVar23;
    uVar18 = puVar2[2];
    uVar10 = puVar14[2];
    param_3[0xe] = uVar20;
    uVar23 = puVar7[4];
    puVar8 = puVar2;
    if (uVar21 <= uVar17) {
      puVar8 = puVar13;
    }
    param_3[0xb] = uVar22;
    param_3[10] = uVar19;
    param_3[0xd] = uVar25;
    param_3[0xc] = uVar24;
    puVar3 = puVar13;
    if (uVar10 <= uVar18) {
      puVar3 = puVar2;
      puVar2 = puVar14;
      puVar14 = puVar8;
    }
    uVar24 = puVar7[1];
    uVar22 = *puVar7;
    uVar19 = puVar7[3];
    uVar20 = puVar7[2];
    puVar7 = puVar15;
    if (uVar21 <= uVar17) {
      puVar7 = puVar3;
    }
    uVar10 = puVar14[2];
    if (uVar21 <= uVar17) {
      puVar13 = puVar15;
    }
    uVar17 = puVar7[2];
    param_3[0x13] = uVar23;
    uVar23 = puVar2[4];
    param_3[0x12] = uVar19;
    param_3[0x11] = uVar20;
    param_3[0x10] = uVar24;
    param_3[0xf] = uVar22;
    uVar24 = puVar2[1];
    uVar22 = *puVar2;
    uVar19 = puVar2[3];
    uVar20 = puVar2[2];
    puVar9[4] = uVar23;
    puVar15 = puVar14;
    if (uVar10 <= uVar17) {
      puVar15 = puVar7;
      puVar7 = puVar14;
    }
    puVar9[1] = uVar24;
    *puVar9 = uVar22;
    puVar9[3] = uVar19;
    puVar9[2] = uVar20;
    uVar24 = puVar7[1];
    uVar22 = *puVar7;
    uVar23 = puVar7[2];
    uVar19 = puVar7[4];
    uVar20 = puVar15[4];
    puVar9[8] = puVar7[3];
    puVar9[7] = uVar23;
    puVar9[6] = uVar24;
    puVar9[5] = uVar22;
    uVar26 = puVar15[1];
    uVar25 = *puVar15;
    uVar24 = puVar15[3];
    uVar22 = puVar15[2];
    uVar23 = puVar13[4];
    puVar9[9] = uVar19;
    puVar9[0xe] = uVar20;
    puVar9[0xb] = uVar26;
    puVar9[10] = uVar25;
    puVar9[0xd] = uVar24;
    puVar9[0xc] = uVar22;
    uVar24 = puVar13[1];
    uVar22 = *puVar13;
    uVar19 = puVar13[3];
    uVar20 = puVar13[2];
    puVar9[0x13] = uVar23;
    uVar17 = 4;
    puVar9[0x12] = uVar19;
    puVar9[0x11] = uVar20;
    puVar9[0x10] = uVar24;
    puVar9[0xf] = uVar22;
    uVar21 = param_2 - uVar12;
    if (uVar12 < 5) goto LAB_00a6cd38;
  }
  lVar16 = uVar17 * 0x28;
  uVar10 = uVar17;
  do {
    puVar7 = param_1 + uVar10 * 5;
    puVar13 = param_3 + uVar10 * 5;
    uVar22 = *puVar7;
    uVar19 = puVar7[3];
    uVar20 = puVar7[2];
    uVar23 = puVar7[4];
    puVar13[1] = puVar7[1];
    *puVar13 = uVar22;
    puVar13[3] = uVar19;
    puVar13[2] = uVar20;
    uVar18 = puVar13[2];
    puVar13[4] = uVar23;
    lVar11 = lVar16;
    if (uVar18 < (ulong)puVar13[-3]) {
      do {
        puVar13 = (undefined8 *)((long)param_3 + lVar11);
        lVar11 = lVar11 + -0x28;
        puVar13[1] = puVar13[-4];
        *puVar13 = puVar13[-5];
        puVar13[3] = puVar13[-2];
        puVar13[2] = puVar13[-3];
        puVar13[4] = puVar13[-1];
        puVar14 = param_3;
        if (lVar11 == 0) goto LAB_00a6ccac;
      } while (uVar18 < (ulong)puVar13[-8]);
      puVar14 = (undefined8 *)((long)param_3 + lVar11);
LAB_00a6ccac:
      uVar23 = *puVar7;
      uVar19 = puVar7[4];
      uVar20 = puVar7[3];
      puVar14[1] = puVar7[1];
      *puVar14 = uVar23;
      puVar13[-3] = uVar18;
      puVar13[-1] = uVar19;
      puVar13[-2] = uVar20;
    }
    uVar10 = uVar10 + 1;
    lVar16 = lVar16 + 0x28;
  } while (uVar10 != uVar12);
LAB_00a6cd38:
  puVar7 = param_3 + uVar12 * 5;
  if (uVar17 < uVar21) {
    lVar16 = 0x28;
    uVar10 = uVar17;
    puVar13 = puVar7;
    do {
      puVar14 = param_1 + uVar12 * 5 + uVar10 * 5;
      puVar15 = puVar7 + uVar10 * 5;
      uVar22 = *puVar14;
      uVar19 = puVar14[3];
      uVar20 = puVar14[2];
      uVar23 = puVar14[4];
      puVar15[1] = puVar14[1];
      *puVar15 = uVar22;
      puVar15[3] = uVar19;
      puVar15[2] = uVar20;
      uVar18 = puVar15[2];
      puVar15[4] = uVar23;
      puVar9 = puVar13;
      lVar11 = lVar16;
      if (uVar18 < (ulong)puVar15[-3]) {
        do {
          puVar15 = puVar9 + uVar17 * 5;
          puVar15[1] = puVar15[-4];
          *puVar15 = puVar15[-5];
          puVar15[3] = puVar15[-2];
          puVar15[2] = puVar15[-3];
          puVar15[4] = puVar15[-1];
          puVar8 = puVar7;
          if (uVar17 * 0x28 - lVar11 == 0) goto LAB_00a6cd64;
          puVar9 = puVar9 + -5;
          lVar11 = lVar11 + 0x28;
        } while (uVar18 < (ulong)puVar15[-8]);
        puVar8 = puVar9 + uVar17 * 5;
LAB_00a6cd64:
        uVar23 = *puVar14;
        uVar19 = puVar14[4];
        uVar20 = puVar14[3];
        puVar8[1] = puVar14[1];
        *puVar8 = uVar23;
        puVar15[-3] = uVar18;
        puVar15[-1] = uVar19;
        puVar15[-2] = uVar20;
      }
      uVar10 = uVar10 + 1;
      lVar16 = lVar16 + -0x28;
      puVar13 = puVar13 + 5;
    } while (uVar10 != uVar21);
  }
  puVar15 = puVar7 + -5;
  lVar16 = param_2 * 0x28;
  puVar13 = param_3 + param_2 * 5 + -5;
  puVar14 = param_1;
  do {
    puVar9 = puVar14;
    lVar16 = lVar16 + -0x28;
    uVar12 = uVar12 - 1;
    bVar5 = (ulong)param_3[2] <= (ulong)puVar7[2];
    puVar14 = puVar7;
    if (bVar5) {
      puVar14 = param_3;
    }
    bVar6 = (ulong)puVar15[2] <= (ulong)puVar13[2];
    uVar23 = *puVar14;
    uVar19 = puVar14[3];
    uVar20 = puVar14[2];
    puVar7 = puVar7 + (ulong)!bVar5 * 5;
    puVar8 = puVar15;
    if (bVar6) {
      puVar8 = puVar13;
    }
    puVar13 = puVar13 + (ulong)bVar6 * -5;
    uVar22 = puVar14[4];
    puVar9[1] = puVar14[1];
    *puVar9 = uVar23;
    puVar9[3] = uVar19;
    puVar9[2] = uVar20;
    uVar24 = puVar8[1];
    uVar19 = *puVar8;
    uVar20 = puVar8[3];
    uVar23 = puVar8[2];
    puVar15 = puVar15 + (ulong)!bVar6 * -5;
    puVar9[4] = uVar22;
    puVar14 = (undefined8 *)((long)param_1 + lVar16);
    param_3 = param_3 + (ulong)bVar5 * 5;
    puVar14[4] = puVar8[4];
    puVar14[1] = uVar24;
    *puVar14 = uVar19;
    puVar14[3] = uVar20;
    puVar14[2] = uVar23;
    puVar14 = puVar9 + 5;
  } while (uVar12 != 0);
  if ((param_2 & 1) != 0) {
    bVar5 = puVar15 + 5 <= param_3;
    puVar14 = param_3;
    if (bVar5) {
      puVar14 = puVar7;
    }
    param_3 = param_3 + (ulong)!bVar5 * 5;
    uVar22 = puVar14[1];
    uVar19 = *puVar14;
    uVar20 = puVar14[3];
    uVar23 = puVar14[2];
    puVar7 = puVar7 + (ulong)bVar5 * 5;
    puVar9[9] = puVar14[4];
    puVar9[6] = uVar22;
    puVar9[5] = uVar19;
    puVar9[8] = uVar20;
    puVar9[7] = uVar23;
  }
  if ((param_3 == puVar15 + 5) && (puVar7 == puVar13 + 5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a6cf10 to 00a6cf13 has its CatchHandler @ 00a6cf30 */
  shared::smallsort::panic_on_ord_violation();
code_r0x00a6ca8c:
  puVar14 = puVar14 + -5;
  puVar9 = puVar14 + uVar21 * 5;
  uVar23 = puVar13[4];
  puVar15 = puVar13 + 1;
  uVar20 = *puVar13;
  uVar22 = puVar13[3];
  uVar19 = puVar13[2];
  puVar13 = puVar13 + 5;
  puVar9[1] = *puVar15;
  *puVar9 = uVar20;
  puVar9[3] = uVar22;
  puVar9[2] = uVar19;
  puVar9[4] = uVar23;
  puVar15 = param_1 + param_2 * 5;
  uVar10 = param_2;
  if (puVar13 < puVar15) goto LAB_00a6ca4c;
  goto LAB_00a6ca84;
code_r0x00a6cba0:
  puVar9 = param_3 + uVar21 * 5;
  uVar22 = puVar13[1];
  uVar19 = *puVar13;
  uVar20 = puVar13[3];
  uVar23 = puVar13[2];
  puVar15 = puVar13 + 4;
  puVar14 = puVar14 + -5;
  uVar21 = uVar21 + 1;
  puVar13 = puVar13 + 5;
  puVar9[4] = *puVar15;
  puVar9[1] = uVar22;
  *puVar9 = uVar19;
  puVar9[3] = uVar20;
  puVar9[2] = uVar23;
  puVar15 = param_1 + param_2 * 5;
  uVar12 = param_2;
  if (puVar13 < puVar15) goto LAB_00a6cb60;
  goto LAB_00a6cb98;
}


// ===== 00a6cf50  FUN_00a6cf50 =====

void FUN_00a6cf50(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  if (CARRY8(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(0);
  }
  uVar2 = *param_1 * 2;
  uVar1 = param_3 + param_2;
  if (param_3 + param_2 <= uVar2) {
    uVar1 = uVar2;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_00a6f7dc(&local_38,*param_1,param_1[1],uVar1,1,1);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a6cfd0  <object::read::pe::relocation::object::read::pe::relocation::RelocationBlockIterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::relocation::object::read::pe::relocation::RelocationBlockIterator>::next */

void __rustcall
<object::read::pe::relocation::object::read::pe::relocation::RelocationBlockIterator>::next
          (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (uVar1 < 8) {
    puVar4 = &DAT_00383d44;
    uVar6 = 0x1d;
  }
  else {
    uVar6 = 0x1b;
    puVar2 = (ulong *)*param_2 + 1;
    uVar3 = *(ulong *)*param_2;
    puVar4 = &DAT_00383d29;
    if ((8 < uVar3 >> 0x20) && ((uVar3 & 0x300000000) == 0)) {
      uVar5 = (uVar3 >> 0x20) + 0xfffffff8 >> 1 & 0x7ffffffe;
      if (uVar1 - 8 < uVar5 * 2) {
        param_1[1] = &DAT_00383d29;
        param_1[2] = 0x1b;
        *param_1 = 1;
        *param_2 = 1;
        param_2[1] = 0;
        return;
      }
      *param_1 = 0;
      param_1[1] = puVar2;
      *param_2 = (long)puVar2 + uVar5 * 2;
      param_2[1] = (uVar1 - 8) + uVar5 * -2;
      param_1[2] = (long)puVar2 + uVar5 * 2;
      param_1[3] = uVar3;
      return;
    }
  }
  param_1[1] = puVar4;
  param_1[2] = uVar6;
  *param_1 = 1;
  *param_2 = 1;
  param_2[1] = 0;
  return;
}


// ===== 00a6d084  <object::read::pe::data_directory::object::read::pe::data_directory::DataDirectories>::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::data_directory::object::read::pe::data_directory::DataDirectories>::get */

int * __rustcall
<object::read::pe::data_directory::object::read::pe::data_directory::DataDirectories>::get
          (long *param_1,ulong param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 < (ulong)param_1[1]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    piVar2 = (int *)0x0;
    if (*piVar1 != 0) {
      piVar2 = piVar1;
    }
    return piVar2;
  }
  return (int *)0x0;
}


// ===== 00a6d0b0  <object::read::pe::data_directory::object::read::pe::data_directory::DataDirectories>::parse =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::data_directory::object::read::pe::data_directory::DataDirectories>::parse */

void __rustcall
<object::read::pe::data_directory::object::read::pe::data_directory::DataDirectories>::parse
          (ulong *param_1,undefined *param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_4;
  bVar3 = param_3 < uVar4 << 3;
  puVar2 = &UNK_00383d61;
  if (!bVar3) {
    puVar2 = param_2;
  }
  uVar1 = 0x22;
  if (!bVar3) {
    uVar1 = uVar4;
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x1;
    uVar1 = uVar4;
  }
  param_1[1] = (ulong)puVar2;
  param_1[2] = uVar1;
  uVar4 = 0;
  if (param_4 != 0) {
    uVar4 = (ulong)bVar3;
  }
  *param_1 = uVar4;
  return;
}


// ===== 00a6d0ec  <object::read::pe::import::object::read::pe::import::ImportTable>::name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::object::read::pe::import::ImportTable>::name */

void __rustcall
<object::read::pe::import::object::read::pe::import::ImportTable>::name
          (undefined8 *param_1,long param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar9 = *(ulong *)(param_2 + 0x18);
  uVar8 = (ulong)(uint)(param_3 - *(int *)(param_2 + 0x28));
  uVar6 = uVar9 - uVar8;
  if ((uVar8 <= uVar9) && (uVar6 != 0)) {
    lVar10 = *(long *)(param_2 + 0x10);
    pauVar1 = (undefined1 (*) [16])(lVar10 + uVar8);
    pauVar2 = (undefined1 (*) [16])(lVar10 + uVar9);
    if (uVar6 < 0x10) {
      pauVar7 = pauVar1;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((*pauVar7)[0] == '\0') goto LAB_00a6d1d0;
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
      }
      if (uVar8 - uVar9 < 0xfffffffffffffffd) {
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 3);
        do {
          if (pauVar7[-1][0xd] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-3 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if (pauVar7[-1][0xe] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-2 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if (pauVar7[-1][0xf] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-1 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if ((*pauVar7)[0] == '\0') goto LAB_00a6d1d0;
          puVar4 = *pauVar7;
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + 4);
        } while ((undefined1 (*) [16])(puVar4 + 1) != pauVar2);
      }
    }
    else {
      auVar11 = NEON_cmeq(*pauVar1,0,1);
      uVar9 = CONCAT17((char)(auVar11._14_2_ >> 4),
                       CONCAT16((char)(auVar11._12_2_ >> 4),
                                CONCAT15((char)(auVar11._10_2_ >> 4),
                                         CONCAT14((char)(auVar11._8_2_ >> 4),
                                                  CONCAT13((char)(auVar11._6_2_ >> 4),
                                                           CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar11._2_2_ >>
                                                                                   4),(char)(auVar11
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar9 != 0) {
        uVar9 = uVar9 >> 3;
        uVar6 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        pauVar7 = (undefined1 (*) [16])
                  (*pauVar1 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2));
LAB_00a6d1d0:
        param_1[1] = pauVar1;
        param_1[2] = (long)pauVar7 - (long)pauVar1;
        *param_1 = 0;
        return;
      }
      uVar9 = 0x10 - ((ulong)pauVar1 & 0xf);
      pauVar7 = (undefined1 (*) [16])((long)pauVar1 + uVar9);
      if ((0x3f < uVar6) && (uVar9 <= uVar6 - 0x40)) {
        pauVar5 = (undefined1 (*) [16])((uVar8 - ((ulong)pauVar1 & 0xf)) + lVar10 + 0x20);
        do {
          pauVar7 = pauVar5;
          uVar3 = *(undefined8 *)(pauVar7[2] + 8);
          auVar14 = NEON_cmeq(pauVar7[-1],0,1);
          auVar13 = NEON_cmeq(*pauVar7,0,1);
          auVar12 = NEON_cmeq(pauVar7[1],0,1);
          auVar11[9] = (char)((ulong)uVar3 >> 8);
          auVar11._0_9_ = *(unkbyte9 *)pauVar7[2];
          auVar11[10] = (char)((ulong)uVar3 >> 0x10);
          auVar11[0xb] = (char)((ulong)uVar3 >> 0x18);
          auVar11[0xc] = (char)((ulong)uVar3 >> 0x20);
          auVar11[0xd] = (char)((ulong)uVar3 >> 0x28);
          auVar11[0xe] = (char)((ulong)uVar3 >> 0x30);
          auVar11[0xf] = (char)((ulong)uVar3 >> 0x38);
          auVar11 = NEON_cmeq(auVar11,0,1);
          auVar15[0] = auVar13[0] | auVar14[0] | auVar12[0] | auVar11[0];
          auVar15[1] = auVar13[1] | auVar14[1] | auVar12[1] | auVar11[1];
          auVar15[2] = auVar13[2] | auVar14[2] | auVar12[2] | auVar11[2];
          auVar15[3] = auVar13[3] | auVar14[3] | auVar12[3] | auVar11[3];
          auVar15[4] = auVar13[4] | auVar14[4] | auVar12[4] | auVar11[4];
          auVar15[5] = auVar13[5] | auVar14[5] | auVar12[5] | auVar11[5];
          auVar15[6] = auVar13[6] | auVar14[6] | auVar12[6] | auVar11[6];
          auVar15[7] = auVar13[7] | auVar14[7] | auVar12[7] | auVar11[7];
          auVar15[8] = auVar13[8] | auVar14[8] | auVar12[8] | auVar11[8];
          auVar15[9] = auVar13[9] | auVar14[9] | auVar12[9] | auVar11[9];
          auVar15[10] = auVar13[10] | auVar14[10] | auVar12[10] | auVar11[10];
          auVar15[0xb] = auVar13[0xb] | auVar14[0xb] | auVar12[0xb] | auVar11[0xb];
          auVar15[0xc] = auVar13[0xc] | auVar14[0xc] | auVar12[0xc] | auVar11[0xc];
          auVar15[0xd] = auVar13[0xd] | auVar14[0xd] | auVar12[0xd] | auVar11[0xd];
          auVar15[0xe] = auVar13[0xe] | auVar14[0xe] | auVar12[0xe] | auVar11[0xe];
          auVar15[0xf] = auVar13[0xf] | auVar14[0xf] | auVar12[0xf] | auVar11[0xf];
          auVar15 = NEON_umaxp(auVar15,auVar15,1);
          if (auVar15._0_8_ != 0) {
            uVar6 = CONCAT17((char)(auVar14._14_2_ >> 4),
                             CONCAT16((char)(auVar14._12_2_ >> 4),
                                      CONCAT15((char)(auVar14._10_2_ >> 4),
                                               CONCAT14((char)(auVar14._8_2_ >> 4),
                                                        CONCAT13((char)(auVar14._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar14._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar14.
                                                  _2_2_ >> 4),(char)(auVar14._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar6 != 0) {
              uVar6 = uVar6 >> 3;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              param_1[1] = pauVar1;
              param_1[2] = (undefined1 *)
                           ((long)pauVar7 +
                           ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) - 0x10) -
                           (long)pauVar1));
              *param_1 = 0;
              return;
            }
            uVar6 = CONCAT17((char)(auVar13._14_2_ >> 4),
                             CONCAT16((char)(auVar13._12_2_ >> 4),
                                      CONCAT15((char)(auVar13._10_2_ >> 4),
                                               CONCAT14((char)(auVar13._8_2_ >> 4),
                                                        CONCAT13((char)(auVar13._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar13._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar13.
                                                  _2_2_ >> 4),(char)(auVar13._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar6 == 0) {
              uVar6 = CONCAT17((char)(auVar12._14_2_ >> 4),
                               CONCAT16((char)(auVar12._12_2_ >> 4),
                                        CONCAT15((char)(auVar12._10_2_ >> 4),
                                                 CONCAT14((char)(auVar12._8_2_ >> 4),
                                                          CONCAT13((char)(auVar12._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar12._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar12._2_2_ >> 4),(char)(auVar12._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar6 == 0) {
                uVar6 = (CONCAT17((char)(auVar11._14_2_ >> 4),
                                  CONCAT16((char)(auVar11._12_2_ >> 4),
                                           CONCAT15((char)(auVar11._10_2_ >> 4),
                                                    CONCAT14((char)(auVar11._8_2_ >> 4),
                                                             CONCAT13((char)(auVar11._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar11._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar11._2_2_ >> 4),(char)(auVar11._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                param_1[1] = pauVar1;
                param_1[2] = (undefined1 *)
                             ((long)pauVar7 +
                             ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) + 0x20) -
                             (long)pauVar1));
                *param_1 = 0;
                return;
              }
              uVar6 = uVar6 >> 3;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              param_1[1] = pauVar1;
              param_1[2] = (undefined1 *)
                           ((long)pauVar7 +
                           ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) + 0x10) -
                           (long)pauVar1));
              *param_1 = 0;
              return;
            }
            uVar6 = uVar6 >> 3;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
            goto LAB_00a6d350;
          }
          pauVar5 = pauVar7 + 4;
        } while (pauVar7 + 3 <= pauVar2 + -4);
        pauVar7 = pauVar7 + 3;
      }
      for (; pauVar7 <= pauVar2 + -1; pauVar7 = pauVar7 + 1) {
        auVar11 = NEON_cmeq(*pauVar7,0,1);
        uVar6 = CONCAT17((char)(auVar11._14_2_ >> 4),
                         CONCAT16((char)(auVar11._12_2_ >> 4),
                                  CONCAT15((char)(auVar11._10_2_ >> 4),
                                           CONCAT14((char)(auVar11._8_2_ >> 4),
                                                    CONCAT13((char)(auVar11._6_2_ >> 4),
                                                             CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar11._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar11._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar6 != 0) {
          uVar6 = uVar6 >> 3;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
LAB_00a6d350:
          param_1[1] = pauVar1;
          param_1[2] = (undefined1 *)
                       ((long)pauVar7 + (((ulong)LZCOUNT(uVar6) >> 2) - (long)pauVar1));
          *param_1 = 0;
          return;
        }
      }
      if (pauVar7 < pauVar2) {
        auVar11 = NEON_cmeq(pauVar2[-1],0,1);
        uVar6 = CONCAT17((char)(auVar11._14_2_ >> 4),
                         CONCAT16((char)(auVar11._12_2_ >> 4),
                                  CONCAT15((char)(auVar11._10_2_ >> 4),
                                           CONCAT14((char)(auVar11._8_2_ >> 4),
                                                    CONCAT13((char)(auVar11._6_2_ >> 4),
                                                             CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar11._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar11._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar6 != 0) {
          uVar6 = uVar6 >> 3;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          param_1[1] = pauVar1;
          param_1[2] = (long)(pauVar2 + -1) +
                       (((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) - (long)pauVar1);
          *param_1 = 0;
          return;
        }
      }
    }
  }
  param_1[1] = &DAT_00383d83;
  param_1[2] = 0x21;
  *param_1 = 1;
  return;
}


// ===== 00a6d3c4  <object::read::pe::import::object::read::pe::import::ImportTable>::hint_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::object::read::pe::import::ImportTable>::hint_name */

void __rustcall
<object::read::pe::import::object::read::pe::import::ImportTable>::hint_name
          (undefined8 *param_1,long param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined2 *puVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar4 = *(ulong *)(param_2 + 0x18);
  uVar9 = (ulong)(uint)(param_3 - *(int *)(param_2 + 0x28));
  uVar5 = uVar4 - uVar9;
  if (uVar4 < uVar9) {
    param_1[1] = &DAT_00383ddc;
    param_1[2] = 0x1f;
    *param_1 = 1;
    return;
  }
  if (uVar5 < 2) {
    puVar8 = &DAT_00383dc0;
    goto LAB_00a6d5e8;
  }
  if (uVar5 - 2 != 0) {
    lVar11 = *(long *)(param_2 + 0x10);
    pauVar1 = (undefined1 (*) [16])(lVar11 + uVar4);
    pauVar3 = (undefined1 (*) [16])((undefined2 *)(lVar11 + uVar9) + 1);
    if (uVar5 < 0x12) {
      pauVar7 = pauVar3;
      for (uVar4 = uVar5 - 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((*pauVar7)[0] == '\0') goto LAB_00a6d4d8;
        pauVar7 = (undefined1 (*) [16])((long)*pauVar7 + 1);
      }
      if (2 < uVar5 - 3) {
        pauVar7 = (undefined1 (*) [16])((long)*pauVar7 + 3);
        pauVar6 = (undefined1 (*) [16])&DAT_00383da4;
        uVar10 = 1;
        lVar12 = 0x1c;
        lVar13 = 0x10;
        lVar14 = 8;
        do {
          if (*(char *)((long)pauVar7[-1] + 0xd) == '\0') {
            pauVar7 = (undefined1 (*) [16])((long)pauVar7[-1] + 0xd);
            goto LAB_00a6d4d8;
          }
          if (*(char *)((long)pauVar7[-1] + 0xe) == '\0') {
            pauVar7 = (undefined1 (*) [16])((long)pauVar7[-1] + 0xe);
            goto LAB_00a6d4d8;
          }
          if (*(char *)((long)pauVar7[-1] + 0xf) == '\0') {
            pauVar7 = (undefined1 (*) [16])((long)pauVar7[-1] + 0xf);
            goto LAB_00a6d4d8;
          }
          if ((*pauVar7)[0] == '\0') goto LAB_00a6d4d8;
          puVar2 = (undefined2 *)*pauVar7;
          pauVar7 = (undefined1 (*) [16])((long)*pauVar7 + 4);
        } while ((undefined1 (*) [16])((long)puVar2 + 1) != pauVar1);
        goto LAB_00a6d4f4;
      }
    }
    else {
      auVar15 = NEON_cmeq(*pauVar3,0,1);
      uVar4 = CONCAT17((char)(auVar15._14_2_ >> 4),
                       CONCAT16((char)(auVar15._12_2_ >> 4),
                                CONCAT15((char)(auVar15._10_2_ >> 4),
                                         CONCAT14((char)(auVar15._8_2_ >> 4),
                                                  CONCAT13((char)(auVar15._6_2_ >> 4),
                                                           CONCAT12((char)(auVar15._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar15._2_2_ >>
                                                                                   4),(char)(auVar15
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar4 == 0) {
        uVar4 = 0x10 - ((ulong)pauVar3 & 0xf);
        pauVar7 = (undefined1 (*) [16])((long)pauVar3 + uVar4);
        if ((0x41 < uVar5) && (uVar4 <= uVar5 - 0x42)) {
          pauVar6 = (undefined1 (*) [16])((uVar9 - ((ulong)pauVar3 & 0xf)) + lVar11 + 0x22);
          do {
            pauVar7 = pauVar6;
            uVar10 = *(undefined8 *)(pauVar7[2] + 8);
            auVar18 = NEON_cmeq(pauVar7[-1],0,1);
            auVar17 = NEON_cmeq(*pauVar7,0,1);
            auVar16 = NEON_cmeq(pauVar7[1],0,1);
            auVar15[9] = (char)((ulong)uVar10 >> 8);
            auVar15._0_9_ = *(unkbyte9 *)pauVar7[2];
            auVar15[10] = (char)((ulong)uVar10 >> 0x10);
            auVar15[0xb] = (char)((ulong)uVar10 >> 0x18);
            auVar15[0xc] = (char)((ulong)uVar10 >> 0x20);
            auVar15[0xd] = (char)((ulong)uVar10 >> 0x28);
            auVar15[0xe] = (char)((ulong)uVar10 >> 0x30);
            auVar15[0xf] = (char)((ulong)uVar10 >> 0x38);
            auVar15 = NEON_cmeq(auVar15,0,1);
            auVar19[0] = auVar17[0] | auVar18[0] | auVar16[0] | auVar15[0];
            auVar19[1] = auVar17[1] | auVar18[1] | auVar16[1] | auVar15[1];
            auVar19[2] = auVar17[2] | auVar18[2] | auVar16[2] | auVar15[2];
            auVar19[3] = auVar17[3] | auVar18[3] | auVar16[3] | auVar15[3];
            auVar19[4] = auVar17[4] | auVar18[4] | auVar16[4] | auVar15[4];
            auVar19[5] = auVar17[5] | auVar18[5] | auVar16[5] | auVar15[5];
            auVar19[6] = auVar17[6] | auVar18[6] | auVar16[6] | auVar15[6];
            auVar19[7] = auVar17[7] | auVar18[7] | auVar16[7] | auVar15[7];
            auVar19[8] = auVar17[8] | auVar18[8] | auVar16[8] | auVar15[8];
            auVar19[9] = auVar17[9] | auVar18[9] | auVar16[9] | auVar15[9];
            auVar19[10] = auVar17[10] | auVar18[10] | auVar16[10] | auVar15[10];
            auVar19[0xb] = auVar17[0xb] | auVar18[0xb] | auVar16[0xb] | auVar15[0xb];
            auVar19[0xc] = auVar17[0xc] | auVar18[0xc] | auVar16[0xc] | auVar15[0xc];
            auVar19[0xd] = auVar17[0xd] | auVar18[0xd] | auVar16[0xd] | auVar15[0xd];
            auVar19[0xe] = auVar17[0xe] | auVar18[0xe] | auVar16[0xe] | auVar15[0xe];
            auVar19[0xf] = auVar17[0xf] | auVar18[0xf] | auVar16[0xf] | auVar15[0xf];
            auVar19 = NEON_umaxp(auVar19,auVar19,1);
            if (auVar19._0_8_ != 0) {
              uVar5 = CONCAT17((char)(auVar18._14_2_ >> 4),
                               CONCAT16((char)(auVar18._12_2_ >> 4),
                                        CONCAT15((char)(auVar18._10_2_ >> 4),
                                                 CONCAT14((char)(auVar18._8_2_ >> 4),
                                                          CONCAT13((char)(auVar18._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar18._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar18._2_2_ >> 4),(char)(auVar18._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar5 != 0) {
                uVar5 = uVar5 >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                pauVar7 = (undefined1 (*) [16])
                          (pauVar7[-1] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
                goto LAB_00a6d4d8;
              }
              uVar5 = CONCAT17((char)(auVar17._14_2_ >> 4),
                               CONCAT16((char)(auVar17._12_2_ >> 4),
                                        CONCAT15((char)(auVar17._10_2_ >> 4),
                                                 CONCAT14((char)(auVar17._8_2_ >> 4),
                                                          CONCAT13((char)(auVar17._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar17._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar17._2_2_ >> 4),(char)(auVar17._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar5 != 0) {
                uVar5 = uVar5 >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
                goto LAB_00a6d660;
              }
              uVar5 = CONCAT17((char)(auVar16._14_2_ >> 4),
                               CONCAT16((char)(auVar16._12_2_ >> 4),
                                        CONCAT15((char)(auVar16._10_2_ >> 4),
                                                 CONCAT14((char)(auVar16._8_2_ >> 4),
                                                          CONCAT13((char)(auVar16._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar16._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar16._2_2_ >> 4),(char)(auVar16._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar5 == 0) {
                uVar5 = (CONCAT17((char)(auVar15._14_2_ >> 4),
                                  CONCAT16((char)(auVar15._12_2_ >> 4),
                                           CONCAT15((char)(auVar15._10_2_ >> 4),
                                                    CONCAT14((char)(auVar15._8_2_ >> 4),
                                                             CONCAT13((char)(auVar15._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar15._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar15._2_2_ >> 4),(char)(auVar15._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                pauVar7 = (undefined1 (*) [16])
                          (pauVar7[2] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
              }
              else {
                uVar5 = uVar5 >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                pauVar7 = (undefined1 (*) [16])
                          (pauVar7[1] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
              }
              goto LAB_00a6d4d8;
            }
            pauVar6 = pauVar7 + 4;
          } while (pauVar7 + 3 <= pauVar1 + -4);
          pauVar7 = pauVar7 + 3;
        }
        if (pauVar7 <= pauVar1 + -1) {
LAB_00a6d58c:
          auVar15 = NEON_cmeq(*pauVar7,0,1);
          uVar5 = CONCAT17((char)(auVar15._14_2_ >> 4),
                           CONCAT16((char)(auVar15._12_2_ >> 4),
                                    CONCAT15((char)(auVar15._10_2_ >> 4),
                                             CONCAT14((char)(auVar15._8_2_ >> 4),
                                                      CONCAT13((char)(auVar15._6_2_ >> 4),
                                                               CONCAT12((char)(auVar15._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar15.
                                                  _2_2_ >> 4),(char)(auVar15._0_2_ >> 4)))))))) &
                  0x8888888888888888;
          if (uVar5 == 0) goto code_r0x00a6d5a4;
          uVar5 = uVar5 >> 3;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
LAB_00a6d660:
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + ((ulong)LZCOUNT(uVar5) >> 2));
          goto LAB_00a6d4d8;
        }
LAB_00a6d5b0:
        if (pauVar7 < pauVar1) {
          auVar15 = NEON_cmeq(pauVar1[-1],0,1);
          uVar5 = CONCAT17((char)(auVar15._14_2_ >> 4),
                           CONCAT16((char)(auVar15._12_2_ >> 4),
                                    CONCAT15((char)(auVar15._10_2_ >> 4),
                                             CONCAT14((char)(auVar15._8_2_ >> 4),
                                                      CONCAT13((char)(auVar15._6_2_ >> 4),
                                                               CONCAT12((char)(auVar15._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar15.
                                                  _2_2_ >> 4),(char)(auVar15._0_2_ >> 4)))))))) &
                  0x8888888888888888;
          if (uVar5 != 0) {
            uVar5 = uVar5 >> 3;
            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            pauVar7 = (undefined1 (*) [16])
                      (pauVar1[-1] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
            goto LAB_00a6d4d8;
          }
        }
      }
      else {
        uVar4 = uVar4 >> 3;
        uVar5 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        pauVar7 = (undefined1 (*) [16])
                  ((long)*pauVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
LAB_00a6d4d8:
        lVar12 = (long)pauVar7 - (long)pauVar3;
        if (lVar12 != 0) {
          uVar10 = 0;
          lVar13 = 0x18;
          lVar14 = 0x10;
          *(undefined2 *)(param_1 + 1) = *(undefined2 *)(lVar11 + uVar9);
          pauVar6 = pauVar3;
LAB_00a6d4f4:
          *(undefined1 (**) [16])((long)param_1 + lVar14) = pauVar6;
          *(long *)((long)param_1 + lVar13) = lVar12;
          *param_1 = uVar10;
          return;
        }
      }
    }
  }
  puVar8 = &DAT_00383da4;
LAB_00a6d5e8:
  param_1[1] = puVar8;
  param_1[2] = 0x1c;
  *param_1 = 1;
  return;
code_r0x00a6d5a4:
  pauVar7 = pauVar7 + 1;
  if (pauVar1 + -1 < pauVar7) goto LAB_00a6d5b0;
  goto LAB_00a6d58c;
}


// ===== 00a6d6b0  <object::read::pe::resource::object::read::pe::resource::ResourceDirectory>::root =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::resource::object::read::pe::resource::ResourceDirectory>::root */

void __rustcall
<object::read::pe::resource::object::read::pe::resource::ResourceDirectory>::root
          (long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((ulong)param_2[1] < 0x10) {
    param_1[1] = (long)&DAT_003842ca;
    param_1[2] = 0x1d;
    *param_1 = 0;
    return;
  }
  lVar2 = *param_2;
  lVar1 = (ulong)*(ushort *)(lVar2 + 0xc) + (ulong)*(ushort *)(lVar2 + 0xe);
  if (lVar1 != 0) {
    if (param_2[1] - 0x10U < (ulong)(lVar1 * 8)) {
      param_1[1] = (long)&DAT_003842ac;
      param_1[2] = 0x1e;
      *param_1 = 0;
      return;
    }
    *param_1 = lVar2;
    param_1[1] = lVar2 + 0x10;
    param_1[2] = lVar1;
    return;
  }
  *param_1 = lVar2;
  param_1[1] = 1;
  param_1[2] = 0;
  return;
}


// ===== 00a6d728  <object::read::elf::relocation::object::read::elf::relocation::RelocationSections>::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::relocation::object::read::elf::relocation::RelocationSections>::get */

bool __rustcall
<object::read::elf::relocation::object::read::elf::relocation::RelocationSections>::get
          (long param_1,ulong param_2)

{
  if (param_2 < *(ulong *)(param_1 + 0x10)) {
    return *(long *)(*(long *)(param_1 + 8) + param_2 * 8) != 0;
  }
  return false;
}


// ===== 00a6d750  <object::read::macho::exports_trie::object::read::macho::exports_trie::ExportsTrieIterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::macho::exports_trie::object::read::macho::exports_trie::ExportsTrieIterator>::next
    */

void __rustcall
<object::read::macho::exports_trie::object::read::macho::exports_trie::ExportsTrieIterator>::next
          (long *param_1,undefined8 param_2)

{
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  <object::read::macho::exports_trie::NodeIterator_as_core::iter::traits::iterator::Iterator>::next
            (&local_68);
  while( true ) {
    if (local_68 == -3) {
      *param_1 = -1;
      return;
    }
    if (local_68 != -1) break;
    <object::read::macho::exports_trie::NodeIterator_as_core::iter::traits::iterator::Iterator>::
    next(&local_68,param_2);
  }
  if (local_68 != -2) {
    *param_1 = local_68;
    param_1[1] = local_60;
    param_1[2] = lStack_58;
    param_1[4] = lStack_48;
    param_1[3] = local_50;
    param_1[6] = lStack_38;
    param_1[5] = local_40;
    return;
  }
  param_1[1] = local_60;
  param_1[2] = lStack_58;
  *param_1 = -2;
  return;
}


// ===== 00a6d814  <object::read::pe::resource::[0]::object::pe::ImageResourceDirectoryEntry>::data =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::resource::[0]::object::pe::ImageResourceDirectoryEntry>::data */

void __rustcall
<object::read::pe::resource::[0]::object::pe::ImageResourceDirectoryEntry>::data
          (ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = *(uint *)(param_2 + 4);
  uVar2 = (ulong)uVar4;
  if (-1 < (int)uVar4) {
    uVar4 = (uint)(param_4 < uVar2);
    if (param_4 - uVar2 < 0x10) {
      uVar4 = 1;
    }
    puVar5 = &DAT_00383dfb;
    *param_1 = (ulong)uVar4;
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    uVar3 = 0x16;
    if (uVar4 == 0) {
      uVar3 = param_3 + uVar2;
    }
    param_1[1] = (ulong)puVar5;
    param_1[2] = uVar3;
    return;
  }
  uVar2 = (ulong)(uVar4 & 0x7fffffff);
  puVar5 = &DAT_003842ca;
  uVar3 = 0x1d;
  if ((uVar2 <= param_4) && (0xf < param_4 - uVar2)) {
    uVar3 = param_3 + uVar2;
    uVar1 = (ulong)*(ushort *)(uVar3 + 0xc) + (ulong)*(ushort *)(uVar3 + 0xe);
    if (uVar1 == 0) {
      param_1[1] = uVar3;
      param_1[2] = 1;
      param_1[3] = 0;
      *param_1 = 0;
      return;
    }
    if (uVar1 * 8 <= param_4 - (uVar2 + 0x10)) {
      param_1[1] = uVar3;
      param_1[2] = param_3 + uVar2 + 0x10;
      param_1[3] = uVar1;
      *param_1 = 0;
      return;
    }
    puVar5 = &DAT_003842ac;
    uVar3 = 0x1e;
  }
  param_1[1] = (ulong)puVar5;
  param_1[2] = uVar3;
  *param_1 = 1;
  return;
}


// ===== 00a6d8dc  <object::read::symbol_map::[1]::object::read::symbol_map::ObjectMap>::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::symbol_map::[1]::object::read::symbol_map::ObjectMap>::get */

long __rustcall
<object::read::symbol_map::[1]::object::read::symbol_map::ObjectMap>::get
          (long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar4 = 0;
    if (uVar3 != 1) {
      uVar4 = 0;
      uVar5 = uVar3;
      do {
        uVar1 = (uVar5 >> 1) + uVar4;
        if (*(ulong *)(lVar2 + uVar1 * 0x28 + 0x10) <= param_2) {
          uVar4 = uVar1;
        }
        uVar5 = uVar5 - (uVar5 >> 1);
      } while (1 < uVar5);
    }
    uVar5 = *(ulong *)(lVar2 + uVar4 * 0x28 + 0x10);
    if (uVar5 != param_2) {
      if (uVar5 < param_2) {
        uVar4 = uVar4 + 1;
      }
      if (uVar4 == 0) {
        return 0;
      }
      uVar4 = uVar4 - 1;
    }
    if (uVar4 < uVar3) {
      lVar2 = lVar2 + uVar4 * 0x28;
      if (*(ulong *)(lVar2 + 0x18) == 0) {
        return lVar2;
      }
      if (param_2 - *(long *)(lVar2 + 0x10) < *(ulong *)(lVar2 + 0x18)) {
        return lVar2;
      }
    }
  }
  return 0;
}


// ===== 00a6d980  <object::read::symbol_map::[1]::object::read::symbol_map::ObjectMap>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::symbol_map::[1]::object::read::symbol_map::ObjectMap>::new */

void __rustcall
<object::read::symbol_map::[1]::object::read::symbol_map::ObjectMap>::new
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_18 [8];
  
  uVar1 = param_2[2];
  if (1 < uVar1) {
    if (uVar1 < 0x15) {
      FUN_00a6c178();
    }
    else {
                    /* try { // try from 00a6d9f4 to 00a6d9ff has its CatchHandler @ 00a6da04 */
      core[bcece726f298455b]::slice::sort::stable::driftsort_main::
      <object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry,<[object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry]>::sort_by_key<u64,<object[7799461ce5ce568]::read::symbol_map::SymbolMap<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>>::new::_closure_0_>::_closure_0_,alloc[c1f8e832b0d782c7]::vec::Vec<object[7799461ce5ce568]::read::symbol_map::ObjectMapEntry>>
                (param_2[1],uVar1,auStack_18);
    }
  }
  uVar4 = *param_2;
  uVar2 = param_2[2];
  uVar6 = param_3[1];
  uVar5 = *param_3;
  uVar3 = param_3[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = uVar2;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_1[5] = uVar3;
  return;
}


// ===== 00a6da54  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::forward_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::forward_string */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::forward_string
          (undefined8 *param_1,long *param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar7 = param_2[1];
  uVar9 = (ulong)(uint)(param_3 - (int)param_2[9]);
  uVar3 = uVar7 - uVar9;
  if (uVar7 < uVar9 || uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar10 = *param_2;
  pauVar1 = (undefined1 (*) [16])(lVar10 + uVar9);
  pauVar2 = (undefined1 (*) [16])(lVar10 + uVar7);
  if (uVar3 < 0x10) {
    pauVar8 = pauVar1;
    for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      if ((*pauVar8)[0] == '\0') goto LAB_00a6db10;
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
    }
    if (2 < uVar3 - 1) {
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 3);
      do {
        if (pauVar8[-1][0xd] == '\0') {
          *param_1 = 0;
          param_1[1] = pauVar1;
          param_1[2] = (undefined1 *)((long)pauVar8 + (-3 - (long)pauVar1));
          return;
        }
        if (pauVar8[-1][0xe] == '\0') {
          *param_1 = 0;
          param_1[1] = pauVar1;
          param_1[2] = (undefined1 *)((long)pauVar8 + (-2 - (long)pauVar1));
          return;
        }
        if (pauVar8[-1][0xf] == '\0') {
          *param_1 = 0;
          param_1[1] = pauVar1;
          param_1[2] = (undefined1 *)((long)pauVar8 + (-1 - (long)pauVar1));
          return;
        }
        if ((*pauVar8)[0] == '\0') goto LAB_00a6db10;
        puVar5 = *pauVar8;
        pauVar8 = (undefined1 (*) [16])(*pauVar8 + 4);
      } while ((undefined1 (*) [16])(puVar5 + 1) != pauVar2);
    }
  }
  else {
    auVar11 = NEON_cmeq(*pauVar1,0,1);
    uVar7 = CONCAT17((char)(auVar11._14_2_ >> 4),
                     CONCAT16((char)(auVar11._12_2_ >> 4),
                              CONCAT15((char)(auVar11._10_2_ >> 4),
                                       CONCAT14((char)(auVar11._8_2_ >> 4),
                                                CONCAT13((char)(auVar11._6_2_ >> 4),
                                                         CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                  CONCAT11((char)(auVar11._2_2_ >> 4
                                                                                 ),(char)(auVar11.
                                                  _0_2_ >> 4)))))))) & 0x8888888888888888;
    if (uVar7 != 0) {
      uVar7 = uVar7 >> 3;
      uVar3 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      pauVar8 = (undefined1 (*) [16])
                (*pauVar1 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2));
LAB_00a6db10:
      *param_1 = 0;
      param_1[1] = pauVar1;
      param_1[2] = (long)pauVar8 - (long)pauVar1;
      return;
    }
    uVar7 = 0x10 - ((ulong)pauVar1 & 0xf);
    pauVar8 = (undefined1 (*) [16])((long)pauVar1 + uVar7);
    if ((0x3f < uVar3) && (uVar7 <= uVar3 - 0x40)) {
      pauVar6 = (undefined1 (*) [16])((uVar9 - ((ulong)pauVar1 & 0xf)) + lVar10 + 0x20);
      do {
        pauVar8 = pauVar6;
        uVar4 = *(undefined8 *)(pauVar8[2] + 8);
        auVar14 = NEON_cmeq(pauVar8[-1],0,1);
        auVar13 = NEON_cmeq(*pauVar8,0,1);
        auVar12 = NEON_cmeq(pauVar8[1],0,1);
        auVar11[9] = (char)((ulong)uVar4 >> 8);
        auVar11._0_9_ = *(unkbyte9 *)pauVar8[2];
        auVar11[10] = (char)((ulong)uVar4 >> 0x10);
        auVar11[0xb] = (char)((ulong)uVar4 >> 0x18);
        auVar11[0xc] = (char)((ulong)uVar4 >> 0x20);
        auVar11[0xd] = (char)((ulong)uVar4 >> 0x28);
        auVar11[0xe] = (char)((ulong)uVar4 >> 0x30);
        auVar11[0xf] = (char)((ulong)uVar4 >> 0x38);
        auVar11 = NEON_cmeq(auVar11,0,1);
        auVar15[0] = auVar13[0] | auVar14[0] | auVar12[0] | auVar11[0];
        auVar15[1] = auVar13[1] | auVar14[1] | auVar12[1] | auVar11[1];
        auVar15[2] = auVar13[2] | auVar14[2] | auVar12[2] | auVar11[2];
        auVar15[3] = auVar13[3] | auVar14[3] | auVar12[3] | auVar11[3];
        auVar15[4] = auVar13[4] | auVar14[4] | auVar12[4] | auVar11[4];
        auVar15[5] = auVar13[5] | auVar14[5] | auVar12[5] | auVar11[5];
        auVar15[6] = auVar13[6] | auVar14[6] | auVar12[6] | auVar11[6];
        auVar15[7] = auVar13[7] | auVar14[7] | auVar12[7] | auVar11[7];
        auVar15[8] = auVar13[8] | auVar14[8] | auVar12[8] | auVar11[8];
        auVar15[9] = auVar13[9] | auVar14[9] | auVar12[9] | auVar11[9];
        auVar15[10] = auVar13[10] | auVar14[10] | auVar12[10] | auVar11[10];
        auVar15[0xb] = auVar13[0xb] | auVar14[0xb] | auVar12[0xb] | auVar11[0xb];
        auVar15[0xc] = auVar13[0xc] | auVar14[0xc] | auVar12[0xc] | auVar11[0xc];
        auVar15[0xd] = auVar13[0xd] | auVar14[0xd] | auVar12[0xd] | auVar11[0xd];
        auVar15[0xe] = auVar13[0xe] | auVar14[0xe] | auVar12[0xe] | auVar11[0xe];
        auVar15[0xf] = auVar13[0xf] | auVar14[0xf] | auVar12[0xf] | auVar11[0xf];
        auVar15 = NEON_umaxp(auVar15,auVar15,1);
        if (auVar15._0_8_ != 0) {
          uVar3 = CONCAT17((char)(auVar14._14_2_ >> 4),
                           CONCAT16((char)(auVar14._12_2_ >> 4),
                                    CONCAT15((char)(auVar14._10_2_ >> 4),
                                             CONCAT14((char)(auVar14._8_2_ >> 4),
                                                      CONCAT13((char)(auVar14._6_2_ >> 4),
                                                               CONCAT12((char)(auVar14._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar14.
                                                  _2_2_ >> 4),(char)(auVar14._0_2_ >> 4)))))))) &
                  0x8888888888888888;
          if (uVar3 != 0) {
            uVar3 = uVar3 >> 3;
            uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            *param_1 = 0;
            param_1[1] = pauVar1;
            param_1[2] = (long)pauVar8 +
                         ((((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2) - 0x10) -
                         (long)pauVar1);
            return;
          }
          uVar3 = CONCAT17((char)(auVar13._14_2_ >> 4),
                           CONCAT16((char)(auVar13._12_2_ >> 4),
                                    CONCAT15((char)(auVar13._10_2_ >> 4),
                                             CONCAT14((char)(auVar13._8_2_ >> 4),
                                                      CONCAT13((char)(auVar13._6_2_ >> 4),
                                                               CONCAT12((char)(auVar13._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar13.
                                                  _2_2_ >> 4),(char)(auVar13._0_2_ >> 4)))))))) &
                  0x8888888888888888;
          if (uVar3 == 0) {
            uVar3 = CONCAT17((char)(auVar12._14_2_ >> 4),
                             CONCAT16((char)(auVar12._12_2_ >> 4),
                                      CONCAT15((char)(auVar12._10_2_ >> 4),
                                               CONCAT14((char)(auVar12._8_2_ >> 4),
                                                        CONCAT13((char)(auVar12._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar12._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar12.
                                                  _2_2_ >> 4),(char)(auVar12._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar3 == 0) {
              uVar3 = (CONCAT17((char)(auVar11._14_2_ >> 4),
                                CONCAT16((char)(auVar11._12_2_ >> 4),
                                         CONCAT15((char)(auVar11._10_2_ >> 4),
                                                  CONCAT14((char)(auVar11._8_2_ >> 4),
                                                           CONCAT13((char)(auVar11._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar11._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar11._2_2_ >> 4),(char)(auVar11._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888) >> 3;
              uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
              uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
              *param_1 = 0;
              param_1[1] = pauVar1;
              param_1[2] = (long)pauVar8 +
                           ((((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2) + 0x20) -
                           (long)pauVar1);
              return;
            }
            uVar3 = uVar3 >> 3;
            uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            *param_1 = 0;
            param_1[1] = pauVar1;
            param_1[2] = (long)pauVar8 +
                         ((((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2) + 0x10) -
                         (long)pauVar1);
            return;
          }
          uVar3 = uVar3 >> 3;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          *param_1 = 0;
          param_1[1] = pauVar1;
          param_1[2] = (long)pauVar8 +
                       (((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2) - (long)pauVar1);
          return;
        }
        pauVar6 = pauVar8 + 4;
      } while (pauVar8 + 3 <= pauVar2 + -4);
      pauVar8 = pauVar8 + 3;
    }
    for (; pauVar8 <= pauVar2 + -1; pauVar8 = pauVar8 + 1) {
      auVar11 = NEON_cmeq(*pauVar8,0,1);
      uVar3 = CONCAT17((char)(auVar11._14_2_ >> 4),
                       CONCAT16((char)(auVar11._12_2_ >> 4),
                                CONCAT15((char)(auVar11._10_2_ >> 4),
                                         CONCAT14((char)(auVar11._8_2_ >> 4),
                                                  CONCAT13((char)(auVar11._6_2_ >> 4),
                                                           CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar11._2_2_ >>
                                                                                   4),(char)(auVar11
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar3 != 0) {
        uVar3 = uVar3 >> 3;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        *param_1 = 0;
        param_1[1] = pauVar1;
        param_1[2] = (undefined1 *)
                     ((long)pauVar8 +
                     (((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2) - (long)pauVar1));
        return;
      }
    }
    if (pauVar8 < pauVar2) {
      auVar11 = NEON_cmeq(pauVar2[-1],0,1);
      uVar3 = CONCAT17((char)(auVar11._14_2_ >> 4),
                       CONCAT16((char)(auVar11._12_2_ >> 4),
                                CONCAT15((char)(auVar11._10_2_ >> 4),
                                         CONCAT14((char)(auVar11._8_2_ >> 4),
                                                  CONCAT13((char)(auVar11._6_2_ >> 4),
                                                           CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar11._2_2_ >>
                                                                                   4),(char)(auVar11
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar3 != 0) {
        uVar3 = uVar3 >> 3;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        *param_1 = 0;
        param_1[1] = pauVar1;
        param_1[2] = (long)(pauVar2 + -1) +
                     (((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 2) - (long)pauVar1);
        return;
      }
    }
  }
  param_1[1] = &DAT_00383e11;
  param_1[2] = 0x23;
  *param_1 = 1;
  return;
}


// ===== 00a6dd34  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::parse_directory =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::parse_directory */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::parse_directory
          (undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_00383e34;
  if (0x27 < param_3) {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = 0x1a;
  if (0x27 < param_3) {
    uVar2 = param_2;
  }
  *param_1 = puVar1;
  param_1[1] = uVar2;
  return;
}


// ===== 00a6dd54  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_by_index =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_by_index */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_by_index
          (undefined4 *param_1,long param_2,ulong param_3)

{
  if ((param_3 & 0xffffffff) < *(ulong *)(param_2 + 0x20)) {
    target_from_address(param_2,*(undefined4 *)
                                 (*(long *)(param_2 + 0x18) + (param_3 & 0xffffffff) * 4));
    return;
  }
  *(undefined **)(param_1 + 2) = &DAT_00383e4e;
  *(undefined8 *)(param_1 + 4) = 0x1f;
  *param_1 = 0xffffffff;
  return;
}


// ===== 00a6dd8c  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::name_from_pointer =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::name_from_pointer */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::name_from_pointer
          (undefined8 *param_1,long *param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar9 = param_2[1];
  uVar8 = (ulong)(uint)(param_3 - (int)param_2[9]);
  uVar6 = uVar9 - uVar8;
  if ((uVar8 <= uVar9) && (uVar6 != 0)) {
    lVar10 = *param_2;
    pauVar1 = (undefined1 (*) [16])(lVar10 + uVar8);
    pauVar2 = (undefined1 (*) [16])(lVar10 + uVar9);
    if (uVar6 < 0x10) {
      pauVar7 = pauVar1;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((*pauVar7)[0] == '\0') goto LAB_00a6de70;
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
      }
      if (uVar8 - uVar9 < 0xfffffffffffffffd) {
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 3);
        do {
          if (pauVar7[-1][0xd] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-3 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if (pauVar7[-1][0xe] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-2 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if (pauVar7[-1][0xf] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-1 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if ((*pauVar7)[0] == '\0') goto LAB_00a6de70;
          puVar4 = *pauVar7;
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + 4);
        } while ((undefined1 (*) [16])(puVar4 + 1) != pauVar2);
      }
    }
    else {
      auVar11 = NEON_cmeq(*pauVar1,0,1);
      uVar9 = CONCAT17((char)(auVar11._14_2_ >> 4),
                       CONCAT16((char)(auVar11._12_2_ >> 4),
                                CONCAT15((char)(auVar11._10_2_ >> 4),
                                         CONCAT14((char)(auVar11._8_2_ >> 4),
                                                  CONCAT13((char)(auVar11._6_2_ >> 4),
                                                           CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar11._2_2_ >>
                                                                                   4),(char)(auVar11
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar9 != 0) {
        uVar9 = uVar9 >> 3;
        uVar6 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        pauVar7 = (undefined1 (*) [16])
                  (*pauVar1 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2));
LAB_00a6de70:
        param_1[1] = pauVar1;
        param_1[2] = (long)pauVar7 - (long)pauVar1;
        *param_1 = 0;
        return;
      }
      uVar9 = 0x10 - ((ulong)pauVar1 & 0xf);
      pauVar7 = (undefined1 (*) [16])((long)pauVar1 + uVar9);
      if ((0x3f < uVar6) && (uVar9 <= uVar6 - 0x40)) {
        pauVar5 = (undefined1 (*) [16])((uVar8 - ((ulong)pauVar1 & 0xf)) + lVar10 + 0x20);
        do {
          pauVar7 = pauVar5;
          uVar3 = *(undefined8 *)(pauVar7[2] + 8);
          auVar14 = NEON_cmeq(pauVar7[-1],0,1);
          auVar13 = NEON_cmeq(*pauVar7,0,1);
          auVar12 = NEON_cmeq(pauVar7[1],0,1);
          auVar11[9] = (char)((ulong)uVar3 >> 8);
          auVar11._0_9_ = *(unkbyte9 *)pauVar7[2];
          auVar11[10] = (char)((ulong)uVar3 >> 0x10);
          auVar11[0xb] = (char)((ulong)uVar3 >> 0x18);
          auVar11[0xc] = (char)((ulong)uVar3 >> 0x20);
          auVar11[0xd] = (char)((ulong)uVar3 >> 0x28);
          auVar11[0xe] = (char)((ulong)uVar3 >> 0x30);
          auVar11[0xf] = (char)((ulong)uVar3 >> 0x38);
          auVar11 = NEON_cmeq(auVar11,0,1);
          auVar15[0] = auVar13[0] | auVar14[0] | auVar12[0] | auVar11[0];
          auVar15[1] = auVar13[1] | auVar14[1] | auVar12[1] | auVar11[1];
          auVar15[2] = auVar13[2] | auVar14[2] | auVar12[2] | auVar11[2];
          auVar15[3] = auVar13[3] | auVar14[3] | auVar12[3] | auVar11[3];
          auVar15[4] = auVar13[4] | auVar14[4] | auVar12[4] | auVar11[4];
          auVar15[5] = auVar13[5] | auVar14[5] | auVar12[5] | auVar11[5];
          auVar15[6] = auVar13[6] | auVar14[6] | auVar12[6] | auVar11[6];
          auVar15[7] = auVar13[7] | auVar14[7] | auVar12[7] | auVar11[7];
          auVar15[8] = auVar13[8] | auVar14[8] | auVar12[8] | auVar11[8];
          auVar15[9] = auVar13[9] | auVar14[9] | auVar12[9] | auVar11[9];
          auVar15[10] = auVar13[10] | auVar14[10] | auVar12[10] | auVar11[10];
          auVar15[0xb] = auVar13[0xb] | auVar14[0xb] | auVar12[0xb] | auVar11[0xb];
          auVar15[0xc] = auVar13[0xc] | auVar14[0xc] | auVar12[0xc] | auVar11[0xc];
          auVar15[0xd] = auVar13[0xd] | auVar14[0xd] | auVar12[0xd] | auVar11[0xd];
          auVar15[0xe] = auVar13[0xe] | auVar14[0xe] | auVar12[0xe] | auVar11[0xe];
          auVar15[0xf] = auVar13[0xf] | auVar14[0xf] | auVar12[0xf] | auVar11[0xf];
          auVar15 = NEON_umaxp(auVar15,auVar15,1);
          if (auVar15._0_8_ != 0) {
            uVar6 = CONCAT17((char)(auVar14._14_2_ >> 4),
                             CONCAT16((char)(auVar14._12_2_ >> 4),
                                      CONCAT15((char)(auVar14._10_2_ >> 4),
                                               CONCAT14((char)(auVar14._8_2_ >> 4),
                                                        CONCAT13((char)(auVar14._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar14._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar14.
                                                  _2_2_ >> 4),(char)(auVar14._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar6 != 0) {
              uVar6 = uVar6 >> 3;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              param_1[1] = pauVar1;
              param_1[2] = (undefined1 *)
                           ((long)pauVar7 +
                           ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) - 0x10) -
                           (long)pauVar1));
              *param_1 = 0;
              return;
            }
            uVar6 = CONCAT17((char)(auVar13._14_2_ >> 4),
                             CONCAT16((char)(auVar13._12_2_ >> 4),
                                      CONCAT15((char)(auVar13._10_2_ >> 4),
                                               CONCAT14((char)(auVar13._8_2_ >> 4),
                                                        CONCAT13((char)(auVar13._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar13._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar13.
                                                  _2_2_ >> 4),(char)(auVar13._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar6 == 0) {
              uVar6 = CONCAT17((char)(auVar12._14_2_ >> 4),
                               CONCAT16((char)(auVar12._12_2_ >> 4),
                                        CONCAT15((char)(auVar12._10_2_ >> 4),
                                                 CONCAT14((char)(auVar12._8_2_ >> 4),
                                                          CONCAT13((char)(auVar12._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar12._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar12._2_2_ >> 4),(char)(auVar12._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar6 == 0) {
                uVar6 = (CONCAT17((char)(auVar11._14_2_ >> 4),
                                  CONCAT16((char)(auVar11._12_2_ >> 4),
                                           CONCAT15((char)(auVar11._10_2_ >> 4),
                                                    CONCAT14((char)(auVar11._8_2_ >> 4),
                                                             CONCAT13((char)(auVar11._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar11._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar11._2_2_ >> 4),(char)(auVar11._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                param_1[1] = pauVar1;
                param_1[2] = (undefined1 *)
                             ((long)pauVar7 +
                             ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) + 0x20) -
                             (long)pauVar1));
                *param_1 = 0;
                return;
              }
              uVar6 = uVar6 >> 3;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              param_1[1] = pauVar1;
              param_1[2] = (undefined1 *)
                           ((long)pauVar7 +
                           ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) + 0x10) -
                           (long)pauVar1));
              *param_1 = 0;
              return;
            }
            uVar6 = uVar6 >> 3;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
            goto LAB_00a6dff0;
          }
          pauVar5 = pauVar7 + 4;
        } while (pauVar7 + 3 <= pauVar2 + -4);
        pauVar7 = pauVar7 + 3;
      }
      for (; pauVar7 <= pauVar2 + -1; pauVar7 = pauVar7 + 1) {
        auVar11 = NEON_cmeq(*pauVar7,0,1);
        uVar6 = CONCAT17((char)(auVar11._14_2_ >> 4),
                         CONCAT16((char)(auVar11._12_2_ >> 4),
                                  CONCAT15((char)(auVar11._10_2_ >> 4),
                                           CONCAT14((char)(auVar11._8_2_ >> 4),
                                                    CONCAT13((char)(auVar11._6_2_ >> 4),
                                                             CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar11._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar11._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar6 != 0) {
          uVar6 = uVar6 >> 3;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
LAB_00a6dff0:
          param_1[1] = pauVar1;
          param_1[2] = (undefined1 *)
                       ((long)pauVar7 + (((ulong)LZCOUNT(uVar6) >> 2) - (long)pauVar1));
          *param_1 = 0;
          return;
        }
      }
      if (pauVar7 < pauVar2) {
        auVar11 = NEON_cmeq(pauVar2[-1],0,1);
        uVar6 = CONCAT17((char)(auVar11._14_2_ >> 4),
                         CONCAT16((char)(auVar11._12_2_ >> 4),
                                  CONCAT15((char)(auVar11._10_2_ >> 4),
                                           CONCAT14((char)(auVar11._8_2_ >> 4),
                                                    CONCAT13((char)(auVar11._6_2_ >> 4),
                                                             CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar11._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar11._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar6 != 0) {
          uVar6 = uVar6 >> 3;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          param_1[1] = pauVar1;
          param_1[2] = (long)(pauVar2 + -1) +
                       (((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) - (long)pauVar1);
          *param_1 = 0;
          return;
        }
      }
    }
  }
  param_1[1] = &DAT_00383e6d;
  param_1[2] = 0x1e;
  *param_1 = 1;
  return;
}


// ===== 00a6e064  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_by_ordinal =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_by_ordinal */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_by_ordinal
          (undefined4 *param_1,long param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)(param_3 - *(int *)(*(long *)(param_2 + 0x10) + 0x10));
  if (uVar1 < *(ulong *)(param_2 + 0x20)) {
    target_from_address(param_2,*(undefined4 *)(*(long *)(param_2 + 0x18) + uVar1 * 4));
    return;
  }
  *(undefined **)(param_1 + 2) = &DAT_00383e4e;
  *(undefined8 *)(param_1 + 4) = 0x1f;
  *param_1 = 0xffffffff;
  return;
}


// ===== 00a6e0a4  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::address_by_ordinal =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::address_by_ordinal */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::address_by_ordinal
          (undefined8 *param_1,long param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)(uint)(param_3 - *(int *)(*(long *)(param_2 + 0x10) + 0x10));
  if (uVar1 < *(ulong *)(param_2 + 0x20)) {
    lVar2 = *(long *)(param_2 + 0x18);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar2 + uVar1 * 4);
    return;
  }
  param_1[1] = 0x1f;
  *param_1 = &DAT_00383e4e;
  return;
}


// ===== 00a6e0e8  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_from_address =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_from_address */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::target_from_address
          (undefined4 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  byte *extraout_x11;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  long local_38;
  long lStack_30;
  long local_28;
  
  forward_string(&local_38);
  if (local_38 == 1) {
    *(long *)(param_1 + 2) = lStack_30;
    *(long *)(param_1 + 4) = local_28;
    *param_1 = 0xffffffff;
    return;
  }
  if (lStack_30 == 0) {
    uVar7 = 0;
    pbVar6 = extraout_x11;
LAB_00a6e184:
    *param_1 = uVar7;
    param_1[1] = param_3;
    *(long *)(param_1 + 2) = lStack_30;
    *(long *)(param_1 + 4) = local_38;
    *(byte **)(param_1 + 6) = pbVar6;
    *(long *)(param_1 + 8) = local_28;
    return;
  }
  if (local_28 != 0) {
    local_38 = 0;
    do {
      if (*(char *)(lStack_30 + local_38) == '.') {
        if (local_28 + -1 == local_38) {
          pcVar3 = "Missing PE forwarded export name";
          uVar4 = 0x20;
          goto LAB_00a6e164;
        }
        pbVar6 = (byte *)(lStack_30 + local_38 + 1);
        if (*pbVar6 != 0x23) {
          local_28 = (local_28 - local_38) + -1;
          uVar7 = 2;
          goto LAB_00a6e184;
        }
        if (local_28 + -2 == local_38) goto LAB_00a6e1e0;
        param_3 = 0;
        lVar5 = (local_28 - local_38) + -2;
        pbVar6 = (byte *)(lStack_30 + local_38 + 2);
        goto LAB_00a6e20c;
      }
      local_38 = local_38 + 1;
    } while (local_28 != local_38);
  }
  pcVar3 = &DAT_00383e8b;
  uVar4 = 0x25;
LAB_00a6e164:
  *(char **)(param_1 + 2) = pcVar3;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *param_1 = 0xffffffff;
  return;
LAB_00a6e20c:
  if (lVar5 == 0) {
    uVar7 = 1;
    local_28 = 0;
    goto LAB_00a6e184;
  }
  uVar1 = *pbVar6 - 0x30;
  if (9 < uVar1) goto LAB_00a6e1e0;
  uVar2 = (ulong)param_3;
  uVar8 = (uint)(uVar2 * 10);
  param_3 = uVar1 + uVar8;
  if (((uVar2 * 10 & 0xffffffff00000000) != 0) ||
     (lVar5 = lVar5 + -1, pbVar6 = pbVar6 + 1, CARRY4(uVar1,uVar8))) goto LAB_00a6e1e0;
  goto LAB_00a6e20c;
LAB_00a6e1e0:
  pcVar3 = &DAT_00383eb0;
  uVar4 = 0x23;
  goto LAB_00a6e164;
}


// ===== 00a6e24c  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::parse =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::parse */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::parse
          (long *param_1,long param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_3 < 0x28) {
    param_1[2] = 0x1a;
    *param_1 = 0;
    param_1[1] = (long)&DAT_00383e34;
    return;
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar2 = 0;
    lVar4 = 1;
    iVar1 = *(int *)(param_2 + 0x20);
  }
  else {
    uVar3 = (ulong)(uint)(*(int *)(param_2 + 0x1c) - param_4);
    if ((param_3 < uVar3) ||
       (uVar2 = (ulong)*(uint *)(param_2 + 0x14), param_3 - uVar3 < uVar2 << 2)) {
      param_1[2] = 0x1f;
      *param_1 = 0;
      param_1[1] = (long)&DAT_00383f35;
      return;
    }
    lVar4 = param_2 + uVar3;
    iVar1 = *(int *)(param_2 + 0x20);
  }
  if (iVar1 == 0) {
    uVar5 = 0;
    lVar6 = 1;
    lVar7 = 1;
  }
  else {
    if (*(int *)(param_2 + 0x24) == 0) {
      param_1[2] = 0x1f;
      *param_1 = 0;
      param_1[1] = (long)&DAT_00383ed3;
      return;
    }
    uVar3 = (ulong)(uint)(iVar1 - param_4);
    if ((param_3 < uVar3) ||
       (uVar5 = (ulong)*(uint *)(param_2 + 0x18), param_3 - uVar3 < uVar5 << 2)) {
      param_1[2] = 0x24;
      *param_1 = 0;
      param_1[1] = (long)&DAT_00383f11;
      return;
    }
    uVar8 = (ulong)(uint)(*(int *)(param_2 + 0x24) - param_4);
    if ((param_3 < uVar8) || (param_3 - uVar8 < uVar5 << 1)) {
      param_1[2] = 0x1f;
      *param_1 = 0;
      param_1[1] = (long)&DAT_00383ef2;
      return;
    }
    lVar6 = param_2 + uVar3;
    lVar7 = param_2 + uVar8;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[3] = lVar4;
  param_1[4] = uVar2;
  param_1[5] = lVar6;
  param_1[6] = uVar5;
  param_1[7] = lVar7;
  param_1[8] = uVar5;
  *(int *)(param_1 + 9) = param_4;
  return;
}


// ===== 00a6e37c  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::exports =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::exports */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::exports
          (ulong *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  ushort *puVar19;
  ulong unaff_x26;
  char *pcVar20;
  char *unaff_x28;
  ulong uVar21;
  long local_b8;
  undefined1 *local_a0;
  ulong local_90;
  undefined1 *puStack_88;
  ulong local_80;
  uint local_78 [2];
  char *local_70;
  ulong uStack_68;
  uint *puVar18;
  
  local_90 = 0;
  lVar7 = *(long *)(param_2 + 0x20);
  puStack_88 = &DAT_00000008;
  local_80 = 0;
  if (lVar7 != 0) {
    puVar1 = *(uint **)(param_2 + 0x18);
    uVar15 = 0x23;
    iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x10);
    local_a0 = &DAT_00000008;
    puVar17 = puVar1;
    do {
      uVar5 = local_80;
      puVar18 = puVar17 + 1;
      uVar13 = *puVar17;
      forward_string(local_78,param_2,uVar13);
      pcVar6 = local_70;
      uVar16 = uStack_68;
      pcVar20 = local_70;
      if ((local_78[0] & 1) != 0) goto LAB_00a6e550;
      if (local_70 == (char *)0x0) {
        uVar11 = 0;
        uVar12 = 0;
      }
      else {
        if (uStack_68 == 0) {
LAB_00a6e544:
          uVar16 = 0x25;
          pcVar20 = &DAT_00383e8b;
          goto LAB_00a6e550;
        }
        unaff_x26 = 0;
        pbVar8 = (byte *)(local_70 + 2);
        lVar9 = uStack_68 - 2;
        while (local_70[unaff_x26] != '.') {
          unaff_x26 = unaff_x26 + 1;
          pbVar8 = pbVar8 + 1;
          lVar9 = lVar9 + -1;
          if (uStack_68 == unaff_x26) goto LAB_00a6e544;
        }
        if (uStack_68 - 1 == unaff_x26) {
          uVar16 = 0x20;
          pcVar20 = "Missing PE forwarded export name";
          goto LAB_00a6e550;
        }
        unaff_x28 = local_70 + unaff_x26 + 1;
        if (*unaff_x28 == '#') {
          uVar16 = uVar15;
          pcVar20 = &DAT_00383eb0;
          if (uStack_68 - 2 == unaff_x26) goto LAB_00a6e550;
          uVar13 = 0;
          while (lVar9 != 0) {
            uVar3 = *pbVar8 - 0x30;
            pcVar20 = &DAT_00383eb0;
            if (9 < uVar3) goto LAB_00a6e550;
            uVar21 = (ulong)uVar13;
            uVar10 = (uint)(uVar21 * 10);
            uVar13 = uVar3 + uVar10;
            if (((uVar21 * 10 & 0xffffffff00000000) != 0) ||
               (lVar9 = lVar9 + -1, pbVar8 = pbVar8 + 1, CARRY4(uVar3,uVar10))) goto LAB_00a6e550;
          }
          uVar11 = 1;
          uVar12 = 1;
        }
        else {
          uVar11 = 2;
          uVar12 = 2;
          local_b8 = ~unaff_x26 + uStack_68;
        }
      }
      if (uVar5 == local_90) {
                    /* try { // try from 00a6e530 to 00a6e537 has its CatchHandler @ 00a6e650 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::pe::export::Export>>::grow_one
                  (&local_90);
        local_a0 = puStack_88;
        uVar12 = uVar11;
      }
      puVar14 = (undefined4 *)(local_a0 + uVar5 * 0x40);
      *(char **)(puVar14 + 6) = unaff_x28;
      *(long *)(puVar14 + 8) = local_b8;
      *puVar14 = uVar12;
      puVar14[1] = uVar13;
      local_80 = uVar5 + 1;
      *(char **)(puVar14 + 2) = pcVar6;
      *(ulong *)(puVar14 + 4) = unaff_x26;
      *(undefined8 *)(puVar14 + 10) = 0;
      puVar14[0xe] = (int)uVar5 + iVar2;
      puVar17 = puVar18;
    } while (puVar18 != puVar1 + lVar7);
  }
  uVar5 = local_80;
  puVar4 = puStack_88;
  uVar15 = *(ulong *)(param_2 + 0x40);
  if (*(ulong *)(param_2 + 0x30) <= *(ulong *)(param_2 + 0x40)) {
    uVar15 = *(ulong *)(param_2 + 0x30);
  }
  if (uVar15 != 0) {
    puVar14 = *(undefined4 **)(param_2 + 0x28);
    puVar19 = *(ushort **)(param_2 + 0x38);
    do {
      uVar21 = (ulong)*puVar19;
      name_from_pointer(local_78,param_2,*puVar14);
      uVar16 = uStack_68;
      pcVar20 = local_70;
      if ((local_78[0] & 1) != 0) {
LAB_00a6e550:
        param_1[1] = (ulong)pcVar20;
        param_1[2] = uVar16;
        *param_1 = 0xffffffffffffffff;
        if (local_90 == 0) {
          return;
        }
        free(puStack_88);
        return;
      }
      if (uVar5 <= uVar21) {
        uVar16 = 0x19;
        pcVar20 = &DAT_00383f54;
        goto LAB_00a6e550;
      }
      uVar15 = uVar15 - 1;
      *(char **)(puVar4 + uVar21 * 0x40 + 0x28) = local_70;
      *(ulong *)(puVar4 + uVar21 * 0x40 + 0x30) = uStack_68;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    } while (uVar15 != 0);
  }
  param_1[1] = (ulong)puStack_88;
  *param_1 = local_90;
  param_1[2] = local_80;
  return;
}


// ===== 00a6e674  <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::name_iter =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::[1]::object::read::pe::export::ExportTable>::name_iter */

void __rustcall
<object::read::pe::export::[1]::object::read::pe::export::ExportTable>::name_iter
          (long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *(long *)(param_2 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  uVar5 = *(ulong *)(param_2 + 0x40);
  *param_1 = lVar2;
  uVar1 = uVar5;
  if (uVar4 <= uVar5) {
    uVar1 = uVar4;
  }
  param_1[1] = lVar2 + uVar4 * 4;
  param_1[2] = lVar3;
  param_1[3] = lVar3 + uVar5 * 2;
  param_1[4] = 0;
  param_1[5] = uVar1;
  return;
}


// ===== 00a6e6a0  FUN_00a6e6a0 =====

void FUN_00a6e6a0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  ulong uVar22;
  undefined *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  long lVar28;
  undefined1 *puVar29;
  void *__src;
  ulong unaff_x26;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  long local_80;
  undefined1 *local_78;
  ulong local_70;
  size_t local_68;
  
  uVar16 = param_2[8];
  uVar26 = param_2[7] - uVar16;
  if ((ulong)param_2[7] < uVar16) {
    lVar13 = 0x1b;
    puVar23 = &DAT_00383f8e;
  }
  else {
    lVar15 = param_2[6];
    uVar25 = 0;
    uVar22 = 0;
    uVar17 = 0;
    lVar13 = lVar15 + uVar16;
    uVar24 = uVar26;
    uVar8 = (int)uVar16 + (int)lVar15 + 2;
    do {
      uVar9 = uVar8;
      if (uVar26 == uVar25) {
LAB_00a6e744:
        lVar13 = 0x22;
        puVar23 = &DAT_00383ff5;
        goto LAB_00a6e750;
      }
      bVar4 = *(byte *)(lVar13 + uVar25);
      if (((int)uVar22 == 0x3f) && (1 < bVar4)) goto LAB_00a6e744;
      uVar24 = uVar24 - 1;
      uVar25 = uVar25 + 1;
      uVar11 = uVar22 & 0x3f;
      uVar22 = (ulong)((int)uVar22 + 7);
      uVar17 = ((ulong)bVar4 & 0x7f) << uVar11 | uVar17;
      uVar8 = uVar9 + 1;
    } while ((char)bVar4 < '\0');
    uVar22 = uVar26 - uVar25;
    if (uVar17 == 0) {
      uVar24 = 0;
      puVar29 = (undefined1 *)(lVar13 + uVar25);
      lVar13 = -1;
      goto LAB_00a6e7bc;
    }
    puVar29 = (undefined1 *)(lVar13 + uVar17 + uVar25);
    uVar11 = uVar17;
    if (uVar24 <= uVar17) {
      uVar11 = uVar24;
    }
    if (uVar17 <= uVar22) {
      uVar10 = 0;
      uVar12 = 0;
      uVar24 = 0;
      lVar28 = -uVar25;
      uVar22 = (uVar26 - uVar11) - uVar25;
      lVar20 = 0x1a;
      do {
        uVar26 = (ulong)uVar9;
        puVar23 = &DAT_003840ef;
        if (uVar17 == uVar10) goto LAB_00a6e8f8;
        bVar4 = *(byte *)(lVar13 + uVar10 + uVar25);
        if (((int)uVar12 == 0x3f) && (1 < bVar4)) goto LAB_00a6e8f8;
        uVar10 = uVar10 + 1;
        lVar28 = lVar28 + -1;
        uVar11 = uVar12 & 0x3f;
        uVar12 = (ulong)((int)uVar12 + 7);
        uVar24 = ((ulong)bVar4 & 0x7f) << uVar11 | uVar24;
        uVar9 = uVar9 + 1;
      } while ((char)bVar4 < '\0');
      if (uVar24 < 0x100) {
        lVar18 = uVar17 - uVar10;
        if (((uint)uVar24 >> 3 & 1) == 0) {
          uVar16 = 0;
          unaff_x26 = 0;
          pbVar14 = (byte *)(lVar13 + uVar25 + uVar10);
          if (((uint)uVar24 >> 4 & 1) == 0) {
            lVar20 = 0x1c;
            do {
              puVar23 = &DAT_0038404f;
              if (lVar18 == 0) goto LAB_00a6e8f8;
              bVar4 = *pbVar14;
              if (((int)uVar16 == 0x3f) && (puVar23 = &DAT_0038404f, 1 < bVar4)) goto LAB_00a6e8f8;
              pbVar14 = pbVar14 + 1;
              lVar18 = lVar18 + -1;
              uVar26 = uVar16 & 0x3f;
              uVar16 = (ulong)((int)uVar16 + 7);
              unaff_x26 = ((ulong)bVar4 & 0x7f) << uVar26 | unaff_x26;
            } while ((char)bVar4 < '\0');
            lVar13 = 0;
          }
          else {
            lVar20 = 0x21;
            do {
              puVar23 = &DAT_00384090;
              if (lVar18 == 0) goto LAB_00a6e8f8;
              bVar4 = *pbVar14;
              if (((int)uVar16 == 0x3f) && (1 < bVar4)) goto LAB_00a6e8f8;
              pbVar14 = pbVar14 + 1;
              lVar18 = lVar18 + -1;
              uVar26 = uVar16 & 0x3f;
              uVar16 = (ulong)((int)uVar16 + 7);
              unaff_x26 = ((ulong)bVar4 & 0x7f) << uVar26 | unaff_x26;
            } while ((char)bVar4 < '\0');
            uVar16 = 0;
            lVar20 = 0x25;
            lVar13 = 2;
            local_70 = 0;
            do {
              puVar23 = &DAT_0038406b;
              if (lVar18 == 0) goto LAB_00a6e8f8;
              bVar4 = *pbVar14;
              if (((int)uVar16 == 0x3f) && (1 < bVar4)) goto LAB_00a6e8f8;
              pbVar14 = pbVar14 + 1;
              uVar26 = uVar16 & 0x3f;
              lVar18 = lVar18 + -1;
              uVar16 = (ulong)((int)uVar16 + 7);
              local_70 = ((ulong)bVar4 & 0x7f) << uVar26 | local_70;
            } while ((char)bVar4 < '\0');
          }
LAB_00a6ec60:
          local_68 = param_2[5];
          if (local_68 == 0) {
            local_78 = &DAT_00000001;
          }
          else {
            __src = (void *)param_2[4];
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            local_78 = (undefined1 *)FUN_004b25a4(local_68,1);
            if (local_78 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(1,local_68);
            }
            memcpy(local_78,__src,local_68);
          }
LAB_00a6e7bc:
          if (uVar22 != 0) {
            lVar20 = param_2[2];
            lVar15 = param_2[5];
            uVar3 = *puVar29;
            if (lVar20 == *param_2) {
                    /* try { // try from 00a6e7d8 to 00a6e7e7 has its CatchHandler @ 00a6ed88 */
              <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::macho::exports_trie::Frame>>
              ::grow_one(param_2);
            }
            lVar28 = param_2[1];
            *param_1 = lVar13;
            param_1[1] = unaff_x26;
            param_2[2] = lVar20 + 1;
            puVar1 = (undefined8 *)(lVar28 + lVar20 * 0x20);
            *(char *)(param_1 + 6) = (char)uVar24;
            *puVar1 = puVar29 + 1;
            puVar1[1] = uVar22 - 1;
            puVar1[2] = lVar15;
            *(undefined1 *)(puVar1 + 3) = uVar3;
            param_1[2] = local_70;
            param_1[3] = local_80;
            param_1[4] = (long)local_78;
            param_1[5] = local_68;
            return;
          }
          param_1[1] = (long)&DAT_00383fa9;
          param_1[2] = 0x23;
          *param_1 = -2;
          if (local_68 == 0) {
            return;
          }
          if (lVar13 == -1) {
            return;
          }
          free(local_78);
          return;
        }
        uVar17 = 0;
        unaff_x26 = 0;
        lVar19 = -lVar28;
        puVar23 = &DAT_003840b1;
        lVar20 = 0x22;
        uVar25 = lVar18 - 1;
        do {
          uVar11 = uVar25;
          if (uVar11 == 0xffffffffffffffff) goto LAB_00a6e8f8;
          bVar4 = *(byte *)(lVar13 + lVar19);
          if (((int)uVar17 == 0x3f) && (1 < bVar4)) goto LAB_00a6e8f8;
          uVar26 = (ulong)((int)uVar26 + 1);
          lVar19 = lVar19 + 1;
          uVar10 = uVar17 & 0x3f;
          uVar25 = uVar11 - 1;
          uVar17 = (ulong)((int)uVar17 + 7);
          lVar28 = lVar28 + -1;
          unaff_x26 = ((ulong)bVar4 & 0x7f) << uVar10 | unaff_x26;
        } while ((char)bVar4 < '\0');
        if (uVar25 != 0xffffffffffffffff) {
          pauVar27 = (undefined1 (*) [16])(lVar13 + lVar19);
          local_70 = uVar16 + lVar15 + lVar19;
          puVar6 = *pauVar27;
          if (uVar11 + 1 < 0x11) {
            if ((uVar11 & 3) != 0) {
              uVar26 = uVar11 & 3;
              do {
                if ((*pauVar27)[0] == '\0') goto LAB_00a6ec4c;
                uVar26 = uVar26 - 1;
                pauVar27 = (undefined1 (*) [16])(*pauVar27 + 1);
              } while (uVar26 != 0);
            }
            if (2 < uVar25) {
              pauVar27 = (undefined1 (*) [16])(*pauVar27 + 3);
              puVar23 = &DAT_002c02e8;
              lVar20 = 0x20;
              do {
                if (pauVar27[-1][0xd] == '\0') {
                  pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 0xd);
                  goto LAB_00a6ec4c;
                }
                if (pauVar27[-1][0xe] == '\0') {
                  pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 0xe);
                  goto LAB_00a6ec4c;
                }
                if (pauVar27[-1][0xf] == '\0') {
                  pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 0xf);
                  goto LAB_00a6ec4c;
                }
                if ((*pauVar27)[0] == '\0') goto LAB_00a6ec4c;
                puVar7 = *pauVar27;
                pauVar27 = (undefined1 (*) [16])(*pauVar27 + 4);
              } while ((undefined1 (*) [16])(puVar7 + 1) != (undefined1 (*) [16])(puVar6 + uVar11));
              goto LAB_00a6e8f8;
            }
          }
          else {
            auVar30 = NEON_cmeq(*pauVar27,0,1);
            uVar25 = CONCAT17((char)(auVar30._14_2_ >> 4),
                              CONCAT16((char)(auVar30._12_2_ >> 4),
                                       CONCAT15((char)(auVar30._10_2_ >> 4),
                                                CONCAT14((char)(auVar30._8_2_ >> 4),
                                                         CONCAT13((char)(auVar30._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar30._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar30._2_2_ >> 4),(char)(auVar30._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar25 != 0) {
              uVar25 = uVar25 >> 3;
              uVar26 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
              uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
              pauVar27 = (undefined1 (*) [16])
                         (lVar13 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 2) + lVar19);
LAB_00a6ec4c:
              lVar13 = 1;
              local_80 = (long)pauVar27 + (-lVar19 - (uVar16 + lVar15));
              goto LAB_00a6ec60;
            }
            pauVar21 = (undefined1 (*) [16])(((lVar13 - (uVar26 & 0xf)) - lVar28) + 0x10);
            if ((0x40 < uVar11 + 1) && (0x10 - (local_70 & 0xf) <= uVar11 - 0x40)) {
              pauVar21 = pauVar27 + 2;
              do {
                pauVar2 = (undefined1 (*) [16])((long)pauVar21 + -(uVar26 & 0xf));
                uVar5 = *(undefined8 *)(pauVar2[2] + 8);
                auVar33 = NEON_cmeq(pauVar2[-1],0,1);
                auVar32 = NEON_cmeq(*pauVar2,0,1);
                auVar31 = NEON_cmeq(pauVar2[1],0,1);
                auVar30[9] = (char)((ulong)uVar5 >> 8);
                auVar30._0_9_ = *(unkbyte9 *)pauVar2[2];
                auVar30[10] = (char)((ulong)uVar5 >> 0x10);
                auVar30[0xb] = (char)((ulong)uVar5 >> 0x18);
                auVar30[0xc] = (char)((ulong)uVar5 >> 0x20);
                auVar30[0xd] = (char)((ulong)uVar5 >> 0x28);
                auVar30[0xe] = (char)((ulong)uVar5 >> 0x30);
                auVar30[0xf] = (char)((ulong)uVar5 >> 0x38);
                auVar30 = NEON_cmeq(auVar30,0,1);
                auVar34[0] = auVar32[0] | auVar33[0] | auVar31[0] | auVar30[0];
                auVar34[1] = auVar32[1] | auVar33[1] | auVar31[1] | auVar30[1];
                auVar34[2] = auVar32[2] | auVar33[2] | auVar31[2] | auVar30[2];
                auVar34[3] = auVar32[3] | auVar33[3] | auVar31[3] | auVar30[3];
                auVar34[4] = auVar32[4] | auVar33[4] | auVar31[4] | auVar30[4];
                auVar34[5] = auVar32[5] | auVar33[5] | auVar31[5] | auVar30[5];
                auVar34[6] = auVar32[6] | auVar33[6] | auVar31[6] | auVar30[6];
                auVar34[7] = auVar32[7] | auVar33[7] | auVar31[7] | auVar30[7];
                auVar34[8] = auVar32[8] | auVar33[8] | auVar31[8] | auVar30[8];
                auVar34[9] = auVar32[9] | auVar33[9] | auVar31[9] | auVar30[9];
                auVar34[10] = auVar32[10] | auVar33[10] | auVar31[10] | auVar30[10];
                auVar34[0xb] = auVar32[0xb] | auVar33[0xb] | auVar31[0xb] | auVar30[0xb];
                auVar34[0xc] = auVar32[0xc] | auVar33[0xc] | auVar31[0xc] | auVar30[0xc];
                auVar34[0xd] = auVar32[0xd] | auVar33[0xd] | auVar31[0xd] | auVar30[0xd];
                auVar34[0xe] = auVar32[0xe] | auVar33[0xe] | auVar31[0xe] | auVar30[0xe];
                auVar34[0xf] = auVar32[0xf] | auVar33[0xf] | auVar31[0xf] | auVar30[0xf];
                auVar34 = NEON_umaxp(auVar34,auVar34,1);
                if (auVar34._0_8_ != 0) {
                  uVar25 = CONCAT17((char)(auVar33._14_2_ >> 4),
                                    CONCAT16((char)(auVar33._12_2_ >> 4),
                                             CONCAT15((char)(auVar33._10_2_ >> 4),
                                                      CONCAT14((char)(auVar33._8_2_ >> 4),
                                                               CONCAT13((char)(auVar33._6_2_ >> 4),
                                                                        CONCAT12((char)(auVar33.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar33._2_2_ >> 4),
                                                           (char)(auVar33._0_2_ >> 4)))))))) &
                           0x8888888888888888;
                  if (uVar25 == 0) {
                    uVar25 = CONCAT17((char)(auVar32._14_2_ >> 4),
                                      CONCAT16((char)(auVar32._12_2_ >> 4),
                                               CONCAT15((char)(auVar32._10_2_ >> 4),
                                                        CONCAT14((char)(auVar32._8_2_ >> 4),
                                                                 CONCAT13((char)(auVar32._6_2_ >> 4)
                                                                          ,CONCAT12((char)(auVar32.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar32._2_2_ >> 4),
                                                           (char)(auVar32._0_2_ >> 4)))))))) &
                             0x8888888888888888;
                    if (uVar25 == 0) {
                      uVar25 = CONCAT17((char)(auVar31._14_2_ >> 4),
                                        CONCAT16((char)(auVar31._12_2_ >> 4),
                                                 CONCAT15((char)(auVar31._10_2_ >> 4),
                                                          CONCAT14((char)(auVar31._8_2_ >> 4),
                                                                   CONCAT13((char)(auVar31._6_2_ >>
                                                                                  4),CONCAT12((char)
                                                  (auVar31._4_2_ >> 4),
                                                  CONCAT11((char)(auVar31._2_2_ >> 4),
                                                           (char)(auVar31._0_2_ >> 4)))))))) &
                               0x8888888888888888;
                      if (uVar25 == 0) {
                        uVar25 = (CONCAT17((char)(auVar30._14_2_ >> 4),
                                           CONCAT16((char)(auVar30._12_2_ >> 4),
                                                    CONCAT15((char)(auVar30._10_2_ >> 4),
                                                             CONCAT14((char)(auVar30._8_2_ >> 4),
                                                                      CONCAT13((char)(auVar30._6_2_
                                                                                     >> 4),
                                                                               CONCAT12((char)(
                                                  auVar30._4_2_ >> 4),
                                                  CONCAT11((char)(auVar30._2_2_ >> 4),
                                                           (char)(auVar30._0_2_ >> 4)))))))) &
                                 0x8888888888888888) >> 3;
                        uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar25 & 0xff00ff00ff00ff) << 8;
                        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar25 & 0xffff0000ffff) << 0x10;
                        pauVar27 = (undefined1 (*) [16])
                                   ((long)pauVar21 +
                                   (((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 2) -
                                   (uVar26 & 0xf)) + 0x20);
                      }
                      else {
                        uVar25 = uVar25 >> 3;
                        uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                                 (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                        uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 |
                                 (uVar25 & 0xff00ff00ff00ff) << 8;
                        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                                 (uVar25 & 0xffff0000ffff) << 0x10;
                        pauVar27 = (undefined1 (*) [16])
                                   ((long)pauVar21 +
                                   (((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 2) -
                                   (uVar26 & 0xf)) + 0x10);
                      }
                    }
                    else {
                      uVar25 = uVar25 >> 3;
                      uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                               (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                      uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8
                      ;
                      uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar25 & 0xffff0000ffff) << 0x10;
                      pauVar27 = (undefined1 (*) [16])
                                 ((long)pauVar21 +
                                 (((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 2) -
                                 (uVar26 & 0xf)));
                    }
                  }
                  else {
                    uVar25 = uVar25 >> 3;
                    uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
                    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar25 & 0xffff0000ffff) << 0x10;
                    pauVar27 = (undefined1 (*) [16])
                               ((long)pauVar21 +
                               (((ulong)LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) >> 2) -
                               (uVar26 & 0xf)) + -0x10);
                  }
                  goto LAB_00a6ec4c;
                }
                pauVar21 = pauVar21 + 4;
              } while ((undefined1 *)((long)pauVar21 + -(uVar26 & 0xf) + -0x10) <=
                       pauVar27[-4] + uVar11);
              pauVar21 = (undefined1 (*) [16])((long)pauVar21 + (-0x10 - (uVar26 & 0xf)));
            }
            for (; pauVar21 <= (undefined1 (*) [16])(pauVar27[-1] + uVar11); pauVar21 = pauVar21 + 1
                ) {
              auVar30 = NEON_cmeq(*pauVar21,0,1);
              uVar26 = CONCAT17((char)(auVar30._14_2_ >> 4),
                                CONCAT16((char)(auVar30._12_2_ >> 4),
                                         CONCAT15((char)(auVar30._10_2_ >> 4),
                                                  CONCAT14((char)(auVar30._8_2_ >> 4),
                                                           CONCAT13((char)(auVar30._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar30._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar30._2_2_ >> 4),(char)(auVar30._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar26 != 0) {
                uVar26 = uVar26 >> 3;
                uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                pauVar27 = (undefined1 (*) [16])
                           (*pauVar21 + ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 2));
                goto LAB_00a6ec4c;
              }
            }
            if (pauVar21 < (undefined1 (*) [16])(puVar6 + uVar11)) {
              auVar30 = NEON_cmeq(*(undefined1 (*) [16])(pauVar27[-1] + uVar11),0,1);
              uVar26 = CONCAT17((char)(auVar30._14_2_ >> 4),
                                CONCAT16((char)(auVar30._12_2_ >> 4),
                                         CONCAT15((char)(auVar30._10_2_ >> 4),
                                                  CONCAT14((char)(auVar30._8_2_ >> 4),
                                                           CONCAT13((char)(auVar30._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar30._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar30._2_2_ >> 4),(char)(auVar30._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar26 != 0) {
                uVar26 = uVar26 >> 3;
                uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
                uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
                pauVar27 = (undefined1 (*) [16])
                           (*(undefined1 (*) [16])(pauVar27[-1] + uVar11) +
                           ((ulong)LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) >> 2));
                goto LAB_00a6ec4c;
              }
            }
          }
        }
        lVar20 = 0x20;
        puVar23 = &DAT_002c02e8;
      }
      else {
        lVar20 = 0x1c;
        puVar23 = &DAT_003840d3;
      }
LAB_00a6e8f8:
      param_1[1] = (long)puVar23;
      param_1[2] = lVar20;
      goto LAB_00a6e758;
    }
    lVar13 = 0x29;
    puVar23 = &DAT_00383fcc;
  }
LAB_00a6e750:
  param_1[1] = (long)puVar23;
  param_1[2] = lVar13;
LAB_00a6e758:
  *param_1 = -2;
  return;
}


// ===== 00a6edb4  <object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::to_string_lossy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::to_string_lossy */

void __rustcall
<object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::to_string_lossy
          (long *param_1,uint *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ushort *puVar2;
  byte *pbVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  long local_78;
  long lStack_70;
  long local_68;
  
  uVar11 = (ulong)*param_2;
  puVar9 = &DAT_00384033;
  if ((uVar11 <= param_4) && (1 < param_4 - uVar11)) {
    uVar4 = *(ushort *)(param_3 + uVar11);
    uVar12 = (ulong)uVar4;
    if (uVar12 == 0) {
      puVar13 = (ushort *)&DAT_00000001;
      uVar11 = (ulong)(uVar4 >> 1);
    }
    else {
      if (param_4 - (uVar11 + 2) < uVar12 << 1) {
        puVar9 = &DAT_00384017;
        goto LAB_00a6ee14;
      }
      puVar13 = (ushort *)(param_3 + uVar11 + 2);
      uVar11 = (uVar12 & 1) + (ulong)(uVar4 >> 1);
    }
    lStack_70 = 1;
    local_78 = 0;
    local_68 = 0;
    if (uVar11 != 0) {
      local_68 = 0;
      lStack_70 = 1;
                    /* try { // try from 00a6f028 to 00a6f033 has its CatchHandler @ 00a6f038 */
      local_78 = 0;
      FUN_00a6cf50(&local_78,0,uVar11);
    }
    puVar2 = puVar13 + uVar12;
    uVar15 = 0;
    bVar1 = false;
    do {
      lVar7 = local_68;
      if (bVar1) {
        uVar11 = (ulong)uVar15;
        puVar14 = puVar13;
        if ((uVar15 & 0xf800) == 0xd800) goto LAB_00a6ee98;
LAB_00a6eeec:
        uVar16 = (uint)uVar11;
        puVar13 = puVar14;
joined_r0x00a6ef28:
        if (uVar11 < 0x80) {
          bVar1 = false;
          bVar8 = true;
          uVar12 = 1;
        }
        else {
          uVar16 = (uint)uVar11;
          if (uVar11 < 0x800) {
            bVar8 = false;
            bVar1 = false;
            uVar12 = 2;
          }
          else {
            bVar8 = false;
            bVar1 = false;
            uVar12 = 3;
            if (0xffff < uVar11) {
              uVar12 = 4;
            }
          }
        }
      }
      else {
        if (puVar13 == puVar2) {
          param_1[1] = lStack_70;
          *param_1 = local_78;
          param_1[2] = local_68;
          return;
        }
        puVar14 = puVar13 + 1;
        uVar11 = (ulong)*puVar13;
        if ((*puVar13 & 0xf800) != 0xd800) goto LAB_00a6eeec;
LAB_00a6ee98:
        bVar8 = (uint)(uVar11 >> 10) < 0x37;
        bVar1 = bVar8 && puVar14 != puVar2;
        puVar13 = puVar14;
        uVar10 = uVar15;
        if (bVar8 && puVar14 != puVar2) {
          puVar13 = puVar14 + 1;
          uVar10 = (uint)*puVar14;
          if (0xfffffbff < uVar10 - 0xe000) {
            uVar11 = (ulong)*puVar14 & 0x3ff |
                     (ulong)((uint)uVar11 & 0x3ff) * 0x4000000 + 0x100000000 >> 0x10;
            uVar16 = (uint)uVar11;
            goto joined_r0x00a6ef28;
          }
        }
        bVar8 = false;
        uVar16 = 0xfffd;
        uVar12 = 3;
        uVar15 = uVar10;
      }
      if ((ulong)(local_78 - local_68) < uVar12) {
                    /* try { // try from 00a6efe4 to 00a6eff3 has its CatchHandler @ 00a6f03c */
        FUN_00a6cf50(&local_78,local_68,uVar12);
      }
      pbVar3 = (byte *)(lStack_70 + lVar7);
      if (bVar8) {
        *pbVar3 = (byte)uVar16;
      }
      else {
        bVar5 = (byte)uVar16 & 0x3f | 0x80;
        if (uVar16 < 0x800) {
          pbVar3[1] = bVar5;
          *pbVar3 = (byte)(uVar16 >> 6) | 0xc0;
        }
        else {
          bVar6 = (byte)(uVar16 >> 6) & 0x3f | 0x80;
          if (uVar16 >> 0x10 == 0) {
            pbVar3[1] = bVar6;
            pbVar3[2] = bVar5;
            *pbVar3 = (byte)(uVar16 >> 0xc) | 0xe0;
          }
          else {
            pbVar3[2] = bVar6;
            pbVar3[3] = bVar5;
            *pbVar3 = (byte)(uVar16 >> 0x12) | 0xf0;
            pbVar3[1] = (byte)(uVar16 >> 0xc) & 0x3f | 0x80;
          }
        }
      }
      local_68 = uVar12 + lVar7;
    } while( true );
  }
LAB_00a6ee14:
  param_1[1] = (long)puVar9;
  param_1[2] = 0x1c;
  *param_1 = -1;
  return;
}


// ===== 00a6f05c  <object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::data =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::data */

void __rustcall
<object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::data
          (ulong *param_1,uint *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)*param_2;
  puVar3 = &DAT_00384033;
  uVar4 = 1;
  uVar2 = 0x1c;
  if ((uVar5 <= param_4) && (1 < param_4 - uVar5)) {
    uVar4 = (ulong)*(ushort *)(param_3 + uVar5);
    if (uVar4 == 0) {
      param_1[1] = 1;
      param_1[2] = 0;
      *param_1 = 0;
      return;
    }
    bVar1 = param_4 - (uVar5 + 2) < uVar4 << 1;
    puVar3 = &DAT_00384017;
    if (!bVar1) {
      puVar3 = (undefined *)(param_3 + uVar5 + 2);
    }
    uVar2 = 0x1c;
    if (!bVar1) {
      uVar2 = uVar4;
    }
    uVar4 = (ulong)bVar1;
  }
  param_1[1] = (ulong)puVar3;
  param_1[2] = uVar2;
  *param_1 = uVar4;
  return;
}


// ===== 00a6f0cc  <object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::raw_data =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::raw_data */

void __rustcall
<object::read::pe::resource::[2]::object::read::pe::resource::ResourceName>::raw_data
          (undefined8 *param_1,uint *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*param_2;
  puVar1 = &DAT_00384033;
  if ((uVar3 <= param_4) && (1 < param_4 - uVar3)) {
    if ((ulong)*(ushort *)(param_3 + uVar3) == 0) {
      param_1[1] = 1;
      param_1[2] = 0;
      *param_1 = 0;
      return;
    }
    uVar2 = (ulong)*(ushort *)(param_3 + uVar3) * 2;
    param_4 = param_4 - (uVar3 + 2);
    if (uVar2 < param_4 || uVar2 - param_4 == 0) {
      param_1[1] = param_3 + uVar3 + 2;
      param_1[2] = uVar2;
      *param_1 = 0;
      return;
    }
    puVar1 = &DAT_00384017;
  }
  param_1[1] = puVar1;
  param_1[2] = 0x1c;
  *param_1 = 1;
  return;
}


// ===== 00a6f148  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::pe::export::Export>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::pe::export::Export>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::pe::export::Export>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_00a6f7dc(&local_38,*param_1,param_1[1],uVar1,8,0x40);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a6f1b0  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::macho::exports_trie::Frame>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::macho::exports_trie::Frame>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<object::read::macho::exports_trie::Frame>>::grow_one
          (ulong *param_1)

{
  ulong uVar1;
  long local_38;
  ulong local_30;
  undefined8 uStack_28;
  
  uVar1 = *param_1 * 2;
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  FUN_00a6f7dc(&local_38,*param_1,param_1[1],uVar1,8,0x20);
  if (local_38 != 1) {
    *param_1 = uVar1;
    param_1[1] = local_30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(local_30,uStack_28);
}


// ===== 00a6f218  <object::read::pe::import::[4]::object::read::pe::import::DelayLoadImportTable>::name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::[4]::object::read::pe::import::DelayLoadImportTable>::name */

void __rustcall
<object::read::pe::import::[4]::object::read::pe::import::DelayLoadImportTable>::name
          (undefined8 *param_1,long *param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar9 = param_2[1];
  uVar8 = (ulong)(uint)(param_3 - (int)param_2[2]);
  uVar6 = uVar9 - uVar8;
  if ((uVar8 <= uVar9) && (uVar6 != 0)) {
    lVar10 = *param_2;
    pauVar1 = (undefined1 (*) [16])(lVar10 + uVar8);
    pauVar2 = (undefined1 (*) [16])(lVar10 + uVar9);
    if (uVar6 < 0x10) {
      pauVar7 = pauVar1;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        if ((*pauVar7)[0] == '\0') goto LAB_00a6f2fc;
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 1);
      }
      if (uVar8 - uVar9 < 0xfffffffffffffffd) {
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + 3);
        do {
          if (pauVar7[-1][0xd] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-3 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if (pauVar7[-1][0xe] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-2 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if (pauVar7[-1][0xf] == '\0') {
            param_1[1] = pauVar1;
            param_1[2] = (undefined1 *)((long)pauVar7 + (-1 - (long)pauVar1));
            *param_1 = 0;
            return;
          }
          if ((*pauVar7)[0] == '\0') goto LAB_00a6f2fc;
          puVar4 = *pauVar7;
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + 4);
        } while ((undefined1 (*) [16])(puVar4 + 1) != pauVar2);
      }
    }
    else {
      auVar11 = NEON_cmeq(*pauVar1,0,1);
      uVar9 = CONCAT17((char)(auVar11._14_2_ >> 4),
                       CONCAT16((char)(auVar11._12_2_ >> 4),
                                CONCAT15((char)(auVar11._10_2_ >> 4),
                                         CONCAT14((char)(auVar11._8_2_ >> 4),
                                                  CONCAT13((char)(auVar11._6_2_ >> 4),
                                                           CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar11._2_2_ >>
                                                                                   4),(char)(auVar11
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar9 != 0) {
        uVar9 = uVar9 >> 3;
        uVar6 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        pauVar7 = (undefined1 (*) [16])
                  (*pauVar1 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2));
LAB_00a6f2fc:
        param_1[1] = pauVar1;
        param_1[2] = (long)pauVar7 - (long)pauVar1;
        *param_1 = 0;
        return;
      }
      uVar9 = 0x10 - ((ulong)pauVar1 & 0xf);
      pauVar7 = (undefined1 (*) [16])((long)pauVar1 + uVar9);
      if ((0x3f < uVar6) && (uVar9 <= uVar6 - 0x40)) {
        pauVar5 = (undefined1 (*) [16])((uVar8 - ((ulong)pauVar1 & 0xf)) + lVar10 + 0x20);
        do {
          pauVar7 = pauVar5;
          uVar3 = *(undefined8 *)(pauVar7[2] + 8);
          auVar14 = NEON_cmeq(pauVar7[-1],0,1);
          auVar13 = NEON_cmeq(*pauVar7,0,1);
          auVar12 = NEON_cmeq(pauVar7[1],0,1);
          auVar11[9] = (char)((ulong)uVar3 >> 8);
          auVar11._0_9_ = *(unkbyte9 *)pauVar7[2];
          auVar11[10] = (char)((ulong)uVar3 >> 0x10);
          auVar11[0xb] = (char)((ulong)uVar3 >> 0x18);
          auVar11[0xc] = (char)((ulong)uVar3 >> 0x20);
          auVar11[0xd] = (char)((ulong)uVar3 >> 0x28);
          auVar11[0xe] = (char)((ulong)uVar3 >> 0x30);
          auVar11[0xf] = (char)((ulong)uVar3 >> 0x38);
          auVar11 = NEON_cmeq(auVar11,0,1);
          auVar15[0] = auVar13[0] | auVar14[0] | auVar12[0] | auVar11[0];
          auVar15[1] = auVar13[1] | auVar14[1] | auVar12[1] | auVar11[1];
          auVar15[2] = auVar13[2] | auVar14[2] | auVar12[2] | auVar11[2];
          auVar15[3] = auVar13[3] | auVar14[3] | auVar12[3] | auVar11[3];
          auVar15[4] = auVar13[4] | auVar14[4] | auVar12[4] | auVar11[4];
          auVar15[5] = auVar13[5] | auVar14[5] | auVar12[5] | auVar11[5];
          auVar15[6] = auVar13[6] | auVar14[6] | auVar12[6] | auVar11[6];
          auVar15[7] = auVar13[7] | auVar14[7] | auVar12[7] | auVar11[7];
          auVar15[8] = auVar13[8] | auVar14[8] | auVar12[8] | auVar11[8];
          auVar15[9] = auVar13[9] | auVar14[9] | auVar12[9] | auVar11[9];
          auVar15[10] = auVar13[10] | auVar14[10] | auVar12[10] | auVar11[10];
          auVar15[0xb] = auVar13[0xb] | auVar14[0xb] | auVar12[0xb] | auVar11[0xb];
          auVar15[0xc] = auVar13[0xc] | auVar14[0xc] | auVar12[0xc] | auVar11[0xc];
          auVar15[0xd] = auVar13[0xd] | auVar14[0xd] | auVar12[0xd] | auVar11[0xd];
          auVar15[0xe] = auVar13[0xe] | auVar14[0xe] | auVar12[0xe] | auVar11[0xe];
          auVar15[0xf] = auVar13[0xf] | auVar14[0xf] | auVar12[0xf] | auVar11[0xf];
          auVar15 = NEON_umaxp(auVar15,auVar15,1);
          if (auVar15._0_8_ != 0) {
            uVar6 = CONCAT17((char)(auVar14._14_2_ >> 4),
                             CONCAT16((char)(auVar14._12_2_ >> 4),
                                      CONCAT15((char)(auVar14._10_2_ >> 4),
                                               CONCAT14((char)(auVar14._8_2_ >> 4),
                                                        CONCAT13((char)(auVar14._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar14._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar14.
                                                  _2_2_ >> 4),(char)(auVar14._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar6 != 0) {
              uVar6 = uVar6 >> 3;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              param_1[1] = pauVar1;
              param_1[2] = (undefined1 *)
                           ((long)pauVar7 +
                           ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) - 0x10) -
                           (long)pauVar1));
              *param_1 = 0;
              return;
            }
            uVar6 = CONCAT17((char)(auVar13._14_2_ >> 4),
                             CONCAT16((char)(auVar13._12_2_ >> 4),
                                      CONCAT15((char)(auVar13._10_2_ >> 4),
                                               CONCAT14((char)(auVar13._8_2_ >> 4),
                                                        CONCAT13((char)(auVar13._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar13._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar13.
                                                  _2_2_ >> 4),(char)(auVar13._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar6 == 0) {
              uVar6 = CONCAT17((char)(auVar12._14_2_ >> 4),
                               CONCAT16((char)(auVar12._12_2_ >> 4),
                                        CONCAT15((char)(auVar12._10_2_ >> 4),
                                                 CONCAT14((char)(auVar12._8_2_ >> 4),
                                                          CONCAT13((char)(auVar12._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar12._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar12._2_2_ >> 4),(char)(auVar12._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar6 == 0) {
                uVar6 = (CONCAT17((char)(auVar11._14_2_ >> 4),
                                  CONCAT16((char)(auVar11._12_2_ >> 4),
                                           CONCAT15((char)(auVar11._10_2_ >> 4),
                                                    CONCAT14((char)(auVar11._8_2_ >> 4),
                                                             CONCAT13((char)(auVar11._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar11._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar11._2_2_ >> 4),(char)(auVar11._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                param_1[1] = pauVar1;
                param_1[2] = (undefined1 *)
                             ((long)pauVar7 +
                             ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) + 0x20) -
                             (long)pauVar1));
                *param_1 = 0;
                return;
              }
              uVar6 = uVar6 >> 3;
              uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
              uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
              param_1[1] = pauVar1;
              param_1[2] = (undefined1 *)
                           ((long)pauVar7 +
                           ((((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) + 0x10) -
                           (long)pauVar1));
              *param_1 = 0;
              return;
            }
            uVar6 = uVar6 >> 3;
            uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
            uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
            uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
            goto LAB_00a6f47c;
          }
          pauVar5 = pauVar7 + 4;
        } while (pauVar7 + 3 <= pauVar2 + -4);
        pauVar7 = pauVar7 + 3;
      }
      for (; pauVar7 <= pauVar2 + -1; pauVar7 = pauVar7 + 1) {
        auVar11 = NEON_cmeq(*pauVar7,0,1);
        uVar6 = CONCAT17((char)(auVar11._14_2_ >> 4),
                         CONCAT16((char)(auVar11._12_2_ >> 4),
                                  CONCAT15((char)(auVar11._10_2_ >> 4),
                                           CONCAT14((char)(auVar11._8_2_ >> 4),
                                                    CONCAT13((char)(auVar11._6_2_ >> 4),
                                                             CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar11._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar11._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar6 != 0) {
          uVar6 = uVar6 >> 3;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
LAB_00a6f47c:
          param_1[1] = pauVar1;
          param_1[2] = (undefined1 *)
                       ((long)pauVar7 + (((ulong)LZCOUNT(uVar6) >> 2) - (long)pauVar1));
          *param_1 = 0;
          return;
        }
      }
      if (pauVar7 < pauVar2) {
        auVar11 = NEON_cmeq(pauVar2[-1],0,1);
        uVar6 = CONCAT17((char)(auVar11._14_2_ >> 4),
                         CONCAT16((char)(auVar11._12_2_ >> 4),
                                  CONCAT15((char)(auVar11._10_2_ >> 4),
                                           CONCAT14((char)(auVar11._8_2_ >> 4),
                                                    CONCAT13((char)(auVar11._6_2_ >> 4),
                                                             CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar11._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar11._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar6 != 0) {
          uVar6 = uVar6 >> 3;
          uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
          uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
          param_1[1] = pauVar1;
          param_1[2] = (long)(pauVar2 + -1) +
                       (((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 2) - (long)pauVar1);
          *param_1 = 0;
          return;
        }
      }
    }
  }
  param_1[1] = &DAT_00383d83;
  param_1[2] = 0x21;
  *param_1 = 1;
  return;
}


// ===== 00a6f4f0  <object::read::pe::import::[4]::object::read::pe::import::DelayLoadImportTable>::hint_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::[4]::object::read::pe::import::DelayLoadImportTable>::hint_name */

void __rustcall
<object::read::pe::import::[4]::object::read::pe::import::DelayLoadImportTable>::hint_name
          (undefined8 *param_1,long *param_2,int param_3)

{
  undefined1 (*pauVar1) [16];
  undefined2 *puVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar4 = param_2[1];
  uVar9 = (ulong)(uint)(param_3 - (int)param_2[2]);
  uVar5 = uVar4 - uVar9;
  if (uVar4 < uVar9) {
    param_1[1] = &DAT_00384157;
    param_1[2] = 0x2a;
    *param_1 = 1;
    return;
  }
  if (uVar5 < 2) {
    puVar8 = &DAT_00384130;
    goto LAB_00a6f714;
  }
  if (uVar5 - 2 != 0) {
    lVar11 = *param_2;
    pauVar1 = (undefined1 (*) [16])(lVar11 + uVar4);
    pauVar3 = (undefined1 (*) [16])((undefined2 *)(lVar11 + uVar9) + 1);
    if (uVar5 < 0x12) {
      pauVar7 = pauVar3;
      for (uVar4 = uVar5 - 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((*pauVar7)[0] == '\0') goto LAB_00a6f604;
        pauVar7 = (undefined1 (*) [16])((long)*pauVar7 + 1);
      }
      if (2 < uVar5 - 3) {
        pauVar7 = (undefined1 (*) [16])((long)*pauVar7 + 3);
        pauVar6 = (undefined1 (*) [16])&DAT_00384109;
        uVar10 = 1;
        lVar12 = 0x27;
        lVar13 = 0x10;
        lVar14 = 8;
        do {
          if (*(char *)((long)pauVar7[-1] + 0xd) == '\0') {
            pauVar7 = (undefined1 (*) [16])((long)pauVar7[-1] + 0xd);
            goto LAB_00a6f604;
          }
          if (*(char *)((long)pauVar7[-1] + 0xe) == '\0') {
            pauVar7 = (undefined1 (*) [16])((long)pauVar7[-1] + 0xe);
            goto LAB_00a6f604;
          }
          if (*(char *)((long)pauVar7[-1] + 0xf) == '\0') {
            pauVar7 = (undefined1 (*) [16])((long)pauVar7[-1] + 0xf);
            goto LAB_00a6f604;
          }
          if ((*pauVar7)[0] == '\0') goto LAB_00a6f604;
          puVar2 = (undefined2 *)*pauVar7;
          pauVar7 = (undefined1 (*) [16])((long)*pauVar7 + 4);
        } while ((undefined1 (*) [16])((long)puVar2 + 1) != pauVar1);
        goto LAB_00a6f620;
      }
    }
    else {
      auVar15 = NEON_cmeq(*pauVar3,0,1);
      uVar4 = CONCAT17((char)(auVar15._14_2_ >> 4),
                       CONCAT16((char)(auVar15._12_2_ >> 4),
                                CONCAT15((char)(auVar15._10_2_ >> 4),
                                         CONCAT14((char)(auVar15._8_2_ >> 4),
                                                  CONCAT13((char)(auVar15._6_2_ >> 4),
                                                           CONCAT12((char)(auVar15._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar15._2_2_ >>
                                                                                   4),(char)(auVar15
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar4 == 0) {
        uVar4 = 0x10 - ((ulong)pauVar3 & 0xf);
        pauVar7 = (undefined1 (*) [16])((long)pauVar3 + uVar4);
        if ((0x41 < uVar5) && (uVar4 <= uVar5 - 0x42)) {
          pauVar6 = (undefined1 (*) [16])((uVar9 - ((ulong)pauVar3 & 0xf)) + lVar11 + 0x22);
          do {
            pauVar7 = pauVar6;
            uVar10 = *(undefined8 *)(pauVar7[2] + 8);
            auVar18 = NEON_cmeq(pauVar7[-1],0,1);
            auVar17 = NEON_cmeq(*pauVar7,0,1);
            auVar16 = NEON_cmeq(pauVar7[1],0,1);
            auVar15[9] = (char)((ulong)uVar10 >> 8);
            auVar15._0_9_ = *(unkbyte9 *)pauVar7[2];
            auVar15[10] = (char)((ulong)uVar10 >> 0x10);
            auVar15[0xb] = (char)((ulong)uVar10 >> 0x18);
            auVar15[0xc] = (char)((ulong)uVar10 >> 0x20);
            auVar15[0xd] = (char)((ulong)uVar10 >> 0x28);
            auVar15[0xe] = (char)((ulong)uVar10 >> 0x30);
            auVar15[0xf] = (char)((ulong)uVar10 >> 0x38);
            auVar15 = NEON_cmeq(auVar15,0,1);
            auVar19[0] = auVar17[0] | auVar18[0] | auVar16[0] | auVar15[0];
            auVar19[1] = auVar17[1] | auVar18[1] | auVar16[1] | auVar15[1];
            auVar19[2] = auVar17[2] | auVar18[2] | auVar16[2] | auVar15[2];
            auVar19[3] = auVar17[3] | auVar18[3] | auVar16[3] | auVar15[3];
            auVar19[4] = auVar17[4] | auVar18[4] | auVar16[4] | auVar15[4];
            auVar19[5] = auVar17[5] | auVar18[5] | auVar16[5] | auVar15[5];
            auVar19[6] = auVar17[6] | auVar18[6] | auVar16[6] | auVar15[6];
            auVar19[7] = auVar17[7] | auVar18[7] | auVar16[7] | auVar15[7];
            auVar19[8] = auVar17[8] | auVar18[8] | auVar16[8] | auVar15[8];
            auVar19[9] = auVar17[9] | auVar18[9] | auVar16[9] | auVar15[9];
            auVar19[10] = auVar17[10] | auVar18[10] | auVar16[10] | auVar15[10];
            auVar19[0xb] = auVar17[0xb] | auVar18[0xb] | auVar16[0xb] | auVar15[0xb];
            auVar19[0xc] = auVar17[0xc] | auVar18[0xc] | auVar16[0xc] | auVar15[0xc];
            auVar19[0xd] = auVar17[0xd] | auVar18[0xd] | auVar16[0xd] | auVar15[0xd];
            auVar19[0xe] = auVar17[0xe] | auVar18[0xe] | auVar16[0xe] | auVar15[0xe];
            auVar19[0xf] = auVar17[0xf] | auVar18[0xf] | auVar16[0xf] | auVar15[0xf];
            auVar19 = NEON_umaxp(auVar19,auVar19,1);
            if (auVar19._0_8_ != 0) {
              uVar5 = CONCAT17((char)(auVar18._14_2_ >> 4),
                               CONCAT16((char)(auVar18._12_2_ >> 4),
                                        CONCAT15((char)(auVar18._10_2_ >> 4),
                                                 CONCAT14((char)(auVar18._8_2_ >> 4),
                                                          CONCAT13((char)(auVar18._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar18._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar18._2_2_ >> 4),(char)(auVar18._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar5 != 0) {
                uVar5 = uVar5 >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                pauVar7 = (undefined1 (*) [16])
                          (pauVar7[-1] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
                goto LAB_00a6f604;
              }
              uVar5 = CONCAT17((char)(auVar17._14_2_ >> 4),
                               CONCAT16((char)(auVar17._12_2_ >> 4),
                                        CONCAT15((char)(auVar17._10_2_ >> 4),
                                                 CONCAT14((char)(auVar17._8_2_ >> 4),
                                                          CONCAT13((char)(auVar17._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar17._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar17._2_2_ >> 4),(char)(auVar17._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar5 != 0) {
                uVar5 = uVar5 >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
                goto LAB_00a6f78c;
              }
              uVar5 = CONCAT17((char)(auVar16._14_2_ >> 4),
                               CONCAT16((char)(auVar16._12_2_ >> 4),
                                        CONCAT15((char)(auVar16._10_2_ >> 4),
                                                 CONCAT14((char)(auVar16._8_2_ >> 4),
                                                          CONCAT13((char)(auVar16._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar16._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar16._2_2_ >> 4),(char)(auVar16._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar5 == 0) {
                uVar5 = (CONCAT17((char)(auVar15._14_2_ >> 4),
                                  CONCAT16((char)(auVar15._12_2_ >> 4),
                                           CONCAT15((char)(auVar15._10_2_ >> 4),
                                                    CONCAT14((char)(auVar15._8_2_ >> 4),
                                                             CONCAT13((char)(auVar15._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar15._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar15._2_2_ >> 4),(char)(auVar15._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                pauVar7 = (undefined1 (*) [16])
                          (pauVar7[2] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
              }
              else {
                uVar5 = uVar5 >> 3;
                uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
                uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
                pauVar7 = (undefined1 (*) [16])
                          (pauVar7[1] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
              }
              goto LAB_00a6f604;
            }
            pauVar6 = pauVar7 + 4;
          } while (pauVar7 + 3 <= pauVar1 + -4);
          pauVar7 = pauVar7 + 3;
        }
        if (pauVar7 <= pauVar1 + -1) {
LAB_00a6f6b8:
          auVar15 = NEON_cmeq(*pauVar7,0,1);
          uVar5 = CONCAT17((char)(auVar15._14_2_ >> 4),
                           CONCAT16((char)(auVar15._12_2_ >> 4),
                                    CONCAT15((char)(auVar15._10_2_ >> 4),
                                             CONCAT14((char)(auVar15._8_2_ >> 4),
                                                      CONCAT13((char)(auVar15._6_2_ >> 4),
                                                               CONCAT12((char)(auVar15._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar15.
                                                  _2_2_ >> 4),(char)(auVar15._0_2_ >> 4)))))))) &
                  0x8888888888888888;
          if (uVar5 == 0) goto code_r0x00a6f6d0;
          uVar5 = uVar5 >> 3;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
LAB_00a6f78c:
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + ((ulong)LZCOUNT(uVar5) >> 2));
          goto LAB_00a6f604;
        }
LAB_00a6f6dc:
        if (pauVar7 < pauVar1) {
          auVar15 = NEON_cmeq(pauVar1[-1],0,1);
          uVar5 = CONCAT17((char)(auVar15._14_2_ >> 4),
                           CONCAT16((char)(auVar15._12_2_ >> 4),
                                    CONCAT15((char)(auVar15._10_2_ >> 4),
                                             CONCAT14((char)(auVar15._8_2_ >> 4),
                                                      CONCAT13((char)(auVar15._6_2_ >> 4),
                                                               CONCAT12((char)(auVar15._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar15.
                                                  _2_2_ >> 4),(char)(auVar15._0_2_ >> 4)))))))) &
                  0x8888888888888888;
          if (uVar5 != 0) {
            uVar5 = uVar5 >> 3;
            uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
            uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
            pauVar7 = (undefined1 (*) [16])
                      (pauVar1[-1] + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
            goto LAB_00a6f604;
          }
        }
      }
      else {
        uVar4 = uVar4 >> 3;
        uVar5 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        pauVar7 = (undefined1 (*) [16])
                  ((long)*pauVar3 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 2));
LAB_00a6f604:
        lVar12 = (long)pauVar7 - (long)pauVar3;
        if (lVar12 != 0) {
          uVar10 = 0;
          lVar13 = 0x18;
          lVar14 = 0x10;
          *(undefined2 *)(param_1 + 1) = *(undefined2 *)(lVar11 + uVar9);
          pauVar6 = pauVar3;
LAB_00a6f620:
          *(undefined1 (**) [16])((long)param_1 + lVar14) = pauVar6;
          *(long *)((long)param_1 + lVar13) = lVar12;
          *param_1 = uVar10;
          return;
        }
      }
    }
  }
  puVar8 = &DAT_00384109;
LAB_00a6f714:
  param_1[1] = puVar8;
  param_1[2] = 0x27;
  *param_1 = 1;
  return;
code_r0x00a6f6d0:
  pauVar7 = pauVar7 + 1;
  if (pauVar1 + -1 < pauVar7) goto LAB_00a6f6dc;
  goto LAB_00a6f6b8;
}


// ===== 00a6f7dc  FUN_00a6f7dc =====

void FUN_00a6f7dc(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 ulong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  lVar5 = 8;
  uVar3 = 1;
  uVar4 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_4 = param_6 * param_4,
     0x8000000000000000U - param_5 <= param_4 && param_4 - (0x8000000000000000U - param_5) != 0))
  goto LAB_00a6f878;
  if (param_2 == 0) {
    lVar5 = param_5;
    if (param_4 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar5 = FUN_004b25a4(param_4,param_5);
      if (lVar5 == 0) goto LAB_00a6f858;
    }
LAB_00a6f868:
    uVar3 = 0;
    param_1[1] = lVar5;
  }
  else {
    lVar5 = FUN_004b2600(param_3,param_6 * param_2,param_5,param_4);
    if (lVar5 != 0) goto LAB_00a6f868;
LAB_00a6f858:
    uVar3 = 1;
    param_1[1] = param_5;
  }
  lVar5 = 0x10;
  uVar4 = param_4;
LAB_00a6f878:
  *(ulong *)((long)param_1 + lVar5) = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 00a6f890  <object::read::pe::import::[5]::object::read::pe::import::DelayLoadDescriptorIterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::[5]::object::read::pe::import::DelayLoadDescriptorIterator>::next */

void __rustcall
<object::read::pe::import::[5]::object::read::pe::import::DelayLoadDescriptorIterator>::next
          (undefined8 *param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2[1] < 0x20) {
    *param_2 = 1;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    *param_1 = &DAT_00384181;
    param_1[1] = 0x2c;
    return;
  }
  pauVar1 = (undefined1 (*) [16])*param_2;
  auVar3 = *pauVar1;
  *param_2 = (long)(pauVar1 + 2);
  param_2[1] = param_2[1] - 0x20;
  auVar3 = NEON_cmtst(auVar3,auVar3,4);
  uVar2 = NEON_umaxv(auVar3,4);
  if (((((uVar2 & 1) == 0) && (*(int *)(pauVar1[1] + 4) == 0 && *(int *)pauVar1[1] == 0)) &&
      (*(int *)(pauVar1[1] + 8) == 0)) && (*(int *)(pauVar1[1] + 0xc) == 0)) {
    *(undefined1 *)(param_2 + 2) = 1;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = pauVar1;
  return;
}


// ===== 00a6f920  <object::read::elf::attributes::[5]::object::read::elf::attributes::AttributeIndexIterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::attributes::[5]::object::read::elf::attributes::AttributeIndexIterator>::next
    */

void __rustcall
<object::read::elf::attributes::[5]::object::read::elf::attributes::AttributeIndexIterator>::next
          (undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  if (param_2[1] == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  uVar2 = 0;
  uVar5 = 0;
  lVar3 = 1 - param_2[1];
  pbVar4 = (byte *)*param_2;
  while( true ) {
    bVar1 = *pbVar4;
    if (((int)uVar5 == 0x3f) && (1 < bVar1)) goto LAB_00a6f998;
    uVar2 = ((ulong)bVar1 & 0x7f) << (uVar5 & 0x3f) | uVar2;
    if (-1 < (char)bVar1) break;
    lVar3 = lVar3 + 1;
    uVar5 = (ulong)((int)uVar5 + 7);
    pbVar4 = pbVar4 + 1;
    if (lVar3 == 1) {
LAB_00a6f998:
      *param_1 = &DAT_003841ad;
      param_1[1] = 0x1b;
      *param_2 = 1;
      param_2[1] = 0;
      return;
    }
  }
  *param_2 = pbVar4 + 1;
  param_2[1] = -lVar3;
  if (uVar2 >> 0x20 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    *(int *)((long)param_1 + 0xc) = (int)uVar2;
    return;
  }
  goto LAB_00a6f998;
}


// ===== 00a6f9c4  <object::read::pe::section::[6]::object::read::coff::section::SectionTable>::pe_file_range_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::section::[6]::object::read::coff::section::SectionTable>::pe_file_range_at */

void __rustcall
<object::read::pe::section::[6]::object::read::coff::section::SectionTable>::pe_file_range_at
          (undefined4 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    lVar4 = *param_2;
    uVar1 = param_3 - *(uint *)(lVar4 + 0xc);
    if (*(uint *)(lVar4 + 0xc) <= param_3) {
      uVar5 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 8) <= *(uint *)(lVar4 + 0x10)) {
        uVar5 = *(uint *)(lVar4 + 8);
      }
      if ((uVar1 < uVar5) &&
         (iVar6 = *(uint *)(lVar4 + 0x14) + uVar1, !CARRY4(*(uint *)(lVar4 + 0x14),uVar1))) {
LAB_00a6fa68:
        param_1[1] = iVar6;
        param_1[2] = uVar5 - uVar1;
        *param_1 = 1;
        return;
      }
    }
    if (lVar2 != 1) {
      puVar3 = (uint *)(lVar4 + 0x3c);
      lVar2 = lVar2 * 0x28 + -0x28;
      do {
        uVar1 = param_3 - puVar3[-2];
        if (puVar3[-2] <= param_3) {
          uVar5 = puVar3[-1];
          if (puVar3[-3] <= puVar3[-1]) {
            uVar5 = puVar3[-3];
          }
          if ((uVar1 < uVar5) && (iVar6 = *puVar3 + uVar1, !CARRY4(*puVar3,uVar1)))
          goto LAB_00a6fa68;
        }
        lVar2 = lVar2 + -0x28;
        puVar3 = puVar3 + 10;
      } while (lVar2 != 0);
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00a6fa7c  <object::read::pe::section::[6]::object::read::coff::section::SectionTable>::section_containing =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::section::[6]::object::read::coff::section::SectionTable>::section_containing
    */

long __rustcall
<object::read::pe::section::[6]::object::read::coff::section::SectionTable>::section_containing
          (long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = param_1[1] * 0x28;
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 - *(uint *)(lVar1 + 0xc) < *(uint *)(lVar1 + 8))) {
        return lVar1;
      }
      lVar2 = lVar2 + -0x28;
      lVar1 = lVar1 + 0x28;
    } while (lVar2 != 0);
  }
  return 0;
}


// ===== 00a6fac4  <object::read::pe::section::[7]::object::pe::ImageSectionHeader>::pe_file_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::section::[7]::object::pe::ImageSectionHeader>::pe_file_range */

undefined4 __rustcall
<object::read::pe::section::[7]::object::pe::ImageSectionHeader>::pe_file_range(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


// ===== 00a6fad8  <object::read::pe::section::[7]::object::pe::ImageSectionHeader>::pe_file_range_at =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::section::[7]::object::pe::ImageSectionHeader>::pe_file_range_at */

void __rustcall
<object::read::pe::section::[7]::object::pe::ImageSectionHeader>::pe_file_range_at
          (undefined4 *param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 - *(uint *)(param_2 + 0xc);
  if (*(uint *)(param_2 + 0xc) <= param_3) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if (*(uint *)(param_2 + 8) <= *(uint *)(param_2 + 0x10)) {
      uVar1 = *(uint *)(param_2 + 8);
    }
    if ((uVar2 <= uVar1 && uVar1 - uVar2 != 0) && (!CARRY4(*(uint *)(param_2 + 0x14),uVar2))) {
      param_1[1] = *(uint *)(param_2 + 0x14) + uVar2;
      param_1[2] = uVar1 - uVar2;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00a6fb20  <object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_string
    */

void __rustcall
<object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_string
          (undefined8 *param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar6 = param_2[1];
  if (uVar6 == 0) {
LAB_00a6fca0:
    *param_2 = 1;
    param_2[1] = uVar6;
    param_1[1] = &DAT_003841c8;
    param_1[2] = 0x22;
    *param_1 = 1;
    return;
  }
  pauVar5 = (undefined1 (*) [16])*param_2;
  pauVar8 = pauVar5;
  uVar7 = uVar6;
  if (uVar6 < 0x10) {
    while ((*pauVar8)[0] != '\0') {
      uVar7 = uVar7 - 1;
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
      if (uVar7 == 0) {
        *param_2 = 1;
        param_2[1] = 0;
        param_1[1] = &DAT_003841c8;
        param_1[2] = 0x22;
        *param_1 = 1;
        return;
      }
    }
  }
  else {
    auVar9 = NEON_cmeq(*pauVar5,0,1);
    uVar7 = CONCAT17((char)(auVar9._14_2_ >> 4),
                     CONCAT16((char)(auVar9._12_2_ >> 4),
                              CONCAT15((char)(auVar9._10_2_ >> 4),
                                       CONCAT14((char)(auVar9._8_2_ >> 4),
                                                CONCAT13((char)(auVar9._6_2_ >> 4),
                                                         CONCAT12((char)(auVar9._4_2_ >> 4),
                                                                  CONCAT11((char)(auVar9._2_2_ >> 4)
                                                                           ,(char)(auVar9._0_2_ >> 4
                                                                                  )))))))) &
            0x8888888888888888;
    if (uVar7 == 0) {
      uVar7 = 0x10 - ((ulong)pauVar5 & 0xf);
      pauVar1 = (undefined1 (*) [16])(*pauVar5 + uVar6);
      pauVar8 = (undefined1 (*) [16])((long)pauVar5 + uVar7);
      if ((0x3f < uVar6) && (uVar7 <= uVar6 - 0x40)) {
        pauVar4 = (undefined1 (*) [16])((long)pauVar5 + (0x20 - ((ulong)pauVar5 & 0xf)));
        do {
          pauVar8 = pauVar4;
          uVar3 = *(undefined8 *)(pauVar8[2] + 8);
          auVar12 = NEON_cmeq(pauVar8[-1],0,1);
          auVar11 = NEON_cmeq(*pauVar8,0,1);
          auVar10 = NEON_cmeq(pauVar8[1],0,1);
          auVar9[9] = (char)((ulong)uVar3 >> 8);
          auVar9._0_9_ = *(unkbyte9 *)pauVar8[2];
          auVar9[10] = (char)((ulong)uVar3 >> 0x10);
          auVar9[0xb] = (char)((ulong)uVar3 >> 0x18);
          auVar9[0xc] = (char)((ulong)uVar3 >> 0x20);
          auVar9[0xd] = (char)((ulong)uVar3 >> 0x28);
          auVar9[0xe] = (char)((ulong)uVar3 >> 0x30);
          auVar9[0xf] = (char)((ulong)uVar3 >> 0x38);
          auVar9 = NEON_cmeq(auVar9,0,1);
          auVar13[0] = auVar11[0] | auVar12[0] | auVar10[0] | auVar9[0];
          auVar13[1] = auVar11[1] | auVar12[1] | auVar10[1] | auVar9[1];
          auVar13[2] = auVar11[2] | auVar12[2] | auVar10[2] | auVar9[2];
          auVar13[3] = auVar11[3] | auVar12[3] | auVar10[3] | auVar9[3];
          auVar13[4] = auVar11[4] | auVar12[4] | auVar10[4] | auVar9[4];
          auVar13[5] = auVar11[5] | auVar12[5] | auVar10[5] | auVar9[5];
          auVar13[6] = auVar11[6] | auVar12[6] | auVar10[6] | auVar9[6];
          auVar13[7] = auVar11[7] | auVar12[7] | auVar10[7] | auVar9[7];
          auVar13[8] = auVar11[8] | auVar12[8] | auVar10[8] | auVar9[8];
          auVar13[9] = auVar11[9] | auVar12[9] | auVar10[9] | auVar9[9];
          auVar13[10] = auVar11[10] | auVar12[10] | auVar10[10] | auVar9[10];
          auVar13[0xb] = auVar11[0xb] | auVar12[0xb] | auVar10[0xb] | auVar9[0xb];
          auVar13[0xc] = auVar11[0xc] | auVar12[0xc] | auVar10[0xc] | auVar9[0xc];
          auVar13[0xd] = auVar11[0xd] | auVar12[0xd] | auVar10[0xd] | auVar9[0xd];
          auVar13[0xe] = auVar11[0xe] | auVar12[0xe] | auVar10[0xe] | auVar9[0xe];
          auVar13[0xf] = auVar11[0xf] | auVar12[0xf] | auVar10[0xf] | auVar9[0xf];
          auVar13 = NEON_umaxp(auVar13,auVar13,1);
          if (auVar13._0_8_ != 0) {
            uVar7 = CONCAT17((char)(auVar12._14_2_ >> 4),
                             CONCAT16((char)(auVar12._12_2_ >> 4),
                                      CONCAT15((char)(auVar12._10_2_ >> 4),
                                               CONCAT14((char)(auVar12._8_2_ >> 4),
                                                        CONCAT13((char)(auVar12._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar12._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar12.
                                                  _2_2_ >> 4),(char)(auVar12._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar7 != 0) {
              uVar7 = uVar7 >> 3;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              pauVar8 = (undefined1 (*) [16])
                        (pauVar8[-1] + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
              goto LAB_00a6fb9c;
            }
            uVar7 = CONCAT17((char)(auVar11._14_2_ >> 4),
                             CONCAT16((char)(auVar11._12_2_ >> 4),
                                      CONCAT15((char)(auVar11._10_2_ >> 4),
                                               CONCAT14((char)(auVar11._8_2_ >> 4),
                                                        CONCAT13((char)(auVar11._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar11._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar11.
                                                  _2_2_ >> 4),(char)(auVar11._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar7 != 0) {
              uVar7 = uVar7 >> 3;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
              goto LAB_00a6fd04;
            }
            uVar7 = CONCAT17((char)(auVar10._14_2_ >> 4),
                             CONCAT16((char)(auVar10._12_2_ >> 4),
                                      CONCAT15((char)(auVar10._10_2_ >> 4),
                                               CONCAT14((char)(auVar10._8_2_ >> 4),
                                                        CONCAT13((char)(auVar10._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar10._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar10.
                                                  _2_2_ >> 4),(char)(auVar10._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar7 == 0) {
              uVar7 = (CONCAT17((char)(auVar9._14_2_ >> 4),
                                CONCAT16((char)(auVar9._12_2_ >> 4),
                                         CONCAT15((char)(auVar9._10_2_ >> 4),
                                                  CONCAT14((char)(auVar9._8_2_ >> 4),
                                                           CONCAT13((char)(auVar9._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar9._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar9._2_2_ >> 4),(char)(auVar9._0_2_ >> 4)))))
                                                 ))) & 0x8888888888888888) >> 3;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              pauVar8 = (undefined1 (*) [16])
                        (pauVar8[2] + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
            }
            else {
              uVar7 = uVar7 >> 3;
              uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
              uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
              pauVar8 = (undefined1 (*) [16])
                        (pauVar8[1] + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
            }
            goto LAB_00a6fb9c;
          }
          pauVar4 = pauVar8 + 4;
        } while (pauVar8 + 3 <= pauVar1 + -4);
        pauVar8 = pauVar8 + 3;
      }
      for (; pauVar8 <= pauVar1 + -1; pauVar8 = pauVar8 + 1) {
        auVar9 = NEON_cmeq(*pauVar8,0,1);
        uVar7 = CONCAT17((char)(auVar9._14_2_ >> 4),
                         CONCAT16((char)(auVar9._12_2_ >> 4),
                                  CONCAT15((char)(auVar9._10_2_ >> 4),
                                           CONCAT14((char)(auVar9._8_2_ >> 4),
                                                    CONCAT13((char)(auVar9._6_2_ >> 4),
                                                             CONCAT12((char)(auVar9._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar9._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar9._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar7 != 0) {
          uVar7 = uVar7 >> 3;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
LAB_00a6fd04:
          pauVar8 = (undefined1 (*) [16])(*pauVar8 + ((ulong)LZCOUNT(uVar7) >> 2));
          goto LAB_00a6fb9c;
        }
      }
      if (pauVar8 < pauVar1) {
        auVar9 = NEON_cmeq(pauVar1[-1],0,1);
        uVar7 = CONCAT17((char)(auVar9._14_2_ >> 4),
                         CONCAT16((char)(auVar9._12_2_ >> 4),
                                  CONCAT15((char)(auVar9._10_2_ >> 4),
                                           CONCAT14((char)(auVar9._8_2_ >> 4),
                                                    CONCAT13((char)(auVar9._6_2_ >> 4),
                                                             CONCAT12((char)(auVar9._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar9._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar9._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar7 != 0) {
          uVar7 = uVar7 >> 3;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          pauVar8 = (undefined1 (*) [16])
                    (pauVar1[-1] + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
          goto LAB_00a6fb9c;
        }
      }
      uVar6 = 0;
      goto LAB_00a6fca0;
    }
    uVar7 = uVar7 >> 3;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    pauVar8 = (undefined1 (*) [16])(*pauVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2))
    ;
  }
LAB_00a6fb9c:
  uVar7 = (long)pauVar8 - (long)pauVar5;
  lVar2 = 0;
  if (uVar7 <= uVar6) {
    lVar2 = uVar6 - uVar7;
  }
  *param_2 = (long)(*pauVar8 + 1);
  param_2[1] = lVar2 + -1;
  param_1[1] = pauVar5;
  param_1[2] = uVar7;
  *param_1 = 0;
  return;
}


// ===== 00a6fd54  <object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_integer =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_integer
    */

void __rustcall
<object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_integer
          (undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_2[1];
  uVar5 = 0;
  uVar4 = 0;
  pbVar3 = (byte *)*param_2;
  while( true ) {
    lVar6 = lVar6 + -1;
    if (lVar6 == -1) {
      *param_2 = 1;
      param_2[1] = 0;
      *param_1 = &DAT_003841ea;
      param_1[1] = 0x23;
      return;
    }
    bVar1 = *pbVar3;
    *param_2 = pbVar3 + 1;
    param_2[1] = lVar6;
    if (((int)uVar5 == 0x3f) && (1 < bVar1)) break;
    uVar2 = uVar5 & 0x3f;
    uVar5 = (ulong)((int)uVar5 + 7);
    uVar4 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar4;
    pbVar3 = pbVar3 + 1;
    if (-1 < (char)bVar1) {
      *param_1 = 0;
      param_1[1] = uVar4;
      return;
    }
  }
  *param_1 = &DAT_003841ea;
  param_1[1] = 0x23;
  return;
}


// ===== 00a6fde0  <object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_tag =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_tag */

void __rustcall
<object::read::elf::attributes::[7]::object::read::elf::attributes::AttributeReader>::read_tag
          (undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  if (param_2[1] == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  uVar2 = 0;
  uVar6 = 0;
  lVar3 = param_2[1] + -1;
  pbVar5 = (byte *)*param_2;
  do {
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    if (((int)uVar6 == 0x3f) && (1 < bVar1)) goto LAB_00a6fe3c;
    uVar2 = ((ulong)bVar1 & 0x7f) << (uVar6 & 0x3f) | uVar2;
    if (-1 < (char)bVar1) {
      *param_2 = pbVar4;
      param_2[1] = lVar3;
      param_1[1] = 1;
      param_1[2] = uVar2;
      *param_1 = 0;
      return;
    }
    lVar3 = lVar3 + -1;
    uVar6 = (ulong)((int)uVar6 + 7);
    pbVar5 = pbVar4;
  } while (lVar3 != -1);
  lVar3 = 0;
  pbVar4 = &DAT_00000001;
LAB_00a6fe3c:
  *param_2 = pbVar4;
  param_2[1] = lVar3;
  param_1[1] = &DAT_0038420d;
  param_1[2] = 0x19;
  *param_1 = 1;
  return;
}


// ===== 00a6fe90  <object::read::coff::section::[8]::object::pe::ImageSectionHeader>::name_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::coff::section::[8]::object::pe::ImageSectionHeader>::name_offset */

void __rustcall
<object::read::coff::section::[8]::object::pe::ImageSectionHeader>::name_offset
          (undefined8 *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*param_2 != '/') {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  bVar1 = param_2[1];
  if (bVar1 != 0x2f) {
    uVar5 = bVar1 - 0x30;
    if (uVar5 < 10) {
      bVar1 = param_2[2];
      uVar5 = uVar5 & 0xff;
      uVar2 = (uint)bVar1;
      if (uVar2 - 0x30 < 10) {
        bVar1 = param_2[3];
        uVar3 = (uint)bVar1;
        uVar5 = uVar5 * 10 + (uVar2 - 0x30 & 0xff);
        if (uVar3 - 0x30 < 10) {
          bVar1 = param_2[4];
          uVar2 = (uint)bVar1;
          uVar5 = uVar5 * 10 + (uVar3 - 0x30 & 0xff);
          if (uVar2 - 0x30 < 10) {
            bVar1 = param_2[5];
            uVar3 = (uint)bVar1;
            uVar5 = uVar5 * 10 + (uVar2 - 0x30 & 0xff);
            if (uVar3 - 0x30 < 10) {
              bVar1 = param_2[6];
              uVar2 = (uint)bVar1;
              uVar5 = uVar5 * 10 + (uVar3 - 0x30 & 0xff);
              if (uVar2 - 0x30 < 10) {
                bVar1 = param_2[7];
                uVar5 = uVar5 * 10 + (uVar2 - 0x30 & 0xff);
                if (bVar1 - 0x30 < 10) {
                  uVar5 = uVar5 * 10 + (bVar1 - 0x30 & 0xff);
                  goto LAB_00a6ff9c;
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar5 = 0;
    }
    if (bVar1 != 0) {
      *param_1 = &DAT_0038424e;
      param_1[1] = 0x28;
      return;
    }
LAB_00a6ff9c:
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    *(uint *)((long)param_1 + 0xc) = uVar5;
    return;
  }
  bVar1 = param_2[2];
  uVar5 = bVar1 - 0x41;
  uVar4 = (ulong)uVar5;
  if (0x19 < uVar5) {
    uVar5 = (uint)bVar1;
    if (bVar1 - 0x61 < 0x1a) {
      uVar4 = (ulong)(uVar5 - 0x47);
    }
    else if (uVar5 - 0x30 < 10) {
      uVar4 = (ulong)(uVar5 + 4);
    }
    else if (uVar5 == 0x2b) {
      uVar4 = 0x3e;
    }
    else {
      if (uVar5 != 0x2f) goto LAB_00a701b4;
      uVar4 = 0x3f;
    }
  }
  bVar1 = param_2[3];
  uVar5 = bVar1 - 0x41;
  uVar6 = (ulong)uVar5;
  if (0x19 < uVar5) {
    uVar5 = (uint)bVar1;
    if (bVar1 - 0x61 < 0x1a) {
      uVar6 = (ulong)(uVar5 - 0x47);
    }
    else if (uVar5 - 0x30 < 10) {
      uVar6 = (ulong)(uVar5 + 4);
    }
    else if (uVar5 == 0x2b) {
      uVar6 = 0x3e;
    }
    else {
      if (uVar5 != 0x2f) goto LAB_00a701b4;
      uVar6 = 0x3f;
    }
  }
  bVar1 = param_2[4];
  uVar5 = bVar1 - 0x41;
  if (0x19 < uVar5) {
    uVar5 = (uint)bVar1;
    if (bVar1 - 0x61 < 0x1a) {
      uVar5 = uVar5 - 0x47;
    }
    else if (uVar5 - 0x30 < 10) {
      uVar5 = uVar5 + 4;
    }
    else if (uVar5 == 0x2b) {
      uVar5 = 0x3e;
    }
    else {
      if (uVar5 != 0x2f) goto LAB_00a701b4;
      uVar5 = 0x3f;
    }
  }
  bVar1 = param_2[5];
  uVar2 = bVar1 - 0x41;
  uVar7 = (ulong)uVar2;
  if (0x19 < uVar2) {
    uVar2 = (uint)bVar1;
    if (bVar1 - 0x61 < 0x1a) {
      uVar7 = (ulong)(uVar2 - 0x47);
    }
    else if (uVar2 - 0x30 < 10) {
      uVar7 = (ulong)(uVar2 + 4);
    }
    else if (uVar2 == 0x2b) {
      uVar7 = 0x3e;
    }
    else {
      if (uVar2 != 0x2f) goto LAB_00a701b4;
      uVar7 = 0x3f;
    }
  }
  bVar1 = param_2[6];
  uVar2 = bVar1 - 0x41;
  if (0x19 < uVar2) {
    uVar2 = (uint)bVar1;
    if (bVar1 - 0x61 < 0x1a) {
      uVar2 = uVar2 - 0x47;
    }
    else if (uVar2 - 0x30 < 10) {
      uVar2 = uVar2 + 4;
    }
    else if (uVar2 == 0x2b) {
      uVar2 = 0x3e;
    }
    else {
      if (uVar2 != 0x2f) goto LAB_00a701b4;
      uVar2 = 0x3f;
    }
  }
  bVar1 = param_2[7];
  uVar3 = bVar1 - 0x41;
  if (0x19 < uVar3) {
    uVar3 = (uint)bVar1;
    if (bVar1 - 0x61 < 0x1a) {
      uVar3 = uVar3 - 0x47;
    }
    else if (uVar3 - 0x30 < 10) {
      uVar3 = uVar3 + 4;
    }
    else if (uVar3 == 0x2b) {
      uVar3 = 0x3e;
    }
    else {
      if (uVar3 != 0x2f) goto LAB_00a701b4;
      uVar3 = 0x3f;
    }
  }
  uVar4 = (((uVar4 & 0xff) * 0x1000 + (uVar6 & 0xff) * 0x40 + (ulong)(byte)uVar5) * 0x1000 +
           (uVar7 & 0xff) * 0x40 + (ulong)(byte)uVar2) * 0x40 + (ulong)(byte)uVar3;
  if (uVar4 >> 0x20 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    *(int *)((long)param_1 + 0xc) = (int)uVar4;
    return;
  }
LAB_00a701b4:
  *param_1 = &DAT_00384226;
  param_1[1] = 0x28;
  return;
}


// ===== 00a701d8  <object::read::coff::section::[8]::object::pe::ImageSectionHeader>::raw_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::coff::section::[8]::object::pe::ImageSectionHeader>::raw_name */

void __rustcall
<object::read::coff::section::[8]::object::pe::ImageSectionHeader>::raw_name(char *param_1)

{
  if (*param_1 == '\0') {
    return;
  }
  if (param_1[1] == '\0') {
    return;
  }
  if (param_1[2] == '\0') {
    return;
  }
  if (param_1[3] != '\0') {
    if (param_1[4] == '\0') {
      return;
    }
    if (param_1[5] != '\0') {
      if (param_1[6] != '\0') {
        return;
      }
      return;
    }
    return;
  }
  return;
}


// ===== 00a7025c  <object::read::util::object::read::util::Bytes>::read_sleb128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::util::object::read::util::Bytes>::read_sleb128 */

undefined1  [16] __rustcall
<object::read::util::object::read::util::Bytes>::read_sleb128(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    pbVar6 = (byte *)*param_1;
    bVar7 = *pbVar6;
    *param_1 = (long)(pbVar6 + 1);
    param_1[1] = lVar4 + -1;
    uVar5 = (ulong)bVar7 & 0x7f;
    if ((char)bVar7 < '\0') {
      if (lVar4 + -1 == 0) goto LAB_00a70440;
      bVar7 = pbVar6[1];
      *param_1 = (long)(pbVar6 + 2);
      param_1[1] = lVar4 + -2;
      uVar5 = uVar5 | ((ulong)bVar7 & 0x7f) << 7;
      if ((char)bVar7 < '\0') {
        if (lVar4 + -2 == 0) goto LAB_00a70440;
        bVar7 = pbVar6[2];
        *param_1 = (long)(pbVar6 + 3);
        param_1[1] = lVar4 + -3;
        uVar5 = uVar5 | ((ulong)bVar7 & 0x7f) << 0xe;
        if ((char)bVar7 < '\0') {
          if (lVar4 + -3 == 0) goto LAB_00a70440;
          bVar7 = pbVar6[3];
          *param_1 = (long)(pbVar6 + 4);
          param_1[1] = lVar4 + -4;
          uVar5 = uVar5 | ((ulong)bVar7 & 0x7f) << 0x15;
          if ((char)bVar7 < '\0') {
            if (lVar4 + -4 == 0) goto LAB_00a70440;
            bVar7 = pbVar6[4];
            *param_1 = (long)(pbVar6 + 5);
            param_1[1] = lVar4 + -5;
            uVar5 = uVar5 | ((ulong)bVar7 & 0x7f) << 0x1c;
            if ((char)bVar7 < '\0') {
              if (lVar4 + -5 == 0) goto LAB_00a70440;
              bVar7 = pbVar6[5];
              *param_1 = (long)(pbVar6 + 6);
              param_1[1] = lVar4 + -6;
              uVar5 = uVar5 | (ulong)((int)(char)bVar7 & 0x7f) << 0x23;
              if ((char)bVar7 < 0) {
                if (lVar4 + -6 == 0) goto LAB_00a70440;
                bVar7 = pbVar6[6];
                *param_1 = (long)(pbVar6 + 7);
                param_1[1] = lVar4 + -7;
                uVar5 = uVar5 | (ulong)((int)(char)bVar7 & 0x7f) << 0x2a;
                if ((char)bVar7 < 0) {
                  if (lVar4 + -7 == 0) goto LAB_00a70440;
                  bVar7 = pbVar6[7];
                  *param_1 = (long)(pbVar6 + 8);
                  param_1[1] = lVar4 + -8;
                  uVar5 = uVar5 | (ulong)((int)(char)bVar7 & 0x7f) << 0x31;
                  if ((char)bVar7 < 0) {
                    if (lVar4 + -8 == 0) goto LAB_00a70440;
                    bVar7 = pbVar6[8];
                    *param_1 = (long)(pbVar6 + 9);
                    param_1[1] = lVar4 + -9;
                    uVar5 = uVar5 | (ulong)((int)(char)bVar7 & 0x7f) << 0x38;
                    if ((char)bVar7 < 0) {
                      if (lVar4 + -9 == 0) goto LAB_00a70440;
                      bVar7 = pbVar6[9];
                      *param_1 = (long)(pbVar6 + 10);
                      param_1[1] = lVar4 + -10;
                      if ((bVar7 != 0x7f) && (bVar7 != 0)) {
                        auVar9._8_8_ = param_2;
                        auVar9._0_8_ = 1;
                        return auVar9;
                      }
                      uVar5 = uVar5 | (ulong)bVar7 << 0x3f;
                      bVar3 = true;
                      lVar4 = 6;
                    }
                    else {
                      bVar3 = false;
                      lVar4 = 0x3f;
                    }
                  }
                  else {
                    bVar3 = false;
                    lVar4 = 0x38;
                  }
                }
                else {
                  bVar3 = false;
                  lVar4 = 0x31;
                }
              }
              else {
                bVar3 = false;
                lVar4 = 0x2a;
              }
            }
            else {
              bVar3 = false;
              lVar4 = 0x23;
            }
          }
          else {
            bVar3 = false;
            lVar4 = 0x1c;
          }
        }
        else {
          bVar3 = false;
          lVar4 = 0x15;
        }
      }
      else {
        bVar3 = false;
        lVar4 = 0xe;
      }
    }
    else {
      bVar3 = false;
      lVar4 = 7;
    }
    if (bVar7 < 0x40) {
      bVar3 = true;
    }
    uVar1 = 0;
    if (!bVar3) {
      uVar1 = -1L << lVar4;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar1 | uVar5;
    return auVar2 << 0x40;
  }
LAB_00a70440:
  *param_1 = 1;
  param_1[1] = 0;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = 1;
  return auVar8;
}


// ===== 00a7045c  <object::read::util::object::read::util::Bytes>::read_uleb128 =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::util::object::read::util::Bytes>::read_uleb128 */

undefined1  [16] __rustcall
<object::read::util::object::read::util::Bytes>::read_uleb128(undefined8 *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar7 = param_1[1];
  uVar6 = 0;
  uVar5 = 0;
  pbVar4 = (byte *)*param_1;
  while( true ) {
    lVar7 = lVar7 + -1;
    if (lVar7 == -1) {
      *param_1 = 1;
      param_1[1] = 0;
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = 1;
      return auVar9;
    }
    bVar1 = *pbVar4;
    *param_1 = pbVar4 + 1;
    param_1[1] = lVar7;
    if (((int)uVar6 == 0x3f) && (1 < bVar1)) break;
    uVar2 = uVar6 & 0x3f;
    uVar6 = (ulong)((int)uVar6 + 7);
    uVar5 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar5;
    pbVar4 = pbVar4 + 1;
    if (-1 < (char)bVar1) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar5;
      return auVar3 << 0x40;
    }
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = 1;
  return auVar8;
}


// ===== 00a704d4  <object::read::pe::data_directory::object::pe::ImageDataDirectory>::file_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::data_directory::object::pe::ImageDataDirectory>::file_range */

void __rustcall
<object::read::pe::data_directory::object::pe::ImageDataDirectory>::file_range
          (undefined8 *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    lVar6 = *param_3;
    uVar1 = *param_2;
    uVar2 = uVar1 - *(uint *)(lVar6 + 0xc);
    if (*(uint *)(lVar6 + 0xc) <= uVar1) {
      uVar3 = *(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 8) <= *(uint *)(lVar6 + 0x10)) {
        uVar3 = *(uint *)(lVar6 + 8);
      }
      if ((uVar2 < uVar3) &&
         (iVar7 = *(uint *)(lVar6 + 0x14) + uVar2, !CARRY4(*(uint *)(lVar6 + 0x14),uVar2))) {
LAB_00a70580:
        uVar1 = param_2[1];
        if (uVar3 - uVar2 < uVar1) {
          *param_1 = &DAT_00384276;
          param_1[1] = 0x15;
          return;
        }
        *(int *)(param_1 + 1) = iVar7;
        *(uint *)((long)param_1 + 0xc) = uVar1;
        *param_1 = 0;
        return;
      }
    }
    if (lVar4 != 1) {
      puVar5 = (uint *)(lVar6 + 0x3c);
      lVar4 = lVar4 * 0x28 + -0x28;
      do {
        uVar2 = uVar1 - puVar5[-2];
        if (puVar5[-2] <= uVar1) {
          uVar3 = puVar5[-1];
          if (puVar5[-3] <= puVar5[-1]) {
            uVar3 = puVar5[-3];
          }
          if ((uVar2 < uVar3) && (iVar7 = *puVar5 + uVar2, !CARRY4(*puVar5,uVar2)))
          goto LAB_00a70580;
        }
        lVar4 = lVar4 + -0x28;
        puVar5 = puVar5 + 10;
      } while (lVar4 != 0);
    }
  }
  *param_1 = &DAT_002bfce8;
  param_1[1] = 0x20;
  return;
}


// ===== 00a705b0  <object::read::pe::import::object::read::pe::import::ImportDescriptorIterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::object::read::pe::import::ImportDescriptorIterator>::next */

void __rustcall
<object::read::pe::import::object::read::pe::import::ImportDescriptorIterator>::next
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if ((ulong)param_2[1] < 0x14) {
    *param_2 = 1;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    *param_1 = &DAT_0038428b;
    param_1[1] = 0x21;
    return;
  }
  piVar2 = (int *)*param_2;
  iVar1 = *piVar2;
  *param_2 = piVar2 + 5;
  param_2[1] = param_2[1] - 0x14;
  if ((((iVar1 == 0) && (piVar2[1] == 0)) && (piVar2[2] == 0)) &&
     ((piVar2[3] == 0 && (piVar2[4] == 0)))) {
    *(undefined1 *)(param_2 + 2) = 1;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = piVar2;
  return;
}


// ===== 00a70638  <object::read::macho::function_starts::object::read::macho::function_starts::FunctionStartsIterator>::next =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::macho::function_starts::object::read::macho::function_starts::FunctionStartsIterator>::next
    */

void __rustcall
<object::read::macho::function_starts::object::read::macho::function_starts::FunctionStartsIterator>
::next(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2[1] == 0) {
LAB_00a706e8:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar5 = 0;
  uVar6 = 0;
  lVar7 = 1 - param_2[1];
  pbVar2 = (byte *)*param_2;
  do {
    bVar1 = *pbVar2;
    if (((int)uVar6 == 0x3f) && (1 < bVar1)) break;
    uVar5 = ((ulong)bVar1 & 0x7f) << (uVar6 & 0x3f) | uVar5;
    if (-1 < (char)bVar1) {
      *param_2 = pbVar2 + 1;
      param_2[1] = -lVar7;
      if (uVar5 != 0) {
        lVar7 = param_2[2] + uVar5;
        if (!CARRY8(param_2[2],uVar5)) {
          param_2[2] = lVar7;
          uVar4 = _UNK_0029fa78;
          uVar3 = _DAT_0029fa70;
          param_1[2] = lVar7;
          param_1[1] = uVar4;
          *param_1 = uVar3;
          return;
        }
        param_1[1] = &DAT_003842e7;
        param_1[2] = 0x26;
        *param_1 = 1;
        *param_2 = 1;
        param_2[1] = 0;
        return;
      }
      *param_2 = 1;
      param_2[1] = 0;
      goto LAB_00a706e8;
    }
    lVar7 = lVar7 + 1;
    uVar6 = (ulong)((int)uVar6 + 7);
    pbVar2 = pbVar2 + 1;
  } while (lVar7 != 1);
  param_1[1] = &DAT_0038430d;
  param_1[2] = 0x25;
  *param_1 = 1;
  *param_2 = 1;
  param_2[1] = 0;
  return;
}


// ===== 00a70710  <object::read::[c]::object::read::RelocationMap>::relocate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::[c]::object::read::RelocationMap>::relocate */

long __rustcall
<object::read::[c]::object::read::RelocationMap>::relocate(long *param_1,ulong param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  ulong *puVar9;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar4 = param_1[1];
    while( true ) {
      lVar8 = (ulong)*(ushort *)(lVar3 + 0x112) << 3;
      uVar5 = 0xffffffffffffffff;
      pcVar2 = (char *)(lVar3 + -8);
      puVar9 = (ulong *)(lVar3 + 0xb8);
      do {
        pcVar7 = pcVar2;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x112);
        if (lVar8 == 0) goto LAB_00a70768;
        pcVar2 = pcVar7 + 0x10;
        uVar6 = uVar5 + 1;
        lVar8 = lVar8 + -8;
        cVar1 = *puVar9 < param_2;
        if (param_2 < *puVar9) {
          cVar1 = -1;
        }
        uVar5 = uVar6;
        puVar9 = puVar9 + 1;
      } while (cVar1 == '\x01');
      if (cVar1 == '\0') break;
LAB_00a70768:
      if (lVar4 == 0) {
        return param_3;
      }
      lVar4 = lVar4 + -1;
      lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x118);
    }
    if (*pcVar2 == '\0') {
      param_3 = 0;
    }
    param_3 = *(long *)(pcVar7 + 8) + param_3;
  }
  return param_3;
}


// ===== 00a70798  <object::read::elf::relocation::[e]::object::read::elf::relocation::CrelIterator>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::relocation::[e]::object::read::elf::relocation::CrelIterator>::new */

void __rustcall
<object::read::elf::relocation::[e]::object::read::elf::relocation::CrelIterator>::new
          (long *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  while (param_3 != 0) {
    bVar1 = *param_2;
    if (((int)uVar4 == 0x3f) && (1 < bVar1)) break;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    uVar2 = uVar4 & 0x3f;
    uVar4 = (ulong)((int)uVar4 + 7);
    uVar3 = ((ulong)bVar1 & 0x7f) << uVar2 | uVar3;
    if (-1 < (char)bVar1) {
      uVar5 = 2;
      if ((uVar3 & 4) != 0) {
        uVar5 = 3;
      }
      *param_1 = (long)param_2;
      param_1[1] = param_3;
      param_1[4] = 0;
      param_1[5] = uVar3 >> 3;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined1 *)(param_1 + 6) = uVar5;
      *(byte *)((long)param_1 + 0x31) = (byte)uVar3 & 3;
      *(char *)((long)param_1 + 0x32) = (char)((uVar3 & 4) >> 2);
      return;
    }
  }
  *param_1 = (long)&DAT_00384332;
  param_1[1] = 0x17;
  *(undefined1 *)((long)param_1 + 0x32) = 2;
  return;
}


// ===== 00a70828  object::read::archive::parse_u64_digits =====

/* WARNING: Unknown calling convention: __rustcall */
/* object::read::archive::parse_u64_digits */

undefined1  [16] __rustcall
object::read::archive::parse_u64_digits(byte *param_1,ulong param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  if (param_2 == 0) {
    if (0x22 < param_3 - 2) {
LAB_00a70958:
      return ZEXT816(1);
    }
  }
  else {
    if (*param_1 == 0x20) goto LAB_00a70848;
    if (0x22 < param_3 - 2) {
      if (*param_1 != 0x20) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  (&DAT_00383ce2,0x8f,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afc9f0);
      }
      goto LAB_00a70958;
    }
  }
  uVar11 = CONCAT44(0,param_3);
  uVar10 = param_2;
  uVar9 = 0;
  if (param_3 < 0xb) {
    do {
      param_2 = uVar9;
      if (uVar10 == 0) goto LAB_00a7092c;
      if (*param_1 == 0x20) goto LAB_00a7092c;
      uVar2 = *param_1 - 0x30;
      if (param_3 <= uVar2) goto LAB_00a7093c;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
    } while ((SUB168(auVar4 * auVar6,8) == 0) &&
            (uVar10 = uVar10 - 1, param_1 = param_1 + 1, uVar9 = param_2 * uVar11 + (ulong)uVar2,
            !CARRY8(param_2 * uVar11,(ulong)uVar2)));
  }
  else {
    do {
      param_2 = uVar9;
      if (uVar10 == 0) {
LAB_00a7092c:
        auVar12._8_8_ = param_2;
        auVar12._0_8_ = 1;
        return auVar12;
      }
      bVar1 = *param_1;
      if (bVar1 == 0x20) goto LAB_00a7092c;
      uVar2 = (bVar1 - 0x41 & 0xffffffdf) + 10;
      if (bVar1 < 0x3a) {
        uVar2 = bVar1 - 0x30;
      }
      if (param_3 <= uVar2) {
LAB_00a7093c:
        auVar7._8_8_ = 0;
        auVar7._0_8_ = param_2;
        return auVar7 << 0x40;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar11;
    } while ((SUB168(auVar3 * auVar5,8) == 0) &&
            (uVar10 = uVar10 - 1, param_1 = param_1 + 1, uVar9 = param_2 * uVar11 + (ulong)uVar2,
            !CARRY8(param_2 * uVar11,(ulong)uVar2)));
  }
LAB_00a70848:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2;
  return auVar8 << 0x40;
}


// ===== 00a70984  object::read::archive::parse_sysv_extended_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* object::read::archive::parse_sysv_extended_name */

undefined1  [16] __rustcall
object::read::archive::parse_sysv_extended_name
          (byte *param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*in_x9) [16];
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long lVar10;
  ushort uVar11;
  undefined1 auVar16 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  byte bVar22;
  undefined1 auVar24 [12];
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar27 [16];
  byte bVar39;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined4 uVar12;
  undefined6 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar21 [16];
  undefined1 auVar23 [12];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ushort uVar40;
  undefined4 uVar41;
  undefined6 uVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [14];
  undefined1 auVar46 [16];
  
  if ((param_2 == 0) || (in_x9 = (undefined1 (*) [16])(ulong)*param_1, *param_1 != 0x20)) {
    puVar6 = (undefined1 *)0x0;
    while (param_2 != 0) {
      bVar22 = *param_1;
      in_x9 = (undefined1 (*) [16])(ulong)bVar22;
      if (bVar22 == 0x20) break;
      uVar3 = bVar22 - 0x30;
      in_x9 = (undefined1 (*) [16])(ulong)uVar3;
      if (9 < uVar3) goto LAB_00a70b94;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = puVar6;
      uVar7 = (long)puVar6 * 10;
      puVar6 = *in_x9 + uVar7;
      if ((SUB168(auVar4 * ZEXT816(10),8) != 0) ||
         (param_2 = param_2 + -1, param_1 = param_1 + 1, CARRY8(uVar7,(ulong)in_x9)))
      goto LAB_00a70b94;
    }
    uVar7 = (long)param_4 - (long)puVar6;
    if ((puVar6 <= param_4) && (puVar6 <= param_4 && uVar7 != 0)) {
      pauVar1 = (undefined1 (*) [16])(puVar6 + param_3);
      pauVar8 = pauVar1;
      if (uVar7 < 0x10) goto LAB_00a70a08;
      auVar19[8] = 10;
      auVar19._0_8_ = 0xa0a0a0a0a0a0a0a;
      auVar19[9] = 10;
      auVar19[10] = 10;
      auVar19[0xb] = 10;
      auVar19[0xc] = 10;
      auVar19[0xd] = 10;
      auVar19[0xe] = 10;
      auVar19[0xf] = 10;
      auVar19 = NEON_cmeq(*pauVar1,auVar19,1);
      auVar27 = NEON_cmeq(*pauVar1,0,1);
      uVar11 = CONCAT11(auVar19[1] | auVar27[1],auVar19[0] | auVar27[0]);
      uVar12 = CONCAT13(auVar19[3] | auVar27[3],CONCAT12(auVar19[2] | auVar27[2],uVar11));
      uVar13 = CONCAT15(auVar19[5] | auVar27[5],CONCAT14(auVar19[4] | auVar27[4],uVar12));
      uVar14 = CONCAT17(auVar19[7] | auVar27[7],CONCAT16(auVar19[6] | auVar27[6],uVar13));
      auVar15._0_10_ = CONCAT19(auVar19[9] | auVar27[9],CONCAT18(auVar19[8] | auVar27[8],uVar14));
      auVar15[10] = auVar19[10] | auVar27[10];
      auVar15[0xb] = auVar19[0xb] | auVar27[0xb];
      auVar17[0xc] = auVar19[0xc] | auVar27[0xc];
      auVar17._0_12_ = auVar15;
      auVar17[0xd] = auVar19[0xd] | auVar27[0xd];
      auVar56[0xe] = auVar19[0xe] | auVar27[0xe];
      auVar56._0_14_ = auVar17;
      auVar56[0xf] = auVar19[0xf] | auVar27[0xf];
      uVar2 = CONCAT17((char)(auVar56._14_2_ >> 4),
                       CONCAT16((char)(auVar17._12_2_ >> 4),
                                CONCAT15((char)(auVar15._10_2_ >> 4),
                                         CONCAT14((char)(ushort)((unkuint10)auVar15._0_10_ >> 0x44),
                                                  CONCAT13((char)(ushort)((ulong)uVar14 >> 0x34),
                                                           CONCAT12((char)(ushort)((uint6)uVar13 >>
                                                                                  0x24),
                                                                    CONCAT11((char)(ushort)((uint)
                                                  uVar12 >> 0x14),(char)(uVar11 >> 4)))))))) &
              0x8888888888888888;
      if (uVar2 != 0) {
        uVar2 = uVar2 >> 3;
        uVar7 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        pauVar8 = (undefined1 (*) [16])
                  (*pauVar1 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
        goto LAB_00a70a5c;
      }
      lVar10 = 0x10 - ((ulong)pauVar1 & 0xf);
      in_x9 = (undefined1 (*) [16])(param_4 + param_3);
      pauVar8 = (undefined1 (*) [16])((long)pauVar1 + lVar10);
      if ((uVar7 < 0x20) || ((long)(param_4 + -0x20) < (long)(puVar6 + lVar10))) goto LAB_00a70b18;
      auVar27[8] = 10;
      auVar27._0_8_ = 0xa0a0a0a0a0a0a0a;
      auVar27[9] = 10;
      auVar27[10] = 10;
      auVar27[0xb] = 10;
      auVar27[0xc] = 10;
      auVar27[0xd] = 10;
      auVar27[0xe] = 10;
      auVar27[0xf] = 10;
      pauVar9 = (undefined1 (*) [16])(puVar6 + (param_3 - ((ulong)pauVar1 & 0xf)));
      goto LAB_00a70ad0;
    }
  }
  goto LAB_00a70b94;
  while( true ) {
    uVar7 = uVar7 - 1;
    pauVar8 = (undefined1 (*) [16])(*pauVar8 + 1);
    if (uVar7 == 0) break;
LAB_00a70a08:
    bVar22 = (*pauVar8)[0];
    in_x9 = (undefined1 (*) [16])(ulong)bVar22;
    if ((bVar22 == 0) || (bVar22 == 10)) goto LAB_00a70a5c;
  }
  goto LAB_00a70b94;
  while (pauVar8 + 3 <= in_x9 + -2) {
LAB_00a70ad0:
    pauVar8 = pauVar9;
    pauVar9 = pauVar8 + 2;
    auVar57 = NEON_cmeq(*pauVar9,auVar27,1);
    auVar58 = NEON_cmeq(*pauVar9,0,1);
    auVar56 = NEON_cmeq(pauVar8[1],auVar27,1);
    auVar19 = NEON_cmeq(pauVar8[1],0,1);
    bVar39 = auVar19[0] | auVar56[0];
    bVar47 = auVar19[1] | auVar56[1];
    uVar40 = CONCAT11(bVar47,bVar39);
    bVar48 = auVar19[2] | auVar56[2];
    bVar49 = auVar19[3] | auVar56[3];
    uVar41 = CONCAT13(bVar49,CONCAT12(bVar48,uVar40));
    bVar50 = auVar19[4] | auVar56[4];
    bVar51 = auVar19[5] | auVar56[5];
    uVar42 = CONCAT15(bVar51,CONCAT14(bVar50,uVar41));
    bVar52 = auVar19[6] | auVar56[6];
    bVar53 = auVar19[7] | auVar56[7];
    uVar43 = CONCAT17(bVar53,CONCAT16(bVar52,uVar42));
    bVar54 = auVar19[8] | auVar56[8];
    bVar55 = auVar19[9] | auVar56[9];
    auVar44._0_10_ = CONCAT19(bVar55,CONCAT18(bVar54,uVar43));
    auVar44[10] = auVar19[10] | auVar56[10];
    auVar44[0xb] = auVar19[0xb] | auVar56[0xb];
    auVar45[0xc] = auVar19[0xc] | auVar56[0xc];
    auVar45._0_12_ = auVar44;
    auVar45[0xd] = auVar19[0xd] | auVar56[0xd];
    auVar46[0xe] = auVar19[0xe] | auVar56[0xe];
    auVar46._0_14_ = auVar45;
    auVar46[0xf] = auVar19[0xf] | auVar56[0xf];
    bVar22 = auVar58[0] | auVar57[0];
    bVar30 = auVar58[1] | auVar57[1];
    uVar11 = CONCAT11(bVar30,bVar22);
    bVar31 = auVar58[2] | auVar57[2];
    bVar32 = auVar58[3] | auVar57[3];
    uVar12 = CONCAT13(bVar32,CONCAT12(bVar31,uVar11));
    bVar33 = auVar58[4] | auVar57[4];
    bVar34 = auVar58[5] | auVar57[5];
    uVar13 = CONCAT15(bVar34,CONCAT14(bVar33,uVar12));
    bVar35 = auVar58[6] | auVar57[6];
    bVar36 = auVar58[7] | auVar57[7];
    uVar14 = CONCAT17(bVar36,CONCAT16(bVar35,uVar13));
    bVar37 = auVar58[8] | auVar57[8];
    bVar38 = auVar58[9] | auVar57[9];
    auVar23._0_10_ = CONCAT19(bVar38,CONCAT18(bVar37,uVar14));
    auVar23[10] = auVar58[10] | auVar57[10];
    auVar23[0xb] = auVar58[0xb] | auVar57[0xb];
    auVar25[0xc] = auVar58[0xc] | auVar57[0xc];
    auVar25._0_12_ = auVar23;
    auVar25[0xd] = auVar58[0xd] | auVar57[0xd];
    auVar28[0xe] = auVar58[0xe] | auVar57[0xe];
    auVar28._0_14_ = auVar25;
    auVar28[0xf] = auVar58[0xf] | auVar57[0xf];
    auVar57[0] = bVar22 | bVar39;
    auVar57[1] = bVar30 | bVar47;
    auVar57[2] = bVar31 | bVar48;
    auVar57[3] = bVar32 | bVar49;
    auVar57[4] = bVar33 | bVar50;
    auVar57[5] = bVar34 | bVar51;
    auVar57[6] = bVar35 | bVar52;
    auVar57[7] = bVar36 | bVar53;
    auVar57[8] = bVar37 | bVar54;
    auVar57[9] = bVar38 | bVar55;
    auVar57[10] = auVar23[10] | auVar44[10];
    auVar57[0xb] = auVar23[0xb] | auVar44[0xb];
    auVar57[0xc] = auVar25[0xc] | auVar45[0xc];
    auVar57[0xd] = auVar25[0xd] | auVar45[0xd];
    auVar57[0xe] = auVar28[0xe] | auVar46[0xe];
    auVar57[0xf] = auVar28[0xf] | auVar46[0xf];
    auVar19 = NEON_umaxp(auVar57,auVar57,1);
    if (auVar19._0_8_ != 0) {
      uVar7 = CONCAT17((char)(auVar46._14_2_ >> 4),
                       CONCAT16((char)(auVar45._12_2_ >> 4),
                                CONCAT15((char)(auVar44._10_2_ >> 4),
                                         CONCAT14((char)(ushort)((unkuint10)auVar44._0_10_ >> 0x44),
                                                  CONCAT13((char)(ushort)((ulong)uVar43 >> 0x34),
                                                           CONCAT12((char)(ushort)((uint6)uVar42 >>
                                                                                  0x24),
                                                                    CONCAT11((char)(ushort)((uint)
                                                  uVar41 >> 0x14),(char)(uVar40 >> 4)))))))) &
              0x8888888888888888;
      if (uVar7 == 0) {
        uVar7 = (CONCAT17((char)(auVar28._14_2_ >> 4),
                          CONCAT16((char)(auVar25._12_2_ >> 4),
                                   CONCAT15((char)(auVar23._10_2_ >> 4),
                                            CONCAT14((char)(ushort)((unkuint10)auVar23._0_10_ >>
                                                                   0x44),
                                                     CONCAT13((char)(ushort)((ulong)uVar14 >> 0x34),
                                                              CONCAT12((char)(ushort)((uint6)uVar13
                                                                                     >> 0x24),
                                                                       CONCAT11((char)(ushort)((uint
                                                  )uVar12 >> 0x14),(char)(uVar11 >> 4)))))))) &
                0x8888888888888888) >> 3;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        pauVar8 = (undefined1 (*) [16])
                  (*pauVar9 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
      }
      else {
        uVar7 = uVar7 >> 3;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        pauVar8 = (undefined1 (*) [16])
                  (pauVar9[-1] + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
      }
      goto LAB_00a70a5c;
    }
  }
  pauVar8 = pauVar8 + 3;
LAB_00a70b18:
  if (pauVar8 <= in_x9 + -1) {
    auVar58[8] = 10;
    auVar58._0_8_ = 0xa0a0a0a0a0a0a0a;
    auVar58[9] = 10;
    auVar58[10] = 10;
    auVar58[0xb] = 10;
    auVar58[0xc] = 10;
    auVar58[0xd] = 10;
    auVar58[0xe] = 10;
    auVar58[0xf] = 10;
    do {
      auVar56 = NEON_cmeq(*pauVar8,auVar58,1);
      auVar19 = NEON_cmeq(*pauVar8,0,1);
      uVar11 = CONCAT11(auVar19[1] | auVar56[1],auVar19[0] | auVar56[0]);
      uVar12 = CONCAT13(auVar19[3] | auVar56[3],CONCAT12(auVar19[2] | auVar56[2],uVar11));
      uVar13 = CONCAT15(auVar19[5] | auVar56[5],CONCAT14(auVar19[4] | auVar56[4],uVar12));
      uVar14 = CONCAT17(auVar19[7] | auVar56[7],CONCAT16(auVar19[6] | auVar56[6],uVar13));
      auVar24._0_10_ = CONCAT19(auVar19[9] | auVar56[9],CONCAT18(auVar19[8] | auVar56[8],uVar14));
      auVar24[10] = auVar19[10] | auVar56[10];
      auVar24[0xb] = auVar19[0xb] | auVar56[0xb];
      auVar26[0xc] = auVar19[0xc] | auVar56[0xc];
      auVar26._0_12_ = auVar24;
      auVar26[0xd] = auVar19[0xd] | auVar56[0xd];
      auVar29[0xe] = auVar19[0xe] | auVar56[0xe];
      auVar29._0_14_ = auVar26;
      auVar29[0xf] = auVar19[0xf] | auVar56[0xf];
      uVar7 = CONCAT17((char)(auVar29._14_2_ >> 4),
                       CONCAT16((char)(auVar26._12_2_ >> 4),
                                CONCAT15((char)(auVar24._10_2_ >> 4),
                                         CONCAT14((char)(ushort)((unkuint10)auVar24._0_10_ >> 0x44),
                                                  CONCAT13((char)(ushort)((ulong)uVar14 >> 0x34),
                                                           CONCAT12((char)(ushort)((uint6)uVar13 >>
                                                                                  0x24),
                                                                    CONCAT11((char)(ushort)((uint)
                                                  uVar12 >> 0x14),(char)(uVar11 >> 4)))))))) &
              0x8888888888888888;
      if (uVar7 != 0) {
        uVar7 = uVar7 >> 3;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        pauVar8 = (undefined1 (*) [16])
                  (*pauVar8 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2));
        goto LAB_00a70a5c;
      }
      pauVar8 = pauVar8 + 1;
    } while (pauVar8 <= in_x9 + -1);
  }
  if (pauVar8 < in_x9) {
    auVar20[8] = 10;
    auVar20._0_8_ = 0xa0a0a0a0a0a0a0a;
    auVar20[9] = 10;
    auVar20[10] = 10;
    auVar20[0xb] = 10;
    auVar20[0xc] = 10;
    auVar20[0xd] = 10;
    auVar20[0xe] = 10;
    auVar20[0xf] = 10;
    in_x9 = in_x9 + -1;
    auVar19 = NEON_cmeq(*in_x9,auVar20,1);
    auVar56 = NEON_cmeq(*in_x9,0,1);
    uVar11 = CONCAT11(auVar56[1] | auVar19[1],auVar56[0] | auVar19[0]);
    uVar12 = CONCAT13(auVar56[3] | auVar19[3],CONCAT12(auVar56[2] | auVar19[2],uVar11));
    uVar13 = CONCAT15(auVar56[5] | auVar19[5],CONCAT14(auVar56[4] | auVar19[4],uVar12));
    uVar14 = CONCAT17(auVar56[7] | auVar19[7],CONCAT16(auVar56[6] | auVar19[6],uVar13));
    auVar16._0_10_ = CONCAT19(auVar56[9] | auVar19[9],CONCAT18(auVar56[8] | auVar19[8],uVar14));
    auVar16[10] = auVar56[10] | auVar19[10];
    auVar16[0xb] = auVar56[0xb] | auVar19[0xb];
    auVar18[0xc] = auVar56[0xc] | auVar19[0xc];
    auVar18._0_12_ = auVar16;
    auVar18[0xd] = auVar56[0xd] | auVar19[0xd];
    auVar21[0xe] = auVar56[0xe] | auVar19[0xe];
    auVar21._0_14_ = auVar18;
    auVar21[0xf] = auVar56[0xf] | auVar19[0xf];
    uVar7 = CONCAT17((char)(auVar21._14_2_ >> 4),
                     CONCAT16((char)(auVar18._12_2_ >> 4),
                              CONCAT15((char)(auVar16._10_2_ >> 4),
                                       CONCAT14((char)(ushort)((unkuint10)auVar16._0_10_ >> 0x44),
                                                CONCAT13((char)(ushort)((ulong)uVar14 >> 0x34),
                                                         CONCAT12((char)(ushort)((uint6)uVar13 >>
                                                                                0x24),
                                                                  CONCAT11((char)(ushort)((uint)
                                                  uVar12 >> 0x14),(char)(uVar11 >> 4)))))))) &
            0x8888888888888888;
    if (uVar7 != 0) {
      uVar7 = uVar7 >> 3;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      pauVar8 = (undefined1 (*) [16])(*in_x9 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 2))
      ;
LAB_00a70a5c:
      in_x9 = (undefined1 (*) [16])((long)pauVar8 - (long)pauVar1);
      if ((*pauVar8)[0] != '\n') {
        auVar60._8_8_ = in_x9;
        auVar60._0_8_ = pauVar1;
        return auVar60;
      }
      if (in_x9 != (undefined1 (*) [16])0x0) {
        auVar59._8_8_ = in_x9[-1] + 0xf;
        if (auVar59._8_8_[(long)*pauVar1] != '/') {
          pauVar1 = (undefined1 (*) [16])0x0;
        }
        auVar59._0_8_ = pauVar1;
        return auVar59;
      }
    }
  }
LAB_00a70b94:
  auVar5._8_8_ = 0;
  auVar5._0_8_ = in_x9;
  return auVar5 << 0x40;
}


// ===== 00a70bec  <object::read::coff::import::object::read::coff::import::ImportFile>::parse::strip_prefix =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::coff::import::object::read::coff::import::ImportFile>::parse::strip_prefix */

undefined1  [16] __rustcall
<object::read::coff::import::object::read::coff::import::ImportFile>::parse::strip_prefix
          (byte *param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  if (((param_2 != 0) && (*param_1 - 0x3f < 0x21)) &&
     ((1L << ((ulong)(*param_1 - 0x3f) & 0x3f) & 0x100000003U) != 0)) {
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}


// ===== 00a70c20  <object::read::util::Bytes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::util::Bytes as core::fmt::Debug>::fmt */

void __rustcall
<object::read::util::Bytes_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 auStack_38 [16];
  ulong local_28;
  
  puVar1 = (undefined1 *)*param_1;
  uVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_38,param_2);
  if (uVar2 != 0) {
    local_28 = CONCAT71(local_28._1_7_,*puVar1);
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_38,&local_28,&DAT_00afc9a0);
    if (uVar2 != 1) {
      local_28 = CONCAT71(local_28._1_7_,puVar1[1]);
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_38,&local_28,&DAT_00afc9a0);
      if (uVar2 != 2) {
        local_28 = CONCAT71(local_28._1_7_,puVar1[2]);
        <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                  (auStack_38,&local_28,&DAT_00afc9a0);
        if (uVar2 != 3) {
          local_28 = CONCAT71(local_28._1_7_,puVar1[3]);
          <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                    (auStack_38,&local_28,&DAT_00afc9a0);
          if (uVar2 != 4) {
            local_28 = CONCAT71(local_28._1_7_,puVar1[4]);
            <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                      (auStack_38,&local_28,&DAT_00afc9a0);
            if (uVar2 != 5) {
              local_28 = CONCAT71(local_28._1_7_,puVar1[5]);
              <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                        (auStack_38,&local_28,&DAT_00afc9a0);
              if (uVar2 != 6) {
                local_28 = CONCAT71(local_28._1_7_,puVar1[6]);
                <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                          (auStack_38,&local_28,&DAT_00afc9a0);
                if (uVar2 != 7) {
                  local_28 = CONCAT71(local_28._1_7_,puVar1[7]);
                  <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                            (auStack_38,&local_28,&DAT_00afc9a0);
                  if (8 < uVar2) {
                    local_28 = uVar2;
                    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                              (auStack_38,&local_28,&DAT_00afca08);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_38);
  return;
}


// ===== 00a70d94  <&[u8]as_object::read::read_ref::ReadRef>::read_bytes_at_until =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&[u8] as object::read::read_ref::ReadRef>::read_bytes_at_until */

undefined1  [16] __rustcall
<&[u8]as_object::read::read_ref::ReadRef>::read_bytes_at_until
          (long param_1,ulong param_2,ulong param_3,ulong param_4,char param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  long lVar10;
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
  
  uVar4 = param_4 - param_3;
  if (((param_3 <= param_4) && (param_4 <= param_2)) && (param_3 < param_4)) {
    pauVar1 = (undefined1 (*) [16])(param_1 + param_3);
    pauVar2 = (undefined1 (*) [16])(param_1 + param_4);
    if (uVar4 < 0x10) {
      pauVar9 = pauVar1;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        if ((*pauVar9)[0] == param_5) goto LAB_00a70e60;
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
      }
      if (param_3 - param_4 < 0xfffffffffffffffd) {
        pauVar9 = (undefined1 (*) [16])(*pauVar9 + 3);
        do {
          if (pauVar9[-1][0xd] == param_5) {
            auVar19._8_8_ = (undefined1 *)((long)pauVar9 + (-3 - (long)pauVar1));
            auVar19._0_8_ = pauVar1;
            return auVar19;
          }
          if (pauVar9[-1][0xe] == param_5) {
            auVar21._8_8_ = (undefined1 *)((long)pauVar9 + (-2 - (long)pauVar1));
            auVar21._0_8_ = pauVar1;
            return auVar21;
          }
          if (pauVar9[-1][0xf] == param_5) {
            auVar22._8_8_ = (undefined1 *)((long)pauVar9 + (-1 - (long)pauVar1));
            auVar22._0_8_ = pauVar1;
            return auVar22;
          }
          if ((*pauVar9)[0] == param_5) goto LAB_00a70e60;
          puVar7 = *pauVar9;
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 4);
        } while ((undefined1 (*) [16])(puVar7 + 1) != pauVar2);
      }
    }
    else {
      auVar11[1] = param_5;
      auVar11[0] = param_5;
      auVar11[2] = param_5;
      auVar11[3] = param_5;
      auVar11[4] = param_5;
      auVar11[5] = param_5;
      auVar11[6] = param_5;
      auVar11[7] = param_5;
      auVar11[8] = param_5;
      auVar11[9] = param_5;
      auVar11[10] = param_5;
      auVar11[0xb] = param_5;
      auVar11[0xc] = param_5;
      auVar11[0xd] = param_5;
      auVar11[0xe] = param_5;
      auVar11[0xf] = param_5;
      auVar12 = NEON_cmeq(auVar11,*pauVar1,1);
      uVar3 = CONCAT17((char)(auVar12._14_2_ >> 4),
                       CONCAT16((char)(auVar12._12_2_ >> 4),
                                CONCAT15((char)(auVar12._10_2_ >> 4),
                                         CONCAT14((char)(auVar12._8_2_ >> 4),
                                                  CONCAT13((char)(auVar12._6_2_ >> 4),
                                                           CONCAT12((char)(auVar12._4_2_ >> 4),
                                                                    CONCAT11((char)(auVar12._2_2_ >>
                                                                                   4),(char)(auVar12
                                                  ._0_2_ >> 4)))))))) & 0x8888888888888888;
      if (uVar3 != 0) {
        uVar3 = uVar3 >> 3;
        uVar4 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        pauVar9 = (undefined1 (*) [16])
                  (*pauVar1 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2));
LAB_00a70e60:
        auVar17._8_8_ = (long)pauVar9 - (long)pauVar1;
        auVar17._0_8_ = pauVar1;
        return auVar17;
      }
      lVar10 = 0x10 - ((ulong)pauVar1 & 0xf);
      pauVar9 = (undefined1 (*) [16])((long)pauVar1 + lVar10);
      if ((0x3f < uVar4) && ((long)(lVar10 + param_3) <= (long)(param_4 - 0x40))) {
        pauVar8 = (undefined1 (*) [16])((param_3 - ((ulong)pauVar1 & 0xf)) + param_1 + 0x20);
        do {
          pauVar9 = pauVar8;
          uVar5 = *(undefined8 *)(pauVar9[2] + 8);
          auVar15 = NEON_cmeq(auVar11,pauVar9[-1],1);
          auVar14 = NEON_cmeq(auVar11,*pauVar9,1);
          auVar13 = NEON_cmeq(auVar11,pauVar9[1],1);
          auVar12[9] = (char)((ulong)uVar5 >> 8);
          auVar12._0_9_ = *(unkbyte9 *)pauVar9[2];
          auVar12[10] = (char)((ulong)uVar5 >> 0x10);
          auVar12[0xb] = (char)((ulong)uVar5 >> 0x18);
          auVar12[0xc] = (char)((ulong)uVar5 >> 0x20);
          auVar12[0xd] = (char)((ulong)uVar5 >> 0x28);
          auVar12[0xe] = (char)((ulong)uVar5 >> 0x30);
          auVar12[0xf] = (char)((ulong)uVar5 >> 0x38);
          auVar12 = NEON_cmeq(auVar11,auVar12,1);
          auVar16[0] = auVar14[0] | auVar15[0] | auVar13[0] | auVar12[0];
          auVar16[1] = auVar14[1] | auVar15[1] | auVar13[1] | auVar12[1];
          auVar16[2] = auVar14[2] | auVar15[2] | auVar13[2] | auVar12[2];
          auVar16[3] = auVar14[3] | auVar15[3] | auVar13[3] | auVar12[3];
          auVar16[4] = auVar14[4] | auVar15[4] | auVar13[4] | auVar12[4];
          auVar16[5] = auVar14[5] | auVar15[5] | auVar13[5] | auVar12[5];
          auVar16[6] = auVar14[6] | auVar15[6] | auVar13[6] | auVar12[6];
          auVar16[7] = auVar14[7] | auVar15[7] | auVar13[7] | auVar12[7];
          auVar16[8] = auVar14[8] | auVar15[8] | auVar13[8] | auVar12[8];
          auVar16[9] = auVar14[9] | auVar15[9] | auVar13[9] | auVar12[9];
          auVar16[10] = auVar14[10] | auVar15[10] | auVar13[10] | auVar12[10];
          auVar16[0xb] = auVar14[0xb] | auVar15[0xb] | auVar13[0xb] | auVar12[0xb];
          auVar16[0xc] = auVar14[0xc] | auVar15[0xc] | auVar13[0xc] | auVar12[0xc];
          auVar16[0xd] = auVar14[0xd] | auVar15[0xd] | auVar13[0xd] | auVar12[0xd];
          auVar16[0xe] = auVar14[0xe] | auVar15[0xe] | auVar13[0xe] | auVar12[0xe];
          auVar16[0xf] = auVar14[0xf] | auVar15[0xf] | auVar13[0xf] | auVar12[0xf];
          auVar16 = NEON_umaxp(auVar16,auVar16,1);
          if (auVar16._0_8_ != 0) {
            uVar4 = CONCAT17((char)(auVar15._14_2_ >> 4),
                             CONCAT16((char)(auVar15._12_2_ >> 4),
                                      CONCAT15((char)(auVar15._10_2_ >> 4),
                                               CONCAT14((char)(auVar15._8_2_ >> 4),
                                                        CONCAT13((char)(auVar15._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar15._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar15.
                                                  _2_2_ >> 4),(char)(auVar15._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar4 != 0) {
              uVar4 = uVar4 >> 3;
              uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
              uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
              auVar13._8_8_ =
                   (long)pauVar9 +
                   ((((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2) - 0x10) - (long)pauVar1);
              auVar13._0_8_ = pauVar1;
              return auVar13;
            }
            uVar4 = CONCAT17((char)(auVar14._14_2_ >> 4),
                             CONCAT16((char)(auVar14._12_2_ >> 4),
                                      CONCAT15((char)(auVar14._10_2_ >> 4),
                                               CONCAT14((char)(auVar14._8_2_ >> 4),
                                                        CONCAT13((char)(auVar14._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar14._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar14.
                                                  _2_2_ >> 4),(char)(auVar14._0_2_ >> 4)))))))) &
                    0x8888888888888888;
            if (uVar4 == 0) {
              uVar4 = CONCAT17((char)(auVar13._14_2_ >> 4),
                               CONCAT16((char)(auVar13._12_2_ >> 4),
                                        CONCAT15((char)(auVar13._10_2_ >> 4),
                                                 CONCAT14((char)(auVar13._8_2_ >> 4),
                                                          CONCAT13((char)(auVar13._6_2_ >> 4),
                                                                   CONCAT12((char)(auVar13._4_2_ >>
                                                                                  4),CONCAT11((char)
                                                  (auVar13._2_2_ >> 4),(char)(auVar13._0_2_ >> 4))))
                                                  )))) & 0x8888888888888888;
              if (uVar4 == 0) {
                uVar4 = (CONCAT17((char)(auVar12._14_2_ >> 4),
                                  CONCAT16((char)(auVar12._12_2_ >> 4),
                                           CONCAT15((char)(auVar12._10_2_ >> 4),
                                                    CONCAT14((char)(auVar12._8_2_ >> 4),
                                                             CONCAT13((char)(auVar12._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar12._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar12._2_2_ >> 4),(char)(auVar12._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
                uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
                auVar23._8_8_ =
                     (long)pauVar9 +
                     ((((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2) + 0x20) - (long)pauVar1)
                ;
                auVar23._0_8_ = pauVar1;
                return auVar23;
              }
              uVar4 = uVar4 >> 3;
              uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
              uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
              auVar15._8_8_ =
                   (long)pauVar9 +
                   ((((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2) + 0x10) - (long)pauVar1);
              auVar15._0_8_ = pauVar1;
              return auVar15;
            }
            uVar4 = uVar4 >> 3;
            uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
            uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
            auVar14._8_8_ =
                 (long)pauVar9 +
                 (((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2) - (long)pauVar1);
            auVar14._0_8_ = pauVar1;
            return auVar14;
          }
          pauVar8 = pauVar9 + 4;
        } while (pauVar9 + 3 <= pauVar2 + -4);
        pauVar9 = pauVar9 + 3;
      }
      for (; pauVar9 <= pauVar2 + -1; pauVar9 = pauVar9 + 1) {
        auVar12 = NEON_cmeq(auVar11,*pauVar9,1);
        uVar4 = CONCAT17((char)(auVar12._14_2_ >> 4),
                         CONCAT16((char)(auVar12._12_2_ >> 4),
                                  CONCAT15((char)(auVar12._10_2_ >> 4),
                                           CONCAT14((char)(auVar12._8_2_ >> 4),
                                                    CONCAT13((char)(auVar12._6_2_ >> 4),
                                                             CONCAT12((char)(auVar12._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar12._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar12._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar4 != 0) {
          uVar4 = uVar4 >> 3;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          auVar20._8_8_ =
               (undefined1 *)
               ((long)pauVar9 +
               (((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2) - (long)pauVar1));
          auVar20._0_8_ = pauVar1;
          return auVar20;
        }
      }
      if (pauVar9 < pauVar2) {
        auVar11 = NEON_cmeq(auVar11,pauVar2[-1],1);
        uVar4 = CONCAT17((char)(auVar11._14_2_ >> 4),
                         CONCAT16((char)(auVar11._12_2_ >> 4),
                                  CONCAT15((char)(auVar11._10_2_ >> 4),
                                           CONCAT14((char)(auVar11._8_2_ >> 4),
                                                    CONCAT13((char)(auVar11._6_2_ >> 4),
                                                             CONCAT12((char)(auVar11._4_2_ >> 4),
                                                                      CONCAT11((char)(auVar11._2_2_
                                                                                     >> 4),
                                                                               (char)(auVar11._0_2_
                                                                                     >> 4)))))))) &
                0x8888888888888888;
        if (uVar4 != 0) {
          uVar4 = uVar4 >> 3;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          auVar18._8_8_ =
               (long)(pauVar2 + -1) +
               (((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 2) - (long)pauVar1);
          auVar18._0_8_ = pauVar1;
          return auVar18;
        }
      }
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2;
  return auVar6 << 0x40;
}


// ===== 00a71050  <object::read::util::DebugByte_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::util::DebugByte as core::fmt::Debug>::fmt */

void __rustcall
<object::read::util::DebugByte_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00c20;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_003843e5,&local_20);
  return;
}


// ===== 00a7108c  <object::read::pe::export::ExportTarget_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::ExportTarget as core::fmt::Debug>::fmt */

void __rustcall
<object::read::pe::export::ExportTarget_as_core::fmt::Debug>::fmt(int *param_1,undefined8 *param_2)

{
  int *local_50;
  undefined8 uStack_48;
  int *local_40;
  undefined8 local_38;
  int **local_30;
  code *local_28;
  int **local_20;
  code *local_18;
  
  local_20 = &local_50;
  local_30 = &local_50;
  if (*param_1 == 0) {
    local_40 = param_1 + 1;
    local_30 = &local_40;
    local_28 = FUN_00a71664;
    core::fmt::write(*param_2,param_2[1],&DAT_003843f0,&local_30);
    return;
  }
  if (*param_1 == 1) {
    local_40 = *(int **)(param_1 + 2);
    local_38 = *(undefined8 *)(param_1 + 4);
    local_50 = param_1 + 1;
    local_30 = &local_40;
    local_28 = (code *)PTR_fmt_00b013a8;
    local_18 = FUN_00a715c8;
    core::fmt::write(*param_2,param_2[1],&DAT_002af789,&local_30);
    return;
  }
  local_50 = *(int **)(param_1 + 2);
  uStack_48 = *(undefined8 *)(param_1 + 4);
  local_40 = *(int **)(param_1 + 6);
  local_38 = *(undefined8 *)(param_1 + 8);
  local_28 = (code *)PTR_fmt_00b013a8;
  local_20 = &local_40;
  local_18 = (code *)PTR_fmt_00b013a8;
  core::fmt::write(*param_2,param_2[1],&DAT_002ab498,&local_30);
  return;
}


// ===== 00a7117c  <object::read::pe::import::ImportDescriptorIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::ImportDescriptorIterator as
   core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::pe::import::ImportDescriptorIterator_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  if ((ulong)param_2[1] < 0x14) {
    *param_2 = 1;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    param_1[1] = &DAT_0038428b;
    param_1[2] = 0x21;
    *param_1 = 1;
    return;
  }
  piVar2 = (int *)*param_2;
  iVar1 = *piVar2;
  *param_2 = piVar2 + 5;
  param_2[1] = param_2[1] - 0x14;
  if ((((iVar1 == 0) && (piVar2[1] == 0)) && (piVar2[2] == 0)) &&
     ((piVar2[3] == 0 && (piVar2[4] == 0)))) {
    *param_1 = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  }
  param_1[1] = 0;
  param_1[2] = piVar2;
  *param_1 = 1;
  return;
}


// ===== 00a71210  <object::read::macho::function_starts::FunctionStartsIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::macho::function_starts::FunctionStartsIterator as
   core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::macho::function_starts::FunctionStartsIterator_as_core::iter::traits::iterator::Iterator>
::next(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2[1] == 0) {
    *param_1 = 0;
    return;
  }
  uVar3 = 0;
  uVar4 = 0;
  lVar5 = 1 - param_2[1];
  pbVar2 = (byte *)*param_2;
  do {
    bVar1 = *pbVar2;
    if (((int)uVar4 == 0x3f) && (1 < bVar1)) break;
    uVar3 = ((ulong)bVar1 & 0x7f) << (uVar4 & 0x3f) | uVar3;
    if (-1 < (char)bVar1) {
      *param_2 = pbVar2 + 1;
      param_2[1] = -lVar5;
      if (uVar3 == 0) {
        *param_1 = 0;
        *param_2 = 1;
        param_2[1] = 0;
        return;
      }
      lVar5 = param_2[2] + uVar3;
      if (!CARRY8(param_2[2],uVar3)) {
        param_2[2] = lVar5;
        param_1[1] = 0;
        param_1[2] = lVar5;
        *param_1 = 1;
        return;
      }
      param_1[1] = &DAT_003842e7;
      param_1[2] = 0x26;
      *param_2 = 1;
      param_2[1] = 0;
      *param_1 = 1;
      return;
    }
    lVar5 = lVar5 + 1;
    uVar4 = (ulong)((int)uVar4 + 7);
    pbVar2 = pbVar2 + 1;
  } while (lVar5 != 1);
  param_1[1] = &DAT_0038430d;
  param_1[2] = 0x25;
  *param_2 = 1;
  param_2[1] = 0;
  *param_1 = 1;
  return;
}


// ===== 00a712ec  <object::read::util::DebugLen_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::util::DebugLen as core::fmt::Debug>::fmt */

void __rustcall
<object::read::util::DebugLen_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00c10;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002ae8f1,&local_20);
  return;
}


// ===== 00a71328  FUN_00a71328 =====

void FUN_00a71328(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00384670 + *(int *)(&DAT_00384670 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_00384610 + (ulong)*param_1 * 8));
  return;
}


// ===== 00a71350  FUN_00a71350 =====

void FUN_00a71350(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"SymbolIndex",0xb,&local_18,&DAT_00afcb88);
  return;
}


// ===== 00a71394  FUN_00a71394 =====

void FUN_00a71394(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_00384469,0xc,&local_18,&DAT_00afcb88);
  return;
}


// ===== 00a713d8  FUN_00a713d8 =====

ulong FUN_00a713d8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long local_48;
  void *local_40;
  long *local_30;
  code *pcStack_28;
  
  <alloc::string::alloc::string::String>::from_utf8_lossy
            (&local_48,*(undefined8 *)*param_1,((undefined8 *)*param_1)[1]);
  pcStack_28 = FUN_00a731bc;
                    /* try { // try from 00a71414 to 00a71423 has its CatchHandler @ 00a71458 */
  local_30 = &local_48;
  uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_002a80cf,&local_30);
  if (0 < local_48) {
    uVar1 = uVar1 & 0xffffffff;
    free(local_40);
  }
  return uVar1;
}


// ===== 00a7147c  FUN_00a7147c =====

void FUN_00a7147c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  undefined *local_40;
  long *plStack_38;
  long local_30;
  undefined *puStack_28;
  
  lVar2 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_50,param_2,"Ptrauth",7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_50,"key",3,lVar2 + 2,&DAT_00afccc8);
  puStack_28 = PTR_fmt_00b00e50;
  plStack_38 = &local_30;
  local_40 = &DAT_0038459f;
  local_30 = lVar2;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"diversity",9,&local_40,&DAT_00afcb48);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002a1a10,8,lVar2 + 3,&DAT_00afcb08);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a71530  FUN_00a71530 =====

void FUN_00a71530(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a7154c  FUN_00a7154c =====

void FUN_00a7154c(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <usize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <usize_as_core::fmt::Display>::fmt();
    return;
  }
  <usize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a71568  FUN_00a71568 =====

void FUN_00a71568(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u32_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u32_as_core::fmt::Display>::fmt();
    return;
  }
  <u32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a71584  FUN_00a71584 =====

void FUN_00a71584(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u16_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u16_as_core::fmt::Display>::fmt();
    return;
  }
  <u16_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a715a0  FUN_00a715a0 =====

void FUN_00a715a0(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_00384708 + *(int *)(&DAT_00384708 + (ulong)*param_1 * 4),
             *(undefined8 *)(&DAT_003846a0 + (ulong)*param_1 * 8));
  return;
}


// ===== 00a715c8  FUN_00a715c8 =====

void FUN_00a715c8(undefined8 *param_1)

{
  <u32_as_core::fmt::Display>::fmt(*param_1);
  return;
}


// ===== 00a715d0  FUN_00a715d0 =====

void FUN_00a715d0(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  local_18 = param_1 + 1;
  if (*param_1 == 0) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_003844f1,6,&local_18,&DAT_00afca28);
    return;
  }
  if (*param_1 == 1) {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_003844f7,7,&local_18,&DAT_00afca48);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_0038440c,8);
  return;
}


// ===== 00a71664  FUN_00a71664 =====

void FUN_00a71664(undefined8 *param_1)

{
  <u32_as_core::fmt::LowerHex>::fmt(*param_1);
  return;
}


// ===== 00a7166c  FUN_00a7166c =====

void FUN_00a7166c(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *local_18;
  
  bVar1 = *param_1;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      local_18 = param_1 + 1;
      <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
                (param_2,&DAT_00384475,7,"kind",4,param_1 + 3,&DAT_00afca68,&DAT_002a11b8,8,
                 param_1 + 2,&DAT_00afca88,&DAT_002bd23c,4,&local_18,&DAT_00afcaa8);
      return;
    }
    local_18 = param_1 + 4;
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
              (param_2,&DAT_003844fe,3,&DAT_00384501,6,&local_18,&DAT_00afcac8);
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 == 3) {
      local_18 = param_1 + 2;
      <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field1_finish
                (param_2,"Coff",4,&DAT_00384513,3,&local_18,&DAT_00afcb28);
      return;
    }
    local_18 = param_1 + 2;
    <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
              (param_2,&DAT_00384516,5,&DAT_0038451b,7,param_1 + 1,&DAT_00afcae8,&DAT_00384522,7,
               &local_18,&DAT_00afcaa8);
    return;
  }
  local_18 = param_1 + 2;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_00384507,5,&DAT_00384501,6,param_1 + 1,&DAT_00afcae8,&DAT_0038450c,7,
             param_1 + 3,&DAT_00afcb08,&DAT_002a1a60,8,&local_18,&DAT_00afcaa8);
  return;
}


// ===== 00a7186c  <object::common::Permissions_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::common::Permissions as core::fmt::Debug>::fmt */

void __rustcall
<object::common::Permissions_as_core::fmt::Debug>::fmt(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined *puStack_28;
  undefined4 *local_20;
  undefined *puStack_18;
  
  local_40 = &local_4c;
  bVar1 = *param_1;
  local_30 = &local_48;
  puStack_38 = PTR_fmt_00b00ee0;
  puStack_28 = PTR_fmt_00b00ee0;
  local_48 = 0x2d;
  local_4c = local_48;
  if ((bVar1 & 1) != 0) {
    local_4c = 0x52;
  }
  if ((bVar1 & 2) != 0) {
    local_48 = 0x57;
  }
  uStack_44 = 0x2d;
  if ((bVar1 & 4) != 0) {
    uStack_44 = 0x58;
  }
  local_20 = &uStack_44;
  puStack_18 = PTR_fmt_00b00ee0;
  core::fmt::write(*param_2,param_2[1],&DAT_002b0515,&local_40);
  return;
}


// ===== 00a718ec  <object::read::util::ByteString_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::util::ByteString as core::fmt::Debug>::fmt */

ulong __rustcall
<object::read::util::ByteString_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long local_48;
  void *local_40;
  long *local_30;
  code *pcStack_28;
  
  <alloc::string::alloc::string::String>::from_utf8_lossy(&local_48,*param_1,param_1[1]);
  pcStack_28 = FUN_00a731bc;
                    /* try { // try from 00a71928 to 00a71937 has its CatchHandler @ 00a7196c */
  local_30 = &local_48;
  uVar1 = core::fmt::write(*param_2,param_2[1],&DAT_002a80cf,&local_30);
  if (0 < local_48) {
    uVar1 = uVar1 & 0xffffffff;
    free(local_40);
  }
  return uVar1;
}


// ===== 00a71990  <object::read::archive::ArchiveSymbolIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::archive::ArchiveSymbolIterator as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::archive::ArchiveSymbolIterator_as_core::iter::traits::iterator::Iterator>::next
          (long *param_1,long *param_2)

{
  uint *puVar1;
  ulong *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*in_x14) [16];
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  lVar9 = *param_2;
  if (lVar9 < 3) {
    if (lVar9 == 0) goto LAB_00a7224c;
    if (lVar9 == 1) {
      puVar1 = (uint *)param_2[1];
      if (puVar1 == (uint *)param_2[2]) {
LAB_00a71bd4:
        *param_1 = 0;
        return;
      }
      pauVar13 = (undefined1 (*) [16])param_2[4];
      uVar4 = *puVar1;
      param_2[1] = (long)(puVar1 + 1);
      if (pauVar13 == (undefined1 (*) [16])0x0) {
LAB_00a72204:
        pauVar10 = (undefined1 (*) [16])0x0;
        puVar14 = &DAT_00000001;
      }
      else {
        pauVar10 = (undefined1 (*) [16])param_2[3];
        if (pauVar13 < (undefined1 (*) [16])0x10) {
          puVar14 = &DAT_00000001;
          pauVar16 = pauVar10;
          pauVar11 = pauVar13;
          do {
            if ((*pauVar16)[0] == '\0') goto LAB_00a71c00;
            pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xf);
            pauVar16 = (undefined1 (*) [16])(*pauVar16 + 1);
          } while (pauVar11 != (undefined1 (*) [16])0x0);
          pauVar13 = (undefined1 (*) [16])0x0;
          pauVar10 = (undefined1 (*) [16])0x0;
          in_x14 = (undefined1 (*) [16])0x0;
        }
        else {
          auVar19 = NEON_cmeq(*pauVar10,0,1);
          uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                            CONCAT16((char)(auVar19._12_2_ >> 4),
                                     CONCAT15((char)(auVar19._10_2_ >> 4),
                                              CONCAT14((char)(auVar19._8_2_ >> 4),
                                                       CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar19.
                                                  _2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar15 == 0) {
            pauVar18 = (undefined1 (*) [16])(0x10 - ((ulong)pauVar10 & 0xf));
            pauVar11 = (undefined1 (*) [16])(*pauVar13 + (long)*pauVar10);
            pauVar16 = (undefined1 (*) [16])((long)pauVar10 + (long)pauVar18);
            if (((undefined1 (*) [16])0x3f < pauVar13) && (pauVar18 <= pauVar13 + -4)) {
              pauVar18 = (undefined1 (*) [16])((long)pauVar10 + (0x20 - ((ulong)pauVar10 & 0xf)));
              do {
                pauVar16 = pauVar18;
                uVar7 = *(undefined8 *)(pauVar16[2] + 8);
                auVar22 = NEON_cmeq(pauVar16[-1],0,1);
                auVar21 = NEON_cmeq(*pauVar16,0,1);
                auVar20 = NEON_cmeq(pauVar16[1],0,1);
                auVar6[9] = (char)((ulong)uVar7 >> 8);
                auVar6._0_9_ = *(unkbyte9 *)pauVar16[2];
                auVar6[10] = (char)((ulong)uVar7 >> 0x10);
                auVar6[0xb] = (char)((ulong)uVar7 >> 0x18);
                auVar6[0xc] = (char)((ulong)uVar7 >> 0x20);
                auVar6[0xd] = (char)((ulong)uVar7 >> 0x28);
                auVar6[0xe] = (char)((ulong)uVar7 >> 0x30);
                auVar6[0xf] = (char)((ulong)uVar7 >> 0x38);
                auVar19 = NEON_cmeq(auVar6,0,1);
                auVar23[0] = auVar21[0] | auVar22[0] | auVar20[0] | auVar19[0];
                auVar23[1] = auVar21[1] | auVar22[1] | auVar20[1] | auVar19[1];
                auVar23[2] = auVar21[2] | auVar22[2] | auVar20[2] | auVar19[2];
                auVar23[3] = auVar21[3] | auVar22[3] | auVar20[3] | auVar19[3];
                auVar23[4] = auVar21[4] | auVar22[4] | auVar20[4] | auVar19[4];
                auVar23[5] = auVar21[5] | auVar22[5] | auVar20[5] | auVar19[5];
                auVar23[6] = auVar21[6] | auVar22[6] | auVar20[6] | auVar19[6];
                auVar23[7] = auVar21[7] | auVar22[7] | auVar20[7] | auVar19[7];
                auVar23[8] = auVar21[8] | auVar22[8] | auVar20[8] | auVar19[8];
                auVar23[9] = auVar21[9] | auVar22[9] | auVar20[9] | auVar19[9];
                auVar23[10] = auVar21[10] | auVar22[10] | auVar20[10] | auVar19[10];
                auVar23[0xb] = auVar21[0xb] | auVar22[0xb] | auVar20[0xb] | auVar19[0xb];
                auVar23[0xc] = auVar21[0xc] | auVar22[0xc] | auVar20[0xc] | auVar19[0xc];
                auVar23[0xd] = auVar21[0xd] | auVar22[0xd] | auVar20[0xd] | auVar19[0xd];
                auVar23[0xe] = auVar21[0xe] | auVar22[0xe] | auVar20[0xe] | auVar19[0xe];
                auVar23[0xf] = auVar21[0xf] | auVar22[0xf] | auVar20[0xf] | auVar19[0xf];
                auVar24 = NEON_umaxp(auVar23,auVar23,1);
                if (auVar24._0_8_ != 0) {
                  uVar15 = CONCAT17((char)(auVar22._14_2_ >> 4),
                                    CONCAT16((char)(auVar22._12_2_ >> 4),
                                             CONCAT15((char)(auVar22._10_2_ >> 4),
                                                      CONCAT14((char)(auVar22._8_2_ >> 4),
                                                               CONCAT13((char)(auVar22._6_2_ >> 4),
                                                                        CONCAT12((char)(auVar22.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar22._2_2_ >> 4),
                                                           (char)(auVar22._0_2_ >> 4)))))))) &
                           0x8888888888888888;
                  if (uVar15 != 0) {
                    uVar15 = uVar15 >> 3;
                    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar15 & 0xffff0000ffff) << 0x10;
                    pauVar16 = (undefined1 (*) [16])
                               (pauVar16[-1] +
                               ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
                    goto LAB_00a71c00;
                  }
                  uVar15 = CONCAT17((char)(auVar21._14_2_ >> 4),
                                    CONCAT16((char)(auVar21._12_2_ >> 4),
                                             CONCAT15((char)(auVar21._10_2_ >> 4),
                                                      CONCAT14((char)(auVar21._8_2_ >> 4),
                                                               CONCAT13((char)(auVar21._6_2_ >> 4),
                                                                        CONCAT12((char)(auVar21.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar21._2_2_ >> 4),
                                                           (char)(auVar21._0_2_ >> 4)))))))) &
                           0x8888888888888888;
                  if (uVar15 != 0) {
                    uVar15 = uVar15 >> 3;
                    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar15 & 0xffff0000ffff) << 0x10;
                    uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
                    goto LAB_00a72338;
                  }
                  uVar15 = CONCAT17((char)(auVar20._14_2_ >> 4),
                                    CONCAT16((char)(auVar20._12_2_ >> 4),
                                             CONCAT15((char)(auVar20._10_2_ >> 4),
                                                      CONCAT14((char)(auVar20._8_2_ >> 4),
                                                               CONCAT13((char)(auVar20._6_2_ >> 4),
                                                                        CONCAT12((char)(auVar20.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar20._2_2_ >> 4),
                                                           (char)(auVar20._0_2_ >> 4)))))))) &
                           0x8888888888888888;
                  if (uVar15 == 0) {
                    uVar15 = (CONCAT17((char)(auVar19._14_2_ >> 4),
                                       CONCAT16((char)(auVar19._12_2_ >> 4),
                                                CONCAT15((char)(auVar19._10_2_ >> 4),
                                                         CONCAT14((char)(auVar19._8_2_ >> 4),
                                                                  CONCAT13((char)(auVar19._6_2_ >> 4
                                                                                 ),CONCAT12((char)(
                                                  auVar19._4_2_ >> 4),
                                                  CONCAT11((char)(auVar19._2_2_ >> 4),
                                                           (char)(auVar19._0_2_ >> 4)))))))) &
                             0x8888888888888888) >> 3;
                    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar15 & 0xffff0000ffff) << 0x10;
                    pauVar16 = (undefined1 (*) [16])
                               (pauVar16[2] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2)
                               );
                  }
                  else {
                    uVar15 = uVar15 >> 3;
                    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 |
                             (uVar15 & 0xffff0000ffff) << 0x10;
                    pauVar16 = (undefined1 (*) [16])
                               (pauVar16[1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2)
                               );
                  }
                  goto LAB_00a71c00;
                }
                pauVar18 = pauVar16 + 4;
              } while (pauVar16 + 3 <= pauVar11 + -4);
              pauVar16 = pauVar16 + 3;
            }
            in_x14 = pauVar11 + -1;
            if (pauVar16 <= in_x14) {
LAB_00a71e38:
              auVar19 = NEON_cmeq(*pauVar16,0,1);
              uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                                CONCAT16((char)(auVar19._12_2_ >> 4),
                                         CONCAT15((char)(auVar19._10_2_ >> 4),
                                                  CONCAT14((char)(auVar19._8_2_ >> 4),
                                                           CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar19._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 == 0) goto code_r0x00a71e50;
              uVar15 = uVar15 >> 3;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
LAB_00a72338:
              pauVar16 = (undefined1 (*) [16])(*pauVar16 + ((ulong)LZCOUNT(uVar15) >> 2));
              goto LAB_00a71c00;
            }
LAB_00a71e5c:
            if (pauVar16 < pauVar11) {
              auVar19 = NEON_cmeq(pauVar11[-1],0,1);
              uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                                CONCAT16((char)(auVar19._12_2_ >> 4),
                                         CONCAT15((char)(auVar19._10_2_ >> 4),
                                                  CONCAT14((char)(auVar19._8_2_ >> 4),
                                                           CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar19._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 != 0) {
                uVar15 = uVar15 >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                pauVar16 = (undefined1 (*) [16])
                           (pauVar11[-1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
                goto LAB_00a71c00;
              }
            }
            pauVar13 = (undefined1 (*) [16])0x0;
            goto LAB_00a72204;
          }
          uVar15 = uVar15 >> 3;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          pauVar16 = (undefined1 (*) [16])
                     (*pauVar10 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
LAB_00a71c00:
          in_x14 = (undefined1 (*) [16])((long)pauVar16 - (long)pauVar10);
          puVar14 = *pauVar16 + 1;
          lVar9 = 0;
          if (in_x14 <= pauVar13) {
            lVar9 = (long)pauVar13 - (long)in_x14;
          }
          pauVar13 = (undefined1 (*) [16])(lVar9 + -1);
        }
      }
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar12 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
    }
    else {
      puVar2 = (ulong *)param_2[1];
      if (puVar2 == (ulong *)param_2[2]) goto LAB_00a71bd4;
      pauVar13 = (undefined1 (*) [16])param_2[4];
      uVar15 = *puVar2;
      param_2[1] = (long)(puVar2 + 1);
      if (pauVar13 != (undefined1 (*) [16])0x0) {
        pauVar10 = (undefined1 (*) [16])param_2[3];
        pauVar16 = pauVar10;
        pauVar11 = pauVar13;
        if (pauVar13 < (undefined1 (*) [16])0x10) {
          do {
            if ((*pauVar16)[0] == '\0') goto LAB_00a71c3c;
            pauVar18 = pauVar11 + -1;
            pauVar16 = (undefined1 (*) [16])(*pauVar16 + 1);
            pauVar11 = (undefined1 (*) [16])(*pauVar18 + 0xf);
          } while ((undefined1 (*) [16])(*pauVar18 + 0xf) != (undefined1 (*) [16])0x0);
          pauVar13 = (undefined1 (*) [16])0x0;
          in_x14 = (undefined1 (*) [16])0x0;
        }
        else {
          auVar19 = NEON_cmeq(*pauVar10,0,1);
          uVar12 = CONCAT17((char)(auVar19._14_2_ >> 4),
                            CONCAT16((char)(auVar19._12_2_ >> 4),
                                     CONCAT15((char)(auVar19._10_2_ >> 4),
                                              CONCAT14((char)(auVar19._8_2_ >> 4),
                                                       CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar19.
                                                  _2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar12 != 0) {
            uVar12 = uVar12 >> 3;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            pauVar16 = (undefined1 (*) [16])
                       (*pauVar10 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
LAB_00a71c3c:
            in_x14 = (undefined1 (*) [16])((long)pauVar16 - (long)pauVar10);
            puVar14 = *pauVar16 + 1;
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar15 >> 0x20 | uVar15 << 0x20;
            lVar9 = 0;
            if (in_x14 <= pauVar13) {
              lVar9 = (long)pauVar13 - (long)in_x14;
            }
            pauVar13 = (undefined1 (*) [16])(lVar9 + -1);
            goto LAB_00a72224;
          }
          pauVar18 = (undefined1 (*) [16])(0x10 - ((ulong)pauVar10 & 0xf));
          pauVar11 = (undefined1 (*) [16])(*pauVar13 + (long)*pauVar10);
          pauVar16 = (undefined1 (*) [16])((long)pauVar10 + (long)pauVar18);
          if (((undefined1 (*) [16])0x3f < pauVar13) && (pauVar18 <= pauVar13 + -4)) {
            pauVar18 = (undefined1 (*) [16])((long)pauVar10 + (0x20 - ((ulong)pauVar10 & 0xf)));
            do {
              pauVar16 = pauVar18;
              uVar7 = *(undefined8 *)(pauVar16[2] + 8);
              auVar24 = NEON_cmeq(pauVar16[-1],0,1);
              auVar21 = NEON_cmeq(*pauVar16,0,1);
              auVar20 = NEON_cmeq(pauVar16[1],0,1);
              auVar22[9] = (char)((ulong)uVar7 >> 8);
              auVar22._0_9_ = *(unkbyte9 *)pauVar16[2];
              auVar22[10] = (char)((ulong)uVar7 >> 0x10);
              auVar22[0xb] = (char)((ulong)uVar7 >> 0x18);
              auVar22[0xc] = (char)((ulong)uVar7 >> 0x20);
              auVar22[0xd] = (char)((ulong)uVar7 >> 0x28);
              auVar22[0xe] = (char)((ulong)uVar7 >> 0x30);
              auVar22[0xf] = (char)((ulong)uVar7 >> 0x38);
              auVar19 = NEON_cmeq(auVar22,0,1);
              auVar25[0] = auVar21[0] | auVar24[0] | auVar20[0] | auVar19[0];
              auVar25[1] = auVar21[1] | auVar24[1] | auVar20[1] | auVar19[1];
              auVar25[2] = auVar21[2] | auVar24[2] | auVar20[2] | auVar19[2];
              auVar25[3] = auVar21[3] | auVar24[3] | auVar20[3] | auVar19[3];
              auVar25[4] = auVar21[4] | auVar24[4] | auVar20[4] | auVar19[4];
              auVar25[5] = auVar21[5] | auVar24[5] | auVar20[5] | auVar19[5];
              auVar25[6] = auVar21[6] | auVar24[6] | auVar20[6] | auVar19[6];
              auVar25[7] = auVar21[7] | auVar24[7] | auVar20[7] | auVar19[7];
              auVar25[8] = auVar21[8] | auVar24[8] | auVar20[8] | auVar19[8];
              auVar25[9] = auVar21[9] | auVar24[9] | auVar20[9] | auVar19[9];
              auVar25[10] = auVar21[10] | auVar24[10] | auVar20[10] | auVar19[10];
              auVar25[0xb] = auVar21[0xb] | auVar24[0xb] | auVar20[0xb] | auVar19[0xb];
              auVar25[0xc] = auVar21[0xc] | auVar24[0xc] | auVar20[0xc] | auVar19[0xc];
              auVar25[0xd] = auVar21[0xd] | auVar24[0xd] | auVar20[0xd] | auVar19[0xd];
              auVar25[0xe] = auVar21[0xe] | auVar24[0xe] | auVar20[0xe] | auVar19[0xe];
              auVar25[0xf] = auVar21[0xf] | auVar24[0xf] | auVar20[0xf] | auVar19[0xf];
              auVar22 = NEON_umaxp(auVar25,auVar25,1);
              if (auVar22._0_8_ != 0) {
                uVar12 = CONCAT17((char)(auVar24._14_2_ >> 4),
                                  CONCAT16((char)(auVar24._12_2_ >> 4),
                                           CONCAT15((char)(auVar24._10_2_ >> 4),
                                                    CONCAT14((char)(auVar24._8_2_ >> 4),
                                                             CONCAT13((char)(auVar24._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar24._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar24._2_2_ >> 4),(char)(auVar24._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888;
                if (uVar12 != 0) {
                  uVar12 = uVar12 >> 3;
                  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  pauVar16 = (undefined1 (*) [16])
                             (pauVar16[-1] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2))
                  ;
                  goto LAB_00a71c3c;
                }
                uVar12 = CONCAT17((char)(auVar21._14_2_ >> 4),
                                  CONCAT16((char)(auVar21._12_2_ >> 4),
                                           CONCAT15((char)(auVar21._10_2_ >> 4),
                                                    CONCAT14((char)(auVar21._8_2_ >> 4),
                                                             CONCAT13((char)(auVar21._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar21._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar21._2_2_ >> 4),(char)(auVar21._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888;
                if (uVar12 != 0) {
                  uVar12 = uVar12 >> 3;
                  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
                  goto LAB_00a72358;
                }
                uVar12 = CONCAT17((char)(auVar20._14_2_ >> 4),
                                  CONCAT16((char)(auVar20._12_2_ >> 4),
                                           CONCAT15((char)(auVar20._10_2_ >> 4),
                                                    CONCAT14((char)(auVar20._8_2_ >> 4),
                                                             CONCAT13((char)(auVar20._6_2_ >> 4),
                                                                      CONCAT12((char)(auVar20._4_2_
                                                                                     >> 4),
                                                                               CONCAT11((char)(
                                                  auVar20._2_2_ >> 4),(char)(auVar20._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888;
                if (uVar12 == 0) {
                  uVar12 = (CONCAT17((char)(auVar19._14_2_ >> 4),
                                     CONCAT16((char)(auVar19._12_2_ >> 4),
                                              CONCAT15((char)(auVar19._10_2_ >> 4),
                                                       CONCAT14((char)(auVar19._8_2_ >> 4),
                                                                CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                         CONCAT12((char)(auVar19.
                                                  _4_2_ >> 4),
                                                  CONCAT11((char)(auVar19._2_2_ >> 4),
                                                           (char)(auVar19._0_2_ >> 4)))))))) &
                           0x8888888888888888) >> 3;
                  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  pauVar16 = (undefined1 (*) [16])
                             (pauVar16[2] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
                }
                else {
                  uVar12 = uVar12 >> 3;
                  uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10
                  ;
                  pauVar16 = (undefined1 (*) [16])
                             (pauVar16[1] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
                }
                goto LAB_00a71c3c;
              }
              pauVar18 = pauVar16 + 4;
            } while (pauVar16 + 3 <= pauVar11 + -4);
            pauVar16 = pauVar16 + 3;
          }
          in_x14 = pauVar11 + -1;
          if (pauVar16 <= in_x14) {
LAB_00a71f14:
            auVar19 = NEON_cmeq(*pauVar16,0,1);
            uVar12 = CONCAT17((char)(auVar19._14_2_ >> 4),
                              CONCAT16((char)(auVar19._12_2_ >> 4),
                                       CONCAT15((char)(auVar19._10_2_ >> 4),
                                                CONCAT14((char)(auVar19._8_2_ >> 4),
                                                         CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar19._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar12 == 0) goto code_r0x00a71f2c;
            uVar12 = uVar12 >> 3;
            uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
            uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
            uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
LAB_00a72358:
            pauVar16 = (undefined1 (*) [16])(*pauVar16 + ((ulong)LZCOUNT(uVar12) >> 2));
            goto LAB_00a71c3c;
          }
LAB_00a71f38:
          if (pauVar16 < pauVar11) {
            auVar19 = NEON_cmeq(pauVar11[-1],0,1);
            uVar12 = CONCAT17((char)(auVar19._14_2_ >> 4),
                              CONCAT16((char)(auVar19._12_2_ >> 4),
                                       CONCAT15((char)(auVar19._10_2_ >> 4),
                                                CONCAT14((char)(auVar19._8_2_ >> 4),
                                                         CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar19._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar12 != 0) {
              uVar12 = uVar12 >> 3;
              uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
              uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
              pauVar16 = (undefined1 (*) [16])
                         (pauVar11[-1] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
              goto LAB_00a71c3c;
            }
          }
          pauVar13 = (undefined1 (*) [16])0x0;
        }
      }
      puVar14 = &DAT_00000001;
      pauVar10 = (undefined1 (*) [16])0x0;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar15 >> 0x20 | uVar15 << 0x20;
    }
LAB_00a72224:
    param_2[3] = (long)puVar14;
    param_2[4] = (long)pauVar13;
    uVar15 = 0x1b;
    if (pauVar10 != (undefined1 (*) [16])0x0) {
      uVar15 = uVar12;
    }
    pauVar18 = (undefined1 (*) [16])&DAT_00384529;
    if (pauVar10 != (undefined1 (*) [16])0x0) {
      pauVar18 = in_x14;
    }
  }
  else if (lVar9 == 3) {
    puVar1 = (uint *)param_2[1];
    if (puVar1 == (uint *)param_2[2]) goto LAB_00a71bd4;
    uVar17 = param_2[4];
    uVar12 = (ulong)*puVar1;
    param_2[1] = (long)(puVar1 + 2);
    uVar15 = uVar17 - uVar12;
    if ((uVar17 < uVar12) || (uVar15 == 0)) {
LAB_00a71ae4:
      pauVar10 = (undefined1 (*) [16])0x0;
    }
    else {
      lVar9 = param_2[3];
      pauVar13 = (undefined1 (*) [16])(lVar9 + uVar12);
      pauVar16 = (undefined1 (*) [16])(lVar9 + uVar17);
      if (uVar15 < 0x10) {
        pauVar11 = pauVar13;
        for (uVar12 = uVar15 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          if ((*pauVar11)[0] == '\0') goto LAB_00a71d7c;
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + 1);
        }
        if (3 < uVar15) {
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + 3);
          uVar15 = 0x22;
          do {
            if (pauVar11[-1][0xd] == '\0') {
              pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xd);
              goto LAB_00a71d7c;
            }
            if (pauVar11[-1][0xe] == '\0') {
              pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xe);
              goto LAB_00a71d7c;
            }
            if (pauVar11[-1][0xf] == '\0') {
              pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xf);
              goto LAB_00a71d7c;
            }
            if ((*pauVar11)[0] == '\0') goto LAB_00a71d7c;
            puVar8 = *pauVar11;
            pauVar10 = (undefined1 (*) [16])0x0;
            pauVar11 = (undefined1 (*) [16])(*pauVar11 + 4);
            pauVar18 = (undefined1 (*) [16])&DAT_00384544;
          } while ((undefined1 (*) [16])(puVar8 + 1) != pauVar16);
          goto LAB_00a72240;
        }
        goto LAB_00a71ae4;
      }
      auVar19 = NEON_cmeq(*pauVar13,0,1);
      uVar17 = CONCAT17((char)(auVar19._14_2_ >> 4),
                        CONCAT16((char)(auVar19._12_2_ >> 4),
                                 CONCAT15((char)(auVar19._10_2_ >> 4),
                                          CONCAT14((char)(auVar19._8_2_ >> 4),
                                                   CONCAT13((char)(auVar19._6_2_ >> 4),
                                                            CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                     CONCAT11((char)(auVar19._2_2_
                                                                                    >> 4),
                                                                              (char)(auVar19._0_2_
                                                                                    >> 4)))))))) &
               0x8888888888888888;
      if (uVar17 != 0) {
        uVar17 = uVar17 >> 3;
        uVar15 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        pauVar11 = (undefined1 (*) [16])
                   (*pauVar13 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
LAB_00a71d7c:
        uVar15 = (ulong)puVar1[1];
        pauVar10 = pauVar13;
        goto LAB_00a72394;
      }
      uVar17 = 0x10 - ((ulong)pauVar13 & 0xf);
      pauVar11 = (undefined1 (*) [16])((long)pauVar13 + uVar17);
      if ((0x3f < uVar15) && (uVar17 <= uVar15 - 0x40)) {
        pauVar10 = (undefined1 (*) [16])((uVar12 - ((ulong)pauVar13 & 0xf)) + lVar9 + 0x20);
        do {
          pauVar11 = pauVar10;
          uVar7 = *(undefined8 *)(pauVar11[2] + 8);
          auVar22 = NEON_cmeq(pauVar11[-1],0,1);
          auVar21 = NEON_cmeq(*pauVar11,0,1);
          auVar20 = NEON_cmeq(pauVar11[1],0,1);
          auVar19[9] = (char)((ulong)uVar7 >> 8);
          auVar19._0_9_ = *(unkbyte9 *)pauVar11[2];
          auVar19[10] = (char)((ulong)uVar7 >> 0x10);
          auVar19[0xb] = (char)((ulong)uVar7 >> 0x18);
          auVar19[0xc] = (char)((ulong)uVar7 >> 0x20);
          auVar19[0xd] = (char)((ulong)uVar7 >> 0x28);
          auVar19[0xe] = (char)((ulong)uVar7 >> 0x30);
          auVar19[0xf] = (char)((ulong)uVar7 >> 0x38);
          auVar19 = NEON_cmeq(auVar19,0,1);
          auVar24[0] = auVar21[0] | auVar22[0] | auVar20[0] | auVar19[0];
          auVar24[1] = auVar21[1] | auVar22[1] | auVar20[1] | auVar19[1];
          auVar24[2] = auVar21[2] | auVar22[2] | auVar20[2] | auVar19[2];
          auVar24[3] = auVar21[3] | auVar22[3] | auVar20[3] | auVar19[3];
          auVar24[4] = auVar21[4] | auVar22[4] | auVar20[4] | auVar19[4];
          auVar24[5] = auVar21[5] | auVar22[5] | auVar20[5] | auVar19[5];
          auVar24[6] = auVar21[6] | auVar22[6] | auVar20[6] | auVar19[6];
          auVar24[7] = auVar21[7] | auVar22[7] | auVar20[7] | auVar19[7];
          auVar24[8] = auVar21[8] | auVar22[8] | auVar20[8] | auVar19[8];
          auVar24[9] = auVar21[9] | auVar22[9] | auVar20[9] | auVar19[9];
          auVar24[10] = auVar21[10] | auVar22[10] | auVar20[10] | auVar19[10];
          auVar24[0xb] = auVar21[0xb] | auVar22[0xb] | auVar20[0xb] | auVar19[0xb];
          auVar24[0xc] = auVar21[0xc] | auVar22[0xc] | auVar20[0xc] | auVar19[0xc];
          auVar24[0xd] = auVar21[0xd] | auVar22[0xd] | auVar20[0xd] | auVar19[0xd];
          auVar24[0xe] = auVar21[0xe] | auVar22[0xe] | auVar20[0xe] | auVar19[0xe];
          auVar24[0xf] = auVar21[0xf] | auVar22[0xf] | auVar20[0xf] | auVar19[0xf];
          auVar24 = NEON_umaxp(auVar24,auVar24,1);
          if (auVar24._0_8_ != 0) {
            uVar15 = CONCAT17((char)(auVar22._14_2_ >> 4),
                              CONCAT16((char)(auVar22._12_2_ >> 4),
                                       CONCAT15((char)(auVar22._10_2_ >> 4),
                                                CONCAT14((char)(auVar22._8_2_ >> 4),
                                                         CONCAT13((char)(auVar22._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar22._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar22._2_2_ >> 4),(char)(auVar22._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar15 != 0) {
              uVar15 = uVar15 >> 3;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              pauVar11 = (undefined1 (*) [16])
                         (pauVar11[-1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
              goto LAB_00a71d7c;
            }
            uVar15 = CONCAT17((char)(auVar21._14_2_ >> 4),
                              CONCAT16((char)(auVar21._12_2_ >> 4),
                                       CONCAT15((char)(auVar21._10_2_ >> 4),
                                                CONCAT14((char)(auVar21._8_2_ >> 4),
                                                         CONCAT13((char)(auVar21._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar21._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar21._2_2_ >> 4),(char)(auVar21._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar15 != 0) {
              uVar15 = uVar15 >> 3;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
              goto LAB_00a723ec;
            }
            uVar15 = CONCAT17((char)(auVar20._14_2_ >> 4),
                              CONCAT16((char)(auVar20._12_2_ >> 4),
                                       CONCAT15((char)(auVar20._10_2_ >> 4),
                                                CONCAT14((char)(auVar20._8_2_ >> 4),
                                                         CONCAT13((char)(auVar20._6_2_ >> 4),
                                                                  CONCAT12((char)(auVar20._4_2_ >> 4
                                                                                 ),CONCAT11((char)(
                                                  auVar20._2_2_ >> 4),(char)(auVar20._0_2_ >> 4)))))
                                               ))) & 0x8888888888888888;
            if (uVar15 == 0) {
              uVar15 = (CONCAT17((char)(auVar19._14_2_ >> 4),
                                 CONCAT16((char)(auVar19._12_2_ >> 4),
                                          CONCAT15((char)(auVar19._10_2_ >> 4),
                                                   CONCAT14((char)(auVar19._8_2_ >> 4),
                                                            CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                     CONCAT12((char)(auVar19._4_2_
                                                                                    >> 4),
                                                                              CONCAT11((char)(
                                                  auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              pauVar11 = (undefined1 (*) [16])
                         (pauVar11[2] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
            }
            else {
              uVar15 = uVar15 >> 3;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              pauVar11 = (undefined1 (*) [16])
                         (pauVar11[1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
            }
            goto LAB_00a71d7c;
          }
          pauVar10 = pauVar11 + 4;
        } while (pauVar11 + 3 <= pauVar16 + -4);
        pauVar11 = pauVar11 + 3;
      }
      if (pauVar11 <= pauVar16 + -1) {
LAB_00a720cc:
        auVar19 = NEON_cmeq(*pauVar11,0,1);
        uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                          CONCAT16((char)(auVar19._12_2_ >> 4),
                                   CONCAT15((char)(auVar19._10_2_ >> 4),
                                            CONCAT14((char)(auVar19._8_2_ >> 4),
                                                     CONCAT13((char)(auVar19._6_2_ >> 4),
                                                              CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar19._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar19._0_2_
                                                                                      >> 4)))))))) &
                 0x8888888888888888;
        if (uVar15 == 0) goto code_r0x00a720e4;
        uVar15 = uVar15 >> 3;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
LAB_00a723ec:
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + ((ulong)LZCOUNT(uVar15) >> 2));
        goto LAB_00a71d7c;
      }
LAB_00a720f0:
      if (pauVar16 <= pauVar11) goto LAB_00a71ae4;
      auVar19 = NEON_cmeq(pauVar16[-1],0,1);
      pauVar10 = (undefined1 (*) [16])
                 (CONCAT17((char)(auVar19._14_2_ >> 4),
                           CONCAT16((char)(auVar19._12_2_ >> 4),
                                    CONCAT15((char)(auVar19._10_2_ >> 4),
                                             CONCAT14((char)(auVar19._8_2_ >> 4),
                                                      CONCAT13((char)(auVar19._6_2_ >> 4),
                                                               CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar19.
                                                  _2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))))) &
                 0x8888888888888888);
      if (pauVar10 != (undefined1 (*) [16])0x0) {
        uVar15 = ((ulong)pauVar10 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                 ((ulong)pauVar10 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        pauVar11 = (undefined1 (*) [16])
                   (pauVar16[-1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
        goto LAB_00a71d7c;
      }
    }
LAB_00a71ae8:
    uVar15 = 0x22;
    pauVar18 = (undefined1 (*) [16])&DAT_00384544;
  }
  else if (lVar9 == 4) {
    puVar2 = (ulong *)param_2[1];
    if (puVar2 == (ulong *)param_2[2]) goto LAB_00a71bd4;
    uVar17 = param_2[4];
    uVar12 = *puVar2;
    param_2[1] = (long)(puVar2 + 2);
    uVar15 = uVar17 - uVar12;
    if ((uVar17 < uVar12) || (uVar15 == 0)) goto LAB_00a71ae4;
    lVar9 = param_2[3];
    pauVar13 = (undefined1 (*) [16])(lVar9 + uVar12);
    pauVar16 = (undefined1 (*) [16])(lVar9 + uVar17);
    pauVar10 = pauVar13;
    if (uVar15 < 0x10) {
      pauVar11 = pauVar13;
      for (uVar12 = uVar15 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        if ((*pauVar11)[0] == '\0') goto LAB_00a72390;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 1);
      }
      if (uVar15 < 4) goto LAB_00a71ae4;
      pauVar11 = (undefined1 (*) [16])(*pauVar11 + 3);
      uVar15 = 0x22;
      while (pauVar11[-1][0xd] != '\0') {
        if (pauVar11[-1][0xe] == '\0') {
          uVar15 = puVar2[1];
          pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xe);
          pauVar10 = pauVar13;
          goto LAB_00a72394;
        }
        if (pauVar11[-1][0xf] == '\0') {
          uVar15 = puVar2[1];
          pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xf);
          pauVar10 = pauVar13;
          goto LAB_00a72394;
        }
        if ((*pauVar11)[0] == '\0') goto LAB_00a72390;
        puVar8 = *pauVar11;
        pauVar10 = (undefined1 (*) [16])0x0;
        pauVar11 = (undefined1 (*) [16])(*pauVar11 + 4);
        pauVar18 = (undefined1 (*) [16])&DAT_00384544;
        if ((undefined1 (*) [16])(puVar8 + 1) == pauVar16) goto LAB_00a72240;
      }
      pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xd);
LAB_00a72390:
      uVar15 = puVar2[1];
      pauVar10 = pauVar13;
    }
    else {
      auVar19 = NEON_cmeq(*pauVar13,0,1);
      uVar17 = CONCAT17((char)(auVar19._14_2_ >> 4),
                        CONCAT16((char)(auVar19._12_2_ >> 4),
                                 CONCAT15((char)(auVar19._10_2_ >> 4),
                                          CONCAT14((char)(auVar19._8_2_ >> 4),
                                                   CONCAT13((char)(auVar19._6_2_ >> 4),
                                                            CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                     CONCAT11((char)(auVar19._2_2_
                                                                                    >> 4),
                                                                              (char)(auVar19._0_2_
                                                                                    >> 4)))))))) &
               0x8888888888888888;
      if (uVar17 == 0) {
        uVar17 = 0x10 - ((ulong)pauVar13 & 0xf);
        pauVar11 = (undefined1 (*) [16])((long)pauVar13 + uVar17);
        if ((0x3f < uVar15) && (uVar17 <= uVar15 - 0x40)) {
          pauVar18 = (undefined1 (*) [16])((uVar12 - ((ulong)pauVar13 & 0xf)) + lVar9 + 0x20);
          do {
            pauVar11 = pauVar18;
            uVar7 = *(undefined8 *)(pauVar11[2] + 8);
            auVar24 = NEON_cmeq(pauVar11[-1],0,1);
            auVar22 = NEON_cmeq(*pauVar11,0,1);
            auVar20 = NEON_cmeq(pauVar11[1],0,1);
            auVar21[9] = (char)((ulong)uVar7 >> 8);
            auVar21._0_9_ = *(unkbyte9 *)pauVar11[2];
            auVar21[10] = (char)((ulong)uVar7 >> 0x10);
            auVar21[0xb] = (char)((ulong)uVar7 >> 0x18);
            auVar21[0xc] = (char)((ulong)uVar7 >> 0x20);
            auVar21[0xd] = (char)((ulong)uVar7 >> 0x28);
            auVar21[0xe] = (char)((ulong)uVar7 >> 0x30);
            auVar21[0xf] = (char)((ulong)uVar7 >> 0x38);
            auVar19 = NEON_cmeq(auVar21,0,1);
            auVar27[0] = auVar22[0] | auVar24[0] | auVar20[0] | auVar19[0];
            auVar27[1] = auVar22[1] | auVar24[1] | auVar20[1] | auVar19[1];
            auVar27[2] = auVar22[2] | auVar24[2] | auVar20[2] | auVar19[2];
            auVar27[3] = auVar22[3] | auVar24[3] | auVar20[3] | auVar19[3];
            auVar27[4] = auVar22[4] | auVar24[4] | auVar20[4] | auVar19[4];
            auVar27[5] = auVar22[5] | auVar24[5] | auVar20[5] | auVar19[5];
            auVar27[6] = auVar22[6] | auVar24[6] | auVar20[6] | auVar19[6];
            auVar27[7] = auVar22[7] | auVar24[7] | auVar20[7] | auVar19[7];
            auVar27[8] = auVar22[8] | auVar24[8] | auVar20[8] | auVar19[8];
            auVar27[9] = auVar22[9] | auVar24[9] | auVar20[9] | auVar19[9];
            auVar27[10] = auVar22[10] | auVar24[10] | auVar20[10] | auVar19[10];
            auVar27[0xb] = auVar22[0xb] | auVar24[0xb] | auVar20[0xb] | auVar19[0xb];
            auVar27[0xc] = auVar22[0xc] | auVar24[0xc] | auVar20[0xc] | auVar19[0xc];
            auVar27[0xd] = auVar22[0xd] | auVar24[0xd] | auVar20[0xd] | auVar19[0xd];
            auVar27[0xe] = auVar22[0xe] | auVar24[0xe] | auVar20[0xe] | auVar19[0xe];
            auVar27[0xf] = auVar22[0xf] | auVar24[0xf] | auVar20[0xf] | auVar19[0xf];
            auVar21 = NEON_umaxp(auVar27,auVar27,1);
            if (auVar21._0_8_ != 0) {
              uVar15 = CONCAT17((char)(auVar24._14_2_ >> 4),
                                CONCAT16((char)(auVar24._12_2_ >> 4),
                                         CONCAT15((char)(auVar24._10_2_ >> 4),
                                                  CONCAT14((char)(auVar24._8_2_ >> 4),
                                                           CONCAT13((char)(auVar24._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar24._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar24._2_2_ >> 4),(char)(auVar24._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 != 0) {
                uVar15 = uVar15 >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar15 = puVar2[1];
                pauVar11 = (undefined1 (*) [16])
                           (pauVar11[-1] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
                goto LAB_00a72394;
              }
              uVar15 = CONCAT17((char)(auVar22._14_2_ >> 4),
                                CONCAT16((char)(auVar22._12_2_ >> 4),
                                         CONCAT15((char)(auVar22._10_2_ >> 4),
                                                  CONCAT14((char)(auVar22._8_2_ >> 4),
                                                           CONCAT13((char)(auVar22._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar22._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar22._2_2_ >> 4),(char)(auVar22._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 != 0) {
                uVar15 = uVar15 >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar12 = uVar15 >> 0x20 | uVar15 << 0x20;
                goto LAB_00a7240c;
              }
              uVar15 = CONCAT17((char)(auVar20._14_2_ >> 4),
                                CONCAT16((char)(auVar20._12_2_ >> 4),
                                         CONCAT15((char)(auVar20._10_2_ >> 4),
                                                  CONCAT14((char)(auVar20._8_2_ >> 4),
                                                           CONCAT13((char)(auVar20._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar20._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar20._2_2_ >> 4),(char)(auVar20._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 == 0) {
                uVar15 = puVar2[1];
                uVar12 = (CONCAT17((char)(auVar19._14_2_ >> 4),
                                   CONCAT16((char)(auVar19._12_2_ >> 4),
                                            CONCAT15((char)(auVar19._10_2_ >> 4),
                                                     CONCAT14((char)(auVar19._8_2_ >> 4),
                                                              CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                       CONCAT12((char)(auVar19._4_2_
                                                                                      >> 4),
                                                                                CONCAT11((char)(
                                                  auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
                pauVar11 = (undefined1 (*) [16])
                           (pauVar11[2] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
              }
              else {
                uVar15 = uVar15 >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar12 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar15 = puVar2[1];
                pauVar11 = (undefined1 (*) [16])
                           (pauVar11[1] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
              }
              goto LAB_00a72394;
            }
            pauVar18 = pauVar11 + 4;
          } while (pauVar11 + 3 <= pauVar16 + -4);
          pauVar11 = pauVar11 + 3;
        }
        if (pauVar11 <= pauVar16 + -1) {
LAB_00a721a8:
          auVar19 = NEON_cmeq(*pauVar11,0,1);
          uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                            CONCAT16((char)(auVar19._12_2_ >> 4),
                                     CONCAT15((char)(auVar19._10_2_ >> 4),
                                              CONCAT14((char)(auVar19._8_2_ >> 4),
                                                       CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar19.
                                                  _2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar15 == 0) goto code_r0x00a721c0;
          uVar15 = uVar15 >> 3;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar15 >> 0x20 | uVar15 << 0x20;
LAB_00a7240c:
          uVar15 = puVar2[1];
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + ((ulong)LZCOUNT(uVar12) >> 2));
          goto LAB_00a72394;
        }
LAB_00a721cc:
        if (pauVar16 <= pauVar11) goto LAB_00a71ae4;
        auVar19 = NEON_cmeq(pauVar16[-1],0,1);
        pauVar10 = (undefined1 (*) [16])
                   (CONCAT17((char)(auVar19._14_2_ >> 4),
                             CONCAT16((char)(auVar19._12_2_ >> 4),
                                      CONCAT15((char)(auVar19._10_2_ >> 4),
                                               CONCAT14((char)(auVar19._8_2_ >> 4),
                                                        CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                 CONCAT12((char)(auVar19._4_2_ >> 4)
                                                                          ,CONCAT11((char)(auVar19.
                                                  _2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))))) &
                   0x8888888888888888);
        if (pauVar10 == (undefined1 (*) [16])0x0) goto LAB_00a71ae8;
        uVar15 = ((ulong)pauVar10 >> 3 & 0xf0f0f0f0f0f0f0f0) >> 4 |
                 ((ulong)pauVar10 >> 3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = puVar2[1];
        pauVar11 = (undefined1 (*) [16])
                   (pauVar16[-1] + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
        pauVar10 = pauVar13;
      }
      else {
        uVar17 = uVar17 >> 3;
        uVar15 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = puVar2[1];
        pauVar11 = (undefined1 (*) [16])
                   (*pauVar13 + ((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 2));
      }
    }
LAB_00a72394:
    pauVar18 = (undefined1 (*) [16])((long)pauVar11 - (long)pauVar10);
  }
  else {
    puVar3 = (ushort *)param_2[3];
    if (puVar3 == (ushort *)param_2[4]) goto LAB_00a71bd4;
    uVar5 = *puVar3;
    pauVar13 = (undefined1 (*) [16])param_2[6];
    uVar17 = param_2[2];
    param_2[3] = (long)(puVar3 + 1);
    uVar12 = (ulong)(uVar5 - 1) & 0xffff;
    if (pauVar13 != (undefined1 (*) [16])0x0) {
      pauVar10 = (undefined1 (*) [16])param_2[5];
      pauVar16 = pauVar10;
      pauVar11 = pauVar13;
      if (pauVar13 < (undefined1 (*) [16])0x10) {
        do {
          if ((*pauVar16)[0] == '\0') goto LAB_00a71c7c;
          pauVar18 = pauVar11 + -1;
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + 1);
          pauVar11 = (undefined1 (*) [16])(*pauVar18 + 0xf);
        } while ((undefined1 (*) [16])(*pauVar18 + 0xf) != (undefined1 (*) [16])0x0);
      }
      else {
        auVar19 = NEON_cmeq(*pauVar10,0,1);
        uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                          CONCAT16((char)(auVar19._12_2_ >> 4),
                                   CONCAT15((char)(auVar19._10_2_ >> 4),
                                            CONCAT14((char)(auVar19._8_2_ >> 4),
                                                     CONCAT13((char)(auVar19._6_2_ >> 4),
                                                              CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar19._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar19._0_2_
                                                                                      >> 4)))))))) &
                 0x8888888888888888;
        if (uVar15 != 0) {
          uVar15 = uVar15 >> 3;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          pauVar16 = (undefined1 (*) [16])
                     (*pauVar10 + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
LAB_00a71c7c:
          pauVar18 = (undefined1 (*) [16])((long)pauVar16 - (long)pauVar10);
          lVar9 = 0;
          if (pauVar18 <= pauVar13) {
            lVar9 = (long)pauVar13 - (long)pauVar18;
          }
          param_2[5] = (long)(*pauVar16 + 1);
          param_2[6] = lVar9 + -1;
          if (uVar12 < uVar17) {
            uVar15 = (ulong)*(uint *)(param_2[1] + uVar12 * 4);
          }
          else {
            uVar15 = 0x23;
            pauVar10 = (undefined1 (*) [16])0x0;
            pauVar18 = (undefined1 (*) [16])&UNK_00384566;
          }
          goto LAB_00a72240;
        }
        pauVar18 = (undefined1 (*) [16])(0x10 - ((ulong)pauVar10 & 0xf));
        pauVar11 = (undefined1 (*) [16])(*pauVar13 + (long)*pauVar10);
        pauVar16 = (undefined1 (*) [16])((long)pauVar10 + (long)pauVar18);
        if (((undefined1 (*) [16])0x3f < pauVar13) && (pauVar18 <= pauVar13 + -4)) {
          pauVar18 = (undefined1 (*) [16])((long)pauVar10 + (0x20 - ((ulong)pauVar10 & 0xf)));
          do {
            pauVar16 = pauVar18;
            uVar7 = *(undefined8 *)(pauVar16[2] + 8);
            auVar24 = NEON_cmeq(pauVar16[-1],0,1);
            auVar22 = NEON_cmeq(*pauVar16,0,1);
            auVar21 = NEON_cmeq(pauVar16[1],0,1);
            auVar20[9] = (char)((ulong)uVar7 >> 8);
            auVar20._0_9_ = *(unkbyte9 *)pauVar16[2];
            auVar20[10] = (char)((ulong)uVar7 >> 0x10);
            auVar20[0xb] = (char)((ulong)uVar7 >> 0x18);
            auVar20[0xc] = (char)((ulong)uVar7 >> 0x20);
            auVar20[0xd] = (char)((ulong)uVar7 >> 0x28);
            auVar20[0xe] = (char)((ulong)uVar7 >> 0x30);
            auVar20[0xf] = (char)((ulong)uVar7 >> 0x38);
            auVar19 = NEON_cmeq(auVar20,0,1);
            auVar26[0] = auVar22[0] | auVar24[0] | auVar21[0] | auVar19[0];
            auVar26[1] = auVar22[1] | auVar24[1] | auVar21[1] | auVar19[1];
            auVar26[2] = auVar22[2] | auVar24[2] | auVar21[2] | auVar19[2];
            auVar26[3] = auVar22[3] | auVar24[3] | auVar21[3] | auVar19[3];
            auVar26[4] = auVar22[4] | auVar24[4] | auVar21[4] | auVar19[4];
            auVar26[5] = auVar22[5] | auVar24[5] | auVar21[5] | auVar19[5];
            auVar26[6] = auVar22[6] | auVar24[6] | auVar21[6] | auVar19[6];
            auVar26[7] = auVar22[7] | auVar24[7] | auVar21[7] | auVar19[7];
            auVar26[8] = auVar22[8] | auVar24[8] | auVar21[8] | auVar19[8];
            auVar26[9] = auVar22[9] | auVar24[9] | auVar21[9] | auVar19[9];
            auVar26[10] = auVar22[10] | auVar24[10] | auVar21[10] | auVar19[10];
            auVar26[0xb] = auVar22[0xb] | auVar24[0xb] | auVar21[0xb] | auVar19[0xb];
            auVar26[0xc] = auVar22[0xc] | auVar24[0xc] | auVar21[0xc] | auVar19[0xc];
            auVar26[0xd] = auVar22[0xd] | auVar24[0xd] | auVar21[0xd] | auVar19[0xd];
            auVar26[0xe] = auVar22[0xe] | auVar24[0xe] | auVar21[0xe] | auVar19[0xe];
            auVar26[0xf] = auVar22[0xf] | auVar24[0xf] | auVar21[0xf] | auVar19[0xf];
            auVar20 = NEON_umaxp(auVar26,auVar26,1);
            if (auVar20._0_8_ != 0) {
              uVar15 = CONCAT17((char)(auVar24._14_2_ >> 4),
                                CONCAT16((char)(auVar24._12_2_ >> 4),
                                         CONCAT15((char)(auVar24._10_2_ >> 4),
                                                  CONCAT14((char)(auVar24._8_2_ >> 4),
                                                           CONCAT13((char)(auVar24._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar24._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar24._2_2_ >> 4),(char)(auVar24._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 != 0) {
                uVar15 = uVar15 >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                pauVar16 = (undefined1 (*) [16])
                           (pauVar16[-1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
                goto LAB_00a71c7c;
              }
              uVar15 = CONCAT17((char)(auVar22._14_2_ >> 4),
                                CONCAT16((char)(auVar22._12_2_ >> 4),
                                         CONCAT15((char)(auVar22._10_2_ >> 4),
                                                  CONCAT14((char)(auVar22._8_2_ >> 4),
                                                           CONCAT13((char)(auVar22._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar22._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar22._2_2_ >> 4),(char)(auVar22._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 != 0) {
                uVar15 = uVar15 >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
                goto LAB_00a72378;
              }
              uVar15 = CONCAT17((char)(auVar21._14_2_ >> 4),
                                CONCAT16((char)(auVar21._12_2_ >> 4),
                                         CONCAT15((char)(auVar21._10_2_ >> 4),
                                                  CONCAT14((char)(auVar21._8_2_ >> 4),
                                                           CONCAT13((char)(auVar21._6_2_ >> 4),
                                                                    CONCAT12((char)(auVar21._4_2_ >>
                                                                                   4),CONCAT11((char
                                                  )(auVar21._2_2_ >> 4),(char)(auVar21._0_2_ >> 4)))
                                                  ))))) & 0x8888888888888888;
              if (uVar15 == 0) {
                uVar15 = (CONCAT17((char)(auVar19._14_2_ >> 4),
                                   CONCAT16((char)(auVar19._12_2_ >> 4),
                                            CONCAT15((char)(auVar19._10_2_ >> 4),
                                                     CONCAT14((char)(auVar19._8_2_ >> 4),
                                                              CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                       CONCAT12((char)(auVar19._4_2_
                                                                                      >> 4),
                                                                                CONCAT11((char)(
                                                  auVar19._2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))
                                                  ))) & 0x8888888888888888) >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                pauVar16 = (undefined1 (*) [16])
                           (pauVar16[2] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
              }
              else {
                uVar15 = uVar15 >> 3;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                pauVar16 = (undefined1 (*) [16])
                           (pauVar16[1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
              }
              goto LAB_00a71c7c;
            }
            pauVar18 = pauVar16 + 4;
          } while (pauVar16 + 3 <= pauVar11 + -4);
          pauVar16 = pauVar16 + 3;
        }
        if (pauVar16 <= pauVar11 + -1) {
LAB_00a71ff0:
          auVar19 = NEON_cmeq(*pauVar16,0,1);
          uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                            CONCAT16((char)(auVar19._12_2_ >> 4),
                                     CONCAT15((char)(auVar19._10_2_ >> 4),
                                              CONCAT14((char)(auVar19._8_2_ >> 4),
                                                       CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar19.
                                                  _2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar15 == 0) goto code_r0x00a72008;
          uVar15 = uVar15 >> 3;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
LAB_00a72378:
          pauVar16 = (undefined1 (*) [16])(*pauVar16 + ((ulong)LZCOUNT(uVar15) >> 2));
          goto LAB_00a71c7c;
        }
LAB_00a72014:
        if (pauVar16 < pauVar11) {
          auVar19 = NEON_cmeq(pauVar11[-1],0,1);
          uVar15 = CONCAT17((char)(auVar19._14_2_ >> 4),
                            CONCAT16((char)(auVar19._12_2_ >> 4),
                                     CONCAT15((char)(auVar19._10_2_ >> 4),
                                              CONCAT14((char)(auVar19._8_2_ >> 4),
                                                       CONCAT13((char)(auVar19._6_2_ >> 4),
                                                                CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                         CONCAT11((char)(auVar19.
                                                  _2_2_ >> 4),(char)(auVar19._0_2_ >> 4)))))))) &
                   0x8888888888888888;
          if (uVar15 != 0) {
            uVar15 = uVar15 >> 3;
            uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
            uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
            pauVar16 = (undefined1 (*) [16])
                       (pauVar11[-1] + ((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 2));
            goto LAB_00a71c7c;
          }
        }
      }
    }
    pauVar10 = (undefined1 (*) [16])0x0;
    param_2[5] = 1;
    param_2[6] = 0;
    pauVar18 = (undefined1 (*) [16])&DAT_00384529;
    if (uVar17 <= uVar12) {
      pauVar18 = (undefined1 (*) [16])&UNK_00384566;
    }
    uVar15 = 0x1b;
    if (uVar17 <= uVar12) {
      uVar15 = 0x23;
    }
  }
LAB_00a72240:
  param_1[1] = (long)pauVar10;
  param_1[2] = (long)pauVar18;
  lVar9 = 1;
  param_1[3] = uVar15;
LAB_00a7224c:
  *param_1 = lVar9;
  return;
code_r0x00a720e4:
  pauVar11 = pauVar11 + 1;
  if (pauVar16 + -1 < pauVar11) goto LAB_00a720f0;
  goto LAB_00a720cc;
code_r0x00a72008:
  pauVar16 = pauVar16 + 1;
  if (pauVar11 + -1 < pauVar16) goto LAB_00a72014;
  goto LAB_00a71ff0;
code_r0x00a721c0:
  pauVar11 = pauVar11 + 1;
  if (pauVar16 + -1 < pauVar11) goto LAB_00a721cc;
  goto LAB_00a721a8;
code_r0x00a71f2c:
  pauVar16 = pauVar16 + 1;
  if (in_x14 < pauVar16) goto LAB_00a71f38;
  goto LAB_00a71f14;
code_r0x00a71e50:
  pauVar16 = pauVar16 + 1;
  if (in_x14 < pauVar16) goto LAB_00a71e5c;
  goto LAB_00a71e38;
}


// ===== 00a72578  <object::read::archive::ArchiveSymbolIterator_as_core::iter::traits::iterator::Iterator>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::archive::ArchiveSymbolIterator as
   core::iter::traits::iterator::Iterator>::size_hint */

void __rustcall
<object::read::archive::ArchiveSymbolIterator_as_core::iter::traits::iterator::Iterator>::size_hint
          (ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_2;
  if (lVar1 < 3) {
    if (lVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    if (lVar1 == 1) {
      uVar2 = (ulong)(param_2[2] - param_2[1]) >> 2;
      param_1[2] = uVar2;
      *param_1 = uVar2;
      param_1[1] = 1;
      return;
    }
  }
  else if (lVar1 != 3) {
    if (lVar1 == 4) {
      uVar2 = (ulong)(param_2[2] - param_2[1]) >> 4;
      param_1[2] = uVar2;
      *param_1 = uVar2;
      param_1[1] = 1;
      return;
    }
    uVar2 = (ulong)(param_2[4] - param_2[3]) >> 1;
    param_1[2] = uVar2;
    *param_1 = uVar2;
    param_1[1] = 1;
    return;
  }
  uVar2 = (ulong)(param_2[2] - param_2[1]) >> 3;
  param_1[2] = uVar2;
  *param_1 = uVar2;
  param_1[1] = 1;
  return;
}


// ===== 00a72618  <object::read::macho::exports_trie::NodeIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Removing unreachable block (ram,0x00a72714) */
/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::macho::exports_trie::NodeIterator as core::iter::traits::iterator::Iterator>::next
    */

void __rustcall
<object::read::macho::exports_trie::NodeIterator_as_core::iter::traits::iterator::Iterator>::next
          (long *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 (*pauVar5) [16];
  long lVar6;
  long lVar7;
  undefined1 (*__src) [16];
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong __n;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_78;
  undefined *puStack_70;
  long local_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 != 0) {
    uVar16 = *(ulong *)(param_2 + 0x28);
    plVar4 = (long *)(*(long *)(param_2 + 8) + lVar10 * 0x20);
    do {
      plVar8 = plVar4 + -4;
      uVar9 = plVar4[-2];
      if (uVar9 <= uVar16) {
        *(ulong *)(param_2 + 0x28) = uVar9;
        uVar16 = uVar9;
      }
      if ((char)plVar4[-1] != '\0') {
        uVar9 = plVar4[-3];
        if (uVar9 == 0) goto LAB_00a726cc;
        __src = (undefined1 (*) [16])*plVar8;
        uVar14 = uVar9;
        pauVar13 = __src;
        if (uVar9 < 0x10) goto LAB_00a726b8;
        auVar18 = NEON_cmeq(*__src,0,1);
        uVar14 = CONCAT17((char)(auVar18._14_2_ >> 4),
                          CONCAT16((char)(auVar18._12_2_ >> 4),
                                   CONCAT15((char)(auVar18._10_2_ >> 4),
                                            CONCAT14((char)(auVar18._8_2_ >> 4),
                                                     CONCAT13((char)(auVar18._6_2_ >> 4),
                                                              CONCAT12((char)(auVar18._4_2_ >> 4),
                                                                       CONCAT11((char)(auVar18._2_2_
                                                                                      >> 4),
                                                                                (char)(auVar18._0_2_
                                                                                      >> 4)))))))) &
                 0x8888888888888888;
        if (uVar14 != 0) {
          uVar14 = uVar14 >> 3;
          uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          pauVar13 = (undefined1 (*) [16])
                     (*__src + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2));
          goto LAB_00a72768;
        }
        uVar14 = 0x10 - ((ulong)__src & 0xf);
        pauVar1 = (undefined1 (*) [16])(*__src + uVar9);
        pauVar13 = (undefined1 (*) [16])((long)__src + uVar14);
        if ((uVar9 < 0x40) || (uVar9 - 0x40 < uVar14)) goto LAB_00a72908;
        pauVar5 = (undefined1 (*) [16])((long)__src + (0x20 - ((ulong)__src & 0xf)));
        goto LAB_00a728bc;
      }
      lVar10 = lVar10 + -1;
      *(long *)(param_2 + 0x10) = lVar10;
      plVar4 = plVar8;
    } while (lVar10 != 0);
  }
  if (*(long *)(param_2 + 0x40) != 0) goto LAB_00a7267c;
  FUN_00a6e6a0(&local_78,param_2);
  lVar10 = local_60;
  lVar15 = lStack_58;
  lVar6 = lStack_50;
  lVar7 = lStack_48;
  if (local_78 == -2) {
    local_78 = -3;
  }
  else {
joined_r0x00a72978:
    lStack_88 = lVar7;
    lStack_90 = lVar6;
    lStack_98 = lVar15;
    local_a0 = lVar10;
    if (local_78 == -2) {
LAB_00a7267c:
      *param_1 = -3;
      return;
    }
  }
  puVar11 = puStack_70;
  lVar12 = local_68;
  if (local_78 != -3) {
    param_1[4] = lStack_98;
    param_1[3] = local_a0;
    param_1[6] = lStack_88;
    param_1[5] = lStack_90;
    goto LAB_00a7286c;
  }
  goto LAB_00a72868;
  while( true ) {
    uVar14 = uVar14 - 1;
    pauVar13 = (undefined1 (*) [16])(*pauVar13 + 1);
    if (uVar14 == 0) break;
LAB_00a726b8:
    if ((*pauVar13)[0] == '\0') goto LAB_00a72768;
  }
  goto LAB_00a726cc;
code_r0x00a7292c:
  pauVar13 = pauVar13 + 1;
  if (pauVar1 + -1 < pauVar13) goto LAB_00a72938;
  goto LAB_00a72914;
  while (pauVar5 = pauVar13 + 4, pauVar13 + 3 <= pauVar1 + -4) {
LAB_00a728bc:
    pauVar13 = pauVar5;
    uVar3 = *(undefined8 *)(pauVar13[2] + 8);
    auVar21 = NEON_cmeq(pauVar13[-1],0,1);
    auVar20 = NEON_cmeq(*pauVar13,0,1);
    auVar19 = NEON_cmeq(pauVar13[1],0,1);
    auVar18[9] = (char)((ulong)uVar3 >> 8);
    auVar18._0_9_ = *(unkbyte9 *)pauVar13[2];
    auVar18[10] = (char)((ulong)uVar3 >> 0x10);
    auVar18[0xb] = (char)((ulong)uVar3 >> 0x18);
    auVar18[0xc] = (char)((ulong)uVar3 >> 0x20);
    auVar18[0xd] = (char)((ulong)uVar3 >> 0x28);
    auVar18[0xe] = (char)((ulong)uVar3 >> 0x30);
    auVar18[0xf] = (char)((ulong)uVar3 >> 0x38);
    auVar18 = NEON_cmeq(auVar18,0,1);
    auVar22[0] = auVar20[0] | auVar21[0] | auVar19[0] | auVar18[0];
    auVar22[1] = auVar20[1] | auVar21[1] | auVar19[1] | auVar18[1];
    auVar22[2] = auVar20[2] | auVar21[2] | auVar19[2] | auVar18[2];
    auVar22[3] = auVar20[3] | auVar21[3] | auVar19[3] | auVar18[3];
    auVar22[4] = auVar20[4] | auVar21[4] | auVar19[4] | auVar18[4];
    auVar22[5] = auVar20[5] | auVar21[5] | auVar19[5] | auVar18[5];
    auVar22[6] = auVar20[6] | auVar21[6] | auVar19[6] | auVar18[6];
    auVar22[7] = auVar20[7] | auVar21[7] | auVar19[7] | auVar18[7];
    auVar22[8] = auVar20[8] | auVar21[8] | auVar19[8] | auVar18[8];
    auVar22[9] = auVar20[9] | auVar21[9] | auVar19[9] | auVar18[9];
    auVar22[10] = auVar20[10] | auVar21[10] | auVar19[10] | auVar18[10];
    auVar22[0xb] = auVar20[0xb] | auVar21[0xb] | auVar19[0xb] | auVar18[0xb];
    auVar22[0xc] = auVar20[0xc] | auVar21[0xc] | auVar19[0xc] | auVar18[0xc];
    auVar22[0xd] = auVar20[0xd] | auVar21[0xd] | auVar19[0xd] | auVar18[0xd];
    auVar22[0xe] = auVar20[0xe] | auVar21[0xe] | auVar19[0xe] | auVar18[0xe];
    auVar22[0xf] = auVar20[0xf] | auVar21[0xf] | auVar19[0xf] | auVar18[0xf];
    auVar22 = NEON_umaxp(auVar22,auVar22,1);
    if (auVar22._0_8_ != 0) {
      uVar14 = CONCAT17((char)(auVar21._14_2_ >> 4),
                        CONCAT16((char)(auVar21._12_2_ >> 4),
                                 CONCAT15((char)(auVar21._10_2_ >> 4),
                                          CONCAT14((char)(auVar21._8_2_ >> 4),
                                                   CONCAT13((char)(auVar21._6_2_ >> 4),
                                                            CONCAT12((char)(auVar21._4_2_ >> 4),
                                                                     CONCAT11((char)(auVar21._2_2_
                                                                                    >> 4),
                                                                              (char)(auVar21._0_2_
                                                                                    >> 4)))))))) &
               0x8888888888888888;
      if (uVar14 != 0) {
        uVar14 = uVar14 >> 3;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        pauVar13 = (undefined1 (*) [16])
                   (pauVar13[-1] + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2));
        goto LAB_00a72768;
      }
      uVar14 = CONCAT17((char)(auVar20._14_2_ >> 4),
                        CONCAT16((char)(auVar20._12_2_ >> 4),
                                 CONCAT15((char)(auVar20._10_2_ >> 4),
                                          CONCAT14((char)(auVar20._8_2_ >> 4),
                                                   CONCAT13((char)(auVar20._6_2_ >> 4),
                                                            CONCAT12((char)(auVar20._4_2_ >> 4),
                                                                     CONCAT11((char)(auVar20._2_2_
                                                                                    >> 4),
                                                                              (char)(auVar20._0_2_
                                                                                    >> 4)))))))) &
               0x8888888888888888;
      if (uVar14 != 0) {
        uVar14 = uVar14 >> 3;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        goto LAB_00a729c0;
      }
      uVar14 = CONCAT17((char)(auVar19._14_2_ >> 4),
                        CONCAT16((char)(auVar19._12_2_ >> 4),
                                 CONCAT15((char)(auVar19._10_2_ >> 4),
                                          CONCAT14((char)(auVar19._8_2_ >> 4),
                                                   CONCAT13((char)(auVar19._6_2_ >> 4),
                                                            CONCAT12((char)(auVar19._4_2_ >> 4),
                                                                     CONCAT11((char)(auVar19._2_2_
                                                                                    >> 4),
                                                                              (char)(auVar19._0_2_
                                                                                    >> 4)))))))) &
               0x8888888888888888;
      if (uVar14 == 0) {
        uVar14 = (CONCAT17((char)(auVar18._14_2_ >> 4),
                           CONCAT16((char)(auVar18._12_2_ >> 4),
                                    CONCAT15((char)(auVar18._10_2_ >> 4),
                                             CONCAT14((char)(auVar18._8_2_ >> 4),
                                                      CONCAT13((char)(auVar18._6_2_ >> 4),
                                                               CONCAT12((char)(auVar18._4_2_ >> 4),
                                                                        CONCAT11((char)(auVar18.
                                                  _2_2_ >> 4),(char)(auVar18._0_2_ >> 4)))))))) &
                 0x8888888888888888) >> 3;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        pauVar13 = (undefined1 (*) [16])
                   (pauVar13[2] + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2));
      }
      else {
        uVar14 = uVar14 >> 3;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        pauVar13 = (undefined1 (*) [16])
                   (pauVar13[1] + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2));
      }
      goto LAB_00a72768;
    }
  }
  pauVar13 = pauVar13 + 3;
LAB_00a72908:
  if (pauVar13 <= pauVar1 + -1) {
LAB_00a72914:
    auVar18 = NEON_cmeq(*pauVar13,0,1);
    uVar14 = CONCAT17((char)(auVar18._14_2_ >> 4),
                      CONCAT16((char)(auVar18._12_2_ >> 4),
                               CONCAT15((char)(auVar18._10_2_ >> 4),
                                        CONCAT14((char)(auVar18._8_2_ >> 4),
                                                 CONCAT13((char)(auVar18._6_2_ >> 4),
                                                          CONCAT12((char)(auVar18._4_2_ >> 4),
                                                                   CONCAT11((char)(auVar18._2_2_ >>
                                                                                  4),(char)(auVar18.
                                                  _0_2_ >> 4)))))))) & 0x8888888888888888;
    if (uVar14 == 0) goto code_r0x00a7292c;
    uVar14 = uVar14 >> 3;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
LAB_00a729c0:
    pauVar13 = (undefined1 (*) [16])(*pauVar13 + ((ulong)LZCOUNT(uVar14) >> 2));
    goto LAB_00a72768;
  }
LAB_00a72938:
  if (pauVar13 < pauVar1) {
    auVar18 = NEON_cmeq(pauVar1[-1],0,1);
    uVar14 = CONCAT17((char)(auVar18._14_2_ >> 4),
                      CONCAT16((char)(auVar18._12_2_ >> 4),
                               CONCAT15((char)(auVar18._10_2_ >> 4),
                                        CONCAT14((char)(auVar18._8_2_ >> 4),
                                                 CONCAT13((char)(auVar18._6_2_ >> 4),
                                                          CONCAT12((char)(auVar18._4_2_ >> 4),
                                                                   CONCAT11((char)(auVar18._2_2_ >>
                                                                                  4),(char)(auVar18.
                                                  _0_2_ >> 4)))))))) & 0x8888888888888888;
    if (uVar14 != 0) {
      uVar14 = uVar14 >> 3;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      pauVar13 = (undefined1 (*) [16])
                 (pauVar1[-1] + ((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 2));
LAB_00a72768:
      __n = (long)pauVar13 - (long)__src;
      uVar14 = 0;
      uVar17 = 0;
      lVar10 = 0;
      if (__n <= uVar9) {
        lVar10 = uVar9 - __n;
      }
      lVar15 = lVar10 + -2;
      *plVar8 = (long)(*pauVar13 + 1);
      plVar4[-3] = lVar10 + -1;
      lVar10 = (long)pauVar13 - (long)__src;
      do {
        if (lVar15 == -1) {
          *plVar8 = 1;
          plVar4[-3] = 0;
          puVar11 = &DAT_00383f6d;
          lVar12 = 0x21;
          goto LAB_00a72868;
        }
        *plVar8 = (long)(*__src + lVar10 + 2);
        plVar4[-3] = lVar15;
        bVar2 = (*__src)[lVar10 + 1];
        if (((int)uVar14 == 0x3f) && (puVar11 = &DAT_00383f6d, lVar12 = 0x21, 1 < bVar2))
        goto LAB_00a72868;
        lVar15 = lVar15 + -1;
        lVar10 = lVar10 + 1;
        uVar9 = uVar14 & 0x3f;
        uVar14 = (ulong)((int)uVar14 + 7);
        uVar17 = ((ulong)bVar2 & 0x7f) << uVar9 | uVar17;
      } while ((char)bVar2 < '\0');
      lVar10 = *(long *)(param_2 + 0x18);
      *(char *)(plVar4 + -1) = (char)plVar4[-1] + -1;
      if (lVar10 - uVar16 < __n) {
        FUN_00a6cf50(param_2 + 0x18,uVar16,__n);
        uVar16 = *(ulong *)(param_2 + 0x28);
LAB_00a72824:
        memcpy((void *)(*(long *)(param_2 + 0x20) + uVar16),__src,__n);
      }
      else if (pauVar13 != __src) goto LAB_00a72824;
      *(ulong *)(param_2 + 0x40) = uVar17;
      *(ulong *)(param_2 + 0x28) = uVar16 + __n;
      FUN_00a6e6a0(&local_78,param_2);
      puVar11 = puStack_70;
      lVar12 = local_68;
      lVar10 = local_60;
      lVar15 = lStack_58;
      lVar6 = lStack_50;
      lVar7 = lStack_48;
      if (local_78 != -2) goto joined_r0x00a72978;
      goto LAB_00a72868;
    }
  }
LAB_00a726cc:
  *plVar8 = 1;
  plVar4[-3] = 0;
  puVar11 = &DAT_002bfcc8;
  lVar12 = 0x20;
LAB_00a72868:
  local_78 = -2;
LAB_00a7286c:
  *param_1 = local_78;
  param_1[1] = (long)puVar11;
  param_1[2] = lVar12;
  return;
}


// ===== 00a72a38  FUN_00a72a38 =====

void FUN_00a72a38(byte *param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str
            (param_2,&DAT_0038473c + *(int *)(&DAT_0038473c + (ulong)*param_1 * 4),2);
  return;
}


// ===== 00a72a58  <object::read::SectionIndex_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::SectionIndex as core::fmt::Display>::fmt */

void __rustcall <object::read::SectionIndex_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b01800)();
  return;
}


// ===== 00a72a5c  <object::read::pe::import::DelayLoadDescriptorIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::import::DelayLoadDescriptorIterator as
   core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::pe::import::DelayLoadDescriptorIterator_as_core::iter::traits::iterator::Iterator>::
next(undefined8 *param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 auVar3 [16];
  
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  if ((ulong)param_2[1] < 0x20) {
    *param_2 = 1;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    param_1[1] = &DAT_00384181;
    param_1[2] = 0x2c;
    *param_1 = 1;
    return;
  }
  pauVar1 = (undefined1 (*) [16])*param_2;
  auVar3 = *pauVar1;
  *param_2 = (long)(pauVar1 + 2);
  param_2[1] = param_2[1] - 0x20;
  auVar3 = NEON_cmtst(auVar3,auVar3,4);
  uVar2 = NEON_umaxv(auVar3,4);
  if (((((uVar2 & 1) == 0) && (*(int *)(pauVar1[1] + 4) == 0 && *(int *)pauVar1[1] == 0)) &&
      (*(int *)(pauVar1[1] + 8) == 0)) && (*(int *)(pauVar1[1] + 0xc) == 0)) {
    *param_1 = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  }
  param_1[1] = 0;
  param_1[2] = pauVar1;
  *param_1 = 1;
  return;
}


// ===== 00a72af8  <object::read::elf::attributes::AttributeIndexIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::attributes::AttributeIndexIterator as
   core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::elf::attributes::AttributeIndexIterator_as_core::iter::traits::iterator::Iterator>::
next(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  lVar3 = param_2[1];
  if (lVar3 == 0) {
LAB_00a72b90:
    *param_1 = lVar3;
    return;
  }
  uVar2 = 0;
  uVar5 = 0;
  lVar3 = 1 - lVar3;
  pbVar4 = (byte *)*param_2;
  while( true ) {
    bVar1 = *pbVar4;
    if (((int)uVar5 == 0x3f) && (1 < bVar1)) goto LAB_00a72b64;
    uVar2 = ((ulong)bVar1 & 0x7f) << (uVar5 & 0x3f) | uVar2;
    if (-1 < (char)bVar1) break;
    lVar3 = lVar3 + 1;
    uVar5 = (ulong)((int)uVar5 + 7);
    pbVar4 = pbVar4 + 1;
    if (lVar3 == 1) {
LAB_00a72b64:
      *param_2 = 1;
      param_2[1] = 0;
      param_1[1] = (long)&DAT_003841ad;
      param_1[2] = 0x1b;
      *param_1 = 1;
      return;
    }
  }
  *param_2 = pbVar4 + 1;
  param_2[1] = -lVar3;
  if (uVar2 >> 0x20 == 0) {
    lVar3 = 1;
    param_1[1] = 0;
    *(int *)(param_1 + 2) = (int)uVar2;
    goto LAB_00a72b90;
  }
  goto LAB_00a72b64;
}


// ===== 00a72b98  <object::read::macho::dyld_cache::DyldRelocation_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::macho::dyld_cache::DyldRelocation as core::fmt::Debug>::fmt */

void __rustcall
<object::read::macho::dyld_cache::DyldRelocation_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined *local_70;
  long *plStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  long *plStack_48;
  long local_40;
  undefined *puStack_38;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_80,param_2,&DAT_00384591,0xe);
  puVar1 = PTR_fmt_00b00c68;
  plStack_68 = &local_60;
  puStack_58 = PTR_fmt_00b00c68;
  local_70 = &DAT_0038459f;
  local_60 = param_1;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_80,"offset",6,&local_70,&DAT_00afcb48);
  local_40 = param_1 + 8;
  puStack_38 = puVar1;
  plStack_48 = &local_40;
  local_50 = &DAT_0038459f;
  uVar2 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar2,"value",5,&local_50,&DAT_00afcb48);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar2,&DAT_002bd200,4,param_1 + 0x10,&DAT_00afcb68);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a72c68  <object::xcoff::Symbol32_as_object::read::xcoff::symbol::Symbol>::name_offset =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::xcoff::Symbol32 as object::read::xcoff::symbol::Symbol>::name_offset */

undefined1  [16] __rustcall
<object::xcoff::Symbol32_as_object::read::xcoff::symbol::Symbol>::name_offset(char *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
  auVar2._1_7_ = 0;
  auVar2[0] = *param_1 == '\0';
  auVar2._8_4_ = uVar1 >> 0x10 | uVar1 << 0x10;
  auVar2._12_4_ = 0;
  return auVar2;
}


// ===== 00a72c80  FUN_00a72c80 =====

void FUN_00a72c80(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"SymbolIndex",0xb,&local_18,&DAT_00afcb88);
  return;
}


// ===== 00a72cc0  FUN_00a72cc0 =====

void FUN_00a72cc0(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  if (*param_1 != 0) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afcba8);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00384408,4);
  return;
}


// ===== 00a72d18  FUN_00a72d18 =====

void FUN_00a72d18(long param_1,undefined8 param_2)

{
  long local_18;
  
  if (*(char *)(param_1 + 3) == '\x02') {
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_00384408,4);
    return;
  }
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00afcbc8);
  return;
}


// ===== 00a72d74  FUN_00a72d74 =====

void FUN_00a72d74(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <isize_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <isize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a72d8c  FUN_00a72d8c =====

void FUN_00a72d8c(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u8_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u8_as_core::fmt::Display>::fmt();
    return;
  }
  <u8_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a72da4  FUN_00a72da4 =====

void FUN_00a72da4(undefined8 param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u32_as_core::fmt::LowerHex>::fmt();
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u32_as_core::fmt::Display>::fmt();
    return;
  }
  <u32_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a72dbc  <object::read::pe::relocation::RelocationBlockIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::relocation::RelocationBlockIterator as
   core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::pe::relocation::RelocationBlockIterator_as_core::iter::traits::iterator::Iterator>::
next(ulong *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  uVar1 = param_2[1];
  if (uVar1 == 0) goto LAB_00a72dec;
  if (uVar1 < 8) {
    puVar5 = &DAT_00383d44;
    uVar4 = 0x1d;
LAB_00a72dd8:
    uVar3 = uVar4;
    param_1[1] = 0;
    param_1[2] = (ulong)puVar5;
    *param_2 = 1;
    param_2[1] = 0;
  }
  else {
    puVar5 = &DAT_00383d29;
    puVar2 = (ulong *)*param_2 + 1;
    uVar3 = *(ulong *)*param_2;
    uVar4 = 0x1b;
    if ((uVar3 >> 0x20 < 9) || ((uVar3 & 0x300000000) != 0)) goto LAB_00a72dd8;
    uVar4 = (uVar3 >> 0x20) + 0xfffffff8 >> 1 & 0x7ffffffe;
    if (uVar1 - 8 < uVar4 * 2) {
      puVar5 = &DAT_00383d29;
      uVar4 = 0x1b;
      goto LAB_00a72dd8;
    }
    *param_2 = (long)puVar2 + uVar4 * 2;
    param_2[1] = (uVar1 - 8) + uVar4 * -2;
    param_1[1] = (ulong)puVar2;
    param_1[2] = (long)puVar2 + uVar4 * 2;
  }
  uVar1 = 1;
  param_1[3] = uVar3;
LAB_00a72dec:
  *param_1 = uVar1;
  return;
}


// ===== 00a72e60  <object::read::pe::export::Export_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::pe::export::Export as core::fmt::Debug>::fmt */

void __rustcall
<object::read::pe::export::Export_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  long local_30;
  undefined8 local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,"Export",6);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,"ordinal",7,param_1 + 0x38,&DAT_00afcbe8);
  local_30 = *(long *)(param_1 + 0x28);
  if (local_30 != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_002bd1cc,4,&local_30,&DAT_00afcc08);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"target",6,param_1,&DAT_00afcc28);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a72f10  <object::read::macho::exports_trie::ExportsTrieIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::macho::exports_trie::ExportsTrieIterator as
   core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::macho::exports_trie::ExportsTrieIterator_as_core::iter::traits::iterator::Iterator>::
next(long *param_1,undefined8 param_2)

{
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  <object::read::macho::exports_trie::NodeIterator_as_core::iter::traits::iterator::Iterator>::next
            (&local_68);
  while( true ) {
    if (local_68 == -3) {
      *param_1 = -2;
      return;
    }
    if (local_68 != -1) break;
    <object::read::macho::exports_trie::NodeIterator_as_core::iter::traits::iterator::Iterator>::
    next(&local_68,param_2);
  }
  if (local_68 == -2) {
    local_68 = -1;
  }
  else {
    param_1[4] = lStack_48;
    param_1[3] = local_50;
    param_1[6] = lStack_38;
    param_1[5] = local_40;
  }
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = lStack_58;
  return;
}


// ===== 00a72fc0  <object::read::Relocation_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::Relocation as core::fmt::Debug>::fmt */

void __rustcall
<object::read::Relocation_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  long local_8;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Relocation",10);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,"kind",4,(long)param_1 + 0x31,&DAT_00afca68);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_002a11b8,8,(long)param_1 + 0x32,&DAT_00afca88);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,&DAT_002bd23c,4,(long)param_1 + 0x33,&DAT_00afcae8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"target",6,param_1 + 2,&DAT_00afcc48);
  if (*param_1 == 1) {
    local_8 = param_1[1];
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"subtractor",10,&local_8,&DAT_00afcc68);
  }
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_30,"addend",6,param_1 + 5,&DAT_00afcc88);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"implicit_addend",0xf,param_1 + 6,&DAT_00afcb08);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"flags",5,param_1 + 4,&DAT_00afcca8);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a73104  <object::read::macho::dyld_cache::DyldRelocationAuth_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::macho::dyld_cache::DyldRelocationAuth as core::fmt::Debug>::fmt */

void __rustcall
<object::read::macho::dyld_cache::DyldRelocationAuth_as_core::fmt::Debug>::fmt
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined *local_40;
  long *plStack_38;
  long local_30;
  undefined *puStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_50,param_2,"Ptrauth",7);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_50,"key",3,param_1 + 2,&DAT_00afccc8);
  puStack_28 = PTR_fmt_00b00e50;
  plStack_38 = &local_30;
  local_40 = &DAT_0038459f;
  local_30 = param_1;
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"diversity",9,&local_40,&DAT_00afcb48);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,&DAT_002a1a10,8,param_1 + 3,&DAT_00afcb08);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 00a731bc  FUN_00a731bc =====

void FUN_00a731bc(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00a731d0  <bool_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <bool_as_core::fmt::Display>::fmt(void)

{
  (*(code *)PTR_fmt_00b02798)();
  return;
}


// ===== 00a731d4  <object::read::elf::relocation::CrelIterator_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <object::read::elf::relocation::CrelIterator as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<object::read::elf::relocation::CrelIterator_as_core::iter::traits::iterator::Iterator>::next
          (undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong in_x12;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  
  if (param_2[5] == 0) {
    *param_1 = 2;
    return;
  }
  lVar6 = param_2[1];
  if (lVar6 != 0) {
    pbVar8 = (byte *)*param_2;
    bVar3 = *(byte *)(param_2 + 6);
    bVar2 = *pbVar8;
    *param_2 = pbVar8 + 1;
    param_2[1] = lVar6 + -1;
    in_x12 = ((ulong)bVar2 & 0x7f) >> ((ulong)bVar3 & 0x3f);
    if ((char)bVar2 < '\0') {
      uVar12 = 0;
      uVar11 = 0;
      pbVar8 = pbVar8 + 2;
      lVar6 = lVar6 + -2;
      puVar9 = &DAT_003843b6;
      uVar7 = 0x2f;
      do {
        if (lVar6 == -1) {
          *param_2 = 1;
          param_2[1] = 0;
          goto LAB_00a73274;
        }
        bVar4 = pbVar8[-1];
        *param_2 = pbVar8;
        param_2[1] = lVar6;
        if (((int)uVar12 == 0x3f) && (1 < bVar4)) goto LAB_00a7336c;
        pbVar8 = pbVar8 + 1;
        lVar6 = lVar6 + -1;
        uVar5 = uVar12 & 0x3f;
        uVar12 = (ulong)((int)uVar12 + 7);
        uVar11 = ((ulong)bVar4 & 0x7f) << uVar5 | uVar11;
      } while ((char)bVar4 < '\0');
      in_x12 = uVar11 << ((ulong)(7 - bVar3) & 0x3f) | in_x12;
    }
    uVar1 = (uint)bVar2 & (-1 << ((ulong)bVar3 & 7) ^ 0xffffffffU);
    param_2[2] = (in_x12 << ((ulong)*(byte *)((long)param_2 + 0x31) & 0x3f)) + param_2[2];
    if ((uVar1 & 1) != 0) {
      auVar14 = <object::read::util::object::read::util::Bytes>::read_sleb128();
      if ((auVar14 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
        puVar9 = &DAT_00384391;
        uVar7 = 0x25;
        in_x12 = extraout_x12;
        goto LAB_00a7336c;
      }
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + auVar14._8_4_;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      auVar14 = <object::read::util::object::read::util::Bytes>::read_sleb128();
      if ((auVar14 & (undefined1  [12])0x1) != (undefined1  [12])0x0) {
        puVar9 = &UNK_0038436e;
        uVar7 = 0x23;
        in_x12 = extraout_x12_00;
        goto LAB_00a7336c;
      }
      *(int *)((long)param_2 + 0x24) = *(int *)((long)param_2 + 0x24) + auVar14._8_4_;
    }
    if ((*(char *)((long)param_2 + 0x32) == '\x01') && ((uVar1 >> 2 & 1) != 0)) {
      auVar13 = <object::read::util::object::read::util::Bytes>::read_sleb128();
      if ((auVar13 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
        puVar9 = &DAT_00384349;
        uVar7 = 0x25;
        in_x12 = extraout_x12_01;
        goto LAB_00a7336c;
      }
      lVar6 = param_2[3] + auVar13._8_8_;
      param_2[3] = lVar6;
    }
    else {
      lVar6 = param_2[3];
    }
    uVar7 = param_2[4];
    uVar10 = param_2[2];
    param_2[5] = param_2[5] + -1;
    *param_1 = 0;
    param_1[1] = uVar10;
    param_1[2] = lVar6;
    param_1[3] = uVar7;
    return;
  }
  *param_2 = 1;
LAB_00a73274:
  puVar9 = &DAT_003843b6;
  uVar7 = 0x2f;
LAB_00a7336c:
  param_2[5] = 0;
  *param_1 = 1;
  param_1[1] = puVar9;
  param_1[2] = uVar7;
  param_1[3] = in_x12;
  return;
}


// ===== 00a733f0  FUN_00a733f0 =====

void FUN_00a733f0(undefined8 param_1)

{
                    /* try { // try from 00a73400 to 00a73403 has its CatchHandler @ 00a73414 */
  <alloc::vec::Vec<u8>as_core::ops::drop::Drop>::drop();
  <alloc::raw_vec::RawVec<u8>as_core::ops::drop::Drop>::drop(param_1);
  return;
}


// ===== 00a7342c  <alloc::raw_vec::[2]::alloc::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle<alloc::alloc::Global> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[2]::alloc::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle<alloc::alloc::Global>
    */

void __rustcall
<alloc::raw_vec::[2]::alloc::raw_vec::RawVecInner<_>>::reserve::
do_reserve_and_handle<alloc::alloc::Global>(void)

{
  long lVar1;
  
  lVar1 = <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::grow_amortized();
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 00a7344c  <core::slice::[u8]>::starts_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::[u8]>::starts_with */

bool __rustcall
<core::slice::[u8]>::starts_with(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  int iVar1;
  
  if (param_2 < param_4) {
    return false;
  }
  iVar1 = memcmp(param_3,param_1,param_4);
  return iVar1 == 0;
}


// ===== 00a73484  <core::slice::[u8]>::ends_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::[u8]>::ends_with */

bool __rustcall
<core::slice::[u8]>::ends_with(long param_1,ulong param_2,void *param_3,ulong param_4)

{
  int iVar1;
  
  if (param_2 < param_4) {
    return false;
  }
  iVar1 = memcmp(param_3,(void *)(param_1 + (param_2 - param_4)),param_4);
  return iVar1 == 0;
}


// ===== 00a734bc  <alloc::vec::alloc::vec::Vec<u8>>::reserve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::alloc::vec::Vec<u8>>::reserve */

void __rustcall <alloc::vec::alloc::vec::Vec<u8>>::reserve(long *param_1,ulong param_2)

{
  if (param_2 <= (ulong)(*param_1 - param_1[2])) {
    return;
  }
  <alloc::raw_vec::[2]::alloc::raw_vec::RawVecInner<_>>::reserve::
  do_reserve_and_handle<alloc::alloc::Global>();
  return;
}


// ===== 00a734e4  <addr2line::line::addr2line::line::Lines>::find_location =====

/* WARNING: Unknown calling convention: __rustcall */
/* <addr2line::line::addr2line::line::Lines>::find_location */

void __rustcall
<addr2line::line::addr2line::line::Lines>::find_location(uint *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar6 = param_2[3];
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar11 = uVar6;
      do {
        uVar2 = uVar7 + (uVar11 >> 1);
        uVar11 = uVar11 - (uVar11 >> 1);
        if (*(ulong *)(param_2[2] + uVar2 * 0x20 + 0x10) <= param_3) {
          uVar7 = uVar2;
        }
      } while (1 < uVar11);
    }
    plVar1 = (long *)(param_2[2] + uVar7 * 0x20);
    if ((ulong)plVar1[2] <= param_3 && param_3 < (ulong)plVar1[3]) {
      if (uVar7 < uVar6) {
        uVar6 = plVar1[1];
        if (uVar6 == 0) goto LAB_00a735e8;
        lVar9 = *plVar1;
        if (uVar6 == 1) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          uVar11 = uVar6;
          do {
            uVar2 = uVar7 + (uVar11 >> 1);
            uVar11 = uVar11 - (uVar11 >> 1);
            if (*(ulong *)(lVar9 + uVar2 * 0x18) <= param_3) {
              uVar7 = uVar2;
            }
          } while (1 < uVar11);
        }
        uVar11 = *(ulong *)(lVar9 + uVar7 * 0x18);
        if (uVar11 != param_3) {
          if (uVar11 < param_3) {
            uVar7 = uVar7 + 1;
          }
          if (uVar7 == 0) goto LAB_00a735e8;
          uVar7 = uVar7 - 1;
        }
        if (uVar7 < uVar6) {
          lVar9 = lVar9 + uVar7 * 0x18;
          uVar6 = param_2[1];
          if (*(ulong *)(lVar9 + 8) < uVar6) {
            lVar10 = *param_2 + *(ulong *)(lVar9 + 8) * 0x18;
            uVar8 = *(undefined8 *)(lVar10 + 8);
            uVar6 = *(ulong *)(lVar10 + 0x10);
          }
          else {
            uVar8 = 0;
          }
          uVar3 = *(uint *)(lVar9 + 0x10);
          uVar4 = *(uint *)(lVar9 + 0x14);
          *(undefined8 *)(param_1 + 4) = uVar8;
          *(ulong *)(param_1 + 6) = uVar6;
          uVar12 = (uint)(uVar3 != 0);
          *param_1 = uVar12;
          param_1[1] = uVar3;
          param_1[2] = uVar12;
          param_1[3] = uVar4;
          return;
        }
        ppuVar5 = &PTR_s__rust_deps_addr2line_0_27_1_src__00afcd00;
      }
      else {
        ppuVar5 = &PTR_s__rust_deps_addr2line_0_27_1_src__00afcce8;
      }
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar7,uVar6,ppuVar5);
    }
  }
LAB_00a735e8:
  *param_1 = 2;
  return;
}


// ===== 00a73638  <addr2line::line::addr2line::line::Lines>::find_location_range =====

/* WARNING: Unknown calling convention: __rustcall */
/* <addr2line::line::addr2line::line::Lines>::find_location_range */

void __rustcall
<addr2line::line::addr2line::line::Lines>::find_location_range
          (long *param_1,long param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(param_2 + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x18);
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  else {
    if (uVar8 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar7 = uVar8;
      do {
        uVar3 = uVar4 + (uVar7 >> 1);
        uVar7 = uVar7 - (uVar7 >> 1);
        if (*(ulong *)(lVar6 + uVar3 * 0x20 + 0x10) <= param_3) {
          uVar4 = uVar3;
        }
      } while (1 < uVar7);
    }
    lVar5 = lVar6 + uVar4 * 0x20;
    uVar7 = *(ulong *)(lVar5 + 0x10);
    uVar3 = *(ulong *)(lVar5 + 0x18);
    if ((param_3 < uVar7 || uVar3 <= param_3) && (uVar7 <= param_3 && uVar3 <= param_3)) {
      uVar4 = uVar4 + 1;
    }
  }
  if (uVar4 < uVar8) {
    plVar1 = (long *)(lVar6 + uVar4 * 0x20);
    uVar8 = plVar1[1];
    if (uVar8 != 0) {
      lVar6 = *plVar1;
      if (uVar8 == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          lVar2 = lVar5 + (uVar8 >> 1);
          uVar8 = uVar8 - (uVar8 >> 1);
          if (*(ulong *)(lVar6 + lVar2 * 0x18) <= param_3) {
            lVar5 = lVar2;
          }
        } while (1 < uVar8);
      }
      uVar8 = *(ulong *)(lVar6 + lVar5 * 0x18);
      if (uVar8 == param_3) goto LAB_00a73718;
      if (uVar8 < param_3) {
        lVar5 = lVar5 + 1;
      }
      if (lVar5 != 0) {
        lVar5 = lVar5 + -1;
        goto LAB_00a73718;
      }
    }
  }
  lVar5 = 0;
LAB_00a73718:
  *param_1 = param_2;
  param_1[1] = uVar4;
  param_1[2] = lVar5;
  param_1[3] = param_4;
  return;
}


// ===== 00a73724  FUN_00a73724 =====

bool FUN_00a73724(char *param_1,ulong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (*param_1 == '\\') {
      return true;
    }
    if (((2 < param_2) &&
        (iVar1 = (int)param_1[1], iVar1 != -0x41 && iVar1 + 0x41 < 0 == SCARRY4(iVar1,0x41))) &&
       ((param_2 == 3 || (param_1[3] + 0x40 < 0 == SCARRY4((int)param_1[3],0x40))))) {
      return *(short *)(param_1 + 1) == 0x5c3a;
    }
  }
  return false;
}


// ===== 00a73780  addr2line::line::path_push =====

/* WARNING: Unknown calling convention: __rustcall */
/* addr2line::line::path_push */

void __rustcall addr2line::line::path_push(long *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long local_58;
  long lStack_50;
  void *local_48;
  
  if (((param_3 != 0) &&
      ((*param_2 == '/' ||
       ((((2 < param_3 &&
          (iVar1 = (int)param_2[1], iVar1 != -0x41 && iVar1 + 0x41 < 0 == SCARRY4(iVar1,0x41))) &&
         ((param_3 == 3 || (param_2[3] + 0x40 < 0 == SCARRY4((int)param_2[3],0x40))))) &&
        (*(short *)(param_2 + 1) == 0x2f3a)))))) ||
     (iVar1 = FUN_00a73724(param_2,param_3), iVar1 != 0)) {
    <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::try_allocate_in(&local_58,param_3,0,1,1);
    if (local_58 != 1) {
      if (param_3 != 0) {
        memcpy(local_48,param_2,param_3);
      }
                    /* try { // try from 00a73838 to 00a7383f has its CatchHandler @ 00a73938 */
      FUN_00a733f0(param_1);
      *param_1 = lStack_50;
      param_1[1] = (long)local_48;
      param_1[2] = param_3;
      return;
    }
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(lStack_50,local_48);
  }
  lVar4 = param_1[1];
  lVar3 = param_1[2];
  iVar1 = FUN_00a73724(lVar4,lVar3);
  if (lVar3 != 0) {
    cVar2 = '\\';
    if (iVar1 == 0) {
      cVar2 = '/';
    }
    if (cVar2 != *(char *)(lVar4 + lVar3 + -1)) {
      if (*param_1 == lVar3) {
        <alloc::raw_vec::[2]::alloc::raw_vec::RawVecInner<_>>::reserve::
        do_reserve_and_handle<alloc::alloc::Global>(param_1,lVar3,1,1,1);
        lVar4 = param_1[1];
      }
      *(char *)(lVar4 + lVar3) = cVar2;
      lVar3 = lVar3 + 1;
      param_1[2] = lVar3;
    }
  }
  if ((ulong)(*param_1 - lVar3) < param_3) {
    <alloc::raw_vec::[2]::alloc::raw_vec::RawVecInner<_>>::reserve::
    do_reserve_and_handle<alloc::alloc::Global>(param_1,lVar3,param_3,1,1);
    lVar3 = param_1[2];
  }
  else if (param_3 == 0) goto LAB_00a738c4;
  memcpy((void *)(param_1[1] + lVar3),param_2,param_3);
  lVar3 = param_1[2];
LAB_00a738c4:
  param_1[2] = lVar3 + param_3;
  return;
}


// ===== 00a73944  addr2line::frame::demangle_auto =====

/* WARNING: Unknown calling convention: __rustcall */
/* addr2line::frame::demangle_auto */

void __rustcall addr2line::frame::demangle_auto(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return;
}


// ===== 00a73958  <addr2line::line::LineLocationRangeIter_as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <addr2line::line::LineLocationRangeIter as core::iter::traits::iterator::Iterator>::next */

void __rustcall
<addr2line::line::LineLocationRangeIter_as_core::iter::traits::iterator::Iterator>::next
          (ulong *param_1,long *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  
  plVar3 = (long *)*param_2;
  uVar9 = param_2[1];
  uVar10 = plVar3[3];
  if (uVar9 < uVar10) {
    uVar8 = param_2[2];
    lVar7 = uVar9 + 1;
    plVar6 = (long *)(plVar3[2] + uVar9 * 0x20 + 0x18);
    do {
      if ((ulong)param_2[3] <= (ulong)plVar6[-1]) break;
      if (uVar8 < (ulong)plVar6[-2]) {
        puVar11 = (ulong *)(plVar6[-3] + uVar8 * 0x18);
        uVar9 = *puVar11;
        if (uVar9 < (ulong)param_2[3]) {
          uVar8 = uVar8 + 1;
          plVar1 = (long *)(plVar6[-3] + uVar8 * 0x18);
          if ((ulong)plVar6[-2] <= uVar8) {
            plVar1 = plVar6;
          }
          uVar10 = puVar11[1];
          lVar7 = *plVar1;
          if (uVar10 < (ulong)plVar3[1]) {
            lVar12 = *plVar3 + uVar10 * 0x18;
            uVar4 = *(ulong *)(lVar12 + 8);
            uVar10 = *(ulong *)(lVar12 + 0x10);
          }
          else {
            uVar4 = 0;
          }
          param_2[2] = uVar8;
          uVar8 = puVar11[2];
          uVar2 = *(undefined4 *)((long)puVar11 + 0x14);
          *param_1 = uVar9;
          param_1[1] = lVar7 - uVar9;
          param_1[4] = uVar4;
          param_1[5] = uVar10;
          uVar5 = (uint)((int)uVar8 != 0);
          *(uint *)(param_1 + 2) = uVar5;
          *(int *)((long)param_1 + 0x14) = (int)uVar8;
          *(uint *)(param_1 + 3) = uVar5;
          *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
          return;
        }
        break;
      }
      param_2[1] = lVar7;
      param_2[2] = 0;
      lVar7 = lVar7 + 1;
      uVar8 = 0;
      plVar6 = plVar6 + 4;
    } while (lVar7 - uVar10 != 1);
  }
  *(undefined4 *)(param_1 + 2) = 2;
  return;
}


// ===== 00a73a44  <alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>>::find_key_index::<u64> =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>>::find_key_index::<u64>
    */

undefined1  [16]
<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>>
::find_key_index::<u64>(long *param_1,ulong *param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  ulong uVar4;
  
  uVar2 = 1;
  uVar3 = (ulong)*(ushort *)(*param_1 + 0x532);
  lVar6 = uVar3 * 8 + param_3 * -8;
  uVar5 = param_3 - 1;
  puVar7 = (ulong *)(*param_1 + param_3 * 8 + 0x4d8);
  do {
    uVar4 = uVar3;
    if (lVar6 == 0) goto LAB_00a73aa8;
    uVar4 = uVar5 + 1;
    lVar6 = lVar6 + -8;
    cVar1 = *puVar7 < *param_2;
    if (*param_2 < *puVar7) {
      cVar1 = -1;
    }
    uVar5 = uVar4;
    puVar7 = puVar7 + 1;
  } while (cVar1 == '\x01');
  uVar2 = (ulong)(cVar1 != '\0');
LAB_00a73aa8:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = uVar2;
  return auVar8;
}


// ===== 00a73aac  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::entries<gimli::read::endian_slice::DebugByte,core::iter::adapters::map::Map<{backref_33}::copied::Copied<{backref_33}::take::Take<core::slice::iter::Iter<u8>>>,{backref_19}::{closure#0}>> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugList>::entries<gimli::read::endian_slice::DebugByte,
   core::iter::adapters::map::Map<{backref 33}::copied::Copied<{backref
   33}::take::Take<core::slice::iter::Iter<u8>>>, {backref 19}::{closure#0}>> */

undefined8 __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugList>::
entries<gimli::read::endian_slice::DebugByte,core::iter::adapters::map::Map<_backref_33_::copied::Copied<_backref_33_::take::Take<core::slice::iter::Iter<u8>>>,_backref_19_::_closure_0_>>
          (undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 local_24 [4];
  
  lVar2 = param_2[2];
  if (lVar2 != 0) {
    puVar1 = (undefined1 *)param_2[1];
    puVar3 = (undefined1 *)*param_2;
    do {
      if (puVar3 == puVar1) {
        return param_1;
      }
      local_24[0] = *puVar3;
      lVar2 = lVar2 + -1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (param_1,local_24,&DAT_00afcd18);
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return param_1;
}


// ===== 00a73b18  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::entries<&gimli::read::abbrev::AttributeSpecification,core::slice::iter::Iter<{backref_14}>> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugList>::entries<&gimli::read::abbrev::AttributeSpecification,
   core::slice::iter::Iter<{backref 14}>> */

undefined8 __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugList>::
entries<&gimli::read::abbrev::AttributeSpecification,core::slice::iter::Iter<_backref_14_>>
          (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long local_38;
  
  if (param_2 != param_3) {
    do {
      lVar1 = param_2 + 0x10;
      local_38 = param_2;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (param_1,&local_38,&DAT_00afcd38);
      param_2 = lVar1;
    } while (lVar1 != param_3);
  }
  return param_1;
}


// ===== 00a73b80  <alloc::collections::btree::node::[8]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Leaf>>::from_new_leaf<alloc::alloc::Global> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[8]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,
   u64, gimli::read::abbrev::Abbreviation, {backref 26}::Leaf>>::from_new_leaf<alloc::alloc::Global>
    */

void __rustcall
<alloc::collections::btree::node::[8]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Leaf>>
::from_new_leaf<alloc::alloc::Global>(void)

{
  return;
}


// ===== 00a73b88  <alloc::collections::btree::node::[8]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Leaf>>::new_leaf<alloc::alloc::Global> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[8]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,
   u64, gimli::read::abbrev::Abbreviation, {backref 26}::Leaf>>::new_leaf<alloc::alloc::Global> */

void __rustcall
<alloc::collections::btree::node::[8]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Leaf>>
::new_leaf<alloc::alloc::Global>(void)

{
  long lVar1;
  
  lVar1 = <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>
          ::new_uninit_in();
  *(undefined8 *)(lVar1 + 0x4d0) = 0;
  *(undefined2 *)(lVar1 + 0x532) = 0;
  return;
}


// ===== 00a73ba8  <alloc::collections::btree::node::[9]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>::new_internal<alloc::alloc::Global> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[9]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,
   u64, gimli::read::abbrev::Abbreviation, {backref
   26}::Internal>>::new_internal<alloc::alloc::Global> */

long __rustcall
<alloc::collections::btree::node::[9]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>
::new_internal<alloc::alloc::Global>(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,gimli::read::abbrev::Abbreviation>>>
          ::new_uninit_in();
  *(undefined8 *)(lVar1 + 0x4d0) = 0;
  *(undefined2 *)(lVar1 + 0x532) = 0;
  *(long *)(lVar1 + 0x538) = param_1;
  if (param_2 != -1) {
    *(long *)(param_1 + 0x4d0) = lVar1;
    *(undefined2 *)(param_1 + 0x530) = 0;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afcd58,param_2 + 1);
}


// ===== 00a73c24  <alloc::collections::btree::node::[9]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>::from_new_internal<alloc::alloc::Global> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[9]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,
   u64, gimli::read::abbrev::Abbreviation, {backref
   26}::Internal>>::from_new_internal<alloc::alloc::Global> */

void __rustcall
<alloc::collections::btree::node::[9]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>
::from_new_internal<alloc::alloc::Global>(long param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x532);
  lVar3 = 0;
  do {
    lVar1 = lVar3 + 1;
    lVar4 = *(long *)(param_1 + lVar3 * 8 + 0x538);
    *(short *)(lVar4 + 0x530) = (short)lVar3;
    *(long *)(lVar4 + 0x4d0) = param_1;
    lVar3 = lVar1;
  } while ((ulong)uVar2 + 1 != lVar1);
  return;
}


// ===== 00a73c54  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert::<alloc[c1f8e832b0d782c7]::alloc::Global> =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert::<alloc[c1f8e832b0d782c7]::alloc::Global>
    */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
     ::insert::<alloc[c1f8e832b0d782c7]::alloc::Global>
               (void *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long local_130;
  long lStack_128;
  undefined8 local_120;
  undefined8 local_118 [19];
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_130 = *param_2;
  if (*(ushort *)(local_130 + 0x532) < 0xb) {
    insert_fit(local_118,param_2,param_3,param_4);
    *(undefined8 *)((long)param_1 + 8) = 2;
    *(undefined8 *)((long)param_1 + 0xa0) = local_118[1];
    *(undefined8 *)((long)param_1 + 0x98) = local_118[0];
    *(undefined8 *)((long)param_1 + 0xa8) = local_118[2];
  }
  else {
    uVar4 = param_2[2];
    if (uVar4 < 5) {
      bVar3 = false;
      local_120 = 4;
    }
    else if (uVar4 == 5) {
      bVar3 = false;
      local_120 = 5;
    }
    else if (uVar4 == 6) {
      uVar4 = 0;
      bVar3 = true;
      local_120 = 5;
    }
    else {
      uVar4 = uVar4 - 7;
      bVar3 = true;
      local_120 = 6;
    }
    lStack_128 = param_2[1];
                    /* try { // try from 00a73d10 to 00a73d1f has its CatchHandler @ 00a73da4 */
    <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
    ::split::<alloc[c1f8e832b0d782c7]::alloc::Global>(local_118,&local_130);
    lVar1 = 0x88;
    if (!bVar3) {
      lVar1 = 0x78;
    }
    lVar2 = 0x90;
    if (!bVar3) {
      lVar2 = 0x80;
    }
    local_80 = *(undefined8 *)((long)local_118 + lVar1);
    uStack_78 = *(undefined8 *)((long)local_118 + lVar2);
    local_70 = uVar4;
    insert_fit(&local_68,&local_80,param_3,param_4);
    memcpy(param_1,local_118,0x98);
    *(undefined8 *)((long)param_1 + 0xa8) = local_58;
    *(undefined8 *)((long)param_1 + 0xa0) = uStack_60;
    *(undefined8 *)((long)param_1 + 0x98) = local_68;
  }
  return;
}


// ===== 00a73dc8  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert::<alloc[c1f8e832b0d782c7]::alloc::Global> =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert::<alloc[c1f8e832b0d782c7]::alloc::Global>
    */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
     ::insert::<alloc[c1f8e832b0d782c7]::alloc::Global>
               (void *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               ,long param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long local_118;
  long lStack_110;
  undefined8 local_108;
  undefined8 auStack_100 [19];
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  
  lStack_110 = param_2[1];
  if (param_6 == lStack_110 + -1) {
    local_118 = *param_2;
    if (*(ushort *)(local_118 + 0x532) < 0xb) {
      insert_fit(param_2,param_3,param_4,param_5);
      *(undefined8 *)((long)param_1 + 8) = 2;
    }
    else {
      uVar4 = param_2[2];
      if (uVar4 < 5) {
        bVar3 = false;
        local_108 = 4;
      }
      else if (uVar4 == 5) {
        bVar3 = false;
        local_108 = 5;
      }
      else if (uVar4 == 6) {
        uVar4 = 0;
        bVar3 = true;
        local_108 = 5;
      }
      else {
        uVar4 = uVar4 - 7;
        bVar3 = true;
        local_108 = 6;
      }
                    /* try { // try from 00a73e84 to 00a73e93 has its CatchHandler @ 00a73f1c */
      <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
      ::split::<alloc[c1f8e832b0d782c7]::alloc::Global>(auStack_100,&local_118);
      lVar1 = 0x88;
      if (!bVar3) {
        lVar1 = 0x78;
      }
      lVar2 = 0x90;
      if (!bVar3) {
        lVar2 = 0x80;
      }
      local_68 = *(undefined8 *)((long)auStack_100 + lVar1);
      uStack_60 = *(undefined8 *)((long)auStack_100 + lVar2);
      local_58 = uVar4;
      insert_fit(&local_68,param_3,param_4,param_5);
      memcpy(param_1,auStack_100,0x98);
    }
    return;
  }
                    /* try { // try from 00a73f00 to 00a73f17 has its CatchHandler @ 00a73f1c */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_00384e40,0x35,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afcd70);
}


// ===== 00a73f40  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert_recursing::<alloc[c1f8e832b0d782c7]::alloc::Global,<alloc[c1f8e832b0d782c7]::collections::btree::map::entry::VacantEntry<u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation>>::insert_entry::{closure#0}> =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert_recursing::<alloc[c1f8e832b0d782c7]::alloc::Global,
   <alloc[c1f8e832b0d782c7]::collections::btree::map::entry::VacantEntry<u64,
   gimli[1de8a57408df84df]::read::abbrev::Abbreviation>>::insert_entry::{closure#0}> */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
     ::insert_recursing::
     <alloc[c1f8e832b0d782c7]::alloc::Global,<alloc[c1f8e832b0d782c7]::collections::btree::map::entry::VacantEntry<u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation>>::insert_entry::_closure_0_>
               (undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *in_x3;
  undefined1 (*pauVar8) [16];
  undefined1 auStack_1a0 [112];
  undefined8 local_130;
  long local_128 [14];
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  ulong local_70;
  
  insert::<alloc[c1f8e832b0d782c7]::alloc::Global>(&local_130);
  lVar3 = lStack_b0;
  lVar2 = local_b8;
  uVar1 = local_130;
  if (local_128[0] == 2) {
    param_1[1] = uStack_90;
    *param_1 = local_98;
    param_1[2] = local_88;
  }
  else {
    memcpy(auStack_1a0,local_128,0x70);
    lVar7 = *(long *)(lVar2 + 0x4d0);
    uVar4 = local_a8;
    uVar5 = uStack_a0;
    lVar6 = local_80._0_8_;
    while (local_80._0_8_ = lVar7, local_80._0_8_ != 0) {
      local_80._8_8_ = lVar3 + 1;
      local_70 = (ulong)*(ushort *)(lVar2 + 0x530);
      local_a8 = uVar4;
      uStack_a0 = uVar5;
      <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
      ::insert::<alloc[c1f8e832b0d782c7]::alloc::Global>
                (&local_130,local_80,uVar1,auStack_1a0,uVar4,uVar5);
      lVar3 = lStack_b0;
      lVar2 = local_b8;
      uVar1 = local_130;
      if (local_128[0] == 2) goto LAB_00a7407c;
      memcpy(auStack_1a0,local_128,0x70);
      uVar4 = local_a8;
      uVar5 = uStack_a0;
      lVar6 = local_80._0_8_;
      lVar7 = *(long *)(lVar2 + 0x4d0);
    }
    local_80._0_8_ = lVar6;
    memcpy(local_128,auStack_1a0,0x70);
    pauVar8 = (undefined1 (*) [16])*in_x3;
    if (*(long *)*pauVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afcdb8);
    }
                    /* try { // try from 00a74058 to 00a7405b has its CatchHandler @ 00a740b8 */
    local_80 = <alloc::collections::btree::node::[9]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Owned,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>
               ::new_internal<alloc::alloc::Global>(*(long *)*pauVar8,*(undefined8 *)(*pauVar8 + 8))
    ;
    *pauVar8 = local_80;
    <alloc::collections::btree::node::[v]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_25}::Internal>>
    ::push(local_80,uVar1,local_128,uVar4,uVar5);
LAB_00a7407c:
    param_1[2] = local_88;
    *param_1 = local_98;
    param_1[1] = uStack_90;
  }
  return;
}


// ===== 00a740e4  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::split::<alloc[c1f8e832b0d782c7]::alloc::Global> =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::split::<alloc[c1f8e832b0d782c7]::alloc::Global>
    */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
     ::split::<alloc[c1f8e832b0d782c7]::alloc::Global>(void *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_a8 [120];
  
  lVar3 = <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>
          ::new_uninit_in();
  *(undefined8 *)(lVar3 + 0x4d0) = 0;
  *(undefined2 *)(lVar3 + 0x532) = 0;
                    /* try { // try from 00a74110 to 00a7411f has its CatchHandler @ 00a74150 */
  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
  ::split_leaf_data(auStack_a8,param_2,lVar3);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  memcpy(param_1,auStack_a8,0x78);
  *(undefined8 *)((long)param_1 + 0x78) = uVar1;
  *(undefined8 *)((long)param_1 + 0x80) = uVar2;
  *(long *)((long)param_1 + 0x88) = lVar3;
  *(undefined8 *)((long)param_1 + 0x90) = 0;
  return;
}


// ===== 00a7416c  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::split::<alloc[c1f8e832b0d782c7]::alloc::Global> =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::split::<alloc[c1f8e832b0d782c7]::alloc::Global>
    */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
     ::split::<alloc[c1f8e832b0d782c7]::alloc::Global>(void *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b8 [120];
  
  lVar8 = *param_2;
  uVar3 = *(ushort *)(lVar8 + 0x532);
  lVar4 = <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,gimli::read::abbrev::Abbreviation>>>
          ::new_uninit_in();
  *(undefined8 *)(lVar4 + 0x4d0) = 0;
  *(undefined2 *)(lVar4 + 0x532) = 0;
                    /* try { // try from 00a741a4 to 00a741b3 has its CatchHandler @ 00a74278 */
  split_leaf_data(auStack_b8,param_2,lVar4);
  lVar1 = (ulong)*(ushort *)(lVar4 + 0x532) + 1;
  if (0xb < (ulong)*(ushort *)(lVar4 + 0x532)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,lVar1,0xc,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afcd88);
  }
  if ((ulong)uVar3 - param_2[2] == lVar1) {
    memcpy((void *)(lVar4 + 0x538),(void *)(lVar8 + param_2[2] * 8 + 0x540),lVar1 * 8);
    lVar7 = param_2[1];
    lVar5 = 0;
    do {
      lVar2 = lVar5 + 1;
      lVar6 = *(long *)(lVar4 + lVar5 * 8 + 0x538);
      *(short *)(lVar6 + 0x530) = (short)lVar5;
      *(long *)(lVar6 + 0x4d0) = lVar4;
      lVar5 = lVar2;
    } while (lVar1 != lVar2);
    memcpy(param_1,auStack_b8,0x78);
    *(long *)((long)param_1 + 0x78) = lVar8;
    *(long *)((long)param_1 + 0x80) = lVar7;
    *(long *)((long)param_1 + 0x88) = lVar4;
    *(long *)((long)param_1 + 0x90) = lVar7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_00384e75,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afcda0);
}


// ===== 00a742b8  <alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Immut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>>::search_tree::<u64> =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Immut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>>::search_tree::<u64>
    */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Immut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>>
     ::search_tree::<u64>(undefined8 *param_1,long param_2,long param_3,ulong *param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = 1;
  while( true ) {
    uVar4 = (ulong)*(ushort *)(param_2 + 0x532);
    lVar6 = uVar4 << 3;
    lVar2 = 0x9b;
    do {
      lVar5 = lVar2;
      if (lVar6 == 0) goto LAB_00a742fc;
      uVar7 = *(ulong *)(param_2 + lVar5 * 8);
      lVar6 = lVar6 + -8;
      cVar1 = uVar7 < *param_4;
      if (*param_4 < uVar7) {
        cVar1 = -1;
      }
      lVar2 = lVar5 + 1;
    } while (cVar1 == '\x01');
    if (cVar1 == '\0') break;
    uVar4 = lVar5 - 0x9b;
LAB_00a742fc:
    if (param_3 == 0) goto LAB_00a74318;
    param_3 = param_3 + -1;
    param_2 = *(long *)(param_2 + uVar4 * 8 + 0x538);
  }
  uVar3 = 0;
  uVar4 = lVar5 - 0x9b;
LAB_00a74318:
  param_1[2] = param_3;
  param_1[3] = uVar4;
  *param_1 = uVar3;
  param_1[1] = param_2;
  return;
}


// ===== 00a74324  <alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,gimli::read::abbrev::Abbreviation>>::get<u64> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,
   gimli::read::abbrev::Abbreviation>>::get<u64> */

long __rustcall
<alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,gimli::read::abbrev::Abbreviation>>
::get<u64>(long *param_1,ulong *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = param_1[1];
  do {
    lVar2 = lVar3 + -0x70;
    lVar7 = (ulong)*(ushort *)(lVar3 + 0x532) << 3;
    uVar5 = 0xffffffffffffffff;
    puVar8 = (ulong *)(lVar3 + 0x4d8);
    do {
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x532);
      if (lVar7 == 0) goto LAB_00a74380;
      lVar2 = lVar2 + 0x70;
      uVar6 = uVar5 + 1;
      lVar7 = lVar7 + -8;
      cVar1 = *puVar8 < *param_2;
      if (*param_2 < *puVar8) {
        cVar1 = -1;
      }
      uVar5 = uVar6;
      puVar8 = puVar8 + 1;
    } while (cVar1 == '\x01');
    if (cVar1 == '\0') {
      return lVar2;
    }
LAB_00a74380:
    if (lVar4 == 0) {
      return 0;
    }
    lVar4 = lVar4 + -1;
    lVar3 = *(long *)(lVar3 + uVar6 * 8 + 0x538);
  } while( true );
}


// ===== 00a7439c  <alloc::collections::btree::node::[p]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>::correct_childrens_parent_links<core::ops::range::RangeInclusive<usize>> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[p]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,
   u64, gimli::read::abbrev::Abbreviation, {backref
   26}::Internal>>::correct_childrens_parent_links<core::ops::range::RangeInclusive<usize>> */

void __rustcall
<alloc::collections::btree::node::[p]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>
::correct_childrens_parent_links<core::ops::range::RangeInclusive<usize>>
          (long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((param_2[2] & 1) == 0) {
    uVar2 = param_2[1];
    if (*param_2 <= uVar2) {
      lVar4 = *param_1;
      uVar3 = *param_2;
      do {
        uVar1 = uVar3 + 1;
        lVar5 = *(long *)(lVar4 + uVar3 * 8 + 0x538);
        *(short *)(lVar5 + 0x530) = (short)uVar3;
        *(long *)(lVar5 + 0x4d0) = lVar4;
        uVar3 = uVar1;
      } while (uVar2 + 1 != uVar1);
    }
  }
  return;
}


// ===== 00a743dc  <alloc::collections::btree::node::[p]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>::correct_childrens_parent_links<core::ops::range::Range<usize>> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[p]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,
   u64, gimli::read::abbrev::Abbreviation, {backref
   26}::Internal>>::correct_childrens_parent_links<core::ops::range::Range<usize>> */

void __rustcall
<alloc::collections::btree::node::[p]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_26}::Internal>>
::correct_childrens_parent_links<core::ops::range::Range<usize>>
          (long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < param_3) {
    lVar2 = *param_1;
    do {
      uVar1 = param_2 + 1;
      lVar3 = *(long *)(lVar2 + param_2 * 8 + 0x538);
      *(short *)(lVar3 + 0x530) = (short)param_2;
      *(long *)(lVar3 + 0x4d0) = lVar2;
      param_2 = uVar1;
    } while (param_3 != uVar1);
  }
  return;
}


// ===== 00a7440c  alloc::collections::btree::node::slice_insert<core::ptr::non_null::NonNull<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>> =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::collections::btree::node::slice_insert<core::ptr::non_null::NonNull<alloc::collections::btree::node::LeafNode<u64,
   gimli::read::abbrev::Abbreviation>>> */

void __rustcall
alloc::collections::btree::node::
slice_insert<core::ptr::non_null::NonNull<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>
          (long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  if (param_3 + 1 < param_2) {
    memmove((void *)(param_1 + (param_3 + 1) * 8),(void *)(param_1 + param_3 * 8),
            (param_2 + ~param_3) * 8);
  }
  *(undefined8 *)(param_1 + param_3 * 8) = param_4;
  return;
}


// ===== 00a74460  alloc::collections::btree::node::slice_insert<gimli::read::abbrev::Abbreviation> =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::collections::btree::node::slice_insert<gimli::read::abbrev::Abbreviation> */

void __rustcall
alloc::collections::btree::node::slice_insert<gimli::read::abbrev::Abbreviation>
          (long param_1,ulong param_2,ulong param_3,void *param_4)

{
  if (param_3 + 1 < param_2) {
    memmove((void *)(param_1 + (param_3 + 1) * 0x70),(void *)(param_1 + param_3 * 0x70),
            (param_2 + ~param_3) * 0x70);
  }
  memcpy((void *)(param_1 + param_3 * 0x70),param_4,0x70);
  return;
}


// ===== 00a744cc  alloc::collections::btree::node::slice_insert<u64> =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::collections::btree::node::slice_insert<u64> */

void __rustcall
alloc::collections::btree::node::slice_insert<u64>
          (long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  if (param_3 + 1 < param_2) {
    memmove((void *)(param_1 + (param_3 + 1) * 8),(void *)(param_1 + param_3 * 8),
            (param_2 + ~param_3) * 8);
  }
  *(undefined8 *)(param_1 + param_3 * 8) = param_4;
  return;
}


// ===== 00a74520  alloc::collections::btree::node::move_to_slice<u64> =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::collections::btree::node::move_to_slice<u64> */

void __rustcall
alloc::collections::btree::node::move_to_slice<u64>
          (void *param_1,long param_2,void *param_3,long param_4)

{
  if (param_2 == param_4) {
    memcpy(param_3,param_1,param_2 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_00384e75,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afcda0);
}


// ===== 00a74560  alloc::collections::btree::node::move_to_slice<gimli::read::abbrev::Abbreviation> =====

/* WARNING: Unknown calling convention: __rustcall */
/* alloc::collections::btree::node::move_to_slice<gimli::read::abbrev::Abbreviation> */

void __rustcall
alloc::collections::btree::node::move_to_slice<gimli::read::abbrev::Abbreviation>
          (void *param_1,long param_2,void *param_3,long param_4)

{
  if (param_2 == param_4) {
    memcpy(param_3,param_1,param_2 * 0x70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_00384e75,0x28,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afcda0);
}


// ===== 00a745a4  <gimli::leb128::write::gimli::leb128::write::Leb128>::bytes =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::leb128::write::gimli::leb128::write::Leb128>::bytes */

void __rustcall <gimli::leb128::write::gimli::leb128::write::Leb128>::bytes(long param_1)

{
  if (*(byte *)(param_1 + 10) < 0xb) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail
            (0,*(byte *)(param_1 + 10),10,&PTR_s__rust_deps_gimli_0_34_0_src_leb1_00afcdd0);
}


// ===== 00a745d0  <gimli::constants::[1b]::gimli::constants::DwAt>::static_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::[1b]::gimli::constants::DwAt>::static_string */

undefined1  [16] __rustcall
<gimli::constants::[1b]::gimli::constants::DwAt>::static_string(ushort *param_1,ulong param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar1 = *param_1;
  puVar3 = (undefined *)0x0;
  if (0x2200 < uVar1) {
    if (0x2301 < uVar1) {
      if (0x3dff < uVar1) {
        if (uVar1 < 0x3fe1) {
          if (uVar1 == 0x3e00) {
            puVar3 = &DAT_00386194;
            goto LAB_00a75528;
          }
          if (uVar1 == 0x3e01) {
            puVar3 = &DAT_003861ab;
            goto LAB_00a754a0;
          }
          if (uVar1 == 0x3e02) {
            puVar3 = &DAT_003861c3;
            goto LAB_00a75404;
          }
          goto switchD_00a74614_caseD_220a;
        }
        switch(uVar1) {
        case 0x3fe1:
          puVar3 = &DAT_003861d6;
          goto LAB_00a75490;
        case 0x3fe2:
          puVar3 = &DAT_003861eb;
          goto LAB_00a75538;
        case 0x3fe3:
          puVar3 = &DAT_003861fc;
          goto LAB_00a753e8;
        case 0x3fe4:
          puVar3 = &DAT_0038620b;
          goto LAB_00a75538;
        case 0x3fe5:
          puVar3 = &DAT_0038621c;
          break;
        case 0x3fe6:
          puVar3 = &DAT_0038623a;
          goto LAB_00a74f94;
        case 0x3fe7:
          puVar3 = &DAT_00386253;
          goto LAB_00a754c0;
        case 0x3fe8:
          puVar3 = &DAT_0038626d;
          goto LAB_00a74f94;
        case 0x3fe9:
          puVar3 = &DAT_00386286;
          goto LAB_00a751d8;
        case 0x3fea:
          puVar3 = &DAT_003862a1;
          goto LAB_00a751d8;
        case 0x3feb:
          puVar3 = &DAT_003862bc;
          break;
        case 0x3fec:
          puVar3 = &DAT_003862da;
          break;
        case 0x3fed:
          puVar3 = &DAT_003862f8;
          goto LAB_00a75278;
        case 0x3fee:
        case 0x3fef:
        case 0x3ff0:
        case 0x3ff1:
        case 0x3ff2:
        case 0x3ff3:
        case 0x3ff4:
        case 0x3ff5:
        case 0x3ff6:
        case 0x3ff7:
        case 0x3ff8:
        case 0x3ff9:
        case 0x3ffa:
        case 0x3ffb:
        case 0x3ffc:
        case 0x3ffd:
        case 0x3ffe:
          goto switchD_00a74614_caseD_220a;
        case 0x3fff:
          puVar3 = &DAT_003856ae;
          goto LAB_00a75424;
        default:
          goto switchD_00a74700_default;
        }
        goto LAB_00a74c30;
      }
      if (uVar1 < 0x3a01) {
        if (uVar1 < 0x2305) {
          if (uVar1 == 0x2302) {
            puVar3 = &DAT_00385f35;
            goto LAB_00a751d8;
          }
          if (uVar1 == 0x2303) {
            puVar3 = &DAT_00385f50;
            goto LAB_00a75404;
          }
          if (uVar1 == 0x2304) {
            puVar3 = &DAT_00385f63;
            goto LAB_00a75490;
          }
        }
        else {
          if (uVar1 == 0x2305) {
            puVar3 = &DAT_00385f78;
            goto LAB_00a754dc;
          }
          if (uVar1 == 0x3210) {
            puVar3 = &DAT_00385f86;
            goto LAB_00a754a0;
          }
          if (uVar1 == 0x3a00) {
            puVar3 = &DAT_00385f9e;
            goto LAB_00a753e8;
          }
        }
        goto switchD_00a74614_caseD_220a;
      }
      switch(uVar1) {
      case 0x3b11:
        puVar3 = &DAT_00385fcf;
        break;
      case 0x3b12:
        puVar3 = &DAT_00385fea;
        goto LAB_00a752c4;
      case 0x3b13:
        puVar3 = &DAT_00386006;
        goto LAB_00a75444;
      case 0x3b14:
        puVar3 = &DAT_00386027;
        goto LAB_00a752c4;
      case 0x3b15:
        puVar3 = &DAT_00386043;
        goto LAB_00a74c30;
      case 0x3b16:
      case 0x3b17:
      case 0x3b18:
      case 0x3b19:
      case 0x3b1a:
      case 0x3b1b:
      case 0x3b1c:
      case 0x3b1d:
      case 0x3b1e:
      case 0x3b1f:
      case 0x3b2a:
      case 0x3b2b:
      case 0x3b2c:
      case 0x3b2d:
      case 0x3b2e:
      case 0x3b2f:
        goto switchD_00a74614_caseD_220a;
      case 0x3b20:
        puVar3 = &DAT_00386061;
        goto LAB_00a74f94;
      case 0x3b21:
        puVar3 = &DAT_0038607a;
        goto LAB_00a754c0;
      case 0x3b22:
        puVar3 = &DAT_00386094;
        break;
      case 0x3b23:
        puVar3 = &DAT_003860af;
        goto LAB_00a74c30;
      case 0x3b24:
        auVar6._8_8_ = 0x20;
        auVar6._0_8_ = "DW_AT_BORLAND_Delphi_constructor";
        return auVar6;
      case 0x3b25:
        puVar3 = &DAT_003860cd;
        goto LAB_00a754b0;
      case 0x3b26:
        auVar5._8_8_ = 0x25;
        auVar5._0_8_ = &DAT_003860ec;
        return auVar5;
      case 0x3b27:
        puVar3 = &DAT_00386111;
LAB_00a74c30:
        auVar7._8_8_ = 0x1e;
        auVar7._0_8_ = puVar3;
        return auVar7;
      case 0x3b28:
        puVar3 = &DAT_0038612f;
        goto LAB_00a754a0;
      case 0x3b29:
        puVar3 = &DAT_00386147;
        break;
      case 0x3b30:
        puVar3 = &DAT_00386162;
        goto LAB_00a754f8;
      case 0x3b31:
        puVar3 = &DAT_0038617f;
        goto LAB_00a75490;
      default:
        if (uVar1 == 0x3a01) {
          puVar3 = &DAT_00385fad;
        }
        else {
          if (uVar1 != 0x3a02) goto switchD_00a74614_caseD_220a;
          puVar3 = &DAT_00385fbe;
        }
        goto LAB_00a75538;
      }
      goto LAB_00a751d8;
    }
    switch(uVar1) {
    case 0x2201:
      puVar3 = &DAT_00385b04;
      goto LAB_00a75414;
    case 0x2202:
      puVar3 = &DAT_00385b16;
      goto LAB_00a75404;
    case 0x2203:
      pcVar4 = &DAT_0029f290;
      goto LAB_00a75434;
    case 0x2204:
      puVar3 = &DAT_00385b29;
      goto LAB_00a74f94;
    case 0x2205:
      puVar3 = &DAT_00385b42;
      goto LAB_00a75508;
    case 0x2206:
      puVar3 = &DAT_00385b58;
      goto LAB_00a753e8;
    case 0x2207:
      puVar3 = &DAT_00385b67;
      goto LAB_00a74f94;
    case 0x2208:
      puVar3 = &DAT_00385b80;
      goto LAB_00a75414;
    case 0x2209:
      puVar3 = &DAT_00385b92;
      goto LAB_00a75508;
    case 0x220a:
    case 0x220b:
    case 0x220c:
    case 0x220d:
    case 0x220e:
    case 0x220f:
    case 0x221a:
    case 0x221b:
    case 0x221c:
    case 0x221d:
    case 0x221e:
    case 0x221f:
    case 0x222f:
      goto switchD_00a74614_caseD_220a;
    case 0x2210:
      puVar3 = &DAT_00385ba8;
      goto LAB_00a75278;
    case 0x2211:
      puVar3 = &DAT_00385bbc;
      goto LAB_00a75508;
    case 0x2212:
      puVar3 = &DAT_00385bd2;
      goto LAB_00a75538;
    case 0x2213:
      puVar3 = &DAT_00385be3;
      goto LAB_00a75508;
    case 0x2214:
      puVar3 = &DAT_00385bf9;
      break;
    case 0x2215:
      puVar3 = &DAT_00385c11;
      break;
    case 0x2216:
      puVar3 = &DAT_00385c29;
      goto LAB_00a75490;
    case 0x2217:
      puVar3 = &DAT_00385c3e;
      break;
    case 0x2218:
      puVar3 = &DAT_00385c56;
      goto LAB_00a75278;
    case 0x2219:
      puVar3 = &DAT_00385c6a;
      goto LAB_00a74f94;
    case 0x2220:
      puVar3 = &DAT_00385c83;
      goto LAB_00a75538;
    case 0x2221:
      puVar3 = &DAT_00385c94;
      goto LAB_00a75414;
    case 0x2222:
      puVar3 = &DAT_00385ca6;
      goto LAB_00a75528;
    case 0x2223:
      puVar3 = &DAT_00385cbd;
      goto LAB_00a751d8;
    case 0x2224:
      puVar3 = &DAT_00385cd8;
      break;
    case 0x2225:
      puVar3 = &DAT_00385cf0;
      break;
    case 0x2226:
      puVar3 = &DAT_00385d08;
      goto LAB_00a75404;
    case 0x2227:
      puVar3 = &DAT_00385d1b;
      goto LAB_00a74f94;
    case 0x2228:
      puVar3 = &DAT_00385d34;
      goto LAB_00a751d8;
    case 0x2229:
      puVar3 = &DAT_00385d4f;
      break;
    case 0x222a:
      puVar3 = &DAT_00385d67;
      goto LAB_00a75490;
    case 0x222b:
      puVar3 = &DAT_00385d7c;
      goto LAB_00a75490;
    case 0x222c:
      puVar3 = &DAT_00385d91;
      goto LAB_00a74f94;
    case 0x222d:
      puVar3 = &DAT_00385daa;
LAB_00a75444:
      auVar23._8_8_ = 0x21;
      auVar23._0_8_ = puVar3;
      return auVar23;
    case 0x222e:
      puVar3 = &DAT_00385dcb;
      goto LAB_00a753e8;
    case 0x2230:
      puVar3 = &DAT_00385dda;
      goto LAB_00a754c0;
    case 0x2231:
      puVar3 = &DAT_00385df4;
      goto LAB_00a75278;
    case 0x2232:
      puVar3 = &DAT_00385e08;
      goto LAB_00a75490;
    case 0x2233:
      puVar3 = &DAT_00385e1d;
      goto LAB_00a752c4;
    case 0x2234:
      puVar3 = &DAT_00385e39;
      goto LAB_00a754c0;
    case 0x2235:
      puVar3 = &DAT_00385e53;
      goto LAB_00a751d8;
    case 0x2236:
      puVar3 = &DAT_00385e6e;
LAB_00a74f94:
      auVar11._8_8_ = 0x19;
      auVar11._0_8_ = puVar3;
      return auVar11;
    case 0x2237:
      puVar3 = &DAT_00385e87;
LAB_00a75508:
      auVar30._8_8_ = 0x16;
      auVar30._0_8_ = puVar3;
      return auVar30;
    case 0x2238:
      puVar3 = &DAT_00385e9d;
      goto LAB_00a75528;
    case 0x2239:
      puVar3 = &DAT_00385eb4;
LAB_00a751d8:
      auVar12._8_8_ = 0x1b;
      auVar12._0_8_ = puVar3;
      return auVar12;
    case 0x223a:
      puVar3 = &DAT_00385ecf;
LAB_00a752c4:
      auVar14._8_8_ = 0x1c;
      auVar14._0_8_ = puVar3;
      return auVar14;
    case 0x223b:
      puVar3 = &DAT_00385eeb;
      goto LAB_00a75528;
    default:
      if (uVar1 == 0x2300) {
        puVar3 = &DAT_00385f02;
        goto LAB_00a75278;
      }
      if (uVar1 == 0x2301) {
        puVar3 = &DAT_00385f16;
        goto LAB_00a754b0;
      }
      goto switchD_00a74614_caseD_220a;
    }
LAB_00a754a0:
    auVar25._8_8_ = 0x18;
    auVar25._0_8_ = puVar3;
    return auVar25;
  }
  switch(uVar1) {
  case 0:
    puVar3 = &DAT_00384e9d;
    goto LAB_00a75334;
  case 1:
    puVar3 = &DAT_00384f94;
    goto LAB_00a75424;
  case 2:
    puVar3 = &DAT_00384fa1;
    goto LAB_00a754dc;
  case 3:
    puVar3 = &DAT_00384faf;
    goto LAB_00a75334;
  case 4:
  case 0xe:
  case 0x2d:
  case 0x75:
    goto switchD_00a74614_caseD_220a;
  case 5:
    puVar3 = &DAT_00384ea7;
    break;
  case 6:
    puVar3 = &DAT_00384eb6;
    goto LAB_00a75404;
  case 7:
    puVar3 = &DAT_00384ec9;
    goto LAB_00a75404;
  case 8:
    puVar3 = &DAT_00384edc;
    goto LAB_00a75414;
  case 9:
    puVar3 = &DAT_00384fb9;
    goto LAB_00a754dc;
  case 10:
    puVar3 = &DAT_00384eee;
    goto LAB_00a75538;
  case 0xb:
    puVar3 = &DAT_00384fc7;
    break;
  case 0xc:
    pcVar4 = "DW_AT_bit_offset\x1b";
    goto LAB_00a75434;
  case 0xd:
    puVar3 = &DAT_00384fd6;
    goto LAB_00a754dc;
  case 0xf:
    puVar3 = &DAT_00384eff;
    goto LAB_00a75414;
  case 0x10:
    puVar3 = &DAT_00384fe4;
    break;
  case 0x11:
    puVar3 = &DAT_00384ff3;
    goto LAB_00a75384;
  case 0x12:
    puVar3 = &DAT_00384fff;
    goto LAB_00a75424;
  case 0x13:
    puVar3 = &DAT_0038500c;
    goto LAB_00a754dc;
  case 0x14:
    puVar3 = &DAT_00384f11;
    goto LAB_00a75384;
  case 0x15:
    puVar3 = &DAT_0038501a;
    goto LAB_00a7535c;
  case 0x16:
    puVar3 = &DAT_00385025;
    goto LAB_00a75538;
  case 0x17:
    pcVar4 = &DAT_002a10a0;
    goto LAB_00a75434;
  case 0x18:
    puVar3 = &DAT_00385036;
    goto LAB_00a75384;
  case 0x19:
    puVar3 = &DAT_00385042;
    goto LAB_00a75404;
  case 0x1a:
    puVar3 = &DAT_00385055;
    goto LAB_00a75508;
  case 0x1b:
    puVar3 = &DAT_0038506b;
    goto LAB_00a754dc;
  case 0x1c:
    puVar3 = &DAT_00385079;
    goto LAB_00a75538;
  case 0x1d:
    puVar3 = &DAT_0038508a;
    goto LAB_00a75490;
  case 0x1e:
    puVar3 = &DAT_0038509f;
    goto LAB_00a75404;
  case 0x1f:
    puVar3 = &DAT_00384f1d;
    goto LAB_00a75424;
  case 0x20:
    puVar3 = &DAT_003850b2;
    goto LAB_00a75384;
  case 0x21:
    puVar3 = &DAT_003850be;
    goto LAB_00a75538;
  case 0x22:
    puVar3 = &DAT_003850cf;
    goto LAB_00a75538;
  case 0x23:
    puVar3 = &DAT_00384f2a;
    goto LAB_00a75424;
  case 0x24:
    puVar3 = &DAT_00384f37;
    goto LAB_00a75424;
  case 0x25:
    puVar3 = &DAT_003850e0;
    goto LAB_00a754dc;
  case 0x26:
    puVar3 = &DAT_00384f44;
    break;
  case 0x27:
    pcVar4 = &DAT_0029f3d0;
    goto LAB_00a75434;
  case 0x28:
    puVar3 = &DAT_00384f53;
    goto LAB_00a75384;
  case 0x29:
    puVar3 = &DAT_00384f5f;
    goto LAB_00a75414;
  case 0x2a:
    puVar3 = &DAT_003850ee;
    goto LAB_00a75538;
  case 0x2b:
    puVar3 = &DAT_00384f7e;
    goto LAB_00a75508;
  case 0x2c:
    puVar3 = &DAT_003850ff;
    goto LAB_00a75538;
  case 0x2e:
    pcVar4 = "DW_AT_bit_stride";
    goto LAB_00a75434;
  case 0x2f:
    puVar3 = &DAT_00385110;
    goto LAB_00a75538;
  case 0x30:
    puVar3 = &DAT_00384f71;
    goto LAB_00a75424;
  case 0x31:
    puVar3 = &DAT_00385121;
    goto LAB_00a75490;
  case 0x32:
    puVar3 = &DAT_00385136;
    goto LAB_00a75404;
  case 0x33:
    puVar3 = &DAT_00385149;
    goto LAB_00a75404;
  case 0x34:
    pcVar4 = &DAT_0029f7f0;
    goto LAB_00a75434;
  case 0x35:
    pcVar4 = &DAT_0029f800;
    goto LAB_00a75434;
  case 0x36:
    puVar3 = &DAT_0038515c;
    goto LAB_00a754a0;
  case 0x37:
    auVar10._8_8_ = 0xb;
    auVar10._0_8_ = &DAT_00385174;
    return auVar10;
  case 0x38:
    puVar3 = &DAT_0038517f;
    goto LAB_00a754c0;
  case 0x39:
    puVar3 = &DAT_00385199;
    goto LAB_00a75538;
  case 0x3a:
    puVar3 = &DAT_003851aa;
    break;
  case 0x3b:
    puVar3 = &DAT_003851b9;
    break;
  case 0x3c:
    puVar3 = &DAT_003851c8;
    goto LAB_00a75538;
  case 0x3d:
    pcVar4 = &DAT_0029f670;
    goto LAB_00a75434;
  case 0x3e:
    puVar3 = &DAT_003851d9;
    goto LAB_00a754dc;
  case 0x3f:
    puVar3 = &DAT_003851e7;
    goto LAB_00a754dc;
  case 0x40:
    pcVar4 = "DW_AT_frame_baseDW_FORM_ref_sig8{invalid syntax}host unreachable\a";
    goto LAB_00a75434;
  case 0x41:
    puVar3 = &DAT_003851f5;
    goto LAB_00a75384;
  case 0x42:
    puVar3 = &DAT_00385201;
    goto LAB_00a75490;
  case 0x43:
    pcVar4 = "DW_AT_macro_info\x1d";
    goto LAB_00a75434;
  case 0x44:
    puVar3 = &DAT_00385216;
    goto LAB_00a75404;
  case 0x45:
    puVar3 = &DAT_00385229;
    goto LAB_00a754dc;
  case 0x46:
    puVar3 = &DAT_00385237;
    goto LAB_00a75424;
  case 0x47:
    puVar3 = &DAT_00385244;
    goto LAB_00a75404;
  case 0x48:
    puVar3 = &DAT_00385257;
    goto LAB_00a75538;
  case 0x49:
    puVar3 = &DAT_00385268;
    goto LAB_00a75334;
  case 0x4a:
    puVar3 = &DAT_00385272;
    goto LAB_00a75414;
  case 0x4b:
    puVar3 = &DAT_00385284;
    goto LAB_00a754a0;
  case 0x4c:
    pcVar4 = "DW_AT_virtuality";
    goto LAB_00a75434;
  case 0x4d:
    puVar3 = &DAT_0038529c;
LAB_00a754c0:
    auVar27._8_8_ = 0x1a;
    auVar27._0_8_ = puVar3;
    return auVar27;
  case 0x4e:
    puVar3 = &DAT_003852b6;
    break;
  case 0x4f:
    pcVar4 = &DAT_002a0e10;
    goto LAB_00a75434;
  case 0x50:
    puVar3 = &DAT_003852c5;
    goto LAB_00a75404;
  case 0x51:
    puVar3 = &DAT_003852d8;
    goto LAB_00a75538;
  case 0x52:
    puVar3 = &DAT_003852e9;
    goto LAB_00a754dc;
  case 0x53:
    puVar3 = &DAT_003852f7;
    goto LAB_00a754dc;
  case 0x54:
    puVar3 = &DAT_00385305;
    break;
  case 0x55:
    puVar3 = &DAT_00385314;
    goto LAB_00a75384;
  case 0x56:
    pcVar4 = &DAT_002a0890;
    goto LAB_00a75434;
  case 0x57:
    puVar3 = &DAT_00385320;
    goto LAB_00a75538;
  case 0x58:
    puVar3 = &DAT_00385331;
    break;
  case 0x59:
    puVar3 = &DAT_00385340;
    break;
  case 0x5a:
    puVar3 = &DAT_0038534f;
    goto LAB_00a75538;
  case 0x5b:
    puVar3 = &DAT_00385360;
    goto LAB_00a75414;
  case 0x5c:
    puVar3 = &DAT_00385372;
    goto LAB_00a75404;
  case 0x5d:
    puVar3 = &DAT_00385385;
LAB_00a7535c:
    auVar16._8_8_ = 0xb;
    auVar16._0_8_ = puVar3;
    return auVar16;
  case 0x5e:
    puVar3 = &DAT_00385390;
    goto LAB_00a75414;
  case 0x5f:
    puVar3 = &DAT_003853a2;
    goto LAB_00a75538;
  case 0x60:
    puVar3 = &DAT_003853b3;
    goto LAB_00a75278;
  case 0x61:
    puVar3 = &DAT_003853c7;
    goto LAB_00a75424;
  case 0x62:
    puVar3 = &DAT_003853d4;
    goto LAB_00a75278;
  case 99:
    puVar3 = &DAT_003853e8;
    goto LAB_00a754dc;
  case 100:
    puVar3 = &DAT_003853f6;
    goto LAB_00a75278;
  case 0x65:
    puVar3 = &DAT_0038540a;
    break;
  case 0x66:
    puVar3 = &DAT_00385419;
    break;
  case 0x67:
    puVar3 = &DAT_00385428;
    goto LAB_00a75334;
  case 0x68:
    puVar3 = &DAT_00385432;
    break;
  case 0x69:
    puVar3 = &DAT_00385441;
    break;
  case 0x6a:
    puVar3 = &DAT_00385450;
    goto LAB_00a75490;
  case 0x6b:
    puVar3 = &DAT_00385465;
    goto LAB_00a75490;
  case 0x6c:
    pcVar4 = "DW_AT_const_expr";
    goto LAB_00a75434;
  case 0x6d:
    pcVar4 = "DW_AT_enum_class";
    goto LAB_00a75434;
  case 0x6e:
    puVar3 = &DAT_0038547a;
LAB_00a75414:
    auVar20._8_8_ = 0x12;
    auVar20._0_8_ = puVar3;
    return auVar20;
  case 0x6f:
    puVar3 = &DAT_0038548c;
    goto LAB_00a752c4;
  case 0x70:
    puVar3 = &DAT_003854a8;
LAB_00a754f8:
    auVar29._8_8_ = 0x1d;
    auVar29._0_8_ = puVar3;
    return auVar29;
  case 0x71:
    puVar3 = &DAT_003854c5;
LAB_00a75334:
    param_2 = 10;
switchD_00a74614_caseD_220a:
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = puVar3;
    return auVar15;
  case 0x72:
    puVar3 = &DAT_003854cf;
    goto LAB_00a75508;
  case 0x73:
    puVar3 = &DAT_003854e5;
    break;
  case 0x74:
    puVar3 = &DAT_003854f4;
    goto LAB_00a75404;
  case 0x76:
    puVar3 = &DAT_00385507;
    goto LAB_00a754dc;
  case 0x77:
    puVar3 = &DAT_00385515;
    break;
  case 0x78:
    puVar3 = &DAT_00385524;
    goto LAB_00a75508;
  case 0x79:
    puVar3 = &DAT_0038553a;
LAB_00a75384:
    auVar17._8_8_ = 0xc;
    auVar17._0_8_ = puVar3;
    return auVar17;
  case 0x7a:
    puVar3 = &DAT_00385546;
    goto LAB_00a75278;
  case 0x7b:
    puVar3 = &DAT_0038555a;
    goto LAB_00a751d8;
  case 0x7c:
    puVar3 = &DAT_00385575;
    goto LAB_00a74f94;
  case 0x7d:
    puVar3 = &DAT_0038558e;
    goto LAB_00a75278;
  case 0x7e:
    pcVar4 = "DW_AT_call_valueDW_TAG_with_stmtDW_TAG_call_siteInputOutputError\x10";
    goto LAB_00a75434;
  case 0x7f:
    puVar3 = &DAT_003855a2;
    goto LAB_00a75538;
  case 0x80:
    puVar3 = &DAT_003855b3;
    goto LAB_00a75278;
  case 0x81:
    puVar3 = &DAT_003855c7;
    goto LAB_00a75424;
  case 0x82:
    puVar3 = &DAT_003855d4;
    goto LAB_00a75278;
  case 0x83:
    puVar3 = &DAT_003855e8;
LAB_00a75538:
    auVar33._8_8_ = 0x11;
    auVar33._0_8_ = puVar3;
    return auVar33;
  case 0x84:
    puVar3 = &DAT_003855f9;
    goto LAB_00a751d8;
  case 0x85:
    puVar3 = &DAT_00385614;
    goto LAB_00a754a0;
  case 0x86:
    puVar3 = &DAT_0038562c;
LAB_00a75490:
    auVar24._8_8_ = 0x15;
    auVar24._0_8_ = puVar3;
    return auVar24;
  case 0x87:
    puVar3 = &DAT_00385641;
LAB_00a754dc:
    auVar28._8_8_ = 0xe;
    auVar28._0_8_ = puVar3;
    return auVar28;
  case 0x88:
    puVar3 = &DAT_0038564f;
    break;
  case 0x89:
    puVar3 = &DAT_0038565e;
LAB_00a75278:
    auVar13._8_8_ = 0x14;
    auVar13._0_8_ = puVar3;
    return auVar13;
  case 0x8a:
    puVar3 = &DAT_00385672;
LAB_00a75424:
    auVar21._8_8_ = 0xd;
    auVar21._0_8_ = puVar3;
    return auVar21;
  case 0x8b:
    puVar3 = &DAT_0038567f;
    break;
  case 0x8c:
    puVar3 = &DAT_0038568e;
LAB_00a75404:
    auVar19._8_8_ = 0x13;
    auVar19._0_8_ = puVar3;
    return auVar19;
  default:
    switch(uVar1) {
    case 0x2101:
      puVar3 = &DAT_0038586d;
      goto LAB_00a754dc;
    case 0x2102:
      puVar3 = &DAT_0038587b;
      goto LAB_00a754dc;
    case 0x2103:
      puVar3 = &DAT_00385889;
      goto LAB_00a754dc;
    case 0x2104:
      pcVar4 = &DAT_002a10b0;
      break;
    case 0x2105:
      pcVar4 = "DW_AT_body_begin";
      break;
    case 0x2106:
      puVar3 = &DAT_00385897;
      goto LAB_00a754dc;
    case 0x2107:
      pcVar4 = "DW_AT_GNU_vectorDW_FORM_loclistxDW_OP_GNU_uninitDW_SECT_RNGLISTS\x0f";
      break;
    case 0x2108:
      puVar3 = &DAT_003858a5;
      goto LAB_00a75278;
    case 0x2109:
      puVar3 = &DAT_003858b9;
      goto LAB_00a75528;
    case 0x210a:
      puVar3 = &DAT_003858d0;
      goto LAB_00a75538;
    case 0x210b:
      puVar3 = &DAT_003858e1;
      goto LAB_00a75278;
    case 0x210c:
      puVar3 = &DAT_003858f5;
      goto LAB_00a754a0;
    case 0x210d:
      auVar9._8_8_ = 0x22;
      auVar9._0_8_ = &DAT_0038590d;
      return auVar9;
    case 0x210e:
      puVar3 = &DAT_0038592f;
      goto LAB_00a754b0;
    case 0x210f:
      puVar3 = &DAT_0038594e;
      goto LAB_00a75528;
    case 0x2110:
      puVar3 = &DAT_00385965;
      goto LAB_00a75528;
    case 0x2111:
      puVar3 = &DAT_0038597c;
      goto LAB_00a74f94;
    case 0x2112:
      puVar3 = &DAT_00385995;
      goto LAB_00a74c30;
    case 0x2113:
      puVar3 = &DAT_003859b3;
      goto LAB_00a754c0;
    case 0x2114:
      auVar8._8_8_ = 0x24;
      auVar8._0_8_ = &DAT_003859cd;
      return auVar8;
    case 0x2115:
      puVar3 = &DAT_003859f1;
      goto LAB_00a75404;
    case 0x2116:
      puVar3 = &DAT_00385a04;
      goto LAB_00a754f8;
    case 0x2117:
      puVar3 = &DAT_00385a21;
      goto LAB_00a754a0;
    case 0x2118:
      puVar3 = &DAT_00385a39;
LAB_00a754b0:
      auVar26._8_8_ = 0x1f;
      auVar26._0_8_ = puVar3;
      return auVar26;
    case 0x2119:
      pcVar4 = "DW_AT_GNU_macrosno storage space\x16";
      break;
    case 0x211a:
      puVar3 = &DAT_00385a58;
      goto LAB_00a75538;
    case 0x211b:
    case 0x211c:
    case 0x211d:
    case 0x211e:
    case 0x211f:
    case 0x2120:
    case 0x2121:
    case 0x2122:
    case 0x2123:
    case 0x2124:
    case 0x2125:
    case 0x2126:
    case 0x2127:
    case 0x2128:
    case 0x2129:
    case 0x212a:
    case 0x212b:
    case 0x212c:
    case 0x212d:
    case 0x212e:
    case 0x212f:
      goto switchD_00a74614_caseD_220a;
    case 0x2130:
      puVar3 = &DAT_00385a69;
      goto LAB_00a75414;
    case 0x2131:
      pcVar4 = "DW_AT_GNU_dwo_id";
      break;
    case 0x2132:
      puVar3 = &DAT_00385a7b;
      goto LAB_00a75490;
    case 0x2133:
      puVar3 = &DAT_00385a90;
      goto LAB_00a75404;
    case 0x2134:
      puVar3 = &DAT_00385aa3;
      goto LAB_00a75414;
    case 0x2135:
      puVar3 = &DAT_00385ab5;
      goto LAB_00a75414;
    case 0x2136:
      puVar3 = &DAT_00385ac7;
      goto LAB_00a75528;
    case 0x2137:
      puVar3 = &DAT_00385ade;
      goto LAB_00a75414;
    case 0x2138:
      puVar3 = &DAT_00385af0;
      goto LAB_00a75278;
    default:
      switch(uVar1) {
      case 0x2000:
        puVar3 = &DAT_003856a1;
        goto LAB_00a75424;
      case 0x2001:
        puVar3 = &DAT_003856bb;
        goto LAB_00a754dc;
      case 0x2002:
        puVar3 = &DAT_003856c9;
        goto LAB_00a75490;
      case 0x2003:
        puVar3 = &DAT_003856de;
        goto LAB_00a754c0;
      case 0x2004:
        puVar3 = &DAT_003856f8;
        break;
      case 0x2005:
        puVar3 = &DAT_0038570f;
        goto LAB_00a754f8;
      case 0x2006:
        auVar31._8_8_ = 0x22;
        auVar31._0_8_ = &DAT_0038572c;
        return auVar31;
      case 0x2007:
        puVar3 = &DAT_0038574e;
        break;
      case 0x2008:
        puVar3 = &DAT_00385765;
        goto LAB_00a75538;
      case 0x2009:
        puVar3 = &DAT_00385776;
        goto LAB_00a754a0;
      case 0x200a:
        puVar3 = &DAT_0038578e;
        break;
      case 0x200b:
        puVar3 = &DAT_003857a5;
        goto LAB_00a75508;
      case 0x200c:
        puVar3 = &DAT_003857bb;
        goto LAB_00a75508;
      case 0x200d:
        puVar3 = &DAT_003857d1;
        goto LAB_00a75508;
      case 0x200e:
        puVar3 = &DAT_003857e7;
        break;
      case 0x200f:
        puVar3 = &DAT_003857fe;
        goto LAB_00a754b0;
      case 0x2010:
        puVar3 = &DAT_0038581d;
        goto LAB_00a75444;
      case 0x2011:
        puVar3 = &DAT_0038583e;
        break;
      case 0x2012:
      case 0x2013:
      case 0x2014:
      case 0x2015:
      case 0x2016:
      case 0x2017:
      case 0x2018:
      case 0x2019:
      case 0x201a:
      case 0x201b:
      case 0x201c:
      case 0x201d:
      case 0x201e:
      case 0x201f:
      case 0x2020:
      case 0x2021:
      case 0x2022:
      case 0x2023:
      case 0x2024:
      case 0x2025:
        goto switchD_00a74614_caseD_220a;
      case 0x2026:
        puVar3 = &DAT_00385855;
        goto LAB_00a754a0;
      default:
switchD_00a74700_default:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_2;
        return auVar2 << 0x40;
      }
LAB_00a75528:
      auVar32._8_8_ = 0x17;
      auVar32._0_8_ = puVar3;
      return auVar32;
    }
LAB_00a75434:
    auVar22._8_8_ = 0x10;
    auVar22._0_8_ = pcVar4;
    return auVar22;
  }
LAB_00a753e8:
  auVar18._8_8_ = 0xf;
  auVar18._0_8_ = puVar3;
  return auVar18;
}


// ===== 00a75544  <gimli::constants::[1n]::gimli::constants::DwForm>::static_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::[1n]::gimli::constants::DwForm>::static_string */

undefined1  [16] __rustcall
<gimli::constants::[1n]::gimli::constants::DwForm>::static_string
          (ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar1 = *param_1;
  puVar2 = (undefined *)0x0;
  if (0x1f00 < uVar1) {
    if (uVar1 < 0x1f20) {
      if (uVar1 == 0x1f01) {
        puVar2 = &DAT_0038650a;
        goto LAB_00a756b8;
      }
      if (uVar1 == 0x1f02) {
        auVar4._8_8_ = 0x15;
        auVar4._0_8_ = &DAT_00386520;
        return auVar4;
      }
    }
    else {
      if (uVar1 == 0x1f20) {
        auVar8._8_8_ = 0x13;
        auVar8._0_8_ = &DAT_00386535;
        return auVar8;
      }
      if (uVar1 == 0x1f21) {
        puVar2 = &DAT_00386548;
        goto LAB_00a75698;
      }
    }
    goto switchD_00a75574_default;
  }
  switch(uVar1) {
  case 0:
    puVar2 = &DAT_0038630c;
    goto LAB_00a75828;
  case 1:
    puVar2 = &DAT_00386323;
    goto LAB_00a75828;
  case 2:
    auVar9._8_8_ = 0xb;
    auVar9._0_8_ = &DAT_00386318;
    return auVar9;
  case 3:
    puVar2 = &DAT_0038632f;
    goto LAB_00a757dc;
  case 4:
    puVar2 = &DAT_0038633d;
    goto LAB_00a757dc;
  case 5:
    puVar2 = &DAT_0038634b;
    break;
  case 6:
    puVar2 = &DAT_00386358;
    break;
  case 7:
    puVar2 = &DAT_00386365;
    break;
  case 8:
    puVar2 = &DAT_00386372;
    goto LAB_00a757dc;
  case 9:
    puVar2 = &DAT_00386380;
    break;
  case 10:
    puVar2 = &DAT_0038638d;
    goto LAB_00a757dc;
  case 0xb:
    puVar2 = &DAT_0038639b;
    break;
  case 0xc:
    puVar2 = &DAT_003863a8;
    goto LAB_00a75828;
  case 0xd:
    puVar2 = &DAT_003863b4;
    break;
  case 0xe:
    puVar2 = &DAT_003863c1;
    goto LAB_00a75828;
  case 0xf:
    puVar2 = &DAT_003863cd;
    break;
  case 0x10:
    pcVar3 = &DAT_0029f3e0;
    goto LAB_00a75808;
  case 0x11:
    puVar2 = &DAT_003863da;
    goto LAB_00a75828;
  case 0x12:
    puVar2 = &DAT_003863e6;
    goto LAB_00a75828;
  case 0x13:
    puVar2 = &DAT_003863f2;
    goto LAB_00a75828;
  case 0x14:
    puVar2 = &DAT_003863fe;
    goto LAB_00a75828;
  case 0x15:
    puVar2 = &DAT_0038640a;
    goto LAB_00a75754;
  case 0x16:
    pcVar3 = &DAT_0029fe60;
    goto LAB_00a75808;
  case 0x17:
    auVar12._8_8_ = 0x12;
    auVar12._0_8_ = &DAT_0038641b;
    return auVar12;
  case 0x18:
    auVar6._8_8_ = 0xf;
    auVar6._0_8_ = &DAT_0038642d;
    return auVar6;
  case 0x19:
    puVar2 = &DAT_0038643c;
LAB_00a75698:
    auVar5._8_8_ = 0x14;
    auVar5._0_8_ = puVar2;
    return auVar5;
  case 0x1a:
    puVar2 = &DAT_00386450;
LAB_00a75828:
    param_2 = 0xc;
switchD_00a75574_default:
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = puVar2;
    return auVar15;
  case 0x1b:
    puVar2 = &DAT_0038645c;
    break;
  case 0x1c:
    pcVar3 = "DW_FORM_ref_sup4";
    goto LAB_00a75808;
  case 0x1d:
    pcVar3 = &DAT_0029f130;
    goto LAB_00a75808;
  case 0x1e:
    puVar2 = &DAT_00386469;
    goto LAB_00a757dc;
  case 0x1f:
    puVar2 = &DAT_00386477;
LAB_00a75754:
    auVar10._8_8_ = 0x11;
    auVar10._0_8_ = puVar2;
    return auVar10;
  case 0x20:
    pcVar3 = "DW_FORM_ref_sig8{invalid syntax}host unreachable\a";
    goto LAB_00a75808;
  case 0x21:
    puVar2 = &DAT_00386488;
LAB_00a756b8:
    auVar7._8_8_ = 0x16;
    auVar7._0_8_ = puVar2;
    return auVar7;
  case 0x22:
    pcVar3 = "DW_FORM_loclistxDW_OP_GNU_uninitDW_SECT_RNGLISTS\x0f";
    goto LAB_00a75808;
  case 0x23:
    pcVar3 = "DW_FORM_rnglistx";
    goto LAB_00a75808;
  case 0x24:
    pcVar3 = &DAT_0029f2a0;
LAB_00a75808:
    auVar13._8_8_ = 0x10;
    auVar13._0_8_ = pcVar3;
    return auVar13;
  case 0x25:
    puVar2 = &DAT_0038649e;
    break;
  case 0x26:
    puVar2 = &DAT_003864ab;
    break;
  case 0x27:
    puVar2 = &DAT_003864b8;
    break;
  case 0x28:
    puVar2 = &DAT_003864c5;
    break;
  case 0x29:
    puVar2 = &DAT_003864d2;
    goto LAB_00a757dc;
  case 0x2a:
    puVar2 = &DAT_003864e0;
    goto LAB_00a757dc;
  case 0x2b:
    puVar2 = &DAT_003864ee;
    goto LAB_00a757dc;
  case 0x2c:
    puVar2 = &DAT_003864fc;
LAB_00a757dc:
    auVar11._8_8_ = 0xe;
    auVar11._0_8_ = puVar2;
    return auVar11;
  default:
    goto switchD_00a75574_default;
  }
  auVar14._8_8_ = 0xd;
  auVar14._0_8_ = puVar2;
  return auVar14;
}


// ===== 00a75830  <gimli::constants::[2V]::gimli::constants::DwLang>::static_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::[2V]::gimli::constants::DwLang>::static_string */

undefined1  [16] __rustcall
<gimli::constants::[2V]::gimli::constants::DwLang>::static_string(ushort *param_1,ulong param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  
  uVar1 = *param_1;
  puVar3 = (undefined *)0x0;
  if (0x7fff < uVar1) {
    if (uVar1 < 0x9001) {
      if (uVar1 == 0x8000) {
        puVar3 = &DAT_0038693a;
        goto LAB_00a75b6c;
      }
      if (uVar1 == 0x8001) {
        puVar3 = &DAT_00386958;
        goto LAB_00a75b5c;
      }
      if (uVar1 == 0x8e57) {
        auVar5._8_8_ = 0x1b;
        auVar5._0_8_ = &DAT_0038696e;
        return auVar5;
      }
    }
    else if (uVar1 < 0xb000) {
      if (uVar1 == 0x9001) {
        auVar16._8_8_ = 0x15;
        auVar16._0_8_ = &DAT_00386989;
        return auVar16;
      }
      if (uVar1 == 0x9101) {
        auVar4._8_8_ = 0x18;
        auVar4._0_8_ = &DAT_0038699e;
        return auVar4;
      }
    }
    else {
      if (uVar1 == 0xb000) {
        puVar3 = &DAT_003869b6;
        goto LAB_00a75b5c;
      }
      if (uVar1 == 0xffff) {
        puVar3 = &DAT_00386949;
        goto LAB_00a75b6c;
      }
    }
    goto switchD_00a75860_caseD_29;
  }
  switch(uVar1) {
  case 1:
    puVar3 = &DAT_0038669f;
    goto LAB_00a75ab8;
  case 2:
    puVar3 = &DAT_003866aa;
    goto LAB_00a75a30;
  case 3:
    puVar3 = &DAT_003866b3;
    goto LAB_00a75aec;
  case 4:
    auVar8._8_8_ = 0x13;
    auVar8._0_8_ = &DAT_003866c0;
    return auVar8;
  case 5:
    puVar3 = &DAT_003866d3;
    break;
  case 6:
    puVar3 = &DAT_003866e2;
    break;
  case 7:
    puVar3 = &DAT_003866f1;
    goto LAB_00a75b24;
  case 8:
    puVar3 = &DAT_00386702;
    goto LAB_00a75b24;
  case 9:
    auVar7._8_8_ = 0x10;
    auVar7._0_8_ = "DW_LANG_Pascal83";
    return auVar7;
  case 10:
    puVar3 = &DAT_00386713;
    break;
  case 0xb:
    puVar3 = &DAT_00386722;
    goto LAB_00a75a14;
  case 0xc:
    puVar3 = &DAT_0038672e;
    goto LAB_00a75ab8;
  case 0xd:
    puVar3 = &DAT_00386739;
    goto LAB_00a75aec;
  case 0xe:
    puVar3 = &DAT_00386746;
    goto LAB_00a75b24;
  case 0xf:
    puVar3 = &DAT_00386757;
    goto LAB_00a75ab8;
  case 0x10:
    puVar3 = &DAT_00386762;
    goto LAB_00a75a14;
  case 0x11:
    puVar3 = &DAT_0038676e;
    goto LAB_00a75b5c;
  case 0x12:
    puVar3 = &DAT_00386784;
    goto LAB_00a75ab8;
  case 0x13:
    puVar3 = &DAT_0038678f;
LAB_00a75a30:
    auVar11._8_8_ = 9;
    auVar11._0_8_ = puVar3;
    return auVar11;
  case 0x14:
    puVar3 = &DAT_00386798;
    goto LAB_00a75afc;
  case 0x15:
    puVar3 = &DAT_003867a6;
    goto LAB_00a75afc;
  case 0x16:
    auVar9._8_8_ = 10;
    auVar9._0_8_ = &DAT_003867b4;
    return auVar9;
  case 0x17:
    puVar3 = &DAT_003867be;
    break;
  case 0x18:
    puVar3 = &DAT_003867cd;
    break;
  case 0x19:
    puVar3 = &DAT_003867dc;
    goto LAB_00a75b5c;
  case 0x1a:
    puVar3 = &DAT_003867f2;
    goto LAB_00a75b5c;
  case 0x1b:
    puVar3 = &DAT_00386808;
    goto LAB_00a75aec;
  case 0x1c:
    puVar3 = &DAT_00386815;
LAB_00a75a14:
    auVar10._8_8_ = 0xc;
    auVar10._0_8_ = puVar3;
    return auVar10;
  case 0x1d:
    puVar3 = &DAT_00386821;
    goto LAB_00a75ab8;
  case 0x1e:
    puVar3 = &DAT_0038682c;
    goto LAB_00a75aec;
  case 0x1f:
    puVar3 = &DAT_00386839;
    goto LAB_00a75aec;
  case 0x20:
    puVar3 = &DAT_00386846;
    goto LAB_00a75aec;
  case 0x21:
    puVar3 = &DAT_00386853;
    goto LAB_00a75b5c;
  case 0x22:
    puVar3 = &DAT_00386869;
    goto LAB_00a75b24;
  case 0x23:
    puVar3 = &DAT_0038687a;
    goto LAB_00a75b24;
  case 0x24:
    auVar6._8_8_ = 0x14;
    auVar6._0_8_ = &DAT_0038688b;
    return auVar6;
  case 0x25:
    puVar3 = &DAT_0038689f;
LAB_00a75aec:
    auVar13._8_8_ = 0xd;
    auVar13._0_8_ = puVar3;
    return auVar13;
  case 0x26:
    puVar3 = &DAT_003868ac;
LAB_00a75afc:
    auVar14._8_8_ = 0xe;
    auVar14._0_8_ = puVar3;
    return auVar14;
  case 0x27:
    puVar3 = &DAT_003868ba;
    goto LAB_00a75ab8;
  case 0x28:
    puVar3 = &DAT_003868c5;
    break;
  case 0x29:
    goto switchD_00a75860_caseD_29;
  case 0x2a:
    puVar3 = &DAT_003868d4;
    goto LAB_00a75b5c;
  case 0x2b:
    puVar3 = &DAT_003868ea;
LAB_00a75b5c:
    auVar17._8_8_ = 0x16;
    auVar17._0_8_ = puVar3;
    return auVar17;
  case 0x2c:
    puVar3 = &DAT_00386900;
LAB_00a75ab8:
    param_2 = 0xb;
switchD_00a75860_caseD_29:
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = puVar3;
    return auVar12;
  case 0x2d:
    puVar3 = &DAT_0038690b;
LAB_00a75b24:
    auVar15._8_8_ = 0x11;
    auVar15._0_8_ = puVar3;
    return auVar15;
  case 0x2e:
    puVar3 = &DAT_0038691c;
    break;
  case 0x2f:
    puVar3 = &DAT_0038692b;
    break;
  default:
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_2;
    return auVar2 << 0x40;
  }
LAB_00a75b6c:
  auVar18._8_8_ = 0xf;
  auVar18._0_8_ = puVar3;
  return auVar18;
}


// ===== 00a75b78  <gimli::arch::[3]::gimli::arch::Arm>::register_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[3]::gimli::arch::Arm>::register_name */

undefined1  [16] __rustcall
<gimli::arch::[3]::gimli::arch::Arm>::register_name(undefined2 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar1 = (undefined *)0x0;
  switch(param_1) {
  case 0x68:
    puVar1 = &DAT_003869f2;
    goto LAB_00a75e7c;
  case 0x69:
    puVar1 = &DAT_003869f7;
    goto LAB_00a75e7c;
  case 0x6a:
    puVar1 = &DAT_003869fc;
    goto LAB_00a75e7c;
  case 0x6b:
    puVar1 = &DAT_00386a01;
    goto LAB_00a75e7c;
  case 0x6c:
    puVar1 = &DAT_00386a06;
    goto LAB_00a75e7c;
  case 0x6d:
    puVar1 = &DAT_00386a0b;
    goto LAB_00a75e7c;
  case 0x6e:
    puVar1 = &DAT_00386a10;
    goto LAB_00a75e7c;
  case 0x6f:
    puVar1 = &DAT_00386a15;
LAB_00a75e7c:
    auVar4._8_8_ = 5;
    auVar4._0_8_ = puVar1;
    return auVar4;
  case 0x70:
    puVar1 = &DAT_00386a1a;
    break;
  case 0x71:
    puVar1 = &DAT_00386a1d;
    break;
  case 0x72:
    puVar1 = &DAT_00386a20;
    break;
  case 0x73:
    puVar1 = &DAT_00386a23;
    break;
  case 0x74:
    puVar1 = &DAT_00386a26;
    break;
  case 0x75:
    puVar1 = &DAT_00386a29;
    break;
  case 0x76:
    puVar1 = &DAT_00386a2c;
    break;
  case 0x77:
    puVar1 = &DAT_00386a2f;
    break;
  case 0x78:
    puVar1 = &DAT_00386a32;
    break;
  case 0x79:
    puVar1 = &DAT_00386a35;
    break;
  case 0x7a:
    pcVar2 = "wR10tmm1tmm2vr16vr27shimTextUservr26namehostEnum\x02\x04\b\x06tmm4typeRing\b";
    goto LAB_00a75fac;
  case 0x7b:
    pcVar2 = "wR11";
    goto LAB_00a75fac;
  case 0x7c:
    pcVar2 = "wR12";
    goto LAB_00a75fac;
  case 0x7d:
    pcVar2 = "wR13vr12vr13vr31etagpathZlibINFOvscr\x04";
    goto LAB_00a75fac;
  case 0x7e:
    pcVar2 = "wR14X509\x02";
    goto LAB_00a75fac;
  case 0x7f:
    pcVar2 = "wR15";
    goto LAB_00a75fac;
  case 0x80:
    pcVar2 = "SPSRvr25BLOBFilewR14X509\x02";
LAB_00a75fac:
    auVar5._8_8_ = 4;
    auVar5._0_8_ = pcVar2;
    return auVar5;
  case 0x81:
    puVar1 = &DAT_002a1498;
    goto LAB_00a75fe0;
  case 0x82:
    puVar1 = &DAT_002a1528;
    goto LAB_00a75fe0;
  case 0x83:
    puVar1 = &DAT_002a1740;
    goto LAB_00a75fe0;
  case 0x84:
    puVar1 = &DAT_002a1160;
    goto LAB_00a75fe0;
  case 0x85:
    puVar1 = &DAT_002a1370;
    goto LAB_00a75fe0;
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfc:
  case 0xfd:
  case 0xfe:
  case 0xff:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
    goto switchD_00a75ba0_caseD_86;
  case 0x8f:
    auVar3._8_8_ = 0xc;
    auVar3._0_8_ = &DAT_00386a38;
    return auVar3;
  case 0x90:
    puVar1 = &DAT_00386a44;
    goto LAB_00a76060;
  case 0x91:
    puVar1 = &DAT_00386a4a;
    goto LAB_00a76060;
  case 0x92:
    puVar1 = &DAT_00386a50;
    goto LAB_00a76020;
  case 0x93:
    puVar1 = &DAT_00386a57;
    goto LAB_00a76020;
  case 0x94:
    puVar1 = &DAT_00386a5e;
    goto LAB_00a76020;
  case 0x95:
    puVar1 = &DAT_00386a65;
    goto LAB_00a76020;
  case 0x96:
    puVar1 = &DAT_00386a6c;
    goto LAB_00a76020;
  case 0x97:
    puVar1 = &DAT_00386a73;
    goto LAB_00a76060;
  case 0x98:
    puVar1 = &DAT_00386a79;
    goto LAB_00a76060;
  case 0x99:
    puVar1 = &DAT_00386a7f;
    goto LAB_00a76020;
  case 0x9a:
    puVar1 = &DAT_00386a86;
    goto LAB_00a76020;
  case 0x9b:
    puVar1 = &DAT_00386a8d;
    goto LAB_00a76020;
  case 0x9c:
    puVar1 = &DAT_00386a94;
    goto LAB_00a76020;
  case 0x9d:
    puVar1 = &DAT_00386a9b;
    goto LAB_00a76020;
  case 0x9e:
    puVar1 = &DAT_00386aa2;
    goto LAB_00a76020;
  case 0x9f:
    puVar1 = &DAT_00386aa9;
    goto LAB_00a76020;
  case 0xa0:
    puVar1 = &DAT_00386ab0;
    goto LAB_00a76020;
  case 0xa1:
    puVar1 = &DAT_00386ab7;
    goto LAB_00a76020;
  case 0xa2:
    puVar1 = &DAT_00386abe;
    goto LAB_00a76020;
  case 0xa3:
    puVar1 = &DAT_00386ac5;
    goto LAB_00a76020;
  case 0xa4:
    puVar1 = &DAT_00386acc;
    goto LAB_00a76020;
  case 0xa5:
    puVar1 = &DAT_00386ad3;
    goto LAB_00a76020;
  case 0xc0:
    puVar1 = &DAT_00386ada;
    break;
  case 0xc1:
    puVar1 = &DAT_00386add;
    break;
  case 0xc2:
    puVar1 = &DAT_00386ae0;
    break;
  case 0xc3:
    puVar1 = &DAT_00386ae3;
    break;
  case 0xc4:
    puVar1 = &DAT_00386ae6;
    break;
  case 0xc5:
    puVar1 = &DAT_00386ae9;
    break;
  case 0xc6:
    puVar1 = &DAT_00386aec;
    break;
  case 199:
    puVar1 = &DAT_00386aef;
    break;
  case 0x100:
    puVar1 = &DAT_00386af2;
    goto LAB_00a76128;
  case 0x101:
    puVar1 = &DAT_00386af4;
    goto LAB_00a76128;
  case 0x102:
    puVar1 = &DAT_00386af6;
    goto LAB_00a76128;
  case 0x103:
    puVar1 = &DAT_00386af8;
    goto LAB_00a76128;
  case 0x104:
    puVar1 = &DAT_00386afa;
    goto LAB_00a76128;
  case 0x105:
    puVar1 = &DAT_00386afc;
    goto LAB_00a76128;
  case 0x106:
    puVar1 = &DAT_00386afe;
    goto LAB_00a76128;
  case 0x107:
    puVar1 = &DAT_00386b00;
    goto LAB_00a76128;
  case 0x108:
    puVar1 = &DAT_00386b02;
    goto LAB_00a76128;
  case 0x109:
    puVar1 = &DAT_00386b04;
    goto LAB_00a76128;
  case 0x10a:
    puVar1 = &DAT_00386b06;
    break;
  case 0x10b:
    puVar1 = &DAT_00386b09;
    break;
  case 0x10c:
    puVar1 = &DAT_00386b0c;
    break;
  case 0x10d:
    puVar1 = &DAT_00386b0f;
    break;
  case 0x10e:
    puVar1 = &DAT_00386b12;
    break;
  case 0x10f:
    puVar1 = &DAT_00386b15;
    break;
  case 0x110:
    puVar1 = &DAT_00386b18;
    break;
  case 0x111:
    puVar1 = &DAT_00386b1b;
    break;
  case 0x112:
    puVar1 = &DAT_00386b1e;
    break;
  case 0x113:
    puVar1 = &DAT_00386b21;
    break;
  case 0x114:
    puVar1 = &DAT_00386b24;
    break;
  case 0x115:
    puVar1 = &DAT_00386b27;
    break;
  case 0x116:
    puVar1 = &DAT_00386b2a;
    break;
  case 0x117:
    puVar1 = &DAT_00386b2d;
    break;
  case 0x118:
    puVar1 = &DAT_00386b30;
    break;
  case 0x119:
    puVar1 = &DAT_00386b33;
    break;
  case 0x11a:
    puVar1 = &DAT_00386b36;
    break;
  case 0x11b:
    puVar1 = &DAT_00386b39;
    break;
  case 0x11c:
    puVar1 = &DAT_00386b3c;
    break;
  case 0x11d:
    puVar1 = &DAT_00386b3f;
    break;
  case 0x11e:
    puVar1 = &DAT_00386b42;
    break;
  case 0x11f:
    puVar1 = &DAT_00386b45;
    break;
  case 0x140:
    puVar1 = &DAT_002a1440;
    goto LAB_00a75fe0;
  case 0x141:
    puVar1 = &DAT_002a18e0;
LAB_00a75fe0:
    auVar6._8_8_ = 8;
    auVar6._0_8_ = puVar1;
    return auVar6;
  case 0x142:
    puVar1 = &DAT_00386b48;
LAB_00a76060:
    auVar8._8_8_ = 6;
    auVar8._0_8_ = puVar1;
    return auVar8;
  case 0x143:
    puVar1 = &DAT_00386b4e;
LAB_00a76020:
    param_2 = 7;
switchD_00a75ba0_caseD_86:
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = puVar1;
    return auVar7;
  default:
    switch(param_1) {
    case 0:
      puVar1 = &DAT_003869cc;
      break;
    case 1:
      puVar1 = &DAT_003869ce;
      break;
    case 2:
      puVar1 = &DAT_003869d0;
      break;
    case 3:
      puVar1 = &DAT_003869d2;
      break;
    case 4:
      puVar1 = &DAT_003869d4;
      break;
    case 5:
      puVar1 = &DAT_003869d6;
      break;
    case 6:
      puVar1 = &DAT_003869d8;
      break;
    case 7:
      puVar1 = &DAT_003869da;
      break;
    case 8:
      puVar1 = &DAT_003869dc;
      break;
    case 9:
      puVar1 = &DAT_003869de;
      break;
    case 10:
      puVar1 = &DAT_003869e0;
      goto LAB_00a76118;
    case 0xb:
      puVar1 = &DAT_003869e3;
      goto LAB_00a76118;
    case 0xc:
      puVar1 = &DAT_003869e6;
      goto LAB_00a76118;
    case 0xd:
      puVar1 = &DAT_003869e9;
      goto LAB_00a76118;
    case 0xe:
      puVar1 = &DAT_003869ec;
      goto LAB_00a76118;
    case 0xf:
      puVar1 = &DAT_003869ef;
      goto LAB_00a76118;
    default:
      goto switchD_00a75ba0_caseD_86;
    }
LAB_00a76128:
    auVar10._8_8_ = 2;
    auVar10._0_8_ = puVar1;
    return auVar10;
  }
LAB_00a76118:
  auVar9._8_8_ = 3;
  auVar9._0_8_ = puVar1;
  return auVar9;
}


// ===== 00a76130  <gimli::arch::[3]::gimli::arch::Arm>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[3]::gimli::arch::Arm>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[3]::gimli::arch::Arm>::name_to_register(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  
  if ((long)param_2 < 6) {
    if ((long)param_2 < 4) {
      if (param_2 == 2) {
        if ((short)*param_1 == 0x3052) {
          uVar2 = 0;
        }
        else {
          if ((short)*param_1 != 0x3152) {
            if ((short)*param_1 == 0x3252) {
              auVar24._8_8_ = 2;
              auVar24._0_8_ = 1;
              return auVar24;
            }
            if ((short)*param_1 == 0x3352) {
              auVar32._8_8_ = 3;
              auVar32._0_8_ = 1;
              return auVar32;
            }
            if ((short)*param_1 == 0x3452) {
              auVar39._8_8_ = 4;
              auVar39._0_8_ = 1;
              return auVar39;
            }
            if ((short)*param_1 == 0x3552) {
              auVar45._8_8_ = 5;
              auVar45._0_8_ = 1;
              return auVar45;
            }
            if ((short)*param_1 == 0x3652) {
              auVar50._8_8_ = 6;
              auVar50._0_8_ = 1;
              return auVar50;
            }
            if ((short)*param_1 == 0x3752) {
              auVar54._8_8_ = 7;
              auVar54._0_8_ = 1;
              return auVar54;
            }
            if ((short)*param_1 == 0x3852) {
              auVar57._8_8_ = 8;
              auVar57._0_8_ = 1;
              return auVar57;
            }
            if ((short)*param_1 == 0x3952) {
              auVar60._8_8_ = 9;
              auVar60._0_8_ = 1;
              return auVar60;
            }
            if ((short)*param_1 != 0x3044) {
              if ((short)*param_1 == 0x3144) {
LAB_00a772e8:
                auVar66._8_8_ = 0x101;
                auVar66._0_8_ = 1;
                return auVar66;
              }
              if ((short)*param_1 == 0x3244) {
LAB_00a7730c:
                auVar69._8_8_ = 0x102;
                auVar69._0_8_ = 1;
                return auVar69;
              }
              if ((short)*param_1 == 0x3344) {
LAB_00a77330:
                auVar72._8_8_ = 0x103;
                auVar72._0_8_ = 1;
                return auVar72;
              }
              if ((short)*param_1 != 0x3444) {
                if ((short)*param_1 == 0x3544) {
LAB_00a7736c:
                  auVar77._8_8_ = 0x105;
                  auVar77._0_8_ = 1;
                  return auVar77;
                }
                if ((short)*param_1 == 0x3644) {
LAB_00a77390:
                  auVar80._8_8_ = 0x106;
                  auVar80._0_8_ = 1;
                  return auVar80;
                }
                if ((short)*param_1 == 0x3744) {
LAB_00a773b4:
                  auVar83._8_8_ = 0x107;
                  auVar83._0_8_ = 1;
                  return auVar83;
                }
                if ((short)*param_1 == 0x3844) {
LAB_00a773d8:
                  auVar86._8_8_ = 0x108;
                  auVar86._0_8_ = 1;
                  return auVar86;
                }
                if ((short)*param_1 == 0x3944) {
LAB_00a773f0:
                  auVar88._8_8_ = 0x109;
                  auVar88._0_8_ = 1;
                  return auVar88;
                }
                if ((short)*param_1 == 0x5053) goto LAB_00a77144;
                if ((short)*param_1 == 0x524c) goto LAB_00a77198;
                if ((short)*param_1 == 0x4350) goto LAB_00a771e0;
                if (((short)*param_1 == 0x3053) || ((short)*param_1 == 0x3153)) goto LAB_00a772c4;
                if (((short)*param_1 == 0x3253) || ((short)*param_1 == 0x3353)) goto LAB_00a772e8;
                if (((short)*param_1 == 0x3453) || ((short)*param_1 == 0x3553)) goto LAB_00a7730c;
                if (((short)*param_1 == 0x3653) || ((short)*param_1 == 0x3753)) goto LAB_00a77330;
                if (((short)*param_1 != 0x3853) && ((short)*param_1 != 0x3953)) goto LAB_00a76b70;
              }
              auVar6._8_8_ = 0x104;
              auVar6._0_8_ = 1;
              return auVar6;
            }
LAB_00a772c4:
            auVar63._8_8_ = 0x100;
            auVar63._0_8_ = 1;
            return auVar63;
          }
          uVar2 = 1;
        }
        auVar17._8_8_ = uVar2;
        auVar17._0_8_ = 1;
        return auVar17;
      }
      if (param_2 == 3) {
        if ((short)*param_1 == 0x3152 && *(char *)((long)param_1 + 2) == '0') {
          auVar13._8_8_ = 10;
          auVar13._0_8_ = 1;
          return auVar13;
        }
        if ((short)*param_1 == 0x3152 && *(char *)((long)param_1 + 2) == '1') {
          auVar21._8_8_ = 0xb;
          auVar21._0_8_ = 1;
          return auVar21;
        }
        if ((short)*param_1 == 0x3152 && *(char *)((long)param_1 + 2) == '2') {
          auVar28._8_8_ = 0xc;
          auVar28._0_8_ = 1;
          return auVar28;
        }
        if ((short)*param_1 == 0x3152 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a77144:
          auVar31._8_8_ = 0xd;
          auVar31._0_8_ = 1;
          return auVar31;
        }
        if ((short)*param_1 == 0x3152 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a77198:
          auVar38._8_8_ = 0xe;
          auVar38._0_8_ = 1;
          return auVar38;
        }
        if ((short)*param_1 == 0x3152 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a771e0:
          auVar44._8_8_ = 0xf;
          auVar44._0_8_ = 1;
          return auVar44;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '0') {
          auVar52._8_8_ = 0x70;
          auVar52._0_8_ = 1;
          return auVar52;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '1') {
          auVar55._8_8_ = 0x71;
          auVar55._0_8_ = 1;
          return auVar55;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '2') {
          auVar58._8_8_ = 0x72;
          auVar58._0_8_ = 1;
          return auVar58;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '3') {
          auVar61._8_8_ = 0x73;
          auVar61._0_8_ = 1;
          return auVar61;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '4') {
          auVar64._8_8_ = 0x74;
          auVar64._0_8_ = 1;
          return auVar64;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '5') {
          auVar67._8_8_ = 0x75;
          auVar67._0_8_ = 1;
          return auVar67;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '6') {
          auVar70._8_8_ = 0x76;
          auVar70._0_8_ = 1;
          return auVar70;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '7') {
          auVar73._8_8_ = 0x77;
          auVar73._0_8_ = 1;
          return auVar73;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '8') {
          auVar75._8_8_ = 0x78;
          auVar75._0_8_ = 1;
          return auVar75;
        }
        if ((short)*param_1 == 0x5277 && *(char *)((long)param_1 + 2) == '9') {
          auVar78._8_8_ = 0x79;
          auVar78._0_8_ = 1;
          return auVar78;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '0') {
          auVar81._8_8_ = 0xc0;
          auVar81._0_8_ = 1;
          return auVar81;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '1') {
          auVar84._8_8_ = 0xc1;
          auVar84._0_8_ = 1;
          return auVar84;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '2') {
          auVar87._8_8_ = 0xc2;
          auVar87._0_8_ = 1;
          return auVar87;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '3') {
          auVar89._8_8_ = 0xc3;
          auVar89._0_8_ = 1;
          return auVar89;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '4') {
          auVar90._8_8_ = 0xc4;
          auVar90._0_8_ = 1;
          return auVar90;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '5') {
          auVar91._8_8_ = 0xc5;
          auVar91._0_8_ = 1;
          return auVar91;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '6') {
          auVar92._8_8_ = 0xc6;
          auVar92._0_8_ = 1;
          return auVar92;
        }
        if ((short)*param_1 == 0x4377 && *(char *)((long)param_1 + 2) == '7') {
          auVar93._8_8_ = 199;
          auVar93._0_8_ = 1;
          return auVar93;
        }
        if ((short)*param_1 != 0x3144 || *(char *)((long)param_1 + 2) != '0') {
          if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a77444:
            auVar95._8_8_ = 0x10b;
            auVar95._0_8_ = 1;
            return auVar95;
          }
          if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a77450:
            auVar96._8_8_ = 0x10c;
            auVar96._0_8_ = 1;
            return auVar96;
          }
          if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7745c:
            auVar97._8_8_ = 0x10d;
            auVar97._0_8_ = 1;
            return auVar97;
          }
          if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a77468:
            auVar98._8_8_ = 0x10e;
            auVar98._0_8_ = 1;
            return auVar98;
          }
          if ((short)*param_1 != 0x3144 || *(char *)((long)param_1 + 2) != '5') {
            if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '6') {
              auVar99._8_8_ = 0x110;
              auVar99._0_8_ = 1;
              return auVar99;
            }
            if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '7') {
              auVar100._8_8_ = 0x111;
              auVar100._0_8_ = 1;
              return auVar100;
            }
            if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '8') {
              auVar101._8_8_ = 0x112;
              auVar101._0_8_ = 1;
              return auVar101;
            }
            if ((short)*param_1 == 0x3144 && *(char *)((long)param_1 + 2) == '9') {
              auVar102._8_8_ = 0x113;
              auVar102._0_8_ = 1;
              return auVar102;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '0') {
              auVar103._8_8_ = 0x114;
              auVar103._0_8_ = 1;
              return auVar103;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '1') {
              auVar104._8_8_ = 0x115;
              auVar104._0_8_ = 1;
              return auVar104;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '2') {
              auVar105._8_8_ = 0x116;
              auVar105._0_8_ = 1;
              return auVar105;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '3') {
              auVar106._8_8_ = 0x117;
              auVar106._0_8_ = 1;
              return auVar106;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '4') {
              auVar107._8_8_ = 0x118;
              auVar107._0_8_ = 1;
              return auVar107;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '5') {
              auVar108._8_8_ = 0x119;
              auVar108._0_8_ = 1;
              return auVar108;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '6') {
              auVar109._8_8_ = 0x11a;
              auVar109._0_8_ = 1;
              return auVar109;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '7') {
              auVar110._8_8_ = 0x11b;
              auVar110._0_8_ = 1;
              return auVar110;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '8') {
              auVar111._8_8_ = 0x11c;
              auVar111._0_8_ = 1;
              return auVar111;
            }
            if ((short)*param_1 == 0x3244 && *(char *)((long)param_1 + 2) == '9') {
              auVar112._8_8_ = 0x11d;
              auVar112._0_8_ = 1;
              return auVar112;
            }
            if ((short)*param_1 == 0x3344 && *(char *)((long)param_1 + 2) == '0') {
              auVar113._8_8_ = 0x11e;
              auVar113._0_8_ = 1;
              return auVar113;
            }
            if ((short)*param_1 == 0x3344 && *(char *)((long)param_1 + 2) == '1') {
              auVar114._8_8_ = 0x11f;
              auVar114._0_8_ = 1;
              return auVar114;
            }
            if (((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '0') ||
               ((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '1'))
            goto LAB_00a7736c;
            if (((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '2') ||
               ((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '3'))
            goto LAB_00a77390;
            if (((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '4') ||
               ((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '5'))
            goto LAB_00a773b4;
            if (((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '6') ||
               ((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '7'))
            goto LAB_00a773d8;
            if (((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '8') ||
               ((short)*param_1 == 0x3153 && *(char *)((long)param_1 + 2) == '9'))
            goto LAB_00a773f0;
            if (((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '0') ||
               ((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '1'))
            goto LAB_00a77438;
            if (((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '2') ||
               ((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '3'))
            goto LAB_00a77444;
            if (((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '4') ||
               ((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '5'))
            goto LAB_00a77450;
            if (((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '6') ||
               ((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '7'))
            goto LAB_00a7745c;
            if (((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '8') ||
               ((short)*param_1 == 0x3253 && *(char *)((long)param_1 + 2) == '9'))
            goto LAB_00a77468;
            if (((short)*param_1 != 0x3353 || *(char *)((long)param_1 + 2) != '0') &&
               ((short)*param_1 != 0x3353 || *(char *)((long)param_1 + 2) != '1'))
            goto LAB_00a76b70;
          }
          auVar3._8_8_ = 0x10f;
          auVar3._0_8_ = 1;
          return auVar3;
        }
LAB_00a77438:
        auVar94._8_8_ = 0x10a;
        auVar94._0_8_ = 1;
        return auVar94;
      }
    }
    else if (param_2 == 4) {
      if ((int)*param_1 == 0x30315277) {
        auVar11._8_8_ = 0x7a;
        auVar11._0_8_ = 1;
        return auVar11;
      }
      if ((int)*param_1 == 0x31315277) {
        auVar19._8_8_ = 0x7b;
        auVar19._0_8_ = 1;
        return auVar19;
      }
      if ((int)*param_1 == 0x32315277) {
        auVar26._8_8_ = 0x7c;
        auVar26._0_8_ = 1;
        return auVar26;
      }
      if ((int)*param_1 == 0x33315277) {
        auVar34._8_8_ = 0x7d;
        auVar34._0_8_ = 1;
        return auVar34;
      }
      if ((int)*param_1 == 0x34315277) {
        auVar40._8_8_ = 0x7e;
        auVar40._0_8_ = 1;
        return auVar40;
      }
      if ((int)*param_1 == 0x35315277) {
        auVar46._8_8_ = 0x7f;
        auVar46._0_8_ = 1;
        return auVar46;
      }
      if ((int)*param_1 == 0x52535053) {
        auVar51._8_8_ = 0x80;
        auVar51._0_8_ = 1;
        return auVar51;
      }
      if ((int)*param_1 == 0x30434341) {
LAB_00a77034:
        auVar9._8_8_ = 0x68;
        auVar9._0_8_ = 1;
        return auVar9;
      }
      if ((int)*param_1 == 0x31434341) {
LAB_00a77090:
        auVar16._8_8_ = 0x69;
        auVar16._0_8_ = 1;
        return auVar16;
      }
      if ((int)*param_1 == 0x32434341) {
LAB_00a770e4:
        auVar23._8_8_ = 0x6a;
        auVar23._0_8_ = 1;
        return auVar23;
      }
      if ((int)*param_1 == 0x33434341) {
LAB_00a77138:
        auVar30._8_8_ = 0x6b;
        auVar30._0_8_ = 1;
        return auVar30;
      }
      if ((int)*param_1 == 0x34434341) {
LAB_00a7718c:
        auVar37._8_8_ = 0x6c;
        auVar37._0_8_ = 1;
        return auVar37;
      }
      if ((int)*param_1 == 0x35434341) {
LAB_00a771d4:
        auVar43._8_8_ = 0x6d;
        auVar43._0_8_ = 1;
        return auVar43;
      }
      if ((int)*param_1 == 0x36434341) {
LAB_00a7721c:
        auVar49._8_8_ = 0x6e;
        auVar49._0_8_ = 1;
        return auVar49;
      }
      if ((int)*param_1 == 0x37434341) {
LAB_00a76b28:
        auVar5._8_8_ = 0x6f;
        auVar5._0_8_ = 1;
        return auVar5;
      }
    }
    else if (param_2 == 5) {
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '0') goto LAB_00a77034;
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '1') goto LAB_00a77090;
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '2') goto LAB_00a770e4;
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '3') goto LAB_00a77138;
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '4') goto LAB_00a7718c;
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '5') goto LAB_00a771d4;
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '6') goto LAB_00a7721c;
      if ((int)*param_1 == 0x52474377 && *(char *)((long)param_1 + 4) == '7') goto LAB_00a76b28;
    }
  }
  else if ((long)param_2 < 8) {
    if (param_2 == 6) {
      if ((int)*param_1 == 0x555f3852 && *(short *)((long)param_1 + 4) == 0x5253) {
        auVar10._8_8_ = 0x90;
        auVar10._0_8_ = 1;
        return auVar10;
      }
      if ((int)*param_1 == 0x555f3952 && *(short *)((long)param_1 + 4) == 0x5253) {
        auVar18._8_8_ = 0x91;
        auVar18._0_8_ = 1;
        return auVar18;
      }
      if ((int)*param_1 == 0x465f3852 && *(short *)((long)param_1 + 4) == 0x5149) {
        auVar25._8_8_ = 0x97;
        auVar25._0_8_ = 1;
        return auVar25;
      }
      if ((int)*param_1 == 0x465f3952 && *(short *)((long)param_1 + 4) == 0x5149) {
        auVar33._8_8_ = 0x98;
        auVar33._0_8_ = 1;
        return auVar33;
      }
      if ((int)*param_1 == 0x44495054 && *(short *)((long)param_1 + 4) == 0x5250) {
        auVar7._8_8_ = 0x142;
        auVar7._0_8_ = 1;
        return auVar7;
      }
    }
    else if (param_2 == 7) {
      if ((int)*param_1 == 0x5f303152 && *(int *)((long)param_1 + 3) == 0x5253555f) {
        auVar14._8_8_ = 0x92;
        auVar14._0_8_ = 1;
        return auVar14;
      }
      if ((int)*param_1 == 0x5f313152 && *(int *)((long)param_1 + 3) == 0x5253555f) {
        auVar22._8_8_ = 0x93;
        auVar22._0_8_ = 1;
        return auVar22;
      }
      if ((int)*param_1 == 0x5f323152 && *(int *)((long)param_1 + 3) == 0x5253555f) {
        auVar29._8_8_ = 0x94;
        auVar29._0_8_ = 1;
        return auVar29;
      }
      if ((int)*param_1 == 0x5f333152 && *(int *)((long)param_1 + 3) == 0x5253555f) {
        auVar36._8_8_ = 0x95;
        auVar36._0_8_ = 1;
        return auVar36;
      }
      if ((int)*param_1 == 0x5f343152 && *(int *)((long)param_1 + 3) == 0x5253555f) {
        auVar42._8_8_ = 0x96;
        auVar42._0_8_ = 1;
        return auVar42;
      }
      if ((int)*param_1 == 0x5f303152 && *(int *)((long)param_1 + 3) == 0x5149465f) {
        auVar48._8_8_ = 0x99;
        auVar48._0_8_ = 1;
        return auVar48;
      }
      if ((int)*param_1 == 0x5f313152 && *(int *)((long)param_1 + 3) == 0x5149465f) {
        auVar53._8_8_ = 0x9a;
        auVar53._0_8_ = 1;
        return auVar53;
      }
      if ((int)*param_1 == 0x5f323152 && *(int *)((long)param_1 + 3) == 0x5149465f) {
        auVar56._8_8_ = 0x9b;
        auVar56._0_8_ = 1;
        return auVar56;
      }
      if ((int)*param_1 == 0x5f333152 && *(int *)((long)param_1 + 3) == 0x5149465f) {
        auVar59._8_8_ = 0x9c;
        auVar59._0_8_ = 1;
        return auVar59;
      }
      if ((int)*param_1 == 0x5f343152 && *(int *)((long)param_1 + 3) == 0x5149465f) {
        auVar62._8_8_ = 0x9d;
        auVar62._0_8_ = 1;
        return auVar62;
      }
      if ((int)*param_1 == 0x5f333152 && *(int *)((long)param_1 + 3) == 0x5152495f) {
        auVar65._8_8_ = 0x9e;
        auVar65._0_8_ = 1;
        return auVar65;
      }
      if ((int)*param_1 == 0x5f343152 && *(int *)((long)param_1 + 3) == 0x5152495f) {
        auVar68._8_8_ = 0x9f;
        auVar68._0_8_ = 1;
        return auVar68;
      }
      if ((int)*param_1 == 0x5f333152 && *(int *)((long)param_1 + 3) == 0x5442415f) {
        auVar71._8_8_ = 0xa0;
        auVar71._0_8_ = 1;
        return auVar71;
      }
      if ((int)*param_1 == 0x5f343152 && *(int *)((long)param_1 + 3) == 0x5442415f) {
        auVar74._8_8_ = 0xa1;
        auVar74._0_8_ = 1;
        return auVar74;
      }
      if ((int)*param_1 == 0x5f333152 && *(int *)((long)param_1 + 3) == 0x444e555f) {
        auVar76._8_8_ = 0xa2;
        auVar76._0_8_ = 1;
        return auVar76;
      }
      if ((int)*param_1 == 0x5f343152 && *(int *)((long)param_1 + 3) == 0x444e555f) {
        auVar79._8_8_ = 0xa3;
        auVar79._0_8_ = 1;
        return auVar79;
      }
      if ((int)*param_1 == 0x5f333152 && *(int *)((long)param_1 + 3) == 0x4356535f) {
        auVar82._8_8_ = 0xa4;
        auVar82._0_8_ = 1;
        return auVar82;
      }
      if ((int)*param_1 == 0x5f343152 && *(int *)((long)param_1 + 3) == 0x4356535f) {
        auVar85._8_8_ = 0xa5;
        auVar85._0_8_ = 1;
        return auVar85;
      }
      if ((int)*param_1 == 0x49505448 && *(int *)((long)param_1 + 3) == 0x52504449) {
        auVar4._8_8_ = 0x143;
        auVar4._0_8_ = 1;
        return auVar4;
      }
    }
  }
  else if (param_2 == 8) {
    if (*param_1 == 0x5149465f52535053) {
      auVar12._8_8_ = 0x81;
      auVar12._0_8_ = 1;
      return auVar12;
    }
    if (*param_1 == 0x5152495f52535053) {
      auVar20._8_8_ = 0x82;
      auVar20._0_8_ = 1;
      return auVar20;
    }
    if (*param_1 == 0x5442415f52535053) {
      auVar27._8_8_ = 0x83;
      auVar27._0_8_ = 1;
      return auVar27;
    }
    if (*param_1 == 0x444e555f52535053) {
      auVar35._8_8_ = 0x84;
      auVar35._0_8_ = 1;
      return auVar35;
    }
    if (*param_1 == 0x4356535f52535053) {
      auVar41._8_8_ = 0x85;
      auVar41._0_8_ = 1;
      return auVar41;
    }
    if (*param_1 == 0x4f52555244495054) {
      auVar47._8_8_ = 0x140;
      auVar47._0_8_ = 1;
      return auVar47;
    }
    if (*param_1 == 0x5752555244495054) {
      auVar8._8_8_ = 0x141;
      auVar8._0_8_ = 1;
      return auVar8;
    }
  }
  else if ((param_2 == 0xc) && (*param_1 == 0x5f485455415f4152 && (int)param_1[1] == 0x45444f43)) {
    auVar15._8_8_ = 0x8f;
    auVar15._0_8_ = 1;
    return auVar15;
  }
LAB_00a76b70:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a77534  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate */

void __rustcall
<alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate
          (long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long local_10;
  long local_8;
  
  plVar2 = &local_10;
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar1 = lVar1 * param_3;
      param_1 = (long *)param_1[1];
      local_8 = param_2;
      goto LAB_00a77560;
    }
  }
  plVar2 = &local_8;
LAB_00a77560:
  *plVar2 = lVar1;
  if ((local_8 != 0) && (local_10 != 0)) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00a77584  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::Abbreviation>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::Abbreviation>>::grow_one */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::Abbreviation>>::grow_one
          (undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::grow_amortized
                    (param_1,*param_1,1,8,0x70);
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 00a775b4  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification>>::grow_one =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification>>::grow_one
    */

void __rustcall
<alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification>>::grow_one
          (undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::grow_amortized
                    (param_1,*param_1,1,8,0x10);
  if (lVar1 == -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error();
}


// ===== 00a775e4  <gimli::read::abbrev::[4]::gimli::read::abbrev::Abbreviations>::insert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::abbrev::[4]::gimli::read::abbrev::Abbreviations>::insert */

undefined8 __rustcall
<gimli::read::abbrev::[4]::gimli::read::abbrev::Abbreviations>::insert(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long local_78 [5];
  undefined1 auStack_50 [32];
  
  uVar2 = param_2[0xc];
  uVar3 = uVar2 - 1;
  if (param_1[2] <= uVar3) {
    if (uVar3 == param_1[2]) {
      if ((param_1[5] == 0) ||
         (lVar1 = <alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,gimli::read::abbrev::Abbreviation>>
                  ::get<u64>(param_1 + 3), lVar1 == 0)) {
        if (uVar3 == *param_1) {
                    /* try { // try from 00a77668 to 00a7766f has its CatchHandler @ 00a776c4 */
          <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::Abbreviation>>::grow_one
                    (param_1);
        }
        memcpy((void *)(param_1[1] + uVar3 * 0x70),param_2,0x70);
        param_1[2] = uVar2;
        return 0;
      }
    }
    else {
      <alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,gimli::read::abbrev::Abbreviation>>
      ::entry(local_78,param_1 + 3,uVar2);
      if (local_78[0] != 0) {
        <alloc::collections::btree::map::entry::[4]::alloc::collections::btree::map::entry::VacantEntry<u64,gimli::read::abbrev::Abbreviation>>
        ::insert_entry(auStack_50,local_78,param_2);
        return 0;
      }
    }
  }
  if (*param_2 != 0) {
    <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(param_2 + 1,8,0x10);
  }
  return 1;
}


// ===== 00a776e8  <alloc::collections::btree::map::entry::[4]::alloc::collections::btree::map::entry::VacantEntry<u64,gimli::read::abbrev::Abbreviation>>::insert_entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::map::entry::[4]::alloc::collections::btree::map::entry::VacantEntry<u64,
   gimli::read::abbrev::Abbreviation>>::insert_entry */

void __rustcall
<alloc::collections::btree::map::entry::[4]::alloc::collections::btree::map::entry::VacantEntry<u64,gimli::read::abbrev::Abbreviation>>
::insert_entry(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40 [2];
  
  if (param_2[2] == 0) {
    plVar3 = (long *)*param_2;
                    /* try { // try from 00a77730 to 00a77733 has its CatchHandler @ 00a77788 */
    local_40[0] = <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>
                  ::new_uninit_in();
    uVar1 = param_2[1];
    *(undefined8 *)(local_40[0] + 0x4d0) = 0;
    *(undefined2 *)(local_40[0] + 0x532) = 0;
    *plVar3 = local_40[0];
    plVar3[1] = 0;
    local_40[1] = 0;
    <alloc::collections::btree::node::[u]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_25}::Leaf>>
    ::push_with_handle(&local_58,local_40,uVar1,param_3);
  }
  else {
    <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
    ::insert_recursing::
    <alloc[c1f8e832b0d782c7]::alloc::Global,<alloc[c1f8e832b0d782c7]::collections::btree::map::entry::VacantEntry<u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation>>::insert_entry::_closure_0_>
              (&local_58,param_2 + 2,param_2[1],param_3,param_2);
    plVar3 = (long *)*param_2;
  }
  lVar2 = plVar3[2];
  param_1[1] = uStack_50;
  *param_1 = local_58;
  plVar3[2] = lVar2 + 1;
  param_1[2] = local_48;
  param_1[3] = plVar3;
  return;
}


// ===== 00a777ac  <gimli::constants::[5P]::gimli::constants::DwOp>::static_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::[5P]::gimli::constants::DwOp>::static_string */

undefined1  [16] __rustcall
<gimli::constants::[5P]::gimli::constants::DwOp>::static_string(byte *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *(undefined8 *)(&DAT_0038c1e0 + ((ulong)*param_1 ^ 0x80) * 8);
  auVar1._0_8_ = (&PTR_DAT_00afcf48)[(ulong)*param_1 ^ 0x80];
  return auVar1;
}


// ===== 00a777d0  <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::finish_grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::finish_grow */

void __rustcall
<alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::finish_grow
          (undefined8 *param_1,long *param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long local_38;
  long local_18;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  lVar6 = 8;
  uVar3 = 1;
  uVar5 = 0;
  if ((SUB168(auVar1 * auVar2,8) != 0) ||
     (param_3 = param_5 * param_3,
     0x8000000000000000U - param_4 <= param_3 && param_3 - (0x8000000000000000U - param_4) != 0))
  goto LAB_00a778b0;
  if (param_5 == 0) {
    lVar6 = 0;
LAB_00a7783c:
    plVar4 = &local_18;
  }
  else {
    lVar6 = *param_2;
    if (lVar6 == 0) goto LAB_00a7783c;
    lVar6 = lVar6 * param_5;
    param_2 = (long *)param_2[1];
    plVar4 = &local_38;
    local_18 = param_4;
  }
  *plVar4 = lVar6;
  lVar6 = param_4;
  if (local_18 == 0) {
    if (param_3 != 0) {
LAB_00a77878:
      __rustc::__rust_no_alloc_shim_is_unstable_v2(param_2);
      lVar6 = FUN_004b25a4(param_3,param_4);
      if (lVar6 == 0) goto LAB_00a778a0;
    }
LAB_00a7788c:
    uVar3 = 0;
    param_1[1] = lVar6;
  }
  else {
    if (local_38 == 0) {
      if (param_3 != 0) goto LAB_00a77878;
      if (param_4 != 0) goto LAB_00a7788c;
    }
    else {
      lVar6 = FUN_004b2600(param_2,local_38,param_4,param_3);
      if (lVar6 != 0) goto LAB_00a7788c;
    }
LAB_00a778a0:
    uVar3 = 1;
    param_1[1] = param_4;
  }
  lVar6 = 0x10;
  uVar5 = param_3;
LAB_00a778b0:
  *(ulong *)((long)param_1 + lVar6) = uVar5;
  *param_1 = uVar3;
  return;
}


// ===== 00a778cc  <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::grow_amortized =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::grow_amortized */

ulong __rustcall
<alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::grow_amortized
          (ulong *param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_38;
  ulong local_30;
  
  if ((param_5 != 0) && (!CARRY8(param_3,param_2))) {
    uVar2 = param_3 + param_2;
    if (param_3 + param_2 <= *param_1 * 2) {
      uVar2 = *param_1 << 1;
    }
    uVar3 = 4;
    if (0x400 < param_5) {
      uVar3 = 1;
    }
    uVar1 = 8;
    if (param_5 != 1) {
      uVar1 = uVar3;
    }
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    finish_grow(&local_38,param_1,uVar2,param_4,param_5);
    if (local_38 != 1) {
      *param_1 = uVar2;
      param_1[1] = local_30;
      local_30 = 0xffffffffffffffff;
    }
    return local_30;
  }
  return 0;
}


// ===== 00a7796c  <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::try_allocate_in =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::try_allocate_in */

void __rustcall
<alloc::raw_vec::[5]::alloc::raw_vec::RawVecInner>::try_allocate_in
          (undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_5;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  if ((SUB168(auVar1 * auVar2,8) == 0) &&
     (param_5 = param_5 * param_2,
     param_5 < 0x8000000000000000U - param_4 || param_5 - (0x8000000000000000U - param_4) == 0)) {
    if (param_5 == 0) {
      uVar4 = 0;
      param_1[1] = 0;
      param_1[2] = param_4;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      if ((param_3 & 1) == 0) {
        lVar3 = FUN_004b25a4(param_5,param_4);
      }
      else {
        lVar3 = FUN_004b263c();
      }
      if (lVar3 == 0) {
        param_1[1] = param_4;
        param_1[2] = param_5;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        param_1[1] = param_2;
        param_1[2] = lVar3;
      }
    }
  }
  else {
    uVar4 = 1;
    param_1[1] = 0;
  }
  *param_1 = uVar4;
  return;
}


// ===== 00a77a18  <gimli::read::abbrev::[5]::gimli::read::abbrev::Abbreviation>::new =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::abbrev::[5]::gimli::read::abbrev::Abbreviation>::new */

void __rustcall
<gimli::read::abbrev::[5]::gimli::read::abbrev::Abbreviation>::new
          (void *param_1,long param_2,undefined2 param_3,undefined1 param_4,void *param_5,
          undefined8 param_6)

{
  code *pcVar1;
  long local_28;
  
  local_28 = param_2;
  if (param_2 != 0) {
    *(long *)((long)param_1 + 0x60) = param_2;
    *(undefined2 *)((long)param_1 + 0x68) = param_3;
    *(undefined1 *)((long)param_1 + 0x6a) = param_4;
    memcpy(param_1,param_5,0x60);
    return;
  }
                    /* try { // try from 00a77a60 to 00a77a7f has its CatchHandler @ 00a77a84 */
  core::panicking::assert_failed<u64,u64>
            (1,&local_28,&DAT_002a1518,0,param_6,&PTR_s__rust_deps_gimli_0_34_0_src_read_00afcde8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xa77a84);
  (*pcVar1)();
}


// ===== 00a77aa8  <alloc::collections::btree::map::entry::[5]::alloc::collections::btree::map::entry::OccupiedEntry<u64,gimli::read::abbrev::Abbreviation>>::into_mut =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::map::entry::[5]::alloc::collections::btree::map::entry::OccupiedEntry<u64,
   gimli::read::abbrev::Abbreviation>>::into_mut */

long __rustcall
<alloc::collections::btree::map::entry::[5]::alloc::collections::btree::map::entry::OccupiedEntry<u64,gimli::read::abbrev::Abbreviation>>
::into_mut(long *param_1)

{
  return *param_1 + param_1[2] * 0x70;
}


// ===== 00a77abc  <gimli::read::abbrev::[6]::gimli::read::abbrev::Attributes>::push =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::abbrev::[6]::gimli::read::abbrev::Attributes>::push */

void __rustcall
<gimli::read::abbrev::[6]::gimli::read::abbrev::Attributes>::push(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_48;
  void *pvStack_40;
  undefined8 local_38;
  
  puVar3 = (ulong *)(param_1 + 1);
  if (*param_1 == 1) {
    lVar4 = param_1[3];
    if (lVar4 == param_1[1]) {
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification>>::
      grow_one(puVar3);
    }
    lVar6 = param_2[1];
    lVar5 = *param_2;
    param_1[3] = lVar4 + 1;
    plVar1 = (long *)(param_1[2] + lVar4 * 0x10);
    plVar1[1] = lVar6;
    *plVar1 = lVar5;
  }
  else {
    uVar2 = *puVar3;
    if (uVar2 == 5) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      pvStack_40 = (void *)FUN_004b25a4(0x50,8);
      if (pvStack_40 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(8,0x50);
      }
      local_48 = 5;
      memcpy(pvStack_40,param_1 + 2,0x50);
      local_38 = 5;
                    /* try { // try from 00a77b50 to 00a77b57 has its CatchHandler @ 00a77bcc */
      <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification>>::
      grow_one(&local_48);
      lVar5 = param_2[1];
      lVar4 = *param_2;
      *param_1 = 1;
      *(long *)((long)pvStack_40 + 0x58) = lVar5;
      *(long *)((long)pvStack_40 + 0x50) = lVar4;
      param_1[2] = (long)pvStack_40;
      *puVar3 = local_48;
      param_1[3] = 6;
    }
    else {
      if (4 < uVar2) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar2,5,&PTR_s__rust_deps_gimli_0_34_0_src_read_00afce00);
      }
      lVar5 = param_2[1];
      lVar4 = *param_2;
      param_1[1] = uVar2 + 1;
      param_1[uVar2 * 2 + 3] = lVar5;
      param_1[uVar2 * 2 + 2] = lVar4;
    }
  }
  return;
}


// ===== 00a77be8  <gimli::arch::[9]::gimli::arch::AArch64>::register_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[9]::gimli::arch::AArch64>::register_name */

undefined1  [16] __rustcall
<gimli::arch::[9]::gimli::arch::AArch64>::register_name(ushort param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x80) {
    auVar2._8_8_ = *(undefined8 *)(&DAT_0038c9e0 + (ulong)param_1 * 8);
    auVar2._0_8_ = (&PTR_DAT_00afd748)[param_1];
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a77c1c  <gimli::arch::[9]::gimli::arch::AArch64>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[9]::gimli::arch::AArch64>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[9]::gimli::arch::AArch64>::name_to_register(long *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  
  if ((long)param_2 < 9) {
    if (param_2 == 2) {
      if ((short)*param_1 == 0x3058) {
        uVar2 = 0;
      }
      else {
        if ((short)*param_1 != 0x3158) {
          if ((short)*param_1 == 0x3258) {
            auVar14._8_8_ = 2;
            auVar14._0_8_ = 1;
            return auVar14;
          }
          if ((short)*param_1 == 0x3358) {
            auVar17._8_8_ = 3;
            auVar17._0_8_ = 1;
            return auVar17;
          }
          if ((short)*param_1 == 0x3458) {
            auVar19._8_8_ = 4;
            auVar19._0_8_ = 1;
            return auVar19;
          }
          if ((short)*param_1 == 0x3558) {
            auVar21._8_8_ = 5;
            auVar21._0_8_ = 1;
            return auVar21;
          }
          if ((short)*param_1 == 0x3658) {
            auVar23._8_8_ = 6;
            auVar23._0_8_ = 1;
            return auVar23;
          }
          if ((short)*param_1 == 0x3758) {
            auVar25._8_8_ = 7;
            auVar25._0_8_ = 1;
            return auVar25;
          }
          if ((short)*param_1 == 0x3858) {
            auVar27._8_8_ = 8;
            auVar27._0_8_ = 1;
            return auVar27;
          }
          if ((short)*param_1 == 0x3958) {
            auVar29._8_8_ = 9;
            auVar29._0_8_ = 1;
            return auVar29;
          }
          if ((short)*param_1 == 0x5053) {
            auVar31._8_8_ = 0x1f;
            auVar31._0_8_ = 1;
            return auVar31;
          }
          if ((short)*param_1 == 0x4350) {
            auVar33._8_8_ = 0x20;
            auVar33._0_8_ = 1;
            return auVar33;
          }
          if ((short)*param_1 == 0x4756) {
            auVar35._8_8_ = 0x2e;
            auVar35._0_8_ = 1;
            return auVar35;
          }
          if ((short)*param_1 == 0x3050) {
            auVar37._8_8_ = 0x30;
            auVar37._0_8_ = 1;
            return auVar37;
          }
          if ((short)*param_1 == 0x3150) {
            auVar39._8_8_ = 0x31;
            auVar39._0_8_ = 1;
            return auVar39;
          }
          if ((short)*param_1 == 0x3250) {
            auVar41._8_8_ = 0x32;
            auVar41._0_8_ = 1;
            return auVar41;
          }
          if ((short)*param_1 == 0x3350) {
            auVar43._8_8_ = 0x33;
            auVar43._0_8_ = 1;
            return auVar43;
          }
          if ((short)*param_1 == 0x3450) {
            auVar45._8_8_ = 0x34;
            auVar45._0_8_ = 1;
            return auVar45;
          }
          if ((short)*param_1 == 0x3550) {
            auVar47._8_8_ = 0x35;
            auVar47._0_8_ = 1;
            return auVar47;
          }
          if ((short)*param_1 == 0x3650) {
            auVar49._8_8_ = 0x36;
            auVar49._0_8_ = 1;
            return auVar49;
          }
          if ((short)*param_1 == 0x3750) {
            auVar51._8_8_ = 0x37;
            auVar51._0_8_ = 1;
            return auVar51;
          }
          if ((short)*param_1 == 0x3850) {
            auVar53._8_8_ = 0x38;
            auVar53._0_8_ = 1;
            return auVar53;
          }
          if ((short)*param_1 == 0x3950) {
            auVar55._8_8_ = 0x39;
            auVar55._0_8_ = 1;
            return auVar55;
          }
          if ((short)*param_1 == 0x3056) {
            auVar57._8_8_ = 0x40;
            auVar57._0_8_ = 1;
            return auVar57;
          }
          if ((short)*param_1 == 0x3156) {
            auVar59._8_8_ = 0x41;
            auVar59._0_8_ = 1;
            return auVar59;
          }
          if ((short)*param_1 == 0x3256) {
            auVar61._8_8_ = 0x42;
            auVar61._0_8_ = 1;
            return auVar61;
          }
          if ((short)*param_1 == 0x3356) {
            auVar63._8_8_ = 0x43;
            auVar63._0_8_ = 1;
            return auVar63;
          }
          if ((short)*param_1 == 0x3456) {
            auVar65._8_8_ = 0x44;
            auVar65._0_8_ = 1;
            return auVar65;
          }
          if ((short)*param_1 == 0x3556) {
            auVar67._8_8_ = 0x45;
            auVar67._0_8_ = 1;
            return auVar67;
          }
          if ((short)*param_1 == 0x3656) {
            auVar69._8_8_ = 0x46;
            auVar69._0_8_ = 1;
            return auVar69;
          }
          if ((short)*param_1 == 0x3756) {
            auVar71._8_8_ = 0x47;
            auVar71._0_8_ = 1;
            return auVar71;
          }
          if ((short)*param_1 == 0x3856) {
            auVar73._8_8_ = 0x48;
            auVar73._0_8_ = 1;
            return auVar73;
          }
          if ((short)*param_1 == 0x3956) {
            auVar75._8_8_ = 0x49;
            auVar75._0_8_ = 1;
            return auVar75;
          }
          if ((short)*param_1 == 0x305a) {
            auVar77._8_8_ = 0x60;
            auVar77._0_8_ = 1;
            return auVar77;
          }
          if ((short)*param_1 == 0x315a) {
            auVar79._8_8_ = 0x61;
            auVar79._0_8_ = 1;
            return auVar79;
          }
          if ((short)*param_1 == 0x325a) {
            auVar81._8_8_ = 0x62;
            auVar81._0_8_ = 1;
            return auVar81;
          }
          if ((short)*param_1 == 0x335a) {
            auVar83._8_8_ = 99;
            auVar83._0_8_ = 1;
            return auVar83;
          }
          if ((short)*param_1 == 0x345a) {
            auVar85._8_8_ = 100;
            auVar85._0_8_ = 1;
            return auVar85;
          }
          if ((short)*param_1 == 0x355a) {
            auVar87._8_8_ = 0x65;
            auVar87._0_8_ = 1;
            return auVar87;
          }
          if ((short)*param_1 == 0x365a) {
            auVar89._8_8_ = 0x66;
            auVar89._0_8_ = 1;
            return auVar89;
          }
          if ((short)*param_1 == 0x375a) {
            auVar91._8_8_ = 0x67;
            auVar91._0_8_ = 1;
            return auVar91;
          }
          if ((short)*param_1 == 0x385a) {
            auVar93._8_8_ = 0x68;
            auVar93._0_8_ = 1;
            return auVar93;
          }
          if ((short)*param_1 == 0x395a) {
            auVar5._8_8_ = 0x69;
            auVar5._0_8_ = 1;
            return auVar5;
          }
          goto LAB_00a78788;
        }
        uVar2 = 1;
      }
      auVar11._8_8_ = uVar2;
      auVar11._0_8_ = 1;
      return auVar11;
    }
    if (param_2 == 3) {
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '0') {
        auVar9._8_8_ = 10;
        auVar9._0_8_ = 1;
        return auVar9;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '1') {
        auVar13._8_8_ = 0xb;
        auVar13._0_8_ = 1;
        return auVar13;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '2') {
        auVar16._8_8_ = 0xc;
        auVar16._0_8_ = 1;
        return auVar16;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '3') {
        auVar18._8_8_ = 0xd;
        auVar18._0_8_ = 1;
        return auVar18;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '4') {
        auVar20._8_8_ = 0xe;
        auVar20._0_8_ = 1;
        return auVar20;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '5') {
        auVar22._8_8_ = 0xf;
        auVar22._0_8_ = 1;
        return auVar22;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '6') {
        auVar24._8_8_ = 0x10;
        auVar24._0_8_ = 1;
        return auVar24;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '7') {
        auVar26._8_8_ = 0x11;
        auVar26._0_8_ = 1;
        return auVar26;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '8') {
        auVar28._8_8_ = 0x12;
        auVar28._0_8_ = 1;
        return auVar28;
      }
      if ((short)*param_1 == 0x3158 && *(char *)((long)param_1 + 2) == '9') {
        auVar30._8_8_ = 0x13;
        auVar30._0_8_ = 1;
        return auVar30;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '0') {
        auVar32._8_8_ = 0x14;
        auVar32._0_8_ = 1;
        return auVar32;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '1') {
        auVar34._8_8_ = 0x15;
        auVar34._0_8_ = 1;
        return auVar34;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '2') {
        auVar36._8_8_ = 0x16;
        auVar36._0_8_ = 1;
        return auVar36;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '3') {
        auVar38._8_8_ = 0x17;
        auVar38._0_8_ = 1;
        return auVar38;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '4') {
        auVar40._8_8_ = 0x18;
        auVar40._0_8_ = 1;
        return auVar40;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '5') {
        auVar42._8_8_ = 0x19;
        auVar42._0_8_ = 1;
        return auVar42;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '6') {
        auVar44._8_8_ = 0x1a;
        auVar44._0_8_ = 1;
        return auVar44;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '7') {
        auVar46._8_8_ = 0x1b;
        auVar46._0_8_ = 1;
        return auVar46;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '8') {
        auVar48._8_8_ = 0x1c;
        auVar48._0_8_ = 1;
        return auVar48;
      }
      if ((short)*param_1 == 0x3258 && *(char *)((long)param_1 + 2) == '9') {
        auVar50._8_8_ = 0x1d;
        auVar50._0_8_ = 1;
        return auVar50;
      }
      if ((short)*param_1 == 0x3358 && *(char *)((long)param_1 + 2) == '0') {
        auVar52._8_8_ = 0x1e;
        auVar52._0_8_ = 1;
        return auVar52;
      }
      if ((short)*param_1 == 0x4646 && *(char *)((long)param_1 + 2) == 'R') {
        auVar54._8_8_ = 0x2f;
        auVar54._0_8_ = 1;
        return auVar54;
      }
      if ((short)*param_1 == 0x3150 && *(char *)((long)param_1 + 2) == '0') {
        auVar56._8_8_ = 0x3a;
        auVar56._0_8_ = 1;
        return auVar56;
      }
      if ((short)*param_1 == 0x3150 && *(char *)((long)param_1 + 2) == '1') {
        auVar58._8_8_ = 0x3b;
        auVar58._0_8_ = 1;
        return auVar58;
      }
      if ((short)*param_1 == 0x3150 && *(char *)((long)param_1 + 2) == '2') {
        auVar60._8_8_ = 0x3c;
        auVar60._0_8_ = 1;
        return auVar60;
      }
      if ((short)*param_1 == 0x3150 && *(char *)((long)param_1 + 2) == '3') {
        auVar62._8_8_ = 0x3d;
        auVar62._0_8_ = 1;
        return auVar62;
      }
      if ((short)*param_1 == 0x3150 && *(char *)((long)param_1 + 2) == '4') {
        auVar64._8_8_ = 0x3e;
        auVar64._0_8_ = 1;
        return auVar64;
      }
      if ((short)*param_1 == 0x3150 && *(char *)((long)param_1 + 2) == '5') {
        auVar66._8_8_ = 0x3f;
        auVar66._0_8_ = 1;
        return auVar66;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '0') {
        auVar68._8_8_ = 0x4a;
        auVar68._0_8_ = 1;
        return auVar68;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '1') {
        auVar70._8_8_ = 0x4b;
        auVar70._0_8_ = 1;
        return auVar70;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '2') {
        auVar72._8_8_ = 0x4c;
        auVar72._0_8_ = 1;
        return auVar72;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '3') {
        auVar74._8_8_ = 0x4d;
        auVar74._0_8_ = 1;
        return auVar74;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '4') {
        auVar76._8_8_ = 0x4e;
        auVar76._0_8_ = 1;
        return auVar76;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '5') {
        auVar78._8_8_ = 0x4f;
        auVar78._0_8_ = 1;
        return auVar78;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '6') {
        auVar80._8_8_ = 0x50;
        auVar80._0_8_ = 1;
        return auVar80;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '7') {
        auVar82._8_8_ = 0x51;
        auVar82._0_8_ = 1;
        return auVar82;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '8') {
        auVar84._8_8_ = 0x52;
        auVar84._0_8_ = 1;
        return auVar84;
      }
      if ((short)*param_1 == 0x3156 && *(char *)((long)param_1 + 2) == '9') {
        auVar86._8_8_ = 0x53;
        auVar86._0_8_ = 1;
        return auVar86;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '0') {
        auVar88._8_8_ = 0x54;
        auVar88._0_8_ = 1;
        return auVar88;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '1') {
        auVar90._8_8_ = 0x55;
        auVar90._0_8_ = 1;
        return auVar90;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '2') {
        auVar92._8_8_ = 0x56;
        auVar92._0_8_ = 1;
        return auVar92;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '3') {
        auVar94._8_8_ = 0x57;
        auVar94._0_8_ = 1;
        return auVar94;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '4') {
        auVar95._8_8_ = 0x58;
        auVar95._0_8_ = 1;
        return auVar95;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '5') {
        auVar96._8_8_ = 0x59;
        auVar96._0_8_ = 1;
        return auVar96;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '6') {
        auVar97._8_8_ = 0x5a;
        auVar97._0_8_ = 1;
        return auVar97;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '7') {
        auVar98._8_8_ = 0x5b;
        auVar98._0_8_ = 1;
        return auVar98;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '8') {
        auVar99._8_8_ = 0x5c;
        auVar99._0_8_ = 1;
        return auVar99;
      }
      if ((short)*param_1 == 0x3256 && *(char *)((long)param_1 + 2) == '9') {
        auVar100._8_8_ = 0x5d;
        auVar100._0_8_ = 1;
        return auVar100;
      }
      if ((short)*param_1 == 0x3356 && *(char *)((long)param_1 + 2) == '0') {
        auVar101._8_8_ = 0x5e;
        auVar101._0_8_ = 1;
        return auVar101;
      }
      if ((short)*param_1 == 0x3356 && *(char *)((long)param_1 + 2) == '1') {
        auVar102._8_8_ = 0x5f;
        auVar102._0_8_ = 1;
        return auVar102;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '0') {
        auVar103._8_8_ = 0x6a;
        auVar103._0_8_ = 1;
        return auVar103;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '1') {
        auVar104._8_8_ = 0x6b;
        auVar104._0_8_ = 1;
        return auVar104;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '2') {
        auVar105._8_8_ = 0x6c;
        auVar105._0_8_ = 1;
        return auVar105;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '3') {
        auVar106._8_8_ = 0x6d;
        auVar106._0_8_ = 1;
        return auVar106;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '4') {
        auVar107._8_8_ = 0x6e;
        auVar107._0_8_ = 1;
        return auVar107;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '5') {
        auVar108._8_8_ = 0x6f;
        auVar108._0_8_ = 1;
        return auVar108;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '6') {
        auVar109._8_8_ = 0x70;
        auVar109._0_8_ = 1;
        return auVar109;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '7') {
        auVar110._8_8_ = 0x71;
        auVar110._0_8_ = 1;
        return auVar110;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '8') {
        auVar111._8_8_ = 0x72;
        auVar111._0_8_ = 1;
        return auVar111;
      }
      if ((short)*param_1 == 0x315a && *(char *)((long)param_1 + 2) == '9') {
        auVar112._8_8_ = 0x73;
        auVar112._0_8_ = 1;
        return auVar112;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '0') {
        auVar113._8_8_ = 0x74;
        auVar113._0_8_ = 1;
        return auVar113;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '1') {
        auVar114._8_8_ = 0x75;
        auVar114._0_8_ = 1;
        return auVar114;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '2') {
        auVar115._8_8_ = 0x76;
        auVar115._0_8_ = 1;
        return auVar115;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '3') {
        auVar116._8_8_ = 0x77;
        auVar116._0_8_ = 1;
        return auVar116;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '4') {
        auVar117._8_8_ = 0x78;
        auVar117._0_8_ = 1;
        return auVar117;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '5') {
        auVar118._8_8_ = 0x79;
        auVar118._0_8_ = 1;
        return auVar118;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '6') {
        auVar119._8_8_ = 0x7a;
        auVar119._0_8_ = 1;
        return auVar119;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '7') {
        auVar120._8_8_ = 0x7b;
        auVar120._0_8_ = 1;
        return auVar120;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '8') {
        auVar121._8_8_ = 0x7c;
        auVar121._0_8_ = 1;
        return auVar121;
      }
      if ((short)*param_1 == 0x325a && *(char *)((long)param_1 + 2) == '9') {
        auVar122._8_8_ = 0x7d;
        auVar122._0_8_ = 1;
        return auVar122;
      }
      if ((short)*param_1 == 0x335a && *(char *)((long)param_1 + 2) == '0') {
        auVar123._8_8_ = 0x7e;
        auVar123._0_8_ = 1;
        return auVar123;
      }
      if ((short)*param_1 == 0x335a && *(char *)((long)param_1 + 2) == '1') {
        auVar7._8_8_ = 0x7f;
        auVar7._0_8_ = 1;
        return auVar7;
      }
    }
    else if ((param_2 == 8) && (*param_1 == 0x65646f6d5f524c45)) {
      auVar3._8_8_ = 0x21;
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
  else if (param_2 == 9) {
    if (*param_1 == 0x4c455f5244495054 && (char)param_1[1] == '0') {
      auVar8._8_8_ = 0x24;
      auVar8._0_8_ = 1;
      return auVar8;
    }
    if (*param_1 == 0x4c455f5244495054 && (char)param_1[1] == '1') {
      auVar12._8_8_ = 0x25;
      auVar12._0_8_ = 1;
      return auVar12;
    }
    if (*param_1 == 0x4c455f5244495054 && (char)param_1[1] == '2') {
      auVar15._8_8_ = 0x26;
      auVar15._0_8_ = 1;
      return auVar15;
    }
    if (*param_1 == 0x4c455f5244495054 && (char)param_1[1] == '3') {
      auVar6._8_8_ = 0x27;
      auVar6._0_8_ = 1;
      return auVar6;
    }
  }
  else if (param_2 == 0xb) {
    if (*param_1 == 0x5f4f525244495054 && *(long *)((long)param_1 + 3) == 0x304c455f4f525244) {
      auVar10._8_8_ = 0x23;
      auVar10._0_8_ = 1;
      return auVar10;
    }
  }
  else if ((param_2 == 0xd) &&
          (*param_1 == 0x5f4e4749535f4152 && *(long *)((long)param_1 + 5) == 0x45544154535f4e47)) {
    auVar4._8_8_ = 0x22;
    auVar4._0_8_ = 1;
    return auVar4;
  }
LAB_00a78788:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a78d08  <gimli::arch::[D]::gimli::arch::X86_64>::register_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[D]::gimli::arch::X86_64>::register_name */

undefined1  [16] __rustcall
<gimli::arch::[D]::gimli::arch::X86_64>::register_name(ushort param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x9b) {
    auVar2._8_8_ = *(undefined8 *)(&DAT_0038cde0 + (ulong)param_1 * 8);
    auVar2._0_8_ = (&PTR_DAT_00afdb48)[param_1];
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a78d3c  <gimli::arch::[D]::gimli::arch::X86_64>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[D]::gimli::arch::X86_64>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[D]::gimli::arch::X86_64>::name_to_register(int *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  
  if ((long)param_2 < 5) {
    if (param_2 == 2) {
      if ((short)*param_1 == 0x3872) {
        auVar8._8_8_ = 8;
        auVar8._0_8_ = 1;
        return auVar8;
      }
      if ((short)*param_1 == 0x3972) {
        auVar13._8_8_ = 9;
        auVar13._0_8_ = 1;
        return auVar13;
      }
      if ((short)*param_1 == 0x4152) {
        auVar18._8_8_ = 0x10;
        auVar18._0_8_ = 1;
        return auVar18;
      }
      if ((short)*param_1 == 0x7365) {
        auVar22._8_8_ = 0x32;
        auVar22._0_8_ = 1;
        return auVar22;
      }
      if ((short)*param_1 == 0x7363) {
        auVar26._8_8_ = 0x33;
        auVar26._0_8_ = 1;
        return auVar26;
      }
      if ((short)*param_1 == 0x7373) {
        auVar30._8_8_ = 0x34;
        auVar30._0_8_ = 1;
        return auVar30;
      }
      if ((short)*param_1 == 0x7364) {
        auVar34._8_8_ = 0x35;
        auVar34._0_8_ = 1;
        return auVar34;
      }
      if ((short)*param_1 == 0x7366) {
        auVar38._8_8_ = 0x36;
        auVar38._0_8_ = 1;
        return auVar38;
      }
      if ((short)*param_1 == 0x7367) {
        auVar42._8_8_ = 0x37;
        auVar42._0_8_ = 1;
        return auVar42;
      }
      if ((short)*param_1 == 0x7274) {
        auVar46._8_8_ = 0x3e;
        auVar46._0_8_ = 1;
        return auVar46;
      }
      if ((short)*param_1 == 0x306b) {
        auVar50._8_8_ = 0x76;
        auVar50._0_8_ = 1;
        return auVar50;
      }
      if ((short)*param_1 == 0x316b) {
        auVar54._8_8_ = 0x77;
        auVar54._0_8_ = 1;
        return auVar54;
      }
      if ((short)*param_1 == 0x326b) {
        auVar58._8_8_ = 0x78;
        auVar58._0_8_ = 1;
        return auVar58;
      }
      if ((short)*param_1 == 0x336b) {
        auVar62._8_8_ = 0x79;
        auVar62._0_8_ = 1;
        return auVar62;
      }
      if ((short)*param_1 == 0x346b) {
        auVar66._8_8_ = 0x7a;
        auVar66._0_8_ = 1;
        return auVar66;
      }
      if ((short)*param_1 == 0x356b) {
        auVar70._8_8_ = 0x7b;
        auVar70._0_8_ = 1;
        return auVar70;
      }
      if ((short)*param_1 == 0x366b) {
        auVar74._8_8_ = 0x7c;
        auVar74._0_8_ = 1;
        return auVar74;
      }
      if ((short)*param_1 == 0x376b) {
        auVar5._8_8_ = 0x7d;
        auVar5._0_8_ = 1;
        return auVar5;
      }
    }
    else {
      if (param_2 == 3) {
        if ((short)*param_1 == 0x6172 && *(char *)((long)param_1 + 2) == 'x') {
          uVar2 = 0;
        }
        else {
          if ((short)*param_1 != 0x6472 || *(char *)((long)param_1 + 2) != 'x') {
            if ((short)*param_1 == 0x6372 && *(char *)((long)param_1 + 2) == 'x') {
              auVar21._8_8_ = 2;
              auVar21._0_8_ = 1;
              return auVar21;
            }
            if ((short)*param_1 == 0x6272 && *(char *)((long)param_1 + 2) == 'x') {
              auVar25._8_8_ = 3;
              auVar25._0_8_ = 1;
              return auVar25;
            }
            if ((short)*param_1 == 0x7372 && *(char *)((long)param_1 + 2) == 'i') {
              auVar29._8_8_ = 4;
              auVar29._0_8_ = 1;
              return auVar29;
            }
            if ((short)*param_1 == 0x6472 && *(char *)((long)param_1 + 2) == 'i') {
              auVar33._8_8_ = 5;
              auVar33._0_8_ = 1;
              return auVar33;
            }
            if ((short)*param_1 == 0x6272 && *(char *)((long)param_1 + 2) == 'p') {
              auVar37._8_8_ = 6;
              auVar37._0_8_ = 1;
              return auVar37;
            }
            if ((short)*param_1 == 0x7372 && *(char *)((long)param_1 + 2) == 'p') {
              auVar41._8_8_ = 7;
              auVar41._0_8_ = 1;
              return auVar41;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '0') {
              auVar45._8_8_ = 10;
              auVar45._0_8_ = 1;
              return auVar45;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '1') {
              auVar49._8_8_ = 0xb;
              auVar49._0_8_ = 1;
              return auVar49;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '2') {
              auVar53._8_8_ = 0xc;
              auVar53._0_8_ = 1;
              return auVar53;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '3') {
              auVar57._8_8_ = 0xd;
              auVar57._0_8_ = 1;
              return auVar57;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '4') {
              auVar61._8_8_ = 0xe;
              auVar61._0_8_ = 1;
              return auVar61;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '5') {
              auVar65._8_8_ = 0xf;
              auVar65._0_8_ = 1;
              return auVar65;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '0') {
              auVar69._8_8_ = 0x21;
              auVar69._0_8_ = 1;
              return auVar69;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '1') {
              auVar73._8_8_ = 0x22;
              auVar73._0_8_ = 1;
              return auVar73;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '2') {
              auVar77._8_8_ = 0x23;
              auVar77._0_8_ = 1;
              return auVar77;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '3') {
              auVar80._8_8_ = 0x24;
              auVar80._0_8_ = 1;
              return auVar80;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '4') {
              auVar82._8_8_ = 0x25;
              auVar82._0_8_ = 1;
              return auVar82;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '5') {
              auVar84._8_8_ = 0x26;
              auVar84._0_8_ = 1;
              return auVar84;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '6') {
              auVar86._8_8_ = 0x27;
              auVar86._0_8_ = 1;
              return auVar86;
            }
            if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '7') {
              auVar88._8_8_ = 0x28;
              auVar88._0_8_ = 1;
              return auVar88;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '0') {
              auVar89._8_8_ = 0x29;
              auVar89._0_8_ = 1;
              return auVar89;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '1') {
              auVar90._8_8_ = 0x2a;
              auVar90._0_8_ = 1;
              return auVar90;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '2') {
              auVar91._8_8_ = 0x2b;
              auVar91._0_8_ = 1;
              return auVar91;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '3') {
              auVar92._8_8_ = 0x2c;
              auVar92._0_8_ = 1;
              return auVar92;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '4') {
              auVar93._8_8_ = 0x2d;
              auVar93._0_8_ = 1;
              return auVar93;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '5') {
              auVar94._8_8_ = 0x2e;
              auVar94._0_8_ = 1;
              return auVar94;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '6') {
              auVar95._8_8_ = 0x2f;
              auVar95._0_8_ = 1;
              return auVar95;
            }
            if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '7') {
              auVar96._8_8_ = 0x30;
              auVar96._0_8_ = 1;
              return auVar96;
            }
            if ((short)*param_1 == 0x6366 && *(char *)((long)param_1 + 2) == 'w') {
              auVar97._8_8_ = 0x41;
              auVar97._0_8_ = 1;
              return auVar97;
            }
            if ((short)*param_1 == 0x7366 && *(char *)((long)param_1 + 2) == 'w') {
              auVar98._8_8_ = 0x42;
              auVar98._0_8_ = 1;
              return auVar98;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '6') {
              auVar99._8_8_ = 0x82;
              auVar99._0_8_ = 1;
              return auVar99;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '7') {
              auVar100._8_8_ = 0x83;
              auVar100._0_8_ = 1;
              return auVar100;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '8') {
              auVar101._8_8_ = 0x84;
              auVar101._0_8_ = 1;
              return auVar101;
            }
            if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '9') {
              auVar102._8_8_ = 0x85;
              auVar102._0_8_ = 1;
              return auVar102;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '0') {
              auVar103._8_8_ = 0x86;
              auVar103._0_8_ = 1;
              return auVar103;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '1') {
              auVar104._8_8_ = 0x87;
              auVar104._0_8_ = 1;
              return auVar104;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '2') {
              auVar105._8_8_ = 0x88;
              auVar105._0_8_ = 1;
              return auVar105;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '3') {
              auVar106._8_8_ = 0x89;
              auVar106._0_8_ = 1;
              return auVar106;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '4') {
              auVar107._8_8_ = 0x8a;
              auVar107._0_8_ = 1;
              return auVar107;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '5') {
              auVar108._8_8_ = 0x8b;
              auVar108._0_8_ = 1;
              return auVar108;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '6') {
              auVar109._8_8_ = 0x8c;
              auVar109._0_8_ = 1;
              return auVar109;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '7') {
              auVar110._8_8_ = 0x8d;
              auVar110._0_8_ = 1;
              return auVar110;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '8') {
              auVar111._8_8_ = 0x8e;
              auVar111._0_8_ = 1;
              return auVar111;
            }
            if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '9') {
              auVar112._8_8_ = 0x8f;
              auVar112._0_8_ = 1;
              return auVar112;
            }
            if ((short)*param_1 == 0x3372 && *(char *)((long)param_1 + 2) == '0') {
              auVar113._8_8_ = 0x90;
              auVar113._0_8_ = 1;
              return auVar113;
            }
            if ((short)*param_1 == 0x3372 && *(char *)((long)param_1 + 2) == '1') {
              auVar7._8_8_ = 0x91;
              auVar7._0_8_ = 1;
              return auVar7;
            }
            goto LAB_00a797d4;
          }
          uVar2 = 1;
        }
        auVar17._8_8_ = uVar2;
        auVar17._0_8_ = 1;
        return auVar17;
      }
      if (param_2 == 4) {
        if (*param_1 == 0x306d6d78) {
          auVar10._8_8_ = 0x11;
          auVar10._0_8_ = 1;
          return auVar10;
        }
        if (*param_1 == 0x316d6d78) {
          auVar15._8_8_ = 0x12;
          auVar15._0_8_ = 1;
          return auVar15;
        }
        if (*param_1 == 0x326d6d78) {
          auVar20._8_8_ = 0x13;
          auVar20._0_8_ = 1;
          return auVar20;
        }
        if (*param_1 == 0x336d6d78) {
          auVar24._8_8_ = 0x14;
          auVar24._0_8_ = 1;
          return auVar24;
        }
        if (*param_1 == 0x346d6d78) {
          auVar28._8_8_ = 0x15;
          auVar28._0_8_ = 1;
          return auVar28;
        }
        if (*param_1 == 0x356d6d78) {
          auVar32._8_8_ = 0x16;
          auVar32._0_8_ = 1;
          return auVar32;
        }
        if (*param_1 == 0x366d6d78) {
          auVar36._8_8_ = 0x17;
          auVar36._0_8_ = 1;
          return auVar36;
        }
        if (*param_1 == 0x376d6d78) {
          auVar40._8_8_ = 0x18;
          auVar40._0_8_ = 1;
          return auVar40;
        }
        if (*param_1 == 0x386d6d78) {
          auVar44._8_8_ = 0x19;
          auVar44._0_8_ = 1;
          return auVar44;
        }
        if (*param_1 == 0x396d6d78) {
          auVar48._8_8_ = 0x1a;
          auVar48._0_8_ = 1;
          return auVar48;
        }
        if (*param_1 == 0x7274646c) {
          auVar52._8_8_ = 0x3f;
          auVar52._0_8_ = 1;
          return auVar52;
        }
        if (*param_1 == 0x306d6d74) {
          auVar56._8_8_ = 0x92;
          auVar56._0_8_ = 1;
          return auVar56;
        }
        if (*param_1 == 0x316d6d74) {
          auVar60._8_8_ = 0x93;
          auVar60._0_8_ = 1;
          return auVar60;
        }
        if (*param_1 == 0x326d6d74) {
          auVar64._8_8_ = 0x94;
          auVar64._0_8_ = 1;
          return auVar64;
        }
        if (*param_1 == 0x336d6d74) {
          auVar68._8_8_ = 0x95;
          auVar68._0_8_ = 1;
          return auVar68;
        }
        if (*param_1 == 0x346d6d74) {
          auVar72._8_8_ = 0x96;
          auVar72._0_8_ = 1;
          return auVar72;
        }
        if (*param_1 == 0x356d6d74) {
          auVar76._8_8_ = 0x97;
          auVar76._0_8_ = 1;
          return auVar76;
        }
        if (*param_1 == 0x366d6d74) {
          auVar79._8_8_ = 0x98;
          auVar79._0_8_ = 1;
          return auVar79;
        }
        if (*param_1 == 0x376d6d74) {
          auVar3._8_8_ = 0x99;
          auVar3._0_8_ = 1;
          return auVar3;
        }
      }
    }
  }
  else if (param_2 == 5) {
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '0') {
      auVar9._8_8_ = 0x1b;
      auVar9._0_8_ = 1;
      return auVar9;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '1') {
      auVar14._8_8_ = 0x1c;
      auVar14._0_8_ = 1;
      return auVar14;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '2') {
      auVar19._8_8_ = 0x1d;
      auVar19._0_8_ = 1;
      return auVar19;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '3') {
      auVar23._8_8_ = 0x1e;
      auVar23._0_8_ = 1;
      return auVar23;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '4') {
      auVar27._8_8_ = 0x1f;
      auVar27._0_8_ = 1;
      return auVar27;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '5') {
      auVar31._8_8_ = 0x20;
      auVar31._0_8_ = 1;
      return auVar31;
    }
    if (*param_1 == 0x7363786d && (char)param_1[1] == 'r') {
      auVar35._8_8_ = 0x40;
      auVar35._0_8_ = 1;
      return auVar35;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '6') {
      auVar39._8_8_ = 0x43;
      auVar39._0_8_ = 1;
      return auVar39;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '7') {
      auVar43._8_8_ = 0x44;
      auVar43._0_8_ = 1;
      return auVar43;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '8') {
      auVar47._8_8_ = 0x45;
      auVar47._0_8_ = 1;
      return auVar47;
    }
    if (*param_1 == 0x316d6d78 && (char)param_1[1] == '9') {
      auVar51._8_8_ = 0x46;
      auVar51._0_8_ = 1;
      return auVar51;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '0') {
      auVar55._8_8_ = 0x47;
      auVar55._0_8_ = 1;
      return auVar55;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '1') {
      auVar59._8_8_ = 0x48;
      auVar59._0_8_ = 1;
      return auVar59;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '2') {
      auVar63._8_8_ = 0x49;
      auVar63._0_8_ = 1;
      return auVar63;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '3') {
      auVar67._8_8_ = 0x4a;
      auVar67._0_8_ = 1;
      return auVar67;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '4') {
      auVar71._8_8_ = 0x4b;
      auVar71._0_8_ = 1;
      return auVar71;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '5') {
      auVar75._8_8_ = 0x4c;
      auVar75._0_8_ = 1;
      return auVar75;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '6') {
      auVar78._8_8_ = 0x4d;
      auVar78._0_8_ = 1;
      return auVar78;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '7') {
      auVar81._8_8_ = 0x4e;
      auVar81._0_8_ = 1;
      return auVar81;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '8') {
      auVar83._8_8_ = 0x4f;
      auVar83._0_8_ = 1;
      return auVar83;
    }
    if (*param_1 == 0x326d6d78 && (char)param_1[1] == '9') {
      auVar85._8_8_ = 0x50;
      auVar85._0_8_ = 1;
      return auVar85;
    }
    if (*param_1 == 0x336d6d78 && (char)param_1[1] == '0') {
      auVar87._8_8_ = 0x51;
      auVar87._0_8_ = 1;
      return auVar87;
    }
    if (*param_1 == 0x336d6d78 && (char)param_1[1] == '1') {
      auVar6._8_8_ = 0x52;
      auVar6._0_8_ = 1;
      return auVar6;
    }
  }
  else if (param_2 == 6) {
    if (*param_1 == 0x414c4672 && (short)param_1[1] == 0x5347) {
      auVar12._8_8_ = 0x31;
      auVar12._0_8_ = 1;
      return auVar12;
    }
  }
  else if (param_2 == 7) {
    if (*param_1 == 0x622e7366 && *(int *)((long)param_1 + 3) == 0x65736162) {
      auVar11._8_8_ = 0x3a;
      auVar11._0_8_ = 1;
      return auVar11;
    }
    if (*param_1 == 0x622e7367 && *(int *)((long)param_1 + 3) == 0x65736162) {
      auVar16._8_8_ = 0x3b;
      auVar16._0_8_ = 1;
      return auVar16;
    }
    if (*param_1 == 0x656c6974 && *(int *)((long)param_1 + 3) == 0x67666365) {
      auVar4._8_8_ = 0x9a;
      auVar4._0_8_ = 1;
      return auVar4;
    }
  }
LAB_00a797d4:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a79cdc  <gimli::arch::[J]::gimli::arch::PowerPc64>::register_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[J]::gimli::arch::PowerPc64>::register_name */

undefined1  [16] __rustcall
<gimli::arch::[J]::gimli::arch::PowerPc64>::register_name(ushort param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x75) {
    auVar2._8_8_ = *(undefined8 *)(&DAT_0038d2b8 + (ulong)param_1 * 8);
    auVar2._0_8_ = (&PTR_DAT_00afe020)[param_1];
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a79d10  <gimli::arch::[J]::gimli::arch::PowerPc64>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[J]::gimli::arch::PowerPc64>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[J]::gimli::arch::PowerPc64>::name_to_register(uint *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  
  if ((long)param_2 < 4) {
    if (param_2 == 2) {
      if ((short)*param_1 == 0x3072) {
        param_2 = 0;
      }
      else {
        if ((short)*param_1 != 0x3172) {
          if ((short)*param_1 == 0x3272) {
            auVar13._8_8_ = 2;
            auVar13._0_8_ = 1;
            return auVar13;
          }
          if ((short)*param_1 == 0x3372) {
            auVar16._8_8_ = 3;
            auVar16._0_8_ = 1;
            return auVar16;
          }
          if ((short)*param_1 == 0x3472) {
            auVar19._8_8_ = 4;
            auVar19._0_8_ = 1;
            return auVar19;
          }
          if ((short)*param_1 == 0x3572) {
            auVar22._8_8_ = 5;
            auVar22._0_8_ = 1;
            return auVar22;
          }
          if ((short)*param_1 == 0x3672) {
            auVar25._8_8_ = 6;
            auVar25._0_8_ = 1;
            return auVar25;
          }
          if ((short)*param_1 == 0x3772) {
            auVar28._8_8_ = 7;
            auVar28._0_8_ = 1;
            return auVar28;
          }
          if ((short)*param_1 == 0x3872) {
            auVar31._8_8_ = 8;
            auVar31._0_8_ = 1;
            return auVar31;
          }
          if ((short)*param_1 == 0x3972) {
            auVar34._8_8_ = 9;
            auVar34._0_8_ = 1;
            return auVar34;
          }
          if ((short)*param_1 == 0x3066) {
            auVar37._8_8_ = 0x20;
            auVar37._0_8_ = 1;
            return auVar37;
          }
          if ((short)*param_1 == 0x3166) {
            auVar40._8_8_ = 0x21;
            auVar40._0_8_ = 1;
            return auVar40;
          }
          if ((short)*param_1 == 0x3266) {
            auVar43._8_8_ = 0x22;
            auVar43._0_8_ = 1;
            return auVar43;
          }
          if ((short)*param_1 == 0x3366) {
            auVar46._8_8_ = 0x23;
            auVar46._0_8_ = 1;
            return auVar46;
          }
          if ((short)*param_1 == 0x3466) {
            auVar49._8_8_ = 0x24;
            auVar49._0_8_ = 1;
            return auVar49;
          }
          if ((short)*param_1 == 0x3566) {
            auVar52._8_8_ = 0x25;
            auVar52._0_8_ = 1;
            return auVar52;
          }
          if ((short)*param_1 == 0x3666) {
            auVar55._8_8_ = 0x26;
            auVar55._0_8_ = 1;
            return auVar55;
          }
          if ((short)*param_1 == 0x3766) {
            auVar58._8_8_ = 0x27;
            auVar58._0_8_ = 1;
            return auVar58;
          }
          if ((short)*param_1 == 0x3866) {
            auVar61._8_8_ = 0x28;
            auVar61._0_8_ = 1;
            return auVar61;
          }
          if ((short)*param_1 == 0x3966) {
            auVar64._8_8_ = 0x29;
            auVar64._0_8_ = 1;
            return auVar64;
          }
          if ((short)*param_1 == 0x726c) {
            auVar5._8_8_ = 0x41;
            auVar5._0_8_ = 1;
            return auVar5;
          }
          goto LAB_00a7a5dc;
        }
        param_2 = 1;
      }
LAB_00a7a77c:
      auVar10._8_8_ = param_2;
      auVar10._0_8_ = 1;
      return auVar10;
    }
    if (param_2 == 3) {
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '0') {
        auVar7._8_8_ = 10;
        auVar7._0_8_ = 1;
        return auVar7;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '1') {
        auVar11._8_8_ = 0xb;
        auVar11._0_8_ = 1;
        return auVar11;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '2') {
        auVar14._8_8_ = 0xc;
        auVar14._0_8_ = 1;
        return auVar14;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '3') {
        auVar17._8_8_ = 0xd;
        auVar17._0_8_ = 1;
        return auVar17;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '4') {
        auVar20._8_8_ = 0xe;
        auVar20._0_8_ = 1;
        return auVar20;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '5') {
        auVar23._8_8_ = 0xf;
        auVar23._0_8_ = 1;
        return auVar23;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '6') {
        auVar26._8_8_ = 0x10;
        auVar26._0_8_ = 1;
        return auVar26;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '7') {
        auVar29._8_8_ = 0x11;
        auVar29._0_8_ = 1;
        return auVar29;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '8') {
        auVar32._8_8_ = 0x12;
        auVar32._0_8_ = 1;
        return auVar32;
      }
      if ((short)*param_1 == 0x3172 && *(char *)((long)param_1 + 2) == '9') {
        auVar35._8_8_ = 0x13;
        auVar35._0_8_ = 1;
        return auVar35;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '0') {
        auVar38._8_8_ = 0x14;
        auVar38._0_8_ = 1;
        return auVar38;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '1') {
        auVar41._8_8_ = 0x15;
        auVar41._0_8_ = 1;
        return auVar41;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '2') {
        auVar44._8_8_ = 0x16;
        auVar44._0_8_ = 1;
        return auVar44;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '3') {
        auVar47._8_8_ = 0x17;
        auVar47._0_8_ = 1;
        return auVar47;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '4') {
        auVar50._8_8_ = 0x18;
        auVar50._0_8_ = 1;
        return auVar50;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '5') {
        auVar53._8_8_ = 0x19;
        auVar53._0_8_ = 1;
        return auVar53;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '6') {
        auVar56._8_8_ = 0x1a;
        auVar56._0_8_ = 1;
        return auVar56;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '7') {
        auVar59._8_8_ = 0x1b;
        auVar59._0_8_ = 1;
        return auVar59;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '8') {
        auVar62._8_8_ = 0x1c;
        auVar62._0_8_ = 1;
        return auVar62;
      }
      if ((short)*param_1 == 0x3272 && *(char *)((long)param_1 + 2) == '9') {
        auVar65._8_8_ = 0x1d;
        auVar65._0_8_ = 1;
        return auVar65;
      }
      if ((short)*param_1 == 0x3372 && *(char *)((long)param_1 + 2) == '0') {
        auVar67._8_8_ = 0x1e;
        auVar67._0_8_ = 1;
        return auVar67;
      }
      if ((short)*param_1 == 0x3372 && *(char *)((long)param_1 + 2) == '1') {
        auVar69._8_8_ = 0x1f;
        auVar69._0_8_ = 1;
        return auVar69;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '0') {
        auVar70._8_8_ = 0x2a;
        auVar70._0_8_ = 1;
        return auVar70;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '1') {
        auVar71._8_8_ = 0x2b;
        auVar71._0_8_ = 1;
        return auVar71;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '2') {
        auVar72._8_8_ = 0x2c;
        auVar72._0_8_ = 1;
        return auVar72;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '3') {
        auVar73._8_8_ = 0x2d;
        auVar73._0_8_ = 1;
        return auVar73;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '4') {
        auVar74._8_8_ = 0x2e;
        auVar74._0_8_ = 1;
        return auVar74;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '5') {
        auVar75._8_8_ = 0x2f;
        auVar75._0_8_ = 1;
        return auVar75;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '6') {
        auVar76._8_8_ = 0x30;
        auVar76._0_8_ = 1;
        return auVar76;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '7') {
        auVar77._8_8_ = 0x31;
        auVar77._0_8_ = 1;
        return auVar77;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '8') {
        auVar78._8_8_ = 0x32;
        auVar78._0_8_ = 1;
        return auVar78;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '9') {
        auVar79._8_8_ = 0x33;
        auVar79._0_8_ = 1;
        return auVar79;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '0') {
        auVar80._8_8_ = 0x34;
        auVar80._0_8_ = 1;
        return auVar80;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '1') {
        auVar81._8_8_ = 0x35;
        auVar81._0_8_ = 1;
        return auVar81;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '2') {
        auVar82._8_8_ = 0x36;
        auVar82._0_8_ = 1;
        return auVar82;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '3') {
        auVar83._8_8_ = 0x37;
        auVar83._0_8_ = 1;
        return auVar83;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '4') {
        auVar84._8_8_ = 0x38;
        auVar84._0_8_ = 1;
        return auVar84;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '5') {
        auVar85._8_8_ = 0x39;
        auVar85._0_8_ = 1;
        return auVar85;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '6') {
        auVar86._8_8_ = 0x3a;
        auVar86._0_8_ = 1;
        return auVar86;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '7') {
        auVar87._8_8_ = 0x3b;
        auVar87._0_8_ = 1;
        return auVar87;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '8') {
        auVar88._8_8_ = 0x3c;
        auVar88._0_8_ = 1;
        return auVar88;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '9') {
        auVar89._8_8_ = 0x3d;
        auVar89._0_8_ = 1;
        return auVar89;
      }
      if ((short)*param_1 == 0x3366 && *(char *)((long)param_1 + 2) == '0') {
        auVar90._8_8_ = 0x3e;
        auVar90._0_8_ = 1;
        return auVar90;
      }
      if ((short)*param_1 == 0x3366 && *(char *)((long)param_1 + 2) == '1') {
        auVar91._8_8_ = 0x3f;
        auVar91._0_8_ = 1;
        return auVar91;
      }
      if ((short)*param_1 == 0x7463 && *(char *)((long)param_1 + 2) == 'r') {
        auVar92._8_8_ = 0x42;
        auVar92._0_8_ = 1;
        return auVar92;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '0') {
        auVar93._8_8_ = 0x44;
        auVar93._0_8_ = 1;
        return auVar93;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '1') {
        auVar94._8_8_ = 0x45;
        auVar94._0_8_ = 1;
        return auVar94;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '2') {
        auVar95._8_8_ = 0x46;
        auVar95._0_8_ = 1;
        return auVar95;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '3') {
        auVar96._8_8_ = 0x47;
        auVar96._0_8_ = 1;
        return auVar96;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '4') {
        auVar97._8_8_ = 0x48;
        auVar97._0_8_ = 1;
        return auVar97;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '5') {
        auVar98._8_8_ = 0x49;
        auVar98._0_8_ = 1;
        return auVar98;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '6') {
        auVar99._8_8_ = 0x4a;
        auVar99._0_8_ = 1;
        return auVar99;
      }
      if ((short)*param_1 == 0x7263 && *(char *)((long)param_1 + 2) == '7') {
        auVar100._8_8_ = 0x4b;
        auVar100._0_8_ = 1;
        return auVar100;
      }
      if ((short)*param_1 == 0x6578 && *(char *)((long)param_1 + 2) == 'r') {
        auVar101._8_8_ = 0x4c;
        auVar101._0_8_ = 1;
        return auVar101;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '0') {
        auVar102._8_8_ = 0x4d;
        auVar102._0_8_ = 1;
        return auVar102;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '1') {
        auVar103._8_8_ = 0x4e;
        auVar103._0_8_ = 1;
        return auVar103;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '2') {
        auVar104._8_8_ = 0x4f;
        auVar104._0_8_ = 1;
        return auVar104;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '3') {
        auVar105._8_8_ = 0x50;
        auVar105._0_8_ = 1;
        return auVar105;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '4') {
        auVar106._8_8_ = 0x51;
        auVar106._0_8_ = 1;
        return auVar106;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '5') {
        auVar107._8_8_ = 0x52;
        auVar107._0_8_ = 1;
        return auVar107;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '6') {
        auVar108._8_8_ = 0x53;
        auVar108._0_8_ = 1;
        return auVar108;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '7') {
        auVar109._8_8_ = 0x54;
        auVar109._0_8_ = 1;
        return auVar109;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '8') {
        auVar110._8_8_ = 0x55;
        auVar110._0_8_ = 1;
        return auVar110;
      }
      if ((short)*param_1 == 0x7276 && *(char *)((long)param_1 + 2) == '9') {
        auVar3._8_8_ = 0x56;
        auVar3._0_8_ = 1;
        return auVar3;
      }
    }
  }
  else if (param_2 == 4) {
    if (*param_1 == 0x30317276) {
      auVar6._8_8_ = 0x57;
      auVar6._0_8_ = 1;
      return auVar6;
    }
    if (*param_1 == 0x31317276) {
      auVar8._8_8_ = 0x58;
      auVar8._0_8_ = 1;
      return auVar8;
    }
    if (*param_1 == 0x32317276) {
      auVar12._8_8_ = 0x59;
      auVar12._0_8_ = 1;
      return auVar12;
    }
    if (*param_1 == 0x33317276) {
      auVar15._8_8_ = 0x5a;
      auVar15._0_8_ = 1;
      return auVar15;
    }
    if (*param_1 == 0x34317276) {
      auVar18._8_8_ = 0x5b;
      auVar18._0_8_ = 1;
      return auVar18;
    }
    if (*param_1 == 0x35317276) {
      auVar21._8_8_ = 0x5c;
      auVar21._0_8_ = 1;
      return auVar21;
    }
    if (*param_1 == 0x36317276) {
      auVar24._8_8_ = 0x5d;
      auVar24._0_8_ = 1;
      return auVar24;
    }
    if (*param_1 == 0x37317276) {
      auVar27._8_8_ = 0x5e;
      auVar27._0_8_ = 1;
      return auVar27;
    }
    if (*param_1 == 0x38317276) {
      auVar30._8_8_ = 0x5f;
      auVar30._0_8_ = 1;
      return auVar30;
    }
    if (*param_1 == 0x39317276) {
      auVar33._8_8_ = 0x60;
      auVar33._0_8_ = 1;
      return auVar33;
    }
    if (*param_1 == 0x30327276) {
      auVar36._8_8_ = 0x61;
      auVar36._0_8_ = 1;
      return auVar36;
    }
    if (*param_1 == 0x31327276) {
      auVar39._8_8_ = 0x62;
      auVar39._0_8_ = 1;
      return auVar39;
    }
    param_2 = (ulong)*param_1;
    if (*param_1 == 0x32327276) {
      auVar42._8_8_ = 99;
      auVar42._0_8_ = 1;
      return auVar42;
    }
    if (*param_1 == 0x33327276) {
      auVar45._8_8_ = 100;
      auVar45._0_8_ = 1;
      return auVar45;
    }
    if (*param_1 == 0x34327276) {
      auVar48._8_8_ = 0x65;
      auVar48._0_8_ = 1;
      return auVar48;
    }
    if (*param_1 == 0x35327276) {
      auVar51._8_8_ = 0x66;
      auVar51._0_8_ = 1;
      return auVar51;
    }
    if (*param_1 == 0x36327276) {
      auVar54._8_8_ = 0x67;
      auVar54._0_8_ = 1;
      return auVar54;
    }
    if (*param_1 == 0x37327276) {
      auVar57._8_8_ = 0x68;
      auVar57._0_8_ = 1;
      return auVar57;
    }
    if (*param_1 == 0x38327276) {
      auVar60._8_8_ = 0x69;
      auVar60._0_8_ = 1;
      return auVar60;
    }
    if (*param_1 == 0x39327276) {
      auVar63._8_8_ = 0x6a;
      auVar63._0_8_ = 1;
      return auVar63;
    }
    if (*param_1 == 0x30337276) {
      auVar66._8_8_ = 0x6b;
      auVar66._0_8_ = 1;
      return auVar66;
    }
    if (*param_1 == 0x31337276) {
      auVar68._8_8_ = 0x6c;
      auVar68._0_8_ = 1;
      return auVar68;
    }
    if (*param_1 == 0x72637376) {
      auVar4._8_8_ = 0x6e;
      auVar4._0_8_ = 1;
      return auVar4;
    }
  }
  else if (param_2 == 5) {
    param_2 = 0x72;
    if (*param_1 == 0x61686674 && (char)param_1[1] == 'r') goto LAB_00a7a77c;
    if (*param_1 == 0x61696674 && (char)param_1[1] == 'r') {
      auVar9._8_8_ = 0x73;
      auVar9._0_8_ = 1;
      return auVar9;
    }
  }
  else if ((param_2 == 6) && (*param_1 == 0x61786574 && (short)param_1[1] == 0x7273)) {
    auVar2._8_8_ = 0x74;
    auVar2._0_8_ = 1;
    return auVar2;
  }
LAB_00a7a5dc:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a7ac34  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert_fit =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert_fit */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Leaf>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
     ::insert_fit(long *param_1,long *param_2,undefined8 param_3,void *param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d0 [112];
  
  lVar4 = *param_2;
  lVar5 = param_2[2];
  uVar2 = *(ushort *)(lVar4 + 0x532);
  lVar3 = lVar4 + 0x4d8;
  uVar1 = lVar5 + 1;
  __src = (undefined8 *)(lVar3 + lVar5 * 8);
  if (uVar2 < uVar1) {
    *__src = param_3;
    memcpy(auStack_d0,param_4,0x70);
  }
  else {
    lVar6 = (ulong)uVar2 - lVar5;
    memmove((void *)(lVar3 + uVar1 * 8),__src,lVar6 * 8);
    *(undefined8 *)(lVar3 + lVar5 * 8) = param_3;
    memcpy(auStack_d0,param_4,0x70);
    memmove((void *)(lVar4 + uVar1 * 0x70),(void *)(lVar4 + lVar5 * 0x70),lVar6 * 0x70);
  }
  memcpy((void *)(lVar4 + lVar5 * 0x70),auStack_d0,0x70);
  lVar3 = param_2[1];
  *(ushort *)(lVar4 + 0x532) = uVar2 + 1;
  *param_1 = lVar4;
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  return;
}


// ===== 00a7ad20  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::correct_parent_link =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::correct_parent_link */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
     ::correct_parent_link(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[2];
  lVar2 = *(long *)(*param_1 + lVar1 * 8 + 0x538);
  *(long *)(lVar2 + 0x4d0) = *param_1;
  *(short *)(lVar2 + 0x530) = (short)lVar1;
  return;
}


// ===== 00a7ad3c  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert_fit =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>::insert_fit */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Edge>>
     ::insert_fit(long *param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *__src;
  ushort uVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_d0 [112];
  
  lVar5 = *param_1;
  lVar7 = param_1[2];
  uVar2 = *(ushort *)(lVar5 + 0x532);
  uVar6 = (ulong)uVar2;
  lVar4 = lVar5 + 0x4d8;
  uVar1 = lVar7 + 1;
  __src = (undefined8 *)(lVar4 + lVar7 * 8);
  if (uVar6 < uVar1) {
    *__src = param_2;
    memcpy(auStack_d0,param_3,0x70);
  }
  else {
    memmove((void *)(lVar4 + uVar1 * 8),__src,(uVar6 - lVar7) * 8);
    *(undefined8 *)(lVar4 + lVar7 * 8) = param_2;
    memcpy(auStack_d0,param_3,0x70);
    memmove((void *)(lVar5 + uVar1 * 0x70),(void *)(lVar5 + lVar7 * 0x70),(uVar6 - lVar7) * 0x70);
  }
  memcpy((void *)(lVar5 + lVar7 * 0x70),auStack_d0,0x70);
  lVar4 = lVar5 + 0x538;
  if (lVar7 + 2U < uVar6 + 2) {
    memmove((void *)(lVar4 + (lVar7 + 2U) * 8),(void *)(lVar4 + uVar1 * 8),(uVar6 - lVar7) * 8);
  }
  *(undefined8 *)(lVar4 + uVar1 * 8) = param_4;
  *(ushort *)(lVar5 + 0x532) = uVar2 + 1;
  if (uVar1 < uVar6 + 2) {
    lVar7 = lVar7 + 0xa8;
    do {
      sVar3 = (short)lVar7;
      lVar4 = *(long *)(lVar5 + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *(long *)(lVar4 + 0x4d0) = lVar5;
      *(short *)(lVar4 + 0x530) = sVar3 + -0xa7;
    } while (lVar7 - uVar6 != 0xa9);
  }
  return;
}


// ===== 00a7ae74  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Immut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::into_kv =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Immut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::into_kv */

undefined1  [16]
<alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Immut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
::into_kv(long *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = *param_1 + param_1[2] * 0x70;
  auVar1._0_8_ = *param_1 + param_1[2] * 8 + 0x4d8;
  return auVar1;
}


// ===== 00a7ae90  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::into_val_mut =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::into_val_mut */

long <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::LeafOrInternal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
     ::into_val_mut(long *param_1)

{
  return *param_1 + param_1[2] * 0x70;
}


// ===== 00a7aea4  <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::split_leaf_data =====

/* <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,
   u64, gimli[1de8a57408df84df]::read::abbrev::Abbreviation,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,
   alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>::split_leaf_data */

void <alloc[c1f8e832b0d782c7]::collections::btree::node::Handle<alloc[c1f8e832b0d782c7]::collections::btree::node::NodeRef<alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Mut,u64,gimli[1de8a57408df84df]::read::abbrev::Abbreviation,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::Internal>,alloc[c1f8e832b0d782c7]::collections::btree::node::marker::KV>>
     ::split_leaf_data(undefined8 *param_1,long *param_2,void *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [112];
  
  uVar2 = param_2[2];
  lVar3 = *param_2;
  uVar4 = *(undefined8 *)(lVar3 + 0x4d8 + uVar2 * 8);
  uVar1 = ~uVar2 + (ulong)*(ushort *)(lVar3 + 0x532);
  *(short *)((long)param_3 + 0x532) = (short)uVar1;
  memcpy(auStack_c0,(void *)(lVar3 + uVar2 * 0x70),0x70);
  if (uVar1 < 0xc) {
    memcpy((void *)((long)param_3 + 0x4d8),(void *)(lVar3 + 0x4d8 + (uVar2 + 1) * 8),uVar1 * 8);
    memcpy(param_3,(void *)(lVar3 + (uVar2 + 1) * 0x70),uVar1 * 0x70);
    *(short *)(lVar3 + 0x532) = (short)uVar2;
    memcpy(param_1 + 1,auStack_c0,0x70);
    *param_1 = uVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::slice::index::slice_index_fail(0,uVar1,0xb,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afce18)
  ;
}


// ===== 00a7afa8  <gimli::constants::[Z]::gimli::constants::DwTag>::static_string =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::[Z]::gimli::constants::DwTag>::static_string */

undefined1  [16] __rustcall
<gimli::constants::[Z]::gimli::constants::DwTag>::static_string(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar1 = *param_1;
  puVar2 = (undefined *)0x0;
  if (0x408f < uVar1) {
    if (0x5100 < uVar1) {
      if (uVar1 < 0xa000) {
        if (0x5110 < uVar1) {
          if (uVar1 < 0x8766) {
            if (uVar1 == 0x5111) {
              puVar2 = &DAT_00388164;
              goto LAB_00a7b5d4;
            }
            if (uVar1 != 0x8765) goto switchD_00a7afd8_caseD_9;
            puVar2 = &DAT_00388175;
          }
          else {
            if (uVar1 != 0x8766) {
              if (uVar1 != 0x8767) goto switchD_00a7afd8_caseD_9;
              puVar2 = &DAT_003881a1;
              goto LAB_00a7b704;
            }
            puVar2 = &DAT_0038818b;
          }
          goto LAB_00a7b5e4;
        }
        if (uVar1 == 0x5101) {
          puVar2 = &DAT_00388116;
          goto LAB_00a7b704;
        }
        if (uVar1 == 0x5102) {
          puVar2 = &DAT_0038812d;
          goto LAB_00a7b60c;
        }
        if (uVar1 == 0x5103) {
          puVar2 = &DAT_00388148;
          goto LAB_00a7b6a8;
        }
        goto switchD_00a7afd8_caseD_9;
      }
      if (uVar1 < 0xb002) {
        if (uVar1 < 0xb000) {
          if (uVar1 == 0xa000) {
            puVar2 = &DAT_003881b8;
            goto LAB_00a7b734;
          }
          if (uVar1 == 0xa020) {
            puVar2 = &DAT_003881cd;
            goto LAB_00a7b5ac;
          }
        }
        else {
          if (uVar1 == 0xb000) {
            puVar2 = &DAT_003881e7;
            goto LAB_00a7b704;
          }
          if (uVar1 == 0xb001) {
            puVar2 = &DAT_003881fe;
            goto LAB_00a7b6a8;
          }
        }
        goto switchD_00a7afd8_caseD_9;
      }
      if (uVar1 < 0xb004) {
        if (uVar1 == 0xb002) {
          auVar5._8_8_ = 0x23;
          auVar5._0_8_ = &DAT_0038821a;
          return auVar5;
        }
        if (uVar1 == 0xb003) {
          puVar2 = &DAT_0038823d;
          goto LAB_00a7b6f4;
        }
        goto switchD_00a7afd8_caseD_9;
      }
      if (uVar1 == 0xb004) {
        puVar2 = &DAT_00388256;
        goto LAB_00a7b4d4;
      }
      if (uVar1 != 0xffff) goto switchD_00a7afd8_caseD_9;
      puVar2 = &DAT_00387ed7;
      goto LAB_00a7b744;
    }
    if (uVar1 < 0x4200) {
      if (uVar1 < 0x4101) {
        if (uVar1 == 0x4090) {
          puVar2 = &DAT_00387ee5;
          goto LAB_00a7b5ac;
        }
        if (uVar1 == 0x4091) {
          puVar2 = &DAT_00387eff;
          goto LAB_00a7b734;
        }
        if (uVar1 == 0x4092) {
          puVar2 = &DAT_00387f14;
          goto LAB_00a7b6f4;
        }
        goto switchD_00a7afd8_caseD_9;
      }
      switch(uVar1) {
      case 0x4101:
        puVar2 = &DAT_00387f2d;
        goto LAB_00a7b724;
      case 0x4102:
        puVar2 = &DAT_00387f40;
        goto LAB_00a7b4fc;
      case 0x4103:
        puVar2 = &DAT_00387f58;
        goto LAB_00a7b734;
      case 0x4104:
        pcVar3 = &DAT_0029f690;
        break;
      case 0x4105:
        pcVar3 = &DAT_0029f6a0;
        break;
      case 0x4106:
        puVar2 = &DAT_00387f6d;
        goto LAB_00a7b358;
      case 0x4107:
        puVar2 = &DAT_00387f8f;
LAB_00a7b358:
        auVar7._8_8_ = 0x22;
        auVar7._0_8_ = puVar2;
        return auVar7;
      case 0x4108:
        pcVar3 = "DW_TAG_GNU_formal_parameter_pack";
        goto LAB_00a7b348;
      case 0x4109:
        puVar2 = &DAT_00387fb1;
        goto LAB_00a7b6d4;
      case 0x410a:
        puVar2 = &DAT_00387fc5;
        goto LAB_00a7b6c4;
      default:
        goto switchD_00a7afd8_caseD_9;
      }
      goto LAB_00a7b714;
    }
    switch(uVar1) {
    case 0x4200:
      puVar2 = &DAT_00387fe3;
      goto LAB_00a7b734;
    case 0x4201:
      puVar2 = &DAT_00387ff8;
      goto LAB_00a7b6a8;
    case 0x4202:
      puVar2 = &DAT_00388014;
      break;
    case 0x4203:
      puVar2 = &DAT_0038802d;
      goto LAB_00a7b5ac;
    case 0x4204:
      puVar2 = &DAT_00388047;
      break;
    case 0x4205:
      puVar2 = &DAT_00388060;
      goto LAB_00a7b3bc;
    case 0x4206:
      puVar2 = &DAT_0038807f;
      goto LAB_00a7b6d4;
    case 0x4207:
      puVar2 = &DAT_00388093;
      goto LAB_00a7b734;
    case 0x4208:
      puVar2 = &DAT_003880a8;
      break;
    case 0x4209:
      puVar2 = &DAT_003880c1;
LAB_00a7b5ac:
      auVar12._8_8_ = 0x1a;
      auVar12._0_8_ = puVar2;
      return auVar12;
    case 0x420a:
      puVar2 = &DAT_003880db;
      goto LAB_00a7b6d4;
    case 0x420b:
      puVar2 = &DAT_003880ef;
      goto LAB_00a7b658;
    case 0x420c:
      puVar2 = &DAT_003880fe;
LAB_00a7b4fc:
      auVar10._8_8_ = 0x18;
      auVar10._0_8_ = puVar2;
      return auVar10;
    case 0x420d:
      pcVar3 = "DW_TAG_SUN_fortran_vax_structure";
LAB_00a7b348:
      auVar6._8_8_ = 0x20;
      auVar6._0_8_ = pcVar3;
      return auVar6;
    default:
      goto switchD_00a7afd8_caseD_9;
    }
    goto LAB_00a7b6f4;
  }
  switch(uVar1) {
  case 0:
    auVar4._8_8_ = 0xb;
    auVar4._0_8_ = &DAT_003879c4;
    return auVar4;
  case 1:
    puVar2 = &DAT_00387a23;
    goto LAB_00a7b5d4;
  case 2:
    puVar2 = &DAT_00387a34;
    goto LAB_00a7b5d4;
  case 3:
    puVar2 = &DAT_00387a45;
    break;
  case 4:
    puVar2 = &DAT_00387a57;
    goto LAB_00a7b704;
  case 5:
    puVar2 = &DAT_00387a6e;
    goto LAB_00a7b704;
  case 6:
    puVar2 = &DAT_003879cf;
    goto LAB_00a7b4fc;
  case 7:
    puVar2 = &DAT_003879e7;
    goto LAB_00a7b5e4;
  case 8:
    puVar2 = &DAT_00387a85;
LAB_00a7b60c:
    auVar15._8_8_ = 0x1b;
    auVar15._0_8_ = puVar2;
    return auVar15;
  case 9:
  case 0xe:
  case 0x3e:
    goto switchD_00a7afd8_caseD_9;
  case 10:
    auVar11._8_8_ = 0xc;
    auVar11._0_8_ = &DAT_00387aa0;
    return auVar11;
  case 0xb:
    puVar2 = &DAT_00387aac;
    goto LAB_00a7b6d4;
  case 0xc:
    puVar2 = &DAT_003879fd;
    goto LAB_00a7b734;
  case 0xd:
    puVar2 = &DAT_00387ac0;
    goto LAB_00a7b6e4;
  case 0xf:
    puVar2 = &DAT_00387acd;
    goto LAB_00a7b724;
  case 0x10:
    puVar2 = &DAT_00387ae0;
    goto LAB_00a7b734;
  case 0x11:
    puVar2 = &DAT_00387af5;
    goto LAB_00a7b724;
  case 0x12:
    puVar2 = &DAT_00387b08;
    break;
  case 0x13:
    puVar2 = &DAT_00387b1a;
    goto LAB_00a7b734;
  case 0x14:
    puVar2 = &DAT_00387a12;
    goto LAB_00a7b5d4;
  case 0x15:
    puVar2 = &DAT_00387b2f;
    goto LAB_00a7b5e4;
  case 0x16:
    puVar2 = &DAT_00387b45;
    goto LAB_00a7b744;
  case 0x17:
    puVar2 = &DAT_00387b53;
    goto LAB_00a7b5d4;
  case 0x18:
    puVar2 = &DAT_00387b64;
LAB_00a7b4d4:
    auVar9._8_8_ = 0x1d;
    auVar9._0_8_ = puVar2;
    return auVar9;
  case 0x19:
    puVar2 = &DAT_00387b81;
    goto LAB_00a7b744;
  case 0x1a:
    puVar2 = &DAT_00387b8f;
    goto LAB_00a7b724;
  case 0x1b:
    puVar2 = &DAT_00387ba2;
    goto LAB_00a7b704;
  case 0x1c:
    puVar2 = &DAT_00387bb9;
    break;
  case 0x1d:
    puVar2 = &DAT_00387bcb;
    goto LAB_00a7b6f4;
  case 0x1e:
    puVar2 = &DAT_00387be4;
    goto LAB_00a7b6e4;
  case 0x1f:
    puVar2 = &DAT_00387bf1;
    goto LAB_00a7b6f4;
  case 0x20:
    puVar2 = &DAT_00387c0a;
    goto LAB_00a7b658;
  case 0x21:
    puVar2 = &DAT_00387c19;
    goto LAB_00a7b6d4;
  case 0x22:
    pcVar3 = "DW_TAG_with_stmtDW_TAG_call_siteInputOutputError\x10";
    goto LAB_00a7b714;
  case 0x23:
    puVar2 = &DAT_00387c2d;
LAB_00a7b6f4:
    auVar22._8_8_ = 0x19;
    auVar22._0_8_ = puVar2;
    return auVar22;
  case 0x24:
    pcVar3 = "DW_TAG_base_type";
    goto LAB_00a7b714;
  case 0x25:
    puVar2 = &DAT_00387c46;
    break;
  case 0x26:
    puVar2 = &DAT_00387c58;
    goto LAB_00a7b5d4;
  case 0x27:
    puVar2 = &DAT_00387c69;
    goto LAB_00a7b658;
  case 0x28:
    puVar2 = &DAT_00387c78;
    goto LAB_00a7b5d4;
  case 0x29:
    pcVar3 = &DAT_002a08a0;
    goto LAB_00a7b714;
  case 0x2a:
    puVar2 = &DAT_00387c89;
LAB_00a7b6e4:
    auVar21._8_8_ = 0xd;
    auVar21._0_8_ = puVar2;
    return auVar21;
  case 0x2b:
    puVar2 = &DAT_00387c96;
    goto LAB_00a7b658;
  case 0x2c:
    puVar2 = &DAT_00387ca5;
    goto LAB_00a7b6d4;
  case 0x2d:
    puVar2 = &DAT_00387cb9;
    break;
  case 0x2e:
    puVar2 = &DAT_00387ccb;
LAB_00a7b5d4:
    auVar13._8_8_ = 0x11;
    auVar13._0_8_ = puVar2;
    return auVar13;
  case 0x2f:
    puVar2 = &DAT_00387cdc;
LAB_00a7b6c4:
    auVar19._8_8_ = 0x1e;
    auVar19._0_8_ = puVar2;
    return auVar19;
  case 0x30:
    puVar2 = &DAT_00387cfa;
LAB_00a7b3bc:
    auVar8._8_8_ = 0x1f;
    auVar8._0_8_ = puVar2;
    return auVar8;
  case 0x31:
    puVar2 = &DAT_00387d19;
    break;
  case 0x32:
    pcVar3 = "DW_TAG_try_block";
    goto LAB_00a7b714;
  case 0x33:
    puVar2 = &DAT_00387d2b;
    goto LAB_00a7b724;
  case 0x34:
    puVar2 = &DAT_00387d3e;
LAB_00a7b658:
    auVar16._8_8_ = 0xf;
    auVar16._0_8_ = puVar2;
    return auVar16;
  case 0x35:
    puVar2 = &DAT_00387d4d;
    goto LAB_00a7b6d4;
  case 0x36:
    puVar2 = &DAT_00387d61;
    goto LAB_00a7b5e4;
  case 0x37:
    puVar2 = &DAT_00387d77;
    goto LAB_00a7b6d4;
  case 0x38:
    puVar2 = &DAT_00387d8b;
    goto LAB_00a7b734;
  case 0x39:
    pcVar3 = &DAT_0029f3f0;
    goto LAB_00a7b714;
  case 0x3a:
    puVar2 = &DAT_00387da0;
LAB_00a7b5e4:
    auVar14._8_8_ = 0x16;
    auVar14._0_8_ = puVar2;
    return auVar14;
  case 0x3b:
    puVar2 = &DAT_00387db6;
    goto LAB_00a7b704;
  case 0x3c:
    puVar2 = &DAT_00387dcd;
    goto LAB_00a7b724;
  case 0x3d:
    puVar2 = &DAT_00387de0;
    goto LAB_00a7b6d4;
  case 0x3f:
    pcVar3 = "DW_TAG_conditionmissing unit DIEPermissionDenied\a";
    goto LAB_00a7b714;
  case 0x40:
    puVar2 = &DAT_00387df4;
    break;
  case 0x41:
    pcVar3 = &DAT_0029f140;
    goto LAB_00a7b714;
  case 0x42:
    puVar2 = &DAT_00387e06;
LAB_00a7b6a8:
    auVar18._8_8_ = 0x1c;
    auVar18._0_8_ = puVar2;
    return auVar18;
  case 0x43:
    puVar2 = &DAT_00387e22;
    goto LAB_00a7b734;
  case 0x44:
    puVar2 = &DAT_00387e37;
    goto LAB_00a7b724;
  case 0x45:
    puVar2 = &DAT_00387e4a;
LAB_00a7b704:
    auVar23._8_8_ = 0x17;
    auVar23._0_8_ = puVar2;
    return auVar23;
  case 0x46:
    puVar2 = &DAT_00387e61;
LAB_00a7b724:
    auVar25._8_8_ = 0x13;
    auVar25._0_8_ = puVar2;
    return auVar25;
  case 0x47:
    puVar2 = &DAT_00387e74;
    break;
  case 0x48:
    pcVar3 = "DW_TAG_call_siteInputOutputError\x10";
LAB_00a7b714:
    auVar24._8_8_ = 0x10;
    auVar24._0_8_ = pcVar3;
    return auVar24;
  case 0x49:
    puVar2 = &DAT_00387e86;
    goto LAB_00a7b5ac;
  case 0x4a:
    puVar2 = &DAT_00387ea0;
LAB_00a7b6d4:
    auVar20._8_8_ = 0x14;
    auVar20._0_8_ = puVar2;
    return auVar20;
  case 0x4b:
    puVar2 = &DAT_00387eb4;
LAB_00a7b734:
    auVar26._8_8_ = 0x15;
    auVar26._0_8_ = puVar2;
    return auVar26;
  default:
    if (uVar1 != 0x4080) {
      if (uVar1 == 0x4081) {
        pcVar3 = &DAT_002a0e30;
        goto LAB_00a7b714;
      }
      goto switchD_00a7afd8_caseD_9;
    }
    puVar2 = &DAT_00387ec9;
LAB_00a7b744:
    param_2 = 0xe;
switchD_00a7afd8_caseD_9:
    auVar27._8_8_ = param_2;
    auVar27._0_8_ = puVar2;
    return auVar27;
  }
  auVar17._8_8_ = 0x12;
  auVar17._0_8_ = puVar2;
  return auVar17;
}


// ===== 00a7b74c  <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,gimli::read::abbrev::Abbreviation>>>::new_uninit_in =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,
   gimli::read::abbrev::Abbreviation>>>::new_uninit_in */

void __rustcall
<alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,gimli::read::abbrev::Abbreviation>>>
::new_uninit_in(void)

{
  long lVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x598,8);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x598);
}


// ===== 00a7b77c  <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,gimli::read::abbrev::Abbreviation>>>::try_new_uninit_in =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,
   gimli::read::abbrev::Abbreviation>>>::try_new_uninit_in */

void __rustcall
<alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::InternalNode<u64,gimli::read::abbrev::Abbreviation>>>
::try_new_uninit_in(void)

{
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  FUN_004b25a4(0x598,8);
  return;
}


// ===== 00a7b798  <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>::new_uninit_in =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,
   gimli::read::abbrev::Abbreviation>>>::new_uninit_in */

void __rustcall
<alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>
::new_uninit_in(void)

{
  long lVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(0x538,8);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x538);
}


// ===== 00a7b7c8  <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>::try_new_uninit_in =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,
   gimli::read::abbrev::Abbreviation>>>::try_new_uninit_in */

void __rustcall
<alloc::boxed::alloc::boxed::Box<alloc::collections::btree::node::LeafNode<u64,gimli::read::abbrev::Abbreviation>>>
::try_new_uninit_in(void)

{
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  FUN_004b25a4(0x538,8);
  return;
}


// ===== 00a7b7e4  <gimli::read::value::gimli::read::value::Value>::reinterpret =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::reinterpret */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::reinterpret
          (undefined8 *param_1,byte *param_2,uint param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  if (bVar1 < 0xb) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x260) == 0) {
      if ((uVar2 & 0x580) == 0) {
        if ((1 << (ulong)(uVar3 & 0x1f) & 0x18U) == 0) goto LAB_00a7b838;
        iVar4 = 0x10;
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = 0x20;
    }
  }
  else {
LAB_00a7b838:
    if (uVar3 - 1 < 2) {
      iVar4 = 8;
    }
    else {
      iVar4 = 0x40 - (int)LZCOUNT(param_4);
    }
  }
  if ((param_3 & 0xff) < 0xb) {
    uVar3 = 1 << (ulong)(param_3 & 0x1f);
    if ((uVar3 & 0x260) != 0) {
      iVar5 = 0x20;
      goto LAB_00a7b8cc;
    }
    if ((uVar3 & 0x580) != 0) {
      iVar5 = 0x40;
      goto LAB_00a7b8cc;
    }
    if ((1 << (ulong)(param_3 & 0x1f) & 0x18U) != 0) {
      iVar5 = 0x10;
      goto LAB_00a7b8cc;
    }
  }
  if ((param_3 & 0xff) - 1 < 2) {
    iVar5 = 8;
  }
  else {
    iVar5 = 0x40 - (int)LZCOUNT(param_4);
  }
LAB_00a7b8cc:
  if (iVar4 == iVar5) {
                    /* WARNING: Could not recover jumptable at 0x00a7b8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00a7b8ec + (ulong)(byte)(&DAT_00384cfe)[bVar1] * 4))();
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0x26;
  *param_1 = 1;
  return;
}


// ===== 00a7b96c  FUN_00a7b96c =====

void FUN_00a7b96c(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  bVar1 = *param_2;
  uVar2 = 0x29;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
LAB_00a7b9f8:
        uVar3 = *(ulong *)(param_2 + 8);
      }
      else {
        if (bVar1 != 1) goto LAB_00a7ba28;
        uVar3 = (ulong)(char)param_2[1];
joined_r0x00a7b9b8:
        if ((long)uVar3 < 0) goto LAB_00a7ba30;
      }
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 != 3) goto LAB_00a7ba28;
        uVar3 = (ulong)*(short *)(param_2 + 2);
        goto joined_r0x00a7b9b8;
      }
      uVar3 = (ulong)param_2[1];
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 != 4) {
      if (bVar1 != 5) goto LAB_00a7ba28;
      uVar3 = (ulong)*(uint *)(param_2 + 4);
      if (-1 < (int)*(uint *)(param_2 + 4)) goto LAB_00a7ba20;
LAB_00a7ba30:
      uVar2 = 0x29;
      goto LAB_00a7ba28;
    }
    uVar3 = (ulong)*(ushort *)(param_2 + 2);
  }
  else {
    if (bVar1 != 6) {
      if (bVar1 != 7) {
        if (bVar1 != 8) goto LAB_00a7ba28;
        goto LAB_00a7b9f8;
      }
      uVar3 = *(ulong *)(param_2 + 8);
      goto joined_r0x00a7b9b8;
    }
    uVar3 = (ulong)*(uint *)(param_2 + 4);
  }
LAB_00a7ba20:
  *(ulong *)(param_1 + 8) = uVar3;
  uVar2 = 0xff;
LAB_00a7ba28:
  *param_1 = uVar2;
  return;
}


// ===== 00a7ba38  <gimli::read::value::gimli::read::value::Value>::or =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::or */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::or
          (undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  char local_50;
  undefined4 uStack_4f;
  undefined3 uStack_4b;
  ulong local_48;
  undefined1 local_25;
  
  cVar1 = *param_2;
  if (cVar1 == *param_3) {
    FUN_00a7c788(&local_50,param_2,param_4);
    uVar2 = local_48;
    if (local_50 == -1) {
      FUN_00a7c788(&local_50,param_3,param_4);
      if (local_50 == -1) {
        switchD_00a7c888::caseD_f4(param_1,cVar1,local_48 | uVar2);
        return;
      }
    }
    *(char *)(param_1 + 1) = local_50;
    param_1[2] = local_48;
    local_25 = (undefined1)((uint)uStack_4f >> 0x18);
    *(undefined4 *)((long)param_1 + 9) = uStack_4f;
    *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_4b,local_25);
    *param_1 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x26;
    *param_1 = 1;
  }
  return;
}


// ===== 00a7bb2c  <gimli::read::value::gimli::read::value::Value>::and =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::and */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::and
          (undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  char local_50;
  undefined4 uStack_4f;
  undefined3 uStack_4b;
  ulong local_48;
  undefined1 local_25;
  
  cVar1 = *param_2;
  if (cVar1 == *param_3) {
    FUN_00a7c788(&local_50,param_2,param_4);
    uVar2 = local_48;
    if (local_50 == -1) {
      FUN_00a7c788(&local_50,param_3,param_4);
      if (local_50 == -1) {
        switchD_00a7c888::caseD_f4(param_1,cVar1,local_48 & uVar2);
        return;
      }
    }
    *(char *)(param_1 + 1) = local_50;
    param_1[2] = local_48;
    local_25 = (undefined1)((uint)uStack_4f >> 0x18);
    *(undefined4 *)((long)param_1 + 9) = uStack_4f;
    *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_4b,local_25);
    *param_1 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x26;
    *param_1 = 1;
  }
  return;
}


// ===== 00a7bc20  <gimli::read::value::gimli::read::value::Value>::div =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::div */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::div
          (undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong in_x11;
  double in_x12;
  byte in_w13;
  undefined8 uVar12;
  
  bVar7 = *param_3;
  if (bVar7 < 4) {
    if (bVar7 < 2) {
      if (bVar7 == 0) {
        if ((*(ulong *)(param_3 + 8) & param_4) != 0) {
          if (*param_2 != 0) goto LAB_00a7be7c;
          uVar9 = (param_4 >> 1) + 1;
          uVar11 = (*(ulong *)(param_3 + 8) & param_4 ^ uVar9) - uVar9;
          in_x11 = (*(ulong *)(param_2 + 8) & param_4 ^ uVar9) - uVar9;
          if ((uVar11 == 0xffffffffffffffff) && (in_x12 = -0.0, in_x11 == 0x8000000000000000)) {
            bVar7 = 0;
          }
          else {
            bVar7 = 0;
            in_x12 = 0.0;
            if (uVar11 != 0) {
              in_x12 = (double)((long)in_x11 / (long)uVar11);
            }
          }
          goto LAB_00a7be4c;
        }
      }
      else {
        if (bVar7 != 1) goto LAB_00a7be70;
        bVar7 = param_3[1];
        if (bVar7 != 0) {
          if (*param_2 != 1) goto LAB_00a7be7c;
          bVar3 = param_2[1];
          uVar11 = (ulong)bVar3;
          if ((bVar7 == 0xff) && (bVar3 == 0x80)) {
            bVar7 = 1;
            in_w13 = 0x80;
          }
          else {
            uVar11 = (ulong)(uint)(int)(char)bVar3;
            in_w13 = 0;
            if (bVar7 != 0) {
              in_w13 = (char)bVar3 / (char)bVar7;
            }
            bVar7 = 1;
          }
          goto LAB_00a7be4c;
        }
      }
      goto LAB_00a7be68;
    }
    if (bVar7 == 2) {
      bVar7 = param_3[1];
      if (bVar7 != 0) {
        if (*param_2 != 2) goto LAB_00a7be7c;
        uVar11 = (ulong)param_2[1];
        in_w13 = 0;
        if (bVar7 != 0) {
          in_w13 = param_2[1] / bVar7;
        }
        bVar7 = 2;
        goto LAB_00a7be4c;
      }
      goto LAB_00a7be68;
    }
    if (bVar7 == 3) {
      sVar4 = *(short *)(param_3 + 2);
      if (sVar4 != 0) {
        if (*param_2 != 3) goto LAB_00a7be7c;
        uVar5 = *(ushort *)(param_2 + 2);
        uVar11 = (ulong)uVar5;
        if ((sVar4 == -1) && (uVar5 == 0x8000)) {
          bVar7 = 3;
          in_x11 = 0x8000;
        }
        else {
          uVar11 = (ulong)(uint)(int)(short)uVar5;
          uVar2 = 0;
          if (sVar4 != 0) {
            uVar2 = (int)(short)uVar5 / (int)sVar4;
          }
          in_x11 = (ulong)uVar2;
          bVar7 = 3;
        }
        goto LAB_00a7be4c;
      }
      goto LAB_00a7be68;
    }
LAB_00a7be70:
    bVar3 = *param_2;
    uVar11 = (ulong)bVar3;
    if (8 < bVar3) {
      if (bVar3 == 9) {
        if (bVar7 != 9) goto LAB_00a7be7c;
        uVar11 = (ulong)(uint)(*(float *)(param_2 + 4) / *(float *)(param_3 + 4));
      }
      else {
        if (bVar7 != 10) goto LAB_00a7be7c;
        in_x12 = *(double *)(param_2 + 8) / *(double *)(param_3 + 8);
      }
LAB_00a7be4c:
      uVar12 = 0;
      *(byte *)(param_1 + 1) = bVar7;
      *(byte *)((long)param_1 + 9) = in_w13;
      *(short *)((long)param_1 + 10) = (short)in_x11;
      *(int *)((long)param_1 + 0xc) = (int)uVar11;
      param_1[2] = in_x12;
      goto LAB_00a7be88;
    }
LAB_00a7be7c:
    uVar8 = 0x26;
  }
  else {
    if (bVar7 < 6) {
      if (bVar7 == 4) {
        uVar5 = *(ushort *)(param_3 + 2);
        if (uVar5 != 0) {
          if (*param_2 != 4) goto LAB_00a7be7c;
          uVar11 = (ulong)*(ushort *)(param_2 + 2);
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = (uint)*(ushort *)(param_2 + 2) / (uint)uVar5;
          }
          in_x11 = (ulong)uVar2;
          bVar7 = 4;
          goto LAB_00a7be4c;
        }
      }
      else {
        if (bVar7 != 5) goto LAB_00a7be70;
        iVar1 = *(int *)(param_3 + 4);
        if (iVar1 != 0) {
          if (*param_2 != 5) goto LAB_00a7be7c;
          uVar2 = *(uint *)(param_2 + 4);
          in_x11 = (ulong)uVar2;
          if ((iVar1 != -1) || (uVar11 = 0x80000000, uVar2 != 0x80000000)) {
            uVar6 = 0;
            if (iVar1 != 0) {
              uVar6 = (int)uVar2 / iVar1;
            }
            uVar11 = (ulong)uVar6;
          }
          bVar7 = 5;
          goto LAB_00a7be4c;
        }
      }
    }
    else if (bVar7 == 6) {
      uVar2 = *(uint *)(param_3 + 4);
      if (uVar2 != 0) {
        if (*param_2 == 6) {
          uVar6 = 0;
          if (uVar2 != 0) {
            uVar6 = *(uint *)(param_2 + 4) / uVar2;
          }
          uVar11 = (ulong)uVar6;
          bVar7 = 6;
          goto LAB_00a7be4c;
        }
        goto LAB_00a7be7c;
      }
    }
    else if (bVar7 == 7) {
      lVar10 = *(long *)(param_3 + 8);
      if (lVar10 != 0) {
        if (*param_2 != 7) goto LAB_00a7be7c;
        uVar11 = *(ulong *)(param_2 + 8);
        if (((lVar10 != -1) || (in_x12 = -0.0, uVar11 != 0x8000000000000000)) &&
           (in_x12 = 0.0, lVar10 != 0)) {
          in_x12 = (double)((long)uVar11 / lVar10);
        }
        bVar7 = 7;
        goto LAB_00a7be4c;
      }
    }
    else {
      if (bVar7 != 8) goto LAB_00a7be70;
      uVar9 = *(ulong *)(param_3 + 8);
      if (uVar9 != 0) {
        if (*param_2 != 8) goto LAB_00a7be7c;
        uVar11 = *(ulong *)(param_2 + 8);
        in_x12 = 0.0;
        if (uVar9 != 0) {
          in_x12 = (double)(uVar11 / uVar9);
        }
        bVar7 = 8;
        goto LAB_00a7be4c;
      }
    }
LAB_00a7be68:
    uVar8 = 0x25;
  }
  *(undefined1 *)(param_1 + 1) = uVar8;
  uVar12 = 1;
LAB_00a7be88:
  *param_1 = uVar12;
  return;
}


// ===== 00a7beec  <gimli::read::value::gimli::read::value::Value>::not =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::not */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::not(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char local_38;
  undefined4 uStack_37;
  undefined3 uStack_33;
  ulong local_30;
  undefined1 local_25;
  
  uVar1 = *param_2;
  FUN_00a7c788(&local_38);
  if (local_38 != -1) {
    *(char *)(param_1 + 1) = local_38;
    param_1[2] = local_30;
    local_25 = (undefined1)((uint)uStack_37 >> 0x18);
    *(undefined4 *)((long)param_1 + 9) = uStack_37;
    *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_33,local_25);
    *param_1 = 1;
    return;
  }
  switchD_00a7c888::caseD_f4(param_1,uVar1,~local_30);
  return;
}


// ===== 00a7bf7c  <gimli::read::value::gimli::read::value::Value>::rem =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::rem */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::rem
          (undefined8 *param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong in_x12;
  char in_w13;
  undefined8 uVar9;
  
  bVar1 = *param_3;
  if (bVar1 < 4) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        bVar2 = param_3[1];
        uVar6 = (ulong)bVar2;
        if (bVar2 != 0) {
          if (*param_2 == 2) {
            param_4 = (ulong)param_2[1];
            uVar8 = 0;
            if (bVar2 != 0) {
              uVar8 = (uint)param_2[1] / (uint)bVar2;
            }
LAB_00a7c0bc:
            in_x12 = (ulong)uVar8;
            in_w13 = (char)param_4 - (char)uVar8 * (char)uVar6;
            goto LAB_00a7c134;
          }
          goto LAB_00a7c164;
        }
      }
      else {
        if (bVar1 != 3) goto LAB_00a7c158;
        uVar3 = *(ushort *)(param_3 + 2);
        uVar6 = (ulong)uVar3;
        if (uVar3 != 0) {
          if (*param_2 == 3) {
            param_4 = 0xffff;
            if (uVar3 != 0xffff) {
              param_4 = (ulong)*(short *)(param_2 + 2);
              uVar7 = (uint)(short)uVar3;
              uVar6 = (ulong)uVar7;
              uVar8 = 0;
              if (uVar7 != 0) {
                uVar8 = (int)*(short *)(param_2 + 2) / (int)uVar7;
              }
              goto LAB_00a7c104;
            }
            uVar8 = 0;
            goto LAB_00a7c108;
          }
          goto LAB_00a7c164;
        }
      }
      goto LAB_00a7c150;
    }
    if (bVar1 == 0) {
      uVar6 = *(ulong *)(param_3 + 8) & param_4;
      if (uVar6 != 0) {
        if (*param_2 == 0) {
          param_4 = *(ulong *)(param_2 + 8) & param_4;
LAB_00a7c098:
          in_x12 = 0;
          if (uVar6 != 0) {
            in_x12 = param_4 / uVar6;
          }
LAB_00a7c130:
          uVar6 = param_4 - in_x12 * uVar6;
          goto LAB_00a7c134;
        }
        goto LAB_00a7c164;
      }
      goto LAB_00a7c150;
    }
    if (bVar1 == 1) {
      bVar2 = param_3[1];
      uVar6 = (ulong)bVar2;
      if (bVar2 == 0) goto LAB_00a7c150;
      param_4 = (ulong)*param_2;
      if (*param_2 == 1) {
        if (bVar2 == 0xff) {
          in_w13 = '\0';
          goto LAB_00a7c134;
        }
        param_4 = (ulong)(char)param_2[1];
        uVar7 = (uint)(char)bVar2;
        uVar6 = (ulong)uVar7;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (int)(char)param_2[1] / (int)uVar7;
        }
        goto LAB_00a7c0bc;
      }
LAB_00a7c164:
      uVar5 = 0x26;
    }
    else {
LAB_00a7c158:
      if (*param_2 < 9) goto LAB_00a7c164;
      if (*param_2 != 9) {
        if (bVar1 == 10) goto LAB_00a7c190;
        goto LAB_00a7c164;
      }
      if (bVar1 != 9) goto LAB_00a7c164;
LAB_00a7c190:
      uVar5 = 0x27;
    }
  }
  else {
    if (bVar1 < 6) {
      if (bVar1 == 4) {
        uVar3 = *(ushort *)(param_3 + 2);
        uVar6 = (ulong)uVar3;
        if (uVar3 != 0) {
          if (*param_2 == 4) {
            param_4 = (ulong)*(ushort *)(param_2 + 2);
            uVar8 = 0;
            if (uVar3 != 0) {
              uVar8 = (uint)*(ushort *)(param_2 + 2) / (uint)uVar3;
            }
LAB_00a7c104:
            uVar8 = (int)param_4 - uVar8 * (int)uVar6;
LAB_00a7c108:
            in_x12 = (ulong)uVar8;
            goto LAB_00a7c134;
          }
          goto LAB_00a7c164;
        }
      }
      else {
        if (bVar1 != 5) goto LAB_00a7c158;
        uVar8 = *(uint *)(param_3 + 4);
        uVar6 = (ulong)uVar8;
        if (uVar8 != 0) {
          if (*param_2 == 5) {
            if (uVar8 != 0xffffffff) {
              uVar7 = *(uint *)(param_2 + 4);
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = (int)uVar7 / (int)uVar8;
              }
              goto LAB_00a7c0e0;
            }
            uVar7 = 0;
            goto LAB_00a7c0e4;
          }
          goto LAB_00a7c164;
        }
      }
    }
    else if (bVar1 == 6) {
      uVar8 = *(uint *)(param_3 + 4);
      uVar6 = (ulong)uVar8;
      if (uVar8 != 0) {
        if (*param_2 == 6) {
          uVar7 = *(uint *)(param_2 + 4);
          uVar4 = 0;
          if (uVar8 != 0) {
            uVar4 = uVar7 / uVar8;
          }
LAB_00a7c0e0:
          in_x12 = (ulong)uVar4;
          uVar7 = uVar7 - uVar4 * (int)uVar6;
LAB_00a7c0e4:
          param_4 = (ulong)uVar7;
LAB_00a7c134:
          uVar9 = 0;
          *(byte *)(param_1 + 1) = bVar1;
          *(char *)((long)param_1 + 9) = in_w13;
          *(short *)((long)param_1 + 10) = (short)in_x12;
          *(int *)((long)param_1 + 0xc) = (int)param_4;
          param_1[2] = uVar6;
          goto LAB_00a7c170;
        }
        goto LAB_00a7c164;
      }
    }
    else if (bVar1 == 7) {
      uVar6 = *(ulong *)(param_3 + 8);
      if (uVar6 != 0) {
        param_4 = (ulong)*param_2;
        if (*param_2 == 7) {
          if (uVar6 != 0xffffffffffffffff) {
            param_4 = *(ulong *)(param_2 + 8);
            in_x12 = 0;
            if (uVar6 != 0) {
              in_x12 = (long)param_4 / (long)uVar6;
            }
            goto LAB_00a7c130;
          }
          uVar6 = 0;
          goto LAB_00a7c134;
        }
        goto LAB_00a7c164;
      }
    }
    else {
      if (bVar1 != 8) goto LAB_00a7c158;
      uVar6 = *(ulong *)(param_3 + 8);
      if (uVar6 != 0) {
        if (*param_2 == 8) {
          param_4 = *(ulong *)(param_2 + 8);
          goto LAB_00a7c098;
        }
        goto LAB_00a7c164;
      }
    }
LAB_00a7c150:
    uVar5 = 0x25;
  }
  *(undefined1 *)(param_1 + 1) = uVar5;
  uVar9 = 1;
LAB_00a7c170:
  *param_1 = uVar9;
  return;
}


// ===== 00a7c1b8  <gimli::read::value::gimli::read::value::Value>::shl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::shl */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::shl
          (undefined8 *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_x11;
  ulong uVar6;
  undefined1 extraout_w12;
  undefined1 uVar7;
  char local_40;
  undefined4 uStack_3f;
  undefined3 uStack_3b;
  ulong local_38;
  undefined1 local_15;
  
  FUN_00a7b96c(&local_40,param_3);
  if (local_40 != -1) {
    *(char *)(param_1 + 1) = local_40;
    param_1[2] = local_38;
    local_15 = (undefined1)((uint)uStack_3f >> 0x18);
    *(undefined4 *)((long)param_1 + 9) = uStack_3f;
    *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_3b,local_15);
    *param_1 = 1;
    return;
  }
  bVar1 = *param_2;
  uVar3 = (uint)local_38;
  uVar4 = local_38;
  uVar6 = extraout_x11;
  uVar7 = extraout_w12;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar7 = 0x40;
        uVar6 = 0x40 - LZCOUNT(param_4);
        uVar5 = (*(ulong *)(param_2 + 8) & param_4) << (local_38 & 0x3f);
        uVar4 = uVar5;
        if (uVar6 <= local_38) {
          uVar4 = 0;
        }
        goto LAB_00a7c304;
      }
      if (bVar1 != 1) goto LAB_00a7c330;
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) goto LAB_00a7c330;
      goto LAB_00a7c2d0;
    }
    uVar2 = (uint)param_2[1] << (ulong)(uVar3 & 0x1f);
    uVar5 = (ulong)uVar2;
    uVar3 = 0;
    if (local_38 < 8) {
      uVar3 = uVar2;
    }
    uVar7 = (undefined1)uVar3;
  }
  else {
    if (bVar1 < 6) {
      if (bVar1 == 4) {
LAB_00a7c2d0:
        uVar2 = (uint)*(ushort *)(param_2 + 2) << (ulong)(uVar3 & 0x1f);
        uVar5 = (ulong)uVar2;
        uVar3 = 0;
        if (local_38 < 0x10) {
          uVar3 = uVar2;
        }
        uVar6 = (ulong)uVar3;
        goto LAB_00a7c304;
      }
      if (bVar1 != 5) goto LAB_00a7c330;
    }
    else if (bVar1 != 6) {
      if ((bVar1 == 7) || (bVar1 == 8)) {
        uVar5 = *(long *)(param_2 + 8) << (local_38 & 0x3f);
        uVar4 = 0;
        if (local_38 < 0x40) {
          uVar4 = uVar5;
        }
        goto LAB_00a7c304;
      }
LAB_00a7c330:
      *(undefined1 *)(param_1 + 1) = 0x27;
      *param_1 = 1;
      return;
    }
    uVar2 = 0;
    if (local_38 < 0x20) {
      uVar2 = *(int *)(param_2 + 4) << (ulong)(uVar3 & 0x1f);
    }
    uVar5 = (ulong)uVar2;
  }
LAB_00a7c304:
  *(byte *)(param_1 + 1) = bVar1;
  *(undefined1 *)((long)param_1 + 9) = uVar7;
  *(short *)((long)param_1 + 10) = (short)uVar6;
  *(int *)((long)param_1 + 0xc) = (int)uVar5;
  param_1[2] = uVar4;
  *param_1 = 0;
  return;
}


// ===== 00a7c344  <gimli::read::value::gimli::read::value::Value>::shr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::shr */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::shr
          (undefined8 *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ushort uVar9;
  ulong uVar10;
  byte extraout_w12;
  byte bVar11;
  char local_40;
  undefined4 uStack_3f;
  undefined3 uStack_3b;
  ulong local_38;
  undefined1 local_15;
  ulong extraout_x11;
  
  FUN_00a7b96c(&local_40,param_3);
  uVar9 = (ushort)extraout_x11;
  if (local_40 != -1) {
    *(char *)(param_1 + 1) = local_40;
    param_1[2] = local_38;
    local_15 = (undefined1)((uint)uStack_3f >> 0x18);
    *(undefined4 *)((long)param_1 + 9) = uStack_3f;
    *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_3b,local_15);
    *param_1 = 1;
    return;
  }
  bVar1 = *param_2;
  uVar6 = (uint)local_38;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        bVar11 = 0x40;
        uVar10 = 0x40 - LZCOUNT(param_4);
        bVar4 = uVar10 <= local_38;
        uVar8 = (*(ulong *)(param_2 + 8) & param_4) >> (local_38 & 0x3f);
        local_38 = uVar8;
        if (bVar4) {
          local_38 = 0;
        }
LAB_00a7c46c:
        uVar9 = (ushort)uVar10;
        uVar7 = (uint)uVar8;
LAB_00a7c4a8:
        *(byte *)(param_1 + 1) = bVar1;
        *(byte *)((long)param_1 + 9) = bVar11;
        *(ushort *)((long)param_1 + 10) = uVar9;
        *(uint *)((long)param_1 + 0xc) = uVar7;
        param_1[2] = local_38;
        *param_1 = 0;
        return;
      }
      if (bVar1 == 1) goto LAB_00a7c424;
    }
    else {
      if (bVar1 == 2) {
        bVar2 = param_2[1] >> (ulong)(uVar6 & 0x1f);
        uVar7 = (uint)bVar2;
        bVar11 = 0;
        if (local_38 < 8) {
          bVar11 = bVar2;
        }
        goto LAB_00a7c4a8;
      }
      if (bVar1 == 3) goto LAB_00a7c424;
    }
  }
  else {
    bVar11 = extraout_w12;
    if (bVar1 < 6) {
      if (bVar1 == 4) {
        uVar3 = *(ushort *)(param_2 + 2) >> (ulong)(uVar6 & 0x1f);
        uVar7 = (uint)uVar3;
        uVar9 = 0;
        if (local_38 < 0x10) {
          uVar9 = uVar3;
        }
        goto LAB_00a7c4a8;
      }
      if (bVar1 == 5) goto LAB_00a7c424;
    }
    else {
      if (bVar1 == 6) {
        uVar7 = 0;
        if (local_38 < 0x20) {
          uVar7 = *(uint *)(param_2 + 4) >> (ulong)(uVar6 & 0x1f);
        }
        goto LAB_00a7c4a8;
      }
      if (bVar1 == 7) {
LAB_00a7c424:
        uVar5 = 0x28;
        goto LAB_00a7c428;
      }
      if (bVar1 == 8) {
        uVar8 = *(ulong *)(param_2 + 8) >> (local_38 & 0x3f);
        bVar4 = local_38 < 0x40;
        local_38 = 0;
        uVar10 = extraout_x11;
        if (bVar4) {
          local_38 = uVar8;
        }
        goto LAB_00a7c46c;
      }
    }
  }
  uVar5 = 0x27;
LAB_00a7c428:
  *(undefined1 *)(param_1 + 1) = uVar5;
  *param_1 = 1;
  return;
}


// ===== 00a7c4d4  <gimli::read::value::gimli::read::value::Value>::xor =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::xor */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::xor
          (undefined8 *param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  char local_50;
  undefined4 uStack_4f;
  undefined3 uStack_4b;
  ulong local_48;
  undefined1 local_25;
  
  cVar1 = *param_2;
  if (cVar1 == *param_3) {
    FUN_00a7c788(&local_50,param_2,param_4);
    uVar2 = local_48;
    if (local_50 == -1) {
      FUN_00a7c788(&local_50,param_3,param_4);
      if (local_50 == -1) {
        switchD_00a7c888::caseD_f4(param_1,cVar1,local_48 ^ uVar2);
        return;
      }
    }
    *(char *)(param_1 + 1) = local_50;
    param_1[2] = local_48;
    local_25 = (undefined1)((uint)uStack_4f >> 0x18);
    *(undefined4 *)((long)param_1 + 9) = uStack_4f;
    *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_4b,local_25);
    *param_1 = 1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x26;
    *param_1 = 1;
  }
  return;
}


// ===== 00a7c5c8  <gimli::read::value::gimli::read::value::Value>::shra =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::shra */

void __rustcall
<gimli::read::value::gimli::read::value::Value>::shra
          (undefined8 *param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  short sVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  char local_40;
  undefined4 uStack_3f;
  undefined3 uStack_3b;
  ulong local_38;
  undefined1 local_15;
  ulong extraout_x11;
  ulong extraout_x12;
  
  FUN_00a7b96c(&local_40,param_3);
  sVar8 = (short)extraout_x11;
  cVar10 = (char)extraout_x12;
  if (local_40 != -1) {
    *(char *)(param_1 + 1) = local_40;
    param_1[2] = local_38;
    local_15 = (undefined1)((uint)uStack_3f >> 0x18);
    *(undefined4 *)((long)param_1 + 9) = uStack_3f;
    *(uint *)((long)param_1 + 0xc) = CONCAT31(uStack_3b,local_15);
    *param_1 = 1;
    return;
  }
  bVar1 = *param_2;
  uVar5 = (uint)local_38;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uVar9 = (param_4 >> 1) + 1;
        uVar11 = 0x40 - LZCOUNT(param_4);
        lVar7 = (*(ulong *)(param_2 + 8) & param_4 ^ uVar9) - uVar9;
        if (uVar11 <= local_38) goto LAB_00a7c730;
LAB_00a7c71c:
        sVar8 = (short)uVar9;
        cVar10 = (char)uVar11;
        local_38 = lVar7 >> (local_38 & 0x3f);
LAB_00a7c734:
        uVar6 = (uint)lVar7;
LAB_00a7c75c:
        *(byte *)(param_1 + 1) = bVar1;
        *(char *)((long)param_1 + 9) = cVar10;
        *(short *)((long)param_1 + 10) = sVar8;
        *(uint *)((long)param_1 + 0xc) = uVar6;
        param_1[2] = local_38;
        *param_1 = 0;
        return;
      }
      if (bVar1 == 1) {
        bVar2 = param_2[1];
        uVar6 = (uint)bVar2;
        if (local_38 < 8) {
          uVar6 = (uint)(char)bVar2;
          cVar10 = (char)((int)uVar6 >> (uVar5 & 0x1f));
        }
        else {
          cVar10 = (char)bVar2 >> 7;
        }
        goto LAB_00a7c75c;
      }
    }
    else {
      if (bVar1 == 2) goto LAB_00a7c6dc;
      if (bVar1 == 3) {
        uVar3 = *(ushort *)(param_2 + 2);
        uVar6 = (uint)uVar3;
        if (local_38 < 0x10) {
          uVar6 = (uint)(short)uVar3;
          sVar8 = (short)((int)uVar6 >> (uVar5 & 0x1f));
        }
        else {
          sVar8 = (short)uVar3 >> 0xf;
        }
        goto LAB_00a7c75c;
      }
    }
LAB_00a7c738:
    uVar4 = 0x27;
  }
  else {
    if (bVar1 < 6) {
      if (bVar1 != 4) {
        if (bVar1 == 5) {
          if (local_38 < 0x20) {
            uVar6 = *(int *)(param_2 + 4) >> (uVar5 & 0x1f);
          }
          else {
            uVar6 = *(int *)(param_2 + 4) >> 0x1f;
          }
          goto LAB_00a7c75c;
        }
        goto LAB_00a7c738;
      }
    }
    else if (bVar1 != 6) {
      if (bVar1 == 7) {
        lVar7 = *(long *)(param_2 + 8);
        uVar9 = extraout_x11;
        uVar11 = extraout_x12;
        if (local_38 < 0x40) goto LAB_00a7c71c;
LAB_00a7c730:
        sVar8 = (short)uVar9;
        cVar10 = (char)uVar11;
        local_38 = lVar7 >> 0x3f;
        goto LAB_00a7c734;
      }
      if (bVar1 != 8) goto LAB_00a7c738;
    }
LAB_00a7c6dc:
    uVar4 = 0x28;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  *param_1 = 1;
  return;
}


// ===== 00a7c788  FUN_00a7c788 =====

void FUN_00a7c788(undefined1 *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *param_2;
  uVar2 = 0x27;
  if (bVar1 < 4) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        param_3 = *(ulong *)(param_2 + 8) & param_3;
      }
      else {
        if (bVar1 != 1) goto LAB_00a7c834;
        param_3 = (ulong)(char)param_2[1];
      }
    }
    else if (bVar1 == 2) {
      param_3 = (ulong)param_2[1];
    }
    else {
      if (bVar1 != 3) goto LAB_00a7c834;
      param_3 = (ulong)*(short *)(param_2 + 2);
    }
  }
  else if (bVar1 < 6) {
    if (bVar1 == 4) {
      param_3 = (ulong)*(ushort *)(param_2 + 2);
    }
    else {
      if (bVar1 != 5) goto LAB_00a7c834;
      param_3 = (ulong)*(int *)(param_2 + 4);
    }
  }
  else if (bVar1 == 6) {
    param_3 = (ulong)*(uint *)(param_2 + 4);
  }
  else {
    if ((bVar1 != 7) && (bVar1 != 8)) goto LAB_00a7c834;
    param_3 = *(ulong *)(param_2 + 8);
  }
  *(ulong *)(param_1 + 8) = param_3;
  uVar2 = 0xff;
LAB_00a7c834:
  *param_1 = uVar2;
  return;
}


// ===== 00a7c83c  <gimli::read::value::gimli::read::value::Value>::convert =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::value::gimli::read::value::Value>::convert */

ushort * __rustcall
<gimli::read::value::gimli::read::value::Value>::convert
          (undefined8 *param_1,ushort *param_2,byte *param_3,byte *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  code *UNRECOVERED_JUMPTABLE;
  ushort *puVar13;
  float fVar14;
  byte *pbVar15;
  byte local_38;
  uint uStack_37;
  uint3 uStack_33;
  byte *local_30;
  undefined4 uStack_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  bVar12 = (byte)*param_2;
  puVar13 = (ushort *)((ulong)param_3 & 0xffffffff);
  bVar1 = 8 < bVar12;
  bVar2 = SBORROW4((uint)bVar12,9);
  uVar7 = (uint)bVar12;
  bVar3 = (int)(uVar7 - 9) < 0;
  bVar4 = uVar7 == 9;
  pbVar6 = param_3;
  if (!bVar4) {
    bVar1 = 9 < uVar7;
    bVar2 = SBORROW4(uVar7,10);
    bVar3 = (int)(uVar7 - 10) < 0;
    bVar4 = uVar7 == 10;
    if (!bVar4) goto switchD_00a7c8b0_caseD_a7c8bc;
    pbVar10 = &switchD_00a7c888::switchdataD_00384d14;
    pbVar9 = (byte *)((ulong)param_3 & 0xff);
    pbVar15 = *(byte **)(param_2 + 4);
    bVar12 = pbVar9[0x384d14];
    UNRECOVERED_JUMPTABLE = (code *)(ulong)bVar12;
    pbVar11 = (byte *)((long)UNRECOVERED_JUMPTABLE * 4 + 0xa7c88c);
    bVar5 = bVar4;
    switch(pbVar9) {
    default:
      pbVar9 = (byte *)(long)(double)pbVar15;
    case (byte *)0x2d:
    case (byte *)0x2f:
    case (byte *)0x33:
    case (byte *)0x37:
    case (byte *)0x3d:
    case (byte *)0x45:
    case (byte *)0x47:
    case (byte *)0x49:
    case (byte *)0x4b:
    case (byte *)0x4d:
    case (byte *)0x4f:
    case (byte *)0x51:
    case (byte *)0x57:
    case (byte *)0x5b:
    case (byte *)0x5d:
    case (byte *)0x5f:
    case (byte *)0x60:
    case (byte *)0x61:
    case (byte *)0x63:
    case (byte *)0x6f:
    case (byte *)0x71:
    case (byte *)0x75:
    case (byte *)0x77:
    case (byte *)0x7d:
    case (byte *)0x7f:
    case (byte *)0x8b:
    case (byte *)0x8f:
    case (byte *)0x91:
    case (byte *)0x95:
    case (byte *)0x99:
    case (byte *)0x9d:
    case (byte *)0x9f:
    case (byte *)0xa5:
    case (byte *)0xb3:
    case (byte *)0xb5:
    case (byte *)0xb7:
    case (byte *)0xbb:
      goto switchD_00a7c888_caseD_f3;
    case (byte *)0x1:
    case (byte *)0xd:
    case (byte *)0xfc:
      goto switchD_00a7c888_caseD_1;
    case (byte *)0x2:
      pbVar9 = (byte *)(ulong)(uint)(int)(double)pbVar15;
    case (byte *)0xc3:
    case (byte *)0xe6:
switchD_00a7c888_caseD_c3:
      break;
    case (byte *)0x3:
    case (byte *)0xf:
    case (byte *)0x92:
      pbVar9 = (byte *)(ulong)(uint)(int)(double)pbVar15;
      goto LAB_00a7c990;
    case (byte *)0x4:
    case (byte *)0x68:
      pbVar9 = (byte *)(ulong)(uint)(int)(double)pbVar15;
      goto switchD_00a7c8b0_caseD_a7c9b0;
    case (byte *)0x5:
      goto switchD_00a7c888_caseD_5;
    case (byte *)0x6:
    case (byte *)0x46:
      goto switchD_00a7c888_caseD_6;
    case (byte *)0x7:
    case (byte *)0xdd:
      goto switchD_00a7c888_caseD_7;
    case (byte *)0x9:
    case (byte *)0x12:
    case (byte *)0xed:
      goto switchD_00a7c888_caseD_9;
    case (byte *)0xa:
      goto switchD_00a7c888_caseD_a;
    case (byte *)0xc:
      goto switchD_00a7c888_caseD_c;
    case (byte *)0xe:
    case (byte *)0xe4:
      goto switchD_00a7c888_caseD_e;
    case (byte *)0x10:
      goto switchD_00a7c888_caseD_10;
    case (byte *)0x11:
    case (byte *)0xa4:
    case (byte *)0xc1:
      goto switchD_00a7c888_caseD_11;
    case (byte *)0x14:
      goto switchD_00a7c888_caseD_14;
    case (byte *)0x15:
    case (byte *)0xf5:
      goto switchD_00a7c888_caseD_15;
    case (byte *)0x1f:
    case (byte *)0x44:
      goto switchD_00a7c888_caseD_1f;
    case (byte *)0x20:
    case (byte *)0xcc:
      goto switchD_00a7c888_caseD_20;
    case (byte *)0x24:
    case (byte *)0xb6:
      goto switchD_00a7c888_caseD_24;
    case (byte *)0x26:
      goto switchD_00a7c888_caseD_26;
    case (byte *)0x28:
      goto switchD_00a7c888_caseD_28;
    case (byte *)0x2a:
    case (byte *)0x5a:
      goto switchD_00a7c888_caseD_2a;
    case (byte *)0x2c:
    case (byte *)0xd6:
    case (byte *)0xde:
      goto switchD_00a7c888_caseD_2c;
    case (byte *)0x2e:
    case (byte *)0x6a:
      goto switchD_00a7c888_caseD_2e;
    case (byte *)0x30:
      goto switchD_00a7c888_caseD_30;
    case (byte *)0x32:
      goto switchD_00a7c888_caseD_32;
    case (byte *)0x34:
      goto switchD_00a7c888_caseD_34;
    case (byte *)0x36:
    case (byte *)0xbd:
      goto switchD_00a7c888_caseD_36;
    case (byte *)0x38:
      goto switchD_00a7c888_caseD_38;
    case (byte *)0x3a:
      goto switchD_00a7c888_caseD_3a;
    case (byte *)0x3c:
    case (byte *)0xec:
      goto switchD_00a7c888_caseD_3c;
    case (byte *)0x3e:
      goto switchD_00a7c888_caseD_3e;
    case (byte *)0x40:
      goto switchD_00a7c888_caseD_40;
    case (byte *)0x42:
      goto switchD_00a7c888_caseD_42;
    case (byte *)0x48:
      goto <gimli::arch::[f]::gimli::arch::LoongArch>_name_to_register;
    case (byte *)0x4a:
    case (byte *)0xe5:
      goto switchD_00a7c888_caseD_4a;
    case (byte *)0x4c:
    case (byte *)0xf1:
      goto switchD_00a7c888_caseD_4c;
    case (byte *)0x4e:
      goto switchD_00a7c888_caseD_4e;
    case (byte *)0x50:
      goto switchD_00a7c888_caseD_50;
    case (byte *)0x52:
      goto switchD_00a7c888_caseD_52;
    case (byte *)0x54:
      goto switchD_00a7c888_caseD_54;
    case (byte *)0x56:
      goto switchD_00a7c888_caseD_56;
    case (byte *)0x58:
    case (byte *)0xfe:
      goto switchD_00a7c888_caseD_58;
    case (byte *)0x5c:
      goto switchD_00a7c888_caseD_5c;
    case (byte *)0x5e:
      goto switchD_00a7c888_caseD_5e;
    case (byte *)0x62:
      goto switchD_00a7c888_caseD_62;
    case (byte *)0x64:
      goto switchD_00a7c888_caseD_64;
    case (byte *)0x66:
      goto switchD_00a7c888_caseD_66;
    case (byte *)0x6c:
      goto switchD_00a7c888_caseD_6c;
    case (byte *)0x6e:
      goto switchD_00a7c888_caseD_6e;
    case (byte *)0x70:
      goto switchD_00a7c888_caseD_70;
    case (byte *)0x72:
      goto switchD_00a7c888_caseD_72;
    case (byte *)0x74:
    case (byte *)0xaa:
    case (byte *)0xca:
      goto switchD_00a7c888_caseD_74;
    case (byte *)0x76:
      goto switchD_00a7c888_caseD_76;
    case (byte *)0x78:
      goto switchD_00a7c888_caseD_78;
    case (byte *)0x7a:
      bVar1 = 0x46 < (uint)pbVar9;
      bVar4 = (uint)pbVar9 == 0x47;
      goto switchD_00a7c888_caseD_4e;
    case (byte *)0x7c:
      goto switchD_00a7c888_caseD_7c;
    case (byte *)0x7e:
      goto switchD_00a7c888_caseD_7e;
    case (byte *)0x80:
      break;
    case (byte *)0x82:
      goto switchD_00a7c888_caseD_82;
    case (byte *)0x84:
      goto switchD_00a7c888_caseD_84;
    case (byte *)0x86:
      goto switchD_00a7c888_caseD_86;
    case (byte *)0x88:
      goto switchD_00a7c888_caseD_88;
    case (byte *)0x89:
    case (byte *)0xab:
      goto switchD_00a7c888_caseD_89;
    case (byte *)0x8a:
      goto switchD_00a7c888_caseD_8a;
    case (byte *)0x8c:
    case (byte *)0xce:
      goto switchD_00a7c888_caseD_8c;
    case (byte *)0x8e:
      goto switchD_00a7c888_caseD_8e;
    case (byte *)0x90:
      goto switchD_00a7c888_caseD_90;
    case (byte *)0x94:
      goto switchD_00a7c888_caseD_94;
    case (byte *)0x96:
      goto switchD_00a7c888_caseD_96;
    case (byte *)0x98:
      goto switchD_00a7c888_caseD_98;
    case (byte *)0x9a:
      goto switchD_00a7c888_caseD_9a;
    case (byte *)0x9c:
    case (byte *)0xbf:
    case (byte *)0xdb:
      goto switchD_00a7c888_caseD_9c;
    case (byte *)0x9e:
    case (byte *)0xf0:
      goto switchD_00a7c888_caseD_9e;
    case (byte *)0xa0:
      goto switchD_00a7c888_caseD_a0;
    case (byte *)0xa2:
      goto switchD_00a7c888_caseD_a2;
    case (byte *)0xa6:
    case (byte *)0xbe:
      goto switchD_00a7c888_caseD_a6;
    case (byte *)0xa8:
      goto switchD_00a7c888_caseD_a8;
    case (byte *)0xac:
    case (byte *)0xc6:
      goto switchD_00a7c888_caseD_ac;
    case (byte *)0xae:
      goto switchD_00a7c888_caseD_ae;
    case (byte *)0xb0:
      goto switchD_00a7c888_caseD_b0;
    case (byte *)0xb2:
      goto switchD_00a7c888_caseD_b2;
    case (byte *)0xb4:
      goto switchD_00a7c888_caseD_b4;
    case (byte *)0xb8:
    case (byte *)0xdf:
    case (byte *)0xe0:
    case (byte *)0xe1:
    case (byte *)0xe2:
    case (byte *)0xe7:
    case (byte *)0xe8:
    case (byte *)0xe9:
      goto switchD_00a7c888_caseD_b8;
    case (byte *)0xba:
    case (byte *)0xc0:
      goto switchD_00a7c888_caseD_ba;
    case (byte *)0xc2:
      goto switchD_00a7c888_caseD_c2;
    case (byte *)0xc4:
      goto switchD_00a7c888_caseD_c4;
    case (byte *)0xc5:
    case (byte *)0xd5:
      goto switchD_00a7c888_caseD_c5;
    case (byte *)0xc7:
      goto switchD_00a7c888_caseD_c7;
    case (byte *)0xc8:
    case (byte *)0xd1:
      goto switchD_00a7c888_caseD_c8;
    case (byte *)0xc9:
      goto switchD_00a7c888_caseD_c9;
    case (byte *)0xcb:
      goto switchD_00a7c888_caseD_cb;
    case (byte *)0xcd:
      goto switchD_00a7c888_caseD_cd;
    case (byte *)0xd0:
      goto switchD_00a7c888_caseD_d0;
    case (byte *)0xd2:
      goto switchD_00a7c888_caseD_d2;
    case (byte *)0xd3:
    case (byte *)0xe3:
      goto switchD_00a7c888_caseD_d3;
    case (byte *)0xd4:
      goto switchD_00a7c888_caseD_d4;
    case (byte *)0xd7:
      goto switchD_00a7c888_caseD_d7;
    case (byte *)0xd8:
      goto switchD_00a7c888_caseD_d8;
    case (byte *)0xd9:
      goto switchD_00a7c888_caseD_d9;
    case (byte *)0xdc:
    case (byte *)0xef:
      goto switchD_00a7c888_caseD_dc;
    case (byte *)0xea:
      goto switchD_00a7c888_caseD_ea;
    case (byte *)0xee:
      goto switchD_00a7c888_caseD_ee;
    case (byte *)0xf2:
      goto switchD_00a7c888_caseD_f2;
    case (byte *)0xf3:
      goto switchD_00a7c888_caseD_f3;
    case (byte *)0xf4:
      goto code_r0x00a7ca1c;
    case (byte *)0xf6:
      goto switchD_00a7c888_caseD_f6;
    case (byte *)0xf7:
      goto switchD_00a7c888_caseD_f7;
    case (byte *)0xf8:
      goto switchD_00a7c888_caseD_f8;
    case (byte *)0xf9:
      goto switchD_00a7c888_caseD_f9;
    case (byte *)0xfa:
      goto switchD_00a7c888_caseD_fa;
    case (byte *)0xfb:
      goto switchD_00a7c888_caseD_fb;
    case (byte *)0xfd:
      goto switchD_00a7c888_caseD_fd;
    case (byte *)0xff:
      goto switchD_00a7c888_caseD_ff;
    }
    goto switchD_00a7c888_caseD_80;
  }
switchD_00a7c888_caseD_89:
  pbVar10 = &UNK_00384000;
switchD_00a7c888_caseD_88:
  pbVar10 = pbVar10 + 0xd1f;
  pbVar15 = (byte *)(ulong)*(uint *)(param_2 + 2);
switchD_00a7c888_caseD_ae:
  pbVar11 = (byte *)0xa7c8b4;
switchD_00a7c888_caseD_1f:
  pbVar9 = (byte *)((ulong)param_3 & 0xff);
  bVar12 = pbVar9[(long)pbVar10];
  pbVar11 = pbVar11 + (ulong)bVar12 * 4;
  fVar14 = SUB84(pbVar15,0);
  bVar5 = bVar4;
  switch(pbVar11) {
  case (byte *)0xa7c8b4:
switchD_00a7c888_caseD_20:
    pbVar9 = (byte *)(long)SUB84(pbVar15,0);
  case (byte *)0xa7c8b8:
switchD_00a7c888_caseD_d9:
    break;
  case (byte *)0xa7c8bc:
switchD_00a7c8b0_caseD_a7c8bc:
    pbVar9 = &local_38;
switchD_00a7c888_caseD_74:
    param_3 = param_4;
switchD_00a7c888_caseD_d2:
    param_2 = (ushort *)FUN_00a7c788(pbVar9,param_2,param_3);
switchD_00a7c888_caseD_86:
    pbVar9 = (byte *)(ulong)local_38;
switchD_00a7c888_caseD_c7:
    bVar4 = (int)pbVar9 == 0xff;
switchD_00a7c888_caseD_d7:
    if (bVar4) {
switchD_00a7c888_caseD_cb:
switchD_00a7c888_caseD_d3:
      param_2 = puVar13;
switchD_00a7c888_caseD_c:
      goto switchD_00a7c888_caseD_b0;
    }
    pbVar10 = (byte *)((ulong)uStack_33 << 8);
switchD_00a7c888_caseD_ba:
    pbVar11 = (byte *)(ulong)uStack_37;
switchD_00a7c888_caseD_d0:
    *(char *)(param_1 + 1) = (char)pbVar9;
switchD_00a7c888_caseD_78:
    uStack_24 = (undefined3)((ulong)pbVar10 >> 8);
    pbVar10 = local_30;
switchD_00a7c888_caseD_c8:
    pbVar9 = pbVar11;
    pbVar11 = pbVar9;
switchD_00a7c888_caseD_ea:
    uStack_25 = (undefined1)((ulong)pbVar11 >> 0x18);
switchD_00a7c8b0_caseD_a7c8f0:
    param_1[2] = pbVar10;
switchD_00a7c8b0_caseD_a7c8f4:
    pbVar10 = (byte *)(ulong)CONCAT31(uStack_24,uStack_25);
switchD_00a7c888_caseD_c5:
    *(int *)((long)param_1 + 9) = (int)pbVar9;
switchD_00a7c888_caseD_4a:
    pbVar9 = &DAT_00000001;
switchD_00a7c8b0_caseD_a7c900:
    *(int *)((long)param_1 + 0xc) = (int)pbVar10;
switchD_00a7c888_caseD_a6:
    *param_1 = pbVar9;
switchD_00a7c888_caseD_e:
    goto switchD_00a7c8b0_caseD_a7ca0c;
  case (byte *)0xa7c8c4:
    goto switchD_00a7c888_caseD_d2;
  case (byte *)0xa7c8cc:
    goto switchD_00a7c888_caseD_c7;
  case (byte *)0xa7c8d0:
    goto switchD_00a7c888_caseD_d7;
  case (byte *)0xa7c8dc:
    goto switchD_00a7c888_caseD_d0;
  case (byte *)0xa7c8e0:
    goto switchD_00a7c888_caseD_78;
  case (byte *)0xa7c8e8:
    goto switchD_00a7c888_caseD_c8;
  case (byte *)0xa7c8ec:
    goto switchD_00a7c888_caseD_ea;
  case (byte *)0xa7c8f0:
    goto switchD_00a7c8b0_caseD_a7c8f0;
  case (byte *)0xa7c8f4:
    goto switchD_00a7c8b0_caseD_a7c8f4;
  case (byte *)0xa7c8f8:
    goto switchD_00a7c888_caseD_c5;
  case (byte *)0xa7c900:
    goto switchD_00a7c8b0_caseD_a7c900;
  case (byte *)0xa7c904:
    goto switchD_00a7c888_caseD_a6;
  case (byte *)0xa7c908:
    goto switchD_00a7c888_caseD_e;
  case (byte *)0xa7c910:
    goto switchD_00a7c888_caseD_cb;
  case (byte *)0xa7c914:
    goto switchD_00a7c888_caseD_d3;
  case (byte *)0xa7c920:
    goto switchD_00a7c888_caseD_9c;
  case (byte *)0xa7c924:
    goto switchD_00a7c888_caseD_d4;
  case (byte *)0xa7c92c:
    goto switchD_00a7c888_caseD_c3;
  case (byte *)0xa7c930:
switchD_00a7c888_caseD_fb:
    pbVar9 = (byte *)(ulong)(uint)(int)SUB84(pbVar15,0);
  case (byte *)0xa7c934:
switchD_00a7c888_caseD_d8:
LAB_00a7c990:
    pbVar10 = (byte *)0x7fff;
switchD_00a7c888_caseD_f7:
    uVar7 = (uint)pbVar9;
    if ((int)(uint)pbVar10 <= (int)(uint)pbVar9) {
      uVar7 = (uint)pbVar10;
    }
    pbVar9 = (byte *)(ulong)uVar7;
switchD_00a7c888_caseD_b8:
    pbVar10 = (byte *)0xffff8000;
switchD_00a7c888_caseD_3c:
    iVar8 = (int)pbVar9;
    bVar2 = SCARRY4(iVar8,0x8000);
    bVar3 = iVar8 + 0x8000 < 0;
    bVar4 = iVar8 == -0x8000;
switchD_00a7c888_caseD_14:
    uVar7 = (uint)pbVar9;
    if (bVar4 || bVar3 != bVar2) {
      uVar7 = (uint)pbVar10;
    }
    pbVar11 = (byte *)(ulong)uVar7;
switchD_00a7c888_caseD_2e:
    break;
  case (byte *)0xa7c938:
switchD_00a7c888_caseD_7:
    pbVar9 = (byte *)(long)(double)pbVar15;
  case (byte *)0xa7c93c:
switchD_00a7c888_caseD_f6:
    break;
  case (byte *)0xa7c940:
switchD_00a7c888_caseD_6c:
    pbVar9 = (byte *)(ulong)(uint)(int)SUB84(pbVar15,0);
  case (byte *)0xa7c944:
switchD_00a7c888_caseD_2c:
  case (byte *)0xa7c94c:
switchD_00a7c888_caseD_cd:
    bVar2 = SBORROW4((int)pbVar9,0x7f);
    bVar3 = (int)pbVar9 + -0x7f < 0;
switchD_00a7c888_caseD_8c:
    pbVar10 = (byte *)0x7f;
switchD_00a7c8b0_caseD_a7c954:
    uVar7 = (uint)pbVar9;
    if (bVar3 == bVar2) {
      uVar7 = (uint)pbVar10;
    }
    pbVar9 = (byte *)(ulong)uVar7;
switchD_00a7c8b0_caseD_a7c958:
    pbVar10 = (byte *)0xffffff80;
switchD_00a7c888_caseD_11:
    iVar8 = (int)pbVar9;
    bVar2 = SCARRY4(iVar8,0x80);
    bVar3 = iVar8 + 0x80 < 0;
    bVar4 = iVar8 == -0x80;
switchD_00a7c888_caseD_ee:
    bVar12 = (byte)pbVar9;
    if (bVar4 || bVar3 != bVar2) {
      bVar12 = (byte)pbVar10;
    }
switchD_00a7c8b0_caseD_a7c964:
    break;
  case (byte *)0xa7c948:
switchD_00a7c888_caseD_1:
    pbVar9 = (byte *)(ulong)(uint)(int)(double)pbVar15;
    goto switchD_00a7c888_caseD_cd;
  case (byte *)0xa7c954:
    goto switchD_00a7c8b0_caseD_a7c954;
  case (byte *)0xa7c958:
    goto switchD_00a7c8b0_caseD_a7c958;
  case (byte *)0xa7c95c:
    goto switchD_00a7c888_caseD_11;
  case (byte *)0xa7c960:
    goto switchD_00a7c888_caseD_ee;
  case (byte *)0xa7c964:
    goto switchD_00a7c8b0_caseD_a7c964;
  case (byte *)0xa7c968:
switchD_00a7c888_caseD_5:
    pbVar10 = (byte *)(ulong)(uint)(int)(double)pbVar15;
switchD_00a7c888_caseD_9e:
    goto LAB_00a7c9e0;
  case (byte *)0xa7c96c:
    goto switchD_00a7c888_caseD_9e;
  case (byte *)0xa7c970:
    pbVar9 = (byte *)(ulong)(uint)(int)fVar14;
  case (byte *)0xa7c974:
switchD_00a7c888_caseD_80:
    bVar1 = 0xfe < (uint)pbVar9;
switchD_00a7c8b0_caseD_a7c978:
    pbVar10 = (byte *)0xff;
switchD_00a7c888_caseD_4c:
    bVar12 = (byte)pbVar9;
    if (bVar1) {
      bVar12 = (byte)pbVar10;
    }
    break;
  case (byte *)0xa7c978:
    goto switchD_00a7c8b0_caseD_a7c978;
  case (byte *)0xa7c97c:
    goto switchD_00a7c888_caseD_4c;
  case (byte *)0xa7c984:
    pbVar10 = (byte *)(ulong)(uint)(int)fVar14;
  case (byte *)0xa7c988:
switchD_00a7c888_caseD_dc:
LAB_00a7c9e0:
    pbVar9 = (byte *)((ulong)param_3 & 0xff);
    break;
  case (byte *)0xa7c994:
    goto switchD_00a7c888_caseD_f7;
  case (byte *)0xa7c99c:
    goto switchD_00a7c888_caseD_b8;
  case (byte *)0xa7c9a4:
    goto switchD_00a7c888_caseD_14;
  case (byte *)0xa7c9b0:
switchD_00a7c8b0_caseD_a7c9b0:
LAB_00a7c9b8:
    pbVar10 = (byte *)0xffff;
switchD_00a7c888_caseD_15:
    bVar1 = (uint)pbVar10 <= (uint)pbVar9;
switchD_00a7c888_caseD_c9:
    uVar7 = (uint)pbVar9;
    if (bVar1) {
      uVar7 = (uint)pbVar10;
    }
    pbVar11 = (byte *)(ulong)uVar7;
    goto switchD_00a7c888_caseD_2e;
  case (byte *)0xa7c9b4:
switchD_00a7c888_caseD_10:
    pbVar9 = (byte *)(ulong)(uint)(int)SUB84(pbVar15,0);
    goto LAB_00a7c9b8;
  case (byte *)0xa7c9bc:
    goto switchD_00a7c888_caseD_15;
  case (byte *)0xa7c9c4:
    goto switchD_00a7c888_caseD_2e;
  case (byte *)0xa7c9c8:
switchD_00a7c888_caseD_9:
    pbVar15 = (byte *)(ulong)(uint)(float)(double)pbVar15;
switchD_00a7c888_caseD_c2:
    pbVar10 = (byte *)((ulong)pbVar15 & 0xffffffff);
    goto LAB_00a7c9e0;
  case (byte *)0xa7c9cc:
    goto switchD_00a7c888_caseD_c2;
  case (byte *)0xa7c9d4:
switchD_00a7c888_caseD_6:
    pbVar10 = (byte *)(ulong)(uint)(int)(double)pbVar15;
switchD_00a7c888_caseD_fd:
    goto LAB_00a7c9e0;
  case (byte *)0xa7c9dc:
switchD_00a7c888_caseD_ac:
    pbVar10 = (byte *)(ulong)(uint)(int)SUB84(pbVar15,0);
    goto LAB_00a7c9e0;
  case (byte *)0xa7c9e4:
switchD_00a7c888_caseD_f2:
    pbVar15 = (byte *)(double)SUB84(pbVar15,0);
  case (byte *)0xa7c9e8:
switchD_00a7c888_caseD_a:
    pbVar9 = pbVar15;
switchD_00a7c888_caseD_c4:
    break;
  case (byte *)0xa7c9ec:
    goto switchD_00a7c888_caseD_c4;
  case (byte *)0xa7c9f0:
    pbVar9 = (byte *)(long)fVar14;
    break;
  case (byte *)0xa7c9fc:
    goto switchD_00a7c8b0_caseD_a7c9fc;
  case (byte *)0xa7ca00:
    goto switchD_00a7c888_caseD_58;
  case (byte *)0xa7ca04:
    goto switchD_00a7c8b0_caseD_a7ca04;
  case (byte *)0xa7ca0c:
    goto switchD_00a7c8b0_caseD_a7ca0c;
  case (byte *)0xa7ca14:
    goto switchD_00a7c8b0_caseD_a7ca14;
  case (byte *)0xa7ca1c:
code_r0x00a7ca1c:
    pbVar10 = (byte *)((ulong)param_2 & 0xff);
switchD_00a7c888_caseD_5e:
    pbVar11 = &UNK_00384000;
switchD_00a7c888_caseD_66:
    pbVar11 = pbVar11 + 0xd2a;
switchD_00a7c8b0_caseD_a7ca28:
    UNRECOVERED_JUMPTABLE = (code *)0xa7ca38;
switchD_00a7c888_caseD_f8:
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)pbVar11[(long)pbVar10] * 4;
switchD_00a7c888_caseD_42:
                    /* WARNING: Could not recover jumptable at 0x00a7ca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar13 = (ushort *)(*UNRECOVERED_JUMPTABLE)();
    return puVar13;
  case (byte *)0xa7ca20:
    goto switchD_00a7c888_caseD_5e;
  case (byte *)0xa7ca28:
    goto switchD_00a7c8b0_caseD_a7ca28;
  case (byte *)0xa7ca38:
    goto switchD_00a7c888_caseD_62;
  case (byte *)0xa7ca44:
    goto switchD_00a7c8b0_caseD_a7ca44;
  case (byte *)0xa7ca48:
    goto switchD_00a7c8b0_caseD_a7ca48;
  case (byte *)0xa7ca4c:
    goto switchD_00a7c8b0_caseD_a7ca4c;
  case (byte *)0xa7ca54:
    pbVar15 = (byte *)(ulong)(uint)(float)param_3;
switchD_00a7c888_caseD_a8:
    pbVar6 = (byte *)((ulong)pbVar15 & 0xffffffff);
switchD_00a7c888_caseD_fa:
switchD_00a7c888_caseD_62:
    *(char *)(((ulong)param_3 & 0xff) + 8) = (char)param_2;
switchD_00a7c888_caseD_f9:
    *(char *)(((ulong)param_3 & 0xff) + 9) = (char)pbVar6;
    *(short *)(((ulong)param_3 & 0xff) + 10) = (short)pbVar6;
switchD_00a7c8b0_caseD_a7ca44:
    *(int *)(((ulong)param_3 & 0xff) + 0xc) = (int)pbVar6;
switchD_00a7c8b0_caseD_a7ca48:
    *(byte **)(((ulong)param_3 & 0xff) + 0x10) = pbVar6;
switchD_00a7c8b0_caseD_a7ca4c:
    *(undefined8 *)((ulong)param_3 & 0xff) = 0;
switchD_00a7c888_caseD_7c:
    return param_2;
  case (byte *)0xa7ca5c:
    goto switchD_00a7c888_caseD_fa;
  case (byte *)0xa7ca60:
    pbVar15 = (byte *)(double)param_3;
  case (byte *)0xa7ca64:
    pbVar6 = pbVar15;
    goto switchD_00a7c888_caseD_62;
  case (byte *)0xa7ca78:
    goto switchD_00a7c8b0_caseD_a7ca78;
  case (byte *)0xa7ca80:
    goto switchD_00a7c8b0_caseD_a7ca80;
  case (byte *)0xa7ca84:
    goto switchD_00a7c8b0_caseD_a7ca84;
  case (byte *)0xa7ca94:
    goto switchD_00a7c888_caseD_3e;
  case (byte *)0xa7ca98:
    goto switchD_00a7c8b0_caseD_a7ca98;
  case (byte *)0xa7ca9c:
    goto switchD_00a7c8b0_caseD_a7ca9c;
  case (byte *)0xa7caa4:
<gimli::arch::[f]::gimli::arch::LoongArch>_name_to_register:
    if (param_3 == &DAT_00000005) {
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x30) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x31) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x32) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x33) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x34) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x35) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x36) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x63636624 && (byte)param_2[2] == 0x37) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 != 0x72657a24 || (byte)param_2[2] != 0x6f) {
        if (*(int *)param_2 != 0x31746624 || (byte)param_2[2] != 0x30) {
          if (*(int *)param_2 != 0x31746624 || (byte)param_2[2] != 0x31) {
            if (*(int *)param_2 != 0x31746624 || (byte)param_2[2] != 0x32) {
              if (*(int *)param_2 != 0x31746624 || (byte)param_2[2] != 0x33) {
                if (*(int *)param_2 != 0x31746624 || (byte)param_2[2] != 0x34) {
                  if (*(int *)param_2 != 0x31746624 || (byte)param_2[2] != 0x35) {
                    return (ushort *)0x0;
                  }
LAB_00a7d814:
                  return (ushort *)&DAT_00000001;
                }
LAB_00a7d7f0:
                return (ushort *)&DAT_00000001;
              }
LAB_00a7d7cc:
              return (ushort *)&DAT_00000001;
            }
LAB_00a7d7a8:
            return (ushort *)&DAT_00000001;
          }
LAB_00a7d784:
          return (ushort *)&DAT_00000001;
        }
LAB_00a7d76c:
        return (ushort *)&DAT_00000001;
      }
      goto LAB_00a7d650;
    }
    if (param_3 == &DAT_00000004) {
      if (*(int *)param_2 == 0x30317224) goto LAB_00a7d634;
      if (*(int *)param_2 == 0x31317224) goto LAB_00a7d658;
      if (*(int *)param_2 == 0x32317224) goto LAB_00a7d67c;
      if (*(int *)param_2 == 0x33317224) goto LAB_00a7d6a0;
      if (*(int *)param_2 == 0x34317224) goto LAB_00a7d6c4;
      if (*(int *)param_2 == 0x35317224) goto LAB_00a7d6e8;
      if (*(int *)param_2 == 0x36317224) goto LAB_00a7d70c;
      if (*(int *)param_2 == 0x37317224) goto LAB_00a7d730;
      if (*(int *)param_2 == 0x38317224) goto LAB_00a7d754;
      if (*(int *)param_2 == 0x39317224) goto LAB_00a7d778;
      if (*(int *)param_2 == 0x30327224) goto LAB_00a7d790;
      if (*(int *)param_2 == 0x31327224) {
        return (ushort *)&DAT_00000001;
      }
      if (*(int *)param_2 == 0x32327224) goto LAB_00a7d7d8;
      if (*(int *)param_2 == 0x33327224) goto LAB_00a7d7fc;
      if (*(int *)param_2 == 0x34327224) goto LAB_00a7d820;
      if (*(int *)param_2 == 0x35327224) goto LAB_00a7d838;
      if (*(int *)param_2 == 0x36327224) goto LAB_00a7d850;
      if (*(int *)param_2 == 0x37327224) goto LAB_00a7d868;
      if (*(int *)param_2 == 0x38327224) goto LAB_00a7d880;
      if (*(int *)param_2 == 0x39327224) goto LAB_00a7d898;
      if (*(int *)param_2 == 0x30337224) goto LAB_00a7d8b0;
      if (*(int *)param_2 != 0x31337224) {
        if (*(int *)param_2 == 0x30316624) {
LAB_00a7d8c8:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x31316624) {
LAB_00a7d8d4:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x32316624) {
LAB_00a7d8e0:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x33316624) {
LAB_00a7d8ec:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x34316624) {
LAB_00a7d8f8:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x35316624) {
LAB_00a7d904:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x36316624) {
LAB_00a7d910:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x37316624) {
LAB_00a7d91c:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x38316624) goto LAB_00a7d76c;
        if (*(int *)param_2 == 0x39316624) goto LAB_00a7d784;
        if (*(int *)param_2 == 0x30326624) goto LAB_00a7d7a8;
        if (*(int *)param_2 == 0x31326624) goto LAB_00a7d7cc;
        if (*(int *)param_2 == 0x32326624) goto LAB_00a7d7f0;
        if (*(int *)param_2 == 0x33326624) goto LAB_00a7d814;
        if (*(int *)param_2 == 0x34326624) {
LAB_00a7d928:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x35326624) {
LAB_00a7d934:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x36326624) {
LAB_00a7d940:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x37326624) {
LAB_00a7d94c:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x38326624) {
LAB_00a7d958:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x39326624) {
LAB_00a7d964:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x30336624) {
LAB_00a7d970:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x31336624) {
LAB_00a7d498:
          return (ushort *)&DAT_00000001;
        }
        if (*(int *)param_2 == 0x30616624) goto LAB_00a7d79c;
        if (*(int *)param_2 == 0x31616624) goto LAB_00a7d7b4;
        if (*(int *)param_2 == 0x32616624) goto LAB_00a7d7e4;
        if (*(int *)param_2 == 0x33616624) goto LAB_00a7d808;
        if (*(int *)param_2 == 0x34616624) goto LAB_00a7d82c;
        if (*(int *)param_2 == 0x35616624) goto LAB_00a7d844;
        if (*(int *)param_2 == 0x36616624) goto LAB_00a7d85c;
        if (*(int *)param_2 == 0x37616624) goto LAB_00a7d874;
        if (*(int *)param_2 == 0x30746624) goto LAB_00a7d88c;
        if (*(int *)param_2 != 0x31746624) {
          if (*(int *)param_2 == 0x32746624) goto LAB_00a7d8c8;
          if (*(int *)param_2 == 0x33746624) goto LAB_00a7d8d4;
          if (*(int *)param_2 == 0x34746624) goto LAB_00a7d8e0;
          if (*(int *)param_2 == 0x35746624) goto LAB_00a7d8ec;
          if (*(int *)param_2 == 0x36746624) goto LAB_00a7d8f8;
          if (*(int *)param_2 == 0x37746624) goto LAB_00a7d904;
          if (*(int *)param_2 == 0x38746624) goto LAB_00a7d910;
          if (*(int *)param_2 == 0x39746624) goto LAB_00a7d91c;
          if (*(int *)param_2 == 0x30736624) goto LAB_00a7d928;
          if (*(int *)param_2 == 0x31736624) goto LAB_00a7d934;
          if (*(int *)param_2 == 0x32736624) goto LAB_00a7d940;
          if (*(int *)param_2 == 0x33736624) goto LAB_00a7d94c;
          if (*(int *)param_2 == 0x34736624) goto LAB_00a7d958;
          if (*(int *)param_2 == 0x35736624) goto LAB_00a7d964;
          if (*(int *)param_2 == 0x36736624) goto LAB_00a7d970;
          if (*(int *)param_2 != 0x37736624) {
            return (ushort *)0x0;
          }
          goto LAB_00a7d498;
        }
        goto LAB_00a7d8a4;
      }
      goto LAB_00a7d8bc;
    }
switchD_00a7c8b0_caseD_a7cab4:
    bVar4 = param_3 == (byte *)0x3;
switchD_00a7c888_caseD_64:
    if (!bVar4) {
      return (ushort *)0x0;
    }
switchD_00a7c8b0_caseD_a7cabc:
    pbVar10 = (byte *)(ulong)*param_2;
    pbVar11 = (byte *)(ulong)(byte)param_2[1];
    pbVar9 = (byte *)0x7224;
switchD_00a7c888_caseD_94:
    bVar4 = (int)pbVar10 == (int)pbVar9;
switchD_00a7c8b0_caseD_a7cacc:
    if (!bVar4 || (int)pbVar11 != 0x30) {
      pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_82:
      pbVar11 = (byte *)(ulong)(byte)param_2[1];
switchD_00a7c8b0_caseD_a7cae0:
      bVar4 = false;
      if ((int)pbVar10 == (int)pbVar9) {
        bVar4 = (int)pbVar11 == 0x31;
      }
switchD_00a7c888_caseD_76:
      if (!bVar4) {
switchD_00a7c8b0_caseD_a7caf0:
        pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_96:
        pbVar11 = (byte *)(ulong)(byte)param_2[1];
        pbVar9 = (byte *)0x7224;
        bVar4 = (int)pbVar10 == 0x7224;
        pbVar10 = (byte *)0x32;
switchD_00a7c8b0_caseD_a7cb04:
        if (!bVar4 || (int)pbVar11 != (int)pbVar10) {
switchD_00a7c888_caseD_38:
          pbVar10 = (byte *)(ulong)*param_2;
          goto switchD_00a7c888_caseD_98;
        }
LAB_00a7d670:
        return (ushort *)&DAT_00000001;
      }
    }
LAB_00a7d650:
    return (ushort *)&DAT_00000001;
  case (byte *)0xa7cab4:
    goto switchD_00a7c8b0_caseD_a7cab4;
  case (byte *)0xa7cabc:
    goto switchD_00a7c8b0_caseD_a7cabc;
  case (byte *)0xa7cacc:
    goto switchD_00a7c8b0_caseD_a7cacc;
  case (byte *)0xa7cae0:
    goto switchD_00a7c8b0_caseD_a7cae0;
  case (byte *)0xa7caf0:
    goto switchD_00a7c8b0_caseD_a7caf0;
  case (byte *)0xa7cb04:
    goto switchD_00a7c8b0_caseD_a7cb04;
  case (byte *)0xa7cb14:
    goto switchD_00a7c8b0_caseD_a7cb14;
  case (byte *)0xa7cb1c:
    goto switchD_00a7c8b0_caseD_a7cb1c;
  case (byte *)0xa7cb34:
    goto switchD_00a7c8b0_caseD_a7cb34;
  case (byte *)0xa7cb38:
    goto switchD_00a7c8b0_caseD_a7cb38;
  case (byte *)0xa7cb50:
    goto switchD_00a7c8b0_caseD_a7cb50;
  case (byte *)0xa7cb58:
    goto switchD_00a7c888_caseD_72;
  case (byte *)0xa7cb68:
    goto switchD_00a7c888_caseD_9a;
  case (byte *)0xa7cb80:
    goto switchD_00a7c8b0_caseD_a7cb80;
  case (byte *)0xa7cb8c:
    goto switchD_00a7c888_caseD_a2;
  case (byte *)0xa7cb90:
    goto switchD_00a7c8b0_caseD_a7cb90;
  case (byte *)0xa7cba4:
    goto switchD_00a7c8b0_caseD_a7cba4;
  case (byte *)0xa7cbb4:
    goto switchD_00a7c8b0_caseD_a7cbb4;
  case (byte *)0xa7cbbc:
    goto switchD_00a7c8b0_caseD_a7cbbc;
  case (byte *)0xa7cbd4:
    goto switchD_00a7c888_caseD_34;
  case (byte *)0xa7cbd8:
    goto switchD_00a7c8b0_caseD_a7cbd8;
  case (byte *)0xa7cbec:
    goto switchD_00a7c8b0_caseD_a7cbec;
  case (byte *)0xa7cbfc:
    goto switchD_00a7c8b0_caseD_a7cbfc;
  case (byte *)0xa7cc0c:
    goto switchD_00a7c888_caseD_8a;
  case (byte *)0xa7cc10:
    goto switchD_00a7c8b0_caseD_a7cc10;
  case (byte *)0xa7cc1c:
    goto switchD_00a7c8b0_caseD_a7cc1c;
  case (byte *)0xa7cc2c:
    goto switchD_00a7c8b0_caseD_a7cc2c;
  case (byte *)0xa7cc34:
    goto switchD_00a7c888_caseD_7e;
  case (byte *)0xa7cc3c:
    goto switchD_00a7c8b0_caseD_a7cc3c;
  case (byte *)0xa7cc5c:
    goto switchD_00a7c8b0_caseD_a7cc5c;
  case (byte *)0xa7cc60:
    goto switchD_00a7c888_caseD_30;
  case (byte *)0xa7cc70:
    goto switchD_00a7c8b0_caseD_a7cc70;
  case (byte *)0xa7cc7c:
    goto switchD_00a7c8b0_caseD_a7cc7c;
  case (byte *)0xa7cc88:
    goto switchD_00a7c8b0_caseD_a7cc88;
  case (byte *)0xa7cca0:
    goto switchD_00a7c8b0_caseD_a7cca0;
  }
switchD_00a7c888_caseD_f3:
  *(char *)(param_1 + 1) = (char)param_3;
switchD_00a7c888_caseD_36:
  *(byte *)((long)param_1 + 9) = bVar12;
switchD_00a7c8b0_caseD_a7c9fc:
  *(short *)((long)param_1 + 10) = (short)pbVar11;
switchD_00a7c888_caseD_58:
  *(int *)((long)param_1 + 0xc) = (int)pbVar10;
switchD_00a7c8b0_caseD_a7ca04:
  param_1[2] = pbVar9;
  *param_1 = 0;
switchD_00a7c8b0_caseD_a7ca0c:
switchD_00a7c888_caseD_32:
switchD_00a7c8b0_caseD_a7ca14:
  return param_2;
switchD_00a7c888_caseD_3a:
  bVar5 = (int)pbVar10 == (int)pbVar9;
switchD_00a7c8b0_caseD_a7cbb4:
  bVar4 = false;
  if (bVar5) {
    bVar4 = (int)pbVar11 == 0x39;
  }
switchD_00a7c8b0_caseD_a7cbbc:
  if (!bVar4) {
    pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_b2:
    pbVar11 = (byte *)(ulong)(byte)param_2[1];
    pbVar9 = (byte *)0x6624;
    bVar5 = (int)pbVar10 == 0x6624;
    pbVar10 = (byte *)0x30;
switchD_00a7c888_caseD_34:
    bVar4 = false;
    if (bVar5) {
      bVar4 = (int)pbVar11 == (int)pbVar10;
    }
switchD_00a7c8b0_caseD_a7cbd8:
    if (bVar4) {
LAB_00a7d79c:
      return (ushort *)&DAT_00000001;
    }
    pbVar10 = (byte *)(ulong)*param_2;
    pbVar11 = (byte *)(ulong)(byte)param_2[1];
switchD_00a7c888_caseD_54:
    bVar4 = (int)pbVar10 == (int)pbVar9;
    goto switchD_00a7c888_caseD_90;
  }
  goto LAB_00a7d760;
switchD_00a7c888_caseD_90:
  pbVar9 = (byte *)0x31;
switchD_00a7c8b0_caseD_a7cbec:
  if (bVar4 && (int)pbVar11 == (int)pbVar9) {
LAB_00a7d7b4:
    return (ushort *)&DAT_00000001;
  }
switchD_00a7c888_caseD_52:
  pbVar10 = (byte *)(ulong)*param_2;
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
switchD_00a7c8b0_caseD_a7cbfc:
  pbVar9 = (byte *)0x6624;
  bVar5 = (int)pbVar10 == 0x6624;
switchD_00a7c888_caseD_26:
  bVar4 = false;
  if (bVar5) {
    bVar4 = (int)pbVar11 == 0x32;
  }
switchD_00a7c888_caseD_8a:
  if (bVar4) {
LAB_00a7d7e4:
    return (ushort *)&DAT_00000001;
  }
switchD_00a7c8b0_caseD_a7cc10:
  pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_40:
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
  bVar4 = (int)pbVar10 == (int)pbVar9;
switchD_00a7c8b0_caseD_a7cc1c:
  if (bVar4 && (int)pbVar11 == 0x33) {
LAB_00a7d808:
    return (ushort *)&DAT_00000001;
  }
  pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c8b0_caseD_a7cc2c:
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
  pbVar9 = (byte *)0x6624;
switchD_00a7c888_caseD_7e:
  bVar4 = (int)pbVar10 == (int)pbVar9;
switchD_00a7c888_caseD_a0:
  pbVar10 = (byte *)0x34;
switchD_00a7c8b0_caseD_a7cc3c:
  if (bVar4 && (int)pbVar11 == (int)pbVar10) {
LAB_00a7d82c:
    return (ushort *)&DAT_00000001;
  }
  pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_28:
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
  bVar4 = (int)pbVar10 == (int)pbVar9;
  pbVar9 = (byte *)0x35;
  goto switchD_00a7c888_caseD_b4;
switchD_00a7c888_caseD_4e:
  if (bVar1 && !bVar4) {
switchD_00a7c8b0_caseD_a7ca9c:
    return (ushort *)0x0;
  }
switchD_00a7c8b0_caseD_a7ca78:
  pbVar9 = (byte *)((ulong)param_2 & 0xffff);
switchD_00a7c888_caseD_ff:
  pbVar10 = &UNK_0038d000;
switchD_00a7c8b0_caseD_a7ca80:
  pbVar10 = pbVar10 + 0x8a0;
switchD_00a7c8b0_caseD_a7ca84:
  pbVar11 = (byte *)(long)*(int *)(pbVar10 + (long)pbVar9 * 4);
switchD_00a7c888_caseD_70:
switchD_00a7c888_caseD_3e:
  param_2 = (ushort *)(pbVar11 + (long)pbVar10);
switchD_00a7c8b0_caseD_a7ca98:
  return param_2;
switchD_00a7c888_caseD_b0:
switchD_00a7c888_caseD_9c:
switchD_00a7c888_caseD_d4:
  puVar13 = (ushort *)switchD_00a7c888::caseD_f4(param_2);
  return puVar13;
switchD_00a7c888_caseD_84:
  bVar4 = (int)pbVar10 == (int)pbVar9;
switchD_00a7c8b0_caseD_a7cb34:
  pbVar10 = (byte *)0x34;
switchD_00a7c8b0_caseD_a7cb38:
  if (!bVar4 || (int)pbVar11 != (int)pbVar10) {
switchD_00a7c888_caseD_2a:
    pbVar11 = (byte *)(ulong)(byte)param_2[1];
    bVar4 = (uint)*param_2 == (uint)pbVar9;
    pbVar9 = (byte *)0x35;
switchD_00a7c8b0_caseD_a7cb50:
    if (!bVar4 || (int)pbVar11 != (int)pbVar9) {
switchD_00a7c888_caseD_72:
      pbVar10 = (byte *)(ulong)*param_2;
      pbVar11 = (byte *)(ulong)(byte)param_2[1];
      pbVar9 = (byte *)0x7224;
switchD_00a7c888_caseD_5c:
      bVar4 = (int)pbVar10 == (int)pbVar9;
switchD_00a7c888_caseD_9a:
      if (!bVar4 || (int)pbVar11 != 0x36) {
        pbVar10 = (byte *)(ulong)*param_2;
        pbVar11 = (byte *)(ulong)(byte)param_2[1];
switchD_00a7c888_caseD_6e:
        bVar4 = (int)pbVar10 == (int)pbVar9;
switchD_00a7c8b0_caseD_a7cb80:
        if (!bVar4 || (int)pbVar11 != 0x37) {
switchD_00a7c888_caseD_a2:
          pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c8b0_caseD_a7cb90:
          pbVar11 = (byte *)(ulong)(byte)param_2[1];
switchD_00a7c888_caseD_56:
          pbVar9 = (byte *)0x7224;
          bVar4 = false;
          if ((int)pbVar10 == 0x7224) {
            bVar4 = (int)pbVar11 == 0x38;
          }
switchD_00a7c8b0_caseD_a7cba4:
          if (!bVar4) {
            pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_8e:
            pbVar11 = (byte *)(ulong)(byte)param_2[1];
            goto switchD_00a7c888_caseD_3a;
          }
LAB_00a7d748:
          return (ushort *)&DAT_00000001;
        }
LAB_00a7d724:
        return (ushort *)&DAT_00000001;
      }
LAB_00a7d700:
      return (ushort *)&DAT_00000001;
    }
LAB_00a7d6dc:
    return (ushort *)&DAT_00000001;
  }
LAB_00a7d6b8:
  return (ushort *)&DAT_00000001;
switchD_00a7c888_caseD_98:
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
switchD_00a7c8b0_caseD_a7cb14:
  bVar4 = (int)pbVar10 == (int)pbVar9;
  pbVar9 = (byte *)0x33;
switchD_00a7c8b0_caseD_a7cb1c:
  if (!bVar4 || (int)pbVar11 != (int)pbVar9) {
    pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_50:
    pbVar11 = (byte *)(ulong)(byte)param_2[1];
    pbVar9 = (byte *)0x7224;
    goto switchD_00a7c888_caseD_84;
  }
LAB_00a7d694:
  return (ushort *)&DAT_00000001;
switchD_00a7c888_caseD_b4:
  if (bVar4 && (int)pbVar11 == (int)pbVar9) {
LAB_00a7d844:
    return (ushort *)&DAT_00000001;
  }
switchD_00a7c8b0_caseD_a7cc5c:
  pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c888_caseD_30:
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
  pbVar9 = (byte *)0x6624;
  bVar4 = (int)pbVar10 == 0x6624;
  pbVar10 = (byte *)0x36;
switchD_00a7c8b0_caseD_a7cc70:
  if (bVar4 && (int)pbVar11 == (int)pbVar10) {
LAB_00a7d85c:
    return (ushort *)&DAT_00000001;
  }
switchD_00a7c888_caseD_24:
  pbVar10 = (byte *)(ulong)*param_2;
switchD_00a7c8b0_caseD_a7cc7c:
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
  bVar4 = (int)pbVar10 == (int)pbVar9;
  pbVar9 = (byte *)0x37;
switchD_00a7c8b0_caseD_a7cc88:
  if (bVar4 && (int)pbVar11 == (int)pbVar9) {
LAB_00a7d874:
    return (ushort *)&DAT_00000001;
  }
  pbVar11 = (byte *)(ulong)(byte)param_2[1];
  pbVar9 = (byte *)0x6624;
  bVar4 = *param_2 == 0x6624;
switchD_00a7c8b0_caseD_a7cca0:
  if (bVar4 && (int)pbVar11 == 0x38) {
LAB_00a7d88c:
    return (ushort *)&DAT_00000001;
  }
  if ((uint)*param_2 == (uint)pbVar9 && (byte)param_2[1] == 0x39) {
LAB_00a7d8a4:
    return (ushort *)&DAT_00000001;
  }
  if (*param_2 == 0x7224 && (byte)param_2[1] == 0x61) goto LAB_00a7d650;
  if (*param_2 == 0x7424 && (byte)param_2[1] == 0x70) goto LAB_00a7d670;
  if (*param_2 == 0x7324 && (byte)param_2[1] == 0x70) goto LAB_00a7d694;
  if (*param_2 == 0x6124 && (byte)param_2[1] == 0x30) goto LAB_00a7d6b8;
  if (*param_2 == 0x6124 && (byte)param_2[1] == 0x31) goto LAB_00a7d6dc;
  if (*param_2 == 0x6124 && (byte)param_2[1] == 0x32) goto LAB_00a7d700;
  if (*param_2 == 0x6124 && (byte)param_2[1] == 0x33) goto LAB_00a7d724;
  if (*param_2 == 0x6124 && (byte)param_2[1] == 0x34) goto LAB_00a7d748;
  if (*param_2 != 0x6124 || (byte)param_2[1] != 0x35) {
    if (*param_2 == 0x6124 && (byte)param_2[1] == 0x36) {
LAB_00a7d634:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x6124 && (byte)param_2[1] == 0x37) {
LAB_00a7d658:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x30) {
LAB_00a7d67c:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x31) {
LAB_00a7d6a0:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x32) {
LAB_00a7d6c4:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x33) {
LAB_00a7d6e8:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x34) {
LAB_00a7d70c:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x35) {
LAB_00a7d730:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x36) {
LAB_00a7d754:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x37) {
LAB_00a7d778:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7424 && (byte)param_2[1] == 0x38) {
LAB_00a7d790:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x6624 && (byte)param_2[1] == 0x70) {
LAB_00a7d7d8:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x30) {
LAB_00a7d7fc:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x31) {
LAB_00a7d820:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x32) {
LAB_00a7d838:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x33) {
LAB_00a7d850:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x34) {
LAB_00a7d868:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x35) {
LAB_00a7d880:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x36) {
LAB_00a7d898:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 == 0x7324 && (byte)param_2[1] == 0x37) {
LAB_00a7d8b0:
      return (ushort *)&DAT_00000001;
    }
    if (*param_2 != 0x7324 || (byte)param_2[1] != 0x38) {
      return (ushort *)0x0;
    }
LAB_00a7d8bc:
    return (ushort *)&DAT_00000001;
  }
LAB_00a7d760:
  return (ushort *)&DAT_00000001;
}


// ===== 00a7ca1c  switchD_00a7c888::caseD_f4 =====

undefined1  [16]
switchD_00a7c888::caseD_f4(undefined8 *param_1,double param_2,uint *param_3,double param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  undefined *puVar8;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  
  puVar6 = (undefined *)((ulong)param_3 & 0xff);
  pbVar7 = &switchD_00a7ca34::switchdataD_00384d2a;
  puVar8 = (undefined *)
           ((ulong)(&switchD_00a7ca34::switchdataD_00384d2a)[(long)puVar6] * 4 + 0xa7ca38);
  uVar3 = in_ZR;
  switch(puVar6) {
  case (undefined *)0x9:
  case (undefined *)0x2e:
    param_4 = (double)(ulong)(uint)(float)(ulong)param_4;
    break;
  case (undefined *)0xa:
  case (undefined *)0xb6:
    param_2 = (double)(ulong)param_4;
  case (undefined *)0xc3:
  case (undefined *)0xec:
  case (undefined *)0xed:
  case (undefined *)0xee:
  case (undefined *)0xef:
  case (undefined *)0xf0:
  case (undefined *)0xf3:
  case (undefined *)0xf4:
  case (undefined *)0xf5:
  case (undefined *)0xf6:
  case (undefined *)0xf7:
  case (undefined *)0xf8:
  case (undefined *)0xf9:
  case (undefined *)0xfa:
  case (undefined *)0xfb:
  case (undefined *)0xfc:
  case (undefined *)0xfd:
  case (undefined *)0xfe:
  case (undefined *)0xff:
    param_4 = param_2;
    break;
  case (undefined *)0xe:
  case (undefined *)0xa0:
    goto switchD_00a7ca34_caseD_e;
  case (undefined *)0x10:
    goto switchD_00a7ca34_caseD_10;
  case (undefined *)0x12:
    goto switchD_00a7ca34_caseD_12;
  case (undefined *)0x14:
  case (undefined *)0x44:
    goto switchD_00a7ca34_caseD_14;
  case (undefined *)0x16:
  case (undefined *)0xc0:
  case (undefined *)0xc8:
    goto switchD_00a7c8b0_caseD_a7caf0;
  case (undefined *)0x17:
  case (undefined *)0x19:
  case (undefined *)0x1d:
  case (undefined *)0x21:
  case (undefined *)0x27:
  case (undefined *)0x2f:
  case (undefined *)0x31:
  case (undefined *)0x33:
  case (undefined *)0x35:
  case (undefined *)0x37:
  case (undefined *)0x39:
  case (undefined *)0x3b:
  case (undefined *)0x41:
  case (undefined *)0x45:
  case (undefined *)0x47:
  case (undefined *)0x49:
  case (undefined *)0x4a:
  case (undefined *)0x4b:
  case (undefined *)0x4d:
  case (undefined *)0x59:
  case (undefined *)0x5b:
  case (undefined *)0x5f:
  case (undefined *)0x61:
  case (undefined *)0x67:
  case (undefined *)0x69:
  case (undefined *)0x75:
  case (undefined *)0x79:
  case (undefined *)0x7b:
  case (undefined *)0x7f:
  case (undefined *)0x83:
  case (undefined *)0x87:
  case (undefined *)0x89:
  case (undefined *)0x8f:
  case (undefined *)0x9d:
  case (undefined *)0x9f:
  case (undefined *)0xa1:
  case (undefined *)0xa5:
    goto switchD_00a7c888_caseD_f9;
  case (undefined *)0x18:
  case (undefined *)0x54:
    goto switchD_00a7ca34_caseD_18;
  case (undefined *)0x1a:
    goto switchD_00a7ca34_caseD_1a;
  case (undefined *)0x1c:
    goto switchD_00a7c8b0_caseD_a7cbbc;
  case (undefined *)0x1e:
    goto switchD_00a7ca34_caseD_1e;
  case (undefined *)0x20:
  case (undefined *)0xa7:
    goto switchD_00a7c8b0_caseD_a7cba4;
  case (undefined *)0x22:
    goto switchD_00a7ca34_caseD_22;
  case (undefined *)0x24:
    goto switchD_00a7ca34_caseD_24;
  case (undefined *)0x26:
  case (undefined *)0xd6:
    goto switchD_00a7ca34_caseD_26;
  case (undefined *)0x28:
    goto switchD_00a7ca34_caseD_28;
  case (undefined *)0x2a:
    goto switchD_00a7ca34_caseD_2a;
  case (undefined *)0x2c:
    goto switchD_00a7ca34_caseD_2c;
  case (undefined *)0x30:
    goto switchD_00a7c8b0_caseD_a7cb80;
  case (undefined *)0x32:
    goto switchD_00a7ca34_caseD_32;
  case (undefined *)0x34:
  case (undefined *)0xcf:
    goto switchD_00a7ca34_caseD_34;
  case (undefined *)0x36:
  case (undefined *)0xdb:
    goto switchD_00a7c888_caseD_50;
  case (undefined *)0x38:
    goto switchD_00a7ca34_caseD_38;
  case (undefined *)0x3a:
    goto switchD_00a7ca34_caseD_3a;
  case (undefined *)0x3c:
    goto switchD_00a7ca34_caseD_3c;
  case (undefined *)0x3e:
    goto switchD_00a7ca34_caseD_3e;
  case (undefined *)0x40:
    goto switchD_00a7ca34_caseD_40;
  case (undefined *)0x42:
  case (undefined *)0xe8:
    goto switchD_00a7c888_caseD_8e;
  case (undefined *)0x46:
    goto switchD_00a7ca34_caseD_46;
  case (undefined *)0x48:
    goto switchD_00a7ca34_caseD_48;
  case (undefined *)0x4c:
    goto switchD_00a7c888_caseD_54;
  case (undefined *)0x4e:
    goto switchD_00a7ca34_caseD_4e;
  case (undefined *)0x50:
    goto switchD_00a7ca34_caseD_50;
  case (undefined *)0x52:
    goto switchD_00a7c888_caseD_72;
  case (undefined *)0x56:
    goto switchD_00a7c888_caseD_76;
  case (undefined *)0x58:
    goto switchD_00a7ca34_caseD_58;
  case (undefined *)0x5a:
    goto switchD_00a7c888_caseD_a0;
  case (undefined *)0x5c:
    goto switchD_00a7ca34_caseD_5c;
  case (undefined *)0x5e:
  case (undefined *)0x94:
  case (undefined *)0xb4:
    param_1 = (undefined8 *)(ulong)((uint)param_3 & 0xffff);
  case (undefined *)0xbc:
    in_CY = 0x46 < (uint)param_1;
    in_ZR = (uint)param_1 == 0x47;
switchD_00a7c888_caseD_4e:
    if ((bool)in_CY && !(bool)in_ZR) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_4;
      return auVar1 << 0x40;
    }
switchD_00a7c8b0_caseD_a7ca78:
    param_1 = (undefined8 *)((ulong)param_3 & 0xffff);
switchD_00a7c888_caseD_ff:
    puVar6 = &DAT_0038d8a0;
switchD_00a7c8b0_caseD_a7ca84:
    pbVar7 = (byte *)(long)*(int *)(puVar6 + (long)param_1 * 4);
switchD_00a7ca34_caseD_ba:
    puVar8 = &UNK_0038d000;
switchD_00a7c888_caseD_70:
    param_4 = *(double *)(puVar8 + (long)param_1 * 8 + 0x660);
switchD_00a7c888_caseD_3e:
    param_3 = (uint *)(puVar6 + (long)pbVar7);
switchD_00a7c8b0_caseD_a7ca98:
    auVar10._8_8_ = param_4;
    auVar10._0_8_ = param_3;
    return auVar10;
  case (undefined *)0x60:
    goto switchD_00a7ca34_caseD_60;
  case (undefined *)0x62:
    goto switchD_00a7c888_caseD_70;
  case (undefined *)0x64:
    goto switchD_00a7c8b0_caseD_a7cc1c;
  case (undefined *)0x66:
    goto switchD_00a7c8b0_caseD_a7cbfc;
  case (undefined *)0x68:
    goto switchD_00a7ca34_caseD_68;
  case (undefined *)0x6a:
    goto switchD_00a7ca34_caseD_6a;
  case (undefined *)0x6c:
    goto switchD_00a7c8b0_caseD_a7cc88;
  case (undefined *)0x6e:
    goto switchD_00a7ca34_caseD_6e;
  case (undefined *)0x70:
    goto switchD_00a7c888_caseD_4e;
  case (undefined *)0x72:
    goto switchD_00a7c8b0_caseD_a7ca48;
  case (undefined *)0x73:
  case (undefined *)0x95:
    goto switchD_00a7ca34_caseD_73;
  case (undefined *)0x74:
    goto switchD_00a7ca34_caseD_74;
  case (undefined *)0x76:
  case (undefined *)0xb8:
    goto switchD_00a7ca34_caseD_76;
  case (undefined *)0x78:
    goto switchD_00a7ca34_caseD_78;
  case (undefined *)0x7a:
    goto switchD_00a7ca34_caseD_7a;
  case (undefined *)0x7c:
    goto switchD_00a7c8b0_caseD_a7cb38;
  case (undefined *)0x7e:
    goto switchD_00a7ca34_caseD_7e;
  case (undefined *)0x80:
    goto switchD_00a7c8b0_caseD_a7cca0;
  case (undefined *)0x82:
    goto switchD_00a7ca34_caseD_82;
  case (undefined *)0x84:
    goto switchD_00a7ca34_caseD_84;
  case (undefined *)0x86:
  case (undefined *)0xa9:
  case (undefined *)0xc5:
    goto switchD_00a7c8b0_caseD_a7cacc;
  case (undefined *)0x88:
  case (undefined *)0xda:
    goto switchD_00a7ca34_caseD_88;
  case (undefined *)0x8a:
    goto switchD_00a7ca34_caseD_8a;
  case (undefined *)0x8c:
    goto switchD_00a7ca34_caseD_8c;
  case (undefined *)0x8e:
  case (undefined *)0xab:
    goto switchD_00a7ca34_caseD_8e;
  case (undefined *)0x90:
  case (undefined *)0xa8:
    goto switchD_00a7ca34_caseD_90;
  case (undefined *)0x92:
    goto switchD_00a7c888_caseD_26;
  case (undefined *)0x96:
  case (undefined *)0xb0:
    goto switchD_00a7ca34_caseD_96;
  case (undefined *)0x98:
    goto switchD_00a7c888_caseD_7c;
  case (undefined *)0x9a:
    goto switchD_00a7c888_caseD_94;
  case (undefined *)0x9c:
    goto switchD_00a7ca34_caseD_9c;
  case (undefined *)0x9e:
    goto switchD_00a7ca34_caseD_9e;
  case (undefined *)0xa2:
  case (undefined *)0xc9:
  case (undefined *)0xca:
  case (undefined *)0xcb:
  case (undefined *)0xcc:
  case (undefined *)0xd1:
  case (undefined *)0xd2:
  case (undefined *)0xd3:
    goto switchD_00a7ca34_caseD_a2;
  case (undefined *)0xa4:
  case (undefined *)0xaa:
    goto switchD_00a7c8b0_caseD_a7ca84;
  case (undefined *)0xac:
    goto switchD_00a7ca34_caseD_ac;
  case (undefined *)0xad:
  case (undefined *)0xd0:
    goto switchD_00a7ca34_caseD_ad;
  case (undefined *)0xae:
    goto switchD_00a7ca34_caseD_ae;
  case (undefined *)0xaf:
  case (undefined *)0xbf:
    in_ZR = param_4 == 2.47032822920623e-323;
switchD_00a7ca34_caseD_34:
    if ((bool)in_ZR) {
      if (*param_3 == 0x63636624 && (char)param_3[1] == '0') {
        auVar13._8_8_ = 0x40;
        auVar13._0_8_ = 1;
        return auVar13;
      }
      if (*param_3 == 0x63636624 && (char)param_3[1] == '1') {
        auVar16._8_8_ = 0x41;
        auVar16._0_8_ = 1;
        return auVar16;
      }
      if (*param_3 == 0x63636624 && (char)param_3[1] == '2') {
        auVar19._8_8_ = 0x42;
        auVar19._0_8_ = 1;
        return auVar19;
      }
      if (*param_3 == 0x63636624 && (char)param_3[1] == '3') {
        auVar22._8_8_ = 0x43;
        auVar22._0_8_ = 1;
        return auVar22;
      }
      if (*param_3 == 0x63636624 && (char)param_3[1] == '4') {
        auVar25._8_8_ = 0x44;
        auVar25._0_8_ = 1;
        return auVar25;
      }
      if (*param_3 == 0x63636624 && (char)param_3[1] == '5') {
        auVar28._8_8_ = 0x45;
        auVar28._0_8_ = 1;
        return auVar28;
      }
      if (*param_3 == 0x63636624 && (char)param_3[1] == '6') {
        auVar31._8_8_ = 0x46;
        auVar31._0_8_ = 1;
        return auVar31;
      }
      if (*param_3 == 0x63636624 && (char)param_3[1] == '7') {
        auVar34._8_8_ = 0x47;
        auVar34._0_8_ = 1;
        return auVar34;
      }
      if (*param_3 != 0x72657a24 || (char)param_3[1] != 'o') {
        if (*param_3 == 0x31746624 && (char)param_3[1] == '0') {
LAB_00a7d76c:
          auVar38._8_8_ = 0x32;
          auVar38._0_8_ = 1;
          return auVar38;
        }
        if (*param_3 == 0x31746624 && (char)param_3[1] == '1') {
LAB_00a7d784:
          auVar40._8_8_ = 0x33;
          auVar40._0_8_ = 1;
          return auVar40;
        }
        if (*param_3 == 0x31746624 && (char)param_3[1] == '2') {
LAB_00a7d7a8:
          auVar43._8_8_ = 0x34;
          auVar43._0_8_ = 1;
          return auVar43;
        }
        if (*param_3 == 0x31746624 && (char)param_3[1] == '3') {
LAB_00a7d7cc:
          auVar46._8_8_ = 0x35;
          auVar46._0_8_ = 1;
          return auVar46;
        }
        if (*param_3 == 0x31746624 && (char)param_3[1] == '4') {
LAB_00a7d7f0:
          auVar49._8_8_ = 0x36;
          auVar49._0_8_ = 1;
          return auVar49;
        }
        if (*param_3 == 0x31746624 && (char)param_3[1] == '5') {
LAB_00a7d814:
          auVar52._8_8_ = 0x37;
          auVar52._0_8_ = 1;
          return auVar52;
        }
LAB_00a7d624:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_4;
        return auVar2 << 0x40;
      }
    }
    else {
      in_ZR = param_4 == 1.97626258336499e-323;
switchD_00a7ca34_caseD_90:
      if ((bool)in_ZR) {
        if (*param_3 == 0x30317224) {
LAB_00a7d634:
          auVar12._8_8_ = 10;
          auVar12._0_8_ = 1;
          return auVar12;
        }
        if (*param_3 == 0x31317224) {
LAB_00a7d658:
          auVar15._8_8_ = 0xb;
          auVar15._0_8_ = 1;
          return auVar15;
        }
        if (*param_3 == 0x32317224) {
LAB_00a7d67c:
          auVar18._8_8_ = 0xc;
          auVar18._0_8_ = 1;
          return auVar18;
        }
        if (*param_3 == 0x33317224) {
LAB_00a7d6a0:
          auVar21._8_8_ = 0xd;
          auVar21._0_8_ = 1;
          return auVar21;
        }
        if (*param_3 == 0x34317224) {
LAB_00a7d6c4:
          auVar24._8_8_ = 0xe;
          auVar24._0_8_ = 1;
          return auVar24;
        }
        if (*param_3 == 0x35317224) {
LAB_00a7d6e8:
          auVar27._8_8_ = 0xf;
          auVar27._0_8_ = 1;
          return auVar27;
        }
        if (*param_3 == 0x36317224) {
LAB_00a7d70c:
          auVar30._8_8_ = 0x10;
          auVar30._0_8_ = 1;
          return auVar30;
        }
        if (*param_3 == 0x37317224) {
LAB_00a7d730:
          auVar33._8_8_ = 0x11;
          auVar33._0_8_ = 1;
          return auVar33;
        }
        if (*param_3 == 0x38317224) {
LAB_00a7d754:
          auVar36._8_8_ = 0x12;
          auVar36._0_8_ = 1;
          return auVar36;
        }
        if (*param_3 == 0x39317224) {
LAB_00a7d778:
          auVar39._8_8_ = 0x13;
          auVar39._0_8_ = 1;
          return auVar39;
        }
        if (*param_3 == 0x30327224) {
LAB_00a7d790:
          auVar41._8_8_ = 0x14;
          auVar41._0_8_ = 1;
          return auVar41;
        }
        if (*param_3 == 0x31327224) {
          auVar45._8_8_ = 0x15;
          auVar45._0_8_ = 1;
          return auVar45;
        }
        if (*param_3 == 0x32327224) {
LAB_00a7d7d8:
          auVar47._8_8_ = 0x16;
          auVar47._0_8_ = 1;
          return auVar47;
        }
        if (*param_3 == 0x33327224) {
LAB_00a7d7fc:
          auVar50._8_8_ = 0x17;
          auVar50._0_8_ = 1;
          return auVar50;
        }
        if (*param_3 == 0x34327224) {
LAB_00a7d820:
          auVar53._8_8_ = 0x18;
          auVar53._0_8_ = 1;
          return auVar53;
        }
        if (*param_3 == 0x35327224) {
LAB_00a7d838:
          auVar55._8_8_ = 0x19;
          auVar55._0_8_ = 1;
          return auVar55;
        }
        if (*param_3 == 0x36327224) {
LAB_00a7d850:
          auVar57._8_8_ = 0x1a;
          auVar57._0_8_ = 1;
          return auVar57;
        }
        if (*param_3 == 0x37327224) {
LAB_00a7d868:
          auVar59._8_8_ = 0x1b;
          auVar59._0_8_ = 1;
          return auVar59;
        }
        if (*param_3 == 0x38327224) {
LAB_00a7d880:
          auVar61._8_8_ = 0x1c;
          auVar61._0_8_ = 1;
          return auVar61;
        }
        if (*param_3 == 0x39327224) {
LAB_00a7d898:
          auVar63._8_8_ = 0x1d;
          auVar63._0_8_ = 1;
          return auVar63;
        }
        if (*param_3 == 0x30337224) {
LAB_00a7d8b0:
          auVar65._8_8_ = 0x1e;
          auVar65._0_8_ = 1;
          return auVar65;
        }
        if (*param_3 == 0x31337224) {
LAB_00a7d8bc:
          auVar66._8_8_ = 0x1f;
          auVar66._0_8_ = 1;
          return auVar66;
        }
        if (*param_3 == 0x30316624) {
LAB_00a7d8c8:
          auVar67._8_8_ = 0x2a;
          auVar67._0_8_ = 1;
          return auVar67;
        }
        if (*param_3 == 0x31316624) {
LAB_00a7d8d4:
          auVar68._8_8_ = 0x2b;
          auVar68._0_8_ = 1;
          return auVar68;
        }
        if (*param_3 == 0x32316624) {
LAB_00a7d8e0:
          auVar69._8_8_ = 0x2c;
          auVar69._0_8_ = 1;
          return auVar69;
        }
        if (*param_3 == 0x33316624) {
LAB_00a7d8ec:
          auVar70._8_8_ = 0x2d;
          auVar70._0_8_ = 1;
          return auVar70;
        }
        if (*param_3 == 0x34316624) {
LAB_00a7d8f8:
          auVar71._8_8_ = 0x2e;
          auVar71._0_8_ = 1;
          return auVar71;
        }
        if (*param_3 == 0x35316624) {
LAB_00a7d904:
          auVar72._8_8_ = 0x2f;
          auVar72._0_8_ = 1;
          return auVar72;
        }
        if (*param_3 == 0x36316624) {
LAB_00a7d910:
          auVar73._8_8_ = 0x30;
          auVar73._0_8_ = 1;
          return auVar73;
        }
        if (*param_3 == 0x37316624) {
LAB_00a7d91c:
          auVar74._8_8_ = 0x31;
          auVar74._0_8_ = 1;
          return auVar74;
        }
        if (*param_3 == 0x38316624) goto LAB_00a7d76c;
        if (*param_3 == 0x39316624) goto LAB_00a7d784;
        if (*param_3 == 0x30326624) goto LAB_00a7d7a8;
        if (*param_3 == 0x31326624) goto LAB_00a7d7cc;
        if (*param_3 == 0x32326624) goto LAB_00a7d7f0;
        if (*param_3 == 0x33326624) goto LAB_00a7d814;
        if (*param_3 != 0x34326624) {
          if (*param_3 == 0x35326624) {
LAB_00a7d934:
            auVar76._8_8_ = 0x39;
            auVar76._0_8_ = 1;
            return auVar76;
          }
          if (*param_3 == 0x36326624) {
LAB_00a7d940:
            auVar77._8_8_ = 0x3a;
            auVar77._0_8_ = 1;
            return auVar77;
          }
          if (*param_3 == 0x37326624) {
LAB_00a7d94c:
            auVar78._8_8_ = 0x3b;
            auVar78._0_8_ = 1;
            return auVar78;
          }
          if (*param_3 == 0x38326624) {
LAB_00a7d958:
            auVar79._8_8_ = 0x3c;
            auVar79._0_8_ = 1;
            return auVar79;
          }
          if (*param_3 == 0x39326624) {
LAB_00a7d964:
            auVar80._8_8_ = 0x3d;
            auVar80._0_8_ = 1;
            return auVar80;
          }
          if (*param_3 == 0x30336624) {
LAB_00a7d970:
            auVar81._8_8_ = 0x3e;
            auVar81._0_8_ = 1;
            return auVar81;
          }
          if (*param_3 != 0x31336624) {
            if (*param_3 == 0x30616624) goto LAB_00a7d79c;
            if (*param_3 == 0x31616624) goto LAB_00a7d7b4;
            if (*param_3 == 0x32616624) goto LAB_00a7d7e4;
            if (*param_3 == 0x33616624) goto LAB_00a7d808;
            if (*param_3 == 0x34616624) goto LAB_00a7d82c;
            if (*param_3 == 0x35616624) goto LAB_00a7d844;
            if (*param_3 == 0x36616624) goto LAB_00a7d85c;
            if (*param_3 == 0x37616624) goto LAB_00a7d874;
            if (*param_3 == 0x30746624) goto LAB_00a7d88c;
            if (*param_3 == 0x31746624) goto LAB_00a7d8a4;
            if (*param_3 == 0x32746624) goto LAB_00a7d8c8;
            if (*param_3 == 0x33746624) goto LAB_00a7d8d4;
            if (*param_3 == 0x34746624) goto LAB_00a7d8e0;
            if (*param_3 == 0x35746624) goto LAB_00a7d8ec;
            if (*param_3 == 0x36746624) goto LAB_00a7d8f8;
            if (*param_3 == 0x37746624) goto LAB_00a7d904;
            param_4 = (double)(ulong)*param_3;
            if (*param_3 == 0x38746624) goto LAB_00a7d910;
            if (*param_3 == 0x39746624) goto LAB_00a7d91c;
            if (*param_3 == 0x30736624) goto LAB_00a7d928;
            if (*param_3 == 0x31736624) goto LAB_00a7d934;
            if (*param_3 == 0x32736624) goto LAB_00a7d940;
            if (*param_3 == 0x33736624) goto LAB_00a7d94c;
            if (*param_3 == 0x34736624) goto LAB_00a7d958;
            if (*param_3 == 0x35736624) goto LAB_00a7d964;
            if (*param_3 == 0x36736624) goto LAB_00a7d970;
            if (*param_3 != 0x37736624) goto LAB_00a7d624;
          }
          auVar11._8_8_ = 0x3f;
          auVar11._0_8_ = 1;
          return auVar11;
        }
LAB_00a7d928:
        auVar75._8_8_ = 0x38;
        auVar75._0_8_ = 1;
        return auVar75;
      }
switchD_00a7c8b0_caseD_a7cab4:
      in_ZR = param_4 == 1.48219693752374e-323;
switchD_00a7c888_caseD_64:
      if (!(bool)in_ZR) goto LAB_00a7d624;
switchD_00a7c8b0_caseD_a7cabc:
      puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7ca34_caseD_bd:
      pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
      param_1 = (undefined8 *)0x7224;
switchD_00a7c888_caseD_94:
      in_ZR = (int)puVar6 == (int)param_1;
switchD_00a7c8b0_caseD_a7cacc:
      puVar6 = (undefined *)0x30;
switchD_00a7ca34_caseD_be:
      if (!(bool)in_ZR || (int)pbVar7 != (int)puVar6) {
switchD_00a7ca34_caseD_ad:
        puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7c888_caseD_82:
        pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7c8b0_caseD_a7cae0:
        in_ZR = (int)puVar6 == (int)param_1;
switchD_00a7ca34_caseD_c7:
        param_1 = (undefined8 *)0x31;
        uVar3 = in_ZR;
switchD_00a7ca34_caseD_e0:
        in_ZR = false;
        if ((bool)uVar3) {
          in_ZR = (int)pbVar7 == (int)param_1;
        }
switchD_00a7c888_caseD_76:
        if (!(bool)in_ZR) {
switchD_00a7c8b0_caseD_a7caf0:
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7c888_caseD_96:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_b7:
          param_1 = (undefined8 *)0x7224;
switchD_00a7ca34_caseD_76:
          uVar3 = (int)puVar6 == (int)param_1;
switchD_00a7ca34_caseD_ea:
          in_ZR = false;
          if ((bool)uVar3) {
            in_ZR = (int)pbVar7 == 0x32;
          }
switchD_00a7ca34_caseD_8e:
          if ((bool)in_ZR) {
LAB_00a7d670:
            auVar17._8_8_ = 2;
            auVar17._0_8_ = 1;
            return auVar17;
          }
switchD_00a7c888_caseD_38:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          uVar3 = (uint)(ushort)*param_3 == (uint)param_1;
switchD_00a7ca34_caseD_88:
          in_ZR = false;
          if ((bool)uVar3) {
            in_ZR = (int)pbVar7 == 0x33;
          }
switchD_00a7ca34_caseD_6a:
          if ((bool)in_ZR) {
LAB_00a7d694:
            auVar20._8_8_ = 3;
            auVar20._0_8_ = 1;
            return auVar20;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7c888_caseD_50:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          param_1 = (undefined8 *)0x7224;
          in_ZR = (int)puVar6 == 0x7224;
switchD_00a7c8b0_caseD_a7cb34:
          puVar6 = (undefined *)0x34;
switchD_00a7c8b0_caseD_a7cb38:
          if ((bool)in_ZR && (int)pbVar7 == (int)puVar6) {
LAB_00a7d6b8:
            auVar23._8_8_ = 4;
            auVar23._0_8_ = 1;
            return auVar23;
          }
switchD_00a7c888_caseD_2a:
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_a2:
          in_ZR = (int)puVar6 == (int)param_1;
switchD_00a7ca34_caseD_26:
          if ((bool)in_ZR && (int)pbVar7 == 0x35) {
LAB_00a7d6dc:
            auVar26._8_8_ = 5;
            auVar26._0_8_ = 1;
            return auVar26;
          }
switchD_00a7c888_caseD_72:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          param_1 = (undefined8 *)0x7224;
          in_ZR = (short)*param_3 == 0x7224;
switchD_00a7c888_caseD_9a:
          puVar6 = (undefined *)0x36;
          uVar3 = in_ZR;
switchD_00a7ca34_caseD_b3:
          in_ZR = false;
          if ((bool)uVar3) {
            in_ZR = (int)pbVar7 == (int)puVar6;
          }
switchD_00a7ca34_caseD_18:
          if ((bool)in_ZR) {
LAB_00a7d700:
            auVar29._8_8_ = 6;
            auVar29._0_8_ = 1;
            return auVar29;
          }
switchD_00a7ca34_caseD_d7:
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7ca34_caseD_ac:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          in_ZR = (int)puVar6 == (int)param_1;
switchD_00a7c8b0_caseD_a7cb80:
          param_1 = (undefined8 *)0x37;
          uVar3 = in_ZR;
switchD_00a7ca34_caseD_e7:
          in_ZR = false;
          if ((bool)uVar3) {
            in_ZR = (int)pbVar7 == (int)param_1;
          }
switchD_00a7ca34_caseD_96:
          if ((bool)in_ZR) {
LAB_00a7d724:
            auVar32._8_8_ = 7;
            auVar32._0_8_ = 1;
            return auVar32;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7c8b0_caseD_a7cb90:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          param_1 = (undefined8 *)0x7224;
switchD_00a7ca34_caseD_ae:
          uVar3 = (int)puVar6 == (int)param_1;
          puVar6 = (undefined *)0x38;
switchD_00a7ca34_caseD_dd:
          in_ZR = false;
          if ((bool)uVar3) {
            in_ZR = (int)pbVar7 == (int)puVar6;
          }
switchD_00a7c8b0_caseD_a7cba4:
          if ((bool)in_ZR) {
LAB_00a7d748:
            auVar35._8_8_ = 8;
            auVar35._0_8_ = 1;
            return auVar35;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7c888_caseD_8e:
          in_ZR = false;
          if ((int)puVar6 == (int)param_1) {
            in_ZR = *(char *)((long)param_3 + 2) == '9';
          }
switchD_00a7c8b0_caseD_a7cbbc:
          if ((bool)in_ZR) {
LAB_00a7d760:
            auVar37._8_8_ = 9;
            auVar37._0_8_ = 1;
            return auVar37;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_de:
          param_1 = (undefined8 *)0x6624;
switchD_00a7ca34_caseD_48:
          uVar3 = (int)puVar6 == (int)param_1;
switchD_00a7ca34_caseD_50:
          in_ZR = false;
          if ((bool)uVar3) {
            in_ZR = (int)pbVar7 == 0x30;
          }
switchD_00a7c8b0_caseD_a7cbd8:
          if ((bool)in_ZR) {
LAB_00a7d79c:
            auVar42._8_8_ = 0x20;
            auVar42._0_8_ = 1;
            return auVar42;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7ca34_caseD_2c:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7c888_caseD_54:
          in_ZR = (int)puVar6 == (int)param_1;
switchD_00a7c888_caseD_90:
          if ((bool)in_ZR && (int)pbVar7 == 0x31) {
LAB_00a7d7b4:
            auVar44._8_8_ = 0x21;
            auVar44._0_8_ = 1;
            return auVar44;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7c8b0_caseD_a7cbfc:
          param_1 = (undefined8 *)0x6624;
          in_ZR = (int)puVar6 == 0x6624;
switchD_00a7c888_caseD_26:
          puVar6 = (undefined *)0x32;
switchD_00a7ca34_caseD_e4:
          if ((bool)in_ZR && (int)pbVar7 == (int)puVar6) {
LAB_00a7d7e4:
            auVar48._8_8_ = 0x22;
            auVar48._0_8_ = 1;
            return auVar48;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_f2:
          in_ZR = (int)puVar6 == (int)param_1;
switchD_00a7c8b0_caseD_a7cc1c:
          param_1 = (undefined8 *)0x33;
switchD_00a7ca34_caseD_38:
          if ((bool)in_ZR && (int)pbVar7 == (int)param_1) {
LAB_00a7d808:
            auVar51._8_8_ = 0x23;
            auVar51._0_8_ = 1;
            return auVar51;
          }
switchD_00a7ca34_caseD_e9:
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          param_1 = (undefined8 *)0x6624;
          uVar3 = (short)*param_3 == 0x6624;
switchD_00a7c888_caseD_a0:
          in_ZR = false;
          if ((bool)uVar3) {
            in_ZR = (int)pbVar7 == 0x34;
          }
switchD_00a7ca34_caseD_28:
          if ((bool)in_ZR) {
LAB_00a7d82c:
            auVar54._8_8_ = 0x24;
            auVar54._0_8_ = 1;
            return auVar54;
          }
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          in_ZR = (uint)(ushort)*param_3 == (uint)param_1;
switchD_00a7ca34_caseD_32:
          if ((bool)in_ZR && (int)pbVar7 == 0x35) {
LAB_00a7d844:
            auVar56._8_8_ = 0x25;
            auVar56._0_8_ = 1;
            return auVar56;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_4e:
          param_1 = (undefined8 *)0x6624;
          in_ZR = false;
          if ((int)puVar6 == 0x6624) {
            in_ZR = (int)pbVar7 == 0x36;
          }
switchD_00a7ca34_caseD_7e:
          if ((bool)in_ZR) {
LAB_00a7d85c:
            auVar58._8_8_ = 0x26;
            auVar58._0_8_ = 1;
            return auVar58;
          }
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          in_ZR = (uint)(ushort)*param_3 == (uint)param_1;
          param_1 = (undefined8 *)0x37;
switchD_00a7c8b0_caseD_a7cc88:
          if ((bool)in_ZR && (int)pbVar7 == (int)param_1) {
LAB_00a7d874:
            auVar60._8_8_ = 0x27;
            auVar60._0_8_ = 1;
            return auVar60;
          }
          puVar6 = (undefined *)(ulong)(ushort)*param_3;
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_60:
          param_1 = (undefined8 *)0x6624;
          in_ZR = (int)puVar6 == 0x6624;
switchD_00a7c8b0_caseD_a7cca0:
          if ((bool)in_ZR && (int)pbVar7 == 0x38) {
LAB_00a7d88c:
            auVar62._8_8_ = 0x28;
            auVar62._0_8_ = 1;
            return auVar62;
          }
          pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
          in_ZR = (uint)(ushort)*param_3 == (uint)param_1;
switchD_00a7ca34_caseD_22:
          param_1 = (undefined8 *)0x39;
switchD_00a7ca34_caseD_82:
          if ((bool)in_ZR && (int)pbVar7 == (int)param_1) {
LAB_00a7d8a4:
            auVar64._8_8_ = 0x29;
            auVar64._0_8_ = 1;
            return auVar64;
          }
          puVar6 = (undefined *)(ulong)*(byte *)((long)param_3 + 2);
          in_ZR = (short)*param_3 == 0x7224;
switchD_00a7ca34_caseD_3a:
          uVar3 = false;
          if ((bool)in_ZR) {
            uVar3 = (int)puVar6 == 0x61;
          }
switchD_00a7ca34_caseD_6e:
          if (!(bool)uVar3) {
            param_1 = (undefined8 *)(ulong)(ushort)*param_3;
            puVar6 = (undefined *)(ulong)*(byte *)((long)param_3 + 2);
            pbVar7 = (byte *)0x7424;
switchD_00a7ca34_caseD_14:
            iVar5 = (int)param_1;
            param_1 = (undefined8 *)&DAT_00000070;
            if (iVar5 == (int)pbVar7 && (int)puVar6 == 0x70) goto LAB_00a7d670;
            puVar6 = (undefined *)(ulong)(ushort)*param_3;
            pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_5c:
            in_ZR = false;
            if ((int)puVar6 == 0x7324) {
              in_ZR = (int)pbVar7 == (int)param_1;
            }
switchD_00a7ca34_caseD_46:
            if ((bool)in_ZR) goto LAB_00a7d694;
switchD_00a7ca34_caseD_84:
            pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
            param_1 = (undefined8 *)0x6124;
            in_ZR = (short)*param_3 == 0x6124;
            puVar6 = (undefined *)0x30;
switchD_00a7ca34_caseD_58:
            if ((bool)in_ZR && (int)pbVar7 == (int)puVar6) goto LAB_00a7d6b8;
            puVar6 = (undefined *)(ulong)(ushort)*param_3;
            pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_8c:
            in_ZR = (int)puVar6 == (int)param_1;
            param_1 = (undefined8 *)0x31;
switchD_00a7ca34_caseD_40:
            if ((bool)in_ZR && (int)pbVar7 == (int)param_1) goto LAB_00a7d6dc;
            pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
            param_1 = (undefined8 *)0x6124;
            in_ZR = (short)*param_3 == 0x6124;
switchD_00a7ca34_caseD_78:
            puVar6 = (undefined *)0x32;
switchD_00a7ca34_caseD_24:
            if ((bool)in_ZR && (int)pbVar7 == (int)puVar6) goto LAB_00a7d700;
            pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
            in_ZR = (uint)(ushort)*param_3 == (uint)param_1;
switchD_00a7ca34_caseD_9c:
            if ((bool)in_ZR && (int)pbVar7 == 0x33) goto LAB_00a7d724;
            puVar6 = (undefined *)(ulong)(ushort)*param_3;
switchD_00a7ca34_caseD_1e:
            pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
            param_1 = (undefined8 *)0x6124;
            uVar3 = (int)puVar6 == 0x6124;
            puVar6 = (undefined *)0x34;
switchD_00a7ca34_caseD_3e:
            in_ZR = false;
            if ((bool)uVar3) {
              in_ZR = (int)pbVar7 == (int)puVar6;
            }
switchD_00a7ca34_caseD_7a:
            if ((bool)in_ZR) goto LAB_00a7d748;
            puVar6 = (undefined *)(ulong)(ushort)*param_3;
            pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_3c:
            if ((int)puVar6 != (int)param_1 || (int)pbVar7 != 0x35) {
switchD_00a7ca34_caseD_10:
              puVar6 = (undefined *)(ulong)(ushort)*param_3;
              pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
switchD_00a7ca34_caseD_74:
              param_1 = (undefined8 *)0x6124;
              in_ZR = (int)puVar6 == 0x6124;
switchD_00a7ca34_caseD_2a:
              if ((bool)in_ZR && (int)pbVar7 == 0x36) goto LAB_00a7d634;
              in_ZR = false;
              if ((uint)(ushort)*param_3 == (uint)param_1) {
                in_ZR = *(char *)((long)param_3 + 2) == '7';
              }
switchD_00a7ca34_caseD_68:
              if ((bool)in_ZR) goto LAB_00a7d658;
switchD_00a7ca34_caseD_8a:
              pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
              param_1 = (undefined8 *)0x7424;
              in_ZR = (short)*param_3 == 0x7424;
switchD_00a7ca34_caseD_12:
              if ((bool)in_ZR && (int)pbVar7 == 0x30) goto LAB_00a7d67c;
switchD_00a7ca34_caseD_9e:
              pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
              in_ZR = (uint)(ushort)*param_3 == (uint)param_1;
switchD_00a7ca34_caseD_1a:
              if ((bool)in_ZR && (int)pbVar7 == 0x31) goto LAB_00a7d6a0;
              puVar6 = (undefined *)(ulong)(ushort)*param_3;
              pbVar7 = (byte *)(ulong)*(byte *)((long)param_3 + 2);
              param_1 = (undefined8 *)0x7424;
switchD_00a7ca34_caseD_e:
              if ((uint)puVar6 == (uint)param_1 && (int)pbVar7 == 0x32) goto LAB_00a7d6c4;
              if ((uint)(ushort)*param_3 == (uint)param_1 && *(char *)((long)param_3 + 2) == '3')
              goto LAB_00a7d6e8;
              if ((short)*param_3 == 0x7424 && *(char *)((long)param_3 + 2) == '4')
              goto LAB_00a7d70c;
              if ((short)*param_3 == 0x7424 && *(char *)((long)param_3 + 2) == '5')
              goto LAB_00a7d730;
              if ((short)*param_3 == 0x7424 && *(char *)((long)param_3 + 2) == '6')
              goto LAB_00a7d754;
              if ((short)*param_3 == 0x7424 && *(char *)((long)param_3 + 2) == '7')
              goto LAB_00a7d778;
              if ((short)*param_3 == 0x7424 && *(char *)((long)param_3 + 2) == '8')
              goto LAB_00a7d790;
              if ((short)*param_3 == 0x6624 && *(char *)((long)param_3 + 2) == 'p')
              goto LAB_00a7d7d8;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '0')
              goto LAB_00a7d7fc;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '1')
              goto LAB_00a7d820;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '2')
              goto LAB_00a7d838;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '3')
              goto LAB_00a7d850;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '4')
              goto LAB_00a7d868;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '5')
              goto LAB_00a7d880;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '6')
              goto LAB_00a7d898;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '7')
              goto LAB_00a7d8b0;
              if ((short)*param_3 == 0x7324 && *(char *)((long)param_3 + 2) == '8')
              goto LAB_00a7d8bc;
              goto LAB_00a7d624;
            }
            goto LAB_00a7d760;
          }
        }
        uVar4 = 1;
        goto LAB_00a7d650;
      }
    }
    uVar4 = 0;
LAB_00a7d650:
    auVar14._8_8_ = uVar4;
    auVar14._0_8_ = 1;
    return auVar14;
  case (undefined *)0xb1:
    goto switchD_00a7c8b0_caseD_a7ca78;
  case (undefined *)0xb2:
  case (undefined *)0xbb:
    goto switchD_00a7c888_caseD_3e;
  case (undefined *)0xb3:
    goto switchD_00a7ca34_caseD_b3;
  case (undefined *)0xb5:
    goto switchD_00a7c8b0_caseD_a7cabc;
  case (undefined *)0xb7:
    goto switchD_00a7ca34_caseD_b7;
  case (undefined *)0xba:
    goto switchD_00a7ca34_caseD_ba;
  case (undefined *)0xbd:
  case (undefined *)0xcd:
    goto switchD_00a7ca34_caseD_bd;
  case (undefined *)0xbe:
  case (undefined *)0xeb:
    goto switchD_00a7ca34_caseD_be;
  case (undefined *)0xc1:
    goto switchD_00a7c888_caseD_ff;
  case (undefined *)0xc2:
    goto switchD_00a7c8b0_caseD_a7cae0;
  case (undefined *)0xc6:
  case (undefined *)0xd9:
    goto switchD_00a7c8b0_caseD_a7cb34;
  case (undefined *)0xc7:
    goto switchD_00a7ca34_caseD_c7;
  case (undefined *)0xce:
    goto switchD_00a7c8b0_caseD_a7cab4;
  case (undefined *)0xd4:
    goto switchD_00a7c8b0_caseD_a7ca98;
  case (undefined *)0xd7:
    goto switchD_00a7ca34_caseD_d7;
  case (undefined *)0xd8:
    goto switchD_00a7c888_caseD_38;
  case (undefined *)0xdc:
    goto switchD_00a7c8b0_caseD_a7cb90;
  case (undefined *)0xdd:
    goto switchD_00a7ca34_caseD_dd;
  case (undefined *)0xde:
    goto switchD_00a7ca34_caseD_de;
  case (undefined *)0xdf:
    goto switchD_00a7c888_caseD_9a;
  case (undefined *)0xe0:
    goto switchD_00a7ca34_caseD_e0;
  case (undefined *)0xe1:
    goto switchD_00a7c888_caseD_2a;
  case (undefined *)0xe2:
    goto switchD_00a7c8b0_caseD_a7cbd8;
  case (undefined *)0xe3:
    goto switchD_00a7c888_caseD_90;
  case (undefined *)0xe4:
    goto switchD_00a7ca34_caseD_e4;
  case (undefined *)0xe5:
    goto switchD_00a7c888_caseD_82;
  case (undefined *)0xe6:
    goto switchD_00a7c888_caseD_96;
  case (undefined *)0xe7:
    goto switchD_00a7ca34_caseD_e7;
  case (undefined *)0xe9:
    goto switchD_00a7ca34_caseD_e9;
  case (undefined *)0xea:
    goto switchD_00a7ca34_caseD_ea;
  case (undefined *)0xf1:
    goto switchD_00a7c888_caseD_64;
  case (undefined *)0xf2:
    goto switchD_00a7ca34_caseD_f2;
  }
  *(char *)(param_1 + 1) = (char)param_3;
switchD_00a7c888_caseD_f9:
  *(char *)((long)param_1 + 9) = SUB81(param_4,0);
switchD_00a7ca34_caseD_73:
  *(short *)((long)param_1 + 10) = SUB82(param_4,0);
  *(int *)((long)param_1 + 0xc) = SUB84(param_4,0);
switchD_00a7c8b0_caseD_a7ca48:
  param_1[2] = param_4;
  *param_1 = 0;
switchD_00a7c888_caseD_7c:
  auVar9._8_8_ = param_4;
  auVar9._0_8_ = param_3;
  return auVar9;
}


// ===== 00a7ca6c  <gimli::arch::[f]::gimli::arch::LoongArch>::register_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[f]::gimli::arch::LoongArch>::register_name */

undefined1  [16] __rustcall
<gimli::arch::[f]::gimli::arch::LoongArch>::register_name(ushort param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x48) {
    auVar2._8_8_ = *(undefined8 *)(&DAT_0038d660 + (ulong)param_1 * 8);
    auVar2._0_8_ = &DAT_0038d8a0 + *(int *)(&DAT_0038d8a0 + (ulong)param_1 * 4);
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a7caa4  <gimli::arch::[f]::gimli::arch::LoongArch>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[f]::gimli::arch::LoongArch>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[f]::gimli::arch::LoongArch>::name_to_register(uint *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  
  if (param_2 == 5) {
    if (*param_1 == 0x63636624 && (char)param_1[1] == '0') {
      auVar5._8_8_ = 0x40;
      auVar5._0_8_ = 1;
      return auVar5;
    }
    if (*param_1 == 0x63636624 && (char)param_1[1] == '1') {
      auVar8._8_8_ = 0x41;
      auVar8._0_8_ = 1;
      return auVar8;
    }
    if (*param_1 == 0x63636624 && (char)param_1[1] == '2') {
      auVar11._8_8_ = 0x42;
      auVar11._0_8_ = 1;
      return auVar11;
    }
    if (*param_1 == 0x63636624 && (char)param_1[1] == '3') {
      auVar14._8_8_ = 0x43;
      auVar14._0_8_ = 1;
      return auVar14;
    }
    if (*param_1 == 0x63636624 && (char)param_1[1] == '4') {
      auVar17._8_8_ = 0x44;
      auVar17._0_8_ = 1;
      return auVar17;
    }
    if (*param_1 == 0x63636624 && (char)param_1[1] == '5') {
      auVar20._8_8_ = 0x45;
      auVar20._0_8_ = 1;
      return auVar20;
    }
    if (*param_1 == 0x63636624 && (char)param_1[1] == '6') {
      auVar23._8_8_ = 0x46;
      auVar23._0_8_ = 1;
      return auVar23;
    }
    if (*param_1 == 0x63636624 && (char)param_1[1] == '7') {
      auVar26._8_8_ = 0x47;
      auVar26._0_8_ = 1;
      return auVar26;
    }
    if (*param_1 != 0x72657a24 || (char)param_1[1] != 'o') {
      if (*param_1 == 0x31746624 && (char)param_1[1] == '0') {
LAB_00a7d76c:
        auVar30._8_8_ = 0x32;
        auVar30._0_8_ = 1;
        return auVar30;
      }
      if (*param_1 == 0x31746624 && (char)param_1[1] == '1') {
LAB_00a7d784:
        auVar32._8_8_ = 0x33;
        auVar32._0_8_ = 1;
        return auVar32;
      }
      if (*param_1 == 0x31746624 && (char)param_1[1] == '2') {
LAB_00a7d7a8:
        auVar35._8_8_ = 0x34;
        auVar35._0_8_ = 1;
        return auVar35;
      }
      if (*param_1 == 0x31746624 && (char)param_1[1] == '3') {
LAB_00a7d7cc:
        auVar38._8_8_ = 0x35;
        auVar38._0_8_ = 1;
        return auVar38;
      }
      if (*param_1 == 0x31746624 && (char)param_1[1] == '4') {
LAB_00a7d7f0:
        auVar41._8_8_ = 0x36;
        auVar41._0_8_ = 1;
        return auVar41;
      }
      if (*param_1 == 0x31746624 && (char)param_1[1] == '5') {
LAB_00a7d814:
        auVar44._8_8_ = 0x37;
        auVar44._0_8_ = 1;
        return auVar44;
      }
LAB_00a7d624:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      return auVar1 << 0x40;
    }
  }
  else {
    if (param_2 == 4) {
      if (*param_1 == 0x30317224) {
LAB_00a7d634:
        auVar4._8_8_ = 10;
        auVar4._0_8_ = 1;
        return auVar4;
      }
      if (*param_1 == 0x31317224) {
LAB_00a7d658:
        auVar7._8_8_ = 0xb;
        auVar7._0_8_ = 1;
        return auVar7;
      }
      if (*param_1 == 0x32317224) {
LAB_00a7d67c:
        auVar10._8_8_ = 0xc;
        auVar10._0_8_ = 1;
        return auVar10;
      }
      if (*param_1 == 0x33317224) {
LAB_00a7d6a0:
        auVar13._8_8_ = 0xd;
        auVar13._0_8_ = 1;
        return auVar13;
      }
      if (*param_1 == 0x34317224) {
LAB_00a7d6c4:
        auVar16._8_8_ = 0xe;
        auVar16._0_8_ = 1;
        return auVar16;
      }
      if (*param_1 == 0x35317224) {
LAB_00a7d6e8:
        auVar19._8_8_ = 0xf;
        auVar19._0_8_ = 1;
        return auVar19;
      }
      if (*param_1 == 0x36317224) {
LAB_00a7d70c:
        auVar22._8_8_ = 0x10;
        auVar22._0_8_ = 1;
        return auVar22;
      }
      if (*param_1 == 0x37317224) {
LAB_00a7d730:
        auVar25._8_8_ = 0x11;
        auVar25._0_8_ = 1;
        return auVar25;
      }
      if (*param_1 == 0x38317224) {
LAB_00a7d754:
        auVar28._8_8_ = 0x12;
        auVar28._0_8_ = 1;
        return auVar28;
      }
      if (*param_1 == 0x39317224) {
LAB_00a7d778:
        auVar31._8_8_ = 0x13;
        auVar31._0_8_ = 1;
        return auVar31;
      }
      if (*param_1 == 0x30327224) {
LAB_00a7d790:
        auVar33._8_8_ = 0x14;
        auVar33._0_8_ = 1;
        return auVar33;
      }
      if (*param_1 == 0x31327224) {
        auVar37._8_8_ = 0x15;
        auVar37._0_8_ = 1;
        return auVar37;
      }
      if (*param_1 == 0x32327224) {
LAB_00a7d7d8:
        auVar39._8_8_ = 0x16;
        auVar39._0_8_ = 1;
        return auVar39;
      }
      if (*param_1 == 0x33327224) {
LAB_00a7d7fc:
        auVar42._8_8_ = 0x17;
        auVar42._0_8_ = 1;
        return auVar42;
      }
      if (*param_1 == 0x34327224) {
LAB_00a7d820:
        auVar45._8_8_ = 0x18;
        auVar45._0_8_ = 1;
        return auVar45;
      }
      if (*param_1 == 0x35327224) {
LAB_00a7d838:
        auVar47._8_8_ = 0x19;
        auVar47._0_8_ = 1;
        return auVar47;
      }
      if (*param_1 == 0x36327224) {
LAB_00a7d850:
        auVar49._8_8_ = 0x1a;
        auVar49._0_8_ = 1;
        return auVar49;
      }
      if (*param_1 == 0x37327224) {
LAB_00a7d868:
        auVar51._8_8_ = 0x1b;
        auVar51._0_8_ = 1;
        return auVar51;
      }
      if (*param_1 == 0x38327224) {
LAB_00a7d880:
        auVar53._8_8_ = 0x1c;
        auVar53._0_8_ = 1;
        return auVar53;
      }
      if (*param_1 == 0x39327224) {
LAB_00a7d898:
        auVar55._8_8_ = 0x1d;
        auVar55._0_8_ = 1;
        return auVar55;
      }
      if (*param_1 == 0x30337224) {
LAB_00a7d8b0:
        auVar57._8_8_ = 0x1e;
        auVar57._0_8_ = 1;
        return auVar57;
      }
      if (*param_1 == 0x31337224) {
LAB_00a7d8bc:
        auVar58._8_8_ = 0x1f;
        auVar58._0_8_ = 1;
        return auVar58;
      }
      if (*param_1 == 0x30316624) {
LAB_00a7d8c8:
        auVar59._8_8_ = 0x2a;
        auVar59._0_8_ = 1;
        return auVar59;
      }
      if (*param_1 == 0x31316624) {
LAB_00a7d8d4:
        auVar60._8_8_ = 0x2b;
        auVar60._0_8_ = 1;
        return auVar60;
      }
      if (*param_1 == 0x32316624) {
LAB_00a7d8e0:
        auVar61._8_8_ = 0x2c;
        auVar61._0_8_ = 1;
        return auVar61;
      }
      if (*param_1 == 0x33316624) {
LAB_00a7d8ec:
        auVar62._8_8_ = 0x2d;
        auVar62._0_8_ = 1;
        return auVar62;
      }
      if (*param_1 == 0x34316624) {
LAB_00a7d8f8:
        auVar63._8_8_ = 0x2e;
        auVar63._0_8_ = 1;
        return auVar63;
      }
      if (*param_1 == 0x35316624) {
LAB_00a7d904:
        auVar64._8_8_ = 0x2f;
        auVar64._0_8_ = 1;
        return auVar64;
      }
      if (*param_1 == 0x36316624) {
LAB_00a7d910:
        auVar65._8_8_ = 0x30;
        auVar65._0_8_ = 1;
        return auVar65;
      }
      if (*param_1 == 0x37316624) {
LAB_00a7d91c:
        auVar66._8_8_ = 0x31;
        auVar66._0_8_ = 1;
        return auVar66;
      }
      if (*param_1 == 0x38316624) goto LAB_00a7d76c;
      if (*param_1 == 0x39316624) goto LAB_00a7d784;
      if (*param_1 == 0x30326624) goto LAB_00a7d7a8;
      if (*param_1 == 0x31326624) goto LAB_00a7d7cc;
      if (*param_1 == 0x32326624) goto LAB_00a7d7f0;
      if (*param_1 == 0x33326624) goto LAB_00a7d814;
      if (*param_1 != 0x34326624) {
        if (*param_1 == 0x35326624) {
LAB_00a7d934:
          auVar68._8_8_ = 0x39;
          auVar68._0_8_ = 1;
          return auVar68;
        }
        if (*param_1 == 0x36326624) {
LAB_00a7d940:
          auVar69._8_8_ = 0x3a;
          auVar69._0_8_ = 1;
          return auVar69;
        }
        if (*param_1 == 0x37326624) {
LAB_00a7d94c:
          auVar70._8_8_ = 0x3b;
          auVar70._0_8_ = 1;
          return auVar70;
        }
        if (*param_1 == 0x38326624) {
LAB_00a7d958:
          auVar71._8_8_ = 0x3c;
          auVar71._0_8_ = 1;
          return auVar71;
        }
        if (*param_1 == 0x39326624) {
LAB_00a7d964:
          auVar72._8_8_ = 0x3d;
          auVar72._0_8_ = 1;
          return auVar72;
        }
        if (*param_1 == 0x30336624) {
LAB_00a7d970:
          auVar73._8_8_ = 0x3e;
          auVar73._0_8_ = 1;
          return auVar73;
        }
        if (*param_1 != 0x31336624) {
          if (*param_1 == 0x30616624) goto LAB_00a7d79c;
          if (*param_1 == 0x31616624) goto LAB_00a7d7b4;
          if (*param_1 == 0x32616624) goto LAB_00a7d7e4;
          if (*param_1 == 0x33616624) goto LAB_00a7d808;
          if (*param_1 == 0x34616624) goto LAB_00a7d82c;
          if (*param_1 == 0x35616624) goto LAB_00a7d844;
          if (*param_1 == 0x36616624) goto LAB_00a7d85c;
          if (*param_1 == 0x37616624) goto LAB_00a7d874;
          if (*param_1 == 0x30746624) goto LAB_00a7d88c;
          if (*param_1 == 0x31746624) goto LAB_00a7d8a4;
          if (*param_1 == 0x32746624) goto LAB_00a7d8c8;
          if (*param_1 == 0x33746624) goto LAB_00a7d8d4;
          if (*param_1 == 0x34746624) goto LAB_00a7d8e0;
          if (*param_1 == 0x35746624) goto LAB_00a7d8ec;
          if (*param_1 == 0x36746624) goto LAB_00a7d8f8;
          if (*param_1 == 0x37746624) goto LAB_00a7d904;
          param_2 = (ulong)*param_1;
          if (*param_1 == 0x38746624) goto LAB_00a7d910;
          if (*param_1 == 0x39746624) goto LAB_00a7d91c;
          if (*param_1 == 0x30736624) goto LAB_00a7d928;
          if (*param_1 == 0x31736624) goto LAB_00a7d934;
          if (*param_1 == 0x32736624) goto LAB_00a7d940;
          if (*param_1 == 0x33736624) goto LAB_00a7d94c;
          if (*param_1 == 0x34736624) goto LAB_00a7d958;
          if (*param_1 == 0x35736624) goto LAB_00a7d964;
          if (*param_1 == 0x36736624) goto LAB_00a7d970;
          if (*param_1 != 0x37736624) goto LAB_00a7d624;
        }
        auVar3._8_8_ = 0x3f;
        auVar3._0_8_ = 1;
        return auVar3;
      }
LAB_00a7d928:
      auVar67._8_8_ = 0x38;
      auVar67._0_8_ = 1;
      return auVar67;
    }
    if (param_2 != 3) goto LAB_00a7d624;
    if ((short)*param_1 != 0x7224 || *(char *)((long)param_1 + 2) != '0') {
      if ((short)*param_1 != 0x7224 || *(char *)((long)param_1 + 2) != '1') {
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a7d670:
          auVar9._8_8_ = 2;
          auVar9._0_8_ = 1;
          return auVar9;
        }
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7d694:
          auVar12._8_8_ = 3;
          auVar12._0_8_ = 1;
          return auVar12;
        }
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a7d6b8:
          auVar15._8_8_ = 4;
          auVar15._0_8_ = 1;
          return auVar15;
        }
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a7d6dc:
          auVar18._8_8_ = 5;
          auVar18._0_8_ = 1;
          return auVar18;
        }
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '6') {
LAB_00a7d700:
          auVar21._8_8_ = 6;
          auVar21._0_8_ = 1;
          return auVar21;
        }
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '7') {
LAB_00a7d724:
          auVar24._8_8_ = 7;
          auVar24._0_8_ = 1;
          return auVar24;
        }
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '8') {
LAB_00a7d748:
          auVar27._8_8_ = 8;
          auVar27._0_8_ = 1;
          return auVar27;
        }
        if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == '9') {
LAB_00a7d760:
          auVar29._8_8_ = 9;
          auVar29._0_8_ = 1;
          return auVar29;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7d79c:
          auVar34._8_8_ = 0x20;
          auVar34._0_8_ = 1;
          return auVar34;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7d7b4:
          auVar36._8_8_ = 0x21;
          auVar36._0_8_ = 1;
          return auVar36;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a7d7e4:
          auVar40._8_8_ = 0x22;
          auVar40._0_8_ = 1;
          return auVar40;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7d808:
          auVar43._8_8_ = 0x23;
          auVar43._0_8_ = 1;
          return auVar43;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a7d82c:
          auVar46._8_8_ = 0x24;
          auVar46._0_8_ = 1;
          return auVar46;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a7d844:
          auVar48._8_8_ = 0x25;
          auVar48._0_8_ = 1;
          return auVar48;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '6') {
LAB_00a7d85c:
          auVar50._8_8_ = 0x26;
          auVar50._0_8_ = 1;
          return auVar50;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '7') {
LAB_00a7d874:
          auVar52._8_8_ = 0x27;
          auVar52._0_8_ = 1;
          return auVar52;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '8') {
LAB_00a7d88c:
          auVar54._8_8_ = 0x28;
          auVar54._0_8_ = 1;
          return auVar54;
        }
        if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '9') {
LAB_00a7d8a4:
          auVar56._8_8_ = 0x29;
          auVar56._0_8_ = 1;
          return auVar56;
        }
        if ((short)*param_1 != 0x7224 || *(char *)((long)param_1 + 2) != 'a') {
          if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == 'p') goto LAB_00a7d670;
          if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == 'p') goto LAB_00a7d694;
          if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7d6b8;
          if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7d6dc;
          if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7d700;
          if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7d724;
          if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '4') goto LAB_00a7d748;
          if ((short)*param_1 != 0x6124 || *(char *)((long)param_1 + 2) != '5') {
            if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7d634;
            if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7d658;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7d67c;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7d6a0;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7d6c4;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7d6e8;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '4') goto LAB_00a7d70c;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '5') goto LAB_00a7d730;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7d754;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7d778;
            if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '8') goto LAB_00a7d790;
            if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == 'p') goto LAB_00a7d7d8;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7d7fc;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7d820;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7d838;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7d850;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '4') goto LAB_00a7d868;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '5') goto LAB_00a7d880;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7d898;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7d8b0;
            if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '8') goto LAB_00a7d8bc;
            goto LAB_00a7d624;
          }
          goto LAB_00a7d760;
        }
      }
      uVar2 = 1;
      goto LAB_00a7d650;
    }
  }
  uVar2 = 0;
LAB_00a7d650:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = 1;
  return auVar6;
}


// ===== 00a7d97c  <gimli::read::names::[h]::gimli::read::names::NameAbbreviations>::get =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::names::[h]::gimli::read::names::NameAbbreviations>::get */

long __rustcall
<gimli::read::names::[h]::gimli::read::names::NameAbbreviations>::get(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8) + -0x28;
  lVar3 = *(long *)(param_1 + 0x10) * 0x28;
  do {
    if (lVar3 == 0) {
      return 0;
    }
    plVar1 = (long *)(lVar2 + 0x40);
    lVar2 = lVar2 + 0x28;
    lVar3 = lVar3 + -0x28;
  } while (*plVar1 != param_2);
  return lVar2;
}


// ===== 00a7d9b0  <alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,gimli::read::abbrev::Abbreviation>>::entry =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,
   gimli::read::abbrev::Abbreviation>>::entry */

void __rustcall
<alloc::collections::btree::map::[i]::alloc::collections::btree::map::BTreeMap<u64,gimli::read::abbrev::Abbreviation>>
::entry(long *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    *param_1 = (long)param_2;
    param_1[1] = param_3;
    param_1[2] = 0;
    return;
  }
  lVar4 = param_2[1];
  do {
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x532);
    lVar7 = uVar5 << 3;
    lVar2 = 0x9b;
    do {
      lVar6 = lVar2;
      if (lVar7 == 0) goto LAB_00a7d9f8;
      uVar8 = *(ulong *)(lVar3 + lVar6 * 8);
      lVar7 = lVar7 + -8;
      cVar1 = uVar8 < param_3;
      if (param_3 < uVar8) {
        cVar1 = -1;
      }
      lVar2 = lVar6 + 1;
    } while (cVar1 == '\x01');
    uVar5 = lVar6 - 0x9b;
    if (cVar1 == '\0') {
      param_1[2] = lVar4;
      param_1[3] = uVar5;
      param_1[4] = (long)param_2;
      *param_1 = 0;
      param_1[1] = lVar3;
      return;
    }
LAB_00a7d9f8:
    if (lVar4 == 0) {
      *param_1 = (long)param_2;
      param_1[1] = param_3;
      param_1[2] = lVar3;
      param_1[3] = 0;
      param_1[4] = uVar5;
      return;
    }
    lVar4 = lVar4 + -1;
    lVar3 = *(long *)(lVar3 + uVar5 * 8 + 0x538);
  } while( true );
}


// ===== 00a7da38  <gimli::arch::[l]::gimli::arch::MIPS>::register_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[l]::gimli::arch::MIPS>::register_name */

undefined1  [16] __rustcall
<gimli::arch::[l]::gimli::arch::MIPS>::register_name(ushort param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x42) {
    auVar2._8_8_ = *(undefined8 *)(&DAT_0038d9c0 + (ulong)param_1 * 8);
    auVar2._0_8_ = &DAT_0038dbd0 + *(int *)(&DAT_0038dbd0 + (ulong)param_1 * 4);
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a7da70  <gimli::arch::[l]::gimli::arch::MIPS>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[l]::gimli::arch::MIPS>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[l]::gimli::arch::MIPS>::name_to_register(uint *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  
  if ((long)param_2 < 4) {
    if (param_2 == 2) {
      if ((short)*param_1 == 0x3024) goto LAB_00a7e3cc;
      if ((short)*param_1 != 0x3124) {
        if ((short)*param_1 == 0x3224) {
LAB_00a7e410:
          auVar11._8_8_ = 2;
          auVar11._0_8_ = 1;
          return auVar11;
        }
        if ((short)*param_1 == 0x3324) {
LAB_00a7e434:
          auVar14._8_8_ = 3;
          auVar14._0_8_ = 1;
          return auVar14;
        }
        if ((short)*param_1 == 0x3424) {
LAB_00a7e458:
          auVar17._8_8_ = 4;
          auVar17._0_8_ = 1;
          return auVar17;
        }
        if ((short)*param_1 == 0x3524) {
LAB_00a7e47c:
          auVar20._8_8_ = 5;
          auVar20._0_8_ = 1;
          return auVar20;
        }
        if ((short)*param_1 == 0x3624) {
LAB_00a7e4a0:
          auVar23._8_8_ = 6;
          auVar23._0_8_ = 1;
          return auVar23;
        }
        if ((short)*param_1 == 0x3724) {
LAB_00a7e4c4:
          auVar26._8_8_ = 7;
          auVar26._0_8_ = 1;
          return auVar26;
        }
        if ((short)*param_1 == 0x3824) {
LAB_00a7e4e8:
          auVar29._8_8_ = 8;
          auVar29._0_8_ = 1;
          return auVar29;
        }
        if ((short)*param_1 == 0x3924) {
LAB_00a7e22c:
          auVar4._8_8_ = 9;
          auVar4._0_8_ = 1;
          return auVar4;
        }
        goto LAB_00a7e184;
      }
    }
    else {
      if (param_2 != 3) goto LAB_00a7e184;
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7e3d4:
        auVar6._8_8_ = 10;
        auVar6._0_8_ = 1;
        return auVar6;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7e3f8:
        auVar9._8_8_ = 0xb;
        auVar9._0_8_ = 1;
        return auVar9;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a7e41c:
        auVar12._8_8_ = 0xc;
        auVar12._0_8_ = 1;
        return auVar12;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7e440:
        auVar15._8_8_ = 0xd;
        auVar15._0_8_ = 1;
        return auVar15;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a7e464:
        auVar18._8_8_ = 0xe;
        auVar18._0_8_ = 1;
        return auVar18;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a7e488:
        auVar21._8_8_ = 0xf;
        auVar21._0_8_ = 1;
        return auVar21;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '6') {
LAB_00a7e4ac:
        auVar24._8_8_ = 0x10;
        auVar24._0_8_ = 1;
        return auVar24;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '7') {
LAB_00a7e4d0:
        auVar27._8_8_ = 0x11;
        auVar27._0_8_ = 1;
        return auVar27;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '8') {
LAB_00a7e4f4:
        auVar30._8_8_ = 0x12;
        auVar30._0_8_ = 1;
        return auVar30;
      }
      if ((short)*param_1 == 0x3124 && *(char *)((long)param_1 + 2) == '9') {
LAB_00a7e50c:
        auVar32._8_8_ = 0x13;
        auVar32._0_8_ = 1;
        return auVar32;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7e524:
        auVar34._8_8_ = 0x14;
        auVar34._0_8_ = 1;
        return auVar34;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7e53c:
        auVar36._8_8_ = 0x15;
        auVar36._0_8_ = 1;
        return auVar36;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a7e554:
        auVar38._8_8_ = 0x16;
        auVar38._0_8_ = 1;
        return auVar38;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7e56c:
        auVar40._8_8_ = 0x17;
        auVar40._0_8_ = 1;
        return auVar40;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a7e584:
        auVar42._8_8_ = 0x18;
        auVar42._0_8_ = 1;
        return auVar42;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a7e59c:
        auVar44._8_8_ = 0x19;
        auVar44._0_8_ = 1;
        return auVar44;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '6') {
LAB_00a7e5b4:
        auVar46._8_8_ = 0x1a;
        auVar46._0_8_ = 1;
        return auVar46;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '7') {
LAB_00a7e5cc:
        auVar48._8_8_ = 0x1b;
        auVar48._0_8_ = 1;
        return auVar48;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '8') {
LAB_00a7e5e4:
        auVar50._8_8_ = 0x1c;
        auVar50._0_8_ = 1;
        return auVar50;
      }
      if ((short)*param_1 == 0x3224 && *(char *)((long)param_1 + 2) == '9') {
LAB_00a7e5fc:
        auVar52._8_8_ = 0x1d;
        auVar52._0_8_ = 1;
        return auVar52;
      }
      if ((short)*param_1 == 0x3324 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7e148:
        auVar3._8_8_ = 0x1e;
        auVar3._0_8_ = 1;
        return auVar3;
      }
      if ((short)*param_1 == 0x3324 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7e620:
        auVar55._8_8_ = 0x1f;
        auVar55._0_8_ = 1;
        return auVar55;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '0') {
        auVar56._8_8_ = 0x20;
        auVar56._0_8_ = 1;
        return auVar56;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '1') {
        auVar57._8_8_ = 0x21;
        auVar57._0_8_ = 1;
        return auVar57;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '2') {
        auVar58._8_8_ = 0x22;
        auVar58._0_8_ = 1;
        return auVar58;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '3') {
        auVar59._8_8_ = 0x23;
        auVar59._0_8_ = 1;
        return auVar59;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '4') {
        auVar60._8_8_ = 0x24;
        auVar60._0_8_ = 1;
        return auVar60;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '5') {
        auVar61._8_8_ = 0x25;
        auVar61._0_8_ = 1;
        return auVar61;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '6') {
        auVar62._8_8_ = 0x26;
        auVar62._0_8_ = 1;
        return auVar62;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '7') {
        auVar63._8_8_ = 0x27;
        auVar63._0_8_ = 1;
        return auVar63;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '8') {
        auVar64._8_8_ = 0x28;
        auVar64._0_8_ = 1;
        return auVar64;
      }
      if ((short)*param_1 == 0x6624 && *(char *)((long)param_1 + 2) == '9') {
        auVar65._8_8_ = 0x29;
        auVar65._0_8_ = 1;
        return auVar65;
      }
      if ((short)*param_1 == 0x6824 && *(char *)((long)param_1 + 2) == 'i') {
        auVar66._8_8_ = 0x40;
        auVar66._0_8_ = 1;
        return auVar66;
      }
      if ((short)*param_1 == 0x6c24 && *(char *)((long)param_1 + 2) == 'o') {
        auVar67._8_8_ = 0x41;
        auVar67._0_8_ = 1;
        return auVar67;
      }
      if ((short)*param_1 != 0x6124 || *(char *)((long)param_1 + 2) != 't') {
        if ((short)*param_1 == 0x7624 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7e410;
        if ((short)*param_1 == 0x7624 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7e434;
        if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7e458;
        if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7e47c;
        if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7e4a0;
        if ((short)*param_1 == 0x6124 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7e4c4;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7e4e8;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7e22c;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7e3d4;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7e3f8;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '4') goto LAB_00a7e41c;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '5') goto LAB_00a7e440;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7e464;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7e488;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7e4ac;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7e4d0;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7e4f4;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7e50c;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '4') goto LAB_00a7e524;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '5') goto LAB_00a7e53c;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7e554;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7e56c;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '8') goto LAB_00a7e584;
        if ((short)*param_1 == 0x7424 && *(char *)((long)param_1 + 2) == '9') goto LAB_00a7e59c;
        if ((short)*param_1 == 0x6b24 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7e5b4;
        if ((short)*param_1 == 0x6b24 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7e5cc;
        if ((short)*param_1 == 0x6724 && *(char *)((long)param_1 + 2) == 'p') goto LAB_00a7e5e4;
        if ((short)*param_1 == 0x7324 && *(char *)((long)param_1 + 2) == 'p') goto LAB_00a7e5fc;
        if ((short)*param_1 != 0x6624 || *(char *)((long)param_1 + 2) != 'p') {
          if ((short)*param_1 == 0x7224 && *(char *)((long)param_1 + 2) == 'a') goto LAB_00a7e620;
          if ((short)*param_1 != 0x7324 || *(char *)((long)param_1 + 2) != '8') goto LAB_00a7e184;
        }
        goto LAB_00a7e148;
      }
    }
    uVar2 = 1;
  }
  else {
    if (param_2 == 4) {
      if (*param_1 == 0x30316624) {
        auVar7._8_8_ = 0x2a;
        auVar7._0_8_ = 1;
        return auVar7;
      }
      if (*param_1 == 0x31316624) {
        auVar10._8_8_ = 0x2b;
        auVar10._0_8_ = 1;
        return auVar10;
      }
      if (*param_1 == 0x32316624) {
        auVar13._8_8_ = 0x2c;
        auVar13._0_8_ = 1;
        return auVar13;
      }
      if (*param_1 == 0x33316624) {
        auVar16._8_8_ = 0x2d;
        auVar16._0_8_ = 1;
        return auVar16;
      }
      if (*param_1 == 0x34316624) {
        auVar19._8_8_ = 0x2e;
        auVar19._0_8_ = 1;
        return auVar19;
      }
      if (*param_1 == 0x35316624) {
        auVar22._8_8_ = 0x2f;
        auVar22._0_8_ = 1;
        return auVar22;
      }
      if (*param_1 == 0x36316624) {
        auVar25._8_8_ = 0x30;
        auVar25._0_8_ = 1;
        return auVar25;
      }
      if (*param_1 == 0x37316624) {
        auVar28._8_8_ = 0x31;
        auVar28._0_8_ = 1;
        return auVar28;
      }
      if (*param_1 == 0x38316624) {
        auVar31._8_8_ = 0x32;
        auVar31._0_8_ = 1;
        return auVar31;
      }
      if (*param_1 == 0x39316624) {
        auVar33._8_8_ = 0x33;
        auVar33._0_8_ = 1;
        return auVar33;
      }
      if (*param_1 == 0x30326624) {
        auVar35._8_8_ = 0x34;
        auVar35._0_8_ = 1;
        return auVar35;
      }
      if (*param_1 == 0x31326624) {
        auVar37._8_8_ = 0x35;
        auVar37._0_8_ = 1;
        return auVar37;
      }
      param_2 = (ulong)*param_1;
      if (*param_1 == 0x32326624) {
        auVar39._8_8_ = 0x36;
        auVar39._0_8_ = 1;
        return auVar39;
      }
      if (*param_1 == 0x33326624) {
        auVar41._8_8_ = 0x37;
        auVar41._0_8_ = 1;
        return auVar41;
      }
      if (*param_1 == 0x34326624) {
        auVar43._8_8_ = 0x38;
        auVar43._0_8_ = 1;
        return auVar43;
      }
      if (*param_1 == 0x35326624) {
        auVar45._8_8_ = 0x39;
        auVar45._0_8_ = 1;
        return auVar45;
      }
      if (*param_1 == 0x36326624) {
        auVar47._8_8_ = 0x3a;
        auVar47._0_8_ = 1;
        return auVar47;
      }
      if (*param_1 == 0x37326624) {
        auVar49._8_8_ = 0x3b;
        auVar49._0_8_ = 1;
        return auVar49;
      }
      if (*param_1 == 0x38326624) {
        auVar51._8_8_ = 0x3c;
        auVar51._0_8_ = 1;
        return auVar51;
      }
      if (*param_1 == 0x39326624) {
        auVar53._8_8_ = 0x3d;
        auVar53._0_8_ = 1;
        return auVar53;
      }
      if (*param_1 == 0x30336624) {
        auVar54._8_8_ = 0x3e;
        auVar54._0_8_ = 1;
        return auVar54;
      }
      if (*param_1 == 0x31336624) {
        auVar5._8_8_ = 0x3f;
        auVar5._0_8_ = 1;
        return auVar5;
      }
LAB_00a7e184:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      return auVar1 << 0x40;
    }
    if ((param_2 != 5) || (*param_1 != 0x72657a24 || (char)param_1[1] != 'o')) goto LAB_00a7e184;
LAB_00a7e3cc:
    uVar2 = 0;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = 1;
  return auVar8;
}


// ===== 00a7e6bc  <gimli::arch::[r]::gimli::arch::RiscV>::register_name =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[r]::gimli::arch::RiscV>::register_name */

undefined1  [16] __rustcall
<gimli::arch::[r]::gimli::arch::RiscV>::register_name(ushort param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 0x80) {
    auVar2._8_8_ = *(undefined8 *)(&DAT_0038dcd8 + (ulong)param_1 * 8);
    auVar2._0_8_ = (&PTR_DAT_00afe3c8)[param_1];
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a7e6f0  <gimli::arch::[r]::gimli::arch::RiscV>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[r]::gimli::arch::RiscV>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[r]::gimli::arch::RiscV>::name_to_register(int *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  
  if (param_2 == 4) {
    if (*param_1 == 0x63726661) {
      auVar4._8_8_ = 0x40;
      auVar4._0_8_ = 1;
      return auVar4;
    }
    if (*param_1 != 0x6f72657a) {
      if (*param_1 == 0x30317366) {
LAB_00a7f548:
        auVar8._8_8_ = 0x3a;
        auVar8._0_8_ = 1;
        return auVar8;
      }
      if (*param_1 == 0x31317366) {
LAB_00a7f56c:
        auVar11._8_8_ = 0x3b;
        auVar11._0_8_ = 1;
        return auVar11;
      }
      if (*param_1 == 0x30317466) {
LAB_00a7f590:
        auVar14._8_8_ = 0x3e;
        auVar14._0_8_ = 1;
        return auVar14;
      }
      if (*param_1 == 0x31317466) {
LAB_00a7f5b4:
        auVar17._8_8_ = 0x3f;
        auVar17._0_8_ = 1;
        return auVar17;
      }
LAB_00a7f4fc:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      return auVar1 << 0x40;
    }
  }
  else {
    if (param_2 == 3) {
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7f50c:
        auVar3._8_8_ = 10;
        auVar3._0_8_ = 1;
        return auVar3;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7f530:
        auVar6._8_8_ = 0xb;
        auVar6._0_8_ = 1;
        return auVar6;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a7f554:
        auVar9._8_8_ = 0xc;
        auVar9._0_8_ = 1;
        return auVar9;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7f578:
        auVar12._8_8_ = 0xd;
        auVar12._0_8_ = 1;
        return auVar12;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a7f59c:
        auVar15._8_8_ = 0xe;
        auVar15._0_8_ = 1;
        return auVar15;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a7f5c0:
        auVar18._8_8_ = 0xf;
        auVar18._0_8_ = 1;
        return auVar18;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '6') {
LAB_00a7f5d8:
        auVar20._8_8_ = 0x10;
        auVar20._0_8_ = 1;
        return auVar20;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '7') {
LAB_00a7f5f0:
        auVar22._8_8_ = 0x11;
        auVar22._0_8_ = 1;
        return auVar22;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '8') {
LAB_00a7f608:
        auVar24._8_8_ = 0x12;
        auVar24._0_8_ = 1;
        return auVar24;
      }
      if ((short)*param_1 == 0x3178 && *(char *)((long)param_1 + 2) == '9') {
LAB_00a7f620:
        auVar26._8_8_ = 0x13;
        auVar26._0_8_ = 1;
        return auVar26;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7f62c:
        auVar27._8_8_ = 0x14;
        auVar27._0_8_ = 1;
        return auVar27;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7f644:
        auVar29._8_8_ = 0x15;
        auVar29._0_8_ = 1;
        return auVar29;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a7f65c:
        auVar31._8_8_ = 0x16;
        auVar31._0_8_ = 1;
        return auVar31;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7f674:
        auVar33._8_8_ = 0x17;
        auVar33._0_8_ = 1;
        return auVar33;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a7f68c:
        auVar35._8_8_ = 0x18;
        auVar35._0_8_ = 1;
        return auVar35;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a7f6a4:
        auVar37._8_8_ = 0x19;
        auVar37._0_8_ = 1;
        return auVar37;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '6') {
LAB_00a7f6bc:
        auVar39._8_8_ = 0x1a;
        auVar39._0_8_ = 1;
        return auVar39;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '7') {
LAB_00a7f6d4:
        auVar41._8_8_ = 0x1b;
        auVar41._0_8_ = 1;
        return auVar41;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '8') {
LAB_00a7f6ec:
        auVar43._8_8_ = 0x1c;
        auVar43._0_8_ = 1;
        return auVar43;
      }
      if ((short)*param_1 == 0x3278 && *(char *)((long)param_1 + 2) == '9') {
LAB_00a7f704:
        auVar45._8_8_ = 0x1d;
        auVar45._0_8_ = 1;
        return auVar45;
      }
      if ((short)*param_1 == 0x3378 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7f71c:
        auVar47._8_8_ = 0x1e;
        auVar47._0_8_ = 1;
        return auVar47;
      }
      if ((short)*param_1 == 0x3378 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7f734:
        auVar49._8_8_ = 0x1f;
        auVar49._0_8_ = 1;
        return auVar49;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '0') {
LAB_00a7f74c:
        auVar51._8_8_ = 0x2a;
        auVar51._0_8_ = 1;
        return auVar51;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '1') {
LAB_00a7f764:
        auVar53._8_8_ = 0x2b;
        auVar53._0_8_ = 1;
        return auVar53;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '2') {
LAB_00a7f77c:
        auVar55._8_8_ = 0x2c;
        auVar55._0_8_ = 1;
        return auVar55;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '3') {
LAB_00a7f794:
        auVar57._8_8_ = 0x2d;
        auVar57._0_8_ = 1;
        return auVar57;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '4') {
LAB_00a7f7ac:
        auVar59._8_8_ = 0x2e;
        auVar59._0_8_ = 1;
        return auVar59;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '5') {
LAB_00a7f7c4:
        auVar61._8_8_ = 0x2f;
        auVar61._0_8_ = 1;
        return auVar61;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '6') {
LAB_00a7f7dc:
        auVar63._8_8_ = 0x30;
        auVar63._0_8_ = 1;
        return auVar63;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '7') {
LAB_00a7f7f4:
        auVar65._8_8_ = 0x31;
        auVar65._0_8_ = 1;
        return auVar65;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '8') {
        auVar67._8_8_ = 0x32;
        auVar67._0_8_ = 1;
        return auVar67;
      }
      if ((short)*param_1 == 0x3166 && *(char *)((long)param_1 + 2) == '9') {
        auVar68._8_8_ = 0x33;
        auVar68._0_8_ = 1;
        return auVar68;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '0') {
        auVar69._8_8_ = 0x34;
        auVar69._0_8_ = 1;
        return auVar69;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '1') {
        auVar70._8_8_ = 0x35;
        auVar70._0_8_ = 1;
        return auVar70;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '2') {
        auVar71._8_8_ = 0x36;
        auVar71._0_8_ = 1;
        return auVar71;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '3') {
        auVar72._8_8_ = 0x37;
        auVar72._0_8_ = 1;
        return auVar72;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '4') {
        auVar73._8_8_ = 0x38;
        auVar73._0_8_ = 1;
        return auVar73;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '5') {
        auVar74._8_8_ = 0x39;
        auVar74._0_8_ = 1;
        return auVar74;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7f548;
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7f56c;
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '8') {
LAB_00a7f86c:
        auVar75._8_8_ = 0x3c;
        auVar75._0_8_ = 1;
        return auVar75;
      }
      if ((short)*param_1 == 0x3266 && *(char *)((long)param_1 + 2) == '9') {
LAB_00a7f480:
        auVar2._8_8_ = 0x3d;
        auVar2._0_8_ = 1;
        return auVar2;
      }
      if ((short)*param_1 == 0x3366 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7f590;
      if ((short)*param_1 == 0x3366 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7f5b4;
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '0') {
        auVar76._8_8_ = 0x6a;
        auVar76._0_8_ = 1;
        return auVar76;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '1') {
        auVar77._8_8_ = 0x6b;
        auVar77._0_8_ = 1;
        return auVar77;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '2') {
        auVar78._8_8_ = 0x6c;
        auVar78._0_8_ = 1;
        return auVar78;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '3') {
        auVar79._8_8_ = 0x6d;
        auVar79._0_8_ = 1;
        return auVar79;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '4') {
        auVar80._8_8_ = 0x6e;
        auVar80._0_8_ = 1;
        return auVar80;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '5') {
        auVar81._8_8_ = 0x6f;
        auVar81._0_8_ = 1;
        return auVar81;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '6') {
        auVar82._8_8_ = 0x70;
        auVar82._0_8_ = 1;
        return auVar82;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '7') {
        auVar83._8_8_ = 0x71;
        auVar83._0_8_ = 1;
        return auVar83;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '8') {
        auVar84._8_8_ = 0x72;
        auVar84._0_8_ = 1;
        return auVar84;
      }
      if ((short)*param_1 == 0x3176 && *(char *)((long)param_1 + 2) == '9') {
        auVar85._8_8_ = 0x73;
        auVar85._0_8_ = 1;
        return auVar85;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '0') {
        auVar86._8_8_ = 0x74;
        auVar86._0_8_ = 1;
        return auVar86;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '1') {
        auVar87._8_8_ = 0x75;
        auVar87._0_8_ = 1;
        return auVar87;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '2') {
        auVar88._8_8_ = 0x76;
        auVar88._0_8_ = 1;
        return auVar88;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '3') {
        auVar89._8_8_ = 0x77;
        auVar89._0_8_ = 1;
        return auVar89;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '4') {
        auVar90._8_8_ = 0x78;
        auVar90._0_8_ = 1;
        return auVar90;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '5') {
        auVar91._8_8_ = 0x79;
        auVar91._0_8_ = 1;
        return auVar91;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '6') {
        auVar92._8_8_ = 0x7a;
        auVar92._0_8_ = 1;
        return auVar92;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '7') {
        auVar93._8_8_ = 0x7b;
        auVar93._0_8_ = 1;
        return auVar93;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '8') {
        auVar94._8_8_ = 0x7c;
        auVar94._0_8_ = 1;
        return auVar94;
      }
      if ((short)*param_1 == 0x3276 && *(char *)((long)param_1 + 2) == '9') {
        auVar95._8_8_ = 0x7d;
        auVar95._0_8_ = 1;
        return auVar95;
      }
      if ((short)*param_1 == 0x3376 && *(char *)((long)param_1 + 2) == '0') {
        auVar96._8_8_ = 0x7e;
        auVar96._0_8_ = 1;
        return auVar96;
      }
      if ((short)*param_1 == 0x3376 && *(char *)((long)param_1 + 2) == '1') {
        auVar97._8_8_ = 0x7f;
        auVar97._0_8_ = 1;
        return auVar97;
      }
      if ((short)*param_1 == 0x3173 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7f6bc;
      if ((short)*param_1 == 0x3173 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7f6d4;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7f638;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7f650;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7f668;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7f680;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '4') goto LAB_00a7f698;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '5') goto LAB_00a7f6b0;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7f6c8;
      if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7f6e0;
      if ((short)*param_1 == 0x7366 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7f6f8;
      if ((short)*param_1 == 0x7366 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7f710;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '0') goto LAB_00a7f74c;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '1') goto LAB_00a7f764;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '2') goto LAB_00a7f77c;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '3') goto LAB_00a7f794;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '4') goto LAB_00a7f7ac;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '5') goto LAB_00a7f7c4;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '6') goto LAB_00a7f7dc;
      if ((short)*param_1 == 0x6166 && *(char *)((long)param_1 + 2) == '7') goto LAB_00a7f7f4;
      param_2 = 0x32;
      if ((((((short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '2') &&
            (param_2 = 0x33, (short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '3')) &&
           (param_2 = 0x34, (short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '4')) &&
          ((param_2 = 0x35, (short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '5' &&
           (param_2 = 0x36, (short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '6')))) &&
         ((param_2 = 0x37, (short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '7' &&
          ((param_2 = 0x38, (short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '8' &&
           (param_2 = 0x39, (short)*param_1 != 0x7366 || *(char *)((long)param_1 + 2) != '9')))))) {
        if ((short)*param_1 == 0x7466 && *(char *)((long)param_1 + 2) == '8') goto LAB_00a7f86c;
        if ((short)*param_1 != 0x7466 || *(char *)((long)param_1 + 2) != '9') goto LAB_00a7f4fc;
        goto LAB_00a7f480;
      }
      goto LAB_00a7f528;
    }
    if (param_2 != 2) goto LAB_00a7f4fc;
    if ((short)*param_1 != 0x3078) {
      if ((short)*param_1 != 0x3178) {
        if ((short)*param_1 == 0x3278) {
LAB_00a7f53c:
          auVar7._8_8_ = 2;
          auVar7._0_8_ = 1;
          return auVar7;
        }
        if ((short)*param_1 == 0x3378) {
LAB_00a7f560:
          auVar10._8_8_ = 3;
          auVar10._0_8_ = 1;
          return auVar10;
        }
        if ((short)*param_1 == 0x3478) {
LAB_00a7f584:
          auVar13._8_8_ = 4;
          auVar13._0_8_ = 1;
          return auVar13;
        }
        if ((short)*param_1 == 0x3578) {
LAB_00a7f5a8:
          auVar16._8_8_ = 5;
          auVar16._0_8_ = 1;
          return auVar16;
        }
        if ((short)*param_1 == 0x3678) {
LAB_00a7f5cc:
          auVar19._8_8_ = 6;
          auVar19._0_8_ = 1;
          return auVar19;
        }
        if ((short)*param_1 == 0x3778) {
LAB_00a7f5e4:
          auVar21._8_8_ = 7;
          auVar21._0_8_ = 1;
          return auVar21;
        }
        if ((short)*param_1 == 0x3878) {
LAB_00a7f5fc:
          auVar23._8_8_ = 8;
          auVar23._0_8_ = 1;
          return auVar23;
        }
        if ((short)*param_1 == 0x3978) {
LAB_00a7f614:
          auVar25._8_8_ = 9;
          auVar25._0_8_ = 1;
          return auVar25;
        }
        if ((short)*param_1 == 0x3066) {
LAB_00a7f638:
          auVar28._8_8_ = 0x20;
          auVar28._0_8_ = 1;
          return auVar28;
        }
        if ((short)*param_1 == 0x3166) {
LAB_00a7f650:
          auVar30._8_8_ = 0x21;
          auVar30._0_8_ = 1;
          return auVar30;
        }
        if ((short)*param_1 == 0x3266) {
LAB_00a7f668:
          auVar32._8_8_ = 0x22;
          auVar32._0_8_ = 1;
          return auVar32;
        }
        if ((short)*param_1 == 0x3366) {
LAB_00a7f680:
          auVar34._8_8_ = 0x23;
          auVar34._0_8_ = 1;
          return auVar34;
        }
        if ((short)*param_1 == 0x3466) {
LAB_00a7f698:
          auVar36._8_8_ = 0x24;
          auVar36._0_8_ = 1;
          return auVar36;
        }
        if ((short)*param_1 == 0x3566) {
LAB_00a7f6b0:
          auVar38._8_8_ = 0x25;
          auVar38._0_8_ = 1;
          return auVar38;
        }
        if ((short)*param_1 == 0x3666) {
LAB_00a7f6c8:
          auVar40._8_8_ = 0x26;
          auVar40._0_8_ = 1;
          return auVar40;
        }
        if ((short)*param_1 == 0x3766) {
LAB_00a7f6e0:
          auVar42._8_8_ = 0x27;
          auVar42._0_8_ = 1;
          return auVar42;
        }
        if ((short)*param_1 == 0x3866) {
LAB_00a7f6f8:
          auVar44._8_8_ = 0x28;
          auVar44._0_8_ = 1;
          return auVar44;
        }
        if ((short)*param_1 == 0x3966) {
LAB_00a7f710:
          auVar46._8_8_ = 0x29;
          auVar46._0_8_ = 1;
          return auVar46;
        }
        if ((short)*param_1 == 0x3076) {
          auVar48._8_8_ = 0x60;
          auVar48._0_8_ = 1;
          return auVar48;
        }
        if ((short)*param_1 == 0x3176) {
          auVar50._8_8_ = 0x61;
          auVar50._0_8_ = 1;
          return auVar50;
        }
        if ((short)*param_1 == 0x3276) {
          auVar52._8_8_ = 0x62;
          auVar52._0_8_ = 1;
          return auVar52;
        }
        if ((short)*param_1 == 0x3376) {
          auVar54._8_8_ = 99;
          auVar54._0_8_ = 1;
          return auVar54;
        }
        if ((short)*param_1 == 0x3476) {
          auVar56._8_8_ = 100;
          auVar56._0_8_ = 1;
          return auVar56;
        }
        if ((short)*param_1 == 0x3576) {
          auVar58._8_8_ = 0x65;
          auVar58._0_8_ = 1;
          return auVar58;
        }
        if ((short)*param_1 == 0x3676) {
          auVar60._8_8_ = 0x66;
          auVar60._0_8_ = 1;
          return auVar60;
        }
        if ((short)*param_1 == 0x3776) {
          auVar62._8_8_ = 0x67;
          auVar62._0_8_ = 1;
          return auVar62;
        }
        if ((short)*param_1 == 0x3876) {
          auVar64._8_8_ = 0x68;
          auVar64._0_8_ = 1;
          return auVar64;
        }
        if ((short)*param_1 == 0x3976) {
          auVar66._8_8_ = 0x69;
          auVar66._0_8_ = 1;
          return auVar66;
        }
        if ((short)*param_1 != 0x6172) {
          if ((short)*param_1 == 0x7073) goto LAB_00a7f53c;
          if ((short)*param_1 == 0x7067) goto LAB_00a7f560;
          if ((short)*param_1 == 0x7074) goto LAB_00a7f584;
          if ((short)*param_1 == 0x3074) goto LAB_00a7f5a8;
          if ((short)*param_1 == 0x3174) goto LAB_00a7f5cc;
          if ((short)*param_1 == 0x3274) goto LAB_00a7f5e4;
          if (((short)*param_1 == 0x3073) || ((short)*param_1 == 0x7066)) goto LAB_00a7f5fc;
          if ((short)*param_1 != 0x3173) {
            if ((short)*param_1 == 0x3061) goto LAB_00a7f50c;
            if ((short)*param_1 == 0x3161) goto LAB_00a7f530;
            if ((short)*param_1 == 0x3261) goto LAB_00a7f554;
            if ((short)*param_1 == 0x3361) goto LAB_00a7f578;
            if ((short)*param_1 == 0x3461) goto LAB_00a7f59c;
            if ((short)*param_1 == 0x3561) goto LAB_00a7f5c0;
            if ((short)*param_1 == 0x3661) goto LAB_00a7f5d8;
            if ((short)*param_1 == 0x3761) goto LAB_00a7f5f0;
            if ((short)*param_1 == 0x3273) goto LAB_00a7f608;
            if ((short)*param_1 == 0x3373) goto LAB_00a7f620;
            if ((short)*param_1 == 0x3473) goto LAB_00a7f62c;
            if ((short)*param_1 == 0x3573) goto LAB_00a7f644;
            if ((short)*param_1 == 0x3673) goto LAB_00a7f65c;
            if ((short)*param_1 == 0x3773) goto LAB_00a7f674;
            if ((short)*param_1 == 0x3873) goto LAB_00a7f68c;
            if ((short)*param_1 == 0x3973) goto LAB_00a7f6a4;
            if ((short)*param_1 == 0x3374) goto LAB_00a7f6ec;
            if ((short)*param_1 == 0x3474) goto LAB_00a7f704;
            if ((short)*param_1 == 0x3574) goto LAB_00a7f71c;
            if ((short)*param_1 == 0x3674) goto LAB_00a7f734;
            goto LAB_00a7f4fc;
          }
          goto LAB_00a7f614;
        }
      }
      param_2 = 1;
      goto LAB_00a7f528;
    }
  }
  param_2 = 0;
LAB_00a7f528:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a7f980  <alloc::collections::btree::node::[u]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_25}::Leaf>>::push_with_handle =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[u]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,
   u64, gimli::read::abbrev::Abbreviation, {backref 25}::Leaf>>::push_with_handle */

void __rustcall
<alloc::collections::btree::node::[u]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_25}::Leaf>>
::push_with_handle(long *param_1,long *param_2,undefined8 param_3,void *param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  uVar1 = *(ushort *)(lVar3 + 0x532);
  if (uVar1 < 0xb) {
    *(ushort *)(lVar3 + 0x532) = uVar1 + 1;
    *(undefined8 *)(lVar3 + (ulong)uVar1 * 8 + 0x4d8) = param_3;
    memcpy((void *)(lVar3 + (ulong)(uint)uVar1 * 0x70),param_4,0x70);
    lVar2 = param_2[1];
    *param_1 = lVar3;
    param_1[1] = lVar2;
    param_1[2] = (ulong)uVar1;
    return;
  }
                    /* try { // try from 00a7f9f4 to 00a7fa0b has its CatchHandler @ 00a7fa10 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic(&DAT_002c02c8,0x20,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afce30);
}


// ===== 00a7fa34  <alloc::collections::btree::node::[v]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_25}::Internal>>::push =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::btree::node::[v]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,
   u64, gimli::read::abbrev::Abbreviation, {backref 25}::Internal>>::push */

void __rustcall
<alloc::collections::btree::node::[v]::alloc::collections::btree::node::NodeRef<alloc::collections::btree::node::marker::Mut,u64,gimli::read::abbrev::Abbreviation,{backref_25}::Internal>>
::push(long *param_1,undefined8 param_2,void *param_3,long param_4,long param_5)

{
  long lVar1;
  ushort uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  if (param_5 == param_1[1] + -1) {
    lVar6 = *param_1;
    uVar2 = *(ushort *)(lVar6 + 0x532);
    if (uVar2 < 0xb) {
      *(ushort *)(lVar6 + 0x532) = uVar2 + 1;
      *(undefined8 *)(lVar6 + (ulong)uVar2 * 8 + 0x4d8) = param_2;
      memcpy((void *)(lVar6 + (ulong)uVar2 * 0x70),param_3,0x70);
      lVar1 = (ulong)uVar2 + 1;
      *(long *)(lVar6 + lVar1 * 8 + 0x538) = param_4;
      *(long *)(param_4 + 0x4d0) = lVar6;
      *(short *)(param_4 + 0x530) = (short)lVar1;
      return;
    }
    ppuVar5 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afce60;
    pcVar3 = 
    "assertion failed: idx < CAPACITYInvalid exports trie import nameassertion failed: new_cap >= lenTLS_PSK_WITH_ARIA_256_GCM_SHA384\x01"
    ;
    uVar4 = 0x20;
  }
  else {
    ppuVar5 = &PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afce48;
    pcVar3 = "assertion failed: edge.height == self.height - 1";
    uVar4 = 0x30;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a7fae0 to 00a7fae3 has its CatchHandler @ 00a7fae8 */
  core::panicking::panic(pcVar3,uVar4,ppuVar5);
}


// ===== 00a7fb0c  <gimli::arch::[x]::gimli::arch::X86>::name_to_register =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::arch::[x]::gimli::arch::X86>::name_to_register */

undefined1  [16] __rustcall
<gimli::arch::[x]::gimli::arch::X86>::name_to_register(int *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  if ((long)param_2 < 4) {
    if (param_2 == 2) {
      if ((short)*param_1 == 0x4152) {
        auVar9._8_8_ = 8;
        auVar9._0_8_ = 1;
        return auVar9;
      }
      if ((short)*param_1 == 0x7365) {
        auVar12._8_8_ = 0x28;
        auVar12._0_8_ = 1;
        return auVar12;
      }
      if ((short)*param_1 == 0x7363) {
        auVar15._8_8_ = 0x29;
        auVar15._0_8_ = 1;
        return auVar15;
      }
      if ((short)*param_1 == 0x7373) {
        auVar18._8_8_ = 0x2a;
        auVar18._0_8_ = 1;
        return auVar18;
      }
      if ((short)*param_1 == 0x7364) {
        auVar21._8_8_ = 0x2b;
        auVar21._0_8_ = 1;
        return auVar21;
      }
      if ((short)*param_1 == 0x7366) {
        auVar24._8_8_ = 0x2c;
        auVar24._0_8_ = 1;
        return auVar24;
      }
      if ((short)*param_1 == 0x7367) {
        auVar27._8_8_ = 0x2d;
        auVar27._0_8_ = 1;
        return auVar27;
      }
      if ((short)*param_1 == 0x7274) {
        auVar6._8_8_ = 0x30;
        auVar6._0_8_ = 1;
        return auVar6;
      }
    }
    else if (param_2 == 3) {
      if ((short)*param_1 == 0x6165 && *(char *)((long)param_1 + 2) == 'x') {
        uVar2 = 0;
      }
      else {
        if ((short)*param_1 != 0x6365 || *(char *)((long)param_1 + 2) != 'x') {
          if ((short)*param_1 == 0x6465 && *(char *)((long)param_1 + 2) == 'x') {
            auVar16._8_8_ = 2;
            auVar16._0_8_ = 1;
            return auVar16;
          }
          if ((short)*param_1 == 0x6265 && *(char *)((long)param_1 + 2) == 'x') {
            auVar19._8_8_ = 3;
            auVar19._0_8_ = 1;
            return auVar19;
          }
          if ((short)*param_1 == 0x7365 && *(char *)((long)param_1 + 2) == 'p') {
            auVar22._8_8_ = 4;
            auVar22._0_8_ = 1;
            return auVar22;
          }
          if ((short)*param_1 == 0x6265 && *(char *)((long)param_1 + 2) == 'p') {
            auVar25._8_8_ = 5;
            auVar25._0_8_ = 1;
            return auVar25;
          }
          if ((short)*param_1 == 0x7365 && *(char *)((long)param_1 + 2) == 'i') {
            auVar28._8_8_ = 6;
            auVar28._0_8_ = 1;
            return auVar28;
          }
          if ((short)*param_1 == 0x6465 && *(char *)((long)param_1 + 2) == 'i') {
            auVar30._8_8_ = 7;
            auVar30._0_8_ = 1;
            return auVar30;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '0') {
            auVar31._8_8_ = 0xb;
            auVar31._0_8_ = 1;
            return auVar31;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '1') {
            auVar32._8_8_ = 0xc;
            auVar32._0_8_ = 1;
            return auVar32;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '2') {
            auVar33._8_8_ = 0xd;
            auVar33._0_8_ = 1;
            return auVar33;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '3') {
            auVar34._8_8_ = 0xe;
            auVar34._0_8_ = 1;
            return auVar34;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '4') {
            auVar35._8_8_ = 0xf;
            auVar35._0_8_ = 1;
            return auVar35;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '5') {
            auVar36._8_8_ = 0x10;
            auVar36._0_8_ = 1;
            return auVar36;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '6') {
            auVar37._8_8_ = 0x11;
            auVar37._0_8_ = 1;
            return auVar37;
          }
          if ((short)*param_1 == 0x7473 && *(char *)((long)param_1 + 2) == '7') {
            auVar38._8_8_ = 0x12;
            auVar38._0_8_ = 1;
            return auVar38;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '0') {
            auVar39._8_8_ = 0x1d;
            auVar39._0_8_ = 1;
            return auVar39;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '1') {
            auVar40._8_8_ = 0x1e;
            auVar40._0_8_ = 1;
            return auVar40;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '2') {
            auVar41._8_8_ = 0x1f;
            auVar41._0_8_ = 1;
            return auVar41;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '3') {
            auVar42._8_8_ = 0x20;
            auVar42._0_8_ = 1;
            return auVar42;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '4') {
            auVar43._8_8_ = 0x21;
            auVar43._0_8_ = 1;
            return auVar43;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '5') {
            auVar44._8_8_ = 0x22;
            auVar44._0_8_ = 1;
            return auVar44;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '6') {
            auVar45._8_8_ = 0x23;
            auVar45._0_8_ = 1;
            return auVar45;
          }
          if ((short)*param_1 == 0x6d6d && *(char *)((long)param_1 + 2) == '7') {
            auVar4._8_8_ = 0x24;
            auVar4._0_8_ = 1;
            return auVar4;
          }
          goto LAB_00a7fedc;
        }
        uVar2 = 1;
      }
      auVar13._8_8_ = uVar2;
      auVar13._0_8_ = 1;
      return auVar13;
    }
  }
  else if (param_2 == 4) {
    if (*param_1 == 0x306d6d78) {
      auVar7._8_8_ = 0x15;
      auVar7._0_8_ = 1;
      return auVar7;
    }
    if (*param_1 == 0x316d6d78) {
      auVar11._8_8_ = 0x16;
      auVar11._0_8_ = 1;
      return auVar11;
    }
    if (*param_1 == 0x326d6d78) {
      auVar14._8_8_ = 0x17;
      auVar14._0_8_ = 1;
      return auVar14;
    }
    if (*param_1 == 0x336d6d78) {
      auVar17._8_8_ = 0x18;
      auVar17._0_8_ = 1;
      return auVar17;
    }
    if (*param_1 == 0x346d6d78) {
      auVar20._8_8_ = 0x19;
      auVar20._0_8_ = 1;
      return auVar20;
    }
    if (*param_1 == 0x356d6d78) {
      auVar23._8_8_ = 0x1a;
      auVar23._0_8_ = 1;
      return auVar23;
    }
    if (*param_1 == 0x366d6d78) {
      auVar26._8_8_ = 0x1b;
      auVar26._0_8_ = 1;
      return auVar26;
    }
    if (*param_1 == 0x376d6d78) {
      auVar29._8_8_ = 0x1c;
      auVar29._0_8_ = 1;
      return auVar29;
    }
    if (*param_1 == 0x7274646c) {
      auVar5._8_8_ = 0x31;
      auVar5._0_8_ = 1;
      return auVar5;
    }
  }
  else if (param_2 == 5) {
    if (*param_1 == 0x7363786d && (char)param_1[1] == 'r') {
      auVar8._8_8_ = 0x27;
      auVar8._0_8_ = 1;
      return auVar8;
    }
  }
  else if (param_2 == 7) {
    if (*param_1 == 0x622e7366 && *(int *)((long)param_1 + 3) == 0x65736162) {
      auVar10._8_8_ = 0x5d;
      auVar10._0_8_ = 1;
      return auVar10;
    }
    if (*param_1 == 0x622e7367 && *(int *)((long)param_1 + 3) == 0x65736162) {
      auVar3._8_8_ = 0x5e;
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
LAB_00a7fedc:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


// ===== 00a8014c  FUN_00a8014c =====

ulong FUN_00a8014c(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = 0;
  uVar4 = 0x5d0;
  do {
    uVar1 = uVar3 + (uVar4 >> 1);
    uVar4 = uVar4 - (uVar4 >> 1);
    uVar2 = (uint)param_1;
    if (*(uint *)(&DAT_003884c0 + uVar1 * 8) <= uVar2) {
      uVar3 = uVar1;
    }
  } while (1 < uVar4);
  lVar5 = uVar3 * 8;
  if (*(uint *)(&DAT_003884c0 + lVar5) < uVar2) {
    uVar3 = uVar3 + 1;
  }
  if (*(uint *)(&DAT_003884c0 + lVar5) == uVar2) {
    if (0x5cf < uVar3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (0x5d0,0x5d0,&PTR_s__rust_deps_gimli_0_34_0_src_case_00afce78);
    }
    param_1 = (ulong)*(uint *)(&DAT_003884c4 + uVar3 * 8);
  }
  return param_1;
}


// ===== 00a801c0  gimli::case_fold::case_folding_djb_hash =====

/* WARNING: Unknown calling convention: __rustcall */
/* gimli::case_fold::case_folding_djb_hash */

int __rustcall gimli::case_fold::case_folding_djb_hash(byte *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  uint *puVar6;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  uint local_54;
  uint *puVar7;
  
  if (param_2 == 0) {
    iVar9 = 0x1505;
  }
  else {
    iVar9 = 0x1505;
    pbVar8 = param_1;
    do {
      pbVar3 = pbVar8 + 1;
      uVar2 = (uint)*pbVar8;
      if ((char)*pbVar8 < '\0') {
        if (uVar2 < 0xe0) {
          uVar2 = pbVar8[1] & 0x3f | (uVar2 & 0x1f) << 6;
          pbVar3 = pbVar8 + 2;
        }
        else {
          uVar10 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (uVar2 < 0xf0) {
            uVar2 = uVar10 | (uVar2 & 0x1f) << 0xc;
            pbVar3 = pbVar8 + 3;
          }
          else {
            pbVar3 = pbVar8 + 4;
            uVar2 = pbVar8[3] & 0x3f | uVar10 << 6 | (uVar2 & 7) << 0x12;
          }
        }
        if (uVar2 < 0x80) goto LAB_00a8027c;
        uVar2 = FUN_00a8014c();
        bVar5 = (byte)uVar2;
        if (uVar2 < 0x80) {
          local_54 = uVar2 & 0xff;
          puVar4 = (uint *)((ulong)&local_54 | 1);
        }
        else {
          if (uVar2 < 0x800) {
            local_54 = (uint)(bVar5 & 0xffff3f | 0x80) << 8;
            bVar5 = (byte)(uVar2 >> 6) | 0xc0;
            puVar4 = (uint *)((ulong)&local_54 | 2);
          }
          else {
            bVar1 = (byte)(uVar2 >> 6);
            if (uVar2 >> 0x10 != 0) {
              local_54 = CONCAT22(CONCAT11(bVar5,bVar1),
                                  CONCAT11((char)(uVar2 >> 0xc),(char)(uVar2 >> 0x12))) & 0x3f3f3fff
                         | 0x808080f0;
              puVar4 = (uint *)&stack0xffffffffffffffb0;
              goto LAB_00a80330;
            }
            local_54._0_2_ = (bVar1 & 0xff3f | 0x80) << 8;
            local_54 = CONCAT12(bVar5,(short)local_54) & 0xff3fffff | 0x800000;
            bVar5 = (byte)(uVar2 >> 0xc) | 0xe0;
            puVar4 = (uint *)((ulong)&local_54 | 3);
          }
          local_54 = CONCAT31(local_54._1_3_,bVar5);
        }
LAB_00a80330:
        puVar7 = &local_54;
        do {
          puVar6 = (uint *)((long)puVar7 + 1);
          iVar9 = iVar9 * 0x21 + (uint)(byte)*puVar7;
          puVar7 = puVar6;
        } while (puVar6 != puVar4);
      }
      else {
LAB_00a8027c:
        uVar10 = 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar10 = 0;
        }
        iVar9 = (uVar10 | uVar2) + iVar9 * 0x21;
      }
      pbVar8 = pbVar3;
    } while (pbVar3 != param_1 + param_2);
  }
  return iVar9;
}


// ===== 00a80370  gimli::case_fold::case_fold =====

/* WARNING: Unknown calling convention: __rustcall */
/* gimli::case_fold::case_fold */

ulong __rustcall gimli::case_fold::case_fold(uint param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_1 < 0x80) {
    uVar2 = 0x20;
    if (0x19 < param_1 - 0x41) {
      uVar2 = 0;
    }
    return (ulong)(uVar2 | param_1);
  }
  uVar1 = FUN_00a8014c();
  return uVar1;
}


// ===== 00a80394  <gimli::read::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::Error as core::fmt::Display>::fmt */

void __rustcall <gimli::read::Error_as_core::fmt::Display>::fmt(byte *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a803b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00a803bc + (ulong)*(ushort *)(&BYTE_00384d36 + (ulong)*param_1 * 2) * 4))();
  return;
}


// ===== 00a80c28  <core::hint::select_unpredictable::DropOnPanic<usize>as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::hint::select_unpredictable::DropOnPanic<usize> as core::ops::drop::Drop>::drop */

void __rustcall
<core::hint::select_unpredictable::DropOnPanic<usize>as_core::ops::drop::Drop>::drop(void)

{
  return;
}


// ===== 00a80c2c  <gimli::constants::DwTag_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwTag as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwTag_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  auVar2 = <gimli::constants::[Z]::gimli::constants::DwTag>::static_string();
  if (auVar2._0_8_ != 0) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,auVar2._0_8_,auVar2._8_8_);
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00e10;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002acf26,&local_30);
                    /* try { // try from 00a80c90 to 00a80c97 has its CatchHandler @ 00a80cc0 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a80cdc  <gimli::constants::DwAte_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwAte as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwAte_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  bVar1 = *param_1;
  puVar3 = &DAT_0038656a;
  uVar4 = 0xe;
  switch(bVar1) {
  case 1:
    puVar3 = &DAT_0038655c;
    goto LAB_00a80ddc;
  case 2:
    break;
  case 3:
    puVar3 = &UNK_00386578;
    goto LAB_00a80dcc;
  case 4:
    puVar3 = &UNK_0038658c;
    goto LAB_00a80dec;
  case 5:
    puVar3 = &UNK_00386598;
    goto LAB_00a80d78;
  case 6:
    puVar3 = &DAT_003865a5;
    uVar4 = 0x12;
    break;
  case 7:
    puVar3 = &DAT_003865b7;
    uVar4 = 0xf;
    break;
  case 8:
    puVar3 = &DAT_003865c6;
    goto LAB_00a80dcc;
  case 9:
    puVar3 = &DAT_003865da;
    uVar4 = 0x16;
    break;
  case 10:
    puVar3 = &UNK_003865f0;
    goto LAB_00a80e7c;
  case 0xb:
    puVar3 = &UNK_00386605;
    goto LAB_00a80e7c;
  case 0xc:
    puVar3 = &DAT_0038661a;
LAB_00a80d78:
    uVar4 = 0xd;
    break;
  case 0xd:
    puVar3 = &DAT_00386627;
    uVar4 = 0x13;
    break;
  case 0xe:
    puVar3 = &DAT_0038663a;
LAB_00a80e7c:
    uVar4 = 0x15;
    break;
  case 0xf:
    puVar3 = &UNK_0038664f;
LAB_00a80dcc:
    uVar4 = 0x14;
    break;
  case 0x10:
    puVar3 = &DAT_00386663;
    goto LAB_00a80db0;
  case 0x11:
    puVar3 = &UNK_0038666d;
LAB_00a80db0:
    uVar4 = 10;
    break;
  case 0x12:
    puVar3 = &DAT_00386677;
LAB_00a80dec:
    uVar4 = 0xc;
    break;
  default:
    if (bVar1 == 0x80) {
      puVar3 = &UNK_00386683;
    }
    else {
      if (bVar1 != 0xff) {
        puStack_28 = PTR_fmt_00b00c18;
        local_30 = param_1;
        alloc::fmt::format::format_inner(auStack_48,&DAT_002a7e86,&local_30);
                    /* try { // try from 00a80e28 to 00a80e2f has its CatchHandler @ 00a80ea4 */
        uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
        <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
        return uVar2 & 0xffffffff;
      }
      puVar3 = &UNK_00386691;
    }
LAB_00a80ddc:
    uVar4 = 0xe;
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a80ec0  <gimli::constants::DwLle_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwLle as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwLle_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 < 10) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e0d8 + *(int *)(&DAT_0038e0d8 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e100 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002ba751,&local_30);
                    /* try { // try from 00a80f34 to 00a80f3b has its CatchHandler @ 00a80f64 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a80f80  <gimli::constants::DwDs_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwDs as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwDs_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  if (*param_1 - 1 < 5) {
    uVar1 = (ulong)(*param_1 - 1) & 0xff;
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e150 + *(int *)(&DAT_0038e150 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e168 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002ab4ae,&local_30);
                    /* try { // try from 00a80ffc to 00a81003 has its CatchHandler @ 00a8102c */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a81048  <alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification>as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification> as
   core::ops::drop::Drop>::drop */

void __rustcall
<alloc::raw_vec::RawVec<gimli::read::abbrev::AttributeSpecification>as_core::ops::drop::Drop>::drop
          (undefined8 param_1)

{
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(param_1,8,0x10);
  return;
}


// ===== 00a81054  <alloc::raw_vec::RawVec<u8>as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::raw_vec::RawVec<u8> as core::ops::drop::Drop>::drop */

void __rustcall <alloc::raw_vec::RawVec<u8>as_core::ops::drop::Drop>::drop(undefined8 param_1)

{
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(param_1,1,1);
  return;
}


// ===== 00a81060  <gimli::constants::DwAt_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwAt as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwAt_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  auVar2 = <gimli::constants::[1b]::gimli::constants::DwAt>::static_string();
  if (auVar2._0_8_ != 0) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,auVar2._0_8_,auVar2._8_8_);
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00e10;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002b8fe9,&local_30);
                    /* try { // try from 00a810c4 to 00a810cb has its CatchHandler @ 00a810f4 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a81110  FUN_00a81110 =====

void FUN_00a81110(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_002bd21c,4,&local_18,&DAT_00afce90);
  return;
}


// ===== 00a81150  <&gimli::read::abbrev::AttributeSpecification_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&gimli::read::abbrev::AttributeSpecification as core::fmt::Debug>::fmt */

void __rustcall
<&gimli::read::abbrev::AttributeSpecification_as_core::fmt::Debug>::fmt
          (long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field3_finish
            (param_2,&DAT_0038c0b5,0x16,&DAT_002bd1cc,4,local_18 + 8,&DAT_00afced0,&DAT_002bd250,4,
             local_18 + 10,&DAT_00afcef0,&DAT_0038c0cb,0x14,&local_18,&DAT_00afcf10);
  return;
}


// ===== 00a811e0  <&u16_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&u16 as core::fmt::Debug>::fmt */

void __rustcall <&u16_as_core::fmt::Debug>::fmt(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <u16_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <u16_as_core::fmt::Display>::fmt();
    return;
  }
  <u16_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a811fc  <&i64_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&i64 as core::fmt::Debug>::fmt */

void __rustcall <&i64_as_core::fmt::Debug>::fmt(undefined8 *param_1,long param_2)

{
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) != 0) {
    <isize_as_core::fmt::LowerHex>::fmt(*param_1);
    return;
  }
  if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
    <i64_as_core::fmt::Display>::fmt();
    return;
  }
  <isize_as_core::fmt::UpperHex>::fmt();
  return;
}


// ===== 00a81218  <gimli::constants::DwForm_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwForm as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwForm_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  auVar2 = <gimli::constants::[1n]::gimli::constants::DwForm>::static_string();
  if (auVar2._0_8_ != 0) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,auVar2._0_8_,auVar2._8_8_);
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00e10;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002b1e88,&local_30);
                    /* try { // try from 00a8127c to 00a81283 has its CatchHandler @ 00a812ac */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a812c8  FUN_00a812c8 =====

void FUN_00a812c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,&DAT_0038b96e,6,&local_18,&DAT_00afce90);
  return;
}


// ===== 00a81308  <gimli::constants::DwVirtuality_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwVirtuality as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwVirtuality_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 < 3) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e190 + *(int *)(&DAT_0038e190 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e1a0 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002ab4bf,&local_30);
                    /* try { // try from 00a8137c to 00a81383 has its CatchHandler @ 00a813ac */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a813c8  <gimli::constants::DwLang_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwLang as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwLang_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  auVar2 = <gimli::constants::[2V]::gimli::constants::DwLang>::static_string();
  if (auVar2._0_8_ != 0) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,auVar2._0_8_,auVar2._8_8_);
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00e10;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002a8dbd,&local_30);
                    /* try { // try from 00a8142c to 00a81433 has its CatchHandler @ 00a8145c */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a81478  <gimli::constants::DwSect_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwSect as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwSect_as_core::fmt::Display>::fmt(int *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  int *local_30;
  undefined *puStack_28;
  
  uVar1 = *param_1 - 1;
  if ((uVar1 < 8) && ((0xfdU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,(&PTR_DAT_00afe7c8)[uVar1],
                       *(undefined8 *)(&DAT_0038e1b8 + (ulong)uVar1 * 8));
    return uVar2;
  }
  puStack_28 = PTR_fmt_00b00c40;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002b58dc,&local_30);
                    /* try { // try from 00a814f8 to 00a814ff has its CatchHandler @ 00a81528 */
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar2 & 0xffffffff;
}


// ===== 00a81544  <gimli::read::endian_slice::DebugBytes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::endian_slice::DebugBytes as core::fmt::Debug>::fmt */

void __rustcall
<gimli::read::endian_slice::DebugBytes_as_core::fmt::Debug>::fmt(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [16];
  ulong local_38;
  long lStack_30;
  undefined8 local_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_48,param_2);
  local_38 = *param_1;
  uVar1 = param_1[1];
  lStack_30 = local_38 + uVar1;
  local_28 = 8;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::
  entries<gimli::read::endian_slice::DebugByte,core::iter::adapters::map::Map<_backref_33_::copied::Copied<_backref_33_::take::Take<core::slice::iter::Iter<u8>>>,_backref_19_::_closure_0_>>
            (auStack_48,&local_38);
  if (8 < uVar1) {
    local_38 = uVar1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_48,&local_38,&DAT_00afceb0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_48);
  return;
}


// ===== 00a815bc  <gimli[1de8a57408df84df]::read::abbrev::AttributeSpecification_as_core[bcece726f298455b]::slice::cmp::SlicePartialEq<gimli[1de8a57408df84df]::read::abbrev::AttributeSpecification>>::equal_same_length =====

/* <gimli[1de8a57408df84df]::read::abbrev::AttributeSpecification as
   core[bcece726f298455b]::slice::cmp::SlicePartialEq<gimli[1de8a57408df84df]::read::abbrev::AttributeSpecification>>::equal_same_length
    */

undefined8
<gimli[1de8a57408df84df]::read::abbrev::AttributeSpecification_as_core[bcece726f298455b]::slice::cmp::SlicePartialEq<gimli[1de8a57408df84df]::read::abbrev::AttributeSpecification>>
::equal_same_length(long param_1,long param_2,long param_3)

{
  short *psVar1;
  short *psVar2;
  
  if (param_3 != 0) {
    psVar1 = (short *)(param_2 + 10);
    psVar2 = (short *)(param_1 + 10);
    do {
      if ((*(long *)(psVar2 + -5) != *(long *)(psVar1 + -5)) || (psVar2[-1] != psVar1[-1])) {
        return 0;
      }
      if (*psVar2 != *psVar1) {
        return 0;
      }
      param_3 = param_3 + -1;
      psVar1 = psVar1 + 8;
      psVar2 = psVar2 + 8;
    } while (param_3 != 0);
  }
  return 1;
}


// ===== 00a81610  <gimli::constants::DwEnd_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwEnd as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwEnd_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  bVar1 = *param_1;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      if (bVar1 != 1) {
LAB_00a816ac:
        puStack_28 = PTR_fmt_00b00c18;
        local_30 = param_1;
        alloc::fmt::format::format_inner(auStack_48,&DAT_002a7e98,&local_30);
                    /* try { // try from 00a816d0 to 00a816d7 has its CatchHandler @ 00a81700 */
        uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
        <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
        return uVar2 & 0xffffffff;
      }
      puVar3 = &DAT_0038ba09;
      uVar4 = 10;
      goto LAB_00a81698;
    }
    puVar3 = &DAT_0038b9fb;
  }
  else {
    if (bVar1 == 2) {
      puVar3 = &DAT_0038ba13;
      uVar4 = 0xd;
      goto LAB_00a81698;
    }
    if (bVar1 == 0x40) {
      puVar3 = &DAT_0038ba20;
    }
    else {
      if (bVar1 != 0xff) goto LAB_00a816ac;
      puVar3 = &DAT_0038ba2e;
    }
  }
  uVar4 = 0xe;
LAB_00a81698:
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a8171c  <gimli::constants::DwAccess_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwAccess as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwAccess_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  if (*param_1 - 1 < 3) {
    uVar1 = (ulong)(*param_1 - 1) & 0xff;
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e1f8 + *(int *)(&DAT_0038e1f8 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e208 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002aa618,&local_30);
                    /* try { // try from 00a81798 to 00a8179f has its CatchHandler @ 00a817c8 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a817e4  <gimli::constants::DwVis_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwVis as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwVis_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  if (*param_1 - 1 < 3) {
    uVar1 = (ulong)(*param_1 - 1) & 0xff;
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e220 + *(int *)(&DAT_0038e220 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e230 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002b1e9b,&local_30);
                    /* try { // try from 00a81860 to 00a81867 has its CatchHandler @ 00a81890 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a818ac  <gimli::constants::DwAddr_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwAddr as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwAddr_as_core::fmt::Display>::fmt(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined *puStack_28;
  
  if (*param_1 != 0) {
    puStack_28 = PTR_fmt_00b00c60;
    local_30 = param_1;
    alloc::fmt::format::format_inner(auStack_48,&DAT_002b4b3e,&local_30);
                    /* try { // try from 00a818ec to 00a818f3 has its CatchHandler @ 00a8193c */
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
    <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
    return uVar1 & 0xffffffff;
  }
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_0038ba9b,0xc);
  return uVar1;
}


// ===== 00a81958  <gimli::constants::DwInl_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwInl as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwInl_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 < 4) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e248 + *(int *)(&DAT_0038e248 + uVar1 * 4),
                       *(undefined8 *)(&DAT_002bf9e8 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002a6eb6,&local_30);
                    /* try { // try from 00a819cc to 00a819d3 has its CatchHandler @ 00a819fc */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a81a18  <gimli::constants::DwOrd_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwOrd as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwOrd_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined *puStack_28;
  
  if (*param_1 == '\0') {
    pcVar2 = &DAT_002a10c0;
  }
  else {
    if (*param_1 != '\x01') {
      puStack_28 = PTR_fmt_00b00c18;
      local_30 = param_1;
      alloc::fmt::format::format_inner(auStack_48,&DAT_002acf38,&local_30);
                    /* try { // try from 00a81a8c to 00a81a93 has its CatchHandler @ 00a81abc */
      uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
      <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
      return uVar1 & 0xffffffff;
    }
    pcVar2 = "DW_ORD_col_major";
  }
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,pcVar2,0x10);
  return uVar1;
}


// ===== 00a81ad8  <gimli::read::endian_slice::DebugByte_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::endian_slice::DebugByte as core::fmt::Debug>::fmt */

void __rustcall
<gimli::read::endian_slice::DebugByte_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00c20;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_0038baf9,&local_20);
  return;
}


// ===== 00a81b14  <gimli::constants::DwId_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwId as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwId_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 < 4) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e258 + *(int *)(&DAT_0038e258 + uVar1 * 4),
                       *(undefined8 *)(&DAT_002bfda8 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002b8ffa,&local_30);
                    /* try { // try from 00a81b88 to 00a81b8f has its CatchHandler @ 00a81bb8 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a81bd4  <gimli::constants::DwCc_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwCc as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwCc_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  bVar1 = *param_1;
  if (bVar1 < 4) {
    if (bVar1 == 1) {
      puVar3 = &UNK_0038bb4a;
    }
    else {
      if (bVar1 == 2) {
        puVar3 = &DAT_0038bb56;
        goto LAB_00a81ce4;
      }
      if (bVar1 != 3) goto LAB_00a81c6c;
      puVar3 = &DAT_0038bb63;
    }
    uVar4 = 0xc;
  }
  else {
    if (bVar1 < 0x40) {
      if (bVar1 == 4) {
        puVar3 = &DAT_0038bb6f;
        uVar4 = 0x17;
      }
      else {
        if (bVar1 != 5) {
LAB_00a81c6c:
          puStack_28 = PTR_fmt_00b00c18;
          local_30 = param_1;
          alloc::fmt::format::format_inner(auStack_48,&DAT_002a3411,&local_30);
                    /* try { // try from 00a81c90 to 00a81c97 has its CatchHandler @ 00a81cfc */
          uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
          <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
          return uVar2 & 0xffffffff;
        }
        puVar3 = &DAT_0038bb86;
        uVar4 = 0x13;
      }
      goto LAB_00a81ce8;
    }
    if (bVar1 == 0x40) {
      puVar3 = &DAT_0038bb99;
    }
    else {
      if (bVar1 != 0xff) goto LAB_00a81c6c;
      puVar3 = &DAT_0038bba6;
    }
LAB_00a81ce4:
    uVar4 = 0xd;
  }
LAB_00a81ce8:
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a81d18  <gimli::constants::DwDsc_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwDsc as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwDsc_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined *puStack_28;
  
  if (*param_1 == '\0') {
    puVar2 = &DAT_0038bbb3;
  }
  else {
    if (*param_1 != '\x01') {
      puStack_28 = PTR_fmt_00b00c18;
      local_30 = param_1;
      alloc::fmt::format::format_inner(auStack_48,&DAT_002aa62d,&local_30);
                    /* try { // try from 00a81d8c to 00a81d93 has its CatchHandler @ 00a81dbc */
      uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
      <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
      return uVar1 & 0xffffffff;
    }
    puVar2 = &DAT_0038bbbf;
  }
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar2,0xc);
  return uVar1;
}


// ===== 00a81dd8  <gimli::constants::DwLns_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwLns as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwLns_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  if (*param_1 - 1 < 0xc) {
    uVar1 = (ulong)(*param_1 - 1) & 0xff;
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e268 + *(int *)(&DAT_0038e268 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e298 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002bc014,&local_30);
                    /* try { // try from 00a81e54 to 00a81e5b has its CatchHandler @ 00a81e84 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a81ea0  <gimli::constants::DwLne_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwLne as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwLne_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  bVar1 = *param_1;
  if (bVar1 < 4) {
    if (bVar1 == 1) {
      puVar3 = &DAT_0038bcaa;
      uVar4 = 0x13;
    }
    else {
      if (bVar1 == 2) {
        puVar3 = &UNK_0038bcbd;
      }
      else {
        if (bVar1 != 3) {
LAB_00a81f28:
          puStack_28 = PTR_fmt_00b00c18;
          local_30 = param_1;
          alloc::fmt::format::format_inner(auStack_48,&DAT_002a449b,&local_30);
                    /* try { // try from 00a81f4c to 00a81f53 has its CatchHandler @ 00a81fac */
          uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
          <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
          return uVar2 & 0xffffffff;
        }
        puVar3 = &DAT_0038bccf;
      }
      uVar4 = 0x12;
    }
  }
  else if (bVar1 == 4) {
    puVar3 = &DAT_0038bce1;
    uVar4 = 0x18;
  }
  else {
    if (bVar1 == 0x80) {
      puVar3 = &DAT_0038bcf9;
    }
    else {
      if (bVar1 != 0xff) goto LAB_00a81f28;
      puVar3 = &DAT_0038bd07;
    }
    uVar4 = 0xe;
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a81fc8  <gimli::read::endian_slice::DebugLen_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::endian_slice::DebugLen as core::fmt::Debug>::fmt */

void __rustcall
<gimli::read::endian_slice::DebugLen_as_core::fmt::Debug>::fmt
          (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_fmt_00b00c10;
  local_20 = param_1;
  core::fmt::write(*param_2,param_2[1],&DAT_002ae8f1,&local_20);
  return;
}


// ===== 00a82004  <gimli::constants::DwIdx_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwIdx as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwIdx_as_core::fmt::Display>::fmt(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  ushort *local_30;
  undefined *puStack_28;
  
  uVar1 = *param_1;
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      puVar3 = &DAT_0038bd15;
      uVar4 = 0x13;
      goto LAB_00a8211c;
    }
    if (uVar1 != 2) {
      if (uVar1 != 3) goto LAB_00a8209c;
      puVar3 = &DAT_0038bd28;
      uVar4 = 0x11;
      goto LAB_00a8211c;
    }
    puVar3 = &DAT_002a1010;
  }
  else {
    if (0x1fff < uVar1) {
      if (uVar1 == 0x2000) {
        puVar3 = &UNK_0038bd46;
      }
      else {
        if (uVar1 != 0x3fff) goto LAB_00a8209c;
        puVar3 = &DAT_0038bd54;
      }
      uVar4 = 0xe;
      goto LAB_00a8211c;
    }
    if (uVar1 == 4) {
      puVar3 = &DAT_0038bd39;
      uVar4 = 0xd;
      goto LAB_00a8211c;
    }
    if (uVar1 != 5) {
LAB_00a8209c:
      puStack_28 = PTR_fmt_00b00e10;
      local_30 = param_1;
      alloc::fmt::format::format_inner(auStack_48,&DAT_002a5e6a,&local_30);
                    /* try { // try from 00a820c0 to 00a820c7 has its CatchHandler @ 00a82130 */
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
      <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
      return uVar2 & 0xffffffff;
    }
    puVar3 = &DAT_0029f2b0;
  }
  uVar4 = 0x10;
LAB_00a8211c:
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a8214c  <gimli::constants::DwDefaulted_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwDefaulted as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwDefaulted_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 < 3) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e2f8 + *(int *)(&DAT_0038e2f8 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e308 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002ac1fa,&local_30);
                    /* try { // try from 00a821c0 to 00a821c7 has its CatchHandler @ 00a821f0 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a8220c  <gimli::constants::DwLnct_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwLnct as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwLnct_as_core::fmt::Display>::fmt(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  ushort *local_30;
  undefined *puStack_28;
  
  uVar1 = *param_1;
  if (uVar1 < 5) {
    if (uVar1 < 3) {
      if (uVar1 != 1) {
        if (uVar1 != 2) {
LAB_00a8230c:
          puStack_28 = PTR_fmt_00b00e10;
          local_30 = param_1;
          alloc::fmt::format::format_inner(auStack_48,&DAT_002b2c75,&local_30);
                    /* try { // try from 00a82330 to 00a82337 has its CatchHandler @ 00a82360 */
          uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
          <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
          return uVar2 & 0xffffffff;
        }
        puVar3 = &DAT_0038bdab;
        uVar4 = 0x17;
        goto LAB_00a822f8;
      }
      puVar3 = &DAT_0038bd9f;
    }
    else {
      if (uVar1 == 3) {
        puVar3 = &DAT_0038bdc2;
        uVar4 = 0x11;
        goto LAB_00a822f8;
      }
      if (uVar1 != 4) goto LAB_00a8230c;
      puVar3 = &UNK_0038bdd3;
    }
    uVar4 = 0xc;
  }
  else {
    if (uVar1 < 0x2001) {
      if (uVar1 == 5) {
        puVar3 = &DAT_0038bddf;
        uVar4 = 0xb;
        goto LAB_00a822f8;
      }
      if (uVar1 != 0x2000) goto LAB_00a8230c;
      puVar3 = &DAT_0038bdea;
    }
    else {
      if (uVar1 == 0x2001) {
        puVar3 = &DAT_0038bdf9;
        uVar4 = 0x13;
        goto LAB_00a822f8;
      }
      if (uVar1 != 0x3fff) goto LAB_00a8230c;
      puVar3 = &UNK_0038be0c;
    }
    uVar4 = 0xf;
  }
LAB_00a822f8:
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a8237c  <gimli::constants::DwRle_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwRle as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwRle_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 < 8) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e320 + *(int *)(&DAT_0038e320 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e340 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002a993c,&local_30);
                    /* try { // try from 00a823f0 to 00a823f7 has its CatchHandler @ 00a82420 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a8243c  <gimli::constants::DwOp_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwOp as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwOp_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  auVar2 = <gimli::constants::[5P]::gimli::constants::DwOp>::static_string();
  if (auVar2._0_8_ != 0) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,auVar2._0_8_,auVar2._8_8_);
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002b2c88,&local_30);
                    /* try { // try from 00a824a0 to 00a824a7 has its CatchHandler @ 00a824d0 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a824ec  <gimli::constants::DwMacinfo_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwMacinfo as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwMacinfo_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = *param_1 + 1;
  if (((uVar1 & 0xff) < 6) && ((0x3dU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,(&PTR_DAT_00afe808)[(ulong)uVar1 & 0xff],
                       *(undefined8 *)(&DAT_0038e380 + ((ulong)uVar1 & 0xff) * 8));
    return uVar2;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002a50c5,&local_30);
                    /* try { // try from 00a82574 to 00a8257b has its CatchHandler @ 00a825a4 */
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar2 & 0xffffffff;
}


// ===== 00a825c0  <gimli::constants::DwMacro_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwMacro as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwMacro_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  bVar1 = *param_1;
  puVar3 = &DAT_0038befd;
  uVar4 = 0xf;
  switch(bVar1) {
  case 1:
    break;
  case 2:
    puVar3 = &DAT_0038bf0c;
    uVar4 = 0xe;
    break;
  case 3:
    puVar3 = &DAT_0038bf1a;
    goto LAB_00a82698;
  case 4:
    puVar3 = &DAT_0038bf2d;
    uVar4 = 0x11;
    break;
  case 5:
    puVar3 = &UNK_0038bf3e;
    goto LAB_00a826b8;
  case 6:
    puVar3 = &UNK_0038bf52;
    goto LAB_00a82698;
  case 7:
    puVar3 = &DAT_0038bf65;
    uVar4 = 0xf;
    break;
  case 8:
    puVar3 = &UNK_0038bf74;
    goto LAB_00a82698;
  case 9:
    puVar3 = &DAT_0038bf87;
    uVar4 = 0x12;
    break;
  case 10:
    puVar3 = &UNK_0038bf99;
    goto LAB_00a82698;
  case 0xb:
    puVar3 = &DAT_0038bfac;
LAB_00a826b8:
    uVar4 = 0x14;
    break;
  case 0xc:
    puVar3 = &UNK_0038bfc0;
LAB_00a82698:
    uVar4 = 0x13;
    break;
  default:
    if (bVar1 == 0xe0) {
      puVar3 = &UNK_0029f6c0;
    }
    else {
      if (bVar1 != 0xff) {
        puStack_28 = PTR_fmt_00b00c18;
        local_30 = param_1;
        alloc::fmt::format::format_inner(auStack_48,&DAT_002b8144,&local_30);
                    /* try { // try from 00a82704 to 00a8270b has its CatchHandler @ 00a82734 */
        uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
        <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
        return uVar2 & 0xffffffff;
      }
      puVar3 = &DAT_002a08b0;
    }
    uVar4 = 0x10;
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a82750  <gimli::constants::DwEhPe_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwEhPe as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwEhPe_as_core::fmt::Display>::fmt
          (byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  bVar1 = *param_1;
  if (0x1f < bVar1) {
    if (bVar1 < 0x50) {
      if (bVar1 == 0x20) {
        pcVar3 = "DW_EH_PE_textrel";
      }
      else if (bVar1 == 0x30) {
        pcVar3 = &DAT_002a0e20;
      }
      else {
        if (bVar1 != 0x40) goto switchD_00a82798_caseD_5;
        pcVar3 = &DAT_002a0ff0;
      }
    }
    else {
      if (bVar1 != 0x50) {
        if (bVar1 == 0x80) {
          pcVar3 = &DAT_003873e6;
          param_3 = 0x11;
        }
        else {
          if (bVar1 != 0xff) goto switchD_00a82798_caseD_5;
          pcVar3 = &DAT_00387406;
          param_3 = 0xd;
        }
        goto switchD_00a82798_caseD_2;
      }
      pcVar3 = "DW_EH_PE_alignedaddress overflowDW_SECT_LOCLISTS\x1d";
    }
    goto LAB_00a82894;
  }
  pcVar3 = &DAT_0038737e;
  param_3 = 0xf;
  switch(bVar1) {
  case 0:
    pcVar3 = &UNK_003873f7;
    break;
  case 1:
    pcVar3 = "DW_EH_PE_uleb128\x15";
    goto LAB_00a82894;
  case 2:
    goto switchD_00a82798_caseD_2;
  case 3:
    pcVar3 = &UNK_0038738d;
    break;
  case 4:
    pcVar3 = &UNK_0038739c;
    break;
  default:
switchD_00a82798_caseD_5:
    puStack_28 = PTR_fmt_00b00c18;
    local_30 = param_1;
    alloc::fmt::format::format_inner(auStack_48,&DAT_002af7e5,&local_30,param_3);
                    /* try { // try from 00a828d0 to 00a828d7 has its CatchHandler @ 00a82900 */
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
    <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
    return uVar2 & 0xffffffff;
  case 9:
    pcVar3 = &DAT_0029fe70;
LAB_00a82894:
    param_3 = 0x10;
    goto switchD_00a82798_caseD_2;
  case 10:
    pcVar3 = &DAT_003873ab;
    break;
  case 0xb:
    pcVar3 = &UNK_003873ba;
    break;
  case 0xc:
    pcVar3 = &UNK_003873c9;
    break;
  case 0x10:
    pcVar3 = &DAT_003873d8;
    param_3 = 0xe;
    goto switchD_00a82798_caseD_2;
  }
  param_3 = 0xf;
switchD_00a82798_caseD_2:
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,pcVar3,param_3);
  return uVar2;
}


// ===== 00a8291c  <gimli::constants::GdbIndexSymbolKind_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::GdbIndexSymbolKind as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::GdbIndexSymbolKind_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  uVar1 = (ulong)*param_1;
  if (uVar1 < 8) {
    uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e3b0 + *(int *)(&DAT_0038e3b0 + uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e3d0 + uVar1 * 8));
    return uVar1;
  }
  puStack_28 = PTR_fmt_00b00c18;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002a5e7c,&local_30);
                    /* try { // try from 00a82990 to 00a82997 has its CatchHandler @ 00a829c0 */
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar1 & 0xffffffff;
}


// ===== 00a829dc  <gimli::read::abbrev::Attributes_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::abbrev::Attributes as core::fmt::Debug>::fmt */

void __rustcall
<gimli::read::abbrev::Attributes_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
  <[gimli::read::abbrev::AttributeSpecification]as_core::fmt::Debug>::fmt
            (auVar1._0_8_,auVar1._8_8_,param_2);
  return;
}


// ===== 00a82a00  <gimli::read::abbrev::Attributes_as_core::cmp::PartialEq>::eq =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::abbrev::Attributes as core::cmp::PartialEq>::eq */

undefined8 __rustcall
<gimli::read::abbrev::Attributes_as_core::cmp::PartialEq>::eq(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short *psVar2;
  short *psVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar5 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref();
  lVar4 = auVar5._8_8_;
  auVar6 = <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(param_2);
  if (lVar4 == auVar6._8_8_) {
    if (lVar4 != 0) {
      psVar2 = (short *)(auVar6._0_8_ + 10);
      psVar3 = (short *)(auVar5._0_8_ + 10);
      do {
        if ((*(long *)(psVar3 + -5) != *(long *)(psVar2 + -5)) || (psVar3[-1] != psVar2[-1]))
        goto LAB_00a82a7c;
        if (*psVar3 != *psVar2) goto LAB_00a82a7c;
        lVar4 = lVar4 + -1;
        psVar2 = psVar2 + 8;
        psVar3 = psVar3 + 8;
      } while (lVar4 != 0);
    }
    uVar1 = 1;
  }
  else {
LAB_00a82a7c:
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00a82a90  <gimli::constants::DwCfa_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwCfa as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwCfa_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined *puStack_28;
  
  cVar1 = *param_1;
  switch(cVar1) {
  case '\0':
    puVar3 = &DAT_003875a6;
    uVar4 = 10;
    break;
  case '\x01':
    puVar3 = &DAT_003875b0;
    goto LAB_00a82cd0;
  case '\x02':
    puVar3 = &UNK_003875be;
    goto LAB_00a82c0c;
  case '\x03':
    puVar3 = &UNK_003875d1;
    goto LAB_00a82c0c;
  case '\x04':
    puVar3 = &DAT_003875e4;
LAB_00a82c0c:
    uVar4 = 0x13;
    break;
  case '\x05':
    puVar3 = &UNK_003875f7;
    goto LAB_00a82bb0;
  case '\x06':
    puVar3 = &UNK_0038760d;
    goto LAB_00a82c70;
  case '\a':
    puVar3 = &DAT_002a0640;
    uVar4 = 0x10;
    break;
  case '\b':
    puVar3 = &UNK_00387624;
    goto LAB_00a82cc0;
  case '\t':
    puVar3 = &DAT_00387635;
    uVar4 = 0xf;
    break;
  case '\n':
    puVar3 = &UNK_00387644;
    goto LAB_00a82c80;
  case '\v':
    puVar3 = &UNK_00387659;
    goto LAB_00a82c90;
  case '\f':
    puVar3 = &DAT_0038766d;
    goto LAB_00a82cd0;
  case '\r':
    puVar3 = &DAT_0038767b;
LAB_00a82c70:
    uVar4 = 0x17;
    break;
  case '\x0e':
    puVar3 = &UNK_00387692;
    goto LAB_00a82c80;
  case '\x0f':
    puVar3 = &UNK_003876a7;
    goto LAB_00a82ca0;
  case '\x10':
    puVar3 = &UNK_003876c0;
    goto LAB_00a82cc0;
  case '\x11':
    puVar3 = &DAT_003876d1;
LAB_00a82ca0:
    uVar4 = 0x19;
    break;
  case '\x12':
    puVar3 = &DAT_003876ea;
    goto LAB_00a82cc0;
  case '\x13':
    puVar3 = &UNK_003876fb;
    goto LAB_00a82cb0;
  case '\x14':
    puVar3 = &UNK_00387713;
LAB_00a82cc0:
    uVar4 = 0x11;
    break;
  case '\x15':
    puVar3 = &UNK_00387724;
    goto LAB_00a82c90;
  case '\x16':
    puVar3 = &DAT_00387738;
LAB_00a82c80:
    uVar4 = 0x15;
    break;
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
  case '\x1b':
  case '\x1e':
  case '\x1f':
  case ' ':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case '\'':
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
switchD_00a82ac4_caseD_17:
    puStack_28 = PTR_fmt_00b00c18;
    local_30 = param_1;
    alloc::fmt::format::format_inner(auStack_48,&DAT_002a5e9b,&local_30);
                    /* try { // try from 00a82b18 to 00a82b1f has its CatchHandler @ 00a82cf8 */
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
    <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
    return uVar2 & 0xffffffff;
  case '\x1c':
    puVar3 = &DAT_0038774d;
    goto LAB_00a82cd0;
  case '\x1d':
    puVar3 = &DAT_00387769;
LAB_00a82cb0:
    uVar4 = 0x18;
    break;
  case '-':
    puVar3 = &DAT_00387781;
LAB_00a82bb0:
    uVar4 = 0x16;
    break;
  case '.':
    puVar3 = &DAT_00387797;
LAB_00a82c90:
    uVar4 = 0x14;
    break;
  case '/':
    puVar3 = &DAT_003877ab;
    uVar4 = 0x23;
    break;
  case '?':
    puVar3 = &DAT_0038775b;
    goto LAB_00a82cd0;
  case '@':
    puVar3 = &DAT_00387579;
    uVar4 = 0x12;
    break;
  default:
    if (cVar1 == -0x80) {
      puVar3 = &DAT_0038758b;
      uVar4 = 0xd;
      break;
    }
    if (cVar1 != -0x40) goto switchD_00a82ac4_caseD_17;
    puVar3 = &DAT_00387598;
LAB_00a82cd0:
    uVar4 = 0xe;
  }
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a82d14  <gimli::constants::DwChildren_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwChildren as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwChildren_as_core::fmt::Display>::fmt(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined *puStack_28;
  
  if (*param_1 == '\0') {
    puVar2 = &DAT_0038c0df;
    uVar3 = 0xe;
  }
  else {
    if (*param_1 != '\x01') {
      puStack_28 = PTR_fmt_00b00c18;
      local_30 = param_1;
      alloc::fmt::format::format_inner(auStack_48,&DAT_002a5ead,&local_30);
                    /* try { // try from 00a82d8c to 00a82d93 has its CatchHandler @ 00a82dbc */
      uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
      <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
      return uVar1 & 0xffffffff;
    }
    puVar2 = &DAT_0038c0ed;
    uVar3 = 0xf;
  }
  uVar1 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar2,uVar3);
  return uVar1;
}


// ===== 00a82dd8  <core::iter::adapters::copied::Copied<core::iter::adapters::take::Take<core::slice::iter::Iter<u8>>>as_core::iter::traits::iterator::Iterator>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::iter::adapters::copied::Copied<core::iter::adapters::take::Take<core::slice::iter::Iter<u8>>>
   as core::iter::traits::iterator::Iterator>::next */

undefined1  [16] __rustcall
<core::iter::adapters::copied::Copied<core::iter::adapters::take::Take<core::slice::iter::Iter<u8>>>as_core::iter::traits::iterator::Iterator>
::next(long *param_1,ulong param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1[2] != 0) {
    pbVar1 = (byte *)*param_1;
    param_1[2] = param_1[2] + -1;
    if (pbVar1 != (byte *)param_1[1]) {
      auVar3._9_7_ = 0;
      auVar3[8] = *pbVar1;
      *param_1 = (long)(pbVar1 + 1);
      auVar3._0_8_ = 1;
      return auVar3;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}


// ===== 00a82e0c  <gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::read::abbrev::Attributes as core::ops::deref::Deref>::deref */

undefined1  [16] __rustcall
<gimli::read::abbrev::Attributes_as_core::ops::deref::Deref>::deref(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if (*param_1 == 1) {
    plVar2 = (long *)param_1[2];
    uVar1 = param_1[3];
  }
  else {
    uVar1 = param_1[1];
    if (5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      core::slice::index::slice_index_fail
                (0,uVar1,5,&PTR_s__rust_deps_gimli_0_34_0_src_read_00afcf30);
    }
    plVar2 = param_1 + 2;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = plVar2;
  return auVar3;
}


// ===== 00a82e54  <gimli::constants::DwSectV2_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwSectV2 as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwSectV2_as_core::fmt::Display>::fmt(int *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  int *local_30;
  undefined *puStack_28;
  
  uVar1 = *param_1 - 1;
  if (uVar1 < 8) {
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad
                      (param_2,&DAT_0038e410 + *(int *)(&DAT_0038e410 + (ulong)uVar1 * 4),
                       *(undefined8 *)(&DAT_0038e430 + (ulong)uVar1 * 8));
    return uVar2;
  }
  puStack_28 = PTR_fmt_00b00c40;
  local_30 = param_1;
  alloc::fmt::format::format_inner(auStack_48,&DAT_002ab4d8,&local_30);
                    /* try { // try from 00a82ecc to 00a82ed3 has its CatchHandler @ 00a82efc */
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
  <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
  return uVar2 & 0xffffffff;
}


// ===== 00a82f18  <alloc::vec::Vec<u8>as_core::ops::drop::Drop>::drop =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::vec::Vec<u8> as core::ops::drop::Drop>::drop */

void __rustcall <alloc::vec::Vec<u8>as_core::ops::drop::Drop>::drop(void)

{
  return;
}


// ===== 00a82f1c  <gimli::constants::DwUt_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <gimli::constants::DwUt as core::fmt::Display>::fmt */

ulong __rustcall
<gimli::constants::DwUt_as_core::fmt::Display>::fmt(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  byte *local_30;
  undefined *puStack_28;
  
  bVar1 = *param_1;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 != 1) {
        if (bVar1 != 2) {
LAB_00a83010:
          puStack_28 = PTR_fmt_00b00c18;
          local_30 = param_1;
          alloc::fmt::format::format_inner(auStack_48,&DAT_002a8dd0,&local_30);
                    /* try { // try from 00a83034 to 00a8303b has its CatchHandler @ 00a83064 */
          uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,local_40,uStack_38);
          <alloc::raw_vec::[3]::alloc::raw_vec::RawVecInner>::deallocate(auStack_48,1,1);
          return uVar2 & 0xffffffff;
        }
        puVar3 = &DAT_0038c18e;
        uVar4 = 10;
        goto LAB_00a82ffc;
      }
      puVar3 = &DAT_0038c181;
    }
    else {
      if (bVar1 != 3) {
        if (bVar1 != 4) goto LAB_00a83010;
        puVar3 = &DAT_0038c1a5;
        uVar4 = 0xe;
        goto LAB_00a82ffc;
      }
      puVar3 = &DAT_0038c198;
    }
  }
  else {
    if (bVar1 < 0x80) {
      if (bVar1 == 5) {
        puVar3 = &DAT_0038c1b3;
        uVar4 = 0x13;
      }
      else {
        if (bVar1 != 6) goto LAB_00a83010;
        puVar3 = &DAT_0029f150;
        uVar4 = 0x10;
      }
      goto LAB_00a82ffc;
    }
    if (bVar1 == 0x80) {
      puVar3 = &DAT_0038c1c6;
    }
    else {
      if (bVar1 != 0xff) goto LAB_00a83010;
      puVar3 = &DAT_0038c1d3;
    }
  }
  uVar4 = 0xd;
LAB_00a82ffc:
  uVar2 = <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,puVar3,uVar4);
  return uVar2;
}


// ===== 00a83080  <[gimli::read::abbrev::AttributeSpecification]as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <[gimli::read::abbrev::AttributeSpecification] as core::fmt::Debug>::fmt */

void __rustcall
<[gimli::read::abbrev::AttributeSpecification]as_core::fmt::Debug>::fmt
          (long param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  long local_18;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_3);
  if (param_2 != 0) {
    param_2 = param_2 << 4;
    do {
      local_18 = param_1;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (auStack_40,&local_18,&DAT_00afcd38);
      param_2 = param_2 + -0x10;
      param_1 = param_1 + 0x10;
    } while (param_2 != 0);
  }
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00a830f4  <core::str::str>::trim_start_matches<&str> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::str::str>::trim_start_matches<&str> */

undefined1  [16] __rustcall <core::str::str>::trim_start_matches<&str>(long param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_a0 [104];
  long local_38;
  long local_30;
  
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new(auStack_a0);
  do {
    FUN_00a88840(&local_38,auStack_a0);
  } while (local_38 == 0);
  lVar1 = param_2;
  if (local_38 == 1) {
    lVar1 = local_30;
  }
  auVar2._8_8_ = param_2 - lVar1;
  auVar2._0_8_ = param_1 + lVar1;
  return auVar2;
}


// ===== 00a83154  FUN_00a83154 =====

undefined8 FUN_00a83154(long *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_60;
  char cStack_58;
  undefined7 uStack_57;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
      return uVar3;
    }
LAB_00a831d8:
    uVar3 = 0;
  }
  else {
    FUN_00a856b0(&local_60,param_1);
    if (local_60 == 0) {
      if (param_1[4] != 0) {
        puVar1 = &DAT_0038e499;
        if (cStack_58 == '\0') {
          puVar1 = &DAT_0029fc30;
        }
        uVar3 = 0x19;
        if (cStack_58 == '\0') {
          uVar3 = 0x10;
        }
        uVar4 = <str_as_core::fmt::Display>::fmt(puVar1,uVar3);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      lStack_38 = CONCAT71(uStack_57,cStack_58);
      uVar3 = 0;
      local_40 = local_60;
      lStack_30 = lStack_50;
      lStack_28 = lStack_48;
    }
    else {
      if (param_1[4] == 0) goto LAB_00a831d8;
      lStack_38 = param_1[1];
      local_40 = *param_1;
      lStack_28 = param_1[3];
      lStack_30 = param_1[2];
      uVar2 = *param_2;
      param_1[1] = CONCAT71(uStack_57,cStack_58);
      *param_1 = local_60;
      param_1[3] = lStack_48;
      param_1[2] = lStack_50;
      uVar3 = FUN_00a85748(param_1,uVar2);
    }
    param_1[1] = lStack_38;
    *param_1 = local_40;
    param_1[3] = lStack_28;
    param_1[2] = lStack_30;
  }
  return uVar3;
}


// ===== 00a8323c  FUN_00a8323c =====

undefined8 FUN_00a8323c(long *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_60;
  char cStack_58;
  undefined7 uStack_57;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
      return uVar3;
    }
LAB_00a832c0:
    uVar3 = 0;
  }
  else {
    FUN_00a856b0(&local_60,param_1);
    if (local_60 == 0) {
      if (param_1[4] != 0) {
        puVar1 = &DAT_0038e499;
        if (cStack_58 == '\0') {
          puVar1 = &DAT_0029fc30;
        }
        uVar3 = 0x19;
        if (cStack_58 == '\0') {
          uVar3 = 0x10;
        }
        uVar4 = <str_as_core::fmt::Display>::fmt(puVar1,uVar3);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      lStack_38 = CONCAT71(uStack_57,cStack_58);
      uVar3 = 0;
      local_40 = local_60;
      lStack_30 = lStack_50;
      lStack_28 = lStack_48;
    }
    else {
      if (param_1[4] == 0) goto LAB_00a832c0;
      lStack_38 = param_1[1];
      local_40 = *param_1;
      lStack_28 = param_1[3];
      lStack_30 = param_1[2];
      uVar2 = *param_2;
      param_1[1] = CONCAT71(uStack_57,cStack_58);
      *param_1 = local_60;
      param_1[3] = lStack_48;
      param_1[2] = lStack_50;
      uVar3 = FUN_00a862c4(param_1,uVar2);
    }
    param_1[1] = lStack_38;
    *param_1 = local_40;
    param_1[3] = lStack_28;
    param_1[2] = lStack_30;
  }
  return uVar3;
}


// ===== 00a83324  FUN_00a83324 =====

undefined8 FUN_00a83324(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_60;
  char cStack_58;
  undefined7 uStack_57;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
      return uVar2;
    }
LAB_00a833a0:
    uVar2 = 0;
  }
  else {
    FUN_00a856b0(&local_60,param_1);
    if (local_60 == 0) {
      if (param_1[4] != 0) {
        puVar1 = &DAT_0038e499;
        if (cStack_58 == '\0') {
          puVar1 = &DAT_0029fc30;
        }
        uVar2 = 0x19;
        if (cStack_58 == '\0') {
          uVar2 = 0x10;
        }
        uVar3 = <str_as_core::fmt::Display>::fmt(puVar1,uVar2);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
      lStack_38 = CONCAT71(uStack_57,cStack_58);
      uVar2 = 0;
      local_40 = local_60;
      lStack_30 = lStack_50;
      lStack_28 = lStack_48;
    }
    else {
      if (param_1[4] == 0) goto LAB_00a833a0;
      lStack_38 = param_1[1];
      local_40 = *param_1;
      lStack_28 = param_1[3];
      lStack_30 = param_1[2];
      param_1[1] = CONCAT71(uStack_57,cStack_58);
      *param_1 = local_60;
      param_1[3] = lStack_48;
      param_1[2] = lStack_50;
      uVar2 = FUN_00a85dac(param_1);
    }
    param_1[1] = lStack_38;
    *param_1 = local_40;
    param_1[3] = lStack_28;
    param_1[2] = lStack_30;
  }
  return uVar2;
}


// ===== 00a83404  FUN_00a83404 =====

undefined8 FUN_00a83404(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulong)param_1[1]) && (*(char *)(lVar2 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      if (((lVar3 != 0) && (param_1[4] != 0)) &&
         (uVar1 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f2,2), (uVar1 & 1) != 0)) {
        return 1;
      }
      uVar1 = FUN_00a862c4(param_1,1);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
      lVar2 = *param_1;
      lVar3 = lVar3 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}


// ===== 00a834a8  FUN_00a834a8 =====

undefined1  [16] FUN_00a834a8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar4 = 1;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulong)param_1[1]) && (*(char *)(lVar2 + uVar1) == 'E')) {
        uVar4 = 0;
        param_1[2] = uVar1 + 1;
        goto LAB_00a83530;
      }
      if ((((lVar3 != 0) && (param_1[4] != 0)) &&
          (uVar1 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f2,2), (uVar1 & 1) != 0)) ||
         (uVar1 = FUN_00a862c4(param_1,1), (uVar1 & 1) != 0)) goto LAB_00a83530;
      lVar2 = *param_1;
      lVar3 = lVar3 + 1;
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_00a83530:
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


// ===== 00a83558  FUN_00a83558 =====

undefined8 FUN_00a83558(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  char local_80;
  char cStack_7f;
  undefined6 uStack_7e;
  char cStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puVar3;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar7 = 0;
    do {
      uVar2 = param_1[2];
      if ((uVar2 < (ulong)param_1[1]) && (*(char *)(lVar5 + uVar2) == 'E')) {
        param_1[2] = uVar2 + 1;
        return 0;
      }
      if ((lVar7 == 0) || (param_1[4] == 0)) {
LAB_00a835d8:
        FUN_00a853f4(&local_80,param_1,0x73);
        if (local_80 == '\x01') {
          cVar6 = cStack_7f;
          if (param_1[4] == 0) goto LAB_00a836f4;
          puVar3 = &DAT_0038e499;
          if (cStack_7f == '\0') {
            puVar3 = &DAT_0029fc30;
          }
          uVar4 = 0x19;
          if (cStack_7f == '\0') {
            uVar4 = 0x10;
          }
LAB_00a836e4:
          iVar1 = <str_as_core::fmt::Display>::fmt(puVar3,uVar4);
          if (iVar1 != 0) {
            return 1;
          }
LAB_00a836f4:
          *param_1 = 0;
          *(char *)(param_1 + 1) = cVar6;
          return 0;
        }
        if (*param_1 == 0) goto LAB_00a83658;
        FUN_00a8548c(&local_80,param_1);
        if (CONCAT62(uStack_7e,CONCAT11(cStack_7f,local_80)) == 0) {
          cVar6 = cStack_78;
          if (param_1[4] == 0) goto LAB_00a836f4;
          uVar4 = 0x19;
          if (cStack_78 == '\0') {
            uVar4 = 0x10;
          }
          puVar3 = &DAT_0038e499;
          if (cStack_78 == '\0') {
            puVar3 = &DAT_0029fc30;
          }
          goto LAB_00a836e4;
        }
        uStack_48 = uStack_68;
        uStack_50 = uStack_70;
        if (param_1[4] != 0) {
          uVar2 = <rustc_demangle::v0::Ident_as_core::fmt::Display>::fmt(local_60);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          if ((param_1[4] != 0) &&
             (uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e52e,2), (uVar2 & 1) != 0)) {
            return 1;
          }
        }
        uVar2 = FUN_00a862c4(param_1,1);
joined_r0x00a83650:
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
      else {
        uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f2,2);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        if (*param_1 != 0) goto LAB_00a835d8;
LAB_00a83658:
        if (param_1[4] != 0) {
          uVar2 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
          goto joined_r0x00a83650;
        }
      }
      lVar5 = *param_1;
      lVar7 = lVar7 + -1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 00a8372c  FUN_00a8372c =====

undefined1  [16] FUN_00a8372c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    uVar4 = 1;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulong)param_1[1]) && (*(char *)(lVar2 + uVar1) == 'E')) {
        uVar4 = 0;
        param_1[2] = uVar1 + 1;
        goto LAB_00a837b0;
      }
      if ((((lVar3 != 0) && (param_1[4] != 0)) &&
          (uVar1 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f2,2), (uVar1 & 1) != 0)) ||
         (uVar1 = FUN_00a85dac(param_1), (uVar1 & 1) != 0)) goto LAB_00a837b0;
      lVar2 = *param_1;
      lVar3 = lVar3 + 1;
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_00a837b0:
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


// ===== 00a837d8  FUN_00a837d8 =====

undefined8 FUN_00a837d8(long *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_a0;
  char cStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80 [2];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar7 = 0;
    do {
      uVar3 = param_1[2];
      if ((uVar3 < (ulong)param_1[1]) && (*(char *)(lVar6 + uVar3) == 'E')) {
        param_1[2] = uVar3 + 1;
        return 0;
      }
      if (((lVar7 != 0) && (param_1[4] != 0)) &&
         (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e52b,3), (uVar3 & 1) != 0)) {
        return 1;
      }
      bVar1 = FUN_00a86d80(param_1);
      if (bVar1 == 2) {
        return 1;
      }
      lVar6 = *param_1;
      if (lVar6 == 0) {
LAB_00a83984:
        if ((bVar1 & 1) != 0) goto LAB_00a83988;
      }
      else {
        do {
          uVar3 = param_1[2];
          if (((ulong)param_1[1] <= uVar3) || (*(char *)(lVar6 + uVar3) != 'p')) goto LAB_00a83984;
          param_1[2] = uVar3 + 1;
          if ((bVar1 & 1) == 0) {
            if (param_1[4] != 0) {
              uVar5 = 1;
              puVar4 = &DAT_0038e57c;
              goto LAB_00a838d4;
            }
          }
          else if (param_1[4] != 0) {
            uVar5 = 2;
            puVar4 = &DAT_0038e4f2;
LAB_00a838d4:
            uVar3 = <str_as_core::fmt::Display>::fmt(puVar4,uVar5);
            if ((uVar3 & 1) != 0) {
              return 1;
            }
          }
          if (*param_1 == 0) {
            lVar6 = param_1[4];
            puVar4 = &DAT_0038e4b2;
            goto joined_r0x00a839b4;
          }
          FUN_00a8548c(&local_a0,param_1);
          if (local_a0 == 0) {
            if (param_1[4] != 0) {
              uVar5 = 0x19;
              if (cStack_98 == '\0') {
                uVar5 = 0x10;
              }
              puVar4 = &DAT_0038e499;
              if (cStack_98 == '\0') {
                puVar4 = &DAT_0029fc30;
              }
              iVar2 = <str_as_core::fmt::Display>::fmt(puVar4,uVar5);
              if (iVar2 != 0) {
                return 1;
              }
            }
            *param_1 = 0;
            *(char *)(param_1 + 1) = cStack_98;
            return 0;
          }
          local_80[0] = local_a0;
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          if (param_1[4] != 0) {
            uVar3 = <rustc_demangle::v0::Ident_as_core::fmt::Display>::fmt(local_80);
            if ((uVar3 & 1) != 0) {
              return 1;
            }
            if ((param_1[4] != 0) &&
               (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e5a0,3), (uVar3 & 1) != 0)) {
              return 1;
            }
          }
          if (((*param_1 == 0) || (uVar3 = param_1[2], (ulong)param_1[1] <= uVar3)) ||
             (*(char *)(*param_1 + uVar3) != 'K')) {
            uVar3 = FUN_00a85dac(param_1);
          }
          else {
            param_1[2] = uVar3 + 1;
            uVar3 = FUN_00a862c4(param_1,0);
          }
          if ((uVar3 & 1) != 0) {
            return 1;
          }
          lVar6 = *param_1;
          bVar1 = 1;
        } while (lVar6 != 0);
LAB_00a83988:
        lVar6 = param_1[4];
        puVar4 = &DAT_0038e57d;
joined_r0x00a839b4:
        if ((lVar6 != 0) && (uVar3 = <str_as_core::fmt::Display>::fmt(puVar4,1), (uVar3 & 1) != 0))
        {
          return 1;
        }
      }
      lVar6 = *param_1;
      lVar7 = lVar7 + 1;
    } while (lVar6 != 0);
  }
  return 0;
}


// ===== 00a83a48  FUN_00a83a48 =====

undefined8 FUN_00a83a48(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte local_40;
  char local_3f;
  undefined8 local_38;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      uVar4 = param_1[2];
      if ((uVar4 < (ulong)param_1[1]) && (*(char *)(lVar5 + uVar4) == 'E')) {
        param_1[2] = uVar4 + 1;
        return 0;
      }
      if ((lVar6 == 0) || (param_1[4] == 0)) {
LAB_00a83ab4:
        uVar4 = param_1[2];
        if ((ulong)param_1[1] <= uVar4) goto LAB_00a83b24;
        if (*(char *)(lVar5 + uVar4) == 'L') {
          param_1[2] = uVar4 + 1;
          FUN_00a85274(&local_40,param_1);
          if ((local_40 & 1) != 0) {
            if (param_1[4] != 0) {
              puVar1 = &DAT_0038e499;
              if (local_3f == '\0') {
                puVar1 = &DAT_0029fc30;
              }
              uVar2 = 0x19;
              if (local_3f == '\0') {
                uVar2 = 0x10;
              }
              iVar3 = <str_as_core::fmt::Display>::fmt(puVar1,uVar2);
              if (iVar3 != 0) {
                return 1;
              }
            }
            *param_1 = 0;
            *(char *)(param_1 + 1) = local_3f;
            return 0;
          }
          uVar4 = FUN_00a86c6c(param_1,local_38);
        }
        else {
          if (*(char *)(lVar5 + uVar4) != 'K') goto LAB_00a83b24;
          param_1[2] = uVar4 + 1;
          uVar4 = FUN_00a862c4(param_1,0);
        }
      }
      else {
        uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f2,2);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        lVar5 = *param_1;
        if (lVar5 != 0) goto LAB_00a83ab4;
LAB_00a83b24:
        uVar4 = FUN_00a85dac(param_1);
      }
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      lVar5 = *param_1;
      lVar6 = lVar6 + -1;
    } while (lVar5 != 0);
  }
  return 0;
}


// ===== 00a83bb8  FUN_00a83bb8 =====

void FUN_00a83bb8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uStack_21;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = FUN_00a85748(param_1,0);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_0038e4b3,0x3d,&uStack_21,&DAT_00afe9a8,
             &PTR_s__rust_deps_rustc_demangle_0_1_28_00afe838);
}


// ===== 00a83c18  FUN_00a83c18 =====

undefined8 FUN_00a83c18(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint local_50 [3];
  byte local_44;
  byte local_43;
  
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar7,0x27);
    while ((uVar3 & 1) == 0) {
      while (param_2 != 0x22) {
        if (param_2 == -1) {
          uVar4 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar7,0x27);
          return uVar4;
        }
        FUN_00a84eec(local_50,param_2);
        uVar2 = local_50[0];
        uVar3 = (ulong)local_44;
        uVar8 = (uint)local_43;
        uVar1 = (uint)local_44;
        if (local_44 <= local_43) {
          uVar1 = uVar8;
        }
        while (uVar1 != uVar3) {
          uVar6 = uVar2;
          if (uVar8 < 0x81) {
            uVar6 = (uint)*(byte *)((long)local_50 + uVar3);
          }
          uVar5 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar7,uVar6);
          uVar3 = uVar3 + 1;
          if ((uVar5 & 1) != 0) goto LAB_00a83c4c;
        }
        param_2 = -1;
      }
      uVar3 = <core::fmt::Formatter_as_core::fmt::Write>::write_char(lVar7,0x22);
      param_2 = -1;
    }
LAB_00a83c4c:
    uVar4 = 1;
  }
  return uVar4;
}


// ===== 00a83d10  FUN_00a83d10 =====

ulong FUN_00a83d10(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  char local_50;
  char local_4f;
  long local_48;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
      return uVar3;
    }
    uVar4 = 0;
    goto LAB_00a83df4;
  }
  FUN_00a853f4(&local_50,param_1,0x47);
  if (local_50 == '\x01') {
    if (param_1[4] != 0) {
      puVar1 = &DAT_0038e499;
      if (local_4f == '\0') {
        puVar1 = &DAT_0029fc30;
      }
      uVar2 = 0x19;
      if (local_4f == '\0') {
        uVar2 = 0x10;
      }
      uVar3 = <str_as_core::fmt::Display>::fmt(puVar1,uVar2);
      if ((uVar3 & 1) != 0) goto LAB_00a83de8;
    }
    uVar4 = 0;
    *param_1 = 0;
    *(char *)(param_1 + 1) = local_4f;
  }
  else {
    if (param_1[4] == 0) {
      uVar3 = FUN_00a84108(param_1);
      return uVar3;
    }
    if (local_48 == 0) {
LAB_00a83ea0:
      uVar3 = FUN_00a84108(param_1);
      *(int *)(param_1 + 5) = (int)param_1[5] - (int)local_48;
      return uVar3;
    }
    uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_002bd028,4);
    if ((uVar3 & 1) == 0) {
      lVar5 = 0;
      do {
        if (local_48 == lVar5) {
          if ((param_1[4] == 0) ||
             (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f0,2), (uVar3 & 1) == 0))
          goto LAB_00a83ea0;
          goto LAB_00a83de8;
        }
        if (((lVar5 != 0) && (param_1[4] != 0)) &&
           (uVar3 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f2,2), (uVar3 & 1) != 0))
        goto LAB_00a83de8;
        uVar4 = 1;
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        uVar3 = FUN_00a86c6c(param_1,1);
        lVar5 = lVar5 + 1;
      } while ((uVar3 & 1) == 0);
      goto LAB_00a83df4;
    }
LAB_00a83de8:
    uVar4 = 1;
  }
LAB_00a83df4:
  return (ulong)uVar4;
}


// ===== 00a83eb8  FUN_00a83eb8 =====

ulong FUN_00a83eb8(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char local_50;
  char local_4f;
  long local_48;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
      return uVar4;
    }
    uVar3 = 0;
    goto LAB_00a84038;
  }
  FUN_00a853f4(&local_50,param_1,0x47);
  if (local_50 == '\x01') {
    if (param_1[4] != 0) {
      puVar1 = &DAT_0038e499;
      if (local_4f == '\0') {
        puVar1 = &DAT_0029fc30;
      }
      uVar2 = 0x19;
      if (local_4f == '\0') {
        uVar2 = 0x10;
      }
      uVar4 = <str_as_core::fmt::Display>::fmt(puVar1,uVar2);
      if ((uVar4 & 1) != 0) goto LAB_00a83f90;
    }
    uVar3 = 0;
    *param_1 = 0;
    *(char *)(param_1 + 1) = local_4f;
  }
  else {
    if (param_1[4] == 0) {
      uVar3 = FUN_00a837d8(param_1);
      goto LAB_00a84038;
    }
    if (local_48 == 0) {
LAB_00a84024:
      uVar3 = FUN_00a837d8(param_1);
      *(int *)(param_1 + 5) = (int)param_1[5] - (int)local_48;
      goto LAB_00a84038;
    }
    uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_002bd028,4);
    if ((uVar4 & 1) == 0) {
      lVar5 = 0;
      do {
        if (local_48 == lVar5) {
          if ((param_1[4] == 0) ||
             (uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f0,2), (uVar4 & 1) == 0))
          goto LAB_00a84024;
          goto LAB_00a83f90;
        }
        if (((lVar5 != 0) && (param_1[4] != 0)) &&
           (uVar4 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4f2,2), (uVar4 & 1) != 0))
        goto LAB_00a83f90;
        *(int *)(param_1 + 5) = (int)param_1[5] + 1;
        uVar4 = FUN_00a86c6c(param_1,1);
        lVar5 = lVar5 + 1;
      } while ((uVar4 & 1) == 0);
      uVar3 = 1;
      goto LAB_00a84038;
    }
LAB_00a83f90:
    uVar3 = 1;
  }
LAB_00a84038:
  return (ulong)(uVar3 & 1);
}


// ===== 00a84054  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::entries<&u8,core::slice::iter::Iter<u8>> =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::fmt::builders::[6]::core::fmt::builders::DebugList>::entries<&u8,
   core::slice::iter::Iter<u8>> */

undefined8 __rustcall
<core::fmt::builders::[6]::core::fmt::builders::DebugList>::entries<&u8,core::slice::iter::Iter<u8>>
          (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long local_38;
  
  if (param_2 != param_3) {
    do {
      lVar1 = param_2 + 1;
      local_38 = param_2;
      <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
                (param_1,&local_38,&DAT_00afe850);
      param_2 = lVar1;
    } while (lVar1 != param_3);
  }
  return param_1;
}


// ===== 00a840bc  <core[bcece726f298455b]::iter::adapters::copied::Copied<core[bcece726f298455b]::slice::iter::Iter<u8>>as_core[bcece726f298455b]::iter::traits::double_ended::DoubleEndedIterator>::try_rfold::<usize,core[bcece726f298455b]::iter::traits::iterator::Iterator::rposition::check<u8,<rustc_demangle[99d3400d5e5960e3]::v0::Parser>::ident::{closure#0}>::{closure#0},core[bcece726f298455b]::ops::control_flow::ControlFlow<usize,usize>> =====

/* <core[bcece726f298455b]::iter::adapters::copied::Copied<core[bcece726f298455b]::slice::iter::Iter<u8>>
   as core[bcece726f298455b]::iter::traits::double_ended::DoubleEndedIterator>::try_rfold::<usize,
   core[bcece726f298455b]::iter::traits::iterator::Iterator::rposition::check<u8,
   <rustc_demangle[99d3400d5e5960e3]::v0::Parser>::ident::{closure#0}>::{closure#0},
   core[bcece726f298455b]::ops::control_flow::ControlFlow<usize, usize>> */

undefined1  [16]
<core[bcece726f298455b]::iter::adapters::copied::Copied<core[bcece726f298455b]::slice::iter::Iter<u8>>as_core[bcece726f298455b]::iter::traits::double_ended::DoubleEndedIterator>
::try_rfold::
<usize,core[bcece726f298455b]::iter::traits::iterator::Iterator::rposition::check<u8,<rustc_demangle[99d3400d5e5960e3]::v0::Parser>::ident::_closure_0_>::_closure_0_,core[bcece726f298455b]::ops::control_flow::ControlFlow<usize,usize>>
          (long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  
  lVar3 = param_2 - param_1[1];
  pcVar2 = (char *)param_1[1];
  do {
    pcVar4 = pcVar2 + -1;
    if (pcVar2 == (char *)*param_1) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (char *)*param_1 + lVar3;
      return auVar1 << 0x40;
    }
    param_1[1] = (long)pcVar4;
    param_2 = param_2 + -1;
    pcVar2 = pcVar4;
  } while (*pcVar4 != '_');
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = 1;
  return auVar5;
}


// ===== 00a84108  FUN_00a84108 =====

ulong FUN_00a84108(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined *puVar9;
  long unaff_x22;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_d0;
  long lStack_c8;
  undefined *local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  undefined *local_88;
  char local_80;
  undefined7 uStack_7f;
  long local_70;
  
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_00a84370:
    if (((param_1[4] == 0) ||
        (uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_0038e527,3), (uVar5 & 1) == 0)) &&
       (uVar5 = FUN_00a8372c(param_1), (uVar5 & 1) == 0)) {
      if (param_1[4] != 0) {
        uVar8 = 1;
        uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_0038e52a,1);
        if ((uVar5 & 1) != 0) goto LAB_00a8439c;
      }
      if (((*param_1 != 0) && (uVar5 = param_1[2], uVar5 < (ulong)param_1[1])) &&
         (*(char *)(*param_1 + uVar5) == 'u')) {
        uVar8 = 0;
        param_1[2] = uVar5 + 1;
        goto LAB_00a8439c;
      }
      if ((param_1[4] == 0) ||
         (uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_002bd158,4), (uVar5 & 1) == 0)) {
        uVar5 = FUN_00a85dac(param_1);
        return uVar5;
      }
    }
  }
  else {
    uVar3 = param_1[1];
    uVar5 = param_1[2];
    if ((uVar5 < uVar3) && (*(char *)(lVar7 + uVar5) == 'U')) {
      uVar5 = uVar5 + 1;
      bVar4 = true;
      param_1[2] = uVar5;
    }
    else {
      bVar4 = false;
    }
    if ((uVar3 <= uVar5) || (*(char *)(lVar7 + uVar5) != 'K')) {
      if (bVar4) {
        puVar9 = (undefined *)0x0;
LAB_00a841a8:
        if ((param_1[4] != 0) &&
           (uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_0038e51d,7), (uVar5 & 1) != 0))
        goto LAB_00a84398;
        if (puVar9 != (undefined *)0x0) goto LAB_00a841f4;
      }
      goto LAB_00a84370;
    }
    uVar1 = uVar5 + 1;
    param_1[2] = uVar1;
    if ((uVar1 < uVar3) && (*(char *)(lVar7 + uVar1) == 'C')) {
      local_88 = &DAT_0038e51c;
      unaff_x22 = 1;
      param_1[2] = uVar5 + 2;
LAB_00a841f0:
      puVar9 = local_88;
      if (bVar4) goto LAB_00a841a8;
LAB_00a841f4:
      lVar7 = param_1[4];
      if ((lVar7 == 0) ||
         (uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_002a1330,8,lVar7), (uVar5 & 1) == 0)) {
        local_d0 = 0;
        local_a0 = 0x5f0000005f;
        local_b0 = 0;
        local_98 = 1;
        local_90 = 1;
        lStack_c8 = unaff_x22;
        local_c0 = puVar9;
        lStack_b8 = unaff_x22;
        lStack_a8 = unaff_x22;
        auVar11 = FUN_00a87090(&local_d0);
        if (auVar11._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe900);
        }
        if ((lVar7 == 0) ||
           (uVar5 = <str_as_core::fmt::Display>::fmt(auVar11._0_8_,auVar11._8_8_,lVar7),
           (uVar5 & 1) == 0)) {
          memcpy(&local_88,&local_d0,0x48);
          auVar11 = FUN_00a87090(&local_88);
          lVar6 = auVar11._0_8_;
          lVar10 = lVar7;
          while (lVar6 != 0) {
            if (lVar7 != 0) {
              uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_0038e526,1,lVar7);
              if ((uVar5 & 1) != 0) goto LAB_00a84398;
              lVar10 = param_1[4];
              if (lVar10 == 0) {
                lVar7 = 0;
              }
              else {
                uVar5 = <str_as_core::fmt::Display>::fmt(auVar11._0_8_,auVar11._8_8_,lVar10);
                lVar7 = lVar10;
                if ((uVar5 & 1) != 0) goto LAB_00a84398;
              }
            }
            auVar11 = FUN_00a87090(&local_88);
            lVar6 = auVar11._0_8_;
          }
          if ((lVar10 == 0) ||
             (uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_0038e524,2,lVar10), (uVar5 & 1) == 0))
          goto LAB_00a84370;
        }
      }
    }
    else {
      FUN_00a8548c(&local_88,param_1);
      if (local_88 == (undefined *)0x0) {
        if (param_1[4] != 0) {
          puVar9 = &DAT_0038e499;
          if (local_80 == '\0') {
            puVar9 = &DAT_0029fc30;
          }
          uVar2 = 0x19;
          if (local_80 == '\0') {
            uVar2 = 0x10;
          }
          uVar5 = <str_as_core::fmt::Display>::fmt(puVar9,uVar2);
          if ((uVar5 & 1) != 0) goto LAB_00a84398;
        }
        uVar8 = 0;
        *param_1 = 0;
        *(char *)(param_1 + 1) = local_80;
        goto LAB_00a8439c;
      }
      unaff_x22 = CONCAT71(uStack_7f,local_80);
      if ((unaff_x22 != 0) && (local_70 == 0)) goto LAB_00a841f0;
      if ((param_1[4] == 0) ||
         (uVar5 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10), (uVar5 & 1) == 0)) {
        uVar8 = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_00a8439c;
      }
    }
  }
LAB_00a84398:
  uVar8 = 1;
LAB_00a8439c:
  return (ulong)uVar8;
}


// ===== 00a8444c  rustc_demangle::try_demangle =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustc_demangle::try_demangle */

void __rustcall rustc_demangle::try_demangle(long *param_1)

{
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  demangle(&local_60);
  if (local_60 == 0) {
    *param_1 = 2;
  }
  else {
    param_1[1] = lStack_58;
    *param_1 = local_60;
    param_1[3] = lStack_48;
    param_1[2] = lStack_50;
    param_1[5] = lStack_38;
    param_1[4] = local_40;
    param_1[7] = lStack_28;
    param_1[6] = lStack_30;
  }
  return;
}


// ===== 00a8449c  rustc_demangle::demangle =====

/* WARNING: Unknown calling convention: __rustcall */
/* rustc_demangle::demangle */

void __rustcall rustc_demangle::demangle(undefined8 *param_1,int *param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 uVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong unaff_x23;
  byte *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  ulong local_88;
  long local_78;
  ulong uStack_70;
  long local_68;
  ulong uStack_60;
  long local_58;
  ulong local_50;
  undefined1 uStack_21;
  
  <core::str::pattern::[u]::core::str::pattern::StrSearcher>::new
            (&local_c0,param_2,param_3,&DAT_0038e53a,6);
  uVar23 = param_3;
  if (((uint)local_c0 & 1) == 0) {
    do {
      FUN_00a88840(&local_58,&local_c0);
    } while (local_58 == 1);
    if (local_58 == 0) {
LAB_00a845d8:
      uVar10 = local_50 + 6;
      if (uVar10 != 0) {
        if (uVar10 < param_3) {
          iVar5 = (int)*(char *)((long)param_2 + uVar10);
          if (iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41)) {
code_r0x00a845f8:
            ppuVar9 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afe918;
            goto LAB_00a84dfc;
          }
        }
        else if (uVar10 != param_3) goto code_r0x00a845f8;
      }
      pbVar24 = (byte *)((long)param_2 + uVar10);
      do {
        if (pbVar24 == (byte *)((long)param_2 + param_3)) {
          if (local_50 == 0) {
            uVar23 = 0;
            goto LAB_00a84d0c;
          }
          if (local_50 < param_3) {
            iVar5 = (int)*(char *)((long)param_2 + local_50);
            uVar23 = local_50;
            if (iVar5 != -0x41 && iVar5 + 0x41 < 0 == SCARRY4(iVar5,0x41)) break;
          }
          else if (local_50 == param_3) break;
                    /* WARNING: Subroutine does not return */
          core::str::slice_error_fail
                    (param_2,param_3,0,local_50,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe930);
        }
        pbVar11 = pbVar24 + 1;
        uVar19 = (uint)*pbVar24;
        if ((char)*pbVar24 < '\0') {
          if (uVar19 < 0xe0) {
            uVar19 = pbVar24[1] & 0x3f | (uVar19 & 0x1f) << 6;
            pbVar11 = pbVar24 + 2;
          }
          else {
            uVar20 = pbVar24[2] & 0x3f | (pbVar24[1] & 0x3f) << 6;
            if (uVar19 < 0xf0) {
              uVar19 = uVar20 | (uVar19 & 0x1f) << 0xc;
              pbVar11 = pbVar24 + 3;
            }
            else {
              pbVar11 = pbVar24 + 4;
              uVar19 = pbVar24[3] & 0x3f | uVar20 << 6 | (uVar19 & 7) << 0x12;
            }
          }
        }
        pbVar24 = pbVar11;
      } while ((0xfffffff8 < uVar19 - 0x47) || (0xfffffff5 < uVar19 - 0x3a));
    }
  }
  else {
    lVar14 = uStack_60 - 1;
    if (local_88 == 0xffffffffffffffff) {
      local_50 = CONCAT44(uStack_94,local_98);
      uVar10 = local_50 + lVar14;
      if (uVar10 < uStack_70) {
        lVar12 = 0;
        if (local_b8 <= uStack_60) {
          lVar12 = uStack_60 - local_b8;
        }
LAB_00a8462c:
        if ((local_a0 >> ((ulong)*(byte *)(local_78 + uVar10) & 0x3f) & 1) == 0) {
          local_50 = local_50 + uStack_60;
        }
        else {
          lVar22 = -local_50;
          lVar6 = local_b8 + local_50;
          lVar8 = lVar12;
          pcVar7 = (char *)(local_68 + local_b8);
          do {
            if (lVar8 == 0) {
              uVar10 = local_b8;
              goto LAB_00a84680;
            }
            cVar2 = *pcVar7;
            pcVar1 = (char *)(local_78 + lVar6);
            lVar22 = lVar22 + -1;
            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + -1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 == *pcVar1);
          local_50 = -lVar22;
        }
        goto LAB_00a846a8;
      }
    }
    else {
      local_50 = CONCAT44(uStack_94,local_98);
      uVar10 = local_50 + lVar14;
      if (uVar10 < uStack_70) {
LAB_00a84510:
        if ((local_a0 >> ((ulong)*(byte *)(local_78 + uVar10) & 0x3f) & 1) == 0) {
          local_88 = 0;
          local_50 = local_50 + uStack_60;
        }
        else {
          uVar10 = local_88;
          if (local_88 <= local_b8) {
            uVar10 = local_b8;
          }
          lVar12 = local_50 + uVar10;
          pcVar7 = (char *)(local_68 + uVar10);
          uVar21 = lVar12 - local_b8;
          lVar6 = 0;
          if (uVar10 <= uStack_60) {
            lVar6 = uStack_60 - uVar10;
          }
          do {
            if (lVar6 == 0) {
              uVar21 = local_b8;
              goto LAB_00a84574;
            }
            cVar2 = *pcVar7;
            pcVar1 = (char *)(local_78 + lVar12);
            uVar21 = uVar21 + 1;
            lVar12 = lVar12 + 1;
            pcVar7 = pcVar7 + 1;
            lVar6 = lVar6 + -1;
          } while (cVar2 == *pcVar1);
          local_88 = 0;
          local_50 = uVar21;
        }
        goto LAB_00a845a4;
      }
    }
  }
LAB_00a84784:
  if (uVar23 < 3) {
    if (uVar23 == 2) {
      if ((short)*param_2 == 0x4e5a) {
        uVar23 = 2;
LAB_00a84844:
        lVar14 = -2;
        lVar12 = 2;
        goto LAB_00a84848;
      }
LAB_00a84bc8:
      uVar23 = 2;
      if ((char)*param_2 == 'R') {
LAB_00a84bd8:
        pbVar24 = (byte *)((long)param_2 + 1);
        iVar5 = (int)(char)*pbVar24;
        if (iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41)) {
          ppuVar9 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afea70;
          uVar10 = 1;
          param_3 = uVar23;
          goto LAB_00a84dfc;
        }
        uVar19 = (uint)*pbVar24;
        lVar14 = -1;
        goto LAB_00a84c0c;
      }
    }
  }
  else {
    if ((short)*param_2 == 0x5a5f && *(char *)((long)param_2 + 2) == 'N') {
      if ((uVar23 == 3) ||
         (iVar5 = (int)*(char *)((long)param_2 + 3),
         iVar5 != -0x41 && iVar5 + 0x41 < 0 == SCARRY4(iVar5,0x41))) {
        lVar14 = -3;
        lVar12 = 3;
LAB_00a84848:
        pbVar24 = (byte *)(lVar14 + uVar23);
        pbVar11 = (byte *)((long)param_2 + lVar12);
        pbVar18 = pbVar11 + (long)pbVar24;
        pbVar13 = pbVar24;
        pbVar15 = pbVar11;
        do {
          if (pbVar13 == (byte *)0x0) {
            if (pbVar24 != (byte *)0x0) {
              local_c0 = pbVar11 + 1;
              uVar19 = (uint)*pbVar11;
              if ((char)*pbVar11 < '\0') {
                if (uVar19 < 0xe0) {
                  uVar19 = pbVar11[1] & 0x3f | (uVar19 & 0x1f) << 6;
                  local_c0 = pbVar11 + 2;
                }
                else {
                  uVar20 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
                  if (uVar19 < 0xf0) {
                    uVar19 = uVar20 | (uVar19 & 0x1f) << 0xc;
                    local_c0 = pbVar11 + 3;
                  }
                  else {
                    uVar19 = pbVar11[3] & 0x3f | uVar20 << 6 | (uVar19 & 7) << 0x12;
                    local_c0 = pbVar11 + 4;
                  }
                }
              }
              if (uVar19 != 0x45) {
                unaff_x23 = 0;
                goto LAB_00a84a08;
              }
              unaff_x23 = 0;
              goto LAB_00a848f8;
            }
            break;
          }
          bVar3 = *pbVar15;
          pbVar13 = pbVar13 + -1;
          pbVar15 = pbVar15 + 1;
        } while (-1 < (char)bVar3);
LAB_00a84b5c:
        if (uVar23 < 3) {
          if (uVar23 == 2) goto LAB_00a84bc8;
          goto LAB_00a84d0c;
        }
        goto LAB_00a84b64;
      }
      ppuVar9 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afeb18;
LAB_00a84df0:
      uVar10 = 3;
      param_3 = uVar23;
      goto LAB_00a84dfc;
    }
    if ((short)*param_2 == 0x4e5a) {
      iVar5 = (int)*(char *)((long)param_2 + 2);
      if (iVar5 != -0x41 && iVar5 + 0x41 < 0 == SCARRY4(iVar5,0x41)) goto LAB_00a84844;
      ppuVar9 = (undefined **)&UNK_00afeb00;
LAB_00a84dd8:
      uVar10 = 2;
      param_3 = uVar23;
LAB_00a84dfc:
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail(param_2,param_3,uVar10,param_3,ppuVar9);
    }
    if ((uVar23 != 3) && (*param_2 == 0x4e5a5f5f)) {
      if (uVar23 < 5) {
        uVar23 = 4;
      }
      else {
        iVar5 = (int)(char)param_2[1];
        if (iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41)) {
          ppuVar9 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afeae8;
          uVar10 = 4;
          param_3 = uVar23;
          goto LAB_00a84dfc;
        }
      }
      lVar14 = -4;
      lVar12 = 4;
      goto LAB_00a84848;
    }
LAB_00a84b64:
    if ((short)*param_2 == 0x525f) {
      pbVar24 = (byte *)((long)param_2 + 2);
      iVar5 = (int)(char)*pbVar24;
      if (iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41)) {
        ppuVar9 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afea88;
        goto LAB_00a84dd8;
      }
      uVar19 = (uint)*pbVar24;
      lVar14 = -2;
    }
    else {
      if ((char)*param_2 == 'R') goto LAB_00a84bd8;
      if ((uVar23 == 3) || ((short)*param_2 != 0x5f5f || *(char *)((long)param_2 + 2) != 'R'))
      goto LAB_00a84d0c;
      pbVar24 = (byte *)((long)param_2 + 3);
      iVar5 = (int)(char)*pbVar24;
      if (iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41)) {
        ppuVar9 = &PTR_s__rust_deps_rustc_demangle_0_1_28_00afea58;
        goto LAB_00a84df0;
      }
      uVar19 = (uint)*pbVar24;
      lVar14 = -3;
    }
LAB_00a84c0c:
    if (uVar19 - 0x41 < 0x1a) {
      uVar10 = 0;
      unaff_x23 = lVar14 + uVar23;
      local_c0 = &DAT_00000001;
      do {
        if (unaff_x23 == uVar10) {
          local_b0 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_c0 = pbVar24;
          local_b8 = unaff_x23;
          iVar5 = FUN_00a85748(&local_c0,0);
          if (iVar5 != 0) {
LAB_00a84d64:
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      (&DAT_0038e4b3,0x3d,&uStack_21,&DAT_00afe9a8,
                       &PTR_s__rust_deps_rustc_demangle_0_1_28_00afeaa0);
          }
          if (local_c0 == (byte *)0x0) goto LAB_00a84d0c;
          if ((local_b0 < local_b8) && (local_c0[local_b0] - 0x41 < 0x1a)) {
            local_a0 = 0;
            local_98 = 0;
            iVar5 = FUN_00a85748(&local_c0,0);
            if (iVar5 != 0) goto LAB_00a84d64;
            if (local_c0 == (byte *)0x0) goto LAB_00a84d0c;
          }
          if (local_b0 != 0) {
            if (local_b0 < local_b8) {
              iVar5 = (int)(char)local_c0[local_b0];
              if (iVar5 == -0x41 || iVar5 + 0x41 < 0 != SCARRY4(iVar5,0x41)) {
code_r0x00a84d00:
                    /* WARNING: Subroutine does not return */
                core::str::slice_error_fail();
              }
            }
            else if (local_b8 != local_b0) goto code_r0x00a84d00;
          }
          pbVar11 = (byte *)0x0;
          local_c0 = local_c0 + local_b0;
          lVar14 = local_b8 - local_b0;
          if (lVar14 != 0) goto LAB_00a84900;
          goto LAB_00a84d5c;
        }
        pbVar11 = pbVar24 + uVar10;
        uVar10 = uVar10 + 1;
      } while (-1 < (char)*pbVar11);
      pbVar24 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
      uVar16 = 0;
      lVar14 = 0;
      goto LAB_00a84d20;
    }
  }
LAB_00a84d0c:
  pbVar24 = (byte *)0x0;
  pbVar11 = (byte *)0x0;
  uVar16 = 0;
  lVar14 = 0;
  local_c0 = &DAT_00000001;
LAB_00a84d20:
  *param_1 = uVar16;
  param_1[1] = pbVar11;
  param_1[2] = pbVar24;
  param_1[3] = unaff_x23;
  param_1[4] = param_2;
  param_1[5] = uVar23;
  param_1[6] = local_c0;
  param_1[7] = lVar14;
  return;
  while( true ) {
    if (uStack_60 <= local_b8 - 1) goto code_r0x00a84d8c;
    if (*(char *)(local_68 + uVar10) != *(char *)(local_78 + local_50 + uVar10)) break;
LAB_00a84680:
    uVar10 = uVar10 - 1;
    if (uVar10 == 0xffffffffffffffff) goto LAB_00a845d8;
  }
  local_50 = local_50 + CONCAT44(uStack_a4,local_a8);
LAB_00a846a8:
  uVar10 = local_50 + lVar14;
  if (uStack_70 <= uVar10) goto LAB_00a84784;
  goto LAB_00a8462c;
LAB_00a84574:
  do {
    uVar10 = uVar21 - 1;
    if (uVar21 <= local_88) goto LAB_00a845d8;
    if (uStack_60 <= uVar10) {
code_r0x00a84d8c:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check
                (uVar10,uStack_60,&PTR_s__rustc_73dc9167f1cd099e525c9ade2_00afe888);
    }
    uVar21 = uVar10;
  } while (*(char *)(local_68 + uVar10) == *(char *)(local_78 + local_50 + uVar10));
  local_50 = local_50 + CONCAT44(uStack_a4,local_a8);
  local_88 = uStack_60 - CONCAT44(uStack_a4,local_a8);
LAB_00a845a4:
  uVar10 = local_50 + lVar14;
  if (uStack_70 <= uVar10) goto LAB_00a84784;
  goto LAB_00a84510;
  while( true ) {
    pbVar13 = local_c0;
    uVar10 = 0;
    do {
      uVar21 = uVar10;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar21;
      if (SUB168(auVar4 * ZEXT816(10),8) != 0) goto LAB_00a84b5c;
      uVar17 = (ulong)uVar20;
      uVar10 = uVar21 * 10 + (ulong)uVar20;
      if ((CARRY8(uVar21 * 10,(ulong)uVar20)) || (pbVar13 == pbVar18)) goto LAB_00a84b5c;
      local_c0 = pbVar13 + 1;
      uVar19 = (uint)*pbVar13;
      if ((char)*pbVar13 < '\0') {
        if (uVar19 < 0xe0) {
          uVar19 = pbVar13[1] & 0x3f | (uVar19 & 0x1f) << 6;
          local_c0 = pbVar13 + 2;
        }
        else {
          uVar20 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (uVar19 < 0xf0) {
            uVar19 = uVar20 | (uVar19 & 0x1f) << 0xc;
            local_c0 = pbVar13 + 3;
          }
          else {
            local_c0 = pbVar13 + 4;
            uVar19 = pbVar13[3] & 0x3f | uVar20 << 6 | (uVar19 & 7) << 0x12;
          }
        }
      }
      uVar20 = uVar19 - 0x30;
      pbVar13 = local_c0;
    } while (uVar20 < 10);
    if (uVar10 != 0) {
      lVar14 = uVar21 * 10 + uVar17;
      do {
        if (pbVar13 == pbVar18) goto LAB_00a84b5c;
        local_c0 = pbVar13 + 1;
        uVar19 = (uint)*pbVar13;
        if ((char)*pbVar13 < '\0') {
          if (uVar19 < 0xe0) {
            uVar19 = pbVar13[1] & 0x3f | (uVar19 & 0x1f) << 6;
            local_c0 = pbVar13 + 2;
          }
          else {
            uVar20 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
            if (uVar19 < 0xf0) {
              uVar19 = uVar20 | (uVar19 & 0x1f) << 0xc;
              local_c0 = pbVar13 + 3;
            }
            else {
              local_c0 = pbVar13 + 4;
              uVar19 = pbVar13[3] & 0x3f | uVar20 << 6 | (uVar19 & 7) << 0x12;
            }
          }
        }
        lVar14 = lVar14 + -1;
        pbVar13 = local_c0;
      } while (lVar14 != 0);
    }
    unaff_x23 = unaff_x23 + 1;
    if (uVar19 == 0x45) break;
LAB_00a84a08:
    uVar20 = uVar19 - 0x30;
    if (9 < uVar20) goto LAB_00a84b5c;
  }
LAB_00a848f8:
  lVar14 = (long)pbVar18 - (long)local_c0;
  if (lVar14 == 0) {
LAB_00a84d5c:
    uVar16 = 1;
  }
  else {
LAB_00a84900:
    if (*local_c0 == 0x2e) {
      uVar19 = 0x2e;
      uVar16 = 1;
      pbVar18 = local_c0;
      do {
        pbVar18 = pbVar18 + 1;
        while( true ) {
          if ((((0x19 < (uVar19 & 0x1fffdf) - 0x41) && (9 < uVar19 - 0x30)) && (0xe < uVar19 - 0x21)
              ) && (((0x26 < uVar19 - 0x3a ||
                     ((1L << ((ulong)(uVar19 - 0x3a) & 0x3f) & 0x7e0000007fU) == 0)) &&
                    (3 < uVar19 - 0x7b)))) goto LAB_00a849f0;
          if (pbVar18 == local_c0 + lVar14) goto LAB_00a84d20;
          uVar19 = (uint)*pbVar18;
          if (-1 < (char)*pbVar18) break;
          if (uVar19 < 0xe0) {
            uVar19 = pbVar18[1] & 0x3f | (uVar19 & 0x1f) << 6;
            pbVar18 = pbVar18 + 2;
          }
          else {
            uVar20 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
            if (uVar19 < 0xf0) {
              uVar19 = uVar20 | (uVar19 & 0x1f) << 0xc;
              pbVar18 = pbVar18 + 3;
            }
            else {
              pbVar13 = pbVar18 + 3;
              pbVar18 = pbVar18 + 4;
              uVar19 = *pbVar13 & 0x3f | uVar20 << 6 | (uVar19 & 7) << 0x12;
            }
          }
        }
      } while( true );
    }
LAB_00a849f0:
    uVar16 = 0;
    lVar14 = 0;
    local_c0 = &DAT_00000001;
  }
  goto LAB_00a84d20;
}


// ===== 00a84e28  <core::slice::[u8]>::starts_with =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::slice::[u8]>::starts_with */

bool __rustcall
<core::slice::[u8]>::starts_with(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  int iVar1;
  
  if (param_2 < param_4) {
    return false;
  }
  iVar1 = memcmp(param_3,param_1,param_4);
  return iVar1 == 0;
}


// ===== 00a84e60  FUN_00a84e60 =====

uint FUN_00a84e60(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0x378) {
    return 1;
  }
  if (param_1 < 0x3fffe) {
    uVar1 = core::unicode::unicode_data::cn_planes_0_3::lookup_slow(param_1);
    return uVar1 ^ 1;
  }
  uVar1 = 1;
  if ((((param_1 != 0xe0001) && (0x5f < param_1 - 0xe0020)) && (0xef < param_1 - 0xe0100)) &&
     (0xfffd < param_1 - 0xf0000)) {
    uVar1 = (uint)(param_1 - 0x100000 < 0xfffe);
  }
  return uVar1;
}


// ===== 00a84eec  FUN_00a84eec =====

void FUN_00a84eec(uint *param_1,uint param_2)

{
  ulong uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined1 auStack_2e [2];
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined2 local_24;
  
  uVar5 = (ulong)param_2;
  if ((int)param_2 < 0xd) {
    if (param_2 == 0) {
      uVar4 = 0x305c;
    }
    else if (param_2 == 9) {
      uVar4 = 0x745c;
    }
    else {
      if (param_2 != 10) goto LAB_00a84f78;
      uVar4 = 0x6e5c;
    }
  }
  else if ((int)param_2 < 0x27) {
    if (param_2 == 0xd) {
      uVar4 = 0x725c;
    }
    else {
      if (param_2 != 0x22) {
LAB_00a84f78:
        if ((param_2 - 0x20 < 0x5f) || ((param_2 & 0x1ffffe) == 0xff9e)) {
LAB_00a84ff0:
          *param_1 = param_2;
          uVar3 = 0x81;
          cVar2 = -0x80;
        }
        else {
          if ((0x1f < param_2) &&
             ((((0x20 < param_2 - 0x7f && (0x18 < param_2 - 0xe000 >> 8)) &&
               (0xfffd < param_2 - 0xf0000)) && ((param_2 != 0x20 && (0xfffd < param_2 - 0x100000)))
              ))) {
            if (param_2 < 0x85) {
LAB_00a84fe4:
              uVar1 = FUN_00a84e60(uVar5);
              if ((uVar1 & 1) != 0) goto LAB_00a84ff0;
            }
            else {
              uVar1 = FUN_00a87238(uVar5);
              if ((uVar1 & 1) == 0) {
                if (param_2 < 0x300) {
                  if (param_2 < 0xad) goto LAB_00a84fe4;
                }
                else {
                  uVar1 = core::unicode::unicode_data::grapheme_extend::lookup_slow(uVar5);
                  if ((uVar1 & 1) != 0) goto LAB_00a85050;
                }
                uVar1 = core::unicode::unicode_data::default_ignorable_code_point::lookup_slow
                                  (uVar5);
                if (((uVar1 & 1) == 0) &&
                   (uVar1 = core::unicode::unicode_data::cf::lookup_slow(uVar5), (uVar1 & 1) == 0))
                goto LAB_00a84fe4;
              }
            }
          }
LAB_00a85050:
          uStack_2a = 0;
          uStack_29 = (&DAT_002a0ca0)[param_2 >> 0x14];
          uStack_28 = (&DAT_002a0ca0)[(ulong)(param_2 >> 0x10) & 0xf];
          uStack_27 = (&DAT_002a0ca0)[(ulong)(param_2 >> 0xc) & 0xf];
          local_2c = 0;
          uStack_26 = (&DAT_002a0ca0)[(ulong)(param_2 >> 8) & 0xf];
          uStack_25 = (&DAT_002a0ca0)[(ulong)(param_2 >> 4) & 0xf];
          uVar1 = (ulong)LZCOUNT(param_2 | 1) >> 2;
          local_24._0_1_ = (&DAT_002a0ca0)[uVar5 & 0xf];
          cVar2 = (char)uVar1 + -2;
          uVar5 = (ulong)LZCOUNT(param_2 | 1) >> 2;
          auStack_2e[uVar1] = 0x5c;
          auStack_2e[uVar5 + 1] = 0x75;
          *(undefined1 *)((long)&local_2c + uVar5) = 0x7b;
          local_24 = CONCAT11(0x7d,(undefined1)local_24);
          *(ulong *)param_1 =
               CONCAT17(uStack_25,
                        CONCAT16(uStack_26,
                                 CONCAT15(uStack_27,
                                          CONCAT14(uStack_28,
                                                   CONCAT13(uStack_29,CONCAT12(uStack_2a,local_2c)))
                                         )));
          uVar3 = 10;
          *(undefined2 *)(param_1 + 2) = local_24;
        }
        goto LAB_00a8502c;
      }
      uVar4 = 0x225c;
    }
  }
  else if (param_2 == 0x27) {
    uVar4 = 0x275c;
  }
  else {
    if (param_2 != 0x5c) goto LAB_00a84f78;
    uVar4 = 0x5c5c;
  }
  cVar2 = '\0';
  *(undefined2 *)param_1 = uVar4;
  uVar3 = 2;
  *(undefined8 *)((long)param_1 + 2) = 0;
LAB_00a8502c:
  *(char *)(param_1 + 3) = cVar2;
  *(undefined1 *)((long)param_1 + 0xd) = uVar3;
  return;
}


// ===== 00a85138  <core::escape::[0]::core::escape::EscapeIterInner<ausize,core::escape::MaybeEscaped>>::next =====

/* WARNING: Unknown calling convention: __rustcall */
/* <core::escape::[0]::core::escape::EscapeIterInner<ausize, core::escape::MaybeEscaped>>::next */

uint __rustcall
<core::escape::[0]::core::escape::EscapeIterInner<ausize,core::escape::MaybeEscaped>>::next
          (uint *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)param_1[3];
  if (*(byte *)((long)param_1 + 0xd) <= bVar1) {
    return 0xffffffff;
  }
  *(byte *)(param_1 + 3) = bVar1 + 1;
  if (0x80 < *(byte *)((long)param_1 + 0xd)) {
    return *param_1;
  }
  return (uint)*(byte *)((long)param_1 + (ulong)bVar1);
}


// ===== 00a85170  FUN_00a85170 =====

undefined8 FUN_00a85170(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  
  auVar8 = <core::str::str>::trim_start_matches<&str>(*param_1,param_1[1],&DAT_0038e56b,1);
  uVar3 = auVar8._8_8_;
  if (uVar3 < 0x11) {
    if (uVar3 == 0) {
      uVar2 = 1;
    }
    else {
      uVar4 = 0;
      uVar2 = 1;
      pbVar5 = auVar8._0_8_;
      do {
        pbVar7 = pbVar5 + 1;
        uVar6 = (uint)*pbVar5;
        if ((char)*pbVar5 < '\0') {
          if (uVar6 < 0xe0) {
            uVar6 = pbVar5[1] & 0x3f | (uVar6 & 0x1f) << 6;
            pbVar7 = pbVar5 + 2;
          }
          else {
            uVar1 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (uVar6 < 0xf0) {
              uVar6 = uVar1 | (uVar6 & 0x1f) << 0xc;
              pbVar7 = pbVar5 + 3;
            }
            else {
              pbVar7 = pbVar5 + 4;
              uVar6 = pbVar5[3] & 0x3f | uVar1 << 6 | (uVar6 & 7) << 0x12;
            }
          }
        }
        uVar1 = (uVar6 - 0x41 & 0xffffffdf) + 10;
        if (uVar6 < 0x3a) {
          uVar1 = uVar6 - 0x30;
        }
        if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
          core::option::unwrap_failed(&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe9c8,uVar4);
        }
        uVar4 = (ulong)uVar1 | uVar4 << 4;
        pbVar5 = pbVar7;
      } while (pbVar7 != auVar8._0_8_ + uVar3);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 00a85274  FUN_00a85274 =====

void FUN_00a85274(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined1 uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  if ((uVar5 < uVar2) && (*(char *)(*param_2 + uVar5) == '_')) {
    uVar6 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    param_2[2] = uVar5 + 1;
  }
  else {
    uVar7 = 0;
    uVar1 = uVar5;
    if (uVar5 <= uVar2) {
      uVar1 = uVar2;
    }
    while (uVar1 != uVar5) {
      bVar3 = *(byte *)(*param_2 + uVar5);
      if (bVar3 == 0x5f) {
        param_2[2] = uVar5 + 1;
        if (uVar7 != 0xffffffffffffffff) {
          uVar6 = 0;
          *(ulong *)(param_1 + 8) = uVar7 + 1;
          goto LAB_00a85344;
        }
        break;
      }
      uVar8 = bVar3 - 0x30;
      if (9 < uVar8) {
        uVar8 = (uint)bVar3;
        if (uVar8 - 0x61 < 0x1a) {
          uVar8 = uVar8 - 0x57;
        }
        else {
          if (0x19 < uVar8 - 0x41) break;
          uVar8 = uVar8 - 0x1d;
        }
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      uVar5 = uVar5 + 1;
      param_2[2] = uVar5;
      if ((SUB168(auVar4 * ZEXT816(0x3e),8) != 0) ||
         (uVar2 = uVar7 * 0x3e, uVar7 = uVar2 + (byte)uVar8, CARRY8(uVar2,(ulong)(byte)uVar8)))
      break;
    }
    param_1[1] = 0;
    uVar6 = 1;
  }
LAB_00a85344:
  *param_1 = uVar6;
  return;
}


// ===== 00a8534c  FUN_00a8534c =====

void FUN_00a8534c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  lVar6 = *param_2;
  uVar1 = uVar4;
  uVar2 = uVar4;
  if (uVar4 <= uVar3) {
    uVar2 = uVar3;
  }
  do {
    uVar7 = uVar1;
    if (uVar7 == uVar2) goto LAB_00a853d8;
    bVar5 = *(byte *)(lVar6 + uVar7);
    uVar1 = uVar7 + 1;
    param_2[2] = uVar1;
  } while ((bVar5 - 0x30 < 10) || (bVar5 - 0x61 < 6));
  if (bVar5 == 0x5f) {
    if (((uVar7 < uVar4) || (uVar3 < uVar7)) ||
       ((uVar4 != uVar3 &&
        ((uVar4 != 0 &&
         (*(char *)(lVar6 + uVar4) + 0x40 < 0 != SCARRY4((int)*(char *)(lVar6 + uVar4),0x40))))))) {
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail();
    }
    *param_1 = lVar6 + uVar4;
    param_1[1] = uVar7 - uVar4;
  }
  else {
LAB_00a853d8:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  return;
}


// ===== 00a853f4  FUN_00a853f4 =====

void FUN_00a853f4(undefined1 *param_1,long *param_2,char param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  byte local_30;
  undefined1 local_2f;
  long local_28;
  
  uVar1 = param_2[2];
  if ((uVar1 < (ulong)param_2[1]) && (*(char *)(*param_2 + uVar1) == param_3)) {
    param_2[2] = uVar1 + 1;
    FUN_00a85274(&local_30);
    if ((local_30 & 1) == 0) {
      if (local_28 != -1) {
        uVar2 = 0;
        *(long *)(param_1 + 8) = local_28 + 1;
        goto LAB_00a85454;
      }
      param_1[1] = 0;
    }
    else {
      param_1[1] = local_2f;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
LAB_00a85454:
  *param_1 = uVar2;
  return;
}


// ===== 00a8548c  FUN_00a8548c =====

void FUN_00a8548c(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  uVar12 = param_2[1];
  uVar9 = param_2[2];
  if ((uVar9 < uVar12) && (*(char *)(*param_2 + uVar9) == 'u')) {
    uVar9 = uVar9 + 1;
    bVar6 = true;
    param_2[2] = uVar9;
  }
  else {
    bVar6 = false;
  }
  if (uVar12 <= uVar9) goto LAB_00a8557c;
  lVar13 = *param_2;
  uVar4 = *(byte *)(lVar13 + uVar9) - 0x30;
  if (9 < uVar4) goto LAB_00a8557c;
  uVar9 = uVar9 + 1;
  param_2[2] = uVar9;
  if ((uVar4 & 0xff) != 0) {
    uVar8 = (ulong)uVar4 & 0xff;
    uVar2 = uVar9;
    if (uVar9 <= uVar12) {
      uVar2 = uVar12;
    }
    do {
      if ((uVar2 == uVar9) || (uVar4 = *(byte *)(lVar13 + uVar9) - 0x30, 9 < uVar4))
      goto LAB_00a8554c;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar8;
      uVar9 = uVar9 + 1;
      param_2[2] = uVar9;
      uVar15 = uVar8 * 10;
      uVar1 = (ulong)(byte)uVar4;
      uVar8 = uVar15 + uVar1;
    } while ((SUB168(auVar5 * ZEXT816(10),8) == 0) && (!CARRY8(uVar15,uVar1)));
    goto LAB_00a8557c;
  }
  uVar8 = 0;
LAB_00a8554c:
  if ((uVar9 < uVar12) && (*(char *)(lVar13 + uVar9) == '_')) {
    uVar9 = uVar9 + 1;
    param_2[2] = uVar9;
  }
  uVar2 = uVar9 + uVar8;
  if ((CARRY8(uVar9,uVar8)) || (param_2[2] = uVar2, uVar12 < uVar2)) goto LAB_00a8557c;
  if ((uVar9 != uVar12) &&
     (((uVar9 != 0 &&
       (iVar10 = (int)*(char *)(lVar13 + uVar9),
       iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))) ||
      ((uVar2 != uVar12 &&
       (iVar10 = (int)*(char *)(lVar13 + uVar2),
       iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41))))))) {
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (lVar13,uVar12,uVar9,uVar2,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afe9f8);
  }
  lVar13 = lVar13 + uVar9;
  if (!bVar6) {
    *param_1 = lVar13;
    param_1[1] = uVar8;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
  }
  lVar11 = 0;
  lVar7 = lVar13 + uVar8;
  lVar14 = 1;
  do {
    if (uVar8 + lVar11 == 0) {
      uVar9 = 0;
      lVar7 = lVar13;
      goto LAB_00a8567c;
    }
    lVar3 = lVar7 + lVar11;
    lVar11 = lVar11 + -1;
  } while (*(char *)(lVar3 + -1) != '_');
  uVar9 = uVar8 + lVar11;
  if (uVar9 == 0) {
LAB_00a8562c:
    if (uVar9 + 1 < uVar8) {
      iVar10 = (int)*(char *)(lVar7 + lVar11 + 1);
      if (iVar10 + 0x40 < 0 != SCARRY4(iVar10,0x40)) {
code_r0x00a8565c:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail();
      }
      uVar12 = uVar9 + 1;
    }
    else {
      uVar12 = uVar8;
      if (lVar11 != -1) goto code_r0x00a8565c;
    }
  }
  else {
    if (uVar9 < uVar8) {
      iVar10 = (int)*(char *)(lVar7 + lVar11);
      if (iVar10 == -0x41 || iVar10 + 0x41 < 0 != SCARRY4(iVar10,0x41)) goto code_r0x00a856a4;
      goto LAB_00a8562c;
    }
    if (lVar11 != 0) {
code_r0x00a856a4:
                    /* WARNING: Subroutine does not return */
      core::str::slice_error_fail
                (lVar13,uVar8,0,uVar9,&PTR_s__rust_deps_rustc_demangle_0_1_28_00afea10);
    }
    if (uVar9 != 0xffffffffffffffff) goto LAB_00a8562c;
    uVar12 = 0;
  }
  uVar8 = uVar8 - uVar12;
  lVar7 = lVar13 + uVar12;
  lVar14 = lVar13;
LAB_00a8567c:
  if (uVar8 != 0) {
    *param_1 = lVar14;
    param_1[1] = uVar9;
    param_1[2] = lVar7;
    param_1[3] = uVar8;
    return;
  }
LAB_00a8557c:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


// ===== 00a856b0  FUN_00a856b0 =====

void FUN_00a856b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char local_40;
  undefined1 local_3f;
  ulong local_38;
  
  lVar3 = param_2[2];
  FUN_00a85274(&local_40);
  if (local_40 != '\x01') {
    if (lVar3 - 1U <= local_38) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_00a8571c;
    }
    if (*(int *)(param_2 + 3) + 1U < 0x1f5) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *(uint *)(param_1 + 3) = *(int *)(param_2 + 3) + 1U;
      param_1[1] = uVar2;
      param_1[2] = local_38;
      *param_1 = uVar1;
      return;
    }
    local_3f = 1;
  }
  *(undefined1 *)(param_1 + 1) = local_3f;
LAB_00a8571c:
  *param_1 = 0;
  return;
}


// ===== 00a85748  FUN_00a85748 =====

/* WARNING: Removing unreachable block (ram,0x00a85b24) */
/* WARNING: Removing unreachable block (ram,0x00a85b30) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a85748(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  char cVar13;
  undefined1 local_94 [4];
  long local_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  char cStack_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  undefined8 uStack_40;
  long local_38;
  undefined1 local_18 [8];
  
  lVar12 = *param_1;
  local_94[0] = (undefined1)param_2;
  if (lVar12 == 0) {
LAB_00a85c34:
    if (param_1[4] == 0) {
      return 0;
    }
    uVar11 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
    return uVar11;
  }
  uVar1 = (int)param_1[3] + 1;
  *(uint *)(param_1 + 3) = uVar1;
  if (500 < uVar1) {
    if ((param_1[4] != 0) &&
       (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e499,0x19), (uVar8 & 1) != 0)) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    return 0;
  }
  uVar8 = param_1[2];
  if ((ulong)param_1[1] <= uVar8) {
LAB_00a85968:
    if ((param_1[4] != 0) &&
       (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10), (uVar8 & 1) != 0)) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return 0;
  }
  bVar3 = *(byte *)(lVar12 + uVar8);
  uVar2 = uVar8 + 1;
  param_1[2] = uVar2;
  if (bVar3 < 0x4d) {
    if (bVar3 == 0x42) {
      uVar8 = FUN_00a83154(param_1,local_94);
joined_r0x00a858d0:
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      goto LAB_00a85d78;
    }
    if (bVar3 == 0x43) {
      FUN_00a853f4(&local_70,param_1,0x73);
      if ((char)local_70 == '\x01') {
        if (param_1[4] == 0) goto LAB_00a85af0;
        puVar9 = &DAT_0038e499;
        if (local_70._1_1_ == '\0') {
          puVar9 = &DAT_0029fc30;
        }
        uVar11 = 0x19;
        cVar13 = local_70._1_1_;
        if (local_70._1_1_ == '\0') {
          uVar11 = 0x10;
        }
      }
      else {
        lVar12 = CONCAT71(uStack_67,cStack_68);
        if (*param_1 == 0) {
          if (param_1[4] == 0) {
            return 0;
          }
          uVar11 = <str_as_core::fmt::Display>::fmt(&DAT_0038e4b2,1);
          return uVar11;
        }
        FUN_00a8548c(&local_70,param_1);
        if (local_70 != 0) {
          local_90[0] = local_70;
          lStack_78 = lStack_58;
          uStack_80 = uStack_60;
          if (param_1[4] != 0) {
            uVar8 = <rustc_demangle::v0::Ident_as_core::fmt::Display>::fmt(local_90);
            if ((uVar8 & 1) != 0) {
              return 1;
            }
            lVar10 = param_1[4];
            if (((lVar10 != 0) && (lVar12 != 0)) && ((*(uint *)(lVar10 + 0x10) >> 0x17 & 1) == 0)) {
              uVar8 = <core::fmt::[a]::core::fmt::Formatter>::write_str(lVar10,&DAT_0038e56c,1);
              if ((uVar8 & 1) != 0) {
                return 1;
              }
              uVar8 = <usize_as_core::fmt::LowerHex>::fmt(local_18,param_1[4]);
              if ((uVar8 & 1) != 0) {
                return 1;
              }
              iVar7 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_1[4],&DAT_0038e56d,1);
              if (iVar7 != 0) {
                return 1;
              }
            }
          }
          goto LAB_00a85d78;
        }
LAB_00a85c00:
        lVar12 = param_1[4];
        local_70._1_1_ = cStack_68;
joined_r0x00a859c0:
        if (lVar12 == 0) goto LAB_00a85af0;
        uVar11 = 0x19;
        if (local_70._1_1_ == '\0') {
          uVar11 = 0x10;
        }
        puVar9 = &DAT_0038e499;
        cVar13 = local_70._1_1_;
        if (local_70._1_1_ == '\0') {
          puVar9 = &DAT_0029fc30;
        }
      }
      uVar8 = <str_as_core::fmt::Display>::fmt(puVar9,uVar11);
      local_70._1_1_ = cVar13;
      if ((uVar8 & 1) != 0) {
        return 1;
      }
LAB_00a85af0:
      *param_1 = 0;
      *(char *)(param_1 + 1) = local_70._1_1_;
      return 0;
    }
    if (bVar3 != 0x49) goto LAB_00a85968;
    uVar8 = FUN_00a85748(param_1,param_2);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    if ((((param_2 & 1) != 0) && (param_1[4] != 0)) &&
       (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e56e,2), (uVar8 & 1) != 0)) {
      return 1;
    }
    if ((param_1[4] != 0) &&
       (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e57c,1), (uVar8 & 1) != 0)) {
      return 1;
    }
    uVar8 = FUN_00a83a48(param_1);
joined_r0x00a85a6c:
    if ((uVar8 & 1) != 0) {
      return 1;
    }
LAB_00a85a70:
    if (param_1[4] == 0) goto LAB_00a85d78;
    puVar9 = &DAT_0038e57d;
  }
  else {
    if (0x57 < bVar3) {
      if (bVar3 == 0x58) goto LAB_00a8599c;
      if (bVar3 != 0x59) goto LAB_00a85968;
LAB_00a85a08:
      if ((param_1[4] != 0) &&
         (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e57c,1), (uVar8 & 1) != 0)) {
        return 1;
      }
      uVar8 = FUN_00a85dac(param_1);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      if (bVar3 != 0x4d) {
        if ((param_1[4] != 0) &&
           (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_002bd260,4), (uVar8 & 1) != 0)) {
          return 1;
        }
        uVar8 = FUN_00a85748(param_1,0);
        goto joined_r0x00a85a6c;
      }
      goto LAB_00a85a70;
    }
    if (bVar3 == 0x4d) {
LAB_00a8599c:
      FUN_00a853f4(&local_70,param_1,0x73);
      if ((char)local_70 == '\x01') {
LAB_00a859b8:
        lVar12 = param_1[4];
        goto joined_r0x00a859c0;
      }
      FUN_00a83bb8(param_1);
      goto LAB_00a85a08;
    }
    if (bVar3 != 0x4e) goto LAB_00a85968;
    if ((ulong)param_1[1] <= uVar2) {
LAB_00a85b04:
      if ((param_1[4] != 0) &&
         (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0029fc30,0x10), (uVar8 & 1) != 0)) {
        return 1;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return 0;
    }
    bVar3 = *(byte *)(lVar12 + uVar2);
    bVar5 = bVar3 - 0x7b < 0xffffffe6;
    uVar1 = 0xffffffff;
    if (bVar5) {
      uVar1 = 0;
    }
    bVar6 = 0x19 < bVar3 - 0x41;
    uVar4 = (uint)bVar3;
    if (bVar6) {
      uVar4 = uVar1;
    }
    param_1[2] = uVar8 + 2;
    if (bVar6 && bVar5) goto LAB_00a85b04;
    uVar8 = FUN_00a85748(param_1,param_2);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    if (*param_1 == 0) {
      if (param_1[4] == 0) {
        return 0;
      }
      uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e56e,2);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      if (*param_1 == 0) goto LAB_00a85c34;
    }
    FUN_00a853f4(&local_70,param_1,0x73);
    if ((char)local_70 == '\x01') goto LAB_00a859b8;
    if (*param_1 == 0) goto LAB_00a85c34;
    FUN_00a8548c(&local_70,param_1);
    if (local_70 == 0) goto LAB_00a85c00;
    lStack_48 = CONCAT71(uStack_67,cStack_68);
    local_50 = local_70;
    local_38 = lStack_58;
    uStack_40 = uStack_60;
    if (uVar4 == 0xffffffff) {
      if ((lStack_48 == 0 && lStack_58 == 0) || (param_1[4] == 0)) goto LAB_00a85d78;
      uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e56e,2);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      if (param_1[4] == 0) goto LAB_00a85d78;
      uVar8 = <rustc_demangle::v0::Ident_as_core::fmt::Display>::fmt(&local_50);
      goto joined_r0x00a858d0;
    }
    if ((param_1[4] != 0) &&
       (uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e570,3), (uVar8 & 1) != 0)) {
      return 1;
    }
    if (uVar4 == 0x43) {
      if (param_1[4] != 0) {
        puVar9 = &DAT_0038e573;
        uVar11 = 7;
LAB_00a85cb4:
        uVar8 = <str_as_core::fmt::Display>::fmt(puVar9,uVar11);
joined_r0x00a85cd4:
        if ((uVar8 & 1) != 0) {
          return 1;
        }
      }
    }
    else if (uVar4 == 0x53) {
      if (param_1[4] != 0) {
        puVar9 = &DAT_002bd1bc;
        uVar11 = 4;
        goto LAB_00a85cb4;
      }
    }
    else {
      local_70 = CONCAT44(local_70._4_4_,uVar4);
      if (param_1[4] != 0) {
        uVar8 = <char_as_core::fmt::Display>::fmt(&local_70);
        goto joined_r0x00a85cd4;
      }
    }
    lVar12 = param_1[4];
    if (lStack_48 != 0 || local_38 != 0) {
      if (lVar12 == 0) goto LAB_00a85d78;
      uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e57a,1);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      if (param_1[4] == 0) goto LAB_00a85d78;
      uVar8 = <rustc_demangle::v0::Ident_as_core::fmt::Display>::fmt(&local_50);
      if ((uVar8 & 1) != 0) {
        return 1;
      }
      lVar12 = param_1[4];
    }
    if (lVar12 == 0) goto LAB_00a85d78;
    uVar8 = <str_as_core::fmt::Display>::fmt(&DAT_0038e57b,1);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    if (param_1[4] == 0) goto LAB_00a85d78;
    uVar8 = <usize_as_core::fmt::Display>::fmt(&local_70);
    if ((uVar8 & 1) != 0) {
      return 1;
    }
    if (param_1[4] == 0) goto LAB_00a85d78;
    puVar9 = &DAT_0038e539;
  }
  uVar8 = <str_as_core::fmt::Display>::fmt(puVar9,1);
  if ((uVar8 & 1) != 0) {
    return 1;
  }
LAB_00a85d78:
  if (*param_1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return 0;
}


