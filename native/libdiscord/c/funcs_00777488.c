// ===== 00777488  FUN_00777488 =====

undefined8 FUN_00777488(undefined8 *param_1)

{
  return *param_1;
}


// ===== 00777494  FUN_00777494 =====

undefined8 FUN_00777494(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 007774a0  FUN_007774a0 =====

void FUN_007774a0(void)

{
  return;
}


// ===== 007774a8  FUN_007774a8 =====

void FUN_007774a8(void)

{
  return;
}


// ===== 007774b0  FUN_007774b0 =====

undefined4 FUN_007774b0(void)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  pvVar3 = (void *)FUN_00795e04(0);
  if (((pvVar3 == (void *)0x0) &&
      ((pvVar3 = calloc(1,400), pvVar3 == (void *)0x0 ||
       (iVar2 = FUN_00795ea8(0,pvVar3,FUN_00778648), iVar2 == 0)))) ||
     (*(int *)((long)pvVar3 + 0x184) == *(int *)((long)pvVar3 + 0x180))) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(int *)((long)pvVar3 + 0x184) + 1U & 0xf;
    puVar5 = (undefined8 *)((long)pvVar3 + (ulong)uVar1 * 0x18);
    uVar4 = *(undefined4 *)(puVar5 + 2);
    free((void *)puVar5[1]);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(uint *)((long)pvVar3 + 0x184) = uVar1;
  }
  return uVar4;
}


// ===== 00777558  FUN_00777558 =====

undefined4
FUN_00777558(int param_1,int param_2,long *param_3,uint *param_4,long *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  void *pvVar5;
  void *__ptr;
  uint uVar6;
  long *plVar7;
  
  pvVar5 = (void *)FUN_00795e04(0);
  if ((pvVar5 == (void *)0x0) &&
     ((pvVar5 = calloc(1,400), pvVar5 == (void *)0x0 ||
      (iVar4 = FUN_00795ea8(0,pvVar5,FUN_00778648), iVar4 == 0)))) {
    return 0;
  }
  if (*(uint *)((long)pvVar5 + 0x184) == *(uint *)((long)pvVar5 + 0x180)) {
    return 0;
  }
  uVar1 = *(uint *)((long)pvVar5 + 0x184) + 1 & 0xf;
  if (param_2 != 0) {
    uVar1 = *(uint *)((long)pvVar5 + 0x180);
  }
  if (0x10 < uVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x7776cc);
    (*pcVar3)();
  }
  plVar7 = (long *)((long)pvVar5 + (ulong)uVar1 * 0x18);
  uVar2 = (undefined4)plVar7[2];
  if ((param_3 != (long *)0x0) && (param_4 != (uint *)0x0)) {
    if (*plVar7 == 0) {
      *param_3 = (long)&DAT_001bfc64;
      uVar6 = 0;
    }
    else {
      *param_3 = *plVar7;
      uVar6 = (uint)*(ushort *)((long)plVar7 + 0x14);
    }
    *param_4 = uVar6;
  }
  if (param_5 != (long *)0x0) {
    if (plVar7[1] != 0) {
      *param_5 = plVar7[1];
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 3;
      }
      if (param_1 == 0) {
        return uVar2;
      }
      if (plVar7[1] != 0) {
        free(*(void **)((long)pvVar5 + 0x188));
        *(long *)((long)pvVar5 + 0x188) = plVar7[1];
      }
      __ptr = (void *)0x0;
      plVar7[1] = 0;
      goto LAB_00777694;
    }
    *param_5 = (long)&DAT_001b3348;
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = 0;
    }
  }
  if (param_1 == 0) {
    return uVar2;
  }
  __ptr = (void *)plVar7[1];
LAB_00777694:
  free(__ptr);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  *(uint *)((long)pvVar5 + 0x184) = uVar1;
  return uVar2;
}


// ===== 007776cc  FUN_007776cc =====

void FUN_007776cc(undefined8 param_1,undefined8 param_2)

{
  FUN_00777558(1,0,param_1,param_2,0,0);
  return;
}


// ===== 007776ec  FUN_007776ec =====

void * FUN_007776ec(void)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)FUN_00795e04(0);
  if ((pvVar1 != (void *)0x0) ||
     ((pvVar1 = calloc(1,400), pvVar2 = pvVar1, pvVar1 != (void *)0x0 &&
      (pvVar2 = (void *)FUN_00795ea8(0,pvVar1,FUN_00778648), (int)pvVar2 != 0)))) {
    if (*(int *)((long)pvVar1 + 0x184) == *(int *)((long)pvVar1 + 0x180)) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)(ulong)*(uint *)((long)pvVar1 +
                                       (ulong)(*(int *)((long)pvVar1 + 0x184) + 1U & 0xf) * 0x18 +
                                       0x10);
    }
  }
  return pvVar2;
}


// ===== 00777778  FUN_00777778 =====

void * FUN_00777778(void)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = (void *)FUN_00795e04(0);
  if ((pvVar3 != (void *)0x0) ||
     ((pvVar3 = calloc(1,400), pvVar4 = pvVar3, pvVar3 != (void *)0x0 &&
      (pvVar4 = (void *)FUN_00795ea8(0,pvVar3,FUN_00778648), (int)pvVar4 != 0)))) {
    uVar1 = *(uint *)((long)pvVar3 + 0x180);
    if (*(uint *)((long)pvVar3 + 0x184) == uVar1) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x10 < uVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x777808);
        (*pcVar2)();
      }
      pvVar4 = (void *)(ulong)*(uint *)((long)pvVar3 + (ulong)uVar1 * 0x18 + 0x10);
    }
  }
  return pvVar4;
}


// ===== 00777808  FUN_00777808 =====

void FUN_00777808(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00795e04(0);
  if ((puVar2 != (undefined8 *)0x0) ||
     ((puVar2 = (undefined8 *)calloc(1,400), puVar2 != (undefined8 *)0x0 &&
      (iVar1 = FUN_00795ea8(0,puVar2,FUN_00778648), iVar1 != 0)))) {
    free((void *)puVar2[1]);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    free((void *)puVar2[4]);
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    free((void *)puVar2[7]);
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    free((void *)puVar2[10]);
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    free((void *)puVar2[0xd]);
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    free((void *)puVar2[0x10]);
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    free((void *)puVar2[0x13]);
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    free((void *)puVar2[0x16]);
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    free((void *)puVar2[0x19]);
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    free((void *)puVar2[0x1c]);
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    free((void *)puVar2[0x1f]);
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    free((void *)puVar2[0x22]);
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    free((void *)puVar2[0x25]);
    puVar2[0x24] = 0;
    puVar2[0x25] = 0;
    puVar2[0x26] = 0;
    free((void *)puVar2[0x28]);
    puVar2[0x27] = 0;
    puVar2[0x28] = 0;
    puVar2[0x29] = 0;
    free((void *)puVar2[0x2b]);
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2c] = 0;
    free((void *)puVar2[0x2e]);
    puVar2[0x2d] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = 0;
    free((void *)puVar2[0x31]);
    puVar2[0x30] = 0;
    puVar2[0x31] = 0;
  }
  return;
}


// ===== 00777974  FUN_00777974 =====

void FUN_00777974(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 0;
  return;
}


// ===== 00777994  FUN_00777994 =====

char * FUN_00777994(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_007779c4(param_1,0);
  pcVar1 = "unknown error";
  if (pcVar2 != (char *)0x0) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}


// ===== 007779c4  FUN_007779c4 =====

uint * FUN_007779c4(undefined8 param_1,int param_2)

{
  uint __errnum;
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint local_14;
  
  uVar3 = (uint)((ulong)param_1 >> 0x18) & 0xff;
  __errnum = (uint)param_1 & 0xfff;
  if (uVar3 == 2) {
    puVar2 = (uint *)0x0;
    if ((param_2 == 0) && (__errnum < 0x7f)) {
      puVar2 = (uint *)strerror(__errnum);
      return puVar2;
    }
  }
  else {
    if (__errnum < 0x23) {
      lVar1 = 0;
      if (param_2 != 0) {
        lVar1 = 0x10;
      }
      return *(uint **)((long)&PTR_s_invalid_library__0__00d2a8e8 + lVar1 + (ulong)__errnum * 0x18);
    }
    if (__errnum < 100) {
      puVar2 = (uint *)0x0;
      if (__errnum < 0x43) {
        if (__errnum == 0x41) {
          puVar2 = (uint *)"malloc failure";
          if (param_2 != 0) {
            puVar2 = (uint *)"MALLOC_FAILURE";
          }
          return puVar2;
        }
        if (__errnum == 0x42) {
          puVar2 = (uint *)"function should not have been called";
          if (param_2 != 0) {
            puVar2 = (uint *)"SHOULD_NOT_HAVE_BEEN_CALLED";
          }
          return puVar2;
        }
      }
      else {
        if (__errnum == 0x43) {
          puVar2 = (uint *)"passed a null parameter";
          if (param_2 != 0) {
            puVar2 = (uint *)"PASSED_NULL_PARAMETER";
          }
          return puVar2;
        }
        if (__errnum == 0x44) {
          puVar2 = (uint *)"internal error";
          if (param_2 != 0) {
            puVar2 = (uint *)"INTERNAL_ERROR";
          }
          return puVar2;
        }
        if (__errnum == 0x45) {
          puVar2 = (uint *)"overflow";
          if (param_2 != 0) {
            puVar2 = (uint *)"OVERFLOW";
          }
          return puVar2;
        }
      }
    }
    else {
      puVar2 = (uint *)0x0;
      if (((uint)param_1 >> 0x1e == 0) && (__errnum < 0x800)) {
        local_14 = __errnum << 0xf | uVar3 << 0x1a;
        puVar2 = (uint *)bsearch(&local_14,PTR_DAT_00d52750,*(size_t *)PTR_DAT_00d52748,4,
                                 FUN_00778784);
        if (puVar2 != (uint *)0x0) {
          puVar2 = (uint *)(PTR_s_ASN1_LENGTH_MISMATCH_00d52758 + ((ulong)*puVar2 & 0x7fff));
        }
      }
    }
  }
  return puVar2;
}


// ===== 00777b60  FUN_00777b60 =====

void FUN_00777b60(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0xd7fff8;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  FUN_00777b7c(param_1,lVar1,0x78);
  return;
}


// ===== 00777b7c  FUN_00777b7c =====

char * FUN_00777b7c(ulong param_1,char *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  char *pcVar4;
  size_t __n;
  char *__s;
  undefined1 **ppuVar5;
  ulong uVar6;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    param_2 = (char *)0x0;
  }
  else {
    uVar6 = param_1 >> 0x18 & 0xff;
    if ((uint)uVar6 < 0x23) {
      ppuVar5 = (undefined1 **)(&PTR_s_invalid_library__0__00d2a8e8)[uVar6 * 3];
    }
    else {
      ppuVar5 = (undefined1 **)0x0;
    }
    ppuVar3 = (undefined1 **)FUN_007779c4(param_1 & 0xffffffff,0);
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    if (ppuVar5 == (undefined1 **)0x0) {
      ppuVar5 = &local_80;
      snprintf((char *)&local_80,0x20,"lib(%u)",uVar6);
    }
    if (ppuVar3 == (undefined1 **)0x0) {
      snprintf((char *)&local_a0,0x20,"reason(%u)",(ulong)((uint)param_1 & 0xfff));
      ppuVar3 = &local_a0;
    }
    uVar2 = snprintf(param_2,param_3,"error:%08x:%s:OPENSSL_internal:%s",param_1 & 0xffffffff,
                     ppuVar5,ppuVar3);
    if (((4 < param_3) && (-1 < (int)uVar2)) && (param_3 <= uVar2)) {
      __s = param_2 + (param_3 - 5);
      pcVar4 = strchr(param_2,0x3a);
      __n = 4;
      if ((pcVar4 != (char *)0x0) && (pcVar4 <= __s)) {
        pcVar4 = strchr(pcVar4 + 1,0x3a);
        __s = param_2 + (param_3 - 4);
        __n = 3;
        if ((pcVar4 != (char *)0x0) && (pcVar4 <= __s)) {
          pcVar4 = strchr(pcVar4 + 1,0x3a);
          __s = param_2 + (param_3 - 3);
          __n = 2;
          if ((pcVar4 != (char *)0x0) && (pcVar4 <= __s)) {
            pcVar4 = strchr(pcVar4 + 1,0x3a);
            __s = param_2 + (param_3 - 2);
            __n = 1;
            if ((pcVar4 != (char *)0x0) && (pcVar4 <= __s)) goto LAB_00777cd4;
          }
        }
      }
      memset(__s,0x3a,__n);
    }
  }
LAB_00777cd4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00777d4c  FUN_00777d4c =====

void FUN_00777d4c(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  size_t sVar7;
  uint local_4e8;
  uint uStack_4e4;
  undefined *local_4e0;
  undefined1 *puStack_4d8;
  char acStack_4d0 [1024];
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pvVar4 = (void *)FUN_00795e04(0);
  if ((pvVar4 == (void *)0x0) && (pvVar5 = calloc(1,400), pvVar4 = pvVar5, pvVar5 != (void *)0x0)) {
    iVar3 = FUN_00795ea8(0,pvVar5,FUN_00778648);
    pvVar4 = (void *)0x0;
    if (iVar3 != 0) {
      pvVar4 = pvVar5;
    }
  }
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
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  memset(acStack_4d0,0xaa,0x400);
  local_4e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_4d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_4e8 = 0xaaaaaaaa;
  uStack_4e4 = 0xaaaaaaaa;
  do {
    uVar6 = FUN_00777558(1,0,&puStack_4d8,&uStack_4e4,&local_4e0,&local_4e8);
    if ((int)uVar6 == 0) break;
    FUN_00777b7c(uVar6,&local_d0,0x78);
    puVar1 = &DAT_001b3348;
    if ((local_4e8 & 1) != 0) {
      puVar1 = local_4e0;
    }
    snprintf(acStack_4d0,0x400,"%lu:%s:%s:%d:%s\n",pvVar4,&local_d0,puStack_4d8,(ulong)uStack_4e4,
             puVar1);
    sVar7 = strlen(acStack_4d0);
    iVar3 = (*param_1)(acStack_4d0,sVar7,param_2);
  } while (0 < iVar3);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00777eb4  FUN_00777eb4 =====

void FUN_00777eb4(int param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined2 param_5)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  uint *puVar4;
  undefined8 *puVar5;
  
  pvVar3 = (void *)FUN_00795e04(0);
  if ((pvVar3 != (void *)0x0) ||
     ((pvVar3 = calloc(1,400), pvVar3 != (void *)0x0 &&
      (iVar2 = FUN_00795ea8(0,pvVar3,FUN_00778648), iVar2 != 0)))) {
    if ((param_1 == 2) && (param_3 == 0)) {
      puVar4 = (uint *)__errno();
      param_3 = *puVar4;
    }
    iVar2 = *(int *)((long)pvVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)((long)pvVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)((long)pvVar3 + 0x184)) {
      *(uint *)((long)pvVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar5 = (undefined8 *)((long)pvVar3 + (ulong)uVar1 * 0x18);
    free((void *)puVar5[1]);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = param_4;
    *(undefined2 *)((long)puVar5 + 0x14) = param_5;
    *(uint *)(puVar5 + 2) = param_3 & 0xfff | param_1 << 0x18;
  }
  return;
}


// ===== 00777f98  FUN_00777f98 =====

void FUN_00777f98(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  char *__s;
  size_t sVar5;
  undefined1 *__ptr;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long **pplStack_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  uint local_58;
  
  puStack_a0 = auStack_f0;
  uVar9 = (ulong)param_1;
  uVar10 = 0;
  pplVar1 = &local_b0;
  local_98 = 0xffffff80ffffffc8;
  local_e8 = param_2;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  local_b0 = (long *)register0x00000008;
  pplStack_a8 = pplVar1;
  if (param_1 != 0) {
    local_58 = 0xffffffc8;
    uVar11 = uVar9;
    do {
      uVar8 = local_58;
      if (((int)local_58 < 0) && (uVar8 = local_58 + 8, local_58 < 0xfffffff9)) {
        __s = *(char **)((long)pplVar1 + (long)(int)local_58);
        local_58 = uVar8;
      }
      else {
        __s = *(char **)register0x00000008;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + 8);
        local_58 = uVar8;
      }
      if (__s != (char *)0x0) {
        sVar5 = strlen(__s);
        bVar3 = CARRY8(uVar10,sVar5);
        uVar10 = uVar10 + sVar5;
        if (bVar3) {
          return;
        }
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    if (uVar10 == 0xffffffffffffffff) {
      return;
    }
  }
  __ptr = (undefined1 *)malloc(uVar10 + 1);
  if (__ptr != (undefined1 *)0x0) {
    *__ptr = 0;
    if (param_1 != 0) {
      do {
        uVar8 = (uint)local_98;
        lVar7 = (long)(int)(uint)local_98;
        if ((int)(uint)local_98 < 0) {
          local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + 8);
          if (0xfffffff8 < uVar8) goto LAB_00778128;
          lVar7 = *(long *)((long)pplStack_a8 + lVar7);
        }
        else {
LAB_00778128:
          lVar7 = *local_b0;
          local_b0 = local_b0 + 1;
        }
        if (lVar7 != 0) {
          FUN_0078d45c(__ptr,lVar7,uVar10 + 1);
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    pvVar6 = (void *)FUN_00795e04(0);
    if (((pvVar6 == (void *)0x0) &&
        ((pvVar6 = calloc(1,400), pvVar6 == (void *)0x0 ||
         (iVar4 = FUN_00795ea8(0,pvVar6,FUN_00778648), iVar4 == 0)))) ||
       (uVar8 = *(uint *)((long)pvVar6 + 0x180), uVar8 == *(uint *)((long)pvVar6 + 0x184))) {
      free(__ptr);
    }
    else {
      if (0x10 < uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x7781a4);
        (*pcVar2)();
      }
      free(*(void **)((long)pvVar6 + (ulong)uVar8 * 0x18 + 8));
      *(undefined1 **)((long)pvVar6 + (ulong)uVar8 * 0x18 + 8) = __ptr;
    }
  }
  return;
}


// ===== 007781a4  FUN_007781a4 =====

void FUN_007781a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  void *__ptr;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  void *local_18;
  
  puStack_60 = auStack_b0;
  ppuStack_68 = &local_70;
  local_18 = (void *)0x0;
  uStack_58 = 0xffffff80ffffffc8;
  local_a8 = param_2;
  uStack_a0 = param_3;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  iVar3 = FUN_0078d11c(&local_18,param_1,&local_70,1);
  __ptr = local_18;
  if (iVar3 != -1) {
    pvVar4 = (void *)FUN_00795e04(0);
    if (((pvVar4 == (void *)0x0) &&
        ((pvVar4 = calloc(1,400), pvVar4 == (void *)0x0 ||
         (iVar3 = FUN_00795ea8(0,pvVar4,FUN_00778648), iVar3 == 0)))) ||
       (uVar1 = *(uint *)((long)pvVar4 + 0x180), uVar1 == *(uint *)((long)pvVar4 + 0x184))) {
      free(__ptr);
    }
    else {
      if (0x10 < uVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x7782c8);
        (*pcVar2)();
      }
      free(*(void **)((long)pvVar4 + (ulong)uVar1 * 0x18 + 8));
      *(void **)((long)pvVar4 + (ulong)uVar1 * 0x18 + 8) = __ptr;
    }
  }
  return;
}


// ===== 007782c8  FUN_007782c8 =====

void FUN_007782c8(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 != (long *)0x0) {
    if (param_1[1] != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        puVar1 = (undefined8 *)(*param_1 + lVar2);
        free((void *)puVar1[1]);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 0x18;
        puVar1[2] = 0;
      } while (uVar3 < (ulong)param_1[1]);
    }
    free((void *)*param_1);
    free(param_1);
    return;
  }
  return;
}


// ===== 00778348  FUN_00778348 =====

undefined8 * FUN_00778348(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *__ptr;
  void *pvVar6;
  size_t sVar7;
  char *__s;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  pvVar5 = (void *)FUN_00795e04(0);
  if ((pvVar5 != (void *)0x0) ||
     ((pvVar5 = calloc(1,400), pvVar5 != (void *)0x0 &&
      (iVar4 = FUN_00795ea8(0,pvVar5,FUN_00778648), iVar4 != 0)))) {
    uVar2 = *(uint *)((long)pvVar5 + 0x180);
    uVar3 = *(uint *)((long)pvVar5 + 0x184);
    if (uVar2 != uVar3) {
      __ptr = (undefined8 *)malloc(0x10);
      if (__ptr == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar1 = uVar2 + 0x10;
      if (uVar3 <= uVar2) {
        uVar1 = uVar2;
      }
      uVar8 = (ulong)(uVar1 - uVar3);
      pvVar6 = malloc(uVar8 * 0x18);
      *__ptr = pvVar6;
      if (pvVar6 != (void *)0x0) {
        if (uVar1 == uVar3) {
          __ptr[1] = uVar8;
          return __ptr;
        }
        memset(pvVar6,0,uVar8 * 0x18);
        puVar9 = (undefined8 *)((long)pvVar6 + 0x10);
        iVar4 = 1;
        __ptr[1] = uVar8;
        do {
          puVar10 = (undefined8 *)
                    ((long)pvVar5 + (ulong)(iVar4 + *(int *)((long)pvVar5 + 0x184) & 0xf) * 0x18);
          free((void *)puVar9[-1]);
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[-2] = *puVar10;
          __s = (char *)puVar10[1];
          if (__s != (char *)0x0) {
            sVar7 = strlen(__s);
            pvVar6 = malloc(sVar7 + 1);
            if (pvVar6 != (void *)0x0) {
              memcpy(pvVar6,__s,sVar7 + 1);
            }
            puVar9[-1] = pvVar6;
          }
          uVar8 = uVar8 - 1;
          iVar4 = iVar4 + 1;
          *(undefined4 *)puVar9 = *(undefined4 *)(puVar10 + 2);
          *(undefined2 *)((long)puVar9 + 4) = *(undefined2 *)((long)puVar10 + 0x14);
          puVar9 = puVar9 + 3;
        } while (uVar8 != 0);
        return __ptr;
      }
      free(__ptr);
    }
  }
  return (undefined8 *)0x0;
}


// ===== 007784d4  FUN_007784d4 =====

void FUN_007784d4(long *param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  void *__dest;
  char *__s;
  ulong uVar6;
  long lVar7;
  
  if ((param_1 != (long *)0x0) && (param_1[1] != 0)) {
    if (0xf < (ulong)param_1[1]) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar4 = (void *)FUN_00795e04(0);
    if ((pvVar4 != (void *)0x0) ||
       ((pvVar4 = calloc(1,400), pvVar4 != (void *)0x0 &&
        (iVar3 = FUN_00795ea8(0,pvVar4,FUN_00778648), iVar3 != 0)))) {
      if (param_1[1] == 0) {
        iVar3 = -1;
      }
      else {
        uVar6 = 0;
        lVar7 = -0x198;
        do {
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x778644);
            (*pcVar2)();
          }
          lVar1 = *param_1 + lVar7;
          free(*(void **)((long)pvVar4 + lVar7 + 0x1a0));
          *(undefined8 *)((long)pvVar4 + lVar7 + 0x198) = 0;
          *(undefined8 *)((long)pvVar4 + lVar7 + 0x1a0) = 0;
          *(undefined8 *)((long)pvVar4 + lVar7 + 0x1a8) = 0;
          *(undefined8 *)((long)pvVar4 + lVar7 + 0x198) = *(undefined8 *)(lVar1 + 0x198);
          __s = *(char **)(lVar1 + 0x1a0);
          if (__s != (char *)0x0) {
            sVar5 = strlen(__s);
            __dest = malloc(sVar5 + 1);
            if (__dest != (void *)0x0) {
              memcpy(__dest,__s,sVar5 + 1);
            }
            *(void **)((long)pvVar4 + lVar7 + 0x1a0) = __dest;
          }
          uVar6 = uVar6 + 1;
          *(undefined4 *)((long)pvVar4 + lVar7 + 0x1a8) = *(undefined4 *)(lVar1 + 0x1a8);
          *(undefined2 *)((long)pvVar4 + lVar7 + 0x1ac) = *(undefined2 *)(lVar1 + 0x1ac);
          lVar7 = lVar7 + 0x18;
        } while (uVar6 < (ulong)param_1[1]);
        iVar3 = (int)param_1[1] + -1;
      }
      *(int *)((long)pvVar4 + 0x180) = iVar3;
      *(undefined4 *)((long)pvVar4 + 0x184) = 0xf;
    }
    return;
  }
  FUN_00777808();
  return;
}


// ===== 00778648  FUN_00778648 =====

void FUN_00778648(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    free((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    free((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    free((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    free((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    free((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    free((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    free((void *)param_1[0x13]);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    free((void *)param_1[0x16]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    free((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    free((void *)param_1[0x1c]);
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    free((void *)param_1[0x1f]);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    free((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    free((void *)param_1[0x25]);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    free((void *)param_1[0x28]);
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    free((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    free((void *)param_1[0x2e]);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    free((void *)param_1[0x31]);
    free(param_1);
    return;
  }
  return;
}


// ===== 00778784  FUN_00778784 =====

uint FUN_00778784(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(*param_2 >> 0xf < *param_1 >> 0xf);
  if (*param_1 >> 0xf < *param_2 >> 0xf) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// ===== 007787a4  FUN_007787a4 =====

void FUN_007787a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined4 *)puVar1 = 1;
  }
  return;
}


// ===== 007787d8  FUN_007787d8 =====

void FUN_007787d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(long *)(param_1 + 0x10) + 0xc0), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1);
  }
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


// ===== 00778828  FUN_00778828 =====

void FUN_00778828(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((param_1 != (undefined8 *)0x0) && (iVar1 = FUN_0079347c(), iVar1 != 0)) {
    if ((uint)*param_1 < 2) {
      if ((param_1[2] != 0) && (pcVar2 = *(code **)(param_1[2] + 0xc0), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
      }
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_0078cb3c(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


// ===== 00778898  FUN_00778898 =====

undefined8 FUN_00778898(void)

{
  FUN_00793428();
  return 1;
}


// ===== 007788b8  FUN_007788b8 =====

undefined8 FUN_007788b8(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x007788cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 007788d8  FUN_007788d8 =====

uint FUN_007788d8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
    puVar5 = *(uint **)(param_2 + 0x10);
    if (puVar5 != (uint *)0x0) goto LAB_00778904;
    puVar5 = (uint *)0x0;
  }
  else {
    iVar4 = *piVar3;
    puVar5 = *(uint **)(param_2 + 0x10);
    if (puVar5 != (uint *)0x0) {
LAB_00778904:
      puVar5 = (uint *)(ulong)*puVar5;
    }
  }
  if ((piVar3 == (int *)0x0) || (iVar4 != (int)puVar5)) {
    if (iVar4 != (int)puVar5) {
      return 0;
    }
  }
  else {
    if (*(code **)(piVar3 + 0x2e) == (code *)0x0) goto LAB_00778940;
    uVar2 = (**(code **)(piVar3 + 0x2e))(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
LAB_00778940:
  if (*(code **)(piVar3 + 10) == (code *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(piVar3 + 10))(param_1,param_2);
  return uVar1 & 1;
}


// ===== 00778980  FUN_00778980 =====

byte FUN_00778980(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    iVar2 = 0;
    puVar4 = *(uint **)(param_2 + 0x10);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
      goto LAB_0077899c;
    }
  }
  else {
    iVar2 = *piVar3;
    puVar4 = *(uint **)(param_2 + 0x10);
    if (puVar4 == (uint *)0x0) goto LAB_0077899c;
  }
  puVar4 = (uint *)(ulong)*puVar4;
LAB_0077899c:
  bVar1 = iVar2 == (int)puVar4;
  if ((piVar3 != (int *)0x0) && ((bool)bVar1)) {
    if (*(code **)(piVar3 + 0x2e) == (code *)0x0) {
      return 1;
    }
    bVar1 = (**(code **)(piVar3 + 0x2e))();
  }
  return bVar1 & 1;
}


// ===== 007789f4  FUN_007789f4 =====

undefined4 FUN_007789f4(long param_1)

{
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0x10);
  }
  return 0;
}


// ===== 00778a10  FUN_00778a10 =====

undefined8 FUN_00778a10(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0xa8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00778a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 00778a30  FUN_00778a30 =====

undefined8 FUN_00778a30(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x98),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00778a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 00778a54  FUN_00778a54 =====

undefined8 FUN_00778a54(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0xa0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00778a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}


// ===== 00778a78  FUN_00778a78 =====

undefined8 * FUN_00778a78(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  if (*(long *)(*param_1 + 0x50) == 0) {
    FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp.cc",0xe6);
  }
  else {
    puVar2 = (undefined8 *)FUN_0078c9d4(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)puVar2 = 1;
    iVar1 = (**(code **)(*param_1 + 0x50))(puVar2,param_2,param_3);
    if (iVar1 != 0) {
      return puVar2;
    }
    iVar1 = FUN_0079347c(puVar2);
    if (iVar1 != 0) {
      if (1 < (uint)*puVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((puVar2[2] != 0) && (pcVar3 = *(code **)(puVar2[2] + 0xc0), pcVar3 != (code *)0x0)) {
        (*pcVar3)(puVar2);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      FUN_0078cb3c(puVar2);
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00778b5c  FUN_00778b5c =====

undefined8 * FUN_00778b5c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  if (*(long *)(*param_1 + 0x60) == 0) {
    FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp.cc",0x100);
  }
  else {
    puVar2 = (undefined8 *)FUN_0078c9d4(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)puVar2 = 1;
    iVar1 = (**(code **)(*param_1 + 0x60))(puVar2,param_2,param_3);
    if (iVar1 != 0) {
      return puVar2;
    }
    iVar1 = FUN_0079347c(puVar2);
    if (iVar1 != 0) {
      if (1 < (uint)*puVar2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((puVar2[2] != 0) && (pcVar3 = *(code **)(puVar2[2] + 0xc0), pcVar3 != (code *)0x0)) {
        (*pcVar3)(puVar2);
      }
      puVar2[1] = 0;
      puVar2[2] = 0;
      FUN_0078cb3c(puVar2);
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00778c40  FUN_00778c40 =====

undefined8 FUN_00778c40(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0x3b5) {
    uVar1 = FUN_0077d03c();
  }
  else {
    if (param_1 != 0x3b4) {
      FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp.cc",0x114);
      return 0;
    }
    uVar1 = FUN_00789f70();
  }
  uVar1 = FUN_00778a78(uVar1,param_3,param_4);
  return uVar1;
}


// ===== 00778cbc  FUN_00778cbc =====

undefined8 FUN_00778cbc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 0x3b5) {
    uVar1 = FUN_0077d03c();
  }
  else {
    if (param_1 != 0x3b4) {
      FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp.cc",0x123);
      return 0;
    }
    uVar1 = FUN_00789f70();
  }
  uVar1 = FUN_00778b5c(uVar1,param_3,param_4);
  return uVar1;
}


// ===== 00778d38  FUN_00778d38 =====

undefined8 FUN_00778d38(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x68);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00778d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_00777eb4(6,0,0x7d,"../../third_party/boringssl/src/crypto/evp/evp.cc",0x12d);
  return 0;
}


// ===== 00778d84  FUN_00778d84 =====

undefined8 FUN_00778d84(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x10) + 0x78);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00778d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_00777eb4(6,0,0x7d,"../../third_party/boringssl/src/crypto/evp/evp.cc",0x145);
  return 0;
}


// ===== 00778dd0  FUN_00778dd0 =====

void FUN_00778dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_0077a62c(param_1,0xffffffff,0x38,1,0,param_2);
  return;
}


// ===== 00778dec  FUN_00778dec =====

undefined4 FUN_00778dec(long param_1)

{
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    return **(undefined4 **)(param_1 + 0x10);
  }
  return 0;
}


// ===== 00778e08  FUN_00778e08 =====

long FUN_00778e08(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined8 local_50;
  long local_48;
  char local_24 [4];
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = param_1;
  local_48 = param_2;
  iVar1 = FUN_00772950(&local_50,&puStack_60,0x20000010);
  if (((((iVar1 == 0) || (iVar1 = FUN_00772950(&puStack_60,&local_70,0x20000010), iVar1 == 0)) ||
       (iVar1 = FUN_00772950(&local_70,&local_80,6), iVar1 == 0)) ||
      ((iVar1 = FUN_00772950(&puStack_60,&local_90,3), iVar1 == 0 || (local_58 != (undefined1 *)0x0)
       ))) || (local_48 != 0)) {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x30);
  }
  else {
    lVar2 = FUN_007787a4();
    if (lVar2 == 0) {
      return 0;
    }
    for (param_4 = param_4 << 3; param_4 != 0; param_4 = param_4 + -8) {
      plVar6 = (long *)*param_3;
      lVar5 = *plVar6;
      if (((*(long *)(lVar5 + 0x18) != 0) &&
          (local_78 == (undefined1 *)(ulong)*(byte *)(lVar5 + 0xd))) &&
         (iVar1 = memcmp((void *)(lVar5 + 4),local_80,(size_t)(ulong)*(byte *)(lVar5 + 0xd)),
         iVar1 == 0)) {
        local_24[0] = -0x56;
        puStack_98 = puStack_88;
        local_a0 = local_90;
        iVar1 = FUN_0077224c(&local_a0,local_24);
        if ((iVar1 == 0) || (local_24[0] != '\0')) {
          uVar3 = 0x66;
          uVar4 = 0x43;
          goto LAB_00778fac;
        }
        puStack_a8 = puStack_68;
        local_b0 = local_70;
        iVar1 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar2,&local_b0,&local_a0);
        if (iVar1 == 0) goto LAB_00778fb0;
        if (iVar1 == 1) {
          return lVar2;
        }
      }
      param_3 = param_3 + 1;
    }
    uVar3 = 0x80;
    uVar4 = 0x52;
LAB_00778fac:
    FUN_00777eb4(6,0,uVar3,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",uVar4);
LAB_00778fb0:
    FUN_00778828(lVar2);
  }
  return 0;
}


// ===== 00778fd8  FUN_00778fd8 =====

undefined8 FUN_00778fd8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x10) + 0x20),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00778fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x59);
  return 0;
}


// ===== 00779028  FUN_00779028 =====

long FUN_00779028(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  long local_38;
  
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = param_1;
  local_38 = param_2;
  iVar1 = FUN_00772950(&local_40,&puStack_50,0x20000010);
  if (((((iVar1 == 0) || (iVar1 = FUN_00772b1c(&puStack_50,&local_88), iVar1 == 0)) ||
       (local_88 != (undefined1 *)0x0)) ||
      ((iVar1 = FUN_00772950(&puStack_50,&puStack_70,0x20000010), iVar1 == 0 ||
       (iVar1 = FUN_00772950(&puStack_70,&local_60,6), iVar1 == 0)))) ||
     ((iVar1 = FUN_00772950(&puStack_50,&local_80,4), iVar1 == 0 || (local_38 != 0)))) {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x6e);
  }
  else {
    lVar2 = FUN_007787a4();
    if (lVar2 == 0) {
      return 0;
    }
    for (param_4 = param_4 << 3; param_4 != 0; param_4 = param_4 + -8) {
      plVar4 = (long *)*param_3;
      lVar3 = *plVar4;
      if (((*(long *)(lVar3 + 0x38) != 0) &&
          (puStack_58 == (undefined1 *)(ulong)*(byte *)(lVar3 + 0xd))) &&
         (iVar1 = memcmp((void *)(lVar3 + 4),local_60,(size_t)(ulong)*(byte *)(lVar3 + 0xd)),
         iVar1 == 0)) {
        puStack_a8 = puStack_78;
        local_b0 = local_80;
        puStack_98 = puStack_68;
        puStack_a0 = puStack_70;
        iVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,lVar2,&puStack_a0,&local_b0);
        if (iVar1 == 0) goto LAB_00779108;
        if (iVar1 == 1) {
          return lVar2;
        }
      }
      param_3 = param_3 + 1;
    }
    FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x87);
LAB_00779108:
    FUN_00778828(lVar2);
  }
  return 0;
}


// ===== 007791c0  FUN_007791c0 =====

undefined8 FUN_007791c0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x10) + 0x40),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x007791d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x8e);
  return 0;
}


// ===== 00779210  FUN_00779210 =====

undefined8 FUN_00779210(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 *puStack_18;
  
  puStack_18 = &DAT_aaaaaaaaaaaaaaaa;
  local_20 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772a18(param_1,&local_20,0x20000010);
  if (iVar1 == 0) {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0xa4);
    uVar2 = 0;
  }
  else {
    local_78 = FUN_0077b33c();
    local_70 = FUN_0077b34c();
    local_68 = FUN_0077b35c();
    local_60 = FUN_0077b36c();
    local_58 = FUN_0077d03c();
    local_50 = FUN_00788634();
    local_48 = FUN_00789f70();
    local_40 = FUN_00786980();
    local_38 = FUN_00786990();
    local_30 = FUN_007869a0();
    local_28 = FUN_0077ab84();
    uVar2 = FUN_00779028(local_20,puStack_18,&local_78,0xb);
  }
  return uVar2;
}


// ===== 007792dc  FUN_007792dc =====

long FUN_007792dc(int param_1,long *param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  long lStack_48;
  
  if (param_4 < 0) {
    FUN_00777eb4(0xc,0,0x6b,"../../third_party/boringssl/src/crypto/evp/../bytestring/internal.h",
                 0x53);
LAB_00779440:
    lVar2 = 0;
  }
  else {
    uVar4 = *param_3;
    local_50 = uVar4;
    lStack_48 = param_4;
    lVar2 = FUN_007787a4();
    if (lVar2 == 0) {
LAB_007793d4:
      FUN_00777808();
      local_50 = uVar4;
      lStack_48 = param_4;
      lVar2 = FUN_00779210(&local_50);
      if (lVar2 == 0) {
        return 0;
      }
      iVar1 = FUN_007789f4(lVar2);
      if (iVar1 != param_1) {
        FUN_00777eb4(6,0,0x67,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0xe1);
        FUN_00778828(lVar2);
        goto LAB_00779440;
      }
    }
    else {
      if (param_1 != 6) {
        if (param_1 == 0x74) {
          lVar3 = FUN_00779bc4(&local_50);
          if (lVar3 != 0) {
            FUN_0077ab94(lVar2,lVar3);
            goto LAB_007793fc;
          }
        }
        else if (param_1 == 0x198) {
          lVar3 = FUN_00776494(&local_50,0);
          if (lVar3 != 0) {
            FUN_0077b37c(lVar2,lVar3);
            goto LAB_007793fc;
          }
        }
        else {
          FUN_00777eb4(6,0,0x7f,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0xcd);
        }
LAB_007793cc:
        FUN_00778828(lVar2);
        goto LAB_007793d4;
      }
      lVar3 = FUN_007937a0(&local_50);
      if (lVar3 == 0) goto LAB_007793cc;
      FUN_00788644(lVar2,lVar3);
    }
LAB_007793fc:
    if ((param_2 != (long *)0x0) && (lVar3 = *param_2, *param_2 = lVar2, lVar3 != 0)) {
      FUN_00778828();
    }
    *param_3 = local_50;
  }
  return lVar2;
}


// ===== 00779464  FUN_00779464 =====

undefined8 FUN_00779464(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007789f4();
  if (iVar1 == 0x198) {
    uVar2 = FUN_0077b3b8(param_1);
    uVar2 = FUN_00776b30(uVar2,param_2);
    return uVar2;
  }
  if (iVar1 != 0x74) {
    if (iVar1 == 6) {
      uVar2 = FUN_00788680(param_1);
      uVar2 = FUN_00793b18(uVar2,param_2);
      return uVar2;
    }
    FUN_00777eb4(6,0,0x81,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x129);
    return 0xffffffff;
  }
  uVar2 = FUN_0077abd0(param_1);
  uVar2 = FUN_00779e48(uVar2,param_2);
  return uVar2;
}


// ===== 0077951c  FUN_0077951c =====

long FUN_0077951c(int param_1,long *param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  long lStack_38;
  
  if (param_4 < 0) {
    FUN_00777eb4(0xc,0,0x6b,"../../third_party/boringssl/src/crypto/evp/../bytestring/internal.h",
                 0x53);
  }
  else {
    local_40 = *param_3;
    lStack_38 = param_4;
    lVar1 = FUN_007787a4();
    if (lVar1 == 0) {
      return 0;
    }
    if (param_1 == 6) {
      lVar2 = FUN_007934f4(&local_40);
      if (lVar2 != 0) {
        FUN_00788644(lVar1,lVar2);
        if ((param_2 != (long *)0x0) && (lVar2 = *param_2, *param_2 = lVar1, lVar2 != 0)) {
          FUN_00778828();
        }
        *param_3 = local_40;
        return lVar1;
      }
    }
    else {
      FUN_00777eb4(6,0,0x81,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x145);
    }
    FUN_00778828(lVar1);
  }
  return 0;
}


// ===== 007795fc  FUN_007795fc =====

undefined4 FUN_007795fc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  if (param_1 == 0) {
    return 0;
  }
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_50);
  iVar1 = FUN_00770984(&local_50,0x80);
  if (iVar1 != 0) {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x10) + 0x20), pcVar3 == (code *)0x0)) {
      FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp_asn1.cc",0x59);
    }
    else {
      iVar1 = (*pcVar3)(&local_50,param_1);
      if (iVar1 != 0) {
        uVar2 = FUN_007708b4(&local_50,param_2);
        goto LAB_0077969c;
      }
    }
  }
  uVar2 = 0xffffffff;
LAB_0077969c:
  FUN_00770a10(&local_50);
  return uVar2;
}


// ===== 007796bc  FUN_007796bc =====

undefined8 FUN_007796bc(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) {
    uVar3 = 0x65;
    uVar4 = 0x24;
  }
  else {
    iVar1 = FUN_0071a5cc();
    if ((((((iVar1 == 0) && (iVar1 = FUN_0071a5cc(param_1[1]), iVar1 == 0)) &&
          ((iVar1 = FUN_007199e0(*param_1), iVar1 == 0 &&
           ((iVar1 = FUN_007199e0(param_1[1]), iVar1 == 0 &&
            (iVar1 = FUN_0071af88(*param_1), iVar1 != 0)))))) &&
         (iVar1 = FUN_0071af88(param_1[1]), iVar1 != 0)) &&
        (((iVar1 = FUN_0071ada0(param_1[1],*param_1), iVar1 < 0 &&
          (iVar1 = FUN_0071a5cc(param_1[2]), iVar1 == 0)) &&
         (iVar1 = FUN_007199e0(param_1[2]), iVar1 == 0)))) &&
       (iVar1 = FUN_0071ada0(param_1[2],*param_1), iVar1 < 0)) {
      iVar1 = FUN_0071a228(param_1[1]);
      if (((iVar1 == 0xa0) || (iVar1 == 0xe0)) || (iVar1 == 0x100)) {
        uVar2 = FUN_0071a228(*param_1);
        if (uVar2 < 0x2001) {
          if ((param_1[3] == 0) ||
             (((iVar1 = FUN_0071a5cc(), iVar1 == 0 && (iVar1 = FUN_007199e0(param_1[3]), iVar1 == 0)
               ) && (iVar1 = FUN_0071ada0(param_1[3],*param_1), iVar1 < 0)))) {
            if ((param_1[4] == 0) ||
               (((iVar1 = FUN_0071a5cc(), iVar1 == 0 &&
                 (iVar1 = FUN_007199e0(param_1[4]), iVar1 == 0)) &&
                (iVar1 = FUN_0071ada0(param_1[4],param_1[1]), iVar1 < 0)))) {
              return 1;
            }
            uVar3 = 0x6b;
            uVar4 = 0x56;
          }
          else {
            uVar3 = 0x6b;
            uVar4 = 0x4b;
          }
        }
        else {
          uVar3 = 0x66;
          uVar4 = 0x43;
        }
      }
      else {
        uVar3 = 100;
        uVar4 = 0x3c;
      }
    }
    else {
      uVar3 = 0x6b;
      uVar4 = 0x35;
    }
  }
  FUN_00777eb4(10,0,uVar3,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",uVar4);
  return 0;
}


// ===== 007798b4  FUN_007798b4 =====

void FUN_007798b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00719ff4();
  *param_2 = lVar1;
  if (lVar1 != 0) {
    FUN_0077a170(param_1,lVar1);
    return;
  }
  return;
}


// ===== 00779900  FUN_00779900 =====

undefined8 FUN_00779900(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if (iVar1 == 0) goto LAB_007799bc;
  if (param_2[3] != 0) {
    iVar1 = FUN_0077a228(&local_50);
    if (iVar1 == 0) goto LAB_007799bc;
    if (*param_2 != 0) {
      iVar1 = FUN_0077a228(&local_50);
      if (iVar1 == 0) goto LAB_007799bc;
      if (param_2[1] != 0) {
        iVar1 = FUN_0077a228(&local_50);
        if (iVar1 == 0) goto LAB_007799bc;
        if (param_2[2] != 0) {
          iVar1 = FUN_0077a228(&local_50);
          if ((iVar1 != 0) && (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)) {
            return 1;
          }
          goto LAB_007799bc;
        }
      }
    }
  }
  FUN_00777eb4(10,0,0x43,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",0x6a);
LAB_007799bc:
  FUN_00777eb4(10,0,0x6a,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",0xaa);
  return 0;
}


// ===== 007799f0  FUN_007799f0 =====

long * FUN_007799f0(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  plVar2 = (long *)FUN_00779f58();
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_30,0x20000010);
  if (iVar1 != 0) {
    lVar3 = FUN_00719ff4();
    *plVar2 = lVar3;
    if ((lVar3 != 0) && (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0)) {
      lVar3 = FUN_00719ff4();
      plVar2[1] = lVar3;
      if ((lVar3 != 0) && (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0)) {
        lVar3 = FUN_00719ff4();
        plVar2[2] = lVar3;
        if (((lVar3 != 0) && (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0)) &&
           (puStack_28 == (undefined1 *)0x0)) {
          iVar1 = FUN_007796bc(plVar2);
          if (iVar1 != 0) {
            return plVar2;
          }
          goto LAB_00779abc;
        }
      }
    }
  }
  FUN_00777eb4(10,0,0x69,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",0xbb);
LAB_00779abc:
  FUN_00779fc0(plVar2);
  FUN_0078cb3c(plVar2);
  return (long *)0x0;
}


// ===== 00779ae8  FUN_00779ae8 =====

undefined8 FUN_00779ae8(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if (iVar1 == 0) goto LAB_00779b90;
  if (*param_2 != 0) {
    iVar1 = FUN_0077a228(&local_50);
    if (iVar1 == 0) goto LAB_00779b90;
    if (param_2[1] != 0) {
      iVar1 = FUN_0077a228(&local_50);
      if (iVar1 == 0) goto LAB_00779b90;
      if (param_2[2] != 0) {
        iVar1 = FUN_0077a228(&local_50);
        if ((iVar1 != 0) && (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)) {
          return 1;
        }
        goto LAB_00779b90;
      }
    }
  }
  FUN_00777eb4(10,0,0x43,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",0x6a);
LAB_00779b90:
  FUN_00777eb4(10,0,0x6a,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",0xcb);
  return 0;
}


// ===== 00779bc4  FUN_00779bc4 =====

long * FUN_00779bc4(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  plVar2 = (long *)FUN_00779f58();
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_30,0x20000010);
  if ((iVar1 == 0) || (iVar1 = FUN_00772b1c(&local_30,&local_38), iVar1 == 0)) {
    uVar4 = 0x69;
    uVar5 = 0xdb;
  }
  else if (local_38 == (undefined1 *)0x0) {
    lVar3 = FUN_00719ff4();
    *plVar2 = lVar3;
    if ((lVar3 != 0) && (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0)) {
      lVar3 = FUN_00719ff4();
      plVar2[1] = lVar3;
      if ((lVar3 != 0) && (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0)) {
        lVar3 = FUN_00719ff4();
        plVar2[2] = lVar3;
        if ((((lVar3 != 0) && (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0)) &&
            (iVar1 = FUN_007798b4(&local_30,plVar2 + 3), iVar1 != 0)) &&
           ((iVar1 = FUN_007798b4(&local_30,plVar2 + 4), iVar1 != 0 &&
            (puStack_28 == (undefined1 *)0x0)))) {
          iVar1 = FUN_007796bc(plVar2);
          if (iVar1 != 0) {
            return plVar2;
          }
          goto LAB_00779c60;
        }
      }
    }
    uVar4 = 0x69;
    uVar5 = 0xea;
  }
  else {
    uVar4 = 0x68;
    uVar5 = 0xe0;
  }
  FUN_00777eb4(10,0,uVar4,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",uVar5);
LAB_00779c60:
  FUN_00779fc0(plVar2);
  FUN_0078cb3c(plVar2);
  return (long *)0x0;
}


// ===== 00779d34  FUN_00779d34 =====

undefined8 FUN_00779d34(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((iVar1 == 0) || (iVar1 = FUN_007719cc(&local_50,0), iVar1 == 0)) goto LAB_00779e14;
  if (*param_2 != 0) {
    iVar1 = FUN_0077a228(&local_50);
    if (iVar1 == 0) goto LAB_00779e14;
    if (param_2[1] != 0) {
      iVar1 = FUN_0077a228(&local_50);
      if (iVar1 == 0) goto LAB_00779e14;
      if (param_2[2] != 0) {
        iVar1 = FUN_0077a228(&local_50);
        if (iVar1 == 0) goto LAB_00779e14;
        if (param_2[3] != 0) {
          iVar1 = FUN_0077a228(&local_50);
          if (iVar1 == 0) goto LAB_00779e14;
          if (param_2[4] != 0) {
            iVar1 = FUN_0077a228(&local_50);
            if ((iVar1 != 0) && (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)) {
              return 1;
            }
            goto LAB_00779e14;
          }
        }
      }
    }
  }
  FUN_00777eb4(10,0,0x43,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",0x6a);
LAB_00779e14:
  FUN_00777eb4(10,0,0x6a,"../../third_party/boringssl/src/crypto/dsa/dsa_asn1.cc",0xfe);
  return 0;
}


// ===== 00779e48  FUN_00779e48 =====

undefined4 FUN_00779e48(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_50);
  iVar1 = FUN_00770984(&local_50,0x100);
  if ((iVar1 == 0) || (iVar1 = FUN_00779900(&local_50,param_1), iVar1 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_007708b4(&local_50,param_2);
  }
  FUN_00770a10(&local_50);
  return uVar2;
}


// ===== 00779ed0  FUN_00779ed0 =====

undefined4 FUN_00779ed0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_50);
  iVar1 = FUN_00770984(&local_50,0x100);
  if ((iVar1 == 0) || (iVar1 = FUN_00779d34(&local_50,param_1), iVar1 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_007708b4(&local_50,param_2);
  }
  FUN_00770a10(&local_50);
  return uVar2;
}


// ===== 00779f58  FUN_00779f58 =====

undefined8 * FUN_00779f58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 1;
    FUN_00795d20(puVar1 + 5);
    FUN_0078b418(puVar1 + 0xf);
  }
  return puVar1;
}


// ===== 00779fc0  FUN_00779fc0 =====

int FUN_00779fc0(undefined8 *param_1)

{
  int iVar1;
  
  if ((uint)param_1[0xe] < 2) {
    FUN_0078b424(&DAT_00d80070,param_1 + 0xf);
    FUN_0071a07c(*param_1);
    FUN_0071a07c(param_1[1]);
    FUN_0071a07c(param_1[2]);
    FUN_0071a07c(param_1[3]);
    FUN_0071a07c(param_1[4]);
    FUN_00723374(param_1[0xc]);
    FUN_00723374(param_1[0xd]);
    iVar1 = pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 5));
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0077a044  FUN_0077a044 =====

void FUN_0077a044(long param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = FUN_0079347c(param_1 + 0x70), iVar1 != 0)) {
    FUN_00779fc0(param_1);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0077a094  FUN_0077a094 =====

undefined8 FUN_0077a094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0077a0a0  FUN_0077a0a0 =====

undefined8 FUN_0077a0a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 0077a0ac  FUN_0077a0ac =====

undefined8 FUN_0077a0ac(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0077a0b8  FUN_0077a0b8 =====

undefined8 FUN_0077a0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


// ===== 0077a0c4  FUN_0077a0c4 =====

undefined8 FUN_0077a0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 0077a0d0  FUN_0077a0d0 =====

ulong FUN_0077a0d0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 != 0) {
    uVar2 = FUN_0071a2fc();
    uVar4 = (ulong)uVar2;
    if (uVar2 < 0x7f) {
      lVar5 = 1;
    }
    else {
      uVar3 = uVar4 + 1;
      lVar5 = 1;
      do {
        uVar3 = uVar3 >> 8;
        lVar5 = lVar5 + 1;
      } while (uVar3 != 0);
    }
    uVar3 = 0;
    uVar1 = uVar4 + lVar5 + 2;
    if ((uVar4 <= uVar1) && (-1 < (long)uVar1)) {
      uVar3 = uVar1 * 2;
      if (uVar1 < 0x40) {
        lVar5 = 1;
      }
      else {
        lVar5 = 1;
        uVar4 = uVar3;
        do {
          uVar4 = uVar4 >> 8;
          lVar5 = lVar5 + 1;
        } while (uVar4 != 0);
      }
      uVar4 = lVar5 + uVar3 + 1;
      uVar2 = 0;
      if (uVar3 <= uVar4) {
        uVar2 = (uint)uVar4;
      }
      uVar3 = (ulong)uVar2;
    }
  }
  return uVar3;
}


// ===== 0077a170  FUN_0077a170 =====

bool FUN_0077a170(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_30;
  undefined1 *puStack_28;
  int local_4;
  
  local_4 = -0x55555556;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_30,2);
  if ((iVar1 == 0) || (iVar1 = FUN_00772ca4(&local_30,&local_4), iVar1 == 0)) {
    uVar3 = 0x75;
    uVar4 = 0x1a;
  }
  else {
    if (local_4 == 0) {
      lVar2 = FUN_0071a744(local_30,puStack_28,param_2);
      return lVar2 != 0;
    }
    uVar3 = 0x6d;
    uVar4 = 0x1f;
  }
  FUN_00777eb4(3,0,uVar3,"../../third_party/boringssl/src/crypto/bn/bn_asn1.cc",uVar4);
  return false;
}


// ===== 0077a228  FUN_0077a228 =====

undefined8 FUN_0077a228(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  iVar1 = FUN_0071a5cc(param_2);
  if (iVar1 == 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(param_1,&local_50,2);
    if ((iVar1 != 0) &&
       ((uVar3 = FUN_0071a228(param_2), (uVar3 & 7) != 0 ||
        (iVar1 = FUN_00771298(&local_50,0), iVar1 != 0)))) {
      uVar2 = FUN_0071a2fc(param_2);
      iVar1 = FUN_00776c4c(&local_50,uVar2,param_2);
      if ((iVar1 != 0) && (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)) {
        return 1;
      }
    }
    uVar4 = 0x76;
    uVar5 = 0x34;
  }
  else {
    uVar4 = 0x6d;
    uVar5 = 0x29;
  }
  FUN_00777eb4(3,0,uVar4,"../../third_party/boringssl/src/crypto/bn/bn_asn1.cc",uVar5);
  return 0;
}


// ===== 0077a310  FUN_0077a310 =====

undefined8 FUN_0077a310(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    FUN_00777eb4(6,0,0x43,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",0x46);
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) {
      uVar1 = FUN_0077a3ac(param_1);
      return uVar1;
    }
    FUN_00777eb4(6,0,0x80,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",0x4c);
    FUN_007781a4("algorithm %d",**(undefined4 **)(param_1 + 0x10));
  }
  return 0;
}


// ===== 0077a3ac  FUN_0077a3ac =====

long * FUN_0077a3ac(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  
  plVar2 = (long *)FUN_0078c954(0x28);
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_2;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    plVar2[1] = 0;
    if (param_1 == 0) {
      plVar2[1] = 0;
      pcVar4 = *(code **)(param_2 + 8);
    }
    else {
      FUN_00778898(param_1);
      lVar3 = plVar2[1];
      plVar2[1] = param_1;
      if (lVar3 != 0) {
        FUN_00778828();
      }
      pcVar4 = *(code **)(param_2 + 8);
    }
    if (pcVar4 != (code *)0x0) {
      iVar1 = (*pcVar4)(plVar2);
      if (iVar1 < 1) {
        lVar3 = plVar2[2];
        *plVar2 = 0;
        plVar2[2] = 0;
        if (lVar3 != 0) {
          FUN_00778828();
        }
        lVar3 = plVar2[1];
        plVar2[1] = 0;
        if (lVar3 != 0) {
          FUN_00778828();
        }
        FUN_0078cb3c(plVar2);
        plVar2 = (long *)0x0;
      }
    }
  }
  return plVar2;
}


// ===== 0077a47c  FUN_0077a47c =====

void FUN_0077a47c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x18), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    lVar1 = param_1[2];
    param_1[2] = 0;
    if (lVar1 != 0) {
      FUN_00778828();
    }
    lVar1 = param_1[1];
    param_1[1] = 0;
    if (lVar1 != 0) {
      FUN_00778828();
    }
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0077a4e8  FUN_0077a4e8 =====

long * FUN_0077a4e8(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x10) != 0)) {
    plVar2 = (long *)FUN_0078c954(0x28);
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar2[4] = 0;
    plVar2[1] = 0;
    *plVar2 = 0;
    plVar2[3] = 0;
    plVar2[2] = 0;
    *plVar2 = *param_1;
    *(int *)(plVar2 + 3) = (int)param_1[3];
    lVar5 = param_1[1];
    if (lVar5 == 0) {
      plVar2[1] = 0;
      lVar5 = param_1[2];
    }
    else {
      FUN_00778898(lVar5);
      lVar3 = plVar2[1];
      plVar2[1] = lVar5;
      if (lVar3 != 0) {
        FUN_00778828();
      }
      lVar5 = param_1[2];
    }
    if (lVar5 != 0) {
      FUN_00778898(lVar5);
    }
    lVar3 = plVar2[2];
    plVar2[2] = lVar5;
    if (lVar3 != 0) {
      FUN_00778828();
    }
    iVar1 = (**(code **)(*param_1 + 0x10))(plVar2,param_1);
    if (0 < iVar1) {
      return plVar2;
    }
    *plVar2 = 0;
    FUN_00777eb4(6,0,6,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",0x79);
    if ((*plVar2 != 0) && (pcVar4 = *(code **)(*plVar2 + 0x18), pcVar4 != (code *)0x0)) {
      (*pcVar4)(plVar2);
    }
    lVar5 = plVar2[2];
    plVar2[2] = 0;
    if (lVar5 != 0) {
      FUN_00778828();
    }
    lVar5 = plVar2[1];
    plVar2[1] = 0;
    if (lVar5 != 0) {
      FUN_00778828();
    }
    FUN_0078cb3c(plVar2);
  }
  return (long *)0x0;
}


// ===== 0077a62c  FUN_0077a62c =====

undefined8
FUN_0077a62c(undefined8 *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) ||
     (*(code **)(piVar3 + 0x1c) == (code *)0x0)) {
    uVar1 = 0x65;
    uVar2 = 0x89;
  }
  else if ((param_2 == -1) || (*piVar3 == param_2)) {
    if (*(uint *)(param_1 + 3) == 0) {
      uVar1 = 0x7b;
      uVar2 = 0x92;
    }
    else {
      if ((*(uint *)(param_1 + 3) & param_3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(piVar3 + 0x1c))(param_1,param_4,param_5,param_6);
        return uVar1;
      }
      uVar1 = 0x72;
      uVar2 = 0x97;
    }
  }
  else {
    uVar1 = 0x7d;
    uVar2 = 0x8d;
  }
  FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",uVar2);
  return 0;
}


// ===== 0077a708  FUN_0077a708 =====

undefined8 FUN_0077a708(long *param_1)

{
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     ((*(long *)(lVar1 + 0x28) != 0 || (*(long *)(lVar1 + 0x30) != 0)))) {
    *(undefined4 *)(param_1 + 3) = 8;
    return 1;
  }
  FUN_00777eb4(6,0,0x7d,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",0xa2);
  return 0;
}


// ===== 0077a770  FUN_0077a770 =====

undefined8 FUN_0077a770(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar1 = 0x7d;
    uVar2 = 0xae;
  }
  else {
    if ((int)param_1[3] == 8) {
                    /* WARNING: Could not recover jumptable at 0x0077a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0x7e;
    uVar2 = 0xb2;
  }
  FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",uVar2);
  return 0;
}


// ===== 0077a7f0  FUN_0077a7f0 =====

undefined8 FUN_0077a7f0(long *param_1)

{
  long lVar1;
  
  if (((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) &&
     ((*(long *)(lVar1 + 0x38) != 0 || (*(long *)(lVar1 + 0x40) != 0)))) {
    *(undefined4 *)(param_1 + 3) = 0x10;
    return 1;
  }
  FUN_00777eb4(6,0,0x7d,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",0xbd);
  return 0;
}


// ===== 0077a858  FUN_0077a858 =====

undefined8 FUN_0077a858(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar1 = 0x7d;
    uVar2 = 200;
  }
  else {
    if ((int)param_1[3] == 0x10) {
                    /* WARNING: Could not recover jumptable at 0x0077a88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0x7e;
    uVar2 = 0xcc;
  }
  FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",uVar2);
  return 0;
}


// ===== 0077a8d8  FUN_0077a8d8 =====

undefined8 FUN_0077a8d8(long *param_1)

{
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (*(long *)(*param_1 + 0x60) != 0)) {
    *(undefined4 *)(param_1 + 3) = 0x100;
    return 1;
  }
  FUN_00777eb4(6,0,0x7d,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",0x11d);
  return 0;
}


// ===== 0077a938  FUN_0077a938 =====

undefined4 FUN_0077a938(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((((param_1 == (long *)0x0) || (lVar5 = *param_1, lVar5 == 0)) ||
      ((*(long *)(lVar5 + 0x60) == 0 &&
       ((*(long *)(lVar5 + 0x50) == 0 && (*(long *)(lVar5 + 0x58) == 0)))))) ||
     (*(code **)(lVar5 + 0x70) == (code *)0x0)) {
    uVar3 = 0x7d;
    uVar4 = 0x129;
  }
  else {
    iVar1 = (int)param_1[3];
    if (((iVar1 == 0x40) || (iVar1 == 0x80)) || (iVar1 == 0x100)) {
      iVar1 = (**(code **)(lVar5 + 0x70))(param_1,3,0,param_2);
      if (iVar1 < 1) {
        return 0;
      }
      if (iVar1 == 2) {
        return 1;
      }
      if (param_1[1] == 0) {
        uVar3 = 0x78;
        uVar4 = 0x13e;
      }
      else {
        iVar1 = FUN_007789f4();
        iVar2 = FUN_007789f4(param_2);
        if (iVar1 == iVar2) {
          iVar1 = FUN_00778a10(param_2);
          if ((iVar1 != 0) || (iVar1 = FUN_00778980(param_1[1],param_2), iVar1 != 0)) {
            if (param_2 != 0) {
              FUN_00778898(param_2);
            }
            lVar5 = param_1[2];
            param_1[2] = param_2;
            if (lVar5 != 0) {
              FUN_00778828();
            }
            iVar1 = (**(code **)(*param_1 + 0x70))(param_1,3,1,param_2);
            if (iVar1 < 1) {
              lVar5 = param_1[2];
              param_1[2] = 0;
              if (lVar5 == 0) {
                return 0;
              }
              FUN_00778828();
              return 0;
            }
            return 1;
          }
          uVar3 = 0x68;
          uVar4 = 0x14e;
        }
        else {
          uVar3 = 0x67;
          uVar4 = 0x143;
        }
      }
    }
    else {
      uVar3 = 0x7e;
      uVar4 = 0x12f;
    }
  }
  FUN_00777eb4(6,0,uVar3,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",uVar4);
  return 0;
}


// ===== 0077ab04  FUN_0077ab04 =====

undefined8 FUN_0077ab04(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x60), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    uVar1 = 0x7d;
    uVar2 = 0x15f;
  }
  else {
    if ((int)param_1[3] == 0x100) {
                    /* WARNING: Could not recover jumptable at 0x0077ab38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    uVar1 = 0x7e;
    uVar2 = 0x163;
  }
  FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/evp_ctx.cc",uVar2);
  return 0;
}


// ===== 0077ab84  FUN_0077ab84 =====

undefined ** FUN_0077ab84(void)

{
  return &PTR_DAT_00d2ac30;
}


// ===== 0077ab94  FUN_0077ab94 =====

undefined8 FUN_0077ab94(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_007787d8(param_1,&DAT_00d2ac38,param_2);
    return 1;
  }
  return 0;
}


// ===== 0077abd0  FUN_0077abd0 =====

undefined8 FUN_0077abd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007789f4();
  if (iVar1 == 0x74) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_00777eb4(6,0,0x6c,"../../third_party/boringssl/src/crypto/evp/p_dsa.cc",0x127);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0077ac28  FUN_0077ac28 =====

undefined8 FUN_0077ac28(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_007799f0(param_3);
  if (lVar2 == 0) {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_dsa.cc",0x2c);
    return 0;
  }
  if (*(long *)(param_3 + 8) == 0) {
    lVar3 = FUN_00719ff4();
    *(long *)(lVar2 + 0x18) = lVar3;
    if (lVar3 == 0) goto LAB_0077acc8;
    iVar1 = FUN_0077a170(param_4,lVar3);
    if ((iVar1 != 0) && (*(long *)(param_4 + 8) == 0)) {
      FUN_007787d8(param_2,&DAT_00d2ac38,lVar2);
      return 1;
    }
    uVar4 = 0x36;
  }
  else {
    uVar4 = 0x2c;
  }
  FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_dsa.cc",uVar4);
LAB_0077acc8:
  FUN_00779fc0(lVar2);
  FUN_0078cb3c(lVar2);
  return 0;
}


// ===== 0077ad0c  FUN_0077ad0c =====

undefined8 FUN_0077ad0c(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *local_c0;
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  plVar4 = *(long **)(param_2 + 8);
  if ((*plVar4 == 0) || (plVar4[1] == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = plVar4[2] != 0;
  }
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar2 = FUN_00771098(param_1,&local_60,0x20000010);
  if ((((((iVar2 == 0) || (iVar2 = FUN_00771098(&local_60,&puStack_90,0x20000010), iVar2 == 0)) ||
        (iVar2 = FUN_0077190c(&puStack_90,6,&DAT_00d2ac3c,7), iVar2 == 0)) ||
       ((bVar1 && (iVar2 = FUN_00779ae8(&puStack_90,plVar4), iVar2 == 0)))) ||
      ((iVar2 = FUN_00771098(&local_60,&local_c0,3), iVar2 == 0 ||
       ((iVar2 = FUN_00771298(&local_c0,0), iVar2 == 0 ||
        (iVar2 = FUN_0077a228(&local_c0,plVar4[3]), iVar2 == 0)))))) ||
     (iVar2 = FUN_00770ae8(param_1), iVar2 == 0)) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_dsa.cc",0x4d);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


// ===== 0077ae48  FUN_0077ae48 =====

bool FUN_0077ae48(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_0077a094(*(undefined8 *)(param_2 + 8));
  uVar3 = FUN_0077a094(uVar3);
  iVar1 = FUN_0071ada0(uVar2,uVar3);
  return iVar1 == 0;
}


// ===== 0077ae94  FUN_0077ae94 =====

bool FUN_0077ae94(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0077a094(*(undefined8 *)(param_1 + 8));
  return lVar1 != 0;
}


// ===== 0077aebc  FUN_0077aebc =====

undefined4 FUN_0077aebc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined8 *)FUN_007799f0(param_3);
  if ((puVar2 == (undefined8 *)0x0) || (*(long *)(param_3 + 8) != 0)) {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_dsa.cc",0x5c);
    uVar6 = 0;
joined_r0x0077af14:
    if (puVar2 == (undefined8 *)0x0) {
      return uVar6;
    }
    goto LAB_0077af60;
  }
  lVar3 = FUN_00719ff4();
  puVar2[4] = lVar3;
  if (lVar3 != 0) {
    iVar1 = FUN_0077a170(param_4,lVar3);
    if ((iVar1 == 0) || (*(long *)(param_4 + 8) != 0)) {
      uVar5 = 0x65;
    }
    else {
      iVar1 = FUN_007796bc(puVar2);
      if (iVar1 != 0) {
        lVar3 = FUN_0071b1a0();
        lVar4 = FUN_00719ff4();
        puVar2[3] = lVar4;
        if (lVar3 != 0) {
          if ((lVar4 == 0) ||
             (iVar1 = FUN_0071eb8c(lVar4,puVar2[2],puVar2[4],*puVar2,lVar3,0), iVar1 == 0)) {
            uVar6 = 0;
          }
          else {
            FUN_007787d8(param_2,&DAT_00d2ac38,puVar2);
            puVar2 = (undefined8 *)0x0;
            uVar6 = 1;
          }
          FUN_0071b1d4(lVar3);
          goto joined_r0x0077af14;
        }
        goto LAB_0077af5c;
      }
      uVar5 = 0x6d;
    }
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_dsa.cc",uVar5);
  }
LAB_0077af5c:
  uVar6 = 0;
LAB_0077af60:
  FUN_00779fc0(puVar2);
  FUN_0078cb3c(puVar2);
  return uVar6;
}


// ===== 0077b004  FUN_0077b004 =====

undefined8 FUN_0077b004(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) {
    uVar2 = 0x76;
    uVar3 = 0x81;
  }
  else {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
    iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_007719cc(&local_50,0), iVar1 != 0)) &&
         (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 != 0)) &&
        ((iVar1 = FUN_0077190c(&puStack_80,6,&DAT_00d2ac3c,7), iVar1 != 0 &&
         (iVar1 = FUN_00779ae8(&puStack_80,lVar4), iVar1 != 0)))) &&
       ((iVar1 = FUN_00771098(&local_50,&local_b0,4), iVar1 != 0 &&
        ((iVar1 = FUN_0077a228(&local_b0,*(undefined8 *)(lVar4 + 0x20)), iVar1 != 0 &&
         (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)))))) {
      return 1;
    }
    uVar2 = 0x69;
    uVar3 = 0x8f;
  }
  FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_dsa.cc",uVar3);
  return 0;
}


// ===== 0077b134  FUN_0077b134 =====

bool FUN_0077b134(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0077a0a0(*(undefined8 *)(param_1 + 8));
  return lVar1 != 0;
}


// ===== 0077b15c  FUN_0077b15c =====

void FUN_0077b15c(long param_1)

{
  FUN_0077a0d0(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0077b168  FUN_0077b168 =====

void FUN_0077b168(long param_1)

{
  FUN_0077a0ac(*(undefined8 *)(param_1 + 8));
  FUN_0071a228();
  return;
}


// ===== 0077b188  FUN_0077b188 =====

bool FUN_0077b188(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = FUN_0077a0ac(uVar3);
  if ((lVar2 == 0) || (lVar2 = FUN_0077a0b8(uVar3), lVar2 == 0)) {
    bVar1 = true;
  }
  else {
    lVar2 = FUN_0077a0c4(uVar3);
    bVar1 = lVar2 == 0;
  }
  return bVar1;
}


// ===== 0077b1dc  FUN_0077b1dc =====

long FUN_0077b1dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_2 + 8);
  plVar3 = *(long **)(param_1 + 8);
  lVar1 = FUN_0071a0d4(*puVar4);
  if (lVar1 != 0) {
    FUN_0071a024(*plVar3);
    *plVar3 = lVar1;
    lVar1 = FUN_0071a0d4(puVar4[1]);
    if (lVar1 != 0) {
      FUN_0071a024(plVar3[1]);
      plVar3[1] = lVar1;
      lVar2 = FUN_0071a0d4(puVar4[2]);
      lVar1 = lVar2;
      if (lVar2 != 0) {
        FUN_0071a024(plVar3[2]);
        lVar1 = 1;
        plVar3[2] = lVar2;
      }
    }
  }
  return lVar1;
}


// ===== 0077b264  FUN_0077b264 =====

bool FUN_0077b264(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar2 = FUN_0077a0ac(uVar5);
  uVar3 = FUN_0077a0ac(uVar4);
  iVar1 = FUN_0071ada0(uVar2,uVar3);
  if (iVar1 == 0) {
    uVar2 = FUN_0077a0b8(uVar5);
    uVar3 = FUN_0077a0b8(uVar4);
    iVar1 = FUN_0071ada0(uVar2,uVar3);
    if (iVar1 == 0) {
      uVar2 = FUN_0077a0c4(uVar5);
      uVar3 = FUN_0077a0c4(uVar4);
      iVar1 = FUN_0071ada0(uVar2,uVar3);
      return iVar1 == 0;
    }
  }
  return false;
}


// ===== 0077b30c  FUN_0077b30c =====

void FUN_0077b30c(long param_1)

{
  FUN_0077a044(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 0077b33c  FUN_0077b33c =====

undefined ** FUN_0077b33c(void)

{
  return &PTR_DAT_00d2ad00;
}


// ===== 0077b34c  FUN_0077b34c =====

undefined ** FUN_0077b34c(void)

{
  return &PTR_DAT_00d2add8;
}


// ===== 0077b35c  FUN_0077b35c =====

undefined ** FUN_0077b35c(void)

{
  return &PTR_DAT_00d2ade8;
}


// ===== 0077b36c  FUN_0077b36c =====

undefined ** FUN_0077b36c(void)

{
  return &PTR_DAT_00d2adf8;
}


// ===== 0077b37c  FUN_0077b37c =====

undefined8 FUN_0077b37c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_007787d8(param_1,&DAT_00d2ad10,param_2);
    return 1;
  }
  return 0;
}


// ===== 0077b3b8  FUN_0077b3b8 =====

undefined8 FUN_0077b3b8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007789f4();
  if (iVar1 == 0x198) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_00777eb4(6,0,0x6a,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x158);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0077b410  FUN_0077b410 =====

undefined8 FUN_0077b410(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_007789f4();
  if (iVar1 == 0x198) {
    if ((*(long *)(param_1 + 8) != 0) && (lVar2 = FUN_0072f524(), lVar2 != 0)) {
      uVar3 = FUN_0072c938();
      return uVar3;
    }
  }
  else {
    FUN_00777eb4(6,0,0x6a,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x158);
  }
  return 0;
}


// ===== 0077b480  FUN_0077b480 =====

undefined8 FUN_0077b480(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007789f4();
  if (iVar1 == 0x198) {
    if (*(long *)(param_1 + 8) != 0) {
      uVar2 = FUN_0072f6f4();
      return uVar2;
    }
  }
  else {
    FUN_00777eb4(6,0,0x6a,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x158);
  }
  return 0;
}


// ===== 0077b4e8  FUN_0077b4e8 =====

bool FUN_0077b4e8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar1;
  }
  return puVar1 != (undefined8 *)0x0;
}


// ===== 0077b530  FUN_0077b530 =====

undefined8 * FUN_0077b530(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar1;
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = (undefined8 *)0x1;
  }
  return puVar1;
}


// ===== 0077b584  FUN_0077b584 =====

void FUN_0077b584(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0078cb3c();
    return;
  }
  return;
}


// ===== 0077b598  FUN_0077b598 =====

undefined8 FUN_0077b598(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      FUN_00777eb4(6,0,0x7c,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x1fd);
      return 0;
    }
    lVar3 = FUN_0072f524(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  }
  lVar2 = FUN_0072ef08();
  if (((lVar2 != 0) && (iVar1 = FUN_0072f170(lVar2,lVar3), iVar1 != 0)) &&
     (iVar1 = FUN_0073083c(lVar2), iVar1 != 0)) {
    FUN_007787d8(param_2,&DAT_00d2ad10,lVar2);
    return 1;
  }
  FUN_0072f044(lVar2);
  return 0;
}


// ===== 0077b654  FUN_0077b654 =====

undefined8
FUN_0077b654(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_44;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  if (param_2 == 0) {
    uVar1 = FUN_0077c494(uVar2);
  }
  else {
    uVar3 = *param_3;
    uVar1 = FUN_0077c494(uVar2);
    if (uVar3 < uVar1) {
      FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x1a6);
      return 0;
    }
    local_44 = 0xaaaaaaaa;
    uVar2 = FUN_0077c16c(0,param_4,param_5,param_2,&local_44,uVar2);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar1 = (ulong)local_44;
  }
  *param_3 = uVar1;
  return 1;
}


// ===== 0077b724  FUN_0077b724 =====

void FUN_0077b724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_0077c5e0(0,param_4,param_5,param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  return;
}


// ===== 0077b750  FUN_0077b750 =====

undefined8 FUN_0077b750(long param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    FUN_00777eb4(6,0,0x75,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x1ba);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
    if (param_2 == 0) {
      FUN_0072f524(uVar4);
      iVar2 = FUN_0072c944();
      *param_3 = (ulong)(iVar2 + 7U >> 3);
      return 1;
    }
    uVar3 = FUN_0072f6dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    uVar1 = FUN_0077cc70(param_2,*param_3,uVar3,uVar4,0);
    if (-1 < (int)uVar1) {
      *param_3 = (ulong)uVar1;
      return 1;
    }
  }
  return 0;
}


// ===== 0077b810  FUN_0077b810 =====

undefined8 FUN_0077b810(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar3 + 8) == 0) {
    FUN_00777eb4(6,0,0x7c,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x20f);
  }
  else {
    lVar2 = FUN_0072ef08();
    if ((lVar2 != 0) && (iVar1 = FUN_0072f170(lVar2,*(undefined8 *)(lVar3 + 8)), iVar1 != 0)) {
      FUN_007787d8(param_2,&DAT_00d2ad10,lVar2);
      return 1;
    }
    FUN_0072f044(lVar2);
  }
  return 0;
}


// ===== 0077b8ac  FUN_0077b8ac =====

undefined8 FUN_0077b8ac(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  if (param_2 < 3) {
    if (param_2 == 1) {
      iVar1 = FUN_0072a6b0(param_4);
      if ((iVar1 - 0x2a0U < 4) || (iVar1 == 0x40)) {
        *puVar4 = param_4;
        goto LAB_0077b94c;
      }
      uVar2 = 0x6f;
      uVar3 = 0x1de;
    }
    else {
      if (param_2 == 2) {
        *param_4 = *puVar4;
        return 1;
      }
LAB_0077b908:
      uVar2 = 0x65;
      uVar3 = 499;
    }
    FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",uVar3);
    uVar2 = 0;
  }
  else {
    if (param_2 != 3) {
      if (param_2 != 0x100d) goto LAB_0077b908;
      puVar4[1] = param_4;
    }
LAB_0077b94c:
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0077b97c  FUN_0077b97c =====

undefined8 FUN_0077b97c(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 local_18;
  
  local_18 = (**(code **)(param_1 + 8))();
  lVar3 = FUN_00776820(param_3,&local_18,1);
  if (lVar3 == 0) {
    uVar1 = FUN_00777778();
    if ((uVar1 & 0xff000fff) == 0xf00007b) {
      FUN_00777808();
      return 2;
    }
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x55);
  }
  else if (*(long *)(param_3 + 8) == 0) {
    lVar3 = FUN_0072ef08();
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = FUN_0072f170(lVar3,local_18);
    if ((iVar2 != 0) && (iVar2 = FUN_0072fc9c(lVar3,*param_4,param_4[1],0), iVar2 != 0)) {
      FUN_007787d8(param_2,&DAT_00d2ad10,lVar3);
      return 1;
    }
    FUN_0072f044(lVar3);
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x59);
  }
  return 0;
}


// ===== 0077ba90  FUN_0077ba90 =====

undefined8 FUN_0077ba90(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *local_c0;
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = FUN_0072f524(uVar3);
  uVar3 = FUN_0072f6dc(uVar3);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar1 = FUN_00771098(param_1,&local_60,0x20000010);
  if (((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_60,&puStack_90,0x20000010), iVar1 == 0)) ||
       (iVar1 = FUN_0077190c(&puStack_90,6,&DAT_00d2ad14,7), iVar1 == 0)) ||
      ((iVar1 = FUN_00776720(&puStack_90,uVar2), iVar1 == 0 ||
       (iVar1 = FUN_00771098(&local_60,&local_c0,3), iVar1 == 0)))) ||
     ((iVar1 = FUN_00771298(&local_c0,0), iVar1 == 0 ||
      ((iVar1 = FUN_00776770(&local_c0,uVar2,uVar3,4,0), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x42);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0077bbc8  FUN_0077bbc8 =====

bool FUN_0077bbc8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_0072f524(uVar4);
  uVar3 = FUN_0072f6dc(uVar3);
  uVar4 = FUN_0072f6dc(uVar4);
  iVar1 = FUN_0072d5a4(uVar2,uVar3,uVar4,0);
  return iVar1 == 0;
}


// ===== 0077bc34  FUN_0077bc34 =====

bool FUN_0077bc34(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0072f6dc(*(undefined8 *)(param_1 + 8));
  return lVar1 != 0;
}


// ===== 0077bc5c  FUN_0077bc5c =====

undefined8 FUN_0077bc5c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  local_18 = (**(code **)(param_1 + 8))();
  lVar2 = FUN_00775e18(param_3,&local_18,1);
  if (lVar2 == 0) {
    uVar1 = FUN_00777778();
    if ((uVar1 & 0xff000fff) == 0xf00007b) {
      FUN_00777808();
      return 2;
    }
    uVar3 = 0x7b;
  }
  else if (*(long *)(param_3 + 8) == 0) {
    lVar2 = FUN_00775ae8(param_4,local_18,0,0);
    if (lVar2 != 0) {
      if (*(long *)(param_4 + 8) != 0) {
        FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0x85);
        FUN_0072f044(lVar2);
        return 0;
      }
      FUN_007787d8(param_2,&DAT_00d2ad10,lVar2);
      return 1;
    }
    uVar3 = 0x85;
  }
  else {
    uVar3 = 0x7f;
  }
  FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",uVar3);
  return 0;
}


// ===== 0077bd9c  FUN_0077bd9c =====

undefined8 FUN_0077bd9c(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_c0;
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar1 = FUN_0072f6e8(uVar4);
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar2 = FUN_00771098(param_1,&local_60,0x20000010);
  if ((((iVar2 != 0) && (iVar2 = FUN_007719cc(&local_60,0), iVar2 != 0)) &&
      (iVar2 = FUN_00771098(&local_60,&puStack_90,0x20000010), iVar2 != 0)) &&
     (iVar2 = FUN_0077190c(&puStack_90,6,&DAT_00d2ad14,7), iVar2 != 0)) {
    uVar3 = FUN_0072f524(uVar4);
    iVar2 = FUN_00776720(&puStack_90,uVar3);
    if (((iVar2 != 0) && (iVar2 = FUN_00771098(&local_60,&local_c0,4), iVar2 != 0)) &&
       ((iVar2 = FUN_007764f8(&local_c0,uVar4,uVar1 | 1), iVar2 != 0 &&
        (iVar2 = FUN_00770ae8(param_1), iVar2 != 0)))) {
      return 1;
    }
  }
  FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0xa1);
  return 0;
}


// ===== 0077bec8  FUN_0077bec8 =====

bool FUN_0077bec8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_0072f4f8(*(undefined8 *)(param_1 + 8));
  return lVar1 != 0;
}


// ===== 0077bef0  FUN_0077bef0 =====

undefined8 FUN_0077bef0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = FUN_0072fc9c();
    return uVar1;
  }
  FUN_00777eb4(6,0,0x78,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0xac);
  return 0;
}


// ===== 0077bf3c  FUN_0077bf3c =====

undefined8 FUN_0077bf3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = FUN_00730404(*(long *)(param_1 + 8),4,param_2,0);
    return uVar1;
  }
  FUN_00777eb4(6,0,0x78,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",0xb7);
  return 0;
}


// ===== 0077bf90  FUN_0077bf90 =====

void FUN_0077bf90(long param_1)

{
  FUN_0072f504(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0077bf9c  FUN_0077bf9c =====

void FUN_0077bf9c(long param_1)

{
  FUN_0077c494(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0077bfbc  FUN_0077bfbc =====

undefined8 FUN_0077bfbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0072f524(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_0072c41c();
    return uVar2;
  }
  FUN_00777808();
  return 0;
}


// ===== 0077bff4  FUN_0077bff4 =====

bool FUN_0077bff4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = FUN_0072f524();
    return lVar1 == 0;
  }
  return true;
}


// ===== 0077c02c  FUN_0077c02c =====

undefined8 FUN_0077c02c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_2 + 8) == 0) {
    uVar3 = 0x78;
    uVar4 = 0xd6;
  }
  else {
    lVar1 = FUN_0072f524(*(long *)(param_2 + 8));
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 8);
      if (lVar2 == 0) {
        lVar2 = FUN_0072ef08();
        *(long *)(param_1 + 8) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_0072f170(lVar2,lVar1);
      return uVar3;
    }
    uVar3 = 0x76;
    uVar4 = 0xdb;
  }
  FUN_00777eb4(6,0,uVar3,"../../third_party/boringssl/src/crypto/evp/p_ec.cc",uVar4);
  return 0;
}


// ===== 0077c0cc  FUN_0077c0cc =====

bool FUN_0077c0cc(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  bVar1 = false;
  if ((*(long *)(param_1 + 8) != 0) && (lVar4 = *(long *)(param_2 + 8), lVar4 != 0)) {
    lVar3 = FUN_0072f524(*(long *)(param_1 + 8));
    lVar4 = FUN_0072f524(lVar4);
    bVar1 = false;
    if ((lVar3 != 0) && (lVar4 != 0)) {
      iVar2 = FUN_0072bd30(lVar3,lVar4,0);
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}


// ===== 0077c13c  FUN_0077c13c =====

void FUN_0077c13c(long param_1)

{
  FUN_0072f044(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 0077c16c  FUN_0077c16c =====

ulong FUN_0077c16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,long param_6)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_d8;
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
  undefined1 *puStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(param_6 + 0x28) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_6 + 0x28) + 0x20),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    *param_5 = 0;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = 0xaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_d8 = &DAT_aaaaaaaaaaaaaaaa;
    iVar2 = FUN_0072f978(param_2,param_3,&local_d0,&local_d8,0x84,param_6);
    if ((iVar2 == 0) ||
       (puVar5 = (undefined8 *)FUN_0077c3b4(param_6,&local_d0,local_d8), puVar5 == (undefined8 *)0x0
       )) {
      uVar3 = 0;
    }
    else {
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      if ((param_6 == 0) || (lVar6 = FUN_0072f524(param_6), lVar6 == 0)) {
        lVar6 = 0;
      }
      else {
        FUN_0072c394();
        uVar3 = FUN_0071a2fc();
        uVar4 = (ulong)uVar3;
        if (uVar3 < 0x7f) {
          lVar7 = 1;
        }
        else {
          uVar8 = uVar4 + 1;
          lVar7 = 1;
          do {
            uVar8 = uVar8 >> 8;
            lVar7 = lVar7 + 1;
          } while (uVar8 != 0);
        }
        lVar6 = 0;
        uVar8 = uVar4 + lVar7 + 2;
        if ((uVar4 <= uVar8) && (-1 < (long)uVar8)) {
          uVar4 = uVar8 * 2;
          if (uVar8 < 0x40) {
            lVar7 = 1;
          }
          else {
            lVar7 = 1;
            uVar8 = uVar4;
            do {
              uVar8 = uVar8 >> 8;
              lVar7 = lVar7 + 1;
            } while (uVar8 != 0);
          }
          lVar6 = 0;
          if (uVar4 <= lVar7 + uVar4 + 1) {
            lVar6 = lVar7 + uVar4 + 1;
          }
        }
      }
      FUN_007709ec(&local_110,param_4,lVar6);
      local_118 = &DAT_aaaaaaaaaaaaaaaa;
      iVar2 = FUN_0077c53c(&local_110,puVar5);
      if ((iVar2 == 0) || (iVar2 = FUN_00770a30(&local_110,0,&local_118), iVar2 == 0)) {
        FUN_00777eb4(0x1a,0,0x69,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",0x68);
        uVar3 = 0;
      }
      else {
        *param_5 = (int)local_118;
        uVar3 = 1;
      }
      FUN_0071a024(*puVar5);
      FUN_0071a024(puVar5[1]);
      FUN_0078cb3c(puVar5);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return (ulong)uVar3;
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0077c1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5,param_6);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0077c3b4  FUN_0077c3b4 =====

undefined8 * FUN_0077c3b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = FUN_0072f524();
  if (lVar1 == 0) {
    uVar4 = 0x43;
    uVar5 = 0x26;
  }
  else {
    FUN_0072c394();
    uVar2 = FUN_0071a2fc();
    if (param_3 == (uVar2 & 0xffffffff) * 2) {
      uVar2 = uVar2 & 0xffffffff;
      puVar3 = (undefined8 *)FUN_0077c9b0();
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar1 = FUN_0071a744(param_2,uVar2,*puVar3);
      if ((lVar1 != 0) && (lVar1 = FUN_0071a744(param_2 + uVar2,uVar2,puVar3[1]), lVar1 != 0)) {
        return puVar3;
      }
      FUN_0071a024(*puVar3);
      FUN_0071a024(puVar3[1]);
      FUN_0078cb3c(puVar3);
      return (undefined8 *)0x0;
    }
    uVar4 = 100;
    uVar5 = 0x2b;
  }
  FUN_00777eb4(0x1a,0,uVar4,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",uVar5);
  return (undefined8 *)0x0;
}


// ===== 0077c494  FUN_0077c494 =====

long FUN_0077c494(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_1 != 0) && (param_1 = FUN_0072f524(), param_1 != 0)) {
    FUN_0072c394();
    uVar1 = FUN_0071a2fc();
    uVar2 = (ulong)uVar1;
    if (uVar1 < 0x7f) {
      lVar3 = 1;
    }
    else {
      uVar4 = uVar2 + 1;
      lVar3 = 1;
      do {
        uVar4 = uVar4 >> 8;
        lVar3 = lVar3 + 1;
      } while (uVar4 != 0);
    }
    param_1 = 0;
    uVar4 = uVar2 + lVar3 + 2;
    if ((uVar2 <= uVar4) && (-1 < (long)uVar4)) {
      uVar2 = uVar4 * 2;
      if (uVar4 < 0x40) {
        lVar3 = 1;
      }
      else {
        lVar3 = 1;
        uVar4 = uVar2;
        do {
          uVar4 = uVar4 >> 8;
          lVar3 = lVar3 + 1;
        } while (uVar4 != 0);
      }
      param_1 = 0;
      if (uVar2 <= lVar3 + uVar2 + 1) {
        param_1 = lVar3 + uVar2 + 1;
      }
    }
  }
  return param_1;
}


// ===== 0077c53c  FUN_0077c53c =====

undefined8 FUN_0077c53c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_0077a228(&local_50,*param_2), iVar1 == 0)) ||
      (iVar1 = FUN_0077a228(&local_50,param_2[1]), iVar1 == 0)) ||
     (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)) {
    FUN_00777eb4(0x1a,0,0x69,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",0x114);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0077c5e0  FUN_0077c5e0 =====

bool FUN_0077c5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                 undefined1 *param_5,undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *local_f8;
  undefined1 *local_f0;
  void *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
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
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e8 = (void *)0x0;
  puVar4 = (undefined8 *)FUN_0077c758(param_4,param_5);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_0078cb3c();
    bVar2 = false;
    goto LAB_0077c6c4;
  }
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  iVar3 = FUN_0077c7f8(&local_e8,&local_f0,puVar4);
  if (((iVar3 == 0) || (local_f0 != param_5)) ||
     ((param_5 != (undefined1 *)0x0 &&
      (iVar3 = memcmp(param_4,local_e8,(size_t)param_5), iVar3 != 0)))) {
    FUN_00777eb4(0x1a,0,0x44,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",0x81);
LAB_0077c694:
    bVar2 = false;
  }
  else {
    local_f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
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
    local_60 = 0xaaaaaaaa;
    iVar3 = FUN_0077c8ac(param_6,&local_e0,&local_f8,puVar4);
    if (iVar3 == 0) goto LAB_0077c694;
    iVar3 = thunk_FUN_00738f00(param_2,param_3,&local_e0,local_f8,param_6);
    bVar2 = iVar3 != 0;
  }
  FUN_0078cb3c(local_e8);
  FUN_0071a024(*puVar4);
  FUN_0071a024(puVar4[1]);
  FUN_0078cb3c(puVar4);
LAB_0077c6c4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0077c758  FUN_0077c758 =====

undefined8 * FUN_0077c758(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  puVar1 = (undefined8 *)FUN_0077cbb4(&local_30);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_00777eb4(0x1a,0,100,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",0x108);
  }
  else if (local_28 != 0) {
    FUN_00777eb4(0x1a,0,100,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",0x108);
    FUN_0071a024(*puVar1);
    FUN_0071a024(puVar1[1]);
    FUN_0078cb3c(puVar1);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 0077c7f8  FUN_0077c7f8 =====

undefined8 FUN_0077c7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00770970(&local_60);
  iVar1 = FUN_00770984(&local_60,0);
  if (((iVar1 == 0) || (iVar1 = FUN_0077c53c(&local_60,param_3), iVar1 == 0)) ||
     (iVar1 = FUN_00770a30(&local_60,param_1,param_2), iVar1 == 0)) {
    FUN_00777eb4(0x1a,0,0x69,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",0x120);
    FUN_00770a10(&local_60);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0077c8ac  FUN_0077c8ac =====

undefined8 FUN_0077c8ac(undefined8 param_1,long param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar3 = FUN_0072f524();
  if (lVar3 == 0) {
    uVar4 = 0x1a;
    uVar5 = 0x43;
    uVar6 = 0x3b;
  }
  else {
    FUN_0072c394();
    uVar1 = FUN_0071a2fc();
    if (uVar1 < 0x43) {
      uVar7 = (ulong)uVar1;
      iVar2 = FUN_0071a5cc(*param_4);
      if ((((iVar2 == 0) && (iVar2 = FUN_0071ab6c(param_2,uVar7,*param_4), iVar2 != 0)) &&
          (iVar2 = FUN_0071a5cc(param_4[1]), iVar2 == 0)) &&
         (iVar2 = FUN_0071ab6c(param_2 + uVar7,uVar7,param_4[1]), iVar2 != 0)) {
        *param_3 = uVar7 << 1;
        return 1;
      }
      uVar4 = 0x1a;
      uVar5 = 100;
      uVar6 = 0x46;
    }
    else {
      uVar4 = 0xf;
      uVar5 = 100;
      uVar6 = 0x40;
    }
  }
  FUN_00777eb4(uVar4,0,uVar5,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",uVar6);
  return 0;
}


// ===== 0077c9b0  FUN_0077c9b0 =====

long * FUN_0077c9b0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_0078c954(0x10);
  if (plVar1 != (long *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    lVar2 = FUN_00719ff4();
    *plVar1 = lVar2;
    lVar2 = FUN_00719ff4();
    plVar1[1] = lVar2;
    if ((*plVar1 == 0) || (lVar2 == 0)) {
      FUN_0071a024(*plVar1);
      FUN_0071a024(plVar1[1]);
      FUN_0078cb3c(plVar1);
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}


// ===== 0077ca20  FUN_0077ca20 =====

void FUN_0077ca20(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_0071a024(*param_1);
    FUN_0071a024(param_1[1]);
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0077ca64  FUN_0077ca64 =====

void FUN_0077ca64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *local_c8;
  undefined1 *local_c0;
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
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0xaaaaaaaa;
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
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = FUN_0077c8ac(param_4,&local_c0,&local_c8,param_3);
  if ((int)uVar3 != 0) {
    iVar2 = thunk_FUN_00738f00(param_1,param_2,&local_c0,local_c8,param_4);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0077cb18  FUN_0077cb18 =====

void FUN_0077cb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *local_b8;
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
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xaaaaaaaa;
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
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  iVar2 = FUN_0072f978(param_1,param_2,&local_b0,&local_b8,0x84,param_3);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0077c3b4(param_3,&local_b0,local_b8);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0077cbb4  FUN_0077cbb4 =====

undefined8 * FUN_0077cbb4(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  puVar2 = (undefined8 *)FUN_0077c9b0();
  if (puVar2 != (undefined8 *)0x0) {
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00772950(param_1,&local_30,0x20000010);
    if ((((iVar1 == 0) || (iVar1 = FUN_0077a170(&local_30,*puVar2), iVar1 == 0)) ||
        (iVar1 = FUN_0077a170(&local_30,puVar2[1]), iVar1 == 0)) ||
       (puStack_28 != (undefined1 *)0x0)) {
      FUN_00777eb4(0x1a,0,100,"../../third_party/boringssl/src/crypto/ecdsa/ecdsa_asn1.cc",0xfc);
      FUN_0071a024(*puVar2);
      FUN_0071a024(puVar2[1]);
      FUN_0078cb3c(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}


// ===== 0077cc70  FUN_0077cc70 =====

ulong FUN_0077cc70(void *param_1,undefined1 *param_2,undefined8 *param_3,long param_4,code *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *local_188;
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
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
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
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined2 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_4 + 0x10);
  local_a8 = param_2;
  if (lVar6 == 0) {
    uVar3 = 0x1b;
    uVar4 = 0x65;
    uVar5 = 0x24;
  }
  else {
    uVar3 = FUN_0072f524(param_4);
    iVar2 = FUN_0072bd30(uVar3,*param_3,0);
    if (iVar2 == 0) {
      local_60 = 0xaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
      local_180 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      local_188 = &DAT_aaaaaaaaaaaaaaaa;
      iVar2 = FUN_0072ea44(uVar3,&local_180,param_3 + 1,lVar6 + 0x18);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_0072ed7c(uVar3,&local_a0,&local_188,0x42,&local_180), iVar2 == 0)) {
        uVar3 = 0x1b;
        uVar4 = 0x66;
        uVar5 = 0x34;
      }
      else {
        if (param_5 == (code *)0x0) {
          if (local_188 < param_2) {
            local_a8 = local_188;
            param_2 = local_188;
          }
          if (param_2 == (undefined1 *)0x0) goto LAB_0077cdcc;
          memcpy(param_1,&local_a0,(size_t)param_2);
        }
        else {
          lVar6 = (*param_5)(&local_a0,local_188,param_1,&local_a8);
          param_2 = local_a8;
          if (lVar6 == 0) {
            uVar3 = 0x1b;
            uVar4 = 100;
            uVar5 = 0x3a;
            goto LAB_0077cdc4;
          }
        }
        if ((ulong)param_2 >> 0x1f == 0) goto LAB_0077cdcc;
        uVar3 = 0x1b;
        uVar4 = 0x45;
        uVar5 = 0x46;
      }
    }
    else {
      uVar3 = 0xf;
      uVar4 = 0x6a;
      uVar5 = 0x2a;
    }
  }
LAB_0077cdc4:
  FUN_00777eb4(uVar3,0,uVar4,"../../third_party/boringssl/src/crypto/ecdh/ecdh.cc",uVar5);
  param_2 = (undefined1 *)0xffffffff;
LAB_0077cdcc:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)param_2 & 0xffffffff;
}


// ===== 0077ce68  FUN_0077ce68 =====

undefined8 FUN_0077ce68(void)

{
  return 1;
}


// ===== 0077ce74  FUN_0077ce74 =====

bool FUN_0077ce74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)FUN_0078c954(0x41);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00781324(&local_60,puVar2);
    *(undefined1 *)(puVar2 + 8) = 1;
    FUN_007787d8(param_2,&DAT_00d2af00,puVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar2 != (undefined8 *)0x0;
}


// ===== 0077cf24  FUN_0077cf24 =====

undefined8
FUN_0077cf24(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 8);
  if ((*(byte *)(lVar3 + 0x40) & 1) == 0) {
    uVar1 = 0x82;
    uVar2 = 0x119;
LAB_0077cf8c:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      if (*param_3 < 0x40) {
        uVar1 = 100;
        uVar2 = 0x123;
        goto LAB_0077cf8c;
      }
      uVar1 = FUN_007814dc(param_2,param_4,param_5,lVar3);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    uVar1 = 1;
    *param_3 = 0x40;
  }
  return uVar1;
}


// ===== 0077cfcc  FUN_0077cfcc =====

undefined8
FUN_0077cfcc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0x40) &&
     (iVar1 = FUN_0078262c(param_4,param_5,param_2,*(long *)(*(long *)(param_1 + 8) + 8) + 0x20),
     iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    FUN_00777eb4(6,0,0x83,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",0x136);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 0077d03c  FUN_0077d03c =====

undefined ** FUN_0077d03c(void)

{
  return &PTR_DAT_00d2aef8;
}


// ===== 0077d04c  FUN_0077d04c =====

undefined8 FUN_0077d04c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_3 + 8) == 0) {
    if (param_4[1] == 0x20) {
      puVar3 = (undefined8 *)*param_4;
      puVar1 = (undefined8 *)FUN_0078c954(0x41);
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      uVar5 = *puVar3;
      uVar4 = puVar3[3];
      uVar2 = puVar3[2];
      puVar1[5] = puVar3[1];
      puVar1[4] = uVar5;
      puVar1[7] = uVar4;
      puVar1[6] = uVar2;
      FUN_007787d8(param_2,&DAT_00d2af00,puVar1);
      return 1;
    }
    uVar2 = 0x47;
  }
  else {
    uVar2 = 0x87;
  }
  FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",uVar2);
  return 0;
}


// ===== 0077d104  FUN_0077d104 =====

undefined8 FUN_0077d104(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  lVar3 = *(long *)(param_2 + 8);
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 == 0)) ||
      (iVar1 = FUN_0077190c(&puStack_80,6,&DAT_00d2af04,3), iVar1 == 0)) ||
     (((iVar1 = FUN_00771098(&local_50,&local_b0,3), iVar1 == 0 ||
       (iVar1 = FUN_00771298(&local_b0,0), iVar1 == 0)) ||
      ((iVar1 = FUN_007712e0(&local_b0,lVar3 + 0x20,0x20), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",0x9e);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0077d200  FUN_0077d200 =====

bool FUN_0077d200(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 8);
  return ((*(long *)(lVar1 + 0x20) == *(long *)(lVar2 + 0x20) &&
          *(long *)(lVar1 + 0x28) == *(long *)(lVar2 + 0x28)) &&
         *(long *)(lVar1 + 0x30) == *(long *)(lVar2 + 0x30)) &&
         *(long *)(lVar1 + 0x38) == *(long *)(lVar2 + 0x38);
}


// ===== 0077d234  FUN_0077d234 =====

undefined8 FUN_0077d234(void)

{
  return 1;
}


// ===== 0077d240  FUN_0077d240 =====

undefined4 FUN_0077d240(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  if (((*(long *)(param_3 + 8) == 0) &&
      (iVar3 = FUN_00772950(param_4,&local_70,4), puVar2 = local_70, iVar3 != 0)) &&
     (*(long *)(param_4 + 8) == 0)) {
    if (puStack_68 != (undefined1 *)0x20) {
      uVar5 = 0x33;
      goto LAB_0077d28c;
    }
    puVar4 = (undefined8 *)FUN_0078c954(0x41);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar4 + 8) = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007813a0(&local_60,puVar4,puVar2);
      uVar6 = 1;
      *(undefined1 *)(puVar4 + 8) = 1;
      FUN_007787d8(param_2,&DAT_00d2af00,puVar4);
      goto LAB_0077d294;
    }
  }
  else {
    uVar5 = 0xb6;
LAB_0077d28c:
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",uVar5);
  }
  uVar6 = 0;
LAB_0077d294:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0077d36c  FUN_0077d36c =====

undefined8 FUN_0077d36c(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_e0;
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
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((*(byte *)(lVar4 + 0x40) & 1) == 0) {
    uVar2 = 0x82;
    uVar3 = 0xc2;
  }
  else {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_007719cc(&local_50,0), iVar1 != 0)) &&
         (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 != 0)) &&
        ((iVar1 = FUN_0077190c(&puStack_80,6,&DAT_00d2af04,3), iVar1 != 0 &&
         (iVar1 = FUN_00771098(&local_50,&local_b0,4), iVar1 != 0)))) &&
       ((iVar1 = FUN_00771098(&local_b0,&local_e0,4), iVar1 != 0 &&
        ((iVar1 = FUN_007712e0(&local_e0,lVar4,0x20), iVar1 != 0 &&
         (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)))))) {
      return 1;
    }
    uVar2 = 0x69;
    uVar3 = 0xd3;
  }
  FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",uVar3);
  return 0;
}


// ===== 0077d4a8  FUN_0077d4a8 =====

undefined1 FUN_0077d4a8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x40);
}


// ===== 0077d4b8  FUN_0077d4b8 =====

undefined4 FUN_0077d4b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0x20) {
    puVar2 = (undefined8 *)FUN_0078c954(0x41);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar2 + 8) = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007813a0(&local_60,puVar2,param_2);
      uVar3 = 1;
      *(undefined1 *)(puVar2 + 8) = 1;
      FUN_007787d8(param_1,&DAT_00d2af00,puVar2);
      goto LAB_0077d564;
    }
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",0x33);
  }
  uVar3 = 0;
LAB_0077d564:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0077d594  FUN_0077d594 =====

undefined8 * FUN_0077d594(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0x20) {
    puVar1 = (undefined8 *)FUN_0078c954(0x41);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      uVar4 = *param_2;
      uVar3 = param_2[3];
      uVar2 = param_2[2];
      puVar1[5] = param_2[1];
      puVar1[4] = uVar4;
      puVar1[7] = uVar3;
      puVar1[6] = uVar2;
      FUN_007787d8(param_1,&DAT_00d2af00,puVar1);
      puVar1 = (undefined8 *)0x1;
    }
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",0x47);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 0077d624  FUN_0077d624 =====

undefined8 FUN_0077d624(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if ((*(byte *)(puVar3 + 8) & 1) == 0) {
    uVar1 = 0x82;
    uVar2 = 0x5a;
LAB_0077d680:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 100;
        goto LAB_0077d680;
      }
      uVar4 = *puVar3;
      uVar2 = puVar3[3];
      uVar1 = puVar3[2];
      param_2[1] = puVar3[1];
      *param_2 = uVar4;
      param_2[3] = uVar2;
      param_2[2] = uVar1;
    }
    uVar1 = 1;
    *param_3 = 0x20;
  }
  return uVar1;
}


// ===== 0077d6b4  FUN_0077d6b4 =====

undefined8 FUN_0077d6b4(long param_1,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    if (*param_3 < 0x20) {
      FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_ed25519.cc",0x77);
      return 0;
    }
    lVar1 = *(long *)(param_1 + 8);
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    param_2[1] = *(undefined8 *)(lVar1 + 0x28);
    *param_2 = uVar4;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
  }
  *param_3 = 0x20;
  return 1;
}


// ===== 0077d724  FUN_0077d724 =====

undefined8 FUN_0077d724(void)

{
  return 0x40;
}


// ===== 0077d730  FUN_0077d730 =====

undefined8 FUN_0077d730(void)

{
  return 0xfd;
}


// ===== 0077d73c  FUN_0077d73c =====

void FUN_0077d73c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0078cb3c();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 0077d770  FUN_0077d770 =====

void FUN_0077d770(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = (param_2[1] - (-(*param_2 + 0xfff8000000000013U >> 0x33) & 0xff)) + 0xfff8000000000001;
  uVar2 = (param_2[2] - (-(uVar1 >> 0x33) & 0xff)) + 0xfff8000000000001;
  uVar3 = (param_2[3] - (-(uVar2 >> 0x33) & 0xff)) + 0xfff8000000000001;
  uVar4 = (param_2[4] - (-(uVar3 >> 0x33) & 0xff)) + 0xfff8000000000001;
  uVar8 = -(ulong)((uVar4 & 0x7f8000000000000) != 0);
  uVar5 = (uVar8 & 0x7ffffffffffed) + (*param_2 + 0xfff8000000000013U & 0x7ffffffffffff);
  uVar9 = uVar8 & 0x7ffffffffffff;
  uVar1 = uVar9 + (uVar1 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  *param_1 = (char)uVar5;
  param_1[1] = (char)(uVar5 >> 8);
  param_1[2] = (char)(uVar5 >> 0x10);
  uVar2 = (uVar2 & 0x7ffffffffffff) + uVar9 + (uVar1 >> 0x33);
  param_1[3] = (char)(uVar5 >> 0x18);
  param_1[4] = (char)(uVar5 >> 0x20);
  param_1[5] = (char)(uVar5 >> 0x28);
  param_1[7] = (char)(uVar1 >> 5);
  uVar3 = (uVar3 & 0x7ffffffffffff) + uVar9 + (uVar2 >> 0x33);
  param_1[8] = (char)(uVar1 >> 0xd);
  param_1[6] = (byte)(uVar5 >> 0x30) & 7 | (byte)((int)uVar1 << 3);
  uVar6 = (uint)(uVar1 >> 0x20);
  param_1[0xf] = (char)(uVar2 >> 0x12);
  param_1[0xb] = (char)(uVar6 >> 5);
  param_1[0xc] = (byte)(uVar6 >> 0xd) & 0x3f | (byte)((int)uVar2 << 6);
  uVar6 = (uint)(uVar2 >> 0x20);
  param_1[0xd] = (char)(uVar2 >> 2);
  uVar4 = uVar4 + uVar8 + (uVar3 >> 0x33);
  param_1[0xe] = (char)(uVar2 >> 10);
  param_1[0x13] = (byte)(uVar6 >> 0x12) & 1 | (byte)((int)uVar3 << 1);
  param_1[0x12] = (char)(uVar6 >> 10);
  param_1[0x15] = (char)(uVar3 >> 0xf);
  param_1[0x14] = (char)(uVar3 >> 7);
  uVar7 = (uint)(uVar3 >> 0x20);
  param_1[9] = (char)(uVar1 >> 0x15);
  param_1[0x18] = (char)(uVar7 >> 7);
  param_1[0x19] = (byte)(uVar7 >> 0xf) & 0xf | (byte)((int)uVar4 << 4);
  param_1[0x1a] = (char)(uVar4 >> 4);
  param_1[0x1b] = (char)(uVar4 >> 0xc);
  param_1[0x1c] = (char)(uVar4 >> 0x14);
  uVar7 = (uint)(uVar4 >> 0x20);
  param_1[10] = (char)(uVar1 >> 0x1d);
  param_1[0x10] = (char)(uVar2 >> 0x1a);
  param_1[0x11] = (char)(uVar6 >> 2);
  param_1[0x16] = (char)(uVar3 >> 0x17);
  param_1[0x17] = (char)(uVar3 >> 0x1f);
  param_1[0x1d] = (char)(uVar4 >> 0x1c);
  param_1[0x1e] = (char)(uVar7 >> 4);
  param_1[0x1f] = (byte)(uVar7 >> 0xc) & 0x7f;
  return;
}


// ===== 0077d918  FUN_0077d918 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077d918(ulong *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
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
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar424 [16];
  undefined1 auVar425 [16];
  undefined1 auVar426 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar431 [16];
  undefined1 auVar432 [16];
  undefined1 auVar433 [16];
  undefined1 auVar434 [16];
  undefined1 auVar435 [16];
  undefined1 auVar436 [16];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  undefined1 auVar440 [16];
  undefined1 auVar441 [16];
  undefined1 auVar442 [16];
  undefined1 auVar443 [16];
  undefined1 auVar444 [16];
  undefined1 auVar445 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar448 [16];
  undefined1 auVar449 [16];
  undefined1 auVar450 [16];
  undefined1 auVar451 [16];
  undefined1 auVar452 [16];
  undefined1 auVar453 [16];
  undefined1 auVar454 [16];
  undefined1 auVar455 [16];
  undefined1 auVar456 [16];
  undefined1 auVar457 [16];
  undefined1 auVar458 [16];
  undefined1 auVar459 [16];
  undefined1 auVar460 [16];
  undefined1 auVar461 [16];
  undefined1 auVar462 [16];
  undefined1 auVar463 [16];
  undefined1 auVar464 [16];
  undefined1 auVar465 [16];
  undefined1 auVar466 [16];
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [16];
  undefined1 auVar475 [16];
  undefined1 auVar476 [16];
  undefined1 auVar477 [16];
  undefined1 auVar478 [16];
  undefined1 auVar479 [16];
  undefined1 auVar480 [16];
  undefined1 auVar481 [16];
  undefined1 auVar482 [16];
  undefined1 auVar483 [16];
  undefined1 auVar484 [16];
  undefined1 auVar485 [16];
  undefined1 auVar486 [16];
  undefined1 auVar487 [16];
  undefined1 auVar488 [16];
  undefined1 auVar489 [16];
  undefined1 auVar490 [16];
  undefined1 auVar491 [16];
  undefined1 auVar492 [16];
  undefined1 auVar493 [16];
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  undefined1 auVar499 [16];
  undefined1 auVar500 [16];
  undefined1 auVar501 [16];
  undefined1 auVar502 [16];
  undefined1 auVar503 [16];
  undefined1 auVar504 [16];
  undefined1 auVar505 [16];
  undefined1 auVar506 [16];
  undefined1 auVar507 [16];
  undefined1 auVar508 [16];
  undefined1 auVar509 [16];
  undefined1 auVar510 [16];
  undefined1 auVar511 [16];
  undefined1 auVar512 [16];
  undefined1 auVar513 [16];
  undefined1 auVar514 [16];
  undefined1 auVar515 [16];
  undefined1 auVar516 [16];
  undefined1 auVar517 [16];
  undefined1 auVar518 [16];
  undefined1 auVar519 [16];
  undefined1 auVar520 [16];
  undefined1 auVar521 [16];
  undefined1 auVar522 [16];
  undefined1 auVar523 [16];
  undefined1 auVar524 [16];
  undefined1 auVar525 [16];
  undefined1 auVar526 [16];
  undefined1 auVar527 [16];
  undefined1 auVar528 [16];
  undefined1 auVar529 [16];
  undefined1 auVar530 [16];
  undefined1 auVar531 [16];
  undefined1 auVar532 [16];
  undefined1 auVar533 [16];
  undefined1 auVar534 [16];
  undefined1 auVar535 [16];
  undefined1 auVar536 [16];
  undefined1 auVar537 [16];
  undefined1 auVar538 [16];
  undefined1 auVar539 [16];
  undefined1 auVar540 [16];
  undefined1 auVar541 [16];
  undefined1 auVar542 [16];
  undefined1 auVar543 [16];
  undefined1 auVar544 [16];
  undefined1 auVar545 [16];
  undefined1 auVar546 [16];
  undefined1 auVar547 [16];
  undefined1 auVar548 [16];
  undefined1 auVar549 [16];
  undefined1 auVar550 [16];
  undefined1 auVar551 [16];
  undefined1 auVar552 [16];
  undefined1 auVar553 [16];
  undefined1 auVar554 [16];
  undefined1 auVar555 [16];
  undefined1 auVar556 [16];
  undefined1 auVar557 [16];
  undefined1 auVar558 [16];
  undefined1 auVar559 [16];
  undefined1 auVar560 [16];
  undefined1 auVar561 [16];
  undefined1 auVar562 [16];
  undefined1 auVar563 [16];
  undefined1 auVar564 [16];
  undefined1 auVar565 [16];
  undefined1 auVar566 [16];
  undefined1 auVar567 [16];
  undefined1 auVar568 [16];
  undefined1 auVar569 [16];
  undefined1 auVar570 [16];
  undefined1 auVar571 [16];
  undefined1 auVar572 [16];
  undefined1 auVar573 [16];
  undefined1 auVar574 [16];
  undefined1 auVar575 [16];
  undefined1 auVar576 [16];
  undefined1 auVar577 [16];
  undefined1 auVar578 [16];
  undefined1 auVar579 [16];
  undefined1 auVar580 [16];
  undefined1 auVar581 [16];
  undefined1 auVar582 [16];
  undefined1 auVar583 [16];
  undefined1 auVar584 [16];
  undefined1 auVar585 [16];
  undefined1 auVar586 [16];
  undefined1 auVar587 [16];
  undefined1 auVar588 [16];
  undefined1 auVar589 [16];
  undefined1 auVar590 [16];
  undefined1 auVar591 [16];
  undefined1 auVar592 [16];
  undefined1 auVar593 [16];
  undefined1 auVar594 [16];
  undefined1 auVar595 [16];
  undefined1 auVar596 [16];
  undefined1 auVar597 [16];
  undefined1 auVar598 [16];
  undefined1 auVar599 [16];
  undefined1 auVar600 [16];
  undefined1 auVar601 [16];
  undefined1 auVar602 [16];
  undefined1 auVar603 [16];
  undefined1 auVar604 [16];
  undefined1 auVar605 [16];
  undefined1 auVar606 [16];
  undefined1 auVar607 [16];
  undefined1 auVar608 [16];
  undefined1 auVar609 [16];
  undefined1 auVar610 [16];
  undefined1 auVar611 [16];
  undefined1 auVar612 [16];
  undefined1 auVar613 [16];
  undefined1 auVar614 [16];
  undefined1 auVar615 [16];
  long lVar616;
  uint uVar617;
  uint uVar618;
  uint uVar619;
  int iVar620;
  ulong uVar621;
  undefined8 uVar622;
  ulong uVar623;
  ulong uVar624;
  ulong uVar625;
  ulong uVar626;
  ulong uVar627;
  ulong uVar628;
  ulong uVar629;
  long lVar630;
  ulong uVar631;
  ulong uVar632;
  ulong uVar633;
  ulong uVar634;
  long lVar635;
  long lVar636;
  ulong uVar637;
  ulong uVar638;
  long lVar639;
  ulong uVar640;
  ulong uVar641;
  ulong uVar642;
  ulong uVar643;
  ulong *puVar644;
  ulong uVar645;
  ulong uVar646;
  ulong uVar647;
  ulong uVar648;
  ulong uVar649;
  long local_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  ulong local_118;
  ulong uStack_110;
  long local_108;
  ulong uStack_100;
  ulong local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  
  lVar616 = tpidr_el0;
  local_70 = *(long *)(lVar616 + 0x28);
  bVar5 = *(byte *)((long)param_2 + 0xb);
  uVar617 = param_2[3];
  bVar6 = *(byte *)((long)param_2 + 6);
  bVar7 = *(byte *)((long)param_2 + 10);
  bVar8 = *(byte *)((long)param_2 + 0xf);
  bVar9 = *(byte *)((long)param_2 + 0x15);
  bVar10 = *(byte *)((long)param_2 + 0x1b);
  bVar11 = *(byte *)((long)param_2 + 9);
  uVar2 = param_2[4];
  uVar4 = *(uint *)((long)param_2 + 0x16);
  uVar3 = param_2[7];
  uVar618 = param_2[2];
  bVar12 = *(byte *)((long)param_2 + 0xe);
  uVar619 = param_2[5];
  bVar13 = *(byte *)((long)param_2 + 0x1a);
  bVar14 = *(byte *)((long)param_2 + 7);
  bVar15 = *(byte *)((long)param_2 + 0xd);
  puVar644 = param_1 + 5;
  *puVar644 = (ulong)*(byte *)((long)param_2 + 5) << 0x28 | ((ulong)bVar6 & 7) << 0x30 |
              (ulong)*param_2 | (ulong)(byte)param_2[1] << 0x20;
  param_1[8] = (ulong)bVar9 << 0xf | ((ulong)uVar4 & 0xfffffff) << 0x17 | (ulong)(byte)uVar619 << 7
               | (ulong)(uVar2 >> 0x19);
  param_1[9] = (ulong)bVar10 << 0xc | ((ulong)uVar3 & 0x7fffffff) << 0x14 | (ulong)bVar13 << 4 |
               (ulong)(uVar4 >> 0x1c);
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[6] = (ulong)bVar5 << 0x25 | ((ulong)(byte)uVar617 & 0x3f) << 0x2d | (ulong)bVar7 << 0x1d |
               (ulong)bVar11 << 0x15 | (ulong)(byte)uVar618 << 0xd | (ulong)bVar14 << 5 |
               (ulong)(bVar6 >> 3);
  param_1[7] = (ulong)bVar8 << 0x12 | ((ulong)uVar2 & 0x1ffffff) << 0x1a | (ulong)bVar12 << 10 |
               (ulong)bVar15 << 2 | (ulong)(byte)((byte)uVar617 >> 6);
  param_1[10] = 1;
  FUN_0077faf4(&local_168,puVar644);
  FUN_007866c0(&local_190,&local_168,&DAT_0020a7c8);
  local_140 = local_190 + _DAT_001f2d00;
  lStack_138 = lStack_188 + _UNK_001f2d08;
  uVar631 = local_160 + (local_168 + 0xfffffffffffd9 >> 0x33) + 0xffffffffffffe;
  lStack_128 = lStack_178;
  lStack_130 = local_180;
  uVar632 = local_158 + (uVar631 >> 0x33) + 0xffffffffffffe;
  uVar629 = local_150 + (uVar632 >> 0x33) + 0xffffffffffffe;
  uVar645 = local_148 + (uVar629 >> 0x33) + 0xffffffffffffe;
  uVar633 = uVar645 & 0x7ffffffffffff;
  uVar625 = (local_168 + 0xfffffffffffd9 & 0x7ffffffffffff) + (uVar645 >> 0x33) * 0x13;
  uVar631 = (uVar631 & 0x7ffffffffffff) + (uVar625 >> 0x33);
  uVar625 = uVar625 & 0x7ffffffffffff;
  uVar634 = uVar631 & 0x7ffffffffffff;
  lVar1 = (uVar632 & 0x7ffffffffffff) + (uVar631 >> 0x33);
  uVar629 = uVar629 & 0x7ffffffffffff;
  local_120 = local_170;
  local_118 = uVar625;
  uStack_110 = uVar634;
  local_108 = lVar1;
  uStack_100 = uVar629;
  local_f8 = uVar633;
  FUN_007866c0(&local_168,&local_118,&local_140);
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar638 = local_148 * 0x26;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_148 * 0x13;
  auVar316._8_8_ = 0;
  auVar316._0_8_ = local_148;
  uVar624 = local_148 * 0x13 * local_148;
  uVar626 = local_150 * 0x13 * local_150;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_150;
  auVar317._8_8_ = 0;
  auVar317._0_8_ = uVar638;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = local_158;
  auVar318._8_8_ = 0;
  auVar318._0_8_ = uVar638;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = local_150 * 0x13;
  auVar319._8_8_ = 0;
  auVar319._0_8_ = local_150;
  uVar642 = local_150 * 2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_158;
  auVar320._8_8_ = 0;
  auVar320._0_8_ = local_150 * 0x26;
  uVar623 = local_158 * local_150 * 0x26;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_160;
  auVar321._8_8_ = 0;
  auVar321._0_8_ = uVar638;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_158;
  auVar322._8_8_ = 0;
  auVar322._0_8_ = local_158;
  uVar631 = local_160 * uVar638 + uVar623;
  uVar621 = local_158 * 2;
  uVar632 = uVar631 + local_168 * local_168;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_168;
  auVar323._8_8_ = 0;
  auVar323._0_8_ = local_168;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = local_160;
  auVar324._8_8_ = 0;
  auVar324._0_8_ = uVar642;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_168;
  auVar325._8_8_ = 0;
  auVar325._0_8_ = local_148 * 2;
  uVar645 = local_160 * uVar642 + local_158 * local_158;
  uVar637 = local_168 * local_148 * 2;
  uVar627 = uVar632 >> 0x33 |
            (SUB168(auVar21 * auVar321,8) + SUB168(auVar20 * auVar320,8) +
             (ulong)CARRY8(local_160 * uVar638,uVar623) + SUB168(auVar23 * auVar323,8) +
            (ulong)CARRY8(uVar631,local_168 * local_168)) * 0x2000;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = local_160;
  auVar326._8_8_ = 0;
  auVar326._0_8_ = uVar621;
  uVar631 = uVar645 + uVar637;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = local_168;
  auVar327._8_8_ = 0;
  auVar327._0_8_ = uVar642;
  lVar639 = SUB168(auVar24 * auVar324,8) + SUB168(auVar22 * auVar322,8) +
            (ulong)CARRY8(local_160 * uVar642,local_158 * local_158) + SUB168(auVar25 * auVar325,8)
            + (ulong)CARRY8(uVar645,uVar637);
  uVar645 = local_160 * uVar621 + uVar624;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = local_160;
  auVar328._8_8_ = 0;
  auVar328._0_8_ = local_160;
  uVar623 = uVar645 + local_168 * uVar642;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = local_168;
  auVar329._8_8_ = 0;
  auVar329._0_8_ = uVar621;
  lVar636 = SUB168(auVar26 * auVar326,8) + SUB168(auVar16 * auVar316,8) +
            (ulong)CARRY8(local_160 * uVar621,uVar624) + SUB168(auVar27 * auVar327,8) +
            (ulong)CARRY8(uVar645,local_168 * uVar642);
  uVar645 = local_160 * local_160 + local_150 * uVar638;
  uVar637 = local_168 * local_160 * 2;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = local_168;
  auVar330._8_8_ = 0;
  auVar330._0_8_ = local_160 * 2;
  uVar624 = uVar645 + local_168 * uVar621;
  lVar630 = SUB168(auVar28 * auVar328,8) + SUB168(auVar17 * auVar317,8) +
            (ulong)CARRY8(local_160 * local_160,local_150 * uVar638) + SUB168(auVar29 * auVar329,8)
            + (ulong)CARRY8(uVar645,local_168 * uVar621);
  uVar645 = local_158 * uVar638 + uVar626;
  uVar621 = uVar645 + uVar637;
  lVar635 = SUB168(auVar18 * auVar318,8) + SUB168(auVar19 * auVar319,8) +
            (ulong)CARRY8(local_158 * uVar638,uVar626) + SUB168(auVar30 * auVar330,8) +
            (ulong)CARRY8(uVar645,uVar637);
  uVar645 = uVar621 + uVar627;
  if (CARRY8(uVar621,uVar627)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar637 = uVar621 >> 0x33 | lVar630 << 0xd;
  uVar624 = uVar623 + uVar637;
  if (CARRY8(uVar623,uVar637)) {
    lVar636 = lVar636 + 1;
  }
  local_80 = uVar624 & 0x7ffffffffffff;
  uVar624 = uVar624 >> 0x33 | lVar636 << 0xd;
  uVar637 = local_80 * 2;
  uVar623 = uVar631 + uVar624;
  if (CARRY8(uVar631,uVar624)) {
    lVar639 = lVar639 + 1;
  }
  local_78 = uVar623 & 0x7ffffffffffff;
  local_98 = (uVar632 & 0x7ffffffffffff) + (uVar623 >> 0x33 | lVar639 << 0xd) * 0x13;
  uVar638 = local_78 * 0x26;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = local_78;
  auVar331._8_8_ = 0;
  auVar331._0_8_ = local_78 * 0x13;
  uVar642 = local_78 * local_78 * 0x13;
  local_90 = (uVar645 & 0x7ffffffffffff) + (local_98 >> 0x33);
  local_98 = local_98 & 0x7ffffffffffff;
  local_88 = (uVar621 & 0x7ffffffffffff) + (local_90 >> 0x33);
  local_90 = local_90 & 0x7ffffffffffff;
  uVar647 = local_88 * 2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = local_88;
  auVar332._8_8_ = 0;
  auVar332._0_8_ = local_88;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = local_90;
  auVar333._8_8_ = 0;
  auVar333._0_8_ = uVar637;
  uVar645 = local_88 * local_80 * 0x26;
  uVar631 = local_90 * uVar638 + local_98 * local_98;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = local_90;
  auVar334._8_8_ = 0;
  auVar334._0_8_ = uVar638;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = local_98;
  auVar335._8_8_ = 0;
  auVar335._0_8_ = local_98;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = local_80;
  auVar336._8_8_ = 0;
  auVar336._0_8_ = local_80 * 0x13;
  uVar632 = uVar631 + uVar645;
  uVar621 = local_80 * local_80 * 0x13;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = local_88;
  auVar337._8_8_ = 0;
  auVar337._0_8_ = local_80 * 0x26;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = local_80;
  auVar338._8_8_ = 0;
  auVar338._0_8_ = uVar638;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = local_90;
  auVar339._8_8_ = 0;
  auVar339._0_8_ = local_90;
  uVar626 = uVar632 >> 0x33 |
            (SUB168(auVar34 * auVar334,8) + SUB168(auVar35 * auVar335,8) +
             (ulong)CARRY8(local_90 * uVar638,local_98 * local_98) + SUB168(auVar37 * auVar337,8) +
            (ulong)CARRY8(uVar631,uVar645)) * 0x2000;
  uVar631 = local_90 * local_90 + local_80 * uVar638;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar647;
  auVar340._8_8_ = 0;
  auVar340._0_8_ = local_98;
  uVar645 = uVar631 + uVar647 * local_98;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = local_88;
  auVar341._8_8_ = 0;
  auVar341._0_8_ = uVar638;
  uVar627 = local_90 * 2 * local_98;
  uVar623 = local_88 * uVar638 + uVar621;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = local_90 * 2;
  auVar342._8_8_ = 0;
  auVar342._0_8_ = local_98;
  uVar624 = uVar623 + uVar627;
  uVar621 = SUB168(auVar41 * auVar341,8) + SUB168(auVar36 * auVar336,8) +
            (ulong)CARRY8(local_88 * uVar638,uVar621) + SUB168(auVar42 * auVar342,8) +
            (ulong)CARRY8(uVar623,uVar627);
  uVar623 = uVar624 + uVar626;
  if (CARRY8(uVar624,uVar626)) {
    uVar621 = uVar621 + 1;
  }
  auVar43._8_8_ = 0;
  auVar43._0_8_ = local_98;
  auVar343._8_8_ = 0;
  auVar343._0_8_ = uVar637;
  uVar626 = uVar623 >> 0x33 | uVar621 << 0xd;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar647;
  auVar344._8_8_ = 0;
  auVar344._0_8_ = local_90;
  uVar624 = uVar645 + uVar626;
  uVar626 = SUB168(auVar39 * auVar339,8) + SUB168(auVar38 * auVar338,8) +
            (ulong)CARRY8(local_90 * local_90,local_80 * uVar638) + SUB168(auVar40 * auVar340,8) +
            (ulong)CARRY8(uVar631,uVar647 * local_98) + (uVar621 >> 0x33) +
            (ulong)CARRY8(uVar645,uVar626);
  uVar631 = local_98 * uVar637 + uVar642;
  uVar638 = uVar624 >> 0x33 | uVar626 * 0x2000;
  uVar627 = local_98 * local_78 * 2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = local_98;
  auVar345._8_8_ = 0;
  auVar345._0_8_ = local_78 * 2;
  uVar645 = uVar631 + uVar647 * local_90;
  uVar621 = uVar645 + uVar638;
  uVar638 = SUB168(auVar43 * auVar343,8) + SUB168(auVar31 * auVar331,8) +
            (ulong)CARRY8(local_98 * uVar637,uVar642) + SUB168(auVar44 * auVar344,8) +
            (ulong)CARRY8(uVar631,uVar647 * local_90) + (uVar626 >> 0x33) +
            (ulong)CARRY8(uVar645,uVar638);
  uVar631 = local_90 * uVar637 + uVar627;
  uVar647 = uVar621 >> 0x33 | uVar638 * 0x2000;
  uVar645 = uVar631 + local_88 * local_88;
  uVar626 = uVar645 + uVar647;
  uVar642 = uVar626 & 0x7ffffffffffff;
  uVar621 = uVar621 & 0x7ffffffffffff;
  uVar646 = uVar621 * 2;
  uVar638 = (uVar632 & 0x7ffffffffffff) +
            (uVar626 >> 0x33 |
            (SUB168(auVar33 * auVar333,8) + SUB168(auVar45 * auVar345,8) +
             (ulong)CARRY8(local_90 * uVar637,uVar627) + SUB168(auVar32 * auVar332,8) +
             (ulong)CARRY8(uVar631,local_88 * local_88) + (uVar638 >> 0x33) +
            (ulong)CARRY8(uVar645,uVar647)) * 0x2000) * 0x13;
  uVar640 = uVar642 * 0x26;
  uVar631 = (uVar623 & 0x7ffffffffffff) + (uVar638 >> 0x33);
  uVar638 = uVar638 & 0x7ffffffffffff;
  uVar632 = (uVar624 & 0x7ffffffffffff) + (uVar631 >> 0x33);
  uVar631 = uVar631 & 0x7ffffffffffff;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar642;
  auVar346._8_8_ = 0;
  auVar346._0_8_ = uVar642 * 0x13;
  uVar649 = uVar632 * 2;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar632;
  auVar347._8_8_ = 0;
  auVar347._0_8_ = uVar621 * 0x26;
  uVar647 = uVar642 * uVar642 * 0x13;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar631;
  auVar348._8_8_ = 0;
  auVar348._0_8_ = uVar646;
  uVar637 = uVar632 * uVar621 * 0x26;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar631;
  auVar349._8_8_ = 0;
  auVar349._0_8_ = uVar640;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar638;
  auVar350._8_8_ = 0;
  auVar350._0_8_ = uVar638;
  uVar645 = uVar631 * uVar640 + uVar638 * uVar638;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar621;
  auVar351._8_8_ = 0;
  auVar351._0_8_ = uVar640;
  uVar623 = uVar645 + uVar637;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar621;
  auVar352._8_8_ = 0;
  auVar352._0_8_ = uVar621 * 0x13;
  uVar624 = uVar631 * uVar631 + uVar621 * uVar640;
  uVar628 = uVar623 >> 0x33 |
            (SUB168(auVar49 * auVar349,8) + SUB168(auVar50 * auVar350,8) +
             (ulong)CARRY8(uVar631 * uVar640,uVar638 * uVar638) + SUB168(auVar47 * auVar347,8) +
            (ulong)CARRY8(uVar645,uVar637)) * 0x2000;
  uVar627 = uVar621 * uVar621 * 0x13;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar632;
  auVar353._8_8_ = 0;
  auVar353._0_8_ = uVar640;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar649;
  auVar354._8_8_ = 0;
  auVar354._0_8_ = uVar631;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar631;
  auVar355._8_8_ = 0;
  auVar355._0_8_ = uVar631;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar649;
  auVar356._8_8_ = 0;
  auVar356._0_8_ = uVar638;
  uVar648 = uVar631 * 2 * uVar638;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar631 * 2;
  auVar357._8_8_ = 0;
  auVar357._0_8_ = uVar638;
  uVar645 = uVar624 + uVar649 * uVar638;
  uVar637 = uVar632 * uVar640 + uVar627;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar638;
  auVar358._8_8_ = 0;
  auVar358._0_8_ = uVar642 * 2;
  uVar626 = uVar637 + uVar648;
  uVar627 = SUB168(auVar53 * auVar353,8) + SUB168(auVar52 * auVar352,8) +
            (ulong)CARRY8(uVar632 * uVar640,uVar627) + SUB168(auVar57 * auVar357,8) +
            (ulong)CARRY8(uVar637,uVar648);
  uVar637 = uVar626 + uVar628;
  if (CARRY8(uVar626,uVar628)) {
    uVar627 = uVar627 + 1;
  }
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar638;
  auVar359._8_8_ = 0;
  auVar359._0_8_ = uVar646;
  uVar628 = uVar637 >> 0x33 | uVar627 << 0xd;
  uVar642 = uVar638 * uVar642 * 2;
  uVar626 = uVar645 + uVar628;
  uVar627 = SUB168(auVar55 * auVar355,8) + SUB168(auVar51 * auVar351,8) +
            (ulong)CARRY8(uVar631 * uVar631,uVar621 * uVar640) + SUB168(auVar56 * auVar356,8) +
            (ulong)CARRY8(uVar624,uVar649 * uVar638) + (uVar627 >> 0x33) +
            (ulong)CARRY8(uVar645,uVar628);
  uVar645 = uVar638 * uVar646 + uVar647;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar632;
  auVar360._8_8_ = 0;
  auVar360._0_8_ = uVar632;
  uVar621 = uVar626 >> 0x33 | uVar627 * 0x2000;
  uVar624 = uVar645 + uVar649 * uVar631;
  local_a8 = uVar624 + uVar621;
  uVar621 = SUB168(auVar59 * auVar359,8) + SUB168(auVar46 * auVar346,8) +
            (ulong)CARRY8(uVar638 * uVar646,uVar647) + SUB168(auVar54 * auVar354,8) +
            (ulong)CARRY8(uVar645,uVar649 * uVar631) + (uVar627 >> 0x33) +
            (ulong)CARRY8(uVar624,uVar621);
  uVar627 = local_a8 >> 0x33 | uVar621 * 0x2000;
  uVar645 = uVar631 * uVar646 + uVar642;
  uVar624 = uVar645 + uVar632 * uVar632;
  local_a0 = uVar624 + uVar627;
  local_c0 = (uVar623 & 0x7ffffffffffff) +
             (local_a0 >> 0x33 |
             (SUB168(auVar48 * auVar348,8) + SUB168(auVar58 * auVar358,8) +
              (ulong)CARRY8(uVar631 * uVar646,uVar642) + SUB168(auVar60 * auVar360,8) +
              (ulong)CARRY8(uVar645,uVar632 * uVar632) + (uVar621 >> 0x33) +
             (ulong)CARRY8(uVar624,uVar627)) * 0x2000) * 0x13;
  local_b8 = (uVar637 & 0x7ffffffffffff) + (local_c0 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_b0 = (uVar626 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_b8 = local_b8 & 0x7ffffffffffff;
  local_a8 = local_a8 & 0x7ffffffffffff;
  local_a0 = local_a0 & 0x7ffffffffffff;
  FUN_007866c0(&local_c0,&local_168,&local_c0);
  FUN_007866c0(&local_98,&local_98,&local_c0);
  uVar638 = local_78 * 0x26;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = local_78 * 0x13;
  auVar361._8_8_ = 0;
  auVar361._0_8_ = local_78;
  uVar624 = local_78 * 0x13 * local_78;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = local_80 * 0x13;
  auVar362._8_8_ = 0;
  auVar362._0_8_ = local_80;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = local_80;
  auVar363._8_8_ = 0;
  auVar363._0_8_ = uVar638;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = local_88;
  auVar364._8_8_ = 0;
  auVar364._0_8_ = uVar638;
  uVar627 = local_80 * 0x13 * local_80;
  uVar642 = local_80 * 2;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = local_88;
  auVar365._8_8_ = 0;
  auVar365._0_8_ = local_80 * 0x26;
  uVar623 = local_88 * local_80 * 0x26;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = local_90;
  auVar366._8_8_ = 0;
  auVar366._0_8_ = uVar638;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = local_88;
  auVar367._8_8_ = 0;
  auVar367._0_8_ = local_88;
  uVar631 = local_90 * uVar638 + uVar623;
  uVar621 = local_88 * 2;
  uVar632 = uVar631 + local_98 * local_98;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = local_98;
  auVar368._8_8_ = 0;
  auVar368._0_8_ = local_98;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = local_90;
  auVar369._8_8_ = 0;
  auVar369._0_8_ = uVar642;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = local_98;
  auVar370._8_8_ = 0;
  auVar370._0_8_ = local_78 * 2;
  uVar645 = local_90 * uVar642 + local_88 * local_88;
  uVar637 = local_98 * local_78 * 2;
  uVar626 = uVar632 >> 0x33 |
            (SUB168(auVar66 * auVar366,8) + SUB168(auVar65 * auVar365,8) +
             (ulong)CARRY8(local_90 * uVar638,uVar623) + SUB168(auVar68 * auVar368,8) +
            (ulong)CARRY8(uVar631,local_98 * local_98)) * 0x2000;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = local_90;
  auVar371._8_8_ = 0;
  auVar371._0_8_ = uVar621;
  uVar631 = uVar645 + uVar637;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = local_98;
  auVar372._8_8_ = 0;
  auVar372._0_8_ = uVar642;
  lVar639 = SUB168(auVar69 * auVar369,8) + SUB168(auVar67 * auVar367,8) +
            (ulong)CARRY8(local_90 * uVar642,local_88 * local_88) + SUB168(auVar70 * auVar370,8) +
            (ulong)CARRY8(uVar645,uVar637);
  uVar645 = local_90 * uVar621 + uVar624;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = local_90;
  auVar373._8_8_ = 0;
  auVar373._0_8_ = local_90;
  uVar623 = uVar645 + local_98 * uVar642;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = local_98;
  auVar374._8_8_ = 0;
  auVar374._0_8_ = uVar621;
  lVar636 = SUB168(auVar71 * auVar371,8) + SUB168(auVar61 * auVar361,8) +
            (ulong)CARRY8(local_90 * uVar621,uVar624) + SUB168(auVar72 * auVar372,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar642);
  uVar645 = local_90 * local_90 + local_80 * uVar638;
  uVar637 = local_98 * local_90 * 2;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = local_98;
  auVar375._8_8_ = 0;
  auVar375._0_8_ = local_90 * 2;
  uVar624 = uVar645 + local_98 * uVar621;
  lVar630 = SUB168(auVar73 * auVar373,8) + SUB168(auVar63 * auVar363,8) +
            (ulong)CARRY8(local_90 * local_90,local_80 * uVar638) + SUB168(auVar74 * auVar374,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar621);
  uVar645 = local_88 * uVar638 + uVar627;
  uVar621 = uVar645 + uVar637;
  lVar635 = SUB168(auVar64 * auVar364,8) + SUB168(auVar62 * auVar362,8) +
            (ulong)CARRY8(local_88 * uVar638,uVar627) + SUB168(auVar75 * auVar375,8) +
            (ulong)CARRY8(uVar645,uVar637);
  uVar645 = uVar621 + uVar626;
  if (CARRY8(uVar621,uVar626)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar624 = uVar621 >> 0x33 | lVar630 << 0xd;
  local_80 = uVar623 + uVar624;
  if (CARRY8(uVar623,uVar624)) {
    lVar636 = lVar636 + 1;
  }
  uVar623 = local_80 >> 0x33 | lVar636 << 0xd;
  local_78 = uVar631 + uVar623;
  if (CARRY8(uVar631,uVar623)) {
    lVar639 = lVar639 + 1;
  }
  local_98 = (uVar632 & 0x7ffffffffffff) + (local_78 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_90 = (uVar645 & 0x7ffffffffffff) + (local_98 >> 0x33);
  local_98 = local_98 & 0x7ffffffffffff;
  local_88 = (uVar621 & 0x7ffffffffffff) + (local_90 >> 0x33);
  local_90 = local_90 & 0x7ffffffffffff;
  local_80 = local_80 & 0x7ffffffffffff;
  local_78 = local_78 & 0x7ffffffffffff;
  FUN_007866c0(&local_98,&local_c0,&local_98);
  uVar638 = local_78 * 0x26;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = local_78 * 0x13;
  auVar376._8_8_ = 0;
  auVar376._0_8_ = local_78;
  uVar624 = local_78 * 0x13 * local_78;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = local_88;
  auVar377._8_8_ = 0;
  auVar377._0_8_ = uVar638;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = local_80;
  auVar378._8_8_ = 0;
  auVar378._0_8_ = uVar638;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = local_80 * 0x13;
  auVar379._8_8_ = 0;
  auVar379._0_8_ = local_80;
  uVar627 = local_80 * 0x13 * local_80;
  uVar642 = local_80 * 2;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = local_88;
  auVar380._8_8_ = 0;
  auVar380._0_8_ = local_80 * 0x26;
  uVar623 = local_88 * local_80 * 0x26;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = local_90;
  auVar381._8_8_ = 0;
  auVar381._0_8_ = uVar638;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = local_88;
  auVar382._8_8_ = 0;
  auVar382._0_8_ = local_88;
  uVar631 = local_90 * uVar638 + uVar623;
  uVar621 = local_88 * 2;
  uVar632 = uVar631 + local_98 * local_98;
  auVar83._8_8_ = 0;
  auVar83._0_8_ = local_98;
  auVar383._8_8_ = 0;
  auVar383._0_8_ = local_98;
  auVar84._8_8_ = 0;
  auVar84._0_8_ = local_90;
  auVar384._8_8_ = 0;
  auVar384._0_8_ = uVar642;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = local_98;
  auVar385._8_8_ = 0;
  auVar385._0_8_ = local_78 * 2;
  uVar645 = local_90 * uVar642 + local_88 * local_88;
  uVar637 = local_98 * local_78 * 2;
  uVar626 = uVar632 >> 0x33 |
            (SUB168(auVar81 * auVar381,8) + SUB168(auVar80 * auVar380,8) +
             (ulong)CARRY8(local_90 * uVar638,uVar623) + SUB168(auVar83 * auVar383,8) +
            (ulong)CARRY8(uVar631,local_98 * local_98)) * 0x2000;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = local_90;
  auVar386._8_8_ = 0;
  auVar386._0_8_ = uVar621;
  uVar631 = uVar645 + uVar637;
  auVar87._8_8_ = 0;
  auVar87._0_8_ = local_98;
  auVar387._8_8_ = 0;
  auVar387._0_8_ = uVar642;
  lVar639 = SUB168(auVar84 * auVar384,8) + SUB168(auVar82 * auVar382,8) +
            (ulong)CARRY8(local_90 * uVar642,local_88 * local_88) + SUB168(auVar85 * auVar385,8) +
            (ulong)CARRY8(uVar645,uVar637);
  uVar645 = local_90 * uVar621 + uVar624;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = local_90;
  auVar388._8_8_ = 0;
  auVar388._0_8_ = local_90;
  uVar623 = uVar645 + local_98 * uVar642;
  auVar89._8_8_ = 0;
  auVar89._0_8_ = local_98;
  auVar389._8_8_ = 0;
  auVar389._0_8_ = uVar621;
  lVar636 = SUB168(auVar86 * auVar386,8) + SUB168(auVar76 * auVar376,8) +
            (ulong)CARRY8(local_90 * uVar621,uVar624) + SUB168(auVar87 * auVar387,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar642);
  uVar645 = local_90 * local_90 + local_80 * uVar638;
  uVar637 = local_98 * local_90 * 2;
  auVar90._8_8_ = 0;
  auVar90._0_8_ = local_98;
  auVar390._8_8_ = 0;
  auVar390._0_8_ = local_90 * 2;
  uVar624 = uVar645 + local_98 * uVar621;
  lVar630 = SUB168(auVar88 * auVar388,8) + SUB168(auVar78 * auVar378,8) +
            (ulong)CARRY8(local_90 * local_90,local_80 * uVar638) + SUB168(auVar89 * auVar389,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar621);
  uVar645 = local_88 * uVar638 + uVar627;
  uVar621 = uVar645 + uVar637;
  iVar620 = 4;
  lVar635 = SUB168(auVar77 * auVar377,8) + SUB168(auVar79 * auVar379,8) +
            (ulong)CARRY8(local_88 * uVar638,uVar627) + SUB168(auVar90 * auVar390,8) +
            (ulong)CARRY8(uVar645,uVar637);
  uVar645 = uVar621 + uVar626;
  if (CARRY8(uVar621,uVar626)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar624 = uVar621 >> 0x33 | lVar630 << 0xd;
  local_a8 = uVar623 + uVar624;
  if (CARRY8(uVar623,uVar624)) {
    lVar636 = lVar636 + 1;
  }
  uVar623 = local_a8 >> 0x33 | lVar636 << 0xd;
  local_a0 = uVar631 + uVar623;
  if (CARRY8(uVar631,uVar623)) {
    lVar639 = lVar639 + 1;
  }
  local_c0 = (uVar632 & 0x7ffffffffffff) + (local_a0 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_a8 = local_a8 & 0x7ffffffffffff;
  local_b8 = (uVar645 & 0x7ffffffffffff) + (local_c0 >> 0x33);
  local_a0 = local_a0 & 0x7ffffffffffff;
  local_b0 = (uVar621 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_b8 = local_b8 & 0x7ffffffffffff;
  do {
    uVar649 = local_a0 * 0x26;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = local_a8 * 0x13;
    auVar391._8_8_ = 0;
    auVar391._0_8_ = local_a8;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = local_a8;
    auVar392._8_8_ = 0;
    auVar392._0_8_ = uVar649;
    uVar641 = local_a8 * 0x13 * local_a8;
    uVar640 = local_a8 * 2;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = local_b0;
    auVar393._8_8_ = 0;
    auVar393._0_8_ = uVar649;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = local_b0;
    auVar394._8_8_ = 0;
    auVar394._0_8_ = local_a8 * 0x26;
    uVar645 = local_b0 * local_a8 * 0x26;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = local_b8;
    auVar395._8_8_ = 0;
    auVar395._0_8_ = uVar649;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = local_a0 * 0x13;
    auVar396._8_8_ = 0;
    auVar396._0_8_ = local_a0;
    uVar648 = local_a0 * 0x13 * local_a0;
    uVar631 = local_b8 * uVar649 + uVar645;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = local_b0;
    auVar397._8_8_ = 0;
    auVar397._0_8_ = local_b0;
    uVar632 = uVar631 + local_c0 * local_c0;
    uVar646 = local_b0 * 2;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = local_c0;
    auVar398._8_8_ = 0;
    auVar398._0_8_ = local_c0;
    auVar99._8_8_ = 0;
    auVar99._0_8_ = local_b8;
    auVar399._8_8_ = 0;
    auVar399._0_8_ = uVar640;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = local_c0;
    auVar400._8_8_ = 0;
    auVar400._0_8_ = local_a0 * 2;
    uVar647 = SUB168(auVar95 * auVar395,8) + SUB168(auVar94 * auVar394,8) +
              (ulong)CARRY8(local_b8 * uVar649,uVar645) + SUB168(auVar98 * auVar398,8) +
              (ulong)CARRY8(uVar631,local_c0 * local_c0);
    uVar631 = local_b8 * uVar640 + local_b0 * local_b0;
    uVar628 = local_c0 * local_a0 * 2;
    auVar101._8_8_ = 0;
    auVar101._0_8_ = local_b8;
    auVar401._8_8_ = 0;
    auVar401._0_8_ = uVar646;
    uVar645 = uVar631 + uVar628;
    auVar102._8_8_ = 0;
    auVar102._0_8_ = local_c0;
    auVar402._8_8_ = 0;
    auVar402._0_8_ = uVar640;
    uVar623 = local_b8 * uVar646 + uVar648;
    auVar103._8_8_ = 0;
    auVar103._0_8_ = local_b8;
    auVar403._8_8_ = 0;
    auVar403._0_8_ = local_b8;
    uVar624 = uVar623 + local_c0 * uVar640;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = local_c0;
    auVar404._8_8_ = 0;
    auVar404._0_8_ = uVar646;
    uVar642 = local_c0 * local_b8 * 2;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = local_c0;
    auVar405._8_8_ = 0;
    auVar405._0_8_ = local_b8 * 2;
    uVar621 = local_b8 * local_b8 + local_a8 * uVar649;
    uVar637 = uVar621 + local_c0 * uVar646;
    uVar626 = local_b0 * uVar649 + uVar641;
    uVar643 = uVar632 >> 0x33 | uVar647 * 0x2000;
    uVar627 = uVar626 + uVar642;
    uVar638 = uVar627 + uVar643;
    uVar627 = SUB168(auVar93 * auVar393,8) + SUB168(auVar91 * auVar391,8) +
              (ulong)CARRY8(local_b0 * uVar649,uVar641) + SUB168(auVar105 * auVar405,8) +
              (ulong)CARRY8(uVar626,uVar642) + (uVar647 >> 0x33) + (ulong)CARRY8(uVar627,uVar643);
    uVar642 = uVar638 >> 0x33 | uVar627 * 0x2000;
    uVar626 = uVar637 + uVar642;
    uVar621 = SUB168(auVar103 * auVar403,8) + SUB168(auVar92 * auVar392,8) +
              (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar649) + SUB168(auVar104 * auVar404,8)
              + (ulong)CARRY8(uVar621,local_c0 * uVar646) + (uVar627 >> 0x33) +
              (ulong)CARRY8(uVar637,uVar642);
    uVar637 = uVar626 >> 0x33 | uVar621 * 0x2000;
    local_a8 = uVar624 + uVar637;
    uVar623 = SUB168(auVar101 * auVar401,8) + SUB168(auVar96 * auVar396,8) +
              (ulong)CARRY8(local_b8 * uVar646,uVar648) + SUB168(auVar102 * auVar402,8) +
              (ulong)CARRY8(uVar623,local_c0 * uVar640) + (uVar621 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar637);
    uVar624 = local_a8 >> 0x33 | uVar623 * 0x2000;
    local_a8 = local_a8 & 0x7ffffffffffff;
    local_a0 = uVar645 + uVar624;
    iVar620 = iVar620 + -1;
    local_c0 = (uVar632 & 0x7ffffffffffff) +
               (local_a0 >> 0x33 |
               (SUB168(auVar99 * auVar399,8) + SUB168(auVar97 * auVar397,8) +
                (ulong)CARRY8(local_b8 * uVar640,local_b0 * local_b0) +
                SUB168(auVar100 * auVar400,8) + (ulong)CARRY8(uVar631,uVar628) + (uVar623 >> 0x33) +
               (ulong)CARRY8(uVar645,uVar624)) * 0x2000) * 0x13;
    local_b8 = (uVar638 & 0x7ffffffffffff) + (local_c0 >> 0x33);
    local_a0 = local_a0 & 0x7ffffffffffff;
    local_b0 = (uVar626 & 0x7ffffffffffff) + (local_b8 >> 0x33);
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_b8 = local_b8 & 0x7ffffffffffff;
  } while (iVar620 != 0);
  FUN_007866c0(&local_98,&local_c0,&local_98);
  uVar637 = local_78 * 0x26;
  auVar106._8_8_ = 0;
  auVar106._0_8_ = local_78 * 0x13;
  auVar406._8_8_ = 0;
  auVar406._0_8_ = local_78;
  uVar626 = local_78 * 0x13 * local_78;
  auVar107._8_8_ = 0;
  auVar107._0_8_ = local_88;
  auVar407._8_8_ = 0;
  auVar407._0_8_ = uVar637;
  auVar108._8_8_ = 0;
  auVar108._0_8_ = local_80;
  auVar408._8_8_ = 0;
  auVar408._0_8_ = uVar637;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = local_80 * 0x13;
  auVar409._8_8_ = 0;
  auVar409._0_8_ = local_80;
  uVar638 = local_80 * 0x13 * local_80;
  uVar624 = local_80 * 2;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = local_88;
  auVar410._8_8_ = 0;
  auVar410._0_8_ = local_80 * 0x26;
  uVar623 = local_88 * local_80 * 0x26;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = local_90;
  auVar411._8_8_ = 0;
  auVar411._0_8_ = uVar637;
  auVar112._8_8_ = 0;
  auVar112._0_8_ = local_88;
  auVar412._8_8_ = 0;
  auVar412._0_8_ = local_88;
  uVar631 = local_90 * uVar637 + uVar623;
  uVar621 = local_88 * 2;
  uVar632 = uVar631 + local_98 * local_98;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = local_98;
  auVar413._8_8_ = 0;
  auVar413._0_8_ = local_98;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = local_90;
  auVar414._8_8_ = 0;
  auVar414._0_8_ = uVar624;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = local_98;
  auVar415._8_8_ = 0;
  auVar415._0_8_ = local_78 * 2;
  uVar645 = local_90 * uVar624 + local_88 * local_88;
  uVar642 = local_98 * local_78 * 2;
  uVar627 = uVar632 >> 0x33 |
            (SUB168(auVar111 * auVar411,8) + SUB168(auVar110 * auVar410,8) +
             (ulong)CARRY8(local_90 * uVar637,uVar623) + SUB168(auVar113 * auVar413,8) +
            (ulong)CARRY8(uVar631,local_98 * local_98)) * 0x2000;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = local_90;
  auVar416._8_8_ = 0;
  auVar416._0_8_ = uVar621;
  uVar631 = uVar645 + uVar642;
  auVar117._8_8_ = 0;
  auVar117._0_8_ = local_98;
  auVar417._8_8_ = 0;
  auVar417._0_8_ = uVar624;
  lVar639 = SUB168(auVar114 * auVar414,8) + SUB168(auVar112 * auVar412,8) +
            (ulong)CARRY8(local_90 * uVar624,local_88 * local_88) + SUB168(auVar115 * auVar415,8) +
            (ulong)CARRY8(uVar645,uVar642);
  uVar645 = local_90 * uVar621 + uVar626;
  auVar118._8_8_ = 0;
  auVar118._0_8_ = local_90;
  auVar418._8_8_ = 0;
  auVar418._0_8_ = local_90;
  uVar623 = uVar645 + local_98 * uVar624;
  auVar119._8_8_ = 0;
  auVar119._0_8_ = local_98;
  auVar419._8_8_ = 0;
  auVar419._0_8_ = uVar621;
  lVar636 = SUB168(auVar116 * auVar416,8) + SUB168(auVar106 * auVar406,8) +
            (ulong)CARRY8(local_90 * uVar621,uVar626) + SUB168(auVar117 * auVar417,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar624);
  uVar645 = local_90 * local_90 + local_80 * uVar637;
  uVar626 = local_98 * local_90 * 2;
  auVar120._8_8_ = 0;
  auVar120._0_8_ = local_98;
  auVar420._8_8_ = 0;
  auVar420._0_8_ = local_90 * 2;
  uVar624 = uVar645 + local_98 * uVar621;
  lVar630 = SUB168(auVar118 * auVar418,8) + SUB168(auVar108 * auVar408,8) +
            (ulong)CARRY8(local_90 * local_90,local_80 * uVar637) + SUB168(auVar119 * auVar419,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar621);
  uVar645 = local_88 * uVar637 + uVar638;
  uVar621 = uVar645 + uVar626;
  iVar620 = 9;
  lVar635 = SUB168(auVar107 * auVar407,8) + SUB168(auVar109 * auVar409,8) +
            (ulong)CARRY8(local_88 * uVar637,uVar638) + SUB168(auVar120 * auVar420,8) +
            (ulong)CARRY8(uVar645,uVar626);
  uVar645 = uVar621 + uVar627;
  if (CARRY8(uVar621,uVar627)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar624 = uVar621 >> 0x33 | lVar630 << 0xd;
  local_a8 = uVar623 + uVar624;
  if (CARRY8(uVar623,uVar624)) {
    lVar636 = lVar636 + 1;
  }
  uVar623 = local_a8 >> 0x33 | lVar636 << 0xd;
  local_a0 = uVar631 + uVar623;
  if (CARRY8(uVar631,uVar623)) {
    lVar639 = lVar639 + 1;
  }
  local_c0 = (uVar632 & 0x7ffffffffffff) + (local_a0 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_a8 = local_a8 & 0x7ffffffffffff;
  local_b8 = (uVar645 & 0x7ffffffffffff) + (local_c0 >> 0x33);
  local_a0 = local_a0 & 0x7ffffffffffff;
  local_b0 = (uVar621 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_b8 = local_b8 & 0x7ffffffffffff;
  do {
    auVar121._8_8_ = 0;
    auVar121._0_8_ = local_b0;
    auVar421._8_8_ = 0;
    auVar421._0_8_ = local_b0;
    uVar641 = local_a0 * 0x26;
    auVar122._8_8_ = 0;
    auVar122._0_8_ = local_a8 * 0x13;
    auVar422._8_8_ = 0;
    auVar422._0_8_ = local_a8;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = local_a8;
    auVar423._8_8_ = 0;
    auVar423._0_8_ = uVar641;
    uVar642 = local_a8 * 0x13 * local_a8;
    uVar646 = local_a8 * 2;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = local_b0;
    auVar424._8_8_ = 0;
    auVar424._0_8_ = uVar641;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = local_b0;
    auVar425._8_8_ = 0;
    auVar425._0_8_ = local_a8 * 0x26;
    uVar645 = local_b0 * local_a8 * 0x26;
    auVar126._8_8_ = 0;
    auVar126._0_8_ = local_b8;
    auVar426._8_8_ = 0;
    auVar426._0_8_ = uVar641;
    auVar127._8_8_ = 0;
    auVar127._0_8_ = local_a0 * 0x13;
    auVar427._8_8_ = 0;
    auVar427._0_8_ = local_a0;
    uVar649 = local_a0 * 0x13 * local_a0;
    uVar631 = local_b8 * uVar641 + uVar645;
    uVar648 = local_b0 * 2;
    uVar632 = uVar631 + local_c0 * local_c0;
    auVar128._8_8_ = 0;
    auVar128._0_8_ = local_c0;
    auVar428._8_8_ = 0;
    auVar428._0_8_ = local_c0;
    auVar129._8_8_ = 0;
    auVar129._0_8_ = local_b8;
    auVar429._8_8_ = 0;
    auVar429._0_8_ = uVar646;
    auVar130._8_8_ = 0;
    auVar130._0_8_ = local_c0;
    auVar430._8_8_ = 0;
    auVar430._0_8_ = local_a0 * 2;
    uVar628 = SUB168(auVar126 * auVar426,8) + SUB168(auVar125 * auVar425,8) +
              (ulong)CARRY8(local_b8 * uVar641,uVar645) + SUB168(auVar128 * auVar428,8) +
              (ulong)CARRY8(uVar631,local_c0 * local_c0);
    uVar631 = local_b8 * uVar646 + local_b0 * local_b0;
    uVar640 = local_c0 * local_a0 * 2;
    auVar131._8_8_ = 0;
    auVar131._0_8_ = local_b8;
    auVar431._8_8_ = 0;
    auVar431._0_8_ = uVar648;
    uVar645 = uVar631 + uVar640;
    auVar132._8_8_ = 0;
    auVar132._0_8_ = local_c0;
    auVar432._8_8_ = 0;
    auVar432._0_8_ = uVar646;
    uVar623 = local_b8 * uVar648 + uVar649;
    auVar133._8_8_ = 0;
    auVar133._0_8_ = local_b8;
    auVar433._8_8_ = 0;
    auVar433._0_8_ = local_b8;
    uVar624 = uVar623 + local_c0 * uVar646;
    auVar134._8_8_ = 0;
    auVar134._0_8_ = local_c0;
    auVar434._8_8_ = 0;
    auVar434._0_8_ = uVar648;
    uVar643 = local_c0 * local_b8 * 2;
    auVar135._8_8_ = 0;
    auVar135._0_8_ = local_c0;
    auVar435._8_8_ = 0;
    auVar435._0_8_ = local_b8 * 2;
    uVar621 = local_b8 * local_b8 + local_a8 * uVar641;
    uVar637 = uVar621 + local_c0 * uVar648;
    uVar626 = local_b0 * uVar641 + uVar642;
    uVar647 = uVar632 >> 0x33 | uVar628 * 0x2000;
    uVar627 = uVar626 + uVar643;
    uVar638 = uVar627 + uVar647;
    uVar627 = SUB168(auVar124 * auVar424,8) + SUB168(auVar122 * auVar422,8) +
              (ulong)CARRY8(local_b0 * uVar641,uVar642) + SUB168(auVar135 * auVar435,8) +
              (ulong)CARRY8(uVar626,uVar643) + (uVar628 >> 0x33) + (ulong)CARRY8(uVar627,uVar647);
    uVar642 = uVar638 >> 0x33 | uVar627 * 0x2000;
    uVar626 = uVar637 + uVar642;
    uVar637 = SUB168(auVar133 * auVar433,8) + SUB168(auVar123 * auVar423,8) +
              (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar641) + SUB168(auVar134 * auVar434,8)
              + (ulong)CARRY8(uVar621,local_c0 * uVar648) + (uVar627 >> 0x33) +
              (ulong)CARRY8(uVar637,uVar642);
    uVar627 = uVar626 >> 0x33 | uVar637 * 0x2000;
    uVar621 = uVar624 + uVar627;
    uVar623 = SUB168(auVar131 * auVar431,8) + SUB168(auVar127 * auVar427,8) +
              (ulong)CARRY8(local_b8 * uVar648,uVar649) + SUB168(auVar132 * auVar432,8) +
              (ulong)CARRY8(uVar623,local_c0 * uVar646) + (uVar637 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar627);
    local_a8 = uVar621 & 0x7ffffffffffff;
    uVar624 = uVar621 >> 0x33 | uVar623 * 0x2000;
    local_a0 = uVar645 + uVar624;
    iVar620 = iVar620 + -1;
    local_c0 = (uVar632 & 0x7ffffffffffff) +
               (local_a0 >> 0x33 |
               (SUB168(auVar129 * auVar429,8) + SUB168(auVar121 * auVar421,8) +
                (ulong)CARRY8(local_b8 * uVar646,local_b0 * local_b0) +
                SUB168(auVar130 * auVar430,8) + (ulong)CARRY8(uVar631,uVar640) + (uVar623 >> 0x33) +
               (ulong)CARRY8(uVar645,uVar624)) * 0x2000) * 0x13;
    local_a0 = local_a0 & 0x7ffffffffffff;
    local_b8 = (uVar638 & 0x7ffffffffffff) + (local_c0 >> 0x33);
    local_b0 = (uVar626 & 0x7ffffffffffff) + (local_b8 >> 0x33);
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_b8 = local_b8 & 0x7ffffffffffff;
  } while (iVar620 != 0);
  FUN_007866c0(&local_c0,&local_c0,&local_98);
  uVar637 = local_a0 * 0x26;
  auVar136._8_8_ = 0;
  auVar136._0_8_ = local_a0 * 0x13;
  auVar436._8_8_ = 0;
  auVar436._0_8_ = local_a0;
  uVar626 = local_a0 * 0x13 * local_a0;
  auVar137._8_8_ = 0;
  auVar137._0_8_ = local_b0;
  auVar437._8_8_ = 0;
  auVar437._0_8_ = uVar637;
  auVar138._8_8_ = 0;
  auVar138._0_8_ = local_a8;
  auVar438._8_8_ = 0;
  auVar438._0_8_ = uVar637;
  auVar139._8_8_ = 0;
  auVar139._0_8_ = local_a8 * 0x13;
  auVar439._8_8_ = 0;
  auVar439._0_8_ = local_a8;
  uVar638 = local_a8 * 0x13 * local_a8;
  uVar624 = local_a8 * 2;
  auVar140._8_8_ = 0;
  auVar140._0_8_ = local_b0;
  auVar440._8_8_ = 0;
  auVar440._0_8_ = local_a8 * 0x26;
  uVar623 = local_b0 * local_a8 * 0x26;
  auVar141._8_8_ = 0;
  auVar141._0_8_ = local_b8;
  auVar441._8_8_ = 0;
  auVar441._0_8_ = uVar637;
  auVar142._8_8_ = 0;
  auVar142._0_8_ = local_b0;
  auVar442._8_8_ = 0;
  auVar442._0_8_ = local_b0;
  uVar631 = local_b8 * uVar637 + uVar623;
  uVar621 = local_b0 * 2;
  uVar632 = uVar631 + local_c0 * local_c0;
  auVar143._8_8_ = 0;
  auVar143._0_8_ = local_c0;
  auVar443._8_8_ = 0;
  auVar443._0_8_ = local_c0;
  auVar144._8_8_ = 0;
  auVar144._0_8_ = local_b8;
  auVar444._8_8_ = 0;
  auVar444._0_8_ = uVar624;
  auVar145._8_8_ = 0;
  auVar145._0_8_ = local_c0;
  auVar445._8_8_ = 0;
  auVar445._0_8_ = local_a0 * 2;
  uVar645 = local_b8 * uVar624 + local_b0 * local_b0;
  uVar642 = local_c0 * local_a0 * 2;
  uVar627 = uVar632 >> 0x33 |
            (SUB168(auVar141 * auVar441,8) + SUB168(auVar140 * auVar440,8) +
             (ulong)CARRY8(local_b8 * uVar637,uVar623) + SUB168(auVar143 * auVar443,8) +
            (ulong)CARRY8(uVar631,local_c0 * local_c0)) * 0x2000;
  auVar146._8_8_ = 0;
  auVar146._0_8_ = local_b8;
  auVar446._8_8_ = 0;
  auVar446._0_8_ = uVar621;
  uVar631 = uVar645 + uVar642;
  auVar147._8_8_ = 0;
  auVar147._0_8_ = local_c0;
  auVar447._8_8_ = 0;
  auVar447._0_8_ = uVar624;
  lVar639 = SUB168(auVar144 * auVar444,8) + SUB168(auVar142 * auVar442,8) +
            (ulong)CARRY8(local_b8 * uVar624,local_b0 * local_b0) + SUB168(auVar145 * auVar445,8) +
            (ulong)CARRY8(uVar645,uVar642);
  uVar645 = local_b8 * uVar621 + uVar626;
  auVar148._8_8_ = 0;
  auVar148._0_8_ = local_b8;
  auVar448._8_8_ = 0;
  auVar448._0_8_ = local_b8;
  uVar623 = uVar645 + local_c0 * uVar624;
  auVar149._8_8_ = 0;
  auVar149._0_8_ = local_c0;
  auVar449._8_8_ = 0;
  auVar449._0_8_ = uVar621;
  lVar636 = SUB168(auVar146 * auVar446,8) + SUB168(auVar136 * auVar436,8) +
            (ulong)CARRY8(local_b8 * uVar621,uVar626) + SUB168(auVar147 * auVar447,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar624);
  uVar645 = local_b8 * local_b8 + local_a8 * uVar637;
  uVar626 = local_c0 * local_b8 * 2;
  auVar150._8_8_ = 0;
  auVar150._0_8_ = local_c0;
  auVar450._8_8_ = 0;
  auVar450._0_8_ = local_b8 * 2;
  uVar624 = uVar645 + local_c0 * uVar621;
  lVar630 = SUB168(auVar148 * auVar448,8) + SUB168(auVar138 * auVar438,8) +
            (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar637) + SUB168(auVar149 * auVar449,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar621);
  uVar645 = local_b0 * uVar637 + uVar638;
  uVar621 = uVar645 + uVar626;
  iVar620 = 0x13;
  lVar635 = SUB168(auVar137 * auVar437,8) + SUB168(auVar139 * auVar439,8) +
            (ulong)CARRY8(local_b0 * uVar637,uVar638) + SUB168(auVar150 * auVar450,8) +
            (ulong)CARRY8(uVar645,uVar626);
  uVar645 = uVar621 + uVar627;
  if (CARRY8(uVar621,uVar627)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar637 = uVar621 >> 0x33 | lVar630 << 0xd;
  uVar624 = uVar623 + uVar637;
  if (CARRY8(uVar623,uVar637)) {
    lVar636 = lVar636 + 1;
  }
  uVar637 = uVar624 >> 0x33 | lVar636 << 0xd;
  uVar623 = uVar631 + uVar637;
  if (CARRY8(uVar631,uVar637)) {
    lVar639 = lVar639 + 1;
  }
  uVar632 = (uVar632 & 0x7ffffffffffff) + (uVar623 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_d8 = (undefined1 *)(uVar624 & 0x7ffffffffffff);
  uVar631 = (uVar645 & 0x7ffffffffffff) + (uVar632 >> 0x33);
  local_d0 = (undefined1 *)(uVar623 & 0x7ffffffffffff);
  puStack_e0 = (undefined1 *)((uVar621 & 0x7ffffffffffff) + (uVar631 >> 0x33));
  local_f0 = (undefined1 *)(uVar632 & 0x7ffffffffffff);
  puStack_e8 = (undefined1 *)(uVar631 & 0x7ffffffffffff);
  do {
    auVar151._8_8_ = 0;
    auVar151._0_8_ = puStack_e0;
    auVar451._8_8_ = 0;
    auVar451._0_8_ = puStack_e0;
    uVar641 = (long)local_d0 * 0x26;
    auVar152._8_8_ = 0;
    auVar152._0_8_ = (long)local_d8 * 0x13;
    auVar452._8_8_ = 0;
    auVar452._0_8_ = local_d8;
    auVar153._8_8_ = 0;
    auVar153._0_8_ = local_d8;
    auVar453._8_8_ = 0;
    auVar453._0_8_ = uVar641;
    uVar642 = (long)local_d8 * 0x13 * (long)local_d8;
    uVar646 = (long)local_d8 * 2;
    auVar154._8_8_ = 0;
    auVar154._0_8_ = puStack_e0;
    auVar454._8_8_ = 0;
    auVar454._0_8_ = uVar641;
    auVar155._8_8_ = 0;
    auVar155._0_8_ = puStack_e0;
    auVar455._8_8_ = 0;
    auVar455._0_8_ = (long)local_d8 * 0x26;
    uVar645 = (long)puStack_e0 * (long)local_d8 * 0x26;
    auVar156._8_8_ = 0;
    auVar156._0_8_ = puStack_e8;
    auVar456._8_8_ = 0;
    auVar456._0_8_ = uVar641;
    auVar157._8_8_ = 0;
    auVar157._0_8_ = (long)local_d0 * 0x13;
    auVar457._8_8_ = 0;
    auVar457._0_8_ = local_d0;
    uVar649 = (long)local_d0 * 0x13 * (long)local_d0;
    uVar631 = (long)puStack_e8 * uVar641 + uVar645;
    uVar648 = (long)puStack_e0 * 2;
    uVar632 = uVar631 + (long)local_f0 * (long)local_f0;
    auVar158._8_8_ = 0;
    auVar158._0_8_ = local_f0;
    auVar458._8_8_ = 0;
    auVar458._0_8_ = local_f0;
    auVar159._8_8_ = 0;
    auVar159._0_8_ = puStack_e8;
    auVar459._8_8_ = 0;
    auVar459._0_8_ = uVar646;
    auVar160._8_8_ = 0;
    auVar160._0_8_ = local_f0;
    auVar460._8_8_ = 0;
    auVar460._0_8_ = (long)local_d0 * 2;
    uVar628 = SUB168(auVar156 * auVar456,8) + SUB168(auVar155 * auVar455,8) +
              (ulong)CARRY8((long)puStack_e8 * uVar641,uVar645) + SUB168(auVar158 * auVar458,8) +
              (ulong)CARRY8(uVar631,(long)local_f0 * (long)local_f0);
    uVar631 = (long)puStack_e8 * uVar646 + (long)puStack_e0 * (long)puStack_e0;
    uVar640 = (long)local_f0 * (long)local_d0 * 2;
    auVar161._8_8_ = 0;
    auVar161._0_8_ = puStack_e8;
    auVar461._8_8_ = 0;
    auVar461._0_8_ = uVar648;
    uVar645 = uVar631 + uVar640;
    auVar162._8_8_ = 0;
    auVar162._0_8_ = local_f0;
    auVar462._8_8_ = 0;
    auVar462._0_8_ = uVar646;
    uVar623 = (long)puStack_e8 * uVar648 + uVar649;
    auVar163._8_8_ = 0;
    auVar163._0_8_ = puStack_e8;
    auVar463._8_8_ = 0;
    auVar463._0_8_ = puStack_e8;
    uVar624 = uVar623 + (long)local_f0 * uVar646;
    auVar164._8_8_ = 0;
    auVar164._0_8_ = local_f0;
    auVar464._8_8_ = 0;
    auVar464._0_8_ = uVar648;
    uVar643 = (long)local_f0 * (long)puStack_e8 * 2;
    auVar165._8_8_ = 0;
    auVar165._0_8_ = local_f0;
    auVar465._8_8_ = 0;
    auVar465._0_8_ = (long)puStack_e8 * 2;
    uVar621 = (long)puStack_e8 * (long)puStack_e8 + (long)local_d8 * uVar641;
    uVar637 = uVar621 + (long)local_f0 * uVar648;
    uVar626 = (long)puStack_e0 * uVar641 + uVar642;
    uVar647 = uVar632 >> 0x33 | uVar628 * 0x2000;
    uVar627 = uVar626 + uVar643;
    uVar638 = uVar627 + uVar647;
    uVar627 = SUB168(auVar154 * auVar454,8) + SUB168(auVar152 * auVar452,8) +
              (ulong)CARRY8((long)puStack_e0 * uVar641,uVar642) + SUB168(auVar165 * auVar465,8) +
              (ulong)CARRY8(uVar626,uVar643) + (uVar628 >> 0x33) + (ulong)CARRY8(uVar627,uVar647);
    uVar642 = uVar638 >> 0x33 | uVar627 * 0x2000;
    uVar626 = uVar637 + uVar642;
    uVar637 = SUB168(auVar163 * auVar463,8) + SUB168(auVar153 * auVar453,8) +
              (ulong)CARRY8((long)puStack_e8 * (long)puStack_e8,(long)local_d8 * uVar641) +
              SUB168(auVar164 * auVar464,8) + (ulong)CARRY8(uVar621,(long)local_f0 * uVar648) +
              (uVar627 >> 0x33) + (ulong)CARRY8(uVar637,uVar642);
    uVar627 = uVar626 >> 0x33 | uVar637 * 0x2000;
    uVar621 = uVar624 + uVar627;
    uVar624 = SUB168(auVar161 * auVar461,8) + SUB168(auVar157 * auVar457,8) +
              (ulong)CARRY8((long)puStack_e8 * uVar648,uVar649) + SUB168(auVar162 * auVar462,8) +
              (ulong)CARRY8(uVar623,(long)local_f0 * uVar646) + (uVar637 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar627);
    local_d8 = (undefined1 *)(uVar621 & 0x7ffffffffffff);
    uVar621 = uVar621 >> 0x33 | uVar624 * 0x2000;
    uVar623 = uVar645 + uVar621;
    iVar620 = iVar620 + -1;
    uVar632 = (uVar632 & 0x7ffffffffffff) +
              (uVar623 >> 0x33 |
              (SUB168(auVar159 * auVar459,8) + SUB168(auVar151 * auVar451,8) +
               (ulong)CARRY8((long)puStack_e8 * uVar646,(long)puStack_e0 * (long)puStack_e0) +
               SUB168(auVar160 * auVar460,8) + (ulong)CARRY8(uVar631,uVar640) + (uVar624 >> 0x33) +
              (ulong)CARRY8(uVar645,uVar621)) * 0x2000) * 0x13;
    local_d0 = (undefined1 *)(uVar623 & 0x7ffffffffffff);
    uVar631 = (uVar638 & 0x7ffffffffffff) + (uVar632 >> 0x33);
    puStack_e0 = (undefined1 *)((uVar626 & 0x7ffffffffffff) + (uVar631 >> 0x33));
    local_f0 = (undefined1 *)(uVar632 & 0x7ffffffffffff);
    puStack_e8 = (undefined1 *)(uVar631 & 0x7ffffffffffff);
  } while (iVar620 != 0);
  FUN_007866c0(&local_c0,&local_f0,&local_c0);
  uVar637 = local_a0 * 0x26;
  auVar166._8_8_ = 0;
  auVar166._0_8_ = local_a0 * 0x13;
  auVar466._8_8_ = 0;
  auVar466._0_8_ = local_a0;
  uVar626 = local_a0 * 0x13 * local_a0;
  auVar167._8_8_ = 0;
  auVar167._0_8_ = local_b0;
  auVar467._8_8_ = 0;
  auVar467._0_8_ = uVar637;
  auVar168._8_8_ = 0;
  auVar168._0_8_ = local_a8;
  auVar468._8_8_ = 0;
  auVar468._0_8_ = uVar637;
  auVar169._8_8_ = 0;
  auVar169._0_8_ = local_a8 * 0x13;
  auVar469._8_8_ = 0;
  auVar469._0_8_ = local_a8;
  uVar638 = local_a8 * 0x13 * local_a8;
  uVar624 = local_a8 * 2;
  auVar170._8_8_ = 0;
  auVar170._0_8_ = local_b0;
  auVar470._8_8_ = 0;
  auVar470._0_8_ = local_a8 * 0x26;
  uVar623 = local_b0 * local_a8 * 0x26;
  auVar171._8_8_ = 0;
  auVar171._0_8_ = local_b8;
  auVar471._8_8_ = 0;
  auVar471._0_8_ = uVar637;
  auVar172._8_8_ = 0;
  auVar172._0_8_ = local_b0;
  auVar472._8_8_ = 0;
  auVar472._0_8_ = local_b0;
  uVar631 = local_b8 * uVar637 + uVar623;
  uVar621 = local_b0 * 2;
  uVar632 = uVar631 + local_c0 * local_c0;
  auVar173._8_8_ = 0;
  auVar173._0_8_ = local_c0;
  auVar473._8_8_ = 0;
  auVar473._0_8_ = local_c0;
  auVar174._8_8_ = 0;
  auVar174._0_8_ = local_b8;
  auVar474._8_8_ = 0;
  auVar474._0_8_ = uVar624;
  auVar175._8_8_ = 0;
  auVar175._0_8_ = local_c0;
  auVar475._8_8_ = 0;
  auVar475._0_8_ = local_a0 * 2;
  uVar645 = local_b8 * uVar624 + local_b0 * local_b0;
  uVar642 = local_c0 * local_a0 * 2;
  uVar627 = uVar632 >> 0x33 |
            (SUB168(auVar171 * auVar471,8) + SUB168(auVar170 * auVar470,8) +
             (ulong)CARRY8(local_b8 * uVar637,uVar623) + SUB168(auVar173 * auVar473,8) +
            (ulong)CARRY8(uVar631,local_c0 * local_c0)) * 0x2000;
  auVar176._8_8_ = 0;
  auVar176._0_8_ = local_b8;
  auVar476._8_8_ = 0;
  auVar476._0_8_ = uVar621;
  uVar631 = uVar645 + uVar642;
  auVar177._8_8_ = 0;
  auVar177._0_8_ = local_c0;
  auVar477._8_8_ = 0;
  auVar477._0_8_ = uVar624;
  lVar639 = SUB168(auVar174 * auVar474,8) + SUB168(auVar172 * auVar472,8) +
            (ulong)CARRY8(local_b8 * uVar624,local_b0 * local_b0) + SUB168(auVar175 * auVar475,8) +
            (ulong)CARRY8(uVar645,uVar642);
  uVar645 = local_b8 * uVar621 + uVar626;
  auVar178._8_8_ = 0;
  auVar178._0_8_ = local_b8;
  auVar478._8_8_ = 0;
  auVar478._0_8_ = local_b8;
  uVar623 = uVar645 + local_c0 * uVar624;
  auVar179._8_8_ = 0;
  auVar179._0_8_ = local_c0;
  auVar479._8_8_ = 0;
  auVar479._0_8_ = uVar621;
  lVar636 = SUB168(auVar176 * auVar476,8) + SUB168(auVar166 * auVar466,8) +
            (ulong)CARRY8(local_b8 * uVar621,uVar626) + SUB168(auVar177 * auVar477,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar624);
  uVar645 = local_b8 * local_b8 + local_a8 * uVar637;
  uVar626 = local_c0 * local_b8 * 2;
  auVar180._8_8_ = 0;
  auVar180._0_8_ = local_c0;
  auVar480._8_8_ = 0;
  auVar480._0_8_ = local_b8 * 2;
  uVar624 = uVar645 + local_c0 * uVar621;
  lVar630 = SUB168(auVar178 * auVar478,8) + SUB168(auVar168 * auVar468,8) +
            (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar637) + SUB168(auVar179 * auVar479,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar621);
  uVar645 = local_b0 * uVar637 + uVar638;
  uVar621 = uVar645 + uVar626;
  iVar620 = 9;
  lVar635 = SUB168(auVar167 * auVar467,8) + SUB168(auVar169 * auVar469,8) +
            (ulong)CARRY8(local_b0 * uVar637,uVar638) + SUB168(auVar180 * auVar480,8) +
            (ulong)CARRY8(uVar645,uVar626);
  uVar645 = uVar621 + uVar627;
  if (CARRY8(uVar621,uVar627)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar624 = uVar621 >> 0x33 | lVar630 << 0xd;
  local_a8 = uVar623 + uVar624;
  if (CARRY8(uVar623,uVar624)) {
    lVar636 = lVar636 + 1;
  }
  uVar623 = local_a8 >> 0x33 | lVar636 << 0xd;
  local_a0 = uVar631 + uVar623;
  if (CARRY8(uVar631,uVar623)) {
    lVar639 = lVar639 + 1;
  }
  local_c0 = (uVar632 & 0x7ffffffffffff) + (local_a0 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_a8 = local_a8 & 0x7ffffffffffff;
  local_b8 = (uVar645 & 0x7ffffffffffff) + (local_c0 >> 0x33);
  local_a0 = local_a0 & 0x7ffffffffffff;
  local_b0 = (uVar621 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_b8 = local_b8 & 0x7ffffffffffff;
  do {
    auVar181._8_8_ = 0;
    auVar181._0_8_ = local_b0;
    auVar481._8_8_ = 0;
    auVar481._0_8_ = local_b0;
    uVar641 = local_a0 * 0x26;
    auVar182._8_8_ = 0;
    auVar182._0_8_ = local_a8 * 0x13;
    auVar482._8_8_ = 0;
    auVar482._0_8_ = local_a8;
    auVar183._8_8_ = 0;
    auVar183._0_8_ = local_a8;
    auVar483._8_8_ = 0;
    auVar483._0_8_ = uVar641;
    uVar642 = local_a8 * 0x13 * local_a8;
    uVar646 = local_a8 * 2;
    auVar184._8_8_ = 0;
    auVar184._0_8_ = local_b0;
    auVar484._8_8_ = 0;
    auVar484._0_8_ = uVar641;
    auVar185._8_8_ = 0;
    auVar185._0_8_ = local_b0;
    auVar485._8_8_ = 0;
    auVar485._0_8_ = local_a8 * 0x26;
    uVar645 = local_b0 * local_a8 * 0x26;
    auVar186._8_8_ = 0;
    auVar186._0_8_ = local_b8;
    auVar486._8_8_ = 0;
    auVar486._0_8_ = uVar641;
    auVar187._8_8_ = 0;
    auVar187._0_8_ = local_a0 * 0x13;
    auVar487._8_8_ = 0;
    auVar487._0_8_ = local_a0;
    uVar649 = local_a0 * 0x13 * local_a0;
    uVar631 = local_b8 * uVar641 + uVar645;
    uVar648 = local_b0 * 2;
    uVar632 = uVar631 + local_c0 * local_c0;
    auVar188._8_8_ = 0;
    auVar188._0_8_ = local_c0;
    auVar488._8_8_ = 0;
    auVar488._0_8_ = local_c0;
    auVar189._8_8_ = 0;
    auVar189._0_8_ = local_b8;
    auVar489._8_8_ = 0;
    auVar489._0_8_ = uVar646;
    auVar190._8_8_ = 0;
    auVar190._0_8_ = local_c0;
    auVar490._8_8_ = 0;
    auVar490._0_8_ = local_a0 * 2;
    uVar628 = SUB168(auVar186 * auVar486,8) + SUB168(auVar185 * auVar485,8) +
              (ulong)CARRY8(local_b8 * uVar641,uVar645) + SUB168(auVar188 * auVar488,8) +
              (ulong)CARRY8(uVar631,local_c0 * local_c0);
    uVar631 = local_b8 * uVar646 + local_b0 * local_b0;
    uVar640 = local_c0 * local_a0 * 2;
    auVar191._8_8_ = 0;
    auVar191._0_8_ = local_b8;
    auVar491._8_8_ = 0;
    auVar491._0_8_ = uVar648;
    uVar645 = uVar631 + uVar640;
    auVar192._8_8_ = 0;
    auVar192._0_8_ = local_c0;
    auVar492._8_8_ = 0;
    auVar492._0_8_ = uVar646;
    uVar623 = local_b8 * uVar648 + uVar649;
    auVar193._8_8_ = 0;
    auVar193._0_8_ = local_b8;
    auVar493._8_8_ = 0;
    auVar493._0_8_ = local_b8;
    uVar624 = uVar623 + local_c0 * uVar646;
    auVar194._8_8_ = 0;
    auVar194._0_8_ = local_c0;
    auVar494._8_8_ = 0;
    auVar494._0_8_ = uVar648;
    uVar643 = local_c0 * local_b8 * 2;
    auVar195._8_8_ = 0;
    auVar195._0_8_ = local_c0;
    auVar495._8_8_ = 0;
    auVar495._0_8_ = local_b8 * 2;
    uVar621 = local_b8 * local_b8 + local_a8 * uVar641;
    uVar637 = uVar621 + local_c0 * uVar648;
    uVar626 = local_b0 * uVar641 + uVar642;
    uVar647 = uVar632 >> 0x33 | uVar628 * 0x2000;
    uVar627 = uVar626 + uVar643;
    uVar638 = uVar627 + uVar647;
    uVar627 = SUB168(auVar184 * auVar484,8) + SUB168(auVar182 * auVar482,8) +
              (ulong)CARRY8(local_b0 * uVar641,uVar642) + SUB168(auVar195 * auVar495,8) +
              (ulong)CARRY8(uVar626,uVar643) + (uVar628 >> 0x33) + (ulong)CARRY8(uVar627,uVar647);
    uVar642 = uVar638 >> 0x33 | uVar627 * 0x2000;
    uVar626 = uVar637 + uVar642;
    uVar637 = SUB168(auVar193 * auVar493,8) + SUB168(auVar183 * auVar483,8) +
              (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar641) + SUB168(auVar194 * auVar494,8)
              + (ulong)CARRY8(uVar621,local_c0 * uVar648) + (uVar627 >> 0x33) +
              (ulong)CARRY8(uVar637,uVar642);
    uVar627 = uVar626 >> 0x33 | uVar637 * 0x2000;
    uVar621 = uVar624 + uVar627;
    uVar623 = SUB168(auVar191 * auVar491,8) + SUB168(auVar187 * auVar487,8) +
              (ulong)CARRY8(local_b8 * uVar648,uVar649) + SUB168(auVar192 * auVar492,8) +
              (ulong)CARRY8(uVar623,local_c0 * uVar646) + (uVar637 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar627);
    local_a8 = uVar621 & 0x7ffffffffffff;
    uVar624 = uVar621 >> 0x33 | uVar623 * 0x2000;
    local_a0 = uVar645 + uVar624;
    iVar620 = iVar620 + -1;
    local_c0 = (uVar632 & 0x7ffffffffffff) +
               (local_a0 >> 0x33 |
               (SUB168(auVar189 * auVar489,8) + SUB168(auVar181 * auVar481,8) +
                (ulong)CARRY8(local_b8 * uVar646,local_b0 * local_b0) +
                SUB168(auVar190 * auVar490,8) + (ulong)CARRY8(uVar631,uVar640) + (uVar623 >> 0x33) +
               (ulong)CARRY8(uVar645,uVar624)) * 0x2000) * 0x13;
    local_a0 = local_a0 & 0x7ffffffffffff;
    local_b8 = (uVar638 & 0x7ffffffffffff) + (local_c0 >> 0x33);
    local_b0 = (uVar626 & 0x7ffffffffffff) + (local_b8 >> 0x33);
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_b8 = local_b8 & 0x7ffffffffffff;
  } while (iVar620 != 0);
  FUN_007866c0(&local_98,&local_c0,&local_98);
  uVar637 = local_78 * 0x26;
  auVar196._8_8_ = 0;
  auVar196._0_8_ = local_78 * 0x13;
  auVar496._8_8_ = 0;
  auVar496._0_8_ = local_78;
  uVar626 = local_78 * 0x13 * local_78;
  auVar197._8_8_ = 0;
  auVar197._0_8_ = local_88;
  auVar497._8_8_ = 0;
  auVar497._0_8_ = uVar637;
  auVar198._8_8_ = 0;
  auVar198._0_8_ = local_80;
  auVar498._8_8_ = 0;
  auVar498._0_8_ = uVar637;
  auVar199._8_8_ = 0;
  auVar199._0_8_ = local_80 * 0x13;
  auVar499._8_8_ = 0;
  auVar499._0_8_ = local_80;
  uVar638 = local_80 * 0x13 * local_80;
  uVar624 = local_80 * 2;
  auVar200._8_8_ = 0;
  auVar200._0_8_ = local_88;
  auVar500._8_8_ = 0;
  auVar500._0_8_ = local_80 * 0x26;
  uVar623 = local_88 * local_80 * 0x26;
  auVar201._8_8_ = 0;
  auVar201._0_8_ = local_90;
  auVar501._8_8_ = 0;
  auVar501._0_8_ = uVar637;
  auVar202._8_8_ = 0;
  auVar202._0_8_ = local_88;
  auVar502._8_8_ = 0;
  auVar502._0_8_ = local_88;
  uVar631 = local_90 * uVar637 + uVar623;
  uVar621 = local_88 * 2;
  uVar632 = uVar631 + local_98 * local_98;
  auVar203._8_8_ = 0;
  auVar203._0_8_ = local_98;
  auVar503._8_8_ = 0;
  auVar503._0_8_ = local_98;
  auVar204._8_8_ = 0;
  auVar204._0_8_ = local_90;
  auVar504._8_8_ = 0;
  auVar504._0_8_ = uVar624;
  auVar205._8_8_ = 0;
  auVar205._0_8_ = local_98;
  auVar505._8_8_ = 0;
  auVar505._0_8_ = local_78 * 2;
  uVar645 = local_90 * uVar624 + local_88 * local_88;
  uVar642 = local_98 * local_78 * 2;
  uVar627 = uVar632 >> 0x33 |
            (SUB168(auVar201 * auVar501,8) + SUB168(auVar200 * auVar500,8) +
             (ulong)CARRY8(local_90 * uVar637,uVar623) + SUB168(auVar203 * auVar503,8) +
            (ulong)CARRY8(uVar631,local_98 * local_98)) * 0x2000;
  auVar206._8_8_ = 0;
  auVar206._0_8_ = local_90;
  auVar506._8_8_ = 0;
  auVar506._0_8_ = uVar621;
  uVar631 = uVar645 + uVar642;
  auVar207._8_8_ = 0;
  auVar207._0_8_ = local_98;
  auVar507._8_8_ = 0;
  auVar507._0_8_ = uVar624;
  lVar639 = SUB168(auVar204 * auVar504,8) + SUB168(auVar202 * auVar502,8) +
            (ulong)CARRY8(local_90 * uVar624,local_88 * local_88) + SUB168(auVar205 * auVar505,8) +
            (ulong)CARRY8(uVar645,uVar642);
  uVar645 = local_90 * uVar621 + uVar626;
  auVar208._8_8_ = 0;
  auVar208._0_8_ = local_90;
  auVar508._8_8_ = 0;
  auVar508._0_8_ = local_90;
  uVar623 = uVar645 + local_98 * uVar624;
  auVar209._8_8_ = 0;
  auVar209._0_8_ = local_98;
  auVar509._8_8_ = 0;
  auVar509._0_8_ = uVar621;
  lVar636 = SUB168(auVar206 * auVar506,8) + SUB168(auVar196 * auVar496,8) +
            (ulong)CARRY8(local_90 * uVar621,uVar626) + SUB168(auVar207 * auVar507,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar624);
  uVar645 = local_90 * local_90 + local_80 * uVar637;
  uVar626 = local_98 * local_90 * 2;
  auVar210._8_8_ = 0;
  auVar210._0_8_ = local_98;
  auVar510._8_8_ = 0;
  auVar510._0_8_ = local_90 * 2;
  uVar624 = uVar645 + local_98 * uVar621;
  lVar630 = SUB168(auVar208 * auVar508,8) + SUB168(auVar198 * auVar498,8) +
            (ulong)CARRY8(local_90 * local_90,local_80 * uVar637) + SUB168(auVar209 * auVar509,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar621);
  uVar645 = local_88 * uVar637 + uVar638;
  uVar621 = uVar645 + uVar626;
  iVar620 = 0x31;
  lVar635 = SUB168(auVar197 * auVar497,8) + SUB168(auVar199 * auVar499,8) +
            (ulong)CARRY8(local_88 * uVar637,uVar638) + SUB168(auVar210 * auVar510,8) +
            (ulong)CARRY8(uVar645,uVar626);
  uVar645 = uVar621 + uVar627;
  if (CARRY8(uVar621,uVar627)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar624 = uVar621 >> 0x33 | lVar630 << 0xd;
  local_a8 = uVar623 + uVar624;
  if (CARRY8(uVar623,uVar624)) {
    lVar636 = lVar636 + 1;
  }
  uVar623 = local_a8 >> 0x33 | lVar636 << 0xd;
  local_a0 = uVar631 + uVar623;
  if (CARRY8(uVar631,uVar623)) {
    lVar639 = lVar639 + 1;
  }
  local_c0 = (uVar632 & 0x7ffffffffffff) + (local_a0 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_a8 = local_a8 & 0x7ffffffffffff;
  local_b8 = (uVar645 & 0x7ffffffffffff) + (local_c0 >> 0x33);
  local_a0 = local_a0 & 0x7ffffffffffff;
  local_b0 = (uVar621 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_b8 = local_b8 & 0x7ffffffffffff;
  do {
    auVar211._8_8_ = 0;
    auVar211._0_8_ = local_b0;
    auVar511._8_8_ = 0;
    auVar511._0_8_ = local_b0;
    uVar641 = local_a0 * 0x26;
    auVar212._8_8_ = 0;
    auVar212._0_8_ = local_a8 * 0x13;
    auVar512._8_8_ = 0;
    auVar512._0_8_ = local_a8;
    auVar213._8_8_ = 0;
    auVar213._0_8_ = local_a8;
    auVar513._8_8_ = 0;
    auVar513._0_8_ = uVar641;
    uVar642 = local_a8 * 0x13 * local_a8;
    uVar646 = local_a8 * 2;
    auVar214._8_8_ = 0;
    auVar214._0_8_ = local_b0;
    auVar514._8_8_ = 0;
    auVar514._0_8_ = uVar641;
    auVar215._8_8_ = 0;
    auVar215._0_8_ = local_b0;
    auVar515._8_8_ = 0;
    auVar515._0_8_ = local_a8 * 0x26;
    uVar645 = local_b0 * local_a8 * 0x26;
    auVar216._8_8_ = 0;
    auVar216._0_8_ = local_b8;
    auVar516._8_8_ = 0;
    auVar516._0_8_ = uVar641;
    auVar217._8_8_ = 0;
    auVar217._0_8_ = local_a0 * 0x13;
    auVar517._8_8_ = 0;
    auVar517._0_8_ = local_a0;
    uVar649 = local_a0 * 0x13 * local_a0;
    uVar631 = local_b8 * uVar641 + uVar645;
    uVar648 = local_b0 * 2;
    uVar632 = uVar631 + local_c0 * local_c0;
    auVar218._8_8_ = 0;
    auVar218._0_8_ = local_c0;
    auVar518._8_8_ = 0;
    auVar518._0_8_ = local_c0;
    auVar219._8_8_ = 0;
    auVar219._0_8_ = local_b8;
    auVar519._8_8_ = 0;
    auVar519._0_8_ = uVar646;
    auVar220._8_8_ = 0;
    auVar220._0_8_ = local_c0;
    auVar520._8_8_ = 0;
    auVar520._0_8_ = local_a0 * 2;
    uVar628 = SUB168(auVar216 * auVar516,8) + SUB168(auVar215 * auVar515,8) +
              (ulong)CARRY8(local_b8 * uVar641,uVar645) + SUB168(auVar218 * auVar518,8) +
              (ulong)CARRY8(uVar631,local_c0 * local_c0);
    uVar631 = local_b8 * uVar646 + local_b0 * local_b0;
    uVar640 = local_c0 * local_a0 * 2;
    auVar221._8_8_ = 0;
    auVar221._0_8_ = local_b8;
    auVar521._8_8_ = 0;
    auVar521._0_8_ = uVar648;
    uVar645 = uVar631 + uVar640;
    auVar222._8_8_ = 0;
    auVar222._0_8_ = local_c0;
    auVar522._8_8_ = 0;
    auVar522._0_8_ = uVar646;
    uVar623 = local_b8 * uVar648 + uVar649;
    auVar223._8_8_ = 0;
    auVar223._0_8_ = local_b8;
    auVar523._8_8_ = 0;
    auVar523._0_8_ = local_b8;
    uVar624 = uVar623 + local_c0 * uVar646;
    auVar224._8_8_ = 0;
    auVar224._0_8_ = local_c0;
    auVar524._8_8_ = 0;
    auVar524._0_8_ = uVar648;
    uVar643 = local_c0 * local_b8 * 2;
    auVar225._8_8_ = 0;
    auVar225._0_8_ = local_c0;
    auVar525._8_8_ = 0;
    auVar525._0_8_ = local_b8 * 2;
    uVar621 = local_b8 * local_b8 + local_a8 * uVar641;
    uVar637 = uVar621 + local_c0 * uVar648;
    uVar626 = local_b0 * uVar641 + uVar642;
    uVar647 = uVar632 >> 0x33 | uVar628 * 0x2000;
    uVar627 = uVar626 + uVar643;
    uVar638 = uVar627 + uVar647;
    uVar627 = SUB168(auVar214 * auVar514,8) + SUB168(auVar212 * auVar512,8) +
              (ulong)CARRY8(local_b0 * uVar641,uVar642) + SUB168(auVar225 * auVar525,8) +
              (ulong)CARRY8(uVar626,uVar643) + (uVar628 >> 0x33) + (ulong)CARRY8(uVar627,uVar647);
    uVar642 = uVar638 >> 0x33 | uVar627 * 0x2000;
    uVar626 = uVar637 + uVar642;
    uVar637 = SUB168(auVar223 * auVar523,8) + SUB168(auVar213 * auVar513,8) +
              (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar641) + SUB168(auVar224 * auVar524,8)
              + (ulong)CARRY8(uVar621,local_c0 * uVar648) + (uVar627 >> 0x33) +
              (ulong)CARRY8(uVar637,uVar642);
    uVar627 = uVar626 >> 0x33 | uVar637 * 0x2000;
    uVar621 = uVar624 + uVar627;
    uVar623 = SUB168(auVar221 * auVar521,8) + SUB168(auVar217 * auVar517,8) +
              (ulong)CARRY8(local_b8 * uVar648,uVar649) + SUB168(auVar222 * auVar522,8) +
              (ulong)CARRY8(uVar623,local_c0 * uVar646) + (uVar637 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar627);
    local_a8 = uVar621 & 0x7ffffffffffff;
    uVar624 = uVar621 >> 0x33 | uVar623 * 0x2000;
    local_a0 = uVar645 + uVar624;
    iVar620 = iVar620 + -1;
    local_c0 = (uVar632 & 0x7ffffffffffff) +
               (local_a0 >> 0x33 |
               (SUB168(auVar219 * auVar519,8) + SUB168(auVar211 * auVar511,8) +
                (ulong)CARRY8(local_b8 * uVar646,local_b0 * local_b0) +
                SUB168(auVar220 * auVar520,8) + (ulong)CARRY8(uVar631,uVar640) + (uVar623 >> 0x33) +
               (ulong)CARRY8(uVar645,uVar624)) * 0x2000) * 0x13;
    local_a0 = local_a0 & 0x7ffffffffffff;
    local_b8 = (uVar638 & 0x7ffffffffffff) + (local_c0 >> 0x33);
    local_b0 = (uVar626 & 0x7ffffffffffff) + (local_b8 >> 0x33);
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_b8 = local_b8 & 0x7ffffffffffff;
  } while (iVar620 != 0);
  FUN_007866c0(&local_c0,&local_c0,&local_98);
  uVar637 = local_a0 * 0x26;
  auVar226._8_8_ = 0;
  auVar226._0_8_ = local_a0 * 0x13;
  auVar526._8_8_ = 0;
  auVar526._0_8_ = local_a0;
  uVar626 = local_a0 * 0x13 * local_a0;
  auVar227._8_8_ = 0;
  auVar227._0_8_ = local_b0;
  auVar527._8_8_ = 0;
  auVar527._0_8_ = uVar637;
  auVar228._8_8_ = 0;
  auVar228._0_8_ = local_a8;
  auVar528._8_8_ = 0;
  auVar528._0_8_ = uVar637;
  auVar229._8_8_ = 0;
  auVar229._0_8_ = local_a8 * 0x13;
  auVar529._8_8_ = 0;
  auVar529._0_8_ = local_a8;
  uVar638 = local_a8 * 0x13 * local_a8;
  uVar624 = local_a8 * 2;
  auVar230._8_8_ = 0;
  auVar230._0_8_ = local_b0;
  auVar530._8_8_ = 0;
  auVar530._0_8_ = local_a8 * 0x26;
  uVar623 = local_b0 * local_a8 * 0x26;
  auVar231._8_8_ = 0;
  auVar231._0_8_ = local_b8;
  auVar531._8_8_ = 0;
  auVar531._0_8_ = uVar637;
  auVar232._8_8_ = 0;
  auVar232._0_8_ = local_b0;
  auVar532._8_8_ = 0;
  auVar532._0_8_ = local_b0;
  uVar631 = local_b8 * uVar637 + uVar623;
  uVar621 = local_b0 * 2;
  uVar632 = uVar631 + local_c0 * local_c0;
  auVar233._8_8_ = 0;
  auVar233._0_8_ = local_c0;
  auVar533._8_8_ = 0;
  auVar533._0_8_ = local_c0;
  auVar234._8_8_ = 0;
  auVar234._0_8_ = local_b8;
  auVar534._8_8_ = 0;
  auVar534._0_8_ = uVar624;
  auVar235._8_8_ = 0;
  auVar235._0_8_ = local_c0;
  auVar535._8_8_ = 0;
  auVar535._0_8_ = local_a0 * 2;
  uVar645 = local_b8 * uVar624 + local_b0 * local_b0;
  uVar642 = local_c0 * local_a0 * 2;
  uVar627 = uVar632 >> 0x33 |
            (SUB168(auVar231 * auVar531,8) + SUB168(auVar230 * auVar530,8) +
             (ulong)CARRY8(local_b8 * uVar637,uVar623) + SUB168(auVar233 * auVar533,8) +
            (ulong)CARRY8(uVar631,local_c0 * local_c0)) * 0x2000;
  auVar236._8_8_ = 0;
  auVar236._0_8_ = local_b8;
  auVar536._8_8_ = 0;
  auVar536._0_8_ = uVar621;
  uVar631 = uVar645 + uVar642;
  auVar237._8_8_ = 0;
  auVar237._0_8_ = local_c0;
  auVar537._8_8_ = 0;
  auVar537._0_8_ = uVar624;
  lVar639 = SUB168(auVar234 * auVar534,8) + SUB168(auVar232 * auVar532,8) +
            (ulong)CARRY8(local_b8 * uVar624,local_b0 * local_b0) + SUB168(auVar235 * auVar535,8) +
            (ulong)CARRY8(uVar645,uVar642);
  uVar645 = local_b8 * uVar621 + uVar626;
  auVar238._8_8_ = 0;
  auVar238._0_8_ = local_b8;
  auVar538._8_8_ = 0;
  auVar538._0_8_ = local_b8;
  uVar623 = uVar645 + local_c0 * uVar624;
  auVar239._8_8_ = 0;
  auVar239._0_8_ = local_c0;
  auVar539._8_8_ = 0;
  auVar539._0_8_ = uVar621;
  lVar636 = SUB168(auVar236 * auVar536,8) + SUB168(auVar226 * auVar526,8) +
            (ulong)CARRY8(local_b8 * uVar621,uVar626) + SUB168(auVar237 * auVar537,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar624);
  uVar645 = local_b8 * local_b8 + local_a8 * uVar637;
  uVar626 = local_c0 * local_b8 * 2;
  auVar240._8_8_ = 0;
  auVar240._0_8_ = local_c0;
  auVar540._8_8_ = 0;
  auVar540._0_8_ = local_b8 * 2;
  uVar624 = uVar645 + local_c0 * uVar621;
  lVar630 = SUB168(auVar238 * auVar538,8) + SUB168(auVar228 * auVar528,8) +
            (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar637) + SUB168(auVar239 * auVar539,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar621);
  uVar645 = local_b0 * uVar637 + uVar638;
  uVar621 = uVar645 + uVar626;
  iVar620 = 99;
  lVar635 = SUB168(auVar227 * auVar527,8) + SUB168(auVar229 * auVar529,8) +
            (ulong)CARRY8(local_b0 * uVar637,uVar638) + SUB168(auVar240 * auVar540,8) +
            (ulong)CARRY8(uVar645,uVar626);
  uVar645 = uVar621 + uVar627;
  if (CARRY8(uVar621,uVar627)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar637 = uVar621 >> 0x33 | lVar630 << 0xd;
  uVar624 = uVar623 + uVar637;
  if (CARRY8(uVar623,uVar637)) {
    lVar636 = lVar636 + 1;
  }
  uVar637 = uVar624 >> 0x33 | lVar636 << 0xd;
  uVar623 = uVar631 + uVar637;
  if (CARRY8(uVar631,uVar637)) {
    lVar639 = lVar639 + 1;
  }
  uVar632 = (uVar632 & 0x7ffffffffffff) + (uVar623 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_d8 = (undefined1 *)(uVar624 & 0x7ffffffffffff);
  uVar631 = (uVar645 & 0x7ffffffffffff) + (uVar632 >> 0x33);
  local_d0 = (undefined1 *)(uVar623 & 0x7ffffffffffff);
  puStack_e0 = (undefined1 *)((uVar621 & 0x7ffffffffffff) + (uVar631 >> 0x33));
  local_f0 = (undefined1 *)(uVar632 & 0x7ffffffffffff);
  puStack_e8 = (undefined1 *)(uVar631 & 0x7ffffffffffff);
  do {
    auVar241._8_8_ = 0;
    auVar241._0_8_ = puStack_e0;
    auVar541._8_8_ = 0;
    auVar541._0_8_ = puStack_e0;
    uVar641 = (long)local_d0 * 0x26;
    auVar242._8_8_ = 0;
    auVar242._0_8_ = (long)local_d8 * 0x13;
    auVar542._8_8_ = 0;
    auVar542._0_8_ = local_d8;
    auVar243._8_8_ = 0;
    auVar243._0_8_ = local_d8;
    auVar543._8_8_ = 0;
    auVar543._0_8_ = uVar641;
    uVar642 = (long)local_d8 * 0x13 * (long)local_d8;
    uVar646 = (long)local_d8 * 2;
    auVar244._8_8_ = 0;
    auVar244._0_8_ = puStack_e0;
    auVar544._8_8_ = 0;
    auVar544._0_8_ = uVar641;
    auVar245._8_8_ = 0;
    auVar245._0_8_ = puStack_e0;
    auVar545._8_8_ = 0;
    auVar545._0_8_ = (long)local_d8 * 0x26;
    uVar645 = (long)puStack_e0 * (long)local_d8 * 0x26;
    auVar246._8_8_ = 0;
    auVar246._0_8_ = puStack_e8;
    auVar546._8_8_ = 0;
    auVar546._0_8_ = uVar641;
    auVar247._8_8_ = 0;
    auVar247._0_8_ = (long)local_d0 * 0x13;
    auVar547._8_8_ = 0;
    auVar547._0_8_ = local_d0;
    uVar649 = (long)local_d0 * 0x13 * (long)local_d0;
    uVar631 = (long)puStack_e8 * uVar641 + uVar645;
    uVar648 = (long)puStack_e0 * 2;
    uVar632 = uVar631 + (long)local_f0 * (long)local_f0;
    auVar248._8_8_ = 0;
    auVar248._0_8_ = local_f0;
    auVar548._8_8_ = 0;
    auVar548._0_8_ = local_f0;
    auVar249._8_8_ = 0;
    auVar249._0_8_ = puStack_e8;
    auVar549._8_8_ = 0;
    auVar549._0_8_ = uVar646;
    auVar250._8_8_ = 0;
    auVar250._0_8_ = local_f0;
    auVar550._8_8_ = 0;
    auVar550._0_8_ = (long)local_d0 * 2;
    uVar628 = SUB168(auVar246 * auVar546,8) + SUB168(auVar245 * auVar545,8) +
              (ulong)CARRY8((long)puStack_e8 * uVar641,uVar645) + SUB168(auVar248 * auVar548,8) +
              (ulong)CARRY8(uVar631,(long)local_f0 * (long)local_f0);
    uVar631 = (long)puStack_e8 * uVar646 + (long)puStack_e0 * (long)puStack_e0;
    uVar640 = (long)local_f0 * (long)local_d0 * 2;
    auVar251._8_8_ = 0;
    auVar251._0_8_ = puStack_e8;
    auVar551._8_8_ = 0;
    auVar551._0_8_ = uVar648;
    uVar645 = uVar631 + uVar640;
    auVar252._8_8_ = 0;
    auVar252._0_8_ = local_f0;
    auVar552._8_8_ = 0;
    auVar552._0_8_ = uVar646;
    uVar623 = (long)puStack_e8 * uVar648 + uVar649;
    auVar253._8_8_ = 0;
    auVar253._0_8_ = puStack_e8;
    auVar553._8_8_ = 0;
    auVar553._0_8_ = puStack_e8;
    uVar624 = uVar623 + (long)local_f0 * uVar646;
    auVar254._8_8_ = 0;
    auVar254._0_8_ = local_f0;
    auVar554._8_8_ = 0;
    auVar554._0_8_ = uVar648;
    uVar643 = (long)local_f0 * (long)puStack_e8 * 2;
    auVar255._8_8_ = 0;
    auVar255._0_8_ = local_f0;
    auVar555._8_8_ = 0;
    auVar555._0_8_ = (long)puStack_e8 * 2;
    uVar621 = (long)puStack_e8 * (long)puStack_e8 + (long)local_d8 * uVar641;
    uVar637 = uVar621 + (long)local_f0 * uVar648;
    uVar626 = (long)puStack_e0 * uVar641 + uVar642;
    uVar647 = uVar632 >> 0x33 | uVar628 * 0x2000;
    uVar627 = uVar626 + uVar643;
    uVar638 = uVar627 + uVar647;
    uVar627 = SUB168(auVar244 * auVar544,8) + SUB168(auVar242 * auVar542,8) +
              (ulong)CARRY8((long)puStack_e0 * uVar641,uVar642) + SUB168(auVar255 * auVar555,8) +
              (ulong)CARRY8(uVar626,uVar643) + (uVar628 >> 0x33) + (ulong)CARRY8(uVar627,uVar647);
    uVar642 = uVar638 >> 0x33 | uVar627 * 0x2000;
    uVar626 = uVar637 + uVar642;
    uVar637 = SUB168(auVar253 * auVar553,8) + SUB168(auVar243 * auVar543,8) +
              (ulong)CARRY8((long)puStack_e8 * (long)puStack_e8,(long)local_d8 * uVar641) +
              SUB168(auVar254 * auVar554,8) + (ulong)CARRY8(uVar621,(long)local_f0 * uVar648) +
              (uVar627 >> 0x33) + (ulong)CARRY8(uVar637,uVar642);
    uVar627 = uVar626 >> 0x33 | uVar637 * 0x2000;
    uVar621 = uVar624 + uVar627;
    uVar624 = SUB168(auVar251 * auVar551,8) + SUB168(auVar247 * auVar547,8) +
              (ulong)CARRY8((long)puStack_e8 * uVar648,uVar649) + SUB168(auVar252 * auVar552,8) +
              (ulong)CARRY8(uVar623,(long)local_f0 * uVar646) + (uVar637 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar627);
    local_d8 = (undefined1 *)(uVar621 & 0x7ffffffffffff);
    uVar621 = uVar621 >> 0x33 | uVar624 * 0x2000;
    uVar623 = uVar645 + uVar621;
    iVar620 = iVar620 + -1;
    uVar632 = (uVar632 & 0x7ffffffffffff) +
              (uVar623 >> 0x33 |
              (SUB168(auVar249 * auVar549,8) + SUB168(auVar241 * auVar541,8) +
               (ulong)CARRY8((long)puStack_e8 * uVar646,(long)puStack_e0 * (long)puStack_e0) +
               SUB168(auVar250 * auVar550,8) + (ulong)CARRY8(uVar631,uVar640) + (uVar624 >> 0x33) +
              (ulong)CARRY8(uVar645,uVar621)) * 0x2000) * 0x13;
    local_d0 = (undefined1 *)(uVar623 & 0x7ffffffffffff);
    uVar631 = (uVar638 & 0x7ffffffffffff) + (uVar632 >> 0x33);
    puStack_e0 = (undefined1 *)((uVar626 & 0x7ffffffffffff) + (uVar631 >> 0x33));
    local_f0 = (undefined1 *)(uVar632 & 0x7ffffffffffff);
    puStack_e8 = (undefined1 *)(uVar631 & 0x7ffffffffffff);
  } while (iVar620 != 0);
  FUN_007866c0(&local_c0,&local_f0,&local_c0);
  uVar637 = local_a0 * 0x26;
  auVar256._8_8_ = 0;
  auVar256._0_8_ = local_a0 * 0x13;
  auVar556._8_8_ = 0;
  auVar556._0_8_ = local_a0;
  uVar626 = local_a0 * 0x13 * local_a0;
  auVar257._8_8_ = 0;
  auVar257._0_8_ = local_b0;
  auVar557._8_8_ = 0;
  auVar557._0_8_ = uVar637;
  auVar258._8_8_ = 0;
  auVar258._0_8_ = local_a8;
  auVar558._8_8_ = 0;
  auVar558._0_8_ = uVar637;
  auVar259._8_8_ = 0;
  auVar259._0_8_ = local_a8 * 0x13;
  auVar559._8_8_ = 0;
  auVar559._0_8_ = local_a8;
  uVar638 = local_a8 * 0x13 * local_a8;
  uVar624 = local_a8 * 2;
  auVar260._8_8_ = 0;
  auVar260._0_8_ = local_b0;
  auVar560._8_8_ = 0;
  auVar560._0_8_ = local_a8 * 0x26;
  uVar623 = local_b0 * local_a8 * 0x26;
  auVar261._8_8_ = 0;
  auVar261._0_8_ = local_b8;
  auVar561._8_8_ = 0;
  auVar561._0_8_ = uVar637;
  auVar262._8_8_ = 0;
  auVar262._0_8_ = local_b0;
  auVar562._8_8_ = 0;
  auVar562._0_8_ = local_b0;
  uVar631 = local_b8 * uVar637 + uVar623;
  uVar621 = local_b0 * 2;
  uVar632 = uVar631 + local_c0 * local_c0;
  auVar263._8_8_ = 0;
  auVar263._0_8_ = local_c0;
  auVar563._8_8_ = 0;
  auVar563._0_8_ = local_c0;
  auVar264._8_8_ = 0;
  auVar264._0_8_ = local_b8;
  auVar564._8_8_ = 0;
  auVar564._0_8_ = uVar624;
  auVar265._8_8_ = 0;
  auVar265._0_8_ = local_c0;
  auVar565._8_8_ = 0;
  auVar565._0_8_ = local_a0 * 2;
  uVar645 = local_b8 * uVar624 + local_b0 * local_b0;
  uVar642 = local_c0 * local_a0 * 2;
  uVar627 = uVar632 >> 0x33 |
            (SUB168(auVar261 * auVar561,8) + SUB168(auVar260 * auVar560,8) +
             (ulong)CARRY8(local_b8 * uVar637,uVar623) + SUB168(auVar263 * auVar563,8) +
            (ulong)CARRY8(uVar631,local_c0 * local_c0)) * 0x2000;
  auVar266._8_8_ = 0;
  auVar266._0_8_ = local_b8;
  auVar566._8_8_ = 0;
  auVar566._0_8_ = uVar621;
  uVar631 = uVar645 + uVar642;
  auVar267._8_8_ = 0;
  auVar267._0_8_ = local_c0;
  auVar567._8_8_ = 0;
  auVar567._0_8_ = uVar624;
  lVar639 = SUB168(auVar264 * auVar564,8) + SUB168(auVar262 * auVar562,8) +
            (ulong)CARRY8(local_b8 * uVar624,local_b0 * local_b0) + SUB168(auVar265 * auVar565,8) +
            (ulong)CARRY8(uVar645,uVar642);
  uVar645 = local_b8 * uVar621 + uVar626;
  auVar268._8_8_ = 0;
  auVar268._0_8_ = local_b8;
  auVar568._8_8_ = 0;
  auVar568._0_8_ = local_b8;
  uVar623 = uVar645 + local_c0 * uVar624;
  auVar269._8_8_ = 0;
  auVar269._0_8_ = local_c0;
  auVar569._8_8_ = 0;
  auVar569._0_8_ = uVar621;
  lVar636 = SUB168(auVar266 * auVar566,8) + SUB168(auVar256 * auVar556,8) +
            (ulong)CARRY8(local_b8 * uVar621,uVar626) + SUB168(auVar267 * auVar567,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar624);
  uVar645 = local_b8 * local_b8 + local_a8 * uVar637;
  uVar626 = local_c0 * local_b8 * 2;
  auVar270._8_8_ = 0;
  auVar270._0_8_ = local_c0;
  auVar570._8_8_ = 0;
  auVar570._0_8_ = local_b8 * 2;
  uVar624 = uVar645 + local_c0 * uVar621;
  lVar630 = SUB168(auVar268 * auVar568,8) + SUB168(auVar258 * auVar558,8) +
            (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar637) + SUB168(auVar269 * auVar569,8) +
            (ulong)CARRY8(uVar645,local_c0 * uVar621);
  uVar645 = local_b0 * uVar637 + uVar638;
  uVar621 = uVar645 + uVar626;
  iVar620 = 0x31;
  lVar635 = SUB168(auVar257 * auVar557,8) + SUB168(auVar259 * auVar559,8) +
            (ulong)CARRY8(local_b0 * uVar637,uVar638) + SUB168(auVar270 * auVar570,8) +
            (ulong)CARRY8(uVar645,uVar626);
  uVar645 = uVar621 + uVar627;
  if (CARRY8(uVar621,uVar627)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar624 = uVar621 >> 0x33 | lVar630 << 0xd;
  local_a8 = uVar623 + uVar624;
  if (CARRY8(uVar623,uVar624)) {
    lVar636 = lVar636 + 1;
  }
  uVar623 = local_a8 >> 0x33 | lVar636 << 0xd;
  local_a0 = uVar631 + uVar623;
  if (CARRY8(uVar631,uVar623)) {
    lVar639 = lVar639 + 1;
  }
  local_c0 = (uVar632 & 0x7ffffffffffff) + (local_a0 >> 0x33 | lVar639 << 0xd) * 0x13;
  local_a8 = local_a8 & 0x7ffffffffffff;
  local_b8 = (uVar645 & 0x7ffffffffffff) + (local_c0 >> 0x33);
  local_a0 = local_a0 & 0x7ffffffffffff;
  local_b0 = (uVar621 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_b8 = local_b8 & 0x7ffffffffffff;
  do {
    auVar271._8_8_ = 0;
    auVar271._0_8_ = local_b0;
    auVar571._8_8_ = 0;
    auVar571._0_8_ = local_b0;
    uVar641 = local_a0 * 0x26;
    auVar272._8_8_ = 0;
    auVar272._0_8_ = local_a8 * 0x13;
    auVar572._8_8_ = 0;
    auVar572._0_8_ = local_a8;
    auVar273._8_8_ = 0;
    auVar273._0_8_ = local_a8;
    auVar573._8_8_ = 0;
    auVar573._0_8_ = uVar641;
    uVar642 = local_a8 * 0x13 * local_a8;
    uVar646 = local_a8 * 2;
    auVar274._8_8_ = 0;
    auVar274._0_8_ = local_b0;
    auVar574._8_8_ = 0;
    auVar574._0_8_ = uVar641;
    auVar275._8_8_ = 0;
    auVar275._0_8_ = local_b0;
    auVar575._8_8_ = 0;
    auVar575._0_8_ = local_a8 * 0x26;
    uVar645 = local_b0 * local_a8 * 0x26;
    auVar276._8_8_ = 0;
    auVar276._0_8_ = local_b8;
    auVar576._8_8_ = 0;
    auVar576._0_8_ = uVar641;
    auVar277._8_8_ = 0;
    auVar277._0_8_ = local_a0 * 0x13;
    auVar577._8_8_ = 0;
    auVar577._0_8_ = local_a0;
    uVar649 = local_a0 * 0x13 * local_a0;
    uVar631 = local_b8 * uVar641 + uVar645;
    uVar648 = local_b0 * 2;
    uVar632 = uVar631 + local_c0 * local_c0;
    auVar278._8_8_ = 0;
    auVar278._0_8_ = local_c0;
    auVar578._8_8_ = 0;
    auVar578._0_8_ = local_c0;
    auVar279._8_8_ = 0;
    auVar279._0_8_ = local_b8;
    auVar579._8_8_ = 0;
    auVar579._0_8_ = uVar646;
    auVar280._8_8_ = 0;
    auVar280._0_8_ = local_c0;
    auVar580._8_8_ = 0;
    auVar580._0_8_ = local_a0 * 2;
    uVar628 = SUB168(auVar276 * auVar576,8) + SUB168(auVar275 * auVar575,8) +
              (ulong)CARRY8(local_b8 * uVar641,uVar645) + SUB168(auVar278 * auVar578,8) +
              (ulong)CARRY8(uVar631,local_c0 * local_c0);
    uVar631 = local_b8 * uVar646 + local_b0 * local_b0;
    uVar640 = local_c0 * local_a0 * 2;
    auVar281._8_8_ = 0;
    auVar281._0_8_ = local_b8;
    auVar581._8_8_ = 0;
    auVar581._0_8_ = uVar648;
    uVar645 = uVar631 + uVar640;
    auVar282._8_8_ = 0;
    auVar282._0_8_ = local_c0;
    auVar582._8_8_ = 0;
    auVar582._0_8_ = uVar646;
    uVar623 = local_b8 * uVar648 + uVar649;
    auVar283._8_8_ = 0;
    auVar283._0_8_ = local_b8;
    auVar583._8_8_ = 0;
    auVar583._0_8_ = local_b8;
    uVar624 = uVar623 + local_c0 * uVar646;
    auVar284._8_8_ = 0;
    auVar284._0_8_ = local_c0;
    auVar584._8_8_ = 0;
    auVar584._0_8_ = uVar648;
    uVar643 = local_c0 * local_b8 * 2;
    auVar285._8_8_ = 0;
    auVar285._0_8_ = local_c0;
    auVar585._8_8_ = 0;
    auVar585._0_8_ = local_b8 * 2;
    uVar621 = local_b8 * local_b8 + local_a8 * uVar641;
    uVar637 = uVar621 + local_c0 * uVar648;
    uVar626 = local_b0 * uVar641 + uVar642;
    uVar647 = uVar632 >> 0x33 | uVar628 * 0x2000;
    uVar627 = uVar626 + uVar643;
    uVar638 = uVar627 + uVar647;
    uVar627 = SUB168(auVar274 * auVar574,8) + SUB168(auVar272 * auVar572,8) +
              (ulong)CARRY8(local_b0 * uVar641,uVar642) + SUB168(auVar285 * auVar585,8) +
              (ulong)CARRY8(uVar626,uVar643) + (uVar628 >> 0x33) + (ulong)CARRY8(uVar627,uVar647);
    uVar642 = uVar638 >> 0x33 | uVar627 * 0x2000;
    uVar626 = uVar637 + uVar642;
    uVar637 = SUB168(auVar283 * auVar583,8) + SUB168(auVar273 * auVar573,8) +
              (ulong)CARRY8(local_b8 * local_b8,local_a8 * uVar641) + SUB168(auVar284 * auVar584,8)
              + (ulong)CARRY8(uVar621,local_c0 * uVar648) + (uVar627 >> 0x33) +
              (ulong)CARRY8(uVar637,uVar642);
    uVar627 = uVar626 >> 0x33 | uVar637 * 0x2000;
    uVar621 = uVar624 + uVar627;
    uVar623 = SUB168(auVar281 * auVar581,8) + SUB168(auVar277 * auVar577,8) +
              (ulong)CARRY8(local_b8 * uVar648,uVar649) + SUB168(auVar282 * auVar582,8) +
              (ulong)CARRY8(uVar623,local_c0 * uVar646) + (uVar637 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar627);
    local_a8 = uVar621 & 0x7ffffffffffff;
    uVar624 = uVar621 >> 0x33 | uVar623 * 0x2000;
    local_a0 = uVar645 + uVar624;
    iVar620 = iVar620 + -1;
    local_c0 = (uVar632 & 0x7ffffffffffff) +
               (local_a0 >> 0x33 |
               (SUB168(auVar279 * auVar579,8) + SUB168(auVar271 * auVar571,8) +
                (ulong)CARRY8(local_b8 * uVar646,local_b0 * local_b0) +
                SUB168(auVar280 * auVar580,8) + (ulong)CARRY8(uVar631,uVar640) + (uVar623 >> 0x33) +
               (ulong)CARRY8(uVar645,uVar624)) * 0x2000) * 0x13;
    local_a0 = local_a0 & 0x7ffffffffffff;
    local_b8 = (uVar638 & 0x7ffffffffffff) + (local_c0 >> 0x33);
    local_b0 = (uVar626 & 0x7ffffffffffff) + (local_b8 >> 0x33);
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_b8 = local_b8 & 0x7ffffffffffff;
  } while (iVar620 != 0);
  FUN_007866c0(&local_98,&local_c0,&local_98);
  uVar642 = local_78 * 0x26;
  auVar286._8_8_ = 0;
  auVar286._0_8_ = local_80;
  auVar586._8_8_ = 0;
  auVar586._0_8_ = uVar642;
  auVar287._8_8_ = 0;
  auVar287._0_8_ = local_80 * 0x13;
  auVar587._8_8_ = 0;
  auVar587._0_8_ = local_80;
  uVar627 = local_80 * 0x13 * local_80;
  uVar624 = local_80 * 2;
  auVar288._8_8_ = 0;
  auVar288._0_8_ = local_88;
  auVar588._8_8_ = 0;
  auVar588._0_8_ = uVar642;
  auVar289._8_8_ = 0;
  auVar289._0_8_ = local_88;
  auVar589._8_8_ = 0;
  auVar589._0_8_ = local_80 * 0x26;
  uVar623 = local_88 * local_80 * 0x26;
  auVar290._8_8_ = 0;
  auVar290._0_8_ = local_90;
  auVar590._8_8_ = 0;
  auVar590._0_8_ = uVar642;
  auVar291._8_8_ = 0;
  auVar291._0_8_ = local_78 * 0x13;
  auVar591._8_8_ = 0;
  auVar591._0_8_ = local_78;
  uVar637 = local_78 * 0x13 * local_78;
  uVar631 = local_90 * uVar642 + uVar623;
  auVar292._8_8_ = 0;
  auVar292._0_8_ = local_88;
  auVar592._8_8_ = 0;
  auVar592._0_8_ = local_88;
  uVar621 = local_88 * 2;
  uVar632 = uVar631 + local_98 * local_98;
  auVar293._8_8_ = 0;
  auVar293._0_8_ = local_98;
  auVar593._8_8_ = 0;
  auVar593._0_8_ = local_98;
  auVar294._8_8_ = 0;
  auVar294._0_8_ = local_90;
  auVar594._8_8_ = 0;
  auVar594._0_8_ = uVar624;
  auVar295._8_8_ = 0;
  auVar295._0_8_ = local_98;
  auVar595._8_8_ = 0;
  auVar595._0_8_ = local_78 * 2;
  uVar645 = local_90 * uVar624 + local_88 * local_88;
  uVar638 = local_98 * local_78 * 2;
  uVar626 = uVar632 >> 0x33 |
            (SUB168(auVar290 * auVar590,8) + SUB168(auVar289 * auVar589,8) +
             (ulong)CARRY8(local_90 * uVar642,uVar623) + SUB168(auVar293 * auVar593,8) +
            (ulong)CARRY8(uVar631,local_98 * local_98)) * 0x2000;
  auVar296._8_8_ = 0;
  auVar296._0_8_ = local_90;
  auVar596._8_8_ = 0;
  auVar596._0_8_ = uVar621;
  uVar631 = uVar645 + uVar638;
  auVar297._8_8_ = 0;
  auVar297._0_8_ = local_98;
  auVar597._8_8_ = 0;
  auVar597._0_8_ = uVar624;
  lVar639 = SUB168(auVar294 * auVar594,8) + SUB168(auVar292 * auVar592,8) +
            (ulong)CARRY8(local_90 * uVar624,local_88 * local_88) + SUB168(auVar295 * auVar595,8) +
            (ulong)CARRY8(uVar645,uVar638);
  uVar645 = local_90 * uVar621 + uVar637;
  auVar298._8_8_ = 0;
  auVar298._0_8_ = local_90;
  auVar598._8_8_ = 0;
  auVar598._0_8_ = local_90;
  uVar623 = uVar645 + local_98 * uVar624;
  auVar299._8_8_ = 0;
  auVar299._0_8_ = local_98;
  auVar599._8_8_ = 0;
  auVar599._0_8_ = uVar621;
  lVar636 = SUB168(auVar296 * auVar596,8) + SUB168(auVar291 * auVar591,8) +
            (ulong)CARRY8(local_90 * uVar621,uVar637) + SUB168(auVar297 * auVar597,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar624);
  uVar645 = local_90 * local_90 + local_80 * uVar642;
  uVar637 = local_98 * local_90 * 2;
  auVar300._8_8_ = 0;
  auVar300._0_8_ = local_98;
  auVar600._8_8_ = 0;
  auVar600._0_8_ = local_90 * 2;
  uVar624 = uVar645 + local_98 * uVar621;
  lVar630 = SUB168(auVar298 * auVar598,8) + SUB168(auVar286 * auVar586,8) +
            (ulong)CARRY8(local_90 * local_90,local_80 * uVar642) + SUB168(auVar299 * auVar599,8) +
            (ulong)CARRY8(uVar645,local_98 * uVar621);
  uVar645 = local_88 * uVar642 + uVar627;
  uVar621 = uVar645 + uVar637;
  lVar635 = SUB168(auVar288 * auVar588,8) + SUB168(auVar287 * auVar587,8) +
            (ulong)CARRY8(local_88 * uVar642,uVar627) + SUB168(auVar300 * auVar600,8) +
            (ulong)CARRY8(uVar645,uVar637);
  uVar645 = uVar621 + uVar626;
  if (CARRY8(uVar621,uVar626)) {
    lVar635 = lVar635 + 1;
  }
  uVar637 = uVar645 >> 0x33 | lVar635 << 0xd;
  uVar621 = uVar624 + uVar637;
  if (CARRY8(uVar624,uVar637)) {
    lVar630 = lVar630 + 1;
  }
  uVar637 = uVar621 >> 0x33 | lVar630 << 0xd;
  uVar624 = uVar623 + uVar637;
  if (CARRY8(uVar623,uVar637)) {
    lVar636 = lVar636 + 1;
  }
  uVar637 = uVar624 >> 0x33 | lVar636 << 0xd;
  uVar623 = uVar631 + uVar637;
  uVar624 = uVar624 & 0x7ffffffffffff;
  if (CARRY8(uVar631,uVar637)) {
    lVar639 = lVar639 + 1;
  }
  uVar628 = uVar623 & 0x7ffffffffffff;
  uVar647 = (uVar632 & 0x7ffffffffffff) + (uVar623 >> 0x33 | lVar639 << 0xd) * 0x13;
  uVar640 = uVar628 * 0x26;
  auVar301._8_8_ = 0;
  auVar301._0_8_ = uVar628;
  auVar601._8_8_ = 0;
  auVar601._0_8_ = uVar628 * 0x13;
  uVar642 = uVar628 * uVar628 * 0x13;
  uVar631 = (uVar645 & 0x7ffffffffffff) + (uVar647 >> 0x33);
  uVar647 = uVar647 & 0x7ffffffffffff;
  uVar632 = (uVar621 & 0x7ffffffffffff) + (uVar631 >> 0x33);
  uVar631 = uVar631 & 0x7ffffffffffff;
  auVar302._8_8_ = 0;
  auVar302._0_8_ = uVar624;
  auVar602._8_8_ = 0;
  auVar602._0_8_ = uVar640;
  uVar649 = uVar632 * 2;
  auVar303._8_8_ = 0;
  auVar303._0_8_ = uVar632;
  auVar603._8_8_ = 0;
  auVar603._0_8_ = uVar640;
  auVar304._8_8_ = 0;
  auVar304._0_8_ = uVar631;
  auVar604._8_8_ = 0;
  auVar604._0_8_ = uVar640;
  auVar305._8_8_ = 0;
  auVar305._0_8_ = uVar624;
  auVar605._8_8_ = 0;
  auVar605._0_8_ = uVar624 * 0x13;
  uVar648 = uVar624 * uVar624 * 0x13;
  uVar646 = uVar624 * 2;
  uVar645 = uVar631 * uVar640 + uVar647 * uVar647;
  auVar306._8_8_ = 0;
  auVar306._0_8_ = uVar632;
  auVar606._8_8_ = 0;
  auVar606._0_8_ = uVar624 * 0x26;
  uVar627 = uVar632 * uVar624 * 0x26;
  auVar307._8_8_ = 0;
  auVar307._0_8_ = uVar647;
  auVar607._8_8_ = 0;
  auVar607._0_8_ = uVar647;
  auVar308._8_8_ = 0;
  auVar308._0_8_ = uVar631;
  auVar608._8_8_ = 0;
  auVar608._0_8_ = uVar646;
  uVar623 = uVar645 + uVar627;
  uVar621 = uVar631 * uVar631 + uVar624 * uVar640;
  auVar309._8_8_ = 0;
  auVar309._0_8_ = uVar649;
  auVar609._8_8_ = 0;
  auVar609._0_8_ = uVar631;
  auVar310._8_8_ = 0;
  auVar310._0_8_ = uVar631;
  auVar610._8_8_ = 0;
  auVar610._0_8_ = uVar631;
  auVar311._8_8_ = 0;
  auVar311._0_8_ = uVar649;
  auVar611._8_8_ = 0;
  auVar611._0_8_ = uVar647;
  uVar641 = uVar631 * 2 * uVar647;
  auVar312._8_8_ = 0;
  auVar312._0_8_ = uVar631 * 2;
  auVar612._8_8_ = 0;
  auVar612._0_8_ = uVar647;
  uVar637 = uVar621 + uVar649 * uVar647;
  uVar626 = uVar632 * uVar640 + uVar648;
  uVar638 = uVar623 >> 0x33 |
            (SUB168(auVar304 * auVar604,8) + SUB168(auVar307 * auVar607,8) +
             (ulong)CARRY8(uVar631 * uVar640,uVar647 * uVar647) + SUB168(auVar306 * auVar606,8) +
            (ulong)CARRY8(uVar645,uVar627)) * 0x2000;
  uVar645 = uVar626 + uVar641;
  uVar627 = SUB168(auVar303 * auVar603,8) + SUB168(auVar305 * auVar605,8) +
            (ulong)CARRY8(uVar632 * uVar640,uVar648) + SUB168(auVar312 * auVar612,8) +
            (ulong)CARRY8(uVar626,uVar641);
  uVar626 = uVar645 + uVar638;
  auVar313._8_8_ = 0;
  auVar313._0_8_ = uVar647;
  auVar613._8_8_ = 0;
  auVar613._0_8_ = uVar646;
  if (CARRY8(uVar645,uVar638)) {
    uVar627 = uVar627 + 1;
  }
  uVar638 = uVar626 >> 0x33 | uVar627 << 0xd;
  auVar314._8_8_ = 0;
  auVar314._0_8_ = uVar647;
  auVar614._8_8_ = 0;
  auVar614._0_8_ = uVar628 * 2;
  uVar628 = uVar647 * uVar628 * 2;
  uVar645 = uVar637 + uVar638;
  uVar637 = SUB168(auVar310 * auVar610,8) + SUB168(auVar302 * auVar602,8) +
            (ulong)CARRY8(uVar631 * uVar631,uVar624 * uVar640) + SUB168(auVar311 * auVar611,8) +
            (ulong)CARRY8(uVar621,uVar649 * uVar647) + (uVar627 >> 0x33) +
            (ulong)CARRY8(uVar637,uVar638);
  uVar624 = uVar647 * uVar646 + uVar642;
  uVar627 = uVar645 >> 0x33 | uVar637 * 0x2000;
  uVar621 = uVar624 + uVar649 * uVar631;
  auVar315._8_8_ = 0;
  auVar315._0_8_ = uVar632;
  auVar615._8_8_ = 0;
  auVar615._0_8_ = uVar632;
  local_80 = uVar621 + uVar627;
  uVar637 = SUB168(auVar313 * auVar613,8) + SUB168(auVar301 * auVar601,8) +
            (ulong)CARRY8(uVar647 * uVar646,uVar642) + SUB168(auVar309 * auVar609,8) +
            (ulong)CARRY8(uVar624,uVar649 * uVar631) + (uVar637 >> 0x33) +
            (ulong)CARRY8(uVar621,uVar627);
  uVar624 = uVar631 * uVar646 + uVar628;
  uVar627 = local_80 >> 0x33 | uVar637 * 0x2000;
  uVar621 = uVar624 + uVar632 * uVar632;
  local_78 = uVar621 + uVar627;
  local_98 = (uVar623 & 0x7ffffffffffff) +
             (local_78 >> 0x33 |
             (SUB168(auVar308 * auVar608,8) + SUB168(auVar314 * auVar614,8) +
              (ulong)CARRY8(uVar631 * uVar646,uVar628) + SUB168(auVar315 * auVar615,8) +
              (ulong)CARRY8(uVar624,uVar632 * uVar632) + (uVar637 >> 0x33) +
             (ulong)CARRY8(uVar621,uVar627)) * 0x2000) * 0x13;
  local_90 = (uVar626 & 0x7ffffffffffff) + (local_98 >> 0x33);
  local_98 = local_98 & 0x7ffffffffffff;
  local_88 = (uVar645 & 0x7ffffffffffff) + (local_90 >> 0x33);
  local_90 = local_90 & 0x7ffffffffffff;
  local_80 = local_80 & 0x7ffffffffffff;
  local_78 = local_78 & 0x7ffffffffffff;
  FUN_007866c0(param_1,&local_98,&local_168);
  FUN_007866c0(param_1,param_1,&local_118);
  FUN_0077faf4(&local_190,param_1);
  FUN_007866c0(&local_190,&local_190,&local_140);
  uVar631 = (local_190 - uVar625) + 0xfffffffffffda;
  uVar632 = (lStack_188 - uVar634) + (uVar631 >> 0x33) + 0xffffffffffffe;
  uVar645 = (local_180 - lVar1) + (uVar632 >> 0x33) + 0xffffffffffffe;
  local_80 = (lStack_178 - uVar629) + (uVar645 >> 0x33) + 0xffffffffffffe;
  local_78 = (local_170 - uVar633) + (local_80 >> 0x33) + 0xffffffffffffe;
  local_98 = (uVar631 & 0x7ffffffffffff) + (local_78 >> 0x33) * 0x13;
  uVar631 = (uVar632 & 0x7ffffffffffff) + (local_98 >> 0x33);
  local_98 = local_98 & 0x7ffffffffffff;
  local_90 = uVar631 & 0x7ffffffffffff;
  local_88 = (uVar645 & 0x7ffffffffffff) + (uVar631 >> 0x33);
  local_80 = local_80 & 0x7ffffffffffff;
  local_78 = local_78 & 0x7ffffffffffff;
  FUN_0077d770(&local_c0,&local_98);
  iVar620 = FUN_0078cd34(&local_c0,&DAT_0020ac20,0x20);
  if (iVar620 != 0) {
    uVar631 = lStack_188 + uVar634 + (local_190 + uVar625 >> 0x33);
    uVar632 = local_180 + lVar1 + (uVar631 >> 0x33);
    local_80 = lStack_178 + uVar629 + (uVar632 >> 0x33);
    local_78 = local_170 + uVar633 + (local_80 >> 0x33);
    local_98 = (local_190 + uVar625 & 0x7ffffffffffff) + (local_78 >> 0x33) * 0x13;
    uVar631 = (uVar631 & 0x7ffffffffffff) + (local_98 >> 0x33);
    local_98 = local_98 & 0x7ffffffffffff;
    local_90 = uVar631 & 0x7ffffffffffff;
    local_88 = (uVar632 & 0x7ffffffffffff) + (uVar631 >> 0x33);
    local_80 = local_80 & 0x7ffffffffffff;
    local_78 = local_78 & 0x7ffffffffffff;
    FUN_0077d770(&local_c0,&local_98);
    iVar620 = FUN_0078cd34(&local_c0,&DAT_0020ac20,0x20);
    if (iVar620 != 0) {
      uVar622 = 0;
      goto LAB_0077fab8;
    }
    FUN_007866c0(param_1,param_1,&DAT_0020a7f0);
  }
  FUN_0077d770(&local_98,param_1);
  if (((byte)local_98 & 1) != *(byte *)((long)param_2 + 0x1f) >> 7) {
    uVar631 = ((0xfffffffffffda - *param_1 >> 0x33) - param_1[1]) + 0xffffffffffffe;
    uVar632 = ((uVar631 >> 0x33) - param_1[2]) + 0xffffffffffffe;
    uVar629 = ((uVar632 >> 0x33) - param_1[3]) + 0xffffffffffffe;
    uVar645 = ((uVar629 >> 0x33) - param_1[4]) + 0xffffffffffffe;
    uVar623 = (0xfffffffffffda - *param_1 & 0x7ffffffffffff) + (uVar645 >> 0x33) * 0x13;
    uVar631 = (uVar631 & 0x7ffffffffffff) + (uVar623 >> 0x33);
    *param_1 = uVar623 & 0x7ffffffffffff;
    param_1[1] = uVar631 & 0x7ffffffffffff;
    param_1[2] = (uVar632 & 0x7ffffffffffff) + (uVar631 >> 0x33);
    param_1[3] = uVar629 & 0x7ffffffffffff;
    param_1[4] = uVar645 & 0x7ffffffffffff;
  }
  FUN_007866c0(param_1 + 0xf,param_1,puVar644);
  uVar622 = 1;
LAB_0077fab8:
  if (*(long *)(lVar616 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar622);
}


// ===== 0077faf4  FUN_0077faf4 =====

void FUN_0077faf4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
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
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  
  uVar3 = param_2[3];
  uVar46 = param_2[4];
  uVar43 = param_2[1];
  uVar4 = param_2[2];
  uVar35 = *param_2;
  uVar47 = uVar46 * 0x26;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar3 * 0x13;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar3;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar47;
  uVar42 = uVar3 * 0x13 * uVar3;
  uVar48 = uVar3 * 2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar47;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar4;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar3 * 0x26;
  uVar36 = uVar4 * uVar3 * 0x26;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar43;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar47;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar46 * 0x13;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar46;
  uVar38 = uVar46 * 0x13 * uVar46;
  uVar1 = uVar43 * uVar47 + uVar36;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar4;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar4;
  uVar49 = uVar4 * 2;
  uVar45 = uVar1 + uVar35 * uVar35;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar35;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar35;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar43;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar48;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar35;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar46 * 2;
  uVar2 = uVar43 * uVar48 + uVar4 * uVar4;
  uVar46 = uVar35 * uVar46 * 2;
  uVar40 = uVar45 >> 0x33 |
           (SUB168(auVar9 * auVar24,8) + SUB168(auVar8 * auVar23,8) +
            (ulong)CARRY8(uVar43 * uVar47,uVar36) + SUB168(auVar12 * auVar27,8) +
           (ulong)CARRY8(uVar1,uVar35 * uVar35)) * 0x2000;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar49;
  uVar1 = uVar2 + uVar46;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar35;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar48;
  lVar39 = SUB168(auVar13 * auVar28,8) + SUB168(auVar11 * auVar26,8) +
           (ulong)CARRY8(uVar43 * uVar48,uVar4 * uVar4) + SUB168(auVar14 * auVar29,8) +
           (ulong)CARRY8(uVar2,uVar46);
  uVar2 = uVar43 * uVar49 + uVar38;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar43;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  uVar46 = uVar2 + uVar35 * uVar48;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar35;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar49;
  lVar37 = SUB168(auVar15 * auVar30,8) + SUB168(auVar10 * auVar25,8) +
           (ulong)CARRY8(uVar43 * uVar49,uVar38) + SUB168(auVar16 * auVar31,8) +
           (ulong)CARRY8(uVar2,uVar35 * uVar48);
  uVar2 = uVar43 * uVar43 + uVar3 * uVar47;
  uVar38 = uVar35 * uVar43 * 2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar35;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar43 * 2;
  uVar36 = uVar2 + uVar35 * uVar49;
  lVar41 = SUB168(auVar17 * auVar32,8) + SUB168(auVar6 * auVar21,8) +
           (ulong)CARRY8(uVar43 * uVar43,uVar3 * uVar47) + SUB168(auVar18 * auVar33,8) +
           (ulong)CARRY8(uVar2,uVar35 * uVar49);
  uVar2 = uVar4 * uVar47 + uVar42;
  uVar3 = uVar2 + uVar38;
  lVar44 = SUB168(auVar7 * auVar22,8) + SUB168(auVar5 * auVar20,8) +
           (ulong)CARRY8(uVar4 * uVar47,uVar42) + SUB168(auVar19 * auVar34,8) +
           (ulong)CARRY8(uVar2,uVar38);
  uVar2 = uVar3 + uVar40;
  if (CARRY8(uVar3,uVar40)) {
    lVar44 = lVar44 + 1;
  }
  uVar43 = uVar2 >> 0x33 | lVar44 << 0xd;
  uVar3 = uVar36 + uVar43;
  if (CARRY8(uVar36,uVar43)) {
    lVar41 = lVar41 + 1;
  }
  uVar43 = uVar3 >> 0x33 | lVar41 << 0xd;
  uVar36 = uVar46 + uVar43;
  if (CARRY8(uVar46,uVar43)) {
    lVar37 = lVar37 + 1;
  }
  uVar43 = uVar36 >> 0x33 | lVar37 << 0xd;
  uVar46 = uVar1 + uVar43;
  if (CARRY8(uVar1,uVar43)) {
    lVar39 = lVar39 + 1;
  }
  uVar45 = (uVar45 & 0x7ffffffffffff) + (uVar46 >> 0x33 | lVar39 << 0xd) * 0x13;
  uVar1 = (uVar2 & 0x7ffffffffffff) + (uVar45 >> 0x33);
  *param_1 = uVar45 & 0x7ffffffffffff;
  param_1[1] = uVar1 & 0x7ffffffffffff;
  param_1[2] = (uVar3 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[3] = uVar36 & 0x7ffffffffffff;
  param_1[4] = uVar46 & 0x7ffffffffffff;
  return;
}


// ===== 0077fca8  FUN_0077fca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077fca8(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  ulong local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar11 = param_2[1];
  lVar10 = *param_2;
  lVar15 = param_2[3];
  lVar14 = param_2[2];
  lVar9 = param_2[6];
  lVar8 = param_2[5];
  lVar13 = param_2[8];
  lVar12 = param_2[7];
  param_1[4] = param_2[4] + param_2[9];
  param_1[1] = lVar11 + lVar9;
  *param_1 = lVar10 + lVar8;
  param_1[3] = lVar15 + lVar13;
  param_1[2] = lVar14 + lVar12;
  lVar13 = param_2[3];
  lVar12 = param_2[2];
  lVar11 = param_2[8];
  lVar10 = param_2[7];
  lVar8 = (param_2[5] - *param_2) + _DAT_001f3a70;
  lVar9 = (param_2[6] - param_2[1]) + _UNK_001f3a78;
  param_1[9] = (param_2[9] - param_2[4]) + 0xffffffffffffe;
  param_1[8] = (lVar11 - lVar13) + 0xffffffffffffe;
  param_1[7] = (lVar10 - lVar12) + 0xffffffffffffe;
  plVar7 = param_1 + 5;
  param_1[6] = lVar9;
  *plVar7 = lVar8;
  FUN_007866c0(&local_b8,param_1);
  FUN_007866c0(&local_90,plVar7,param_3 + 0x28);
  FUN_007866c0(&local_e0,param_3 + 0x78,param_2 + 0xf);
  FUN_007866c0(&local_68,param_2 + 10,param_3 + 0x50);
  uVar1 = (local_68 >> 0x32 & 0x1fff) + lStack_60 * 2;
  uVar2 = (uVar1 >> 0x33) + local_58 * 2;
  uVar4 = (uVar2 >> 0x33) + lStack_50 * 2;
  *plVar7 = local_90 + local_b8;
  uVar3 = (uVar4 >> 0x33) + local_48 * 2;
  param_1[6] = lStack_88 + lStack_b0;
  param_1[7] = local_80 + local_a8;
  *param_1 = (local_b8 + 0xfffffffffffda) - local_90;
  param_1[1] = (lStack_b0 - lStack_88) + 0xffffffffffffe;
  param_1[8] = lStack_78 + lStack_a0;
  param_1[9] = local_70 + local_98;
  uVar6 = uVar3 & 0x7ffffffffffff;
  uVar3 = (local_68 & 0x3ffffffffffff) * 2 + (uVar3 >> 0x33) * 0x13;
  param_1[2] = (local_a8 - local_80) + 0xffffffffffffe;
  param_1[3] = (lStack_a0 - lStack_78) + 0xffffffffffffe;
  param_1[4] = (local_98 - local_70) + 0xffffffffffffe;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  uVar3 = uVar3 & 0x7ffffffffffff;
  uVar5 = uVar1 & 0x7ffffffffffff;
  lVar8 = (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[0xe] = local_c0 + uVar6;
  param_1[0xf] = (uVar3 + 0xfffffffffffda) - local_e0;
  uVar4 = uVar4 & 0x7ffffffffffff;
  param_1[10] = local_e0 + uVar3;
  param_1[0xb] = lStack_d8 + uVar5;
  param_1[0xc] = local_d0 + lVar8;
  param_1[0xd] = lStack_c8 + uVar4;
  param_1[0x10] = (uVar5 - lStack_d8) + 0xffffffffffffe;
  param_1[0x11] = (lVar8 - local_d0) + 0xffffffffffffe;
  param_1[0x12] = (uVar4 - lStack_c8) + 0xffffffffffffe;
  param_1[0x13] = (uVar6 - local_c0) + 0xffffffffffffe;
  return;
}


// ===== 0077fec8  FUN_0077fec8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077fec8(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  ulong local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar11 = param_2[1];
  lVar10 = *param_2;
  lVar15 = param_2[3];
  lVar14 = param_2[2];
  lVar9 = param_2[6];
  lVar8 = param_2[5];
  lVar13 = param_2[8];
  lVar12 = param_2[7];
  param_1[4] = param_2[4] + param_2[9];
  param_1[1] = lVar11 + lVar9;
  *param_1 = lVar10 + lVar8;
  param_1[3] = lVar15 + lVar13;
  param_1[2] = lVar14 + lVar12;
  lVar13 = param_2[3];
  lVar12 = param_2[2];
  lVar11 = param_2[8];
  lVar10 = param_2[7];
  lVar8 = (param_2[5] - *param_2) + _DAT_001f3a70;
  lVar9 = (param_2[6] - param_2[1]) + _UNK_001f3a78;
  param_1[9] = (param_2[9] - param_2[4]) + 0xffffffffffffe;
  param_1[8] = (lVar11 - lVar13) + 0xffffffffffffe;
  param_1[7] = (lVar10 - lVar12) + 0xffffffffffffe;
  plVar7 = param_1 + 5;
  param_1[6] = lVar9;
  *plVar7 = lVar8;
  FUN_007866c0(&local_b8,param_1,param_3 + 0x28);
  FUN_007866c0(&local_90,plVar7,param_3);
  FUN_007866c0(&local_e0,param_3 + 0x78,param_2 + 0xf);
  FUN_007866c0(&local_68,param_2 + 10,param_3 + 0x50);
  uVar1 = (local_68 >> 0x32 & 0x1fff) + lStack_60 * 2;
  uVar2 = (uVar1 >> 0x33) + local_58 * 2;
  *plVar7 = local_90 + local_b8;
  param_1[6] = lStack_88 + lStack_b0;
  param_1[7] = local_80 + local_a8;
  uVar4 = (uVar2 >> 0x33) + lStack_50 * 2;
  *param_1 = (local_b8 + 0xfffffffffffda) - local_90;
  param_1[1] = (lStack_b0 - lStack_88) + 0xffffffffffffe;
  param_1[8] = lStack_78 + lStack_a0;
  param_1[9] = local_70 + local_98;
  param_1[2] = (local_a8 - local_80) + 0xffffffffffffe;
  param_1[3] = (lStack_a0 - lStack_78) + 0xffffffffffffe;
  uVar3 = (uVar4 >> 0x33) + local_48 * 2;
  param_1[4] = (local_98 - local_70) + 0xffffffffffffe;
  uVar5 = uVar3 & 0x7ffffffffffff;
  uVar3 = (local_68 & 0x3ffffffffffff) * 2 + (uVar3 >> 0x33) * 0x13;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  uVar3 = uVar3 & 0x7ffffffffffff;
  param_1[0xe] = (uVar5 - local_c0) + 0xffffffffffffe;
  param_1[0xf] = local_e0 + uVar3;
  uVar6 = uVar1 & 0x7ffffffffffff;
  lVar8 = (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[10] = (uVar3 + 0xfffffffffffda) - local_e0;
  param_1[0xb] = (uVar6 - lStack_d8) + 0xffffffffffffe;
  param_1[0x10] = lStack_d8 + uVar6;
  param_1[0x11] = local_d0 + lVar8;
  uVar4 = uVar4 & 0x7ffffffffffff;
  param_1[0xc] = (lVar8 - local_d0) + 0xffffffffffffe;
  param_1[0xd] = (uVar4 - local_c8) + 0xffffffffffffe;
  param_1[0x12] = local_c8 + uVar4;
  param_1[0x13] = local_c0 + uVar5;
  return;
}


// ===== 007800f0  FUN_007800f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007800f0(long *param_1,long param_2,long param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined1 (*pauVar15) [16];
  long *plVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong local_930;
  ulong uStack_928;
  ulong local_920;
  ulong uStack_918;
  ulong local_910;
  undefined1 auStack_908 [40];
  undefined1 *local_8e0 [2];
  undefined1 *local_8d0;
  undefined1 *puStack_8c0;
  undefined1 auStack_8b8 [8];
  undefined1 *local_8b0;
  undefined1 *puStack_8a0;
  undefined1 *local_890;
  ulong uStack_888;
  ulong local_880;
  ulong uStack_878;
  ulong local_870;
  long lStack_868;
  long local_860;
  long lStack_858;
  long local_850;
  long lStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long local_820;
  undefined1 auStack_818 [40];
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined1 local_770 [64];
  undefined1 local_730 [16];
  undefined1 auStack_720 [1728];
  
  memset(local_770,0xaa,0x708);
  lVar12 = 0;
  puVar14 = auStack_720;
  do {
    puVar1 = (uint *)(param_3 + lVar12);
    local_880 = ((ulong)puVar1[4] & 0x1ffffff) << 0x1a |
                (ulong)*(byte *)((long)puVar1 + 0xf) << 0x12 |
                (ulong)*(byte *)((long)puVar1 + 0xe) << 10 |
                (ulong)*(byte *)((long)puVar1 + 0xd) << 2 | (ulong)(byte)((byte)puVar1[3] >> 6);
    uStack_878 = ((ulong)*(uint *)((long)puVar1 + 0x16) & 0xfffffff) << 0x17 |
                 (ulong)*(byte *)((long)puVar1 + 0x15) << 0xf | (ulong)(byte)puVar1[5] << 7 |
                 (ulong)(puVar1[4] >> 0x19);
    uStack_888 = ((ulong)(byte)puVar1[3] & 0x3f) << 0x2d |
                 (ulong)*(byte *)((long)puVar1 + 0xb) << 0x25 |
                 (ulong)*(byte *)((long)puVar1 + 10) << 0x1d |
                 (ulong)*(byte *)((long)puVar1 + 9) << 0x15 | (ulong)(byte)puVar1[2] << 0xd |
                 (ulong)*(byte *)((long)puVar1 + 7) << 5 | (ulong)(*(byte *)((long)puVar1 + 6) >> 3)
    ;
    local_870 = (ulong)puVar1[7] << 0x14 | (ulong)*(byte *)((long)puVar1 + 0x1b) << 0xc |
                (ulong)*(byte *)((long)puVar1 + 0x1a) << 4 |
                (ulong)(*(uint *)((long)puVar1 + 0x16) >> 0x1c);
    local_890 = (undefined1 *)
                ((ulong)*(byte *)((long)puVar1 + 5) << 0x28 |
                 ((ulong)*(byte *)((long)puVar1 + 6) & 7) << 0x30 | (ulong)*puVar1 |
                (ulong)(byte)puVar1[1] << 0x20);
    local_930 = (ulong)*(byte *)((long)puVar1 + 0x25) << 0x28 |
                ((ulong)*(byte *)((long)puVar1 + 0x26) & 7) << 0x30 | (ulong)puVar1[8] |
                (ulong)(byte)puVar1[9] << 0x20;
    uStack_928 = ((ulong)(byte)puVar1[0xb] & 0x3f) << 0x2d |
                 (ulong)*(byte *)((long)puVar1 + 0x2b) << 0x25 |
                 (ulong)*(byte *)((long)puVar1 + 0x2a) << 0x1d |
                 (ulong)*(byte *)((long)puVar1 + 0x29) << 0x15 | (ulong)(byte)puVar1[10] << 0xd |
                 (ulong)*(byte *)((long)puVar1 + 0x27) << 5 |
                 (ulong)(*(byte *)((long)puVar1 + 0x26) >> 3);
    local_920 = ((ulong)puVar1[0xc] & 0x1ffffff) << 0x1a |
                (ulong)*(byte *)((long)puVar1 + 0x2f) << 0x12 |
                (ulong)*(byte *)((long)puVar1 + 0x2e) << 10 |
                (ulong)*(byte *)((long)puVar1 + 0x2d) << 2 | (ulong)(byte)((byte)puVar1[0xb] >> 6);
    uStack_918 = ((ulong)*(uint *)((long)puVar1 + 0x36) & 0xfffffff) << 0x17 |
                 (ulong)*(byte *)((long)puVar1 + 0x35) << 0xf | (ulong)(byte)puVar1[0xd] << 7 |
                 (ulong)(puVar1[0xc] >> 0x19);
    local_910 = (ulong)puVar1[0xf] << 0x14 | (ulong)*(byte *)((long)puVar1 + 0x3b) << 0xc |
                (ulong)*(byte *)((long)puVar1 + 0x3a) << 4 |
                (ulong)(*(uint *)((long)puVar1 + 0x36) >> 0x1c);
    *(undefined1 **)(puVar14 + -0x50) = local_890 + local_930;
    *(ulong *)(puVar14 + -0x48) = uStack_928 + uStack_888;
    *(ulong *)(puVar14 + -0x40) = local_920 + local_880;
    *(ulong *)(puVar14 + -0x38) = uStack_918 + uStack_878;
    *(ulong *)(puVar14 + -0x30) = local_910 + local_870;
    *(ulong *)(puVar14 + -0x28) = (local_930 - (long)local_890) + 0xfffffffffffda;
    *(ulong *)(puVar14 + -0x20) = (uStack_928 - uStack_888) + 0xffffffffffffe;
    *(ulong *)(puVar14 + -0x18) = (local_920 - local_880) + 0xffffffffffffe;
    *(ulong *)(puVar14 + -0x10) = (uStack_918 - uStack_878) + 0xffffffffffffe;
    *(ulong *)(puVar14 + -8) = (local_910 - local_870) + 0xffffffffffffe;
    FUN_007866c0(puVar14,&local_890,&local_930);
    FUN_007866c0(puVar14,puVar14,&DAT_0020a818);
    lVar12 = lVar12 + 0x40;
    puVar14 = puVar14 + 0x78;
  } while (lVar12 != 0x3c0);
  plVar13 = param_1 + 5;
  *plVar13 = 1;
  pauVar15 = (undefined1 (*) [16])(param_1 + 10);
  *(long *)*pauVar15 = 1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar17 = 0x3f;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  plVar16 = param_1 + 0xf;
  param_1[0x10] = 0;
  *plVar16 = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  uVar5 = _UNK_001f1d08;
  uVar4 = _DAT_001f1d00;
  param_1[4] = 0;
  uVar7 = _UNK_001f2d08;
  uVar6 = _DAT_001f2d00;
  param_1[0x13] = 0;
  do {
    uVar3 = (uint)uVar17 & 7;
    auVar18 = ZEXT816(0);
    auVar19 = ZEXT816(0);
    auVar20 = ZEXT816(0);
    pbVar2 = (byte *)(param_2 + (uVar17 >> 3));
    auVar21 = ZEXT816(0);
    auVar22 = ZEXT816(0);
    auVar24._8_8_ = uVar7;
    auVar24._0_8_ = uVar6;
    auVar23._8_8_ = uVar5;
    auVar23._0_8_ = uVar4;
    lVar10 = (ulong)((pbVar2[0x10] >> (ulong)uVar3 & 1) << 2 |
                     (pbVar2[0x18] >> (ulong)uVar3 & 1) << 3 | (pbVar2[8] >> (ulong)uVar3 & 1) << 1
                    | *pbVar2 >> (ulong)uVar3 & 1) * 0x78;
    lVar12 = -0x708;
    uVar9 = 0;
    pauVar11 = &local_730;
    do {
      lVar10 = lVar10 + -0x78;
      bVar8 = lVar10 == 0;
      lVar12 = lVar12 + 0x78;
      local_780 = *(undefined8 *)pauVar11[3];
      if (!bVar8) {
        local_780 = uVar9;
      }
      auVar25._0_8_ = (ulong)CONCAT14(bVar8,(uint)bVar8) << 0x3f;
      auVar25._8_8_ = (ulong)bVar8 << 0x3f;
      auVar25 = NEON_cmlt(auVar25,0,8);
      auVar24 = NEON_bit(auVar24,pauVar11[-4],auVar25,1);
      auVar18 = NEON_bit(auVar18,pauVar11[-3],auVar25,1);
      auVar23 = NEON_bit(auVar23,pauVar11[-2],auVar25,1);
      auVar19 = NEON_bit(auVar19,pauVar11[-1],auVar25,1);
      auVar20 = NEON_bit(auVar20,*pauVar11,auVar25,1);
      auVar21 = NEON_bit(auVar21,pauVar11[1],auVar25,1);
      auVar22 = NEON_bit(auVar22,pauVar11[2],auVar25,1);
      pauVar11 = (undefined1 (*) [16])(pauVar11[7] + 8);
      uVar9 = local_780;
    } while (lVar12 != 0);
    uStack_7e8 = auVar24._8_8_;
    local_7f0 = auVar24._0_8_;
    uStack_7d8 = auVar18._8_8_;
    uStack_7e0 = auVar18._0_8_;
    uStack_7c8 = auVar23._8_8_;
    local_7d0 = auVar23._0_8_;
    uStack_7b8 = auVar19._8_8_;
    uStack_7c0 = auVar19._0_8_;
    uStack_888 = param_1[1] + param_1[6];
    lStack_868 = (param_1[5] + 0xfffffffffffda) - *param_1;
    local_860 = (param_1[6] - param_1[1]) + 0xffffffffffffe;
    puStack_8c0 = &DAT_aaaaaaaaaaaaaaaa;
    local_880 = param_1[2] + param_1[7];
    uStack_878 = param_1[3] + param_1[8];
    local_870 = param_1[4] + param_1[9];
    lStack_858 = (param_1[7] - param_1[2]) + 0xffffffffffffe;
    local_8b0 = &DAT_aaaaaaaaaaaaaaaa;
    local_890 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_8a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_8d0 = &DAT_aaaaaaaaaaaaaaaa;
    local_8e0[0] = &DAT_aaaaaaaaaaaaaaaa;
    local_850 = (param_1[8] - param_1[3]) + 0xffffffffffffe;
    lStack_848 = (param_1[9] - param_1[4]) + 0xffffffffffffe;
    local_820 = param_1[0xe];
    uStack_7a8 = auVar20._8_8_;
    local_7b0 = auVar20._0_8_;
    uStack_798 = auVar21._8_8_;
    uStack_7a0 = auVar21._0_8_;
    uStack_788 = auVar22._8_8_;
    local_790 = auVar22._0_8_;
    uStack_838 = SUB168(*pauVar15,8);
    local_840 = SUB168(*pauVar15,0);
    uStack_828 = SUB168(*(undefined1 (*) [16])(param_1 + 0xc),8);
    uStack_830 = SUB168(*(undefined1 (*) [16])(param_1 + 0xc),0);
    FUN_007866c0(auStack_818,plVar16,&DAT_0020a818);
    FUN_0077fca8(&local_930,param_1,&local_890);
    FUN_007866c0(param_1,&local_930,auStack_8b8);
    FUN_007866c0(plVar13,auStack_908,local_8e0);
    FUN_007866c0(pauVar15,local_8e0,auStack_8b8);
    FUN_007866c0(plVar16,&local_930,auStack_908);
    FUN_00780610(&local_930,param_1,&local_7f0);
    FUN_007866c0(param_1,&local_930,auStack_8b8);
    FUN_007866c0(plVar13,auStack_908,local_8e0);
    FUN_007866c0(pauVar15,local_8e0,auStack_8b8);
    FUN_007866c0(plVar16,&local_930,auStack_908);
    uVar3 = (uint)uVar17 - 1;
    uVar17 = (ulong)uVar3;
  } while (uVar3 < 0x40);
  return;
}


// ===== 00780610  FUN_00780610 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00780610(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar11 = param_2[1];
  lVar10 = *param_2;
  lVar15 = param_2[3];
  lVar14 = param_2[2];
  lVar9 = param_2[6];
  lVar8 = param_2[5];
  lVar13 = param_2[8];
  lVar12 = param_2[7];
  param_1[4] = param_2[4] + param_2[9];
  param_1[1] = lVar11 + lVar9;
  *param_1 = lVar10 + lVar8;
  param_1[3] = lVar15 + lVar13;
  param_1[2] = lVar14 + lVar12;
  lVar13 = param_2[3];
  lVar12 = param_2[2];
  lVar11 = param_2[8];
  lVar10 = param_2[7];
  lVar8 = (param_2[5] - *param_2) + _DAT_001f3a70;
  lVar9 = (param_2[6] - param_2[1]) + _UNK_001f3a78;
  param_1[9] = (param_2[9] - param_2[4]) + 0xffffffffffffe;
  param_1[8] = (lVar11 - lVar13) + 0xffffffffffffe;
  param_1[7] = (lVar10 - lVar12) + 0xffffffffffffe;
  plVar7 = param_1 + 5;
  param_1[6] = lVar9;
  *plVar7 = lVar8;
  FUN_007866c0(&local_90,param_1);
  FUN_007866c0(&local_68,plVar7,param_3 + 0x28);
  FUN_007866c0(&local_b8,param_3 + 0x50,param_2 + 0xf);
  uVar5 = param_2[10];
  lVar8 = param_2[0xe];
  uVar1 = (uVar5 >> 0x32 & 0x1fff) + param_2[0xb] * 2;
  uVar2 = (uVar1 >> 0x33) + param_2[0xc] * 2;
  uVar4 = (uVar2 >> 0x33) + param_2[0xd] * 2;
  *plVar7 = local_68 + local_90;
  uVar3 = (uVar4 >> 0x33) + lVar8 * 2;
  param_1[6] = lStack_60 + lStack_88;
  param_1[7] = local_58 + local_80;
  *param_1 = (local_90 + 0xfffffffffffda) - local_68;
  param_1[1] = (lStack_88 - lStack_60) + 0xffffffffffffe;
  param_1[8] = lStack_50 + lStack_78;
  param_1[9] = local_48 + local_70;
  uVar6 = uVar3 & 0x7ffffffffffff;
  uVar3 = (uVar5 & 0x3ffffffffffff) * 2 + (uVar3 >> 0x33) * 0x13;
  param_1[2] = (local_80 - local_58) + 0xffffffffffffe;
  param_1[3] = (lStack_78 - lStack_50) + 0xffffffffffffe;
  param_1[4] = (local_70 - local_48) + 0xffffffffffffe;
  uVar1 = (uVar1 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  uVar3 = uVar3 & 0x7ffffffffffff;
  uVar5 = uVar1 & 0x7ffffffffffff;
  lVar8 = (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  param_1[0xe] = local_98 + uVar6;
  param_1[0xf] = (uVar3 + 0xfffffffffffda) - local_b8;
  uVar4 = uVar4 & 0x7ffffffffffff;
  param_1[10] = local_b8 + uVar3;
  param_1[0xb] = lStack_b0 + uVar5;
  param_1[0xc] = local_a8 + lVar8;
  param_1[0xd] = lStack_a0 + uVar4;
  param_1[0x10] = (uVar5 - lStack_b0) + 0xffffffffffffe;
  param_1[0x11] = (lVar8 - local_a8) + 0xffffffffffffe;
  param_1[0x12] = (uVar4 - lStack_a0) + 0xffffffffffffe;
  param_1[0x13] = (uVar6 - local_98) + 0xffffffffffffe;
  return;
}


// ===== 00780820  FUN_00780820 =====

void FUN_00780820(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
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
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  FUN_0077faf4(&local_88);
  FUN_0077faf4(&local_b0,param_2 + 5);
  FUN_0077faf4(&local_d8,param_2 + 10);
  uVar1 = param_2[9] + param_2[4];
  uVar52 = uVar1 * 0x26;
  uVar2 = param_2[8] + param_2[3];
  uVar53 = uVar2 * 2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar52;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar2;
  uVar51 = uVar1 * 0x13 * uVar1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2 * 0x13;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar2;
  uVar49 = uVar2 * 0x13 * uVar2;
  uVar3 = param_2[7] + param_2[2];
  uVar54 = uVar3 * 2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2 * 0x26;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar3;
  uVar47 = uVar2 * 0x26 * uVar3;
  uVar4 = param_2[5] + *param_2;
  uVar5 = param_2[6] + param_2[1];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar4;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar4;
  uVar43 = uVar47 + uVar4 * uVar4;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar52;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar5;
  uVar44 = uVar43 + uVar52 * uVar5;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar52;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar3;
  uVar6 = (local_d8 >> 0x32 & 0x1fff) + lStack_d0 * 2;
  uVar50 = uVar44 >> 0x33 |
           (SUB168(auVar14 * auVar29,8) + SUB168(auVar15 * auVar30,8) +
            (ulong)CARRY8(uVar47,uVar4 * uVar4) + SUB168(auVar16 * auVar31,8) +
           (ulong)CARRY8(uVar43,uVar52 * uVar5)) * 0x2000;
  uVar43 = uVar53 * uVar5 + uVar3 * uVar3;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar3;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar53;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar5;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar1 * 2;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar4;
  uVar55 = uVar1 * 2 * uVar4;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar54;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar5;
  uVar47 = uVar43 + uVar55;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar5;
  lVar48 = SUB168(auVar19 * auVar34,8) + SUB168(auVar18 * auVar33,8) +
           (ulong)CARRY8(uVar53 * uVar5,uVar3 * uVar3) + SUB168(auVar20 * auVar35,8) +
           (ulong)CARRY8(uVar43,uVar55);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar5 * 2;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar4;
  uVar55 = uVar5 * 2 * uVar4;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar54;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar4;
  uVar43 = uVar49 + uVar55;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar1 * 0x13;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar1;
  uVar1 = uVar43 + uVar52 * uVar3;
  lVar42 = SUB168(auVar13 * auVar28,8) + SUB168(auVar23 * auVar38,8) + (ulong)CARRY8(uVar49,uVar55)
           + SUB168(auVar17 * auVar32,8) + (ulong)CARRY8(uVar43,uVar52 * uVar3);
  uVar3 = uVar1 + uVar50;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar53;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar4;
  if (CARRY8(uVar1,uVar50)) {
    lVar42 = lVar42 + 1;
  }
  uVar1 = uVar54 * uVar4 + uVar5 * uVar5;
  uVar49 = uVar3 >> 0x33 | lVar42 << 0xd;
  uVar43 = uVar1 + uVar52 * uVar2;
  uVar55 = (uVar6 >> 0x33) + local_c8 * 2;
  lVar42 = SUB168(auVar24 * auVar39,8) + SUB168(auVar22 * auVar37,8) +
           (ulong)CARRY8(uVar54 * uVar4,uVar5 * uVar5) + SUB168(auVar12 * auVar27,8) +
           (ulong)CARRY8(uVar1,uVar52 * uVar2);
  uVar1 = uVar43 + uVar49;
  if (CARRY8(uVar43,uVar49)) {
    lVar42 = lVar42 + 1;
  }
  uVar2 = uVar53 * uVar4 + uVar54 * uVar5;
  uVar50 = uVar1 >> 0x33 | lVar42 << 0xd;
  uVar43 = uVar2 + uVar51;
  uVar49 = (uVar55 >> 0x33) + lStack_c0 * 2;
  lVar42 = SUB168(auVar26 * auVar41,8) + SUB168(auVar21 * auVar36,8) +
           (ulong)CARRY8(uVar53 * uVar4,uVar54 * uVar5) + SUB168(auVar25 * auVar40,8) +
           (ulong)CARRY8(uVar2,uVar51);
  uVar2 = uVar43 + uVar50;
  if (CARRY8(uVar43,uVar50)) {
    lVar42 = lVar42 + 1;
  }
  uVar43 = uVar2 >> 0x33 | lVar42 << 0xd;
  uVar4 = (uVar49 >> 0x33) + local_b8 * 2;
  uVar5 = uVar47 + uVar43;
  if (CARRY8(uVar47,uVar43)) {
    lVar48 = lVar48 + 1;
  }
  uVar43 = local_88 + local_b0;
  uVar47 = lStack_80 + lStack_a8 + (uVar43 >> 0x33);
  uVar56 = (local_b0 + 0xfffffffffffda) - local_88;
  lVar42 = (lStack_a8 - lStack_80) + 0xffffffffffffe;
  param_1[6] = lStack_80 + lStack_a8;
  param_1[7] = local_78 + local_a0;
  uVar50 = local_78 + local_a0 + (uVar47 >> 0x33);
  uVar51 = lVar42 + (uVar56 >> 0x33);
  lVar7 = (local_a0 - local_78) + 0xffffffffffffe;
  param_1[5] = uVar43;
  uVar52 = lStack_70 + lStack_98 + (uVar50 >> 0x33);
  uVar53 = lVar7 + (uVar51 >> 0x33);
  param_1[8] = lStack_70 + lStack_98;
  param_1[9] = local_68 + local_90;
  lVar8 = (lStack_98 - lStack_70) + 0xffffffffffffe;
  uVar54 = local_68 + local_90 + (uVar52 >> 0x33);
  uVar9 = lVar8 + (uVar53 >> 0x33);
  lVar10 = (local_90 - local_68) + 0xffffffffffffe;
  param_1[10] = uVar56;
  param_1[0xb] = lVar42;
  uVar11 = lVar10 + (uVar9 >> 0x33);
  uVar45 = (uVar44 & 0x7ffffffffffff) + (uVar5 >> 0x33 | lVar48 << 0xd) * 0x13;
  param_1[0xc] = lVar7;
  param_1[0xd] = lVar8;
  uVar46 = (uVar43 & 0x7ffffffffffff) + (uVar54 >> 0x33) * 0x13;
  uVar44 = (local_d8 & 0x3ffffffffffff) * 2 + (uVar4 >> 0x33) * 0x13;
  uVar56 = (uVar56 & 0x7ffffffffffff) + (uVar11 >> 0x33) * 0x13;
  uVar43 = (uVar47 & 0x7ffffffffffff) + (uVar46 >> 0x33);
  uVar3 = (uVar3 & 0x7ffffffffffff) + (uVar45 >> 0x33);
  param_1[4] = ((uVar5 & 0x7ffffffffffff) - (uVar54 & 0x7ffffffffffff)) + 0xffffffffffffe;
  *param_1 = ((uVar45 & 0x7ffffffffffff) - (uVar46 & 0x7ffffffffffff)) + 0xfffffffffffda;
  param_1[1] = ((uVar3 & 0x7ffffffffffff) - (uVar43 & 0x7ffffffffffff)) + 0xffffffffffffe;
  uVar5 = (uVar51 & 0x7ffffffffffff) + (uVar56 >> 0x33);
  param_1[2] = ((uVar1 & 0x7ffffffffffff) - ((uVar50 & 0x7ffffffffffff) + (uVar43 >> 0x33))) +
               (uVar3 >> 0x33) + 0xffffffffffffe;
  param_1[3] = ((uVar2 & 0x7ffffffffffff) - (uVar52 & 0x7ffffffffffff)) + 0xffffffffffffe;
  uVar1 = (uVar6 & 0x7ffffffffffff) + (uVar44 >> 0x33);
  param_1[0xe] = lVar10;
  param_1[0xf] = ((uVar44 & 0x7ffffffffffff) + 0xfffffffffffda) - (uVar56 & 0x7ffffffffffff);
  param_1[0x10] = ((uVar1 & 0x7ffffffffffff) - (uVar5 & 0x7ffffffffffff)) + 0xffffffffffffe;
  param_1[0x11] =
       (((uVar55 & 0x7ffffffffffff) + (uVar1 >> 0x33)) -
       ((uVar53 & 0x7ffffffffffff) + (uVar5 >> 0x33))) + 0xffffffffffffe;
  param_1[0x12] = ((uVar49 & 0x7ffffffffffff) - (uVar9 & 0x7ffffffffffff)) + 0xffffffffffffe;
  param_1[0x13] = ((uVar4 & 0x7ffffffffffff) - (uVar11 & 0x7ffffffffffff)) + 0xffffffffffffe;
  return;
}


// ===== 00780be0  FUN_00780be0 =====

void FUN_00780be0(ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  
  uVar10 = *(uint *)(param_1 + 0x1e) >> 3;
  uVar31 = (ulong)uVar10;
  uVar23 = (ulong)((*(uint *)(param_1 + 0x16) >> 0x18 | (uint)(byte)param_1[0x18] << 8 |
                   (uint)*(byte *)((long)param_1 + 0x31) << 0x10) >> 2) & 0x1fffff;
  lVar12 = ((ulong)param_1[0x15] | ((ulong)(byte)param_1[0x16] & 0x1f) << 0x10) +
           (long)(int)uVar10 * -0xa6f7d;
  uVar11 = (ulong)(*(uint *)((long)param_1 + 0x39) >> 6) & 0x1fffff;
  uVar14 = (ulong)(*(uint *)((long)param_1 + 0x31) >> 7) & 0x1fffff;
  lVar25 = ((ulong)(*(uint *)((long)param_1 + 0xf) >> 6) & 0x1fffff) + uVar23 * 0xa2c13;
  uVar17 = (ulong)(*(uint *)(param_1 + 0x1a) >> 4) & 0x1fffff;
  uVar16 = (ulong)((*(uint *)(param_1 + 0x1a) >> 0x18 | (uint)(byte)param_1[0x1c] << 8 |
                   (uint)*(byte *)((long)param_1 + 0x39) << 0x10) >> 1) & 0x1fffff;
  uVar1 = lVar12 + 0x100000;
  lVar15 = ((ulong)(*(uint *)(param_1 + 0x16) >> 5) & 0x1fffff) + ((long)uVar1 >> 0x15);
  lVar18 = ((ulong)(*(uint *)(param_1 + 0x12) >> 6) & 0x1fffff) + (long)(int)uVar10 * -0xf39ad +
           uVar11 * 0x215d1 + (long)(int)uVar16 * -0xa6f7d;
  uVar2 = lVar25 + 0x100000;
  lVar28 = ((ulong)*(ushort *)((long)param_1 + 0x15) |
           ((ulong)*(byte *)((long)param_1 + 0x17) & 0x1f) << 0x10) + uVar14 * 0x72d18 +
           uVar17 * 0xa2c13 + uVar23 * 0x9fb67;
  lVar20 = (((ulong)(*(uint *)((long)param_1 + 0xf) >> 0x18) |
             (ulong)*(byte *)((long)param_1 + 0x13) << 8 | (ulong)(byte)param_1[10] << 0x10) >> 3) +
           uVar14 * 0xa2c13 + uVar23 * 0x72d18 + (uVar2 >> 0x15);
  uVar3 = lVar18 + 0x100000;
  uVar4 = lVar20 + 0x100000;
  lVar13 = (((ulong)(*(uint *)(param_1 + 0x12) >> 0x18) | (ulong)(byte)param_1[0x14] << 8 |
            (ulong)*(byte *)((long)param_1 + 0x29) << 0x10) >> 3) + (ulong)uVar10 * 0x215d1 +
           (long)(int)uVar11 * -0xa6f7d + ((long)uVar3 >> 0x15);
  uVar5 = lVar13 + 0x100000;
  lVar12 = (lVar12 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  lVar13 = lVar13 - (uVar5 & 0xffffffffffe00000);
  lVar26 = ((ulong)(*(uint *)((long)param_1 + 0x1f) >> 4) & 0x1fffff) + (long)(int)uVar14 * -0xa6f7d
           + uVar17 * 0x215d1 + uVar31 * 0x72d18 + uVar11 * 0x9fb67 + (long)(int)uVar16 * -0xf39ad;
  lVar30 = ((ulong)((*(uint *)((long)param_1 + 0x1f) >> 0x18 |
                     (uint)*(byte *)((long)param_1 + 0x23) << 8 | (uint)(byte)param_1[0x12] << 0x10)
                   >> 1) & 0x1fffff) + (long)(int)uVar17 * -0xa6f7d + uVar31 * 0x9fb67 +
           (long)(int)uVar11 * -0xf39ad + uVar16 * 0x215d1 + (lVar26 + 0x100000 >> 0x15);
  uVar1 = lVar30 + 0x100000;
  lVar18 = (lVar18 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar22 = ((ulong)((*(uint *)((long)param_1 + 0x17) >> 0x18 |
                     (uint)*(byte *)((long)param_1 + 0x1b) << 8 | (uint)(byte)param_1[0xe] << 0x10)
                   >> 2) & 0x1fffff) + (long)(int)uVar14 * -0xf39ad + uVar17 * 0x9fb67 +
           uVar23 * 0x215d1 + uVar11 * 0xa2c13 + uVar16 * 0x72d18;
  lVar30 = lVar30 - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar22 + 0x100000;
  lVar6 = ((ulong)(*(uint *)(param_1 + 0xe) >> 7) & 0x1fffff) + uVar14 * 0x215d1 +
          (long)(int)uVar17 * -0xf39ad + (long)(int)uVar23 * -0xa6f7d + uVar31 * 0xa2c13 +
          uVar11 * 0x72d18 + uVar16 * 0x9fb67 + ((long)uVar1 >> 0x15);
  uVar3 = lVar6 + 0x100000;
  lVar26 = (lVar26 - (lVar26 + 0x100000U & 0xffffffffffe00000)) + ((long)uVar3 >> 0x15);
  lVar21 = ((ulong)*param_1 | ((ulong)(byte)param_1[1] & 0x1f) << 0x10) + lVar26 * 0xa2c13;
  lVar7 = ((ulong)(*(uint *)((long)param_1 + 0x17) >> 5) & 0x1fffff) + uVar14 * 0x9fb67 +
          uVar17 * 0x72d18 + (long)(int)uVar23 * -0xf39ad + uVar16 * 0xa2c13 +
          (lVar28 + 0x100000U >> 0x15);
  uVar5 = lVar7 + 0x100000;
  lVar22 = ((lVar22 + lVar15 * -0xa6f7d) - (uVar1 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  uVar1 = lVar22 + 0x100000;
  lVar6 = (lVar6 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar27 = ((ulong)((*(uint *)(param_1 + 1) >> 0x18 | (uint)(byte)param_1[3] << 8 |
                    (uint)*(byte *)((long)param_1 + 7) << 0x10) >> 2) & 0x1fffff) + lVar18 * 0xa2c13
           + lVar30 * 0x72d18 + lVar26 * 0x9fb67;
  uVar3 = lVar6 + 0x100000;
  uVar11 = lVar21 + 0x100000;
  lVar19 = ((ulong)(*(uint *)(param_1 + 5) >> 4) & 0x1fffff) + lVar12 * 0xa2c13 + lVar13 * 0x72d18 +
           lVar18 * 0x9fb67 + lVar30 * -0xf39ad + lVar26 * 0x215d1;
  lVar29 = (long)uVar3 >> 0x15;
  uVar24 = (lVar21 - (uVar11 & 0xffffffffffe00000)) + lVar29 * 0xa2c13;
  lVar21 = ((ulong)(*(uint *)(param_1 + 1) >> 5) & 0x1fffff) + lVar30 * 0xa2c13 + lVar26 * 0x72d18 +
           ((long)uVar11 >> 0x15);
  uVar11 = lVar21 + 0x100000;
  uVar14 = lVar27 + 0x100000;
  lVar8 = ((ulong)(*(uint *)((long)param_1 + 7) >> 7) & 0x1fffff) + lVar13 * 0xa2c13 +
          lVar18 * 0x72d18 + lVar30 * 0x9fb67 + lVar26 * -0xf39ad + ((long)uVar14 >> 0x15);
  lVar25 = (lVar25 - (uVar2 & 0x7ffffe00000)) + lVar15 * 0x72d18 + lVar12 * 0x9fb67 +
           lVar13 * -0xf39ad + lVar18 * 0x215d1 + lVar30 * -0xa6f7d;
  uVar23 = ((lVar21 + lVar29 * 0x72d18) - (uVar11 & 0xffffffffffe00000)) + ((long)uVar24 >> 0x15);
  uVar2 = lVar8 + 0x100000;
  uVar16 = lVar19 + 0x100000;
  uVar17 = lVar25 + 0x100000;
  lVar30 = ((ulong)((*(uint *)(param_1 + 5) >> 0x18 | (uint)(byte)param_1[7] << 8 |
                    (uint)*(byte *)((long)param_1 + 0xf) << 0x10) >> 1) & 0x1fffff) +
           lVar15 * 0xa2c13 + lVar12 * 0x72d18 + lVar13 * 0x9fb67 + lVar18 * -0xf39ad +
           lVar30 * 0x215d1 + lVar26 * -0xa6f7d + ((long)uVar16 >> 0x15);
  uVar14 = ((lVar27 + lVar29 * 0x9fb67) - (uVar14 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15) +
           ((long)uVar23 >> 0x15);
  uVar31 = ((lVar8 + lVar29 * -0xf39ad) - (uVar2 & 0xffffffffffe00000)) + ((long)uVar14 >> 0x15);
  uVar11 = lVar30 + 0x100000;
  lVar26 = (lVar28 - (lVar28 + 0x100000U & 0xfffffe00000)) + (uVar4 >> 0x15) + lVar15 * -0xf39ad +
           lVar12 * 0x215d1 + lVar13 * -0xa6f7d;
  uVar16 = ((lVar19 + lVar29 * 0x215d1) - (uVar16 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15) +
           ((long)uVar31 >> 0x15);
  uVar9 = ((lVar30 + lVar29 * -0xa6f7d) - (uVar11 & 0xffffffffffe00000)) + ((long)uVar16 >> 0x15);
  lVar20 = (lVar20 - (uVar4 & 0x7fffffffffe00000)) + lVar15 * 0x9fb67 + lVar12 * -0xf39ad +
           lVar13 * 0x215d1 + lVar18 * -0xa6f7d + ((long)uVar17 >> 0x15);
  uVar2 = lVar26 + 0x100000;
  uVar11 = (lVar25 - (uVar17 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15) + ((long)uVar9 >> 0x15)
  ;
  uVar4 = lVar20 + 0x100000;
  lVar15 = ((lVar7 + lVar15 * 0x215d1) - (uVar5 & 0xffffffffffe00000)) + lVar12 * -0xa6f7d +
           ((long)uVar2 >> 0x15);
  uVar17 = (lVar20 - (uVar4 & 0xffffffffffe00000)) + ((long)uVar11 >> 0x15);
  uVar5 = lVar15 + 0x100000;
  uVar2 = (lVar26 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15) + ((long)uVar17 >> 0x15);
  uVar4 = (lVar15 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar1 = (lVar22 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) + ((long)uVar4 >> 0x15);
  uVar3 = (lVar6 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar15 = (long)uVar3 >> 0x15;
  lVar20 = (uVar24 & 0x1fffff) + lVar15 * 0xa2c13;
  *(char *)param_1 = (char)lVar20;
  uVar5 = (uVar23 & 0x1fffff) + lVar15 * 0x72d18 + (lVar20 >> 0x15);
  *(char *)((long)param_1 + 1) = (char)((ulong)lVar20 >> 8);
  uVar14 = (uVar14 & 0x1fffff) + lVar15 * 0x9fb67 + ((long)uVar5 >> 0x15);
  *(byte *)(param_1 + 1) = (byte)((ulong)lVar20 >> 0x10) & 0x1f | (byte)((uint)uVar5 << 5);
  uVar23 = (uVar31 & 0x1fffff) + lVar15 * -0xf39ad + ((long)uVar14 >> 0x15);
  *(char *)((long)param_1 + 3) = (char)(uVar5 >> 3);
  *(char *)(param_1 + 2) = (char)(uVar5 >> 0xb);
  uVar16 = (uVar16 & 0x1fffff) + lVar15 * 0x215d1 + ((long)uVar23 >> 0x15);
  *(byte *)((long)param_1 + 5) = (byte)((uint)uVar5 >> 0x13) & 3 | (byte)((uint)uVar14 << 2);
  *(char *)(param_1 + 3) = (char)(uVar14 >> 6);
  *(byte *)((long)param_1 + 7) = (byte)((uint)uVar14 >> 0xe) & 0x7f | (byte)((uint)uVar23 << 7);
  uVar5 = (uVar9 & 0x1fffff) + lVar15 * -0xa6f7d + ((long)uVar16 >> 0x15);
  *(char *)(param_1 + 4) = (char)(uVar23 >> 1);
  *(char *)((long)param_1 + 9) = (char)(uVar23 >> 9);
  uVar11 = (uVar11 & 0x1fffff) + ((long)uVar5 >> 0x15);
  *(byte *)(param_1 + 5) = (byte)((uint)uVar23 >> 0x11) & 0xf | (byte)((uint)uVar16 << 4);
  *(char *)((long)param_1 + 0xb) = (char)(uVar16 >> 4);
  *(char *)(param_1 + 6) = (char)(uVar16 >> 0xc);
  uVar14 = (uVar17 & 0x1fffff) + ((long)uVar11 >> 0x15);
  *(byte *)((long)param_1 + 0xd) = (byte)((uint)uVar16 >> 0x14) & 1 | (byte)((uint)uVar5 << 1);
  *(char *)(param_1 + 7) = (char)(uVar5 >> 7);
  *(byte *)((long)param_1 + 0xf) = (byte)((uint)uVar5 >> 0xf) & 0x3f | (byte)((uint)uVar11 << 6);
  *(char *)(param_1 + 8) = (char)(uVar11 >> 2);
  lVar15 = (uVar2 & 0x1fffff) + ((long)uVar14 >> 0x15);
  *(char *)((long)param_1 + 0x11) = (char)(uVar11 >> 10);
  *(byte *)(param_1 + 9) = (byte)((uint)uVar11 >> 0x12) & 7 | (byte)((int)uVar14 << 3);
  uVar2 = (uVar4 & 0x1fffff) + (lVar15 >> 0x15);
  *(char *)((long)param_1 + 0x13) = (char)(uVar14 >> 5);
  *(char *)(param_1 + 10) = (char)(uVar14 >> 0xd);
  uVar1 = (uVar1 & 0x1fffff) + ((long)uVar2 >> 0x15);
  *(char *)((long)param_1 + 0x15) = (char)lVar15;
  *(char *)(param_1 + 0xb) = (char)((ulong)lVar15 >> 8);
  *(byte *)((long)param_1 + 0x17) = (byte)((ulong)lVar15 >> 0x10) & 0x1f | (byte)((uint)uVar2 << 5);
  *(char *)(param_1 + 0xc) = (char)(uVar2 >> 3);
  uVar4 = ((long)uVar1 >> 0x15) + (uVar3 & 0x1fffff);
  *(char *)((long)param_1 + 0x19) = (char)(uVar2 >> 0xb);
  *(byte *)(param_1 + 0xd) = (byte)((uint)uVar2 >> 0x13) & 3 | (byte)((uint)uVar1 << 2);
  *(char *)((long)param_1 + 0x1b) = (char)(uVar1 >> 6);
  *(byte *)(param_1 + 0xe) = (byte)((uint)uVar1 >> 0xe) & 0x7f | (byte)((int)uVar4 << 7);
  *(char *)((long)param_1 + 0x1d) = (char)((uint)((int)((long)uVar1 >> 0x15) + (int)uVar3) >> 1);
  *(char *)(param_1 + 0xf) = (char)(uVar4 >> 9);
  *(char *)((long)param_1 + 0x1f) = (char)(uVar4 >> 0x11);
  return;
}


// ===== 00781324  FUN_00781324 =====

void FUN_00781324(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00793258(&local_60,0x20);
  FUN_007813a0(param_1,param_2,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007813a0  FUN_007813a0 =====

void FUN_007813a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [40];
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  char local_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007950ec(param_3,0x20,&local_b0);
  local_b0 = (undefined1 *)((ulong)local_b0 & 0xfffffffffffffff8);
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
  puStack_98 = (undefined1 *)((ulong)puStack_98 & 0x3fffffffffffffff | 0x4000000000000000);
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007800f0(&local_1d0,&local_b0,&DAT_0020a840);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007848ec(&local_e0,&puStack_180);
  FUN_007866c0(auStack_108,&local_1d0,&local_e0);
  FUN_007866c0(auStack_130,&puStack_1a8,&local_e0);
  FUN_0077d770(param_1,auStack_130);
  FUN_0077d770(local_68,auStack_108);
  *(byte *)((long)param_1 + 0x1f) = *(byte *)((long)param_1 + 0x1f) ^ local_68[0] << 7;
  uVar4 = *param_3;
  uVar3 = param_3[3];
  uVar2 = param_3[2];
  param_2[1] = param_3[1];
  *param_2 = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  uVar4 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[5] = param_1[1];
  param_2[4] = uVar4;
  param_2[7] = uVar3;
  param_2[6] = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007814dc  FUN_007814dc =====

undefined8 FUN_007814dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  ulong uVar54;
  long lVar55;
  ulong uVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  ulong uVar60;
  ulong uVar61;
  undefined1 *local_320;
  undefined1 *puStack_318;
  undefined1 *puStack_310;
  undefined1 *puStack_308;
  undefined1 *local_300;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 *local_2e0;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 auStack_280 [40];
  undefined1 auStack_258 [40];
  ushort local_230;
  uint uStack_22e;
  byte bStack_22a;
  byte bStack_229;
  undefined2 uStack_228;
  uint uStack_226;
  byte bStack_222;
  uint uStack_221;
  byte local_21d;
  byte local_21c;
  ushort local_21b;
  uint local_219;
  byte local_215;
  uint local_214;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  ushort local_1f0;
  uint uStack_1ee;
  byte bStack_1ea;
  byte bStack_1e9;
  undefined2 uStack_1e8;
  uint uStack_1e6;
  byte bStack_1e2;
  uint uStack_1e1;
  byte local_1dd;
  byte local_1dc;
  ushort local_1db;
  uint local_1d9;
  byte local_1d5;
  uint local_1d4;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
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
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  byte local_e0;
  undefined1 uStack_df;
  uint uStack_de;
  byte bStack_da;
  byte bStack_d9;
  undefined2 uStack_d8;
  uint uStack_d6;
  byte bStack_d2;
  uint uStack_d1;
  byte local_cd;
  byte local_cc;
  ushort local_cb;
  uint local_c9;
  byte local_c5;
  byte local_c4;
  undefined2 uStack_c3;
  byte bStack_c1;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  char local_98 [32];
  long local_78;
  
  lVar23 = tpidr_el0;
  local_78 = *(long *)(lVar23 + 0x28);
  uStack_d8 = 0xaaaa;
  uStack_d6 = 0xaaaaaaaa;
  bStack_d2 = 0xaa;
  local_e0 = 0xaa;
  uStack_df = 0xaa;
  uStack_de = 0xaaaaaaaa;
  bStack_da = 0xaa;
  bStack_d9 = 0xaa;
  local_c5 = 0xaa;
  local_c4 = 0xaa;
  uStack_c3 = 0xaaaa;
  bStack_c1 = 0xaa;
  uStack_d1 = 0xaaaaaaaa;
  local_cd = 0xaa;
  local_cc = 0xaa;
  local_cb = 0xaaaa;
  local_c9 = 0xaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007950ec(param_4,0x20,&local_e0);
  bStack_c1 = bStack_c1 & 0x3f | 0x40;
  local_e0 = local_e0 & 0xf8;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00795084(&local_1b0);
  FUN_007950a4(&local_1b0,&local_c0,0x20);
  FUN_007950a4(&local_1b0,param_2,param_3);
  uStack_1e8 = 0xaaaa;
  uStack_1e6 = 0xaaaaaaaa;
  bStack_1e2 = 0xaa;
  local_1f0 = 0xaaaa;
  uStack_1ee = 0xaaaaaaaa;
  bStack_1ea = 0xaa;
  bStack_1e9 = 0xaa;
  local_1d5 = 0xaa;
  local_1d4 = 0xaaaaaaaa;
  uStack_1e1 = 0xaaaaaaaa;
  local_1dd = 0xaa;
  local_1dc = 0xaa;
  local_1db = 0xaaaa;
  local_1d9 = 0xaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007950c4(&local_1f0,&local_1b0);
  FUN_00780be0(&local_1f0);
  puStack_318 = &DAT_aaaaaaaaaaaaaaaa;
  local_320 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_308 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_310 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_300 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_298 = &DAT_aaaaaaaaaaaaaaaa;
  local_2a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_290 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007800f0(&local_320,&local_1f0,&DAT_0020a840);
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_228 = 0xaaaa;
  uStack_226 = 0xaaaaaaaa;
  bStack_222 = 0xaa;
  local_230 = 0xaaaa;
  uStack_22e = 0xaaaaaaaa;
  bStack_22a = 0xaa;
  bStack_229 = 0xaa;
  local_215 = 0xaa;
  local_214 = 0xaaaaaaaa;
  uStack_221 = 0xaaaaaaaa;
  local_21d = 0xaa;
  local_21c = 0xaa;
  local_21b = 0xaaaa;
  local_219 = 0xaaaaaaaa;
  FUN_007848ec(&local_230,&puStack_2d0);
  FUN_007866c0(auStack_258,&local_320,&local_230);
  FUN_007866c0(auStack_280,&puStack_2f8,&local_230);
  FUN_0077d770(param_1,auStack_280);
  FUN_0077d770(local_98,auStack_258);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_98[0] << 7;
  FUN_00795084(&local_1b0);
  FUN_007950a4(&local_1b0,param_1,0x20);
  FUN_007950a4(&local_1b0,param_4 + 0x20,0x20);
  FUN_007950a4(&local_1b0,param_2,param_3);
  uStack_228 = 0xaaaa;
  uStack_226 = 0xaaaaaaaa;
  bStack_222 = 0xaa;
  local_230 = 0xaaaa;
  uStack_22e = 0xaaaaaaaa;
  bStack_22a = 0xaa;
  bStack_229 = 0xaa;
  local_215 = 0xaa;
  local_214 = 0xaaaaaaaa;
  uStack_221 = 0xaaaaaaaa;
  local_21d = 0xaa;
  local_21c = 0xaa;
  local_21b = 0xaaaa;
  local_219 = 0xaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007950c4(&local_230,&local_1b0);
  FUN_00780be0(&local_230);
  uVar26 = (ulong)(uStack_226 >> 4) & 0x1fffff;
  uVar50 = (ulong)(CONCAT13((undefined1)uStack_226,CONCAT21(uStack_228,bStack_229)) >> 7) & 0x1fffff
  ;
  uVar51 = ((ulong)(uStack_221 >> 0x18) | (ulong)local_21d << 8 | (ulong)local_21c << 0x10) >> 3;
  uVar32 = (ulong)((uStack_226 >> 0x18 | (uint)bStack_222 << 8 | (uStack_221 & 0xff) << 0x10) >> 1)
           & 0x1fffff;
  uVar20 = (ulong)local_21b | ((ulong)(byte)local_219 & 0x1f) << 0x10;
  uVar54 = (ulong)((local_219 >> 0x18 | (uint)local_215 << 8 | (local_214 & 0xff) << 0x10) >> 2) &
           0x1fffff;
  uVar52 = (ulong)(uStack_221 >> 6) & 0x1fffff;
  uVar24 = (ulong)(local_214 >> 7);
  uVar45 = (ulong)(local_219 >> 5) & 0x1fffff;
  uVar48 = (ulong)(uStack_de >> 5) & 0x1fffff;
  uVar25 = (ulong)((uStack_de >> 0x18 | (uint)bStack_da << 8 | (uint)bStack_d9 << 0x10) >> 2) &
           0x1fffff;
  uVar27 = (ulong)(CONCAT13((undefined1)uStack_d6,CONCAT21(uStack_d8,bStack_d9)) >> 7) & 0x1fffff;
  uVar30 = (ulong)(uStack_d6 >> 4) & 0x1fffff;
  uVar56 = (ulong)(uStack_d1 >> 6) & 0x1fffff;
  uVar44 = (ulong)((uStack_d6 >> 0x18 | (uint)bStack_d2 << 8 | (uStack_d1 & 0xff) << 0x10) >> 1) &
           0x1fffff;
  uVar49 = ((ulong)(uStack_d1 >> 0x18) | (ulong)local_cd << 8 | (ulong)local_cc << 0x10) >> 3;
  uVar61 = (ulong)(local_c9 >> 5) & 0x1fffff;
  uVar47 = (ulong)local_cb | ((ulong)(byte)local_c9 & 0x1f) << 0x10;
  uVar42 = (ulong)(uStack_22e >> 5) & 0x1fffff;
  uVar37 = (ulong)(CONCAT13(bStack_c1,CONCAT21(uStack_c3,local_c4)) >> 7);
  uVar41 = (ulong)((uStack_22e >> 0x18 | (uint)bStack_22a << 8 | (uint)bStack_229 << 0x10) >> 2) &
           0x1fffff;
  uVar60 = (ulong)((local_c9 >> 0x18 | (uint)local_c5 << 8 | (uint)local_c4 << 0x10) >> 2) &
           0x1fffff;
  lVar33 = uVar48 * uVar24 + uVar27 * uVar45 + uVar20 * uVar30 + uVar25 * uVar54 + uVar56 * uVar52 +
           uVar44 * uVar51 + uVar49 * uVar32 + uVar61 * uVar50 + uVar47 * uVar26 + uVar37 * uVar42 +
           uVar60 * uVar41;
  lVar34 = uVar27 * uVar24 + uVar54 * uVar30 + uVar20 * uVar56 + uVar44 * uVar45 + uVar49 * uVar51 +
           uVar32 * uVar61 + uVar47 * uVar52 + uVar37 * uVar50 + uVar60 * uVar26;
  lVar46 = uVar61 * uVar24 + uVar37 * uVar45 + uVar60 * uVar54;
  uVar1 = uVar37 * uVar24 + 0x100000;
  uVar28 = uVar1 >> 0x15;
  lVar39 = uVar54 * uVar37 + uVar60 * uVar24 + (lVar46 + 0x100000U >> 0x15);
  uVar2 = lVar34 + 0x100000;
  uVar3 = lVar33 + 0x100000;
  lVar38 = uVar54 * uVar27 + uVar30 * uVar45 + uVar25 * uVar24 + uVar51 * uVar56 + uVar44 * uVar20 +
           uVar49 * uVar52 + uVar61 * uVar26 + uVar47 * uVar32 + uVar41 * uVar37 + uVar60 * uVar50 +
           (uVar3 >> 0x15);
  lVar12 = (uVar37 * uVar24 - (uVar1 & 0x7ffffffe00000)) + (lVar39 + 0x100000U >> 0x15);
  uVar1 = lVar38 + 0x100000;
  lVar53 = uVar30 * uVar24 + uVar56 * uVar45 + uVar44 * uVar54 + uVar49 * uVar20 + uVar61 * uVar52 +
           uVar47 * uVar51 + uVar37 * uVar26 + uVar60 * uVar32 + (uVar2 >> 0x15);
  uVar4 = lVar53 + 0x100000;
  lVar39 = lVar39 - (lVar39 + 0x100000U & 0x1ffffffe00000);
  lVar35 = ((lVar34 + (long)(int)uVar28 * -0xf39ad) - (uVar2 & 0xffffffffffe00000)) +
           (uVar1 >> 0x15) + lVar12 * 0x215d1 + lVar39 * -0xa6f7d;
  lVar43 = uVar49 * uVar24 + uVar61 * uVar45 + uVar47 * uVar54 + uVar51 * uVar37 + uVar60 * uVar20;
  uVar2 = lVar43 + 0x100000;
  lVar34 = uVar54 * uVar61 + uVar47 * uVar24 + uVar20 * uVar37 + uVar60 * uVar45 + (uVar2 >> 0x15);
  uVar5 = lVar34 + 0x100000;
  lVar46 = (lVar46 - (lVar46 + 0x100000U & 0x1ffffffe00000)) + (uVar5 >> 0x15);
  lVar34 = lVar34 - (uVar5 & 0xffffffffffe00000);
  uVar21 = (ulong)CONCAT11(uStack_df,local_e0) | ((ulong)(byte)uStack_de & 0x1f) << 0x10;
  uVar22 = (ulong)local_230 | ((ulong)(byte)uStack_22e & 0x1f) << 0x10;
  lVar55 = uVar54 * uVar56 + uVar44 * uVar24 + uVar49 * uVar45 + uVar51 * uVar61 + uVar47 * uVar20 +
           uVar32 * uVar37 + uVar60 * uVar52;
  uVar5 = lVar55 + 0x100000;
  lVar13 = uVar56 * uVar24 + uVar49 * uVar54 + uVar20 * uVar61 + uVar47 * uVar45 + uVar37 * uVar52 +
           uVar60 * uVar51 + (uVar5 >> 0x15);
  lVar43 = (lVar43 - (uVar2 & 0xffffffffffe00000)) + (lVar13 + 0x100000U >> 0x15);
  lVar14 = uVar48 * uVar42 + uVar21 * uVar41 + uVar25 * uVar22 +
           ((ulong)((uStack_1ee >> 0x18 | (uint)bStack_1ea << 8 | (uint)bStack_1e9 << 0x10) >> 2) &
           0x1fffff);
  lVar55 = ((lVar55 + (long)(int)uVar28 * -0xa6f7d) - (uVar5 & 0xffffffffffe00000)) +
           (uVar4 >> 0x15);
  lVar29 = uVar32 * uVar48 + uVar21 * uVar52 + uVar27 * uVar50 + uVar41 * uVar30 + uVar25 * uVar26 +
           uVar22 * uVar56 + uVar44 * uVar42 + ((ulong)(uStack_1e1 >> 6) & 0x1fffff);
  lVar31 = uVar48 * uVar50 + uVar21 * uVar26 + uVar27 * uVar42 + uVar22 * uVar30 + uVar25 * uVar41 +
           ((ulong)(uStack_1e6 >> 4) & 0x1fffff);
  uVar2 = lVar55 + 0x100000;
  uVar5 = lVar35 + 0x100000;
  lVar53 = ((lVar53 + uVar28 * 0x215d1) - (uVar4 & 0xffffffffffe00000)) + lVar12 * -0xa6f7d +
           ((long)uVar5 >> 0x15);
  uVar4 = lVar14 + 0x100000;
  uVar6 = lVar31 + 0x100000;
  lVar15 = uVar41 * uVar48 + uVar21 * uVar50 + uVar22 * uVar27 + uVar25 * uVar42 +
           ((ulong)(CONCAT13((undefined1)uStack_1e6,CONCAT21(uStack_1e8,bStack_1e9)) >> 7) &
           0x1fffff) + (uVar4 >> 0x15);
  uVar7 = lVar53 + 0x100000;
  lVar55 = (lVar55 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar7 >> 0x15);
  uVar8 = lVar15 + 0x100000;
  lVar53 = lVar53 - (uVar7 & 0xffffffffffe00000);
  lVar16 = uVar48 * uVar26 + uVar21 * uVar32 + uVar41 * uVar27 + uVar30 * uVar42 + uVar25 * uVar50 +
           uVar44 * uVar22 + (uVar6 >> 0x15) +
           ((ulong)((uStack_1e6 >> 0x18 | (uint)bStack_1e2 << 8 | (uStack_1e1 & 0xff) << 0x10) >> 1)
           & 0x1fffff);
  lVar13 = (lVar13 - (lVar13 + 0x100000U & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  uVar2 = lVar29 + 0x100000;
  uVar7 = lVar16 + 0x100000;
  lVar29 = ((lVar29 + lVar43 * 0xa2c13) - (uVar2 & 0xffffffffffe00000)) + (uVar7 >> 0x15);
  lVar40 = uVar51 * uVar48 + uVar21 * uVar20 + uVar32 * uVar27 + uVar30 * uVar26 + uVar25 * uVar52 +
           uVar41 * uVar56 + uVar44 * uVar50 + uVar49 * uVar42 + uVar47 * uVar22 +
           (ulong)local_1db + ((ulong)(byte)local_1d9 & 0x1f) * 0x10000;
  uVar9 = lVar29 + 0x100000;
  lVar17 = uVar48 * uVar45 + uVar21 * uVar54 + uVar51 * uVar27 + uVar30 * uVar52 + uVar25 * uVar20 +
           uVar56 * uVar26 + uVar44 * uVar32 + uVar49 * uVar50 + uVar61 * uVar42 + uVar47 * uVar41 +
           uVar60 * uVar22 +
           ((ulong)((local_1d9 >> 0x18 | (uint)local_1d5 << 8 | (local_1d4 & 0xff) << 0x10) >> 2) &
           0x1fffff);
  uVar10 = lVar40 + 0x100000;
  lVar18 = uVar20 * uVar48 + uVar21 * uVar45 + uVar27 * uVar52 + uVar32 * uVar30 + uVar25 * uVar51 +
           uVar56 * uVar50 + uVar44 * uVar26 + uVar49 * uVar41 + uVar22 * uVar61 + uVar47 * uVar42 +
           ((ulong)(local_1d9 >> 5) & 0x1fffff) + (uVar10 >> 0x15);
  uVar11 = lVar17 + 0x100000;
  lVar19 = uVar54 * uVar48 + uVar21 * uVar24 + uVar20 * uVar27 + uVar51 * uVar30 + uVar25 * uVar45 +
           uVar32 * uVar56 + uVar44 * uVar52 + uVar49 * uVar26 + uVar41 * uVar61 + uVar47 * uVar50 +
           uVar22 * uVar37 + uVar60 * uVar42 + (ulong)(local_1d4 >> 7) + (uVar11 >> 0x15);
  uVar20 = lVar18 + 0x100000;
  uVar47 = lVar19 + 0x100000;
  lVar33 = ((lVar33 + uVar28 * 0x72d18) - (uVar3 & 0xffffffffffe00000)) + lVar12 * 0x9fb67 +
           lVar39 * -0xf39ad + lVar46 * 0x215d1 + lVar34 * -0xa6f7d + (uVar47 >> 0x15);
  lVar36 = (lVar12 * 0xa2c13 + lVar39 * 0x72d18 + lVar46 * 0x9fb67 + lVar34 * -0xf39ad +
            lVar43 * 0x215d1 + (uVar20 >> 0x15) + lVar17) - (uVar11 & 0xffffffffffe00000);
  uVar3 = lVar33 + 0x100000;
  lVar38 = ((lVar38 + uVar28 * 0x9fb67) - (uVar1 & 0xffffffffffe00000)) + lVar12 * -0xf39ad +
           lVar39 * 0x215d1 + lVar46 * -0xa6f7d + ((long)uVar3 >> 0x15);
  lVar58 = ((ulong)local_1f0 | ((ulong)(byte)uStack_1ee & 0x1f) << 0x10) + uVar21 * uVar22;
  uVar1 = lVar38 + 0x100000;
  uVar11 = lVar36 + 0x100000;
  lVar12 = ((lVar12 * 0x72d18 + uVar28 * 0xa2c13 + lVar39 * 0x9fb67 + lVar46 * -0xf39ad +
             lVar34 * 0x215d1 + lVar43 * -0xa6f7d + lVar19) - (uVar47 & 0xffffffffffe00000)) +
           ((long)uVar11 >> 0x15);
  lVar17 = (lVar35 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  lVar38 = lVar38 - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar58 + 0x100000;
  lVar19 = uVar22 * uVar48 + uVar21 * uVar42 + ((ulong)(uStack_1ee >> 5) & 0x1fffff) +
           (uVar1 >> 0x15);
  lVar33 = (lVar33 - (uVar3 & 0xffffffffffe00000)) + (lVar12 + 0x100000 >> 0x15);
  lVar35 = ((lVar29 + lVar13 * 0x72d18) - (uVar9 & 0xffffffffffe00000)) + lVar55 * 0x9fb67 +
           lVar53 * -0xf39ad + lVar17 * 0x215d1 + lVar38 * -0xa6f7d;
  uVar3 = lVar19 + 0x100000;
  lVar59 = (lVar58 - (uVar1 & 0xfffffe00000)) + lVar33 * 0xa2c13;
  lVar57 = (lVar31 - (uVar6 & 0xffffffffffe00000)) + (uVar8 >> 0x15) + lVar55 * 0xa2c13 +
           lVar53 * 0x72d18 + lVar33 * 0x215d1 + lVar17 * 0x9fb67 + lVar38 * -0xf39ad;
  lVar58 = ((lVar14 + (uVar3 >> 0x15)) - (uVar4 & 0xffffffffffe00000)) + lVar33 * 0x9fb67 +
           lVar17 * 0xa2c13 + lVar38 * 0x72d18;
  lVar14 = uVar48 * uVar52 + uVar21 * uVar51 + uVar27 * uVar26 + uVar30 * uVar50 + uVar25 * uVar32 +
           uVar56 * uVar42 + uVar44 * uVar41 + uVar49 * uVar22 +
           (((ulong)(uStack_1e1 >> 0x18) | (ulong)local_1dd << 8 | (ulong)local_1dc << 0x10) >> 3) +
           (uVar2 >> 0x15);
  uVar1 = lVar14 + 0x100000;
  lVar14 = ((lVar34 * 0xa2c13 + lVar43 * 0x72d18 + lVar14) - (uVar1 & 0xffffffffffe00000)) +
           ((long)uVar9 >> 0x15);
  lVar29 = (lVar46 * 0xa2c13 + lVar34 * 0x72d18 + lVar43 * 0x9fb67 + lVar40 + (uVar1 >> 0x15)) -
           (uVar10 & 0xffffffffffe00000);
  uVar1 = lVar29 + 0x100000;
  lVar39 = ((lVar39 * 0xa2c13 + lVar46 * 0x72d18 + lVar34 * 0x9fb67 + lVar43 * -0xf39ad + lVar18) -
           (uVar20 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  uVar2 = lVar39 + 0x100000;
  lVar40 = (lVar36 + lVar13 * -0xa6f7d + ((long)uVar2 >> 0x15)) - (uVar11 & 0xffffffffffe00000);
  uVar4 = lVar40 + 0x100000;
  lVar12 = (lVar12 - (lVar12 + 0x100000U & 0xffffffffffe00000)) + ((long)uVar4 >> 0x15);
  uVar5 = lVar14 + 0x100000;
  uVar6 = lVar59 + 0x100000;
  lVar34 = (lVar19 - (uVar3 & 0xffffffffffe00000)) + lVar33 * 0x72d18 + lVar38 * 0xa2c13 +
           ((long)uVar6 >> 0x15);
  uVar3 = lVar12 + 0x100000;
  lVar31 = (long)uVar3 >> 0x15;
  uVar9 = lVar58 + 0x100000;
  uVar47 = (lVar59 - (uVar6 & 0xffffffffffe00000)) + lVar31 * 0xa2c13;
  lVar46 = (lVar15 - (uVar8 & 0xffffffffffe00000)) + lVar53 * 0xa2c13 + lVar33 * -0xf39ad +
           lVar17 * 0x72d18 + lVar38 * 0x9fb67 + ((long)uVar9 >> 0x15);
  uVar6 = lVar34 + 0x100000;
  lVar43 = (lVar13 * -0xf39ad + lVar55 * 0x215d1 + lVar53 * -0xa6f7d + lVar29 +
           ((long)uVar5 >> 0x15)) - (uVar1 & 0xffffffffffe00000);
  uVar1 = lVar46 + 0x100000;
  uVar10 = ((lVar34 + lVar31 * 0x72d18) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar47 >> 0x15);
  uVar8 = lVar57 + 0x100000;
  lVar38 = ((lVar16 + lVar13 * 0xa2c13) - (uVar7 & 0xffffffffffe00000)) + lVar55 * 0x72d18 +
           lVar53 * 0x9fb67 + lVar33 * -0xa6f7d + lVar17 * -0xf39ad + lVar38 * 0x215d1 +
           ((long)uVar8 >> 0x15);
  uVar9 = ((lVar58 + lVar31 * 0x9fb67) - (uVar9 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15) +
          ((long)uVar10 >> 0x15);
  uVar6 = lVar38 + 0x100000;
  uVar11 = ((lVar46 + lVar31 * -0xf39ad) - (uVar1 & 0xffffffffffe00000)) + ((long)uVar9 >> 0x15);
  uVar7 = lVar35 + 0x100000;
  lVar53 = ((lVar14 + lVar13 * 0x9fb67 + lVar55 * -0xf39ad + lVar53 * 0x215d1) -
           (uVar5 & 0xffffffffffe00000)) + lVar17 * -0xa6f7d + ((long)uVar7 >> 0x15);
  uVar8 = ((lVar57 + lVar31 * 0x215d1) - (uVar8 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15) +
          ((long)uVar11 >> 0x15);
  uVar1 = lVar43 + 0x100000;
  uVar20 = ((lVar38 + lVar31 * -0xa6f7d) - (uVar6 & 0xffffffffffe00000)) + ((long)uVar8 >> 0x15);
  uVar5 = lVar53 + 0x100000;
  lVar39 = ((lVar13 * 0x215d1 + lVar55 * -0xa6f7d + lVar39) - (uVar2 & 0xffffffffffe00000)) +
           ((long)uVar1 >> 0x15);
  uVar6 = (lVar35 - (uVar7 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15) + ((long)uVar20 >> 0x15);
  uVar2 = lVar39 + 0x100000;
  uVar7 = (lVar53 - (uVar5 & 0xffffffffffe00000)) + ((long)uVar6 >> 0x15);
  uVar1 = (lVar43 - (uVar1 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15) + ((long)uVar7 >> 0x15);
  uVar5 = (lVar39 - (uVar2 & 0xffffffffffe00000)) + ((long)uVar1 >> 0x15);
  uVar2 = ((lVar40 + ((long)uVar2 >> 0x15)) - (uVar4 & 0xffffffffffe00000)) + ((long)uVar5 >> 0x15);
  uVar3 = (lVar12 - (uVar3 & 0xffffffffffe00000)) + ((long)uVar2 >> 0x15);
  lVar39 = (long)uVar3 >> 0x15;
  lVar38 = (uVar47 & 0x1fffff) + lVar39 * 0xa2c13;
  *(char *)(param_1 + 0x20) = (char)lVar38;
  uVar4 = (uVar10 & 0x1fffff) + lVar39 * 0x72d18 + (lVar38 >> 0x15);
  *(char *)(param_1 + 0x21) = (char)((ulong)lVar38 >> 8);
  uVar9 = (uVar9 & 0x1fffff) + lVar39 * 0x9fb67 + ((long)uVar4 >> 0x15);
  *(byte *)(param_1 + 0x22) = (byte)((ulong)lVar38 >> 0x10) & 0x1f | (byte)((uint)uVar4 << 5);
  uVar10 = (uVar11 & 0x1fffff) + lVar39 * -0xf39ad + ((long)uVar9 >> 0x15);
  *(char *)(param_1 + 0x23) = (char)(uVar4 >> 3);
  *(char *)(param_1 + 0x24) = (char)(uVar4 >> 0xb);
  uVar8 = (uVar8 & 0x1fffff) + lVar39 * 0x215d1 + ((long)uVar10 >> 0x15);
  *(byte *)(param_1 + 0x25) = (byte)((uint)uVar4 >> 0x13) & 3 | (byte)((uint)uVar9 << 2);
  *(char *)(param_1 + 0x26) = (char)(uVar9 >> 6);
  uVar4 = (uVar20 & 0x1fffff) + lVar39 * -0xa6f7d + ((long)uVar8 >> 0x15);
  *(byte *)(param_1 + 0x27) = (byte)((uint)uVar9 >> 0xe) & 0x7f | (byte)((uint)uVar10 << 7);
  *(char *)(param_1 + 0x28) = (char)(uVar10 >> 1);
  uVar6 = (uVar6 & 0x1fffff) + ((long)uVar4 >> 0x15);
  *(char *)(param_1 + 0x29) = (char)(uVar10 >> 9);
  *(byte *)(param_1 + 0x2a) = (byte)((uint)uVar10 >> 0x11) & 0xf | (byte)((uint)uVar8 << 4);
  uVar7 = (uVar7 & 0x1fffff) + ((long)uVar6 >> 0x15);
  *(char *)(param_1 + 0x2c) = (char)(uVar8 >> 0xc);
  *(char *)(param_1 + 0x2b) = (char)(uVar8 >> 4);
  *(char *)(param_1 + 0x2e) = (char)(uVar4 >> 7);
  lVar39 = (uVar1 & 0x1fffff) + ((long)uVar7 >> 0x15);
  *(byte *)(param_1 + 0x2f) = (byte)((uint)uVar4 >> 0xf) & 0x3f | (byte)((uint)uVar6 << 6);
  *(char *)(param_1 + 0x30) = (char)(uVar6 >> 2);
  uVar1 = (uVar5 & 0x1fffff) + (lVar39 >> 0x15);
  *(char *)(param_1 + 0x35) = (char)lVar39;
  *(char *)(param_1 + 0x31) = (char)(uVar6 >> 10);
  uVar2 = (uVar2 & 0x1fffff) + ((long)uVar1 >> 0x15);
  *(byte *)(param_1 + 0x32) = (byte)((uint)uVar6 >> 0x12) & 7 | (byte)((int)uVar7 << 3);
  *(char *)(param_1 + 0x33) = (char)(uVar7 >> 5);
  *(char *)(param_1 + 0x34) = (char)(uVar7 >> 0xd);
  *(byte *)(param_1 + 0x2d) = (byte)((uint)uVar8 >> 0x14) & 1 | (byte)((uint)uVar4 << 1);
  *(char *)(param_1 + 0x36) = (char)((ulong)lVar39 >> 8);
  *(byte *)(param_1 + 0x37) = (byte)((ulong)lVar39 >> 0x10) & 0x1f | (byte)((uint)uVar1 << 5);
  *(char *)(param_1 + 0x38) = (char)(uVar1 >> 3);
  *(char *)(param_1 + 0x39) = (char)(uVar1 >> 0xb);
  uVar4 = ((long)uVar2 >> 0x15) + (uVar3 & 0x1fffff);
  *(byte *)(param_1 + 0x3a) = (byte)((uint)uVar1 >> 0x13) & 3 | (byte)((uint)uVar2 << 2);
  *(char *)(param_1 + 0x3d) = (char)((uint)((int)((long)uVar2 >> 0x15) + (int)uVar3) >> 1);
  *(byte *)(param_1 + 0x3c) = (byte)((uint)uVar2 >> 0xe) & 0x7f | (byte)((int)uVar4 << 7);
  *(char *)(param_1 + 0x3f) = (char)(uVar4 >> 0x11);
  *(char *)(param_1 + 0x3b) = (char)(uVar2 >> 6);
  *(char *)(param_1 + 0x3e) = (char)(uVar4 >> 9);
  if (*(long *)(lVar23 + 0x28) == local_78) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0078262c  FUN_0078262c =====

void FUN_0078262c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined1 *local_c50;
  undefined1 *puStack_c48;
  undefined1 *local_c40;
  undefined1 *puStack_c38;
  undefined1 *local_c30;
  undefined1 *puStack_c28;
  undefined1 *local_c20;
  undefined1 *puStack_c18;
  undefined1 *puStack_c10;
  undefined1 *puStack_c08;
  undefined1 *local_c00;
  undefined1 *puStack_bf8;
  undefined1 *puStack_bf0;
  undefined1 *local_be8;
  undefined1 *puStack_be0;
  undefined1 *local_bd0;
  undefined1 *puStack_bc8;
  undefined1 *local_bc0;
  undefined1 *local_bb8;
  undefined1 *local_bb0;
  undefined1 *puStack_ba8;
  undefined1 *puStack_ba0;
  undefined1 *local_b98;
  undefined1 *puStack_b90;
  undefined1 *puStack_b88;
  undefined1 *local_b80;
  undefined1 *puStack_b78;
  undefined1 *local_b70;
  undefined1 *puStack_b68;
  undefined1 *local_b60;
  undefined1 *local_b58;
  undefined1 *local_b50;
  undefined1 *puStack_b48;
  undefined1 *local_b40;
  undefined1 *puStack_b38;
  undefined1 auStack_b30 [40];
  undefined1 auStack_b08 [40];
  undefined1 auStack_ae0 [40];
  undefined1 auStack_ab8 [40];
  undefined1 *local_a90 [4];
  undefined1 *local_a70;
  undefined1 *puStack_a68;
  undefined1 *local_a60;
  undefined1 *puStack_a58;
  undefined1 *local_a50;
  undefined1 *local_a48;
  undefined1 *local_a40;
  undefined1 *puStack_a38;
  undefined1 *puStack_a30;
  undefined1 *puStack_a28;
  undefined1 *local_a20;
  undefined1 auStack_a18 [40];
  undefined1 *local_9f0;
  undefined1 *local_9e8;
  undefined1 *local_9e0;
  undefined1 *local_9d8;
  undefined1 *local_9d0;
  undefined1 *local_9c8;
  undefined1 *local_9c0;
  undefined1 *local_9b8;
  undefined1 *local_9b0;
  undefined1 *local_9a8;
  undefined1 *local_9a0;
  undefined1 *puStack_998;
  undefined1 *puStack_990;
  undefined1 *puStack_988;
  undefined1 *local_980;
  undefined1 auStack_978 [40];
  undefined1 *local_950;
  undefined1 *local_948;
  undefined1 *local_940;
  undefined1 *local_938;
  undefined1 *local_930;
  undefined1 *local_928;
  undefined1 *local_920;
  undefined1 *local_918;
  undefined1 *local_910;
  undefined1 *local_908;
  undefined1 *local_900;
  undefined1 *puStack_8f8;
  undefined1 *puStack_8f0;
  undefined1 *puStack_8e8;
  undefined1 *local_8e0;
  undefined1 auStack_8d8 [40];
  undefined1 *local_8b0;
  undefined1 *local_8a8;
  undefined1 *local_8a0;
  undefined1 *local_898;
  undefined1 *local_890;
  undefined1 *local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *puStack_858;
  undefined1 *puStack_850;
  undefined1 *puStack_848;
  undefined1 *local_840;
  undefined1 auStack_838 [40];
  undefined1 *local_810;
  undefined1 *local_808;
  undefined1 *local_800;
  undefined1 *local_7f8;
  undefined1 *local_7f0;
  undefined1 *local_7e8;
  undefined1 *local_7e0;
  undefined1 *local_7d8;
  undefined1 *local_7d0;
  undefined1 *local_7c8;
  undefined1 *local_7c0;
  undefined1 *puStack_7b8;
  undefined1 *local_7b0;
  undefined1 *puStack_7a8;
  undefined1 *local_7a0;
  undefined1 auStack_798 [40];
  undefined1 *local_770;
  undefined1 *local_768;
  undefined1 *local_760;
  undefined1 *local_758;
  undefined1 *local_750;
  undefined1 *local_748;
  undefined1 *local_740;
  undefined1 *local_738;
  undefined1 *local_730;
  undefined1 *local_728;
  undefined1 *local_720;
  undefined1 *puStack_718;
  undefined1 *local_710;
  undefined1 *puStack_708;
  undefined1 *local_700;
  undefined1 auStack_6f8 [40];
  undefined1 *local_6d0;
  undefined1 *local_6c8;
  undefined1 *local_6c0;
  undefined1 *local_6b8;
  undefined1 *local_6b0;
  undefined1 *local_6a8;
  undefined1 *local_6a0;
  undefined1 *local_698;
  undefined1 *local_690;
  undefined1 *local_688;
  undefined1 *local_680;
  undefined1 *puStack_678;
  undefined1 *local_670;
  undefined1 *puStack_668;
  undefined1 *local_660;
  undefined1 auStack_658 [40];
  undefined1 *local_630;
  undefined1 *local_628;
  undefined1 *local_620;
  undefined1 *local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  undefined1 *local_600;
  undefined1 *local_5f8;
  undefined1 *local_5f0;
  undefined1 *local_5e8;
  undefined1 *local_5e0;
  undefined1 *puStack_5d8;
  undefined1 *local_5d0;
  undefined1 *puStack_5c8;
  undefined1 *local_5c0;
  undefined1 auStack_5b8 [48];
  long local_588;
  long local_580;
  long local_578;
  long local_570;
  long local_568;
  long local_560;
  long local_558;
  long local_550;
  long local_548;
  long local_540;
  long local_538;
  long local_530;
  long local_528;
  long local_520;
  long local_518;
  undefined1 *local_510;
  undefined1 *puStack_508;
  undefined1 *local_500;
  undefined1 *puStack_4f8;
  undefined1 *local_4f0;
  undefined1 *puStack_4e8;
  undefined1 *local_4e0;
  undefined1 *puStack_4d8;
  undefined1 *local_4d0;
  undefined1 *puStack_4c8;
  undefined1 *local_4c0;
  undefined1 *puStack_4b8;
  undefined1 *local_4b0;
  undefined1 *puStack_4a8;
  undefined1 *local_4a0;
  undefined1 *puStack_498;
  undefined1 *local_490;
  undefined1 *puStack_488;
  undefined1 *local_480;
  undefined1 *puStack_478;
  undefined1 *local_470;
  undefined1 *puStack_468;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined1 *local_450;
  undefined1 *puStack_448;
  undefined1 *local_440;
  undefined1 *puStack_438;
  undefined1 *local_430;
  undefined1 *puStack_428;
  undefined1 *local_420;
  undefined1 *puStack_418;
  undefined1 *local_410;
  undefined1 *puStack_408;
  ulong local_400;
  ulong uStack_3f8;
  long local_3f0;
  ulong uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined1 *local_3c0;
  undefined1 *puStack_3b8;
  undefined1 *local_3b0;
  undefined8 uStack_3a8;
  undefined1 *local_3a0;
  undefined1 *local_398;
  undefined1 *puStack_390;
  undefined1 *local_388;
  undefined1 *puStack_380;
  undefined1 *local_378;
  undefined1 *local_370;
  undefined1 *puStack_368;
  undefined1 *local_360;
  undefined1 *puStack_358;
  undefined1 *local_350;
  undefined1 auStack_348 [40];
  undefined1 *local_320;
  undefined1 *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  long local_288;
  undefined1 *local_280 [4];
  undefined1 *local_260;
  undefined1 *puStack_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
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
  undefined1 *puStack_188;
  undefined1 *local_180 [4];
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if (*(byte *)((long)param_3 + 0x3f) < 0x20) {
    puStack_bc8 = &DAT_aaaaaaaaaaaaaaaa;
    local_bd0 = &DAT_aaaaaaaaaaaaaaaa;
    local_bb8 = &DAT_aaaaaaaaaaaaaaaa;
    local_bc0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_ba8 = &DAT_aaaaaaaaaaaaaaaa;
    local_bb0 = &DAT_aaaaaaaaaaaaaaaa;
    local_b98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_ba0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b78 = &DAT_aaaaaaaaaaaaaaaa;
    local_b80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b68 = &DAT_aaaaaaaaaaaaaaaa;
    local_b70 = &DAT_aaaaaaaaaaaaaaaa;
    local_b58 = &DAT_aaaaaaaaaaaaaaaa;
    local_b60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b48 = &DAT_aaaaaaaaaaaaaaaa;
    local_b50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b38 = &DAT_aaaaaaaaaaaaaaaa;
    local_b40 = &DAT_aaaaaaaaaaaaaaaa;
    uVar9 = FUN_0077d918(&local_bd0,param_4);
    if ((int)uVar9 == 0) goto LAB_0078281c;
    uStack_3d8 = param_3[1];
    local_3e0 = *param_3;
    uStack_3c8 = param_3[3];
    local_3d0 = param_3[2];
    uVar9 = ((0xfffffffffffdaU - (long)local_b58 >> 0x33) - (long)local_b50) + 0xffffffffffffe;
    uVar22 = ((0xfffffffffffdaU - (long)local_bd0 >> 0x33) - (long)puStack_bc8) + 0xffffffffffffe;
    uVar24 = ((uVar9 >> 0x33) - (long)puStack_b48) + 0xffffffffffffe;
    uStack_3f8 = param_3[5];
    local_400 = param_3[4];
    uStack_3e8 = param_3[7];
    local_3f0 = param_3[6];
    uVar18 = ((uVar22 >> 0x33) - (long)local_bc0) + 0xffffffffffffe;
    uVar12 = ((uVar24 >> 0x33) - (long)local_b40) + 0xffffffffffffe;
    uVar20 = ((uVar18 >> 0x33) - (long)local_bb8) + 0xffffffffffffe;
    local_b40 = (undefined1 *)(uVar12 & 0x7ffffffffffff);
    uVar12 = ((uVar12 >> 0x33) - (long)puStack_b38) + 0xffffffffffffe;
    uVar21 = ((uVar20 >> 0x33) - (long)local_bb0) + 0xffffffffffffe;
    puStack_b38 = (undefined1 *)(uVar12 & 0x7ffffffffffff);
    local_bb0 = (undefined1 *)(uVar21 & 0x7ffffffffffff);
    uVar14 = (0xfffffffffffdaU - (long)local_b58 & 0x7ffffffffffff) + (uVar12 >> 0x33) * 0x13;
    uVar12 = (0xfffffffffffdaU - (long)local_bd0 & 0x7ffffffffffff) + (uVar21 >> 0x33) * 0x13;
    local_b58 = (undefined1 *)(uVar14 & 0x7ffffffffffff);
    uVar9 = (uVar9 & 0x7ffffffffffff) + (uVar14 >> 0x33);
    uVar22 = (uVar22 & 0x7ffffffffffff) + (uVar12 >> 0x33);
    local_bd0 = (undefined1 *)(uVar12 & 0x7ffffffffffff);
    puStack_bc8 = (undefined1 *)(uVar22 & 0x7ffffffffffff);
    local_bc0 = (undefined1 *)((uVar18 & 0x7ffffffffffff) + (uVar22 >> 0x33));
    local_b50 = (undefined1 *)(uVar9 & 0x7ffffffffffff);
    puStack_b48 = (undefined1 *)((uVar24 & 0x7ffffffffffff) + (uVar9 >> 0x33));
    local_bb8 = (undefined1 *)(uVar20 & 0x7ffffffffffff);
    if ((uStack_3e8 < 0x1000000000000001) &&
       ((uStack_3e8 != 0x1000000000000000 ||
        (((local_3f0 == 0 && (uStack_3f8 < 0x14def9dea2f79cd7)) &&
         ((uStack_3f8 != 0x14def9dea2f79cd6 || (local_400 < 0x5812631a5cf5d3ed)))))))) {
      puStack_408 = &DAT_aaaaaaaaaaaaaaaa;
      local_410 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_418 = &DAT_aaaaaaaaaaaaaaaa;
      local_420 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_428 = &DAT_aaaaaaaaaaaaaaaa;
      local_430 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_438 = &DAT_aaaaaaaaaaaaaaaa;
      local_440 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_448 = &DAT_aaaaaaaaaaaaaaaa;
      local_450 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_458 = &DAT_aaaaaaaaaaaaaaaa;
      local_460 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_468 = &DAT_aaaaaaaaaaaaaaaa;
      local_470 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_478 = &DAT_aaaaaaaaaaaaaaaa;
      local_480 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_488 = &DAT_aaaaaaaaaaaaaaaa;
      local_490 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_498 = &DAT_aaaaaaaaaaaaaaaa;
      local_4a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4d0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00795084(&local_4d0);
      FUN_007950a4(&local_4d0,param_3,0x20);
      FUN_007950a4(&local_4d0,param_4,0x20);
      FUN_007950a4(&local_4d0,param_1,param_2);
      puStack_4d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_4f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_4f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_500 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_508 = &DAT_aaaaaaaaaaaaaaaa;
      local_510 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007950c4(&local_510,&local_4d0);
      FUN_00780be0(&local_510);
      puVar13 = (undefined1 *)((ulong)&local_510 | 1);
      puVar15 = (ulong *)((ulong)local_180 | 8);
      lVar17 = 0x100;
      puStack_be0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c38 = &DAT_aaaaaaaaaaaaaaaa;
      local_c40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c28 = &DAT_aaaaaaaaaaaaaaaa;
      local_c30 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c18 = &DAT_aaaaaaaaaaaaaaaa;
      local_c20 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c08 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c10 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_bf8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c00 = &DAT_aaaaaaaaaaaaaaaa;
      local_be8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_bf0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c48 = &DAT_aaaaaaaaaaaaaaaa;
      local_c50 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      local_180[3] = &DAT_aaaaaaaaaaaaaaaa;
      local_180[2] = &DAT_aaaaaaaaaaaaaaaa;
      local_180[1] = &DAT_aaaaaaaaaaaaaaaa;
      local_180[0] = &DAT_aaaaaaaaaaaaaaaa;
      uVar9 = DAT_001f5048;
      do {
        uVar22 = uVar9 & 0x707070707070707;
        uVar4 = *puVar13;
        uVar5 = puVar13[-1];
        uVar9 = CONCAT17((char)(uVar9 >> 0x38) + '\x10',
                         CONCAT16((char)(uVar9 >> 0x30) + '\x10',
                                  CONCAT15((char)(uVar9 >> 0x28) + '\x10',
                                           CONCAT14((char)(uVar9 >> 0x20) + '\x10',
                                                    CONCAT13((char)(uVar9 >> 0x18) + '\x10',
                                                             CONCAT12((char)(uVar9 >> 0x10) + '\x10'
                                                                      ,CONCAT11((char)(uVar9 >> 8) +
                                                                                '\x10',(char)uVar9 +
                                                                                       '\x10')))))))
        ;
        lVar17 = lVar17 + -0x10;
        puVar13 = puVar13 + 2;
        uVar23 = NEON_neg(uVar22,1);
        uVar24 = NEON_ushl(CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(
                                                  uVar5,CONCAT12(uVar5,CONCAT11(uVar5,uVar5))))))),
                           uVar23,1);
        uVar22 = NEON_ushl(CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(
                                                  uVar4,CONCAT12(uVar4,CONCAT11(uVar4,uVar4))))))),
                           uVar23,1);
        puVar15[-1] = uVar24 & 0x101010101010101;
        *puVar15 = uVar22 & 0x101010101010101;
        puVar15 = puVar15 + 2;
      } while (lVar17 != 0);
      uVar9 = 0;
      uVar16 = 0xfe;
      uVar22 = (ulong)local_180 | 1;
      lVar17 = 1;
      do {
        if ((*(char *)((long)local_180 + uVar9) != '\0') && (uVar9 < 0xff)) {
          uVar24 = 1;
          uVar19 = uVar16;
          if (4 < uVar16) {
            uVar19 = 5;
          }
          lVar10 = lVar17;
          uVar18 = uVar9;
          do {
            iVar8 = (int)*(char *)((long)local_180 + lVar10);
            if (iVar8 != 0) {
              iVar8 = iVar8 << (ulong)((uint)uVar24 & 0x1f);
              iVar11 = (int)*(char *)((long)local_180 + uVar9);
              iVar2 = iVar8 + iVar11;
              if (iVar2 < 0x10) {
                *(char *)((long)local_180 + uVar9) = (char)iVar2;
                *(undefined1 *)((long)local_180 + lVar10) = 0;
              }
              else {
                iVar11 = iVar11 - iVar8;
                if (iVar11 + 0xf < 0 != SCARRY4(iVar11,0xf)) break;
                *(char *)((long)local_180 + uVar9) = (char)iVar11;
                uVar12 = uVar18;
                do {
                  if (*(char *)(uVar22 + uVar12) == '\0') {
                    *(undefined1 *)(uVar22 + uVar12) = 1;
                    break;
                  }
                  *(undefined1 *)(uVar22 + uVar12) = 0;
                  uVar12 = uVar12 + 1;
                } while (uVar12 != 0xff);
              }
            }
            uVar24 = uVar24 + 1;
            lVar10 = lVar10 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar24 != uVar19 + 2);
        }
        uVar9 = uVar9 + 1;
        lVar17 = lVar17 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar9 != 0x100);
      puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
      local_190 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
      local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_200 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
      local_230 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
      local_240 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
      local_250 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
      local_260 = &DAT_aaaaaaaaaaaaaaaa;
      local_280[3] = &DAT_aaaaaaaaaaaaaaaa;
      local_280[2] = &DAT_aaaaaaaaaaaaaaaa;
      local_280[1] = &DAT_aaaaaaaaaaaaaaaa;
      local_280[0] = &DAT_aaaaaaaaaaaaaaaa;
      puVar13 = (undefined1 *)((ulong)&local_400 | 1);
      puVar15 = (ulong *)((ulong)local_280 | 8);
      lVar17 = 0x100;
      uVar9 = DAT_001f5048;
      do {
        uVar22 = uVar9 & 0x707070707070707;
        uVar4 = *puVar13;
        uVar5 = puVar13[-1];
        uVar9 = CONCAT17((char)(uVar9 >> 0x38) + '\x10',
                         CONCAT16((char)(uVar9 >> 0x30) + '\x10',
                                  CONCAT15((char)(uVar9 >> 0x28) + '\x10',
                                           CONCAT14((char)(uVar9 >> 0x20) + '\x10',
                                                    CONCAT13((char)(uVar9 >> 0x18) + '\x10',
                                                             CONCAT12((char)(uVar9 >> 0x10) + '\x10'
                                                                      ,CONCAT11((char)(uVar9 >> 8) +
                                                                                '\x10',(char)uVar9 +
                                                                                       '\x10')))))))
        ;
        lVar17 = lVar17 + -0x10;
        puVar13 = puVar13 + 2;
        uVar23 = NEON_neg(uVar22,1);
        uVar24 = NEON_ushl(CONCAT17(uVar5,CONCAT16(uVar5,CONCAT15(uVar5,CONCAT14(uVar5,CONCAT13(
                                                  uVar5,CONCAT12(uVar5,CONCAT11(uVar5,uVar5))))))),
                           uVar23,1);
        uVar22 = NEON_ushl(CONCAT17(uVar4,CONCAT16(uVar4,CONCAT15(uVar4,CONCAT14(uVar4,CONCAT13(
                                                  uVar4,CONCAT12(uVar4,CONCAT11(uVar4,uVar4))))))),
                           uVar23,1);
        puVar15[-1] = uVar24 & 0x101010101010101;
        *puVar15 = uVar22 & 0x101010101010101;
        puVar15 = puVar15 + 2;
      } while (lVar17 != 0);
      uVar9 = 0;
      uVar16 = 0xfe;
      uVar22 = (ulong)local_280 | 1;
      lVar17 = 1;
      do {
        if ((*(char *)((long)local_280 + uVar9) != '\0') && (uVar9 < 0xff)) {
          uVar24 = 1;
          uVar19 = uVar16;
          if (4 < uVar16) {
            uVar19 = 5;
          }
          lVar10 = lVar17;
          uVar18 = uVar9;
          do {
            iVar8 = (int)*(char *)((long)local_280 + lVar10);
            if (iVar8 != 0) {
              iVar8 = iVar8 << (ulong)((uint)uVar24 & 0x1f);
              iVar11 = (int)*(char *)((long)local_280 + uVar9);
              iVar2 = iVar8 + iVar11;
              if (iVar2 < 0x10) {
                *(char *)((long)local_280 + uVar9) = (char)iVar2;
                *(undefined1 *)((long)local_280 + lVar10) = 0;
              }
              else {
                iVar11 = iVar11 - iVar8;
                if (iVar11 + 0xf < 0 != SCARRY4(iVar11,0xf)) break;
                *(char *)((long)local_280 + uVar9) = (char)iVar11;
                uVar12 = uVar18;
                do {
                  if (*(char *)(uVar22 + uVar12) == '\0') {
                    *(undefined1 *)(uVar22 + uVar12) = 1;
                    break;
                  }
                  *(undefined1 *)(uVar22 + uVar12) = 0;
                  uVar12 = uVar12 + 1;
                } while (uVar12 != 0xff);
              }
            }
            uVar24 = uVar24 + 1;
            lVar10 = lVar10 + 1;
            uVar18 = uVar18 + 1;
          } while (uVar24 != uVar19 + 2);
        }
        uVar9 = uVar9 + 1;
        lVar17 = lVar17 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar9 != 0x100);
      memset(&local_9f0,0xaa,0x460);
      local_a90[0] = local_bd0 + (long)puStack_ba8;
      local_a90[1] = puStack_bc8 + (long)puStack_ba0;
      local_a90[2] = local_bc0 + (long)local_b98;
      local_a90[3] = local_bb8 + (long)puStack_b90;
      puStack_a68 = puStack_ba8 + (0xfffffffffffda - (long)local_bd0);
      local_a70 = local_bb0 + (long)puStack_b88;
      local_a60 = puStack_ba0 + (0xffffffffffffe - (long)puStack_bc8);
      puStack_a58 = local_b98 + (0xffffffffffffe - (long)local_bc0);
      local_a50 = puStack_b90 + (0xffffffffffffe - (long)local_bb8);
      local_a48 = puStack_b88 + (0xffffffffffffe - (long)local_bb0);
      local_a20 = local_b60;
      puStack_a38 = puStack_b78;
      local_a40 = local_b80;
      puStack_a28 = puStack_b68;
      puStack_a30 = local_b70;
      FUN_007866c0(auStack_a18,&local_b58,&DAT_0020a818);
      puStack_3b8 = puStack_bc8;
      local_3c0 = local_bd0;
      uStack_3a8 = local_bb8;
      local_3b0 = local_bc0;
      puStack_380 = puStack_b90;
      local_388 = local_b98;
      puStack_390 = puStack_ba0;
      local_398 = puStack_ba8;
      local_3a0 = local_bb0;
      local_378 = puStack_b88;
      puStack_368 = puStack_b78;
      local_370 = local_b80;
      puStack_358 = puStack_b68;
      local_360 = local_b70;
      local_350 = local_b60;
      FUN_00780820(&local_320,&local_3c0);
      FUN_007866c0(auStack_b30,&local_320,&local_2a8);
      FUN_007866c0(auStack_b08,&local_2f8,&local_2d0);
      FUN_007866c0(auStack_ae0,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_ab8,&local_320,&local_2f8);
      FUN_0077fca8(&local_320,auStack_b30,local_a90);
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      local_9f0 = local_3c0 + (long)local_398;
      local_9e8 = puStack_3b8 + (long)puStack_390;
      local_9c8 = local_398 + (0xfffffffffffda - (long)local_3c0);
      local_9c0 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
      local_9b8 = local_388 + (0xffffffffffffe - (long)local_3b0);
      local_9b0 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
      local_9e0 = local_3b0 + (long)local_388;
      local_9a8 = local_378 + (0xffffffffffffe - (long)local_3a0);
      local_9d8 = uStack_3a8 + (long)puStack_380;
      local_9d0 = local_3a0 + (long)local_378;
      local_980 = local_350;
      puStack_998 = puStack_368;
      local_9a0 = local_370;
      puStack_988 = puStack_358;
      puStack_990 = local_360;
      FUN_007866c0(auStack_978,auStack_348,&DAT_0020a818);
      FUN_0077fca8(&local_320,auStack_b30,&local_9f0);
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      local_950 = local_3c0 + (long)local_398;
      local_948 = puStack_3b8 + (long)puStack_390;
      local_928 = local_398 + (0xfffffffffffda - (long)local_3c0);
      local_920 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
      local_918 = local_388 + (0xffffffffffffe - (long)local_3b0);
      local_910 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
      local_940 = local_3b0 + (long)local_388;
      local_908 = local_378 + (0xffffffffffffe - (long)local_3a0);
      local_938 = uStack_3a8 + (long)puStack_380;
      local_930 = local_3a0 + (long)local_378;
      local_8e0 = local_350;
      puStack_8f8 = puStack_368;
      local_900 = local_370;
      puStack_8e8 = puStack_358;
      puStack_8f0 = local_360;
      FUN_007866c0(auStack_8d8,auStack_348,&DAT_0020a818);
      FUN_0077fca8(&local_320,auStack_b30,&local_950);
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      local_8b0 = local_3c0 + (long)local_398;
      local_8a8 = puStack_3b8 + (long)puStack_390;
      local_888 = local_398 + (0xfffffffffffda - (long)local_3c0);
      local_880 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
      local_878 = local_388 + (0xffffffffffffe - (long)local_3b0);
      local_870 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
      local_8a0 = local_3b0 + (long)local_388;
      local_898 = uStack_3a8 + (long)puStack_380;
      local_890 = local_3a0 + (long)local_378;
      local_868 = local_378 + (0xffffffffffffe - (long)local_3a0);
      local_840 = local_350;
      puStack_858 = puStack_368;
      local_860 = local_370;
      puStack_848 = puStack_358;
      puStack_850 = local_360;
      FUN_007866c0(auStack_838,auStack_348,&DAT_0020a818);
      FUN_0077fca8(&local_320,auStack_b30,&local_8b0);
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      local_810 = local_3c0 + (long)local_398;
      local_808 = puStack_3b8 + (long)puStack_390;
      local_7e8 = local_398 + (0xfffffffffffda - (long)local_3c0);
      local_7e0 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
      local_7d8 = local_388 + (0xffffffffffffe - (long)local_3b0);
      local_7d0 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
      local_800 = local_3b0 + (long)local_388;
      local_7f8 = uStack_3a8 + (long)puStack_380;
      local_7f0 = local_3a0 + (long)local_378;
      local_7c8 = local_378 + (0xffffffffffffe - (long)local_3a0);
      local_7a0 = local_350;
      puStack_7a8 = puStack_358;
      local_7b0 = local_360;
      puStack_7b8 = puStack_368;
      local_7c0 = local_370;
      FUN_007866c0(auStack_798,auStack_348,&DAT_0020a818);
      FUN_0077fca8(&local_320,auStack_b30,&local_810);
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      local_770 = local_3c0 + (long)local_398;
      local_768 = puStack_3b8 + (long)puStack_390;
      local_748 = local_398 + (0xfffffffffffda - (long)local_3c0);
      local_740 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
      local_738 = local_388 + (0xffffffffffffe - (long)local_3b0);
      local_730 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
      local_760 = local_3b0 + (long)local_388;
      local_758 = uStack_3a8 + (long)puStack_380;
      local_750 = local_3a0 + (long)local_378;
      local_728 = local_378 + (0xffffffffffffe - (long)local_3a0);
      local_700 = local_350;
      puStack_708 = puStack_358;
      local_710 = local_360;
      puStack_718 = puStack_368;
      local_720 = local_370;
      FUN_007866c0(auStack_6f8,auStack_348,&DAT_0020a818);
      FUN_0077fca8(&local_320,auStack_b30,&local_770);
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      local_6d0 = local_3c0 + (long)local_398;
      local_6c8 = puStack_3b8 + (long)puStack_390;
      local_6a8 = local_398 + (0xfffffffffffda - (long)local_3c0);
      local_6a0 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
      local_698 = local_388 + (0xffffffffffffe - (long)local_3b0);
      local_690 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
      local_6c0 = local_3b0 + (long)local_388;
      local_6b8 = uStack_3a8 + (long)puStack_380;
      local_6b0 = local_3a0 + (long)local_378;
      local_688 = local_378 + (0xffffffffffffe - (long)local_3a0);
      puStack_668 = puStack_358;
      local_670 = local_360;
      local_660 = local_350;
      puStack_678 = puStack_368;
      local_680 = local_370;
      FUN_007866c0(auStack_658,auStack_348,&DAT_0020a818);
      FUN_0077fca8(&local_320,auStack_b30,&local_6d0);
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      local_630 = local_3c0 + (long)local_398;
      local_628 = puStack_3b8 + (long)puStack_390;
      local_608 = local_398 + (0xfffffffffffda - (long)local_3c0);
      local_600 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
      local_5f8 = local_388 + (0xffffffffffffe - (long)local_3b0);
      local_5f0 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
      local_620 = local_3b0 + (long)local_388;
      local_618 = uStack_3a8 + (long)puStack_380;
      local_610 = local_3a0 + (long)local_378;
      local_5e8 = local_378 + (0xffffffffffffe - (long)local_3a0);
      puStack_5c8 = puStack_358;
      local_5d0 = local_360;
      local_5c0 = local_350;
      puStack_5d8 = puStack_368;
      local_5e0 = local_370;
      FUN_007866c0(auStack_5b8,auStack_348,&DAT_0020a818);
      local_c30 = (undefined1 *)0x0;
      puStack_c28 = (undefined1 *)0x1;
      uVar9 = 0xff;
      local_c00 = (undefined1 *)0x1;
      puStack_c48 = (undefined1 *)0x0;
      local_c50 = (undefined1 *)0x0;
      puStack_c38 = (undefined1 *)0x0;
      local_c40 = (undefined1 *)0x0;
      puStack_c18 = (undefined1 *)0x0;
      local_c20 = (undefined1 *)0x0;
      puStack_c08 = (undefined1 *)0x0;
      puStack_c10 = (undefined1 *)0x0;
      puStack_bf0 = (undefined1 *)0x0;
      puStack_bf8 = (undefined1 *)0x0;
      puStack_be0 = (undefined1 *)0x0;
      local_be8 = (undefined1 *)0x0;
      do {
        if ((*(char *)((long)local_180 + uVar9) != '\0') ||
           (*(char *)((long)local_280 + uVar9) != '\0')) {
          if (-1 < (int)uVar9) goto LAB_007834fc;
          break;
        }
        uVar16 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar16;
      } while (uVar16 != 0xffffffff);
      goto LAB_007838f8;
    }
  }
  uVar9 = 0;
  goto LAB_0078281c;
  while( true ) {
    FUN_007866c0(&local_c50,&local_320,&local_2a8);
    FUN_007866c0(&puStack_c28,&local_2f8,&local_2d0);
    FUN_007866c0(&local_c00,&local_2d0,&local_2a8);
    bVar1 = (long)uVar9 < 1;
    uVar9 = uVar9 - 1;
    if (bVar1) break;
LAB_007834fc:
    FUN_00780820(&local_320,&local_c50);
    bVar3 = *(byte *)((long)local_180 + uVar9);
    if ((char)bVar3 < '\x01') {
      if ((char)bVar3 < '\0') {
        FUN_007866c0(&local_3c0,&local_320,&local_2a8);
        FUN_007866c0(&local_398,&local_2f8,&local_2d0);
        FUN_007866c0(&local_370,&local_2d0,&local_2a8);
        FUN_007866c0(auStack_348,&local_320,&local_2f8);
        if (0x11 < (-(uint)bVar3 & 0xff)) goto LAB_00783974;
        FUN_0077fec8(&local_320,&local_3c0,local_a90 + (ulong)(-(uint)bVar3 >> 1 & 0x7f) * 0x14);
      }
    }
    else {
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      if (0x11 < bVar3) goto LAB_00783974;
      FUN_0077fca8(&local_320,&local_3c0,local_a90 + (ulong)(bVar3 >> 1) * 0x14);
    }
    bVar3 = *(byte *)((long)local_280 + uVar9);
    if ((char)bVar3 < '\x01') {
      if ((char)bVar3 < 0) {
        FUN_007866c0(&local_3c0,&local_320,&local_2a8);
        FUN_007866c0(&local_398,&local_2f8,&local_2d0);
        FUN_007866c0(&local_370,&local_2d0,&local_2a8);
        FUN_007866c0(auStack_348,&local_320,&local_2f8);
        uVar16 = -(int)(char)bVar3;
        if (0x11 < (uVar16 & 0xff)) goto LAB_00783974;
        local_318 = puStack_3b8 + (long)puStack_390;
        iVar8 = (uVar16 >> 1 & 0x7f) * 0x78;
        local_308 = uStack_3a8 + (long)puStack_380;
        local_320 = local_3c0 + (long)local_398;
        local_2f8 = local_398 + (0xfffffffffffda - (long)local_3c0);
        local_2f0 = puStack_390 + (0xffffffffffffe - (long)puStack_3b8);
        local_2e8 = local_388 + (0xffffffffffffe - (long)local_3b0);
        local_310 = local_3b0 + (long)local_388;
        local_2e0 = puStack_380 + (0xffffffffffffe - (long)uStack_3a8);
        local_300 = local_3a0 + (long)local_378;
        local_2d8 = local_378 + (0xffffffffffffe - (long)local_3a0);
        FUN_007866c0(&local_560,&local_320,iVar8 + 0x20ac68);
        FUN_007866c0(&local_538,&local_2f8,iVar8 + 0x20ac40);
        FUN_007866c0(&local_588,iVar8 + 0x20ac90,auStack_348);
        local_2f0 = (undefined1 *)(local_530 + local_558);
        uVar22 = ((ulong)local_370 >> 0x32 & 0x1fff) + (long)puStack_368 * 2;
        local_2e8 = (undefined1 *)(local_528 + local_550);
        local_2e0 = (undefined1 *)(local_520 + local_548);
        uVar24 = (uVar22 >> 0x33) + (long)local_360 * 2;
        local_310 = (undefined1 *)((local_550 - local_528) + 0xffffffffffffe);
        local_320 = (undefined1 *)((local_560 + 0xfffffffffffda) - local_538);
        local_2f8 = (undefined1 *)(local_538 + local_560);
        local_2d8 = (undefined1 *)(local_518 + local_540);
        uVar18 = (uVar24 >> 0x33) + (long)puStack_358 * 2;
        local_318 = (undefined1 *)((local_558 - local_530) + 0xffffffffffffe);
        local_308 = (undefined1 *)((local_548 - local_520) + 0xffffffffffffe);
        uVar12 = (uVar18 >> 0x33) + (long)local_350 * 2;
        local_300 = (undefined1 *)((local_540 - local_518) + 0xffffffffffffe);
        uVar20 = uVar12 & 0x7ffffffffffff;
        uVar12 = ((ulong)local_370 & 0x3ffffffffffff) * 2 + (uVar12 >> 0x33) * 0x13;
        uVar22 = (uVar22 & 0x7ffffffffffff) + (uVar12 >> 0x33);
        uVar12 = uVar12 & 0x7ffffffffffff;
        local_2b0 = (uVar20 - local_568) + 0xffffffffffffe;
        local_2a8 = local_588 + uVar12;
        uVar21 = uVar22 & 0x7ffffffffffff;
        lVar17 = (uVar24 & 0x7ffffffffffff) + (uVar22 >> 0x33);
        local_2d0 = (uVar12 + 0xfffffffffffda) - local_588;
        local_2a0 = local_580 + uVar21;
        local_2c8 = (uVar21 - local_580) + 0xffffffffffffe;
        uVar18 = uVar18 & 0x7ffffffffffff;
        local_298 = local_578 + lVar17;
        local_2c0 = (lVar17 - local_578) + 0xffffffffffffe;
        local_2b8 = (uVar18 - local_570) + 0xffffffffffffe;
        local_290 = local_570 + uVar18;
        local_288 = local_568 + uVar20;
      }
    }
    else {
      FUN_007866c0(&local_3c0,&local_320,&local_2a8);
      FUN_007866c0(&local_398,&local_2f8,&local_2d0);
      FUN_007866c0(&local_370,&local_2d0,&local_2a8);
      FUN_007866c0(auStack_348,&local_320,&local_2f8);
      if (0x11 < bVar3) {
LAB_00783974:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x783978);
        (*pcVar7)();
      }
      FUN_00780610(&local_320,&local_3c0,((uint)(int)(char)bVar3 >> 1 & 0x7f) * 0x78 + 0x20ac40);
    }
  }
LAB_007838f8:
  local_a70 = &DAT_aaaaaaaaaaaaaaaa;
  local_a90[1] = &DAT_aaaaaaaaaaaaaaaa;
  local_a90[0] = &DAT_aaaaaaaaaaaaaaaa;
  local_a90[3] = &DAT_aaaaaaaaaaaaaaaa;
  local_a90[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007848ec(local_a90,&local_c00);
  FUN_007866c0(local_180,&local_c50,local_a90);
  FUN_007866c0(local_280,&puStack_c28,local_a90);
  FUN_0077d770(&local_3c0,local_280);
  FUN_0077d770(&local_320,local_180);
  uStack_3a8 = (undefined1 *)
               CONCAT17(uStack_3a8._7_1_ ^ (char)local_320 << 7,(undefined7)uStack_3a8);
  iVar8 = FUN_0078cd34(&local_3c0,&local_3e0,0x20);
  uVar9 = (ulong)(iVar8 == 0);
LAB_0078281c:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


// ===== 0078397c  FUN_0078397c =====

void FUN_0078397c(undefined8 param_1,byte *param_2)

{
  FUN_00793258(param_2,0x20);
  *param_2 = *param_2 | 7;
  param_2[0x1f] = param_2[0x1f] & 0x3f | 0x80;
  FUN_007839d4(param_1,param_2);
  return;
}


// ===== 007839d4  FUN_007839d4 =====

void FUN_007839d4(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_58 = param_2[1];
  uStack_50 = param_2[2];
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = *param_2 & 0xfffffffffffffff8;
  uStack_48 = param_2[3] & 0x3fffffffffffffff | 0x4000000000000000;
  FUN_007800f0(&local_100,&local_60,&DAT_0020a840);
  local_128 = puStack_d8 + (long)puStack_b0;
  puStack_120 = puStack_d0 + (long)local_a8;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = puStack_b0 + (0xfffffffffffda - (long)puStack_d8);
  puStack_148 = local_a8 + (0xffffffffffffe - (long)puStack_d0);
  local_118 = local_c8 + (long)local_a0;
  local_140 = local_a0 + (0xffffffffffffe - (long)local_c8);
  puStack_110 = local_c0 + (long)puStack_98;
  local_108 = puStack_b8 + (long)puStack_90;
  puStack_138 = puStack_98 + (0xffffffffffffe - (long)local_c0);
  local_130 = puStack_90 + (0xffffffffffffe - (long)puStack_b8);
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007848ec(&local_180,&local_150);
  FUN_007866c0(&local_180,&local_128,&local_180);
  FUN_0077d770(param_1,&local_180);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00783b20  FUN_00783b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00783b20(undefined8 param_1,ulong *param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
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
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  long lVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [13];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  int iVar137;
  ulong uVar138;
  ulong uVar139;
  ulong uVar140;
  ulong uVar141;
  ulong uVar142;
  ulong uVar143;
  ulong uVar144;
  ulong uVar145;
  undefined1 *puVar146;
  long lVar147;
  ulong uVar148;
  ulong uVar149;
  ulong uVar150;
  ulong uVar151;
  undefined1 *puVar152;
  ulong uVar153;
  ulong uVar154;
  long lVar155;
  undefined1 *puVar156;
  ulong uVar157;
  ulong uVar158;
  long lVar159;
  ulong uVar160;
  ulong uVar161;
  long lVar162;
  long lVar163;
  ulong uVar164;
  ulong uVar165;
  ulong uVar166;
  ulong uVar167;
  ulong uVar168;
  ulong uVar169;
  ulong uVar170;
  undefined1 *puVar171;
  ulong uVar172;
  ulong uVar173;
  ulong uVar174;
  ulong uVar175;
  ulong uVar176;
  ulong uVar177;
  undefined1 uVar178;
  undefined1 uVar179;
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  uint uVar182;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 *local_298;
  ulong uStack_290;
  undefined1 *local_288;
  ulong uStack_280;
  undefined1 *local_278;
  undefined1 *local_270;
  long lStack_268;
  undefined1 *local_260;
  long lStack_258;
  undefined1 *local_250;
  ulong local_240;
  ulong uStack_238;
  ulong local_230;
  ulong uStack_228;
  ulong local_220;
  ulong local_210;
  ulong uStack_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  undefined1 *local_1e0;
  ulong uStack_1d8;
  undefined1 *local_1d0;
  ulong local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b0;
  ulong uStack_1a8;
  undefined1 *local_1a0;
  ulong local_198;
  undefined1 *local_190;
  ulong local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong local_120;
  ulong local_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  ulong local_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long local_78;
  
  lVar128 = tpidr_el0;
  local_78 = *(long *)(lVar128 + 0x28);
  uVar182 = param_3[2];
  uVar178 = (undefined1)(uVar182 >> 8);
  uVar179 = (undefined1)(uVar182 >> 0x18);
  uStack_98 = param_2[1];
  uStack_90 = param_2[2];
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar166 = CONCAT26(0,(uint6)CONCAT14(uVar178,(uint)CONCAT12(uVar178,(ushort)(byte)uVar182)) &
                       0xffff0000ffff);
  auVar133[8] = (char)(uVar182 >> 0x10);
  auVar133._0_8_ = uVar166;
  auVar133._9_3_ = 0;
  auVar133[0xc] = uVar179;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  auVar185._0_8_ = (ulong)auVar133._8_5_ & 0xff;
  auVar185[8] = uVar179;
  auVar185._9_7_ = 0;
  auVar180._0_8_ = uVar166 & 0xff;
  auVar180[8] = uVar178;
  auVar180._9_7_ = 0;
  auVar185 = NEON_ushl(auVar185,_DAT_001f47d0,8);
  auVar180 = NEON_ushl(auVar180,_DAT_001f4500,8);
  uVar168 = (ulong)*(byte *)((long)param_3 + 0xf) << 0x12 | ((ulong)param_3[4] & 0x1ffffff) << 0x1a
            | (ulong)*(byte *)((long)param_3 + 0xe) << 10 |
            (ulong)*(byte *)((long)param_3 + 0xd) << 2 | (ulong)(byte)((byte)param_3[3] >> 6);
  uStack_88 = param_2[3] & 0x3fffffffffffffff | 0x4000000000000000;
  auVar184[0] = auVar180[0] | auVar185[0];
  auVar184[1] = auVar180[1] | auVar185[1];
  auVar184[2] = auVar180[2] | auVar185[2];
  auVar184[3] = auVar180[3] | auVar185[3];
  auVar184[4] = auVar180[4] | auVar185[4];
  auVar184[5] = auVar180[5] | auVar185[5];
  auVar184[6] = auVar180[6] | auVar185[6];
  auVar184[7] = auVar180[7] | auVar185[7];
  auVar184[8] = auVar180[8] | auVar185[8];
  auVar184[9] = auVar180[9] | auVar185[9];
  auVar184[10] = auVar180[10] | auVar185[10];
  auVar184[0xb] = auVar180[0xb] | auVar185[0xb];
  auVar184[0xc] = auVar180[0xc] | auVar185[0xc];
  auVar184[0xd] = auVar180[0xd] | auVar185[0xd];
  auVar184[0xe] = auVar180[0xe] | auVar185[0xe];
  auVar184[0xf] = auVar180[0xf] | auVar185[0xf];
  uVar166 = (ulong)*(byte *)((long)param_3 + 0x15) << 0xf |
            ((ulong)*(uint *)((long)param_3 + 0x16) & 0xfffffff) << 0x17 |
            (ulong)(byte)param_3[5] << 7 | (ulong)(param_3[4] >> 0x19);
  uVar164 = (ulong)*(byte *)((long)param_3 + 0x1b) << 0xc | ((ulong)param_3[7] & 0x7fffffff) << 0x14
            | (ulong)*(byte *)((long)param_3 + 0x1a) << 4 |
            (ulong)(*(uint *)((long)param_3 + 0x16) >> 0x1c);
  auVar180 = NEON_ext(auVar184,auVar184,8,1);
  uVar182 = 0xfe;
  uVar169 = (ulong)*(byte *)((long)param_3 + 5) << 0x28 |
            ((ulong)*(byte *)((long)param_3 + 6) & 7) << 0x30 | (ulong)*param_3 |
            (ulong)(byte)param_3[1] << 0x20;
  local_a0 = *param_2 & 0xfffffffffffffff8;
  uStack_110 = 0;
  uStack_10f = 0;
  local_118 = 0;
  uStack_100 = 0;
  uStack_ff = 0;
  local_108 = 0;
  local_120 = 1;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_130 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_177 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uVar170 = CONCAT17(auVar184[7] | auVar180[7],
                     CONCAT16(auVar184[6] | auVar180[6],
                              CONCAT15(auVar184[5] | auVar180[5],
                                       CONCAT14(auVar184[4] | auVar180[4],
                                                CONCAT13(auVar184[3] | auVar180[3],
                                                         CONCAT12(auVar184[2] | auVar180[2],
                                                                  CONCAT11(auVar184[1] | auVar180[1]
                                                                           ,auVar184[0] |
                                                                            auVar180[0]))))))) |
            (ulong)*(byte *)((long)param_3 + 7) << 5 |
            (ulong)(*(byte *)((long)param_3 + 6) >> 3) | ((ulong)(byte)param_3[3] & 0x3f) << 0x2d;
  local_180 = 1;
  uVar143 = 0;
  local_f8 = uVar169;
  uStack_f0 = uVar170;
  local_e8 = uVar168;
  uStack_e0 = uVar166;
  local_d8 = uVar164;
  do {
    uVar3 = *(byte *)((long)&local_a0 + (ulong)(uVar182 >> 3)) >> (ulong)(uVar182 & 7) & 1;
    uVar158 = (ulong)uVar3;
    local_220 = -(ulong)(uVar3 ^ (uint)uVar143);
    local_240 = (local_120 ^ uVar169) & local_220;
    uVar139 = (local_118 ^ uVar170) & local_220;
    local_230 = (CONCAT71(uStack_10f,uStack_110) ^ uVar168) & local_220;
    uVar172 = (local_108 ^ uVar166) & local_220;
    local_120 = local_240 ^ local_120;
    local_118 = uVar139 ^ local_118;
    uVar139 = uVar139 ^ uVar170;
    uVar153 = local_230 ^ CONCAT71(uStack_10f,uStack_110);
    local_230 = local_230 ^ uVar168;
    uVar150 = (CONCAT71(uStack_ff,uStack_100) ^ uVar164) & local_220;
    uVar168 = (local_180 ^ local_150) & local_220;
    uVar161 = uVar150 ^ CONCAT71(uStack_ff,uStack_100);
    uVar150 = uVar150 ^ uVar164;
    local_240 = local_240 ^ uVar169;
    uVar166 = uVar172 ^ uVar166;
    uStack_238 = (CONCAT71(uStack_177,uStack_178) ^ uStack_148) & local_220;
    uVar164 = uVar168 ^ local_150;
    local_180 = uVar168 ^ local_180;
    uVar170 = uStack_238 ^ uStack_148;
    uStack_238 = uStack_238 ^ CONCAT71(uStack_177,uStack_178);
    uVar168 = (uStack_170 ^ local_140) & local_220;
    uVar138 = uVar168 ^ local_140;
    uStack_170 = uVar168 ^ uStack_170;
    uVar168 = (local_168 ^ uStack_138) & local_220;
    uVar172 = uVar172 ^ local_108;
    uVar173 = uVar168 ^ uStack_138;
    local_220 = (uStack_160 ^ local_130) & local_220;
    local_168 = uVar168 ^ local_168;
    uVar176 = local_220 ^ local_130;
    local_270 = (undefined1 *)((local_240 + 0xfffffffffffda) - local_180);
    lStack_268 = (uVar139 - uStack_238) + 0xffffffffffffe;
    local_220 = local_220 ^ uStack_160;
    local_260 = (undefined1 *)((local_230 - uStack_170) + 0xffffffffffffe);
    lStack_258 = (uVar166 - local_168) + 0xffffffffffffe;
    local_230 = uStack_170 + local_230;
    local_250 = (undefined1 *)((uVar150 - local_220) + 0xffffffffffffe);
    puVar171 = (undefined1 *)((local_120 + 0xfffffffffffda) - uVar164);
    uVar168 = (local_118 - uVar170) + 0xffffffffffffe;
    uVar143 = (uVar172 - uVar173) + 0xffffffffffffe;
    uStack_228 = local_168 + uVar166;
    uVar166 = (uVar153 - uVar138) + 0xffffffffffffe;
    uVar169 = (uVar161 - uVar176) + 0xffffffffffffe;
    uStack_178 = (undefined1)uStack_238;
    uStack_177 = (undefined7)(uStack_238 >> 8);
    uVar164 = uVar164 + local_120;
    uVar170 = uVar170 + local_118;
    uVar138 = uVar138 + uVar153;
    uVar173 = uVar173 + uVar172;
    uVar176 = uVar176 + uVar161;
    local_240 = local_180 + local_240;
    uStack_238 = uStack_238 + uVar139;
    local_220 = local_220 + uVar150;
    uStack_110 = (undefined1)uVar153;
    uStack_10f = (undefined7)(uVar153 >> 8);
    local_298 = puVar171;
    uStack_290 = uVar168;
    local_288 = (undefined1 *)uVar166;
    uStack_280 = uVar143;
    local_278 = (undefined1 *)uVar169;
    local_210 = uVar164;
    uStack_208 = uVar170;
    local_200 = uVar138;
    local_1f8 = uVar173;
    local_1f0 = uVar176;
    FUN_007866c0(&local_180,&local_270,&local_210);
    FUN_007866c0(&local_150,&local_240,&local_298);
    uVar144 = uVar169 * 0x26;
    auVar186._8_8_ = 0;
    auVar186._0_8_ = uVar169 * 0x13;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar169;
    uVar172 = uVar169 * 0x13 * uVar169;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar143 * 0x13;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar143;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar144;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar143;
    uVar150 = uVar143 * 0x26 * uVar166;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = puVar171;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = puVar171;
    uVar161 = uVar143 * 0x13 * uVar143;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar143 * 0x26;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar166;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar138;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar138;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar144;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar166;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar166;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar166;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar144;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar168;
    uVar140 = uVar143 * 2;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar140;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar168;
    uVar145 = uVar166 * 2;
    uVar165 = uVar173 * 2;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar145;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar168;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar165;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = uVar170;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar168;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar168;
    uVar153 = uVar169 * 2 * (long)puVar171;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar169 * 2;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = puVar171;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar140;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = puVar171;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar145;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = puVar171;
    uVar167 = uVar173 * 0x26 * uVar138;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar168 * 2;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = puVar171;
    uVar157 = uVar168 * 2 * (long)puVar171;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar173 * 0x26;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar138;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar173 * 0x13;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = uVar173;
    uVar169 = uVar150 + (long)puVar171 * (long)puVar171;
    uVar141 = uVar173 * 0x13 * uVar173;
    uVar142 = uVar176 * 0x26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar142;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar173;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar142;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = uVar170;
    uVar174 = uVar138 * 2;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar142;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = uVar138;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar174;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = uVar170;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar170;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = uVar170;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar164;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = uVar164;
    uVar139 = uVar169 + uVar144 * uVar168;
    uVar154 = uVar139 >> 0x33 |
              (SUB168(auVar7 * auVar72,8) + SUB168(auVar6 * auVar71,8) +
               (ulong)CARRY8(uVar150,(long)puVar171 * (long)puVar171) + SUB168(auVar11 * auVar76,8)
              + (ulong)CARRY8(uVar169,uVar144 * uVar168)) * 0x2000;
    uVar169 = uVar140 * uVar168 + uVar166 * uVar166;
    uVar150 = uVar169 + uVar153;
    lVar155 = SUB168(auVar12 * auVar77,8) + SUB168(auVar10 * auVar75,8) +
              (ulong)CARRY8(uVar140 * uVar168,uVar166 * uVar166) + SUB168(auVar16 * auVar81,8) +
              (ulong)CARRY8(uVar169,uVar153);
    uVar151 = uVar176 * 2 * uVar164;
    uVar169 = uVar161 + uVar157;
    uVar153 = uVar169 + uVar144 * uVar166;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar176 * 2;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar164;
    lVar162 = SUB168(auVar4 * auVar69,8) + SUB168(auVar19 * auVar84,8) +
              (ulong)CARRY8(uVar161,uVar157) + SUB168(auVar9 * auVar74,8) +
              (ulong)CARRY8(uVar169,uVar144 * uVar166);
    uVar166 = uVar153 + uVar154;
    if (CARRY8(uVar153,uVar154)) {
      lVar162 = lVar162 + 1;
    }
    uVar169 = uVar145 * (long)puVar171 + uVar168 * uVar168;
    uVar161 = uVar166 >> 0x33 | lVar162 << 0xd;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar170 * 2;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = uVar164;
    uVar154 = uVar170 * 2 * uVar164;
    uVar153 = uVar169 + uVar144 * uVar143;
    lVar162 = SUB168(auVar18 * auVar83,8) + SUB168(auVar15 * auVar80,8) +
              (ulong)CARRY8(uVar145 * (long)puVar171,uVar168 * uVar168) + SUB168(auVar5 * auVar70,8)
              + (ulong)CARRY8(uVar169,uVar144 * uVar143);
    uVar143 = uVar153 + uVar161;
    if (CARRY8(uVar153,uVar161)) {
      lVar162 = lVar162 + 1;
    }
    uVar169 = uVar140 * (long)puVar171 + uVar145 * uVar168;
    uVar161 = uVar143 >> 0x33 | lVar162 << 0xd;
    uVar153 = uVar169 + uVar172;
    lVar162 = SUB168(auVar17 * auVar82,8) + SUB168(auVar13 * auVar78,8) +
              (ulong)CARRY8(uVar140 * (long)puVar171,uVar145 * uVar168) +
              SUB168(auVar186 * auVar68,8) + (ulong)CARRY8(uVar169,uVar172);
    uVar168 = uVar153 + uVar161;
    if (CARRY8(uVar153,uVar161)) {
      lVar162 = lVar162 + 1;
    }
    uVar153 = uVar168 >> 0x33 | lVar162 << 0xd;
    uVar169 = uVar150 + uVar153;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar165;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = uVar164;
    if (CARRY8(uVar150,uVar153)) {
      lVar155 = lVar155 + 1;
    }
    uVar150 = uVar167 + uVar164 * uVar164;
    uVar153 = uVar150 + uVar142 * uVar170;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar174;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = uVar164;
    uVar172 = uVar165 * uVar170 + uVar138 * uVar138;
    uVar161 = uVar172 + uVar151;
    lVar159 = SUB168(auVar14 * auVar79,8) + SUB168(auVar8 * auVar73,8) +
              (ulong)CARRY8(uVar165 * uVar170,uVar138 * uVar138) + SUB168(auVar28 * auVar93,8) +
              (ulong)CARRY8(uVar172,uVar151);
    uVar140 = uVar153 >> 0x33 |
              (SUB168(auVar20 * auVar85,8) + SUB168(auVar27 * auVar92,8) +
               (ulong)CARRY8(uVar167,uVar164 * uVar164) + SUB168(auVar23 * auVar88,8) +
              (ulong)CARRY8(uVar150,uVar142 * uVar170)) * 0x2000;
    uVar150 = uVar141 + uVar154;
    uVar172 = uVar150 + uVar142 * uVar138;
    lVar162 = SUB168(auVar21 * auVar86,8) + SUB168(auVar29 * auVar94,8) +
              (ulong)CARRY8(uVar141,uVar154) + SUB168(auVar24 * auVar89,8) +
              (ulong)CARRY8(uVar150,uVar142 * uVar138);
    uVar138 = uVar172 + uVar140;
    puVar171 = (undefined1 *)(uVar169 & 0x7ffffffffffff);
    if (CARRY8(uVar172,uVar140)) {
      lVar162 = lVar162 + 1;
    }
    uVar150 = uVar174 * uVar164 + uVar170 * uVar170;
    uVar141 = uVar138 >> 0x33 | lVar162 << 0xd;
    uVar140 = uVar176 * 0x13 * uVar176;
    uVar172 = uVar150 + uVar142 * uVar173;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar176 * 0x13;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = uVar176;
    lVar162 = SUB168(auVar31 * auVar96,8) + SUB168(auVar26 * auVar91,8) +
              (ulong)CARRY8(uVar174 * uVar164,uVar170 * uVar170) + SUB168(auVar22 * auVar87,8) +
              (ulong)CARRY8(uVar150,uVar142 * uVar173);
    uVar173 = uVar172 + uVar141;
    if (CARRY8(uVar172,uVar141)) {
      lVar162 = lVar162 + 1;
    }
    uVar172 = uVar173 >> 0x33 | lVar162 << 0xd;
    uVar176 = uVar165 * uVar164 + uVar174 * uVar170;
    uVar150 = uVar176 + uVar140;
    lVar162 = SUB168(auVar30 * auVar95,8) + SUB168(auVar25 * auVar90,8) +
              (ulong)CARRY8(uVar165 * uVar164,uVar174 * uVar170) + SUB168(auVar32 * auVar97,8) +
              (ulong)CARRY8(uVar176,uVar140);
    uVar164 = uVar150 + uVar172;
    if (CARRY8(uVar150,uVar172)) {
      lVar162 = lVar162 + 1;
    }
    uVar176 = (uVar139 & 0x7ffffffffffff) + (uVar169 >> 0x33 | lVar155 << 0xd) * 0x13;
    uVar170 = uVar164 >> 0x33 | lVar162 << 0xd;
    uVar169 = uVar161 + uVar170;
    if (CARRY8(uVar161,uVar170)) {
      lVar159 = lVar159 + 1;
    }
    uVar166 = (uVar166 & 0x7ffffffffffff) + (uVar176 >> 0x33);
    puVar156 = (undefined1 *)(uVar176 & 0x7ffffffffffff);
    puVar146 = (undefined1 *)(uVar169 & 0x7ffffffffffff);
    uVar169 = (uVar153 & 0x7ffffffffffff) + (uVar169 >> 0x33 | lVar159 << 0xd) * 0x13;
    uVar160 = uVar166 & 0x7ffffffffffff;
    puVar1 = (undefined1 *)((uVar143 & 0x7ffffffffffff) + (uVar166 >> 0x33));
    uVar168 = uVar168 & 0x7ffffffffffff;
    uVar164 = uVar164 & 0x7ffffffffffff;
    uVar166 = (uVar138 & 0x7ffffffffffff) + (uVar169 >> 0x33);
    puVar152 = (undefined1 *)(uVar169 & 0x7ffffffffffff);
    uVar149 = uVar166 & 0x7ffffffffffff;
    puVar2 = (undefined1 *)((uVar173 & 0x7ffffffffffff) + (uVar166 >> 0x33));
    uVar166 = uStack_148 + CONCAT71(uStack_177,uStack_178);
    uVar143 = local_150 + local_180;
    uVar177 = (local_180 + 0xfffffffffffda) - local_150;
    uVar169 = (CONCAT71(uStack_177,uStack_178) - uStack_148) + 0xffffffffffffe;
    uVar170 = local_140 + uStack_170;
    uVar138 = (uStack_170 - local_140) + 0xffffffffffffe;
    uVar173 = (local_168 - uStack_138) + 0xffffffffffffe;
    uVar176 = uStack_138 + local_168;
    uVar139 = (uStack_160 - local_130) + 0xffffffffffffe;
    uVar150 = local_130 + uStack_160;
    local_240 = uVar177;
    uStack_238 = uVar169;
    local_230 = uVar138;
    uStack_228 = uVar173;
    local_220 = uVar139;
    local_1e0 = puVar152;
    uStack_1d8 = uVar149;
    local_1d0 = puVar2;
    local_1c8 = uVar164;
    local_1c0 = puVar146;
    local_1b0 = puVar156;
    uStack_1a8 = uVar160;
    local_1a0 = puVar1;
    local_198 = uVar168;
    local_190 = puVar171;
    FUN_007866c0(&local_120,&local_1e0,&local_1b0);
    uVar165 = uVar139 * 0x26;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar139 * 0x13;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = uVar139;
    uVar141 = uVar139 * 0x13 * uVar139;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar165;
    auVar99._8_8_ = 0;
    auVar99._0_8_ = uVar138;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar165;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = uVar169;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar165;
    auVar101._8_8_ = 0;
    auVar101._0_8_ = uVar173;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar173 * 0x13;
    auVar102._8_8_ = 0;
    auVar102._0_8_ = uVar173;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar173 * 0x26;
    auVar103._8_8_ = 0;
    auVar103._0_8_ = uVar138;
    uVar142 = uVar173 * 0x13 * uVar173;
    uVar172 = uVar173 * 0x26 * uVar138;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar177;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = uVar177;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar138;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar138;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar139 * 2;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = uVar177;
    uVar161 = uVar139 * 2 * uVar177;
    uVar144 = uVar173 * 2;
    uVar167 = uVar138 * 2;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar144;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = uVar169;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar144;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar177;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar167;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = uVar169;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar169;
    auVar110._8_8_ = 0;
    auVar110._0_8_ = uVar169;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar167;
    auVar111._8_8_ = 0;
    auVar111._0_8_ = uVar177;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar169 * 2;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = uVar177;
    uVar140 = uVar169 * 2 * uVar177;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar176 * 0x13;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = uVar176;
    uVar145 = uVar176 * 0x13 * uVar176;
    uVar151 = uVar150 * 0x26;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar176 * 0x26;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = uVar170;
    uVar174 = uVar176 * 0x26 * uVar170;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar151;
    auVar115._8_8_ = 0;
    auVar115._0_8_ = uVar176;
    uVar175 = uVar176 * 2;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar151;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = uVar170;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar151;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = uVar166;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar170;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = uVar170;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar150 * 2;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = uVar143;
    uVar154 = uVar150 * 2 * uVar143;
    uVar148 = uVar170 * 2;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar148;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = uVar166;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar148;
    auVar121._8_8_ = 0;
    auVar121._0_8_ = uVar143;
    local_278 = puVar146 + (0xffffffffffffe - (long)puVar171);
    uVar139 = uVar172 + uVar177 * uVar177;
    uVar153 = uVar139 + uVar165 * uVar169;
    uStack_280 = (uVar164 - uVar168) + 0xffffffffffffe;
    uVar164 = uVar144 * uVar169 + uVar138 * uVar138;
    uVar157 = uVar153 >> 0x33 |
              (SUB168(auVar38 * auVar103,8) + SUB168(auVar39 * auVar104,8) +
               (ulong)CARRY8(uVar172,uVar177 * uVar177) + SUB168(auVar35 * auVar100,8) +
              (ulong)CARRY8(uVar139,uVar165 * uVar169)) * 0x2000;
    uVar139 = uVar164 + uVar161;
    lVar155 = SUB168(auVar42 * auVar107,8) + SUB168(auVar40 * auVar105,8) +
              (ulong)CARRY8(uVar144 * uVar169,uVar138 * uVar138) + SUB168(auVar41 * auVar106,8) +
              (ulong)CARRY8(uVar164,uVar161);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uStack_280;
    lVar159 = SUB168(auVar57 * ZEXT816(0x1db42),8);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = local_278;
    uVar161 = SUB168(auVar58 * ZEXT816(0x1db42),8);
    uVar164 = uVar142 + uVar140;
    local_288 = puVar2 + (0xffffffffffffe - (long)puVar1);
    uVar172 = uVar164 + uVar165 * uVar138;
    lVar162 = SUB168(auVar37 * auVar102,8) + SUB168(auVar47 * auVar112,8) +
              (ulong)CARRY8(uVar142,uVar140) + SUB168(auVar34 * auVar99,8) +
              (ulong)CARRY8(uVar164,uVar165 * uVar138);
    uVar138 = uVar172 + uVar157;
    if (CARRY8(uVar172,uVar157)) {
      lVar162 = lVar162 + 1;
    }
    uVar164 = uVar167 * uVar177 + uVar169 * uVar169;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = local_288;
    lVar163 = SUB168(auVar59 * ZEXT816(0x1db42),8);
    local_298 = puVar152 + (0xfffffffffffda - (long)puVar156);
    uVar140 = uVar138 >> 0x33 | lVar162 << 0xd;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = local_298;
    uVar172 = uVar164 + uVar165 * uVar173;
    lVar162 = SUB168(auVar46 * auVar111,8) + SUB168(auVar45 * auVar110,8) +
              (ulong)CARRY8(uVar167 * uVar177,uVar169 * uVar169) + SUB168(auVar36 * auVar101,8) +
              (ulong)CARRY8(uVar164,uVar165 * uVar173);
    uVar173 = uVar172 + uVar140;
    if (CARRY8(uVar172,uVar140)) {
      lVar162 = lVar162 + 1;
    }
    uVar140 = uVar173 >> 0x33 | lVar162 << 0xd;
    uVar142 = (ulong)((long)local_298 * 0x1db42) >> 0x33 |
              SUB168(auVar60 * ZEXT816(0x1db42),8) << 0xd;
    uStack_290 = (uVar149 - uVar160) + 0xffffffffffffe;
    uVar164 = uVar144 * uVar177 + uVar167 * uVar169;
    uVar172 = uVar164 + uVar141;
    lVar162 = SUB168(auVar43 * auVar108,8) + SUB168(auVar44 * auVar109,8) +
              (ulong)CARRY8(uVar144 * uVar177,uVar167 * uVar169) + SUB168(auVar33 * auVar98,8) +
              (ulong)CARRY8(uVar164,uVar141);
    uStack_138 = uVar172 + uVar140;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uStack_290;
    lVar147 = SUB168(auVar61 * ZEXT816(0x1db42),8);
    if (CARRY8(uVar172,uVar140)) {
      lVar162 = lVar162 + 1;
    }
    uVar169 = uStack_138 >> 0x33 | lVar162 << 0xd;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar175;
    auVar122._8_8_ = 0;
    auVar122._0_8_ = uVar166;
    local_130 = uVar139 + uVar169;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar166;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = uVar166;
    if (CARRY8(uVar139,uVar169)) {
      lVar155 = lVar155 + 1;
    }
    uVar169 = uStack_290 * 0x1db42 + uVar142;
    if (CARRY8(uStack_290 * 0x1db42,uVar142)) {
      lVar147 = lVar147 + 1;
    }
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar143;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = uVar143;
    uVar164 = uVar169 >> 0x33 | lVar147 << 0xd;
    uVar139 = uVar164 + (long)local_288 * 0x1db42;
    if (CARRY8(uVar164,(long)local_288 * 0x1db42)) {
      lVar163 = lVar163 + 1;
    }
    uVar164 = uVar139 >> 0x33 | lVar163 << 0xd;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar166 * 2;
    auVar125._8_8_ = 0;
    auVar125._0_8_ = uVar143;
    uVar172 = uVar164 + uStack_280 * 0x1db42;
    if (CARRY8(uVar164,uStack_280 * 0x1db42)) {
      lVar159 = lVar159 + 1;
    }
    uVar141 = uVar172 >> 0x33 | lVar159 << 0xd;
    uVar164 = uVar166 * 2 * uVar143;
    uVar140 = uVar141 + (long)local_278 * 0x1db42;
    if (CARRY8(uVar141,(long)local_278 * 0x1db42)) {
      uVar161 = uVar161 + 1;
    }
    uVar141 = uVar174 + uVar143 * uVar143;
    uVar142 = uVar141 + uVar151 * uVar166;
    uVar144 = uVar175 * uVar166 + uVar170 * uVar170;
    uVar157 = uVar144 + uVar154;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar175;
    auVar126._8_8_ = 0;
    auVar126._0_8_ = uVar143;
    lVar159 = SUB168(auVar62 * auVar122,8) + SUB168(auVar53 * auVar118,8) +
              (ulong)CARRY8(uVar175 * uVar166,uVar170 * uVar170) + SUB168(auVar54 * auVar119,8) +
              (ulong)CARRY8(uVar144,uVar154);
    uVar154 = uVar142 >> 0x33 |
              (SUB168(auVar49 * auVar114,8) + SUB168(auVar64 * auVar124,8) +
               (ulong)CARRY8(uVar174,uVar143 * uVar143) + SUB168(auVar52 * auVar117,8) +
              (ulong)CARRY8(uVar141,uVar151 * uVar166)) * 0x2000;
    uVar141 = uVar145 + uVar164;
    uVar144 = uVar141 + uVar151 * uVar170;
    lVar162 = SUB168(auVar48 * auVar113,8) + SUB168(auVar65 * auVar125,8) +
              (ulong)CARRY8(uVar145,uVar164) + SUB168(auVar51 * auVar116,8) +
              (ulong)CARRY8(uVar141,uVar151 * uVar170);
    uVar170 = uVar144 + uVar154;
    if (CARRY8(uVar144,uVar154)) {
      lVar162 = lVar162 + 1;
    }
    uVar144 = uVar150 * 0x13 * uVar150;
    uVar164 = uVar148 * uVar143 + uVar166 * uVar166;
    uVar141 = uVar170 >> 0x33 | lVar162 << 0xd;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar150 * 0x13;
    auVar127._8_8_ = 0;
    auVar127._0_8_ = uVar150;
    uVar150 = uVar164 + uVar151 * uVar176;
    lVar162 = SUB168(auVar56 * auVar121,8) + SUB168(auVar63 * auVar123,8) +
              (ulong)CARRY8(uVar148 * uVar143,uVar166 * uVar166) + SUB168(auVar50 * auVar115,8) +
              (ulong)CARRY8(uVar164,uVar151 * uVar176);
    uVar176 = uVar150 + uVar141;
    if (CARRY8(uVar150,uVar141)) {
      lVar162 = lVar162 + 1;
    }
    uVar141 = uVar176 >> 0x33 | lVar162 << 0xd;
    uVar164 = uVar175 * uVar143 + uVar148 * uVar166;
    uVar150 = uVar164 + uVar144;
    lVar162 = SUB168(auVar66 * auVar126,8) + SUB168(auVar55 * auVar120,8) +
              (ulong)CARRY8(uVar175 * uVar143,uVar148 * uVar166) + SUB168(auVar67 * auVar127,8) +
              (ulong)CARRY8(uVar164,uVar144);
    uVar166 = uVar150 + uVar141;
    if (CARRY8(uVar150,uVar141)) {
      lVar162 = lVar162 + 1;
    }
    local_150 = (uVar153 & 0x7ffffffffffff) + (local_130 >> 0x33 | lVar155 << 0xd) * 0x13;
    uVar164 = uVar166 >> 0x33 | lVar162 << 0xd;
    uVar166 = uVar166 & 0x7ffffffffffff;
    uVar150 = ((long)local_298 * 0x1db42 & 0x7fffffffffffeU) +
              (uVar140 >> 0x33 | (uVar161 & 0x7ffff) << 0xd) * 0x13;
    uVar143 = uVar157 + uVar164;
    if (CARRY8(uVar157,uVar164)) {
      lVar159 = lVar159 + 1;
    }
    uVar164 = uVar143 & 0x7ffffffffffff;
    uStack_148 = (uVar138 & 0x7ffffffffffff) + (local_150 >> 0x33);
    local_150 = local_150 & 0x7ffffffffffff;
    local_140 = (uVar173 & 0x7ffffffffffff) + (uStack_148 >> 0x33);
    uStack_148 = uStack_148 & 0x7ffffffffffff;
    uStack_138 = uStack_138 & 0x7ffffffffffff;
    local_130 = local_130 & 0x7ffffffffffff;
    uVar138 = (uVar169 & 0x7ffffffffffff) + (uVar150 >> 0x33);
    uVar169 = (uVar142 & 0x7ffffffffffff) + (uVar143 >> 0x33 | lVar159 << 0xd) * 0x13;
    local_270 = puVar156 + (uVar150 & 0x7ffffffffffff);
    lStack_268 = (uVar138 & 0x7ffffffffffff) + uVar160;
    uVar143 = (uVar170 & 0x7ffffffffffff) + (uVar169 >> 0x33);
    local_260 = puVar1 + (uVar138 >> 0x33) + (uVar139 & 0x7ffffffffffff);
    uVar169 = uVar169 & 0x7ffffffffffff;
    lStack_258 = (uVar172 & 0x7ffffffffffff) + uVar168;
    uVar170 = uVar143 & 0x7ffffffffffff;
    local_250 = puVar171 + (uVar140 & 0x7ffffffffffff);
    uVar168 = (uVar176 & 0x7ffffffffffff) + (uVar143 >> 0x33);
    FUN_007866c0(&local_180,&local_f8,&local_150);
    FUN_007866c0(&local_150,&local_298,&local_270);
    uVar182 = uVar182 - 1;
    uVar143 = uVar158;
  } while (uVar182 != 0xffffffff);
  uVar143 = -uVar158;
  auVar183._8_8_ = uVar143;
  auVar183._0_8_ = uVar143;
  auVar135._8_8_ = uStack_148;
  auVar135._0_8_ = local_150;
  auVar136._8_8_ = uStack_138;
  auVar136._0_8_ = local_140;
  auVar129[8] = uStack_178;
  auVar129._0_8_ = local_180;
  auVar134._8_8_ = local_168;
  auVar134._0_8_ = uStack_170;
  auVar181._8_8_ = uVar168;
  auVar181._0_8_ = uVar170;
  auVar129[9] = (char)uStack_177;
  auVar129[10] = (char)((uint7)uStack_177 >> 8);
  auVar129[0xb] = (char)((uint7)uStack_177 >> 0x10);
  auVar129[0xc] = (char)((uint7)uStack_177 >> 0x18);
  auVar129[0xd] = (char)((uint7)uStack_177 >> 0x20);
  auVar129[0xe] = (char)((uint7)uStack_177 >> 0x28);
  auVar129[0xf] = (char)((uint7)uStack_177 >> 0x30);
  auVar185 = NEON_bit(auVar135,auVar129,auVar183,1);
  auVar130[8] = uStack_110;
  auVar130._0_8_ = local_118;
  auVar186 = NEON_bit(auVar136,auVar134,auVar183,1);
  auVar130[9] = (char)uStack_10f;
  auVar130[10] = (char)((uint7)uStack_10f >> 8);
  auVar130[0xb] = (char)((uint7)uStack_10f >> 0x10);
  auVar130[0xc] = (char)((uint7)uStack_10f >> 0x18);
  auVar130[0xd] = (char)((uint7)uStack_10f >> 0x20);
  auVar130[0xe] = (char)((uint7)uStack_10f >> 0x28);
  auVar130[0xf] = (char)((uint7)uStack_10f >> 0x30);
  auVar180 = NEON_bif(auVar181,auVar130,auVar183,1);
  auVar131[8] = uStack_100;
  auVar131._0_8_ = local_108;
  local_120 = uVar169 & uVar143 | local_120 & uVar158 - 1;
  auVar131[9] = (char)uStack_ff;
  auVar131[10] = (char)((uint7)uStack_ff >> 8);
  auVar131[0xb] = (char)((uint7)uStack_ff >> 0x10);
  auVar131[0xc] = (char)((uint7)uStack_ff >> 0x18);
  auVar131[0xd] = (char)((uint7)uStack_ff >> 0x20);
  auVar131[0xe] = (char)((uint7)uStack_ff >> 0x28);
  auVar131[0xf] = (char)((uint7)uStack_ff >> 0x30);
  auVar132._8_8_ = uVar164;
  auVar132._0_8_ = uVar166;
  auVar184 = NEON_bsl(auVar183,auVar132,auVar131,1);
  uStack_148 = auVar185._8_8_;
  local_150 = auVar185._0_8_;
  uStack_138 = auVar186._8_8_;
  local_140 = auVar186._0_8_;
  uStack_110 = auVar180[8];
  uStack_10f = auVar180._9_7_;
  local_118 = auVar180._0_8_;
  local_130 = uStack_160 & uVar143 | local_130 & uVar158 - 1;
  uStack_100 = auVar184[8];
  uStack_ff = auVar184._9_7_;
  local_108 = auVar184._0_8_;
  local_d0 = local_150;
  uStack_c8 = uStack_148;
  uStack_c0 = local_140;
  uStack_b8 = uStack_138;
  local_b0 = local_130;
  FUN_007848ec(&local_150,&local_d0);
  FUN_007866c0(&local_120,&local_120,&local_150);
  FUN_0077d770(param_1,&local_120);
  iVar137 = FUN_0078cd34(&DAT_0020ac00,param_1,0x20);
  if (*(long *)(lVar128 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar137 != 0);
}


// ===== 007848ec  FUN_007848ec =====

void FUN_007848ec(undefined8 param_1,ulong *param_2)

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
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar424 [16];
  undefined1 auVar425 [16];
  undefined1 auVar426 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar431 [16];
  undefined1 auVar432 [16];
  undefined1 auVar433 [16];
  undefined1 auVar434 [16];
  undefined1 auVar435 [16];
  undefined1 auVar436 [16];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  undefined1 auVar440 [16];
  undefined1 auVar441 [16];
  undefined1 auVar442 [16];
  undefined1 auVar443 [16];
  undefined1 auVar444 [16];
  undefined1 auVar445 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar448 [16];
  undefined1 auVar449 [16];
  undefined1 auVar450 [16];
  undefined1 auVar451 [16];
  undefined1 auVar452 [16];
  undefined1 auVar453 [16];
  undefined1 auVar454 [16];
  undefined1 auVar455 [16];
  undefined1 auVar456 [16];
  undefined1 auVar457 [16];
  undefined1 auVar458 [16];
  undefined1 auVar459 [16];
  undefined1 auVar460 [16];
  undefined1 auVar461 [16];
  undefined1 auVar462 [16];
  undefined1 auVar463 [16];
  undefined1 auVar464 [16];
  undefined1 auVar465 [16];
  undefined1 auVar466 [16];
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [16];
  undefined1 auVar475 [16];
  undefined1 auVar476 [16];
  undefined1 auVar477 [16];
  undefined1 auVar478 [16];
  undefined1 auVar479 [16];
  undefined1 auVar480 [16];
  undefined1 auVar481 [16];
  undefined1 auVar482 [16];
  undefined1 auVar483 [16];
  undefined1 auVar484 [16];
  undefined1 auVar485 [16];
  undefined1 auVar486 [16];
  undefined1 auVar487 [16];
  undefined1 auVar488 [16];
  undefined1 auVar489 [16];
  undefined1 auVar490 [16];
  undefined1 auVar491 [16];
  undefined1 auVar492 [16];
  undefined1 auVar493 [16];
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  undefined1 auVar499 [16];
  undefined1 auVar500 [16];
  undefined1 auVar501 [16];
  undefined1 auVar502 [16];
  undefined1 auVar503 [16];
  undefined1 auVar504 [16];
  undefined1 auVar505 [16];
  undefined1 auVar506 [16];
  undefined1 auVar507 [16];
  undefined1 auVar508 [16];
  undefined1 auVar509 [16];
  undefined1 auVar510 [16];
  undefined1 auVar511 [16];
  undefined1 auVar512 [16];
  undefined1 auVar513 [16];
  undefined1 auVar514 [16];
  undefined1 auVar515 [16];
  undefined1 auVar516 [16];
  undefined1 auVar517 [16];
  undefined1 auVar518 [16];
  undefined1 auVar519 [16];
  undefined1 auVar520 [16];
  undefined1 auVar521 [16];
  undefined1 auVar522 [16];
  undefined1 auVar523 [16];
  undefined1 auVar524 [16];
  undefined1 auVar525 [16];
  undefined1 auVar526 [16];
  undefined1 auVar527 [16];
  undefined1 auVar528 [16];
  undefined1 auVar529 [16];
  undefined1 auVar530 [16];
  undefined1 auVar531 [16];
  undefined1 auVar532 [16];
  undefined1 auVar533 [16];
  undefined1 auVar534 [16];
  undefined1 auVar535 [16];
  undefined1 auVar536 [16];
  undefined1 auVar537 [16];
  undefined1 auVar538 [16];
  undefined1 auVar539 [16];
  undefined1 auVar540 [16];
  undefined1 auVar541 [16];
  undefined1 auVar542 [16];
  undefined1 auVar543 [16];
  undefined1 auVar544 [16];
  undefined1 auVar545 [16];
  undefined1 auVar546 [16];
  undefined1 auVar547 [16];
  undefined1 auVar548 [16];
  undefined1 auVar549 [16];
  undefined1 auVar550 [16];
  undefined1 auVar551 [16];
  undefined1 auVar552 [16];
  undefined1 auVar553 [16];
  undefined1 auVar554 [16];
  undefined1 auVar555 [16];
  undefined1 auVar556 [16];
  undefined1 auVar557 [16];
  undefined1 auVar558 [16];
  undefined1 auVar559 [16];
  undefined1 auVar560 [16];
  undefined1 auVar561 [16];
  undefined1 auVar562 [16];
  undefined1 auVar563 [16];
  undefined1 auVar564 [16];
  undefined1 auVar565 [16];
  undefined1 auVar566 [16];
  undefined1 auVar567 [16];
  undefined1 auVar568 [16];
  undefined1 auVar569 [16];
  undefined1 auVar570 [16];
  undefined1 auVar571 [16];
  undefined1 auVar572 [16];
  undefined1 auVar573 [16];
  undefined1 auVar574 [16];
  undefined1 auVar575 [16];
  undefined1 auVar576 [16];
  undefined1 auVar577 [16];
  undefined1 auVar578 [16];
  undefined1 auVar579 [16];
  undefined1 auVar580 [16];
  undefined1 auVar581 [16];
  undefined1 auVar582 [16];
  undefined1 auVar583 [16];
  undefined1 auVar584 [16];
  undefined1 auVar585 [16];
  undefined1 auVar586 [16];
  undefined1 auVar587 [16];
  undefined1 auVar588 [16];
  undefined1 auVar589 [16];
  undefined1 auVar590 [16];
  undefined1 auVar591 [16];
  undefined1 auVar592 [16];
  undefined1 auVar593 [16];
  undefined1 auVar594 [16];
  undefined1 auVar595 [16];
  undefined1 auVar596 [16];
  undefined1 auVar597 [16];
  undefined1 auVar598 [16];
  undefined1 auVar599 [16];
  undefined1 auVar600 [16];
  ulong uVar601;
  ulong uVar602;
  ulong uVar603;
  ulong uVar604;
  int iVar605;
  ulong uVar606;
  ulong uVar607;
  ulong uVar608;
  long lVar609;
  ulong uVar610;
  ulong uVar611;
  ulong uVar612;
  ulong uVar613;
  ulong uVar614;
  long lVar615;
  ulong uVar616;
  ulong uVar617;
  long lVar618;
  long lVar619;
  ulong uVar620;
  ulong uVar621;
  ulong uVar622;
  ulong uVar623;
  ulong uVar624;
  ulong uVar625;
  ulong uVar626;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  
  uVar626 = param_2[3];
  uVar621 = param_2[4];
  uVar601 = param_2[2];
  uVar612 = *param_2;
  uVar607 = param_2[1];
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar622 = uVar621 * 0x26;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar621 * 0x13;
  auVar301._8_8_ = 0;
  auVar301._0_8_ = uVar621;
  uVar606 = uVar621 * 0x13 * uVar621;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar626 * 0x13;
  auVar302._8_8_ = 0;
  auVar302._0_8_ = uVar626;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar626;
  auVar303._8_8_ = 0;
  auVar303._0_8_ = uVar622;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar601;
  auVar304._8_8_ = 0;
  auVar304._0_8_ = uVar622;
  uVar603 = uVar626 * 0x13 * uVar626;
  uVar623 = uVar626 * 2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar601;
  auVar305._8_8_ = 0;
  auVar305._0_8_ = uVar626 * 0x26;
  uVar604 = uVar601 * uVar626 * 0x26;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar607;
  auVar306._8_8_ = 0;
  auVar306._0_8_ = uVar622;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar601;
  auVar307._8_8_ = 0;
  auVar307._0_8_ = uVar601;
  uVar608 = uVar607 * uVar622 + uVar604;
  uVar602 = uVar601 * 2;
  uVar617 = uVar608 + uVar612 * uVar612;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar612;
  auVar308._8_8_ = 0;
  auVar308._0_8_ = uVar612;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar607;
  auVar309._8_8_ = 0;
  auVar309._0_8_ = uVar623;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar612;
  auVar310._8_8_ = 0;
  auVar310._0_8_ = uVar621 * 2;
  uVar624 = uVar607 * uVar623 + uVar601 * uVar601;
  uVar621 = uVar612 * uVar621 * 2;
  uVar611 = uVar617 >> 0x33 |
            (SUB168(auVar6 * auVar306,8) + SUB168(auVar5 * auVar305,8) +
             (ulong)CARRY8(uVar607 * uVar622,uVar604) + SUB168(auVar8 * auVar308,8) +
            (ulong)CARRY8(uVar608,uVar612 * uVar612)) * 0x2000;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar607;
  auVar311._8_8_ = 0;
  auVar311._0_8_ = uVar602;
  uVar608 = uVar624 + uVar621;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar612;
  auVar312._8_8_ = 0;
  auVar312._0_8_ = uVar623;
  lVar609 = SUB168(auVar9 * auVar309,8) + SUB168(auVar7 * auVar307,8) +
            (ulong)CARRY8(uVar607 * uVar623,uVar601 * uVar601) + SUB168(auVar10 * auVar310,8) +
            (ulong)CARRY8(uVar624,uVar621);
  uVar624 = uVar607 * uVar602 + uVar606;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar607;
  auVar313._8_8_ = 0;
  auVar313._0_8_ = uVar607;
  uVar621 = uVar624 + uVar612 * uVar623;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar612;
  auVar314._8_8_ = 0;
  auVar314._0_8_ = uVar602;
  lVar615 = SUB168(auVar11 * auVar311,8) + SUB168(auVar1 * auVar301,8) +
            (ulong)CARRY8(uVar607 * uVar602,uVar606) + SUB168(auVar12 * auVar312,8) +
            (ulong)CARRY8(uVar624,uVar612 * uVar623);
  uVar624 = uVar607 * uVar607 + uVar626 * uVar622;
  uVar606 = uVar612 * uVar607 * 2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar612;
  auVar315._8_8_ = 0;
  auVar315._0_8_ = uVar607 * 2;
  uVar604 = uVar624 + uVar612 * uVar602;
  lVar618 = SUB168(auVar13 * auVar313,8) + SUB168(auVar3 * auVar303,8) +
            (ulong)CARRY8(uVar607 * uVar607,uVar626 * uVar622) + SUB168(auVar14 * auVar314,8) +
            (ulong)CARRY8(uVar624,uVar612 * uVar602);
  uVar624 = uVar601 * uVar622 + uVar603;
  uVar626 = uVar624 + uVar606;
  lVar619 = SUB168(auVar4 * auVar304,8) + SUB168(auVar2 * auVar302,8) +
            (ulong)CARRY8(uVar601 * uVar622,uVar603) + SUB168(auVar15 * auVar315,8) +
            (ulong)CARRY8(uVar624,uVar606);
  uVar624 = uVar626 + uVar611;
  if (CARRY8(uVar626,uVar611)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar612 = uVar626 >> 0x33 | lVar618 << 0xd;
  uVar604 = uVar621 + uVar612;
  if (CARRY8(uVar621,uVar612)) {
    lVar615 = lVar615 + 1;
  }
  local_78 = uVar604 & 0x7ffffffffffff;
  uVar621 = uVar604 >> 0x33 | lVar615 << 0xd;
  uVar604 = local_78 * 2;
  local_70 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_90 = (uVar617 & 0x7ffffffffffff) + (local_70 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_70 = local_70 & 0x7ffffffffffff;
  uVar602 = local_70 * 0x26;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_70;
  auVar316._8_8_ = 0;
  auVar316._0_8_ = local_70 * 0x13;
  uVar603 = local_70 * local_70 * 0x13;
  local_88 = (uVar624 & 0x7ffffffffffff) + (local_90 >> 0x33);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_78;
  auVar317._8_8_ = 0;
  auVar317._0_8_ = local_78 * 0x13;
  local_80 = (uVar626 & 0x7ffffffffffff) + (local_88 >> 0x33);
  uVar612 = local_78 * local_78 * 0x13;
  local_88 = local_88 & 0x7ffffffffffff;
  local_90 = local_90 & 0x7ffffffffffff;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = local_80;
  auVar318._8_8_ = 0;
  auVar318._0_8_ = local_80;
  uVar626 = local_80 * local_78 * 0x26;
  uVar601 = local_80 * 2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = local_88;
  auVar319._8_8_ = 0;
  auVar319._0_8_ = uVar602;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_90;
  auVar320._8_8_ = 0;
  auVar320._0_8_ = local_90;
  uVar608 = local_88 * uVar602 + local_90 * local_90;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = local_80;
  auVar321._8_8_ = 0;
  auVar321._0_8_ = local_78 * 0x26;
  uVar617 = uVar608 + uVar626;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_78;
  auVar322._8_8_ = 0;
  auVar322._0_8_ = uVar602;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_88;
  auVar323._8_8_ = 0;
  auVar323._0_8_ = local_88;
  uVar624 = local_88 * local_88 + local_78 * uVar602;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar601;
  auVar324._8_8_ = 0;
  auVar324._0_8_ = local_90;
  uVar621 = uVar624 + uVar601 * local_90;
  uVar607 = uVar617 >> 0x33 |
            (SUB168(auVar19 * auVar319,8) + SUB168(auVar20 * auVar320,8) +
             (ulong)CARRY8(local_88 * uVar602,local_90 * local_90) + SUB168(auVar21 * auVar321,8) +
            (ulong)CARRY8(uVar608,uVar626)) * 0x2000;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_80;
  auVar325._8_8_ = 0;
  auVar325._0_8_ = uVar602;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = local_88 * 2;
  auVar326._8_8_ = 0;
  auVar326._0_8_ = local_90;
  uVar608 = local_80 * uVar602 + uVar612;
  uVar606 = local_88 * 2 * local_90;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar601;
  auVar327._8_8_ = 0;
  auVar327._0_8_ = local_88;
  uVar626 = uVar608 + uVar606;
  uVar612 = SUB168(auVar25 * auVar325,8) + SUB168(auVar17 * auVar317,8) +
            (ulong)CARRY8(local_80 * uVar602,uVar612) + SUB168(auVar26 * auVar326,8) +
            (ulong)CARRY8(uVar608,uVar606);
  uVar608 = uVar626 + uVar607;
  if (CARRY8(uVar626,uVar607)) {
    uVar612 = uVar612 + 1;
  }
  auVar28._8_8_ = 0;
  auVar28._0_8_ = local_90;
  auVar328._8_8_ = 0;
  auVar328._0_8_ = uVar604;
  uVar607 = uVar608 >> 0x33 | uVar612 << 0xd;
  uVar626 = uVar621 + uVar607;
  uVar602 = SUB168(auVar23 * auVar323,8) + SUB168(auVar22 * auVar322,8) +
            (ulong)CARRY8(local_88 * local_88,local_78 * uVar602) + SUB168(auVar24 * auVar324,8) +
            (ulong)CARRY8(uVar624,uVar601 * local_90) + (uVar612 >> 0x33) +
            (ulong)CARRY8(uVar621,uVar607);
  uVar624 = local_90 * uVar604 + uVar603;
  uVar606 = local_90 * local_70 * 2;
  uVar621 = uVar624 + uVar601 * local_88;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = local_88;
  auVar329._8_8_ = 0;
  auVar329._0_8_ = uVar604;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = local_90;
  auVar330._8_8_ = 0;
  auVar330._0_8_ = local_70 * 2;
  uVar607 = uVar626 >> 0x33 | uVar602 * 0x2000;
  uVar612 = uVar621 + uVar607;
  uVar602 = SUB168(auVar28 * auVar328,8) + SUB168(auVar16 * auVar316,8) +
            (ulong)CARRY8(local_90 * uVar604,uVar603) + SUB168(auVar27 * auVar327,8) +
            (ulong)CARRY8(uVar624,uVar601 * local_88) + (uVar602 >> 0x33) +
            (ulong)CARRY8(uVar621,uVar607);
  uVar624 = local_88 * uVar604 + uVar606;
  uVar623 = uVar612 & 0x7ffffffffffff;
  uVar601 = uVar612 >> 0x33 | uVar602 * 0x2000;
  uVar621 = uVar624 + local_80 * local_80;
  uVar612 = uVar621 + uVar601;
  uVar607 = uVar612 & 0x7ffffffffffff;
  uVar622 = uVar607 * 0x26;
  uVar620 = (uVar617 & 0x7ffffffffffff) +
            (uVar612 >> 0x33 |
            (SUB168(auVar29 * auVar329,8) + SUB168(auVar30 * auVar330,8) +
             (ulong)CARRY8(local_88 * uVar604,uVar606) + SUB168(auVar18 * auVar318,8) +
             (ulong)CARRY8(uVar624,local_80 * local_80) + (uVar602 >> 0x33) +
            (ulong)CARRY8(uVar621,uVar601)) * 0x2000) * 0x13;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar607;
  auVar331._8_8_ = 0;
  auVar331._0_8_ = uVar607 * 0x13;
  uVar625 = uVar607 * uVar607 * 0x13;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar623;
  auVar332._8_8_ = 0;
  auVar332._0_8_ = uVar622;
  uVar613 = uVar623 * uVar623 * 0x13;
  uVar608 = (uVar608 & 0x7ffffffffffff) + (uVar620 >> 0x33);
  uVar620 = uVar620 & 0x7ffffffffffff;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar623;
  auVar333._8_8_ = 0;
  auVar333._0_8_ = uVar623 * 0x13;
  uVar610 = uVar623 * 2;
  uVar617 = (uVar626 & 0x7ffffffffffff) + (uVar608 >> 0x33);
  uVar608 = uVar608 & 0x7ffffffffffff;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar608;
  auVar334._8_8_ = 0;
  auVar334._0_8_ = uVar622;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar617;
  auVar335._8_8_ = 0;
  auVar335._0_8_ = uVar622;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar617;
  auVar336._8_8_ = 0;
  auVar336._0_8_ = uVar623 * 0x26;
  uVar626 = uVar617 * uVar623 * 0x26;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar617;
  auVar337._8_8_ = 0;
  auVar337._0_8_ = uVar617;
  uVar624 = uVar608 * uVar622 + uVar626;
  uVar616 = uVar617 * 2;
  uVar621 = uVar624 + uVar620 * uVar620;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar620;
  auVar338._8_8_ = 0;
  auVar338._0_8_ = uVar620;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar608;
  auVar339._8_8_ = 0;
  auVar339._0_8_ = uVar610;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar620;
  auVar340._8_8_ = 0;
  auVar340._0_8_ = uVar607 * 2;
  uVar604 = uVar608 * uVar610 + uVar617 * uVar617;
  uVar611 = uVar620 * uVar607 * 2;
  uVar614 = uVar621 >> 0x33 |
            (SUB168(auVar34 * auVar334,8) + SUB168(auVar36 * auVar336,8) +
             (ulong)CARRY8(uVar608 * uVar622,uVar626) + SUB168(auVar38 * auVar338,8) +
            (ulong)CARRY8(uVar624,uVar620 * uVar620)) * 0x2000;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar620;
  auVar341._8_8_ = 0;
  auVar341._0_8_ = uVar610;
  uVar624 = uVar604 + uVar611;
  uVar626 = uVar608 * uVar616 + uVar625;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar608;
  auVar342._8_8_ = 0;
  auVar342._0_8_ = uVar616;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar608;
  auVar343._8_8_ = 0;
  auVar343._0_8_ = uVar608;
  uVar612 = uVar626 + uVar620 * uVar610;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar620;
  auVar344._8_8_ = 0;
  auVar344._0_8_ = uVar616;
  uVar606 = uVar620 * uVar608 * 2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar620;
  auVar345._8_8_ = 0;
  auVar345._0_8_ = uVar608 * 2;
  uVar607 = uVar608 * uVar608 + uVar623 * uVar622;
  uVar601 = uVar607 + uVar620 * uVar616;
  uVar602 = uVar617 * uVar622 + uVar613;
  uVar603 = uVar602 + uVar606;
  uVar606 = SUB168(auVar35 * auVar335,8) + SUB168(auVar33 * auVar333,8) +
            (ulong)CARRY8(uVar617 * uVar622,uVar613) + SUB168(auVar45 * auVar345,8) +
            (ulong)CARRY8(uVar602,uVar606);
  uVar602 = uVar603 + uVar614;
  if (CARRY8(uVar603,uVar614)) {
    uVar606 = uVar606 + 1;
  }
  uVar613 = uVar602 >> 0x33 | uVar606 << 0xd;
  uVar603 = uVar601 + uVar613;
  uVar607 = SUB168(auVar43 * auVar343,8) + SUB168(auVar32 * auVar332,8) +
            (ulong)CARRY8(uVar608 * uVar608,uVar623 * uVar622) + SUB168(auVar44 * auVar344,8) +
            (ulong)CARRY8(uVar607,uVar620 * uVar616) + (uVar606 >> 0x33) +
            (ulong)CARRY8(uVar601,uVar613);
  uVar601 = uVar603 >> 0x33 | uVar607 * 0x2000;
  local_a0 = uVar612 + uVar601;
  uVar626 = SUB168(auVar42 * auVar342,8) + SUB168(auVar31 * auVar331,8) +
            (ulong)CARRY8(uVar608 * uVar616,uVar625) + SUB168(auVar41 * auVar341,8) +
            (ulong)CARRY8(uVar626,uVar620 * uVar610) + (uVar607 >> 0x33) +
            (ulong)CARRY8(uVar612,uVar601);
  uVar612 = local_a0 >> 0x33 | uVar626 * 0x2000;
  local_98 = uVar624 + uVar612;
  local_b8 = (uVar621 & 0x7ffffffffffff) +
             (local_98 >> 0x33 |
             (SUB168(auVar39 * auVar339,8) + SUB168(auVar37 * auVar337,8) +
              (ulong)CARRY8(uVar608 * uVar610,uVar617 * uVar617) + SUB168(auVar40 * auVar340,8) +
              (ulong)CARRY8(uVar604,uVar611) + (uVar626 >> 0x33) + (ulong)CARRY8(uVar624,uVar612)) *
             0x2000) * 0x13;
  local_b0 = (uVar602 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_b8 = local_b8 & 0x7ffffffffffff;
  local_a8 = (uVar603 & 0x7ffffffffffff) + (local_b0 >> 0x33);
  local_b0 = local_b0 & 0x7ffffffffffff;
  local_a0 = local_a0 & 0x7ffffffffffff;
  local_98 = local_98 & 0x7ffffffffffff;
  FUN_007866c0(&local_b8,param_2,&local_b8);
  FUN_007866c0(&local_90,&local_90,&local_b8);
  uVar602 = local_70 * 0x26;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = local_70 * 0x13;
  auVar346._8_8_ = 0;
  auVar346._0_8_ = local_70;
  uVar604 = local_70 * 0x13 * local_70;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = local_78 * 0x13;
  auVar347._8_8_ = 0;
  auVar347._0_8_ = local_78;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = local_78;
  auVar348._8_8_ = 0;
  auVar348._0_8_ = uVar602;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = local_80;
  auVar349._8_8_ = 0;
  auVar349._0_8_ = uVar602;
  uVar601 = local_78 * 0x13 * local_78;
  uVar603 = local_78 * 2;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = local_80;
  auVar350._8_8_ = 0;
  auVar350._0_8_ = local_78 * 0x26;
  uVar621 = local_80 * local_78 * 0x26;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = local_88;
  auVar351._8_8_ = 0;
  auVar351._0_8_ = uVar602;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = local_80;
  auVar352._8_8_ = 0;
  auVar352._0_8_ = local_80;
  uVar608 = local_88 * uVar602 + uVar621;
  uVar626 = local_80 * 2;
  uVar617 = uVar608 + local_90 * local_90;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = local_90;
  auVar353._8_8_ = 0;
  auVar353._0_8_ = local_90;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = local_88;
  auVar354._8_8_ = 0;
  auVar354._0_8_ = uVar603;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = local_90;
  auVar355._8_8_ = 0;
  auVar355._0_8_ = local_70 * 2;
  uVar624 = local_88 * uVar603 + local_80 * local_80;
  uVar612 = local_90 * local_70 * 2;
  uVar607 = uVar617 >> 0x33 |
            (SUB168(auVar51 * auVar351,8) + SUB168(auVar50 * auVar350,8) +
             (ulong)CARRY8(local_88 * uVar602,uVar621) + SUB168(auVar53 * auVar353,8) +
            (ulong)CARRY8(uVar608,local_90 * local_90)) * 0x2000;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = local_88;
  auVar356._8_8_ = 0;
  auVar356._0_8_ = uVar626;
  uVar608 = uVar624 + uVar612;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = local_90;
  auVar357._8_8_ = 0;
  auVar357._0_8_ = uVar603;
  lVar609 = SUB168(auVar54 * auVar354,8) + SUB168(auVar52 * auVar352,8) +
            (ulong)CARRY8(local_88 * uVar603,local_80 * local_80) + SUB168(auVar55 * auVar355,8) +
            (ulong)CARRY8(uVar624,uVar612);
  uVar624 = local_88 * uVar626 + uVar604;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = local_88;
  auVar358._8_8_ = 0;
  auVar358._0_8_ = local_88;
  uVar621 = uVar624 + local_90 * uVar603;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = local_90;
  auVar359._8_8_ = 0;
  auVar359._0_8_ = uVar626;
  lVar615 = SUB168(auVar56 * auVar356,8) + SUB168(auVar46 * auVar346,8) +
            (ulong)CARRY8(local_88 * uVar626,uVar604) + SUB168(auVar57 * auVar357,8) +
            (ulong)CARRY8(uVar624,local_90 * uVar603);
  uVar624 = local_88 * local_88 + local_78 * uVar602;
  uVar612 = local_90 * local_88 * 2;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = local_90;
  auVar360._8_8_ = 0;
  auVar360._0_8_ = local_88 * 2;
  uVar604 = uVar624 + local_90 * uVar626;
  lVar618 = SUB168(auVar58 * auVar358,8) + SUB168(auVar48 * auVar348,8) +
            (ulong)CARRY8(local_88 * local_88,local_78 * uVar602) + SUB168(auVar59 * auVar359,8) +
            (ulong)CARRY8(uVar624,local_90 * uVar626);
  uVar624 = local_80 * uVar602 + uVar601;
  uVar626 = uVar624 + uVar612;
  lVar619 = SUB168(auVar49 * auVar349,8) + SUB168(auVar47 * auVar347,8) +
            (ulong)CARRY8(local_80 * uVar602,uVar601) + SUB168(auVar60 * auVar360,8) +
            (ulong)CARRY8(uVar624,uVar612);
  uVar624 = uVar626 + uVar607;
  if (CARRY8(uVar626,uVar607)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar604 = uVar626 >> 0x33 | lVar618 << 0xd;
  local_c8 = uVar621 + uVar604;
  if (CARRY8(uVar621,uVar604)) {
    lVar615 = lVar615 + 1;
  }
  uVar621 = local_c8 >> 0x33 | lVar615 << 0xd;
  local_c0 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_e0 = (uVar617 & 0x7ffffffffffff) + (local_c0 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_d8 = (uVar624 & 0x7ffffffffffff) + (local_e0 >> 0x33);
  local_e0 = local_e0 & 0x7ffffffffffff;
  local_d0 = (uVar626 & 0x7ffffffffffff) + (local_d8 >> 0x33);
  local_d8 = local_d8 & 0x7ffffffffffff;
  local_c8 = local_c8 & 0x7ffffffffffff;
  local_c0 = local_c0 & 0x7ffffffffffff;
  FUN_007866c0(&local_b8,&local_b8,&local_e0);
  uVar602 = local_98 * 0x26;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = local_98 * 0x13;
  auVar361._8_8_ = 0;
  auVar361._0_8_ = local_98;
  uVar604 = local_98 * 0x13 * local_98;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = local_a8;
  auVar362._8_8_ = 0;
  auVar362._0_8_ = uVar602;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = local_a0;
  auVar363._8_8_ = 0;
  auVar363._0_8_ = uVar602;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = local_a0 * 0x13;
  auVar364._8_8_ = 0;
  auVar364._0_8_ = local_a0;
  uVar601 = local_a0 * 0x13 * local_a0;
  uVar603 = local_a0 * 2;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = local_a8;
  auVar365._8_8_ = 0;
  auVar365._0_8_ = local_a0 * 0x26;
  uVar621 = local_a8 * local_a0 * 0x26;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = local_b0;
  auVar366._8_8_ = 0;
  auVar366._0_8_ = uVar602;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = local_a8;
  auVar367._8_8_ = 0;
  auVar367._0_8_ = local_a8;
  uVar608 = local_b0 * uVar602 + uVar621;
  uVar626 = local_a8 * 2;
  uVar617 = uVar608 + local_b8 * local_b8;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = local_b8;
  auVar368._8_8_ = 0;
  auVar368._0_8_ = local_b8;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = local_b0;
  auVar369._8_8_ = 0;
  auVar369._0_8_ = uVar603;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = local_b8;
  auVar370._8_8_ = 0;
  auVar370._0_8_ = local_98 * 2;
  uVar624 = local_b0 * uVar603 + local_a8 * local_a8;
  uVar612 = local_b8 * local_98 * 2;
  uVar607 = uVar617 >> 0x33 |
            (SUB168(auVar66 * auVar366,8) + SUB168(auVar65 * auVar365,8) +
             (ulong)CARRY8(local_b0 * uVar602,uVar621) + SUB168(auVar68 * auVar368,8) +
            (ulong)CARRY8(uVar608,local_b8 * local_b8)) * 0x2000;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = local_b0;
  auVar371._8_8_ = 0;
  auVar371._0_8_ = uVar626;
  uVar608 = uVar624 + uVar612;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = local_b8;
  auVar372._8_8_ = 0;
  auVar372._0_8_ = uVar603;
  lVar609 = SUB168(auVar69 * auVar369,8) + SUB168(auVar67 * auVar367,8) +
            (ulong)CARRY8(local_b0 * uVar603,local_a8 * local_a8) + SUB168(auVar70 * auVar370,8) +
            (ulong)CARRY8(uVar624,uVar612);
  uVar624 = local_b0 * uVar626 + uVar604;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = local_b0;
  auVar373._8_8_ = 0;
  auVar373._0_8_ = local_b0;
  uVar621 = uVar624 + local_b8 * uVar603;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = local_b8;
  auVar374._8_8_ = 0;
  auVar374._0_8_ = uVar626;
  lVar615 = SUB168(auVar71 * auVar371,8) + SUB168(auVar61 * auVar361,8) +
            (ulong)CARRY8(local_b0 * uVar626,uVar604) + SUB168(auVar72 * auVar372,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar603);
  uVar624 = local_b0 * local_b0 + local_a0 * uVar602;
  uVar612 = local_b8 * local_b0 * 2;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = local_b8;
  auVar375._8_8_ = 0;
  auVar375._0_8_ = local_b0 * 2;
  uVar604 = uVar624 + local_b8 * uVar626;
  lVar618 = SUB168(auVar73 * auVar373,8) + SUB168(auVar63 * auVar363,8) +
            (ulong)CARRY8(local_b0 * local_b0,local_a0 * uVar602) + SUB168(auVar74 * auVar374,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar626);
  uVar624 = local_a8 * uVar602 + uVar601;
  uVar626 = uVar624 + uVar612;
  iVar605 = 4;
  lVar619 = SUB168(auVar62 * auVar362,8) + SUB168(auVar64 * auVar364,8) +
            (ulong)CARRY8(local_a8 * uVar602,uVar601) + SUB168(auVar75 * auVar375,8) +
            (ulong)CARRY8(uVar624,uVar612);
  uVar624 = uVar626 + uVar607;
  if (CARRY8(uVar626,uVar607)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar604 = uVar626 >> 0x33 | lVar618 << 0xd;
  local_c8 = uVar621 + uVar604;
  if (CARRY8(uVar621,uVar604)) {
    lVar615 = lVar615 + 1;
  }
  uVar621 = local_c8 >> 0x33 | lVar615 << 0xd;
  local_c0 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_e0 = (uVar617 & 0x7ffffffffffff) + (local_c0 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_c8 = local_c8 & 0x7ffffffffffff;
  local_d8 = (uVar624 & 0x7ffffffffffff) + (local_e0 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_d0 = (uVar626 & 0x7ffffffffffff) + (local_d8 >> 0x33);
  local_e0 = local_e0 & 0x7ffffffffffff;
  local_d8 = local_d8 & 0x7ffffffffffff;
  do {
    uVar613 = local_c0 * 0x26;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = local_c8 * 0x13;
    auVar376._8_8_ = 0;
    auVar376._0_8_ = local_c8;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = local_c8;
    auVar377._8_8_ = 0;
    auVar377._0_8_ = uVar613;
    uVar614 = local_c8 * 0x13 * local_c8;
    uVar622 = local_c8 * 2;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = local_d0;
    auVar378._8_8_ = 0;
    auVar378._0_8_ = uVar613;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = local_d0;
    auVar379._8_8_ = 0;
    auVar379._0_8_ = local_c8 * 0x26;
    uVar624 = local_d0 * local_c8 * 0x26;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = local_d8;
    auVar380._8_8_ = 0;
    auVar380._0_8_ = uVar613;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = local_c0 * 0x13;
    auVar381._8_8_ = 0;
    auVar381._0_8_ = local_c0;
    uVar610 = local_c0 * 0x13 * local_c0;
    uVar608 = local_d8 * uVar613 + uVar624;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = local_d0;
    auVar382._8_8_ = 0;
    auVar382._0_8_ = local_d0;
    uVar617 = uVar608 + local_e0 * local_e0;
    uVar623 = local_d0 * 2;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = local_e0;
    auVar383._8_8_ = 0;
    auVar383._0_8_ = local_e0;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = local_d8;
    auVar384._8_8_ = 0;
    auVar384._0_8_ = uVar622;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = local_e0;
    auVar385._8_8_ = 0;
    auVar385._0_8_ = local_c0 * 2;
    uVar606 = SUB168(auVar80 * auVar380,8) + SUB168(auVar79 * auVar379,8) +
              (ulong)CARRY8(local_d8 * uVar613,uVar624) + SUB168(auVar83 * auVar383,8) +
              (ulong)CARRY8(uVar608,local_e0 * local_e0);
    uVar608 = local_d8 * uVar622 + local_d0 * local_d0;
    uVar611 = local_e0 * local_c0 * 2;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = local_d8;
    auVar386._8_8_ = 0;
    auVar386._0_8_ = uVar623;
    uVar624 = uVar608 + uVar611;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = local_e0;
    auVar387._8_8_ = 0;
    auVar387._0_8_ = uVar622;
    uVar621 = local_d8 * uVar623 + uVar610;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = local_d8;
    auVar388._8_8_ = 0;
    auVar388._0_8_ = local_d8;
    uVar604 = uVar621 + local_e0 * uVar622;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = local_e0;
    auVar389._8_8_ = 0;
    auVar389._0_8_ = uVar623;
    uVar603 = local_e0 * local_d8 * 2;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = local_e0;
    auVar390._8_8_ = 0;
    auVar390._0_8_ = local_d8 * 2;
    uVar626 = local_d8 * local_d8 + local_c8 * uVar613;
    uVar612 = uVar626 + local_e0 * uVar623;
    uVar607 = local_d0 * uVar613 + uVar614;
    uVar616 = uVar617 >> 0x33 | uVar606 * 0x2000;
    uVar601 = uVar607 + uVar603;
    uVar602 = uVar601 + uVar616;
    uVar601 = SUB168(auVar78 * auVar378,8) + SUB168(auVar76 * auVar376,8) +
              (ulong)CARRY8(local_d0 * uVar613,uVar614) + SUB168(auVar90 * auVar390,8) +
              (ulong)CARRY8(uVar607,uVar603) + (uVar606 >> 0x33) + (ulong)CARRY8(uVar601,uVar616);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar626 = SUB168(auVar88 * auVar388,8) + SUB168(auVar77 * auVar377,8) +
              (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar613) + SUB168(auVar89 * auVar389,8) +
              (ulong)CARRY8(uVar626,local_e0 * uVar623) + (uVar601 >> 0x33) +
              (ulong)CARRY8(uVar612,uVar603);
    uVar612 = uVar607 >> 0x33 | uVar626 * 0x2000;
    local_c8 = uVar604 + uVar612;
    uVar621 = SUB168(auVar86 * auVar386,8) + SUB168(auVar81 * auVar381,8) +
              (ulong)CARRY8(local_d8 * uVar623,uVar610) + SUB168(auVar87 * auVar387,8) +
              (ulong)CARRY8(uVar621,local_e0 * uVar622) + (uVar626 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar612);
    uVar604 = local_c8 >> 0x33 | uVar621 * 0x2000;
    local_c8 = local_c8 & 0x7ffffffffffff;
    local_c0 = uVar624 + uVar604;
    iVar605 = iVar605 + -1;
    local_e0 = (uVar617 & 0x7ffffffffffff) +
               (local_c0 >> 0x33 |
               (SUB168(auVar84 * auVar384,8) + SUB168(auVar82 * auVar382,8) +
                (ulong)CARRY8(local_d8 * uVar622,local_d0 * local_d0) + SUB168(auVar85 * auVar385,8)
                + (ulong)CARRY8(uVar608,uVar611) + (uVar621 >> 0x33) +
               (ulong)CARRY8(uVar624,uVar604)) * 0x2000) * 0x13;
    local_d8 = (uVar602 & 0x7ffffffffffff) + (local_e0 >> 0x33);
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_d0 = (uVar607 & 0x7ffffffffffff) + (local_d8 >> 0x33);
    local_e0 = local_e0 & 0x7ffffffffffff;
    local_d8 = local_d8 & 0x7ffffffffffff;
  } while (iVar605 != 0);
  FUN_007866c0(&local_b8,&local_e0,&local_b8);
  uVar612 = local_98 * 0x26;
  auVar91._8_8_ = 0;
  auVar91._0_8_ = local_98 * 0x13;
  auVar391._8_8_ = 0;
  auVar391._0_8_ = local_98;
  uVar607 = local_98 * 0x13 * local_98;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = local_a8;
  auVar392._8_8_ = 0;
  auVar392._0_8_ = uVar612;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = local_a0;
  auVar393._8_8_ = 0;
  auVar393._0_8_ = uVar612;
  auVar94._8_8_ = 0;
  auVar94._0_8_ = local_a0 * 0x13;
  auVar394._8_8_ = 0;
  auVar394._0_8_ = local_a0;
  uVar602 = local_a0 * 0x13 * local_a0;
  uVar604 = local_a0 * 2;
  auVar95._8_8_ = 0;
  auVar95._0_8_ = local_a8;
  auVar395._8_8_ = 0;
  auVar395._0_8_ = local_a0 * 0x26;
  uVar621 = local_a8 * local_a0 * 0x26;
  auVar96._8_8_ = 0;
  auVar96._0_8_ = local_b0;
  auVar396._8_8_ = 0;
  auVar396._0_8_ = uVar612;
  auVar97._8_8_ = 0;
  auVar97._0_8_ = local_a8;
  auVar397._8_8_ = 0;
  auVar397._0_8_ = local_a8;
  uVar608 = local_b0 * uVar612 + uVar621;
  uVar626 = local_a8 * 2;
  uVar617 = uVar608 + local_b8 * local_b8;
  auVar98._8_8_ = 0;
  auVar98._0_8_ = local_b8;
  auVar398._8_8_ = 0;
  auVar398._0_8_ = local_b8;
  auVar99._8_8_ = 0;
  auVar99._0_8_ = local_b0;
  auVar399._8_8_ = 0;
  auVar399._0_8_ = uVar604;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = local_b8;
  auVar400._8_8_ = 0;
  auVar400._0_8_ = local_98 * 2;
  uVar624 = local_b0 * uVar604 + local_a8 * local_a8;
  uVar603 = local_b8 * local_98 * 2;
  uVar601 = uVar617 >> 0x33 |
            (SUB168(auVar96 * auVar396,8) + SUB168(auVar95 * auVar395,8) +
             (ulong)CARRY8(local_b0 * uVar612,uVar621) + SUB168(auVar98 * auVar398,8) +
            (ulong)CARRY8(uVar608,local_b8 * local_b8)) * 0x2000;
  auVar101._8_8_ = 0;
  auVar101._0_8_ = local_b0;
  auVar401._8_8_ = 0;
  auVar401._0_8_ = uVar626;
  uVar608 = uVar624 + uVar603;
  auVar102._8_8_ = 0;
  auVar102._0_8_ = local_b8;
  auVar402._8_8_ = 0;
  auVar402._0_8_ = uVar604;
  lVar609 = SUB168(auVar99 * auVar399,8) + SUB168(auVar97 * auVar397,8) +
            (ulong)CARRY8(local_b0 * uVar604,local_a8 * local_a8) + SUB168(auVar100 * auVar400,8) +
            (ulong)CARRY8(uVar624,uVar603);
  uVar624 = local_b0 * uVar626 + uVar607;
  auVar103._8_8_ = 0;
  auVar103._0_8_ = local_b0;
  auVar403._8_8_ = 0;
  auVar403._0_8_ = local_b0;
  uVar621 = uVar624 + local_b8 * uVar604;
  auVar104._8_8_ = 0;
  auVar104._0_8_ = local_b8;
  auVar404._8_8_ = 0;
  auVar404._0_8_ = uVar626;
  lVar615 = SUB168(auVar101 * auVar401,8) + SUB168(auVar91 * auVar391,8) +
            (ulong)CARRY8(local_b0 * uVar626,uVar607) + SUB168(auVar102 * auVar402,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar604);
  uVar624 = local_b0 * local_b0 + local_a0 * uVar612;
  uVar607 = local_b8 * local_b0 * 2;
  auVar105._8_8_ = 0;
  auVar105._0_8_ = local_b8;
  auVar405._8_8_ = 0;
  auVar405._0_8_ = local_b0 * 2;
  uVar604 = uVar624 + local_b8 * uVar626;
  lVar618 = SUB168(auVar103 * auVar403,8) + SUB168(auVar93 * auVar393,8) +
            (ulong)CARRY8(local_b0 * local_b0,local_a0 * uVar612) + SUB168(auVar104 * auVar404,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar626);
  uVar624 = local_a8 * uVar612 + uVar602;
  uVar626 = uVar624 + uVar607;
  iVar605 = 9;
  lVar619 = SUB168(auVar92 * auVar392,8) + SUB168(auVar94 * auVar394,8) +
            (ulong)CARRY8(local_a8 * uVar612,uVar602) + SUB168(auVar105 * auVar405,8) +
            (ulong)CARRY8(uVar624,uVar607);
  uVar624 = uVar626 + uVar601;
  if (CARRY8(uVar626,uVar601)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar604 = uVar626 >> 0x33 | lVar618 << 0xd;
  local_c8 = uVar621 + uVar604;
  if (CARRY8(uVar621,uVar604)) {
    lVar615 = lVar615 + 1;
  }
  uVar621 = local_c8 >> 0x33 | lVar615 << 0xd;
  local_c0 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_e0 = (uVar617 & 0x7ffffffffffff) + (local_c0 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_c8 = local_c8 & 0x7ffffffffffff;
  local_d8 = (uVar624 & 0x7ffffffffffff) + (local_e0 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_d0 = (uVar626 & 0x7ffffffffffff) + (local_d8 >> 0x33);
  local_e0 = local_e0 & 0x7ffffffffffff;
  local_d8 = local_d8 & 0x7ffffffffffff;
  do {
    auVar106._8_8_ = 0;
    auVar106._0_8_ = local_d0;
    auVar406._8_8_ = 0;
    auVar406._0_8_ = local_d0;
    uVar614 = local_c0 * 0x26;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = local_c8 * 0x13;
    auVar407._8_8_ = 0;
    auVar407._0_8_ = local_c8;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = local_c8;
    auVar408._8_8_ = 0;
    auVar408._0_8_ = uVar614;
    uVar603 = local_c8 * 0x13 * local_c8;
    uVar623 = local_c8 * 2;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = local_d0;
    auVar409._8_8_ = 0;
    auVar409._0_8_ = uVar614;
    auVar110._8_8_ = 0;
    auVar110._0_8_ = local_d0;
    auVar410._8_8_ = 0;
    auVar410._0_8_ = local_c8 * 0x26;
    uVar624 = local_d0 * local_c8 * 0x26;
    auVar111._8_8_ = 0;
    auVar111._0_8_ = local_d8;
    auVar411._8_8_ = 0;
    auVar411._0_8_ = uVar614;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = local_c0 * 0x13;
    auVar412._8_8_ = 0;
    auVar412._0_8_ = local_c0;
    uVar613 = local_c0 * 0x13 * local_c0;
    uVar608 = local_d8 * uVar614 + uVar624;
    uVar610 = local_d0 * 2;
    uVar617 = uVar608 + local_e0 * local_e0;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = local_e0;
    auVar413._8_8_ = 0;
    auVar413._0_8_ = local_e0;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = local_d8;
    auVar414._8_8_ = 0;
    auVar414._0_8_ = uVar623;
    auVar115._8_8_ = 0;
    auVar115._0_8_ = local_e0;
    auVar415._8_8_ = 0;
    auVar415._0_8_ = local_c0 * 2;
    uVar611 = SUB168(auVar111 * auVar411,8) + SUB168(auVar110 * auVar410,8) +
              (ulong)CARRY8(local_d8 * uVar614,uVar624) + SUB168(auVar113 * auVar413,8) +
              (ulong)CARRY8(uVar608,local_e0 * local_e0);
    uVar608 = local_d8 * uVar623 + local_d0 * local_d0;
    uVar622 = local_e0 * local_c0 * 2;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = local_d8;
    auVar416._8_8_ = 0;
    auVar416._0_8_ = uVar610;
    uVar624 = uVar608 + uVar622;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = local_e0;
    auVar417._8_8_ = 0;
    auVar417._0_8_ = uVar623;
    uVar621 = local_d8 * uVar610 + uVar613;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = local_d8;
    auVar418._8_8_ = 0;
    auVar418._0_8_ = local_d8;
    uVar604 = uVar621 + local_e0 * uVar623;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = local_e0;
    auVar419._8_8_ = 0;
    auVar419._0_8_ = uVar610;
    uVar616 = local_e0 * local_d8 * 2;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = local_e0;
    auVar420._8_8_ = 0;
    auVar420._0_8_ = local_d8 * 2;
    uVar626 = local_d8 * local_d8 + local_c8 * uVar614;
    uVar612 = uVar626 + local_e0 * uVar610;
    uVar607 = local_d0 * uVar614 + uVar603;
    uVar606 = uVar617 >> 0x33 | uVar611 * 0x2000;
    uVar601 = uVar607 + uVar616;
    uVar602 = uVar601 + uVar606;
    uVar601 = SUB168(auVar109 * auVar409,8) + SUB168(auVar107 * auVar407,8) +
              (ulong)CARRY8(local_d0 * uVar614,uVar603) + SUB168(auVar120 * auVar420,8) +
              (ulong)CARRY8(uVar607,uVar616) + (uVar611 >> 0x33) + (ulong)CARRY8(uVar601,uVar606);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar612 = SUB168(auVar118 * auVar418,8) + SUB168(auVar108 * auVar408,8) +
              (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar614) + SUB168(auVar119 * auVar419,8)
              + (ulong)CARRY8(uVar626,local_e0 * uVar610) + (uVar601 >> 0x33) +
              (ulong)CARRY8(uVar612,uVar603);
    uVar601 = uVar607 >> 0x33 | uVar612 * 0x2000;
    uVar626 = uVar604 + uVar601;
    uVar621 = SUB168(auVar116 * auVar416,8) + SUB168(auVar112 * auVar412,8) +
              (ulong)CARRY8(local_d8 * uVar610,uVar613) + SUB168(auVar117 * auVar417,8) +
              (ulong)CARRY8(uVar621,local_e0 * uVar623) + (uVar612 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar601);
    local_c8 = uVar626 & 0x7ffffffffffff;
    uVar604 = uVar626 >> 0x33 | uVar621 * 0x2000;
    local_c0 = uVar624 + uVar604;
    iVar605 = iVar605 + -1;
    local_e0 = (uVar617 & 0x7ffffffffffff) +
               (local_c0 >> 0x33 |
               (SUB168(auVar114 * auVar414,8) + SUB168(auVar106 * auVar406,8) +
                (ulong)CARRY8(local_d8 * uVar623,local_d0 * local_d0) +
                SUB168(auVar115 * auVar415,8) + (ulong)CARRY8(uVar608,uVar622) + (uVar621 >> 0x33) +
               (ulong)CARRY8(uVar624,uVar604)) * 0x2000) * 0x13;
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_d8 = (uVar602 & 0x7ffffffffffff) + (local_e0 >> 0x33);
    local_d0 = (uVar607 & 0x7ffffffffffff) + (local_d8 >> 0x33);
    local_e0 = local_e0 & 0x7ffffffffffff;
    local_d8 = local_d8 & 0x7ffffffffffff;
  } while (iVar605 != 0);
  FUN_007866c0(&local_e0,&local_e0,&local_b8);
  uVar612 = local_c0 * 0x26;
  auVar121._8_8_ = 0;
  auVar121._0_8_ = local_c0 * 0x13;
  auVar421._8_8_ = 0;
  auVar421._0_8_ = local_c0;
  uVar607 = local_c0 * 0x13 * local_c0;
  auVar122._8_8_ = 0;
  auVar122._0_8_ = local_d0;
  auVar422._8_8_ = 0;
  auVar422._0_8_ = uVar612;
  auVar123._8_8_ = 0;
  auVar123._0_8_ = local_c8;
  auVar423._8_8_ = 0;
  auVar423._0_8_ = uVar612;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = local_c8 * 0x13;
  auVar424._8_8_ = 0;
  auVar424._0_8_ = local_c8;
  uVar602 = local_c8 * 0x13 * local_c8;
  uVar604 = local_c8 * 2;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = local_d0;
  auVar425._8_8_ = 0;
  auVar425._0_8_ = local_c8 * 0x26;
  uVar621 = local_d0 * local_c8 * 0x26;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = local_d8;
  auVar426._8_8_ = 0;
  auVar426._0_8_ = uVar612;
  auVar127._8_8_ = 0;
  auVar127._0_8_ = local_d0;
  auVar427._8_8_ = 0;
  auVar427._0_8_ = local_d0;
  uVar608 = local_d8 * uVar612 + uVar621;
  uVar626 = local_d0 * 2;
  uVar617 = uVar608 + local_e0 * local_e0;
  auVar128._8_8_ = 0;
  auVar128._0_8_ = local_e0;
  auVar428._8_8_ = 0;
  auVar428._0_8_ = local_e0;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = local_d8;
  auVar429._8_8_ = 0;
  auVar429._0_8_ = uVar604;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = local_e0;
  auVar430._8_8_ = 0;
  auVar430._0_8_ = local_c0 * 2;
  uVar624 = local_d8 * uVar604 + local_d0 * local_d0;
  uVar603 = local_e0 * local_c0 * 2;
  uVar601 = uVar617 >> 0x33 |
            (SUB168(auVar126 * auVar426,8) + SUB168(auVar125 * auVar425,8) +
             (ulong)CARRY8(local_d8 * uVar612,uVar621) + SUB168(auVar128 * auVar428,8) +
            (ulong)CARRY8(uVar608,local_e0 * local_e0)) * 0x2000;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = local_d8;
  auVar431._8_8_ = 0;
  auVar431._0_8_ = uVar626;
  uVar608 = uVar624 + uVar603;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = local_e0;
  auVar432._8_8_ = 0;
  auVar432._0_8_ = uVar604;
  lVar609 = SUB168(auVar129 * auVar429,8) + SUB168(auVar127 * auVar427,8) +
            (ulong)CARRY8(local_d8 * uVar604,local_d0 * local_d0) + SUB168(auVar130 * auVar430,8) +
            (ulong)CARRY8(uVar624,uVar603);
  uVar624 = local_d8 * uVar626 + uVar607;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = local_d8;
  auVar433._8_8_ = 0;
  auVar433._0_8_ = local_d8;
  uVar621 = uVar624 + local_e0 * uVar604;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = local_e0;
  auVar434._8_8_ = 0;
  auVar434._0_8_ = uVar626;
  lVar615 = SUB168(auVar131 * auVar431,8) + SUB168(auVar121 * auVar421,8) +
            (ulong)CARRY8(local_d8 * uVar626,uVar607) + SUB168(auVar132 * auVar432,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar604);
  uVar624 = local_d8 * local_d8 + local_c8 * uVar612;
  uVar607 = local_e0 * local_d8 * 2;
  auVar135._8_8_ = 0;
  auVar135._0_8_ = local_e0;
  auVar435._8_8_ = 0;
  auVar435._0_8_ = local_d8 * 2;
  uVar604 = uVar624 + local_e0 * uVar626;
  lVar618 = SUB168(auVar133 * auVar433,8) + SUB168(auVar123 * auVar423,8) +
            (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar612) + SUB168(auVar134 * auVar434,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar626);
  uVar624 = local_d0 * uVar612 + uVar602;
  uVar626 = uVar624 + uVar607;
  iVar605 = 0x13;
  lVar619 = SUB168(auVar122 * auVar422,8) + SUB168(auVar124 * auVar424,8) +
            (ulong)CARRY8(local_d0 * uVar612,uVar602) + SUB168(auVar135 * auVar435,8) +
            (ulong)CARRY8(uVar624,uVar607);
  uVar624 = uVar626 + uVar601;
  if (CARRY8(uVar626,uVar601)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar612 = uVar626 >> 0x33 | lVar618 << 0xd;
  uVar604 = uVar621 + uVar612;
  if (CARRY8(uVar621,uVar612)) {
    lVar615 = lVar615 + 1;
  }
  uVar612 = uVar604 >> 0x33 | lVar615 << 0xd;
  uVar621 = uVar608 + uVar612;
  if (CARRY8(uVar608,uVar612)) {
    lVar609 = lVar609 + 1;
  }
  uVar617 = (uVar617 & 0x7ffffffffffff) + (uVar621 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_f8 = (undefined1 *)(uVar604 & 0x7ffffffffffff);
  uVar608 = (uVar624 & 0x7ffffffffffff) + (uVar617 >> 0x33);
  local_f0 = (undefined1 *)(uVar621 & 0x7ffffffffffff);
  puStack_100 = (undefined1 *)((uVar626 & 0x7ffffffffffff) + (uVar608 >> 0x33));
  local_110 = (undefined1 *)(uVar617 & 0x7ffffffffffff);
  puStack_108 = (undefined1 *)(uVar608 & 0x7ffffffffffff);
  do {
    auVar136._8_8_ = 0;
    auVar136._0_8_ = puStack_100;
    auVar436._8_8_ = 0;
    auVar436._0_8_ = puStack_100;
    uVar614 = (long)local_f0 * 0x26;
    auVar137._8_8_ = 0;
    auVar137._0_8_ = (long)local_f8 * 0x13;
    auVar437._8_8_ = 0;
    auVar437._0_8_ = local_f8;
    auVar138._8_8_ = 0;
    auVar138._0_8_ = local_f8;
    auVar438._8_8_ = 0;
    auVar438._0_8_ = uVar614;
    uVar603 = (long)local_f8 * 0x13 * (long)local_f8;
    uVar623 = (long)local_f8 * 2;
    auVar139._8_8_ = 0;
    auVar139._0_8_ = puStack_100;
    auVar439._8_8_ = 0;
    auVar439._0_8_ = uVar614;
    auVar140._8_8_ = 0;
    auVar140._0_8_ = puStack_100;
    auVar440._8_8_ = 0;
    auVar440._0_8_ = (long)local_f8 * 0x26;
    uVar624 = (long)puStack_100 * (long)local_f8 * 0x26;
    auVar141._8_8_ = 0;
    auVar141._0_8_ = puStack_108;
    auVar441._8_8_ = 0;
    auVar441._0_8_ = uVar614;
    auVar142._8_8_ = 0;
    auVar142._0_8_ = (long)local_f0 * 0x13;
    auVar442._8_8_ = 0;
    auVar442._0_8_ = local_f0;
    uVar613 = (long)local_f0 * 0x13 * (long)local_f0;
    uVar608 = (long)puStack_108 * uVar614 + uVar624;
    uVar610 = (long)puStack_100 * 2;
    uVar617 = uVar608 + (long)local_110 * (long)local_110;
    auVar143._8_8_ = 0;
    auVar143._0_8_ = local_110;
    auVar443._8_8_ = 0;
    auVar443._0_8_ = local_110;
    auVar144._8_8_ = 0;
    auVar144._0_8_ = puStack_108;
    auVar444._8_8_ = 0;
    auVar444._0_8_ = uVar623;
    auVar145._8_8_ = 0;
    auVar145._0_8_ = local_110;
    auVar445._8_8_ = 0;
    auVar445._0_8_ = (long)local_f0 * 2;
    uVar611 = SUB168(auVar141 * auVar441,8) + SUB168(auVar140 * auVar440,8) +
              (ulong)CARRY8((long)puStack_108 * uVar614,uVar624) + SUB168(auVar143 * auVar443,8) +
              (ulong)CARRY8(uVar608,(long)local_110 * (long)local_110);
    uVar608 = (long)puStack_108 * uVar623 + (long)puStack_100 * (long)puStack_100;
    uVar622 = (long)local_110 * (long)local_f0 * 2;
    auVar146._8_8_ = 0;
    auVar146._0_8_ = puStack_108;
    auVar446._8_8_ = 0;
    auVar446._0_8_ = uVar610;
    uVar624 = uVar608 + uVar622;
    auVar147._8_8_ = 0;
    auVar147._0_8_ = local_110;
    auVar447._8_8_ = 0;
    auVar447._0_8_ = uVar623;
    uVar621 = (long)puStack_108 * uVar610 + uVar613;
    auVar148._8_8_ = 0;
    auVar148._0_8_ = puStack_108;
    auVar448._8_8_ = 0;
    auVar448._0_8_ = puStack_108;
    uVar604 = uVar621 + (long)local_110 * uVar623;
    auVar149._8_8_ = 0;
    auVar149._0_8_ = local_110;
    auVar449._8_8_ = 0;
    auVar449._0_8_ = uVar610;
    uVar616 = (long)local_110 * (long)puStack_108 * 2;
    auVar150._8_8_ = 0;
    auVar150._0_8_ = local_110;
    auVar450._8_8_ = 0;
    auVar450._0_8_ = (long)puStack_108 * 2;
    uVar626 = (long)puStack_108 * (long)puStack_108 + (long)local_f8 * uVar614;
    uVar612 = uVar626 + (long)local_110 * uVar610;
    uVar607 = (long)puStack_100 * uVar614 + uVar603;
    uVar606 = uVar617 >> 0x33 | uVar611 * 0x2000;
    uVar601 = uVar607 + uVar616;
    uVar602 = uVar601 + uVar606;
    uVar601 = SUB168(auVar139 * auVar439,8) + SUB168(auVar137 * auVar437,8) +
              (ulong)CARRY8((long)puStack_100 * uVar614,uVar603) + SUB168(auVar150 * auVar450,8) +
              (ulong)CARRY8(uVar607,uVar616) + (uVar611 >> 0x33) + (ulong)CARRY8(uVar601,uVar606);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar612 = SUB168(auVar148 * auVar448,8) + SUB168(auVar138 * auVar438,8) +
              (ulong)CARRY8((long)puStack_108 * (long)puStack_108,(long)local_f8 * uVar614) +
              SUB168(auVar149 * auVar449,8) + (ulong)CARRY8(uVar626,(long)local_110 * uVar610) +
              (uVar601 >> 0x33) + (ulong)CARRY8(uVar612,uVar603);
    uVar601 = uVar607 >> 0x33 | uVar612 * 0x2000;
    uVar626 = uVar604 + uVar601;
    uVar604 = SUB168(auVar146 * auVar446,8) + SUB168(auVar142 * auVar442,8) +
              (ulong)CARRY8((long)puStack_108 * uVar610,uVar613) + SUB168(auVar147 * auVar447,8) +
              (ulong)CARRY8(uVar621,(long)local_110 * uVar623) + (uVar612 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar601);
    local_f8 = (undefined1 *)(uVar626 & 0x7ffffffffffff);
    uVar626 = uVar626 >> 0x33 | uVar604 * 0x2000;
    uVar621 = uVar624 + uVar626;
    iVar605 = iVar605 + -1;
    uVar617 = (uVar617 & 0x7ffffffffffff) +
              (uVar621 >> 0x33 |
              (SUB168(auVar144 * auVar444,8) + SUB168(auVar136 * auVar436,8) +
               (ulong)CARRY8((long)puStack_108 * uVar623,(long)puStack_100 * (long)puStack_100) +
               SUB168(auVar145 * auVar445,8) + (ulong)CARRY8(uVar608,uVar622) + (uVar604 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar626)) * 0x2000) * 0x13;
    local_f0 = (undefined1 *)(uVar621 & 0x7ffffffffffff);
    uVar608 = (uVar602 & 0x7ffffffffffff) + (uVar617 >> 0x33);
    puStack_100 = (undefined1 *)((uVar607 & 0x7ffffffffffff) + (uVar608 >> 0x33));
    local_110 = (undefined1 *)(uVar617 & 0x7ffffffffffff);
    puStack_108 = (undefined1 *)(uVar608 & 0x7ffffffffffff);
  } while (iVar605 != 0);
  FUN_007866c0(&local_e0,&local_110,&local_e0);
  uVar612 = local_c0 * 0x26;
  auVar151._8_8_ = 0;
  auVar151._0_8_ = local_c0 * 0x13;
  auVar451._8_8_ = 0;
  auVar451._0_8_ = local_c0;
  uVar607 = local_c0 * 0x13 * local_c0;
  auVar152._8_8_ = 0;
  auVar152._0_8_ = local_d0;
  auVar452._8_8_ = 0;
  auVar452._0_8_ = uVar612;
  auVar153._8_8_ = 0;
  auVar153._0_8_ = local_c8;
  auVar453._8_8_ = 0;
  auVar453._0_8_ = uVar612;
  auVar154._8_8_ = 0;
  auVar154._0_8_ = local_c8 * 0x13;
  auVar454._8_8_ = 0;
  auVar454._0_8_ = local_c8;
  uVar602 = local_c8 * 0x13 * local_c8;
  uVar604 = local_c8 * 2;
  auVar155._8_8_ = 0;
  auVar155._0_8_ = local_d0;
  auVar455._8_8_ = 0;
  auVar455._0_8_ = local_c8 * 0x26;
  uVar621 = local_d0 * local_c8 * 0x26;
  auVar156._8_8_ = 0;
  auVar156._0_8_ = local_d8;
  auVar456._8_8_ = 0;
  auVar456._0_8_ = uVar612;
  auVar157._8_8_ = 0;
  auVar157._0_8_ = local_d0;
  auVar457._8_8_ = 0;
  auVar457._0_8_ = local_d0;
  uVar608 = local_d8 * uVar612 + uVar621;
  uVar626 = local_d0 * 2;
  uVar617 = uVar608 + local_e0 * local_e0;
  auVar158._8_8_ = 0;
  auVar158._0_8_ = local_e0;
  auVar458._8_8_ = 0;
  auVar458._0_8_ = local_e0;
  auVar159._8_8_ = 0;
  auVar159._0_8_ = local_d8;
  auVar459._8_8_ = 0;
  auVar459._0_8_ = uVar604;
  auVar160._8_8_ = 0;
  auVar160._0_8_ = local_e0;
  auVar460._8_8_ = 0;
  auVar460._0_8_ = local_c0 * 2;
  uVar624 = local_d8 * uVar604 + local_d0 * local_d0;
  uVar603 = local_e0 * local_c0 * 2;
  uVar601 = uVar617 >> 0x33 |
            (SUB168(auVar156 * auVar456,8) + SUB168(auVar155 * auVar455,8) +
             (ulong)CARRY8(local_d8 * uVar612,uVar621) + SUB168(auVar158 * auVar458,8) +
            (ulong)CARRY8(uVar608,local_e0 * local_e0)) * 0x2000;
  auVar161._8_8_ = 0;
  auVar161._0_8_ = local_d8;
  auVar461._8_8_ = 0;
  auVar461._0_8_ = uVar626;
  uVar608 = uVar624 + uVar603;
  auVar162._8_8_ = 0;
  auVar162._0_8_ = local_e0;
  auVar462._8_8_ = 0;
  auVar462._0_8_ = uVar604;
  lVar609 = SUB168(auVar159 * auVar459,8) + SUB168(auVar157 * auVar457,8) +
            (ulong)CARRY8(local_d8 * uVar604,local_d0 * local_d0) + SUB168(auVar160 * auVar460,8) +
            (ulong)CARRY8(uVar624,uVar603);
  uVar624 = local_d8 * uVar626 + uVar607;
  auVar163._8_8_ = 0;
  auVar163._0_8_ = local_d8;
  auVar463._8_8_ = 0;
  auVar463._0_8_ = local_d8;
  uVar621 = uVar624 + local_e0 * uVar604;
  auVar164._8_8_ = 0;
  auVar164._0_8_ = local_e0;
  auVar464._8_8_ = 0;
  auVar464._0_8_ = uVar626;
  lVar615 = SUB168(auVar161 * auVar461,8) + SUB168(auVar151 * auVar451,8) +
            (ulong)CARRY8(local_d8 * uVar626,uVar607) + SUB168(auVar162 * auVar462,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar604);
  uVar624 = local_d8 * local_d8 + local_c8 * uVar612;
  uVar607 = local_e0 * local_d8 * 2;
  auVar165._8_8_ = 0;
  auVar165._0_8_ = local_e0;
  auVar465._8_8_ = 0;
  auVar465._0_8_ = local_d8 * 2;
  uVar604 = uVar624 + local_e0 * uVar626;
  lVar618 = SUB168(auVar163 * auVar463,8) + SUB168(auVar153 * auVar453,8) +
            (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar612) + SUB168(auVar164 * auVar464,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar626);
  uVar624 = local_d0 * uVar612 + uVar602;
  uVar626 = uVar624 + uVar607;
  iVar605 = 9;
  lVar619 = SUB168(auVar152 * auVar452,8) + SUB168(auVar154 * auVar454,8) +
            (ulong)CARRY8(local_d0 * uVar612,uVar602) + SUB168(auVar165 * auVar465,8) +
            (ulong)CARRY8(uVar624,uVar607);
  uVar624 = uVar626 + uVar601;
  if (CARRY8(uVar626,uVar601)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar604 = uVar626 >> 0x33 | lVar618 << 0xd;
  local_c8 = uVar621 + uVar604;
  if (CARRY8(uVar621,uVar604)) {
    lVar615 = lVar615 + 1;
  }
  uVar621 = local_c8 >> 0x33 | lVar615 << 0xd;
  local_c0 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_e0 = (uVar617 & 0x7ffffffffffff) + (local_c0 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_c8 = local_c8 & 0x7ffffffffffff;
  local_d8 = (uVar624 & 0x7ffffffffffff) + (local_e0 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_d0 = (uVar626 & 0x7ffffffffffff) + (local_d8 >> 0x33);
  local_e0 = local_e0 & 0x7ffffffffffff;
  local_d8 = local_d8 & 0x7ffffffffffff;
  do {
    auVar166._8_8_ = 0;
    auVar166._0_8_ = local_d0;
    auVar466._8_8_ = 0;
    auVar466._0_8_ = local_d0;
    uVar614 = local_c0 * 0x26;
    auVar167._8_8_ = 0;
    auVar167._0_8_ = local_c8 * 0x13;
    auVar467._8_8_ = 0;
    auVar467._0_8_ = local_c8;
    auVar168._8_8_ = 0;
    auVar168._0_8_ = local_c8;
    auVar468._8_8_ = 0;
    auVar468._0_8_ = uVar614;
    uVar603 = local_c8 * 0x13 * local_c8;
    uVar623 = local_c8 * 2;
    auVar169._8_8_ = 0;
    auVar169._0_8_ = local_d0;
    auVar469._8_8_ = 0;
    auVar469._0_8_ = uVar614;
    auVar170._8_8_ = 0;
    auVar170._0_8_ = local_d0;
    auVar470._8_8_ = 0;
    auVar470._0_8_ = local_c8 * 0x26;
    uVar624 = local_d0 * local_c8 * 0x26;
    auVar171._8_8_ = 0;
    auVar171._0_8_ = local_d8;
    auVar471._8_8_ = 0;
    auVar471._0_8_ = uVar614;
    auVar172._8_8_ = 0;
    auVar172._0_8_ = local_c0 * 0x13;
    auVar472._8_8_ = 0;
    auVar472._0_8_ = local_c0;
    uVar613 = local_c0 * 0x13 * local_c0;
    uVar608 = local_d8 * uVar614 + uVar624;
    uVar610 = local_d0 * 2;
    uVar617 = uVar608 + local_e0 * local_e0;
    auVar173._8_8_ = 0;
    auVar173._0_8_ = local_e0;
    auVar473._8_8_ = 0;
    auVar473._0_8_ = local_e0;
    auVar174._8_8_ = 0;
    auVar174._0_8_ = local_d8;
    auVar474._8_8_ = 0;
    auVar474._0_8_ = uVar623;
    auVar175._8_8_ = 0;
    auVar175._0_8_ = local_e0;
    auVar475._8_8_ = 0;
    auVar475._0_8_ = local_c0 * 2;
    uVar611 = SUB168(auVar171 * auVar471,8) + SUB168(auVar170 * auVar470,8) +
              (ulong)CARRY8(local_d8 * uVar614,uVar624) + SUB168(auVar173 * auVar473,8) +
              (ulong)CARRY8(uVar608,local_e0 * local_e0);
    uVar608 = local_d8 * uVar623 + local_d0 * local_d0;
    uVar622 = local_e0 * local_c0 * 2;
    auVar176._8_8_ = 0;
    auVar176._0_8_ = local_d8;
    auVar476._8_8_ = 0;
    auVar476._0_8_ = uVar610;
    uVar624 = uVar608 + uVar622;
    auVar177._8_8_ = 0;
    auVar177._0_8_ = local_e0;
    auVar477._8_8_ = 0;
    auVar477._0_8_ = uVar623;
    uVar621 = local_d8 * uVar610 + uVar613;
    auVar178._8_8_ = 0;
    auVar178._0_8_ = local_d8;
    auVar478._8_8_ = 0;
    auVar478._0_8_ = local_d8;
    uVar604 = uVar621 + local_e0 * uVar623;
    auVar179._8_8_ = 0;
    auVar179._0_8_ = local_e0;
    auVar479._8_8_ = 0;
    auVar479._0_8_ = uVar610;
    uVar616 = local_e0 * local_d8 * 2;
    auVar180._8_8_ = 0;
    auVar180._0_8_ = local_e0;
    auVar480._8_8_ = 0;
    auVar480._0_8_ = local_d8 * 2;
    uVar626 = local_d8 * local_d8 + local_c8 * uVar614;
    uVar612 = uVar626 + local_e0 * uVar610;
    uVar607 = local_d0 * uVar614 + uVar603;
    uVar606 = uVar617 >> 0x33 | uVar611 * 0x2000;
    uVar601 = uVar607 + uVar616;
    uVar602 = uVar601 + uVar606;
    uVar601 = SUB168(auVar169 * auVar469,8) + SUB168(auVar167 * auVar467,8) +
              (ulong)CARRY8(local_d0 * uVar614,uVar603) + SUB168(auVar180 * auVar480,8) +
              (ulong)CARRY8(uVar607,uVar616) + (uVar611 >> 0x33) + (ulong)CARRY8(uVar601,uVar606);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar612 = SUB168(auVar178 * auVar478,8) + SUB168(auVar168 * auVar468,8) +
              (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar614) + SUB168(auVar179 * auVar479,8)
              + (ulong)CARRY8(uVar626,local_e0 * uVar610) + (uVar601 >> 0x33) +
              (ulong)CARRY8(uVar612,uVar603);
    uVar601 = uVar607 >> 0x33 | uVar612 * 0x2000;
    uVar626 = uVar604 + uVar601;
    uVar621 = SUB168(auVar176 * auVar476,8) + SUB168(auVar172 * auVar472,8) +
              (ulong)CARRY8(local_d8 * uVar610,uVar613) + SUB168(auVar177 * auVar477,8) +
              (ulong)CARRY8(uVar621,local_e0 * uVar623) + (uVar612 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar601);
    local_c8 = uVar626 & 0x7ffffffffffff;
    uVar604 = uVar626 >> 0x33 | uVar621 * 0x2000;
    local_c0 = uVar624 + uVar604;
    iVar605 = iVar605 + -1;
    local_e0 = (uVar617 & 0x7ffffffffffff) +
               (local_c0 >> 0x33 |
               (SUB168(auVar174 * auVar474,8) + SUB168(auVar166 * auVar466,8) +
                (ulong)CARRY8(local_d8 * uVar623,local_d0 * local_d0) +
                SUB168(auVar175 * auVar475,8) + (ulong)CARRY8(uVar608,uVar622) + (uVar621 >> 0x33) +
               (ulong)CARRY8(uVar624,uVar604)) * 0x2000) * 0x13;
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_d8 = (uVar602 & 0x7ffffffffffff) + (local_e0 >> 0x33);
    local_d0 = (uVar607 & 0x7ffffffffffff) + (local_d8 >> 0x33);
    local_e0 = local_e0 & 0x7ffffffffffff;
    local_d8 = local_d8 & 0x7ffffffffffff;
  } while (iVar605 != 0);
  FUN_007866c0(&local_b8,&local_e0,&local_b8);
  uVar612 = local_98 * 0x26;
  auVar181._8_8_ = 0;
  auVar181._0_8_ = local_98 * 0x13;
  auVar481._8_8_ = 0;
  auVar481._0_8_ = local_98;
  uVar607 = local_98 * 0x13 * local_98;
  auVar182._8_8_ = 0;
  auVar182._0_8_ = local_a8;
  auVar482._8_8_ = 0;
  auVar482._0_8_ = uVar612;
  auVar183._8_8_ = 0;
  auVar183._0_8_ = local_a0;
  auVar483._8_8_ = 0;
  auVar483._0_8_ = uVar612;
  auVar184._8_8_ = 0;
  auVar184._0_8_ = local_a0 * 0x13;
  auVar484._8_8_ = 0;
  auVar484._0_8_ = local_a0;
  uVar602 = local_a0 * 0x13 * local_a0;
  uVar604 = local_a0 * 2;
  auVar185._8_8_ = 0;
  auVar185._0_8_ = local_a8;
  auVar485._8_8_ = 0;
  auVar485._0_8_ = local_a0 * 0x26;
  uVar621 = local_a8 * local_a0 * 0x26;
  auVar186._8_8_ = 0;
  auVar186._0_8_ = local_b0;
  auVar486._8_8_ = 0;
  auVar486._0_8_ = uVar612;
  auVar187._8_8_ = 0;
  auVar187._0_8_ = local_a8;
  auVar487._8_8_ = 0;
  auVar487._0_8_ = local_a8;
  uVar608 = local_b0 * uVar612 + uVar621;
  uVar626 = local_a8 * 2;
  uVar617 = uVar608 + local_b8 * local_b8;
  auVar188._8_8_ = 0;
  auVar188._0_8_ = local_b8;
  auVar488._8_8_ = 0;
  auVar488._0_8_ = local_b8;
  auVar189._8_8_ = 0;
  auVar189._0_8_ = local_b0;
  auVar489._8_8_ = 0;
  auVar489._0_8_ = uVar604;
  auVar190._8_8_ = 0;
  auVar190._0_8_ = local_b8;
  auVar490._8_8_ = 0;
  auVar490._0_8_ = local_98 * 2;
  uVar624 = local_b0 * uVar604 + local_a8 * local_a8;
  uVar603 = local_b8 * local_98 * 2;
  uVar601 = uVar617 >> 0x33 |
            (SUB168(auVar186 * auVar486,8) + SUB168(auVar185 * auVar485,8) +
             (ulong)CARRY8(local_b0 * uVar612,uVar621) + SUB168(auVar188 * auVar488,8) +
            (ulong)CARRY8(uVar608,local_b8 * local_b8)) * 0x2000;
  auVar191._8_8_ = 0;
  auVar191._0_8_ = local_b0;
  auVar491._8_8_ = 0;
  auVar491._0_8_ = uVar626;
  uVar608 = uVar624 + uVar603;
  auVar192._8_8_ = 0;
  auVar192._0_8_ = local_b8;
  auVar492._8_8_ = 0;
  auVar492._0_8_ = uVar604;
  lVar609 = SUB168(auVar189 * auVar489,8) + SUB168(auVar187 * auVar487,8) +
            (ulong)CARRY8(local_b0 * uVar604,local_a8 * local_a8) + SUB168(auVar190 * auVar490,8) +
            (ulong)CARRY8(uVar624,uVar603);
  uVar624 = local_b0 * uVar626 + uVar607;
  auVar193._8_8_ = 0;
  auVar193._0_8_ = local_b0;
  auVar493._8_8_ = 0;
  auVar493._0_8_ = local_b0;
  uVar621 = uVar624 + local_b8 * uVar604;
  auVar194._8_8_ = 0;
  auVar194._0_8_ = local_b8;
  auVar494._8_8_ = 0;
  auVar494._0_8_ = uVar626;
  lVar615 = SUB168(auVar191 * auVar491,8) + SUB168(auVar181 * auVar481,8) +
            (ulong)CARRY8(local_b0 * uVar626,uVar607) + SUB168(auVar192 * auVar492,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar604);
  uVar624 = local_b0 * local_b0 + local_a0 * uVar612;
  uVar607 = local_b8 * local_b0 * 2;
  auVar195._8_8_ = 0;
  auVar195._0_8_ = local_b8;
  auVar495._8_8_ = 0;
  auVar495._0_8_ = local_b0 * 2;
  uVar604 = uVar624 + local_b8 * uVar626;
  lVar618 = SUB168(auVar193 * auVar493,8) + SUB168(auVar183 * auVar483,8) +
            (ulong)CARRY8(local_b0 * local_b0,local_a0 * uVar612) + SUB168(auVar194 * auVar494,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar626);
  uVar624 = local_a8 * uVar612 + uVar602;
  uVar626 = uVar624 + uVar607;
  iVar605 = 0x31;
  lVar619 = SUB168(auVar182 * auVar482,8) + SUB168(auVar184 * auVar484,8) +
            (ulong)CARRY8(local_a8 * uVar612,uVar602) + SUB168(auVar195 * auVar495,8) +
            (ulong)CARRY8(uVar624,uVar607);
  uVar624 = uVar626 + uVar601;
  if (CARRY8(uVar626,uVar601)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar604 = uVar626 >> 0x33 | lVar618 << 0xd;
  local_c8 = uVar621 + uVar604;
  if (CARRY8(uVar621,uVar604)) {
    lVar615 = lVar615 + 1;
  }
  uVar621 = local_c8 >> 0x33 | lVar615 << 0xd;
  local_c0 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_e0 = (uVar617 & 0x7ffffffffffff) + (local_c0 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_c8 = local_c8 & 0x7ffffffffffff;
  local_d8 = (uVar624 & 0x7ffffffffffff) + (local_e0 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_d0 = (uVar626 & 0x7ffffffffffff) + (local_d8 >> 0x33);
  local_e0 = local_e0 & 0x7ffffffffffff;
  local_d8 = local_d8 & 0x7ffffffffffff;
  do {
    auVar196._8_8_ = 0;
    auVar196._0_8_ = local_d0;
    auVar496._8_8_ = 0;
    auVar496._0_8_ = local_d0;
    uVar614 = local_c0 * 0x26;
    auVar197._8_8_ = 0;
    auVar197._0_8_ = local_c8 * 0x13;
    auVar497._8_8_ = 0;
    auVar497._0_8_ = local_c8;
    auVar198._8_8_ = 0;
    auVar198._0_8_ = local_c8;
    auVar498._8_8_ = 0;
    auVar498._0_8_ = uVar614;
    uVar603 = local_c8 * 0x13 * local_c8;
    uVar623 = local_c8 * 2;
    auVar199._8_8_ = 0;
    auVar199._0_8_ = local_d0;
    auVar499._8_8_ = 0;
    auVar499._0_8_ = uVar614;
    auVar200._8_8_ = 0;
    auVar200._0_8_ = local_d0;
    auVar500._8_8_ = 0;
    auVar500._0_8_ = local_c8 * 0x26;
    uVar624 = local_d0 * local_c8 * 0x26;
    auVar201._8_8_ = 0;
    auVar201._0_8_ = local_d8;
    auVar501._8_8_ = 0;
    auVar501._0_8_ = uVar614;
    auVar202._8_8_ = 0;
    auVar202._0_8_ = local_c0 * 0x13;
    auVar502._8_8_ = 0;
    auVar502._0_8_ = local_c0;
    uVar613 = local_c0 * 0x13 * local_c0;
    uVar608 = local_d8 * uVar614 + uVar624;
    uVar610 = local_d0 * 2;
    uVar617 = uVar608 + local_e0 * local_e0;
    auVar203._8_8_ = 0;
    auVar203._0_8_ = local_e0;
    auVar503._8_8_ = 0;
    auVar503._0_8_ = local_e0;
    auVar204._8_8_ = 0;
    auVar204._0_8_ = local_d8;
    auVar504._8_8_ = 0;
    auVar504._0_8_ = uVar623;
    auVar205._8_8_ = 0;
    auVar205._0_8_ = local_e0;
    auVar505._8_8_ = 0;
    auVar505._0_8_ = local_c0 * 2;
    uVar611 = SUB168(auVar201 * auVar501,8) + SUB168(auVar200 * auVar500,8) +
              (ulong)CARRY8(local_d8 * uVar614,uVar624) + SUB168(auVar203 * auVar503,8) +
              (ulong)CARRY8(uVar608,local_e0 * local_e0);
    uVar608 = local_d8 * uVar623 + local_d0 * local_d0;
    uVar622 = local_e0 * local_c0 * 2;
    auVar206._8_8_ = 0;
    auVar206._0_8_ = local_d8;
    auVar506._8_8_ = 0;
    auVar506._0_8_ = uVar610;
    uVar624 = uVar608 + uVar622;
    auVar207._8_8_ = 0;
    auVar207._0_8_ = local_e0;
    auVar507._8_8_ = 0;
    auVar507._0_8_ = uVar623;
    uVar621 = local_d8 * uVar610 + uVar613;
    auVar208._8_8_ = 0;
    auVar208._0_8_ = local_d8;
    auVar508._8_8_ = 0;
    auVar508._0_8_ = local_d8;
    uVar604 = uVar621 + local_e0 * uVar623;
    auVar209._8_8_ = 0;
    auVar209._0_8_ = local_e0;
    auVar509._8_8_ = 0;
    auVar509._0_8_ = uVar610;
    uVar616 = local_e0 * local_d8 * 2;
    auVar210._8_8_ = 0;
    auVar210._0_8_ = local_e0;
    auVar510._8_8_ = 0;
    auVar510._0_8_ = local_d8 * 2;
    uVar626 = local_d8 * local_d8 + local_c8 * uVar614;
    uVar612 = uVar626 + local_e0 * uVar610;
    uVar607 = local_d0 * uVar614 + uVar603;
    uVar606 = uVar617 >> 0x33 | uVar611 * 0x2000;
    uVar601 = uVar607 + uVar616;
    uVar602 = uVar601 + uVar606;
    uVar601 = SUB168(auVar199 * auVar499,8) + SUB168(auVar197 * auVar497,8) +
              (ulong)CARRY8(local_d0 * uVar614,uVar603) + SUB168(auVar210 * auVar510,8) +
              (ulong)CARRY8(uVar607,uVar616) + (uVar611 >> 0x33) + (ulong)CARRY8(uVar601,uVar606);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar612 = SUB168(auVar208 * auVar508,8) + SUB168(auVar198 * auVar498,8) +
              (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar614) + SUB168(auVar209 * auVar509,8)
              + (ulong)CARRY8(uVar626,local_e0 * uVar610) + (uVar601 >> 0x33) +
              (ulong)CARRY8(uVar612,uVar603);
    uVar601 = uVar607 >> 0x33 | uVar612 * 0x2000;
    uVar626 = uVar604 + uVar601;
    uVar621 = SUB168(auVar206 * auVar506,8) + SUB168(auVar202 * auVar502,8) +
              (ulong)CARRY8(local_d8 * uVar610,uVar613) + SUB168(auVar207 * auVar507,8) +
              (ulong)CARRY8(uVar621,local_e0 * uVar623) + (uVar612 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar601);
    local_c8 = uVar626 & 0x7ffffffffffff;
    uVar604 = uVar626 >> 0x33 | uVar621 * 0x2000;
    local_c0 = uVar624 + uVar604;
    iVar605 = iVar605 + -1;
    local_e0 = (uVar617 & 0x7ffffffffffff) +
               (local_c0 >> 0x33 |
               (SUB168(auVar204 * auVar504,8) + SUB168(auVar196 * auVar496,8) +
                (ulong)CARRY8(local_d8 * uVar623,local_d0 * local_d0) +
                SUB168(auVar205 * auVar505,8) + (ulong)CARRY8(uVar608,uVar622) + (uVar621 >> 0x33) +
               (ulong)CARRY8(uVar624,uVar604)) * 0x2000) * 0x13;
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_d8 = (uVar602 & 0x7ffffffffffff) + (local_e0 >> 0x33);
    local_d0 = (uVar607 & 0x7ffffffffffff) + (local_d8 >> 0x33);
    local_e0 = local_e0 & 0x7ffffffffffff;
    local_d8 = local_d8 & 0x7ffffffffffff;
  } while (iVar605 != 0);
  FUN_007866c0(&local_e0,&local_e0,&local_b8);
  uVar612 = local_c0 * 0x26;
  auVar211._8_8_ = 0;
  auVar211._0_8_ = local_c0 * 0x13;
  auVar511._8_8_ = 0;
  auVar511._0_8_ = local_c0;
  uVar607 = local_c0 * 0x13 * local_c0;
  auVar212._8_8_ = 0;
  auVar212._0_8_ = local_d0;
  auVar512._8_8_ = 0;
  auVar512._0_8_ = uVar612;
  auVar213._8_8_ = 0;
  auVar213._0_8_ = local_c8;
  auVar513._8_8_ = 0;
  auVar513._0_8_ = uVar612;
  auVar214._8_8_ = 0;
  auVar214._0_8_ = local_c8 * 0x13;
  auVar514._8_8_ = 0;
  auVar514._0_8_ = local_c8;
  uVar602 = local_c8 * 0x13 * local_c8;
  uVar604 = local_c8 * 2;
  auVar215._8_8_ = 0;
  auVar215._0_8_ = local_d0;
  auVar515._8_8_ = 0;
  auVar515._0_8_ = local_c8 * 0x26;
  uVar621 = local_d0 * local_c8 * 0x26;
  auVar216._8_8_ = 0;
  auVar216._0_8_ = local_d8;
  auVar516._8_8_ = 0;
  auVar516._0_8_ = uVar612;
  auVar217._8_8_ = 0;
  auVar217._0_8_ = local_d0;
  auVar517._8_8_ = 0;
  auVar517._0_8_ = local_d0;
  uVar608 = local_d8 * uVar612 + uVar621;
  uVar626 = local_d0 * 2;
  uVar617 = uVar608 + local_e0 * local_e0;
  auVar218._8_8_ = 0;
  auVar218._0_8_ = local_e0;
  auVar518._8_8_ = 0;
  auVar518._0_8_ = local_e0;
  auVar219._8_8_ = 0;
  auVar219._0_8_ = local_d8;
  auVar519._8_8_ = 0;
  auVar519._0_8_ = uVar604;
  auVar220._8_8_ = 0;
  auVar220._0_8_ = local_e0;
  auVar520._8_8_ = 0;
  auVar520._0_8_ = local_c0 * 2;
  uVar624 = local_d8 * uVar604 + local_d0 * local_d0;
  uVar603 = local_e0 * local_c0 * 2;
  uVar601 = uVar617 >> 0x33 |
            (SUB168(auVar216 * auVar516,8) + SUB168(auVar215 * auVar515,8) +
             (ulong)CARRY8(local_d8 * uVar612,uVar621) + SUB168(auVar218 * auVar518,8) +
            (ulong)CARRY8(uVar608,local_e0 * local_e0)) * 0x2000;
  auVar221._8_8_ = 0;
  auVar221._0_8_ = local_d8;
  auVar521._8_8_ = 0;
  auVar521._0_8_ = uVar626;
  uVar608 = uVar624 + uVar603;
  auVar222._8_8_ = 0;
  auVar222._0_8_ = local_e0;
  auVar522._8_8_ = 0;
  auVar522._0_8_ = uVar604;
  lVar609 = SUB168(auVar219 * auVar519,8) + SUB168(auVar217 * auVar517,8) +
            (ulong)CARRY8(local_d8 * uVar604,local_d0 * local_d0) + SUB168(auVar220 * auVar520,8) +
            (ulong)CARRY8(uVar624,uVar603);
  uVar624 = local_d8 * uVar626 + uVar607;
  auVar223._8_8_ = 0;
  auVar223._0_8_ = local_d8;
  auVar523._8_8_ = 0;
  auVar523._0_8_ = local_d8;
  uVar621 = uVar624 + local_e0 * uVar604;
  auVar224._8_8_ = 0;
  auVar224._0_8_ = local_e0;
  auVar524._8_8_ = 0;
  auVar524._0_8_ = uVar626;
  lVar615 = SUB168(auVar221 * auVar521,8) + SUB168(auVar211 * auVar511,8) +
            (ulong)CARRY8(local_d8 * uVar626,uVar607) + SUB168(auVar222 * auVar522,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar604);
  uVar624 = local_d8 * local_d8 + local_c8 * uVar612;
  uVar607 = local_e0 * local_d8 * 2;
  auVar225._8_8_ = 0;
  auVar225._0_8_ = local_e0;
  auVar525._8_8_ = 0;
  auVar525._0_8_ = local_d8 * 2;
  uVar604 = uVar624 + local_e0 * uVar626;
  lVar618 = SUB168(auVar223 * auVar523,8) + SUB168(auVar213 * auVar513,8) +
            (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar612) + SUB168(auVar224 * auVar524,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar626);
  uVar624 = local_d0 * uVar612 + uVar602;
  uVar626 = uVar624 + uVar607;
  iVar605 = 99;
  lVar619 = SUB168(auVar212 * auVar512,8) + SUB168(auVar214 * auVar514,8) +
            (ulong)CARRY8(local_d0 * uVar612,uVar602) + SUB168(auVar225 * auVar525,8) +
            (ulong)CARRY8(uVar624,uVar607);
  uVar624 = uVar626 + uVar601;
  if (CARRY8(uVar626,uVar601)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar612 = uVar626 >> 0x33 | lVar618 << 0xd;
  uVar604 = uVar621 + uVar612;
  if (CARRY8(uVar621,uVar612)) {
    lVar615 = lVar615 + 1;
  }
  uVar612 = uVar604 >> 0x33 | lVar615 << 0xd;
  uVar621 = uVar608 + uVar612;
  if (CARRY8(uVar608,uVar612)) {
    lVar609 = lVar609 + 1;
  }
  uVar617 = (uVar617 & 0x7ffffffffffff) + (uVar621 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_f8 = (undefined1 *)(uVar604 & 0x7ffffffffffff);
  uVar608 = (uVar624 & 0x7ffffffffffff) + (uVar617 >> 0x33);
  local_f0 = (undefined1 *)(uVar621 & 0x7ffffffffffff);
  puStack_100 = (undefined1 *)((uVar626 & 0x7ffffffffffff) + (uVar608 >> 0x33));
  local_110 = (undefined1 *)(uVar617 & 0x7ffffffffffff);
  puStack_108 = (undefined1 *)(uVar608 & 0x7ffffffffffff);
  do {
    auVar226._8_8_ = 0;
    auVar226._0_8_ = puStack_100;
    auVar526._8_8_ = 0;
    auVar526._0_8_ = puStack_100;
    uVar614 = (long)local_f0 * 0x26;
    auVar227._8_8_ = 0;
    auVar227._0_8_ = (long)local_f8 * 0x13;
    auVar527._8_8_ = 0;
    auVar527._0_8_ = local_f8;
    auVar228._8_8_ = 0;
    auVar228._0_8_ = local_f8;
    auVar528._8_8_ = 0;
    auVar528._0_8_ = uVar614;
    uVar603 = (long)local_f8 * 0x13 * (long)local_f8;
    uVar623 = (long)local_f8 * 2;
    auVar229._8_8_ = 0;
    auVar229._0_8_ = puStack_100;
    auVar529._8_8_ = 0;
    auVar529._0_8_ = uVar614;
    auVar230._8_8_ = 0;
    auVar230._0_8_ = puStack_100;
    auVar530._8_8_ = 0;
    auVar530._0_8_ = (long)local_f8 * 0x26;
    uVar624 = (long)puStack_100 * (long)local_f8 * 0x26;
    auVar231._8_8_ = 0;
    auVar231._0_8_ = puStack_108;
    auVar531._8_8_ = 0;
    auVar531._0_8_ = uVar614;
    auVar232._8_8_ = 0;
    auVar232._0_8_ = (long)local_f0 * 0x13;
    auVar532._8_8_ = 0;
    auVar532._0_8_ = local_f0;
    uVar613 = (long)local_f0 * 0x13 * (long)local_f0;
    uVar608 = (long)puStack_108 * uVar614 + uVar624;
    uVar610 = (long)puStack_100 * 2;
    uVar617 = uVar608 + (long)local_110 * (long)local_110;
    auVar233._8_8_ = 0;
    auVar233._0_8_ = local_110;
    auVar533._8_8_ = 0;
    auVar533._0_8_ = local_110;
    auVar234._8_8_ = 0;
    auVar234._0_8_ = puStack_108;
    auVar534._8_8_ = 0;
    auVar534._0_8_ = uVar623;
    auVar235._8_8_ = 0;
    auVar235._0_8_ = local_110;
    auVar535._8_8_ = 0;
    auVar535._0_8_ = (long)local_f0 * 2;
    uVar611 = SUB168(auVar231 * auVar531,8) + SUB168(auVar230 * auVar530,8) +
              (ulong)CARRY8((long)puStack_108 * uVar614,uVar624) + SUB168(auVar233 * auVar533,8) +
              (ulong)CARRY8(uVar608,(long)local_110 * (long)local_110);
    uVar608 = (long)puStack_108 * uVar623 + (long)puStack_100 * (long)puStack_100;
    uVar622 = (long)local_110 * (long)local_f0 * 2;
    auVar236._8_8_ = 0;
    auVar236._0_8_ = puStack_108;
    auVar536._8_8_ = 0;
    auVar536._0_8_ = uVar610;
    uVar624 = uVar608 + uVar622;
    auVar237._8_8_ = 0;
    auVar237._0_8_ = local_110;
    auVar537._8_8_ = 0;
    auVar537._0_8_ = uVar623;
    uVar621 = (long)puStack_108 * uVar610 + uVar613;
    auVar238._8_8_ = 0;
    auVar238._0_8_ = puStack_108;
    auVar538._8_8_ = 0;
    auVar538._0_8_ = puStack_108;
    uVar604 = uVar621 + (long)local_110 * uVar623;
    auVar239._8_8_ = 0;
    auVar239._0_8_ = local_110;
    auVar539._8_8_ = 0;
    auVar539._0_8_ = uVar610;
    uVar616 = (long)local_110 * (long)puStack_108 * 2;
    auVar240._8_8_ = 0;
    auVar240._0_8_ = local_110;
    auVar540._8_8_ = 0;
    auVar540._0_8_ = (long)puStack_108 * 2;
    uVar626 = (long)puStack_108 * (long)puStack_108 + (long)local_f8 * uVar614;
    uVar612 = uVar626 + (long)local_110 * uVar610;
    uVar607 = (long)puStack_100 * uVar614 + uVar603;
    uVar606 = uVar617 >> 0x33 | uVar611 * 0x2000;
    uVar601 = uVar607 + uVar616;
    uVar602 = uVar601 + uVar606;
    uVar601 = SUB168(auVar229 * auVar529,8) + SUB168(auVar227 * auVar527,8) +
              (ulong)CARRY8((long)puStack_100 * uVar614,uVar603) + SUB168(auVar240 * auVar540,8) +
              (ulong)CARRY8(uVar607,uVar616) + (uVar611 >> 0x33) + (ulong)CARRY8(uVar601,uVar606);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar612 = SUB168(auVar238 * auVar538,8) + SUB168(auVar228 * auVar528,8) +
              (ulong)CARRY8((long)puStack_108 * (long)puStack_108,(long)local_f8 * uVar614) +
              SUB168(auVar239 * auVar539,8) + (ulong)CARRY8(uVar626,(long)local_110 * uVar610) +
              (uVar601 >> 0x33) + (ulong)CARRY8(uVar612,uVar603);
    uVar601 = uVar607 >> 0x33 | uVar612 * 0x2000;
    uVar626 = uVar604 + uVar601;
    uVar604 = SUB168(auVar236 * auVar536,8) + SUB168(auVar232 * auVar532,8) +
              (ulong)CARRY8((long)puStack_108 * uVar610,uVar613) + SUB168(auVar237 * auVar537,8) +
              (ulong)CARRY8(uVar621,(long)local_110 * uVar623) + (uVar612 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar601);
    local_f8 = (undefined1 *)(uVar626 & 0x7ffffffffffff);
    uVar626 = uVar626 >> 0x33 | uVar604 * 0x2000;
    uVar621 = uVar624 + uVar626;
    iVar605 = iVar605 + -1;
    uVar617 = (uVar617 & 0x7ffffffffffff) +
              (uVar621 >> 0x33 |
              (SUB168(auVar234 * auVar534,8) + SUB168(auVar226 * auVar526,8) +
               (ulong)CARRY8((long)puStack_108 * uVar623,(long)puStack_100 * (long)puStack_100) +
               SUB168(auVar235 * auVar535,8) + (ulong)CARRY8(uVar608,uVar622) + (uVar604 >> 0x33) +
              (ulong)CARRY8(uVar624,uVar626)) * 0x2000) * 0x13;
    local_f0 = (undefined1 *)(uVar621 & 0x7ffffffffffff);
    uVar608 = (uVar602 & 0x7ffffffffffff) + (uVar617 >> 0x33);
    puStack_100 = (undefined1 *)((uVar607 & 0x7ffffffffffff) + (uVar608 >> 0x33));
    local_110 = (undefined1 *)(uVar617 & 0x7ffffffffffff);
    puStack_108 = (undefined1 *)(uVar608 & 0x7ffffffffffff);
  } while (iVar605 != 0);
  FUN_007866c0(&local_e0,&local_110,&local_e0);
  uVar612 = local_c0 * 0x26;
  auVar241._8_8_ = 0;
  auVar241._0_8_ = local_c0 * 0x13;
  auVar541._8_8_ = 0;
  auVar541._0_8_ = local_c0;
  uVar607 = local_c0 * 0x13 * local_c0;
  auVar242._8_8_ = 0;
  auVar242._0_8_ = local_d0;
  auVar542._8_8_ = 0;
  auVar542._0_8_ = uVar612;
  auVar243._8_8_ = 0;
  auVar243._0_8_ = local_c8;
  auVar543._8_8_ = 0;
  auVar543._0_8_ = uVar612;
  auVar244._8_8_ = 0;
  auVar244._0_8_ = local_c8 * 0x13;
  auVar544._8_8_ = 0;
  auVar544._0_8_ = local_c8;
  uVar602 = local_c8 * 0x13 * local_c8;
  uVar604 = local_c8 * 2;
  auVar245._8_8_ = 0;
  auVar245._0_8_ = local_d0;
  auVar545._8_8_ = 0;
  auVar545._0_8_ = local_c8 * 0x26;
  uVar621 = local_d0 * local_c8 * 0x26;
  auVar246._8_8_ = 0;
  auVar246._0_8_ = local_d8;
  auVar546._8_8_ = 0;
  auVar546._0_8_ = uVar612;
  auVar247._8_8_ = 0;
  auVar247._0_8_ = local_d0;
  auVar547._8_8_ = 0;
  auVar547._0_8_ = local_d0;
  uVar608 = local_d8 * uVar612 + uVar621;
  uVar626 = local_d0 * 2;
  uVar617 = uVar608 + local_e0 * local_e0;
  auVar248._8_8_ = 0;
  auVar248._0_8_ = local_e0;
  auVar548._8_8_ = 0;
  auVar548._0_8_ = local_e0;
  auVar249._8_8_ = 0;
  auVar249._0_8_ = local_d8;
  auVar549._8_8_ = 0;
  auVar549._0_8_ = uVar604;
  auVar250._8_8_ = 0;
  auVar250._0_8_ = local_e0;
  auVar550._8_8_ = 0;
  auVar550._0_8_ = local_c0 * 2;
  uVar624 = local_d8 * uVar604 + local_d0 * local_d0;
  uVar603 = local_e0 * local_c0 * 2;
  uVar601 = uVar617 >> 0x33 |
            (SUB168(auVar246 * auVar546,8) + SUB168(auVar245 * auVar545,8) +
             (ulong)CARRY8(local_d8 * uVar612,uVar621) + SUB168(auVar248 * auVar548,8) +
            (ulong)CARRY8(uVar608,local_e0 * local_e0)) * 0x2000;
  auVar251._8_8_ = 0;
  auVar251._0_8_ = local_d8;
  auVar551._8_8_ = 0;
  auVar551._0_8_ = uVar626;
  uVar608 = uVar624 + uVar603;
  auVar252._8_8_ = 0;
  auVar252._0_8_ = local_e0;
  auVar552._8_8_ = 0;
  auVar552._0_8_ = uVar604;
  lVar609 = SUB168(auVar249 * auVar549,8) + SUB168(auVar247 * auVar547,8) +
            (ulong)CARRY8(local_d8 * uVar604,local_d0 * local_d0) + SUB168(auVar250 * auVar550,8) +
            (ulong)CARRY8(uVar624,uVar603);
  uVar624 = local_d8 * uVar626 + uVar607;
  auVar253._8_8_ = 0;
  auVar253._0_8_ = local_d8;
  auVar553._8_8_ = 0;
  auVar553._0_8_ = local_d8;
  uVar621 = uVar624 + local_e0 * uVar604;
  auVar254._8_8_ = 0;
  auVar254._0_8_ = local_e0;
  auVar554._8_8_ = 0;
  auVar554._0_8_ = uVar626;
  lVar615 = SUB168(auVar251 * auVar551,8) + SUB168(auVar241 * auVar541,8) +
            (ulong)CARRY8(local_d8 * uVar626,uVar607) + SUB168(auVar252 * auVar552,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar604);
  uVar624 = local_d8 * local_d8 + local_c8 * uVar612;
  uVar607 = local_e0 * local_d8 * 2;
  auVar255._8_8_ = 0;
  auVar255._0_8_ = local_e0;
  auVar555._8_8_ = 0;
  auVar555._0_8_ = local_d8 * 2;
  uVar604 = uVar624 + local_e0 * uVar626;
  lVar618 = SUB168(auVar253 * auVar553,8) + SUB168(auVar243 * auVar543,8) +
            (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar612) + SUB168(auVar254 * auVar554,8) +
            (ulong)CARRY8(uVar624,local_e0 * uVar626);
  uVar624 = local_d0 * uVar612 + uVar602;
  uVar626 = uVar624 + uVar607;
  iVar605 = 0x31;
  lVar619 = SUB168(auVar242 * auVar542,8) + SUB168(auVar244 * auVar544,8) +
            (ulong)CARRY8(local_d0 * uVar612,uVar602) + SUB168(auVar255 * auVar555,8) +
            (ulong)CARRY8(uVar624,uVar607);
  uVar624 = uVar626 + uVar601;
  if (CARRY8(uVar626,uVar601)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar604 = uVar626 >> 0x33 | lVar618 << 0xd;
  local_c8 = uVar621 + uVar604;
  if (CARRY8(uVar621,uVar604)) {
    lVar615 = lVar615 + 1;
  }
  uVar621 = local_c8 >> 0x33 | lVar615 << 0xd;
  local_c0 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_e0 = (uVar617 & 0x7ffffffffffff) + (local_c0 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_c8 = local_c8 & 0x7ffffffffffff;
  local_d8 = (uVar624 & 0x7ffffffffffff) + (local_e0 >> 0x33);
  local_c0 = local_c0 & 0x7ffffffffffff;
  local_d0 = (uVar626 & 0x7ffffffffffff) + (local_d8 >> 0x33);
  local_e0 = local_e0 & 0x7ffffffffffff;
  local_d8 = local_d8 & 0x7ffffffffffff;
  do {
    auVar256._8_8_ = 0;
    auVar256._0_8_ = local_d0;
    auVar556._8_8_ = 0;
    auVar556._0_8_ = local_d0;
    uVar614 = local_c0 * 0x26;
    auVar257._8_8_ = 0;
    auVar257._0_8_ = local_c8 * 0x13;
    auVar557._8_8_ = 0;
    auVar557._0_8_ = local_c8;
    auVar258._8_8_ = 0;
    auVar258._0_8_ = local_c8;
    auVar558._8_8_ = 0;
    auVar558._0_8_ = uVar614;
    uVar603 = local_c8 * 0x13 * local_c8;
    uVar623 = local_c8 * 2;
    auVar259._8_8_ = 0;
    auVar259._0_8_ = local_d0;
    auVar559._8_8_ = 0;
    auVar559._0_8_ = uVar614;
    auVar260._8_8_ = 0;
    auVar260._0_8_ = local_d0;
    auVar560._8_8_ = 0;
    auVar560._0_8_ = local_c8 * 0x26;
    uVar624 = local_d0 * local_c8 * 0x26;
    auVar261._8_8_ = 0;
    auVar261._0_8_ = local_d8;
    auVar561._8_8_ = 0;
    auVar561._0_8_ = uVar614;
    auVar262._8_8_ = 0;
    auVar262._0_8_ = local_c0 * 0x13;
    auVar562._8_8_ = 0;
    auVar562._0_8_ = local_c0;
    uVar613 = local_c0 * 0x13 * local_c0;
    uVar608 = local_d8 * uVar614 + uVar624;
    uVar610 = local_d0 * 2;
    uVar617 = uVar608 + local_e0 * local_e0;
    auVar263._8_8_ = 0;
    auVar263._0_8_ = local_e0;
    auVar563._8_8_ = 0;
    auVar563._0_8_ = local_e0;
    auVar264._8_8_ = 0;
    auVar264._0_8_ = local_d8;
    auVar564._8_8_ = 0;
    auVar564._0_8_ = uVar623;
    auVar265._8_8_ = 0;
    auVar265._0_8_ = local_e0;
    auVar565._8_8_ = 0;
    auVar565._0_8_ = local_c0 * 2;
    uVar611 = SUB168(auVar261 * auVar561,8) + SUB168(auVar260 * auVar560,8) +
              (ulong)CARRY8(local_d8 * uVar614,uVar624) + SUB168(auVar263 * auVar563,8) +
              (ulong)CARRY8(uVar608,local_e0 * local_e0);
    uVar608 = local_d8 * uVar623 + local_d0 * local_d0;
    uVar622 = local_e0 * local_c0 * 2;
    auVar266._8_8_ = 0;
    auVar266._0_8_ = local_d8;
    auVar566._8_8_ = 0;
    auVar566._0_8_ = uVar610;
    uVar624 = uVar608 + uVar622;
    auVar267._8_8_ = 0;
    auVar267._0_8_ = local_e0;
    auVar567._8_8_ = 0;
    auVar567._0_8_ = uVar623;
    uVar621 = local_d8 * uVar610 + uVar613;
    auVar268._8_8_ = 0;
    auVar268._0_8_ = local_d8;
    auVar568._8_8_ = 0;
    auVar568._0_8_ = local_d8;
    uVar604 = uVar621 + local_e0 * uVar623;
    auVar269._8_8_ = 0;
    auVar269._0_8_ = local_e0;
    auVar569._8_8_ = 0;
    auVar569._0_8_ = uVar610;
    uVar616 = local_e0 * local_d8 * 2;
    auVar270._8_8_ = 0;
    auVar270._0_8_ = local_e0;
    auVar570._8_8_ = 0;
    auVar570._0_8_ = local_d8 * 2;
    uVar626 = local_d8 * local_d8 + local_c8 * uVar614;
    uVar612 = uVar626 + local_e0 * uVar610;
    uVar607 = local_d0 * uVar614 + uVar603;
    uVar606 = uVar617 >> 0x33 | uVar611 * 0x2000;
    uVar601 = uVar607 + uVar616;
    uVar602 = uVar601 + uVar606;
    uVar601 = SUB168(auVar259 * auVar559,8) + SUB168(auVar257 * auVar557,8) +
              (ulong)CARRY8(local_d0 * uVar614,uVar603) + SUB168(auVar270 * auVar570,8) +
              (ulong)CARRY8(uVar607,uVar616) + (uVar611 >> 0x33) + (ulong)CARRY8(uVar601,uVar606);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar612 = SUB168(auVar268 * auVar568,8) + SUB168(auVar258 * auVar558,8) +
              (ulong)CARRY8(local_d8 * local_d8,local_c8 * uVar614) + SUB168(auVar269 * auVar569,8)
              + (ulong)CARRY8(uVar626,local_e0 * uVar610) + (uVar601 >> 0x33) +
              (ulong)CARRY8(uVar612,uVar603);
    uVar601 = uVar607 >> 0x33 | uVar612 * 0x2000;
    uVar626 = uVar604 + uVar601;
    uVar621 = SUB168(auVar266 * auVar566,8) + SUB168(auVar262 * auVar562,8) +
              (ulong)CARRY8(local_d8 * uVar610,uVar613) + SUB168(auVar267 * auVar567,8) +
              (ulong)CARRY8(uVar621,local_e0 * uVar623) + (uVar612 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar601);
    local_c8 = uVar626 & 0x7ffffffffffff;
    uVar604 = uVar626 >> 0x33 | uVar621 * 0x2000;
    local_c0 = uVar624 + uVar604;
    iVar605 = iVar605 + -1;
    local_e0 = (uVar617 & 0x7ffffffffffff) +
               (local_c0 >> 0x33 |
               (SUB168(auVar264 * auVar564,8) + SUB168(auVar256 * auVar556,8) +
                (ulong)CARRY8(local_d8 * uVar623,local_d0 * local_d0) +
                SUB168(auVar265 * auVar565,8) + (ulong)CARRY8(uVar608,uVar622) + (uVar621 >> 0x33) +
               (ulong)CARRY8(uVar624,uVar604)) * 0x2000) * 0x13;
    local_c0 = local_c0 & 0x7ffffffffffff;
    local_d8 = (uVar602 & 0x7ffffffffffff) + (local_e0 >> 0x33);
    local_d0 = (uVar607 & 0x7ffffffffffff) + (local_d8 >> 0x33);
    local_e0 = local_e0 & 0x7ffffffffffff;
    local_d8 = local_d8 & 0x7ffffffffffff;
  } while (iVar605 != 0);
  FUN_007866c0(&local_b8,&local_e0,&local_b8);
  uVar612 = local_98 * 0x26;
  auVar271._8_8_ = 0;
  auVar271._0_8_ = local_98 * 0x13;
  auVar571._8_8_ = 0;
  auVar571._0_8_ = local_98;
  uVar607 = local_98 * 0x13 * local_98;
  auVar272._8_8_ = 0;
  auVar272._0_8_ = local_a8;
  auVar572._8_8_ = 0;
  auVar572._0_8_ = uVar612;
  auVar273._8_8_ = 0;
  auVar273._0_8_ = local_a0;
  auVar573._8_8_ = 0;
  auVar573._0_8_ = uVar612;
  auVar274._8_8_ = 0;
  auVar274._0_8_ = local_a0 * 0x13;
  auVar574._8_8_ = 0;
  auVar574._0_8_ = local_a0;
  uVar602 = local_a0 * 0x13 * local_a0;
  uVar604 = local_a0 * 2;
  auVar275._8_8_ = 0;
  auVar275._0_8_ = local_a8;
  auVar575._8_8_ = 0;
  auVar575._0_8_ = local_a0 * 0x26;
  uVar621 = local_a8 * local_a0 * 0x26;
  auVar276._8_8_ = 0;
  auVar276._0_8_ = local_b0;
  auVar576._8_8_ = 0;
  auVar576._0_8_ = uVar612;
  auVar277._8_8_ = 0;
  auVar277._0_8_ = local_a8;
  auVar577._8_8_ = 0;
  auVar577._0_8_ = local_a8;
  uVar608 = local_b0 * uVar612 + uVar621;
  uVar626 = local_a8 * 2;
  uVar617 = uVar608 + local_b8 * local_b8;
  auVar278._8_8_ = 0;
  auVar278._0_8_ = local_b8;
  auVar578._8_8_ = 0;
  auVar578._0_8_ = local_b8;
  auVar279._8_8_ = 0;
  auVar279._0_8_ = local_b0;
  auVar579._8_8_ = 0;
  auVar579._0_8_ = uVar604;
  auVar280._8_8_ = 0;
  auVar280._0_8_ = local_b8;
  auVar580._8_8_ = 0;
  auVar580._0_8_ = local_98 * 2;
  uVar624 = local_b0 * uVar604 + local_a8 * local_a8;
  uVar603 = local_b8 * local_98 * 2;
  uVar601 = uVar617 >> 0x33 |
            (SUB168(auVar276 * auVar576,8) + SUB168(auVar275 * auVar575,8) +
             (ulong)CARRY8(local_b0 * uVar612,uVar621) + SUB168(auVar278 * auVar578,8) +
            (ulong)CARRY8(uVar608,local_b8 * local_b8)) * 0x2000;
  auVar281._8_8_ = 0;
  auVar281._0_8_ = local_b0;
  auVar581._8_8_ = 0;
  auVar581._0_8_ = uVar626;
  uVar608 = uVar624 + uVar603;
  auVar282._8_8_ = 0;
  auVar282._0_8_ = local_b8;
  auVar582._8_8_ = 0;
  auVar582._0_8_ = uVar604;
  lVar609 = SUB168(auVar279 * auVar579,8) + SUB168(auVar277 * auVar577,8) +
            (ulong)CARRY8(local_b0 * uVar604,local_a8 * local_a8) + SUB168(auVar280 * auVar580,8) +
            (ulong)CARRY8(uVar624,uVar603);
  uVar624 = local_b0 * uVar626 + uVar607;
  auVar283._8_8_ = 0;
  auVar283._0_8_ = local_b0;
  auVar583._8_8_ = 0;
  auVar583._0_8_ = local_b0;
  uVar621 = uVar624 + local_b8 * uVar604;
  auVar284._8_8_ = 0;
  auVar284._0_8_ = local_b8;
  auVar584._8_8_ = 0;
  auVar584._0_8_ = uVar626;
  lVar615 = SUB168(auVar281 * auVar581,8) + SUB168(auVar271 * auVar571,8) +
            (ulong)CARRY8(local_b0 * uVar626,uVar607) + SUB168(auVar282 * auVar582,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar604);
  uVar624 = local_b0 * local_b0 + local_a0 * uVar612;
  uVar607 = local_b8 * local_b0 * 2;
  auVar285._8_8_ = 0;
  auVar285._0_8_ = local_b8;
  auVar585._8_8_ = 0;
  auVar585._0_8_ = local_b0 * 2;
  uVar604 = uVar624 + local_b8 * uVar626;
  lVar618 = SUB168(auVar283 * auVar583,8) + SUB168(auVar273 * auVar573,8) +
            (ulong)CARRY8(local_b0 * local_b0,local_a0 * uVar612) + SUB168(auVar284 * auVar584,8) +
            (ulong)CARRY8(uVar624,local_b8 * uVar626);
  uVar624 = local_a8 * uVar612 + uVar602;
  uVar626 = uVar624 + uVar607;
  iVar605 = 4;
  lVar619 = SUB168(auVar272 * auVar572,8) + SUB168(auVar274 * auVar574,8) +
            (ulong)CARRY8(local_a8 * uVar612,uVar602) + SUB168(auVar285 * auVar585,8) +
            (ulong)CARRY8(uVar624,uVar607);
  uVar624 = uVar626 + uVar601;
  if (CARRY8(uVar626,uVar601)) {
    lVar619 = lVar619 + 1;
  }
  uVar612 = uVar624 >> 0x33 | lVar619 << 0xd;
  uVar626 = uVar604 + uVar612;
  if (CARRY8(uVar604,uVar612)) {
    lVar618 = lVar618 + 1;
  }
  uVar604 = uVar626 >> 0x33 | lVar618 << 0xd;
  local_a0 = uVar621 + uVar604;
  if (CARRY8(uVar621,uVar604)) {
    lVar615 = lVar615 + 1;
  }
  uVar621 = local_a0 >> 0x33 | lVar615 << 0xd;
  local_98 = uVar608 + uVar621;
  if (CARRY8(uVar608,uVar621)) {
    lVar609 = lVar609 + 1;
  }
  local_b8 = (uVar617 & 0x7ffffffffffff) + (local_98 >> 0x33 | lVar609 << 0xd) * 0x13;
  local_a0 = local_a0 & 0x7ffffffffffff;
  local_b0 = (uVar624 & 0x7ffffffffffff) + (local_b8 >> 0x33);
  local_98 = local_98 & 0x7ffffffffffff;
  local_a8 = (uVar626 & 0x7ffffffffffff) + (local_b0 >> 0x33);
  local_b8 = local_b8 & 0x7ffffffffffff;
  local_b0 = local_b0 & 0x7ffffffffffff;
  do {
    auVar286._8_8_ = 0;
    auVar286._0_8_ = local_a8;
    auVar586._8_8_ = 0;
    auVar586._0_8_ = local_a8;
    uVar614 = local_98 * 0x26;
    auVar287._8_8_ = 0;
    auVar287._0_8_ = local_a0 * 0x13;
    auVar587._8_8_ = 0;
    auVar587._0_8_ = local_a0;
    auVar288._8_8_ = 0;
    auVar288._0_8_ = local_a0;
    auVar588._8_8_ = 0;
    auVar588._0_8_ = uVar614;
    uVar603 = local_a0 * 0x13 * local_a0;
    uVar623 = local_a0 * 2;
    auVar289._8_8_ = 0;
    auVar289._0_8_ = local_a8;
    auVar589._8_8_ = 0;
    auVar589._0_8_ = uVar614;
    auVar290._8_8_ = 0;
    auVar290._0_8_ = local_a8;
    auVar590._8_8_ = 0;
    auVar590._0_8_ = local_a0 * 0x26;
    uVar624 = local_a8 * local_a0 * 0x26;
    auVar291._8_8_ = 0;
    auVar291._0_8_ = local_b0;
    auVar591._8_8_ = 0;
    auVar591._0_8_ = uVar614;
    auVar292._8_8_ = 0;
    auVar292._0_8_ = local_98 * 0x13;
    auVar592._8_8_ = 0;
    auVar592._0_8_ = local_98;
    uVar613 = local_98 * 0x13 * local_98;
    uVar608 = local_b0 * uVar614 + uVar624;
    uVar610 = local_a8 * 2;
    uVar617 = uVar608 + local_b8 * local_b8;
    auVar293._8_8_ = 0;
    auVar293._0_8_ = local_b8;
    auVar593._8_8_ = 0;
    auVar593._0_8_ = local_b8;
    auVar294._8_8_ = 0;
    auVar294._0_8_ = local_b0;
    auVar594._8_8_ = 0;
    auVar594._0_8_ = uVar623;
    auVar295._8_8_ = 0;
    auVar295._0_8_ = local_b8;
    auVar595._8_8_ = 0;
    auVar595._0_8_ = local_98 * 2;
    uVar611 = SUB168(auVar291 * auVar591,8) + SUB168(auVar290 * auVar590,8) +
              (ulong)CARRY8(local_b0 * uVar614,uVar624) + SUB168(auVar293 * auVar593,8) +
              (ulong)CARRY8(uVar608,local_b8 * local_b8);
    uVar608 = local_b0 * uVar623 + local_a8 * local_a8;
    uVar622 = local_b8 * local_98 * 2;
    auVar296._8_8_ = 0;
    auVar296._0_8_ = local_b0;
    auVar596._8_8_ = 0;
    auVar596._0_8_ = uVar610;
    uVar624 = uVar608 + uVar622;
    auVar297._8_8_ = 0;
    auVar297._0_8_ = local_b8;
    auVar597._8_8_ = 0;
    auVar597._0_8_ = uVar623;
    uVar621 = local_b0 * uVar610 + uVar613;
    auVar298._8_8_ = 0;
    auVar298._0_8_ = local_b0;
    auVar598._8_8_ = 0;
    auVar598._0_8_ = local_b0;
    uVar604 = uVar621 + local_b8 * uVar623;
    auVar299._8_8_ = 0;
    auVar299._0_8_ = local_b8;
    auVar599._8_8_ = 0;
    auVar599._0_8_ = uVar610;
    uVar616 = local_b8 * local_b0 * 2;
    auVar300._8_8_ = 0;
    auVar300._0_8_ = local_b8;
    auVar600._8_8_ = 0;
    auVar600._0_8_ = local_b0 * 2;
    uVar626 = local_b0 * local_b0 + local_a0 * uVar614;
    uVar612 = uVar626 + local_b8 * uVar610;
    uVar607 = local_a8 * uVar614 + uVar603;
    uVar606 = uVar617 >> 0x33 | uVar611 * 0x2000;
    uVar601 = uVar607 + uVar616;
    uVar602 = uVar601 + uVar606;
    uVar601 = SUB168(auVar289 * auVar589,8) + SUB168(auVar287 * auVar587,8) +
              (ulong)CARRY8(local_a8 * uVar614,uVar603) + SUB168(auVar300 * auVar600,8) +
              (ulong)CARRY8(uVar607,uVar616) + (uVar611 >> 0x33) + (ulong)CARRY8(uVar601,uVar606);
    uVar603 = uVar602 >> 0x33 | uVar601 * 0x2000;
    uVar607 = uVar612 + uVar603;
    uVar612 = SUB168(auVar298 * auVar598,8) + SUB168(auVar288 * auVar588,8) +
              (ulong)CARRY8(local_b0 * local_b0,local_a0 * uVar614) + SUB168(auVar299 * auVar599,8)
              + (ulong)CARRY8(uVar626,local_b8 * uVar610) + (uVar601 >> 0x33) +
              (ulong)CARRY8(uVar612,uVar603);
    uVar601 = uVar607 >> 0x33 | uVar612 * 0x2000;
    uVar626 = uVar604 + uVar601;
    uVar621 = SUB168(auVar296 * auVar596,8) + SUB168(auVar292 * auVar592,8) +
              (ulong)CARRY8(local_b0 * uVar610,uVar613) + SUB168(auVar297 * auVar597,8) +
              (ulong)CARRY8(uVar621,local_b8 * uVar623) + (uVar612 >> 0x33) +
              (ulong)CARRY8(uVar604,uVar601);
    local_a0 = uVar626 & 0x7ffffffffffff;
    uVar604 = uVar626 >> 0x33 | uVar621 * 0x2000;
    local_98 = uVar624 + uVar604;
    iVar605 = iVar605 + -1;
    local_b8 = (uVar617 & 0x7ffffffffffff) +
               (local_98 >> 0x33 |
               (SUB168(auVar294 * auVar594,8) + SUB168(auVar286 * auVar586,8) +
                (ulong)CARRY8(local_b0 * uVar623,local_a8 * local_a8) +
                SUB168(auVar295 * auVar595,8) + (ulong)CARRY8(uVar608,uVar622) + (uVar621 >> 0x33) +
               (ulong)CARRY8(uVar624,uVar604)) * 0x2000) * 0x13;
    local_98 = local_98 & 0x7ffffffffffff;
    local_b0 = (uVar602 & 0x7ffffffffffff) + (local_b8 >> 0x33);
    local_a8 = (uVar607 & 0x7ffffffffffff) + (local_b0 >> 0x33);
    local_b8 = local_b8 & 0x7ffffffffffff;
    local_b0 = local_b0 & 0x7ffffffffffff;
  } while (iVar605 != 0);
  FUN_007866c0(param_1,&local_b8,&local_90);
  return;
}


// ===== 007866c0  FUN_007866c0 =====

void FUN_007866c0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
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
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  long lVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  ulong uVar71;
  
  uVar5 = param_3[3];
  uVar9 = param_3[4];
  uVar63 = param_2[4];
  uVar6 = param_3[1];
  uVar10 = param_3[2];
  uVar71 = *param_3;
  uVar69 = uVar9 * 0x13;
  uVar7 = *param_2;
  uVar11 = param_2[1];
  uVar65 = uVar5 * 0x13;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar69;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar63;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar11;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar69;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar11;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar6;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar65;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar63;
  uVar67 = uVar10 * 0x13;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar6 * 0x13;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar63;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar67;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar63;
  uVar70 = uVar6 * 0x13 * uVar63;
  uVar8 = param_2[2];
  uVar12 = param_2[3];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar8;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar65;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar12;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar69;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar12;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar65;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar71;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = uVar63;
  uVar1 = uVar12 * uVar67 + uVar70;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar12;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = uVar67;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = uVar69;
  uVar2 = uVar1 + uVar8 * uVar65;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar12;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar6;
  uVar3 = uVar2 + uVar11 * uVar69;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar71;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = uVar8;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar71;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = uVar12;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar8;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = uVar6;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar8;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar10;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar71;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar11;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar7;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar71;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar7;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = uVar6;
  uVar68 = uVar3 + uVar7 * uVar71;
  uVar64 = uVar68 >> 0x33 |
           (SUB168(auVar23 * auVar48,8) + SUB168(auVar17 * auVar42,8) +
            (ulong)CARRY8(uVar12 * uVar67,uVar70) + SUB168(auVar19 * auVar44,8) +
            (ulong)CARRY8(uVar1,uVar8 * uVar65) + SUB168(auVar14 * auVar39,8) +
            (ulong)CARRY8(uVar2,uVar11 * uVar69) + SUB168(auVar31 * auVar56,8) +
           (ulong)CARRY8(uVar3,uVar7 * uVar71)) * 0x2000;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar11;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar10;
  uVar1 = uVar12 * uVar69 + uVar65 * uVar63;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar11;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = uVar5;
  uVar2 = uVar12 * uVar65 + uVar67 * uVar63;
  uVar3 = uVar2 + uVar8 * uVar69;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar7;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = uVar10;
  uVar70 = uVar3 + uVar71 * uVar11;
  uVar4 = uVar70 + uVar7 * uVar6;
  lVar66 = SUB168(auVar21 * auVar46,8) + SUB168(auVar18 * auVar43,8) +
           (ulong)CARRY8(uVar12 * uVar65,uVar67 * uVar63) + SUB168(auVar24 * auVar49,8) +
           (ulong)CARRY8(uVar2,uVar8 * uVar69) + SUB168(auVar30 * auVar55,8) +
           (ulong)CARRY8(uVar3,uVar71 * uVar11) + SUB168(auVar32 * auVar57,8) +
           (ulong)CARRY8(uVar70,uVar7 * uVar6);
  uVar2 = uVar4 + uVar64;
  if (CARRY8(uVar4,uVar64)) {
    lVar66 = lVar66 + 1;
  }
  uVar3 = uVar1 + uVar11 * uVar6;
  uVar64 = uVar2 >> 0x33 | lVar66 << 0xd;
  uVar70 = uVar3 + uVar71 * uVar8;
  uVar4 = uVar70 + uVar7 * uVar10;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar7;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = uVar5;
  lVar66 = SUB168(auVar20 * auVar45,8) + SUB168(auVar16 * auVar41,8) +
           (ulong)CARRY8(uVar12 * uVar69,uVar65 * uVar63) + SUB168(auVar15 * auVar40,8) +
           (ulong)CARRY8(uVar1,uVar11 * uVar6) + SUB168(auVar26 * auVar51,8) +
           (ulong)CARRY8(uVar3,uVar71 * uVar8) + SUB168(auVar35 * auVar60,8) +
           (ulong)CARRY8(uVar70,uVar7 * uVar10);
  uVar1 = uVar4 + uVar64;
  if (CARRY8(uVar4,uVar64)) {
    lVar66 = lVar66 + 1;
  }
  uVar3 = uVar8 * uVar6 + uVar69 * uVar63;
  uVar70 = uVar3 + uVar11 * uVar10;
  uVar65 = uVar1 >> 0x33 | lVar66 << 0xd;
  uVar4 = uVar70 + uVar71 * uVar12;
  uVar64 = uVar4 + uVar7 * uVar5;
  lVar66 = SUB168(auVar28 * auVar53,8) + SUB168(auVar13 * auVar38,8) +
           (ulong)CARRY8(uVar8 * uVar6,uVar69 * uVar63) + SUB168(auVar33 * auVar58,8) +
           (ulong)CARRY8(uVar3,uVar11 * uVar10) + SUB168(auVar27 * auVar52,8) +
           (ulong)CARRY8(uVar70,uVar71 * uVar12) + SUB168(auVar36 * auVar61,8) +
           (ulong)CARRY8(uVar4,uVar7 * uVar5);
  uVar3 = uVar64 + uVar65;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar7;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar9;
  if (CARRY8(uVar64,uVar65)) {
    lVar66 = lVar66 + 1;
  }
  uVar70 = uVar8 * uVar10 + uVar12 * uVar6;
  uVar67 = uVar3 >> 0x33 | lVar66 << 0xd;
  uVar4 = uVar70 + uVar11 * uVar5;
  uVar64 = uVar4 + uVar71 * uVar63;
  uVar65 = uVar64 + uVar7 * uVar9;
  lVar66 = SUB168(auVar29 * auVar54,8) + SUB168(auVar25 * auVar50,8) +
           (ulong)CARRY8(uVar8 * uVar10,uVar12 * uVar6) + SUB168(auVar34 * auVar59,8) +
           (ulong)CARRY8(uVar70,uVar11 * uVar5) + SUB168(auVar22 * auVar47,8) +
           (ulong)CARRY8(uVar4,uVar71 * uVar63) + SUB168(auVar37 * auVar62,8) +
           (ulong)CARRY8(uVar64,uVar7 * uVar9);
  uVar70 = uVar65 + uVar67;
  if (CARRY8(uVar65,uVar67)) {
    lVar66 = lVar66 + 1;
  }
  uVar68 = (uVar68 & 0x7ffffffffffff) + (uVar70 >> 0x33 | lVar66 << 0xd) * 0x13;
  uVar2 = (uVar2 & 0x7ffffffffffff) + (uVar68 >> 0x33);
  *param_1 = uVar68 & 0x7ffffffffffff;
  param_1[1] = uVar2 & 0x7ffffffffffff;
  param_1[2] = (uVar1 & 0x7ffffffffffff) + (uVar2 >> 0x33);
  param_1[3] = uVar3 & 0x7ffffffffffff;
  param_1[4] = uVar70 & 0x7ffffffffffff;
  return;
}


// ===== 00786980  FUN_00786980 =====

undefined ** FUN_00786980(void)

{
  return &PTR_DAT_00d2afc8;
}


// ===== 00786990  FUN_00786990 =====

undefined ** FUN_00786990(void)

{
  return &PTR_DAT_00d2afd0;
}


// ===== 007869a0  FUN_007869a0 =====

undefined ** FUN_007869a0(void)

{
  return &PTR_DAT_00d2afd8;
}


// ===== 007869b0  FUN_007869b0 =====

undefined8 FUN_007869b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_3 + 8) == 0) {
    uVar1 = *param_4;
    lVar2 = param_4[1];
    puVar4 = (undefined1 *)FUN_0078c954(0x1064);
    if (puVar4 == (undefined1 *)0x0) {
      return 0;
    }
    *puVar4 = 0;
    local_40 = uVar1;
    local_38 = lVar2;
    iVar3 = FUN_0078d81c(puVar4 + 4,&local_40);
    if ((iVar3 != 0) && (local_38 == 0)) {
      FUN_007787d8(param_2,&DAT_00d2afe0,puVar4);
      return 1;
    }
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xbf);
    FUN_0078cb3c(puVar4);
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xf1);
  }
  return 0;
}


// ===== 00786a80  FUN_00786a80 =====

undefined8 FUN_00786a80(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  pbVar3 = *(byte **)(param_2 + 8);
  pbVar4 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073de14(pbVar4);
  }
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 == 0)) ||
      (iVar1 = FUN_0077190c(&puStack_80,6,&DAT_0020b000,9), iVar1 == 0)) ||
     (((iVar1 = FUN_00771098(&local_50,&local_b0,3), iVar1 == 0 ||
       (iVar1 = FUN_00771298(&local_b0,0), iVar1 == 0)) ||
      ((iVar1 = FUN_0078d7f8(&local_b0,pbVar4), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0x104);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00786b98  FUN_00786b98 =====

bool FUN_00786b98(long param_1,long param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = *(byte **)(param_1 + 8);
  pbVar4 = pbVar2 + 4;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073de14(pbVar4);
  }
  pbVar3 = *(byte **)(param_2 + 8);
  pbVar2 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar2 = (byte *)FUN_0073de14(pbVar2);
  }
  iVar1 = FUN_0073e140(pbVar4,pbVar2);
  return iVar1 != 0;
}


// ===== 00786c0c  FUN_00786c0c =====

undefined8 FUN_00786c0c(void)

{
  return 1;
}


// ===== 00786c18  FUN_00786c18 =====

undefined8 FUN_00786c18(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_40;
  undefined1 *puStack_38;
  
  if (*(long *)(param_3 + 8) == 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    iVar3 = FUN_00772950(param_4,&local_40,0x80000000);
    puVar2 = puStack_38;
    puVar1 = local_40;
    if (iVar3 == 0) {
      uVar5 = 0x8b;
      uVar6 = 0x12e;
    }
    else {
      if (*(long *)(param_4 + 8) == 0) {
        puVar4 = (undefined1 *)FUN_0078c954(0x40a4);
        if (puVar4 == (undefined1 *)0x0) {
          return 0;
        }
        *puVar4 = 1;
        if ((puVar2 == (undefined1 *)0x20) &&
           (iVar3 = FUN_0078d734(puVar4 + 4,puVar1,0x20), iVar3 != 0)) {
          uVar7 = *puVar1;
          uVar6 = puVar1[3];
          uVar5 = puVar1[2];
          *(undefined8 *)(puVar4 + 0x408c) = puVar1[1];
          *(undefined8 *)(puVar4 + 0x4084) = uVar7;
          *(undefined8 *)(puVar4 + 0x409c) = uVar6;
          *(undefined8 *)(puVar4 + 0x4094) = uVar5;
          FUN_007787d8(param_2,&DAT_00d2afe0,puVar4);
          return 1;
        }
        FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xaf);
        FUN_0078cb3c(puVar4);
        return 0;
      }
      uVar5 = 0x66;
      uVar6 = 0x132;
    }
  }
  else {
    uVar5 = 0x66;
    uVar6 = 0x118;
  }
  FUN_00777eb4(6,0,uVar5,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar6);
  return 0;
}


// ===== 00786d60  FUN_00786d60 =====

undefined8 FUN_00786d60(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  pbVar4 = *(byte **)(param_2 + 8);
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
    uVar2 = 0x82;
    uVar3 = 0x13d;
  }
  else {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
    iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_007719cc(&local_50,0), iVar1 != 0)) &&
        (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 != 0)) &&
       (((iVar1 = FUN_0077190c(&puStack_80,6,&DAT_0020b000,9), iVar1 != 0 &&
         (iVar1 = FUN_00771098(&local_50,&local_b0,4), iVar1 != 0)) &&
        ((iVar1 = FUN_0077190c(&local_b0,0x80000000,pbVar4 + 0x4084,0x20), iVar1 != 0 &&
         (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)))))) {
      return 1;
    }
    uVar2 = 0x69;
    uVar3 = 0x14c;
  }
  FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar3);
  return 0;
}


// ===== 00786e8c  FUN_00786e8c =====

byte FUN_00786e8c(long param_1)

{
  return *(byte **)(param_1 + 8) != (byte *)0x0 & **(byte **)(param_1 + 8);
}


// ===== 00786ea8  FUN_00786ea8 =====

undefined1 * FUN_00786ea8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined1 *)FUN_0078c954(0x40a4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 1;
    if ((param_3 == 0x20) && (iVar1 = FUN_0078d734(puVar2 + 4,param_2,0x20), iVar1 != 0)) {
      uVar5 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      *(undefined8 *)(puVar2 + 0x408c) = param_2[1];
      *(undefined8 *)(puVar2 + 0x4084) = uVar5;
      *(undefined8 *)(puVar2 + 0x409c) = uVar4;
      *(undefined8 *)(puVar2 + 0x4094) = uVar3;
      FUN_007787d8(param_1,&DAT_00d2afe0,puVar2);
      puVar2 = (undefined1 *)0x1;
    }
    else {
      FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xaf);
      FUN_0078cb3c(puVar2);
      puVar2 = (undefined1 *)0x0;
    }
  }
  return puVar2;
}


// ===== 00786f64  FUN_00786f64 =====

undefined1 * FUN_00786f64(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 local_40;
  long local_38;
  
  puVar2 = (undefined1 *)FUN_0078c954(0x1064);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    local_40 = param_2;
    local_38 = param_3;
    iVar1 = FUN_0078d81c(puVar2 + 4,&local_40);
    if ((iVar1 == 0) || (local_38 != 0)) {
      FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xbf);
      FUN_0078cb3c(puVar2);
      puVar2 = (undefined1 *)0x0;
    }
    else {
      FUN_007787d8(param_1,&DAT_00d2afe0,puVar2);
      puVar2 = (undefined1 *)0x1;
    }
  }
  return puVar2;
}


// ===== 00787010  FUN_00787010 =====

undefined8 FUN_00787010(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  pbVar3 = *(byte **)(param_1 + 8);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    uVar1 = 0x82;
    uVar2 = 0xca;
LAB_00787070:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 0xd2;
        goto LAB_00787070;
      }
      uVar4 = *(undefined8 *)(pbVar3 + 0x4084);
      uVar2 = *(undefined8 *)(pbVar3 + 0x409c);
      uVar1 = *(undefined8 *)(pbVar3 + 0x4094);
      param_2[1] = *(undefined8 *)(pbVar3 + 0x408c);
      *param_2 = uVar4;
      param_2[3] = uVar2;
      param_2[2] = uVar1;
    }
    uVar1 = 1;
    *param_3 = 0x20;
  }
  return uVar1;
}


// ===== 007870ac  FUN_007870ac =====

undefined8 FUN_007870ac(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  pbVar3 = *(byte **)(param_1 + 8);
  pbVar4 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073de14(pbVar4);
  }
  if (param_2 != 0) {
    if (*param_3 < 0x520) {
      FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xe1);
      return 0;
    }
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007709ec(&local_60,param_2,0x520);
    iVar1 = FUN_0078d7f8(&local_60,pbVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = FUN_00770d00(&local_60);
    if (lVar2 != 0x520) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  *param_3 = 0x520;
  return 1;
}


// ===== 00787188  FUN_00787188 =====

undefined8 FUN_00787188(void)

{
  return 0x974;
}


// ===== 00787194  FUN_00787194 =====

undefined8 FUN_00787194(void)

{
  return 0x2900;
}


// ===== 007871a0  FUN_007871a0 =====

void FUN_007871a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0078cb3c();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 007871d4  FUN_007871d4 =====

undefined8 FUN_007871d4(void)

{
  return 1;
}


// ===== 007871e0  FUN_007871e0 =====

undefined8
FUN_007871e0(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 8);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    uVar1 = 0x82;
    uVar2 = 0x164;
LAB_00787250:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      if (*param_3 < 0x974) {
        uVar1 = 100;
        uVar2 = 0x16c;
        goto LAB_00787250;
      }
      uVar1 = FUN_0078d76c(param_2,pbVar3 + 4,param_4,param_5,0,0);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    uVar1 = 1;
    *param_3 = 0x974;
  }
  return uVar1;
}


// ===== 00787294  FUN_00787294 =====

bool FUN_00787294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 8);
  pbVar2 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar2 = (byte *)FUN_0073de14(pbVar2);
  }
  iVar1 = FUN_0078d7a4(pbVar2,param_2,param_3,param_4,param_5,0,0);
  if (iVar1 == 0) {
    FUN_00777eb4(6,0,0x83,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0x17c);
  }
  return iVar1 != 0;
}


// ===== 00787330  FUN_00787330 =====

undefined8 FUN_00787330(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_3 + 8) == 0) {
    uVar1 = *param_4;
    lVar2 = param_4[1];
    puVar4 = (undefined1 *)FUN_0078c954(0x1864);
    if (puVar4 == (undefined1 *)0x0) {
      return 0;
    }
    *puVar4 = 0;
    local_40 = uVar1;
    local_38 = lVar2;
    iVar3 = FUN_0078d604(puVar4 + 4,&local_40);
    if ((iVar3 != 0) && (local_38 == 0)) {
      FUN_007787d8(param_2,&DAT_00d2b120,puVar4);
      return 1;
    }
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xbf);
    FUN_0078cb3c(puVar4);
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xf1);
  }
  return 0;
}


// ===== 00787400  FUN_00787400 =====

undefined8 FUN_00787400(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  pbVar3 = *(byte **)(param_2 + 8);
  pbVar4 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073bf2c(pbVar4);
  }
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 == 0)) ||
      (iVar1 = FUN_0077190c(&puStack_80,6,&DAT_0020b009,9), iVar1 == 0)) ||
     (((iVar1 = FUN_00771098(&local_50,&local_b0,3), iVar1 == 0 ||
       (iVar1 = FUN_00771298(&local_b0,0), iVar1 == 0)) ||
      ((iVar1 = FUN_0078d5e0(&local_b0,pbVar4), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0x104);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00787518  FUN_00787518 =====

bool FUN_00787518(long param_1,long param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = *(byte **)(param_1 + 8);
  pbVar4 = pbVar2 + 4;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073bf2c(pbVar4);
  }
  pbVar3 = *(byte **)(param_2 + 8);
  pbVar2 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar2 = (byte *)FUN_0073bf2c(pbVar2);
  }
  iVar1 = FUN_0073c584(pbVar4,pbVar2);
  return iVar1 != 0;
}


// ===== 0078758c  FUN_0078758c =====

undefined8 FUN_0078758c(void)

{
  return 1;
}


// ===== 00787598  FUN_00787598 =====

undefined8 FUN_00787598(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_40;
  undefined1 *puStack_38;
  
  if (*(long *)(param_3 + 8) == 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    iVar3 = FUN_00772950(param_4,&local_40,0x80000000);
    puVar2 = puStack_38;
    puVar1 = local_40;
    if (iVar3 == 0) {
      uVar5 = 0x8b;
      uVar6 = 0x12e;
    }
    else {
      if (*(long *)(param_4 + 8) == 0) {
        puVar4 = (undefined1 *)FUN_0078c954(0x5ca4);
        if (puVar4 == (undefined1 *)0x0) {
          return 0;
        }
        *puVar4 = 1;
        if ((puVar2 == (undefined1 *)0x20) &&
           (iVar3 = FUN_0078d51c(puVar4 + 4,puVar1,0x20), iVar3 != 0)) {
          uVar7 = *puVar1;
          uVar6 = puVar1[3];
          uVar5 = puVar1[2];
          *(undefined8 *)(puVar4 + 0x5c8c) = puVar1[1];
          *(undefined8 *)(puVar4 + 0x5c84) = uVar7;
          *(undefined8 *)(puVar4 + 0x5c9c) = uVar6;
          *(undefined8 *)(puVar4 + 0x5c94) = uVar5;
          FUN_007787d8(param_2,&DAT_00d2b120,puVar4);
          return 1;
        }
        FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xaf);
        FUN_0078cb3c(puVar4);
        return 0;
      }
      uVar5 = 0x66;
      uVar6 = 0x132;
    }
  }
  else {
    uVar5 = 0x66;
    uVar6 = 0x118;
  }
  FUN_00777eb4(6,0,uVar5,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar6);
  return 0;
}


// ===== 007876e0  FUN_007876e0 =====

undefined8 FUN_007876e0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  pbVar4 = *(byte **)(param_2 + 8);
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
    uVar2 = 0x82;
    uVar3 = 0x13d;
  }
  else {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
    iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_007719cc(&local_50,0), iVar1 != 0)) &&
        (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 != 0)) &&
       (((iVar1 = FUN_0077190c(&puStack_80,6,&DAT_0020b009,9), iVar1 != 0 &&
         (iVar1 = FUN_00771098(&local_50,&local_b0,4), iVar1 != 0)) &&
        ((iVar1 = FUN_0077190c(&local_b0,0x80000000,pbVar4 + 0x5c84,0x20), iVar1 != 0 &&
         (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)))))) {
      return 1;
    }
    uVar2 = 0x69;
    uVar3 = 0x14c;
  }
  FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar3);
  return 0;
}


// ===== 0078780c  FUN_0078780c =====

byte FUN_0078780c(long param_1)

{
  return *(byte **)(param_1 + 8) != (byte *)0x0 & **(byte **)(param_1 + 8);
}


// ===== 00787828  FUN_00787828 =====

undefined1 * FUN_00787828(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined1 *)FUN_0078c954(0x5ca4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 1;
    if ((param_3 == 0x20) && (iVar1 = FUN_0078d51c(puVar2 + 4,param_2,0x20), iVar1 != 0)) {
      uVar5 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      *(undefined8 *)(puVar2 + 0x5c8c) = param_2[1];
      *(undefined8 *)(puVar2 + 0x5c84) = uVar5;
      *(undefined8 *)(puVar2 + 0x5c9c) = uVar4;
      *(undefined8 *)(puVar2 + 0x5c94) = uVar3;
      FUN_007787d8(param_1,&DAT_00d2b120,puVar2);
      puVar2 = (undefined1 *)0x1;
    }
    else {
      FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xaf);
      FUN_0078cb3c(puVar2);
      puVar2 = (undefined1 *)0x0;
    }
  }
  return puVar2;
}


// ===== 007878e4  FUN_007878e4 =====

undefined1 * FUN_007878e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 local_40;
  long local_38;
  
  puVar2 = (undefined1 *)FUN_0078c954(0x1864);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    local_40 = param_2;
    local_38 = param_3;
    iVar1 = FUN_0078d604(puVar2 + 4,&local_40);
    if ((iVar1 == 0) || (local_38 != 0)) {
      FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xbf);
      FUN_0078cb3c(puVar2);
      puVar2 = (undefined1 *)0x0;
    }
    else {
      FUN_007787d8(param_1,&DAT_00d2b120,puVar2);
      puVar2 = (undefined1 *)0x1;
    }
  }
  return puVar2;
}


// ===== 00787990  FUN_00787990 =====

undefined8 FUN_00787990(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  pbVar3 = *(byte **)(param_1 + 8);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    uVar1 = 0x82;
    uVar2 = 0xca;
LAB_007879f0:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 0xd2;
        goto LAB_007879f0;
      }
      uVar4 = *(undefined8 *)(pbVar3 + 0x5c84);
      uVar2 = *(undefined8 *)(pbVar3 + 0x5c9c);
      uVar1 = *(undefined8 *)(pbVar3 + 0x5c94);
      param_2[1] = *(undefined8 *)(pbVar3 + 0x5c8c);
      *param_2 = uVar4;
      param_2[3] = uVar2;
      param_2[2] = uVar1;
    }
    uVar1 = 1;
    *param_3 = 0x20;
  }
  return uVar1;
}


// ===== 00787a2c  FUN_00787a2c =====

undefined8 FUN_00787a2c(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  pbVar3 = *(byte **)(param_1 + 8);
  pbVar4 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073bf2c(pbVar4);
  }
  if (param_2 != 0) {
    if (*param_3 < 0x7a0) {
      FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xe1);
      return 0;
    }
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007709ec(&local_60,param_2,0x7a0);
    iVar1 = FUN_0078d5e0(&local_60,pbVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = FUN_00770d00(&local_60);
    if (lVar2 != 0x7a0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  *param_3 = 0x7a0;
  return 1;
}


// ===== 00787b08  FUN_00787b08 =====

undefined8 FUN_00787b08(void)

{
  return 0xced;
}


// ===== 00787b14  FUN_00787b14 =====

undefined8 FUN_00787b14(void)

{
  return 0x3d00;
}


// ===== 00787b20  FUN_00787b20 =====

void FUN_00787b20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0078cb3c();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 00787b54  FUN_00787b54 =====

undefined8 FUN_00787b54(void)

{
  return 1;
}


// ===== 00787b60  FUN_00787b60 =====

undefined8
FUN_00787b60(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 8);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    uVar1 = 0x82;
    uVar2 = 0x164;
LAB_00787bd0:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      if (*param_3 < 0xced) {
        uVar1 = 100;
        uVar2 = 0x16c;
        goto LAB_00787bd0;
      }
      uVar1 = FUN_0078d554(param_2,pbVar3 + 4,param_4,param_5,0,0);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    uVar1 = 1;
    *param_3 = 0xced;
  }
  return uVar1;
}


// ===== 00787c14  FUN_00787c14 =====

bool FUN_00787c14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 8);
  pbVar2 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar2 = (byte *)FUN_0073bf2c(pbVar2);
  }
  iVar1 = FUN_0078d58c(pbVar2,param_2,param_3,param_4,param_5,0,0);
  if (iVar1 == 0) {
    FUN_00777eb4(6,0,0x83,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0x17c);
  }
  return iVar1 != 0;
}


// ===== 00787cb0  FUN_00787cb0 =====

undefined8 FUN_00787cb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 local_40;
  long local_38;
  
  if (*(long *)(param_3 + 8) == 0) {
    uVar1 = *param_4;
    lVar2 = param_4[1];
    puVar4 = (undefined1 *)FUN_0078c954(0x2064);
    if (puVar4 == (undefined1 *)0x0) {
      return 0;
    }
    *puVar4 = 0;
    local_40 = uVar1;
    local_38 = lVar2;
    iVar3 = FUN_0078d710(puVar4 + 4,&local_40);
    if ((iVar3 != 0) && (local_38 == 0)) {
      FUN_007787d8(param_2,&DAT_00d2b260,puVar4);
      return 1;
    }
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xbf);
    FUN_0078cb3c(puVar4);
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xf1);
  }
  return 0;
}


// ===== 00787d80  FUN_00787d80 =====

undefined8 FUN_00787d80(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  pbVar3 = *(byte **)(param_2 + 8);
  pbVar4 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073cc08(pbVar4);
  }
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 == 0)) ||
      (iVar1 = FUN_0077190c(&puStack_80,6,&DAT_0020b012,9), iVar1 == 0)) ||
     (((iVar1 = FUN_00771098(&local_50,&local_b0,3), iVar1 == 0 ||
       (iVar1 = FUN_00771298(&local_b0,0), iVar1 == 0)) ||
      ((iVar1 = FUN_0078d6ec(&local_b0,pbVar4), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0x104);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00787e98  FUN_00787e98 =====

bool FUN_00787e98(long param_1,long param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = *(byte **)(param_1 + 8);
  pbVar4 = pbVar2 + 4;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073cc08(pbVar4);
  }
  pbVar3 = *(byte **)(param_2 + 8);
  pbVar2 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar2 = (byte *)FUN_0073cc08(pbVar2);
  }
  iVar1 = FUN_0073d260(pbVar4,pbVar2);
  return iVar1 != 0;
}


// ===== 00787f0c  FUN_00787f0c =====

undefined8 FUN_00787f0c(void)

{
  return 1;
}


// ===== 00787f18  FUN_00787f18 =====

undefined8 FUN_00787f18(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_40;
  undefined1 *puStack_38;
  
  if (*(long *)(param_3 + 8) == 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    iVar3 = FUN_00772950(param_4,&local_40,0x80000000);
    puVar2 = puStack_38;
    puVar1 = local_40;
    if (iVar3 == 0) {
      uVar5 = 0x8b;
      uVar6 = 0x12e;
    }
    else {
      if (*(long *)(param_4 + 8) == 0) {
        puVar4 = (undefined1 *)FUN_0078c954(0x7ca4);
        if (puVar4 == (undefined1 *)0x0) {
          return 0;
        }
        *puVar4 = 1;
        if ((puVar2 == (undefined1 *)0x20) &&
           (iVar3 = FUN_0078d628(puVar4 + 4,puVar1,0x20), iVar3 != 0)) {
          uVar7 = *puVar1;
          uVar6 = puVar1[3];
          uVar5 = puVar1[2];
          *(undefined8 *)(puVar4 + 0x7c8c) = puVar1[1];
          *(undefined8 *)(puVar4 + 0x7c84) = uVar7;
          *(undefined8 *)(puVar4 + 0x7c9c) = uVar6;
          *(undefined8 *)(puVar4 + 0x7c94) = uVar5;
          FUN_007787d8(param_2,&DAT_00d2b260,puVar4);
          return 1;
        }
        FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xaf);
        FUN_0078cb3c(puVar4);
        return 0;
      }
      uVar5 = 0x66;
      uVar6 = 0x132;
    }
  }
  else {
    uVar5 = 0x66;
    uVar6 = 0x118;
  }
  FUN_00777eb4(6,0,uVar5,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar6);
  return 0;
}


// ===== 00788060  FUN_00788060 =====

undefined8 FUN_00788060(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  pbVar4 = *(byte **)(param_2 + 8);
  if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
    uVar2 = 0x82;
    uVar3 = 0x13d;
  }
  else {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
    iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
    if ((((iVar1 != 0) && (iVar1 = FUN_007719cc(&local_50,0), iVar1 != 0)) &&
        (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 != 0)) &&
       (((iVar1 = FUN_0077190c(&puStack_80,6,&DAT_0020b012,9), iVar1 != 0 &&
         (iVar1 = FUN_00771098(&local_50,&local_b0,4), iVar1 != 0)) &&
        ((iVar1 = FUN_0077190c(&local_b0,0x80000000,pbVar4 + 0x7c84,0x20), iVar1 != 0 &&
         (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)))))) {
      return 1;
    }
    uVar2 = 0x69;
    uVar3 = 0x14c;
  }
  FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar3);
  return 0;
}


// ===== 0078818c  FUN_0078818c =====

byte FUN_0078818c(long param_1)

{
  return *(byte **)(param_1 + 8) != (byte *)0x0 & **(byte **)(param_1 + 8);
}


// ===== 007881a8  FUN_007881a8 =====

undefined1 * FUN_007881a8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined1 *)FUN_0078c954(0x7ca4);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 1;
    if ((param_3 == 0x20) && (iVar1 = FUN_0078d628(puVar2 + 4,param_2,0x20), iVar1 != 0)) {
      uVar5 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      *(undefined8 *)(puVar2 + 0x7c8c) = param_2[1];
      *(undefined8 *)(puVar2 + 0x7c84) = uVar5;
      *(undefined8 *)(puVar2 + 0x7c9c) = uVar4;
      *(undefined8 *)(puVar2 + 0x7c94) = uVar3;
      FUN_007787d8(param_1,&DAT_00d2b260,puVar2);
      puVar2 = (undefined1 *)0x1;
    }
    else {
      FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xaf);
      FUN_0078cb3c(puVar2);
      puVar2 = (undefined1 *)0x0;
    }
  }
  return puVar2;
}


// ===== 00788264  FUN_00788264 =====

undefined1 * FUN_00788264(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 local_40;
  long local_38;
  
  puVar2 = (undefined1 *)FUN_0078c954(0x2064);
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    local_40 = param_2;
    local_38 = param_3;
    iVar1 = FUN_0078d710(puVar2 + 4,&local_40);
    if ((iVar1 == 0) || (local_38 != 0)) {
      FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xbf);
      FUN_0078cb3c(puVar2);
      puVar2 = (undefined1 *)0x0;
    }
    else {
      FUN_007787d8(param_1,&DAT_00d2b260,puVar2);
      puVar2 = (undefined1 *)0x1;
    }
  }
  return puVar2;
}


// ===== 00788310  FUN_00788310 =====

undefined8 FUN_00788310(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  pbVar3 = *(byte **)(param_1 + 8);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    uVar1 = 0x82;
    uVar2 = 0xca;
LAB_00788370:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 0xd2;
        goto LAB_00788370;
      }
      uVar4 = *(undefined8 *)(pbVar3 + 0x7c84);
      uVar2 = *(undefined8 *)(pbVar3 + 0x7c9c);
      uVar1 = *(undefined8 *)(pbVar3 + 0x7c94);
      param_2[1] = *(undefined8 *)(pbVar3 + 0x7c8c);
      *param_2 = uVar4;
      param_2[3] = uVar2;
      param_2[2] = uVar1;
    }
    uVar1 = 1;
    *param_3 = 0x20;
  }
  return uVar1;
}


// ===== 007883ac  FUN_007883ac =====

undefined8 FUN_007883ac(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  pbVar3 = *(byte **)(param_1 + 8);
  pbVar4 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar4 = (byte *)FUN_0073cc08(pbVar4);
  }
  if (param_2 != 0) {
    if (*param_3 < 0xa20) {
      FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0xe1);
      return 0;
    }
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007709ec(&local_60,param_2,0xa20);
    iVar1 = FUN_0078d6ec(&local_60,pbVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = FUN_00770d00(&local_60);
    if (lVar2 != 0xa20) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  *param_3 = 0xa20;
  return 1;
}


// ===== 00788488  FUN_00788488 =====

undefined8 FUN_00788488(void)

{
  return 0x1213;
}


// ===== 00788494  FUN_00788494 =====

undefined8 FUN_00788494(void)

{
  return 0x5100;
}


// ===== 007884a0  FUN_007884a0 =====

void FUN_007884a0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0078cb3c();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 007884d4  FUN_007884d4 =====

undefined8 FUN_007884d4(void)

{
  return 1;
}


// ===== 007884e0  FUN_007884e0 =====

undefined8
FUN_007884e0(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 8);
  if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
    uVar1 = 0x82;
    uVar2 = 0x164;
LAB_00788554:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      if (*param_3 < 0x1213) {
        uVar1 = 100;
        uVar2 = 0x16c;
        goto LAB_00788554;
      }
      uVar1 = FUN_0078d660(param_2,pbVar3 + 4,param_4,param_5,0,0);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
    }
    uVar1 = 1;
    *param_3 = 0x1213;
  }
  return uVar1;
}


// ===== 00788598  FUN_00788598 =====

bool FUN_00788598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*(long *)(param_1 + 8) + 8);
  pbVar2 = pbVar3 + 4;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 1) != 0)) {
    pbVar2 = (byte *)FUN_0073cc08(pbVar2);
  }
  iVar1 = FUN_0078d698(pbVar2,param_2,param_3,param_4,param_5,0,0);
  if (iVar1 == 0) {
    FUN_00777eb4(6,0,0x83,"../../third_party/boringssl/src/crypto/evp/p_mldsa.cc",0x17c);
  }
  return iVar1 != 0;
}


// ===== 00788634  FUN_00788634 =====

undefined ** FUN_00788634(void)

{
  return &PTR_DAT_00d2b3a0;
}


// ===== 00788644  FUN_00788644 =====

undefined8 FUN_00788644(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_007787d8(param_1,&DAT_00d2b3a8,param_2);
    return 1;
  }
  return 0;
}


// ===== 00788680  FUN_00788680 =====

undefined8 FUN_00788680(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_007789f4();
  if ((iVar1 == 6) || (iVar1 == 0x390)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else {
    FUN_00777eb4(6,0,0x6b,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x364);
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 007886e0  FUN_007886e0 =====

undefined8 * FUN_007886e0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)FUN_0078c954(0x40);
  puVar3 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined4 *)puVar2 = 0x800;
    *(undefined4 *)(puVar2 + 2) = 1;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *(undefined4 *)(puVar2 + 5) = 0xffffffff;
    if (*(int *)*param_1 == 0x390) {
      *(undefined4 *)(puVar2 + 2) = 6;
      if (((param_1[1] != 0) && (lVar4 = *(long *)(param_1[1] + 8), lVar4 != 0)) &&
         (lVar4 = FUN_00793c28(*(undefined4 *)(lVar4 + 200)), lVar4 != 0)) {
        puVar2[3] = lVar4;
        puVar2[4] = lVar4;
        uVar1 = FUN_0072a5a0();
        *(undefined4 *)(puVar2 + 5) = uVar1;
        *(undefined1 *)((long)puVar2 + 0x2c) = 1;
      }
    }
    puVar3 = (undefined8 *)0x1;
    param_1[4] = puVar2;
  }
  return puVar3;
}


// ===== 00788790  FUN_00788790 =====

undefined8 FUN_00788790(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar5 = (undefined8 *)FUN_0078c954(0x40);
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  puVar5[7] = 0;
  puVar12 = puVar5 + 6;
  *puVar12 = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  *(undefined4 *)puVar5 = 0x800;
  puVar5[5] = 0;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 2) = 1;
  puVar5[3] = 0;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 0xffffffff;
  if (*(int *)*param_1 == 0x390) {
    *(undefined4 *)(puVar5 + 2) = 6;
    if (((param_1[1] != 0) && (lVar7 = *(long *)(param_1[1] + 8), lVar7 != 0)) &&
       (lVar7 = FUN_00793c28(*(undefined4 *)(lVar7 + 200)), lVar7 != 0)) {
      puVar5[3] = lVar7;
      puVar5[4] = lVar7;
      uVar4 = FUN_0072a5a0();
      *(undefined4 *)(puVar5 + 5) = uVar4;
      *(undefined1 *)((long)puVar5 + 0x2c) = 1;
    }
  }
  param_1[4] = puVar5;
  puVar14 = *(undefined4 **)(param_2 + 0x20);
  *(undefined4 *)puVar5 = *puVar14;
  if (*(long *)(puVar14 + 2) != 0) {
    lVar7 = FUN_0071a0d4();
    lVar8 = puVar5[1];
    puVar5[1] = lVar7;
    if (lVar8 != 0) {
      FUN_0071a024(lVar8);
      lVar7 = puVar5[1];
    }
    if (lVar7 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(puVar5 + 2) = puVar14[4];
  puVar5[3] = *(undefined8 *)(puVar14 + 6);
  puVar5[4] = *(undefined8 *)(puVar14 + 8);
  *(undefined4 *)(puVar5 + 5) = puVar14[10];
  *(undefined1 *)((long)puVar5 + 0x2c) = *(undefined1 *)(puVar14 + 0xb);
  puVar1 = *(undefined1 **)(puVar14 + 0xc);
  uVar2 = *(ulong *)(puVar14 + 0xe);
  if ((puVar5[7] != 0) && ((ulong)-puVar5[6] <= puVar5[7] - 1)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_0078cb3c();
  *puVar12 = 0;
  puVar5[7] = 0;
  if (uVar2 == 0) {
    return 1;
  }
  puVar6 = (undefined1 *)FUN_0078c954(uVar2);
  *puVar12 = puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    return 0;
  }
  puVar5[7] = uVar2;
  puVar9 = puVar1;
  if (((7 < uVar2) && (puVar6 <= puVar6 + (uVar2 - 1))) &&
     ((puVar1 <= puVar1 + (uVar2 - 1) && (0x1f < (ulong)((long)puVar6 - (long)puVar1))))) {
    if (uVar2 < 0x20) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar2 & 0xffffffffffffffe0;
      puVar5 = (undefined8 *)(puVar6 + 0x10);
      puVar12 = (undefined8 *)(puVar1 + 0x10);
      uVar13 = uVar2 & 0xffffffffffffffe0;
      do {
        puVar3 = puVar12 + -1;
        uVar15 = puVar12[-2];
        uVar17 = puVar12[1];
        uVar16 = *puVar12;
        uVar13 = uVar13 - 0x20;
        puVar12 = puVar12 + 4;
        puVar5[-1] = *puVar3;
        puVar5[-2] = uVar15;
        puVar5[1] = uVar17;
        *puVar5 = uVar16;
        puVar5 = puVar5 + 4;
      } while (uVar13 != 0);
      if (uVar2 == uVar11) {
        return 1;
      }
      if ((uVar2 & 0x18) == 0) {
        puVar6 = puVar6 + uVar11;
        puVar9 = puVar1 + uVar11;
        goto LAB_007888e0;
      }
    }
    uVar13 = uVar2 & 0xfffffffffffffff8;
    puVar5 = (undefined8 *)(puVar6 + uVar11);
    puVar6 = puVar6 + uVar13;
    lVar7 = uVar11 - uVar13;
    puVar12 = (undefined8 *)(puVar1 + uVar11);
    do {
      lVar7 = lVar7 + 8;
      *puVar5 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
    puVar9 = puVar1 + uVar13;
    if (uVar2 == uVar13) {
      return 1;
    }
  }
LAB_007888e0:
  do {
    puVar10 = puVar9 + 1;
    *puVar6 = *puVar9;
    puVar6 = puVar6 + 1;
    puVar9 = puVar10;
  } while (puVar10 != puVar1 + uVar2);
  return 1;
}


// ===== 007889d8  FUN_007889d8 =====

void FUN_007889d8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  if ((*(long *)(lVar2 + 0x38) != 0) &&
     ((ulong)-*(long *)(lVar2 + 0x30) <= *(long *)(lVar2 + 0x38) - 1U)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_0078cb3c();
  lVar1 = *(long *)(lVar2 + 8);
  *(long *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 8) = 0;
  if (lVar1 != 0) {
    FUN_0071a024();
  }
  FUN_0078cb3c(lVar2);
  return;
}


// ===== 00788a5c  FUN_00788a5c =====

long FUN_00788a5c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  if (*(long *)(puVar4 + 2) == 0) {
    lVar2 = FUN_00719ff4();
    lVar3 = *(long *)(puVar4 + 2);
    *(long *)(puVar4 + 2) = lVar2;
    if (lVar3 != 0) {
      FUN_0071a024(lVar3);
      lVar2 = *(long *)(puVar4 + 2);
    }
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_00719a74(lVar2,0x10001);
    if ((int)lVar2 == 0) {
      return lVar2;
    }
  }
  lVar2 = FUN_00742cb0();
  if (lVar2 != 0) {
    iVar1 = FUN_0074648c(lVar2,*puVar4,*(undefined8 *)(puVar4 + 2),0);
    if (iVar1 == 0) {
      FUN_00743408(lVar2);
      lVar2 = 0;
    }
    else {
      FUN_007787d8(param_2,&DAT_00d2b3a8,lVar2);
      lVar2 = 1;
    }
  }
  return lVar2;
}


// ===== 00788b0c  FUN_00788b0c =====

undefined8
FUN_00788b0c(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint local_44;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  iVar1 = FUN_00778a30(*(long *)(param_1 + 8));
  uVar5 = (ulong)iVar1;
  if (param_2 != 0) {
    uVar3 = *param_3;
    if (uVar3 < uVar5) {
      FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x1b5);
      return 0;
    }
    lVar4 = *(long *)(lVar7 + 0x18);
    if (lVar4 == 0) {
      uVar6 = FUN_00743998(uVar6,param_3,param_2,uVar3,param_4,param_5,*(undefined4 *)(lVar7 + 0x10)
                          );
      return uVar6;
    }
    local_44 = 0xaaaaaaaa;
    if (*(int *)(lVar7 + 0x10) == 6) {
      uVar6 = FUN_00743edc(uVar6,param_3,param_2,uVar3,param_4,param_5,lVar4,
                           *(undefined8 *)(lVar7 + 0x20),*(undefined4 *)(lVar7 + 0x28));
      return uVar6;
    }
    if (*(int *)(lVar7 + 0x10) != 1) {
      return 0;
    }
    uVar2 = FUN_0072a6b0(lVar4);
    uVar6 = thunk_FUN_00743c7c(uVar2,param_4,param_5,param_2,&local_44,uVar6);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    uVar5 = (ulong)local_44;
  }
  *param_3 = uVar5;
  return 1;
}


// ===== 00788c58  FUN_00788c58 =====

ulong FUN_00788c58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *local_58;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)(lVar9 + 0x18);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  if (lVar6 != 0) {
    if (*(int *)(lVar9 + 0x10) == 6) {
      uVar4 = FUN_007447e8(uVar8,param_4,param_5,lVar6,*(undefined8 *)(lVar9 + 0x20),
                           *(undefined4 *)(lVar9 + 0x28),param_2,param_3);
      return uVar4;
    }
    if (*(int *)(lVar9 + 0x10) == 1) {
      uVar3 = FUN_0072a6b0(lVar6);
      uVar4 = thunk_FUN_007440e4(uVar3,param_4,param_5,param_2,param_3,uVar8);
      return uVar4;
    }
    uVar7 = 0;
    goto LAB_00788dec;
  }
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00778a30();
  lVar6 = (long)iVar1;
  FUN_0078cb3c(0);
  if (iVar1 == 0) {
    lVar5 = 0;
LAB_00788d6c:
    iVar2 = thunk_FUN_00744338(uVar8,&local_58,lVar5,lVar6,param_2,param_3,
                               *(undefined4 *)(lVar9 + 0x10));
    if (iVar2 == 0) {
LAB_00788dcc:
      uVar7 = 0;
    }
    else {
      if ((local_58 != param_5) || (iVar2 = FUN_0078cd34(param_4,lVar5,param_5), iVar2 != 0)) {
        FUN_00777eb4(4,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x1eb);
        goto LAB_00788dcc;
      }
      uVar7 = 1;
    }
    if ((iVar1 != 0) && ((ulong)-lVar5 <= lVar6 - 1U)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    lVar5 = FUN_0078c954(lVar6);
    if (lVar5 != 0) goto LAB_00788d6c;
    uVar7 = 0;
  }
  FUN_0078cb3c(lVar5);
LAB_00788dec:
  return (ulong)uVar7;
}


// ===== 00788e30  FUN_00788e30 =====

ulong FUN_00788e30(long param_1,void *param_2,size_t *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t __n;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_80;
  int local_74;
  undefined1 *local_70;
  undefined1 *local_68;
  
  lVar8 = *(long *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  iVar3 = FUN_00778a30(*(long *)(param_1 + 8));
  uVar6 = (ulong)iVar3;
  if (param_2 == (void *)0x0) {
    *param_3 = uVar6;
    uVar7 = 1;
    goto LAB_00788f4c;
  }
  if (*param_3 < uVar6) {
    FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x1ff);
    uVar7 = 0;
    goto LAB_00788f4c;
  }
  if (*(long *)(lVar8 + 0x18) == 0) {
    uVar6 = thunk_FUN_00744338(uVar9,param_3,param_2,*param_3,param_4,param_5);
    return uVar6;
  }
  if (*(int *)(lVar8 + 0x10) == 1) {
    __n = FUN_0072a5a0();
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_74 = -0x55555556;
    uVar4 = FUN_0072a6b0(*(undefined8 *)(lVar8 + 0x18));
    iVar5 = FUN_007439d0(&local_68,&local_70,&local_74,uVar4,&DAT_0020b01b,__n);
    puVar2 = local_68;
    iVar1 = local_74;
    if (iVar5 != 0) {
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0078cb3c(0);
      if (iVar3 == 0) {
        lVar8 = 0;
LAB_00788fb0:
        iVar5 = thunk_FUN_00744338(uVar9,&local_80,lVar8,uVar6,param_4,param_5,1);
        if (((iVar5 == 0) || (local_80 != local_70)) ||
           (iVar5 = FUN_0078cd34(lVar8,local_68,(long)local_80 - __n), iVar5 != 0)) {
          uVar7 = 0;
        }
        else {
          if (__n != 0) {
            memcpy(param_2,local_80 + (lVar8 - __n),__n);
          }
          *param_3 = __n;
          uVar7 = 1;
        }
        if ((iVar3 != 0) && ((ulong)-lVar8 <= uVar6 - 1)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      else {
        lVar8 = FUN_0078c954(uVar6);
        if (lVar8 != 0) goto LAB_00788fb0;
        uVar7 = 0;
      }
      FUN_0078cb3c(lVar8);
      if ((iVar1 != 0) && (puVar2 != (undefined1 *)0x0)) {
        FUN_0078cb3c(puVar2);
      }
      goto LAB_00788f4c;
    }
  }
  uVar7 = 0;
LAB_00788f4c:
  return (ulong)uVar7;
}


// ===== 0078906c  FUN_0078906c =====

ulong FUN_0078906c(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  iVar1 = FUN_00778a30(*(long *)(param_1 + 8));
  uVar4 = (ulong)iVar1;
  if (param_2 == 0) {
    *param_3 = uVar4;
    uVar5 = 1;
    goto LAB_007891c4;
  }
  if (*param_3 < uVar4) {
    FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x23a);
    uVar5 = 0;
    goto LAB_007891c4;
  }
  if (*(int *)(lVar7 + 0x10) != 4) {
    uVar4 = FUN_0079479c(uVar6,param_3,param_2,*param_3,param_4,param_5);
    return uVar4;
  }
  FUN_0078cb3c(0);
  if (iVar1 == 0) {
    lVar3 = 0;
LAB_00789154:
    iVar2 = FUN_00793f18(lVar3,uVar4,param_4,param_5,*(undefined8 *)(lVar7 + 0x30),
                         *(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x18),
                         *(undefined8 *)(lVar7 + 0x20));
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = FUN_0079479c(uVar6,param_3,param_2,*param_3,lVar3,uVar4,3);
      uVar5 = (uint)(iVar2 != 0);
    }
    if ((iVar1 != 0) && ((ulong)-lVar3 <= uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    lVar3 = FUN_0078c954(uVar4);
    if (lVar3 != 0) goto LAB_00789154;
    uVar5 = 0;
  }
  FUN_0078cb3c(lVar3);
LAB_007891c4:
  return (ulong)uVar5;
}


// ===== 007891f8  FUN_007891f8 =====

ulong FUN_007891f8(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *local_58;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  iVar1 = FUN_00778a30(*(long *)(param_1 + 8));
  uVar4 = (ulong)iVar1;
  if (param_2 == 0) {
    *param_3 = uVar4;
    uVar5 = 1;
    goto LAB_0078936c;
  }
  if (*param_3 < uVar4) {
    FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x25a);
    uVar5 = 0;
    goto LAB_0078936c;
  }
  if (*(int *)(lVar7 + 0x10) != 4) {
    uVar4 = FUN_00794b6c(uVar6,param_3,param_2,uVar4,param_4,param_5);
    return uVar4;
  }
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0078cb3c(0);
  if (iVar1 == 0) {
    lVar3 = 0;
LAB_007892f4:
    iVar2 = FUN_00794b6c(uVar6,&local_58,lVar3,uVar4,param_4,param_5,3);
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    else {
      iVar2 = FUN_00794354(param_2,param_3,uVar4,lVar3,local_58,*(undefined8 *)(lVar7 + 0x30),
                           *(undefined8 *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x18),
                           *(undefined8 *)(lVar7 + 0x20));
      uVar5 = (uint)(iVar2 != 0);
    }
    if ((iVar1 != 0) && ((ulong)-lVar3 <= uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    lVar3 = FUN_0078c954(uVar4);
    if (lVar3 != 0) goto LAB_007892f4;
    uVar5 = 0;
  }
  FUN_0078cb3c(lVar3);
LAB_0078936c:
  return (ulong)uVar5;
}


// ===== 007893a4  FUN_007893a4 =====

undefined8 FUN_007893a4(undefined8 *param_1,int param_2,uint param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  
  puVar8 = (uint *)param_1[4];
  if (param_2 < 0x1006) {
    if (param_2 < 0x1002) {
      if (param_2 == 1) {
        if ((param_4 == (uint *)0x0) || (puVar8[4] != 3)) {
          if ((char)puVar8[0xb] == '\x01') {
            iVar1 = FUN_0072a6b0(*(undefined8 *)(puVar8 + 6));
            iVar2 = FUN_0072a6b0(param_4);
            if (iVar1 != iVar2) {
              uVar4 = 0x6f;
              uVar5 = 0x2e5;
              goto LAB_007897f0;
            }
          }
LAB_007896ac:
          *(uint **)(puVar8 + 6) = param_4;
          return 1;
        }
        uVar4 = 0x73;
        uVar5 = 0x276;
        goto LAB_007897f0;
      }
      if (param_2 == 2) goto LAB_00789514;
      if (param_2 == 0x1001) {
        if ((param_3 != 6) && (*(int *)*param_1 == 0x390)) {
          uVar4 = 0x6d;
          uVar5 = 0x28f;
          goto LAB_007897f0;
        }
        if ((param_3 < 7) && ((0x5aU >> (ulong)(param_3 & 0x1f) & 1) != 0)) {
          if ((param_3 == 3) && (*(long *)(puVar8 + 6) != 0)) {
            FUN_00777eb4(6,0,0x73,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x276);
          }
          else if (param_3 == 4) {
            if ((*(byte *)(param_1 + 3) & 0xc0) != 0) {
              if (*(long *)(puVar8 + 6) == 0) {
                uVar4 = FUN_0072aac4();
                *(undefined8 *)(puVar8 + 6) = uVar4;
              }
              goto LAB_00789864;
            }
          }
          else if ((param_3 != 6) || ((*(byte *)(param_1 + 3) & 0x18) != 0)) {
LAB_00789864:
            puVar8[4] = param_3;
            return 1;
          }
        }
        uVar4 = 0x6d;
        uVar5 = 0x297;
        goto LAB_007897f0;
      }
    }
    else {
      if (param_2 - 0x1003U < 2) {
        if (puVar8[4] != 6) {
          uVar4 = 0x74;
          uVar5 = 0x2a7;
          goto LAB_007897f0;
        }
        if (param_2 == 0x1004) {
          uVar6 = puVar8[10];
          goto LAB_00789628;
        }
        if ((int)param_3 < 0) {
          if (param_3 < 0xfffffffe) {
            return 0;
          }
          if ((param_3 == 0xffffffff) || ((puVar8[0xb] & 1) == 0)) goto LAB_00789840;
          uVar4 = 0x74;
          uVar5 = 0x2b6;
        }
        else {
          if (((char)puVar8[0xb] != '\x01') ||
             (uVar3 = FUN_0072a5a0(*(undefined8 *)(puVar8 + 6)), uVar3 <= param_3)) {
LAB_00789840:
            puVar8[10] = param_3;
            return 1;
          }
          uVar4 = 0x74;
          uVar5 = 699;
        }
        goto LAB_007897f0;
      }
      if (param_2 == 0x1002) {
        uVar6 = puVar8[4];
LAB_00789628:
        *param_4 = uVar6;
        return 1;
      }
      if (param_2 == 0x1005) {
        if (0xff < (int)param_3) {
          *puVar8 = param_3;
          return 1;
        }
        uVar4 = 0x70;
        uVar5 = 0x2c4;
        goto LAB_007897f0;
      }
    }
  }
  else if (param_2 < 0x1009) {
    if (param_2 - 0x1007U < 2) {
      if (puVar8[4] != 4) {
        uVar4 = 0x73;
        uVar5 = 0x2d4;
        goto LAB_007897f0;
      }
      if (param_2 != 0x1008) goto LAB_007896ac;
LAB_00789514:
      lVar7 = *(long *)(puVar8 + 6);
LAB_00789518:
      *(long *)param_4 = lVar7;
      return 1;
    }
    if (param_2 == 0x1006) {
      if (param_4 == (uint *)0x0) {
        return 0;
      }
      lVar7 = *(long *)(puVar8 + 2);
      *(uint **)(puVar8 + 2) = param_4;
      if (lVar7 == 0) {
        return 1;
      }
      FUN_0071a024();
      return 1;
    }
  }
  else {
    if (param_2 - 0x1009U < 2) {
      if ((puVar8[4] | 2) != 6) {
        uVar4 = 0x71;
        uVar5 = 0x2f4;
        goto LAB_007897f0;
      }
      if (param_2 != 0x100a) {
        if ((char)puVar8[0xb] == '\x01') {
          iVar1 = FUN_0072a6b0(*(undefined8 *)(puVar8 + 8));
          iVar2 = FUN_0072a6b0(param_4);
          if (iVar1 != iVar2) {
            uVar4 = 0x71;
            uVar5 = 0x301;
            goto LAB_007897f0;
          }
        }
        *(uint **)(puVar8 + 8) = param_4;
        return 1;
      }
      lVar7 = *(long *)(puVar8 + 8);
      if (lVar7 != 0) goto LAB_00789518;
      goto LAB_00789514;
    }
    if (param_2 == 0x100b) {
      if (puVar8[4] == 4) {
        uVar4 = *(undefined8 *)param_4;
        uVar5 = *(undefined8 *)(param_4 + 2);
        if ((*(long *)(puVar8 + 0xe) != 0) &&
           ((ulong)-*(long *)(puVar8 + 0xc) <= *(long *)(puVar8 + 0xe) - 1U)) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0078cb3c();
        *(undefined8 *)(puVar8 + 0xc) = uVar4;
        *(undefined8 *)(puVar8 + 0xe) = uVar5;
        return 1;
      }
      uVar4 = 0x73;
      uVar5 = 0x30a;
      goto LAB_007897f0;
    }
    if (param_2 == 0x100c) {
      if (puVar8[4] == 4) {
        uVar4 = *(undefined8 *)(puVar8 + 0xe);
        *(undefined8 *)param_4 = *(undefined8 *)(puVar8 + 0xc);
        *(undefined8 *)(param_4 + 2) = uVar4;
        return 1;
      }
      uVar4 = 0x73;
      uVar5 = 0x316;
      goto LAB_007897f0;
    }
  }
  uVar4 = 0x65;
  uVar5 = 0x31d;
LAB_007897f0:
  FUN_00777eb4(6,0,uVar4,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",uVar5);
  return 0;
}


// ===== 00789884  FUN_00789884 =====

undefined8 FUN_00789884(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) ||
     (*(long *)(piVar3 + 0x1c) == 0)) {
    uVar1 = 0x65;
    uVar2 = 0x39f;
  }
  else {
    if ((*piVar3 == 6) || (*piVar3 == 0x390)) {
      uVar1 = FUN_0077a62c(param_1,0xffffffff,0xffffffff,0x1001,param_2,0);
      return uVar1;
    }
    uVar1 = 0x7d;
    uVar2 = 0x3a4;
  }
  FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",uVar2);
  return 0;
}


// ===== 00789920  FUN_00789920 =====

undefined8 FUN_00789920(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) ||
     (*(long *)(piVar3 + 0x1c) == 0)) {
    uVar1 = 0x65;
    uVar2 = 0x39f;
  }
  else {
    if ((*piVar3 == 6) || (*piVar3 == 0x390)) {
      uVar1 = FUN_0077a62c(param_1,0xffffffff,0x18,0x1003,param_2,0);
      return uVar1;
    }
    uVar1 = 0x7d;
    uVar2 = 0x3a4;
  }
  FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",uVar2);
  return 0;
}


// ===== 007899bc  FUN_007899bc =====

undefined8 FUN_007899bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  int *piVar3;
  
  if (((param_1 == (undefined8 *)0x0) || (piVar3 = (int *)*param_1, piVar3 == (int *)0x0)) ||
     (*(long *)(piVar3 + 0x1c) == 0)) {
    uVar1 = 0x65;
    uVar2 = 0x39f;
  }
  else {
    if ((*piVar3 == 6) || (*piVar3 == 0x390)) {
      uVar1 = FUN_0077a62c(param_1,0xffffffff,0xf8,0x1009,0);
      return uVar1;
    }
    uVar1 = 0x7d;
    uVar2 = 0x3a4;
    in_x5 = param_2;
  }
  FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",uVar2,in_x5);
  return 0;
}


// ===== 00789a58  FUN_00789a58 =====

undefined8 FUN_00789a58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_3,&local_40,5);
  if (((iVar1 == 0) || (puStack_38 != (undefined1 *)0x0)) || (*(long *)(param_3 + 8) != 0)) {
    uVar3 = 0x4c;
  }
  else {
    lVar2 = FUN_0079362c(*param_4,param_4[1]);
    if (lVar2 != 0) {
      FUN_007787d8(param_2,&DAT_00d2b3a8,lVar2);
      return 1;
    }
    uVar3 = 0x52;
  }
  FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",uVar3);
  return 0;
}


// ===== 00789b24  FUN_00789b24 =====

undefined8 FUN_00789b24(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_e0;
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
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if (((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 == 0)) ||
       (iVar1 = FUN_0077190c(&puStack_80,6,&DAT_00d2b3ac,9), iVar1 == 0)) ||
      ((iVar1 = FUN_00771098(&puStack_80,&local_b0,5), iVar1 == 0 ||
       (iVar1 = FUN_00771098(&local_50,&local_e0,3), iVar1 == 0)))) ||
     ((iVar1 = FUN_00771298(&local_e0,0), iVar1 == 0 ||
      ((iVar1 = FUN_0079369c(&local_e0,uVar2), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x3c);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00789c38  FUN_00789c38 =====

bool FUN_00789c38(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_00743974(uVar6);
  uVar4 = FUN_00743974(uVar5);
  iVar2 = FUN_0071ada0(uVar3,uVar4);
  if (iVar2 == 0) {
    uVar3 = FUN_00743980(uVar6);
    uVar4 = FUN_00743980(uVar5);
    iVar2 = FUN_0071ada0(uVar3,uVar4);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00789cbc  FUN_00789cbc =====

ulong FUN_00789cbc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00743974(uVar3);
  if (uVar1 != 0) {
    lVar2 = FUN_00743980(uVar3);
    uVar1 = (ulong)(lVar2 != 0);
  }
  return uVar1;
}


// ===== 00789cfc  FUN_00789cfc =====

undefined8 FUN_00789cfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_3,&local_40,5);
  if (((iVar1 == 0) || (puStack_38 != (undefined1 *)0x0)) || (*(long *)(param_3 + 8) != 0)) {
    uVar3 = 0x87;
  }
  else {
    lVar2 = FUN_0079395c(*param_4,param_4[1]);
    if (lVar2 != 0) {
      FUN_007787d8(param_2,&DAT_00d2b3a8,lVar2);
      return 1;
    }
    uVar3 = 0x8d;
  }
  FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",uVar3);
  return 0;
}


// ===== 00789dc8  FUN_00789dc8 =====

undefined8 FUN_00789dc8(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_e0;
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
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if (((((iVar1 == 0) || (iVar1 = FUN_007719cc(&local_50,0), iVar1 == 0)) ||
       (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 == 0)) ||
      ((iVar1 = FUN_0077190c(&puStack_80,6,&DAT_00d2b3ac,9), iVar1 == 0 ||
       (iVar1 = FUN_00771098(&puStack_80,&local_b0,5), iVar1 == 0)))) ||
     ((iVar1 = FUN_00771098(&local_50,&local_e0,4), iVar1 == 0 ||
      ((iVar1 = FUN_007939cc(&local_e0,uVar2), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_rsa.cc",0x79);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00789edc  FUN_00789edc =====

ulong FUN_00789edc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00743974(uVar3);
  if (uVar1 != 0) {
    lVar2 = FUN_0074398c(uVar3);
    uVar1 = (ulong)(lVar2 != 0);
  }
  return uVar1;
}


// ===== 00789f1c  FUN_00789f1c =====

void FUN_00789f1c(long param_1)

{
  FUN_007439b0(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00789f28  FUN_00789f28 =====

void FUN_00789f28(long param_1)

{
  FUN_007425e8(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00789f34  FUN_00789f34 =====

void FUN_00789f34(long param_1)

{
  FUN_0074389c(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00789f40  FUN_00789f40 =====

void FUN_00789f40(long param_1)

{
  FUN_00743408(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 00789f70  FUN_00789f70 =====

undefined ** FUN_00789f70(void)

{
  return &PTR_DAT_00d2b4e8;
}


// ===== 00789f80  FUN_00789f80 =====

undefined8 FUN_00789f80(void)

{
  return 1;
}


// ===== 00789f8c  FUN_00789f8c =====

bool FUN_00789f8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0078c954(0x41);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    FUN_0078397c();
    *(undefined1 *)(puVar1 + 8) = 1;
    FUN_007787d8(param_2,&DAT_00d2b4f0,puVar1);
  }
  return puVar1 != (undefined8 *)0x0;
}


// ===== 0078a00c  FUN_0078a00c =====

undefined8 FUN_0078a00c(long param_1,long param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = 0x75;
    uVar3 = 0x124;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
    if ((lVar4 == 0) || (*(long *)(*(long *)(param_1 + 0x10) + 8) == 0)) {
      uVar2 = 0x75;
      uVar3 = 0x12d;
    }
    else if ((*(byte *)(lVar4 + 0x40) & 1) == 0) {
      uVar2 = 0x82;
      uVar3 = 0x132;
    }
    else {
      if (param_2 == 0) {
LAB_0078a0f0:
        *param_3 = 0x20;
        return 1;
      }
      if (*param_3 < 0x20) {
        uVar2 = 100;
        uVar3 = 0x138;
      }
      else {
        iVar1 = FUN_00783b20(param_2,lVar4 + 0x20);
        if (iVar1 != 0) goto LAB_0078a0f0;
        uVar2 = 0x86;
        uVar3 = 0x13c;
      }
    }
  }
  FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",uVar3);
  return 0;
}


// ===== 0078a11c  FUN_0078a11c =====

undefined8 FUN_0078a11c(undefined8 param_1,int param_2)

{
  if (param_2 == 3) {
    return 1;
  }
  FUN_00777eb4(6,0,0x65,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",0x14d);
  return 0;
}


// ===== 0078a168  FUN_0078a168 =====

undefined8 FUN_0078a168(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_3 + 8) == 0) {
    if (param_4[1] == 0x20) {
      puVar3 = (undefined8 *)*param_4;
      puVar1 = (undefined8 *)FUN_0078c954(0x41);
      if (puVar1 == (undefined8 *)0x0) {
        return 0;
      }
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      uVar5 = *puVar3;
      uVar4 = puVar3[3];
      uVar2 = puVar3[2];
      puVar1[1] = puVar3[1];
      *puVar1 = uVar5;
      puVar1[3] = uVar4;
      puVar1[2] = uVar2;
      FUN_007787d8(param_2,&DAT_00d2b4f0,puVar1);
      return 1;
    }
    uVar2 = 0x42;
  }
  else {
    uVar2 = 0x93;
  }
  FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",uVar2);
  return 0;
}


// ===== 0078a220  FUN_0078a220 =====

undefined8 FUN_0078a220(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
  iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
  if ((((iVar1 == 0) || (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 == 0)) ||
      (iVar1 = FUN_0077190c(&puStack_80,6,&DAT_00d2b4f4,3), iVar1 == 0)) ||
     (((iVar1 = FUN_00771098(&local_50,&local_b0,3), iVar1 == 0 ||
       (iVar1 = FUN_00771298(&local_b0,0), iVar1 == 0)) ||
      ((iVar1 = FUN_007712e0(&local_b0,uVar2,0x20), iVar1 == 0 ||
       (iVar1 = FUN_00770ae8(param_1), iVar1 == 0)))))) {
    FUN_00777eb4(6,0,0x69,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",0xa9);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 0078a31c  FUN_0078a31c =====

bool FUN_0078a31c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_2 + 8);
  return ((*plVar1 == *plVar2 && plVar1[1] == plVar2[1]) && plVar1[2] == plVar2[2]) &&
         plVar1[3] == plVar2[3];
}


// ===== 0078a350  FUN_0078a350 =====

undefined8 FUN_0078a350(void)

{
  return 1;
}


// ===== 0078a35c  FUN_0078a35c =====

undefined4 FUN_0078a35c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_40;
  undefined1 *puStack_38;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  if (((*(long *)(param_3 + 8) == 0) &&
      (iVar2 = FUN_00772950(param_4,&local_40,4), puVar1 = local_40, iVar2 != 0)) &&
     (*(long *)(param_4 + 8) == 0)) {
    if (puStack_38 == (undefined1 *)0x20) {
      puVar3 = (undefined8 *)FUN_0078c954(0x41);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      *(undefined1 *)(puVar3 + 8) = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      uVar6 = puVar1[1];
      uVar5 = *puVar1;
      uVar4 = puVar1[2];
      puVar3[7] = puVar1[3];
      puVar3[6] = uVar4;
      puVar3[5] = uVar6;
      puVar3[4] = uVar5;
      FUN_007839d4();
      *(undefined1 *)(puVar3 + 8) = 1;
      FUN_007787d8(param_2,&DAT_00d2b4f0,puVar3);
      return 1;
    }
    uVar4 = 0x2f;
  }
  else {
    uVar4 = 0xc0;
  }
  FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",uVar4);
  return 0;
}


// ===== 0078a468  FUN_0078a468 =====

undefined8 FUN_0078a468(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_e0;
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
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  lVar4 = *(long *)(param_2 + 8);
  if ((*(byte *)(lVar4 + 0x40) & 1) == 0) {
    uVar2 = 0x82;
    uVar3 = 0xcc;
  }
  else {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
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
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = &DAT_aaaaaaaaaaaaaaaa;
    iVar1 = FUN_00771098(param_1,&local_50,0x20000010);
    if (((((iVar1 != 0) && (iVar1 = FUN_007719cc(&local_50,0), iVar1 != 0)) &&
         (iVar1 = FUN_00771098(&local_50,&puStack_80,0x20000010), iVar1 != 0)) &&
        ((iVar1 = FUN_0077190c(&puStack_80,6,&DAT_00d2b4f4,3), iVar1 != 0 &&
         (iVar1 = FUN_00771098(&local_50,&local_b0,4), iVar1 != 0)))) &&
       ((iVar1 = FUN_00771098(&local_b0,&local_e0,4), iVar1 != 0 &&
        ((iVar1 = FUN_007712e0(&local_e0,lVar4 + 0x20,0x20), iVar1 != 0 &&
         (iVar1 = FUN_00770ae8(param_1), iVar1 != 0)))))) {
      return 1;
    }
    uVar2 = 0x69;
    uVar3 = 0xdd;
  }
  FUN_00777eb4(6,0,uVar2,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",uVar3);
  return 0;
}


// ===== 0078a5a4  FUN_0078a5a4 =====

undefined1 FUN_0078a5a4(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x40);
}


// ===== 0078a5b4  FUN_0078a5b4 =====

undefined4 FUN_0078a5b4(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0x20) {
    puVar1 = (undefined8 *)FUN_0078c954(0x41);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      uVar4 = param_2[1];
      uVar3 = *param_2;
      uVar2 = param_2[2];
      puVar1[7] = param_2[3];
      puVar1[6] = uVar2;
      puVar1[5] = uVar4;
      puVar1[4] = uVar3;
      FUN_007839d4();
      *(undefined1 *)(puVar1 + 8) = 1;
      FUN_007787d8(param_1,&DAT_00d2b4f0,puVar1);
      return 1;
    }
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",0x2f);
  }
  return 0;
}


// ===== 0078a668  FUN_0078a668 =====

undefined8 * FUN_0078a668(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0x20) {
    puVar1 = (undefined8 *)FUN_0078c954(0x41);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      uVar4 = *param_2;
      uVar3 = param_2[3];
      uVar2 = param_2[2];
      puVar1[1] = param_2[1];
      *puVar1 = uVar4;
      puVar1[3] = uVar3;
      puVar1[2] = uVar2;
      FUN_007787d8(param_1,&DAT_00d2b4f0,puVar1);
      puVar1 = (undefined8 *)0x1;
    }
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",0x42);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 0078a6f8  FUN_0078a6f8 =====

undefined8 FUN_0078a6f8(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar3 + 0x40) & 1) == 0) {
    uVar1 = 0x82;
    uVar2 = 0x56;
LAB_0078a754:
    FUN_00777eb4(6,0,uVar1,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",uVar2);
    uVar1 = 0;
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (*param_3 < 0x20) {
        uVar1 = 100;
        uVar2 = 0x60;
        goto LAB_0078a754;
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      uVar2 = *(undefined8 *)(lVar3 + 0x38);
      uVar1 = *(undefined8 *)(lVar3 + 0x30);
      param_2[1] = *(undefined8 *)(lVar3 + 0x28);
      *param_2 = uVar4;
      param_2[3] = uVar2;
      param_2[2] = uVar1;
    }
    uVar1 = 1;
    *param_3 = 0x20;
  }
  return uVar1;
}


// ===== 0078a788  FUN_0078a788 =====

undefined8 FUN_0078a788(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != (undefined8 *)0x0) {
    if (*param_3 < 0x20) {
      FUN_00777eb4(6,0,100,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",0x72);
      return 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    uVar4 = *puVar1;
    uVar3 = puVar1[3];
    uVar2 = puVar1[2];
    param_2[1] = puVar1[1];
    *param_2 = uVar4;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
  }
  *param_3 = 0x20;
  return 1;
}


// ===== 0078a7f8  FUN_0078a7f8 =====

undefined8 * FUN_0078a7f8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 == 0x20) {
    puVar1 = (undefined8 *)FUN_0078c954(0x41);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar1 + 8) = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      uVar4 = *param_2;
      uVar3 = param_2[3];
      uVar2 = param_2[2];
      puVar1[1] = param_2[1];
      *puVar1 = uVar4;
      puVar1[3] = uVar3;
      puVar1[2] = uVar2;
      FUN_007787d8(param_1,&DAT_00d2b4f0,puVar1);
      puVar1 = (undefined8 *)0x1;
    }
  }
  else {
    FUN_00777eb4(6,0,0x66,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",0x42);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}


// ===== 0078a888  FUN_0078a888 =====

undefined8 FUN_0078a888(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    FUN_00777eb4(6,0,0x78,"../../third_party/boringssl/src/crypto/evp/p_x25519.cc",0x84);
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_0078cf30(*(long *)(param_1 + 8),0x20);
    *param_2 = lVar1;
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = 0x20;
    }
  }
  return uVar2;
}


// ===== 0078a8f0  FUN_0078a8f0 =====

undefined8 FUN_0078a8f0(void)

{
  return 0x20;
}


// ===== 0078a8fc  FUN_0078a8fc =====

undefined8 FUN_0078a8fc(void)

{
  return 0xfd;
}


// ===== 0078a908  FUN_0078a908 =====

void FUN_0078a908(long param_1)

{
  FUN_0078cb3c(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 0078a938  FUN_0078a938 =====

bool FUN_0078a938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,ulong param_6,ulong param_7,ulong param_8,undefined8 param_9,
                 undefined8 param_10)

{
  void *__src;
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong __n;
  void *__dest;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (((param_6 != 0) && (param_7 != 0)) && (1 < param_5)) {
    uVar11 = 0;
    if (param_6 != 0) {
      uVar11 = 0x3fffffff / param_6;
    }
    if (((param_7 <= uVar11) && (param_5 < 0x100000001)) &&
       (((param_5 & param_5 - 1) == 0 &&
        ((0x3f < param_6 * 0x10 || (param_5 >> (param_6 * 0x10 & 0x3f) == 0)))))) {
      __n = param_6 * 0x80;
      uVar11 = 0x4100000;
      if (param_8 != 0) {
        uVar11 = param_8;
      }
      uVar16 = 0;
      if (__n != 0) {
        uVar16 = uVar11 / __n;
      }
      if ((param_7 < uVar16) && (param_5 <= uVar16 + ~param_7)) {
        lVar3 = FUN_0078ca74((param_7 * 2 + param_5 * 2 + 2) * param_6,0x40);
        if (lVar3 == 0) {
          return false;
        }
        lVar6 = param_7 * 2 * param_6;
        lVar12 = lVar6 * 0x40;
        uVar4 = FUN_0072abc4();
        iVar2 = FUN_0078b020(param_1,param_2,param_3,param_4,1,uVar4,lVar12,lVar3);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        else {
          lVar14 = param_6 * 2;
          lVar6 = lVar3 + lVar6 * 0x40;
          uVar11 = 0;
          puVar15 = (undefined8 *)(lVar3 + 0x20);
          do {
            __dest = (void *)(lVar6 + param_6 * 0x80);
            __src = (void *)(lVar3 + uVar11 * lVar14 * 0x40);
            memcpy(__dest,__src,__n);
            lVar13 = param_5 - 1;
            lVar10 = lVar3 + param_6 * (param_7 * 0x80 + 0x100);
            do {
              FUN_0078ac7c(lVar10,__dest,param_6);
              lVar13 = lVar13 + -1;
              __dest = (void *)((long)__dest + __n);
              lVar10 = lVar10 + __n;
            } while (lVar13 != 0);
            FUN_0078ac7c(__src,lVar6 + param_6 * 0x80 + lVar14 * (param_5 - 1) * 0x40,param_6);
            uVar16 = 0;
            do {
              if (lVar14 != 0) {
                puVar7 = (undefined8 *)
                         (lVar3 + 0x20 +
                         param_6 * (param_7 * 0x80 + 0x80 +
                                   (ulong)(*(uint *)((long)__src + param_6 * 0x80 + -0x40) &
                                          (int)param_5 - 1U) * 0x80));
                puVar8 = puVar15;
                puVar9 = (undefined8 *)(lVar3 + 0x20 + param_7 * param_6 * 0x80);
                lVar10 = lVar14;
                do {
                  uVar5 = puVar8[-3];
                  uVar4 = puVar8[-4];
                  uVar18 = puVar7[-3];
                  uVar17 = puVar7[-4];
                  lVar10 = lVar10 + -1;
                  puVar9[-3] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                                  (byte)((ulong)uVar5 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                           (byte)((ulong)uVar5 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                                    (byte)((ulong)uVar5 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar18 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar5 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar18 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                           (byte)((ulong)uVar5 >> 8),
                                                           (byte)uVar18 ^ (byte)uVar5)))))));
                  puVar9[-4] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                                  (byte)((ulong)uVar4 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                           (byte)((ulong)uVar4 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                                    (byte)((ulong)uVar4 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar17 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar4 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar17 >> 0x10) ^ (byte)((ulong)uVar4 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar17 >> 8) ^
                                                           (byte)((ulong)uVar4 >> 8),
                                                           (byte)uVar17 ^ (byte)uVar4)))))));
                  uVar5 = puVar8[-1];
                  uVar4 = puVar8[-2];
                  uVar18 = puVar7[-1];
                  uVar17 = puVar7[-2];
                  puVar9[-1] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                                  (byte)((ulong)uVar5 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                           (byte)((ulong)uVar5 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                                    (byte)((ulong)uVar5 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar18 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar5 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar18 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                           (byte)((ulong)uVar5 >> 8),
                                                           (byte)uVar18 ^ (byte)uVar5)))))));
                  puVar9[-2] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38)
                                        ,CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                                  (byte)((ulong)uVar4 >> 0x30),
                                                  CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                           (byte)((ulong)uVar4 >> 0x28),
                                                           CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                                    (byte)((ulong)uVar4 >> 0x20),
                                                                    CONCAT13((byte)((ulong)uVar17 >>
                                                                                   0x18) ^
                                                                             (byte)((ulong)uVar4 >>
                                                                                   0x18),
                                                                             CONCAT12((byte)((ulong)
                                                  uVar17 >> 0x10) ^ (byte)((ulong)uVar4 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar17 >> 8) ^
                                                           (byte)((ulong)uVar4 >> 8),
                                                           (byte)uVar17 ^ (byte)uVar4)))))));
                  uVar5 = puVar8[1];
                  uVar4 = *puVar8;
                  uVar18 = puVar7[1];
                  uVar17 = *puVar7;
                  puVar9[1] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                                (byte)((ulong)uVar5 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                         (byte)((ulong)uVar5 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                                  (byte)((ulong)uVar5 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar18 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar5 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar18 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                           (byte)((ulong)uVar5 >> 8),
                                                           (byte)uVar18 ^ (byte)uVar5)))))));
                  *puVar9 = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                                     CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                              (byte)((ulong)uVar4 >> 0x30),
                                              CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                       (byte)((ulong)uVar4 >> 0x28),
                                                       CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                                (byte)((ulong)uVar4 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar17 >>
                                                                               0x18) ^
                                                                         (byte)((ulong)uVar4 >> 0x18
                                                                               ),CONCAT12((byte)((
                                                  ulong)uVar17 >> 0x10) ^
                                                  (byte)((ulong)uVar4 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar17 >> 8) ^
                                                           (byte)((ulong)uVar4 >> 8),
                                                           (byte)uVar17 ^ (byte)uVar4)))))));
                  uVar5 = puVar8[3];
                  uVar4 = puVar8[2];
                  uVar18 = puVar7[3];
                  uVar17 = puVar7[2];
                  puVar8 = puVar8 + 8;
                  puVar7 = puVar7 + 8;
                  puVar9[3] = CONCAT17((byte)((ulong)uVar18 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar18 >> 0x30) ^
                                                (byte)((ulong)uVar5 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar18 >> 0x28) ^
                                                         (byte)((ulong)uVar5 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar18 >> 0x20) ^
                                                                  (byte)((ulong)uVar5 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar18 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar5 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar18 >> 0x10) ^ (byte)((ulong)uVar5 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar18 >> 8) ^
                                                           (byte)((ulong)uVar5 >> 8),
                                                           (byte)uVar18 ^ (byte)uVar5)))))));
                  puVar9[2] = CONCAT17((byte)((ulong)uVar17 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                                       CONCAT16((byte)((ulong)uVar17 >> 0x30) ^
                                                (byte)((ulong)uVar4 >> 0x30),
                                                CONCAT15((byte)((ulong)uVar17 >> 0x28) ^
                                                         (byte)((ulong)uVar4 >> 0x28),
                                                         CONCAT14((byte)((ulong)uVar17 >> 0x20) ^
                                                                  (byte)((ulong)uVar4 >> 0x20),
                                                                  CONCAT13((byte)((ulong)uVar17 >>
                                                                                 0x18) ^
                                                                           (byte)((ulong)uVar4 >>
                                                                                 0x18),
                                                                           CONCAT12((byte)((ulong)
                                                  uVar17 >> 0x10) ^ (byte)((ulong)uVar4 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar17 >> 8) ^
                                                           (byte)((ulong)uVar4 >> 8),
                                                           (byte)uVar17 ^ (byte)uVar4)))))));
                  puVar9 = puVar9 + 8;
                } while (lVar10 != 0);
              }
              FUN_0078ac7c(__src,lVar6,param_6);
              uVar16 = uVar16 + 1;
            } while (uVar16 != param_5);
            puVar15 = puVar15 + param_6 * 0x10;
            uVar11 = uVar11 + 1;
          } while (uVar11 != param_7);
          uVar4 = FUN_0072abc4();
          iVar2 = FUN_0078b020(param_1,param_2,lVar3,lVar12,1,uVar4,param_10,param_9);
          bVar1 = iVar2 != 0;
        }
        FUN_0078cb3c(lVar3);
        return bVar1;
      }
      uVar4 = 0x84;
      uVar5 = 0xaf;
      goto LAB_0078a9dc;
    }
  }
  uVar4 = 0x85;
  uVar5 = 0xa3;
LAB_0078a9dc:
  FUN_00777eb4(6,0,uVar4,"../../third_party/boringssl/src/crypto/evp/scrypt.cc",uVar5);
  return false;
}


// ===== 0078ac7c  FUN_0078ac7c =====

void FUN_0078ac7c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar3 = param_2 + param_3 * 0x80;
  uStack_98 = *(ulong *)(lVar3 + -0x38);
  local_a0 = *(undefined8 *)(lVar3 + -0x40);
  local_88 = *(ulong *)(lVar3 + -0x28);
  local_90 = *(undefined8 *)(lVar3 + -0x30);
  uStack_78 = *(undefined8 *)(lVar3 + -0x18);
  local_80 = *(undefined8 *)(lVar3 + -0x20);
  local_68 = *(undefined8 *)(lVar3 + -8);
  local_70 = *(undefined8 *)(lVar3 + -0x10);
  if (param_3 << 1 != 0) {
    uVar18 = 0;
    do {
      FUN_0078af1c(&local_a0,&local_a0,param_2 + uVar18 * 0x40);
      uVar21 = local_88 & 0xffffffff;
      uVar10 = 10;
      uVar12 = uStack_98 & 0xffffffff;
      uVar15 = (uint)local_80;
      uVar14 = (uint)local_a0;
      uVar20 = local_a0._4_4_;
      uVar19 = (uint)local_70;
      uVar24 = local_70._4_4_;
      uVar22 = (uint)uStack_78;
      uVar16 = (uint)local_90;
      uVar8 = local_90._4_4_;
      uVar7 = local_80._4_4_;
      uVar17 = (uint)local_68;
      uVar23 = local_68._4_4_;
      uVar9 = local_88._4_4_;
      uVar13 = uStack_78._4_4_;
      uVar11 = uStack_98._4_4_;
      do {
        uVar10 = uVar10 - 2;
        uVar16 = uVar16 ^ (uVar19 + uVar14 >> 0x19 | (uVar19 + uVar14) * 0x80);
        uVar1 = (uint)uVar21 + uVar22;
        uVar7 = uVar7 ^ (uVar20 + uVar8 >> 0x19 | (uVar20 + uVar8) * 0x80);
        uVar17 = uVar17 ^ (uVar1 >> 0x19 | uVar1 * 0x80);
        uVar11 = uVar11 ^ (uVar13 + uVar23 >> 0x19 | (uVar13 + uVar23) * 0x80);
        uVar15 = uVar15 ^ (uVar16 + uVar14 >> 0x17 | (uVar16 + uVar14) * 0x200);
        uVar24 = uVar24 ^ (uVar7 + uVar8 >> 0x17 | (uVar7 + uVar8) * 0x200);
        uVar5 = (uint)uVar12 ^ (uVar17 + uVar22 >> 0x17 | (uVar17 + uVar22) * 0x200);
        uVar9 = uVar9 ^ (uVar11 + uVar23 >> 0x17 | (uVar11 + uVar23) * 0x200);
        uVar19 = uVar19 ^ (uVar15 + uVar16 >> 0x13 | (uVar15 + uVar16) * 0x2000);
        uVar20 = uVar20 ^ (uVar24 + uVar7 >> 0x13 | (uVar24 + uVar7) * 0x2000);
        uVar6 = (uint)uVar21 ^ (uVar5 + uVar17 >> 0x13 | (uVar5 + uVar17) * 0x2000);
        uVar13 = uVar13 ^ (uVar9 + uVar11 >> 0x13 | (uVar9 + uVar11) * 0x2000);
        uVar1 = uVar19 + uVar15;
        uVar2 = uVar20 + uVar24;
        uVar14 = uVar14 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar1 = uVar6 + uVar5;
        uVar8 = uVar8 ^ (uVar2 >> 0xe | uVar2 * 0x40000);
        uVar2 = uVar13 + uVar9;
        uVar22 = uVar22 ^ (uVar1 >> 0xe | uVar1 * 0x40000);
        uVar23 = uVar23 ^ (uVar2 >> 0xe | uVar2 * 0x40000);
        uVar20 = uVar20 ^ (uVar11 + uVar14 >> 0x19 | (uVar11 + uVar14) * 0x80);
        uVar6 = uVar6 ^ (uVar8 + uVar16 >> 0x19 | (uVar8 + uVar16) * 0x80);
        uVar21 = (ulong)uVar6;
        uVar13 = uVar13 ^ (uVar22 + uVar7 >> 0x19 | (uVar22 + uVar7) * 0x80);
        uVar19 = uVar19 ^ (uVar23 + uVar17 >> 0x19 | (uVar23 + uVar17) * 0x80);
        uVar5 = uVar5 ^ (uVar20 + uVar14 >> 0x17 | (uVar20 + uVar14) * 0x200);
        uVar12 = (ulong)uVar5;
        uVar9 = uVar9 ^ (uVar6 + uVar8 >> 0x17 | (uVar6 + uVar8) * 0x200);
        uVar15 = uVar15 ^ (uVar13 + uVar22 >> 0x17 | (uVar13 + uVar22) * 0x200);
        uVar24 = uVar24 ^ (uVar19 + uVar23 >> 0x17 | (uVar19 + uVar23) * 0x200);
        uVar11 = uVar11 ^ (uVar5 + uVar20 >> 0x13 | (uVar5 + uVar20) * 0x2000);
        uVar16 = uVar16 ^ (uVar9 + uVar6 >> 0x13 | (uVar9 + uVar6) * 0x2000);
        uVar7 = uVar7 ^ (uVar15 + uVar13 >> 0x13 | (uVar15 + uVar13) * 0x2000);
        uVar17 = uVar17 ^ (uVar24 + uVar19 >> 0x13 | (uVar24 + uVar19) * 0x2000);
        uVar14 = uVar14 ^ (uVar11 + uVar5 >> 0xe | (uVar11 + uVar5) * 0x40000);
        uVar8 = uVar8 ^ (uVar16 + uVar9 >> 0xe | (uVar16 + uVar9) * 0x40000);
        uVar22 = uVar22 ^ (uVar7 + uVar15 >> 0xe | (uVar7 + uVar15) * 0x40000);
        uVar23 = uVar23 ^ (uVar17 + uVar24 >> 0xe | (uVar17 + uVar24) * 0x40000);
      } while (2 < uVar10);
      uVar21 = uVar18 & 1;
      local_a0 = CONCAT44(uVar20 + local_a0._4_4_,uVar14 + (uint)local_a0);
      uStack_98 = CONCAT44(uVar11 + uStack_98._4_4_,uVar5 + (int)uStack_98);
      local_90 = CONCAT44(uVar8 + local_90._4_4_,uVar16 + (uint)local_90);
      local_88 = CONCAT44(uVar9 + local_88._4_4_,uVar6 + (int)local_88);
      local_80 = CONCAT44(uVar7 + local_80._4_4_,uVar15 + (uint)local_80);
      local_70 = CONCAT44(uVar24 + local_70._4_4_,uVar19 + (uint)local_70);
      uVar12 = uVar18 >> 1;
      local_68 = CONCAT44(uVar23 + local_68._4_4_,uVar17 + (uint)local_68);
      uVar18 = uVar18 + 1;
      lVar3 = param_3;
      if (uVar21 == 0) {
        lVar3 = 0;
      }
      puVar4 = (undefined8 *)(param_1 + uVar12 * 0x40 + lVar3 * 0x40);
      uStack_78 = CONCAT44(uVar13 + uStack_78._4_4_,uVar22 + (uint)uStack_78);
      puVar4[5] = uStack_78;
      puVar4[4] = local_80;
      puVar4[7] = local_68;
      puVar4[6] = local_70;
      puVar4[1] = uStack_98;
      *puVar4 = local_a0;
      puVar4[3] = local_88;
      puVar4[2] = local_90;
    } while (uVar18 != param_3 << 1);
  }
  return;
}


// ===== 0078af1c  FUN_0078af1c =====

void FUN_0078af1c(uint *param_1,uint *param_2,uint *param_3)

{
  *param_1 = *param_3 ^ *param_2;
  param_1[1] = param_3[1] ^ param_2[1];
  param_1[2] = param_3[2] ^ param_2[2];
  param_1[3] = param_3[3] ^ param_2[3];
  param_1[4] = param_3[4] ^ param_2[4];
  param_1[5] = param_3[5] ^ param_2[5];
  param_1[6] = param_3[6] ^ param_2[6];
  param_1[7] = param_3[7] ^ param_2[7];
  param_1[8] = param_3[8] ^ param_2[8];
  param_1[9] = param_3[9] ^ param_2[9];
  param_1[10] = param_3[10] ^ param_2[10];
  param_1[0xb] = param_3[0xb] ^ param_2[0xb];
  param_1[0xc] = param_3[0xc] ^ param_2[0xc];
  param_1[0xd] = param_3[0xd] ^ param_2[0xd];
  param_1[0xe] = param_3[0xe] ^ param_2[0xe];
  param_1[0xf] = param_3[0xf] ^ param_2[0xf];
  return;
}


// ===== 0078b020  FUN_0078b020 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0078b020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5,undefined8 param_6,ulong param_7,void *param_8)

{
  ulong __n;
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined1 **ppuVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  byte *pbVar26;
  ulong uVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 *puVar31;
  undefined8 uVar32;
  undefined1 *puVar33;
  undefined4 local_374;
  undefined1 *local_370 [7];
  undefined1 *puStack_338;
  undefined1 auStack_330 [704];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  memset(auStack_330,0xaa,0x2c0);
  FUN_0073a36c(auStack_330);
  iVar17 = FUN_0073a394(auStack_330,param_1,param_2,param_6,0);
  if (iVar17 == 0) {
LAB_0078b2d0:
    bVar16 = false;
  }
  else {
    uVar19 = FUN_0072a5a0(param_6);
    uVar14 = _UNK_001f3918;
    uVar13 = _DAT_001f3910;
    if (param_7 != 0) {
      uVar6 = (ulong)_UNK_001f3918 >> 8;
      uVar7 = (ulong)_UNK_001f3918 >> 0x10;
      uVar8 = (ulong)_UNK_001f3918 >> 0x18;
      uVar9 = (ulong)_UNK_001f3918 >> 0x20;
      uVar10 = (ulong)_UNK_001f3918 >> 0x28;
      uVar11 = (ulong)_UNK_001f3918 >> 0x30;
      uVar12 = (ulong)_UNK_001f3918 >> 0x38;
      iVar17 = 1;
      do {
        auVar30._4_4_ = iVar17;
        auVar30._0_4_ = iVar17;
        auVar30._8_4_ = iVar17;
        auVar30._12_4_ = iVar17;
        local_370[1] = &DAT_aaaaaaaaaaaaaaaa;
        local_370[0] = &DAT_aaaaaaaaaaaaaaaa;
        local_370[3] = &DAT_aaaaaaaaaaaaaaaa;
        local_370[2] = &DAT_aaaaaaaaaaaaaaaa;
        __n = uVar19;
        if (param_7 <= uVar19) {
          __n = param_7;
        }
        auVar3[8] = (char)uVar14;
        auVar3._0_8_ = uVar13;
        auVar3[9] = (char)uVar6;
        auVar3[10] = (char)uVar7;
        auVar3[0xb] = (char)uVar8;
        auVar3[0xc] = (char)uVar9;
        auVar3[0xd] = (char)uVar10;
        auVar3[0xe] = (char)uVar11;
        auVar3[0xf] = (char)uVar12;
        auVar30 = NEON_ushl(auVar30,auVar3,4);
        local_370[5] = &DAT_aaaaaaaaaaaaaaaa;
        local_370[4] = &DAT_aaaaaaaaaaaaaaaa;
        puStack_338 = &DAT_aaaaaaaaaaaaaaaa;
        local_370[6] = &DAT_aaaaaaaaaaaaaaaa;
        local_374 = CONCAT13(auVar30[0xc],CONCAT12(auVar30[8],CONCAT11(auVar30[4],auVar30[0])));
        iVar18 = FUN_0073a394(auStack_330,0,0,0,0);
        if ((((iVar18 == 0) || (iVar18 = FUN_0073a6a4(auStack_330,param_3,param_4), iVar18 == 0)) ||
            (iVar18 = FUN_0073a6a4(auStack_330,&local_374,4), iVar18 == 0)) ||
           (iVar18 = FUN_0073a6d0(auStack_330,local_370,0), iVar18 == 0)) goto LAB_0078b2d0;
        if (uVar19 != 0) {
          memcpy(param_8,local_370,__n);
        }
        if (1 < param_5) {
          uVar28 = 1;
          uVar1 = __n;
          if (__n < 2) {
            uVar1 = 1;
          }
          do {
            iVar18 = FUN_0073a394(auStack_330,0,0,0,0);
            if (((iVar18 == 0) || (iVar18 = FUN_0073a6a4(auStack_330,local_370,uVar19), iVar18 == 0)
                ) || (iVar18 = FUN_0073a6d0(auStack_330,local_370,0), iVar18 == 0))
            goto LAB_0078b2d0;
            if (uVar19 != 0) {
              if (uVar1 - 0x41 < 0xffffffffffffffc0) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(0x5512,0x78b324);
                (*pcVar15)();
              }
              if (__n < 8) {
                uVar24 = 0;
              }
              else {
                if (__n < 0x20) {
                  uVar27 = 0;
                }
                else {
                  pbVar22 = (byte *)((long)param_8 + 0x10);
                  uVar24 = uVar1 & 0x60;
                  ppuVar20 = local_370 + 2;
                  do {
                    uVar32 = *(undefined8 *)(pbVar22 + 8);
                    uVar29 = *(undefined8 *)pbVar22;
                    uVar24 = uVar24 - 0x20;
                    puVar33 = ppuVar20[-1];
                    puVar31 = ppuVar20[-2];
                    puVar5 = ppuVar20[1];
                    puVar4 = *ppuVar20;
                    ppuVar20 = ppuVar20 + 4;
                    *pbVar22 = pbVar22[-8] ^ (byte)puVar33;
                    pbVar22[1] = pbVar22[-7] ^ (byte)((ulong)puVar33 >> 8);
                    pbVar22[2] = pbVar22[-6] ^ (byte)((ulong)puVar33 >> 0x10);
                    pbVar22[3] = pbVar22[-5] ^ (byte)((ulong)puVar33 >> 0x18);
                    pbVar22[4] = pbVar22[-4] ^ (byte)((ulong)puVar33 >> 0x20);
                    pbVar22[5] = pbVar22[-3] ^ (byte)((ulong)puVar33 >> 0x28);
                    pbVar22[6] = pbVar22[-2] ^ (byte)((ulong)puVar33 >> 0x30);
                    pbVar22[7] = pbVar22[-1] ^ (byte)((ulong)puVar33 >> 0x38);
                    pbVar22[-0x10] = pbVar22[-0x10] ^ (byte)puVar31;
                    pbVar22[-0xf] = pbVar22[-0xf] ^ (byte)((ulong)puVar31 >> 8);
                    pbVar22[-0xe] = pbVar22[-0xe] ^ (byte)((ulong)puVar31 >> 0x10);
                    pbVar22[-0xd] = pbVar22[-0xd] ^ (byte)((ulong)puVar31 >> 0x18);
                    pbVar22[-0xc] = pbVar22[-0xc] ^ (byte)((ulong)puVar31 >> 0x20);
                    pbVar22[-0xb] = pbVar22[-0xb] ^ (byte)((ulong)puVar31 >> 0x28);
                    pbVar22[-10] = pbVar22[-10] ^ (byte)((ulong)puVar31 >> 0x30);
                    pbVar22[-9] = pbVar22[-9] ^ (byte)((ulong)puVar31 >> 0x38);
                    *(ulong *)(pbVar22 + 8) =
                         CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)puVar5 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                           (byte)((ulong)puVar5 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                    (byte)((ulong)puVar5 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                             (byte)((ulong)puVar5 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar32 >> 0x18)
                                                                      ^ (byte)((ulong)puVar5 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar32
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)puVar5
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar32 >> 8) ^ (byte)((ulong)puVar5 >> 8),
                                                  (byte)uVar32 ^ (byte)puVar5)))))));
                    *(ulong *)pbVar22 =
                         CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)puVar4 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                           (byte)((ulong)puVar4 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                    (byte)((ulong)puVar4 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                             (byte)((ulong)puVar4 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar29 >> 0x18)
                                                                      ^ (byte)((ulong)puVar4 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar29
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)puVar4
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar29 >> 8) ^ (byte)((ulong)puVar4 >> 8),
                                                  (byte)uVar29 ^ (byte)puVar4)))))));
                    pbVar22 = pbVar22 + 0x20;
                  } while (uVar24 != 0);
                  if (__n == (uVar1 & 0x60)) goto LAB_0078b198;
                  uVar27 = uVar1 & 0x60;
                  uVar24 = uVar1 & 0x60;
                  if ((uVar1 & 0x18) == 0) goto LAB_0078b2a4;
                }
                lVar21 = uVar27 - (uVar1 & 0x78);
                puVar23 = (undefined8 *)((long)param_8 + uVar27);
                puVar25 = (undefined8 *)((long)local_370 + uVar27);
                do {
                  uVar29 = *puVar25;
                  uVar32 = *puVar23;
                  lVar21 = lVar21 + 8;
                  *puVar23 = CONCAT17((byte)((ulong)uVar32 >> 0x38) ^ (byte)((ulong)uVar29 >> 0x38),
                                      CONCAT16((byte)((ulong)uVar32 >> 0x30) ^
                                               (byte)((ulong)uVar29 >> 0x30),
                                               CONCAT15((byte)((ulong)uVar32 >> 0x28) ^
                                                        (byte)((ulong)uVar29 >> 0x28),
                                                        CONCAT14((byte)((ulong)uVar32 >> 0x20) ^
                                                                 (byte)((ulong)uVar29 >> 0x20),
                                                                 CONCAT13((byte)((ulong)uVar32 >>
                                                                                0x18) ^
                                                                          (byte)((ulong)uVar29 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((ulong)
                                                  uVar32 >> 0x10) ^ (byte)((ulong)uVar29 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar32 >> 8) ^
                                                           (byte)((ulong)uVar29 >> 8),
                                                           (byte)uVar32 ^ (byte)uVar29)))))));
                  puVar23 = puVar23 + 1;
                  puVar25 = puVar25 + 1;
                } while (lVar21 != 0);
                uVar24 = uVar1 & 0x78;
                if (__n == (uVar1 & 0x78)) goto LAB_0078b198;
              }
LAB_0078b2a4:
              lVar21 = uVar1 - uVar24;
              pbVar22 = (byte *)((long)param_8 + uVar24);
              pbVar26 = (byte *)((long)local_370 + uVar24);
              do {
                lVar21 = lVar21 + -1;
                *pbVar22 = *pbVar22 ^ *pbVar26;
                pbVar22 = pbVar22 + 1;
                pbVar26 = pbVar26 + 1;
              } while (lVar21 != 0);
            }
LAB_0078b198:
            uVar28 = uVar28 + 1;
          } while (uVar28 != param_5);
        }
        param_7 = param_7 - __n;
        param_8 = (void *)((long)param_8 + __n);
        iVar17 = iVar17 + 1;
      } while (param_7 != 0);
    }
    bVar16 = param_5 != 0;
  }
  FUN_0073a7d8(auStack_330);
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar16;
}


// ===== 0078b328  FUN_0078b328 =====

undefined8 FUN_0078b328(long *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar4 = (ulong)param_2;
  if (*param_1 == 0) {
    lVar1 = FUN_00795214();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_00795280();
  if (uVar2 <= uVar4) {
    lVar1 = (uVar4 - uVar2) + 1;
    do {
      lVar3 = FUN_00795868(*param_1,0);
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  FUN_00795308(*param_1,uVar4,param_3);
  return 1;
}


// ===== 0078b3bc  FUN_0078b3bc =====

undefined8 FUN_0078b3bc(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((-1 < (int)param_2) && (*param_1 != 0)) {
    uVar1 = FUN_00795280();
    if (param_2 < uVar1) {
      uVar2 = FUN_007952e0(*param_1,(ulong)param_2);
      return uVar2;
    }
  }
  return 0;
}


// ===== 0078b418  FUN_0078b418 =====

void FUN_0078b418(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0078b424  FUN_0078b424 =====

void FUN_0078b424(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  
  if (*param_2 != 0) {
    iVar7 = (int)*(undefined8 *)(param_1 + 0x48);
    if (iVar7 != 0) {
      iVar8 = 0;
      plVar9 = (long *)(param_1 + 0x38);
      do {
        lVar5 = *plVar9;
        if (*(long *)(lVar5 + 0x10) != 0) {
          uVar3 = 0;
          uVar1 = iVar8 + (uint)*(byte *)(param_1 + 0x4c);
          uVar6 = (ulong)uVar1;
          if ((*param_2 != 0) && (-1 < (int)uVar1)) {
            uVar2 = FUN_00795280(*param_2,0);
            if (uVar6 < uVar2) {
              uVar3 = FUN_007952e0(*param_2,uVar6);
            }
            else {
              uVar3 = 0;
            }
          }
          puVar4 = (undefined8 *)*plVar9;
          (*(code *)puVar4[2])(0,uVar3,0,uVar6,*puVar4,puVar4[1]);
          lVar5 = *plVar9;
        }
        iVar8 = iVar8 + 1;
        plVar9 = (long *)(lVar5 + 0x18);
      } while (iVar7 != iVar8);
    }
    FUN_00795334(*param_2);
    *param_2 = 0;
  }
  return;
}


// ===== 0078b504  FUN_0078b504 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0078b504(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_001f3920;
  param_1[1] = _UNK_001f3928;
  *param_1 = uVar1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return 1;
}


// ===== 0078b530  FUN_0078b530 =====

undefined8 FUN_0078b530(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong __n;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar1 = (int)param_3 * 8;
    uVar3 = *(uint *)(param_1 + 0x58);
    uVar6 = (ulong)uVar3;
    *(uint *)(param_1 + 0x10) = uVar2 + uVar1;
    *(uint *)(param_1 + 0x14) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar2,uVar1);
    if (uVar3 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar6 < 0x40)) {
        memcpy((void *)(param_1 + uVar6 + 0x18),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      if (0x40 < uVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x78b65c);
        (*pcVar4)();
      }
      __n = 0x40 - uVar6;
      if (uVar3 != 0x40) {
        memcpy((void *)(param_1 + 0x18 + uVar6),param_2,__n);
      }
      FUN_0078b758(param_1,param_1 + 0x18,1);
      bVar5 = param_3 < __n;
      param_3 = param_3 - __n;
      if (bVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_2 = (void *)((long)param_2 + __n);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (param_3 >> 6 != 0) {
      FUN_0078b758(param_1,param_2);
      uVar6 = param_3 & 0xffffffffffffffc0;
      param_3 = param_3 & 0x3f;
      param_2 = (void *)((long)param_2 + uVar6);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}


// ===== 0078b660  FUN_0078b660 =====

undefined8 FUN_0078b660(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = param_2[0x16];
  uVar5 = (ulong)uVar2;
  if (0x3f < uVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x78b758);
    (*pcVar3)();
  }
  puVar1 = (undefined8 *)(param_2 + 6);
  *(undefined1 *)((long)puVar1 + uVar5) = 0x80;
  lVar4 = uVar5 + 1;
  if (uVar2 < 0x38) {
    if (lVar4 == 0x38) goto LAB_0078b6f4;
  }
  else {
    if (uVar2 != 0x3f) {
      memset((void *)((long)puVar1 + lVar4),0,0x3f - uVar5);
    }
    FUN_0078b758(param_2,param_2 + 6,1);
    lVar4 = 0;
  }
  memset((void *)((long)puVar1 + lVar4),0,0x38 - lVar4);
LAB_0078b6f4:
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_2 + 4);
  FUN_0078b758(param_2,param_2 + 6,1);
  param_2[0x16] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}


// ===== 0078b758  FUN_0078b758 =====

void FUN_0078b758(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long local_68;
  
  iVar22 = *param_1;
  uVar23 = param_1[1];
  uVar24 = param_1[2];
  uVar25 = param_1[3];
  local_68 = param_3;
  do {
    iVar2 = *param_2;
    iVar10 = param_2[1];
    uVar1 = (uVar24 & uVar23 | uVar25 & (uVar23 ^ 0xffffffff)) + iVar22 + iVar2;
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar10 + uVar25 + (uVar23 & uVar18 | uVar24 & (uVar18 ^ 0xffffffff));
    uVar19 = uVar1 >> 0x19 | uVar1 * 0x80;
    iVar3 = param_2[2];
    iVar11 = param_2[3];
    uVar1 = iVar3 + uVar24 + (uVar18 & uVar19 | uVar23 & (uVar19 ^ 0xffffffff));
    uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar1 = iVar11 + uVar23 + (uVar19 & uVar20 | uVar18 & (uVar20 ^ 0xffffffff));
    uVar21 = uVar1 >> 0xd | uVar1 * 0x80000;
    iVar4 = param_2[4];
    iVar12 = param_2[5];
    uVar1 = iVar4 + uVar18 + (uVar20 & uVar21 | uVar19 & (uVar21 ^ 0xffffffff));
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = uVar19 + iVar12 + (uVar21 & uVar18 | uVar20 & (uVar18 ^ 0xffffffff));
    uVar19 = uVar1 >> 0x19 | uVar1 * 0x80;
    iVar5 = param_2[6];
    iVar13 = param_2[7];
    uVar1 = uVar20 + iVar5 + (uVar18 & uVar19 | uVar21 & (uVar19 ^ 0xffffffff));
    uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar1 = uVar21 + iVar13 + (uVar19 & uVar20 | uVar18 & (uVar20 ^ 0xffffffff));
    uVar21 = uVar1 >> 0xd | uVar1 * 0x80000;
    iVar6 = param_2[8];
    iVar14 = param_2[9];
    uVar1 = uVar18 + iVar6 + (uVar20 & uVar21 | uVar19 & (uVar21 ^ 0xffffffff));
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = uVar19 + iVar14 + (uVar21 & uVar18 | uVar20 & (uVar18 ^ 0xffffffff));
    uVar19 = uVar1 >> 0x19 | uVar1 * 0x80;
    iVar7 = param_2[10];
    iVar15 = param_2[0xb];
    uVar1 = uVar20 + iVar7 + (uVar18 & uVar19 | uVar21 & (uVar19 ^ 0xffffffff));
    uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar1 = uVar21 + iVar15 + (uVar19 & uVar20 | uVar18 & (uVar20 ^ 0xffffffff));
    uVar21 = uVar1 >> 0xd | uVar1 * 0x80000;
    iVar8 = param_2[0xc];
    iVar16 = param_2[0xd];
    uVar1 = uVar18 + iVar8 + (uVar20 & uVar21 | uVar19 & (uVar21 ^ 0xffffffff));
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = uVar19 + iVar16 + (uVar21 & uVar18 | uVar20 & (uVar18 ^ 0xffffffff));
    uVar19 = uVar1 >> 0x19 | uVar1 * 0x80;
    iVar9 = param_2[0xe];
    iVar17 = param_2[0xf];
    param_2 = param_2 + 0x10;
    uVar1 = uVar20 + iVar9 + (uVar18 & uVar19 | uVar21 & (uVar19 ^ 0xffffffff));
    uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar1 = uVar21 + iVar17 + (uVar20 & uVar19 | uVar18 & (uVar20 ^ 0xffffffff));
    uVar21 = uVar1 >> 0xd | uVar1 * 0x80000;
    uVar1 = iVar2 + 0x5a827999 + uVar18 + (uVar21 & (uVar20 | uVar19) | uVar20 & uVar19);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar4 + 0x5a827999 + uVar19 + (uVar18 & (uVar21 | uVar20) | uVar21 & uVar20);
    uVar19 = uVar1 >> 0x1b | uVar1 * 0x20;
    uVar1 = iVar6 + 0x5a827999 + uVar20 + (uVar19 & (uVar18 | uVar21) | uVar18 & uVar21);
    uVar20 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar8 + 0x5a827999 + uVar21 + (uVar20 & (uVar19 | uVar18) | uVar19 & uVar18);
    uVar21 = uVar1 >> 0x13 | uVar1 * 0x2000;
    uVar1 = iVar10 + 0x5a827999 + uVar18 + (uVar21 & (uVar20 | uVar19) | uVar20 & uVar19);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar12 + 0x5a827999 + uVar19 + (uVar18 & (uVar21 | uVar20) | uVar21 & uVar20);
    uVar19 = uVar1 >> 0x1b | uVar1 * 0x20;
    uVar1 = iVar14 + 0x5a827999 + uVar20 + (uVar19 & (uVar18 | uVar21) | uVar18 & uVar21);
    uVar20 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar16 + 0x5a827999 + uVar21 + (uVar20 & (uVar19 | uVar18) | uVar19 & uVar18);
    uVar21 = uVar1 >> 0x13 | uVar1 * 0x2000;
    uVar1 = iVar3 + 0x5a827999 + uVar18 + (uVar21 & (uVar20 | uVar19) | uVar20 & uVar19);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar5 + 0x5a827999 + uVar19 + (uVar18 & (uVar21 | uVar20) | uVar21 & uVar20);
    uVar19 = uVar1 >> 0x1b | uVar1 * 0x20;
    uVar1 = iVar7 + 0x5a827999 + uVar20 + (uVar19 & (uVar18 | uVar21) | uVar18 & uVar21);
    uVar20 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar9 + 0x5a827999 + uVar21 + (uVar20 & (uVar19 | uVar18) | uVar19 & uVar18);
    uVar21 = uVar1 >> 0x13 | uVar1 * 0x2000;
    uVar1 = iVar11 + 0x5a827999 + uVar18 + (uVar21 & (uVar20 | uVar19) | uVar20 & uVar19);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar13 + 0x5a827999 + uVar19 + (uVar18 & (uVar21 | uVar20) | uVar21 & uVar20);
    uVar19 = uVar1 >> 0x1b | uVar1 * 0x20;
    uVar1 = iVar15 + 0x5a827999 + uVar20 + (uVar19 & (uVar18 | uVar21) | uVar18 & uVar21);
    uVar20 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar17 + 0x5a827999 + uVar21 + (uVar20 & (uVar19 | uVar18) | uVar19 & uVar18);
    uVar21 = uVar1 >> 0x13 | uVar1 * 0x2000;
    uVar1 = iVar2 + 0x6ed9eba1 + uVar18 + (uVar21 ^ uVar20 ^ uVar19);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar6 + 0x6ed9eba1 + uVar19 + (uVar21 ^ uVar20 ^ uVar18);
    uVar19 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar4 + 0x6ed9eba1 + uVar20 + (uVar18 ^ uVar21 ^ uVar19);
    uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar1 = iVar8 + 0x6ed9eba1 + uVar21 + (uVar19 ^ uVar18 ^ uVar20);
    uVar21 = uVar1 >> 0x11 | uVar1 * 0x8000;
    uVar1 = iVar3 + 0x6ed9eba1 + uVar18 + (uVar20 ^ uVar19 ^ uVar21);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar7 + 0x6ed9eba1 + uVar19 + (uVar21 ^ uVar20 ^ uVar18);
    uVar19 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar5 + 0x6ed9eba1 + uVar20 + (uVar18 ^ uVar21 ^ uVar19);
    uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar1 = iVar9 + 0x6ed9eba1 + uVar21 + (uVar19 ^ uVar18 ^ uVar20);
    uVar21 = uVar1 >> 0x11 | uVar1 * 0x8000;
    uVar1 = iVar10 + 0x6ed9eba1 + uVar18 + (uVar20 ^ uVar19 ^ uVar21);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    uVar1 = iVar14 + 0x6ed9eba1 + uVar19 + (uVar21 ^ uVar20 ^ uVar18);
    uVar19 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar12 + 0x6ed9eba1 + uVar20 + (uVar18 ^ uVar21 ^ uVar19);
    uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar1 = iVar16 + 0x6ed9eba1 + uVar21 + (uVar19 ^ uVar18 ^ uVar20);
    uVar21 = uVar1 >> 0x11 | uVar1 * 0x8000;
    uVar1 = iVar11 + 0x6ed9eba1 + uVar18 + (uVar20 ^ uVar19 ^ uVar21);
    uVar18 = uVar1 >> 0x1d | uVar1 * 8;
    iVar22 = uVar18 + iVar22;
    uVar1 = iVar15 + 0x6ed9eba1 + uVar19 + (uVar21 ^ uVar20 ^ uVar18);
    uVar19 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar1 = iVar13 + 0x6ed9eba1 + uVar20 + (uVar18 ^ uVar21 ^ uVar19);
    uVar25 = uVar19 + uVar25;
    uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
    uVar24 = uVar1 + uVar24;
    uVar1 = iVar17 + 0x6ed9eba1 + uVar21 + (uVar19 ^ uVar18 ^ uVar1);
    param_1[2] = uVar24;
    param_1[3] = uVar25;
    local_68 = local_68 + -1;
    uVar23 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar23;
    *param_1 = iVar22;
    param_1[1] = uVar23;
  } while (local_68 != 0);
  return;
}


// ===== 0078bd00  FUN_0078bd00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0078bd00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_001f3920;
  param_1[1] = _UNK_001f3928;
  *param_1 = uVar1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return 1;
}


// ===== 0078bd2c  FUN_0078bd2c =====

undefined8 FUN_0078bd2c(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong __n;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar1 = (int)param_3 * 8;
    uVar3 = *(uint *)(param_1 + 0x58);
    uVar6 = (ulong)uVar3;
    *(uint *)(param_1 + 0x10) = uVar2 + uVar1;
    *(uint *)(param_1 + 0x14) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar2,uVar1);
    if (uVar3 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar6 < 0x40)) {
        memcpy((void *)(param_1 + uVar6 + 0x18),param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      if (0x40 < uVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0x5512,0x78be58);
        (*pcVar4)();
      }
      __n = 0x40 - uVar6;
      if (uVar3 != 0x40) {
        memcpy((void *)(param_1 + 0x18 + uVar6),param_2,__n);
      }
      FUN_0078bf54(param_1,param_1 + 0x18,1);
      bVar5 = param_3 < __n;
      param_3 = param_3 - __n;
      if (bVar5) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_2 = (void *)((long)param_2 + __n);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (param_3 >> 6 != 0) {
      FUN_0078bf54(param_1,param_2);
      uVar6 = param_3 & 0xffffffffffffffc0;
      param_3 = param_3 & 0x3f;
      param_2 = (void *)((long)param_2 + uVar6);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      memcpy((void *)(param_1 + 0x18),param_2,param_3);
    }
  }
  return 1;
}


// ===== 0078be5c  FUN_0078be5c =====

undefined8 FUN_0078be5c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = param_2[0x16];
  uVar5 = (ulong)uVar2;
  if (0x3f < uVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x78bf54);
    (*pcVar3)();
  }
  puVar1 = (undefined8 *)(param_2 + 6);
  *(undefined1 *)((long)puVar1 + uVar5) = 0x80;
  lVar4 = uVar5 + 1;
  if (uVar2 < 0x38) {
    if (lVar4 == 0x38) goto LAB_0078bef0;
  }
  else {
    if (uVar2 != 0x3f) {
      memset((void *)((long)puVar1 + lVar4),0,0x3f - uVar5);
    }
    FUN_0078bf54(param_2,param_2 + 6,1);
    lVar4 = 0;
  }
  memset((void *)((long)puVar1 + lVar4),0,0x38 - lVar4);
LAB_0078bef0:
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_2 + 4);
  FUN_0078bf54(param_2,param_2 + 6,1);
  param_2[0x16] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}


// ===== 0078bf54  FUN_0078bf54 =====

void FUN_0078bf54(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  iVar21 = *param_1;
  uVar22 = param_1[1];
  uVar23 = param_1[2];
  uVar24 = param_1[3];
  do {
    iVar5 = *param_2;
    iVar13 = param_2[1];
    uVar1 = iVar21 + (uVar23 & uVar22 | uVar24 & (uVar22 ^ 0xffffffff)) + iVar5 + -0x28955b88;
    iVar6 = param_2[2];
    iVar14 = param_2[3];
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar22;
    uVar2 = uVar24 + iVar13 + -0x173848aa + (uVar22 & uVar1 | uVar23 & (uVar1 ^ 0xffffffff));
    param_3 = param_3 + -1;
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    uVar3 = uVar23 + iVar6 + 0x242070db + (uVar1 & uVar2 | uVar22 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    uVar4 = uVar22 + iVar14 + -0x3e423112 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    iVar7 = param_2[4];
    iVar15 = param_2[5];
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    uVar1 = iVar7 + uVar1 + -0xa83f051 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
    uVar2 = iVar15 + uVar2 + 0x4787c62a + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    iVar8 = param_2[6];
    iVar16 = param_2[7];
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    uVar3 = iVar8 + uVar3 + -0x57cfb9ed + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    uVar4 = iVar16 + uVar4 + -0x2b96aff + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    iVar9 = param_2[8];
    iVar17 = param_2[9];
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    uVar1 = iVar9 + uVar1 + 0x698098d8 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
    uVar2 = iVar17 + uVar2 + -0x74bb0851 + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    iVar10 = param_2[10];
    iVar18 = param_2[0xb];
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    uVar3 = iVar10 + uVar3 + -0xa44f + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    uVar4 = iVar18 + uVar4 + -0x76a32842 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    iVar11 = param_2[0xc];
    iVar19 = param_2[0xd];
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    uVar1 = iVar11 + uVar1 + 0x6b901122 + (uVar3 & uVar4 | uVar2 & (uVar4 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
    uVar2 = iVar19 + uVar2 + -0x2678e6d + (uVar4 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    iVar12 = param_2[0xe];
    iVar20 = param_2[0xf];
    uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
    param_2 = param_2 + 0x10;
    uVar3 = iVar12 + uVar3 + -0x5986bc72 + (uVar1 & uVar2 | uVar4 & (uVar2 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
    uVar4 = iVar20 + uVar4 + 0x49b40821 + (uVar2 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
    uVar1 = iVar13 + uVar1 + -0x9e1da9e + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar8 + uVar2 + -0x3fbf4cc0 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar18 + uVar3 + 0x265e5a51 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar5 + uVar4 + -0x16493856 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar15 + uVar1 + -0x29d0efa3 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar10 + uVar2 + 0x2441453 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar20 + uVar3 + -0x275e197f + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar7 + uVar4 + -0x182c0438 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar17 + uVar1 + 0x21e1cde6 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar12 + uVar2 + -0x3cc8f82a + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar14 + uVar3 + -0xb2af279 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar9 + uVar4 + 0x455a14ed + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff));
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar19 + uVar1 + -0x561c16fb + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
    uVar2 = iVar6 + uVar2 + -0x3105c08 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff));
    uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
    uVar3 = iVar16 + uVar3 + 0x676f02d9 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
    uVar4 = iVar11 + uVar4 + -0x72d5b376 + ((uVar3 ^ uVar2) & uVar1 ^ uVar2);
    uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
    uVar1 = iVar15 + uVar1 + -0x5c6be + (uVar3 ^ uVar2 ^ uVar4);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar9 + uVar2 + -0x788e097f + (uVar4 ^ uVar3 ^ uVar1);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar18 + uVar3 + 0x6d9d6122 + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar12 + uVar4 + -0x21ac7f4 + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar13 + uVar1 + -0x5b4115bc + (uVar3 ^ uVar2 ^ uVar4);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar7 + uVar2 + 0x4bdecfa9 + (uVar4 ^ uVar3 ^ uVar1);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar16 + uVar3 + -0x944b4a0 + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar10 + uVar4 + -0x41404390 + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar19 + uVar1 + 0x289b7ec6 + (uVar3 ^ uVar2 ^ uVar4);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar5 + uVar2 + -0x155ed806 + (uVar4 ^ uVar3 ^ uVar1);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar14 + uVar3 + -0x2b10cf7b + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar8 + uVar4 + 0x4881d05 + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar17 + uVar1 + -0x262b2fc7 + (uVar3 ^ uVar2 ^ uVar4);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
    uVar2 = iVar11 + uVar2 + -0x1924661b + (uVar4 ^ uVar3 ^ uVar1);
    uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
    uVar3 = iVar20 + uVar3 + 0x1fa27cf8 + (uVar1 ^ uVar4 ^ uVar2);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
    uVar4 = iVar6 + uVar4 + -0x3b53a99b + (uVar2 ^ uVar1 ^ uVar3);
    uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
    uVar1 = iVar5 + uVar1 + -0xbd6ddbc + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    uVar2 = iVar16 + uVar2 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar3 = iVar12 + uVar3 + -0x546bdc59 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar4 = iVar15 + uVar4 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
    uVar1 = iVar11 + uVar1 + 0x655b59c3 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    uVar2 = iVar14 + uVar2 + -0x70f3336e + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar3 = iVar10 + uVar3 + -0x100b83 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar4 = iVar13 + uVar4 + -0x7a7ba22f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
    uVar1 = iVar9 + uVar1 + 0x6fa87e4f + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    uVar2 = iVar20 + uVar2 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar3 = iVar8 + uVar3 + -0x5cfebcec + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar4 = iVar19 + uVar4 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
    uVar1 = iVar7 + uVar1 + -0x8ac817e + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
    iVar21 = uVar1 + iVar21;
    uVar2 = iVar18 + uVar2 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4);
    uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
    uVar24 = uVar2 + uVar24;
    uVar3 = iVar6 + uVar3 + 0x2ad7d2bb + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
    uVar23 = uVar3 + uVar23;
    param_1[2] = uVar23;
    param_1[3] = uVar24;
    uVar1 = iVar17 + uVar4 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2);
    uVar22 = uVar3 + uVar22 + (uVar1 >> 0xb | uVar1 * 0x200000);
    *param_1 = iVar21;
    param_1[1] = uVar22;
  } while (param_3 != 0);
  return;
}


// ===== 0078c954  FUN_0078c954 =====

ulong * FUN_0078c954(ulong param_1)

{
  ulong *puVar1;
  
  if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
    if ((param_1 < 0xfffffffffffffff8) &&
       (puVar1 = (ulong *)malloc(param_1 + 8), puVar1 != (ulong *)0x0)) {
      *puVar1 = param_1;
      return puVar1 + 1;
    }
  }
  else {
    puVar1 = (ulong *)OPENSSL_memory_alloc(param_1);
    if (param_1 == 0) {
      return puVar1;
    }
    if (puVar1 != (ulong *)0x0) {
      return puVar1;
    }
  }
  FUN_00777eb4(0xe,0,0x41,"../../third_party/boringssl/src/crypto/mem.cc",0xdb);
  return (ulong *)0x0;
}


// ===== 0078c9d4  FUN_0078c9d4 =====

ulong * FUN_0078c9d4(ulong param_1)

{
  ulong *__s;
  ulong *puVar1;
  
  if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
    if ((0xfffffffffffffff7 < param_1) ||
       (puVar1 = (ulong *)malloc(param_1 + 8), puVar1 == (ulong *)0x0)) goto LAB_0078ca44;
    __s = puVar1 + 1;
    *puVar1 = param_1;
  }
  else {
    __s = (ulong *)OPENSSL_memory_alloc(param_1);
    if ((param_1 != 0) && (__s == (ulong *)0x0)) {
LAB_0078ca44:
      FUN_00777eb4(0xe,0,0x41,"../../third_party/boringssl/src/crypto/mem.cc",0xdb);
      return (ulong *)0x0;
    }
  }
  if ((__s != (ulong *)0x0) && (param_1 != 0)) {
    puVar1 = (ulong *)memset(__s,0,param_1);
    return puVar1;
  }
  return __s;
}


// ===== 0078ca74  FUN_0078ca74 =====

ulong * FUN_0078ca74(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong *puVar3;
  ulong *__s;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2 == 0) ||
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, auVar2._8_8_ = 0, auVar2._0_8_ = param_1,
     SUB168(auVar1 * auVar2,8) == 0)) {
    param_2 = param_2 * param_1;
    if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
      if ((0xfffffffffffffff7 < param_2) ||
         (puVar3 = (ulong *)malloc(param_2 + 8), puVar3 == (ulong *)0x0)) goto LAB_0078cb0c;
      __s = puVar3 + 1;
      *puVar3 = param_2;
    }
    else {
      __s = (ulong *)OPENSSL_memory_alloc(param_2);
      if ((param_2 != 0) && (__s == (ulong *)0x0)) {
LAB_0078cb0c:
        uVar4 = 0x41;
        uVar5 = 0xdb;
        goto LAB_0078cb24;
      }
    }
    if ((__s != (ulong *)0x0) && (param_2 != 0)) {
      puVar3 = (ulong *)memset(__s,0,param_2);
      return puVar3;
    }
  }
  else {
    uVar4 = 0x45;
    uVar5 = 0xe9;
LAB_0078cb24:
    FUN_00777eb4(0xe,0,uVar4,"../../third_party/boringssl/src/crypto/mem.cc",uVar5);
    __s = (ulong *)0x0;
  }
  return __s;
}


// ===== 0078cb3c  FUN_0078cb3c =====

void FUN_0078cb3c(long param_1)

{
  long *__s;
  
  if (param_1 != 0) {
    if (PTR_OPENSSL_memory_free_00d52768 == (undefined *)0x0) {
      __s = (long *)(param_1 + -8);
      if (*__s + 8U != 0) {
        memset(__s,0,*__s + 8U);
      }
      free(__s);
      return;
    }
    OPENSSL_memory_free(param_1);
  }
  return;
}


// ===== 0078cba8  FUN_0078cba8 =====

void FUN_0078cba8(void *param_1,size_t param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2);
  }
  return;
}


// ===== 0078cbe0  FUN_0078cbe0 =====

ulong * FUN_0078cbe0(void *param_1,ulong param_2)

{
  size_t __n;
  ulong *__dest;
  ulong *puVar1;
  long *__s;
  
  if (param_1 == (void *)0x0) {
    if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
      if ((param_2 < 0xfffffffffffffff8) &&
         (puVar1 = (ulong *)malloc(param_2 + 8), puVar1 != (ulong *)0x0)) {
        *puVar1 = param_2;
        return puVar1 + 1;
      }
    }
    else {
      puVar1 = (ulong *)OPENSSL_memory_alloc(param_2);
      if (param_2 == 0) {
        return puVar1;
      }
      if (puVar1 != (ulong *)0x0) {
        return puVar1;
      }
    }
LAB_0078ccd8:
    FUN_00777eb4(0xe,0,0x41,"../../third_party/boringssl/src/crypto/mem.cc",0xdb);
    __dest = (ulong *)0x0;
  }
  else {
    if (PTR_OPENSSL_memory_get_size_00d52770 == (undefined *)0x0) {
      __n = *(ulong *)((long)param_1 + -8);
    }
    else {
      __n = OPENSSL_memory_get_size(param_1);
    }
    if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
      if ((0xfffffffffffffff7 < param_2) ||
         (puVar1 = (ulong *)malloc(param_2 + 8), puVar1 == (ulong *)0x0)) goto LAB_0078ccd8;
      __dest = puVar1 + 1;
      *puVar1 = param_2;
    }
    else {
      __dest = (ulong *)OPENSSL_memory_alloc(param_2);
      if ((param_2 != 0) && (__dest == (ulong *)0x0)) goto LAB_0078ccd8;
    }
    if (__dest != (ulong *)0x0) {
      if (param_2 <= __n) {
        __n = param_2;
      }
      memcpy(__dest,param_1,__n);
      if (PTR_OPENSSL_memory_free_00d52768 == (undefined *)0x0) {
        __s = (long *)((long)param_1 + -8);
        if (*__s + 8U != 0) {
          memset(__s,0,*__s + 8U);
        }
        free(__s);
      }
      else {
        OPENSSL_memory_free(param_1);
      }
    }
  }
  return __dest;
}


// ===== 0078cd34  FUN_0078cd34 =====

uint FUN_0078cd34(long param_1,long param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar30;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  undefined1 auVar31 [16];
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 < 8) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    if (param_3 < 0x20) {
      bVar10 = 0;
      uVar6 = 0;
    }
    else {
      bVar10 = 0;
      bVar12 = 0;
      bVar15 = 0;
      bVar19 = 0;
      bVar14 = 0;
      bVar16 = 0;
      bVar18 = 0;
      bVar20 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar11 = 0;
      bVar13 = 0;
      bVar17 = 0;
      bVar21 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      uVar2 = param_3 & 0xffffffffffffffe0;
      puVar5 = (undefined8 *)(param_2 + 0x10);
      puVar8 = (undefined8 *)(param_1 + 0x10);
      uVar6 = param_3 & 0xffffffffffffffe0;
      do {
        uVar44 = puVar8[-1];
        uVar30 = puVar8[-2];
        uVar46 = puVar8[1];
        uVar45 = *puVar8;
        uVar6 = uVar6 - 0x20;
        uVar48 = puVar5[-1];
        uVar47 = puVar5[-2];
        uVar50 = puVar5[1];
        uVar49 = *puVar5;
        puVar5 = puVar5 + 4;
        puVar8 = puVar8 + 4;
        bVar10 = (byte)uVar47 ^ (byte)uVar30 | bVar10;
        bVar12 = (byte)((ulong)uVar47 >> 8) ^ (byte)((ulong)uVar30 >> 8) | bVar12;
        bVar15 = (byte)((ulong)uVar47 >> 0x10) ^ (byte)((ulong)uVar30 >> 0x10) | bVar15;
        bVar19 = (byte)((ulong)uVar47 >> 0x18) ^ (byte)((ulong)uVar30 >> 0x18) | bVar19;
        bVar14 = (byte)((ulong)uVar47 >> 0x20) ^ (byte)((ulong)uVar30 >> 0x20) | bVar14;
        bVar16 = (byte)((ulong)uVar47 >> 0x28) ^ (byte)((ulong)uVar30 >> 0x28) | bVar16;
        bVar18 = (byte)((ulong)uVar47 >> 0x30) ^ (byte)((ulong)uVar30 >> 0x30) | bVar18;
        bVar20 = (byte)((ulong)uVar47 >> 0x38) ^ (byte)((ulong)uVar30 >> 0x38) | bVar20;
        bVar22 = (byte)uVar48 ^ (byte)uVar44 | bVar22;
        bVar23 = (byte)((ulong)uVar48 >> 8) ^ (byte)((ulong)uVar44 >> 8) | bVar23;
        bVar24 = (byte)((ulong)uVar48 >> 0x10) ^ (byte)((ulong)uVar44 >> 0x10) | bVar24;
        bVar25 = (byte)((ulong)uVar48 >> 0x18) ^ (byte)((ulong)uVar44 >> 0x18) | bVar25;
        bVar26 = (byte)((ulong)uVar48 >> 0x20) ^ (byte)((ulong)uVar44 >> 0x20) | bVar26;
        bVar27 = (byte)((ulong)uVar48 >> 0x28) ^ (byte)((ulong)uVar44 >> 0x28) | bVar27;
        bVar28 = (byte)((ulong)uVar48 >> 0x30) ^ (byte)((ulong)uVar44 >> 0x30) | bVar28;
        bVar29 = (byte)((ulong)uVar48 >> 0x38) ^ (byte)((ulong)uVar44 >> 0x38) | bVar29;
        bVar11 = (byte)uVar49 ^ (byte)uVar45 | bVar11;
        bVar13 = (byte)((ulong)uVar49 >> 8) ^ (byte)((ulong)uVar45 >> 8) | bVar13;
        bVar17 = (byte)((ulong)uVar49 >> 0x10) ^ (byte)((ulong)uVar45 >> 0x10) | bVar17;
        bVar21 = (byte)((ulong)uVar49 >> 0x18) ^ (byte)((ulong)uVar45 >> 0x18) | bVar21;
        bVar32 = (byte)((ulong)uVar49 >> 0x20) ^ (byte)((ulong)uVar45 >> 0x20) | bVar32;
        bVar33 = (byte)((ulong)uVar49 >> 0x28) ^ (byte)((ulong)uVar45 >> 0x28) | bVar33;
        bVar34 = (byte)((ulong)uVar49 >> 0x30) ^ (byte)((ulong)uVar45 >> 0x30) | bVar34;
        bVar35 = (byte)((ulong)uVar49 >> 0x38) ^ (byte)((ulong)uVar45 >> 0x38) | bVar35;
        bVar36 = (byte)uVar50 ^ (byte)uVar46 | bVar36;
        bVar37 = (byte)((ulong)uVar50 >> 8) ^ (byte)((ulong)uVar46 >> 8) | bVar37;
        bVar38 = (byte)((ulong)uVar50 >> 0x10) ^ (byte)((ulong)uVar46 >> 0x10) | bVar38;
        bVar39 = (byte)((ulong)uVar50 >> 0x18) ^ (byte)((ulong)uVar46 >> 0x18) | bVar39;
        bVar40 = (byte)((ulong)uVar50 >> 0x20) ^ (byte)((ulong)uVar46 >> 0x20) | bVar40;
        bVar41 = (byte)((ulong)uVar50 >> 0x28) ^ (byte)((ulong)uVar46 >> 0x28) | bVar41;
        bVar42 = (byte)((ulong)uVar50 >> 0x30) ^ (byte)((ulong)uVar46 >> 0x30) | bVar42;
        bVar43 = (byte)((ulong)uVar50 >> 0x38) ^ (byte)((ulong)uVar46 >> 0x38) | bVar43;
      } while (uVar6 != 0);
      bVar11 = bVar11 | bVar10;
      bVar13 = bVar13 | bVar12;
      bVar17 = bVar17 | bVar15;
      bVar21 = bVar21 | bVar19;
      bVar32 = bVar32 | bVar14;
      bVar33 = bVar33 | bVar16;
      bVar34 = bVar34 | bVar18;
      bVar35 = bVar35 | bVar20;
      auVar31[1] = bVar13;
      auVar31[0] = bVar11;
      auVar31[2] = bVar17;
      auVar31[3] = bVar21;
      auVar31[4] = bVar32;
      auVar31[5] = bVar33;
      auVar31[6] = bVar34;
      auVar31[7] = bVar35;
      auVar31[8] = bVar36 | bVar22;
      auVar31[9] = bVar37 | bVar23;
      auVar31[10] = bVar38 | bVar24;
      auVar31[0xb] = bVar39 | bVar25;
      auVar31[0xc] = bVar40 | bVar26;
      auVar31[0xd] = bVar41 | bVar27;
      auVar31[0xe] = bVar42 | bVar28;
      auVar31[0xf] = bVar43 | bVar29;
      auVar1[1] = bVar13;
      auVar1[0] = bVar11;
      auVar1[2] = bVar17;
      auVar1[3] = bVar21;
      auVar1[4] = bVar32;
      auVar1[5] = bVar33;
      auVar1[6] = bVar34;
      auVar1[7] = bVar35;
      auVar1[8] = bVar36 | bVar22;
      auVar1[9] = bVar37 | bVar23;
      auVar1[10] = bVar38 | bVar24;
      auVar1[0xb] = bVar39 | bVar25;
      auVar1[0xc] = bVar40 | bVar26;
      auVar1[0xd] = bVar41 | bVar27;
      auVar1[0xe] = bVar42 | bVar28;
      auVar1[0xf] = bVar43 | bVar29;
      auVar31 = NEON_ext(auVar31,auVar1,8,1);
      uVar6 = CONCAT17(bVar35 | auVar31[7],
                       CONCAT16(bVar34 | auVar31[6],
                                CONCAT15(bVar33 | auVar31[5],
                                         CONCAT14(bVar32 | auVar31[4],
                                                  CONCAT13(bVar21 | auVar31[3],
                                                           CONCAT12(bVar17 | auVar31[2],
                                                                    CONCAT11(bVar13 | auVar31[1],
                                                                             bVar11 | auVar31[0]))))
                                        )));
      uVar6 = uVar6 | uVar6 >> 0x20;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar4 = (uint)uVar6 | (uint)(uVar6 >> 8);
      bVar10 = (byte)uVar4;
      if (param_3 == uVar2) goto LAB_0078ce50;
      uVar6 = uVar2;
      if ((param_3 & 0x18) == 0) goto LAB_0078ce2c;
    }
    bVar11 = 0;
    bVar12 = 0;
    bVar13 = 0;
    bVar15 = 0;
    bVar17 = 0;
    bVar19 = 0;
    bVar21 = 0;
    uVar2 = param_3 & 0xfffffffffffffff8;
    lVar7 = uVar6 - uVar2;
    puVar5 = (undefined8 *)(param_2 + uVar6);
    puVar8 = (undefined8 *)(param_1 + uVar6);
    do {
      uVar30 = *puVar8;
      lVar7 = lVar7 + 8;
      uVar44 = *puVar5;
      bVar10 = (byte)uVar44 ^ (byte)uVar30 | bVar10;
      bVar11 = (byte)((ulong)uVar44 >> 8) ^ (byte)((ulong)uVar30 >> 8) | bVar11;
      bVar12 = (byte)((ulong)uVar44 >> 0x10) ^ (byte)((ulong)uVar30 >> 0x10) | bVar12;
      bVar13 = (byte)((ulong)uVar44 >> 0x18) ^ (byte)((ulong)uVar30 >> 0x18) | bVar13;
      bVar15 = (byte)((ulong)uVar44 >> 0x20) ^ (byte)((ulong)uVar30 >> 0x20) | bVar15;
      bVar17 = (byte)((ulong)uVar44 >> 0x28) ^ (byte)((ulong)uVar30 >> 0x28) | bVar17;
      bVar19 = (byte)((ulong)uVar44 >> 0x30) ^ (byte)((ulong)uVar30 >> 0x30) | bVar19;
      bVar21 = (byte)((ulong)uVar44 >> 0x38) ^ (byte)((ulong)uVar30 >> 0x38) | bVar21;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
    uVar6 = CONCAT17(bVar21,CONCAT16(bVar19,CONCAT15(bVar17,CONCAT14(bVar15,CONCAT13(bVar13,CONCAT12
                                                  (bVar12,CONCAT11(bVar11,bVar10)))))));
    uVar6 = uVar6 | uVar6 >> 0x20;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar4 = (uint)uVar6 | (uint)(uVar6 >> 8);
    if (param_3 == uVar2) goto LAB_0078ce50;
  }
LAB_0078ce2c:
  lVar7 = param_3 - uVar2;
  pbVar3 = (byte *)(param_1 + uVar2);
  pbVar9 = (byte *)(param_2 + uVar2);
  do {
    lVar7 = lVar7 + -1;
    uVar4 = *pbVar9 ^ *pbVar3 | uVar4;
    pbVar3 = pbVar3 + 1;
    pbVar9 = pbVar9 + 1;
  } while (lVar7 != 0);
LAB_0078ce50:
  return uVar4 & 0xff;
}


// ===== 0078ce58  FUN_0078ce58 =====

long FUN_0078ce58(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*(char *)(param_1 + lVar1) == '\0') {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while (param_2 != lVar1);
  return param_2;
}


// ===== 0078ce8c  FUN_0078ce8c =====

void * FUN_0078ce8c(char *param_1)

{
  size_t __n;
  size_t sVar1;
  size_t *__dest;
  void *pvVar2;
  size_t *psVar3;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    __n = sVar1 + 1;
    if (sVar1 != 0xffffffffffffffff) {
      if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
        if ((__n < 0xfffffffffffffff8) &&
           (psVar3 = (size_t *)malloc(sVar1 + 9), psVar3 != (size_t *)0x0)) {
          __dest = psVar3 + 1;
          *psVar3 = __n;
          if (__dest == (size_t *)0x0) {
            return (void *)0x0;
          }
          goto LAB_0078cec8;
        }
      }
      else {
        __dest = (size_t *)OPENSSL_memory_alloc(__n);
        if (__dest != (size_t *)0x0) {
LAB_0078cec8:
          pvVar2 = memcpy(__dest,param_1,__n);
          return pvVar2;
        }
      }
      FUN_00777eb4(0xe,0,0x41,"../../third_party/boringssl/src/crypto/mem.cc",0xdb);
    }
  }
  return (void *)0x0;
}


// ===== 0078cf30  FUN_0078cf30 =====

void * FUN_0078cf30(void *param_1,size_t param_2)

{
  size_t *__dest;
  void *pvVar1;
  size_t *psVar2;
  
  if (param_2 != 0) {
    if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
      if ((param_2 < 0xfffffffffffffff8) &&
         (psVar2 = (size_t *)malloc(param_2 + 8), psVar2 != (size_t *)0x0)) {
        __dest = psVar2 + 1;
        *psVar2 = param_2;
        if (__dest == (size_t *)0x0) {
          return (void *)0x0;
        }
        goto LAB_0078cf64;
      }
    }
    else {
      __dest = (size_t *)OPENSSL_memory_alloc(param_2);
      if (__dest != (size_t *)0x0) {
LAB_0078cf64:
        pvVar1 = memcpy(__dest,param_1,param_2);
        return pvVar1;
      }
    }
    FUN_00777eb4(0xe,0,0x41,"../../third_party/boringssl/src/crypto/mem.cc",0xdb);
  }
  return (void *)0x0;
}


// ===== 0078cfcc  FUN_0078cfcc =====

bool FUN_0078cfcc(int param_1)

{
  return param_1 - 0x30U < 10;
}


// ===== 0078cfe0  FUN_0078cfe0 =====

bool FUN_0078cfe0(uint param_1)

{
  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 6;
}


// ===== 0078d000  FUN_0078d000 =====

undefined8 FUN_0078d000(char *param_1,int param_2)

{
  char cVar1;
  
  if (param_2 - 0x3aU < 0xfffffff6) {
    if (param_2 - 0x61U < 6) {
      cVar1 = -0x57;
    }
    else {
      if (5 < param_2 - 0x41U) {
        return 0;
      }
      cVar1 = -0x37;
    }
  }
  else {
    cVar1 = -0x30;
  }
  *param_1 = cVar1 + (char)param_2;
  return 1;
}


// ===== 0078d054  FUN_0078d054 =====

bool FUN_0078d054(uint param_1)

{
  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


// ===== 0078d074  FUN_0078d074 =====

uint FUN_0078d074(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 | 0x20;
  if (0x19 < param_1 - 0x41) {
    uVar1 = param_1;
  }
  return uVar1;
}


// ===== 0078d08c  FUN_0078d08c =====

bool FUN_0078d08c(int param_1)

{
  return param_1 == 0x20 || param_1 - 9U < 5;
}


// ===== 0078d0a4  FUN_0078d0a4 =====

undefined8 FUN_0078d0a4(byte *param_1,byte *param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar5 = param_3 + -1;
  do {
    bVar2 = *param_1;
    bVar3 = *param_2;
    uVar4 = bVar2 | 0x20;
    if (0x19 < bVar2 - 0x41) {
      uVar4 = (uint)bVar2;
    }
    uVar6 = bVar3 | 0x20;
    if (0x19 < bVar3 - 0x41) {
      uVar6 = (uint)bVar3;
    }
    if (uVar4 < uVar6) {
      return 0xffffffff;
    }
    if (uVar6 < uVar4) {
      return 1;
    }
  } while ((uVar4 != 0) &&
          (bVar1 = lVar5 != 0, param_1 = param_1 + 1, param_2 = param_2 + 1, lVar5 = lVar5 + -1,
          bVar1));
  return 0;
}


// ===== 0078d11c  FUN_0078d11c =====

ulong FUN_0078d11c(undefined8 *param_1,char *param_2,undefined8 *param_3,int param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  char *__s;
  char *__s_00;
  undefined4 *puVar6;
  ulong __maxlen;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar4 = param_4 != 0;
  pcVar1 = FUN_0078c954;
  if (bVar4) {
    pcVar1 = (code *)PTR_malloc_00d51c10;
  }
  pcVar2 = FUN_0078cb3c;
  if (bVar4) {
    pcVar2 = (code *)PTR_free_00d51ac0;
  }
  pcVar3 = FUN_0078cbe0;
  if (bVar4) {
    pcVar3 = (code *)PTR_realloc_00d51da8;
  }
  __s = (char *)(*pcVar1)(0x40);
  if (__s != (char *)0x0) {
    uStack_88 = param_3[1];
    local_90 = *param_3;
    uStack_78 = param_3[3];
    uStack_80 = param_3[2];
    local_70 = local_90;
    uStack_68 = uStack_88;
    uStack_60 = uStack_80;
    uStack_58 = uStack_78;
    uVar5 = vsnprintf(__s,0x40,param_2,&local_90);
    if (-1 < (int)uVar5) {
      if (uVar5 < 0x40) {
        __maxlen = 0x40;
      }
      else {
        __maxlen = (ulong)(uVar5 + 1);
        __s_00 = (char *)(*pcVar3)(__s,__maxlen);
        if (__s_00 == (char *)0x0) goto LAB_0078d21c;
        uStack_a8 = param_3[1];
        local_b0 = *param_3;
        uStack_98 = param_3[3];
        uStack_a0 = param_3[2];
        uVar5 = vsnprintf(__s_00,__maxlen,param_2,&local_b0);
        __s = __s_00;
      }
      if ((-1 < (int)uVar5) && (uVar5 < __maxlen)) {
        *param_1 = __s;
        return (ulong)uVar5;
      }
    }
  }
LAB_0078d21c:
  (*pcVar2)(__s);
  *param_1 = 0;
  puVar6 = (undefined4 *)__errno();
  *puVar6 = 0xc;
  return 0xffffffff;
}


// ===== 0078d258  FUN_0078d258 =====

void FUN_0078d258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_30;
  undefined1 *puStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  puStack_28 = &stack0xffffffffffffffb0;
  puStack_20 = &local_80;
  uStack_18 = 0xffffff80ffffffd0;
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  local_30 = (undefined1 *)register0x00000008;
  FUN_0078d11c(param_1,param_2,&local_30,0);
  return;
}


// ===== 0078d2d8  FUN_0078d2d8 =====

long * FUN_0078d2d8(void *param_1,ulong param_2)

{
  long *__dest;
  long *plVar1;
  undefined8 uVar2;
  ulong __n;
  ulong uVar3;
  long lVar4;
  
  __n = 0;
  uVar3 = __n;
  if (param_2 == 0) {
    lVar4 = 1;
    if (PTR_OPENSSL_memory_alloc_00d52760 == (undefined *)0x0) {
LAB_0078d374:
      plVar1 = (long *)malloc(__n + 9);
      if (plVar1 != (long *)0x0) {
        __dest = plVar1 + 1;
        *plVar1 = lVar4;
        if (__dest == (long *)0x0) {
          return (long *)0x0;
        }
        goto LAB_0078d38c;
      }
    }
    else {
LAB_0078d344:
      __dest = (long *)OPENSSL_memory_alloc(lVar4);
      if (__dest != (long *)0x0) {
LAB_0078d38c:
        if (__n != 0) {
          memcpy(__dest,param_1,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
        return __dest;
      }
    }
  }
  else {
    do {
      __n = uVar3;
      if (*(char *)((long)param_1 + uVar3) == '\0') break;
      uVar3 = uVar3 + 1;
      __n = param_2;
    } while (param_2 != uVar3);
    if (__n == 0xffffffffffffffff) {
      uVar2 = 0x20e;
      goto LAB_0078d3c0;
    }
    lVar4 = __n + 1;
    if (PTR_OPENSSL_memory_alloc_00d52760 != (undefined *)0x0) goto LAB_0078d344;
    if (__n < 0xfffffffffffffff7) goto LAB_0078d374;
  }
  uVar2 = 0xdb;
LAB_0078d3c0:
  FUN_00777eb4(0xe,0,0x41,"../../third_party/boringssl/src/crypto/mem.cc",uVar2);
  return (long *)0x0;
}


// ===== 0078d3e0  FUN_0078d3e0 =====

long FUN_0078d3e0(undefined1 *param_1,char *param_2,ulong param_3)

{
  size_t sVar1;
  long lVar2;
  
  if (param_3 < 2) {
    lVar2 = 0;
    if (param_3 == 0) goto LAB_0078d440;
  }
  else {
    lVar2 = 0;
    do {
      if (param_2[lVar2] == '\0') {
        param_2 = param_2 + lVar2;
        param_1 = param_1 + lVar2;
        goto LAB_0078d43c;
      }
      param_1[lVar2] = param_2[lVar2];
      lVar2 = lVar2 + 1;
    } while (param_3 - 1 != lVar2);
    param_2 = param_2 + lVar2;
    param_1 = param_1 + lVar2;
    lVar2 = param_3 - 1;
  }
LAB_0078d43c:
  *param_1 = 0;
LAB_0078d440:
  sVar1 = strlen(param_2);
  return sVar1 + lVar2;
}


// ===== 0078d45c  FUN_0078d45c =====

long FUN_0078d45c(long param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0;
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    do {
      if (*(char *)(param_1 + uVar5) == '\0') {
        if (param_3 - 1 != uVar5) {
          lVar3 = 0;
          goto LAB_0078d4c0;
        }
        lVar6 = 0;
        puVar4 = (undefined1 *)(param_1 + uVar5);
        goto LAB_0078d4f8;
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
    lVar6 = 0;
    uVar5 = param_3;
  }
  goto LAB_0078d4fc;
  while( true ) {
    lVar6 = param_1 + lVar3;
    lVar3 = lVar3 + 1;
    *(char *)(lVar6 + uVar5) = *pcVar1;
    lVar6 = ~uVar5 + param_3;
    if (~uVar5 + param_3 == lVar3) break;
LAB_0078d4c0:
    pcVar1 = param_2 + lVar3;
    lVar6 = lVar3;
    if (*pcVar1 == '\0') break;
  }
  param_2 = param_2 + lVar3;
  puVar4 = (undefined1 *)(param_1 + uVar5 + lVar3);
LAB_0078d4f8:
  *puVar4 = 0;
LAB_0078d4fc:
  sVar2 = strlen(param_2);
  return lVar6 + uVar5 + sVar2;
}


// ===== 0078d51c  FUN_0078d51c =====

bool FUN_0078d51c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0x20) {
    uVar1 = FUN_0073bea8();
    return uVar1 < 2;
  }
  return false;
}


// ===== 0078d554  FUN_0078d554 =====

bool FUN_0078d554(void)

{
  uint uVar1;
  ulong in_x5;
  
  if (0xff < in_x5) {
    return false;
  }
  uVar1 = FUN_0073bf34();
  return uVar1 < 2;
}


// ===== 0078d58c  FUN_0078d58c =====

bool FUN_0078d58c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if ((param_3 == 0xced) && (param_7 < 0x100)) {
    uVar2 = FUN_0073c09c(param_1,param_2,param_4,param_5,param_6,param_7);
    bVar1 = uVar2 < 2;
  }
  return bVar1;
}


// ===== 0078d5e0  FUN_0078d5e0 =====

bool FUN_0078d5e0(void)

{
  uint uVar1;
  
  uVar1 = FUN_0073c1e4();
  return uVar1 < 2;
}


// ===== 0078d604  FUN_0078d604 =====

bool FUN_0078d604(void)

{
  uint uVar1;
  
  uVar1 = FUN_0073b190();
  return uVar1 < 2;
}


// ===== 0078d628  FUN_0078d628 =====

bool FUN_0078d628(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0x20) {
    uVar1 = FUN_0073cb90();
    return uVar1 < 2;
  }
  return false;
}


// ===== 0078d660  FUN_0078d660 =====

bool FUN_0078d660(void)

{
  uint uVar1;
  ulong in_x5;
  
  if (0xff < in_x5) {
    return false;
  }
  uVar1 = FUN_0073cc10();
  return uVar1 < 2;
}


// ===== 0078d698  FUN_0078d698 =====

bool FUN_0078d698(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if ((param_3 == 0x1213) && (param_7 < 0x100)) {
    uVar2 = FUN_0073cd78(param_1,param_2,param_4,param_5,param_6,param_7);
    bVar1 = uVar2 < 2;
  }
  return bVar1;
}


// ===== 0078d6ec  FUN_0078d6ec =====

bool FUN_0078d6ec(void)

{
  uint uVar1;
  
  uVar1 = FUN_0073cec0();
  return uVar1 < 2;
}


// ===== 0078d710  FUN_0078d710 =====

bool FUN_0078d710(void)

{
  uint uVar1;
  
  uVar1 = FUN_0073c5f0();
  return uVar1 < 2;
}


// ===== 0078d734  FUN_0078d734 =====

bool FUN_0078d734(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  
  if (param_3 == 0x20) {
    uVar1 = FUN_0073dd9c();
    return uVar1 < 2;
  }
  return false;
}


// ===== 0078d76c  FUN_0078d76c =====

bool FUN_0078d76c(void)

{
  uint uVar1;
  ulong in_x5;
  
  if (0xff < in_x5) {
    return false;
  }
  uVar1 = FUN_0073de1c();
  return uVar1 < 2;
}


// ===== 0078d7a4  FUN_0078d7a4 =====

bool FUN_0078d7a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,ulong param_7)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = false;
  if ((param_3 == 0x974) && (param_7 < 0x100)) {
    uVar2 = FUN_0073df84(param_1,param_2,param_4,param_5,param_6,param_7);
    bVar1 = uVar2 < 2;
  }
  return bVar1;
}


// ===== 0078d7f8  FUN_0078d7f8 =====

bool FUN_0078d7f8(void)

{
  uint uVar1;
  
  uVar1 = FUN_0073e0cc();
  return uVar1 < 2;
}


// ===== 0078d81c  FUN_0078d81c =====

bool FUN_0078d81c(void)

{
  uint uVar1;
  
  uVar1 = FUN_0073d2cc();
  return uVar1 < 2;
}


// ===== 0078d840  FUN_0078d840 =====

long * FUN_0078d840(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return param_1;
  }
  plVar1 = (long *)FUN_0076c7cc();
  if (plVar1 == (long *)0x0) {
    FUN_00777eb4(8,0,0xc,"../../third_party/boringssl/src/crypto/obj/obj.cc",0x4d);
    return (long *)0x0;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = FUN_0078cf30(param_1[3],(long)*(int *)((long)param_1 + 0x14));
  plVar1[3] = lVar2;
  if ((*(int *)((long)param_1 + 0x14) == 0) || (lVar2 != 0)) {
    *(int *)((long)plVar1 + 0x14) = *(int *)((long)param_1 + 0x14);
    *(int *)(plVar1 + 2) = (int)param_1[2];
    if (param_1[1] == 0) {
      lVar3 = 0;
      lVar2 = *param_1;
      if (lVar2 == 0) goto LAB_0078d938;
    }
    else {
      lVar3 = FUN_0078ce8c();
      if (lVar3 == 0) goto LAB_0078d89c;
      if (*param_1 == 0) {
        lVar2 = 0;
        goto LAB_0078d938;
      }
    }
    lVar2 = FUN_0078ce8c();
    if (lVar2 != 0) {
LAB_0078d938:
      *plVar1 = lVar2;
      plVar1[1] = lVar3;
      *(uint *)(plVar1 + 4) = *(uint *)(param_1 + 4) | 0xd;
      return plVar1;
    }
  }
  else {
    lVar3 = 0;
  }
LAB_0078d89c:
  FUN_0078cb3c(lVar3);
  FUN_0078cb3c(0);
  FUN_0078cb3c(0);
  FUN_0078cb3c(plVar1);
  return (long *)0x0;
}


// ===== 0078d950  FUN_0078d950 =====

int FUN_0078d950(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < *(int *)(param_2 + 0x14)) {
    return -1;
  }
  if (*(int *)(param_2 + 0x14) < iVar1) {
    return 1;
  }
  if (iVar1 != 0) {
    iVar1 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(long)iVar1);
    return iVar1;
  }
  return 0;
}


// ===== 0078d994  FUN_0078d994 =====

ushort * FUN_0078d994(ushort *param_1)

{
  ushort *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  if ((param_1 != (ushort *)0x0) &&
     (puVar1 = (ushort *)(ulong)*(uint *)(param_1 + 8), *(uint *)(param_1 + 8) == 0)) {
    FUN_00795d48(&DAT_00d800c0);
    if ((DAT_00d800f8 == 0) ||
       (lVar2 = FUN_0078e224(DAT_00d800f8,param_1,FUN_0078e0f0,FUN_0078e100), lVar2 == 0)) {
      FUN_00795d90(&DAT_00d800c0);
      puVar1 = (ushort *)bsearch(param_1,&DAT_0020b05c,0x376,2,FUN_0078da6c);
      if (puVar1 != (ushort *)0x0) {
        if (0x3c9 < *puVar1 - 1) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar1 = (ushort *)(ulong)*(uint *)(&DAT_00d2b640 + (ulong)(uint)*puVar1 * 0x28);
      }
    }
    else {
      FUN_00795d90(&DAT_00d800c0);
      puVar1 = (ushort *)(ulong)*(uint *)(lVar2 + 0x10);
    }
  }
  return puVar1;
}


// ===== 0078da6c  FUN_0078da6c =====

int FUN_0078da6c(long param_1,ushort *param_2)

{
  long lVar1;
  int iVar2;
  
  if (0x3c9 < *param_2 - 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = (ulong)(uint)*param_2 * 0x28;
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 < *(int *)(&DAT_00d2b644 + lVar1)) {
    return -1;
  }
  if (*(int *)(&DAT_00d2b644 + lVar1) < iVar2) {
    return 1;
  }
  if (iVar2 != 0) {
    iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(&DAT_00d2b648 + lVar1),(long)iVar2);
    return iVar2;
  }
  return 0;
}


// ===== 0078dae0  FUN_0078dae0 =====

ushort * FUN_0078dae0(void *param_1)

{
  long lVar1;
  ushort *puVar2;
  void *local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  FUN_00795d48(&DAT_00d800c0);
  if (DAT_00d80100 != 0) {
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    local_40 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
    local_48 = param_1;
    lVar1 = FUN_0078e224(DAT_00d80100,&local_48,FUN_0078e0f0,FUN_0078e100);
    if (lVar1 != 0) {
      FUN_00795d90(&DAT_00d800c0);
      return (ushort *)(ulong)*(uint *)(lVar1 + 0x10);
    }
  }
  FUN_00795d90(&DAT_00d800c0);
  puVar2 = (ushort *)bsearch(param_1,&DAT_0020b748,0x3bf,2,FUN_0078dbbc);
  if (puVar2 != (ushort *)0x0) {
    if (0x3c9 < *puVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar2 = (ushort *)(ulong)*(uint *)(&DAT_00d2b640 + (ulong)(uint)*puVar2 * 0x28);
  }
  return puVar2;
}


// ===== 0078dbbc  FUN_0078dbbc =====

int FUN_0078dbbc(char *param_1,ushort *param_2)

{
  int iVar1;
  
  if (*param_2 - 1 < 0x3ca) {
    iVar1 = strcmp(param_1,(&PTR_s_UNDEF_00d2b630)[(ulong)(uint)*param_2 * 5]);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0078dbf8  FUN_0078dbf8 =====

ushort * FUN_0078dbf8(void *param_1)

{
  long lVar1;
  ushort *puVar2;
  undefined1 *local_50;
  void *pvStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  FUN_00795d48(&DAT_00d800c0);
  if (DAT_00d80108 != 0) {
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
    local_30 = &DAT_aaaaaaaaaaaaaaaa;
    pvStack_48 = param_1;
    lVar1 = FUN_0078e224(DAT_00d80108,&local_50,FUN_0078e0f0,FUN_0078e100);
    if (lVar1 != 0) {
      FUN_00795d90(&DAT_00d800c0);
      return (ushort *)(ulong)*(uint *)(lVar1 + 0x10);
    }
  }
  FUN_00795d90(&DAT_00d800c0);
  puVar2 = (ushort *)bsearch(param_1,&DAT_0020bec6,0x3bf,2,FUN_0078dcd8);
  if (puVar2 != (ushort *)0x0) {
    if (0x3c9 < *puVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar2 = (ushort *)(ulong)*(uint *)(&DAT_00d2b640 + (ulong)(uint)*puVar2 * 0x28);
  }
  return puVar2;
}


// ===== 0078dcd8  FUN_0078dcd8 =====

int FUN_0078dcd8(char *param_1,ushort *param_2)

{
  int iVar1;
  
  if (*param_2 - 1 < 0x3ca) {
    iVar1 = strcmp(param_1,(&PTR_s_undefined_00d2b638)[(ulong)(uint)*param_2 * 5]);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0078dd14  FUN_0078dd14 =====

void FUN_0078dd14(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 0) &&
     ((iVar1 = FUN_0078dae0(param_1), iVar1 != 0 || (iVar1 = FUN_0078dbf8(param_1), iVar1 != 0)))) {
    FUN_0078dd74();
    return;
  }
  FUN_0078de94(0,param_1,0,0);
  return;
}


// ===== 0078dd74  FUN_0078dd74 =====

undefined ** FUN_0078dd74(uint param_1)

{
  undefined **ppuVar1;
  undefined1 *local_50;
  undefined1 *puStack_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  if (param_1 == 0) {
    ppuVar1 = &PTR_s_UNDEF_00d2b630;
  }
  else {
    if (param_1 < 0x3cb) {
      if (*(int *)(&DAT_00d2b640 + (ulong)param_1 * 0x28) != 0) {
        return &PTR_s_UNDEF_00d2b630 + (ulong)param_1 * 5;
      }
    }
    else {
      FUN_00795d48(&DAT_00d800c0);
      if (DAT_00d80110 != 0) {
        puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
        local_50 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
        local_30 = &DAT_aaaaaaaaaaaaaaaa;
        _local_40 = CONCAT44(0xaaaaaaaa,param_1);
        ppuVar1 = (undefined **)FUN_0078e224(DAT_00d80110,&local_50,FUN_0078e0f0,FUN_0078e100);
        if (ppuVar1 != (undefined **)0x0) {
          FUN_00795d90(&DAT_00d800c0);
          return ppuVar1;
        }
      }
      FUN_00795d90(&DAT_00d800c0);
    }
    FUN_00777eb4(8,0,100,"../../third_party/boringssl/src/crypto/obj/obj.cc",0x149);
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}


// ===== 0078de60  FUN_0078de60 =====

undefined ** FUN_0078de60(void)

{
  return &PTR_s_UNDEF_00d2b630;
}


// ===== 0078de70  FUN_0078de70 =====

long * FUN_0078de70(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0078dd74();
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  return plVar1;
}


// ===== 0078de94  FUN_0078de94 =====

undefined8 FUN_0078de94(code *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00770984(&local_70,0x20);
  if (iVar1 != 0) {
    sVar2 = strlen(param_2);
    iVar1 = FUN_00771c90(&local_70,param_2,sVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_00770a30(&local_70,&local_38,&local_40), iVar1 != 0)) {
      if (param_1 == (code *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (*param_1)();
      }
      uVar3 = FUN_0076c760(uVar3,local_38,local_40,param_3,param_4);
      FUN_0078cb3c(local_38);
      return uVar3;
    }
  }
  FUN_00777eb4(8,0,0x65,"../../third_party/boringssl/src/crypto/obj/obj.cc",0x169);
  FUN_00770a10(&local_70);
  return 0;
}


// ===== 0078df88  FUN_0078df88 =====

ulong FUN_0078df88(undefined1 *param_1,uint param_2,long param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_40;
  long lStack_38;
  
  uVar1 = (int)param_2 >> 0x1f;
  if ((param_3 == 0) || (*(int *)(param_3 + 0x14) == 0)) {
    uVar4 = FUN_0078d3e0(param_1,&DAT_001b3348,param_2 & (uVar1 ^ 0xffffffff));
    if (uVar4 >> 0x1f == 0) goto LAB_0078e0cc;
LAB_0078e030:
    FUN_00777eb4(8,0,0x45,"../../third_party/boringssl/src/crypto/obj/obj.cc",0x186);
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_4 == 0) && (iVar2 = FUN_0078d994(param_3), iVar2 != 0)) {
      lVar3 = FUN_0078dd74();
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)) ||
         ((plVar5 = (long *)FUN_0078dd74(iVar2), plVar5 != (long *)0x0 &&
          (lVar3 = *plVar5, lVar3 != 0)))) {
        uVar4 = FUN_0078d3e0(param_1,lVar3,param_2 & (uVar1 ^ 0xffffffff));
        if (uVar4 >> 0x1f == 0) {
          uVar4 = uVar4 & 0xffffffff;
          goto LAB_0078e0cc;
        }
        goto LAB_0078e030;
      }
    }
    local_40 = *(undefined8 *)(param_3 + 0x18);
    lStack_38 = (long)*(int *)(param_3 + 0x14);
    lVar3 = FUN_0077329c(&local_40);
    if (lVar3 == 0) {
      if ((int)param_2 < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        *param_1 = 0;
        uVar4 = 0xffffffff;
      }
    }
    else {
      uVar4 = FUN_0078d3e0(param_1,lVar3,param_2 & (uVar1 ^ 0xffffffff));
      if (uVar4 >> 0x1f == 0) {
        uVar4 = uVar4 & 0xffffffff;
      }
      else {
        FUN_00777eb4(8,0,0x45,"../../third_party/boringssl/src/crypto/obj/obj.cc",0x186);
        uVar4 = 0xffffffff;
      }
      FUN_0078cb3c(lVar3);
    }
  }
LAB_0078e0cc:
  return uVar4 & 0xffffffff;
}


// ===== 0078e0f0  FUN_0078e0f0 =====

void FUN_0078e0f0(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0078e0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ===== 0078e100  FUN_0078e100 =====

void FUN_0078e100(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0078e110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
  return;
}


// ===== 0078e114  FUN_0078e114 =====

undefined8 * FUN_0078e114(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_0078c9d4(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[2] = 0x10;
    lVar2 = FUN_0078ca74(0x10,8);
    puVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN_0078cb3c(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1[4] = param_2;
      puVar1[5] = param_1;
    }
  }
  return puVar1;
}


// ===== 0078e194  FUN_0078e194 =====

void FUN_0078e194(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        lVar1 = *(long *)(*(long *)(param_1 + 8) + uVar3 * 8);
        if (lVar1 != 0) {
          do {
            lVar1 = *(long *)(lVar1 + 8);
            FUN_0078cb3c();
          } while (lVar1 != 0);
          uVar2 = *(ulong *)(param_1 + 0x10);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    FUN_0078cb3c(*(undefined8 *)(param_1 + 8));
    FUN_0078cb3c(param_1);
    return;
  }
  return;
}


// ===== 0078e218  FUN_0078e218 =====

undefined8 FUN_0078e218(undefined8 *param_1)

{
  return *param_1;
}


// ===== 0078e224  FUN_0078e224 =====

undefined8 FUN_0078e224(long param_1,undefined8 param_2,code *param_3,code *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar3 = (*param_3)(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0;
  if (uVar4 != 0) {
    uVar1 = (uVar3 & 0xffffffff) / uVar4;
  }
  puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + ((uVar3 & 0xffffffff) - uVar1 * uVar4) * 8);
  puVar5 = (undefined8 *)*puVar6;
  if (puVar5 != (undefined8 *)0x0) {
    iVar2 = (*param_4)(*(undefined8 *)(param_1 + 0x20),*puVar5,param_2);
    if (iVar2 != 0) {
      do {
        puVar6 = puVar5;
        puVar5 = (undefined8 *)puVar6[1];
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        iVar2 = (*param_4)(*(undefined8 *)(param_1 + 0x20),*puVar5,param_2);
      } while (iVar2 != 0);
      puVar6 = puVar6 + 1;
    }
    if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
      return *(undefined8 *)*puVar6;
    }
  }
  return 0;
}


// ===== 0078e2d4  FUN_0078e2d4 =====

undefined8 FUN_0078e2d4(long param_1,undefined8 param_2,uint param_3,code *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = param_3 / uVar3;
  }
  puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + ((ulong)param_3 - uVar1 * uVar3) * 8);
  puVar4 = (undefined8 *)*puVar5;
  if (puVar4 != (undefined8 *)0x0) {
    iVar2 = (*param_4)(param_2,*puVar4);
    if (iVar2 != 0) {
      do {
        puVar5 = puVar4;
        puVar4 = (undefined8 *)puVar5[1];
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        iVar2 = (*param_4)(param_2,*puVar4);
      } while (iVar2 != 0);
      puVar5 = puVar5 + 1;
    }
    if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
      return *(undefined8 *)*puVar5;
    }
  }
  return 0;
}


// ===== 0078e368  FUN_0078e368 =====

undefined8
FUN_0078e368(ulong *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *param_2 = 0;
  uVar1 = (*param_4)(param_1[5],param_3);
  uVar4 = param_1[2];
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar1 / uVar4;
  }
  plVar10 = (long *)(param_1[1] + ((ulong)uVar1 - uVar3 * uVar4) * 8);
  puVar11 = (undefined8 *)*plVar10;
  if (puVar11 != (undefined8 *)0x0) {
    iVar2 = (*param_5)(param_1[4],*puVar11,param_3);
    if (iVar2 != 0) {
      do {
        puVar12 = puVar11;
        puVar11 = (undefined8 *)puVar12[1];
        if (puVar11 == (undefined8 *)0x0) {
          plVar10 = puVar12 + 1;
          goto LAB_0078e424;
        }
        iVar2 = (*param_5)(param_1[4],*puVar11,param_3);
      } while (iVar2 != 0);
      plVar10 = puVar12 + 1;
    }
    if ((undefined8 *)*plVar10 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)*plVar10;
      *(undefined8 *)*plVar10 = param_3;
      return 1;
    }
  }
LAB_0078e424:
  puVar11 = (undefined8 *)FUN_0078c954(0x18);
  if (puVar11 == (undefined8 *)0x0) {
    return 0;
  }
  puVar11[1] = 0;
  puVar11[2] = 0;
  *(uint *)(puVar11 + 2) = uVar1;
  *puVar11 = param_3;
  *plVar10 = (long)puVar11;
  uVar3 = *param_1 + 1;
  *param_1 = uVar3;
  if ((int)param_1[3] == 0) {
    uVar4 = param_1[2];
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar3 / uVar4;
    }
    if (uVar6 < 3) {
      if (uVar4 <= uVar3) {
        return 1;
      }
      if (uVar4 < 0x11) {
        return 1;
      }
      uVar4 = uVar4 >> 1;
      if (uVar4 < 0x11) {
        uVar4 = 0x10;
      }
    }
    else {
      if ((long)uVar4 < 1) {
        return 1;
      }
      uVar4 = uVar4 << 1;
    }
    if ((uVar4 >> 0x3d == 0) && (uVar3 = FUN_0078c9d4(uVar4 << 3), uVar3 != 0)) {
      uVar6 = param_1[2];
      if (uVar6 != 0) {
        uVar5 = 0;
        do {
          lVar7 = *(long *)(param_1[1] + uVar5 * 8);
          if (lVar7 != 0) {
            do {
              uVar6 = 0;
              if (uVar4 != 0) {
                uVar6 = *(uint *)(lVar7 + 0x10) / uVar4;
              }
              lVar9 = (ulong)*(uint *)(lVar7 + 0x10) - uVar6 * uVar4;
              lVar8 = *(long *)(lVar7 + 8);
              *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(uVar3 + lVar9 * 8);
              *(long *)(uVar3 + lVar9 * 8) = lVar7;
              lVar7 = lVar8;
            } while (lVar8 != 0);
            uVar6 = param_1[2];
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      FUN_0078cb3c(param_1[1]);
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      return 1;
    }
  }
  return 1;
}


// ===== 0078e540  FUN_0078e540 =====

undefined8 FUN_0078e540(ulong *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  uVar2 = (*param_3)(param_1[5]);
  uVar3 = param_1[2];
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = (uVar2 & 0xffffffff) / uVar3;
  }
  plVar12 = (long *)(param_1[1] + ((uVar2 & 0xffffffff) - uVar5 * uVar3) * 8);
  puVar10 = (undefined8 *)*plVar12;
  if (puVar10 != (undefined8 *)0x0) {
    iVar1 = (*param_4)(param_1[4],*puVar10,param_2);
    if (iVar1 != 0) {
      do {
        puVar11 = puVar10;
        puVar10 = (undefined8 *)puVar11[1];
        if (puVar10 == (undefined8 *)0x0) {
          return 0;
        }
        iVar1 = (*param_4)(param_1[4],*puVar10,param_2);
      } while (iVar1 != 0);
      plVar12 = puVar11 + 1;
    }
    puVar10 = (undefined8 *)*plVar12;
    if (puVar10 != (undefined8 *)0x0) {
      *plVar12 = puVar10[1];
      uVar9 = *puVar10;
      FUN_0078cb3c();
      uVar5 = *param_1 - 1;
      *param_1 = uVar5;
      if ((int)param_1[3] != 0) {
        return uVar9;
      }
      uVar2 = param_1[2];
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar5 / uVar2;
      }
      if (uVar3 < 3) {
        if (uVar2 <= uVar5) {
          return uVar9;
        }
        if (uVar2 < 0x11) {
          return uVar9;
        }
        uVar2 = uVar2 >> 1;
        if (uVar2 < 0x11) {
          uVar2 = 0x10;
        }
      }
      else {
        if ((long)uVar2 < 1) {
          return uVar9;
        }
        uVar2 = uVar2 << 1;
      }
      if (uVar2 >> 0x3d != 0) {
        return uVar9;
      }
      uVar5 = FUN_0078c9d4(uVar2 << 3);
      if (uVar5 != 0) {
        uVar3 = param_1[2];
        if (uVar3 != 0) {
          uVar4 = 0;
          do {
            lVar6 = *(long *)(param_1[1] + uVar4 * 8);
            if (lVar6 != 0) {
              do {
                uVar3 = 0;
                if (uVar2 != 0) {
                  uVar3 = *(uint *)(lVar6 + 0x10) / uVar2;
                }
                lVar8 = (ulong)*(uint *)(lVar6 + 0x10) - uVar3 * uVar2;
                lVar7 = *(long *)(lVar6 + 8);
                *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(uVar5 + lVar8 * 8);
                *(long *)(uVar5 + lVar8 * 8) = lVar6;
                lVar6 = lVar7;
              } while (lVar7 != 0);
              uVar3 = param_1[2];
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar3);
        }
        FUN_0078cb3c(param_1[1]);
        param_1[1] = uVar5;
        param_1[2] = uVar2;
        return uVar9;
      }
      return uVar9;
    }
  }
  return 0;
}


// ===== 0078e6cc  FUN_0078e6cc =====

void FUN_0078e6cc(ulong *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (param_1 != (ulong *)0x0) {
    if ((int)param_1[3] == -1) {
      iVar5 = -1;
      uVar3 = param_1[2];
    }
    else {
      iVar5 = (int)param_1[3] + 1;
      *(int *)(param_1 + 3) = iVar5;
      uVar3 = param_1[2];
    }
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        puVar10 = *(undefined8 **)(param_1[1] + uVar2 * 8);
        if (puVar10 != (undefined8 *)0x0) {
          do {
            uVar1 = *puVar10;
            puVar10 = (undefined8 *)puVar10[1];
            (*param_2)(uVar1,param_3);
          } while (puVar10 != (undefined8 *)0x0);
          uVar3 = param_1[2];
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
      iVar5 = (int)param_1[3];
    }
    if ((iVar5 != -1) && (*(int *)(param_1 + 3) = iVar5 + -1, iVar5 + -1 == 0)) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = *param_1 / uVar3;
      }
      if (uVar2 < 3) {
        if (uVar3 < 0x11) {
          return;
        }
        if (uVar3 <= *param_1) {
          return;
        }
        uVar3 = uVar3 >> 1;
        if (uVar3 < 0x11) {
          uVar3 = 0x10;
        }
      }
      else {
        if ((long)uVar3 < 1) {
          return;
        }
        uVar3 = uVar3 << 1;
      }
      if ((uVar3 >> 0x3d == 0) && (uVar2 = FUN_0078c9d4(uVar3 << 3), uVar2 != 0)) {
        uVar6 = param_1[2];
        if (uVar6 != 0) {
          uVar4 = 0;
          do {
            lVar7 = *(long *)(param_1[1] + uVar4 * 8);
            if (lVar7 != 0) {
              do {
                uVar6 = 0;
                if (uVar3 != 0) {
                  uVar6 = *(uint *)(lVar7 + 0x10) / uVar3;
                }
                lVar9 = (ulong)*(uint *)(lVar7 + 0x10) - uVar6 * uVar3;
                lVar8 = *(long *)(lVar7 + 8);
                *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(uVar2 + lVar9 * 8);
                *(long *)(uVar2 + lVar9 * 8) = lVar7;
                lVar7 = lVar8;
              } while (lVar8 != 0);
              uVar6 = param_1[2];
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar6);
        }
        FUN_0078cb3c(param_1[1]);
        param_1[1] = uVar2;
        param_1[2] = uVar3;
      }
    }
  }
  return;
}


// ===== 0078e850  FUN_0078e850 =====

undefined4
FUN_0078e850(long *param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  ulong *__s;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  size_t __n;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  ulong *local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_90 = 0;
  local_88 = (ulong *)0x0;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = 0;
  local_98 = 0;
  iVar5 = FUN_0078ee08(param_5,&local_88,&local_90,&local_a0);
  __s = local_88;
  do {
    local_88 = __s;
    if (iVar5 == 0) {
      uVar6 = FUN_007776ec();
      if ((uVar6 & 0xff000fff) == 0x900006e) {
        FUN_00777f98(2,"Expecting: ",param_4);
      }
LAB_0078ed60:
      uVar10 = 0;
      if ((local_98 != 0) && (uVar10 = 0, (ulong)-local_a0 <= local_98 - 1U)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
LAB_0078ed7c:
      FUN_0078cb3c(local_a0);
      if (local_90 != 0) {
        FUN_0078cb3c();
      }
      if (local_88 != (ulong *)0x0) {
        FUN_0078cb3c();
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return uVar10;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (local_98 < 0) {
      FUN_00777eb4(9,0,0x45,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",0xc2);
      goto LAB_0078ed60;
    }
    if ((__s == (ulong *)0x0) || (__n = strlen((char *)__s), param_4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar7 = strlen((char *)param_4);
    if ((__n == sVar7) && (iVar5 = memcmp(__s,param_4,__n), iVar5 == 0)) {
LAB_0078ecb4:
      iVar5 = FUN_0078f504(local_90,&local_80);
      if (iVar5 == 0) goto LAB_0078ed60;
      local_a8 = local_98;
      iVar5 = FUN_0078f73c(&local_80,local_a0,&local_a8,param_6,param_7);
      lVar3 = local_a0;
      if (iVar5 == 0) goto LAB_0078ed60;
      local_a0 = 0;
      local_98 = 0;
      *param_1 = lVar3;
      *param_2 = local_a8;
      if (param_3 == (undefined8 *)0x0) {
        uVar10 = 1;
      }
      else {
        uVar10 = 1;
        local_88 = (ulong *)0x0;
        *param_3 = __s;
      }
      goto LAB_0078ed7c;
    }
    if ((sVar7 == 0xf) &&
       (*param_4 == 0x5649525020594e41 && *(long *)((long)param_4 + 7) == 0x59454b2045544156)) {
      uVar9 = 0x5052495641544520;
      if ((long)__n < 0xf) {
        if (__n == 0xb) {
          uVar8 = (*__s & 0xff00ff00ff00ff00) >> 8 | (*__s & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          if (uVar8 == 0x5052495641544520) {
            uVar9 = *(ulong *)((long)__s + 3);
LAB_0078ec9c:
            uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
joined_r0x0078ebf4:
            uVar9 = 0x56415445204b4559;
            if (uVar8 == 0x56415445204b4559) goto LAB_0078ecb4;
          }
        }
        else {
          if (__n != 0xe) goto LAB_0078e918;
          uVar9 = (*__s & 0xff00ff00ff00ff00) >> 8 | (*__s & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar9 = 0x4543205052495641;
          if (uVar8 == 0x4543205052495641) {
            uVar9 = *(ulong *)((long)__s + 6);
            goto LAB_0078ec9c;
          }
        }
      }
      else if (__n == 0xf) {
        if (*__s == 0x5649525020415352 && *(long *)((long)__s + 7) == 0x59454b2045544156)
        goto LAB_0078ecb4;
        uVar9 = (*__s & 0xff00ff00ff00ff00) >> 8 | (*__s & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = 0x4453412050524956;
        if (uVar8 == 0x4453412050524956) {
          uVar9 = *(ulong *)((long)__s + 7);
          goto LAB_0078ec9c;
        }
      }
      else {
        if (__n != 0x15) goto LAB_0078e918;
        uVar9 = (*__s & 0xff00ff00ff00ff00) >> 8 | (*__s & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = 0x454e435259505445;
        if (uVar8 == 0x454e435259505445) {
          uVar9 = (__s[1] & 0xff00ff00ff00ff00) >> 8 | (__s[1] & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
          uVar9 = 0x4420505249564154;
          if (uVar8 == 0x4420505249564154) {
            uVar9 = (*(ulong *)((long)__s + 0xd) & 0xff00ff00ff00ff00) >> 8 |
                    (*(ulong *)((long)__s + 0xd) & 0xff00ff00ff00ff) << 8;
            uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
            uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
            goto joined_r0x0078ebf4;
          }
        }
      }
      iVar5 = 1;
      if (uVar8 < uVar9) {
        iVar5 = -1;
      }
      if (iVar5 == 0) goto LAB_0078ecb4;
    }
    else if ((long)__n < 0x13) {
      if (__n == 0xb) {
        bVar4 = *(long *)((long)__s + 3) != 0x4554414349464954;
        bVar1 = *__s != 0x4349464954524543 || bVar4;
        if ((sVar7 != 0x13) || (*__s != 0x4349464954524543 || bVar4)) goto joined_r0x0078eb5c;
LAB_0078ec08:
        if ((*param_4 == 0x2044455453555254 && param_4[1] == 0x4349464954524543) &&
            *(long *)((long)param_4 + 0xb) == 0x4554414349464954) goto LAB_0078ecb4;
      }
      else if (__n == 0x10) {
        if ((sVar7 != 0xb) || (*__s != 0x5245432039303558 || __s[1] != 0x4554414349464954)) {
          if ((sVar7 == 0x13) && (*__s == 0x5245432039303558 && __s[1] == 0x4554414349464954))
          goto LAB_0078ec08;
        }
        else if (*param_4 == 0x4349464954524543 &&
                 *(long *)((long)param_4 + 3) == 0x4554414349464954) goto LAB_0078ecb4;
      }
    }
    else if (__n == 0x13) {
      bVar1 = (*__s != 0x2037232053434b50 || __s[1] != 0x442044454e474953) ||
              *(long *)((long)__s + 0xb) != 0x415441442044454e;
joined_r0x0078eb5c:
      if ((sVar7 == 5) &&
         ((!bVar1 && ((int)*param_4 == 0x53434b50 && *(char *)((long)param_4 + 4) == '7'))))
      goto LAB_0078ecb4;
    }
    else if (__n == 0x17) {
      if (((sVar7 == 0x13) &&
          ((*__s == 0x545245432057454e && __s[1] == 0x2045544143494649) &&
           *(long *)((long)__s + 0xf) == 0x5453455551455220)) &&
         ((*param_4 == 0x4349464954524543 && param_4[1] == 0x5551455220455441) &&
          *(long *)((long)param_4 + 0xb) == 0x5453455551455220)) goto LAB_0078ecb4;
    }
LAB_0078e918:
    iVar5 = FUN_0078ee08(param_5,&local_88,&local_90,&local_a0);
    __s = local_88;
  } while( true );
}


// ===== 0078ee08  FUN_0078ee08 =====

void FUN_0078ee08(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  char *__s;
  int local_1b8;
  int iStack_1b4;
  byte local_1b0;
  undefined2 uStack_1af;
  undefined5 uStack_1ad;
  char cStack_1a8;
  undefined2 uStack_1a7;
  undefined5 uStack_1a5;
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
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b8 = 0;
  iStack_1b4 = -0x55555556;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  cStack_1a8 = -0x56;
  uStack_1a7 = 0xaaaa;
  uStack_1a5 = 0xaaaaaaaaaa;
  local_1b0 = 0xaa;
  uStack_1af = 0xaaaa;
  uStack_1ad = 0xaaaaaaaaaa;
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
  lVar8 = FUN_00770494();
  lVar9 = FUN_00770494();
  lVar10 = FUN_00770494();
  if (((lVar8 != 0) && (lVar9 != 0)) && (lVar10 != 0)) {
    puStack_b8._0_7_ = (uint7)(uint6)puStack_b8;
    uVar4 = FUN_0076f8fc(param_1,&local_1b0,0xfe);
    while (uVar6 = uVar4, 0 < (int)uVar4) {
      do {
        if (0xff < uVar4) goto LAB_0078f4fc;
        if (0x20 < (&local_1b0)[uVar6]) {
          if ((0xfe < uVar6) ||
             (*(undefined1 *)((long)&uStack_1af + (ulong)uVar6) = 10, uVar6 == 0xfe))
          goto LAB_0078f4fc;
          goto LAB_0078ef64;
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0xffffffff);
      local_1b0 = 10;
      uVar6 = 0xffffffff;
LAB_0078ef64:
      *(undefined1 *)((long)&uStack_1af + (long)(int)uVar6 + 1) = 0;
      if (CONCAT53(uStack_1ad,CONCAT21(uStack_1af,local_1b0)) == 0x4745422d2d2d2d2d &&
          CONCAT26(uStack_1a7,CONCAT15(cStack_1a8,uStack_1ad)) == 0x204e494745422d2d) {
        sVar11 = strlen((char *)((ulong)&local_1b0 | 0xb));
        lVar18 = sVar11 << 0x20;
        uVar17 = lVar18 + 0x500000000 >> 0x20;
        if (0x100 < uVar17) goto LAB_0078f4fc;
        iVar5 = strncmp((char *)(&local_1b0 + uVar17),"-----\n",6);
        if (iVar5 == 0) {
          lVar12 = FUN_007705c4(lVar8,lVar18 + 0x900000000 >> 0x20);
          if (lVar12 == 0) goto LAB_0078f2cc;
          sVar11 = lVar18 + -0x600000000 >> 0x20;
          if (lVar18 + -0x600000000 != 0) {
            memcpy(*(void **)(lVar8 + 8),(void *)((ulong)&local_1b0 | 0xb),sVar11);
          }
          *(undefined1 *)(*(long *)(lVar8 + 8) + sVar11) = 0;
          lVar18 = FUN_007705c4(lVar9,0x100);
          if (lVar18 == 0) goto LAB_0078f2cc;
          **(undefined1 **)(lVar9 + 8) = 0;
          uVar4 = FUN_0076f8fc(param_1,&local_1b0,0xfe);
          if ((int)uVar4 < 1) {
            iVar5 = 0;
            goto LAB_0078f154;
          }
          iVar5 = 0;
          goto LAB_0078f048;
        }
      }
      uVar4 = FUN_0076f8fc(param_1,&local_1b0,0xfe);
    }
    FUN_00777eb4(9,0,0x6e,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",0x238);
  }
  goto LAB_0078f2cc;
LAB_0078f154:
  bVar2 = true;
  goto LAB_0078f160;
  while( true ) {
    memcpy((void *)(*(long *)(lVar9 + 8) + (long)iVar5),&local_1b0,sVar11);
    *(undefined1 *)(*(long *)(lVar9 + 8) + (long)iVar7) = 0;
    uVar4 = FUN_0076f8fc(param_1,&local_1b0,0xfe);
    iVar5 = iVar7;
    if ((int)uVar4 < 1) break;
LAB_0078f048:
    uVar6 = uVar4 + 2;
    do {
      if (0xff < uVar4) goto LAB_0078f4fc;
      uVar16 = uVar6 - 2;
      if (0x20 < (&local_1b0)[uVar16]) {
        if ((0xfe < uVar16) ||
           (*(undefined1 *)((long)&uStack_1af + (ulong)uVar16) = 10, uVar6 == 0x100))
        goto LAB_0078f4fc;
        sVar11 = (size_t)uVar6;
        goto LAB_0078f098;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 1);
    local_1b0 = 10;
    sVar11 = 1;
LAB_0078f098:
    (&local_1b0)[sVar11] = 0;
    if (local_1b0 == 10) goto LAB_0078f154;
    iVar7 = uVar6 + iVar5;
    lVar18 = FUN_007705c4(lVar9,(long)(iVar7 + 9));
    if (lVar18 == 0) goto LAB_0078f2cc;
    if (CONCAT53(uStack_1ad,CONCAT21(uStack_1af,local_1b0)) == 0x444e452d2d2d2d2d &&
        cStack_1a8 == ' ') {
      bVar2 = false;
      goto LAB_0078f160;
    }
  }
  bVar2 = true;
LAB_0078f160:
  local_1b8 = 0;
  lVar18 = FUN_007705c4(lVar10,0x400);
  if (lVar18 != 0) {
    **(undefined1 **)(lVar10 + 8) = 0;
    lVar18 = lVar9;
    lVar12 = lVar10;
    iVar7 = iVar5;
    if (bVar2) {
      iVar5 = 0;
      do {
        uVar4 = FUN_0076f8fc(param_1,&local_1b0,0xfe);
        lVar18 = lVar10;
        lVar12 = lVar9;
        iVar7 = local_1b8;
        if ((int)uVar4 < 1) goto LAB_0078f360;
        uVar6 = uVar4 + 2;
        do {
          if (0xff < uVar4) goto LAB_0078f4fc;
          uVar16 = uVar6 - 2;
          if (0x20 < (&local_1b0)[uVar16]) {
            if ((0xfe < uVar16) ||
               (*(undefined1 *)((long)&uStack_1af + (ulong)uVar16) = 10, uVar6 == 0x100))
            goto LAB_0078f4fc;
            sVar11 = (size_t)uVar6;
            goto LAB_0078f200;
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 1);
        local_1b0 = 10;
        uVar16 = 0xffffffff;
        sVar11 = 1;
LAB_0078f200:
        (&local_1b0)[sVar11] = 0;
        if ((0x3f < (int)uVar16) ||
           (CONCAT53(uStack_1ad,CONCAT21(uStack_1af,local_1b0)) == 0x444e452d2d2d2d2d &&
            cStack_1a8 == ' ')) goto LAB_0078f360;
        lVar13 = FUN_007706a8(lVar10,(long)(int)(uVar16 + iVar5 + 0xb));
        if (lVar13 == 0) goto LAB_0078f2cc;
        memcpy((void *)(*(long *)(lVar10 + 8) + (long)iVar5),&local_1b0,sVar11);
        iVar5 = iVar5 + uVar6;
        *(undefined1 *)(*(long *)(lVar10 + 8) + (long)iVar5) = 0;
        local_1b8 = iVar5;
      } while (uVar6 == 0x41);
      local_1b0 = 0;
      uVar6 = FUN_0076f8fc(param_1,&local_1b0,0xfe);
      uVar4 = uVar6;
      iVar7 = local_1b8;
      if (0 < (int)uVar6) {
        do {
          if (0xff < uVar6) goto LAB_0078f4fc;
          if (0x20 < (&local_1b0)[uVar4]) {
            if ((0xfe < uVar4) ||
               (*(undefined1 *)((long)&uStack_1af + (ulong)uVar4) = 10, uVar4 == 0xfe))
            goto LAB_0078f4fc;
            goto LAB_0078f34c;
          }
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0xffffffff);
        local_1b0 = 10;
        uVar4 = 0xffffffff;
LAB_0078f34c:
        *(undefined1 *)((long)&uStack_1af + (long)(int)uVar4 + 1) = 0;
      }
    }
LAB_0078f360:
    local_1b8 = iVar7;
    lVar10 = lVar18;
    lVar9 = lVar12;
    if (CONCAT53(uStack_1ad,CONCAT21(uStack_1af,local_1b0)) == 0x444e452d2d2d2d2d &&
        cStack_1a8 == ' ') {
      __s = *(char **)(lVar8 + 8);
      sVar11 = strlen(__s);
      iVar7 = strncmp(__s,(char *)((ulong)&local_1b0 | 9),(long)(int)sVar11);
      if (iVar7 != 0) goto LAB_0078f3e8;
      uVar17 = (long)((sVar11 << 0x20) + 0x900000000) >> 0x20;
      if (0x100 < uVar17) {
LAB_0078f4fc:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x78f500);
        (*pcVar3)();
      }
      iVar7 = strncmp((char *)(&local_1b0 + uVar17),"-----\n",6);
      if (iVar7 != 0) goto LAB_0078f3e8;
      FUN_0076f254(&puStack_b0);
      iVar5 = FUN_0076f26c(&puStack_b0,*(undefined8 *)(lVar10 + 8),&local_1b8,
                           *(undefined8 *)(lVar10 + 8),(long)iVar5);
      if (-1 < iVar5) {
        iVar5 = FUN_0076f580(&puStack_b0,*(long *)(lVar10 + 8) + (long)local_1b8,&iStack_1b4);
        if (iVar5 < 0) {
          FUN_00777eb4(9,0,100,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",0x2b8);
        }
        else {
          local_1b8 = local_1b8 + iStack_1b4;
          if (local_1b8 != 0) {
            lVar9 = *param_2;
            *param_2 = *(long *)(lVar8 + 8);
            if (lVar9 != 0) {
              FUN_0078cb3c();
            }
            lVar9 = *param_3;
            *param_3 = *(long *)(lVar12 + 8);
            if (lVar9 != 0) {
              FUN_0078cb3c();
            }
            FUN_00790244(param_4,*(undefined8 *)(lVar10 + 8),(long)local_1b8);
            FUN_0078cb3c(lVar8);
            FUN_0078cb3c(lVar12);
            FUN_0078cb3c(lVar10);
            uVar14 = 1;
            goto LAB_0078f2e8;
          }
        }
        goto LAB_0078f2cc;
      }
      uVar14 = 100;
      uVar15 = 0x2b3;
    }
    else {
LAB_0078f3e8:
      uVar14 = 0x66;
      uVar15 = 0x2ab;
    }
    FUN_00777eb4(9,0,uVar14,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",uVar15);
  }
LAB_0078f2cc:
  FUN_007704c4(lVar8);
  FUN_007704c4(lVar9);
  FUN_007704c4(lVar10);
  uVar14 = 0;
LAB_0078f2e8:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar14);
  }
  return;
}


// ===== 0078f504  FUN_0078f504 =====

undefined8 FUN_0078f504(char *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  byte *local_28;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_1 == (char *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    if ((*param_1 != '\0') && (*param_1 != '\n')) {
      iVar1 = strncmp(param_1,"Proc-Type: ",0xb);
      if (iVar1 == 0) {
        if ((param_1[0xb] == '4') && (param_1[0xc] == ',')) {
          iVar1 = strncmp(param_1 + 0xd,"ENCRYPTED",9);
          if (iVar1 == 0) {
            for (; param_1[0xd] != '\0'; param_1 = param_1 + 1) {
              if (param_1[0xd] == '\n') {
                iVar1 = strncmp(param_1 + 0xe,"DEK-Info: ",10);
                if (iVar1 == 0) {
                  lVar6 = 0;
                  pcVar7 = param_1;
                  while( true ) {
                    local_28 = (byte *)(pcVar7 + 0x18);
                    if (((*local_28 != 0x2d) && (0x19 < *local_28 - 0x41)) &&
                       (iVar1 = FUN_0078cfcc(), iVar1 == 0)) break;
                    lVar6 = lVar6 + 1;
                    pcVar7 = pcVar7 + 1;
                  }
                  FUN_00620008(&local_50,param_1 + 0x18,lVar6);
                  lVar6 = FUN_0078fd2c(local_50,uStack_48);
                  local_28 = (byte *)(pcVar7 + 0x19);
                  *param_2 = lVar6;
                  if (lVar6 == 0) {
                    uVar4 = 0x72;
                    uVar5 = 0x1a8;
                  }
                  else {
                    uVar2 = FUN_00729e0c();
                    if (7 < uVar2) {
                      uVar3 = FUN_00729e0c(*param_2);
                      uVar4 = FUN_00790170(&local_28,param_2 + 1,uVar3);
                      return uVar4;
                    }
                    uVar4 = 0x72;
                    uVar5 = 0x1af;
                  }
                }
                else {
                  uVar4 = 0x6b;
                  uVar5 = 0x198;
                }
                goto LAB_0078f638;
              }
            }
            uVar4 = 0x70;
            uVar5 = 0x193;
          }
          else {
            uVar4 = 0x6c;
            uVar5 = 0x18c;
          }
        }
        else {
          uVar4 = 0x73;
          uVar5 = 0x187;
        }
      }
      else {
        uVar4 = 0x6d;
        uVar5 = 0x182;
      }
LAB_0078f638:
      FUN_00777eb4(9,0,uVar4,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",uVar5);
      uVar4 = 0;
    }
  }
  return uVar4;
}


// ===== 0078f73c  FUN_0078f73c =====

undefined4 FUN_0078f73c(long *param_1,long param_2,long *param_3,code *param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long local_550;
  long local_548;
  undefined1 auStack_540 [1024];
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
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
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00728fb4(&local_100);
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  memset(auStack_540,0xaa,0x400);
  if (*param_1 == 0) {
LAB_0078f894:
    uVar6 = 1;
    goto LAB_0078f8d8;
  }
  lVar7 = *param_3;
  pcVar1 = FUN_0078fe74;
  if (param_4 != (code *)0x0) {
    pcVar1 = param_4;
  }
  iVar3 = (*pcVar1)(auStack_540,0x400,0,param_5);
  if (iVar3 < 0) {
    uVar4 = 0x68;
    uVar5 = 0x162;
LAB_0078f8d0:
    FUN_00777eb4(9,0,uVar4,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",uVar5);
  }
  else {
    lVar8 = *param_1;
    uVar4 = FUN_007758fc();
    iVar3 = FUN_007902ac(lVar8,uVar4,param_1 + 1,auStack_540,iVar3,1,&local_140,0);
    if (iVar3 != 0) {
      local_550 = 0;
      local_548 = 0;
      iVar3 = FUN_00729568(&local_100,*param_1,0,&local_140,param_1 + 1);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_0072987c(&local_100,param_2,&local_548,lVar7,param_2,lVar7), iVar3 != 0)) {
        iVar3 = FUN_00729a78(&local_100,param_2 + local_548,&local_550,lVar7 - local_548);
        if (iVar3 != 0) {
          *param_3 = local_550 + local_548;
          goto LAB_0078f894;
        }
      }
      uVar4 = 0x65;
      uVar5 = 0x174;
      goto LAB_0078f8d0;
    }
  }
  uVar6 = 0;
LAB_0078f8d8:
  FUN_0072901c(&local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0078f91c  FUN_0078f91c =====

bool FUN_0078f91c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,char *param_6,int param_7,code *param_8,undefined8 param_9)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 **ppuVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined1 *local_578;
  undefined1 *local_570;
  undefined1 *local_568;
  undefined1 *local_560;
  undefined1 *puStack_558;
  undefined1 *local_550;
  undefined1 *puStack_548;
  undefined1 *puStack_540;
  undefined1 *puStack_538;
  undefined1 *local_530;
  undefined1 *puStack_528;
  undefined1 *puStack_520;
  undefined1 *puStack_518;
  char local_510 [1024];
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00728fb4(&local_110);
  local_570 = &DAT_aaaaaaaaaaaaaaaa;
  local_568 = &DAT_aaaaaaaaaaaaaaaa;
  local_578 = &DAT_aaaaaaaaaaaaaaaa;
  memset(local_510,0xaa,0x400);
  puStack_548 = &DAT_aaaaaaaaaaaaaaaa;
  local_550 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_538 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_540 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_528 = &DAT_aaaaaaaaaaaaaaaa;
  local_530 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_518 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_520 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_558 = &DAT_aaaaaaaaaaaaaaaa;
  local_560 = &DAT_aaaaaaaaaaaaaaaa;
  if (param_5 == 0) {
    pcVar8 = (char *)0x0;
LAB_0078fa1c:
    iVar6 = (*param_1)(param_4,0);
    if (-1 < iVar6) {
      puVar14 = (undefined1 *)FUN_0078c954();
      if (puVar14 != (undefined1 *)0x0) {
        local_578 = puVar14;
        iVar7 = (*param_1)(param_4,&local_578);
        local_568 = (undefined1 *)(long)iVar7;
        if (param_5 == 0) {
          local_510[0] = '\0';
LAB_0078fc74:
          iVar6 = FUN_0078fee8(param_3,param_2,local_510,puVar14);
          local_568 = (undefined1 *)(long)iVar6;
          bVar4 = iVar6 != 0;
          goto LAB_0078fcbc;
        }
        uVar5 = FUN_00729e0c(param_5);
        uVar15 = (ulong)uVar5;
        if (param_6 == (char *)0x0) {
          pcVar1 = FUN_0078fe74;
          if (param_8 != (code *)0x0) {
            pcVar1 = param_8;
          }
          param_6 = local_510;
          param_7 = (*pcVar1)(local_510,0x400,1,param_9);
          if (param_7 < 0) {
            FUN_00777eb4(9,0,0x6f,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",0x11b);
            goto LAB_0078fcb8;
          }
        }
        iVar7 = FUN_00793258(&local_560,uVar15);
        if (iVar7 != 0) {
          uVar11 = FUN_007758fc();
          iVar7 = FUN_007902ac(param_5,uVar11,&local_560,param_6,(long)param_7,1,&local_550,0);
          if (iVar7 != 0) {
            if (param_6 == local_510) {
              FUN_0078cba8(local_510,0x400);
            }
            local_510[0] = '\0';
            FUN_0078d45c(local_510,"Proc-Type: 4,",0x400);
            FUN_0078d45c(local_510,"ENCRYPTED",0x400);
            FUN_0078d45c(local_510,&DAT_001ded1c,0x400);
            FUN_0078d45c(local_510,"DEK-Info: ",0x400);
            FUN_0078d45c(local_510,pcVar8,0x400);
            FUN_0078d45c(local_510,&DAT_001ea264,0x400);
            sVar9 = strlen(local_510);
            lVar10 = uVar15 * 2;
            if (lVar10 + 2U <= 0x400 - sVar9) {
              if (uVar5 != 0) {
                pcVar8 = local_510 + sVar9 + 1;
                ppuVar13 = &local_560;
                do {
                  uVar15 = uVar15 - 1;
                  cVar2 = "0123456789ABCDEF"[(ulong)*(byte *)ppuVar13 & 0xf];
                  pcVar8[-1] = "0123456789ABCDEF"[*(byte *)ppuVar13 >> 4];
                  *pcVar8 = cVar2;
                  pcVar8 = pcVar8 + 2;
                  ppuVar13 = (undefined1 **)((long)ppuVar13 + 1);
                } while (uVar15 != 0);
              }
              (local_510 + lVar10 + sVar9)[0] = '\n';
              (local_510 + lVar10 + sVar9)[1] = '\0';
            }
            iVar7 = FUN_0072955c(&local_110,param_5,0,&local_550,&local_560);
            if (((iVar7 != 0) &&
                (iVar7 = FUN_00729670(&local_110,puVar14,&local_570,(ulong)(iVar6 + 0x14),puVar14,
                                      local_568), iVar7 != 0)) &&
               (iVar6 = FUN_00729718(&local_110,puVar14 + (long)local_570,&local_568,
                                     (ulong)(iVar6 + 0x14) - (long)local_570), iVar6 != 0)) {
              local_568 = local_568 + (long)local_570;
              goto LAB_0078fc74;
            }
          }
        }
      }
LAB_0078fcb8:
      bVar4 = false;
      goto LAB_0078fcbc;
    }
    uVar11 = 0xc;
    uVar12 = 0x104;
  }
  else {
    FUN_00729df4(param_5);
    pcVar8 = (char *)FUN_0078de70();
    if (pcVar8 != (char *)0x0) {
      sVar9 = strlen(pcVar8);
      lVar10 = FUN_0078fd2c(pcVar8,sVar9);
      if ((lVar10 != 0) && (uVar5 = FUN_00729e0c(param_5), 7 < uVar5)) goto LAB_0078fa1c;
    }
    uVar11 = 0x71;
    uVar12 = 0xfe;
  }
  FUN_00777eb4(9,0,uVar11,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",uVar12);
  bVar4 = false;
  puVar14 = (undefined1 *)0x0;
LAB_0078fcbc:
  FUN_0078cba8(&local_550,0x40);
  FUN_0078cba8(&local_560,0x10);
  FUN_0078cba8(local_510,0x400);
  FUN_0078cb3c(puVar14);
  FUN_0072901c(&local_110);
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


// ===== 0078fd2c  FUN_0078fd2c =====

undefined8 FUN_0078fd2c(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0xc) {
    iVar1 = memcmp(param_1,"DES-EDE3-CBC",0xc);
    if (iVar1 == 0) {
      uVar2 = FUN_0079056c();
      return uVar2;
    }
  }
  else if (param_2 == 0xb) {
    iVar1 = memcmp(param_1,"AES-128-CBC",0xb);
    if (iVar1 == 0) {
      uVar2 = FUN_00729e18();
      return uVar2;
    }
    if (*param_1 == 0x2d3239312d534541 && *(long *)((long)param_1 + 3) == 0x4342432d3239312d) {
      uVar2 = FUN_00729fa8();
      return uVar2;
    }
    if (*param_1 == 0x2d3635322d534541 && *(long *)((long)param_1 + 3) == 0x4342432d3635322d) {
      uVar2 = FUN_0072a0a0();
      return uVar2;
    }
  }
  else if ((param_2 == 7) &&
          ((int)*param_1 == 0x2d534544 && *(int *)((long)param_1 + 3) == 0x4342432d)) {
    uVar2 = FUN_0079055c();
    return uVar2;
  }
  return 0;
}


// ===== 0078fe74  FUN_0078fe74 =====

ulong FUN_0078fe74(long param_1,uint param_2,undefined8 param_3,char *param_4)

{
  size_t sVar1;
  
  sVar1 = 0xffffffff;
  if (((-1 < (int)param_2) && (param_1 != 0)) && (param_4 != (char *)0x0)) {
    sVar1 = strlen(param_4);
    if (sVar1 < param_2) {
      FUN_0078d3e0(param_1,param_4);
    }
    else {
      sVar1 = 0xffffffff;
    }
  }
  return sVar1 & 0xffffffff;
}


// ===== 0078fee8  FUN_0078fee8 =====

int FUN_0078fee8(undefined8 param_1,char *param_2,char *param_3,long param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  long lVar10;
  int local_a4;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_a4 = -0x55555556;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0076ed28(&local_a0);
  sVar8 = strlen(param_2);
  iVar5 = FUN_0076f9a8(param_1,"-----BEGIN ",0xb);
  if (iVar5 == 0xb) {
    iVar5 = FUN_0076f9a8(param_1,param_2,sVar8 & 0xffffffff);
    if ((iVar5 != (int)sVar8) || (iVar5 = FUN_0076f9a8(param_1,"-----\n",6), iVar5 != 6))
    goto LAB_00790014;
    sVar9 = strlen(param_3);
    if ((0 < (int)sVar9) &&
       ((iVar5 = FUN_0076f9a8(param_1,param_3,sVar9 & 0xffffffff), iVar5 != (int)sVar9 ||
        (iVar5 = FUN_0076f9a8(param_1,&DAT_001ded1c,1), iVar5 != 1)))) goto LAB_00790014;
    lVar10 = FUN_0078c954(0x2000);
    if (lVar10 != 0) {
      if ((long)param_5 < 1) {
        iVar5 = 0;
      }
      else {
        iVar7 = 0;
        iVar5 = 0;
        do {
          uVar2 = param_5;
          if (0x13ff < param_5) {
            uVar2 = 0x1400;
          }
          FUN_0076ed40(&local_a0,lVar10,&local_a4,param_4 + iVar7,uVar2);
          if (local_a4 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_0076f9a8(param_1,lVar10);
            if (iVar6 != local_a4) goto LAB_00790018;
          }
          uVar3 = param_5 - uVar2;
          iVar5 = iVar6 + iVar5;
          iVar7 = iVar7 + (int)uVar2;
          bVar1 = (long)uVar2 <= (long)param_5;
          param_5 = uVar3;
        } while (uVar3 != 0 && bVar1);
      }
      FUN_0076f1f0(&local_a0,lVar10,&local_a4);
      if ((((local_a4 < 1) || (iVar7 = FUN_0076f9a8(param_1,lVar10), iVar7 == local_a4)) &&
          (iVar7 = FUN_0076f9a8(param_1,"-----END ",9), iVar7 == 9)) &&
         (((iVar7 = FUN_0076f9a8(param_1,param_2,sVar8 & 0xffffffff), iVar7 == (int)sVar8 &&
           (iVar7 = FUN_0076f9a8(param_1,"-----\n",6), iVar7 == 6)) &&
          (iVar5 = local_a4 + iVar5, iVar5 != 0)))) goto LAB_00790038;
    }
  }
  else {
LAB_00790014:
    lVar10 = 0;
  }
LAB_00790018:
  FUN_00777eb4(9,0,7,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",0x211);
  iVar5 = 0;
LAB_00790038:
  FUN_0078cb3c(lVar10);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


// ===== 00790170  FUN_00790170 =====

undefined8 FUN_00790170(long *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char local_44 [4];
  
  lVar3 = *param_1;
  if (param_3 != 0) {
    local_44[0] = -0x56;
    memset(param_2,0,param_3);
    uVar4 = 0;
    do {
      iVar1 = FUN_0078d000(local_44,*(undefined1 *)(lVar3 + uVar4));
      if (iVar1 == 0) {
        FUN_00777eb4(9,0,0x67,"../../third_party/boringssl/src/crypto/pem/pem_lib.cc",0x1c5);
        return 0;
      }
      iVar1 = (int)uVar4;
      uVar2 = uVar4 >> 1;
      uVar4 = uVar4 + 1;
      *(byte *)((long)param_2 + uVar2) =
           local_44[0] << (ulong)((iVar1 << 2 ^ 0xffffffffU) & 4) | *(byte *)((long)param_2 + uVar2)
      ;
    } while (param_3 * 2 - uVar4 != 0);
    lVar3 = lVar3 + uVar4;
  }
  *param_1 = lVar3;
  return 1;
}


// ===== 00790244  FUN_00790244 =====

void FUN_00790244(long *param_1,long param_2,long param_3)

{
  if ((param_1[1] != 0) && ((ulong)-*param_1 <= param_1[1] - 1U)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_0078cb3c();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}


// ===== 007902ac  FUN_007902ac =====

ulong FUN_007902ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint local_1b4;
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
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_1b4 = 0;
  uVar7 = FUN_00729e00();
  uVar7 = uVar7 & 0xffffffff;
  iVar4 = FUN_00729e0c(param_1);
  if (param_4 != 0) {
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
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
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
    FUN_0072a6c8(&local_1b0);
    iVar10 = 0;
    do {
      iVar5 = FUN_0072a9e4(&local_1b0,param_2,0);
      if (((iVar5 == 0) ||
          ((((iVar10 != 0 && (iVar5 = FUN_0072aa24(&local_1b0,&local_c0,local_1b4), iVar5 == 0)) ||
            (iVar5 = FUN_0072aa24(&local_1b0,param_4,param_5), iVar5 == 0)) ||
           ((param_3 != 0 && (iVar5 = FUN_0072aa24(&local_1b0,param_3,8), iVar5 == 0)))))) ||
         (iVar5 = FUN_0072aa4c(&local_1b0,&local_c0,&local_1b4), iVar5 == 0)) {
LAB_007904f4:
        uVar7 = 0;
        goto LAB_007904f8;
      }
      iVar5 = param_6 - 1;
      if (1 < param_6) {
        do {
          iVar6 = FUN_0072a9e4(&local_1b0,param_2,0);
          if (((iVar6 == 0) || (iVar6 = FUN_0072aa24(&local_1b0,&local_c0,local_1b4), iVar6 == 0))
             || (iVar6 = FUN_0072aa4c(&local_1b0,&local_c0,&local_1b4), iVar6 == 0))
          goto LAB_007904f4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = (int)uVar7;
      if (iVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar9 = 0;
        puVar11 = param_7;
        do {
          param_7 = puVar11;
          if (uVar9 == local_1b4) {
            uVar2 = (ulong)(uint)(iVar5 - (int)uVar9);
            goto joined_r0x00790494;
          }
          if (puVar11 != (undefined1 *)0x0) {
            if (0x3f < uVar9) goto LAB_007904f0;
            param_7 = puVar11 + 1;
            *puVar11 = *(undefined1 *)((long)&local_c0 + uVar9);
          }
          uVar9 = uVar9 + 1;
          puVar11 = param_7;
        } while (iVar5 != (int)uVar9);
      }
      uVar2 = 0;
      uVar9 = uVar7;
joined_r0x00790494:
      uVar7 = uVar2;
      if ((iVar4 != 0) && (puVar11 = param_8, (uint)uVar9 != local_1b4)) {
        do {
          uVar8 = (uint)uVar9;
          param_8 = puVar11;
          if (uVar8 == local_1b4) break;
          if (puVar11 != (undefined1 *)0x0) {
            if (0x3f < uVar8) {
LAB_007904f0:
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x7904f4);
              (*pcVar3)();
            }
            param_8 = puVar11 + 1;
            *puVar11 = *(undefined1 *)((long)&local_c0 + (uVar9 & 0xffffffff));
          }
          iVar4 = iVar4 + -1;
          uVar9 = (ulong)(uVar8 + 1);
          puVar11 = param_8;
        } while (iVar4 != 0);
      }
      iVar10 = iVar10 + 1;
    } while ((int)uVar7 != 0 || iVar4 != 0);
    uVar7 = FUN_00729e00(param_1);
    uVar7 = uVar7 & 0xffffffff;
LAB_007904f8:
    FUN_0078cba8(&local_c0,0x40);
    FUN_0072a770(&local_1b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079055c  FUN_0079055c =====

undefined * FUN_0079055c(void)

{
  return &DAT_00d34e10;
}


// ===== 0079056c  FUN_0079056c =====

undefined * FUN_0079056c(void)

{
  return &DAT_00d34e58;
}


// ===== 0079057c  FUN_0079057c =====

undefined8 FUN_0079057c(long param_1,undefined8 param_2)

{
  FUN_00790670(param_2,*(undefined8 *)(param_1 + 0x10));
  return 1;
}


// ===== 007905a8  FUN_007905a8 =====

undefined8 FUN_007905a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00792744(param_3,param_2,param_4,*(undefined8 *)(param_1 + 0x10),param_1 + 0x34,
               *(undefined4 *)(param_1 + 0x1c));
  return 1;
}


// ===== 007905e0  FUN_007905e0 =====

undefined8 FUN_007905e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_00790670(param_2,lVar1);
  FUN_00790670(param_2 + 8,lVar1 + 0x80);
  FUN_00790670(param_2 + 0x10,lVar1 + 0x100);
  return 1;
}


// ===== 00790630  FUN_00790630 =====

undefined8 FUN_00790630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_00792974(param_3,param_2,param_4,lVar1,lVar1 + 0x80,lVar1 + 0x100,param_1 + 0x34,
               *(undefined4 *)(param_1 + 0x1c));
  return 1;
}


// ===== 00790670  FUN_00790670 =====

void FUN_00790670(uint *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = 0;
  uVar10 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar9 = param_1[1] ^ uVar10 << 4;
  uVar10 = uVar10 ^ *param_1;
  uVar6 = (uVar10 ^ uVar10 << 0x12) & 0xcccc0000;
  uVar8 = (uVar9 ^ uVar9 << 0x12) & 0xcccc0000;
  uVar10 = (uVar6 | uVar6 >> 0x12) ^ uVar10;
  uVar9 = (uVar8 | uVar8 >> 0x12) ^ uVar9;
  uVar6 = (uVar10 ^ uVar9 >> 1) & 0x55555555;
  uVar9 = uVar9 ^ uVar6 << 1;
  uVar6 = uVar6 ^ uVar10;
  uVar10 = (uVar9 ^ uVar6 >> 8) & 0xff00ff;
  uVar6 = uVar6 ^ uVar10 << 8;
  uVar10 = uVar10 ^ uVar9;
  uVar8 = (uVar6 ^ uVar10 >> 1) & 0x55555555;
  uVar6 = uVar8 ^ uVar6;
  uVar10 = uVar10 ^ uVar8 << 1;
  uVar10 = uVar6 >> 4 & 0xf000000 | uVar10 & 0xff00 | (uVar10 & 0xff) << 0x10 |
           uVar10 >> 0x10 & 0xff;
  puVar7 = (uint *)(param_2 + 4);
  do {
    uVar1 = uVar5 & 0x3f;
    uVar5 = uVar5 + 1;
    bVar4 = (1L << uVar1 & 0x8103U) == 0;
    uVar8 = 1;
    if (bVar4) {
      uVar8 = 2;
    }
    uVar9 = 0x1a;
    if (!bVar4) {
      uVar9 = 0x1b;
    }
    uVar2 = (uVar6 & 0xfffffff) >> (ulong)uVar8;
    uVar8 = uVar10 >> (ulong)uVar8;
    uVar3 = uVar8 | uVar10 << (ulong)uVar9;
    uVar6 = uVar2 | uVar6 << (ulong)uVar9;
    uVar10 = uVar3 & 0xfffffff;
    uVar9 = *(uint *)(&DAT_0020dfa8 + (ulong)(uVar2 >> 7 & 0x3c | uVar2 >> 6 & 3) * 4) |
            *(uint *)(&DAT_0020dea8 + (ulong)(uVar2 & 0x3f) * 4) |
            *(uint *)(&DAT_0020e0a8 + (ulong)(uVar2 >> 0xe & 0x30 | uVar2 >> 0xd & 0xf) * 4) |
            *(uint *)(&DAT_0020e1a8 +
                     (ulong)(uVar2 >> 0x15 & 6 | uVar2 >> 0x14 & 1 | uVar6 >> 0x16 & 0x38) * 4);
    uVar8 = *(uint *)(&DAT_0020e3a8 + (ulong)(uVar8 >> 8 & 0x3c | uVar8 >> 7 & 3) * 4) |
            *(uint *)(&DAT_0020e2a8 + (ulong)(uVar8 & 0x3f) * 4) |
            *(uint *)(&DAT_0020e4a8 + (ulong)(uVar8 >> 0xf & 0x3f) * 4) |
            *(uint *)(&DAT_0020e5a8 + (ulong)(uVar3 >> 0x16 & 0x30 | uVar8 >> 0x15 & 0xf) * 4);
    puVar7[-1] = (uVar8 << 0x10) >> 0x1e | (uVar9 & 0xffff | uVar8 << 0x10) << 2;
    *puVar7 = uVar8 >> 0x1a | (uVar8 & 0xffff0000 | uVar9 >> 0x10) << 6;
    puVar7 = puVar7 + 2;
  } while (uVar5 != 0x10);
  return;
}


// ===== 00790810  FUN_00790810 =====

void FUN_00790810(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar2 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar1 ^ *param_1;
  uVar3 = uVar2 & 0xffff ^ uVar1 >> 0x10;
  uVar1 = uVar1 ^ uVar3 << 0x10;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = (uVar1 ^ uVar3 >> 2) & 0x33333333;
  uVar3 = uVar3 ^ uVar2 << 2;
  uVar2 = uVar2 ^ uVar1;
  uVar1 = (uVar3 ^ uVar2 >> 8) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = uVar1 ^ uVar3;
  uVar3 = (uVar2 ^ uVar1 >> 1) & 0x55555555;
  *param_1 = uVar3 ^ uVar2;
  param_1[1] = uVar1 ^ uVar3 << 1;
  FUN_0079091c(param_1,param_2,1);
  FUN_0079091c(param_1,param_3,0);
  FUN_0079091c(param_1,param_4,1);
  uVar1 = (*param_1 ^ param_1[1] >> 1) & 0x55555555;
  uVar3 = param_1[1] ^ uVar1 << 1;
  uVar1 = uVar1 ^ *param_1;
  uVar2 = (uVar3 ^ uVar1 >> 8) & 0xff00ff;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = uVar2 ^ uVar3;
  uVar3 = (uVar1 ^ uVar2 >> 2) & 0x33333333;
  uVar2 = uVar2 ^ uVar3 << 2;
  uVar3 = uVar3 ^ uVar1;
  uVar4 = uVar2 & 0xffff ^ uVar3 >> 0x10;
  uVar3 = uVar3 ^ uVar4 << 0x10;
  uVar4 = uVar4 ^ uVar2;
  uVar1 = (uVar3 ^ uVar4 >> 4) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar3;
  param_1[1] = uVar4 ^ uVar1 << 4;
  return;
}


// ===== 0079091c  FUN_0079091c =====

void FUN_0079091c(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  uVar6 = *param_1 >> 0x1d | *param_1 << 3;
  uVar3 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar4 = param_2[0x1e] ^ uVar6;
    uVar1 = (param_2[0x1f] ^ uVar6) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (param_2[0x1f] ^ uVar6) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x1c];
    uVar1 = (uVar3 ^ param_2[0x1d]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x1a];
    uVar1 = (uVar6 ^ param_2[0x1b]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x18];
    uVar1 = (uVar3 ^ param_2[0x19]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x16];
    uVar1 = (uVar6 ^ param_2[0x17]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x14];
    uVar1 = (uVar3 ^ param_2[0x15]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x12];
    uVar1 = (uVar6 ^ param_2[0x13]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x10];
    uVar1 = (uVar3 ^ param_2[0x11]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0xe];
    uVar1 = (uVar6 ^ param_2[0xf]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar4 = uVar3 ^ param_2[0xc];
    uVar1 = (uVar3 ^ param_2[0xd]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar4 = uVar6 ^ param_2[10];
    uVar1 = (uVar6 ^ param_2[0xb]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar4 = uVar3 ^ param_2[8];
    uVar1 = (uVar3 ^ param_2[9]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[6];
    uVar1 = (uVar6 ^ param_2[7]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[4];
    uVar1 = (uVar3 ^ param_2[5]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[2];
    uVar1 = (uVar6 ^ param_2[3]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ *param_2;
    lVar5 = 4;
  }
  else {
    uVar4 = *param_2 ^ uVar6;
    uVar1 = (param_2[1] ^ uVar6) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (param_2[1] ^ uVar6) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[2];
    uVar1 = (uVar3 ^ param_2[3]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[4];
    uVar1 = (uVar6 ^ param_2[5]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[6];
    uVar1 = (uVar3 ^ param_2[7]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^
            uVar6;
    uVar4 = uVar6 ^ param_2[8];
    uVar1 = (uVar6 ^ param_2[9]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar4 = uVar3 ^ param_2[10];
    uVar1 = (uVar3 ^ param_2[0xb]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar4 = uVar6 ^ param_2[0xc];
    uVar1 = (uVar6 ^ param_2[0xd]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar4 = uVar3 ^ param_2[0xe];
    uVar1 = (uVar3 ^ param_2[0xf]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4)
            ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x10];
    uVar1 = (uVar6 ^ param_2[0x11]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x12];
    uVar1 = (uVar3 ^ param_2[0x13]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x14];
    uVar1 = (uVar6 ^ param_2[0x15]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x16];
    uVar1 = (uVar3 ^ param_2[0x17]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x18];
    uVar1 = (uVar6 ^ param_2[0x19]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x1a];
    uVar1 = (uVar3 ^ param_2[0x1b]) >> 4;
    uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar6;
    uVar4 = uVar6 ^ param_2[0x1c];
    uVar1 = (uVar6 ^ param_2[0x1d]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar6 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar4 = uVar3 ^ param_2[0x1e];
    lVar5 = 0x7c;
  }
  uVar1 = uVar3 ^ *(uint *)((long)param_2 + lVar5);
  uVar2 = uVar1 >> 4;
  uVar6 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
          *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
          *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
          *(uint *)(&DAT_0020e7a8 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
          *(uint *)(&DAT_0020e9a8 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
          *(uint *)(&DAT_0020eba8 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
          *(uint *)(&DAT_0020eda8 + (ulong)((uVar2 | uVar1 << 0x1c) >> 0x1a) * 4) ^ uVar6;
  *param_1 = uVar3 >> 3 | uVar3 << 0x1d;
  param_1[1] = uVar6 >> 3 | uVar6 << 0x1d;
  return;
}


// ===== 00791748  FUN_00791748 =====

void FUN_00791748(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar2 = param_1[1] ^ uVar1 << 4;
  uVar1 = uVar1 ^ *param_1;
  uVar3 = uVar2 & 0xffff ^ uVar1 >> 0x10;
  uVar1 = uVar1 ^ uVar3 << 0x10;
  uVar3 = uVar3 ^ uVar2;
  uVar2 = (uVar1 ^ uVar3 >> 2) & 0x33333333;
  uVar3 = uVar3 ^ uVar2 << 2;
  uVar2 = uVar2 ^ uVar1;
  uVar1 = (uVar3 ^ uVar2 >> 8) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1 << 8;
  uVar1 = uVar1 ^ uVar3;
  uVar3 = (uVar2 ^ uVar1 >> 1) & 0x55555555;
  *param_1 = uVar3 ^ uVar2;
  param_1[1] = uVar1 ^ uVar3 << 1;
  FUN_0079091c(param_1,param_4,0);
  FUN_0079091c(param_1,param_3,1);
  FUN_0079091c(param_1,param_2,0);
  uVar1 = (*param_1 ^ param_1[1] >> 1) & 0x55555555;
  uVar3 = param_1[1] ^ uVar1 << 1;
  uVar1 = uVar1 ^ *param_1;
  uVar2 = (uVar3 ^ uVar1 >> 8) & 0xff00ff;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = uVar2 ^ uVar3;
  uVar3 = (uVar1 ^ uVar2 >> 2) & 0x33333333;
  uVar2 = uVar2 ^ uVar3 << 2;
  uVar3 = uVar3 ^ uVar1;
  uVar4 = uVar2 & 0xffff ^ uVar3 >> 0x10;
  uVar3 = uVar3 ^ uVar4 << 0x10;
  uVar4 = uVar4 ^ uVar2;
  uVar1 = (uVar3 ^ uVar4 >> 4) & 0xf0f0f0f;
  *param_1 = uVar1 ^ uVar3;
  param_1[1] = uVar4 ^ uVar1 << 4;
  return;
}


// ===== 00791858  FUN_00791858 =====

void FUN_00791858(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  uVar3 = (*param_1 ^ param_1[1] >> 4) & 0xf0f0f0f;
  uVar4 = param_1[1] ^ uVar3 << 4;
  uVar3 = uVar3 ^ *param_1;
  uVar5 = uVar4 & 0xffff ^ uVar3 >> 0x10;
  uVar3 = uVar3 ^ uVar5 << 0x10;
  uVar5 = uVar5 ^ uVar4;
  uVar4 = (uVar3 ^ uVar5 >> 2) & 0x33333333;
  uVar5 = uVar5 ^ uVar4 << 2;
  uVar4 = uVar4 ^ uVar3;
  uVar3 = (uVar5 ^ uVar4 >> 8) & 0xff00ff;
  uVar4 = uVar4 ^ uVar3 << 8;
  uVar3 = uVar3 ^ uVar5;
  uVar5 = (uVar4 ^ uVar3 >> 1) & 0x55555555;
  uVar3 = uVar3 ^ uVar5 << 1;
  uVar5 = uVar5 ^ uVar4;
  uVar4 = uVar5 >> 0x1d | uVar5 << 3;
  uVar3 = uVar3 >> 0x1d | uVar3 << 3;
  if (param_3 == 0) {
    uVar5 = param_2[0x1e] ^ uVar4;
    uVar1 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar5 = uVar3 ^ param_2[0x1c];
    uVar1 = (uVar3 ^ param_2[0x1d]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar5 = uVar4 ^ param_2[0x1a];
    uVar1 = (uVar4 ^ param_2[0x1b]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar5 = uVar3 ^ param_2[0x18];
    uVar1 = (uVar3 ^ param_2[0x19]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar5 = uVar4 ^ param_2[0x16];
    uVar1 = (uVar4 ^ param_2[0x17]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar5 = uVar3 ^ param_2[0x14];
    uVar1 = (uVar3 ^ param_2[0x15]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar5 = uVar4 ^ param_2[0x12];
    uVar1 = (uVar4 ^ param_2[0x13]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar5 = uVar3 ^ param_2[0x10];
    uVar1 = (uVar3 ^ param_2[0x11]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar5 = uVar4 ^ param_2[0xe];
    uVar1 = (uVar4 ^ param_2[0xf]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar5 = uVar3 ^ param_2[0xc];
    uVar1 = (uVar3 ^ param_2[0xd]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar5 = uVar4 ^ param_2[10];
    uVar1 = (uVar4 ^ param_2[0xb]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar5 = uVar3 ^ param_2[8];
    uVar1 = (uVar3 ^ param_2[9]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^
            uVar4;
    uVar5 = uVar4 ^ param_2[6];
    uVar1 = (uVar4 ^ param_2[7]) >> 4;
    uVar5 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar3 = uVar5 ^ param_2[4];
    uVar1 = (uVar5 ^ param_2[5]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar5 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^
            uVar4;
    uVar4 = uVar3 ^ param_2[2];
    uVar1 = (uVar3 ^ param_2[3]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^
            uVar5;
    uVar5 = uVar4 ^ *param_2;
    lVar6 = 4;
  }
  else {
    uVar5 = *param_2 ^ uVar4;
    uVar1 = (param_2[1] ^ uVar4) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar5 = uVar3 ^ param_2[2];
    uVar1 = (uVar3 ^ param_2[3]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[3]) << 0x1c) >> 0x1a) * 4) ^
            uVar4;
    uVar5 = uVar4 ^ param_2[4];
    uVar1 = (uVar4 ^ param_2[5]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[5]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar5 = uVar3 ^ param_2[6];
    uVar1 = (uVar3 ^ param_2[7]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[7]) << 0x1c) >> 0x1a) * 4) ^
            uVar4;
    uVar5 = uVar4 ^ param_2[8];
    uVar1 = (uVar4 ^ param_2[9]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[9]) << 0x1c) >> 0x1a) * 4) ^
            uVar3;
    uVar5 = uVar3 ^ param_2[10];
    uVar1 = (uVar3 ^ param_2[0xb]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0xb]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar5 = uVar4 ^ param_2[0xc];
    uVar1 = (uVar4 ^ param_2[0xd]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0xd]) << 0x1c) >> 0x1a) * 4)
            ^ uVar3;
    uVar5 = uVar3 ^ param_2[0xe];
    uVar1 = (uVar3 ^ param_2[0xf]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0xf]) << 0x1c) >> 0x1a) * 4)
            ^ uVar4;
    uVar5 = uVar4 ^ param_2[0x10];
    uVar1 = (uVar4 ^ param_2[0x11]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0x11]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar5 = uVar3 ^ param_2[0x12];
    uVar1 = (uVar3 ^ param_2[0x13]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x13]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar5 = uVar4 ^ param_2[0x14];
    uVar1 = (uVar4 ^ param_2[0x15]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0x15]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar5 = uVar3 ^ param_2[0x16];
    uVar1 = (uVar3 ^ param_2[0x17]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x17]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar5 = uVar4 ^ param_2[0x18];
    uVar1 = (uVar4 ^ param_2[0x19]) >> 4;
    uVar5 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar4 ^ param_2[0x19]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar3;
    uVar3 = uVar5 ^ param_2[0x1a];
    uVar1 = (uVar5 ^ param_2[0x1b]) >> 4;
    uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar5 ^ param_2[0x1b]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar4;
    uVar4 = uVar3 ^ param_2[0x1c];
    uVar1 = (uVar3 ^ param_2[0x1d]) >> 4;
    uVar4 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020e8a8 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eaa8 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_0020eca8 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_0020e7a8 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_0020e9a8 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_0020eba8 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_0020eda8 + (ulong)((uVar1 | (uVar3 ^ param_2[0x1d]) << 0x1c) >> 0x1a) * 4
                     ) ^ uVar5;
    uVar5 = uVar4 ^ param_2[0x1e];
    lVar6 = 0x7c;
  }
  uVar1 = uVar4 ^ *(uint *)((long)param_2 + lVar6);
  uVar2 = uVar1 >> 4;
  uVar4 = uVar4 >> 3 | uVar4 << 0x1d;
  uVar3 = *(uint *)(&DAT_0020e6a8 + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
          *(uint *)(&DAT_0020e8a8 + (ulong)(uVar5 >> 10 & 0x3f) * 4) ^
          *(uint *)(&DAT_0020eaa8 + (ulong)(uVar5 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&DAT_0020eca8 + (ulong)(uVar5 >> 0x1a) * 4) ^
          *(uint *)(&DAT_0020e7a8 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
          *(uint *)(&DAT_0020e9a8 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
          *(uint *)(&DAT_0020eba8 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
          *(uint *)(&DAT_0020eda8 + (ulong)((uVar2 | uVar1 << 0x1c) >> 0x1a) * 4) ^ uVar3;
  uVar5 = uVar3 >> 3 | uVar3 << 0x1d;
  uVar3 = (uVar4 ^ uVar5 >> 1) & 0x55555555;
  uVar5 = uVar5 ^ uVar3 << 1;
  uVar3 = uVar3 ^ uVar4;
  uVar4 = (uVar5 ^ uVar3 >> 8) & 0xff00ff;
  uVar3 = uVar3 ^ uVar4 << 8;
  uVar4 = uVar4 ^ uVar5;
  uVar5 = (uVar3 ^ uVar4 >> 2) & 0x33333333;
  uVar4 = uVar4 ^ uVar5 << 2;
  uVar5 = uVar5 ^ uVar3;
  uVar1 = uVar4 & 0xffff ^ uVar5 >> 0x10;
  uVar5 = uVar5 ^ uVar1 << 0x10;
  uVar1 = uVar1 ^ uVar4;
  uVar3 = (uVar5 ^ uVar1 >> 4) & 0xf0f0f0f;
  *param_1 = uVar3 ^ uVar5;
  param_1[1] = uVar1 ^ uVar3 << 4;
  return;
}


// ===== 00792744  FUN_00792744 =====

void FUN_00792744(uint *param_1,uint *param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_48;
  uint uStack_44;
  
  uVar6 = *param_5;
  uVar8 = param_5[1];
  if (param_6 == 0) {
    puVar3 = param_2;
    puVar4 = param_1;
    uVar5 = uVar6;
    uVar7 = uVar8;
    if (7 < param_3) {
      do {
        param_1 = puVar4 + 2;
        uVar6 = *puVar4;
        uVar8 = puVar4[1];
        local_48 = uVar6;
        uStack_44 = uVar8;
        FUN_00791858(&local_48,param_4,0);
        param_3 = param_3 - 8;
        param_2 = puVar3 + 2;
        *puVar3 = local_48 ^ uVar5;
        puVar3[1] = uStack_44 ^ uVar7;
        puVar3 = param_2;
        puVar4 = param_1;
        uVar5 = uVar6;
        uVar7 = uVar8;
      } while (7 < param_3);
    }
    uVar5 = uVar6;
    uVar7 = uVar8;
    if (param_3 == 0) goto LAB_00792950;
    uVar5 = *param_1;
    uVar7 = param_1[1];
    local_48 = uVar5;
    uStack_44 = uVar7;
    FUN_00791858(&local_48,param_4,0);
    puVar2 = (undefined1 *)((long)param_2 + param_3);
    local_48 = local_48 ^ uVar6;
    if ((long)param_3 < 4) {
      if (param_3 != 1) {
        if (param_3 != 2) goto LAB_00792934;
        goto LAB_0079293c;
      }
    }
    else {
      uStack_44 = uStack_44 ^ uVar8;
      if ((long)param_3 < 6) {
        if (param_3 != 4) goto LAB_00792928;
      }
      else {
        if (param_3 != 6) {
          puVar2 = puVar2 + -1;
          *puVar2 = (char)(uStack_44 >> 0x10);
        }
        puVar2 = puVar2 + -1;
        *puVar2 = (char)(uStack_44 >> 8);
LAB_00792928:
        puVar2 = puVar2 + -1;
        *puVar2 = (char)uStack_44;
      }
      puVar2 = puVar2 + -1;
      *puVar2 = (char)(local_48 >> 0x18);
LAB_00792934:
      puVar2 = puVar2 + -1;
      *puVar2 = (char)(local_48 >> 0x10);
LAB_0079293c:
      puVar2 = puVar2 + -1;
      *puVar2 = (char)(local_48 >> 8);
    }
    puVar2[-1] = (char)local_48;
    goto LAB_00792950;
  }
  puVar3 = param_2;
  puVar4 = param_1;
  local_48 = uVar6;
  uStack_44 = uVar8;
  if (7 < param_3) {
    do {
      param_1 = puVar4 + 2;
      local_48 = *puVar4 ^ local_48;
      uStack_44 = puVar4[1] ^ uStack_44;
      FUN_00791858(&local_48,param_4,1);
      param_3 = param_3 - 8;
      param_2 = puVar3 + 2;
      *puVar3 = local_48;
      puVar3[1] = uStack_44;
      puVar3 = param_2;
      puVar4 = param_1;
    } while (7 < param_3);
  }
  uVar5 = local_48;
  uVar7 = uStack_44;
  if (param_3 == 0) goto LAB_00792950;
  uVar6 = 0;
  pbVar1 = (byte *)((long)param_1 + param_3);
  if ((long)param_3 < 4) {
    if (param_3 != 1) {
      if (param_3 != 2) goto LAB_007928c0;
      goto LAB_007928c8;
    }
  }
  else {
    if ((long)param_3 < 6) {
      if (param_3 != 4) goto LAB_007928ac;
    }
    else {
      if (param_3 != 6) {
        pbVar1 = pbVar1 + -1;
        uVar6 = (uint)*pbVar1 << 0x10;
      }
      pbVar1 = pbVar1 + -1;
      uVar6 = uVar6 | (uint)*pbVar1 << 8;
LAB_007928ac:
      pbVar1 = pbVar1 + -1;
      uStack_44 = (uVar6 | *pbVar1) ^ uStack_44;
    }
    pbVar1 = pbVar1 + -1;
    uVar6 = (uint)*pbVar1 << 0x18;
LAB_007928c0:
    pbVar1 = pbVar1 + -1;
    uVar6 = uVar6 | (uint)*pbVar1 << 0x10;
LAB_007928c8:
    pbVar1 = pbVar1 + -1;
    uVar6 = uVar6 | (uint)*pbVar1 << 8;
  }
  local_48 = (uVar6 | pbVar1[-1]) ^ local_48;
  FUN_00791858(&local_48,param_4,1);
  *param_2 = local_48;
  param_2[1] = uStack_44;
  uVar5 = local_48;
  uVar7 = uStack_44;
LAB_00792950:
  *param_5 = uVar5;
  param_5[1] = uVar7;
  return;
}


// ===== 00792974  FUN_00792974 =====

void FUN_00792974(uint *param_1,uint *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,uint *param_7,int param_8)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_68;
  uint uStack_64;
  
  uVar8 = *param_7;
  uVar6 = param_7[1];
  if (param_8 == 0) {
    puVar3 = param_2;
    puVar4 = param_1;
    uVar7 = uVar8;
    uVar5 = uVar6;
    if (7 < param_3) {
      do {
        puVar4 = param_1 + 2;
        uVar8 = *param_1;
        uVar6 = param_1[1];
        local_68 = uVar8;
        uStack_64 = uVar6;
        FUN_00791748(&local_68,param_4,param_5,param_6);
        param_3 = param_3 - 8;
        puVar3 = param_2 + 2;
        *param_2 = local_68 ^ uVar7;
        param_2[1] = uStack_64 ^ uVar5;
        param_2 = puVar3;
        param_1 = puVar4;
        uVar7 = uVar8;
        uVar5 = uVar6;
      } while (7 < param_3);
    }
    uVar7 = uVar8;
    uVar5 = uVar6;
    if (param_3 == 0) goto LAB_00792b9c;
    uVar7 = *puVar4;
    uVar5 = puVar4[1];
    local_68 = uVar7;
    uStack_64 = uVar5;
    FUN_00791748(&local_68,param_4,param_5,param_6);
    puVar2 = (undefined1 *)((long)puVar3 + param_3);
    local_68 = local_68 ^ uVar8;
    if ((long)param_3 < 4) {
      if (param_3 != 1) {
        if (param_3 != 2) goto LAB_00792b80;
        goto LAB_00792b88;
      }
    }
    else {
      uStack_64 = uStack_64 ^ uVar6;
      if ((long)param_3 < 6) {
        if (param_3 != 4) goto LAB_00792b74;
      }
      else {
        if (param_3 != 6) {
          puVar2 = puVar2 + -1;
          *puVar2 = (char)(uStack_64 >> 0x10);
        }
        puVar2 = puVar2 + -1;
        *puVar2 = (char)(uStack_64 >> 8);
LAB_00792b74:
        puVar2 = puVar2 + -1;
        *puVar2 = (char)uStack_64;
      }
      puVar2 = puVar2 + -1;
      *puVar2 = (char)(local_68 >> 0x18);
LAB_00792b80:
      puVar2 = puVar2 + -1;
      *puVar2 = (char)(local_68 >> 0x10);
LAB_00792b88:
      puVar2 = puVar2 + -1;
      *puVar2 = (char)(local_68 >> 8);
    }
    puVar2[-1] = (char)local_68;
    goto LAB_00792b9c;
  }
  puVar3 = param_2;
  puVar4 = param_1;
  local_68 = uVar8;
  uStack_64 = uVar6;
  if (7 < param_3) {
    do {
      param_1 = puVar4 + 2;
      local_68 = *puVar4 ^ local_68;
      uStack_64 = puVar4[1] ^ uStack_64;
      FUN_00790810(&local_68,param_4,param_5,param_6);
      param_3 = param_3 - 8;
      param_2 = puVar3 + 2;
      *puVar3 = local_68;
      puVar3[1] = uStack_64;
      puVar3 = param_2;
      puVar4 = param_1;
    } while (7 < param_3);
  }
  uVar7 = local_68;
  uVar5 = uStack_64;
  if (param_3 == 0) goto LAB_00792b9c;
  uVar8 = 0;
  pbVar1 = (byte *)((long)param_1 + param_3);
  if ((long)param_3 < 4) {
    if (param_3 != 1) {
      if (param_3 != 2) goto LAB_00792b08;
      goto LAB_00792b10;
    }
  }
  else {
    if ((long)param_3 < 6) {
      if (param_3 != 4) goto LAB_00792af4;
    }
    else {
      if (param_3 != 6) {
        pbVar1 = pbVar1 + -1;
        uVar8 = (uint)*pbVar1 << 0x10;
      }
      pbVar1 = pbVar1 + -1;
      uVar8 = uVar8 | (uint)*pbVar1 << 8;
LAB_00792af4:
      pbVar1 = pbVar1 + -1;
      uStack_64 = (uVar8 | *pbVar1) ^ uStack_64;
    }
    pbVar1 = pbVar1 + -1;
    uVar8 = (uint)*pbVar1 << 0x18;
LAB_00792b08:
    pbVar1 = pbVar1 + -1;
    uVar8 = uVar8 | (uint)*pbVar1 << 0x10;
LAB_00792b10:
    pbVar1 = pbVar1 + -1;
    uVar8 = uVar8 | (uint)*pbVar1 << 8;
  }
  local_68 = (uVar8 | pbVar1[-1]) ^ local_68;
  FUN_00790810(&local_68,param_4,param_5,param_6);
  *param_2 = local_68;
  param_2[1] = uStack_64;
  uVar7 = local_68;
  uVar5 = uStack_64;
LAB_00792b9c:
  *param_7 = uVar7;
  param_7[1] = uVar5;
  return;
}


// ===== 00792bc4  FUN_00792bc4 =====

void FUN_00792bc4(long param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *param_2;
  uVar9 = *param_2;
  uVar6 = *(ulong *)((long)param_2 + 4);
  uVar4 = *(uint *)((long)param_2 + 0xc);
  uVar7 = param_2[1];
  puVar1 = (uint *)(param_1 + ((ulong)(uint)-(int)param_1 & 0x3f));
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  uVar2 = (uint)(uVar9 >> 0x1a) & 0x3ffff03;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *puVar1 = (uint)uVar8 & 0x3ffffff;
  puVar1[1] = uVar2;
  uVar5 = uVar4 >> 8 & 0xfffff;
  uVar4 = (uint)(uVar6 >> 0x14) & 0x3ffc0ff;
  uVar3 = (uint)(uVar7 >> 0xe) & 0x3f03fff;
  puVar1[2] = uVar4;
  puVar1[3] = uVar3;
  puVar1[4] = uVar5;
  puVar1[5] = uVar2 * 5;
  puVar1[6] = uVar4 * 5;
  puVar1[7] = uVar3 * 5;
  puVar1[8] = uVar5 * 5;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  uVar9 = param_2[2];
  *(ulong *)(puVar1 + 0x16) = param_2[3];
  *(ulong *)(puVar1 + 0x14) = uVar9;
  return;
}


// ===== 00792c48  FUN_00792c48 =====

void FUN_00792c48(long param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 != 0) {
    param_1 = param_1 + ((ulong)(uint)-(int)param_1 & 0x3f);
    lVar5 = *(long *)(param_1 + 0x48);
    if (lVar5 != 0) {
      lVar4 = 0x10;
      uVar3 = 0x10U - lVar5;
      if (param_3 <= 0x10U - lVar5) {
        uVar3 = param_3;
      }
      if (lVar5 != 0x10) {
        lVar4 = 0;
        lVar5 = param_1 + 0x38;
        uVar6 = uVar3;
        do {
          if (0xf < (ulong)(lVar4 + *(long *)(param_1 + 0x48))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(0x5512,0x792d58);
            (*pcVar2)();
          }
          puVar1 = (undefined1 *)(param_2 + lVar4);
          uVar6 = uVar6 - 1;
          lVar4 = lVar4 + 1;
          *(undefined1 *)(lVar5 + *(long *)(param_1 + 0x48)) = *puVar1;
          lVar5 = lVar5 + 1;
        } while (uVar6 != 0);
        lVar4 = *(long *)(param_1 + 0x48);
      }
      param_3 = param_3 - uVar3;
      param_2 = param_2 + uVar3;
      *(ulong *)(param_1 + 0x48) = lVar4 + uVar3;
      if (lVar4 + uVar3 == 0x10) {
        FUN_00792d58(param_1,param_1 + 0x38,0x10);
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
    }
    if (0xf < param_3) {
      FUN_00792d58(param_1,param_2,param_3 & 0xfffffffffffffff0);
      param_2 = param_2 + (param_3 & 0xfffffffffffffff0);
      param_3 = param_3 & 0xf;
    }
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        *(undefined1 *)(param_1 + 0x38 + uVar3) = *(undefined1 *)(param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
      *(ulong *)(param_1 + 0x48) = param_3;
    }
  }
  return;
}


// ===== 00792d58  FUN_00792d58 =====

void FUN_00792d58(uint *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  long local_38;
  
  lVar8 = tpidr_el0;
  local_38 = *(long *)(lVar8 + 0x28);
  uStack_48 = 0xaaaaaaaa;
  uStack_44 = 0xaaaaaaaa;
  local_50 = 0xaaaaaaaa;
  uStack_4c = 0xaaaaaaaa;
  if (param_3 < 0x10) goto LAB_00792ec0;
  uVar11 = param_1[9];
  uVar13 = param_1[10];
  uVar14 = param_1[0xb];
  uVar16 = param_1[0xc];
  uVar18 = param_1[0xd];
  do {
    uVar9 = *param_2;
    puVar5 = (ulong *)((long)param_2 + 4);
    uVar12 = *param_2;
    puVar1 = param_2 + 1;
    puVar6 = (uint *)((long)param_2 + 0xc);
    param_2 = param_2 + 2;
    param_3 = param_3 - 0x10;
    uVar11 = uVar11 + ((uint)uVar9 & 0x3ffffff);
    uVar13 = ((uint)(uVar12 >> 0x1a) & 0x3ffffff) + uVar13;
    uVar15 = ((uint)(*puVar5 >> 0x14) & 0x3ffffff) + uVar14;
    uVar17 = uVar16 + ((uint)(*puVar1 >> 0xe) & 0x3ffffff);
    uVar18 = uVar18 + (*puVar6 >> 8) + 0x1000000;
    param_1[9] = uVar11;
    param_1[10] = uVar13;
    param_1[0xb] = uVar15;
    param_1[0xc] = uVar17;
    param_1[0xd] = uVar18;
    while( true ) {
      uVar4 = *param_1;
      uVar7 = param_1[1];
      uVar14 = param_1[7];
      uVar16 = param_1[8];
      uVar10 = (ulong)param_1[2];
      uVar19 = (ulong)uVar4 * (ulong)uVar11 + (ulong)uVar16 * (ulong)uVar13 +
               (ulong)uVar14 * (ulong)uVar15 + (ulong)param_1[6] * (ulong)uVar17 +
               (ulong)param_1[5] * (ulong)uVar18;
      uVar2 = (ulong)uVar4 * (ulong)uVar13 + (ulong)uVar16 * (ulong)uVar15 +
              (ulong)uVar14 * (ulong)uVar17 + (ulong)param_1[6] * (ulong)uVar18 +
              (ulong)uVar7 * (ulong)uVar11 + (uVar19 >> 0x1a);
      uVar12 = (ulong)uVar4 * (ulong)uVar15 + (ulong)uVar16 * (ulong)uVar17 +
               (ulong)uVar14 * (ulong)uVar18 + (ulong)uVar7 * (ulong)uVar13 + uVar10 * uVar11 +
               (uVar2 >> 0x1a & 0xffffffff);
      uVar9 = (ulong)uVar4 * (ulong)uVar17 + (ulong)uVar16 * (ulong)uVar18 +
              (ulong)uVar7 * (ulong)uVar15 + uVar10 * uVar13 + (ulong)param_1[3] * (ulong)uVar11 +
              (uVar12 >> 0x1a & 0xffffffff);
      uVar14 = (uint)uVar12 & 0x3ffffff;
      uVar16 = (uint)uVar9 & 0x3ffffff;
      param_1[0xb] = uVar14;
      param_1[0xc] = uVar16;
      uVar12 = (ulong)uVar4 * (ulong)uVar18 + (ulong)uVar7 * (ulong)uVar17 + uVar10 * uVar15 +
               (ulong)param_1[3] * (ulong)uVar13 + (ulong)param_1[4] * (ulong)uVar11 +
               (uVar9 >> 0x1a & 0xffffffff);
      uVar18 = (uint)uVar12 & 0x3ffffff;
      param_1[0xd] = uVar18;
      uVar13 = (uint)uVar2 & 0x3ffffff;
      uVar11 = (int)(uVar12 >> 0x1a) * 5 + ((uint)uVar19 & 0x3ffffff);
      param_1[9] = uVar11;
      param_1[10] = uVar13;
      if (0xf < param_3) break;
LAB_00792ec0:
      if (param_3 == 0) {
        if (*(long *)(lVar8 + 0x28) == local_38) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar12 = 0;
      do {
        *(undefined1 *)((long)&local_50 + uVar12) = *(undefined1 *)((long)param_2 + uVar12);
        uVar12 = uVar12 + 1;
      } while (param_3 != uVar12);
      *(undefined1 *)((long)&local_50 + param_3) = 1;
      if (uVar12 != 0xf) {
        lVar3 = 0;
        if (param_3 < 0xf) {
          lVar3 = 0xe - param_3;
        }
        memset((void *)((long)&local_50 + param_3 + 1),0,lVar3 + 1);
      }
      param_3 = 0;
      uVar11 = param_1[9] + (local_50 & 0x3ffffff);
      uVar18 = param_1[0xd] + (uStack_44 >> 8);
      uVar13 = ((uint)(CONCAT44(uStack_4c,local_50) >> 0x1a) & 0x3ffffff) + param_1[10];
      uVar15 = ((uint)(CONCAT44(uStack_48,uStack_4c) >> 0x14) & 0x3ffffff) + param_1[0xb];
      uVar17 = param_1[0xc] + ((uint)(CONCAT44(uStack_44,uStack_48) >> 0xe) & 0x3ffffff);
    }
  } while( true );
}


// ===== 00792f8c  FUN_00792f8c =====

void FUN_00792f8c(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  
  param_1 = param_1 + ((ulong)(uint)-(int)param_1 & 0x3f);
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00792d58(param_1,param_1 + 0x38);
  }
  uVar2 = *(int *)(param_1 + 0x28) + (*(uint *)(param_1 + 0x24) >> 0x1a);
  uVar3 = *(int *)(param_1 + 0x2c) + (uVar2 >> 0x1a);
  uVar2 = uVar2 & 0x3ffffff;
  uVar4 = *(int *)(param_1 + 0x30) + (uVar3 >> 0x1a);
  uVar3 = uVar3 & 0x3ffffff;
  uVar5 = *(int *)(param_1 + 0x34) + (uVar4 >> 0x1a);
  uVar4 = uVar4 & 0x3ffffff;
  uVar6 = (uVar5 >> 0x1a) * 5 + (*(uint *)(param_1 + 0x24) & 0x3ffffff);
  uVar1 = uVar6 + 5;
  uVar7 = uVar2 + (uVar1 >> 0x1a);
  uVar8 = uVar3 + (uVar7 >> 0x1a);
  uVar9 = uVar4 + (uVar8 >> 0x1a);
  uVar10 = (uVar5 | 0xfc000000) + (uVar9 >> 0x1a);
  uVar14 = (int)uVar10 >> 0x1f;
  uVar12 = 0xffffffff - uVar14 & 0x3ffffff;
  uVar6 = uVar14 & uVar6 | uVar12 & uVar1;
  uVar2 = uVar14 & uVar2 | uVar12 & uVar7;
  uVar3 = uVar14 & uVar3 | uVar12 & uVar8;
  uVar4 = uVar14 & uVar4 | uVar12 & uVar9;
  *(uint *)(param_1 + 0x24) = uVar6;
  *(uint *)(param_1 + 0x28) = uVar2;
  uVar6 = uVar6 | uVar2 << 0x1a;
  *(uint *)(param_1 + 0x2c) = uVar3;
  *(uint *)(param_1 + 0x30) = uVar4;
  uVar1 = *(uint *)(param_1 + 0x58);
  iVar13 = *(int *)(param_1 + 0x5c);
  uVar5 = 0xffffffff - uVar14 & uVar10 | uVar5 & uVar14 & 0x3ffffff;
  uVar15 = (ulong)(uVar2 >> 6 | uVar3 << 0x14) + (ulong)*(uint *)(param_1 + 0x54) +
           (ulong)CARRY4(uVar6,*(uint *)(param_1 + 0x50));
  *(uint *)(param_1 + 0x34) = uVar5;
  *param_2 = uVar6 + *(uint *)(param_1 + 0x50);
  param_2[1] = (int)uVar15;
  lVar11 = (ulong)(uVar3 >> 0xc | uVar4 << 0xe) + (ulong)uVar1 + (uVar15 >> 0x20);
  param_2[2] = (int)lVar11;
  param_2[3] = (uVar4 >> 0x12 | uVar5 << 8) + iVar13 + (int)((ulong)lVar11 >> 0x20);
  return;
}


// ===== 007930c0  FUN_007930c0 =====

long FUN_007930c0(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_00795de0(&DAT_00d80118,FUN_00793180);
  puVar1 = DAT_00d80120;
  if (DAT_00d80120 == (undefined8 *)0x0) {
    lVar2 = 0x2a;
    if ((DAT_00d80128 & DAT_00d8012c != 0) == 0) {
      lVar2 = 0;
    }
  }
  else {
    lVar2 = DAT_00d80130;
    if ((int)*DAT_00d80120 == 0) {
      FUN_00795d6c(&DAT_00d80138);
      lVar2 = DAT_00d80130;
      if ((int)*puVar1 == 0) {
        lVar2 = 1;
        if (1 < DAT_00d80130 + 1U) {
          lVar2 = DAT_00d80130 + 1;
        }
        DAT_00d80130 = lVar2;
        *(undefined4 *)puVar1 = 1;
      }
      FUN_00795db4(&DAT_00d80138);
    }
  }
  return lVar2;
}


// ===== 00793180  FUN_00793180 =====

undefined4 * FUN_00793180(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *__len;
  
  if ((((DAT_00d80128 & 1) == 0) &&
      (__len = (undefined4 *)sysconf(0x27), param_1 = __len, 0 < (long)__len)) &&
     (param_1 = (undefined4 *)mmap((void *)0x0,(size_t)__len,3,0x22,-1,0),
     param_1 != (undefined4 *)0xffffffffffffffff)) {
    iVar1 = madvise(param_1,(size_t)__len,-1);
    if (iVar1 != 0) {
      uVar2 = madvise(param_1,(size_t)__len,0x12);
      if (uVar2 == 0) {
        *param_1 = 1;
        DAT_00d80120 = param_1;
        DAT_00d80130 = 1;
        return (undefined4 *)(ulong)uVar2;
      }
    }
    uVar2 = munmap(param_1,(size_t)__len);
    return (undefined4 *)(ulong)uVar2;
  }
  return param_1;
}


// ===== 0079323c  FUN_0079323c =====

bool FUN_0079323c(void)

{
  return (int)DAT_00d80170 != 0;
}


// ===== 00793258  FUN_00793258 =====

undefined8 FUN_00793258(void)

{
  FUN_00726e40();
  return 1;
}


// ===== 00793278  FUN_00793278 =====

void FUN_00793278(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined1 local_14 [4];
  
  local_14[0] = 0xaa;
  do {
    lVar2 = syscall(0x116,local_14,1,1);
    if (lVar2 != -1) {
      if (lVar2 == 1) {
        DAT_00d80178 = 0xfffffffd;
        return;
      }
      goto LAB_00793318;
    }
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
  } while (iVar1 == 4);
  if (iVar1 == 0xb) {
    DAT_00d80178 = 0xfffffffd;
    return;
  }
  if (iVar1 != 0x26) {
LAB_00793318:
    perror("getrandom");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    iVar1 = open("/dev/urandom",0x80000);
    if (iVar1 != -1) {
      if (-1 < iVar1) {
        DAT_00d80178 = iVar1;
        return;
      }
      break;
    }
  } while (*piVar3 == 4);
  perror("failed to open /dev/urandom");
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 0079334c  FUN_0079334c =====

void FUN_0079334c(void *param_1,size_t param_2)

{
  int *piVar1;
  long lVar2;
  
  if (param_2 != 0) {
    FUN_00795de0(0xd80174,FUN_00793278);
    piVar1 = (int *)__errno();
    *piVar1 = 0;
    do {
      if (DAT_00d80178 == -3) {
        while (lVar2 = syscall(0x116,param_1,param_2,0), lVar2 == -1) {
          if (*piVar1 != 4) goto LAB_00793418;
        }
      }
      else {
        while (lVar2 = read(DAT_00d80178,param_1,param_2), lVar2 == -1) {
          if (*piVar1 != 4) goto LAB_00793418;
        }
      }
      if (lVar2 < 1) {
LAB_00793418:
        perror("entropy fill failed");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_2 = param_2 - lVar2;
      param_1 = (void *)((long)param_1 + lVar2);
    } while (param_2 != 0);
  }
  return;
}


// ===== 00793428  FUN_00793428 =====

void FUN_00793428(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = (uint)uVar2;
  while ((uVar1 != 0xffffffff &&
         (uVar1 = FUN_00d0f520(uVar2 & 0xffffffff,(uint)uVar2 + 1,param_1), uVar1 != (uint)uVar2)))
  {
    uVar2 = (ulong)uVar1;
  }
  return;
}


// ===== 0079347c  FUN_0079347c =====

bool FUN_0079347c(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = (uint)uVar3;
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return false;
    }
    uVar2 = (uint)uVar3;
    if (uVar2 == 0) break;
    uVar1 = FUN_00d0f520(uVar3 & 0xffffffff,uVar2 - 1,param_1);
    if (uVar1 == uVar2) {
      return uVar2 == 1;
    }
    uVar3 = (ulong)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 007934f4  FUN_007934f4 =====

long FUN_007934f4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  lVar2 = FUN_00742cb0();
  if (lVar2 == 0) {
    return 0;
  }
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  iVar1 = FUN_00772950(param_1,&local_30,0x20000010);
  if (iVar1 != 0) {
    lVar3 = FUN_00719ff4();
    *(long *)(lVar2 + 8) = lVar3;
    if ((lVar3 != 0) && (iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0)) {
      lVar3 = FUN_00719ff4();
      *(long *)(lVar2 + 0x10) = lVar3;
      if ((lVar3 != 0) &&
         ((iVar1 = FUN_0077a170(&local_30,lVar3), iVar1 != 0 && (puStack_28 == (undefined1 *)0x0))))
      {
        iVar1 = FUN_00742cbc(lVar2);
        if (iVar1 != 0) {
          return lVar2;
        }
        uVar4 = 0x68;
        uVar5 = 0x48;
        goto LAB_007935b8;
      }
    }
  }
  uVar4 = 100;
  uVar5 = 0x42;
LAB_007935b8:
  FUN_00777eb4(4,0,uVar4,"../../third_party/boringssl/src/crypto/rsa/rsa_asn1.cc",uVar5);
  FUN_00743408(lVar2);
  return 0;
}


