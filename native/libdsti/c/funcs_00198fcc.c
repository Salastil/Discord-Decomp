// ===== 00198fcc  FUN_00198fcc =====

void FUN_00198fcc(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  void *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  long local_78;
  long *plStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar8 = param_2[6];
  if ((ulong)(param_1[2] - *param_1 >> 3) <
      (ulong)((param_2[1] - *param_2 >> 3) + (param_1[1] - *param_1 >> 3))) {
    FUN_00178fe4(param_1);
  }
  plVar11 = param_1 + 3;
  if ((ulong)(param_1[5] - *plVar11) < (ulong)((param_2[4] - param_2[3]) + (param_1[4] - *plVar11)))
  {
    FUN_00197b08(plVar11);
  }
  puVar5 = (undefined8 *)param_2[1];
  for (puVar2 = (undefined8 *)*param_2; puVar2 != puVar5; puVar2 = puVar2 + 1) {
    puVar3 = (undefined8 *)param_1[1];
    if (puVar3 == (undefined8 *)param_1[2]) {
      FUN_0017912c(param_1,puVar2);
    }
    else {
      *puVar3 = *puVar2;
      param_1[1] = (long)(puVar3 + 1);
    }
  }
  puVar12 = (undefined1 *)param_2[3];
  puVar6 = (undefined1 *)param_2[4];
  if (puVar12 != puVar6) {
    do {
      puVar4 = (undefined1 *)param_1[4];
      if (puVar4 == (undefined1 *)param_1[5]) {
        lVar13 = (long)puVar4 - *plVar11;
        uVar1 = lVar13 + 1;
        if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar9 = param_1[5] - *plVar11;
        uVar10 = uVar9 * 2;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (0x3ffffffffffffffe < uVar9) {
          uVar1 = 0x7fffffffffffffff;
        }
        local_78 = 0;
        plStack_70 = param_1 + 5;
        if (uVar1 == 0) {
          local_90 = (void *)0x0;
        }
        else {
          local_90 = operator_new(uVar1);
        }
        local_88 = (undefined1 *)((long)local_90 + lVar13);
        local_78 = (long)local_90 + uVar1;
        local_80 = local_88 + 1;
        *local_88 = *puVar12;
        FUN_001991c0(plVar11,&local_90);
        if (local_80 != local_88) {
          local_80 = local_88;
        }
        if (local_90 != (void *)0x0) {
          operator_delete(local_90);
        }
      }
      else {
        *puVar4 = *puVar12;
        param_1[4] = (long)(puVar4 + 1);
      }
      puVar12 = puVar12 + 1;
    } while (puVar6 != puVar12);
  }
  *(undefined1 *)(param_1 + 8) = 1;
  *(int *)(param_1 + 6) = (int)param_1[6] + (int)lVar8;
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001991c0  FUN_001991c0 =====

void FUN_001991c0(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 00199238  FUN_00199238 =====

void FUN_00199238(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar4 = *plStack_50 - *param_1;
  uVar5 = lVar4 >> 2;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0xffffffffffffffe < (ulong)(lVar4 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined4 *)((long)local_70 + lVar6 * 8);
  uVar2 = *param_3;
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 2;
  *local_68 = *param_2;
  local_68[1] = uVar2;
  FUN_001790b4(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff) * 2;
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199358  FUN_00199358 =====

void FUN_00199358(undefined8 *param_1,float *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [16];
  float local_48;
  float local_44;
  float fStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  fVar5 = *param_2;
  fVar4 = param_2[1];
  if (ABS(fVar5 - fVar4) < DAT_00144b68 == (NAN(ABS(fVar5 - fVar4)) || NAN(DAT_00144b68))) {
    if (((ABS(fVar5) < DAT_00144b68 == (NAN(ABS(fVar5)) || NAN(DAT_00144b68))) ||
        (ABS(fVar4 + -1.0) < DAT_00144b68 == (NAN(ABS(fVar4 + -1.0)) || NAN(DAT_00144b68)))) &&
       ((ABS(fVar5 + -1.0) < DAT_00144b68 == (NAN(ABS(fVar5 + -1.0)) || NAN(DAT_00144b68)) ||
        (ABS(fVar4) < DAT_00144b68 == (NAN(ABS(fVar4)) || NAN(DAT_00144b68)))))) {
      fVar4 = (float)FUN_00197338(*param_3 + 8);
      fVar5 = *param_2;
      local_44 = param_2[1];
      if (fVar5 < local_44 == (NAN(fVar5) || NAN(local_44))) {
        local_48 = local_44 * fVar4;
        local_44 = fVar5 - local_44;
        fStack_40 = (float)NEON_fmsub(fVar5,fVar4,fVar4);
      }
      else {
        fStack_40 = (local_44 - fVar5) * fVar4;
        local_48 = 0.0;
        local_44 = fVar5;
      }
      local_44 = local_44 * fVar4;
      local_3c = 0x7f7fffff;
      FUN_0018e19c(auStack_88,&local_48,4);
      FUN_0018e734(param_1,auStack_88,param_3);
      FUN_00177938(auStack_58);
    }
    else {
      param_3 = (long *)*param_3;
      *param_1 = param_3;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
        if (bVar2) {
          *param_3 = *param_3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    *param_1 = 0;
    FUN_00177f84(param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001994b8  FUN_001994b8 =====

void FUN_001994b8(undefined4 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[10] = 0;
  FUN_00199534(param_1 + 0x14,param_3 + param_2);
  FUN_001995a8(param_1 + 0x18,param_3 + param_2);
  FUN_00199614(param_1 + 0x1c,param_3);
  FUN_001995a8(param_1 + 0x20,param_3);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x22);
  return;
}


// ===== 00199534  FUN_00199534 =====

void FUN_00199534(ulong *param_1,ulong param_2)

{
  void *__s;
  void *pvVar1;
  ulong __n;
  
  if (*param_1 <= param_2) {
    __n = param_2 << 4;
    if (param_2 >> 0x3c != 0) {
      __n = 0xffffffffffffffff;
    }
    *param_1 = param_2;
    __s = operator_new__(__n);
    memset(__s,0,__n);
    pvVar1 = (void *)param_1[1];
    param_1[1] = (ulong)__s;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      return;
    }
  }
  return;
}


// ===== 001995a8  FUN_001995a8 =====

void FUN_001995a8(ulong *param_1,ulong param_2)

{
  void *__s;
  void *pvVar1;
  
  if (*param_1 <= param_2) {
    *param_1 = param_2;
    __s = operator_new__(param_2);
    memset(__s,0,param_2);
    pvVar1 = (void *)param_1[1];
    param_1[1] = (ulong)__s;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      return;
    }
  }
  return;
}


// ===== 00199614  FUN_00199614 =====

void FUN_00199614(ulong *param_1,ulong param_2)

{
  ulong __n;
  void *__s;
  void *pvVar1;
  
  if (*param_1 <= param_2) {
    __n = param_2 * 2;
    if (CARRY8(param_2,param_2)) {
      __n = 0xffffffffffffffff;
    }
    *param_1 = param_2;
    __s = operator_new__(__n);
    memset(__s,0,__n);
    pvVar1 = (void *)param_1[1];
    param_1[1] = (ulong)__s;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      return;
    }
  }
  return;
}


// ===== 00199684  FUN_00199684 =====

void FUN_00199684(short *param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  short sVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_2;
  uVar6 = *(long *)(lVar8 + 0x10) - *(long *)(lVar8 + 8) >> 3;
  if (uVar6 >> 0xf == 0) {
    uVar5 = FUN_00197a90(lVar8 + 8);
    FUN_001994b8(param_1,uVar6,uVar5);
    puVar7 = *(undefined1 **)(lVar8 + 0x20);
    puVar2 = *(undefined1 **)(lVar8 + 0x28);
    if (puVar7 != puVar2) {
      lVar9 = 0;
      do {
        switch(*puVar7) {
        case 0:
          FUN_001997dc(param_1,*(long *)(lVar8 + 8) + lVar9 * 8);
          lVar9 = lVar9 + 1;
          break;
        case 1:
          sVar3 = param_1[1];
          uVar5 = *(undefined8 *)(*(long *)(lVar8 + 8) + lVar9 * 8);
          lVar9 = lVar9 + 1;
          plVar4 = (long *)(*(long *)(param_1 + 4) + (long)sVar3 * 0x10);
          plVar4[1] = (long)((float)((ulong)uVar5 >> 0x20) * 64.0);
          *plVar4 = (long)((float)uVar5 * 64.0);
          *(undefined1 *)(*(long *)(param_1 + 8) + (long)sVar3) = 1;
          param_1[1] = param_1[1] + 1;
          break;
        case 2:
          lVar1 = *(long *)(lVar8 + 8) + lVar9 * 8;
          FUN_00199898(*(undefined4 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x14),param_1,lVar1,
                       lVar1 + 8);
          lVar9 = lVar9 + 3;
          break;
        case 3:
          FUN_00199938(param_1);
        }
        puVar7 = puVar7 + 1;
      } while (puVar2 != puVar7);
    }
    if (param_1[1] != 0) {
      *(short *)(*(long *)(param_1 + 0xc) + (long)*param_1 * 2) = param_1[1] + -1;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}


// ===== 001997dc  FUN_001997dc =====

void FUN_001997dc(short *param_1,undefined8 *param_2)

{
  long *plVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  sVar2 = param_1[1];
  plVar1 = (long *)(*(long *)(param_1 + 4) + (long)sVar2 * 0x10);
  plVar1[1] = (long)((float)((ulong)uVar3 >> 0x20) * 64.0);
  *plVar1 = (long)((float)uVar3 * 64.0);
  *(undefined1 *)(*(long *)(param_1 + 8) + (long)sVar2) = 1;
  if (param_1[1] == 0) {
    sVar2 = *param_1;
  }
  else {
    *(short *)(*(long *)(param_1 + 0xc) + (long)*param_1 * 2) = param_1[1] + -1;
    sVar2 = *param_1 + 1;
    *param_1 = sVar2;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)sVar2) = 1;
  param_1[1] = param_1[1] + 1;
  return;
}


// ===== 00199898  FUN_00199898 =====

void FUN_00199898(float param_1,float param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  short sVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = *param_4;
  sVar1 = *(short *)(param_3 + 2);
  plVar2 = (long *)(*(long *)(param_3 + 8) + (long)sVar1 * 0x10);
  plVar2[1] = (long)((float)((ulong)uVar3 >> 0x20) * 64.0);
  *plVar2 = (long)((float)uVar3 * 64.0);
  *(undefined1 *)(*(long *)(param_3 + 0x10) + (long)sVar1) = 2;
  sVar1 = *(short *)(param_3 + 2) + 1;
  *(short *)(param_3 + 2) = sVar1;
  uVar3 = *param_5;
  plVar2 = (long *)(*(long *)(param_3 + 8) + (long)sVar1 * 0x10);
  plVar2[1] = (long)((float)((ulong)uVar3 >> 0x20) * 64.0);
  *plVar2 = (long)((float)uVar3 * 64.0);
  *(undefined1 *)(*(long *)(param_3 + 0x10) + (long)sVar1) = 2;
  sVar1 = *(short *)(param_3 + 2) + 1;
  plVar2 = (long *)(*(long *)(param_3 + 8) + (long)sVar1 * 0x10);
  *(short *)(param_3 + 2) = sVar1;
  *plVar2 = (long)(param_1 * 64.0);
  plVar2[1] = (long)(param_2 * 64.0);
  *(undefined1 *)(*(long *)(param_3 + 0x10) + (long)sVar1) = 1;
  *(short *)(param_3 + 2) = *(short *)(param_3 + 2) + 1;
  return;
}


// ===== 00199938  FUN_00199938 =====

void FUN_00199938(short *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(*(long *)(param_1 + 0x10) + (long)*param_1) = 0;
  uVar3 = (ulong)*param_1;
  if (uVar3 != 0) {
    uVar3 = (ulong)((int)*(short *)(*(long *)(param_1 + 0xc) + uVar3 * 2 + -2) + 1);
  }
  iVar4 = (int)param_1[1];
  if ((int)uVar3 == iVar4) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + (long)(int)uVar3 * 0x10);
  uVar5 = *puVar1;
  puVar2 = (undefined8 *)(*(long *)(param_1 + 4) + (long)iVar4 * 0x10);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar5;
  *(undefined1 *)(*(long *)(param_1 + 8) + (long)iVar4) = 1;
  param_1[1] = param_1[1] + 1;
  return;
}


// ===== 001999c4  FUN_001999c4 =====

void FUN_001999c4(float param_1,float param_2,long param_3,char param_4,char param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(long *)(param_3 + 0x40) = (long)(param_1 * 32.0);
  *(long *)(param_3 + 0x48) = (long)(param_2 * 65536.0);
  uVar1 = 2;
  if (param_4 != '\x01') {
    uVar1 = (uint)(param_4 == '\x02');
  }
  uVar2 = 0;
  if (param_5 != '\x02') {
    uVar2 = 3;
  }
  if (param_5 == '\x01') {
    uVar2 = 1;
  }
  *(uint *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 0x38) = uVar2;
  return;
}


// ===== 00199a08  FUN_00199a08 =====

void FUN_00199a08(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (*param_2 != 0) {
    puVar3 = (undefined8 *)FUN_00199e10();
    plVar4 = (long *)*puVar3;
    *param_1 = plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
  *param_1 = 0;
  FUN_001776ec(param_1);
  return;
}


// ===== 00199a5c  FUN_00199a5c =====

void FUN_00199a5c(long *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  __shared_weak_count *this;
  
  if (*param_1 == 0) {
    puVar4 = (undefined8 *)operator_new(0x140);
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_00209600;
    FUN_0019a0bc(puVar4 + 3);
    this = (__shared_weak_count *)param_1[1];
    *param_1 = (long)(puVar4 + 3);
    param_1[1] = (long)puVar4;
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
        return;
      }
    }
  }
  return;
}


// ===== 00199b08  FUN_00199b08 =====

void FUN_00199b08(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  ulong local_58;
  ulong local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cVar1 = *(char *)(param_1 + 0x8b);
  FUN_00199684(param_2,param_1 + 0x68);
  if (cVar1 == '\0') {
    *(uint *)(param_2 + 0x28) = (uint)(*(char *)(param_1 + 0x88) == '\0') << 1;
  }
  else {
    FUN_001999c4(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),param_2,
                 *(undefined1 *)(param_1 + 0x89),*(undefined1 *)(param_1 + 0x8a));
    FUN_0019a374(*param_3,*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x34),
                 *(undefined4 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x48));
    FUN_0019c084(*param_3,param_2);
    FUN_0019bec8(*param_3,&local_50,&local_58);
    FUN_001994b8(param_2,local_50 & 0xffffffff,local_58 & 0xffffffff);
    FUN_0019c04c(*param_3,param_2);
  }
  FUN_00199eb8(param_1,param_2);
  local_58 = 0;
  FUN_00177f84(&local_58);
  local_50 = *(ulong *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x68) = local_58;
  local_58 = 0;
  FUN_00177938(&local_50);
  FUN_00177938(&local_58);
  FUN_00199f7c(param_1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199c2c  FUN_00199c2c =====

void FUN_00199c2c(long *param_1,long *param_2,undefined1 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00199a5c();
  lVar2 = *param_2;
  lVar3 = *param_1;
  if (*(long *)(lVar2 + 0x20) == *(long *)(lVar2 + 0x28)) {
    FUN_00199e10(lVar3);
    FUN_00177da0();
    FUN_0019e480();
  }
  else {
    *param_2 = 0;
    *(undefined2 *)(lVar3 + 0x60) = 0x100;
    uStack_50 = *(undefined8 *)(lVar3 + 0x68);
    *(long *)(lVar3 + 0x68) = lVar2;
    local_58 = 0;
    FUN_00177938(&uStack_50);
    *(undefined1 *)(lVar3 + 0x88) = param_3;
    uVar5 = param_4[1];
    uVar4 = *param_4;
    *(undefined1 *)(lVar3 + 0x8b) = 0;
    *(undefined8 *)(lVar3 + 0x80) = uVar5;
    *(undefined8 *)(lVar3 + 0x78) = uVar4;
    FUN_00177938(&local_58);
    lVar2 = *param_1;
    FUN_00199b08(lVar2,lVar2 + 0x90,lVar2 + 0x120);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199d00  FUN_00199d00 =====

void FUN_00199d00(float param_1,undefined4 param_2,long *param_3,long *param_4,undefined1 param_5,
                 undefined1 param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00199a5c();
  lVar3 = *param_3;
  fVar6 = ABS(param_1);
  if ((fVar6 == DAT_00144b68 || fVar6 < DAT_00144b68 != (NAN(fVar6) || NAN(DAT_00144b68))) ||
     (lVar2 = *param_4, *(long *)(lVar2 + 0x20) == *(long *)(lVar2 + 0x28))) {
    FUN_00199e10(lVar3);
    FUN_00177da0();
    FUN_0019e480();
  }
  else {
    *param_4 = 0;
    *(undefined2 *)(lVar3 + 0x60) = 0x100;
    uStack_70 = *(undefined8 *)(lVar3 + 0x68);
    *(long *)(lVar3 + 0x68) = lVar2;
    local_78 = 0;
    FUN_00177938(&uStack_70);
    *(undefined1 *)(lVar3 + 0x89) = param_5;
    *(undefined1 *)(lVar3 + 0x8a) = param_6;
    *(float *)(lVar3 + 0x70) = param_1;
    *(undefined4 *)(lVar3 + 0x74) = param_2;
    uVar5 = param_7[1];
    uVar4 = *param_7;
    *(undefined1 *)(lVar3 + 0x8b) = 1;
    *(undefined8 *)(lVar3 + 0x80) = uVar5;
    *(undefined8 *)(lVar3 + 0x78) = uVar4;
    FUN_00177938(&local_78);
    lVar3 = *param_3;
    FUN_00199b08(lVar3,lVar3 + 0x90,lVar3 + 0x120);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199e10  FUN_00199e10 =====

long FUN_00199e10(long param_1)

{
  long lVar1;
  mutex *local_48;
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x61) != '\0') {
    local_48 = (mutex *)(param_1 + 8);
    local_40 = '\x01';
    std::__ndk1::mutex::lock(local_48);
    if (*(char *)(param_1 + 0x60) == '\0') {
      do {
        std::__ndk1::condition_variable::wait
                  ((condition_variable *)(param_1 + 0x30),(unique_lock *)&local_48);
      } while (*(char *)(param_1 + 0x60) == '\0');
      *(undefined1 *)(param_1 + 0x61) = 0;
      if (local_40 == '\0') goto LAB_00199e8c;
    }
    else {
      *(undefined1 *)(param_1 + 0x61) = 0;
    }
    std::__ndk1::mutex::unlock(local_48);
  }
LAB_00199e8c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199eb8  FUN_00199eb8 =====

void FUN_00199eb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_80;
  undefined4 local_78;
  code *local_70;
  undefined1 *local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00177da0();
  FUN_0019e480();
  local_68 = &LAB_00199fe8;
  local_78 = 3;
  local_70 = FUN_00199fb8;
  if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 0x7c) < *(int *)(param_1 + 0x84)) {
      local_78 = 7;
      local_58 = (long)*(int *)(param_1 + 0x78);
      lStack_50 = (long)*(int *)(param_1 + 0x7c);
      local_48 = (long)*(int *)(param_1 + 0x80);
      lStack_40 = (long)*(int *)(param_1 + 0x84);
    }
  }
  local_80 = param_2;
  lStack_60 = param_1;
  (**(code **)(PTR_PTR_LAB_0020f868 + 0x10))(0,&local_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00199f7c  FUN_00199f7c =====

void FUN_00199f7c(long param_1)

{
  std::__ndk1::mutex::lock((mutex *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x60) = 1;
  std::__ndk1::mutex::unlock((mutex *)(param_1 + 8));
  std::__ndk1::condition_variable::notify_one((condition_variable *)(param_1 + 0x30));
  return;
}


// ===== 00199fb8  FUN_00199fb8 =====

void FUN_00199fb8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00177da0(param_3);
  FUN_0019e340(uVar1,param_2,(long)param_1);
  return;
}


// ===== 0019a048  FUN_0019a048 =====

void FUN_0019a048(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209600;
  FUN_0019a190(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  return;
}


// ===== 0019a078  FUN_0019a078 =====

void FUN_0019a078(__shared_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00209600;
  FUN_0019a190(param_1 + 0x18);
  std::__ndk1::__shared_count::~__shared_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0019a0bc  FUN_0019a0bc =====

void FUN_0019a0bc(long param_1)

{
  void *__s;
  undefined8 *puVar1;
  
  FUN_001776ec();
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x60) = 1;
  FUN_00177f84(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 100;
  __s = operator_new__(0x640);
  memset(__s,0,0x640);
  *(void **)(param_1 + 0xe8) = __s;
  *(undefined8 *)(param_1 + 0xf0) = 100;
  puVar1 = (undefined8 *)operator_new__(100);
  puVar1[1] = 0;
  *puVar1 = 0;
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
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined8 **)(param_1 + 0xf8) = puVar1;
  *(undefined8 *)(param_1 + 0x100) = 10;
  puVar1 = (undefined8 *)operator_new__(0x14);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined8 **)(param_1 + 0x108) = puVar1;
  *(undefined8 *)(param_1 + 0x110) = 10;
  puVar1 = (undefined8 *)operator_new__(10);
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined8 **)(param_1 + 0x118) = puVar1;
  FUN_0019a300(param_1 + 0x120);
  return;
}


// ===== 0019a190  FUN_0019a190 =====

void FUN_0019a190(long param_1)

{
  void *pvVar1;
  
  FUN_0019a3b0(*(undefined8 *)(param_1 + 0x120));
  pvVar1 = *(void **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  FUN_00177938(param_1 + 0x68);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x30));
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 8));
  FUN_001777c4(param_1);
  return;
}


// ===== 0019a300  FUN_0019a300 =====

undefined8 FUN_0019a300(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0xc0);
  if (pvVar1 != (void *)0x0) {
    *(undefined8 *)((long)pvVar1 + 0x70) = 0;
    *(undefined8 *)((long)pvVar1 + 0x78) = 0;
    *(undefined8 *)((long)pvVar1 + 0x80) = 0;
    *(undefined8 *)((long)pvVar1 + 0xa0) = 0;
    *(undefined8 *)((long)pvVar1 + 0xa8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x98) = 0;
    *(undefined4 *)((long)pvVar1 + 0x8c) = 0xffffffff;
    *(undefined4 *)((long)pvVar1 + 0xb4) = 0xffffffff;
  }
  *param_1 = pvVar1;
  return 0;
}


// ===== 0019a374  FUN_0019a374 =====

void FUN_0019a374(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,long param_5
                 )

{
  if (param_5 < 0x10001) {
    param_5 = 0x10000;
  }
  *(undefined4 *)(param_1 + 0x54) = param_3;
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(long *)(param_1 + 0x60) = param_5;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_4;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}


// ===== 0019a3b0  FUN_0019a3b0 =====

void FUN_0019a3b0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x78));
    free(*(void **)((long)param_1 + 0x80));
    *(undefined8 *)((long)param_1 + 0x70) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x90) = 0;
    free(*(void **)((long)param_1 + 0xa0));
    free(*(void **)((long)param_1 + 0xa8));
    free(param_1);
    return;
  }
  return;
}


// ===== 0019a408  FUN_0019a408 =====

undefined8 FUN_0019a408(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = *param_2 - param_1[2];
  local_60 = param_2[1] - param_1[3];
  if (local_60 != 0 || local_68 != 0) {
    lVar2 = FUN_0019cc8c(&local_68);
    lVar3 = FUN_0019c9ac(local_68,local_60);
    FUN_0019ce1c(&local_68,param_1[0xd],lVar3 + 0x5a0000);
    if ((char)param_1[5] == '\0') {
      param_1[1] = lVar3;
      FUN_0019a5fc(param_1,lVar2);
    }
    else {
      FUN_0019a550(param_1,lVar3,lVar2);
    }
    lVar4 = 0;
    do {
      local_78 = local_68 + *param_2;
      local_70 = local_60 + param_2[1];
      FUN_0019a668((long)param_1 + lVar4 + 0x70,&local_78,1);
      lVar4 = lVar4 + 0x28;
      local_68 = -local_68;
      local_60 = -local_60;
    } while ((int)lVar4 != 0x50);
    *param_1 = lVar3;
    lVar3 = *param_2;
    param_1[3] = param_2[1];
    param_1[2] = lVar3;
    param_1[4] = lVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a550  FUN_0019a550 =====

void FUN_0019a550(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0019ce1c(&local_50,*(undefined8 *)(param_1 + 0x68),param_2 + 0x5a0000);
  local_60 = local_50 + *(long *)(param_1 + 0x10);
  lStack_58 = lStack_48 + *(long *)(param_1 + 0x18);
  FUN_0019c3b8(param_1 + 0x70,&local_60);
  local_60 = *(long *)(param_1 + 0x10) - local_50;
  lStack_58 = *(long *)(param_1 + 0x18) - lStack_48;
  FUN_0019c3b8(param_1 + 0x98,&local_60);
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019a5fc  FUN_0019a5fc =====

void FUN_0019a5fc(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0019ce28(*param_1,param_1[1]);
  if (uVar1 != 0) {
    FUN_0019b9b0(param_1,uVar1 >> 0x3f,param_2);
    FUN_0019bb0c(param_1,(uint)(uVar1 >> 0x3f) ^ 1,param_2);
    return;
  }
  return;
}


// ===== 0019a668  FUN_0019a668 =====

void FUN_0019a668(uint *param_1,long *param_2,undefined1 param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((char)param_1[6] == '\0') {
    if (*param_1 != 0) {
      uVar3 = (ulong)(*param_1 - 1);
      if (((*(long *)(*(long *)(param_1 + 2) + uVar3 * 0x10) - *param_2) + 1U < 3) &&
         ((*(long *)(*(long *)(param_1 + 2) + uVar3 * 0x10 + 8) - param_2[1]) + 1U < 3)) {
        return;
      }
    }
    FUN_0019c404(param_1,1);
    uVar1 = *param_1;
    lVar5 = *param_2;
    lVar4 = *(long *)(param_1 + 4);
    plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x10);
    plVar2[1] = param_2[1];
    *plVar2 = lVar5;
    *(undefined1 *)(lVar4 + (ulong)uVar1) = 1;
    *param_1 = *param_1 + 1;
  }
  else {
    lVar4 = *param_2;
    plVar2 = (long *)(*(long *)(param_1 + 2) + (ulong)(*param_1 - 1) * 0x10);
    plVar2[1] = param_2[1];
    *plVar2 = lVar4;
  }
  *(undefined1 *)(param_1 + 6) = param_3;
  return;
}


// ===== 0019a730  FUN_0019a730 =====

undefined8 FUN_0019a730(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  undefined8 local_2f0;
  long local_2d8;
  long local_2d0;
  long lStack_2c8;
  long local_2c0;
  long lStack_2b8;
  long local_2b0;
  long lStack_2a8;
  long local_2a0;
  long lStack_298;
  long local_290 [68];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  plVar15 = param_1 + 2;
  if (((((*plVar15 - *param_2) + 1U < 3) && ((param_1[3] - param_2[1]) + 1U < 3)) &&
      ((*param_2 - *param_3) + 1U < 3)) && ((param_2[1] - param_3[1]) + 1U < 3)) {
    lVar14 = param_3[1];
    lVar20 = *param_3;
  }
  else {
    lVar20 = 0;
    local_290[1] = param_3[1];
    local_290[0] = *param_3;
    local_290[3] = param_2[1];
    local_290[2] = *param_2;
    bVar7 = true;
    plVar16 = local_290;
    local_290[5] = param_1[3];
    local_290[4] = *plVar15;
    do {
      lVar14 = *param_1;
      local_2d8 = lVar14;
      if (lVar20 < 0x1e) {
        lVar9 = lVar20 * 2;
        lVar17 = *plVar16 - plVar16[2];
        lVar18 = local_290[lVar20 * 2 + 1] - plVar16[3];
        if ((plVar16[2] - plVar16[4]) + 1U < 3) {
          uVar2 = (plVar16[3] - plVar16[5]) + 1;
          if (lVar17 + 1U < 3) {
            if (2 < uVar2) goto LAB_0019a880;
            if (2 < lVar18 + 1U) goto LAB_0019a8a0;
          }
          else {
            if (2 < uVar2) goto LAB_0019a8b4;
LAB_0019a8a0:
            lVar14 = FUN_0019c9ac(lVar17,lVar18);
            local_2d8 = lVar14;
          }
        }
        else {
          if (lVar17 + 1U < 3) {
LAB_0019a880:
            lVar14 = FUN_0019c9ac();
            local_2d8 = lVar14;
            if (lVar18 + 1U < 3) goto LAB_0019a8cc;
          }
          else {
LAB_0019a8b4:
            lVar14 = FUN_0019c9ac();
          }
          local_2d8 = FUN_0019c9ac(lVar17,lVar18);
        }
LAB_0019a8cc:
        lVar18 = FUN_0019ce28(lVar14,local_2d8);
        lVar17 = -lVar18;
        if (-1 < lVar18) {
          lVar17 = lVar18;
        }
        if (lVar17 < 0x1e0000) goto LAB_0019a990;
        if ((char)param_1[5] != '\0') {
          *param_1 = lVar14;
        }
        lVar20 = lVar20 + 2;
        lVar14 = *plVar16 + plVar16[2];
        lVar17 = plVar16[2] + plVar16[4];
        if (lVar17 < 0) {
          lVar17 = lVar17 + 1;
        }
        if (lVar14 < 0) {
          lVar14 = lVar14 + 1;
        }
        plVar16[2] = lVar14 >> 1;
        lVar14 = (lVar14 >> 1) + (lVar17 >> 1);
        plVar16[8] = plVar16[4];
        plVar16[9] = plVar16[5];
        lVar18 = plVar16[3] + plVar16[5];
        if (lVar14 < 0) {
          lVar14 = lVar14 + 1;
        }
        if (lVar18 < 0) {
          lVar18 = lVar18 + 1;
        }
        plVar16[4] = lVar14 >> 1;
        plVar16[6] = lVar17 >> 1;
        plVar16[7] = lVar18 >> 1;
        lVar14 = *(long *)((ulong)(local_290 + lVar9) | 8) + plVar16[3];
        if (lVar14 < 0) {
          lVar14 = lVar14 + 1;
        }
        plVar16[3] = lVar14 >> 1;
        lVar14 = (lVar14 >> 1) + (lVar18 >> 1);
        if (lVar14 < 0) {
          lVar14 = lVar14 + 1;
        }
        plVar16[5] = lVar14 >> 1;
      }
      else {
LAB_0019a990:
        if (bVar7) {
          if ((char)param_1[5] == '\0') {
            param_1[1] = lVar14;
            FUN_0019a5fc(param_1,0);
          }
          else {
            FUN_0019a550(param_1,lVar14,0);
          }
        }
        else {
          lVar17 = FUN_0019ce28(*param_1,lVar14);
          lVar9 = -lVar17;
          if (-1 < lVar17) {
            lVar9 = lVar17;
          }
          if (0x78000 < lVar9) {
            lVar9 = plVar16[4];
            param_1[3] = plVar16[5];
            *plVar15 = lVar9;
            param_1[1] = lVar14;
            *(undefined4 *)(param_1 + 0xb) = 0;
            FUN_0019a5fc(param_1,0);
            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
          }
        }
        lVar9 = FUN_0019ce28(lVar14,local_2d8);
        lVar17 = param_1[0xd];
        if (lVar9 < 0) {
          lVar9 = lVar9 + 1;
        }
        uVar10 = FUN_0019c7ac(lVar9 >> 1);
        uVar10 = FUN_0019c760(lVar17,uVar10);
        if ((char)param_1[10] == '\0') {
          local_2f0 = 0;
        }
        else {
          local_2f0 = FUN_0019c9ac(*plVar16 - plVar16[4],local_290[lVar20 * 2 + 1] - plVar16[5]);
        }
        lVar17 = 0x5a0000;
        puVar19 = (uint *)(param_1 + 0xe);
        bVar7 = true;
        do {
          bVar8 = bVar7;
          FUN_0019ce1c(&local_2a0,uVar10,lVar14 + (lVar9 >> 1) + lVar17);
          local_2a0 = local_2a0 + plVar16[2];
          lStack_298 = lStack_298 + plVar16[3];
          FUN_0019ce1c(&local_2b0,param_1[0xd],lVar17 + local_2d8);
          lVar17 = *(long *)((ulong)(local_290 + lVar20 * 2) | 8);
          local_2b0 = local_2b0 + *plVar16;
          lStack_2a8 = lStack_2a8 + lVar17;
          if ((char)param_1[10] == '\0') {
LAB_0019ac44:
            FUN_0019c404(puVar19,2);
            uVar5 = *puVar19;
            lVar17 = *(long *)(puVar19 + 4);
            plVar1 = (long *)(*(long *)(puVar19 + 2) + (ulong)uVar5 * 0x10);
            plVar1[1] = lStack_298;
            *plVar1 = local_2a0;
            plVar1[3] = lStack_2a8;
            plVar1[2] = local_2b0;
            *(undefined2 *)(lVar17 + (ulong)uVar5) = 0x100;
            *(undefined1 *)(puVar19 + 6) = 0;
            *puVar19 = *puVar19 + 2;
          }
          else {
            plVar1 = (long *)(*(long *)(puVar19 + 2) + (ulong)(*puVar19 - 1) * 0x10);
            lVar3 = *plVar1;
            lVar4 = plVar1[1];
            lVar11 = FUN_0019c9ac(local_2b0 - lVar3,lStack_2a8 - lVar4);
            lVar12 = FUN_0019ce28(local_2f0,lVar11);
            lVar18 = -lVar12;
            if (-1 < lVar12) {
              lVar18 = lVar12;
            }
            if (lVar18 < 0x5a0001) goto LAB_0019ac44;
            lVar18 = FUN_0019c9ac(plVar16[4] - lVar3,plVar16[5] - lVar4);
            lVar12 = FUN_0019c9ac(*plVar16 - local_2b0,lVar17 - lStack_2a8);
            local_2c0 = local_2b0 - lVar3;
            lStack_2b8 = lStack_2a8 - lVar4;
            uVar13 = FUN_0019cc8c(&local_2c0);
            lVar11 = FUN_0019c8e4(lVar11 - lVar12);
            lVar17 = -lVar11;
            if (-1 < lVar11) {
              lVar17 = lVar11;
            }
            lVar12 = FUN_0019c8e4(lVar18 - lVar12);
            lVar11 = -lVar12;
            if (-1 < lVar12) {
              lVar11 = lVar12;
            }
            uVar13 = FUN_0019c704(uVar13,lVar17,lVar11);
            FUN_0019ce1c(&local_2d0,uVar13,lVar18);
            local_2d0 = local_2d0 + lVar3;
            lStack_2c8 = lStack_2c8 + lVar4;
            *(undefined1 *)(puVar19 + 6) = 0;
            FUN_0019a668(puVar19,&local_2d0,0);
            FUN_0019a668(puVar19,&local_2b0,0);
            FUN_0019c404(puVar19,2);
            uVar5 = *puVar19;
            lVar17 = *(long *)(puVar19 + 4);
            plVar1 = (long *)(*(long *)(puVar19 + 2) + (ulong)uVar5 * 0x10);
            plVar1[1] = lStack_298;
            *plVar1 = local_2a0;
            plVar1[2] = lVar3;
            plVar1[3] = lVar4;
            *(undefined2 *)(lVar17 + (ulong)uVar5) = 0x100;
            *(undefined1 *)(puVar19 + 6) = 0;
            *puVar19 = *puVar19 + 2;
            FUN_0019a668(puVar19,&local_2b0,0);
          }
          puVar19 = puVar19 + 10;
          lVar17 = -0x5a0000;
          bVar7 = false;
        } while (bVar8);
        bVar7 = false;
        lVar20 = lVar20 + -2;
        *param_1 = local_2d8;
      }
      plVar16 = local_290 + lVar20 * 2;
    } while (-1 < lVar20);
    lVar14 = param_3[1];
    lVar20 = *param_3;
  }
  param_1[3] = lVar14;
  *plVar15 = lVar20;
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 0019acfc  FUN_0019acfc =====

undefined8 FUN_0019acfc(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined2 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  uint *puVar26;
  long lVar27;
  undefined8 local_340;
  long local_310;
  long lStack_308;
  long local_300;
  long lStack_2f8;
  long local_2f0;
  long lStack_2e8;
  long local_2e0;
  long lStack_2d8;
  long local_2d0;
  long lStack_2c8;
  long local_2c0 [74];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar19 = param_1 + 2;
  if ((((((*plVar19 - *param_2) + 1U < 3) && ((param_1[3] - param_2[1]) + 1U < 3)) &&
       ((*param_2 - *param_3) + 1U < 3)) &&
      (((param_2[1] - param_3[1]) + 1U < 3 && ((*param_3 - *param_4) + 1U < 3)))) &&
     ((param_3[1] - param_4[1]) + 1U < 3)) {
    lVar11 = param_4[1];
    lVar24 = *param_4;
  }
  else {
    local_2c0[1] = param_4[1];
    local_2c0[0] = *param_4;
    local_2c0[3] = param_3[1];
    local_2c0[2] = *param_3;
    lVar24 = 0;
    plVar21 = local_2c0;
    bVar5 = true;
    local_2c0[5] = param_2[1];
    local_2c0[4] = *param_2;
    local_2c0[7] = param_1[3];
    local_2c0[6] = *plVar19;
    do {
      lVar20 = *param_1;
      lVar11 = lVar20;
      lVar10 = lVar20;
      if (lVar24 < 0x20) {
        lVar12 = lVar24 * 2;
        lVar27 = plVar21[2] - plVar21[4];
        lVar25 = plVar21[3] - plVar21[5];
        lVar23 = *plVar21 - plVar21[2];
        bVar6 = 2 < lVar27 + 1U;
        lVar22 = local_2c0[lVar24 * 2 + 1] - plVar21[3];
        bVar7 = 2 < lVar25 + 1U;
        bVar8 = 2 < lVar23 + 1U;
        bVar9 = 2 < lVar22 + 1U;
        if (((plVar21[4] - plVar21[6]) + 1U < 3) && ((plVar21[5] - plVar21[7]) + 1U < 3)) {
          if (bVar6 || bVar7) {
            lVar20 = FUN_0019c9ac(lVar27,lVar25);
            lVar11 = lVar20;
            lVar10 = lVar20;
            if (bVar8 || bVar9) {
              lVar11 = FUN_0019c9ac(lVar23,lVar22);
            }
          }
          else if (bVar8 || bVar9) {
            lVar20 = FUN_0019c9ac(lVar23,lVar22);
            lVar11 = lVar20;
            lVar10 = lVar20;
          }
        }
        else {
          lVar20 = FUN_0019c9ac();
          if (bVar6 || bVar7) {
            lVar10 = FUN_0019c9ac(lVar27,lVar25);
            lVar11 = lVar10;
            if (bVar8 || bVar9) {
              lVar11 = FUN_0019c9ac(lVar23,lVar22);
            }
          }
          else {
            lVar11 = lVar20;
            lVar10 = lVar20;
            if (bVar8 || bVar9) {
              lVar11 = FUN_0019c9ac(lVar23,lVar22);
              lVar10 = FUN_0019ce28(lVar20,lVar11);
              if (lVar10 < 0) {
                lVar10 = lVar10 + 1;
              }
              lVar10 = lVar20 + (lVar10 >> 1);
            }
          }
        }
        lVar23 = FUN_0019ce28(lVar20,lVar10);
        lVar22 = -lVar23;
        if (-1 < lVar23) {
          lVar22 = lVar23;
        }
        lVar25 = FUN_0019ce28(lVar10,lVar11);
        lVar23 = -lVar25;
        if (-1 < lVar25) {
          lVar23 = lVar25;
        }
        if ((lVar22 < 0x168000) && (lVar23 < 0x168000)) goto LAB_0019afe0;
        if ((char)param_1[5] != '\0') {
          *param_1 = lVar20;
        }
        lVar24 = lVar24 + 3;
        lVar11 = *plVar21 + plVar21[2];
        lVar10 = plVar21[4] + plVar21[2];
        lVar20 = plVar21[4] + plVar21[6];
        if (lVar11 < 0) {
          lVar11 = lVar11 + 1;
        }
        if (lVar20 < 0) {
          lVar20 = lVar20 + 1;
        }
        if (lVar10 < 0) {
          lVar10 = lVar10 + 1;
        }
        plVar21[2] = lVar11 >> 1;
        lVar11 = (lVar11 >> 1) + (lVar10 >> 1);
        lVar10 = (lVar20 >> 1) + (lVar10 >> 1);
        plVar21[10] = lVar20 >> 1;
        if (lVar11 < 0) {
          lVar11 = lVar11 + 1;
        }
        if (lVar10 < 0) {
          lVar10 = lVar10 + 1;
        }
        plVar21[4] = lVar11 >> 1;
        lVar11 = (lVar11 >> 1) + (lVar10 >> 1);
        plVar21[8] = lVar10 >> 1;
        if (lVar11 < 0) {
          lVar11 = lVar11 + 1;
        }
        plVar21[0xc] = plVar21[6];
        plVar21[0xd] = plVar21[7];
        plVar21[6] = lVar11 >> 1;
        lVar11 = plVar21[5] + plVar21[7];
        lVar10 = plVar21[5] + plVar21[3];
        lVar20 = *(long *)((ulong)(local_2c0 + lVar12) | 8) + plVar21[3];
        if (lVar20 < 0) {
          lVar20 = lVar20 + 1;
        }
        if (lVar11 < 0) {
          lVar11 = lVar11 + 1;
        }
        if (lVar10 < 0) {
          lVar10 = lVar10 + 1;
        }
        plVar21[3] = lVar20 >> 1;
        lVar20 = (lVar20 >> 1) + (lVar10 >> 1);
        plVar21[0xb] = lVar11 >> 1;
        lVar11 = (lVar11 >> 1) + (lVar10 >> 1);
        if (lVar20 < 0) {
          lVar20 = lVar20 + 1;
        }
        if (lVar11 < 0) {
          lVar11 = lVar11 + 1;
        }
        plVar21[5] = lVar20 >> 1;
        lVar10 = (lVar20 >> 1) + (lVar11 >> 1);
        if (lVar10 < 0) {
          lVar10 = lVar10 + 1;
        }
        plVar21[7] = lVar10 >> 1;
        plVar21[9] = lVar11 >> 1;
      }
      else {
LAB_0019afe0:
        if (bVar5) {
          if ((char)param_1[5] == '\0') {
            param_1[1] = lVar20;
            FUN_0019a5fc(param_1,0);
          }
          else {
            FUN_0019a550(param_1,lVar20,0);
          }
        }
        else {
          lVar22 = FUN_0019ce28(*param_1,lVar20);
          lVar12 = -lVar22;
          if (-1 < lVar22) {
            lVar12 = lVar22;
          }
          if (0x5a000 < lVar12) {
            lVar12 = plVar21[6];
            param_1[3] = plVar21[7];
            *plVar19 = lVar12;
            param_1[1] = lVar20;
            *(undefined4 *)(param_1 + 0xb) = 0;
            FUN_0019a5fc(param_1,0);
            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
          }
        }
        lVar12 = FUN_0019ce28(lVar20,lVar10);
        if (lVar12 < 0) {
          lVar12 = lVar12 + 1;
        }
        lVar22 = FUN_0019ce28(lVar10,lVar11);
        if (lVar22 < 0) {
          lVar22 = lVar22 + 1;
        }
        lVar23 = FUN_0019ce28(lVar20,lVar10);
        if (lVar23 < 0) {
          lVar23 = lVar23 + 1;
        }
        lVar25 = FUN_0019ce28(lVar10,lVar11);
        lVar27 = param_1[0xd];
        if (lVar25 < 0) {
          lVar25 = lVar25 + 1;
        }
        uVar13 = FUN_0019c7ac(lVar12 >> 1);
        uVar13 = FUN_0019c760(lVar27,uVar13);
        lVar12 = param_1[0xd];
        uVar14 = FUN_0019c7ac(lVar22 >> 1);
        uVar14 = FUN_0019c760(lVar12,uVar14);
        if ((char)param_1[10] == '\0') {
          local_340 = 0;
        }
        else {
          local_340 = FUN_0019c9ac(*plVar21 - plVar21[6],local_2c0[lVar24 * 2 + 1] - plVar21[7]);
        }
        lVar12 = 0x5a0000;
        puVar26 = (uint *)(param_1 + 0xe);
        bVar5 = true;
        do {
          bVar6 = bVar5;
          FUN_0019ce1c(&local_2d0,uVar13,lVar20 + (lVar23 >> 1) + lVar12);
          local_2d0 = local_2d0 + plVar21[4];
          lStack_2c8 = lStack_2c8 + plVar21[5];
          FUN_0019ce1c(&local_2e0,uVar14,lVar10 + (lVar25 >> 1) + lVar12);
          local_2e0 = local_2e0 + plVar21[2];
          lStack_2d8 = lStack_2d8 + plVar21[3];
          FUN_0019ce1c(&local_2f0,param_1[0xd],lVar12 + lVar11);
          local_2f0 = local_2f0 + *plVar21;
          lStack_2e8 = lStack_2e8 + *(long *)((ulong)(local_2c0 + lVar24 * 2) | 8);
          if ((char)param_1[10] == '\0') {
LAB_0019b450:
            FUN_0019c404(puVar26,3);
            uVar3 = *puVar26;
            lVar12 = *(long *)(puVar26 + 4);
            plVar1 = (long *)(*(long *)(puVar26 + 2) + (ulong)uVar3 * 0x10);
            plVar1[1] = lStack_2c8;
            *plVar1 = local_2d0;
            puVar2 = (undefined2 *)(lVar12 + (ulong)uVar3);
            plVar1[3] = lStack_2d8;
            plVar1[2] = local_2e0;
            plVar1[5] = lStack_2e8;
            plVar1[4] = local_2f0;
            *puVar2 = 0x202;
            *(undefined1 *)(puVar2 + 1) = 1;
            *(undefined1 *)(puVar26 + 6) = 0;
            *puVar26 = *puVar26 + 3;
          }
          else {
            plVar1 = (long *)(*(long *)(puVar26 + 2) + (ulong)(*puVar26 - 1) * 0x10);
            lVar22 = *plVar1;
            lVar27 = plVar1[1];
            lVar15 = FUN_0019c9ac(local_2f0 - lVar22,lStack_2e8 - lVar27);
            lVar16 = FUN_0019ce28(local_340,lVar15);
            lVar12 = -lVar16;
            if (-1 < lVar16) {
              lVar12 = lVar16;
            }
            if (lVar12 < 0x5a0001) goto LAB_0019b450;
            lVar16 = FUN_0019c9ac(plVar21[6] - lVar22,plVar21[7] - lVar27);
            lVar17 = FUN_0019c9ac(*plVar21 - local_2f0,
                                  *(long *)((ulong)(local_2c0 + lVar24 * 2) | 8) - lStack_2e8);
            local_300 = local_2f0 - lVar22;
            lStack_2f8 = lStack_2e8 - lVar27;
            uVar18 = FUN_0019cc8c(&local_300);
            lVar15 = FUN_0019c8e4(lVar15 - lVar17);
            lVar12 = -lVar15;
            if (-1 < lVar15) {
              lVar12 = lVar15;
            }
            lVar17 = FUN_0019c8e4(lVar16 - lVar17);
            lVar15 = -lVar17;
            if (-1 < lVar17) {
              lVar15 = lVar17;
            }
            uVar18 = FUN_0019c704(uVar18,lVar12,lVar15);
            FUN_0019ce1c(&local_310,uVar18,lVar16);
            local_310 = local_310 + lVar22;
            lStack_308 = lStack_308 + lVar27;
            *(undefined1 *)(puVar26 + 6) = 0;
            FUN_0019a668(puVar26,&local_310,0);
            FUN_0019a668(puVar26,&local_2f0,0);
            FUN_0019c404(puVar26,3);
            uVar3 = *puVar26;
            lVar12 = *(long *)(puVar26 + 4);
            plVar1 = (long *)(*(long *)(puVar26 + 2) + (ulong)uVar3 * 0x10);
            plVar1[1] = lStack_2d8;
            *plVar1 = local_2e0;
            puVar2 = (undefined2 *)(lVar12 + (ulong)uVar3);
            plVar1[4] = lVar22;
            plVar1[5] = lVar27;
            plVar1[3] = lStack_2c8;
            plVar1[2] = local_2d0;
            *puVar2 = 0x202;
            *(undefined1 *)(puVar2 + 1) = 1;
            *(undefined1 *)(puVar26 + 6) = 0;
            *puVar26 = *puVar26 + 3;
            FUN_0019a668(puVar26,&local_2f0,0);
          }
          puVar26 = puVar26 + 10;
          lVar12 = -0x5a0000;
          bVar5 = false;
        } while (bVar6);
        bVar5 = false;
        *param_1 = lVar11;
        lVar24 = lVar24 + -3;
      }
      plVar21 = local_2c0 + lVar24 * 2;
    } while (-1 < lVar24);
    lVar11 = param_4[1];
    lVar24 = *param_4;
  }
  param_1[3] = lVar11;
  *plVar19 = lVar24;
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 0019b56c  FUN_0019b56c =====

undefined8 FUN_0019b56c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  int iVar11;
  
  if (*(char *)((long)param_1 + 0x29) == '\0') {
    if ((param_1[2] != param_1[7]) || (param_1[3] != param_1[8])) {
      FUN_0019a408(param_1);
    }
    param_1[1] = param_1[6];
    uVar2 = FUN_0019ce28(*param_1);
    if (uVar2 != 0) {
      FUN_0019b9b0(param_1,uVar2 >> 0x3f,param_1[9]);
      FUN_0019bb0c(param_1,(uint)(uVar2 >> 0x3f) ^ 1,param_1[9]);
    }
    FUN_0019b884(param_1 + 0xe,0);
    puVar3 = (uint *)(param_1 + 0x13);
    uVar4 = 1;
  }
  else {
    puVar3 = (uint *)(param_1 + 0xe);
    FUN_0019b6e8(param_1,*param_1);
    iVar1 = *(int *)(param_1 + 0x13) - *(int *)((long)param_1 + 0xb4);
    if (0 < iVar1) {
      FUN_0019c404(puVar3,iVar1);
      iVar11 = *(int *)((long)param_1 + 0xb4);
      uVar8 = *(uint *)(param_1 + 0xe);
      puVar5 = (undefined8 *)((param_1[0x14] + (ulong)*(uint *)(param_1 + 0x13) * 0x10) - 0x10);
      if ((undefined8 *)(param_1[0x14] + (long)iVar11 * 0x10) <= puVar5) {
        pbVar10 = (byte *)((ulong)*(uint *)(param_1 + 0x13) + param_1[0x15]);
        pbVar7 = (byte *)(param_1[0x10] + (ulong)uVar8);
        puVar9 = (undefined8 *)(param_1[0xf] + (ulong)uVar8 * 0x10);
        do {
          pbVar10 = pbVar10 + -1;
          puVar6 = puVar5 + -2;
          uVar4 = *puVar5;
          puVar9[1] = puVar5[1];
          *puVar9 = uVar4;
          *pbVar7 = *pbVar10 & 0xf3;
          iVar11 = *(int *)((long)param_1 + 0xb4);
          puVar5 = puVar6;
          pbVar7 = pbVar7 + 1;
          puVar9 = puVar9 + 2;
        } while ((undefined8 *)(param_1[0x14] + (long)iVar11 * 0x10) <= puVar6);
        uVar8 = *puVar3;
      }
      *(int *)(param_1 + 0x13) = iVar11;
      *(undefined1 *)(param_1 + 0x11) = 0;
      *(uint *)(param_1 + 0xe) = uVar8 + iVar1;
      *(undefined1 *)(param_1 + 0x16) = 0;
    }
    param_1[3] = param_1[8];
    param_1[2] = param_1[7];
    FUN_0019b6e8(param_1,param_1[6] + 0xb40000);
    uVar4 = 0;
  }
  FUN_0019b884(puVar3,uVar4);
  return 0;
}


// ===== 0019b6e8  FUN_0019b6e8 =====

void FUN_0019b6e8(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)((long)param_1 + 0x54);
  if (iVar1 == 0) {
    lVar3 = param_1[0xd];
    FUN_0019ce1c(&local_60,lVar3,param_2 + 0x5a0000);
    local_60 = local_60 + param_1[2];
    lStack_58 = lStack_58 + param_1[3];
    FUN_0019a668(param_1 + 0xe,&local_60,0);
    FUN_0019ce1c(&local_60,lVar3,param_2 + -0x5a0000);
    local_60 = local_60 + param_1[2];
    lStack_58 = lStack_58 + param_1[3];
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        *param_1 = param_2;
        param_1[1] = param_2 + 0xb40000;
        FUN_0019c480(param_1,0);
      }
      goto LAB_0019b858;
    }
    lVar3 = param_1[0xd];
    FUN_0019ce1c(&local_70,lVar3,param_2 + 0x5a0000);
    FUN_0019ce1c(&local_60,lVar3,param_2);
    local_60 = local_70 + param_1[2] + local_60;
    lStack_58 = lStack_68 + param_1[3] + lStack_58;
    FUN_0019a668(param_1 + 0xe,&local_60,0);
    FUN_0019ce1c(&local_70,lVar3,param_2 + -0x5a0000);
    FUN_0019ce1c(&local_60,lVar3,param_2);
    local_60 = param_1[2] + local_70 + local_60;
    lStack_58 = param_1[3] + lStack_68 + lStack_58;
  }
  FUN_0019a668(param_1 + 0xe,&local_60,0);
LAB_0019b858:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b884  FUN_0019b884 =====

void FUN_0019b884(uint *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  uVar1 = param_1[7];
  uVar7 = (ulong)uVar1;
  uVar2 = *param_1;
  if (uVar1 + 1 < uVar2) {
    uVar1 = uVar2 - 1;
    uVar8 = (ulong)uVar1;
    *param_1 = uVar1;
    puVar10 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x10);
    uVar14 = *puVar10;
    puVar12 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 0x10);
    puVar12[1] = puVar10[1];
    *puVar12 = uVar14;
    if (param_2 != '\0') {
      lVar13 = *(long *)(param_1 + 2) + uVar8 * 0x10;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 2) + uVar7 * 0x10 + 0x10);
      if (puVar10 < (undefined8 *)(lVar13 - 0x10U)) {
        puVar12 = (undefined8 *)(lVar13 - 0x20);
        do {
          uVar16 = puVar10[1];
          uVar14 = *puVar10;
          uVar15 = puVar12[2];
          puVar10[1] = puVar12[3];
          *puVar10 = uVar15;
          bVar5 = puVar10 + 2 < puVar12;
          puVar12[3] = uVar16;
          puVar12[2] = uVar14;
          puVar10 = puVar10 + 2;
          puVar12 = puVar12 + -2;
        } while (bVar5);
      }
      lVar13 = *(long *)(param_1 + 4);
      puVar11 = (undefined1 *)(lVar13 + uVar7 + 1);
      if (puVar11 < (undefined1 *)(lVar13 + uVar8 + -1)) {
        puVar9 = (undefined1 *)(uVar8 + lVar13 + -2);
        do {
          uVar3 = *puVar11;
          *puVar11 = puVar9[1];
          bVar5 = puVar11 + 1 < puVar9;
          puVar9[1] = uVar3;
          puVar9 = puVar9 + -1;
          puVar11 = puVar11 + 1;
        } while (bVar5);
      }
    }
    *(byte *)(*(long *)(param_1 + 4) + uVar7) = *(byte *)(*(long *)(param_1 + 4) + uVar7) | 4;
    *(byte *)(*(long *)(param_1 + 4) + (ulong)(uVar2 - 2)) =
         *(byte *)(*(long *)(param_1 + 4) + (ulong)(uVar2 - 2)) | 8;
  }
  else {
    *param_1 = uVar1;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0xffffffff;
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019b9b0  FUN_0019b9b0 =====

void FUN_0019b9b0(long *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_70;
  long lStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar1 = (ulong)param_2 * -0xb40000 + 0x5a0000;
  lVar3 = FUN_0019ce28(*param_1,param_1[1]);
  if (lVar3 < 0) {
    lVar3 = lVar3 + 1;
  }
  if ((param_3 != 0) && ((char)param_1[(ulong)param_2 * 5 + 0x11] != '\0')) {
    lVar6 = param_1[0xd];
    lVar3 = lVar3 >> 1;
    uVar4 = FUN_0019c94c(lVar3);
    lVar5 = FUN_0019c6d0(lVar6,uVar4);
    lVar6 = -lVar5;
    if (-1 < lVar5) {
      lVar6 = lVar5;
    }
    if ((lVar6 <= param_1[4]) && (lVar6 <= param_3)) {
      lVar6 = *param_1;
      uVar4 = FUN_0019c7ac(lVar3);
      uVar4 = FUN_0019c760(param_1[0xd],uVar4);
      FUN_0019ce1c(&local_70,uVar4,lVar3 + lVar1 + lVar6);
      local_70 = local_70 + param_1[2];
      lStack_68 = lStack_68 + param_1[3];
      goto LAB_0019bac4;
    }
  }
  FUN_0019ce1c(&local_70,param_1[0xd],param_1[1] + lVar1);
  local_70 = local_70 + param_1[2];
  lStack_68 = lStack_68 + param_1[3];
  *(char *)(param_1 + (ulong)param_2 * 5 + 0x11) = '\0';
LAB_0019bac4:
  FUN_0019a668(param_1 + (ulong)param_2 * 5 + 0xe,&local_70,0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bb0c  FUN_0019bb0c =====

void FUN_0019bb0c(long *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar3 = (int)param_1[0xb];
  if (iVar3 == 0) {
    FUN_0019c480(param_1);
    goto LAB_0019bd64;
  }
  lVar10 = param_1[0xd];
  plVar1 = param_1 + (param_2 & 0xffffffff) * 5 + 0xe;
  lVar2 = (param_2 & 0xffffffff) * -0xb40000 + 0x5a0000;
  if (iVar3 == 1) {
LAB_0019bb70:
    FUN_0019ce1c(&local_80,lVar10,param_1[1] + lVar2);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    *(undefined1 *)(param_1 + (param_2 & 0xffffffff) * 5 + 0x11) = 0;
LAB_0019bba0:
    plVar9 = &local_80;
  }
  else {
    lVar5 = FUN_0019ce28(*param_1,param_1[1]);
    if (lVar5 == 0xb40000) {
      lVar11 = *param_1;
      lVar5 = lVar2;
    }
    else {
      if (lVar5 < 0) {
        lVar5 = lVar5 + 1;
      }
      lVar5 = lVar5 >> 1;
      lVar11 = lVar2 + lVar5 + *param_1;
    }
    uVar6 = FUN_0019c7ac(lVar5);
    lVar7 = FUN_0019c6d0(param_1[0xc],uVar6);
    if (0xffff < lVar7) {
LAB_0019bd20:
      uVar6 = FUN_0019c760(param_1[0xd],uVar6);
      FUN_0019ce1c(&local_80,uVar6,lVar11);
      local_80 = local_80 + param_1[2];
      lStack_78 = lStack_78 + param_1[3];
      FUN_0019a668(plVar1,&local_80,0);
      if (param_3 != 0) goto LAB_0019bd64;
      FUN_0019ce1c(&local_80,param_1[0xd],param_1[1] + lVar2);
      local_80 = local_80 + param_1[2];
      lStack_78 = lStack_78 + param_1[3];
      goto LAB_0019bba0;
    }
    if (iVar3 != 2) goto LAB_0019bb70;
    lVar8 = -lVar5;
    if (-1 < lVar5) {
      lVar8 = lVar5;
    }
    if (lVar8 < 0x3a) goto LAB_0019bd20;
    uVar6 = FUN_0019c6d0(lVar10,param_1[0xc]);
    FUN_0019ce1c(&local_80,uVar6,lVar11);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    lVar8 = FUN_0019c8e4(lVar5);
    lVar5 = -lVar8;
    if (-1 < lVar8) {
      lVar5 = lVar8;
    }
    uVar6 = FUN_0019c704(lVar10,0x10000 - lVar7,lVar5);
    FUN_0019ce1c(&local_90,uVar6,lVar11 + lVar2);
    local_90 = local_90 + local_80;
    lStack_88 = lStack_88 + lStack_78;
    FUN_0019a668(plVar1,&local_90,0);
    FUN_0019ce1c(&local_90,uVar6,lVar11 - lVar2);
    local_90 = local_90 + local_80;
    lStack_88 = lStack_88 + lStack_78;
    FUN_0019a668(plVar1,&local_90,0);
    if (param_3 != 0) goto LAB_0019bd64;
    FUN_0019ce1c(&local_90,lVar10,param_1[1] + lVar2);
    plVar9 = &local_90;
    local_90 = local_90 + param_1[2];
    lStack_88 = lStack_88 + param_1[3];
  }
  FUN_0019a668(plVar1,plVar9,0);
LAB_0019bd64:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019be5c  FUN_0019be5c =====

void FUN_0019be5c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    pbVar4 = *(byte **)(param_1 + 4);
    uVar5 = 0;
    iVar3 = 0;
    iVar1 = iVar2;
    do {
      if ((*pbVar4 >> 2 & 1) == 0) {
        if (uVar5 == 0) goto LAB_0019bea4;
      }
      else if (uVar5 != 0) goto LAB_0019bea4;
      uVar5 = *pbVar4 >> 3 & 1;
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + uVar5;
      uVar5 = uVar5 ^ 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar1 != 0);
    if (uVar5 != 0) {
LAB_0019bea4:
      iVar2 = 0;
      iVar3 = 0;
      goto LAB_0019bebc;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
LAB_0019bebc:
  *param_2 = iVar2;
  *param_3 = iVar3;
  return;
}


// ===== 0019bec8  FUN_0019bec8 =====

undefined8 FUN_0019bec8(long param_1,int *param_2,int *param_3)

{
  long lVar1;
  int local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_0019be5c(param_1 + 0x70,&local_3c,&iStack_40);
  FUN_0019be5c(param_1 + 0x98,&local_44,&local_48);
  *param_2 = local_44 + local_3c;
  *param_3 = local_48 + iStack_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019bf5c  FUN_0019bf5c =====

void FUN_0019bf5c(long param_1,uint param_2,short *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  byte *pbVar5;
  byte *pbVar6;
  short *psVar7;
  short *psVar8;
  uint *puVar9;
  
  if ((param_2 < 2) && (*(char *)(param_1 + (ulong)param_2 * 0x28 + 0x90) != '\0')) {
    param_1 = param_1 + (ulong)param_2 * 0x28;
    puVar9 = (uint *)(param_1 + 0x70);
    memcpy((void *)(*(long *)(param_3 + 4) + (long)param_3[1] * 0x10),*(void **)(param_1 + 0x78),
           (ulong)*puVar9 << 4);
    uVar3 = *puVar9;
    sVar4 = param_3[1];
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      pbVar5 = *(byte **)(param_1 + 0x80);
      pbVar6 = (byte *)(*(long *)(param_3 + 8) + (long)sVar4);
      do {
        bVar1 = *pbVar5 & 2;
        if ((*pbVar5 & 1) != 0) {
          bVar1 = 1;
        }
        uVar3 = uVar3 - 1;
        *pbVar6 = bVar1;
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
      uVar3 = *puVar9;
      sVar4 = param_3[1];
      if (uVar3 != 0) {
        pbVar5 = *(byte **)(param_1 + 0x80);
        psVar7 = (short *)(*(long *)(param_3 + 0xc) + (long)*param_3 * 2);
        uVar2 = uVar3;
        do {
          psVar8 = psVar7;
          if ((*pbVar5 >> 3 & 1) != 0) {
            psVar8 = psVar7 + 1;
            *psVar7 = sVar4;
            *param_3 = *param_3 + 1;
          }
          uVar2 = uVar2 - 1;
          pbVar5 = pbVar5 + 1;
          sVar4 = sVar4 + 1;
          psVar7 = psVar8;
        } while (uVar2 != 0);
        sVar4 = param_3[1];
      }
    }
    param_3[1] = sVar4 + (short)uVar3;
  }
  return;
}


// ===== 0019c04c  FUN_0019c04c =====

void FUN_0019c04c(undefined8 param_1,undefined8 param_2)

{
  FUN_0019bf5c(param_1,0,param_2);
  FUN_0019bf5c(param_1,1,param_2);
  return;
}


// ===== 0019c084  FUN_0019c084 =====

void FUN_0019c084(undefined8 *param_1,short *param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = 0xffffffff;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (short *)0x0)) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x17) = 0;
    if (0 < *param_2) {
      lVar11 = 0;
      uVar10 = 0;
      do {
        sVar5 = *(short *)(*(long *)(param_2 + 0xc) + lVar11 * 2);
        if (uVar10 < (uint)(int)sVar5) {
          lVar2 = *(long *)(param_2 + 4);
          plVar9 = (long *)(lVar2 + (ulong)uVar10 * 0x10);
          lStack_78 = plVar9[1];
          local_80 = *plVar9;
          pbVar13 = (byte *)(*(long *)(param_2 + 8) + (ulong)uVar10);
          plVar1 = (long *)(lVar2 + (long)sVar5 * 0x10);
          plVar12 = (long *)(lVar2 + (ulong)(uint)(int)sVar5 * 0x10);
          local_90 = *plVar1;
          lStack_88 = plVar1[1];
          if ((*pbVar13 & 3) == 0) {
            if ((*(byte *)(*(long *)(param_2 + 8) + (long)sVar5) & 3) == 1) {
              plVar12 = plVar12 + -2;
            }
            else {
              local_90 = local_80 + local_90;
              lStack_88 = lStack_78 + lStack_88;
              if (local_90 < 0) {
                local_90 = local_90 + 1;
              }
              if (lStack_88 < 0) {
                lStack_88 = lStack_88 + 1;
              }
              local_90 = local_90 >> 1;
              lStack_88 = lStack_88 >> 1;
            }
            plVar9 = plVar9 + -2;
            pbVar13 = pbVar13 + -1;
          }
          else {
            local_90 = local_80;
            lStack_88 = lStack_78;
            if ((*pbVar13 & 3) == 2) {
LAB_0019c380:
              uVar8 = 0xfffffffe;
              goto LAB_0019c384;
            }
          }
          bVar7 = true;
          cVar4 = *(char *)(*(long *)(param_2 + 0x10) + lVar11);
          *(undefined1 *)(param_1 + 5) = 1;
          param_1[3] = lStack_88;
          param_1[2] = local_90;
          *(char *)((long)param_1 + 0x29) = cVar4;
          if (*(int *)(param_1 + 0xb) == 0) {
            if (cVar4 == '\0') {
              bVar7 = false;
            }
            else {
              bVar7 = *(int *)((long)param_1 + 0x54) == 0;
            }
          }
          *(bool *)(param_1 + 10) = bVar7;
          param_1[8] = lStack_88;
          param_1[7] = local_90;
          *param_1 = 0;
          while (plVar9 < plVar12) {
            bVar3 = pbVar13[1];
            plVar1 = plVar9 + 2;
            if ((bVar3 & 3) == 0) {
              lStack_78 = plVar9[3];
              local_80 = *plVar1;
              if (plVar12 <= plVar1) {
LAB_0019c328:
                FUN_0019a730(param_1,&local_80,&local_90);
                break;
              }
              pbVar13 = pbVar13 + 2;
              plVar9 = plVar9 + 4;
              while( true ) {
                lStack_98 = plVar9[1];
                local_a0 = *plVar9;
                if ((*pbVar13 & 3) != 0) break;
                local_b0 = local_a0 + local_80;
                lStack_a8 = lStack_98 + lStack_78;
                if (local_b0 < 0) {
                  local_b0 = local_b0 + 1;
                }
                if (lStack_a8 < 0) {
                  lStack_a8 = lStack_a8 + 1;
                }
                local_b0 = local_b0 >> 1;
                lStack_a8 = lStack_a8 >> 1;
                FUN_0019a730(param_1,&local_80,&local_b0);
                bVar7 = plVar12 <= plVar9;
                plVar9 = plVar9 + 2;
                pbVar13 = pbVar13 + 1;
                lStack_78 = lStack_98;
                local_80 = local_a0;
                if (bVar7) goto LAB_0019c328;
              }
              if ((*pbVar13 & 3) != 1) goto LAB_0019c380;
              FUN_0019a730(param_1,&local_80,&local_a0);
            }
            else if ((bVar3 & 3) == 1) {
              lStack_98 = plVar9[3];
              local_a0 = *plVar1;
              FUN_0019a408(param_1,&local_a0);
              plVar9 = plVar1;
              pbVar13 = pbVar13 + 1;
            }
            else {
              if ((plVar12 < plVar9 + 4) || ((pbVar13[2] & 3) != 2)) goto LAB_0019c380;
              lStack_98 = plVar9[3];
              local_a0 = *plVar1;
              lStack_a8 = plVar9[5];
              local_b0 = plVar9[4];
              plVar1 = plVar9 + 6;
              if (plVar12 < plVar1) {
                FUN_0019acfc(param_1,&local_a0,&local_b0,&local_90);
                break;
              }
              lStack_b8 = plVar9[7];
              local_c0 = *plVar1;
              pbVar13 = pbVar13 + 3;
              FUN_0019acfc(param_1,&local_a0,&local_b0,&local_c0);
              plVar9 = plVar1;
            }
          }
          if (*(char *)(param_1 + 5) == '\0') {
            FUN_0019b56c(param_1);
          }
        }
        lVar11 = lVar11 + 1;
        uVar10 = (int)sVar5 + 1;
      } while (lVar11 < *param_2);
    }
    uVar8 = 0;
  }
LAB_0019c384:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


// ===== 0019c3b8  FUN_0019c3b8 =====

void FUN_0019c3b8(undefined4 *param_1,undefined8 param_2)

{
  if (-1 < (int)param_1[7]) {
    FUN_0019b884(param_1,0);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = *param_1;
  FUN_0019a668(param_1,param_2,0);
  return;
}


// ===== 0019c404  FUN_0019c404 =====

void FUN_0019c404(int *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 < (uint)(*param_1 + param_2)) {
    do {
      uVar2 = uVar2 + (uVar2 >> 1) + 0x10;
    } while (uVar2 < (uint)(*param_1 + param_2));
    pvVar1 = realloc(*(void **)(param_1 + 2),(ulong)uVar2 << 4);
    *(void **)(param_1 + 2) = pvVar1;
    pvVar1 = realloc(*(void **)(param_1 + 4),(ulong)uVar2);
    *(void **)(param_1 + 4) = pvVar1;
    if ((pvVar1 != (void *)0x0) && (*(long *)(param_1 + 2) != 0)) {
      param_1[1] = uVar2;
    }
  }
  return;
}


// ===== 0019c480  FUN_0019c480 =====

void FUN_0019c480(long *param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  undefined2 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar14 = (ulong)param_2;
  lVar16 = param_1[0xd];
  lVar15 = uVar14 * -0xb40000 + 0x5a0000;
  uVar10 = FUN_0019ce28(*param_1,param_1[1]);
  if (uVar10 == 0xb40000) {
    uVar10 = lVar15 * -2;
  }
  lVar15 = *param_1 + lVar15;
  FUN_0019ce1c(&local_80,lVar16,lVar15);
  lVar5 = -0x5a0000;
  if (-1 < (long)uVar10) {
    lVar5 = 0x5a0000;
  }
  local_80 = local_80 + param_1[2];
  lStack_78 = lStack_78 + param_1[3];
  if (uVar10 != 0) {
    puVar1 = (uint *)(param_1 + (ulong)param_2 * 5 + 0xe);
    do {
      uVar7 = uVar10;
      if ((long)uVar10 < -0x59ffff) {
        uVar7 = 0xffffffffffa60000;
      }
      if (0x59ffff < (long)uVar7) {
        uVar7 = 0x5a0000;
      }
      lVar2 = uVar7 + lVar15;
      uVar6 = -uVar7;
      if (-1 < (long)uVar7) {
        uVar6 = uVar7;
      }
      FUN_0019ce1c(&local_90,lVar16,lVar2);
      local_90 = local_90 + param_1[2];
      lStack_88 = lStack_88 + param_1[3];
      lVar11 = FUN_0019c8e4(uVar6 >> 1);
      lVar12 = FUN_0019c7ac(uVar6 >> 1);
      uVar13 = FUN_0019c704(lVar16,lVar11 << 2,lVar12 * 3 + 0x30000);
      FUN_0019ce1c(&local_a0,uVar13,lVar15 + lVar5);
      local_a0 = local_a0 + local_80;
      lStack_98 = lStack_98 + lStack_78;
      FUN_0019ce1c(&local_b0,uVar13,lVar2 - lVar5);
      local_b0 = local_b0 + local_90;
      lStack_a8 = lStack_a8 + lStack_88;
      FUN_0019c404(puVar1,3);
      uVar8 = *puVar1;
      uVar10 = uVar10 - uVar7;
      lVar15 = param_1[uVar14 * 5 + 0x10];
      plVar3 = (long *)(param_1[uVar14 * 5 + 0xf] + (ulong)uVar8 * 0x10);
      plVar3[1] = lStack_98;
      *plVar3 = local_a0;
      puVar4 = (undefined2 *)(lVar15 + (ulong)uVar8);
      plVar3[3] = lStack_a8;
      plVar3[2] = local_b0;
      plVar3[5] = lStack_88;
      plVar3[4] = local_90;
      *puVar4 = 0x202;
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar1 = *puVar1 + 3;
      *(undefined1 *)(param_1 + uVar14 * 5 + 0x11) = 0;
      lStack_78 = lStack_88;
      local_80 = local_90;
      lVar15 = lVar2;
    } while (uVar10 != 0);
  }
  *(undefined1 *)(param_1 + uVar14 * 5 + 0x11) = 0;
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c6d0  FUN_0019c6d0 =====

ulong FUN_0019c6d0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar1 = 1;
  if (param_1 < 0) {
    iVar1 = -1;
  }
  lVar3 = -param_1;
  if (param_1 >= 0) {
    lVar3 = param_1;
  }
  lVar4 = -param_2;
  if (-1 < param_2) {
    lVar4 = param_2;
  }
  iVar2 = -iVar1;
  if (-1 < param_2) {
    iVar2 = iVar1;
  }
  uVar6 = lVar4 * lVar3 + 0x8000U >> 0x10;
  uVar5 = -uVar6;
  if (0 < iVar2) {
    uVar5 = uVar6;
  }
  return uVar5;
}


// ===== 0019c704  FUN_0019c704 =====

ulong FUN_0019c704(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar2 = 1;
  if (param_1 < 0) {
    iVar2 = -1;
  }
  iVar1 = -iVar2;
  if (-1 < param_2) {
    iVar1 = iVar2;
  }
  uVar5 = -param_3;
  if (-1 < (long)param_3) {
    uVar5 = param_3;
  }
  if ((long)uVar5 < 1) {
    uVar6 = 0x7fffffff;
  }
  else {
    lVar3 = -param_2;
    if (-1 < param_2) {
      lVar3 = param_2;
    }
    lVar4 = -param_1;
    if (-1 < param_1) {
      lVar4 = param_1;
    }
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = (lVar3 * lVar4 + (uVar5 >> 1)) / uVar5;
    }
  }
  iVar2 = -iVar1;
  if (-1 < (long)param_3) {
    iVar2 = iVar1;
  }
  uVar5 = -uVar6;
  if (0 < iVar2) {
    uVar5 = uVar6;
  }
  return uVar5;
}


// ===== 0019c760  FUN_0019c760 =====

ulong FUN_0019c760(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = 1;
  if (param_1 < 0) {
    iVar1 = -1;
  }
  uVar4 = -param_2;
  if (-1 < (long)param_2) {
    uVar4 = param_2;
  }
  if ((long)uVar4 < 1) {
    uVar5 = 0x7fffffff;
  }
  else {
    lVar3 = -param_1;
    if (-1 < param_1) {
      lVar3 = param_1;
    }
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = ((uVar4 >> 1) + lVar3 * 0x10000) / uVar4;
    }
  }
  iVar2 = -iVar1;
  if (-1 < (long)param_2) {
    iVar2 = iVar1;
  }
  uVar4 = -uVar5;
  if (-1 < iVar2) {
    uVar4 = uVar5;
  }
  return uVar4;
}


// ===== 0019c7ac  FUN_0019c7ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0019c7ac(undefined8 param_1)

{
  long lVar1;
  long local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = _UNK_001462f8;
  local_40 = _DAT_001462f0;
  FUN_0019c810(&local_40,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_40 + 0x80 >> 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c810  FUN_0019c810 =====

void FUN_0019c810(long *param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = *param_1;
  lVar6 = param_1[1];
  lVar3 = param_2;
  lVar5 = lVar4;
  if (param_2 < -0x2d0000) {
    do {
      lVar4 = lVar6;
      lVar3 = param_2 + 0x5a0000;
      lVar6 = -lVar5;
      bVar1 = param_2 < -0x870000;
      param_2 = lVar3;
      lVar5 = lVar4;
    } while (bVar1);
  }
  lVar5 = lVar3;
  lVar7 = lVar6;
  if (0x2d0000 < lVar3) {
    do {
      lVar6 = lVar4;
      lVar3 = lVar5 + -0x5a0000;
      lVar4 = -lVar7;
      bVar1 = 0x870000 < lVar5;
      lVar5 = lVar3;
      lVar7 = lVar6;
    } while (bVar1);
  }
  lVar5 = 0;
  lVar7 = 1;
  do {
    uVar2 = lVar5 + 1;
    lVar9 = lVar7 + lVar6 >> (uVar2 & 0x3f);
    if (lVar3 < 0) {
      lVar10 = (&DAT_001471f0)[lVar5];
      lVar8 = -(lVar7 + lVar4 >> (uVar2 & 0x3f));
    }
    else {
      lVar8 = lVar7 + lVar4 >> (uVar2 & 0x3f);
      lVar9 = -lVar9;
      lVar10 = -(&DAT_001471f0)[lVar5];
    }
    lVar6 = lVar8 + lVar6;
    lVar4 = lVar4 + lVar9;
    lVar3 = lVar3 + lVar10;
    lVar5 = lVar5 + 1;
    lVar7 = lVar7 << 1;
  } while (lVar5 != 0x16);
  *param_1 = lVar4;
  param_1[1] = lVar6;
  return;
}


// ===== 0019c8e4  FUN_0019c8e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0019c8e4(long param_1)

{
  long lVar1;
  long local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = _UNK_001462f8;
  local_40 = _DAT_001462f0;
  FUN_0019c810(&local_40,0x5a0000 - param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_40 + 0x80 >> 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c94c  FUN_0019c94c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019c94c(undefined8 param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = _UNK_001462f8;
  local_40 = _DAT_001462f0;
  FUN_0019c810(&local_40,param_1);
  FUN_0019c760(uStack_38,local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019c9ac  FUN_0019c9ac =====

void FUN_0019c9ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0 && param_1 == 0) {
    lVar2 = 0;
  }
  else {
    local_38 = param_1;
    local_30 = param_2;
    FUN_0019ca14(&local_38);
    FUN_0019ca68(&local_38);
    lVar2 = local_30;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 0019ca14  FUN_0019ca14 =====

ulong FUN_0019ca14(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_1;
  lVar6 = param_1[1];
  lVar1 = -lVar7;
  if (-1 < lVar7) {
    lVar1 = lVar7;
  }
  lVar2 = -lVar6;
  if (-1 < lVar6) {
    lVar2 = lVar6;
  }
  uVar3 = (uint)lVar2 | (uint)lVar1;
  iVar4 = (int)LZCOUNT(uVar3);
  if (uVar3 >> 0x1e == 0) {
    uVar5 = (ulong)(iVar4 - 2);
    lVar7 = lVar7 << (uVar5 & 0x3f);
    lVar6 = lVar6 << (uVar5 & 0x3f);
  }
  else {
    uVar3 = 2 - iVar4;
    lVar7 = lVar7 >> ((ulong)uVar3 & 0x3f);
    lVar6 = lVar6 >> ((ulong)uVar3 & 0x3f);
    uVar5 = (ulong)-uVar3;
  }
  *param_1 = lVar7;
  param_1[1] = lVar6;
  return uVar5;
}


// ===== 0019ca68  FUN_0019ca68 =====

void FUN_0019ca68(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *param_1;
  lVar5 = param_1[1];
  lVar1 = -lVar6;
  if (lVar6 < lVar5) {
    if (lVar5 == lVar1 || lVar5 + lVar6 < 0 != SBORROW8(lVar5,lVar1)) {
      lVar3 = -0xb40000;
      if (0 < lVar5) {
        lVar3 = 0xb40000;
      }
      lVar2 = lVar1;
      lVar5 = -lVar5;
    }
    else {
      lVar3 = 0x5a0000;
      lVar2 = lVar5;
      lVar5 = lVar1;
    }
  }
  else {
    lVar3 = -0x5a0000;
    if (lVar5 + lVar6 < 0 == SBORROW8(lVar5,lVar1)) {
      lVar3 = 0;
      lVar2 = lVar6;
    }
    else {
      lVar2 = -lVar5;
      lVar5 = lVar6;
    }
  }
  lVar6 = 0;
  lVar1 = 1;
  do {
    uVar4 = lVar6 + 1;
    lVar8 = lVar1 + lVar5 >> (uVar4 & 0x3f);
    if (lVar5 < 1) {
      lVar7 = lVar1 + lVar2 >> (uVar4 & 0x3f);
      lVar8 = -lVar8;
      lVar9 = -(&DAT_001471f0)[lVar6];
    }
    else {
      lVar9 = (&DAT_001471f0)[lVar6];
      lVar7 = -(lVar1 + lVar2 >> (uVar4 & 0x3f));
    }
    lVar5 = lVar5 + lVar7;
    lVar3 = lVar9 + lVar3;
    lVar2 = lVar8 + lVar2;
    lVar6 = lVar6 + 1;
    lVar1 = lVar1 << 1;
  } while (lVar6 != 0x16);
  if (lVar3 < 0) {
    uVar4 = -(0x10U - lVar3 & 0xffffffffffffffe0);
  }
  else {
    uVar4 = lVar3 + 0x10U & 0xffffffffffffffe0;
  }
  *param_1 = lVar2;
  param_1[1] = uVar4;
  return;
}


// ===== 0019cb4c  FUN_0019cb4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019cb4c(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_001462f0;
  param_1[1] = _UNK_001462f8;
  *param_1 = lVar1;
  FUN_0019c810();
  param_1[1] = param_1[1] + 0x80 >> 8;
  *param_1 = *param_1 + 0x80 >> 8;
  return;
}


// ===== 0019cb90  FUN_0019cb90 =====

void FUN_0019cb90(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = *param_1;
  lStack_40 = param_1[1];
  if ((param_2 != 0) && (lStack_40 != 0 || local_48 != 0)) {
    uVar4 = FUN_0019ca14(&local_48);
    iVar1 = (int)uVar4;
    FUN_0019c810(&local_48,param_2);
    bVar3 = -1 < local_48;
    lVar5 = -local_48;
    if (bVar3) {
      lVar5 = local_48;
    }
    lVar5 = lVar5 * 0xdbd95b16 + 0x100000000 >> 0x20;
    local_48 = -lVar5;
    if (bVar3) {
      local_48 = lVar5;
    }
    bVar3 = -1 < lStack_40;
    lVar5 = -lStack_40;
    if (bVar3) {
      lVar5 = lStack_40;
    }
    lVar5 = lVar5 * 0xdbd95b16 + 0x100000000 >> 0x20;
    lStack_40 = -lVar5;
    if (bVar3) {
      lStack_40 = lVar5;
    }
    if (iVar1 < 1) {
      *param_1 = local_48 << ((ulong)(uint)-iVar1 & 0x3f);
      lVar5 = lStack_40 << ((ulong)(uint)-iVar1 & 0x3f);
    }
    else {
      iVar1 = 1 << (ulong)(iVar1 - 1U & 0x1f);
      *param_1 = local_48 + iVar1 + (local_48 >> 0x1f) >> (uVar4 & 0x3f);
      lVar5 = lStack_40 + iVar1 + (lStack_40 >> 0x1f) >> (uVar4 & 0x3f);
    }
    param_1[1] = lVar5;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019cc8c  FUN_0019cc8c =====

void FUN_0019cc8c(ulong *param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_40;
  ulong uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = param_1[1];
  local_40 = *param_1;
  if (local_40 == 0) {
    uVar5 = -uStack_38;
    if (-1 < (long)uStack_38) {
      uVar5 = uStack_38;
    }
  }
  else if (uStack_38 == 0) {
    uVar5 = -local_40;
    if (-1 < (long)local_40) {
      uVar5 = local_40;
    }
  }
  else {
    uVar4 = FUN_0019ca14(&local_40);
    iVar2 = (int)uVar4;
    FUN_0019ca68(&local_40);
    bVar3 = -1 < (long)local_40;
    uVar5 = -local_40;
    if (bVar3) {
      uVar5 = local_40;
    }
    uVar5 = (long)(uVar5 * 0xdbd95b16 + 0x100000000) >> 0x20;
    local_40 = -uVar5;
    if (bVar3) {
      local_40 = uVar5;
    }
    if (iVar2 < 1) {
      uVar5 = (ulong)(uint)((int)local_40 << (ulong)(-iVar2 & 0x1f));
    }
    else {
      uVar5 = (long)(local_40 + (long)(1 << (ulong)(iVar2 - 1U & 0x1f))) >> (uVar4 & 0x3f);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 0019ce1c  FUN_0019ce1c =====

void FUN_0019ce1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_0019cb90(param_1,param_3);
  return;
}


// ===== 0019ce28  FUN_0019ce28 =====

long FUN_0019ce28(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (param_2 - param_1) % 0x1680000;
  lVar1 = lVar2 + 0x1680000;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  lVar2 = lVar1 + -0x1680000;
  if (lVar1 < 0xb40001) {
    lVar2 = lVar1;
  }
  return lVar2;
}


// ===== 0019ce94  FUN_0019ce94 =====

void FUN_0019ce94(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long local_53c0;
  long local_53b8;
  int local_53b0;
  int local_53ac;
  long *local_53a8;
  undefined8 local_53a0 [2048];
  undefined1 auStack_13a0 [272];
  long local_1290;
  long lStack_1288;
  long local_1280;
  long local_1278;
  long local_1270;
  ulong local_1268;
  undefined4 local_1260;
  undefined8 local_1258;
  undefined4 local_1250;
  long local_1248;
  long local_1240;
  long local_1238;
  undefined8 local_b90;
  long *plStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  long local_b60;
  long lStack_b58;
  long local_b50;
  long lStack_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined1 auStack_b30 [2048];
  int local_330;
  code *local_328;
  undefined8 local_320;
  uint local_318;
  int local_314;
  undefined8 *local_310;
  ulong local_308;
  undefined8 *local_300;
  long local_2f8;
  long local_2f0;
  long local_2e8;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  psVar7 = (short *)*param_2;
  if (psVar7 != (short *)0x0) {
    if ((psVar7[1] == 0) || (*psVar7 < 1)) {
      uVar5 = 0;
      goto LAB_0019cf24;
    }
    if (((*(long *)(psVar7 + 0xc) != 0) && (*(long *)(psVar7 + 4) != 0)) &&
       (*(short *)(*(long *)(psVar7 + 0xc) + (ulong)((int)*psVar7 - 1) * 2) + 1 == (int)psVar7[1]))
    {
      if ((*(uint *)(param_2 + 1) & 1) == 0) {
        uVar5 = 0xfffffffe;
        goto LAB_0019cf24;
      }
      if ((*(uint *)(param_2 + 1) >> 2 & 1) == 0) {
        lStack_b58 = -0x8000;
        local_b60 = -0x8000;
        lStack_b48 = 0x7fff;
        local_b50 = 0x7fff;
      }
      else {
        lStack_b48 = param_2[8];
        local_b50 = param_2[7];
        lStack_b58 = param_2[6];
        local_b60 = param_2[5];
      }
      local_310 = local_53a0;
      local_308 = 0x4000;
      local_1260 = 0;
      local_1258 = 0;
      local_1248 = 0;
      local_1240 = 0;
      local_b40 = 0x7fffffff7fffffff;
      local_b38 = 0x8000000080000000;
      uStack_b78 = *(undefined8 *)(psVar7 + 0xc);
      local_b80 = *(undefined8 *)(psVar7 + 8);
      uStack_b68 = *(undefined8 *)(psVar7 + 0x14);
      local_b70 = *(undefined8 *)(psVar7 + 0x10);
      plStack_b88 = *(long **)(psVar7 + 4);
      uVar5 = *(undefined8 *)psVar7;
      local_1238 = 0;
      local_1250 = 1;
      local_318 = 0x40;
      local_330 = 0;
      local_328 = (code *)param_2[2];
      local_320 = param_2[4];
      local_b90._2_2_ = (short)((ulong)uVar5 >> 0x10);
      if ((long)local_b90._2_2_ < 1) {
        lStack_1288 = 0;
        local_1290 = 0;
        local_1278 = 0;
        local_1280 = 0;
      }
      else {
        lVar8 = *plStack_b88;
        local_1280 = plStack_b88[1];
        lVar9 = local_1280;
        local_1290 = lVar8;
        if (local_b90._2_2_ != 1) {
          plVar10 = plStack_b88 + 2;
          do {
            lVar6 = *plVar10;
            lVar11 = plVar10[1];
            if (lVar6 < local_1290) {
              local_1290 = lVar6;
            }
            if (lVar8 < lVar6) {
              lVar8 = lVar6;
            }
            if (lVar11 < local_1280) {
              local_1280 = lVar11;
            }
            if (lVar9 < lVar11) {
              lVar9 = lVar11;
            }
            plVar10 = plVar10 + 2;
          } while (plVar10 < plStack_b88 + (long)local_b90._2_2_ * 2);
        }
        local_1290 = local_1290 >> 6;
        local_1280 = local_1280 >> 6;
        lStack_1288 = lVar8 + 0x3f >> 6;
        local_1278 = lVar9 + 0x3f >> 6;
      }
      local_b90 = uVar5;
      local_300 = local_310;
      if (((local_b60 < lStack_1288) && (local_1290 < local_b50)) &&
         ((lStack_b58 < local_1278 && (local_1280 < lStack_b48)))) {
        if (local_1290 < local_b60) {
          local_1290 = local_b60;
        }
        if (local_1280 < lStack_b58) {
          local_1280 = lStack_b58;
        }
        if (local_b50 < lStack_1288) {
          lStack_1288 = local_b50;
        }
        if (lStack_b48 < local_1278) {
          local_1278 = lStack_b48;
        }
        lVar8 = local_1278;
        local_1270 = lStack_1288 - local_1290;
        local_1268 = local_1278 - local_1280;
        uVar1 = local_1268 + 0x3f;
        if (-1 < (long)local_1268) {
          uVar1 = local_1268;
        }
        local_53b0 = (int)(uVar1 >> 6);
        if (local_53b0 == 0) {
          local_53b0 = 1;
        }
        if (0x26 < local_53b0) {
          local_53b0 = 0x27;
        }
        local_314 = 0;
        local_53ac = 0;
        if (0 < local_53b0) {
          local_53b8 = local_1280;
LAB_0019d1f4:
          if ((local_53ac == local_53b0 + -1) ||
             (local_53c0 = local_53b8 + (int)local_318, lVar8 < local_53b8 + (int)local_318)) {
            local_53c0 = lVar8;
          }
          local_2f0 = local_53b8;
          local_2e8 = local_53c0;
          local_53a8 = &local_2f0;
LAB_0019d240:
          do {
            if (local_53a8 < &local_2f0) goto LAB_0019d48c;
            local_300 = local_310;
            local_2f8 = local_53a8[1] - *local_53a8;
            lVar9 = 0;
            if ((local_2f8 * 8 & 0x18U) != 0) {
              lVar9 = 0x20 - (local_2f8 * 8 & 0x18U);
            }
            lVar9 = lVar9 + local_2f8 * 8;
            local_1248 = (long)local_310 + lVar9;
            if ((lVar9 < (long)(local_308 & 0xffffffffffffffe0)) &&
               (lVar9 = (long)local_310 + ((local_308 & 0xffffffffffffffe0) - local_1248),
               local_1240 = lVar9 >> 5, 0x3f < lVar9)) {
              if ((0 < local_2f8) && (*local_310 = 0, local_2f8 != 1)) {
                lVar9 = 1;
                do {
                  local_310[lVar9] = 0;
                  lVar9 = lVar9 + 1;
                } while (local_2f8 != lVar9);
              }
              local_1238 = 0;
              local_1250 = 1;
              local_1280 = *local_53a8;
              local_1278 = local_53a8[1];
              local_1268 = local_53a8[1] - *local_53a8;
              iVar4 = FUN_0019d50c(auStack_13a0);
              if (iVar4 != -4) {
                if (iVar4 != 0) break;
                if (local_1238 != 0) {
                  local_330 = 0;
                  if (0 < local_2f8) {
                    lVar9 = 0;
                    do {
                      plVar10 = (long *)local_300[lVar9];
                      if (plVar10 != (long *)0x0) {
                        lVar6 = 0;
                        lVar11 = 0;
                        do {
                          if ((lVar11 != 0) &&
                             (lVar2 = *plVar10 - lVar6, lVar2 != 0 && lVar6 <= *plVar10)) {
                            FUN_0019e1c8(auStack_13a0,lVar6,lVar9,lVar11 << 9,lVar2);
                          }
                          lVar11 = plVar10[1] + lVar11;
                          lVar6 = lVar11 * 0x200 - (long)(int)plVar10[2];
                          if ((lVar6 != 0) && (-1 < *plVar10)) {
                            FUN_0019e1c8(auStack_13a0,*plVar10,lVar9,lVar6,1);
                          }
                          lVar6 = *plVar10;
                          plVar10 = (long *)plVar10[3];
                          lVar6 = lVar6 + 1;
                        } while (plVar10 != (long *)0x0);
                        if (lVar11 != 0) {
                          FUN_0019e1c8(auStack_13a0,lVar6,lVar9,lVar11 * 0x200,local_1270 - lVar6);
                        }
                      }
                      lVar9 = lVar9 + 1;
                    } while (lVar9 < local_2f8);
                  }
                  if ((local_328 != (code *)0x0) && (0 < local_330)) {
                    (*local_328)(local_330,auStack_b30,local_320);
                  }
                }
                local_53a8 = local_53a8 + -2;
                goto LAB_0019d240;
              }
            }
            lVar11 = *local_53a8;
            lVar6 = local_53a8[1];
            lVar9 = lVar6 - lVar11 >> 1;
            if (lVar9 == 0) break;
            lVar9 = lVar11 + lVar9;
            if ((long)(int)local_318 <= lVar11 - lVar6) {
              local_314 = local_314 + 1;
            }
            local_53a8[2] = lVar11;
            local_53a8[3] = lVar9;
            *local_53a8 = lVar9;
            local_53a8[1] = lVar6;
            local_53a8 = local_53a8 + 2;
          } while( true );
        }
      }
      goto LAB_0019d4d8;
    }
  }
  uVar5 = 0xffffffff;
  goto LAB_0019cf24;
LAB_0019d48c:
  local_53ac = local_53ac + 1;
  local_53b8 = local_53c0;
  if (local_53b0 <= local_53ac) goto LAB_0019d4b8;
  goto LAB_0019d1f4;
LAB_0019d4b8:
  if ((8 < local_314) && (0x10 < (int)local_318)) {
    local_318 = local_318 >> 1;
  }
LAB_0019d4d8:
  (*(code *)param_2[3])
            (local_b40 & 0xffffffff,local_b40._4_4_,(int)local_b38 - (int)local_b40,
             (local_b38._4_4_ - local_b40._4_4_) + 1,param_2[4]);
  uVar5 = 1;
LAB_0019cf24:
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}


// ===== 0019d50c  FUN_0019d50c =====

void FUN_0019d50c(__jmp_buf_tag *param_1)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  int local_c4;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar6 = setjmp(param_1);
  if (iVar6 == 0) {
    if ((short)param_1[10].__mask_was_saved < 1) {
      local_c4 = 0;
    }
    else {
      lVar12 = 0;
      iVar6 = 0;
      do {
        uVar3 = *(ushort *)(param_1[10].__saved_mask.__val[2] + lVar12 * 2);
        if ((short)uVar3 < 0) {
LAB_0019d848:
          local_c4 = -1;
          goto LAB_0019d850;
        }
        uVar9 = param_1[10].__saved_mask.__val[0];
        plVar8 = (long *)(uVar9 + (long)iVar6 * 0x10);
        lStack_78 = plVar8[1];
        local_80 = *plVar8;
        plVar11 = (long *)(uVar9 + (ulong)uVar3 * 0x10);
        uVar9 = param_1[10].__saved_mask.__val[1];
        local_90 = *plVar11;
        lStack_88 = plVar11[1];
        pbVar10 = (byte *)(uVar9 + (long)iVar6);
        if ((*pbVar10 & 3) == 0) {
          if ((*(byte *)(uVar9 + ((ulong)(uint)(int)(short)uVar3 & 0xffff)) & 3) == 1) {
            plVar11 = plVar11 + -2;
          }
          else {
            local_90 = local_80 + local_90;
            lStack_88 = lStack_78 + lStack_88;
            if (local_90 < 0) {
              local_90 = local_90 + 1;
            }
            if (lStack_88 < 0) {
              lStack_88 = lStack_88 + 1;
            }
            local_90 = local_90 >> 1;
            lStack_88 = lStack_88 >> 1;
          }
          plVar8 = plVar8 + -2;
          pbVar10 = pbVar10 + -1;
        }
        else {
          local_90 = local_80;
          lStack_88 = lStack_78;
          if ((*pbVar10 & 3) == 2) goto LAB_0019d848;
        }
        local_c4 = FUN_0019d95c(&local_90,param_1);
        if (local_c4 != 0) goto LAB_0019d850;
joined_r0x0019d638:
        do {
          if (plVar11 <= plVar8) {
            FUN_0019de90(param_1,local_90 << 2,lStack_88 << 2);
LAB_0019d7e0:
            iVar6 = (int)(short)uVar3 + 1;
            goto LAB_0019d7f8;
          }
          bVar2 = pbVar10[1];
          plVar1 = plVar8 + 2;
          if ((bVar2 & 3) != 0) {
            if ((bVar2 & 3) == 1) {
              FUN_0019de90(param_1,plVar8[2] << 2,plVar8[3] << 2);
              plVar8 = plVar1;
              pbVar10 = pbVar10 + 1;
            }
            else {
              if ((plVar11 < plVar8 + 4) || ((pbVar10[2] & 3) != 2)) {
LAB_0019d7e8:
                local_c4 = 0;
                iVar7 = 5;
                goto LAB_0019d7f0;
              }
              lStack_98 = plVar8[3];
              local_a0 = plVar8[2];
              lStack_a8 = plVar8[5];
              local_b0 = plVar8[4];
              plVar1 = plVar8 + 6;
              if (plVar11 < plVar1) {
                local_c4 = FUN_0019db9c(&local_a0,&local_b0,&local_90,param_1);
LAB_0019d7d8:
                if (local_c4 == 0) goto LAB_0019d7e0;
                goto LAB_0019d850;
              }
              lStack_b8 = plVar8[7];
              local_c0 = *plVar1;
              local_c4 = FUN_0019db9c(&local_a0,&local_b0,&local_c0,param_1);
              if (local_c4 != 0) break;
              pbVar10 = pbVar10 + 3;
              plVar8 = plVar1;
            }
            goto joined_r0x0019d638;
          }
          lStack_78 = plVar8[3];
          local_80 = *plVar1;
          if (plVar11 <= plVar1) {
LAB_0019d7c8:
            local_c4 = FUN_0019d9ec(&local_80,&local_90,param_1);
            goto LAB_0019d7d8;
          }
          pbVar10 = pbVar10 + 2;
          plVar8 = plVar8 + 4;
          while( true ) {
            local_a0 = *plVar8;
            lStack_98 = plVar8[1];
            if ((*pbVar10 & 3) != 0) break;
            local_b0 = local_80 + local_a0;
            lStack_a8 = lStack_78 + lStack_98;
            if (local_b0 < 0) {
              local_b0 = local_b0 + 1;
            }
            if (lStack_a8 < 0) {
              lStack_a8 = lStack_a8 + 1;
            }
            local_b0 = local_b0 >> 1;
            lStack_a8 = lStack_a8 >> 1;
            local_c4 = FUN_0019d9ec(&local_80,&local_b0,param_1);
            if (local_c4 != 0) goto LAB_0019d7a8;
            pbVar10 = pbVar10 + 1;
            bVar5 = plVar11 <= plVar8;
            lStack_78 = lStack_98;
            local_80 = local_a0;
            plVar8 = plVar8 + 2;
            if (bVar5) goto LAB_0019d7c8;
          }
          if ((*pbVar10 & 3) != 1) goto LAB_0019d7e8;
          local_c4 = FUN_0019d9ec(&local_80,&local_a0,param_1);
        } while (local_c4 == 0);
LAB_0019d7a8:
        iVar7 = 6;
LAB_0019d7f0:
        if (iVar7 != 0) {
          if (iVar7 == 5) goto LAB_0019d848;
          goto LAB_0019d850;
        }
LAB_0019d7f8:
        lVar12 = lVar12 + 1;
      } while (lVar12 < (short)param_1[10].__mask_was_saved);
      local_c4 = 0;
    }
LAB_0019d850:
    if ((int)param_1[1].__saved_mask.__val[8] == 0) {
      FUN_0019d89c(param_1);
    }
  }
  else {
    local_c4 = -4;
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_c4);
  }
  return;
}


// ===== 0019d89c  FUN_0019d89c =====

void FUN_0019d89c(__jmp_buf_tag *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar1 = (int)param_1[1].__saved_mask.__val[6];
  uVar2 = param_1[1].__saved_mask.__val[7];
  if (uVar2 != 0 || iVar1 != 0) {
    uVar8 = param_1[1].__saved_mask.__val[4];
    puVar4 = (ulong *)(param_1[0x15].__jmpbuf[7] + *(long *)&param_1[1].__mask_was_saved * 8);
    puVar5 = (ulong *)*puVar4;
    if (param_1[1].__jmpbuf[7] <= (long)uVar8) {
      uVar8 = param_1[1].__jmpbuf[7];
    }
    if ((puVar5 != (ulong *)0x0) && (uVar7 = *puVar5, (long)uVar7 <= (long)uVar8)) {
      do {
        puVar3 = puVar5;
        if (uVar7 == uVar8) goto LAB_0019d934;
        puVar5 = (ulong *)puVar3[3];
      } while ((puVar5 != (ulong *)0x0) && (uVar7 = *puVar5, (long)uVar7 <= (long)uVar8));
      puVar4 = puVar3 + 3;
    }
    uVar7 = param_1[1].__saved_mask.__val[0xb];
    if ((long)param_1[1].__saved_mask.__val[10] <= (long)uVar7) {
                    /* WARNING: Subroutine does not return */
      longjmp(param_1,1);
    }
    uVar6 = param_1[1].__saved_mask.__val[9];
    param_1[1].__saved_mask.__val[0xb] = uVar7 + 1;
    puVar3 = (ulong *)(uVar6 + uVar7 * 0x20);
    *(undefined4 *)(puVar3 + 2) = 0;
    *puVar3 = uVar8;
    puVar3[1] = 0;
    puVar3[3] = *puVar4;
    *puVar4 = (ulong)puVar3;
LAB_0019d934:
    *(int *)(puVar3 + 2) = (int)puVar3[2] + iVar1;
    puVar3[1] = puVar3[1] + uVar2;
  }
  return;
}


// ===== 0019d95c  FUN_0019d95c =====

undefined8 FUN_0019d95c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_2 + 0x150) == 0) {
    FUN_0019d89c(param_2);
  }
  lVar4 = param_1[1];
  lVar3 = *(long *)(param_2 + 0x110);
  lVar5 = *param_1 << 2;
  lVar1 = *(long *)(param_2 + 0x118);
  if (lVar5 >> 8 <= *(long *)(param_2 + 0x118)) {
    lVar1 = (*param_1 << 2) >> 8;
  }
  lVar2 = lVar3 + -1;
  if (lVar3 <= lVar1) {
    lVar2 = lVar1;
  }
  *(undefined4 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(long *)(param_2 + 0x100) = lVar2 - lVar3;
  *(long *)(param_2 + 0x108) = ((lVar4 << 2) >> 8) - *(long *)(param_2 + 0x120);
  *(undefined4 *)(param_2 + 0x150) = 0;
  FUN_0019ddf4(param_2);
  *(long *)(param_2 + 0x170) = lVar5;
  *(long *)(param_2 + 0x178) = lVar4 << 2;
  return 0;
}


// ===== 0019d9ec  FUN_0019d9ec =====

undefined8 FUN_0019d9ec(long *param_1,long *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  long local_258 [66];
  long local_48;
  
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  local_258[0] = *param_2 * 4;
  local_258[1] = param_2[1] * 4;
  lVar10 = param_1[1];
  lVar5 = (param_2[1] << 2) >> 8;
  local_258[2] = *param_1 << 2;
  local_258[3] = lVar10 << 2;
  local_258[5] = *(long *)(param_3 + 0x178);
  lVar6 = (lVar10 << 2) >> 8;
  local_258[4] = *(long *)(param_3 + 0x170);
  lVar11 = *(long *)(param_3 + 0x128);
  if ((((lVar5 < lVar11) || (lVar6 < lVar11)) || (local_258[5] >> 8 < lVar11)) &&
     (((lVar11 = *(long *)(param_3 + 0x120), lVar11 <= local_258[5] >> 8 || (lVar11 <= lVar5)) ||
      (lVar11 <= lVar6)))) {
    uVar2 = *(long *)(param_3 + 0x170) + local_258[0] + *param_1 * -8;
    uVar4 = -uVar2;
    if (-1 < (long)uVar2) {
      uVar4 = uVar2;
    }
    uVar2 = local_258[5] + local_258[1] + lVar10 * -8;
    uVar8 = -uVar2;
    if (-1 < (long)uVar2) {
      uVar8 = uVar2;
    }
    if ((long)uVar8 <= (long)uVar4) {
      uVar8 = uVar4;
    }
    uVar12 = 1;
    if (0x40 < (long)uVar8) {
      do {
        uVar12 = uVar12 << 1;
        bVar1 = 0x103 < uVar8;
        uVar8 = uVar8 >> 2;
      } while (bVar1);
    }
    plVar9 = local_258;
    do {
      uVar3 = uVar12 & -uVar12;
      while (uVar3 = (int)uVar3 >> 1, uVar3 != 0) {
        plVar13 = plVar9 + 4;
        plVar9[8] = *plVar13;
        lVar5 = plVar9[2] + *plVar9;
        lVar6 = plVar9[2] + *plVar13;
        *plVar13 = lVar5 + lVar6 >> 2;
        plVar9[9] = plVar9[5];
        lVar10 = plVar9[3] + plVar9[1];
        lVar11 = plVar9[3] + plVar9[5];
        plVar9[6] = lVar6 >> 1;
        plVar9[7] = lVar11 >> 1;
        plVar9[5] = lVar10 + lVar11 >> 2;
        plVar9[2] = lVar5 >> 1;
        plVar9[3] = lVar10 >> 1;
        plVar9 = plVar13;
      }
      FUN_0019de90(param_3,*plVar9,plVar9[1]);
      uVar12 = uVar12 - 1;
      plVar9 = plVar9 + -4;
    } while (uVar12 != 0);
  }
  else {
    *(long *)(param_3 + 0x170) = local_258[0];
    *(long *)(param_3 + 0x178) = local_258[1];
  }
  if (*(long *)(lVar7 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019db9c  FUN_0019db9c =====

undefined8 FUN_0019db9c(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long local_358 [4];
  long local_338;
  long local_330;
  undefined8 local_328;
  long local_320;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_358[1] = param_3[1] << 2;
  local_358[0] = *param_3 << 2;
  local_358[2] = *param_2 << 2;
  local_358[3] = param_2[1] << 2;
  local_338 = *param_1 << 2;
  local_330 = param_1[1] << 2;
  local_328 = *(undefined8 *)(param_4 + 0x170);
  local_320 = *(long *)(param_4 + 0x178);
  lVar9 = *(long *)(param_4 + 0x128);
  lVar11 = (param_3[1] << 2) >> 8;
  lVar4 = (param_2[1] << 2) >> 8;
  lVar2 = (param_1[1] << 2) >> 8;
  lVar8 = *(long *)(param_4 + 0x178) >> 8;
  if (((((lVar11 < lVar9) || (lVar4 < lVar9)) || (lVar2 < lVar9)) || (lVar8 < lVar9)) &&
     (((lVar9 = *(long *)(param_4 + 0x120), lVar9 <= lVar8 || (lVar9 <= lVar2)) ||
      ((lVar9 <= lVar11 || (lVar9 <= lVar4)))))) {
    uVar10 = 0;
    lVar11 = 0;
    do {
      lVar6 = local_358[lVar11 * 2 + 2];
      lVar4 = lVar11 + 3;
      lVar9 = local_358[lVar11 * 2];
      lVar2 = lVar6 * -3 + lVar9 * 2 + local_358[lVar4 * 2];
      lVar8 = -lVar2;
      if (-1 < lVar2) {
        lVar8 = lVar2;
      }
      if (lVar8 < 0x81) {
        lVar7 = local_358[lVar11 * 2 + 3];
        lVar8 = local_358[lVar11 * 2 + 7];
        lVar2 = lVar7 * -3 + local_358[lVar11 * 2 + 1] * 2 + lVar8;
        lVar1 = -lVar2;
        if (-1 < lVar2) {
          lVar1 = lVar2;
        }
        if (0x80 < lVar1) goto LAB_0019dd30;
        lVar2 = lVar9 + local_358[lVar4 * 2] * 2 + local_358[lVar11 * 2 + 4] * -3;
        lVar1 = -lVar2;
        if (-1 < lVar2) {
          lVar1 = lVar2;
        }
        if (0x80 < lVar1) goto LAB_0019dd30;
        lVar2 = local_358[lVar11 * 2 + 1] + lVar8 * 2 + local_358[lVar11 * 2 + 5] * -3;
        lVar1 = -lVar2;
        if (-1 < lVar2) {
          lVar1 = lVar2;
        }
        if (0x80 < lVar1) goto LAB_0019dd30;
        FUN_0019de90(param_4);
        if (lVar11 == 0) break;
        lVar4 = lVar11 + -3;
        iVar5 = -3;
      }
      else {
        lVar8 = local_358[lVar11 * 2 + 7];
        lVar7 = local_358[lVar11 * 2 + 3];
LAB_0019dd30:
        local_358[lVar11 * 2 + 2] = lVar6 + lVar9 >> 1;
        lVar1 = local_358[lVar11 * 2 + 4] + lVar6;
        lVar2 = lVar1 + lVar6 + lVar9;
        lVar9 = local_358[lVar11 * 2 + 4] + local_358[lVar11 * 2 + 6];
        lVar1 = lVar9 + lVar1;
        local_358[lVar11 * 2 + 0xc] = local_358[lVar11 * 2 + 6];
        local_358[lVar11 * 2 + 0xd] = lVar8;
        lVar8 = local_358[lVar11 * 2 + 5] + lVar8;
        lVar6 = local_358[lVar11 * 2 + 5] + lVar7;
        local_358[lVar11 * 2 + 8] = lVar1 >> 2;
        local_358[lVar11 * 2 + 4] = lVar2 >> 2;
        local_358[lVar11 * 2 + 6] = lVar2 + lVar1 >> 3;
        lVar2 = lVar8 + lVar6;
        lVar6 = lVar6 + local_358[lVar11 * 2 + 1] + lVar7;
        local_358[lVar11 * 2 + 3] = local_358[lVar11 * 2 + 1] + lVar7 >> 1;
        local_358[lVar11 * 2 + 10] = lVar9 >> 1;
        local_358[lVar11 * 2 + 0xb] = lVar8 >> 1;
        local_358[lVar11 * 2 + 9] = lVar2 >> 2;
        local_358[lVar11 * 2 + 5] = lVar6 >> 2;
        local_358[lVar11 * 2 + 7] = lVar6 + lVar2 >> 3;
        iVar5 = 3;
      }
      uVar10 = uVar10 + iVar5;
      lVar11 = lVar4;
    } while (uVar10 < 0x31);
  }
  else {
    *(long *)(param_4 + 0x170) = *param_3 << 2;
    *(long *)(param_4 + 0x178) = local_358[1];
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


// ===== 0019ddf4  FUN_0019ddf4 =====

void FUN_0019ddf4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x118);
  if (param_2 <= *(long *)(param_1 + 0x118)) {
    lVar2 = param_2;
  }
  lVar2 = lVar2 - *(long *)(param_1 + 0x110);
  if (lVar2 < 0) {
    lVar2 = -1;
  }
  param_3 = param_3 - *(long *)(param_1 + 0x120);
  if ((lVar2 != *(long *)(param_1 + 0x100)) || (param_3 != *(long *)(param_1 + 0x108))) {
    if (*(int *)(param_1 + 0x150) == 0) {
      FUN_0019d89c(param_1);
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(long *)(param_1 + 0x100) = lVar2;
    *(long *)(param_1 + 0x108) = param_3;
  }
  if ((uint)param_3 < *(uint *)(param_1 + 0x138)) {
    uVar1 = (uint)(*(long *)(param_1 + 0x130) <= lVar2);
  }
  else {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x150) = uVar1;
  return;
}


// ===== 0019de90  FUN_0019de90 =====

void FUN_0019de90(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long local_78;
  long local_70;
  
  uVar3 = *(ulong *)(param_1 + 0x178);
  lVar8 = (long)uVar3 >> 8;
  lVar7 = (long)param_3 >> 8;
  if (((lVar8 < *(long *)(param_1 + 0x128)) || (lVar7 < *(long *)(param_1 + 0x128))) &&
     ((*(long *)(param_1 + 0x120) <= lVar8 || (*(long *)(param_1 + 0x120) <= lVar7)))) {
    uVar5 = *(ulong *)(param_1 + 0x170);
    lVar2 = param_2 >> 8;
    uVar14 = uVar3 & 0xff;
    lVar9 = (long)uVar5 >> 8;
    uVar13 = uVar5 & 0xff;
    if ((lVar8 != lVar7) || (lVar9 != lVar2)) {
      lVar4 = param_3 - uVar3;
      if (lVar4 == 0) {
        FUN_0019ddf4(param_1,lVar2,lVar7);
        goto LAB_0019e1a4;
      }
      lVar6 = param_2 - uVar5;
      if (lVar6 == 0) {
        if (lVar4 < 1) {
          do {
            lVar8 = lVar8 + -1;
            *(ulong *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) - uVar14;
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + (int)uVar14 * (int)uVar13 * -2;
            FUN_0019ddf4(param_1,lVar9,lVar8);
            uVar14 = 0x100;
          } while (lVar7 != lVar8);
          uVar14 = 0x100;
        }
        else {
          lVar2 = 0x100 - uVar14;
          do {
            lVar8 = lVar8 + 1;
            *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + lVar2;
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + (int)lVar2 * (int)uVar13 * 2;
            FUN_0019ddf4(param_1,lVar9,lVar8);
            lVar2 = 0x100;
          } while (lVar7 != lVar8);
          uVar14 = 0;
        }
      }
      else {
        if (lVar9 == lVar2) {
          local_70 = 0;
        }
        else {
          local_70 = 0;
          if (lVar6 != 0) {
            local_70 = 0xffffffffffffff / lVar6;
          }
        }
        if (lVar8 == lVar7) {
          local_78 = 0;
        }
        else {
          local_78 = 0;
          if (lVar4 != 0) {
            local_78 = 0xffffffffffffff / lVar4;
          }
        }
        lVar15 = lVar6 * 0x100;
        lVar10 = lVar6 * uVar14 - uVar13 * lVar4;
        uVar3 = uVar14;
        do {
          iVar12 = (int)uVar13;
          if ((lVar10 < 1) &&
             (lVar10 != lVar15 && lVar10 + lVar6 * -0x100 < 0 == SBORROW8(lVar10,lVar15))) {
            lVar9 = lVar9 + -1;
            uVar14 = (ulong)(lVar10 * local_70) >> 0x38;
            lVar11 = lVar10 + lVar4 * -0x100;
            *(ulong *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + (uVar14 - uVar3);
            *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + (int)(uVar14 - uVar3) * iVar12;
            uVar13 = 0x100;
          }
          else {
            lVar11 = lVar10 + lVar6 * -0x100;
            lVar1 = lVar11 + lVar4 * 0x100;
            if ((lVar11 < 1) && (0 < lVar1)) {
              uVar13 = (ulong)-(local_78 * lVar11) >> 0x38;
              *(ulong *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + (0x100 - uVar3);
              *(uint *)(param_1 + 0x140) =
                   *(int *)(param_1 + 0x140) +
                   ((uint)(byte)((ulong)-(local_78 * lVar11) >> 0x38) + iVar12) *
                   (int)(0x100 - uVar3);
              lVar8 = lVar8 + 1;
              uVar14 = 0;
            }
            else if ((lVar1 < 1) && (lVar11 = lVar10 + lVar4 * 0x100, -1 < lVar11)) {
              uVar14 = (ulong)(lVar11 * local_70) >> 0x38;
              *(ulong *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + (uVar14 - uVar3);
              *(int *)(param_1 + 0x140) =
                   *(int *)(param_1 + 0x140) + (int)(uVar14 - uVar3) * (iVar12 + 0x100);
              lVar9 = lVar9 + 1;
              uVar13 = 0;
            }
            else {
              lVar8 = lVar8 + -1;
              uVar13 = (ulong)-(local_78 * lVar10) >> 0x38;
              lVar11 = lVar10 + lVar15;
              uVar14 = 0x100;
              *(ulong *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) - uVar3;
              *(uint *)(param_1 + 0x140) =
                   *(int *)(param_1 + 0x140) -
                   (iVar12 + (uint)(byte)((ulong)-(local_78 * lVar10) >> 0x38)) * (int)uVar3;
            }
          }
          FUN_0019ddf4(param_1,lVar9,lVar8);
          lVar10 = lVar11;
          uVar3 = uVar14;
        } while ((lVar9 != lVar2) || (lVar8 != lVar7));
      }
    }
    lVar8 = (param_3 & 0xff) - uVar14;
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + lVar8;
    *(uint *)(param_1 + 0x140) =
         *(int *)(param_1 + 0x140) + ((int)uVar13 + (uint)(byte)param_2) * (int)lVar8;
  }
LAB_0019e1a4:
  *(long *)(param_1 + 0x170) = param_2;
  *(ulong *)(param_1 + 0x178) = param_3;
  return;
}


// ===== 0019e1c8  FUN_0019e1c8 =====

void FUN_0019e1c8(long param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  uVar3 = (uint)(param_4 >> 9);
  uVar5 = -uVar3;
  if (-1 < (int)uVar3) {
    uVar5 = uVar3;
  }
  if ((*(byte *)(param_1 + 0x838) >> 1 & 1) == 0) {
    if (0xfe < (int)uVar5) {
      uVar5 = 0xff;
    }
  }
  else {
    uVar3 = uVar5 & 0x1ff;
    if (uVar3 < 0x101) {
      uVar5 = 0xff;
      if (uVar3 != 0x100) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = 0x200 - uVar3;
    }
  }
  param_2 = *(long *)(param_1 + 0x110) + param_2;
  param_3 = *(long *)(param_1 + 0x120) + param_3;
  if (0x7ffe < param_2) {
    param_2 = 0x7fff;
  }
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  if (uVar5 != 0) {
    if (param_2 < *(int *)(param_1 + 0x860)) {
      *(int *)(param_1 + 0x860) = (int)param_2;
    }
    if (param_3 < *(int *)(param_1 + 0x864)) {
      *(int *)(param_1 + 0x864) = (int)param_3;
    }
    if (*(int *)(param_1 + 0x86c) < param_3) {
      *(int *)(param_1 + 0x86c) = (int)param_3;
    }
    if ((long)*(int *)(param_1 + 0x868) < param_2 + param_5) {
      *(int *)(param_1 + 0x868) = (int)(param_2 + param_5);
    }
    iVar2 = *(int *)(param_1 + 0x1070);
    puVar1 = (undefined2 *)(param_1 + 0x870);
    puVar4 = puVar1 + (long)iVar2 * 4;
    if (0 < iVar2) {
      if (((param_3 == (short)puVar4[-3]) &&
          ((uint)(ushort)puVar4[-2] + (int)(short)puVar4[-4] == (int)param_2)) &&
         (uVar5 == *(byte *)(puVar4 + -1))) {
        puVar4[-2] = puVar4[-2] + (short)param_5;
        return;
      }
      if (0xff < iVar2) {
        if (*(code **)(param_1 + 0x1078) != (code *)0x0) {
          (**(code **)(param_1 + 0x1078))((long)iVar2,puVar1,*(undefined8 *)(param_1 + 0x1080));
        }
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x1070) = 0;
        puVar4 = puVar1;
      }
    }
    *puVar4 = (short)param_2;
    puVar4[1] = (short)param_3;
    puVar4[2] = (short)param_5;
    *(char *)(puVar4 + 3) = (char)uVar5;
    *(int *)(param_1 + 0x1070) = iVar2 + 1;
  }
  return;
}


// ===== 0019e340  FUN_0019e340 =====

void FUN_0019e340(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_3 + (param_1[1] - *param_1 >> 3);
  if ((ulong)(param_1[2] - *param_1 >> 3) < uVar1) {
    FUN_0019e634(param_1,uVar1);
  }
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 == (undefined8 *)param_1[2]) {
        FUN_0019fcd4(param_1,param_2);
      }
      else {
        *puVar2 = *param_2;
        param_1[1] = (long)(puVar2 + 1);
      }
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}


// ===== 0019e3d8  FUN_0019e3d8 =====

undefined1  [16] FUN_0019e3d8(long param_1)

{
  FUN_0019e3fc();
  return *(undefined1 (*) [16])(param_1 + 0x20);
}


// ===== 0019e3fc  FUN_0019e3fc =====

void FUN_0019e3fc(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ushort *puVar11;
  
  if ((char)param_1[6] != '\0') {
    lVar3 = *param_1;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if (param_1[1] - lVar3 != 0) {
      uVar9 = param_1[1] - lVar3 >> 3;
      sVar4 = *(short *)(lVar3 + 2);
      sVar5 = *(short *)(lVar3 + uVar9 * 8 + -6);
      uVar8 = 0;
      puVar11 = (ushort *)(lVar3 + 4);
      iVar7 = 0;
      iVar10 = 0x7fffffff;
      do {
        uVar6 = puVar11[-2];
        uVar8 = uVar8 + 1;
        iVar1 = (uint)*puVar11 + (int)(short)uVar6;
        iVar2 = (int)(short)uVar6;
        if (iVar10 <= (short)uVar6) {
          iVar2 = iVar10;
        }
        if (iVar1 <= iVar7) {
          iVar1 = iVar7;
        }
        puVar11 = puVar11 + 4;
        iVar7 = iVar1;
        iVar10 = iVar2;
      } while (uVar8 < uVar9);
      *(int *)(param_1 + 4) = iVar2;
      *(int *)((long)param_1 + 0x24) = (int)sVar4;
      *(int *)(param_1 + 5) = iVar1;
      *(int *)((long)param_1 + 0x2c) = sVar5 + 1;
    }
  }
  return;
}


// ===== 0019e470  FUN_0019e470 =====

void FUN_0019e470(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}


// ===== 0019e480  FUN_0019e480 =====

void FUN_0019e480(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = *param_1;
  return;
}


// ===== 0019e498  FUN_0019e498 =====

void FUN_0019e498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_0019fb98(param_1,*param_2,param_2[1]);
  }
  param_1[3] = param_2[3];
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return;
}


// ===== 0019e4e4  FUN_0019e4e4 =====

void FUN_0019e4e4(undefined8 *param_1,int *param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_2;
  iVar5 = *(int *)(param_1 + 3);
  psVar1 = (short *)*param_1;
  psVar2 = (short *)param_1[1];
  iVar3 = param_2[1] - *(int *)((long)param_1 + 0x1c);
  param_1[3] = CONCAT44(iVar3,iVar4 - iVar5);
  for (; psVar1 != psVar2; psVar1 = psVar1 + 4) {
    *psVar1 = *psVar1 + (short)(iVar4 - iVar5);
    psVar1[1] = psVar1[1] + (short)iVar3;
  }
  FUN_0019e3fc(param_1);
  iVar4 = (int)param_1[3];
  iVar5 = (int)((ulong)param_1[3] >> 0x20);
  param_1[5] = CONCAT44((int)((ulong)param_1[5] >> 0x20) + iVar5,(int)param_1[5] + iVar4);
  param_1[4] = CONCAT44((int)((ulong)param_1[4] >> 0x20) + iVar5,(int)param_1[4] + iVar4);
  return;
}


// ===== 0019e568  FUN_0019e568 =====

void FUN_0019e568(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  int iVar9;
  short local_60;
  undefined2 uStack_5e;
  short sStack_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  uVar1 = *param_2;
  iVar9 = param_2[1];
  uVar2 = param_2[2];
  iVar3 = param_2[3];
  iVar6 = iVar3 - iVar9;
  FUN_0019e634(param_1,(long)iVar6);
  if (0 < iVar6) {
    sVar8 = (short)uVar1;
    sVar5 = (short)uVar2 - sVar8;
    do {
      uStack_5e = (undefined2)iVar9;
      uStack_5a = 0xff;
      puVar4 = *(undefined8 **)(param_1 + 8);
      local_60 = sVar8;
      sStack_5c = sVar5;
      if (puVar4 == *(undefined8 **)(param_1 + 0x10)) {
        FUN_0019fcd4(param_1,&local_60);
      }
      else {
        *puVar4 = CONCAT17(uStack_59,CONCAT16(0xff,CONCAT24(sVar5,CONCAT22(uStack_5e,sVar8))));
        *(undefined8 **)(param_1 + 8) = puVar4 + 1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar3 != iVar9);
  }
  FUN_0019e3fc(param_1);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019e634  FUN_0019e634 =====

void FUN_0019e634(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  long *plStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 3) < param_2) {
    lVar3 = param_1[1];
    plStack_40 = param_1 + 2;
    local_48 = (void *)0x0;
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_60 = operator_new(param_2 << 3);
    local_58 = (long)local_60 + (lVar3 - lVar2);
    local_48 = (void *)((long)local_60 + param_2 * 8);
    local_50 = local_58;
    FUN_0019fb20(param_1,&local_60);
    if (local_50 - local_58 != 0) {
      local_50 = local_50 + ((local_50 - local_58) - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019e704  FUN_0019e704 =====

void FUN_0019e704(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = *param_1; lVar1 != lVar2; lVar1 = lVar1 + 8) {
    *(byte *)(lVar1 + 6) = ~*(byte *)(lVar1 + 6);
  }
  return;
}


// ===== 0019e72c  FUN_0019e72c =====

void FUN_0019e72c(long *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  if (lVar3 != lVar1) {
    do {
      uVar2 = (param_2 & 0xff) * (uint)*(byte *)(lVar3 + 6);
      *(char *)(lVar3 + 6) = (char)(uVar2 + (uVar2 >> 8) + 0x80 >> 8);
      lVar3 = lVar3 + 8;
    } while (lVar1 != lVar3);
  }
  return;
}


// ===== 0019e764  FUN_0019e764 =====

void FUN_0019e764(ulong *param_1,int *param_2,code *param_3,undefined8 param_4)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  short *psVar14;
  short *psVar15;
  long lVar16;
  short local_870 [3];
  undefined1 local_86a [2042];
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  if (*param_1 != param_1[1]) {
    FUN_0019e3fc();
    if (((((int)param_1[4] < *param_2) || (param_2[2] < (int)param_1[5])) ||
        ((int)(param_1[4] >> 0x20) < param_2[1])) || (param_2[3] < (int)(param_1[5] >> 0x20))) {
      psVar15 = (short *)*param_1;
      lVar16 = param_1[1] - (long)psVar15;
      if (lVar16 != 0) {
        iVar4 = param_2[3];
        iVar5 = param_2[1];
        iVar8 = (int)(short)((short)param_2[2] + -1);
        sVar1 = (short)*param_2;
        iVar9 = (int)sVar1;
        do {
          psVar3 = (short *)((long)psVar15 + lVar16);
          iVar11 = 0x100;
          if (0 < lVar16) {
            psVar12 = local_870;
            psVar14 = psVar15;
            do {
              while( true ) {
                sVar6 = psVar14[1];
                psVar15 = psVar3;
                if ((short)((short)iVar4 + -1) < sVar6) goto LAB_0019e90c;
                if ((sVar6 < (short)iVar5) || (sVar7 = *psVar14, iVar8 < sVar7)) break;
                if ((int)((uint)(ushort)psVar14[2] + (int)sVar7) <= iVar9) break;
                uVar13 = (uint)(ushort)psVar14[2];
                if (sVar7 < iVar9) {
                  uVar2 = (sVar7 - iVar9) + uVar13;
                  uVar13 = (iVar8 - sVar1) + 1;
                  if ((int)uVar2 <= iVar8 - sVar1) {
                    uVar13 = uVar2;
                  }
                  *psVar12 = sVar1;
                }
                else {
                  *psVar12 = sVar7;
                  if (iVar8 - *psVar14 < (int)uVar13) {
                    uVar13 = (iVar8 - *psVar14) + 1;
                  }
                }
                psVar12[2] = (short)uVar13;
                if ((uVar13 & 0xffff) != 0) {
                  psVar12[1] = sVar6;
                  iVar11 = iVar11 + -1;
                  *(char *)(psVar12 + 3) = (char)psVar14[3];
                  psVar12 = psVar12 + 4;
                }
                psVar15 = psVar14 + 4;
                if ((psVar3 <= psVar15) || (psVar14 = psVar15, iVar11 == 0)) goto LAB_0019e90c;
              }
              psVar15 = psVar14 + 4;
              psVar14 = psVar15;
            } while (psVar15 < psVar3);
          }
LAB_0019e90c:
          lVar16 = (long)psVar3 - (long)psVar15;
          if (0x100 - (long)iVar11 != 0) {
            (*param_3)(0x100 - (long)iVar11,local_870,param_4);
          }
        } while (lVar16 != 0);
      }
    }
    else {
      (*param_3)((long)(param_1[1] - *param_1) >> 3,*param_1,param_4);
    }
  }
  if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019e974  FUN_0019e974 =====

void FUN_0019e974(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  long lVar10;
  short *psVar11;
  short *psVar12;
  bool bVar13;
  ulong uVar14;
  short *psVar15;
  undefined8 *puVar16;
  long lVar17;
  short *psVar18;
  short *psVar19;
  long lVar20;
  long lVar21;
  short *psVar22;
  undefined8 *puVar23;
  short *psVar24;
  short *psVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 local_1470 [256];
  undefined1 auStack_c70 [1024];
  undefined8 auStack_870 [256];
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  FUN_0019e3fc(param_2);
  lVar17 = param_2[4];
  iVar1 = *(int *)((long)param_2 + 0x24);
  lVar20 = param_2[5];
  FUN_0019e3fc(param_3);
  if (((((int)param_3[4] < (int)lVar20) && ((int)lVar17 < (int)param_3[5])) &&
      ((int)((ulong)param_3[4] >> 0x20) < (int)((ulong)lVar20 >> 0x20))) &&
     (iVar1 < (int)((ulong)param_3[5] >> 0x20))) {
    psVar25 = (short *)*param_2;
    psVar24 = (short *)*param_3;
    psVar2 = (short *)param_3[1];
    lVar17 = param_2[1] - (long)psVar25;
    lVar20 = (long)psVar2 - (long)psVar24;
    psVar19 = psVar25;
    if (lVar17 != 0) {
      lVar17 = (lVar17 >> 3) << 3;
      psVar18 = psVar25;
      do {
        psVar19 = psVar18;
        if (psVar24[1] <= psVar18[1]) break;
        lVar17 = lVar17 + -8;
        psVar18 = psVar18 + 4;
        psVar19 = (short *)param_2[1];
      } while (lVar17 != 0);
    }
    lVar17 = (long)psVar19 - (long)psVar25 >> 3;
    if ((long)psVar19 - (long)psVar25 != 0) {
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)(lVar17 + (param_1[1] - *param_1 >> 3))) {
        FUN_0019e634(param_1);
      }
      do {
        puVar23 = (undefined8 *)param_1[1];
        if (puVar23 == (undefined8 *)param_1[2]) {
          FUN_0019fcd4(param_1,psVar25);
        }
        else {
          *puVar23 = *(undefined8 *)psVar25;
          param_1[1] = (long)(puVar23 + 1);
        }
        psVar25 = psVar25 + 4;
      } while (psVar19 != psVar25);
    }
    psVar25 = psVar24;
    if (lVar20 != 0) {
      lVar20 = (lVar20 >> 3) << 3;
      do {
        psVar25 = psVar24;
        if (psVar19[1] <= psVar24[1]) break;
        lVar20 = lVar20 + -8;
        psVar24 = psVar24 + 4;
        psVar25 = psVar2;
      } while (lVar20 != 0);
    }
    lVar17 = (param_2[1] - *param_2 >> 3) - lVar17;
    bVar13 = lVar17 == 0;
    lVar20 = (param_3[1] - *param_3 >> 3) - ((long)psVar25 - *param_3 >> 3);
    lVar21 = lVar17;
    if (lVar20 != 0) {
      while (lVar21 != 0) {
        puVar23 = local_1470;
        psVar24 = psVar19 + lVar17 * 4;
        psVar2 = psVar25 + lVar20 * 4;
        uVar27 = 0x100;
        psVar18 = psVar19;
        do {
          while( true ) {
            psVar19 = psVar18;
            if ((psVar24 <= psVar18) || (psVar2 <= psVar25)) goto LAB_0019ecfc;
            sVar3 = psVar18[1];
            sVar4 = psVar25[1];
            if (sVar4 <= sVar3) break;
            psVar19 = psVar18 + 4;
            uVar27 = uVar27 - 1;
            *puVar23 = *(undefined8 *)psVar18;
            puVar23 = puVar23 + 1;
joined_r0x0019ebc8:
            psVar18 = psVar19;
            if (uVar27 == 0) goto LAB_0019ecfc;
          }
          psVar15 = psVar18;
          if (sVar4 < sVar3) {
            psVar25 = psVar25 + 4;
            goto joined_r0x0019ebc8;
          }
          do {
            psVar11 = psVar15;
            psVar15 = psVar11 + 4;
            if (psVar24 <= psVar15) break;
          } while (psVar11[5] == sVar3);
          psVar12 = psVar25;
          while ((psVar22 = psVar12, sVar4 == sVar3 && (psVar22 = psVar12 + 4, psVar22 < psVar2))) {
            sVar4 = psVar12[5];
            psVar12 = psVar22;
          }
          sVar5 = *psVar11;
          uVar7 = psVar11[2];
          sVar6 = psVar22[-4];
          uVar8 = psVar22[-2];
          sVar4 = *psVar25;
          if (*psVar18 <= *psVar25) {
            sVar4 = *psVar18;
          }
          memset(auStack_c70,0,0x400);
          iVar1 = -(int)sVar4;
          FUN_0019f950(psVar18,(ulong)((long)psVar15 - (long)psVar18) >> 3,auStack_c70,0x400,iVar1);
          FUN_0019f894(psVar25,(ulong)((long)psVar22 - (long)psVar25) >> 3,auStack_c70,0x400,iVar1);
          iVar1 = (uint)uVar8 + (int)sVar6;
          if ((int)((uint)uVar8 + (int)sVar6) <= (int)((uint)uVar7 + (int)sVar5)) {
            iVar1 = (uint)uVar7 + (int)sVar5;
          }
          uVar14 = FUN_0019f9a4(auStack_c70,0x400,iVar1,(int)sVar4,(int)sVar3,auStack_870);
          uVar9 = uVar27 - uVar14;
          if (uVar27 < uVar14) break;
          if (uVar14 != 0) {
            puVar16 = auStack_870;
            puVar26 = puVar23;
            do {
              uVar14 = uVar14 - 1;
              puVar23 = puVar26 + 1;
              *puVar26 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar26 = puVar23;
              uVar27 = uVar9;
            } while (uVar14 != 0);
          }
          psVar18 = psVar15;
          psVar19 = psVar15;
          psVar25 = psVar22;
        } while (uVar27 != 0);
LAB_0019ecfc:
        lVar21 = (long)psVar24 - (long)psVar19;
        lVar17 = lVar21 >> 3;
        if (0x100 - uVar27 != 0) {
          if ((ulong)(param_1[2] - *param_1 >> 3) < (0x100 - uVar27) + (param_1[1] - *param_1 >> 3))
          {
            FUN_0019e634(param_1);
          }
          puVar23 = local_1470;
          lVar20 = uVar27 * -8 + 0x800;
          do {
            puVar16 = (undefined8 *)param_1[1];
            if (puVar16 == (undefined8 *)param_1[2]) {
              FUN_0019fcd4(param_1,puVar23);
            }
            else {
              *puVar16 = *puVar23;
              param_1[1] = (long)(puVar16 + 1);
            }
            lVar20 = lVar20 + -8;
            puVar23 = puVar23 + 1;
          } while (lVar20 != 0);
        }
        bVar13 = lVar21 == 0;
        if ((long)psVar2 - (long)psVar25 == 0) break;
        lVar20 = (long)psVar2 - (long)psVar25 >> 3;
      }
    }
    if (!bVar13) {
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)(lVar17 + (param_1[1] - *param_1 >> 3))) {
        FUN_0019e634(param_1);
      }
      lVar17 = lVar17 << 3;
      do {
        puVar23 = (undefined8 *)param_1[1];
        if (puVar23 == (undefined8 *)param_1[2]) {
          FUN_0019fcd4(param_1,psVar19);
        }
        else {
          *puVar23 = *(undefined8 *)psVar19;
          param_1[1] = (long)(puVar23 + 1);
        }
        lVar17 = lVar17 + -8;
        psVar19 = psVar19 + 4;
      } while (lVar17 != 0);
    }
  }
  else if (param_1 != param_2) {
    FUN_0019fb98(param_1,*param_2,param_2[1]);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019ee00  FUN_0019ee00 =====

void FUN_0019ee00(long *param_1,long *param_2,long *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  undefined1 auVar27 [16];
  long local_1470 [256];
  undefined1 auStack_c70 [1024];
  long local_870 [256];
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  FUN_0019e634(param_1,(param_3[1] - *param_3 >> 3) + (param_2[1] - *param_2 >> 3));
  FUN_0019e3fc(param_2);
  lVar14 = param_2[4];
  iVar2 = *(int *)((long)param_2 + 0x24);
  lVar17 = param_2[5];
  FUN_0019e3fc(param_3);
  if (((((int)param_3[4] < (int)lVar17) && ((int)lVar14 < (int)param_3[5])) &&
      ((int)((ulong)param_3[4] >> 0x20) < (int)((ulong)lVar17 >> 0x20))) &&
     (iVar2 < (int)((ulong)param_3[5] >> 0x20))) {
    plVar26 = (long *)*param_3;
    plVar3 = (long *)param_3[1];
    plVar13 = (long *)*param_2;
    lVar17 = (long)plVar3 - (long)plVar26;
    lVar14 = param_2[1] - (long)plVar13;
    plVar22 = plVar13;
    if (lVar14 != 0) {
      lVar14 = (lVar14 >> 3) << 3;
      plVar15 = plVar13;
      do {
        plVar22 = plVar15;
        if (*(short *)((long)plVar26 + 2) <= *(short *)((long)plVar15 + 2)) break;
        lVar14 = lVar14 + -8;
        plVar15 = plVar15 + 1;
        plVar22 = (long *)param_2[1];
      } while (lVar14 != 0);
    }
    lVar14 = (long)plVar22 - (long)plVar13 >> 3;
    if ((long)plVar22 - (long)plVar13 != 0) {
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)(lVar14 + (param_1[1] - *param_1 >> 3))) {
        FUN_0019e634(param_1);
      }
      do {
        plVar15 = (long *)param_1[1];
        if (plVar15 == (long *)param_1[2]) {
          FUN_0019fcd4(param_1,plVar13);
        }
        else {
          *plVar15 = *plVar13;
          param_1[1] = (long)(plVar15 + 1);
        }
        plVar13 = plVar13 + 1;
      } while (plVar22 != plVar13);
    }
    plVar13 = plVar26;
    if (lVar17 != 0) {
      lVar17 = (lVar17 >> 3) << 3;
      do {
        plVar13 = plVar26;
        if (*(short *)((long)plVar22 + 2) <= *(short *)((long)plVar26 + 2)) break;
        lVar17 = lVar17 + -8;
        plVar26 = plVar26 + 1;
        plVar13 = plVar3;
      } while (lVar17 != 0);
    }
    plVar26 = (long *)*param_3;
    lVar17 = (long)plVar13 - (long)plVar26 >> 3;
    if ((long)plVar13 - (long)plVar26 != 0) {
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)(lVar17 + (param_1[1] - *param_1 >> 3))) {
        FUN_0019e634(param_1);
      }
      do {
        plVar3 = (long *)param_1[1];
        if (plVar3 == (long *)param_1[2]) {
          FUN_0019fcd4(param_1,plVar26);
        }
        else {
          *plVar3 = *plVar26;
          param_1[1] = (long)(plVar3 + 1);
        }
        plVar26 = plVar26 + 1;
      } while (plVar13 != plVar26);
      plVar26 = (long *)*param_3;
    }
    lVar17 = (param_3[1] - (long)plVar26 >> 3) - lVar17;
    lVar14 = (param_2[1] - *param_2 >> 3) - lVar14;
    lVar20 = lVar17;
    lVar25 = lVar14;
    while ((lVar25 != 0 && (lVar17 != 0))) {
      plVar26 = plVar22 + lVar14;
      plVar3 = plVar13 + lVar20;
      uVar18 = 0x100;
      plVar15 = plVar13;
      plVar23 = local_1470;
      do {
        while( true ) {
          plVar13 = plVar15;
          if ((plVar26 <= plVar22) || (plVar3 <= plVar15)) goto LAB_0019f3b4;
          sVar4 = *(short *)((long)plVar22 + 2);
          sVar5 = *(short *)((long)plVar15 + 2);
          if (sVar5 <= sVar4) break;
          lVar14 = *plVar22;
          plVar22 = plVar22 + 1;
LAB_0019f258:
          *plVar23 = lVar14;
          uVar18 = uVar18 - 1;
          plVar15 = plVar13;
          plVar23 = plVar23 + 1;
          if (uVar18 == 0) goto LAB_0019f3b4;
        }
        plVar12 = plVar22;
        if (sVar5 < sVar4) {
          plVar13 = plVar15 + 1;
          lVar14 = *plVar15;
          goto LAB_0019f258;
        }
        do {
          plVar9 = plVar12;
          plVar12 = plVar9 + 1;
          if (plVar26 <= plVar12) break;
        } while (*(short *)((long)plVar9 + 10) == sVar4);
        plVar10 = plVar15;
        while ((plVar24 = plVar10, sVar5 == sVar4 && (plVar24 = plVar10 + 1, plVar24 < plVar3))) {
          sVar5 = *(short *)((long)plVar10 + 10);
          plVar10 = plVar24;
        }
        iVar2 = (uint)*(ushort *)((long)plVar9 + 4) + (int)(short)*plVar9;
        iVar1 = (uint)*(ushort *)((long)plVar24 + -4) + (int)(short)plVar24[-1];
        sVar5 = (short)*plVar15;
        if ((short)*plVar22 <= (short)*plVar15) {
          sVar5 = (short)*plVar22;
        }
        memset(auStack_c70,0,0x400);
        iVar6 = -(int)sVar5;
        FUN_0019f950(plVar22,(ulong)((long)plVar12 - (long)plVar22) >> 3,auStack_c70,0x400,iVar6);
        if (param_4 == 1) {
          FUN_0019f830();
        }
        else {
          FUN_0019f8f0(plVar15,(ulong)((long)plVar24 - (long)plVar15) >> 3,auStack_c70,0x400,iVar6);
        }
        if (iVar1 <= iVar2) {
          iVar1 = iVar2;
        }
        uVar11 = FUN_0019f9a4(auStack_c70,0x400,iVar1,(int)sVar5,(int)sVar4,local_870);
        uVar7 = uVar18 - uVar11;
        if (uVar18 < uVar11) break;
        if (uVar11 != 0) {
          plVar13 = local_870;
          plVar22 = plVar23;
          do {
            uVar11 = uVar11 - 1;
            plVar23 = plVar22 + 1;
            *plVar22 = *plVar13;
            plVar13 = plVar13 + 1;
            uVar18 = uVar7;
            plVar22 = plVar23;
          } while (uVar11 != 0);
        }
        plVar15 = plVar24;
        plVar13 = plVar24;
        plVar22 = plVar12;
      } while (uVar18 != 0);
LAB_0019f3b4:
      lVar25 = (long)plVar26 - (long)plVar22;
      lVar17 = (long)plVar3 - (long)plVar13;
      lVar14 = lVar25 >> 3;
      lVar20 = lVar17 >> 3;
      if (0x100 - uVar18 != 0) {
        if ((ulong)(param_1[2] - *param_1 >> 3) < (0x100 - uVar18) + (param_1[1] - *param_1 >> 3)) {
          FUN_0019e634(param_1);
        }
        plVar26 = local_1470;
        lVar16 = uVar18 * -8 + 0x800;
        do {
          plVar3 = (long *)param_1[1];
          if (plVar3 == (long *)param_1[2]) {
            FUN_0019fcd4(param_1,plVar26);
          }
          else {
            *plVar3 = *plVar26;
            param_1[1] = (long)(plVar3 + 1);
          }
          lVar16 = lVar16 + -8;
          plVar26 = plVar26 + 1;
        } while (lVar16 != 0);
      }
    }
    if (lVar17 != 0) {
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)(lVar20 + (param_1[1] - *param_1 >> 3))) {
        FUN_0019e634(param_1);
      }
      lVar20 = lVar20 << 3;
      do {
        plVar26 = (long *)param_1[1];
        if (plVar26 == (long *)param_1[2]) {
          FUN_0019fcd4(param_1,plVar13);
        }
        else {
          *plVar26 = *plVar13;
          param_1[1] = (long)(plVar26 + 1);
        }
        plVar13 = plVar13 + 1;
        lVar20 = lVar20 + -8;
      } while (lVar20 != 0);
    }
    if (lVar14 != 0) {
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)(lVar14 + (param_1[1] - *param_1 >> 3))) {
        FUN_0019e634(param_1);
      }
      lVar14 = lVar14 << 3;
      do {
        plVar13 = (long *)param_1[1];
        if (plVar13 == (long *)param_1[2]) {
          FUN_0019fcd4(param_1,plVar22);
        }
        else {
          *plVar13 = *plVar22;
          param_1[1] = (long)(plVar13 + 1);
        }
        lVar14 = lVar14 + -8;
        plVar22 = plVar22 + 1;
      } while (lVar14 != 0);
    }
  }
  else {
    puVar21 = (undefined8 *)*param_3;
    puVar19 = (undefined8 *)*param_2;
    if (*(short *)((long)puVar19 + 2) < *(short *)((long)puVar21 + 2)) {
      lVar17 = param_2[1];
      lVar14 = lVar17 - (long)puVar19 >> 3;
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)((param_1[1] - *param_1 >> 3) + lVar14)) {
        FUN_0019e634(param_1);
      }
      if (lVar17 - (long)puVar19 != 0) {
        lVar14 = lVar14 << 3;
        do {
          puVar21 = (undefined8 *)param_1[1];
          if (puVar21 == (undefined8 *)param_1[2]) {
            FUN_0019fcd4(param_1,puVar19);
          }
          else {
            *puVar21 = *puVar19;
            param_1[1] = (long)(puVar21 + 1);
          }
          lVar14 = lVar14 + -8;
          puVar19 = puVar19 + 1;
        } while (lVar14 != 0);
      }
      puVar19 = (undefined8 *)*param_3;
      lVar17 = param_3[1];
      lVar14 = lVar17 - (long)puVar19 >> 3;
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)((param_1[1] - *param_1 >> 3) + lVar14)) {
        FUN_0019e634(param_1);
      }
      if (lVar17 - (long)puVar19 != 0) {
        lVar14 = lVar14 << 3;
        do {
          puVar21 = (undefined8 *)param_1[1];
          if (puVar21 == (undefined8 *)param_1[2]) {
            FUN_0019fcd4(param_1,puVar19);
          }
          else {
            *puVar21 = *puVar19;
            param_1[1] = (long)(puVar21 + 1);
          }
          lVar14 = lVar14 + -8;
          puVar19 = puVar19 + 1;
        } while (lVar14 != 0);
      }
    }
    else {
      lVar17 = param_3[1];
      lVar14 = lVar17 - (long)puVar21 >> 3;
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)((param_1[1] - *param_1 >> 3) + lVar14)) {
        FUN_0019e634(param_1);
      }
      if (lVar17 - (long)puVar21 != 0) {
        lVar14 = lVar14 << 3;
        do {
          puVar19 = (undefined8 *)param_1[1];
          if (puVar19 == (undefined8 *)param_1[2]) {
            FUN_0019fcd4(param_1,puVar21);
          }
          else {
            *puVar19 = *puVar21;
            param_1[1] = (long)(puVar19 + 1);
          }
          lVar14 = lVar14 + -8;
          puVar21 = puVar21 + 1;
        } while (lVar14 != 0);
      }
      puVar19 = (undefined8 *)*param_2;
      lVar17 = param_2[1];
      lVar14 = lVar17 - (long)puVar19 >> 3;
      if ((ulong)(param_1[2] - *param_1 >> 3) < (ulong)((param_1[1] - *param_1 >> 3) + lVar14)) {
        FUN_0019e634(param_1);
      }
      if (lVar17 - (long)puVar19 != 0) {
        lVar14 = lVar14 << 3;
        do {
          puVar21 = (undefined8 *)param_1[1];
          if (puVar21 == (undefined8 *)param_1[2]) {
            FUN_0019fcd4(param_1,puVar19);
          }
          else {
            *puVar21 = *puVar19;
            param_1[1] = (long)(puVar21 + 1);
          }
          lVar14 = lVar14 + -8;
          puVar19 = puVar19 + 1;
        } while (lVar14 != 0);
      }
    }
  }
  FUN_0019e3fc(param_2);
  local_870[1] = param_2[5];
  local_870[0] = param_2[4];
  FUN_001911a0(local_1470,local_870);
  FUN_0019e3fc(param_3);
  local_870[1] = param_3[5];
  local_870[0] = param_3[4];
  FUN_00192488(local_1470,local_870);
  auVar27 = FUN_00192884(local_1470);
  *(undefined1 (*) [16])(param_1 + 4) = auVar27;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00191324(local_1470);
  if (*(long *)(lVar8 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0019f5c4  FUN_0019f5c4 =====

void FUN_0019f5c4(ulong *param_1,long *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  short sVar6;
  long lVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  long lVar15;
  long lVar16;
  short local_868 [3];
  undefined1 local_862 [2042];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  psVar13 = (short *)*param_1;
  lVar15 = param_1[1] - (long)psVar13;
  if (lVar15 != 0) {
    psVar14 = (short *)*param_2;
    lVar16 = param_2[1] - (long)psVar14;
    do {
      psVar3 = (short *)((long)psVar13 + lVar15);
      psVar4 = (short *)((long)psVar14 + lVar16);
      iVar8 = 0x100;
      if (0 < lVar15) {
        psVar9 = local_868;
        psVar12 = psVar13;
LAB_0019f628:
        do {
          while( true ) {
            psVar13 = psVar3;
            if (psVar4 <= psVar14) goto LAB_0019f710;
            sVar5 = psVar14[1];
            if (sVar5 <= psVar12[1]) break;
LAB_0019f680:
            psVar13 = psVar12 + 4;
            psVar12 = psVar13;
            if (psVar3 <= psVar13) goto LAB_0019f710;
          }
          if (psVar12[1] == sVar5) {
            sVar6 = *psVar14;
            iVar1 = (uint)(ushort)psVar14[2] + (int)sVar6;
            iVar10 = (int)*psVar12;
            if ((*psVar12 <= sVar6) || (iVar10 <= iVar1)) {
              iVar2 = (uint)(ushort)psVar12[2] + iVar10;
              iVar11 = (int)sVar6;
              if ((iVar10 < sVar6) && (iVar2 < iVar11)) goto LAB_0019f680;
              if (iVar10 <= iVar11) {
                iVar10 = iVar11;
              }
              iVar11 = iVar1;
              if (iVar2 <= iVar1) {
                iVar11 = iVar2;
              }
              if (iVar11 - iVar10 != 0) {
                *psVar9 = (short)iVar10;
                psVar9[2] = (short)(iVar11 - iVar10);
                psVar9[1] = sVar5;
                iVar8 = iVar8 + -1;
                *(char *)(psVar9 + 3) =
                     (char)((uint)*(byte *)(psVar14 + 3) * (uint)*(byte *)(psVar12 + 3) +
                            ((uint)*(byte *)(psVar14 + 3) * (uint)*(byte *)(psVar12 + 3) >> 8) +
                            0x80 >> 8);
                psVar9 = psVar9 + 4;
              }
              psVar13 = psVar12 + 4;
              if (iVar1 <= iVar2) {
                psVar14 = psVar14 + 4;
                psVar13 = psVar12;
              }
              if ((psVar3 <= psVar13) || (psVar12 = psVar13, iVar8 == 0)) break;
              goto LAB_0019f628;
            }
          }
          psVar14 = psVar14 + 4;
          psVar13 = psVar12;
        } while (psVar12 < psVar3);
      }
LAB_0019f710:
      lVar15 = (long)psVar3 - (long)psVar13;
      lVar16 = (long)psVar4 - (long)psVar14;
      if (0x100 - (long)iVar8 != 0) {
        (*param_3)(0x100 - (long)iVar8,local_868,param_4);
      }
    } while (lVar15 != 0);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019f764  FUN_0019f764 =====

void FUN_0019f764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0019f5c4(param_2,param_3,FUN_0019f7a0,param_1);
  FUN_0019e3fc(param_1);
  return;
}


// ===== 0019f7a0  FUN_0019f7a0 =====

void FUN_0019f7a0(long param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1 + (param_3[1] - *param_3 >> 3);
  if ((ulong)(param_3[2] - *param_3 >> 3) < uVar1) {
    FUN_0019e634(param_3,uVar1);
  }
  if (param_1 != 0) {
    param_1 = param_1 << 3;
    do {
      puVar2 = (undefined8 *)param_3[1];
      if (puVar2 == (undefined8 *)param_3[2]) {
        FUN_0019fcd4(param_3,param_2);
      }
      else {
        *puVar2 = *param_2;
        param_3[1] = (long)(puVar2 + 1);
      }
      param_1 = param_1 + -8;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}


// ===== 0019f830  FUN_0019f830 =====

void FUN_0019f830(short *param_1,int param_2,long param_3,int param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_2 != 0) {
    do {
      uVar1 = param_1[2];
      uVar3 = (uint)uVar1;
      if (param_4 <= (int)((int)((long)*param_1 + (long)param_5) + (uint)uVar1)) {
        return;
      }
      param_2 = param_2 + -1;
      if (uVar1 != 0) {
        pbVar4 = (byte *)(param_3 + (long)*param_1 + (long)param_5);
        do {
          uVar3 = uVar3 - 1;
          uVar2 = (*pbVar4 ^ 0xff) * (uint)*(byte *)(param_1 + 3) +
                  (*(byte *)(param_1 + 3) ^ 0xff) * (uint)*pbVar4;
          *pbVar4 = (byte)(uVar2 + (uVar2 >> 8) + 0x80 >> 8);
          pbVar4 = pbVar4 + 1;
        } while (uVar3 != 0);
      }
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}


// ===== 0019f894  FUN_0019f894 =====

void FUN_0019f894(short *param_1,int param_2,long param_3,int param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_2 != 0) {
    do {
      uVar1 = param_1[2];
      uVar3 = (uint)uVar1;
      if (param_4 <= (int)((int)((long)*param_1 + (long)param_5) + (uint)uVar1)) {
        return;
      }
      param_2 = param_2 + -1;
      if (uVar1 != 0) {
        pbVar4 = (byte *)(param_3 + (long)*param_1 + (long)param_5);
        do {
          uVar3 = uVar3 - 1;
          uVar2 = (uint)*pbVar4 * (*(byte *)(param_1 + 3) ^ 0xff);
          *pbVar4 = (byte)(uVar2 + (uVar2 >> 8) + 0x80 >> 8);
          pbVar4 = pbVar4 + 1;
        } while (uVar3 != 0);
      }
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}


// ===== 0019f8f0  FUN_0019f8f0 =====

void FUN_0019f8f0(short *param_1,int param_2,long param_3,int param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (param_2 != 0) {
    do {
      uVar1 = param_1[2];
      uVar3 = (uint)uVar1;
      if (param_4 <= (int)((int)((long)*param_1 + (long)param_5) + (uint)uVar1)) {
        return;
      }
      param_2 = param_2 + -1;
      if (uVar1 != 0) {
        pbVar4 = (byte *)(param_3 + (long)*param_1 + (long)param_5);
        do {
          uVar3 = uVar3 - 1;
          uVar2 = (uint)*pbVar4 * (~(uint)*(byte *)(param_1 + 3) & 0xff);
          *pbVar4 = *(byte *)(param_1 + 3) + (char)(uVar2 + (uVar2 >> 8) + 0x80 >> 8);
          pbVar4 = pbVar4 + 1;
        } while (uVar3 != 0);
      }
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}


// ===== 0019f950  FUN_0019f950 =====

void FUN_0019f950(short *param_1,int param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_2 != 0) {
    do {
      uVar3 = param_1[2];
      uVar4 = (uint)uVar3;
      iVar1 = (int)((long)*param_1 + (long)param_5) + (uint)uVar3;
      if (iVar1 < 0) {
        return;
      }
      if (param_4 < iVar1) {
        return;
      }
      param_2 = param_2 + -1;
      if (uVar3 != 0) {
        pbVar5 = (byte *)(param_3 + (long)*param_1 + (long)param_5);
        do {
          uVar4 = uVar4 - 1;
          bVar2 = *pbVar5;
          if (*pbVar5 <= *(byte *)(param_1 + 3)) {
            bVar2 = *(byte *)(param_1 + 3);
          }
          *pbVar5 = bVar2;
          pbVar5 = pbVar5 + 1;
        } while (uVar4 != 0);
      }
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  return;
}


// ===== 0019f9a4  FUN_0019f9a4 =====

long FUN_0019f9a4(char *param_1,int param_2,int param_3,uint param_4,short param_5,short *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char cVar11;
  char cVar12;
  
  uVar2 = param_4 & (int)param_4 >> 0x1f;
  iVar1 = uVar2 + param_3;
  if (iVar1 <= param_2) {
    cVar11 = *param_1;
    if (iVar1 < 1) {
      lVar6 = 0;
      sVar7 = 0;
    }
    else {
      lVar10 = 0;
      iVar8 = 0;
      lVar6 = 0;
      cVar4 = cVar11;
      cVar12 = cVar11;
      while( true ) {
        cVar11 = cVar4;
        iVar9 = (int)lVar10;
        iVar5 = iVar8;
        if ((cVar12 != cVar11) && (iVar5 = iVar9, cVar12 != '\0')) {
          param_6[1] = param_5;
          *(char *)(param_6 + 3) = cVar12;
          *param_6 = (short)iVar8 + (short)param_4;
          param_6[2] = (short)lVar10 - (short)iVar8;
          param_6 = param_6 + 4;
          lVar6 = lVar6 + 1;
        }
        iVar8 = iVar5;
        sVar7 = (short)iVar8;
        if (param_3 + uVar2 + -1 == iVar9) break;
        lVar3 = lVar10 + 1;
        lVar10 = lVar10 + 1;
        cVar4 = param_1[lVar3];
        cVar12 = cVar11;
      }
    }
    if (cVar11 != '\0') {
      lVar6 = lVar6 + 1;
      param_6[1] = param_5;
      *(char *)(param_6 + 3) = cVar11;
      *param_6 = sVar7 + (short)param_4;
      param_6[2] = (short)iVar1 - sVar7;
    }
    return lVar6;
  }
  return 0;
}


// ===== 0019fa74  FUN_0019fa74 =====

void FUN_0019fa74(undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*param_2 < param_2[2]) && (param_2[1] < param_2[3])) {
    FUN_001776ec(&local_40);
    uVar2 = FUN_00177da0(&local_40);
    FUN_0019e568(uVar2,param_2);
    uVar2 = local_40;
    local_40 = 0;
    *param_1 = uVar2;
    FUN_001777c4(&local_40);
  }
  else {
    *param_1 = 0;
    FUN_001776ec(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019fb20  FUN_0019fb20 =====

void FUN_0019fb20(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  void *__dest;
  size_t __n;
  undefined8 uVar1;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  __dest = (void *)(param_2[1] - __n);
  param_2[1] = __dest;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
    __dest = (void *)param_2[1];
  }
  uVar1 = *param_1;
  *param_1 = __dest;
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}


// ===== 0019fb98  FUN_0019fb98 =====

void FUN_0019fb98(undefined8 *param_1,void *param_2,void *param_3)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar2 = param_1[2];
  pvVar4 = (void *)*param_1;
  sVar3 = (long)param_3 - (long)param_2;
  uVar5 = (long)sVar3 >> 3;
  if ((ulong)(lVar2 - (long)pvVar4 >> 3) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      param_1[1] = pvVar4;
      operator_delete(pvVar4);
      lVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar5 <= (ulong)(lVar2 >> 2)) {
      uVar5 = lVar2 >> 2;
    }
    if (0xffffffffffffffe < (ulong)(lVar2 >> 3)) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_00177ec0(param_1,uVar5);
    pvVar4 = (void *)param_1[1];
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_2,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    param_1[1] = pvVar4;
  }
  else {
    uVar1 = param_1[1] - (long)pvVar4 >> 3;
    __src = (void *)((long)param_2 + (param_1[1] - (long)pvVar4));
    if (uVar5 <= uVar1) {
      __src = param_3;
    }
    sVar3 = (long)__src - (long)param_2;
    if (sVar3 != 0) {
      memmove(pvVar4,param_2,sVar3);
    }
    if (uVar1 < uVar5) {
      pvVar4 = (void *)param_1[1];
      sVar3 = (long)param_3 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      param_1[1] = pvVar4;
    }
    else {
      param_1[1] = (long)pvVar4 + sVar3;
    }
  }
  return;
}


// ===== 0019fcd4  FUN_0019fcd4 =====

void FUN_0019fcd4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  long *plStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  plStack_50 = param_1 + 2;
  lVar3 = *plStack_50 - *param_1;
  uVar4 = lVar3 >> 2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  if (0xffffffffffffffe < (ulong)(lVar3 >> 3)) {
    uVar1 = 0x1fffffffffffffff;
  }
  local_58 = (void *)0x0;
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_70 = operator_new(uVar1 << 3);
  }
  local_68 = (undefined8 *)((long)local_70 + lVar5 * 8);
  local_58 = (void *)((long)local_70 + uVar1 * 8);
  local_60 = local_68 + 1;
  *local_68 = *param_2;
  FUN_0019fb20(param_1,&local_70);
  if ((long)local_60 - (long)local_68 != 0) {
    local_60 = local_60 + (((long)local_60 - (long)local_68) - 8U >> 3 ^ 0xffffffffffffffff);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0019fde8  FUN_0019fde8 =====

void FUN_0019fde8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8 [16],
                 int param_9,int param_10,undefined8 *param_11,int param_12,undefined8 *param_13,
                 int param_14)

{
  undefined5 uVar1;
  undefined5 uVar2;
  undefined5 uVar3;
  undefined5 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined8 in_d28;
  undefined8 uVar72;
  undefined4 uVar73;
  undefined8 in_d29;
  undefined8 uVar74;
  undefined8 in_d30;
  undefined8 uVar75;
  ulong uVar76;
  undefined4 uVar77;
  undefined8 in_d31;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined7 uVar59;
  
  uVar51 = param_8[7];
  uVar41 = param_8[6];
  uVar45 = param_8[5];
  uVar43 = param_8[4];
  uVar49 = param_8[3];
  uVar47 = param_8[2];
  uVar44 = param_8[1];
  uVar42 = param_8[0];
  bVar40 = param_4[7];
  bVar33 = param_4[6];
  bVar37 = param_4[5];
  bVar35 = param_4[4];
  bVar39 = param_4[3];
  bVar38 = param_4[2];
  bVar36 = param_4[1];
  bVar34 = param_4[0];
  uVar21 = (ulong)param_9;
  lVar24 = (long)param_10;
  uVar28 = 0;
  uVar27 = lVar24 * 0x10 - 0xb;
  if (0 < lVar24) {
    lVar25 = lVar24 + -1;
    lVar24 = lVar24 + -1;
    puVar20 = param_13;
    puVar26 = param_11;
    if (0xf < (long)uVar21) {
      do {
        uVar22 = uVar21;
        puVar18 = param_11;
        if (((ulong)param_11 & 0xf) != 0) {
          uVar76 = uVar28;
          if (((ulong)param_11 & 4) != 0) {
            param_1 = CONCAT44(*(undefined4 *)param_13,(int)param_1);
            param_13 = (undefined8 *)((long)param_13 + 4);
            param_5 = CONCAT44(*(undefined4 *)param_11,(int)param_5);
            puVar18 = (undefined8 *)((long)param_11 + 4);
            uVar76 = uVar28 + 1;
            uVar22 = uVar21 - 1;
          }
          if (((ulong)puVar18 & 8) != 0) {
            param_2 = *param_13;
            param_13 = param_13 + 1;
            param_6 = *puVar18;
            puVar18 = puVar18 + 1;
            uVar76 = uVar76 + 2;
            uVar22 = uVar22 - 2;
          }
          uVar79 = *param_13;
          uVar58 = *(undefined4 *)((long)param_13 + 0xc);
          uVar2 = *(undefined5 *)(param_13 + 1);
          uVar1 = *(undefined5 *)(param_13 + 1);
          bVar40 = (byte)((uint)uVar58 >> 0x18);
          param_13 = param_13 + 2;
          uVar72 = *puVar18;
          uVar73 = *(undefined4 *)((long)puVar18 + 0xc);
          uVar4 = *(undefined5 *)(puVar18 + 1);
          uVar3 = *(undefined5 *)(puVar18 + 1);
          puVar18 = puVar18 + 2;
          uVar28 = uVar76 + 4;
          uVar22 = uVar22 - 4;
          bVar33 = (byte)((ulong)param_1 >> 0x18);
          bVar35 = (byte)((ulong)param_1 >> 0x38);
          bVar37 = (byte)((ulong)param_2 >> 0x18);
          bVar39 = (byte)((ulong)param_2 >> 0x38);
          bVar34 = (byte)((ulong)uVar79 >> 0x18);
          bVar36 = (byte)((ulong)uVar79 >> 0x38);
          bVar38 = (byte)((uint5)uVar2 >> 0x18);
          bVar62 = ~bVar33;
          bVar63 = ~bVar35;
          bVar64 = ~bVar37;
          bVar65 = ~bVar39;
          bVar66 = ~bVar34;
          bVar67 = ~bVar36;
          bVar68 = ~bVar38;
          bVar70 = ~bVar40;
          auVar52 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),
                               CONCAT17((char)((uint5)uVar3 >> 0x20),
                                        CONCAT16((char)uVar3,
                                                 CONCAT15((char)((ulong)uVar72 >> 0x20),
                                                          CONCAT14((char)uVar72,
                                                                   CONCAT13((char)((ulong)param_6 >>
                                                                                  0x20),
                                                                            CONCAT12((char)param_6,
                                                                                     CONCAT11((char)
                                                  ((ulong)param_5 >> 0x20),(char)param_5))))))),1);
          auVar53 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),
                               CONCAT17((char)((uint)uVar73 >> 8),
                                        CONCAT16((char)((uint5)uVar4 >> 8),
                                                 CONCAT15((char)((ulong)uVar72 >> 0x28),
                                                          CONCAT14((char)((ulong)uVar72 >> 8),
                                                                   CONCAT13((char)((ulong)param_6 >>
                                                                                  0x28),
                                                                            CONCAT12((char)((ulong)
                                                  param_6 >> 8),
                                                  CONCAT11((char)((ulong)param_5 >> 0x28),
                                                           (char)((ulong)param_5 >> 8)))))))),1);
          auVar54 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),
                               CONCAT17((char)((uint)uVar73 >> 0x10),
                                        CONCAT16((char)((uint5)uVar3 >> 0x10),
                                                 CONCAT15((char)((ulong)uVar72 >> 0x30),
                                                          CONCAT14((char)((ulong)uVar72 >> 0x10),
                                                                   CONCAT13((char)((ulong)param_6 >>
                                                                                  0x30),
                                                                            CONCAT12((char)((ulong)
                                                  param_6 >> 0x10),
                                                  CONCAT11((char)((ulong)param_5 >> 0x30),
                                                           (char)((ulong)param_5 >> 0x10)))))))),1);
          auVar55 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),
                               CONCAT17((char)((uint)uVar73 >> 0x18),
                                        CONCAT16((char)((uint5)uVar4 >> 0x18),
                                                 CONCAT15((char)((ulong)uVar72 >> 0x38),
                                                          CONCAT14((char)((ulong)uVar72 >> 0x18),
                                                                   CONCAT13((char)((ulong)param_6 >>
                                                                                  0x38),
                                                                            CONCAT12((char)((ulong)
                                                  param_6 >> 0x18),
                                                  CONCAT11((char)((ulong)param_5 >> 0x38),
                                                           (char)((ulong)param_5 >> 0x18)))))))),1);
          if ((uVar27 & 0xf) != 0) {
            uVar28 = uVar76 + 0xc;
            uVar27 = uVar27 - 1;
          }
          bVar16 = SBORROW8(uVar28,uVar21);
          bVar17 = uVar28 == uVar21;
          Hint_Prefetch((long)puVar20 + uVar28 * 4,0,0,0);
          Hint_Prefetch((long)puVar26 + uVar28 * 4,0,0,0);
          uVar76 = uVar28 - uVar21;
          if ((long)uVar21 < (long)uVar28) {
            uVar28 = uVar28 - uVar21;
            bVar16 = SBORROW8(uVar27,0x10);
            uVar27 = uVar27 - 0x10;
            bVar17 = uVar27 == 0;
            uVar76 = uVar27;
          }
          if (!bVar17 && (long)uVar76 < 0 == bVar16) {
            puVar20 = (undefined8 *)((long)puVar20 + 1);
            puVar26 = (undefined8 *)((long)puVar26 + 1);
          }
          auVar56 = NEON_urshr(auVar52,8,2);
          auVar57 = NEON_urshr(auVar53,8,2);
          auVar60 = NEON_urshr(auVar54,8,2);
          auVar61 = NEON_urshr(auVar55,8,2);
          uVar72 = NEON_raddhn(in_d28,auVar56,auVar52,2);
          uVar74 = NEON_raddhn(in_d29,auVar57,auVar53,2);
          uVar75 = NEON_raddhn(in_d30,auVar60,auVar54,2);
          uVar78 = NEON_raddhn(in_d31,auVar61,auVar55,2);
          uVar72 = NEON_uqadd(CONCAT17((char)((uint5)uVar1 >> 0x20),
                                       CONCAT16((char)uVar1,
                                                CONCAT15((char)((ulong)uVar79 >> 0x20),
                                                         CONCAT14((char)uVar79,
                                                                  CONCAT13((char)((ulong)param_2 >>
                                                                                 0x20),
                                                                           CONCAT12((char)param_2,
                                                                                    CONCAT11((char)(
                                                  (ulong)param_1 >> 0x20),(char)param_1))))))),
                              uVar72,1);
          uVar74 = NEON_uqadd(CONCAT17((char)((uint)uVar58 >> 8),
                                       CONCAT16((char)((uint5)uVar2 >> 8),
                                                CONCAT15((char)((ulong)uVar79 >> 0x28),
                                                         CONCAT14((char)((ulong)uVar79 >> 8),
                                                                  CONCAT13((char)((ulong)param_2 >>
                                                                                 0x28),
                                                                           CONCAT12((char)((ulong)
                                                  param_2 >> 8),
                                                  CONCAT11((char)((ulong)param_1 >> 0x28),
                                                           (char)((ulong)param_1 >> 8)))))))),uVar74
                              ,1);
          uVar76 = NEON_uqadd(CONCAT17((char)((uint)uVar58 >> 0x10),
                                       CONCAT16((char)((uint5)uVar1 >> 0x10),
                                                CONCAT15((char)((ulong)uVar79 >> 0x30),
                                                         CONCAT14((char)((ulong)uVar79 >> 0x10),
                                                                  CONCAT13((char)((ulong)param_2 >>
                                                                                 0x30),
                                                                           CONCAT12((char)((ulong)
                                                  param_2 >> 0x10),
                                                  CONCAT11((char)((ulong)param_1 >> 0x30),
                                                           (char)((ulong)param_1 >> 0x10)))))))),
                              uVar75,1);
          uVar79 = NEON_uqadd(CONCAT17(bVar40,CONCAT16(bVar38,CONCAT15(bVar36,CONCAT14(bVar34,
                                                  CONCAT13(bVar39,CONCAT12(bVar37,CONCAT11(bVar35,
                                                  bVar33))))))),uVar78,1);
          uVar41 = (undefined1)(uVar76 >> 8);
          uVar42 = (undefined1)(uVar76 >> 0x18);
          uVar43 = (undefined1)(uVar76 >> 0x28);
          uVar44 = (undefined1)(uVar76 >> 0x38);
          uVar59 = CONCAT16(uVar43,(uint6)CONCAT14((char)((ulong)uVar72 >> 0x28),
                                                   ((uint)(uVar76 >> 0x20) & 0xff) << 0x10));
          uVar58 = CONCAT13((char)((ulong)uVar79 >> 0x20),
                            (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                           CONCAT11((char)((ulong)uVar74 >> 0x20),
                                                    (char)((ulong)uVar72 >> 0x20))));
          in_d30 = CONCAT17((char)((ulong)uVar79 >> 0x28),
                            CONCAT16(uVar43,CONCAT15((char)((ulong)uVar74 >> 0x28),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    uVar58))));
          uVar59 = CONCAT16(uVar44,(uint6)CONCAT14((char)((ulong)uVar72 >> 0x38),
                                                   (uint)(byte)(uVar76 >> 0x30) << 0x10));
          uVar77 = CONCAT13((char)((ulong)uVar79 >> 0x30),
                            (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                           CONCAT11((char)((ulong)uVar74 >> 0x30),
                                                    (char)((ulong)uVar72 >> 0x30))));
          in_d31 = CONCAT17((char)((ulong)uVar79 >> 0x38),
                            CONCAT16(uVar44,CONCAT15((char)((ulong)uVar74 >> 0x38),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    uVar77))));
          uVar59 = CONCAT16(uVar41,(uint6)CONCAT14((char)((ulong)uVar72 >> 8),
                                                   (int)((uVar76 & 0xff) << 0x10)));
          in_d28 = CONCAT17((char)((ulong)uVar79 >> 8),
                            CONCAT16(uVar41,CONCAT15((char)((ulong)uVar74 >> 8),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    CONCAT13((char)uVar79,
                                                                             (int3)CONCAT52((int5)((
                                                  uint7)uVar59 >> 0x10),
                                                  CONCAT11((char)uVar74,(char)uVar72)))))));
          uVar59 = CONCAT16(uVar42,(uint6)CONCAT14((char)((ulong)uVar72 >> 0x18),
                                                   (uint)(byte)(uVar76 >> 0x10) << 0x10));
          uVar73 = CONCAT13((char)((ulong)uVar79 >> 0x10),
                            (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                           CONCAT11((char)((ulong)uVar74 >> 0x10),
                                                    (char)((ulong)uVar72 >> 0x10))));
          in_d29 = CONCAT17((char)((ulong)uVar79 >> 0x18),
                            CONCAT16(uVar42,CONCAT15((char)((ulong)uVar74 >> 0x18),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    uVar73))));
          if (((ulong)param_11 & 4) != 0) {
            *(int *)param_11 = (int)((ulong)in_d28 >> 0x20);
            param_11 = (undefined8 *)((long)param_11 + 4);
          }
          if (((ulong)param_11 & 8) != 0) {
            *(undefined4 *)param_11 = uVar73;
            *(int *)((long)param_11 + 4) = (int)((ulong)in_d29 >> 0x20);
            param_11 = param_11 + 1;
          }
          *(undefined4 *)param_11 = uVar58;
          *(int *)((long)param_11 + 4) = (int)((ulong)in_d30 >> 0x20);
          *(undefined4 *)(param_11 + 1) = uVar77;
          *(int *)((long)param_11 + 0xc) = (int)((ulong)in_d31 >> 0x20);
          param_11 = param_11 + 2;
        }
        uVar41 = *(undefined1 *)((long)puVar18 + 3);
        uVar42 = *(undefined1 *)((long)puVar18 + 7);
        uVar43 = *(undefined1 *)((long)puVar18 + 0xb);
        uVar44 = *(undefined1 *)((long)puVar18 + 0xf);
        uVar45 = *(undefined1 *)((long)puVar18 + 0x13);
        uVar47 = *(undefined1 *)((long)puVar18 + 0x17);
        uVar49 = *(undefined1 *)((long)puVar18 + 0x1b);
        param_5 = CONCAT17(*(undefined1 *)((long)puVar18 + 0x1c),
                           CONCAT16(*(undefined1 *)(puVar18 + 3),
                                    CONCAT15(*(undefined1 *)((long)puVar18 + 0x14),
                                             CONCAT14(*(undefined1 *)(puVar18 + 2),
                                                      CONCAT13(*(undefined1 *)((long)puVar18 + 0xc),
                                                               CONCAT12(*(undefined1 *)(puVar18 + 1)
                                                                        ,CONCAT11(*(undefined1 *)
                                                                                   ((long)puVar18 +
                                                                                   4),*(undefined1 *
                                                                                       )puVar18)))))
                                   ));
        param_6 = CONCAT17(*(undefined1 *)((long)puVar18 + 0x1d),
                           CONCAT16(*(undefined1 *)((long)puVar18 + 0x19),
                                    CONCAT15(*(undefined1 *)((long)puVar18 + 0x15),
                                             CONCAT14(*(undefined1 *)((long)puVar18 + 0x11),
                                                      CONCAT13(*(undefined1 *)((long)puVar18 + 0xd),
                                                               CONCAT12(*(undefined1 *)
                                                                         ((long)puVar18 + 9),
                                                                        CONCAT11(*(undefined1 *)
                                                                                  ((long)puVar18 + 5
                                                                                  ),*(undefined1 *)
                                                                                     ((long)puVar18
                                                                                     + 1))))))));
        uVar72 = CONCAT17(*(undefined1 *)((long)puVar18 + 0x1e),
                          CONCAT16(*(undefined1 *)((long)puVar18 + 0x1a),
                                   CONCAT15(*(undefined1 *)((long)puVar18 + 0x16),
                                            CONCAT14(*(undefined1 *)((long)puVar18 + 0x12),
                                                     CONCAT13(*(undefined1 *)((long)puVar18 + 0xe),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((long)puVar18 + 10),
                                                                       CONCAT11(*(undefined1 *)
                                                                                 ((long)puVar18 + 6)
                                                                                ,*(undefined1 *)
                                                                                  ((long)puVar18 + 2
                                                                                  ))))))));
        uVar51 = *(undefined1 *)((long)puVar18 + 0x1f);
        puVar18 = puVar18 + 4;
        bVar33 = *(byte *)((long)param_13 + 3);
        bVar34 = *(byte *)((long)param_13 + 7);
        bVar35 = *(byte *)((long)param_13 + 0xb);
        bVar36 = *(byte *)((long)param_13 + 0xf);
        bVar37 = *(byte *)((long)param_13 + 0x13);
        bVar38 = *(byte *)((long)param_13 + 0x17);
        bVar39 = *(byte *)((long)param_13 + 0x1b);
        param_1 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1c),
                           CONCAT16(*(undefined1 *)(param_13 + 3),
                                    CONCAT15(*(undefined1 *)((long)param_13 + 0x14),
                                             CONCAT14(*(undefined1 *)(param_13 + 2),
                                                      CONCAT13(*(undefined1 *)((long)param_13 + 0xc)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          (param_13 + 1),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_13 +
                                                                                   4),*(undefined1 *
                                                                                       )param_13))))
                                            )));
        param_2 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1d),
                           CONCAT16(*(undefined1 *)((long)param_13 + 0x19),
                                    CONCAT15(*(undefined1 *)((long)param_13 + 0x15),
                                             CONCAT14(*(undefined1 *)((long)param_13 + 0x11),
                                                      CONCAT13(*(undefined1 *)((long)param_13 + 0xd)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          ((long)param_13 + 9),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_13 +
                                                                                   5),*(undefined1 *
                                                                                       )((long)
                                                  param_13 + 1))))))));
        uVar79 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1e),
                          CONCAT16(*(undefined1 *)((long)param_13 + 0x1a),
                                   CONCAT15(*(undefined1 *)((long)param_13 + 0x16),
                                            CONCAT14(*(undefined1 *)((long)param_13 + 0x12),
                                                     CONCAT13(*(undefined1 *)((long)param_13 + 0xe),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((long)param_13 + 10),
                                                                       CONCAT11(*(undefined1 *)
                                                                                 ((long)param_13 + 6
                                                                                 ),*(undefined1 *)
                                                                                    ((long)param_13
                                                                                    + 2))))))));
        bVar40 = *(byte *)((long)param_13 + 0x1f);
        param_13 = param_13 + 4;
        bVar62 = ~bVar33;
        bVar63 = ~bVar34;
        bVar64 = ~bVar35;
        bVar65 = ~bVar36;
        bVar66 = ~bVar37;
        bVar67 = ~bVar38;
        bVar68 = ~bVar39;
        bVar70 = ~bVar40;
        auVar52 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),param_5,1);
        auVar53 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),param_6,1);
        auVar54 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),uVar72,1);
        auVar55 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),
                             CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,
                                                  CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,
                                                  uVar41))))))),1);
        uVar76 = uVar28 + 8;
        if ((uVar27 & 0xf) != 0) {
          uVar27 = uVar27 - 1;
          uVar76 = uVar28 + 0x10;
        }
        uVar28 = uVar76;
        bVar16 = SBORROW8(uVar28,uVar21);
        bVar17 = uVar28 == uVar21;
        Hint_Prefetch((long)puVar20 + uVar28 * 4,0,0,0);
        Hint_Prefetch((long)puVar26 + uVar28 * 4,0,0,0);
        uVar76 = uVar28 - uVar21;
        if ((long)uVar21 < (long)uVar28) {
          uVar28 = uVar28 - uVar21;
          bVar16 = SBORROW8(uVar27,0x10);
          uVar27 = uVar27 - 0x10;
          bVar17 = uVar27 == 0;
          uVar76 = uVar27;
        }
        if (!bVar17 && (long)uVar76 < 0 == bVar16) {
          puVar20 = (undefined8 *)((long)puVar20 + 1);
          puVar26 = (undefined8 *)((long)puVar26 + 1);
        }
        uVar76 = uVar22 - 0x10;
        uVar23 = uVar76;
        if (0xf < (long)uVar22) {
          do {
            uVar41 = *(undefined1 *)((long)puVar18 + 3);
            uVar42 = *(undefined1 *)((long)puVar18 + 7);
            uVar43 = *(undefined1 *)((long)puVar18 + 0xb);
            uVar44 = *(undefined1 *)((long)puVar18 + 0xf);
            uVar45 = *(undefined1 *)((long)puVar18 + 0x13);
            uVar47 = *(undefined1 *)((long)puVar18 + 0x17);
            uVar49 = *(undefined1 *)((long)puVar18 + 0x1b);
            param_5 = CONCAT17(*(undefined1 *)((long)puVar18 + 0x1c),
                               CONCAT16(*(undefined1 *)(puVar18 + 3),
                                        CONCAT15(*(undefined1 *)((long)puVar18 + 0x14),
                                                 CONCAT14(*(undefined1 *)(puVar18 + 2),
                                                          CONCAT13(*(undefined1 *)
                                                                    ((long)puVar18 + 0xc),
                                                                   CONCAT12(*(undefined1 *)
                                                                             (puVar18 + 1),
                                                                            CONCAT11(*(undefined1 *)
                                                                                      ((long)puVar18
                                                                                      + 4),*(
                                                  undefined1 *)puVar18)))))));
            param_6 = CONCAT17(*(undefined1 *)((long)puVar18 + 0x1d),
                               CONCAT16(*(undefined1 *)((long)puVar18 + 0x19),
                                        CONCAT15(*(undefined1 *)((long)puVar18 + 0x15),
                                                 CONCAT14(*(undefined1 *)((long)puVar18 + 0x11),
                                                          CONCAT13(*(undefined1 *)
                                                                    ((long)puVar18 + 0xd),
                                                                   CONCAT12(*(undefined1 *)
                                                                             ((long)puVar18 + 9),
                                                                            CONCAT11(*(undefined1 *)
                                                                                      ((long)puVar18
                                                                                      + 5),*(
                                                  undefined1 *)((long)puVar18 + 1))))))));
            uVar72 = CONCAT17(*(undefined1 *)((long)puVar18 + 0x1e),
                              CONCAT16(*(undefined1 *)((long)puVar18 + 0x1a),
                                       CONCAT15(*(undefined1 *)((long)puVar18 + 0x16),
                                                CONCAT14(*(undefined1 *)((long)puVar18 + 0x12),
                                                         CONCAT13(*(undefined1 *)
                                                                   ((long)puVar18 + 0xe),
                                                                  CONCAT12(*(undefined1 *)
                                                                            ((long)puVar18 + 10),
                                                                           CONCAT11(*(undefined1 *)
                                                                                     ((long)puVar18
                                                                                     + 6),*(
                                                  undefined1 *)((long)puVar18 + 2))))))));
            uVar51 = *(undefined1 *)((long)puVar18 + 0x1f);
            puVar18 = puVar18 + 4;
            auVar56 = NEON_urshr(auVar52,8,2);
            uVar22 = uVar28 + 8;
            auVar57 = NEON_urshr(auVar53,8,2);
            auVar60 = NEON_urshr(auVar54,8,2);
            auVar61 = NEON_urshr(auVar55,8,2);
            if ((uVar27 & 0xf) != 0) {
              uVar22 = uVar28 + 0x10;
              uVar27 = uVar27 - 1;
            }
            uVar74 = NEON_raddhn(in_d28,auVar56,auVar52,2);
            uVar75 = NEON_raddhn(in_d29,auVar57,auVar53,2);
            bVar16 = SBORROW8(uVar22,uVar21);
            bVar17 = uVar22 == uVar21;
            uVar78 = NEON_raddhn(in_d30,auVar60,auVar54,2);
            uVar80 = NEON_raddhn(in_d31,auVar61,auVar55,2);
            in_d28 = NEON_uqadd(param_1,uVar74,1);
            in_d29 = NEON_uqadd(param_2,uVar75,1);
            in_d30 = NEON_uqadd(uVar79,uVar78,1);
            in_d31 = NEON_uqadd(CONCAT17(bVar40,CONCAT16(bVar39,CONCAT15(bVar38,CONCAT14(bVar37,
                                                  CONCAT13(bVar36,CONCAT12(bVar35,CONCAT11(bVar34,
                                                  bVar33))))))),uVar80,1);
            bVar33 = *(byte *)((long)param_13 + 3);
            bVar34 = *(byte *)((long)param_13 + 7);
            bVar35 = *(byte *)((long)param_13 + 0xb);
            bVar36 = *(byte *)((long)param_13 + 0xf);
            bVar37 = *(byte *)((long)param_13 + 0x13);
            bVar38 = *(byte *)((long)param_13 + 0x17);
            bVar39 = *(byte *)((long)param_13 + 0x1b);
            param_1 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1c),
                               CONCAT16(*(undefined1 *)(param_13 + 3),
                                        CONCAT15(*(undefined1 *)((long)param_13 + 0x14),
                                                 CONCAT14(*(undefined1 *)(param_13 + 2),
                                                          CONCAT13(*(undefined1 *)
                                                                    ((long)param_13 + 0xc),
                                                                   CONCAT12(*(undefined1 *)
                                                                             (param_13 + 1),
                                                                            CONCAT11(*(undefined1 *)
                                                                                      ((long)
                                                  param_13 + 4),*(undefined1 *)param_13)))))));
            param_2 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1d),
                               CONCAT16(*(undefined1 *)((long)param_13 + 0x19),
                                        CONCAT15(*(undefined1 *)((long)param_13 + 0x15),
                                                 CONCAT14(*(undefined1 *)((long)param_13 + 0x11),
                                                          CONCAT13(*(undefined1 *)
                                                                    ((long)param_13 + 0xd),
                                                                   CONCAT12(*(undefined1 *)
                                                                             ((long)param_13 + 9),
                                                                            CONCAT11(*(undefined1 *)
                                                                                      ((long)
                                                  param_13 + 5),*(undefined1 *)((long)param_13 + 1))
                                                  ))))));
            uVar79 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1e),
                              CONCAT16(*(undefined1 *)((long)param_13 + 0x1a),
                                       CONCAT15(*(undefined1 *)((long)param_13 + 0x16),
                                                CONCAT14(*(undefined1 *)((long)param_13 + 0x12),
                                                         CONCAT13(*(undefined1 *)
                                                                   ((long)param_13 + 0xe),
                                                                  CONCAT12(*(undefined1 *)
                                                                            ((long)param_13 + 10),
                                                                           CONCAT11(*(undefined1 *)
                                                                                     ((long)param_13
                                                                                     + 6),*(
                                                  undefined1 *)((long)param_13 + 2))))))));
            bVar40 = *(byte *)((long)param_13 + 0x1f);
            param_13 = param_13 + 4;
            Hint_Prefetch((long)puVar20 + uVar22 * 4,0,0,0);
            bVar62 = ~bVar33;
            bVar63 = ~bVar34;
            bVar64 = ~bVar35;
            bVar65 = ~bVar36;
            bVar66 = ~bVar37;
            bVar67 = ~bVar38;
            bVar68 = ~bVar39;
            bVar70 = ~bVar40;
            Hint_Prefetch((long)puVar26 + uVar22 * 4,0,0,0);
            *(char *)param_11 = (char)in_d28;
            *(char *)((long)param_11 + 1) = (char)in_d29;
            *(char *)((long)param_11 + 2) = (char)in_d30;
            *(char *)((long)param_11 + 3) = (char)in_d31;
            *(char *)((long)param_11 + 4) = (char)((ulong)in_d28 >> 8);
            *(char *)((long)param_11 + 5) = (char)((ulong)in_d29 >> 8);
            *(char *)((long)param_11 + 6) = (char)((ulong)in_d30 >> 8);
            *(char *)((long)param_11 + 7) = (char)((ulong)in_d31 >> 8);
            *(char *)(param_11 + 1) = (char)((ulong)in_d28 >> 0x10);
            *(char *)((long)param_11 + 9) = (char)((ulong)in_d29 >> 0x10);
            *(char *)((long)param_11 + 10) = (char)((ulong)in_d30 >> 0x10);
            *(char *)((long)param_11 + 0xb) = (char)((ulong)in_d31 >> 0x10);
            *(char *)((long)param_11 + 0xc) = (char)((ulong)in_d28 >> 0x18);
            *(char *)((long)param_11 + 0xd) = (char)((ulong)in_d29 >> 0x18);
            *(char *)((long)param_11 + 0xe) = (char)((ulong)in_d30 >> 0x18);
            *(char *)((long)param_11 + 0xf) = (char)((ulong)in_d31 >> 0x18);
            *(char *)(param_11 + 2) = (char)((ulong)in_d28 >> 0x20);
            *(char *)((long)param_11 + 0x11) = (char)((ulong)in_d29 >> 0x20);
            *(char *)((long)param_11 + 0x12) = (char)((ulong)in_d30 >> 0x20);
            *(char *)((long)param_11 + 0x13) = (char)((ulong)in_d31 >> 0x20);
            *(char *)((long)param_11 + 0x14) = (char)((ulong)in_d28 >> 0x28);
            *(char *)((long)param_11 + 0x15) = (char)((ulong)in_d29 >> 0x28);
            *(char *)((long)param_11 + 0x16) = (char)((ulong)in_d30 >> 0x28);
            *(char *)((long)param_11 + 0x17) = (char)((ulong)in_d31 >> 0x28);
            *(char *)(param_11 + 3) = (char)((ulong)in_d28 >> 0x30);
            *(char *)((long)param_11 + 0x19) = (char)((ulong)in_d29 >> 0x30);
            *(char *)((long)param_11 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
            *(char *)((long)param_11 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
            *(char *)((long)param_11 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
            *(char *)((long)param_11 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
            *(char *)((long)param_11 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
            *(char *)((long)param_11 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
            param_11 = param_11 + 4;
            uVar28 = uVar22;
            if ((long)uVar21 < (long)uVar22) {
              uVar28 = uVar22 - uVar21;
            }
            auVar52 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),param_5,1);
            uVar76 = uVar22 - uVar21;
            if ((long)uVar21 < (long)uVar22) {
              bVar16 = SBORROW8(uVar27,0x10);
              uVar27 = uVar27 - 0x10;
              bVar17 = uVar27 == 0;
              uVar76 = uVar27;
            }
            auVar53 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),param_6,1);
            if (!bVar17 && (long)uVar76 < 0 == bVar16) {
              puVar20 = (undefined8 *)((long)puVar20 + 1);
            }
            auVar54 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),uVar72,1);
            if (!bVar17 && (long)uVar76 < 0 == bVar16) {
              puVar26 = (undefined8 *)((long)puVar26 + 1);
            }
            auVar55 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),
                                 CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,
                                                  CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,
                                                  uVar41))))))),1);
            uVar76 = uVar23 - 8;
            bVar17 = 7 < (long)uVar23;
            uVar23 = uVar76;
          } while (bVar17);
        }
        auVar56 = NEON_urshr(auVar52,8,2);
        auVar57 = NEON_urshr(auVar53,8,2);
        auVar60 = NEON_urshr(auVar54,8,2);
        auVar61 = NEON_urshr(auVar55,8,2);
        uVar74 = NEON_raddhn(in_d28,auVar56,auVar52,2);
        uVar75 = NEON_raddhn(in_d29,auVar57,auVar53,2);
        uVar78 = NEON_raddhn(in_d30,auVar60,auVar54,2);
        uVar80 = NEON_raddhn(in_d31,auVar61,auVar55,2);
        in_d28 = NEON_uqadd(param_1,uVar74,1);
        in_d29 = NEON_uqadd(param_2,uVar75,1);
        in_d30 = NEON_uqadd(uVar79,uVar78,1);
        in_d31 = NEON_uqadd(CONCAT17(bVar40,CONCAT16(bVar39,CONCAT15(bVar38,CONCAT14(bVar37,CONCAT13
                                                  (bVar36,CONCAT12(bVar35,CONCAT11(bVar34,bVar33))))
                                                  ))),uVar80,1);
        *(char *)param_11 = (char)in_d28;
        *(char *)((long)param_11 + 1) = (char)in_d29;
        *(char *)((long)param_11 + 2) = (char)in_d30;
        *(char *)((long)param_11 + 3) = (char)in_d31;
        *(char *)((long)param_11 + 4) = (char)((ulong)in_d28 >> 8);
        *(char *)((long)param_11 + 5) = (char)((ulong)in_d29 >> 8);
        *(char *)((long)param_11 + 6) = (char)((ulong)in_d30 >> 8);
        *(char *)((long)param_11 + 7) = (char)((ulong)in_d31 >> 8);
        *(char *)(param_11 + 1) = (char)((ulong)in_d28 >> 0x10);
        *(char *)((long)param_11 + 9) = (char)((ulong)in_d29 >> 0x10);
        *(char *)((long)param_11 + 10) = (char)((ulong)in_d30 >> 0x10);
        *(char *)((long)param_11 + 0xb) = (char)((ulong)in_d31 >> 0x10);
        *(char *)((long)param_11 + 0xc) = (char)((ulong)in_d28 >> 0x18);
        *(char *)((long)param_11 + 0xd) = (char)((ulong)in_d29 >> 0x18);
        *(char *)((long)param_11 + 0xe) = (char)((ulong)in_d30 >> 0x18);
        *(char *)((long)param_11 + 0xf) = (char)((ulong)in_d31 >> 0x18);
        *(char *)(param_11 + 2) = (char)((ulong)in_d28 >> 0x20);
        *(char *)((long)param_11 + 0x11) = (char)((ulong)in_d29 >> 0x20);
        *(char *)((long)param_11 + 0x12) = (char)((ulong)in_d30 >> 0x20);
        *(char *)((long)param_11 + 0x13) = (char)((ulong)in_d31 >> 0x20);
        *(char *)((long)param_11 + 0x14) = (char)((ulong)in_d28 >> 0x28);
        *(char *)((long)param_11 + 0x15) = (char)((ulong)in_d29 >> 0x28);
        *(char *)((long)param_11 + 0x16) = (char)((ulong)in_d30 >> 0x28);
        *(char *)((long)param_11 + 0x17) = (char)((ulong)in_d31 >> 0x28);
        *(char *)(param_11 + 3) = (char)((ulong)in_d28 >> 0x30);
        *(char *)((long)param_11 + 0x19) = (char)((ulong)in_d29 >> 0x30);
        *(char *)((long)param_11 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
        *(char *)((long)param_11 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
        *(char *)((long)param_11 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
        *(char *)((long)param_11 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
        *(char *)((long)param_11 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
        *(char *)((long)param_11 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
        puVar19 = param_11 + 4;
        if ((uVar76 & 7) != 0) {
          if ((uVar76 & 4) != 0) {
            uVar79 = *param_13;
            uVar58 = *(undefined4 *)(param_13 + 1);
            bVar33 = (byte)uVar58;
            bVar34 = (byte)((uint)uVar58 >> 8);
            bVar35 = (byte)((uint)uVar58 >> 0x10);
            bVar36 = (byte)((uint)uVar58 >> 0x18);
            uVar58 = *(undefined4 *)((long)param_13 + 0xc);
            bVar37 = (byte)uVar58;
            bVar38 = (byte)((uint)uVar58 >> 8);
            bVar39 = (byte)((uint)uVar58 >> 0x10);
            bVar40 = (byte)((uint)uVar58 >> 0x18);
            param_13 = param_13 + 2;
            uVar72 = *puVar18;
            uVar58 = *(undefined4 *)(puVar18 + 1);
            uVar41 = (undefined1)uVar58;
            uVar42 = (undefined1)((uint)uVar58 >> 8);
            uVar43 = (undefined1)((uint)uVar58 >> 0x10);
            uVar44 = (undefined1)((uint)uVar58 >> 0x18);
            uVar58 = *(undefined4 *)((long)puVar18 + 0xc);
            uVar45 = (undefined1)uVar58;
            uVar47 = (undefined1)((uint)uVar58 >> 8);
            uVar49 = (undefined1)((uint)uVar58 >> 0x10);
            uVar51 = (undefined1)((uint)uVar58 >> 0x18);
            puVar18 = puVar18 + 2;
            uVar28 = uVar28 + 4;
          }
          if ((uVar76 & 2) != 0) {
            param_2 = *param_13;
            param_13 = param_13 + 1;
            param_6 = *puVar18;
            puVar18 = puVar18 + 1;
            uVar28 = uVar28 + 2;
          }
          if ((uVar76 & 1) != 0) {
            param_1 = CONCAT44(*(undefined4 *)param_13,(int)param_1);
            param_13 = (undefined8 *)((long)param_13 + 4);
            param_5 = CONCAT44(*(undefined4 *)puVar18,(int)param_5);
            uVar28 = uVar28 + 1;
          }
          uVar22 = (ulong)param_1 >> 0x10;
          uVar23 = (ulong)param_1 >> 0x30;
          uVar50 = (undefined1)param_2;
          uVar6 = (ulong)param_2 >> 0x10;
          uVar5 = (ulong)param_2 >> 0x20;
          uVar7 = (ulong)param_2 >> 0x30;
          bVar62 = (byte)((ulong)param_1 >> 0x18);
          bVar64 = (byte)((ulong)param_1 >> 0x38);
          bVar66 = (byte)((ulong)param_2 >> 0x18);
          bVar67 = (byte)((ulong)param_2 >> 0x38);
          bVar63 = (byte)((ulong)uVar79 >> 0x18);
          bVar65 = (byte)((ulong)uVar79 >> 0x38);
          param_2 = CONCAT17(bVar38,CONCAT16(bVar34,CONCAT15((char)((ulong)uVar79 >> 0x28),
                                                             CONCAT14((char)((ulong)uVar79 >> 8),
                                                                      CONCAT13((char)((ulong)param_2
                                                                                     >> 0x28),
                                                                               CONCAT12((char)((
                                                  ulong)param_2 >> 8),
                                                  CONCAT11((char)((ulong)param_1 >> 0x28),
                                                           (char)((ulong)param_1 >> 8))))))));
          param_1 = CONCAT17(bVar37,CONCAT16(bVar33,CONCAT15((char)((ulong)uVar79 >> 0x20),
                                                             CONCAT14((char)uVar79,
                                                                      CONCAT13((char)uVar5,
                                                                               CONCAT12(uVar50,
                                                  CONCAT11((char)((ulong)param_1 >> 0x20),
                                                           (char)param_1)))))));
          uVar5 = (ulong)param_5 >> 0x10;
          uVar8 = (ulong)param_5 >> 0x30;
          uVar50 = (undefined1)param_6;
          uVar9 = (ulong)param_6 >> 0x10;
          uVar10 = (ulong)param_6 >> 0x20;
          uVar11 = (ulong)param_6 >> 0x30;
          uVar12 = (ulong)param_5 >> 0x18;
          uVar13 = (ulong)param_5 >> 0x38;
          uVar14 = (ulong)param_6 >> 0x18;
          uVar15 = (ulong)param_6 >> 0x38;
          param_6 = CONCAT17(uVar47,CONCAT16(uVar42,CONCAT15((char)((ulong)uVar72 >> 0x28),
                                                             CONCAT14((char)((ulong)uVar72 >> 8),
                                                                      CONCAT13((char)((ulong)param_6
                                                                                     >> 0x28),
                                                                               CONCAT12((char)((
                                                  ulong)param_6 >> 8),
                                                  CONCAT11((char)((ulong)param_5 >> 0x28),
                                                           (char)((ulong)param_5 >> 8))))))));
          param_5 = CONCAT17(uVar45,CONCAT16(uVar41,CONCAT15((char)((ulong)uVar72 >> 0x20),
                                                             CONCAT14((char)uVar72,
                                                                      CONCAT13((char)uVar10,
                                                                               CONCAT12(uVar50,
                                                  CONCAT11((char)((ulong)param_5 >> 0x20),
                                                           (char)param_5)))))));
          bVar33 = ~bVar62;
          bVar34 = ~bVar64;
          bVar37 = ~bVar66;
          bVar38 = ~bVar67;
          bVar68 = ~bVar63;
          bVar70 = ~bVar65;
          bVar69 = ~bVar36;
          bVar71 = ~bVar40;
          auVar52 = NEON_umull(CONCAT17(bVar71,CONCAT16(bVar69,CONCAT15(bVar70,CONCAT14(bVar68,
                                                  CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar34,
                                                  bVar33))))))),param_5,1);
          auVar53 = NEON_umull(CONCAT17(bVar71,CONCAT16(bVar69,CONCAT15(bVar70,CONCAT14(bVar68,
                                                  CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar34,
                                                  bVar33))))))),param_6,1);
          auVar54 = NEON_umull(CONCAT17(bVar71,CONCAT16(bVar69,CONCAT15(bVar70,CONCAT14(bVar68,
                                                  CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar34,
                                                  bVar33))))))),
                               CONCAT17(uVar49,CONCAT16(uVar43,CONCAT15((char)((ulong)uVar72 >> 0x30
                                                                              ),CONCAT14((char)((
                                                  ulong)uVar72 >> 0x10),
                                                  CONCAT13((char)uVar11,
                                                           CONCAT12((char)uVar9,
                                                                    CONCAT11((char)uVar8,(char)uVar5
                                                                            ))))))),1);
          auVar55 = NEON_umull(CONCAT17(bVar71,CONCAT16(bVar69,CONCAT15(bVar70,CONCAT14(bVar68,
                                                  CONCAT13(bVar38,CONCAT12(bVar37,CONCAT11(bVar34,
                                                  bVar33))))))),
                               CONCAT17(uVar51,CONCAT16(uVar44,CONCAT15((char)((ulong)uVar72 >> 0x38
                                                                              ),CONCAT14((char)((
                                                  ulong)uVar72 >> 0x18),
                                                  CONCAT13((char)uVar15,
                                                           CONCAT12((char)uVar14,
                                                                    CONCAT11((char)uVar13,
                                                                             (char)uVar12))))))),1);
          if ((uVar27 & 0xf) != 0) {
            uVar28 = uVar28 + 8;
            uVar27 = uVar27 - 1;
          }
          bVar16 = SBORROW8(uVar28,uVar21);
          bVar17 = uVar28 == uVar21;
          Hint_Prefetch((long)puVar20 + uVar28 * 4,0,0,0);
          Hint_Prefetch((long)puVar26 + uVar28 * 4,0,0,0);
          uVar5 = uVar28 - uVar21;
          if ((long)uVar21 < (long)uVar28) {
            uVar28 = uVar28 - uVar21;
            bVar16 = SBORROW8(uVar27,0x10);
            uVar27 = uVar27 - 0x10;
            bVar17 = uVar27 == 0;
            uVar5 = uVar27;
          }
          if (!bVar17 && (long)uVar5 < 0 == bVar16) {
            puVar20 = (undefined8 *)((long)puVar20 + 1);
            puVar26 = (undefined8 *)((long)puVar26 + 1);
          }
          auVar56 = NEON_urshr(auVar52,8,2);
          auVar57 = NEON_urshr(auVar53,8,2);
          auVar60 = NEON_urshr(auVar54,8,2);
          auVar61 = NEON_urshr(auVar55,8,2);
          uVar72 = NEON_raddhn(in_d28,auVar56,auVar52,2);
          uVar74 = NEON_raddhn(in_d29,auVar57,auVar53,2);
          uVar75 = NEON_raddhn(in_d30,auVar60,auVar54,2);
          uVar78 = NEON_raddhn(in_d31,auVar61,auVar55,2);
          uVar72 = NEON_uqadd(param_1,uVar72,1);
          uVar74 = NEON_uqadd(param_2,uVar74,1);
          uVar22 = NEON_uqadd(CONCAT17(bVar39,CONCAT16(bVar35,CONCAT15((char)((ulong)uVar79 >> 0x30)
                                                                       ,CONCAT14((char)((ulong)
                                                  uVar79 >> 0x10),
                                                  CONCAT13((char)uVar7,
                                                           CONCAT12((char)uVar6,
                                                                    CONCAT11((char)uVar23,
                                                                             (char)uVar22))))))),
                              uVar75,1);
          uVar79 = NEON_uqadd(CONCAT17(bVar40,CONCAT16(bVar36,CONCAT15(bVar65,CONCAT14(bVar63,
                                                  CONCAT13(bVar67,CONCAT12(bVar66,CONCAT11(bVar64,
                                                  bVar62))))))),uVar78,1);
          uVar41 = (undefined1)(uVar22 >> 8);
          uVar42 = (undefined1)(uVar22 >> 0x18);
          uVar43 = (undefined1)(uVar22 >> 0x28);
          uVar44 = (undefined1)(uVar22 >> 0x38);
          uVar59 = CONCAT16(uVar43,(uint6)CONCAT14((char)((ulong)uVar72 >> 0x28),
                                                   ((uint)(uVar22 >> 0x20) & 0xff) << 0x10));
          uVar58 = CONCAT13((char)((ulong)uVar79 >> 0x20),
                            (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                           CONCAT11((char)((ulong)uVar74 >> 0x20),
                                                    (char)((ulong)uVar72 >> 0x20))));
          in_d30 = CONCAT17((char)((ulong)uVar79 >> 0x28),
                            CONCAT16(uVar43,CONCAT15((char)((ulong)uVar74 >> 0x28),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    uVar58))));
          uVar59 = CONCAT16(uVar44,(uint6)CONCAT14((char)((ulong)uVar72 >> 0x38),
                                                   (uint)(byte)(uVar22 >> 0x30) << 0x10));
          uVar77 = CONCAT13((char)((ulong)uVar79 >> 0x30),
                            (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                           CONCAT11((char)((ulong)uVar74 >> 0x30),
                                                    (char)((ulong)uVar72 >> 0x30))));
          in_d31 = CONCAT17((char)((ulong)uVar79 >> 0x38),
                            CONCAT16(uVar44,CONCAT15((char)((ulong)uVar74 >> 0x38),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    uVar77))));
          uVar59 = CONCAT16(uVar41,(uint6)CONCAT14((char)((ulong)uVar72 >> 8),
                                                   (int)((uVar22 & 0xff) << 0x10)));
          in_d28 = CONCAT17((char)((ulong)uVar79 >> 8),
                            CONCAT16(uVar41,CONCAT15((char)((ulong)uVar74 >> 8),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    CONCAT13((char)uVar79,
                                                                             (int3)CONCAT52((int5)((
                                                  uint7)uVar59 >> 0x10),
                                                  CONCAT11((char)uVar74,(char)uVar72)))))));
          uVar59 = CONCAT16(uVar42,(uint6)CONCAT14((char)((ulong)uVar72 >> 0x18),
                                                   (uint)(byte)(uVar22 >> 0x10) << 0x10));
          uVar73 = CONCAT13((char)((ulong)uVar79 >> 0x10),
                            (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                           CONCAT11((char)((ulong)uVar74 >> 0x10),
                                                    (char)((ulong)uVar72 >> 0x10))));
          in_d29 = CONCAT17((char)((ulong)uVar79 >> 0x18),
                            CONCAT16(uVar42,CONCAT15((char)((ulong)uVar74 >> 0x18),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    uVar73))));
          if ((uVar76 & 4) != 0) {
            *(undefined4 *)puVar19 = uVar58;
            *(int *)((long)param_11 + 0x24) = (int)((ulong)in_d30 >> 0x20);
            *(undefined4 *)(param_11 + 5) = uVar77;
            *(int *)((long)param_11 + 0x2c) = (int)((ulong)in_d31 >> 0x20);
            puVar19 = param_11 + 6;
          }
          if ((uVar76 & 2) != 0) {
            *(undefined4 *)puVar19 = uVar73;
            *(int *)((long)puVar19 + 4) = (int)((ulong)in_d29 >> 0x20);
            puVar19 = puVar19 + 1;
          }
          if ((uVar76 & 1) != 0) {
            *(int *)puVar19 = (int)((ulong)in_d28 >> 0x20);
            puVar19 = (undefined8 *)((long)puVar19 + 4);
          }
        }
        param_11 = (undefined8 *)((long)puVar19 + uVar21 * -4 + (long)param_12 * 4);
        param_13 = (undefined8 *)((long)param_13 + uVar21 * -4 + (long)param_14 * 4);
        bVar17 = 0 < lVar25;
        lVar25 = lVar25 + -1;
      } while (bVar17);
      return;
    }
    do {
      puVar20 = param_11;
      bVar62 = bVar33;
      uVar50 = uVar41;
      if ((uVar21 & 8) != 0) {
        uVar42 = *(undefined1 *)((long)param_11 + 3);
        uVar44 = *(undefined1 *)((long)param_11 + 7);
        uVar47 = *(undefined1 *)((long)param_11 + 0xb);
        uVar49 = *(undefined1 *)((long)param_11 + 0xf);
        uVar43 = *(undefined1 *)((long)param_11 + 0x13);
        uVar45 = *(undefined1 *)((long)param_11 + 0x17);
        uVar50 = *(undefined1 *)((long)param_11 + 0x1b);
        param_5 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1c),
                           CONCAT16(*(undefined1 *)(param_11 + 3),
                                    CONCAT15(*(undefined1 *)((long)param_11 + 0x14),
                                             CONCAT14(*(undefined1 *)(param_11 + 2),
                                                      CONCAT13(*(undefined1 *)((long)param_11 + 0xc)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          (param_11 + 1),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_11 +
                                                                                   4),*(undefined1 *
                                                                                       )param_11))))
                                            )));
        param_6 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1d),
                           CONCAT16(*(undefined1 *)((long)param_11 + 0x19),
                                    CONCAT15(*(undefined1 *)((long)param_11 + 0x15),
                                             CONCAT14(*(undefined1 *)((long)param_11 + 0x11),
                                                      CONCAT13(*(undefined1 *)((long)param_11 + 0xd)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          ((long)param_11 + 9),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_11 +
                                                                                   5),*(undefined1 *
                                                                                       )((long)
                                                  param_11 + 1))))))));
        param_7 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1e),
                           CONCAT16(*(undefined1 *)((long)param_11 + 0x1a),
                                    CONCAT15(*(undefined1 *)((long)param_11 + 0x16),
                                             CONCAT14(*(undefined1 *)((long)param_11 + 0x12),
                                                      CONCAT13(*(undefined1 *)((long)param_11 + 0xe)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          ((long)param_11 + 10),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_11 +
                                                                                   6),*(undefined1 *
                                                                                       )((long)
                                                  param_11 + 2))))))));
        uVar51 = *(undefined1 *)((long)param_11 + 0x1f);
        puVar20 = param_11 + 4;
        bVar34 = *(byte *)((long)param_13 + 3);
        bVar36 = *(byte *)((long)param_13 + 7);
        bVar38 = *(byte *)((long)param_13 + 0xb);
        bVar39 = *(byte *)((long)param_13 + 0xf);
        bVar35 = *(byte *)((long)param_13 + 0x13);
        bVar37 = *(byte *)((long)param_13 + 0x17);
        bVar62 = *(byte *)((long)param_13 + 0x1b);
        param_1 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1c),
                           CONCAT16(*(undefined1 *)(param_13 + 3),
                                    CONCAT15(*(undefined1 *)((long)param_13 + 0x14),
                                             CONCAT14(*(undefined1 *)(param_13 + 2),
                                                      CONCAT13(*(undefined1 *)((long)param_13 + 0xc)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          (param_13 + 1),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_13 +
                                                                                   4),*(undefined1 *
                                                                                       )param_13))))
                                            )));
        param_2 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1d),
                           CONCAT16(*(undefined1 *)((long)param_13 + 0x19),
                                    CONCAT15(*(undefined1 *)((long)param_13 + 0x15),
                                             CONCAT14(*(undefined1 *)((long)param_13 + 0x11),
                                                      CONCAT13(*(undefined1 *)((long)param_13 + 0xd)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          ((long)param_13 + 9),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_13 +
                                                                                   5),*(undefined1 *
                                                                                       )((long)
                                                  param_13 + 1))))))));
        param_3 = CONCAT17(*(undefined1 *)((long)param_13 + 0x1e),
                           CONCAT16(*(undefined1 *)((long)param_13 + 0x1a),
                                    CONCAT15(*(undefined1 *)((long)param_13 + 0x16),
                                             CONCAT14(*(undefined1 *)((long)param_13 + 0x12),
                                                      CONCAT13(*(undefined1 *)((long)param_13 + 0xe)
                                                               ,CONCAT12(*(undefined1 *)
                                                                          ((long)param_13 + 10),
                                                                         CONCAT11(*(undefined1 *)
                                                                                   ((long)param_13 +
                                                                                   6),*(undefined1 *
                                                                                       )((long)
                                                  param_13 + 2))))))));
        bVar40 = *(byte *)((long)param_13 + 0x1f);
        param_13 = param_13 + 4;
        bVar33 = ~bVar34;
        bVar63 = ~bVar36;
        bVar64 = ~bVar38;
        bVar65 = ~bVar39;
        bVar66 = ~bVar35;
        bVar67 = ~bVar37;
        bVar68 = ~bVar62;
        bVar70 = ~bVar40;
        auVar52 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar33))))))),param_5,1);
        auVar53 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar33))))))),param_6,1);
        auVar54 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar33))))))),param_7,1);
        auVar55 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar33))))))),
                             CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar45,CONCAT14(uVar43,
                                                  CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar44,
                                                  uVar42))))))),1);
        auVar56 = NEON_urshr(auVar52,8,2);
        auVar57 = NEON_urshr(auVar53,8,2);
        auVar60 = NEON_urshr(auVar54,8,2);
        auVar61 = NEON_urshr(auVar55,8,2);
        uVar79 = NEON_raddhn(in_d28,auVar56,auVar52,2);
        uVar72 = NEON_raddhn(in_d29,auVar57,auVar53,2);
        uVar74 = NEON_raddhn(in_d30,auVar60,auVar54,2);
        uVar75 = NEON_raddhn(in_d31,auVar61,auVar55,2);
        in_d28 = NEON_uqadd(param_1,uVar79,1);
        in_d29 = NEON_uqadd(param_2,uVar72,1);
        in_d30 = NEON_uqadd(param_3,uVar74,1);
        in_d31 = NEON_uqadd(CONCAT17(bVar40,CONCAT16(bVar62,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13
                                                  (bVar39,CONCAT12(bVar38,CONCAT11(bVar36,bVar34))))
                                                  ))),uVar75,1);
        *(char *)param_11 = (char)in_d28;
        *(char *)((long)param_11 + 1) = (char)in_d29;
        *(char *)((long)param_11 + 2) = (char)in_d30;
        *(char *)((long)param_11 + 3) = (char)in_d31;
        *(char *)((long)param_11 + 4) = (char)((ulong)in_d28 >> 8);
        *(char *)((long)param_11 + 5) = (char)((ulong)in_d29 >> 8);
        *(char *)((long)param_11 + 6) = (char)((ulong)in_d30 >> 8);
        *(char *)((long)param_11 + 7) = (char)((ulong)in_d31 >> 8);
        *(char *)(param_11 + 1) = (char)((ulong)in_d28 >> 0x10);
        *(char *)((long)param_11 + 9) = (char)((ulong)in_d29 >> 0x10);
        *(char *)((long)param_11 + 10) = (char)((ulong)in_d30 >> 0x10);
        *(char *)((long)param_11 + 0xb) = (char)((ulong)in_d31 >> 0x10);
        *(char *)((long)param_11 + 0xc) = (char)((ulong)in_d28 >> 0x18);
        *(char *)((long)param_11 + 0xd) = (char)((ulong)in_d29 >> 0x18);
        *(char *)((long)param_11 + 0xe) = (char)((ulong)in_d30 >> 0x18);
        *(char *)((long)param_11 + 0xf) = (char)((ulong)in_d31 >> 0x18);
        *(char *)(param_11 + 2) = (char)((ulong)in_d28 >> 0x20);
        *(char *)((long)param_11 + 0x11) = (char)((ulong)in_d29 >> 0x20);
        *(char *)((long)param_11 + 0x12) = (char)((ulong)in_d30 >> 0x20);
        *(char *)((long)param_11 + 0x13) = (char)((ulong)in_d31 >> 0x20);
        *(char *)((long)param_11 + 0x14) = (char)((ulong)in_d28 >> 0x28);
        *(char *)((long)param_11 + 0x15) = (char)((ulong)in_d29 >> 0x28);
        *(char *)((long)param_11 + 0x16) = (char)((ulong)in_d30 >> 0x28);
        *(char *)((long)param_11 + 0x17) = (char)((ulong)in_d31 >> 0x28);
        *(char *)(param_11 + 3) = (char)((ulong)in_d28 >> 0x30);
        *(char *)((long)param_11 + 0x19) = (char)((ulong)in_d29 >> 0x30);
        *(char *)((long)param_11 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
        *(char *)((long)param_11 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
        *(char *)((long)param_11 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
        *(char *)((long)param_11 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
        *(char *)((long)param_11 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
        *(char *)((long)param_11 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
      }
      bVar33 = bVar62;
      uVar41 = uVar50;
      if ((uVar21 & 7) != 0) {
        puVar26 = puVar20;
        bVar63 = bVar34;
        bVar64 = bVar36;
        bVar65 = bVar38;
        bVar33 = bVar39;
        bVar66 = bVar35;
        bVar67 = bVar37;
        uVar30 = uVar42;
        uVar31 = uVar44;
        uVar32 = uVar47;
        uVar41 = uVar49;
        uVar46 = uVar43;
        uVar48 = uVar45;
        if ((uVar21 & 4) != 0) {
          param_3 = *param_13;
          uVar58 = *(undefined4 *)(param_13 + 1);
          bVar63 = (byte)uVar58;
          bVar64 = (byte)((uint)uVar58 >> 8);
          bVar65 = (byte)((uint)uVar58 >> 0x10);
          bVar33 = (byte)((uint)uVar58 >> 0x18);
          uVar58 = *(undefined4 *)((long)param_13 + 0xc);
          bVar66 = (byte)uVar58;
          bVar67 = (byte)((uint)uVar58 >> 8);
          bVar62 = (byte)((uint)uVar58 >> 0x10);
          bVar40 = (byte)((uint)uVar58 >> 0x18);
          param_13 = param_13 + 2;
          param_7 = *puVar20;
          uVar58 = *(undefined4 *)(puVar20 + 1);
          uVar30 = (undefined1)uVar58;
          uVar31 = (undefined1)((uint)uVar58 >> 8);
          uVar32 = (undefined1)((uint)uVar58 >> 0x10);
          uVar41 = (undefined1)((uint)uVar58 >> 0x18);
          uVar58 = *(undefined4 *)((long)puVar20 + 0xc);
          uVar46 = (undefined1)uVar58;
          uVar48 = (undefined1)((uint)uVar58 >> 8);
          uVar50 = (undefined1)((uint)uVar58 >> 0x10);
          uVar51 = (undefined1)((uint)uVar58 >> 0x18);
          puVar26 = puVar20 + 2;
        }
        if ((uVar21 & 2) != 0) {
          param_2 = *param_13;
          param_13 = param_13 + 1;
          param_6 = *puVar26;
          puVar26 = puVar26 + 1;
        }
        if ((uVar21 & 1) != 0) {
          param_1 = CONCAT44(*(undefined4 *)param_13,(int)param_1);
          param_13 = (undefined8 *)((long)param_13 + 4);
          param_5 = CONCAT44(*(undefined4 *)puVar26,(int)param_5);
        }
        uVar28 = (ulong)param_1 >> 0x10;
        uVar27 = (ulong)param_1 >> 0x30;
        uVar42 = (undefined1)param_2;
        uVar22 = (ulong)param_2 >> 0x10;
        uVar76 = (ulong)param_2 >> 0x20;
        uVar23 = (ulong)param_2 >> 0x30;
        bVar34 = (byte)((ulong)param_1 >> 0x18);
        bVar36 = (byte)((ulong)param_1 >> 0x38);
        bVar38 = (byte)((ulong)param_2 >> 0x18);
        bVar39 = (byte)((ulong)param_2 >> 0x38);
        bVar35 = (byte)((ulong)param_3 >> 0x18);
        bVar37 = (byte)((ulong)param_3 >> 0x38);
        param_2 = CONCAT17(bVar67,CONCAT16(bVar64,CONCAT15((char)((ulong)param_3 >> 0x28),
                                                           CONCAT14((char)((ulong)param_3 >> 8),
                                                                    CONCAT13((char)((ulong)param_2
                                                                                   >> 0x28),
                                                                             CONCAT12((char)((ulong)
                                                  param_2 >> 8),
                                                  CONCAT11((char)((ulong)param_1 >> 0x28),
                                                           (char)((ulong)param_1 >> 8))))))));
        param_1 = CONCAT17(bVar66,CONCAT16(bVar63,CONCAT15((char)((ulong)param_3 >> 0x20),
                                                           CONCAT14((char)param_3,
                                                                    CONCAT13((char)uVar76,
                                                                             CONCAT12(uVar42,
                                                  CONCAT11((char)((ulong)param_1 >> 0x20),
                                                           (char)param_1)))))));
        param_3 = CONCAT17(bVar62,CONCAT16(bVar65,CONCAT15((char)((ulong)param_3 >> 0x30),
                                                           CONCAT14((char)((ulong)param_3 >> 0x10),
                                                                    CONCAT13((char)uVar23,
                                                                             CONCAT12((char)uVar22,
                                                                                      CONCAT11((char
                                                  )uVar27,(char)uVar28)))))));
        uVar28 = (ulong)param_5 >> 0x10;
        uVar27 = (ulong)param_5 >> 0x30;
        uVar29 = (undefined1)param_6;
        uVar22 = (ulong)param_6 >> 0x10;
        uVar76 = (ulong)param_6 >> 0x20;
        uVar23 = (ulong)param_6 >> 0x30;
        uVar42 = (undefined1)((ulong)param_5 >> 0x18);
        uVar44 = (undefined1)((ulong)param_5 >> 0x38);
        uVar47 = (undefined1)((ulong)param_6 >> 0x18);
        uVar49 = (undefined1)((ulong)param_6 >> 0x38);
        uVar43 = (undefined1)((ulong)param_7 >> 0x18);
        uVar45 = (undefined1)((ulong)param_7 >> 0x38);
        param_6 = CONCAT17(uVar48,CONCAT16(uVar31,CONCAT15((char)((ulong)param_7 >> 0x28),
                                                           CONCAT14((char)((ulong)param_7 >> 8),
                                                                    CONCAT13((char)((ulong)param_6
                                                                                   >> 0x28),
                                                                             CONCAT12((char)((ulong)
                                                  param_6 >> 8),
                                                  CONCAT11((char)((ulong)param_5 >> 0x28),
                                                           (char)((ulong)param_5 >> 8))))))));
        param_5 = CONCAT17(uVar46,CONCAT16(uVar30,CONCAT15((char)((ulong)param_7 >> 0x20),
                                                           CONCAT14((char)param_7,
                                                                    CONCAT13((char)uVar76,
                                                                             CONCAT12(uVar29,
                                                  CONCAT11((char)((ulong)param_5 >> 0x20),
                                                           (char)param_5)))))));
        param_7 = CONCAT17(uVar50,CONCAT16(uVar32,CONCAT15((char)((ulong)param_7 >> 0x30),
                                                           CONCAT14((char)((ulong)param_7 >> 0x10),
                                                                    CONCAT13((char)uVar23,
                                                                             CONCAT12((char)uVar22,
                                                                                      CONCAT11((char
                                                  )uVar27,(char)uVar28)))))));
        bVar62 = ~bVar34;
        bVar63 = ~bVar36;
        bVar64 = ~bVar38;
        bVar65 = ~bVar39;
        bVar66 = ~bVar35;
        bVar67 = ~bVar37;
        bVar68 = ~bVar33;
        bVar70 = ~bVar40;
        auVar52 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),param_5,1);
        auVar53 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),param_6,1);
        auVar54 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),param_7,1);
        auVar55 = NEON_umull(CONCAT17(bVar70,CONCAT16(bVar68,CONCAT15(bVar67,CONCAT14(bVar66,
                                                  CONCAT13(bVar65,CONCAT12(bVar64,CONCAT11(bVar63,
                                                  bVar62))))))),
                             CONCAT17(uVar51,CONCAT16(uVar41,CONCAT15(uVar45,CONCAT14(uVar43,
                                                  CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar44,
                                                  uVar42))))))),1);
        auVar56 = NEON_urshr(auVar52,8,2);
        auVar57 = NEON_urshr(auVar53,8,2);
        auVar60 = NEON_urshr(auVar54,8,2);
        auVar61 = NEON_urshr(auVar55,8,2);
        uVar79 = NEON_raddhn(in_d28,auVar56,auVar52,2);
        uVar72 = NEON_raddhn(in_d29,auVar57,auVar53,2);
        uVar74 = NEON_raddhn(in_d30,auVar60,auVar54,2);
        uVar75 = NEON_raddhn(in_d31,auVar61,auVar55,2);
        uVar79 = NEON_uqadd(param_1,uVar79,1);
        uVar72 = NEON_uqadd(param_2,uVar72,1);
        uVar28 = NEON_uqadd(param_3,uVar74,1);
        uVar74 = NEON_uqadd(CONCAT17(bVar40,CONCAT16(bVar33,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13
                                                  (bVar39,CONCAT12(bVar38,CONCAT11(bVar36,bVar34))))
                                                  ))),uVar75,1);
        uVar50 = (undefined1)(uVar28 >> 8);
        uVar30 = (undefined1)(uVar28 >> 0x18);
        uVar31 = (undefined1)(uVar28 >> 0x28);
        uVar32 = (undefined1)(uVar28 >> 0x38);
        uVar59 = CONCAT16(uVar31,(uint6)CONCAT14((char)((ulong)uVar79 >> 0x28),
                                                 ((uint)(uVar28 >> 0x20) & 0xff) << 0x10));
        uVar58 = CONCAT13((char)((ulong)uVar74 >> 0x20),
                          (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                         CONCAT11((char)((ulong)uVar72 >> 0x20),
                                                  (char)((ulong)uVar79 >> 0x20))));
        in_d30 = CONCAT17((char)((ulong)uVar74 >> 0x28),
                          CONCAT16(uVar31,CONCAT15((char)((ulong)uVar72 >> 0x28),
                                                   (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                  uVar58))));
        uVar59 = CONCAT16(uVar32,(uint6)CONCAT14((char)((ulong)uVar79 >> 0x38),
                                                 (uint)(byte)(uVar28 >> 0x30) << 0x10));
        uVar77 = CONCAT13((char)((ulong)uVar74 >> 0x30),
                          (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                         CONCAT11((char)((ulong)uVar72 >> 0x30),
                                                  (char)((ulong)uVar79 >> 0x30))));
        in_d31 = CONCAT17((char)((ulong)uVar74 >> 0x38),
                          CONCAT16(uVar32,CONCAT15((char)((ulong)uVar72 >> 0x38),
                                                   (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                  uVar77))));
        uVar59 = CONCAT16(uVar50,(uint6)CONCAT14((char)((ulong)uVar79 >> 8),
                                                 (int)((uVar28 & 0xff) << 0x10)));
        in_d28 = CONCAT17((char)((ulong)uVar74 >> 8),
                          CONCAT16(uVar50,CONCAT15((char)((ulong)uVar72 >> 8),
                                                   (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                  CONCAT13((char)uVar74,
                                                                           (int3)CONCAT52((int5)((
                                                  uint7)uVar59 >> 0x10),
                                                  CONCAT11((char)uVar72,(char)uVar79)))))));
        uVar59 = CONCAT16(uVar30,(uint6)CONCAT14((char)((ulong)uVar79 >> 0x18),
                                                 (uint)(byte)(uVar28 >> 0x10) << 0x10));
        uVar73 = CONCAT13((char)((ulong)uVar74 >> 0x10),
                          (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                         CONCAT11((char)((ulong)uVar72 >> 0x10),
                                                  (char)((ulong)uVar79 >> 0x10))));
        in_d29 = CONCAT17((char)((ulong)uVar74 >> 0x18),
                          CONCAT16(uVar30,CONCAT15((char)((ulong)uVar72 >> 0x18),
                                                   (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                  uVar73))));
        if ((uVar21 & 4) != 0) {
          *(undefined4 *)puVar20 = uVar58;
          *(int *)((long)puVar20 + 4) = (int)((ulong)in_d30 >> 0x20);
          *(undefined4 *)(puVar20 + 1) = uVar77;
          *(int *)((long)puVar20 + 0xc) = (int)((ulong)in_d31 >> 0x20);
          puVar20 = puVar20 + 2;
        }
        if ((uVar21 & 2) != 0) {
          *(undefined4 *)puVar20 = uVar73;
          *(int *)((long)puVar20 + 4) = (int)((ulong)in_d29 >> 0x20);
          puVar20 = puVar20 + 1;
        }
        if ((uVar21 & 1) != 0) {
          *(int *)puVar20 = (int)((ulong)in_d28 >> 0x20);
          puVar20 = (undefined8 *)((long)puVar20 + 4);
        }
      }
      param_11 = (undefined8 *)((long)puVar20 + uVar21 * -4 + (long)param_12 * 4);
      param_13 = (undefined8 *)((long)param_13 + uVar21 * -4 + (long)param_14 * 4);
      bVar17 = 0 < lVar24;
      lVar24 = lVar24 + -1;
    } while (bVar17);
  }
  return;
}


// ===== 001a0648  FUN_001a0648 =====

void FUN_001a0648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8 [16],
                 int param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined5 uVar1;
  undefined5 uVar2;
  undefined5 uVar3;
  undefined5 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined8 in_d28;
  undefined8 uVar57;
  undefined4 uVar58;
  undefined7 uVar59;
  undefined8 in_d29;
  undefined8 uVar60;
  undefined8 in_d30;
  undefined8 uVar61;
  ulong uVar62;
  undefined4 uVar63;
  undefined7 uVar64;
  undefined8 in_d31;
  undefined8 uVar65;
  undefined7 uVar40;
  
  uVar32 = param_8[7];
  uVar31 = param_8[6];
  uVar30 = param_8[5];
  uVar29 = param_8[4];
  uVar28 = param_8[3];
  uVar27 = param_8[2];
  uVar26 = param_8[1];
  uVar25 = param_8[0];
  bVar24 = param_4[7];
  bVar23 = param_4[6];
  bVar22 = param_4[5];
  bVar21 = param_4[4];
  bVar20 = param_4[3];
  bVar19 = param_4[2];
  bVar18 = param_4[1];
  bVar17 = param_4[0];
  uVar10 = (ulong)param_9;
  if ((long)uVar10 < 8) {
    if ((uVar10 & 7) != 0) {
      puVar9 = param_10;
      if ((uVar10 & 4) != 0) {
        param_3 = *param_11;
        uVar39 = *(undefined4 *)(param_11 + 1);
        bVar17 = (byte)uVar39;
        bVar18 = (byte)((uint)uVar39 >> 8);
        bVar19 = (byte)((uint)uVar39 >> 0x10);
        bVar20 = (byte)((uint)uVar39 >> 0x18);
        uVar39 = *(undefined4 *)((long)param_11 + 0xc);
        bVar21 = (byte)uVar39;
        bVar22 = (byte)((uint)uVar39 >> 8);
        bVar23 = (byte)((uint)uVar39 >> 0x10);
        bVar24 = (byte)((uint)uVar39 >> 0x18);
        param_11 = param_11 + 2;
        param_7 = *param_10;
        uVar39 = *(undefined4 *)(param_10 + 1);
        uVar25 = (undefined1)uVar39;
        uVar26 = (undefined1)((uint)uVar39 >> 8);
        uVar27 = (undefined1)((uint)uVar39 >> 0x10);
        uVar28 = (undefined1)((uint)uVar39 >> 0x18);
        uVar39 = *(undefined4 *)((long)param_10 + 0xc);
        uVar29 = (undefined1)uVar39;
        uVar30 = (undefined1)((uint)uVar39 >> 8);
        uVar31 = (undefined1)((uint)uVar39 >> 0x10);
        uVar32 = (undefined1)((uint)uVar39 >> 0x18);
        puVar9 = param_10 + 2;
      }
      if ((uVar10 & 2) != 0) {
        param_2 = *param_11;
        param_11 = param_11 + 1;
        param_6 = *puVar9;
        puVar9 = puVar9 + 1;
      }
      if ((uVar10 & 1) != 0) {
        param_1 = CONCAT44(*(undefined4 *)param_11,(int)param_1);
        param_5 = CONCAT44(*(undefined4 *)puVar9,(int)param_5);
      }
      bVar43 = (byte)((ulong)param_1 >> 0x18);
      bVar45 = (byte)((ulong)param_1 >> 0x38);
      bVar49 = (byte)((ulong)param_2 >> 0x18);
      bVar51 = (byte)((ulong)param_2 >> 0x38);
      bVar44 = (byte)((ulong)param_3 >> 0x18);
      bVar47 = (byte)((ulong)param_3 >> 0x38);
      bVar53 = ~bVar43;
      bVar55 = ~bVar45;
      bVar46 = ~bVar49;
      bVar48 = ~bVar51;
      bVar50 = ~bVar44;
      bVar52 = ~bVar47;
      bVar54 = ~bVar20;
      bVar56 = ~bVar24;
      auVar33 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                  )),
                           CONCAT17(uVar29,CONCAT16(uVar25,CONCAT15((char)((ulong)param_7 >> 0x20),
                                                                    CONCAT14((char)param_7,
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x20),
                                                  CONCAT12((char)param_6,
                                                           CONCAT11((char)((ulong)param_5 >> 0x20),
                                                                    (char)param_5))))))),1);
      auVar34 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                  )),
                           CONCAT17(uVar30,CONCAT16(uVar26,CONCAT15((char)((ulong)param_7 >> 0x28),
                                                                    CONCAT14((char)((ulong)param_7
                                                                                   >> 8),
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x28),
                                                  CONCAT12((char)((ulong)param_6 >> 8),
                                                           CONCAT11((char)((ulong)param_5 >> 0x28),
                                                                    (char)((ulong)param_5 >> 8))))))
                                                  )),1);
      auVar35 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                  )),
                           CONCAT17(uVar31,CONCAT16(uVar27,CONCAT15((char)((ulong)param_7 >> 0x30),
                                                                    CONCAT14((char)((ulong)param_7
                                                                                   >> 0x10),
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x30),
                                                  CONCAT12((char)((ulong)param_6 >> 0x10),
                                                           CONCAT11((char)((ulong)param_5 >> 0x30),
                                                                    (char)((ulong)param_5 >> 0x10)))
                                                  ))))),1);
      auVar36 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                  )),
                           CONCAT17(uVar32,CONCAT16(uVar28,CONCAT15((char)((ulong)param_7 >> 0x38),
                                                                    CONCAT14((char)((ulong)param_7
                                                                                   >> 0x18),
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x38),
                                                  CONCAT12((char)((ulong)param_6 >> 0x18),
                                                           CONCAT11((char)((ulong)param_5 >> 0x38),
                                                                    (char)((ulong)param_5 >> 0x18)))
                                                  ))))),1);
      auVar37 = NEON_urshr(auVar33,8,2);
      auVar38 = NEON_urshr(auVar34,8,2);
      auVar41 = NEON_urshr(auVar35,8,2);
      auVar42 = NEON_urshr(auVar36,8,2);
      uVar57 = NEON_raddhn(in_d28,auVar37,auVar33,2);
      uVar60 = NEON_raddhn(in_d29,auVar38,auVar34,2);
      uVar61 = NEON_raddhn(in_d30,auVar41,auVar35,2);
      uVar65 = NEON_raddhn(in_d31,auVar42,auVar36,2);
      uVar57 = NEON_uqadd(CONCAT17(bVar21,CONCAT16(bVar17,CONCAT15((char)((ulong)param_3 >> 0x20),
                                                                   CONCAT14((char)param_3,
                                                                            CONCAT13((char)((ulong)
                                                  param_2 >> 0x20),
                                                  CONCAT12((char)param_2,
                                                           CONCAT11((char)((ulong)param_1 >> 0x20),
                                                                    (char)param_1))))))),uVar57,1);
      uVar60 = NEON_uqadd(CONCAT17(bVar22,CONCAT16(bVar18,CONCAT15((char)((ulong)param_3 >> 0x28),
                                                                   CONCAT14((char)((ulong)param_3 >>
                                                                                  8),CONCAT13((char)
                                                  ((ulong)param_2 >> 0x28),
                                                  CONCAT12((char)((ulong)param_2 >> 8),
                                                           CONCAT11((char)((ulong)param_1 >> 0x28),
                                                                    (char)((ulong)param_1 >> 8))))))
                                                  )),uVar60,1);
      uVar61 = NEON_uqadd(CONCAT17(bVar23,CONCAT16(bVar19,CONCAT15((char)((ulong)param_3 >> 0x30),
                                                                   CONCAT14((char)((ulong)param_3 >>
                                                                                  0x10),
                                                                            CONCAT13((char)((ulong)
                                                  param_2 >> 0x30),
                                                  CONCAT12((char)((ulong)param_2 >> 0x10),
                                                           CONCAT11((char)((ulong)param_1 >> 0x30),
                                                                    (char)((ulong)param_1 >> 0x10)))
                                                  ))))),uVar61,1);
      uVar65 = NEON_uqadd(CONCAT17(bVar24,CONCAT16(bVar20,CONCAT15(bVar47,CONCAT14(bVar44,CONCAT13(
                                                  bVar51,CONCAT12(bVar49,CONCAT11(bVar45,bVar43)))))
                                                  )),uVar65,1);
      uVar25 = (undefined1)((ulong)uVar61 >> 8);
      uVar26 = (undefined1)((ulong)uVar61 >> 0x18);
      uVar27 = (undefined1)((ulong)uVar61 >> 0x28);
      uVar28 = (undefined1)((ulong)uVar61 >> 0x38);
      uVar40 = CONCAT16(uVar27,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x28),
                                               ((uint)((ulong)uVar61 >> 0x20) & 0xff) << 0x10));
      uVar39 = CONCAT13((char)((ulong)uVar65 >> 0x20),
                        (int3)CONCAT52((int5)((uint7)uVar40 >> 0x10),
                                       CONCAT11((char)((ulong)uVar60 >> 0x20),
                                                (char)((ulong)uVar57 >> 0x20))));
      uVar64 = CONCAT16(uVar28,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x38),
                                               (uint)(byte)((ulong)uVar61 >> 0x30) << 0x10));
      uVar63 = CONCAT13((char)((ulong)uVar65 >> 0x30),
                        (int3)CONCAT52((int5)((uint7)uVar64 >> 0x10),
                                       CONCAT11((char)((ulong)uVar60 >> 0x30),
                                                (char)((ulong)uVar57 >> 0x30))));
      uVar59 = CONCAT16(uVar26,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x18),
                                               (uint)(byte)((ulong)uVar61 >> 0x10) << 0x10));
      uVar58 = CONCAT13((char)((ulong)uVar65 >> 0x10),
                        (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                       CONCAT11((char)((ulong)uVar60 >> 0x10),
                                                (char)((ulong)uVar57 >> 0x10))));
      if ((uVar10 & 4) != 0) {
        *(undefined4 *)param_10 = uVar39;
        *(int *)((long)param_10 + 4) =
             (int)(CONCAT17((char)((ulong)uVar65 >> 0x28),
                            CONCAT16(uVar27,CONCAT15((char)((ulong)uVar60 >> 0x28),
                                                     (int5)CONCAT34((int3)((uint7)uVar40 >> 0x20),
                                                                    uVar39)))) >> 0x20);
        *(undefined4 *)(param_10 + 1) = uVar63;
        *(int *)((long)param_10 + 0xc) =
             (int)(CONCAT17((char)((ulong)uVar65 >> 0x38),
                            CONCAT16(uVar28,CONCAT15((char)((ulong)uVar60 >> 0x38),
                                                     (int5)CONCAT34((int3)((uint7)uVar64 >> 0x20),
                                                                    uVar63)))) >> 0x20);
        param_10 = param_10 + 2;
      }
      if ((uVar10 & 2) != 0) {
        *(undefined4 *)param_10 = uVar58;
        *(int *)((long)param_10 + 4) =
             (int)(CONCAT17((char)((ulong)uVar65 >> 0x18),
                            CONCAT16(uVar26,CONCAT15((char)((ulong)uVar60 >> 0x18),
                                                     (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                    uVar58)))) >> 0x20);
        param_10 = param_10 + 1;
      }
      if ((uVar10 & 1) != 0) {
        *(int *)param_10 =
             (int)(CONCAT17((char)((ulong)uVar65 >> 8),
                            CONCAT16(uVar25,CONCAT15((char)((ulong)uVar60 >> 8),
                                                     (uint5)(uint3)(CONCAT16(uVar25,(uint6)(byte)((
                                                  ulong)uVar57 >> 8) << 0x20) >> 0x20) << 0x20))) >>
                  0x20);
      }
    }
    return;
  }
  puVar9 = param_10;
  if (((ulong)param_10 & 0xf) != 0) {
    if (((ulong)param_10 & 4) != 0) {
      param_1 = CONCAT44(*(undefined4 *)param_11,(int)param_1);
      param_11 = (undefined8 *)((long)param_11 + 4);
      param_5 = CONCAT44(*(undefined4 *)param_10,(int)param_5);
      puVar9 = (undefined8 *)((long)param_10 + 4);
      uVar10 = uVar10 - 1;
    }
    if (((ulong)puVar9 & 8) != 0) {
      param_2 = *param_11;
      param_11 = param_11 + 1;
      param_6 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 2;
    }
    uVar57 = *param_11;
    uVar39 = *(undefined4 *)((long)param_11 + 0xc);
    uVar2 = *(undefined5 *)(param_11 + 1);
    uVar1 = *(undefined5 *)(param_11 + 1);
    bVar24 = (byte)((uint)uVar39 >> 0x18);
    param_11 = param_11 + 2;
    uVar60 = *puVar9;
    uVar58 = *(undefined4 *)((long)puVar9 + 0xc);
    uVar4 = *(undefined5 *)(puVar9 + 1);
    uVar3 = *(undefined5 *)(puVar9 + 1);
    uVar32 = (undefined1)((uint)uVar58 >> 0x18);
    puVar9 = puVar9 + 2;
    uVar10 = uVar10 - 4;
    uVar62 = (ulong)param_1 >> 0x10;
    uVar8 = (ulong)param_1 >> 0x30;
    uVar25 = (undefined1)param_2;
    uVar5 = (ulong)param_2 >> 0x10;
    uVar6 = (ulong)param_2 >> 0x20;
    uVar7 = (ulong)param_2 >> 0x30;
    bVar17 = (byte)((ulong)param_1 >> 0x18);
    bVar18 = (byte)((ulong)param_1 >> 0x38);
    bVar19 = (byte)((ulong)param_2 >> 0x18);
    bVar20 = (byte)((ulong)param_2 >> 0x38);
    bVar21 = (byte)((ulong)uVar57 >> 0x18);
    bVar22 = (byte)((ulong)uVar57 >> 0x38);
    bVar23 = (byte)((uint5)uVar2 >> 0x18);
    param_2 = CONCAT17((char)((uint)uVar39 >> 8),
                       CONCAT16((char)((uint5)uVar2 >> 8),
                                CONCAT15((char)((ulong)uVar57 >> 0x28),
                                         CONCAT14((char)((ulong)uVar57 >> 8),
                                                  CONCAT13((char)((ulong)param_2 >> 0x28),
                                                           CONCAT12((char)((ulong)param_2 >> 8),
                                                                    CONCAT11((char)((ulong)param_1
                                                                                   >> 0x28),
                                                                             (char)((ulong)param_1
                                                                                   >> 8))))))));
    param_1 = CONCAT17((char)((uint5)uVar1 >> 0x20),
                       CONCAT16((char)uVar1,
                                CONCAT15((char)((ulong)uVar57 >> 0x20),
                                         CONCAT14((char)uVar57,
                                                  CONCAT13((char)uVar6,
                                                           CONCAT12(uVar25,CONCAT11((char)((ulong)
                                                  param_1 >> 0x20),(char)param_1)))))));
    param_3 = CONCAT17((char)((uint)uVar39 >> 0x10),
                       CONCAT16((char)((uint5)uVar1 >> 0x10),
                                CONCAT15((char)((ulong)uVar57 >> 0x30),
                                         CONCAT14((char)((ulong)uVar57 >> 0x10),
                                                  CONCAT13((char)uVar7,
                                                           CONCAT12((char)uVar5,
                                                                    CONCAT11((char)uVar8,
                                                                             (char)uVar62)))))));
    uVar62 = (ulong)param_5 >> 0x10;
    uVar8 = (ulong)param_5 >> 0x30;
    uVar13 = (undefined1)param_6;
    uVar5 = (ulong)param_6 >> 0x10;
    uVar6 = (ulong)param_6 >> 0x20;
    uVar7 = (ulong)param_6 >> 0x30;
    uVar25 = (undefined1)((ulong)param_5 >> 0x18);
    uVar26 = (undefined1)((ulong)param_5 >> 0x38);
    uVar27 = (undefined1)((ulong)param_6 >> 0x18);
    uVar28 = (undefined1)((ulong)param_6 >> 0x38);
    uVar29 = (undefined1)((ulong)uVar60 >> 0x18);
    uVar30 = (undefined1)((ulong)uVar60 >> 0x38);
    uVar31 = (undefined1)((uint5)uVar4 >> 0x18);
    param_6 = CONCAT17((char)((uint)uVar58 >> 8),
                       CONCAT16((char)((uint5)uVar4 >> 8),
                                CONCAT15((char)((ulong)uVar60 >> 0x28),
                                         CONCAT14((char)((ulong)uVar60 >> 8),
                                                  CONCAT13((char)((ulong)param_6 >> 0x28),
                                                           CONCAT12((char)((ulong)param_6 >> 8),
                                                                    CONCAT11((char)((ulong)param_5
                                                                                   >> 0x28),
                                                                             (char)((ulong)param_5
                                                                                   >> 8))))))));
    param_5 = CONCAT17((char)((uint5)uVar3 >> 0x20),
                       CONCAT16((char)uVar3,
                                CONCAT15((char)((ulong)uVar60 >> 0x20),
                                         CONCAT14((char)uVar60,
                                                  CONCAT13((char)uVar6,
                                                           CONCAT12(uVar13,CONCAT11((char)((ulong)
                                                  param_5 >> 0x20),(char)param_5)))))));
    param_7 = CONCAT17((char)((uint)uVar58 >> 0x10),
                       CONCAT16((char)((uint5)uVar3 >> 0x10),
                                CONCAT15((char)((ulong)uVar60 >> 0x30),
                                         CONCAT14((char)((ulong)uVar60 >> 0x10),
                                                  CONCAT13((char)uVar7,
                                                           CONCAT12((char)uVar5,
                                                                    CONCAT11((char)uVar8,
                                                                             (char)uVar62)))))));
    bVar43 = ~bVar17;
    bVar44 = ~bVar18;
    bVar45 = ~bVar19;
    bVar47 = ~bVar20;
    bVar49 = ~bVar21;
    bVar51 = ~bVar22;
    bVar53 = ~bVar23;
    bVar55 = ~bVar24;
    auVar33 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),param_5,1);
    auVar34 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),param_6,1);
    auVar35 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),param_7,1);
    auVar36 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),
                         CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(
                                                  uVar28,CONCAT12(uVar27,CONCAT11(uVar26,uVar25)))))
                                                 )),1);
    auVar37 = NEON_urshr(auVar33,8,2);
    auVar38 = NEON_urshr(auVar34,8,2);
    auVar41 = NEON_urshr(auVar35,8,2);
    auVar42 = NEON_urshr(auVar36,8,2);
    uVar57 = NEON_raddhn(in_d28,auVar37,auVar33,2);
    uVar60 = NEON_raddhn(in_d29,auVar38,auVar34,2);
    uVar61 = NEON_raddhn(in_d30,auVar41,auVar35,2);
    uVar65 = NEON_raddhn(in_d31,auVar42,auVar36,2);
    uVar57 = NEON_uqadd(param_1,uVar57,1);
    uVar60 = NEON_uqadd(param_2,uVar60,1);
    uVar62 = NEON_uqadd(param_3,uVar61,1);
    uVar61 = NEON_uqadd(CONCAT17(bVar24,CONCAT16(bVar23,CONCAT15(bVar22,CONCAT14(bVar21,CONCAT13(
                                                  bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17)))))
                                                )),uVar65,1);
    uVar13 = (undefined1)(uVar62 >> 8);
    uVar14 = (undefined1)(uVar62 >> 0x18);
    uVar15 = (undefined1)(uVar62 >> 0x28);
    uVar16 = (undefined1)(uVar62 >> 0x38);
    uVar40 = CONCAT16(uVar15,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x28),
                                             ((uint)(uVar62 >> 0x20) & 0xff) << 0x10));
    uVar39 = CONCAT13((char)((ulong)uVar61 >> 0x20),
                      (int3)CONCAT52((int5)((uint7)uVar40 >> 0x10),
                                     CONCAT11((char)((ulong)uVar60 >> 0x20),
                                              (char)((ulong)uVar57 >> 0x20))));
    in_d30 = CONCAT17((char)((ulong)uVar61 >> 0x28),
                      CONCAT16(uVar15,CONCAT15((char)((ulong)uVar60 >> 0x28),
                                               (int5)CONCAT34((int3)((uint7)uVar40 >> 0x20),uVar39))
                              ));
    uVar40 = CONCAT16(uVar16,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x38),
                                             (uint)(byte)(uVar62 >> 0x30) << 0x10));
    uVar63 = CONCAT13((char)((ulong)uVar61 >> 0x30),
                      (int3)CONCAT52((int5)((uint7)uVar40 >> 0x10),
                                     CONCAT11((char)((ulong)uVar60 >> 0x30),
                                              (char)((ulong)uVar57 >> 0x30))));
    in_d31 = CONCAT17((char)((ulong)uVar61 >> 0x38),
                      CONCAT16(uVar16,CONCAT15((char)((ulong)uVar60 >> 0x38),
                                               (int5)CONCAT34((int3)((uint7)uVar40 >> 0x20),uVar63))
                              ));
    uVar40 = CONCAT16(uVar13,(uint6)CONCAT14((char)((ulong)uVar57 >> 8),
                                             (int)((uVar62 & 0xff) << 0x10)));
    in_d28 = CONCAT17((char)((ulong)uVar61 >> 8),
                      CONCAT16(uVar13,CONCAT15((char)((ulong)uVar60 >> 8),
                                               (int5)CONCAT34((int3)((uint7)uVar40 >> 0x20),
                                                              CONCAT13((char)uVar61,
                                                                       (int3)CONCAT52((int5)((uint7)
                                                  uVar40 >> 0x10),
                                                  CONCAT11((char)uVar60,(char)uVar57)))))));
    uVar40 = CONCAT16(uVar14,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x18),
                                             (uint)(byte)(uVar62 >> 0x10) << 0x10));
    uVar58 = CONCAT13((char)((ulong)uVar61 >> 0x10),
                      (int3)CONCAT52((int5)((uint7)uVar40 >> 0x10),
                                     CONCAT11((char)((ulong)uVar60 >> 0x10),
                                              (char)((ulong)uVar57 >> 0x10))));
    in_d29 = CONCAT17((char)((ulong)uVar61 >> 0x18),
                      CONCAT16(uVar14,CONCAT15((char)((ulong)uVar60 >> 0x18),
                                               (int5)CONCAT34((int3)((uint7)uVar40 >> 0x20),uVar58))
                              ));
    if (((ulong)param_10 & 4) != 0) {
      *(int *)param_10 = (int)((ulong)in_d28 >> 0x20);
      param_10 = (undefined8 *)((long)param_10 + 4);
    }
    if (((ulong)param_10 & 8) != 0) {
      *(undefined4 *)param_10 = uVar58;
      *(int *)((long)param_10 + 4) = (int)((ulong)in_d29 >> 0x20);
      param_10 = param_10 + 1;
    }
    *(undefined4 *)param_10 = uVar39;
    *(int *)((long)param_10 + 4) = (int)((ulong)in_d30 >> 0x20);
    *(undefined4 *)(param_10 + 1) = uVar63;
    *(int *)((long)param_10 + 0xc) = (int)((ulong)in_d31 >> 0x20);
    param_10 = param_10 + 2;
  }
  uVar62 = uVar10 - 8;
  if (7 < (long)uVar10) {
    uVar25 = *(undefined1 *)((long)puVar9 + 3);
    uVar26 = *(undefined1 *)((long)puVar9 + 7);
    uVar27 = *(undefined1 *)((long)puVar9 + 0xb);
    uVar28 = *(undefined1 *)((long)puVar9 + 0xf);
    uVar29 = *(undefined1 *)((long)puVar9 + 0x13);
    uVar30 = *(undefined1 *)((long)puVar9 + 0x17);
    uVar31 = *(undefined1 *)((long)puVar9 + 0x1b);
    param_5 = CONCAT17(*(undefined1 *)((long)puVar9 + 0x1c),
                       CONCAT16(*(undefined1 *)(puVar9 + 3),
                                CONCAT15(*(undefined1 *)((long)puVar9 + 0x14),
                                         CONCAT14(*(undefined1 *)(puVar9 + 2),
                                                  CONCAT13(*(undefined1 *)((long)puVar9 + 0xc),
                                                           CONCAT12(*(undefined1 *)(puVar9 + 1),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)puVar9 + 4),
                                                                             *(undefined1 *)puVar9))
                                                          )))));
    param_6 = CONCAT17(*(undefined1 *)((long)puVar9 + 0x1d),
                       CONCAT16(*(undefined1 *)((long)puVar9 + 0x19),
                                CONCAT15(*(undefined1 *)((long)puVar9 + 0x15),
                                         CONCAT14(*(undefined1 *)((long)puVar9 + 0x11),
                                                  CONCAT13(*(undefined1 *)((long)puVar9 + 0xd),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)puVar9 + 9),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)puVar9 + 5),
                                                                             *(undefined1 *)
                                                                              ((long)puVar9 + 1)))))
                                        )));
    param_7 = CONCAT17(*(undefined1 *)((long)puVar9 + 0x1e),
                       CONCAT16(*(undefined1 *)((long)puVar9 + 0x1a),
                                CONCAT15(*(undefined1 *)((long)puVar9 + 0x16),
                                         CONCAT14(*(undefined1 *)((long)puVar9 + 0x12),
                                                  CONCAT13(*(undefined1 *)((long)puVar9 + 0xe),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)puVar9 + 10),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)puVar9 + 6),
                                                                             *(undefined1 *)
                                                                              ((long)puVar9 + 2)))))
                                        )));
    uVar32 = *(undefined1 *)((long)puVar9 + 0x1f);
    bVar17 = *(byte *)((long)param_11 + 3);
    bVar18 = *(byte *)((long)param_11 + 7);
    bVar19 = *(byte *)((long)param_11 + 0xb);
    bVar20 = *(byte *)((long)param_11 + 0xf);
    bVar21 = *(byte *)((long)param_11 + 0x13);
    bVar22 = *(byte *)((long)param_11 + 0x17);
    bVar23 = *(byte *)((long)param_11 + 0x1b);
    param_1 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1c),
                       CONCAT16(*(undefined1 *)(param_11 + 3),
                                CONCAT15(*(undefined1 *)((long)param_11 + 0x14),
                                         CONCAT14(*(undefined1 *)(param_11 + 2),
                                                  CONCAT13(*(undefined1 *)((long)param_11 + 0xc),
                                                           CONCAT12(*(undefined1 *)(param_11 + 1),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)param_11 + 4),
                                                                             *(undefined1 *)param_11
                                                                            )))))));
    param_2 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1d),
                       CONCAT16(*(undefined1 *)((long)param_11 + 0x19),
                                CONCAT15(*(undefined1 *)((long)param_11 + 0x15),
                                         CONCAT14(*(undefined1 *)((long)param_11 + 0x11),
                                                  CONCAT13(*(undefined1 *)((long)param_11 + 0xd),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)param_11 + 9),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)param_11 + 5),
                                                                             *(undefined1 *)
                                                                              ((long)param_11 + 1)))
                                                          )))));
    param_3 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1e),
                       CONCAT16(*(undefined1 *)((long)param_11 + 0x1a),
                                CONCAT15(*(undefined1 *)((long)param_11 + 0x16),
                                         CONCAT14(*(undefined1 *)((long)param_11 + 0x12),
                                                  CONCAT13(*(undefined1 *)((long)param_11 + 0xe),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)param_11 + 10),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)param_11 + 6),
                                                                             *(undefined1 *)
                                                                              ((long)param_11 + 2)))
                                                          )))));
    bVar24 = *(byte *)((long)param_11 + 0x1f);
    bVar43 = ~bVar17;
    bVar44 = ~bVar18;
    bVar45 = ~bVar19;
    bVar47 = ~bVar20;
    bVar49 = ~bVar21;
    bVar51 = ~bVar22;
    bVar53 = ~bVar23;
    bVar55 = ~bVar24;
    auVar33 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),param_5,1);
    auVar34 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),param_6,1);
    auVar35 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),param_7,1);
    auVar36 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                 )),
                         CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(
                                                  uVar28,CONCAT12(uVar27,CONCAT11(uVar26,uVar25)))))
                                                 )),1);
    uVar8 = uVar10 - 0x10;
    puVar12 = puVar9;
    puVar11 = param_11;
    uVar10 = uVar62;
    while( true ) {
      uVar62 = uVar8;
      param_11 = puVar11 + 4;
      puVar9 = puVar12 + 4;
      if ((long)uVar10 < 8) break;
      uVar25 = *(undefined1 *)((long)puVar12 + 0x23);
      uVar26 = *(undefined1 *)((long)puVar12 + 0x27);
      uVar27 = *(undefined1 *)((long)puVar12 + 0x2b);
      uVar28 = *(undefined1 *)((long)puVar12 + 0x2f);
      uVar29 = *(undefined1 *)((long)puVar12 + 0x33);
      uVar30 = *(undefined1 *)((long)puVar12 + 0x37);
      uVar31 = *(undefined1 *)((long)puVar12 + 0x3b);
      param_5 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x3c),
                         CONCAT16(*(undefined1 *)(puVar12 + 7),
                                  CONCAT15(*(undefined1 *)((long)puVar12 + 0x34),
                                           CONCAT14(*(undefined1 *)(puVar12 + 6),
                                                    CONCAT13(*(undefined1 *)((long)puVar12 + 0x2c),
                                                             CONCAT12(*(undefined1 *)(puVar12 + 5),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar12 +
                                                                                0x24),*(undefined1 *
                                                                                       )puVar9))))))
                        );
      param_6 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x3d),
                         CONCAT16(*(undefined1 *)((long)puVar12 + 0x39),
                                  CONCAT15(*(undefined1 *)((long)puVar12 + 0x35),
                                           CONCAT14(*(undefined1 *)((long)puVar12 + 0x31),
                                                    CONCAT13(*(undefined1 *)((long)puVar12 + 0x2d),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar12 + 0x29),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar12 +
                                                                                0x25),*(undefined1 *
                                                                                       )((long)
                                                  puVar12 + 0x21))))))));
      param_7 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x3e),
                         CONCAT16(*(undefined1 *)((long)puVar12 + 0x3a),
                                  CONCAT15(*(undefined1 *)((long)puVar12 + 0x36),
                                           CONCAT14(*(undefined1 *)((long)puVar12 + 0x32),
                                                    CONCAT13(*(undefined1 *)((long)puVar12 + 0x2e),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar12 + 0x2a),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar12 +
                                                                                0x26),*(undefined1 *
                                                                                       )((long)
                                                  puVar12 + 0x22))))))));
      uVar32 = *(undefined1 *)((long)puVar12 + 0x3f);
      auVar37 = NEON_urshr(auVar33,8,2);
      auVar38 = NEON_urshr(auVar34,8,2);
      auVar41 = NEON_urshr(auVar35,8,2);
      auVar42 = NEON_urshr(auVar36,8,2);
      uVar57 = NEON_raddhn(in_d28,auVar37,auVar33,2);
      uVar60 = NEON_raddhn(in_d29,auVar38,auVar34,2);
      uVar61 = NEON_raddhn(in_d30,auVar41,auVar35,2);
      uVar65 = NEON_raddhn(in_d31,auVar42,auVar36,2);
      in_d28 = NEON_uqadd(param_1,uVar57,1);
      in_d29 = NEON_uqadd(param_2,uVar60,1);
      in_d30 = NEON_uqadd(param_3,uVar61,1);
      in_d31 = NEON_uqadd(CONCAT17(bVar24,CONCAT16(bVar23,CONCAT15(bVar22,CONCAT14(bVar21,CONCAT13(
                                                  bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17)))))
                                                  )),uVar65,1);
      bVar17 = *(byte *)((long)puVar11 + 0x23);
      bVar18 = *(byte *)((long)puVar11 + 0x27);
      bVar19 = *(byte *)((long)puVar11 + 0x2b);
      bVar20 = *(byte *)((long)puVar11 + 0x2f);
      bVar21 = *(byte *)((long)puVar11 + 0x33);
      bVar22 = *(byte *)((long)puVar11 + 0x37);
      bVar23 = *(byte *)((long)puVar11 + 0x3b);
      param_1 = CONCAT17(*(undefined1 *)((long)puVar11 + 0x3c),
                         CONCAT16(*(undefined1 *)(puVar11 + 7),
                                  CONCAT15(*(undefined1 *)((long)puVar11 + 0x34),
                                           CONCAT14(*(undefined1 *)(puVar11 + 6),
                                                    CONCAT13(*(undefined1 *)((long)puVar11 + 0x2c),
                                                             CONCAT12(*(undefined1 *)(puVar11 + 5),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar11 +
                                                                                0x24),*(undefined1 *
                                                                                       )param_11))))
                                          )));
      param_2 = CONCAT17(*(undefined1 *)((long)puVar11 + 0x3d),
                         CONCAT16(*(undefined1 *)((long)puVar11 + 0x39),
                                  CONCAT15(*(undefined1 *)((long)puVar11 + 0x35),
                                           CONCAT14(*(undefined1 *)((long)puVar11 + 0x31),
                                                    CONCAT13(*(undefined1 *)((long)puVar11 + 0x2d),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar11 + 0x29),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar11 +
                                                                                0x25),*(undefined1 *
                                                                                       )((long)
                                                  puVar11 + 0x21))))))));
      param_3 = CONCAT17(*(undefined1 *)((long)puVar11 + 0x3e),
                         CONCAT16(*(undefined1 *)((long)puVar11 + 0x3a),
                                  CONCAT15(*(undefined1 *)((long)puVar11 + 0x36),
                                           CONCAT14(*(undefined1 *)((long)puVar11 + 0x32),
                                                    CONCAT13(*(undefined1 *)((long)puVar11 + 0x2e),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar11 + 0x2a),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar11 +
                                                                                0x26),*(undefined1 *
                                                                                       )((long)
                                                  puVar11 + 0x22))))))));
      bVar24 = *(byte *)((long)puVar11 + 0x3f);
      bVar43 = ~bVar17;
      bVar44 = ~bVar18;
      bVar45 = ~bVar19;
      bVar47 = ~bVar20;
      bVar49 = ~bVar21;
      bVar51 = ~bVar22;
      bVar53 = ~bVar23;
      bVar55 = ~bVar24;
      *(char *)param_10 = (char)in_d28;
      *(char *)((long)param_10 + 1) = (char)in_d29;
      *(char *)((long)param_10 + 2) = (char)in_d30;
      *(char *)((long)param_10 + 3) = (char)in_d31;
      *(char *)((long)param_10 + 4) = (char)((ulong)in_d28 >> 8);
      *(char *)((long)param_10 + 5) = (char)((ulong)in_d29 >> 8);
      *(char *)((long)param_10 + 6) = (char)((ulong)in_d30 >> 8);
      *(char *)((long)param_10 + 7) = (char)((ulong)in_d31 >> 8);
      *(char *)(param_10 + 1) = (char)((ulong)in_d28 >> 0x10);
      *(char *)((long)param_10 + 9) = (char)((ulong)in_d29 >> 0x10);
      *(char *)((long)param_10 + 10) = (char)((ulong)in_d30 >> 0x10);
      *(char *)((long)param_10 + 0xb) = (char)((ulong)in_d31 >> 0x10);
      *(char *)((long)param_10 + 0xc) = (char)((ulong)in_d28 >> 0x18);
      *(char *)((long)param_10 + 0xd) = (char)((ulong)in_d29 >> 0x18);
      *(char *)((long)param_10 + 0xe) = (char)((ulong)in_d30 >> 0x18);
      *(char *)((long)param_10 + 0xf) = (char)((ulong)in_d31 >> 0x18);
      *(char *)(param_10 + 2) = (char)((ulong)in_d28 >> 0x20);
      *(char *)((long)param_10 + 0x11) = (char)((ulong)in_d29 >> 0x20);
      *(char *)((long)param_10 + 0x12) = (char)((ulong)in_d30 >> 0x20);
      *(char *)((long)param_10 + 0x13) = (char)((ulong)in_d31 >> 0x20);
      *(char *)((long)param_10 + 0x14) = (char)((ulong)in_d28 >> 0x28);
      *(char *)((long)param_10 + 0x15) = (char)((ulong)in_d29 >> 0x28);
      *(char *)((long)param_10 + 0x16) = (char)((ulong)in_d30 >> 0x28);
      *(char *)((long)param_10 + 0x17) = (char)((ulong)in_d31 >> 0x28);
      *(char *)(param_10 + 3) = (char)((ulong)in_d28 >> 0x30);
      *(char *)((long)param_10 + 0x19) = (char)((ulong)in_d29 >> 0x30);
      *(char *)((long)param_10 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
      *(char *)((long)param_10 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
      *(char *)((long)param_10 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
      *(char *)((long)param_10 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
      *(char *)((long)param_10 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
      *(char *)((long)param_10 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
      param_10 = param_10 + 4;
      auVar33 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                  )),param_5,1);
      auVar34 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                  )),param_6,1);
      auVar35 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                  )),param_7,1);
      auVar36 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)))))
                                                  )),
                           CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(
                                                  uVar28,CONCAT12(uVar27,CONCAT11(uVar26,uVar25)))))
                                                  )),1);
      uVar8 = uVar62 - 8;
      puVar12 = puVar9;
      puVar11 = param_11;
      uVar10 = uVar62;
    }
    auVar37 = NEON_urshr(auVar33,8,2);
    auVar38 = NEON_urshr(auVar34,8,2);
    auVar41 = NEON_urshr(auVar35,8,2);
    auVar42 = NEON_urshr(auVar36,8,2);
    uVar57 = NEON_raddhn(in_d28,auVar37,auVar33,2);
    uVar60 = NEON_raddhn(in_d29,auVar38,auVar34,2);
    uVar61 = NEON_raddhn(in_d30,auVar41,auVar35,2);
    uVar65 = NEON_raddhn(in_d31,auVar42,auVar36,2);
    in_d28 = NEON_uqadd(param_1,uVar57,1);
    in_d29 = NEON_uqadd(param_2,uVar60,1);
    in_d30 = NEON_uqadd(param_3,uVar61,1);
    in_d31 = NEON_uqadd(CONCAT17(bVar24,CONCAT16(bVar23,CONCAT15(bVar22,CONCAT14(bVar21,CONCAT13(
                                                  bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17)))))
                                                )),uVar65,1);
    *(char *)param_10 = (char)in_d28;
    *(char *)((long)param_10 + 1) = (char)in_d29;
    *(char *)((long)param_10 + 2) = (char)in_d30;
    *(char *)((long)param_10 + 3) = (char)in_d31;
    *(char *)((long)param_10 + 4) = (char)((ulong)in_d28 >> 8);
    *(char *)((long)param_10 + 5) = (char)((ulong)in_d29 >> 8);
    *(char *)((long)param_10 + 6) = (char)((ulong)in_d30 >> 8);
    *(char *)((long)param_10 + 7) = (char)((ulong)in_d31 >> 8);
    *(char *)(param_10 + 1) = (char)((ulong)in_d28 >> 0x10);
    *(char *)((long)param_10 + 9) = (char)((ulong)in_d29 >> 0x10);
    *(char *)((long)param_10 + 10) = (char)((ulong)in_d30 >> 0x10);
    *(char *)((long)param_10 + 0xb) = (char)((ulong)in_d31 >> 0x10);
    *(char *)((long)param_10 + 0xc) = (char)((ulong)in_d28 >> 0x18);
    *(char *)((long)param_10 + 0xd) = (char)((ulong)in_d29 >> 0x18);
    *(char *)((long)param_10 + 0xe) = (char)((ulong)in_d30 >> 0x18);
    *(char *)((long)param_10 + 0xf) = (char)((ulong)in_d31 >> 0x18);
    *(char *)(param_10 + 2) = (char)((ulong)in_d28 >> 0x20);
    *(char *)((long)param_10 + 0x11) = (char)((ulong)in_d29 >> 0x20);
    *(char *)((long)param_10 + 0x12) = (char)((ulong)in_d30 >> 0x20);
    *(char *)((long)param_10 + 0x13) = (char)((ulong)in_d31 >> 0x20);
    *(char *)((long)param_10 + 0x14) = (char)((ulong)in_d28 >> 0x28);
    *(char *)((long)param_10 + 0x15) = (char)((ulong)in_d29 >> 0x28);
    *(char *)((long)param_10 + 0x16) = (char)((ulong)in_d30 >> 0x28);
    *(char *)((long)param_10 + 0x17) = (char)((ulong)in_d31 >> 0x28);
    *(char *)(param_10 + 3) = (char)((ulong)in_d28 >> 0x30);
    *(char *)((long)param_10 + 0x19) = (char)((ulong)in_d29 >> 0x30);
    *(char *)((long)param_10 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
    *(char *)((long)param_10 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
    *(char *)((long)param_10 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
    *(char *)((long)param_10 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
    *(char *)((long)param_10 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
    *(char *)((long)param_10 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
    param_10 = param_10 + 4;
  }
  if ((uVar62 & 7) != 0) {
    if ((uVar62 & 4) != 0) {
      param_3 = *param_11;
      uVar39 = *(undefined4 *)(param_11 + 1);
      bVar17 = (byte)uVar39;
      bVar18 = (byte)((uint)uVar39 >> 8);
      bVar19 = (byte)((uint)uVar39 >> 0x10);
      bVar20 = (byte)((uint)uVar39 >> 0x18);
      uVar39 = *(undefined4 *)((long)param_11 + 0xc);
      bVar21 = (byte)uVar39;
      bVar22 = (byte)((uint)uVar39 >> 8);
      bVar23 = (byte)((uint)uVar39 >> 0x10);
      bVar24 = (byte)((uint)uVar39 >> 0x18);
      param_11 = param_11 + 2;
      param_7 = *puVar9;
      uVar39 = *(undefined4 *)(puVar9 + 1);
      uVar25 = (undefined1)uVar39;
      uVar26 = (undefined1)((uint)uVar39 >> 8);
      uVar27 = (undefined1)((uint)uVar39 >> 0x10);
      uVar28 = (undefined1)((uint)uVar39 >> 0x18);
      uVar39 = *(undefined4 *)((long)puVar9 + 0xc);
      uVar29 = (undefined1)uVar39;
      uVar30 = (undefined1)((uint)uVar39 >> 8);
      uVar31 = (undefined1)((uint)uVar39 >> 0x10);
      uVar32 = (undefined1)((uint)uVar39 >> 0x18);
      puVar9 = puVar9 + 2;
    }
    if ((uVar62 & 2) != 0) {
      param_2 = *param_11;
      param_11 = param_11 + 1;
      param_6 = *puVar9;
      puVar9 = puVar9 + 1;
    }
    if ((uVar62 & 1) != 0) {
      param_1 = CONCAT44(*(undefined4 *)param_11,(int)param_1);
      param_5 = CONCAT44(*(undefined4 *)puVar9,(int)param_5);
    }
    bVar43 = (byte)((ulong)param_1 >> 0x18);
    bVar45 = (byte)((ulong)param_1 >> 0x38);
    bVar49 = (byte)((ulong)param_2 >> 0x18);
    bVar51 = (byte)((ulong)param_2 >> 0x38);
    bVar44 = (byte)((ulong)param_3 >> 0x18);
    bVar47 = (byte)((ulong)param_3 >> 0x38);
    bVar53 = ~bVar43;
    bVar55 = ~bVar45;
    bVar46 = ~bVar49;
    bVar48 = ~bVar51;
    bVar50 = ~bVar44;
    bVar52 = ~bVar47;
    bVar54 = ~bVar20;
    bVar56 = ~bVar24;
    auVar33 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                 )),
                         CONCAT17(uVar29,CONCAT16(uVar25,CONCAT15((char)((ulong)param_7 >> 0x20),
                                                                  CONCAT14((char)param_7,
                                                                           CONCAT13((char)((ulong)
                                                  param_6 >> 0x20),
                                                  CONCAT12((char)param_6,
                                                           CONCAT11((char)((ulong)param_5 >> 0x20),
                                                                    (char)param_5))))))),1);
    auVar34 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                 )),
                         CONCAT17(uVar30,CONCAT16(uVar26,CONCAT15((char)((ulong)param_7 >> 0x28),
                                                                  CONCAT14((char)((ulong)param_7 >>
                                                                                 8),CONCAT13((char)(
                                                  (ulong)param_6 >> 0x28),
                                                  CONCAT12((char)((ulong)param_6 >> 8),
                                                           CONCAT11((char)((ulong)param_5 >> 0x28),
                                                                    (char)((ulong)param_5 >> 8))))))
                                                 )),1);
    auVar35 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                 )),
                         CONCAT17(uVar31,CONCAT16(uVar27,CONCAT15((char)((ulong)param_7 >> 0x30),
                                                                  CONCAT14((char)((ulong)param_7 >>
                                                                                 0x10),
                                                                           CONCAT13((char)((ulong)
                                                  param_6 >> 0x30),
                                                  CONCAT12((char)((ulong)param_6 >> 0x10),
                                                           CONCAT11((char)((ulong)param_5 >> 0x30),
                                                                    (char)((ulong)param_5 >> 0x10)))
                                                  ))))),1);
    auVar36 = NEON_umull(CONCAT17(bVar56,CONCAT16(bVar54,CONCAT15(bVar52,CONCAT14(bVar50,CONCAT13(
                                                  bVar48,CONCAT12(bVar46,CONCAT11(bVar55,bVar53)))))
                                                 )),
                         CONCAT17(uVar32,CONCAT16(uVar28,CONCAT15((char)((ulong)param_7 >> 0x38),
                                                                  CONCAT14((char)((ulong)param_7 >>
                                                                                 0x18),
                                                                           CONCAT13((char)((ulong)
                                                  param_6 >> 0x38),
                                                  CONCAT12((char)((ulong)param_6 >> 0x18),
                                                           CONCAT11((char)((ulong)param_5 >> 0x38),
                                                                    (char)((ulong)param_5 >> 0x18)))
                                                  ))))),1);
    auVar37 = NEON_urshr(auVar33,8,2);
    auVar38 = NEON_urshr(auVar34,8,2);
    auVar41 = NEON_urshr(auVar35,8,2);
    auVar42 = NEON_urshr(auVar36,8,2);
    uVar57 = NEON_raddhn(in_d28,auVar37,auVar33,2);
    uVar60 = NEON_raddhn(in_d29,auVar38,auVar34,2);
    uVar61 = NEON_raddhn(in_d30,auVar41,auVar35,2);
    uVar65 = NEON_raddhn(in_d31,auVar42,auVar36,2);
    uVar57 = NEON_uqadd(CONCAT17(bVar21,CONCAT16(bVar17,CONCAT15((char)((ulong)param_3 >> 0x20),
                                                                 CONCAT14((char)param_3,
                                                                          CONCAT13((char)((ulong)
                                                  param_2 >> 0x20),
                                                  CONCAT12((char)param_2,
                                                           CONCAT11((char)((ulong)param_1 >> 0x20),
                                                                    (char)param_1))))))),uVar57,1);
    uVar60 = NEON_uqadd(CONCAT17(bVar22,CONCAT16(bVar18,CONCAT15((char)((ulong)param_3 >> 0x28),
                                                                 CONCAT14((char)((ulong)param_3 >> 8
                                                                                ),CONCAT13((char)((
                                                  ulong)param_2 >> 0x28),
                                                  CONCAT12((char)((ulong)param_2 >> 8),
                                                           CONCAT11((char)((ulong)param_1 >> 0x28),
                                                                    (char)((ulong)param_1 >> 8))))))
                                                )),uVar60,1);
    uVar61 = NEON_uqadd(CONCAT17(bVar23,CONCAT16(bVar19,CONCAT15((char)((ulong)param_3 >> 0x30),
                                                                 CONCAT14((char)((ulong)param_3 >>
                                                                                0x10),
                                                                          CONCAT13((char)((ulong)
                                                  param_2 >> 0x30),
                                                  CONCAT12((char)((ulong)param_2 >> 0x10),
                                                           CONCAT11((char)((ulong)param_1 >> 0x30),
                                                                    (char)((ulong)param_1 >> 0x10)))
                                                  ))))),uVar61,1);
    uVar65 = NEON_uqadd(CONCAT17(bVar24,CONCAT16(bVar20,CONCAT15(bVar47,CONCAT14(bVar44,CONCAT13(
                                                  bVar51,CONCAT12(bVar49,CONCAT11(bVar45,bVar43)))))
                                                )),uVar65,1);
    uVar25 = (undefined1)((ulong)uVar61 >> 8);
    uVar26 = (undefined1)((ulong)uVar61 >> 0x18);
    uVar27 = (undefined1)((ulong)uVar61 >> 0x28);
    uVar28 = (undefined1)((ulong)uVar61 >> 0x38);
    uVar40 = CONCAT16(uVar27,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x28),
                                             ((uint)((ulong)uVar61 >> 0x20) & 0xff) << 0x10));
    uVar39 = CONCAT13((char)((ulong)uVar65 >> 0x20),
                      (int3)CONCAT52((int5)((uint7)uVar40 >> 0x10),
                                     CONCAT11((char)((ulong)uVar60 >> 0x20),
                                              (char)((ulong)uVar57 >> 0x20))));
    uVar64 = CONCAT16(uVar28,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x38),
                                             (uint)(byte)((ulong)uVar61 >> 0x30) << 0x10));
    uVar63 = CONCAT13((char)((ulong)uVar65 >> 0x30),
                      (int3)CONCAT52((int5)((uint7)uVar64 >> 0x10),
                                     CONCAT11((char)((ulong)uVar60 >> 0x30),
                                              (char)((ulong)uVar57 >> 0x30))));
    uVar59 = CONCAT16(uVar26,(uint6)CONCAT14((char)((ulong)uVar57 >> 0x18),
                                             (uint)(byte)((ulong)uVar61 >> 0x10) << 0x10));
    uVar58 = CONCAT13((char)((ulong)uVar65 >> 0x10),
                      (int3)CONCAT52((int5)((uint7)uVar59 >> 0x10),
                                     CONCAT11((char)((ulong)uVar60 >> 0x10),
                                              (char)((ulong)uVar57 >> 0x10))));
    if ((uVar62 & 4) != 0) {
      *(undefined4 *)param_10 = uVar39;
      *(int *)((long)param_10 + 4) =
           (int)(CONCAT17((char)((ulong)uVar65 >> 0x28),
                          CONCAT16(uVar27,CONCAT15((char)((ulong)uVar60 >> 0x28),
                                                   (int5)CONCAT34((int3)((uint7)uVar40 >> 0x20),
                                                                  uVar39)))) >> 0x20);
      *(undefined4 *)(param_10 + 1) = uVar63;
      *(int *)((long)param_10 + 0xc) =
           (int)(CONCAT17((char)((ulong)uVar65 >> 0x38),
                          CONCAT16(uVar28,CONCAT15((char)((ulong)uVar60 >> 0x38),
                                                   (int5)CONCAT34((int3)((uint7)uVar64 >> 0x20),
                                                                  uVar63)))) >> 0x20);
      param_10 = param_10 + 2;
    }
    if ((uVar62 & 2) != 0) {
      *(undefined4 *)param_10 = uVar58;
      *(int *)((long)param_10 + 4) =
           (int)(CONCAT17((char)((ulong)uVar65 >> 0x18),
                          CONCAT16(uVar26,CONCAT15((char)((ulong)uVar60 >> 0x18),
                                                   (int5)CONCAT34((int3)((uint7)uVar59 >> 0x20),
                                                                  uVar58)))) >> 0x20);
      param_10 = param_10 + 1;
    }
    if ((uVar62 & 1) != 0) {
      *(int *)param_10 =
           (int)(CONCAT17((char)((ulong)uVar65 >> 8),
                          CONCAT16(uVar25,CONCAT15((char)((ulong)uVar60 >> 8),
                                                   (uint5)(uint3)(CONCAT16(uVar25,(uint6)(byte)((
                                                  ulong)uVar57 >> 8) << 0x20) >> 0x20) << 0x20))) >>
                0x20);
    }
  }
  return;
}


// ===== 001a064c  FUN_001a064c =====

void FUN_001a064c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4 [16],
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8 [16],
                 ulong param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined5 uVar1;
  undefined5 uVar2;
  undefined5 uVar3;
  undefined5 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  undefined8 in_d28;
  undefined8 uVar56;
  undefined4 uVar57;
  undefined7 uVar58;
  undefined8 in_d29;
  undefined8 uVar59;
  undefined8 in_d30;
  undefined8 uVar60;
  ulong uVar61;
  undefined4 uVar62;
  undefined7 uVar63;
  undefined8 in_d31;
  undefined8 uVar64;
  undefined7 uVar39;
  
  uVar31 = param_8[7];
  uVar30 = param_8[6];
  uVar29 = param_8[5];
  uVar28 = param_8[4];
  uVar27 = param_8[3];
  uVar26 = param_8[2];
  uVar25 = param_8[1];
  uVar24 = param_8[0];
  bVar23 = param_4[7];
  bVar22 = param_4[6];
  bVar21 = param_4[5];
  bVar20 = param_4[4];
  bVar19 = param_4[3];
  bVar18 = param_4[2];
  bVar17 = param_4[1];
  bVar16 = param_4[0];
  if ((long)param_9 < 8) {
    if ((param_9 & 7) != 0) {
      puVar9 = param_10;
      if ((param_9 & 4) != 0) {
        param_3 = *param_11;
        uVar38 = *(undefined4 *)(param_11 + 1);
        bVar16 = (byte)uVar38;
        bVar17 = (byte)((uint)uVar38 >> 8);
        bVar18 = (byte)((uint)uVar38 >> 0x10);
        bVar19 = (byte)((uint)uVar38 >> 0x18);
        uVar38 = *(undefined4 *)((long)param_11 + 0xc);
        bVar20 = (byte)uVar38;
        bVar21 = (byte)((uint)uVar38 >> 8);
        bVar22 = (byte)((uint)uVar38 >> 0x10);
        bVar23 = (byte)((uint)uVar38 >> 0x18);
        param_11 = param_11 + 2;
        param_7 = *param_10;
        uVar38 = *(undefined4 *)(param_10 + 1);
        uVar24 = (undefined1)uVar38;
        uVar25 = (undefined1)((uint)uVar38 >> 8);
        uVar26 = (undefined1)((uint)uVar38 >> 0x10);
        uVar27 = (undefined1)((uint)uVar38 >> 0x18);
        uVar38 = *(undefined4 *)((long)param_10 + 0xc);
        uVar28 = (undefined1)uVar38;
        uVar29 = (undefined1)((uint)uVar38 >> 8);
        uVar30 = (undefined1)((uint)uVar38 >> 0x10);
        uVar31 = (undefined1)((uint)uVar38 >> 0x18);
        puVar9 = param_10 + 2;
      }
      if ((param_9 & 2) != 0) {
        param_2 = *param_11;
        param_11 = param_11 + 1;
        param_6 = *puVar9;
        puVar9 = puVar9 + 1;
      }
      if ((param_9 & 1) != 0) {
        param_1 = CONCAT44(*(undefined4 *)param_11,(int)param_1);
        param_5 = CONCAT44(*(undefined4 *)puVar9,(int)param_5);
      }
      bVar42 = (byte)((ulong)param_1 >> 0x18);
      bVar44 = (byte)((ulong)param_1 >> 0x38);
      bVar48 = (byte)((ulong)param_2 >> 0x18);
      bVar50 = (byte)((ulong)param_2 >> 0x38);
      bVar43 = (byte)((ulong)param_3 >> 0x18);
      bVar46 = (byte)((ulong)param_3 >> 0x38);
      bVar52 = ~bVar42;
      bVar54 = ~bVar44;
      bVar45 = ~bVar48;
      bVar47 = ~bVar50;
      bVar49 = ~bVar43;
      bVar51 = ~bVar46;
      bVar53 = ~bVar19;
      bVar55 = ~bVar23;
      auVar32 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                  )),
                           CONCAT17(uVar28,CONCAT16(uVar24,CONCAT15((char)((ulong)param_7 >> 0x20),
                                                                    CONCAT14((char)param_7,
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x20),
                                                  CONCAT12((char)param_6,
                                                           CONCAT11((char)((ulong)param_5 >> 0x20),
                                                                    (char)param_5))))))),1);
      auVar33 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                  )),
                           CONCAT17(uVar29,CONCAT16(uVar25,CONCAT15((char)((ulong)param_7 >> 0x28),
                                                                    CONCAT14((char)((ulong)param_7
                                                                                   >> 8),
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x28),
                                                  CONCAT12((char)((ulong)param_6 >> 8),
                                                           CONCAT11((char)((ulong)param_5 >> 0x28),
                                                                    (char)((ulong)param_5 >> 8))))))
                                                  )),1);
      auVar34 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                  )),
                           CONCAT17(uVar30,CONCAT16(uVar26,CONCAT15((char)((ulong)param_7 >> 0x30),
                                                                    CONCAT14((char)((ulong)param_7
                                                                                   >> 0x10),
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x30),
                                                  CONCAT12((char)((ulong)param_6 >> 0x10),
                                                           CONCAT11((char)((ulong)param_5 >> 0x30),
                                                                    (char)((ulong)param_5 >> 0x10)))
                                                  ))))),1);
      auVar35 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                  )),
                           CONCAT17(uVar31,CONCAT16(uVar27,CONCAT15((char)((ulong)param_7 >> 0x38),
                                                                    CONCAT14((char)((ulong)param_7
                                                                                   >> 0x18),
                                                                             CONCAT13((char)((ulong)
                                                  param_6 >> 0x38),
                                                  CONCAT12((char)((ulong)param_6 >> 0x18),
                                                           CONCAT11((char)((ulong)param_5 >> 0x38),
                                                                    (char)((ulong)param_5 >> 0x18)))
                                                  ))))),1);
      auVar36 = NEON_urshr(auVar32,8,2);
      auVar37 = NEON_urshr(auVar33,8,2);
      auVar40 = NEON_urshr(auVar34,8,2);
      auVar41 = NEON_urshr(auVar35,8,2);
      uVar56 = NEON_raddhn(in_d28,auVar36,auVar32,2);
      uVar59 = NEON_raddhn(in_d29,auVar37,auVar33,2);
      uVar60 = NEON_raddhn(in_d30,auVar40,auVar34,2);
      uVar64 = NEON_raddhn(in_d31,auVar41,auVar35,2);
      uVar56 = NEON_uqadd(CONCAT17(bVar20,CONCAT16(bVar16,CONCAT15((char)((ulong)param_3 >> 0x20),
                                                                   CONCAT14((char)param_3,
                                                                            CONCAT13((char)((ulong)
                                                  param_2 >> 0x20),
                                                  CONCAT12((char)param_2,
                                                           CONCAT11((char)((ulong)param_1 >> 0x20),
                                                                    (char)param_1))))))),uVar56,1);
      uVar59 = NEON_uqadd(CONCAT17(bVar21,CONCAT16(bVar17,CONCAT15((char)((ulong)param_3 >> 0x28),
                                                                   CONCAT14((char)((ulong)param_3 >>
                                                                                  8),CONCAT13((char)
                                                  ((ulong)param_2 >> 0x28),
                                                  CONCAT12((char)((ulong)param_2 >> 8),
                                                           CONCAT11((char)((ulong)param_1 >> 0x28),
                                                                    (char)((ulong)param_1 >> 8))))))
                                                  )),uVar59,1);
      uVar60 = NEON_uqadd(CONCAT17(bVar22,CONCAT16(bVar18,CONCAT15((char)((ulong)param_3 >> 0x30),
                                                                   CONCAT14((char)((ulong)param_3 >>
                                                                                  0x10),
                                                                            CONCAT13((char)((ulong)
                                                  param_2 >> 0x30),
                                                  CONCAT12((char)((ulong)param_2 >> 0x10),
                                                           CONCAT11((char)((ulong)param_1 >> 0x30),
                                                                    (char)((ulong)param_1 >> 0x10)))
                                                  ))))),uVar60,1);
      uVar64 = NEON_uqadd(CONCAT17(bVar23,CONCAT16(bVar19,CONCAT15(bVar46,CONCAT14(bVar43,CONCAT13(
                                                  bVar50,CONCAT12(bVar48,CONCAT11(bVar44,bVar42)))))
                                                  )),uVar64,1);
      uVar24 = (undefined1)((ulong)uVar60 >> 8);
      uVar25 = (undefined1)((ulong)uVar60 >> 0x18);
      uVar26 = (undefined1)((ulong)uVar60 >> 0x28);
      uVar27 = (undefined1)((ulong)uVar60 >> 0x38);
      uVar39 = CONCAT16(uVar26,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x28),
                                               ((uint)((ulong)uVar60 >> 0x20) & 0xff) << 0x10));
      uVar38 = CONCAT13((char)((ulong)uVar64 >> 0x20),
                        (int3)CONCAT52((int5)((uint7)uVar39 >> 0x10),
                                       CONCAT11((char)((ulong)uVar59 >> 0x20),
                                                (char)((ulong)uVar56 >> 0x20))));
      uVar63 = CONCAT16(uVar27,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x38),
                                               (uint)(byte)((ulong)uVar60 >> 0x30) << 0x10));
      uVar62 = CONCAT13((char)((ulong)uVar64 >> 0x30),
                        (int3)CONCAT52((int5)((uint7)uVar63 >> 0x10),
                                       CONCAT11((char)((ulong)uVar59 >> 0x30),
                                                (char)((ulong)uVar56 >> 0x30))));
      uVar58 = CONCAT16(uVar25,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x18),
                                               (uint)(byte)((ulong)uVar60 >> 0x10) << 0x10));
      uVar57 = CONCAT13((char)((ulong)uVar64 >> 0x10),
                        (int3)CONCAT52((int5)((uint7)uVar58 >> 0x10),
                                       CONCAT11((char)((ulong)uVar59 >> 0x10),
                                                (char)((ulong)uVar56 >> 0x10))));
      if ((param_9 & 4) != 0) {
        *(undefined4 *)param_10 = uVar38;
        *(int *)((long)param_10 + 4) =
             (int)(CONCAT17((char)((ulong)uVar64 >> 0x28),
                            CONCAT16(uVar26,CONCAT15((char)((ulong)uVar59 >> 0x28),
                                                     (int5)CONCAT34((int3)((uint7)uVar39 >> 0x20),
                                                                    uVar38)))) >> 0x20);
        *(undefined4 *)(param_10 + 1) = uVar62;
        *(int *)((long)param_10 + 0xc) =
             (int)(CONCAT17((char)((ulong)uVar64 >> 0x38),
                            CONCAT16(uVar27,CONCAT15((char)((ulong)uVar59 >> 0x38),
                                                     (int5)CONCAT34((int3)((uint7)uVar63 >> 0x20),
                                                                    uVar62)))) >> 0x20);
        param_10 = param_10 + 2;
      }
      if ((param_9 & 2) != 0) {
        *(undefined4 *)param_10 = uVar57;
        *(int *)((long)param_10 + 4) =
             (int)(CONCAT17((char)((ulong)uVar64 >> 0x18),
                            CONCAT16(uVar25,CONCAT15((char)((ulong)uVar59 >> 0x18),
                                                     (int5)CONCAT34((int3)((uint7)uVar58 >> 0x20),
                                                                    uVar57)))) >> 0x20);
        param_10 = param_10 + 1;
      }
      if ((param_9 & 1) != 0) {
        *(int *)param_10 =
             (int)(CONCAT17((char)((ulong)uVar64 >> 8),
                            CONCAT16(uVar24,CONCAT15((char)((ulong)uVar59 >> 8),
                                                     (uint5)(uint3)(CONCAT16(uVar24,(uint6)(byte)((
                                                  ulong)uVar56 >> 8) << 0x20) >> 0x20) << 0x20))) >>
                  0x20);
      }
    }
    return;
  }
  puVar9 = param_10;
  if (((ulong)param_10 & 0xf) != 0) {
    if (((ulong)param_10 & 4) != 0) {
      param_1 = CONCAT44(*(undefined4 *)param_11,(int)param_1);
      param_11 = (undefined8 *)((long)param_11 + 4);
      param_5 = CONCAT44(*(undefined4 *)param_10,(int)param_5);
      puVar9 = (undefined8 *)((long)param_10 + 4);
      param_9 = param_9 - 1;
    }
    if (((ulong)puVar9 & 8) != 0) {
      param_2 = *param_11;
      param_11 = param_11 + 1;
      param_6 = *puVar9;
      puVar9 = puVar9 + 1;
      param_9 = param_9 - 2;
    }
    uVar56 = *param_11;
    uVar38 = *(undefined4 *)((long)param_11 + 0xc);
    uVar2 = *(undefined5 *)(param_11 + 1);
    uVar1 = *(undefined5 *)(param_11 + 1);
    bVar23 = (byte)((uint)uVar38 >> 0x18);
    param_11 = param_11 + 2;
    uVar59 = *puVar9;
    uVar57 = *(undefined4 *)((long)puVar9 + 0xc);
    uVar4 = *(undefined5 *)(puVar9 + 1);
    uVar3 = *(undefined5 *)(puVar9 + 1);
    uVar31 = (undefined1)((uint)uVar57 >> 0x18);
    puVar9 = puVar9 + 2;
    param_9 = param_9 - 4;
    uVar61 = (ulong)param_1 >> 0x10;
    uVar5 = (ulong)param_1 >> 0x30;
    uVar24 = (undefined1)param_2;
    uVar8 = (ulong)param_2 >> 0x10;
    uVar6 = (ulong)param_2 >> 0x20;
    uVar7 = (ulong)param_2 >> 0x30;
    bVar16 = (byte)((ulong)param_1 >> 0x18);
    bVar17 = (byte)((ulong)param_1 >> 0x38);
    bVar18 = (byte)((ulong)param_2 >> 0x18);
    bVar19 = (byte)((ulong)param_2 >> 0x38);
    bVar20 = (byte)((ulong)uVar56 >> 0x18);
    bVar21 = (byte)((ulong)uVar56 >> 0x38);
    bVar22 = (byte)((uint5)uVar2 >> 0x18);
    param_2 = CONCAT17((char)((uint)uVar38 >> 8),
                       CONCAT16((char)((uint5)uVar2 >> 8),
                                CONCAT15((char)((ulong)uVar56 >> 0x28),
                                         CONCAT14((char)((ulong)uVar56 >> 8),
                                                  CONCAT13((char)((ulong)param_2 >> 0x28),
                                                           CONCAT12((char)((ulong)param_2 >> 8),
                                                                    CONCAT11((char)((ulong)param_1
                                                                                   >> 0x28),
                                                                             (char)((ulong)param_1
                                                                                   >> 8))))))));
    param_1 = CONCAT17((char)((uint5)uVar1 >> 0x20),
                       CONCAT16((char)uVar1,
                                CONCAT15((char)((ulong)uVar56 >> 0x20),
                                         CONCAT14((char)uVar56,
                                                  CONCAT13((char)uVar6,
                                                           CONCAT12(uVar24,CONCAT11((char)((ulong)
                                                  param_1 >> 0x20),(char)param_1)))))));
    param_3 = CONCAT17((char)((uint)uVar38 >> 0x10),
                       CONCAT16((char)((uint5)uVar1 >> 0x10),
                                CONCAT15((char)((ulong)uVar56 >> 0x30),
                                         CONCAT14((char)((ulong)uVar56 >> 0x10),
                                                  CONCAT13((char)uVar7,
                                                           CONCAT12((char)uVar8,
                                                                    CONCAT11((char)uVar5,
                                                                             (char)uVar61)))))));
    uVar61 = (ulong)param_5 >> 0x10;
    uVar5 = (ulong)param_5 >> 0x30;
    uVar12 = (undefined1)param_6;
    uVar8 = (ulong)param_6 >> 0x10;
    uVar6 = (ulong)param_6 >> 0x20;
    uVar7 = (ulong)param_6 >> 0x30;
    uVar24 = (undefined1)((ulong)param_5 >> 0x18);
    uVar25 = (undefined1)((ulong)param_5 >> 0x38);
    uVar26 = (undefined1)((ulong)param_6 >> 0x18);
    uVar27 = (undefined1)((ulong)param_6 >> 0x38);
    uVar28 = (undefined1)((ulong)uVar59 >> 0x18);
    uVar29 = (undefined1)((ulong)uVar59 >> 0x38);
    uVar30 = (undefined1)((uint5)uVar4 >> 0x18);
    param_6 = CONCAT17((char)((uint)uVar57 >> 8),
                       CONCAT16((char)((uint5)uVar4 >> 8),
                                CONCAT15((char)((ulong)uVar59 >> 0x28),
                                         CONCAT14((char)((ulong)uVar59 >> 8),
                                                  CONCAT13((char)((ulong)param_6 >> 0x28),
                                                           CONCAT12((char)((ulong)param_6 >> 8),
                                                                    CONCAT11((char)((ulong)param_5
                                                                                   >> 0x28),
                                                                             (char)((ulong)param_5
                                                                                   >> 8))))))));
    param_5 = CONCAT17((char)((uint5)uVar3 >> 0x20),
                       CONCAT16((char)uVar3,
                                CONCAT15((char)((ulong)uVar59 >> 0x20),
                                         CONCAT14((char)uVar59,
                                                  CONCAT13((char)uVar6,
                                                           CONCAT12(uVar12,CONCAT11((char)((ulong)
                                                  param_5 >> 0x20),(char)param_5)))))));
    param_7 = CONCAT17((char)((uint)uVar57 >> 0x10),
                       CONCAT16((char)((uint5)uVar3 >> 0x10),
                                CONCAT15((char)((ulong)uVar59 >> 0x30),
                                         CONCAT14((char)((ulong)uVar59 >> 0x10),
                                                  CONCAT13((char)uVar7,
                                                           CONCAT12((char)uVar8,
                                                                    CONCAT11((char)uVar5,
                                                                             (char)uVar61)))))));
    bVar42 = ~bVar16;
    bVar43 = ~bVar17;
    bVar44 = ~bVar18;
    bVar46 = ~bVar19;
    bVar48 = ~bVar20;
    bVar50 = ~bVar21;
    bVar52 = ~bVar22;
    bVar54 = ~bVar23;
    auVar32 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),param_5,1);
    auVar33 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),param_6,1);
    auVar34 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),param_7,1);
    auVar35 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),
                         CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13(
                                                  uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)))))
                                                 )),1);
    auVar36 = NEON_urshr(auVar32,8,2);
    auVar37 = NEON_urshr(auVar33,8,2);
    auVar40 = NEON_urshr(auVar34,8,2);
    auVar41 = NEON_urshr(auVar35,8,2);
    uVar56 = NEON_raddhn(in_d28,auVar36,auVar32,2);
    uVar59 = NEON_raddhn(in_d29,auVar37,auVar33,2);
    uVar60 = NEON_raddhn(in_d30,auVar40,auVar34,2);
    uVar64 = NEON_raddhn(in_d31,auVar41,auVar35,2);
    uVar56 = NEON_uqadd(param_1,uVar56,1);
    uVar59 = NEON_uqadd(param_2,uVar59,1);
    uVar61 = NEON_uqadd(param_3,uVar60,1);
    uVar60 = NEON_uqadd(CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,CONCAT13(
                                                  bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)))))
                                                )),uVar64,1);
    uVar12 = (undefined1)(uVar61 >> 8);
    uVar13 = (undefined1)(uVar61 >> 0x18);
    uVar14 = (undefined1)(uVar61 >> 0x28);
    uVar15 = (undefined1)(uVar61 >> 0x38);
    uVar39 = CONCAT16(uVar14,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x28),
                                             ((uint)(uVar61 >> 0x20) & 0xff) << 0x10));
    uVar38 = CONCAT13((char)((ulong)uVar60 >> 0x20),
                      (int3)CONCAT52((int5)((uint7)uVar39 >> 0x10),
                                     CONCAT11((char)((ulong)uVar59 >> 0x20),
                                              (char)((ulong)uVar56 >> 0x20))));
    in_d30 = CONCAT17((char)((ulong)uVar60 >> 0x28),
                      CONCAT16(uVar14,CONCAT15((char)((ulong)uVar59 >> 0x28),
                                               (int5)CONCAT34((int3)((uint7)uVar39 >> 0x20),uVar38))
                              ));
    uVar39 = CONCAT16(uVar15,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x38),
                                             (uint)(byte)(uVar61 >> 0x30) << 0x10));
    uVar62 = CONCAT13((char)((ulong)uVar60 >> 0x30),
                      (int3)CONCAT52((int5)((uint7)uVar39 >> 0x10),
                                     CONCAT11((char)((ulong)uVar59 >> 0x30),
                                              (char)((ulong)uVar56 >> 0x30))));
    in_d31 = CONCAT17((char)((ulong)uVar60 >> 0x38),
                      CONCAT16(uVar15,CONCAT15((char)((ulong)uVar59 >> 0x38),
                                               (int5)CONCAT34((int3)((uint7)uVar39 >> 0x20),uVar62))
                              ));
    uVar39 = CONCAT16(uVar12,(uint6)CONCAT14((char)((ulong)uVar56 >> 8),
                                             (int)((uVar61 & 0xff) << 0x10)));
    in_d28 = CONCAT17((char)((ulong)uVar60 >> 8),
                      CONCAT16(uVar12,CONCAT15((char)((ulong)uVar59 >> 8),
                                               (int5)CONCAT34((int3)((uint7)uVar39 >> 0x20),
                                                              CONCAT13((char)uVar60,
                                                                       (int3)CONCAT52((int5)((uint7)
                                                  uVar39 >> 0x10),
                                                  CONCAT11((char)uVar59,(char)uVar56)))))));
    uVar39 = CONCAT16(uVar13,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x18),
                                             (uint)(byte)(uVar61 >> 0x10) << 0x10));
    uVar57 = CONCAT13((char)((ulong)uVar60 >> 0x10),
                      (int3)CONCAT52((int5)((uint7)uVar39 >> 0x10),
                                     CONCAT11((char)((ulong)uVar59 >> 0x10),
                                              (char)((ulong)uVar56 >> 0x10))));
    in_d29 = CONCAT17((char)((ulong)uVar60 >> 0x18),
                      CONCAT16(uVar13,CONCAT15((char)((ulong)uVar59 >> 0x18),
                                               (int5)CONCAT34((int3)((uint7)uVar39 >> 0x20),uVar57))
                              ));
    if (((ulong)param_10 & 4) != 0) {
      *(int *)param_10 = (int)((ulong)in_d28 >> 0x20);
      param_10 = (undefined8 *)((long)param_10 + 4);
    }
    if (((ulong)param_10 & 8) != 0) {
      *(undefined4 *)param_10 = uVar57;
      *(int *)((long)param_10 + 4) = (int)((ulong)in_d29 >> 0x20);
      param_10 = param_10 + 1;
    }
    *(undefined4 *)param_10 = uVar38;
    *(int *)((long)param_10 + 4) = (int)((ulong)in_d30 >> 0x20);
    *(undefined4 *)(param_10 + 1) = uVar62;
    *(int *)((long)param_10 + 0xc) = (int)((ulong)in_d31 >> 0x20);
    param_10 = param_10 + 2;
  }
  uVar61 = param_9 - 8;
  if (7 < (long)param_9) {
    uVar24 = *(undefined1 *)((long)puVar9 + 3);
    uVar25 = *(undefined1 *)((long)puVar9 + 7);
    uVar26 = *(undefined1 *)((long)puVar9 + 0xb);
    uVar27 = *(undefined1 *)((long)puVar9 + 0xf);
    uVar28 = *(undefined1 *)((long)puVar9 + 0x13);
    uVar29 = *(undefined1 *)((long)puVar9 + 0x17);
    uVar30 = *(undefined1 *)((long)puVar9 + 0x1b);
    param_5 = CONCAT17(*(undefined1 *)((long)puVar9 + 0x1c),
                       CONCAT16(*(undefined1 *)(puVar9 + 3),
                                CONCAT15(*(undefined1 *)((long)puVar9 + 0x14),
                                         CONCAT14(*(undefined1 *)(puVar9 + 2),
                                                  CONCAT13(*(undefined1 *)((long)puVar9 + 0xc),
                                                           CONCAT12(*(undefined1 *)(puVar9 + 1),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)puVar9 + 4),
                                                                             *(undefined1 *)puVar9))
                                                          )))));
    param_6 = CONCAT17(*(undefined1 *)((long)puVar9 + 0x1d),
                       CONCAT16(*(undefined1 *)((long)puVar9 + 0x19),
                                CONCAT15(*(undefined1 *)((long)puVar9 + 0x15),
                                         CONCAT14(*(undefined1 *)((long)puVar9 + 0x11),
                                                  CONCAT13(*(undefined1 *)((long)puVar9 + 0xd),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)puVar9 + 9),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)puVar9 + 5),
                                                                             *(undefined1 *)
                                                                              ((long)puVar9 + 1)))))
                                        )));
    param_7 = CONCAT17(*(undefined1 *)((long)puVar9 + 0x1e),
                       CONCAT16(*(undefined1 *)((long)puVar9 + 0x1a),
                                CONCAT15(*(undefined1 *)((long)puVar9 + 0x16),
                                         CONCAT14(*(undefined1 *)((long)puVar9 + 0x12),
                                                  CONCAT13(*(undefined1 *)((long)puVar9 + 0xe),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)puVar9 + 10),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)puVar9 + 6),
                                                                             *(undefined1 *)
                                                                              ((long)puVar9 + 2)))))
                                        )));
    uVar31 = *(undefined1 *)((long)puVar9 + 0x1f);
    bVar16 = *(byte *)((long)param_11 + 3);
    bVar17 = *(byte *)((long)param_11 + 7);
    bVar18 = *(byte *)((long)param_11 + 0xb);
    bVar19 = *(byte *)((long)param_11 + 0xf);
    bVar20 = *(byte *)((long)param_11 + 0x13);
    bVar21 = *(byte *)((long)param_11 + 0x17);
    bVar22 = *(byte *)((long)param_11 + 0x1b);
    param_1 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1c),
                       CONCAT16(*(undefined1 *)(param_11 + 3),
                                CONCAT15(*(undefined1 *)((long)param_11 + 0x14),
                                         CONCAT14(*(undefined1 *)(param_11 + 2),
                                                  CONCAT13(*(undefined1 *)((long)param_11 + 0xc),
                                                           CONCAT12(*(undefined1 *)(param_11 + 1),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)param_11 + 4),
                                                                             *(undefined1 *)param_11
                                                                            )))))));
    param_2 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1d),
                       CONCAT16(*(undefined1 *)((long)param_11 + 0x19),
                                CONCAT15(*(undefined1 *)((long)param_11 + 0x15),
                                         CONCAT14(*(undefined1 *)((long)param_11 + 0x11),
                                                  CONCAT13(*(undefined1 *)((long)param_11 + 0xd),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)param_11 + 9),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)param_11 + 5),
                                                                             *(undefined1 *)
                                                                              ((long)param_11 + 1)))
                                                          )))));
    param_3 = CONCAT17(*(undefined1 *)((long)param_11 + 0x1e),
                       CONCAT16(*(undefined1 *)((long)param_11 + 0x1a),
                                CONCAT15(*(undefined1 *)((long)param_11 + 0x16),
                                         CONCAT14(*(undefined1 *)((long)param_11 + 0x12),
                                                  CONCAT13(*(undefined1 *)((long)param_11 + 0xe),
                                                           CONCAT12(*(undefined1 *)
                                                                     ((long)param_11 + 10),
                                                                    CONCAT11(*(undefined1 *)
                                                                              ((long)param_11 + 6),
                                                                             *(undefined1 *)
                                                                              ((long)param_11 + 2)))
                                                          )))));
    bVar23 = *(byte *)((long)param_11 + 0x1f);
    bVar42 = ~bVar16;
    bVar43 = ~bVar17;
    bVar44 = ~bVar18;
    bVar46 = ~bVar19;
    bVar48 = ~bVar20;
    bVar50 = ~bVar21;
    bVar52 = ~bVar22;
    bVar54 = ~bVar23;
    auVar32 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),param_5,1);
    auVar33 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),param_6,1);
    auVar34 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),param_7,1);
    auVar35 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                 )),
                         CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13(
                                                  uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)))))
                                                 )),1);
    uVar8 = param_9 - 0x10;
    puVar11 = puVar9;
    puVar10 = param_11;
    uVar5 = uVar61;
    while( true ) {
      uVar61 = uVar8;
      param_11 = puVar10 + 4;
      puVar9 = puVar11 + 4;
      if ((long)uVar5 < 8) break;
      uVar24 = *(undefined1 *)((long)puVar11 + 0x23);
      uVar25 = *(undefined1 *)((long)puVar11 + 0x27);
      uVar26 = *(undefined1 *)((long)puVar11 + 0x2b);
      uVar27 = *(undefined1 *)((long)puVar11 + 0x2f);
      uVar28 = *(undefined1 *)((long)puVar11 + 0x33);
      uVar29 = *(undefined1 *)((long)puVar11 + 0x37);
      uVar30 = *(undefined1 *)((long)puVar11 + 0x3b);
      param_5 = CONCAT17(*(undefined1 *)((long)puVar11 + 0x3c),
                         CONCAT16(*(undefined1 *)(puVar11 + 7),
                                  CONCAT15(*(undefined1 *)((long)puVar11 + 0x34),
                                           CONCAT14(*(undefined1 *)(puVar11 + 6),
                                                    CONCAT13(*(undefined1 *)((long)puVar11 + 0x2c),
                                                             CONCAT12(*(undefined1 *)(puVar11 + 5),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar11 +
                                                                                0x24),*(undefined1 *
                                                                                       )puVar9))))))
                        );
      param_6 = CONCAT17(*(undefined1 *)((long)puVar11 + 0x3d),
                         CONCAT16(*(undefined1 *)((long)puVar11 + 0x39),
                                  CONCAT15(*(undefined1 *)((long)puVar11 + 0x35),
                                           CONCAT14(*(undefined1 *)((long)puVar11 + 0x31),
                                                    CONCAT13(*(undefined1 *)((long)puVar11 + 0x2d),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar11 + 0x29),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar11 +
                                                                                0x25),*(undefined1 *
                                                                                       )((long)
                                                  puVar11 + 0x21))))))));
      param_7 = CONCAT17(*(undefined1 *)((long)puVar11 + 0x3e),
                         CONCAT16(*(undefined1 *)((long)puVar11 + 0x3a),
                                  CONCAT15(*(undefined1 *)((long)puVar11 + 0x36),
                                           CONCAT14(*(undefined1 *)((long)puVar11 + 0x32),
                                                    CONCAT13(*(undefined1 *)((long)puVar11 + 0x2e),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar11 + 0x2a),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar11 +
                                                                                0x26),*(undefined1 *
                                                                                       )((long)
                                                  puVar11 + 0x22))))))));
      uVar31 = *(undefined1 *)((long)puVar11 + 0x3f);
      auVar36 = NEON_urshr(auVar32,8,2);
      auVar37 = NEON_urshr(auVar33,8,2);
      auVar40 = NEON_urshr(auVar34,8,2);
      auVar41 = NEON_urshr(auVar35,8,2);
      uVar56 = NEON_raddhn(in_d28,auVar36,auVar32,2);
      uVar59 = NEON_raddhn(in_d29,auVar37,auVar33,2);
      uVar60 = NEON_raddhn(in_d30,auVar40,auVar34,2);
      uVar64 = NEON_raddhn(in_d31,auVar41,auVar35,2);
      in_d28 = NEON_uqadd(param_1,uVar56,1);
      in_d29 = NEON_uqadd(param_2,uVar59,1);
      in_d30 = NEON_uqadd(param_3,uVar60,1);
      in_d31 = NEON_uqadd(CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,CONCAT13(
                                                  bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)))))
                                                  )),uVar64,1);
      bVar16 = *(byte *)((long)puVar10 + 0x23);
      bVar17 = *(byte *)((long)puVar10 + 0x27);
      bVar18 = *(byte *)((long)puVar10 + 0x2b);
      bVar19 = *(byte *)((long)puVar10 + 0x2f);
      bVar20 = *(byte *)((long)puVar10 + 0x33);
      bVar21 = *(byte *)((long)puVar10 + 0x37);
      bVar22 = *(byte *)((long)puVar10 + 0x3b);
      param_1 = CONCAT17(*(undefined1 *)((long)puVar10 + 0x3c),
                         CONCAT16(*(undefined1 *)(puVar10 + 7),
                                  CONCAT15(*(undefined1 *)((long)puVar10 + 0x34),
                                           CONCAT14(*(undefined1 *)(puVar10 + 6),
                                                    CONCAT13(*(undefined1 *)((long)puVar10 + 0x2c),
                                                             CONCAT12(*(undefined1 *)(puVar10 + 5),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar10 +
                                                                                0x24),*(undefined1 *
                                                                                       )param_11))))
                                          )));
      param_2 = CONCAT17(*(undefined1 *)((long)puVar10 + 0x3d),
                         CONCAT16(*(undefined1 *)((long)puVar10 + 0x39),
                                  CONCAT15(*(undefined1 *)((long)puVar10 + 0x35),
                                           CONCAT14(*(undefined1 *)((long)puVar10 + 0x31),
                                                    CONCAT13(*(undefined1 *)((long)puVar10 + 0x2d),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar10 + 0x29),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar10 +
                                                                                0x25),*(undefined1 *
                                                                                       )((long)
                                                  puVar10 + 0x21))))))));
      param_3 = CONCAT17(*(undefined1 *)((long)puVar10 + 0x3e),
                         CONCAT16(*(undefined1 *)((long)puVar10 + 0x3a),
                                  CONCAT15(*(undefined1 *)((long)puVar10 + 0x36),
                                           CONCAT14(*(undefined1 *)((long)puVar10 + 0x32),
                                                    CONCAT13(*(undefined1 *)((long)puVar10 + 0x2e),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar10 + 0x2a),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar10 +
                                                                                0x26),*(undefined1 *
                                                                                       )((long)
                                                  puVar10 + 0x22))))))));
      bVar23 = *(byte *)((long)puVar10 + 0x3f);
      bVar42 = ~bVar16;
      bVar43 = ~bVar17;
      bVar44 = ~bVar18;
      bVar46 = ~bVar19;
      bVar48 = ~bVar20;
      bVar50 = ~bVar21;
      bVar52 = ~bVar22;
      bVar54 = ~bVar23;
      *(char *)param_10 = (char)in_d28;
      *(char *)((long)param_10 + 1) = (char)in_d29;
      *(char *)((long)param_10 + 2) = (char)in_d30;
      *(char *)((long)param_10 + 3) = (char)in_d31;
      *(char *)((long)param_10 + 4) = (char)((ulong)in_d28 >> 8);
      *(char *)((long)param_10 + 5) = (char)((ulong)in_d29 >> 8);
      *(char *)((long)param_10 + 6) = (char)((ulong)in_d30 >> 8);
      *(char *)((long)param_10 + 7) = (char)((ulong)in_d31 >> 8);
      *(char *)(param_10 + 1) = (char)((ulong)in_d28 >> 0x10);
      *(char *)((long)param_10 + 9) = (char)((ulong)in_d29 >> 0x10);
      *(char *)((long)param_10 + 10) = (char)((ulong)in_d30 >> 0x10);
      *(char *)((long)param_10 + 0xb) = (char)((ulong)in_d31 >> 0x10);
      *(char *)((long)param_10 + 0xc) = (char)((ulong)in_d28 >> 0x18);
      *(char *)((long)param_10 + 0xd) = (char)((ulong)in_d29 >> 0x18);
      *(char *)((long)param_10 + 0xe) = (char)((ulong)in_d30 >> 0x18);
      *(char *)((long)param_10 + 0xf) = (char)((ulong)in_d31 >> 0x18);
      *(char *)(param_10 + 2) = (char)((ulong)in_d28 >> 0x20);
      *(char *)((long)param_10 + 0x11) = (char)((ulong)in_d29 >> 0x20);
      *(char *)((long)param_10 + 0x12) = (char)((ulong)in_d30 >> 0x20);
      *(char *)((long)param_10 + 0x13) = (char)((ulong)in_d31 >> 0x20);
      *(char *)((long)param_10 + 0x14) = (char)((ulong)in_d28 >> 0x28);
      *(char *)((long)param_10 + 0x15) = (char)((ulong)in_d29 >> 0x28);
      *(char *)((long)param_10 + 0x16) = (char)((ulong)in_d30 >> 0x28);
      *(char *)((long)param_10 + 0x17) = (char)((ulong)in_d31 >> 0x28);
      *(char *)(param_10 + 3) = (char)((ulong)in_d28 >> 0x30);
      *(char *)((long)param_10 + 0x19) = (char)((ulong)in_d29 >> 0x30);
      *(char *)((long)param_10 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
      *(char *)((long)param_10 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
      *(char *)((long)param_10 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
      *(char *)((long)param_10 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
      *(char *)((long)param_10 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
      *(char *)((long)param_10 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
      param_10 = param_10 + 4;
      auVar32 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                  )),param_5,1);
      auVar33 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                  )),param_6,1);
      auVar34 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                  )),param_7,1);
      auVar35 = NEON_umull(CONCAT17(bVar54,CONCAT16(bVar52,CONCAT15(bVar50,CONCAT14(bVar48,CONCAT13(
                                                  bVar46,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)))))
                                                  )),
                           CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13(
                                                  uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)))))
                                                  )),1);
      uVar8 = uVar61 - 8;
      puVar11 = puVar9;
      puVar10 = param_11;
      uVar5 = uVar61;
    }
    auVar36 = NEON_urshr(auVar32,8,2);
    auVar37 = NEON_urshr(auVar33,8,2);
    auVar40 = NEON_urshr(auVar34,8,2);
    auVar41 = NEON_urshr(auVar35,8,2);
    uVar56 = NEON_raddhn(in_d28,auVar36,auVar32,2);
    uVar59 = NEON_raddhn(in_d29,auVar37,auVar33,2);
    uVar60 = NEON_raddhn(in_d30,auVar40,auVar34,2);
    uVar64 = NEON_raddhn(in_d31,auVar41,auVar35,2);
    in_d28 = NEON_uqadd(param_1,uVar56,1);
    in_d29 = NEON_uqadd(param_2,uVar59,1);
    in_d30 = NEON_uqadd(param_3,uVar60,1);
    in_d31 = NEON_uqadd(CONCAT17(bVar23,CONCAT16(bVar22,CONCAT15(bVar21,CONCAT14(bVar20,CONCAT13(
                                                  bVar19,CONCAT12(bVar18,CONCAT11(bVar17,bVar16)))))
                                                )),uVar64,1);
    *(char *)param_10 = (char)in_d28;
    *(char *)((long)param_10 + 1) = (char)in_d29;
    *(char *)((long)param_10 + 2) = (char)in_d30;
    *(char *)((long)param_10 + 3) = (char)in_d31;
    *(char *)((long)param_10 + 4) = (char)((ulong)in_d28 >> 8);
    *(char *)((long)param_10 + 5) = (char)((ulong)in_d29 >> 8);
    *(char *)((long)param_10 + 6) = (char)((ulong)in_d30 >> 8);
    *(char *)((long)param_10 + 7) = (char)((ulong)in_d31 >> 8);
    *(char *)(param_10 + 1) = (char)((ulong)in_d28 >> 0x10);
    *(char *)((long)param_10 + 9) = (char)((ulong)in_d29 >> 0x10);
    *(char *)((long)param_10 + 10) = (char)((ulong)in_d30 >> 0x10);
    *(char *)((long)param_10 + 0xb) = (char)((ulong)in_d31 >> 0x10);
    *(char *)((long)param_10 + 0xc) = (char)((ulong)in_d28 >> 0x18);
    *(char *)((long)param_10 + 0xd) = (char)((ulong)in_d29 >> 0x18);
    *(char *)((long)param_10 + 0xe) = (char)((ulong)in_d30 >> 0x18);
    *(char *)((long)param_10 + 0xf) = (char)((ulong)in_d31 >> 0x18);
    *(char *)(param_10 + 2) = (char)((ulong)in_d28 >> 0x20);
    *(char *)((long)param_10 + 0x11) = (char)((ulong)in_d29 >> 0x20);
    *(char *)((long)param_10 + 0x12) = (char)((ulong)in_d30 >> 0x20);
    *(char *)((long)param_10 + 0x13) = (char)((ulong)in_d31 >> 0x20);
    *(char *)((long)param_10 + 0x14) = (char)((ulong)in_d28 >> 0x28);
    *(char *)((long)param_10 + 0x15) = (char)((ulong)in_d29 >> 0x28);
    *(char *)((long)param_10 + 0x16) = (char)((ulong)in_d30 >> 0x28);
    *(char *)((long)param_10 + 0x17) = (char)((ulong)in_d31 >> 0x28);
    *(char *)(param_10 + 3) = (char)((ulong)in_d28 >> 0x30);
    *(char *)((long)param_10 + 0x19) = (char)((ulong)in_d29 >> 0x30);
    *(char *)((long)param_10 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
    *(char *)((long)param_10 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
    *(char *)((long)param_10 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
    *(char *)((long)param_10 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
    *(char *)((long)param_10 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
    *(char *)((long)param_10 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
    param_10 = param_10 + 4;
  }
  if ((uVar61 & 7) != 0) {
    if ((uVar61 & 4) != 0) {
      param_3 = *param_11;
      uVar38 = *(undefined4 *)(param_11 + 1);
      bVar16 = (byte)uVar38;
      bVar17 = (byte)((uint)uVar38 >> 8);
      bVar18 = (byte)((uint)uVar38 >> 0x10);
      bVar19 = (byte)((uint)uVar38 >> 0x18);
      uVar38 = *(undefined4 *)((long)param_11 + 0xc);
      bVar20 = (byte)uVar38;
      bVar21 = (byte)((uint)uVar38 >> 8);
      bVar22 = (byte)((uint)uVar38 >> 0x10);
      bVar23 = (byte)((uint)uVar38 >> 0x18);
      param_11 = param_11 + 2;
      param_7 = *puVar9;
      uVar38 = *(undefined4 *)(puVar9 + 1);
      uVar24 = (undefined1)uVar38;
      uVar25 = (undefined1)((uint)uVar38 >> 8);
      uVar26 = (undefined1)((uint)uVar38 >> 0x10);
      uVar27 = (undefined1)((uint)uVar38 >> 0x18);
      uVar38 = *(undefined4 *)((long)puVar9 + 0xc);
      uVar28 = (undefined1)uVar38;
      uVar29 = (undefined1)((uint)uVar38 >> 8);
      uVar30 = (undefined1)((uint)uVar38 >> 0x10);
      uVar31 = (undefined1)((uint)uVar38 >> 0x18);
      puVar9 = puVar9 + 2;
    }
    if ((uVar61 & 2) != 0) {
      param_2 = *param_11;
      param_11 = param_11 + 1;
      param_6 = *puVar9;
      puVar9 = puVar9 + 1;
    }
    if ((uVar61 & 1) != 0) {
      param_1 = CONCAT44(*(undefined4 *)param_11,(int)param_1);
      param_5 = CONCAT44(*(undefined4 *)puVar9,(int)param_5);
    }
    bVar42 = (byte)((ulong)param_1 >> 0x18);
    bVar44 = (byte)((ulong)param_1 >> 0x38);
    bVar48 = (byte)((ulong)param_2 >> 0x18);
    bVar50 = (byte)((ulong)param_2 >> 0x38);
    bVar43 = (byte)((ulong)param_3 >> 0x18);
    bVar46 = (byte)((ulong)param_3 >> 0x38);
    bVar52 = ~bVar42;
    bVar54 = ~bVar44;
    bVar45 = ~bVar48;
    bVar47 = ~bVar50;
    bVar49 = ~bVar43;
    bVar51 = ~bVar46;
    bVar53 = ~bVar19;
    bVar55 = ~bVar23;
    auVar32 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                 )),
                         CONCAT17(uVar28,CONCAT16(uVar24,CONCAT15((char)((ulong)param_7 >> 0x20),
                                                                  CONCAT14((char)param_7,
                                                                           CONCAT13((char)((ulong)
                                                  param_6 >> 0x20),
                                                  CONCAT12((char)param_6,
                                                           CONCAT11((char)((ulong)param_5 >> 0x20),
                                                                    (char)param_5))))))),1);
    auVar33 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                 )),
                         CONCAT17(uVar29,CONCAT16(uVar25,CONCAT15((char)((ulong)param_7 >> 0x28),
                                                                  CONCAT14((char)((ulong)param_7 >>
                                                                                 8),CONCAT13((char)(
                                                  (ulong)param_6 >> 0x28),
                                                  CONCAT12((char)((ulong)param_6 >> 8),
                                                           CONCAT11((char)((ulong)param_5 >> 0x28),
                                                                    (char)((ulong)param_5 >> 8))))))
                                                 )),1);
    auVar34 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                 )),
                         CONCAT17(uVar30,CONCAT16(uVar26,CONCAT15((char)((ulong)param_7 >> 0x30),
                                                                  CONCAT14((char)((ulong)param_7 >>
                                                                                 0x10),
                                                                           CONCAT13((char)((ulong)
                                                  param_6 >> 0x30),
                                                  CONCAT12((char)((ulong)param_6 >> 0x10),
                                                           CONCAT11((char)((ulong)param_5 >> 0x30),
                                                                    (char)((ulong)param_5 >> 0x10)))
                                                  ))))),1);
    auVar35 = NEON_umull(CONCAT17(bVar55,CONCAT16(bVar53,CONCAT15(bVar51,CONCAT14(bVar49,CONCAT13(
                                                  bVar47,CONCAT12(bVar45,CONCAT11(bVar54,bVar52)))))
                                                 )),
                         CONCAT17(uVar31,CONCAT16(uVar27,CONCAT15((char)((ulong)param_7 >> 0x38),
                                                                  CONCAT14((char)((ulong)param_7 >>
                                                                                 0x18),
                                                                           CONCAT13((char)((ulong)
                                                  param_6 >> 0x38),
                                                  CONCAT12((char)((ulong)param_6 >> 0x18),
                                                           CONCAT11((char)((ulong)param_5 >> 0x38),
                                                                    (char)((ulong)param_5 >> 0x18)))
                                                  ))))),1);
    auVar36 = NEON_urshr(auVar32,8,2);
    auVar37 = NEON_urshr(auVar33,8,2);
    auVar40 = NEON_urshr(auVar34,8,2);
    auVar41 = NEON_urshr(auVar35,8,2);
    uVar56 = NEON_raddhn(in_d28,auVar36,auVar32,2);
    uVar59 = NEON_raddhn(in_d29,auVar37,auVar33,2);
    uVar60 = NEON_raddhn(in_d30,auVar40,auVar34,2);
    uVar64 = NEON_raddhn(in_d31,auVar41,auVar35,2);
    uVar56 = NEON_uqadd(CONCAT17(bVar20,CONCAT16(bVar16,CONCAT15((char)((ulong)param_3 >> 0x20),
                                                                 CONCAT14((char)param_3,
                                                                          CONCAT13((char)((ulong)
                                                  param_2 >> 0x20),
                                                  CONCAT12((char)param_2,
                                                           CONCAT11((char)((ulong)param_1 >> 0x20),
                                                                    (char)param_1))))))),uVar56,1);
    uVar59 = NEON_uqadd(CONCAT17(bVar21,CONCAT16(bVar17,CONCAT15((char)((ulong)param_3 >> 0x28),
                                                                 CONCAT14((char)((ulong)param_3 >> 8
                                                                                ),CONCAT13((char)((
                                                  ulong)param_2 >> 0x28),
                                                  CONCAT12((char)((ulong)param_2 >> 8),
                                                           CONCAT11((char)((ulong)param_1 >> 0x28),
                                                                    (char)((ulong)param_1 >> 8))))))
                                                )),uVar59,1);
    uVar60 = NEON_uqadd(CONCAT17(bVar22,CONCAT16(bVar18,CONCAT15((char)((ulong)param_3 >> 0x30),
                                                                 CONCAT14((char)((ulong)param_3 >>
                                                                                0x10),
                                                                          CONCAT13((char)((ulong)
                                                  param_2 >> 0x30),
                                                  CONCAT12((char)((ulong)param_2 >> 0x10),
                                                           CONCAT11((char)((ulong)param_1 >> 0x30),
                                                                    (char)((ulong)param_1 >> 0x10)))
                                                  ))))),uVar60,1);
    uVar64 = NEON_uqadd(CONCAT17(bVar23,CONCAT16(bVar19,CONCAT15(bVar46,CONCAT14(bVar43,CONCAT13(
                                                  bVar50,CONCAT12(bVar48,CONCAT11(bVar44,bVar42)))))
                                                )),uVar64,1);
    uVar24 = (undefined1)((ulong)uVar60 >> 8);
    uVar25 = (undefined1)((ulong)uVar60 >> 0x18);
    uVar26 = (undefined1)((ulong)uVar60 >> 0x28);
    uVar27 = (undefined1)((ulong)uVar60 >> 0x38);
    uVar39 = CONCAT16(uVar26,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x28),
                                             ((uint)((ulong)uVar60 >> 0x20) & 0xff) << 0x10));
    uVar38 = CONCAT13((char)((ulong)uVar64 >> 0x20),
                      (int3)CONCAT52((int5)((uint7)uVar39 >> 0x10),
                                     CONCAT11((char)((ulong)uVar59 >> 0x20),
                                              (char)((ulong)uVar56 >> 0x20))));
    uVar63 = CONCAT16(uVar27,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x38),
                                             (uint)(byte)((ulong)uVar60 >> 0x30) << 0x10));
    uVar62 = CONCAT13((char)((ulong)uVar64 >> 0x30),
                      (int3)CONCAT52((int5)((uint7)uVar63 >> 0x10),
                                     CONCAT11((char)((ulong)uVar59 >> 0x30),
                                              (char)((ulong)uVar56 >> 0x30))));
    uVar58 = CONCAT16(uVar25,(uint6)CONCAT14((char)((ulong)uVar56 >> 0x18),
                                             (uint)(byte)((ulong)uVar60 >> 0x10) << 0x10));
    uVar57 = CONCAT13((char)((ulong)uVar64 >> 0x10),
                      (int3)CONCAT52((int5)((uint7)uVar58 >> 0x10),
                                     CONCAT11((char)((ulong)uVar59 >> 0x10),
                                              (char)((ulong)uVar56 >> 0x10))));
    if ((uVar61 & 4) != 0) {
      *(undefined4 *)param_10 = uVar38;
      *(int *)((long)param_10 + 4) =
           (int)(CONCAT17((char)((ulong)uVar64 >> 0x28),
                          CONCAT16(uVar26,CONCAT15((char)((ulong)uVar59 >> 0x28),
                                                   (int5)CONCAT34((int3)((uint7)uVar39 >> 0x20),
                                                                  uVar38)))) >> 0x20);
      *(undefined4 *)(param_10 + 1) = uVar62;
      *(int *)((long)param_10 + 0xc) =
           (int)(CONCAT17((char)((ulong)uVar64 >> 0x38),
                          CONCAT16(uVar27,CONCAT15((char)((ulong)uVar59 >> 0x38),
                                                   (int5)CONCAT34((int3)((uint7)uVar63 >> 0x20),
                                                                  uVar62)))) >> 0x20);
      param_10 = param_10 + 2;
    }
    if ((uVar61 & 2) != 0) {
      *(undefined4 *)param_10 = uVar57;
      *(int *)((long)param_10 + 4) =
           (int)(CONCAT17((char)((ulong)uVar64 >> 0x18),
                          CONCAT16(uVar25,CONCAT15((char)((ulong)uVar59 >> 0x18),
                                                   (int5)CONCAT34((int3)((uint7)uVar58 >> 0x20),
                                                                  uVar57)))) >> 0x20);
      param_10 = param_10 + 1;
    }
    if ((uVar61 & 1) != 0) {
      *(int *)param_10 =
           (int)(CONCAT17((char)((ulong)uVar64 >> 8),
                          CONCAT16(uVar24,CONCAT15((char)((ulong)uVar59 >> 8),
                                                   (uint5)(uint3)(CONCAT16(uVar24,(uint6)(byte)((
                                                  ulong)uVar56 >> 8) << 0x20) >> 0x20) << 0x20))) >>
                0x20);
    }
  }
  return;
}


// ===== 001a0c04  FUN_001a0c04 =====

void FUN_001a0c04(int param_1,int param_2,undefined8 *param_3,int param_4,undefined4 param_5)

{
  undefined5 uVar1;
  undefined5 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  byte bVar29;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 in_q7 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined8 in_d28;
  undefined8 uVar59;
  undefined4 uVar60;
  undefined8 in_d29;
  undefined8 uVar61;
  undefined8 in_d30;
  undefined8 uVar62;
  ulong uVar63;
  undefined4 uVar64;
  undefined8 in_d31;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined7 uVar48;
  
  uVar40 = in_q7[7];
  uVar30 = in_q7[6];
  uVar34 = in_q7[5];
  uVar32 = in_q7[4];
  uVar38 = in_q7[3];
  uVar36 = in_q7[2];
  uVar33 = in_q7[1];
  uVar31 = in_q7[0];
  uVar15 = (ulong)param_1;
  lVar18 = (long)param_2;
  uVar21 = 0;
  uVar20 = lVar18 * 0x10 - 0xb;
  uVar26 = (undefined1)param_5;
  uVar27 = (undefined1)((uint)param_5 >> 8);
  uVar28 = (undefined1)((uint)param_5 >> 0x10);
  bVar29 = (byte)((uint)param_5 >> 0x18);
  if (0 < lVar18) {
    lVar19 = lVar18 + -1;
    lVar18 = lVar18 + -1;
    puVar14 = param_3;
    if (0xf < (long)uVar15) {
      do {
        uVar16 = uVar15;
        puVar12 = param_3;
        if (((ulong)param_3 & 0xf) != 0) {
          uVar63 = uVar21;
          if (((ulong)param_3 & 4) != 0) {
            in_d4 = CONCAT44(*(undefined4 *)param_3,(int)in_d4);
            puVar12 = (undefined8 *)((long)param_3 + 4);
            uVar63 = uVar21 + 1;
            uVar16 = uVar15 - 1;
          }
          if (((ulong)puVar12 & 8) != 0) {
            in_d5 = *puVar12;
            puVar12 = puVar12 + 1;
            uVar63 = uVar63 + 2;
            uVar16 = uVar16 - 2;
          }
          uVar59 = *puVar12;
          uVar47 = *(undefined4 *)((long)puVar12 + 0xc);
          uVar2 = *(undefined5 *)(puVar12 + 1);
          uVar1 = *(undefined5 *)(puVar12 + 1);
          puVar12 = puVar12 + 2;
          uVar21 = uVar63 + 4;
          uVar16 = uVar16 - 4;
          bVar51 = ~bVar29;
          bVar52 = ~bVar29;
          bVar53 = ~bVar29;
          bVar54 = ~bVar29;
          bVar55 = ~bVar29;
          bVar56 = ~bVar29;
          bVar57 = ~bVar29;
          bVar58 = ~bVar29;
          auVar41 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                               CONCAT17((char)((uint5)uVar1 >> 0x20),
                                        CONCAT16((char)uVar1,
                                                 CONCAT15((char)((ulong)uVar59 >> 0x20),
                                                          CONCAT14((char)uVar59,
                                                                   CONCAT13((char)((ulong)in_d5 >>
                                                                                  0x20),
                                                                            CONCAT12((char)in_d5,
                                                                                     CONCAT11((char)
                                                  ((ulong)in_d4 >> 0x20),(char)in_d4))))))),1);
          auVar42 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                               CONCAT17((char)((uint)uVar47 >> 8),
                                        CONCAT16((char)((uint5)uVar2 >> 8),
                                                 CONCAT15((char)((ulong)uVar59 >> 0x28),
                                                          CONCAT14((char)((ulong)uVar59 >> 8),
                                                                   CONCAT13((char)((ulong)in_d5 >>
                                                                                  0x28),
                                                                            CONCAT12((char)((ulong)
                                                  in_d5 >> 8),
                                                  CONCAT11((char)((ulong)in_d4 >> 0x28),
                                                           (char)((ulong)in_d4 >> 8)))))))),1);
          auVar43 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                               CONCAT17((char)((uint)uVar47 >> 0x10),
                                        CONCAT16((char)((uint5)uVar1 >> 0x10),
                                                 CONCAT15((char)((ulong)uVar59 >> 0x30),
                                                          CONCAT14((char)((ulong)uVar59 >> 0x10),
                                                                   CONCAT13((char)((ulong)in_d5 >>
                                                                                  0x30),
                                                                            CONCAT12((char)((ulong)
                                                  in_d5 >> 0x10),
                                                  CONCAT11((char)((ulong)in_d4 >> 0x30),
                                                           (char)((ulong)in_d4 >> 0x10)))))))),1);
          auVar44 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                               CONCAT17((char)((uint)uVar47 >> 0x18),
                                        CONCAT16((char)((uint5)uVar2 >> 0x18),
                                                 CONCAT15((char)((ulong)uVar59 >> 0x38),
                                                          CONCAT14((char)((ulong)uVar59 >> 0x18),
                                                                   CONCAT13((char)((ulong)in_d5 >>
                                                                                  0x38),
                                                                            CONCAT12((char)((ulong)
                                                  in_d5 >> 0x18),
                                                  CONCAT11((char)((ulong)in_d4 >> 0x38),
                                                           (char)((ulong)in_d4 >> 0x18)))))))),1);
          if ((uVar20 & 0xf) != 0) {
            uVar21 = uVar63 + 0xc;
            uVar20 = uVar20 - 1;
          }
          bVar10 = SBORROW8(uVar21,uVar15);
          bVar11 = uVar21 == uVar15;
          Hint_Prefetch((long)puVar14 + uVar21 * 4,0,0,0);
          uVar63 = uVar21 - uVar15;
          if ((long)uVar15 < (long)uVar21) {
            uVar21 = uVar21 - uVar15;
            bVar10 = SBORROW8(uVar20,0x10);
            uVar20 = uVar20 - 0x10;
            bVar11 = uVar20 == 0;
            uVar63 = uVar20;
          }
          if (!bVar11 && (long)uVar63 < 0 == bVar10) {
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          }
          auVar45 = NEON_urshr(auVar41,8,2);
          auVar46 = NEON_urshr(auVar42,8,2);
          auVar49 = NEON_urshr(auVar43,8,2);
          auVar50 = NEON_urshr(auVar44,8,2);
          uVar59 = NEON_raddhn(in_d28,auVar45,auVar41,2);
          uVar61 = NEON_raddhn(in_d29,auVar46,auVar42,2);
          uVar62 = NEON_raddhn(in_d30,auVar49,auVar43,2);
          uVar65 = NEON_raddhn(in_d31,auVar50,auVar44,2);
          uVar59 = NEON_uqadd(CONCAT17(uVar26,CONCAT16(uVar26,CONCAT15(uVar26,CONCAT14(uVar26,
                                                  CONCAT13(uVar26,CONCAT12(uVar26,CONCAT11(uVar26,
                                                  uVar26))))))),uVar59,1);
          uVar61 = NEON_uqadd(CONCAT17(uVar27,CONCAT16(uVar27,CONCAT15(uVar27,CONCAT14(uVar27,
                                                  CONCAT13(uVar27,CONCAT12(uVar27,CONCAT11(uVar27,
                                                  uVar27))))))),uVar61,1);
          uVar63 = NEON_uqadd(CONCAT17(uVar28,CONCAT16(uVar28,CONCAT15(uVar28,CONCAT14(uVar28,
                                                  CONCAT13(uVar28,CONCAT12(uVar28,CONCAT11(uVar28,
                                                  uVar28))))))),uVar62,1);
          uVar62 = NEON_uqadd(CONCAT17(bVar29,CONCAT16(bVar29,CONCAT15(bVar29,CONCAT14(bVar29,
                                                  CONCAT13(bVar29,CONCAT12(bVar29,CONCAT11(bVar29,
                                                  bVar29))))))),uVar65,1);
          uVar30 = (undefined1)(uVar63 >> 8);
          uVar31 = (undefined1)(uVar63 >> 0x18);
          uVar32 = (undefined1)(uVar63 >> 0x28);
          uVar33 = (undefined1)(uVar63 >> 0x38);
          uVar48 = CONCAT16(uVar32,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x28),
                                                   ((uint)(uVar63 >> 0x20) & 0xff) << 0x10));
          uVar47 = CONCAT13((char)((ulong)uVar62 >> 0x20),
                            (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                           CONCAT11((char)((ulong)uVar61 >> 0x20),
                                                    (char)((ulong)uVar59 >> 0x20))));
          in_d30 = CONCAT17((char)((ulong)uVar62 >> 0x28),
                            CONCAT16(uVar32,CONCAT15((char)((ulong)uVar61 >> 0x28),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    uVar47))));
          uVar48 = CONCAT16(uVar33,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x38),
                                                   (uint)(byte)(uVar63 >> 0x30) << 0x10));
          uVar64 = CONCAT13((char)((ulong)uVar62 >> 0x30),
                            (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                           CONCAT11((char)((ulong)uVar61 >> 0x30),
                                                    (char)((ulong)uVar59 >> 0x30))));
          in_d31 = CONCAT17((char)((ulong)uVar62 >> 0x38),
                            CONCAT16(uVar33,CONCAT15((char)((ulong)uVar61 >> 0x38),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    uVar64))));
          uVar48 = CONCAT16(uVar30,(uint6)CONCAT14((char)((ulong)uVar59 >> 8),
                                                   (int)((uVar63 & 0xff) << 0x10)));
          in_d28 = CONCAT17((char)((ulong)uVar62 >> 8),
                            CONCAT16(uVar30,CONCAT15((char)((ulong)uVar61 >> 8),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    CONCAT13((char)uVar62,
                                                                             (int3)CONCAT52((int5)((
                                                  uint7)uVar48 >> 0x10),
                                                  CONCAT11((char)uVar61,(char)uVar59)))))));
          uVar48 = CONCAT16(uVar31,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x18),
                                                   (uint)(byte)(uVar63 >> 0x10) << 0x10));
          uVar60 = CONCAT13((char)((ulong)uVar62 >> 0x10),
                            (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                           CONCAT11((char)((ulong)uVar61 >> 0x10),
                                                    (char)((ulong)uVar59 >> 0x10))));
          in_d29 = CONCAT17((char)((ulong)uVar62 >> 0x18),
                            CONCAT16(uVar31,CONCAT15((char)((ulong)uVar61 >> 0x18),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    uVar60))));
          if (((ulong)param_3 & 4) != 0) {
            *(int *)param_3 = (int)((ulong)in_d28 >> 0x20);
            param_3 = (undefined8 *)((long)param_3 + 4);
          }
          if (((ulong)param_3 & 8) != 0) {
            *(undefined4 *)param_3 = uVar60;
            *(int *)((long)param_3 + 4) = (int)((ulong)in_d29 >> 0x20);
            param_3 = param_3 + 1;
          }
          *(undefined4 *)param_3 = uVar47;
          *(int *)((long)param_3 + 4) = (int)((ulong)in_d30 >> 0x20);
          *(undefined4 *)(param_3 + 1) = uVar64;
          *(int *)((long)param_3 + 0xc) = (int)((ulong)in_d31 >> 0x20);
          param_3 = param_3 + 2;
        }
        uVar30 = *(undefined1 *)((long)puVar12 + 3);
        uVar31 = *(undefined1 *)((long)puVar12 + 7);
        uVar32 = *(undefined1 *)((long)puVar12 + 0xb);
        uVar33 = *(undefined1 *)((long)puVar12 + 0xf);
        uVar34 = *(undefined1 *)((long)puVar12 + 0x13);
        uVar36 = *(undefined1 *)((long)puVar12 + 0x17);
        uVar38 = *(undefined1 *)((long)puVar12 + 0x1b);
        in_d4 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x1c),
                         CONCAT16(*(undefined1 *)(puVar12 + 3),
                                  CONCAT15(*(undefined1 *)((long)puVar12 + 0x14),
                                           CONCAT14(*(undefined1 *)(puVar12 + 2),
                                                    CONCAT13(*(undefined1 *)((long)puVar12 + 0xc),
                                                             CONCAT12(*(undefined1 *)(puVar12 + 1),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar12 + 4),
                                                                               *(undefined1 *)
                                                                                puVar12)))))));
        in_d5 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x1d),
                         CONCAT16(*(undefined1 *)((long)puVar12 + 0x19),
                                  CONCAT15(*(undefined1 *)((long)puVar12 + 0x15),
                                           CONCAT14(*(undefined1 *)((long)puVar12 + 0x11),
                                                    CONCAT13(*(undefined1 *)((long)puVar12 + 0xd),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)puVar12 + 9),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)puVar12 + 5),
                                                                               *(undefined1 *)
                                                                                ((long)puVar12 + 1))
                                                                     ))))));
        uVar59 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x1e),
                          CONCAT16(*(undefined1 *)((long)puVar12 + 0x1a),
                                   CONCAT15(*(undefined1 *)((long)puVar12 + 0x16),
                                            CONCAT14(*(undefined1 *)((long)puVar12 + 0x12),
                                                     CONCAT13(*(undefined1 *)((long)puVar12 + 0xe),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((long)puVar12 + 10),
                                                                       CONCAT11(*(undefined1 *)
                                                                                 ((long)puVar12 + 6)
                                                                                ,*(undefined1 *)
                                                                                  ((long)puVar12 + 2
                                                                                  ))))))));
        uVar40 = *(undefined1 *)((long)puVar12 + 0x1f);
        puVar12 = puVar12 + 4;
        bVar51 = ~bVar29;
        bVar52 = ~bVar29;
        bVar53 = ~bVar29;
        bVar54 = ~bVar29;
        bVar55 = ~bVar29;
        bVar56 = ~bVar29;
        bVar57 = ~bVar29;
        bVar58 = ~bVar29;
        auVar41 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d4,1);
        auVar42 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d5,1);
        auVar43 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),uVar59,1);
        auVar44 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                             CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(uVar34,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30))))))),1);
        uVar63 = uVar21 + 8;
        if ((uVar20 & 0xf) != 0) {
          uVar20 = uVar20 - 1;
          uVar63 = uVar21 + 0x10;
        }
        uVar21 = uVar63;
        bVar10 = SBORROW8(uVar21,uVar15);
        bVar11 = uVar21 == uVar15;
        Hint_Prefetch((long)puVar14 + uVar21 * 4,0,0,0);
        uVar63 = uVar21 - uVar15;
        if ((long)uVar15 < (long)uVar21) {
          uVar21 = uVar21 - uVar15;
          bVar10 = SBORROW8(uVar20,0x10);
          uVar20 = uVar20 - 0x10;
          bVar11 = uVar20 == 0;
          uVar63 = uVar20;
        }
        if (!bVar11 && (long)uVar63 < 0 == bVar10) {
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        }
        uVar63 = uVar16 - 0x10;
        uVar17 = uVar63;
        if (0xf < (long)uVar16) {
          do {
            auVar45 = NEON_urshr(auVar41,8,2);
            auVar46 = NEON_urshr(auVar42,8,2);
            auVar49 = NEON_urshr(auVar43,8,2);
            auVar50 = NEON_urshr(auVar44,8,2);
            uVar61 = NEON_raddhn(in_d28,auVar45,auVar41,2);
            uVar62 = NEON_raddhn(in_d29,auVar46,auVar42,2);
            uVar65 = NEON_raddhn(in_d30,auVar49,auVar43,2);
            uVar66 = NEON_raddhn(in_d31,auVar50,auVar44,2);
            uVar30 = *(undefined1 *)((long)puVar12 + 3);
            uVar31 = *(undefined1 *)((long)puVar12 + 7);
            uVar32 = *(undefined1 *)((long)puVar12 + 0xb);
            uVar33 = *(undefined1 *)((long)puVar12 + 0xf);
            uVar34 = *(undefined1 *)((long)puVar12 + 0x13);
            uVar36 = *(undefined1 *)((long)puVar12 + 0x17);
            uVar38 = *(undefined1 *)((long)puVar12 + 0x1b);
            in_d4 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x1c),
                             CONCAT16(*(undefined1 *)(puVar12 + 3),
                                      CONCAT15(*(undefined1 *)((long)puVar12 + 0x14),
                                               CONCAT14(*(undefined1 *)(puVar12 + 2),
                                                        CONCAT13(*(undefined1 *)
                                                                  ((long)puVar12 + 0xc),
                                                                 CONCAT12(*(undefined1 *)
                                                                           (puVar12 + 1),
                                                                          CONCAT11(*(undefined1 *)
                                                                                    ((long)puVar12 +
                                                                                    4),*(undefined1
                                                                                         *)puVar12))
                                                                )))));
            in_d5 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x1d),
                             CONCAT16(*(undefined1 *)((long)puVar12 + 0x19),
                                      CONCAT15(*(undefined1 *)((long)puVar12 + 0x15),
                                               CONCAT14(*(undefined1 *)((long)puVar12 + 0x11),
                                                        CONCAT13(*(undefined1 *)
                                                                  ((long)puVar12 + 0xd),
                                                                 CONCAT12(*(undefined1 *)
                                                                           ((long)puVar12 + 9),
                                                                          CONCAT11(*(undefined1 *)
                                                                                    ((long)puVar12 +
                                                                                    5),*(undefined1
                                                                                         *)((long)
                                                  puVar12 + 1))))))));
            uVar59 = CONCAT17(*(undefined1 *)((long)puVar12 + 0x1e),
                              CONCAT16(*(undefined1 *)((long)puVar12 + 0x1a),
                                       CONCAT15(*(undefined1 *)((long)puVar12 + 0x16),
                                                CONCAT14(*(undefined1 *)((long)puVar12 + 0x12),
                                                         CONCAT13(*(undefined1 *)
                                                                   ((long)puVar12 + 0xe),
                                                                  CONCAT12(*(undefined1 *)
                                                                            ((long)puVar12 + 10),
                                                                           CONCAT11(*(undefined1 *)
                                                                                     ((long)puVar12
                                                                                     + 6),*(
                                                  undefined1 *)((long)puVar12 + 2))))))));
            uVar40 = *(undefined1 *)((long)puVar12 + 0x1f);
            puVar12 = puVar12 + 4;
            in_d28 = NEON_uqadd(CONCAT17(uVar26,CONCAT16(uVar26,CONCAT15(uVar26,CONCAT14(uVar26,
                                                  CONCAT13(uVar26,CONCAT12(uVar26,CONCAT11(uVar26,
                                                  uVar26))))))),uVar61,1);
            uVar16 = uVar20;
            uVar63 = uVar21 + 8;
            if ((uVar20 & 0xf) != 0) {
              uVar16 = uVar20 - 1;
              uVar63 = uVar21 + 0x10;
            }
            uVar21 = uVar63;
            in_d29 = NEON_uqadd(CONCAT17(uVar27,CONCAT16(uVar27,CONCAT15(uVar27,CONCAT14(uVar27,
                                                  CONCAT13(uVar27,CONCAT12(uVar27,CONCAT11(uVar27,
                                                  uVar27))))))),uVar62,1);
            in_d30 = NEON_uqadd(CONCAT17(uVar28,CONCAT16(uVar28,CONCAT15(uVar28,CONCAT14(uVar28,
                                                  CONCAT13(uVar28,CONCAT12(uVar28,CONCAT11(uVar28,
                                                  uVar28))))))),uVar65,1);
            in_d31 = NEON_uqadd(CONCAT17(bVar29,CONCAT16(bVar29,CONCAT15(bVar29,CONCAT14(bVar29,
                                                  CONCAT13(bVar29,CONCAT12(bVar29,CONCAT11(bVar29,
                                                  bVar29))))))),uVar66,1);
            auVar41 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d4,1);
            Hint_Prefetch((long)puVar14 + uVar21 * 4,0,0,0);
            auVar42 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d5,1);
            if ((long)uVar15 < (long)uVar21) {
              uVar21 = uVar21 - uVar15;
            }
            auVar43 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),uVar59,1);
            uVar20 = uVar16 - 0x10;
            auVar44 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                                 CONCAT17(uVar40,CONCAT16(uVar38,CONCAT15(uVar36,CONCAT14(uVar34,
                                                  CONCAT13(uVar33,CONCAT12(uVar32,CONCAT11(uVar31,
                                                  uVar30))))))),1);
            if (uVar20 != 0 && 0xf < (long)uVar16) {
              puVar14 = (undefined8 *)((long)puVar14 + 1);
            }
            *(char *)param_3 = (char)in_d28;
            *(char *)((long)param_3 + 1) = (char)in_d29;
            *(char *)((long)param_3 + 2) = (char)in_d30;
            *(char *)((long)param_3 + 3) = (char)in_d31;
            *(char *)((long)param_3 + 4) = (char)((ulong)in_d28 >> 8);
            *(char *)((long)param_3 + 5) = (char)((ulong)in_d29 >> 8);
            *(char *)((long)param_3 + 6) = (char)((ulong)in_d30 >> 8);
            *(char *)((long)param_3 + 7) = (char)((ulong)in_d31 >> 8);
            *(char *)(param_3 + 1) = (char)((ulong)in_d28 >> 0x10);
            *(char *)((long)param_3 + 9) = (char)((ulong)in_d29 >> 0x10);
            *(char *)((long)param_3 + 10) = (char)((ulong)in_d30 >> 0x10);
            *(char *)((long)param_3 + 0xb) = (char)((ulong)in_d31 >> 0x10);
            *(char *)((long)param_3 + 0xc) = (char)((ulong)in_d28 >> 0x18);
            *(char *)((long)param_3 + 0xd) = (char)((ulong)in_d29 >> 0x18);
            *(char *)((long)param_3 + 0xe) = (char)((ulong)in_d30 >> 0x18);
            *(char *)((long)param_3 + 0xf) = (char)((ulong)in_d31 >> 0x18);
            *(char *)(param_3 + 2) = (char)((ulong)in_d28 >> 0x20);
            *(char *)((long)param_3 + 0x11) = (char)((ulong)in_d29 >> 0x20);
            *(char *)((long)param_3 + 0x12) = (char)((ulong)in_d30 >> 0x20);
            *(char *)((long)param_3 + 0x13) = (char)((ulong)in_d31 >> 0x20);
            *(char *)((long)param_3 + 0x14) = (char)((ulong)in_d28 >> 0x28);
            *(char *)((long)param_3 + 0x15) = (char)((ulong)in_d29 >> 0x28);
            *(char *)((long)param_3 + 0x16) = (char)((ulong)in_d30 >> 0x28);
            *(char *)((long)param_3 + 0x17) = (char)((ulong)in_d31 >> 0x28);
            *(char *)(param_3 + 3) = (char)((ulong)in_d28 >> 0x30);
            *(char *)((long)param_3 + 0x19) = (char)((ulong)in_d29 >> 0x30);
            *(char *)((long)param_3 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
            *(char *)((long)param_3 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
            *(char *)((long)param_3 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
            *(char *)((long)param_3 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
            *(char *)((long)param_3 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
            *(char *)((long)param_3 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
            param_3 = param_3 + 4;
            uVar63 = uVar17 - 8;
            bVar11 = 7 < (long)uVar17;
            uVar17 = uVar63;
          } while (bVar11);
        }
        auVar45 = NEON_urshr(auVar41,8,2);
        auVar46 = NEON_urshr(auVar42,8,2);
        auVar49 = NEON_urshr(auVar43,8,2);
        auVar50 = NEON_urshr(auVar44,8,2);
        uVar61 = NEON_raddhn(in_d28,auVar45,auVar41,2);
        uVar62 = NEON_raddhn(in_d29,auVar46,auVar42,2);
        uVar65 = NEON_raddhn(in_d30,auVar49,auVar43,2);
        uVar66 = NEON_raddhn(in_d31,auVar50,auVar44,2);
        in_d28 = NEON_uqadd(CONCAT17(uVar26,CONCAT16(uVar26,CONCAT15(uVar26,CONCAT14(uVar26,CONCAT13
                                                  (uVar26,CONCAT12(uVar26,CONCAT11(uVar26,uVar26))))
                                                  ))),uVar61,1);
        in_d29 = NEON_uqadd(CONCAT17(uVar27,CONCAT16(uVar27,CONCAT15(uVar27,CONCAT14(uVar27,CONCAT13
                                                  (uVar27,CONCAT12(uVar27,CONCAT11(uVar27,uVar27))))
                                                  ))),uVar62,1);
        in_d30 = NEON_uqadd(CONCAT17(uVar28,CONCAT16(uVar28,CONCAT15(uVar28,CONCAT14(uVar28,CONCAT13
                                                  (uVar28,CONCAT12(uVar28,CONCAT11(uVar28,uVar28))))
                                                  ))),uVar65,1);
        in_d31 = NEON_uqadd(CONCAT17(bVar29,CONCAT16(bVar29,CONCAT15(bVar29,CONCAT14(bVar29,CONCAT13
                                                  (bVar29,CONCAT12(bVar29,CONCAT11(bVar29,bVar29))))
                                                  ))),uVar66,1);
        *(char *)param_3 = (char)in_d28;
        *(char *)((long)param_3 + 1) = (char)in_d29;
        *(char *)((long)param_3 + 2) = (char)in_d30;
        *(char *)((long)param_3 + 3) = (char)in_d31;
        *(char *)((long)param_3 + 4) = (char)((ulong)in_d28 >> 8);
        *(char *)((long)param_3 + 5) = (char)((ulong)in_d29 >> 8);
        *(char *)((long)param_3 + 6) = (char)((ulong)in_d30 >> 8);
        *(char *)((long)param_3 + 7) = (char)((ulong)in_d31 >> 8);
        *(char *)(param_3 + 1) = (char)((ulong)in_d28 >> 0x10);
        *(char *)((long)param_3 + 9) = (char)((ulong)in_d29 >> 0x10);
        *(char *)((long)param_3 + 10) = (char)((ulong)in_d30 >> 0x10);
        *(char *)((long)param_3 + 0xb) = (char)((ulong)in_d31 >> 0x10);
        *(char *)((long)param_3 + 0xc) = (char)((ulong)in_d28 >> 0x18);
        *(char *)((long)param_3 + 0xd) = (char)((ulong)in_d29 >> 0x18);
        *(char *)((long)param_3 + 0xe) = (char)((ulong)in_d30 >> 0x18);
        *(char *)((long)param_3 + 0xf) = (char)((ulong)in_d31 >> 0x18);
        *(char *)(param_3 + 2) = (char)((ulong)in_d28 >> 0x20);
        *(char *)((long)param_3 + 0x11) = (char)((ulong)in_d29 >> 0x20);
        *(char *)((long)param_3 + 0x12) = (char)((ulong)in_d30 >> 0x20);
        *(char *)((long)param_3 + 0x13) = (char)((ulong)in_d31 >> 0x20);
        *(char *)((long)param_3 + 0x14) = (char)((ulong)in_d28 >> 0x28);
        *(char *)((long)param_3 + 0x15) = (char)((ulong)in_d29 >> 0x28);
        *(char *)((long)param_3 + 0x16) = (char)((ulong)in_d30 >> 0x28);
        *(char *)((long)param_3 + 0x17) = (char)((ulong)in_d31 >> 0x28);
        *(char *)(param_3 + 3) = (char)((ulong)in_d28 >> 0x30);
        *(char *)((long)param_3 + 0x19) = (char)((ulong)in_d29 >> 0x30);
        *(char *)((long)param_3 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
        *(char *)((long)param_3 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
        *(char *)((long)param_3 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
        *(char *)((long)param_3 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
        *(char *)((long)param_3 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
        *(char *)((long)param_3 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
        puVar13 = param_3 + 4;
        if ((uVar63 & 7) != 0) {
          if ((uVar63 & 4) != 0) {
            uVar59 = *puVar12;
            uVar47 = *(undefined4 *)(puVar12 + 1);
            uVar30 = (undefined1)uVar47;
            uVar31 = (undefined1)((uint)uVar47 >> 8);
            uVar32 = (undefined1)((uint)uVar47 >> 0x10);
            uVar33 = (undefined1)((uint)uVar47 >> 0x18);
            uVar47 = *(undefined4 *)((long)puVar12 + 0xc);
            uVar34 = (undefined1)uVar47;
            uVar36 = (undefined1)((uint)uVar47 >> 8);
            uVar38 = (undefined1)((uint)uVar47 >> 0x10);
            uVar40 = (undefined1)((uint)uVar47 >> 0x18);
            puVar12 = puVar12 + 2;
            uVar21 = uVar21 + 4;
          }
          if ((uVar63 & 2) != 0) {
            in_d5 = *puVar12;
            puVar12 = puVar12 + 1;
            uVar21 = uVar21 + 2;
          }
          if ((uVar63 & 1) != 0) {
            in_d4 = CONCAT44(*(undefined4 *)puVar12,(int)in_d4);
            uVar21 = uVar21 + 1;
          }
          uVar16 = (ulong)in_d4 >> 0x10;
          uVar17 = (ulong)in_d4 >> 0x30;
          uVar39 = (undefined1)in_d5;
          uVar3 = (ulong)in_d5 >> 0x10;
          uVar4 = (ulong)in_d5 >> 0x20;
          uVar5 = (ulong)in_d5 >> 0x30;
          uVar6 = (ulong)in_d4 >> 0x18;
          uVar7 = (ulong)in_d4 >> 0x38;
          uVar8 = (ulong)in_d5 >> 0x18;
          uVar9 = (ulong)in_d5 >> 0x38;
          in_d5 = CONCAT17(uVar36,CONCAT16(uVar31,CONCAT15((char)((ulong)uVar59 >> 0x28),
                                                           CONCAT14((char)((ulong)uVar59 >> 8),
                                                                    CONCAT13((char)((ulong)in_d5 >>
                                                                                   0x28),
                                                                             CONCAT12((char)((ulong)
                                                  in_d5 >> 8),
                                                  CONCAT11((char)((ulong)in_d4 >> 0x28),
                                                           (char)((ulong)in_d4 >> 8))))))));
          in_d4 = CONCAT17(uVar34,CONCAT16(uVar30,CONCAT15((char)((ulong)uVar59 >> 0x20),
                                                           CONCAT14((char)uVar59,
                                                                    CONCAT13((char)uVar4,
                                                                             CONCAT12(uVar39,
                                                  CONCAT11((char)((ulong)in_d4 >> 0x20),(char)in_d4)
                                                  ))))));
          bVar51 = ~bVar29;
          bVar52 = ~bVar29;
          bVar53 = ~bVar29;
          bVar54 = ~bVar29;
          bVar55 = ~bVar29;
          bVar56 = ~bVar29;
          bVar57 = ~bVar29;
          bVar58 = ~bVar29;
          auVar41 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d4,1);
          auVar42 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d5,1);
          auVar43 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                               CONCAT17(uVar38,CONCAT16(uVar32,CONCAT15((char)((ulong)uVar59 >> 0x30
                                                                              ),CONCAT14((char)((
                                                  ulong)uVar59 >> 0x10),
                                                  CONCAT13((char)uVar5,
                                                           CONCAT12((char)uVar3,
                                                                    CONCAT11((char)uVar17,
                                                                             (char)uVar16))))))),1);
          auVar44 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                               CONCAT17(uVar40,CONCAT16(uVar33,CONCAT15((char)((ulong)uVar59 >> 0x38
                                                                              ),CONCAT14((char)((
                                                  ulong)uVar59 >> 0x18),
                                                  CONCAT13((char)uVar9,
                                                           CONCAT12((char)uVar8,
                                                                    CONCAT11((char)uVar7,(char)uVar6
                                                                            ))))))),1);
          if ((uVar20 & 0xf) != 0) {
            uVar21 = uVar21 + 8;
            uVar20 = uVar20 - 1;
          }
          bVar10 = SBORROW8(uVar21,uVar15);
          bVar11 = uVar21 == uVar15;
          Hint_Prefetch((long)puVar14 + uVar21 * 4,0,0,0);
          uVar16 = uVar21 - uVar15;
          if ((long)uVar15 < (long)uVar21) {
            uVar21 = uVar21 - uVar15;
            bVar10 = SBORROW8(uVar20,0x10);
            uVar20 = uVar20 - 0x10;
            bVar11 = uVar20 == 0;
            uVar16 = uVar20;
          }
          if (!bVar11 && (long)uVar16 < 0 == bVar10) {
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          }
          auVar45 = NEON_urshr(auVar41,8,2);
          auVar46 = NEON_urshr(auVar42,8,2);
          auVar49 = NEON_urshr(auVar43,8,2);
          auVar50 = NEON_urshr(auVar44,8,2);
          uVar59 = NEON_raddhn(in_d28,auVar45,auVar41,2);
          uVar61 = NEON_raddhn(in_d29,auVar46,auVar42,2);
          uVar62 = NEON_raddhn(in_d30,auVar49,auVar43,2);
          uVar65 = NEON_raddhn(in_d31,auVar50,auVar44,2);
          uVar59 = NEON_uqadd(CONCAT17(uVar26,CONCAT16(uVar26,CONCAT15(uVar26,CONCAT14(uVar26,
                                                  CONCAT13(uVar26,CONCAT12(uVar26,CONCAT11(uVar26,
                                                  uVar26))))))),uVar59,1);
          uVar61 = NEON_uqadd(CONCAT17(uVar27,CONCAT16(uVar27,CONCAT15(uVar27,CONCAT14(uVar27,
                                                  CONCAT13(uVar27,CONCAT12(uVar27,CONCAT11(uVar27,
                                                  uVar27))))))),uVar61,1);
          uVar16 = NEON_uqadd(CONCAT17(uVar28,CONCAT16(uVar28,CONCAT15(uVar28,CONCAT14(uVar28,
                                                  CONCAT13(uVar28,CONCAT12(uVar28,CONCAT11(uVar28,
                                                  uVar28))))))),uVar62,1);
          uVar62 = NEON_uqadd(CONCAT17(bVar29,CONCAT16(bVar29,CONCAT15(bVar29,CONCAT14(bVar29,
                                                  CONCAT13(bVar29,CONCAT12(bVar29,CONCAT11(bVar29,
                                                  bVar29))))))),uVar65,1);
          uVar30 = (undefined1)(uVar16 >> 8);
          uVar31 = (undefined1)(uVar16 >> 0x18);
          uVar32 = (undefined1)(uVar16 >> 0x28);
          uVar33 = (undefined1)(uVar16 >> 0x38);
          uVar48 = CONCAT16(uVar32,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x28),
                                                   ((uint)(uVar16 >> 0x20) & 0xff) << 0x10));
          uVar47 = CONCAT13((char)((ulong)uVar62 >> 0x20),
                            (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                           CONCAT11((char)((ulong)uVar61 >> 0x20),
                                                    (char)((ulong)uVar59 >> 0x20))));
          in_d30 = CONCAT17((char)((ulong)uVar62 >> 0x28),
                            CONCAT16(uVar32,CONCAT15((char)((ulong)uVar61 >> 0x28),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    uVar47))));
          uVar48 = CONCAT16(uVar33,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x38),
                                                   (uint)(byte)(uVar16 >> 0x30) << 0x10));
          uVar64 = CONCAT13((char)((ulong)uVar62 >> 0x30),
                            (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                           CONCAT11((char)((ulong)uVar61 >> 0x30),
                                                    (char)((ulong)uVar59 >> 0x30))));
          in_d31 = CONCAT17((char)((ulong)uVar62 >> 0x38),
                            CONCAT16(uVar33,CONCAT15((char)((ulong)uVar61 >> 0x38),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    uVar64))));
          uVar48 = CONCAT16(uVar30,(uint6)CONCAT14((char)((ulong)uVar59 >> 8),
                                                   (int)((uVar16 & 0xff) << 0x10)));
          in_d28 = CONCAT17((char)((ulong)uVar62 >> 8),
                            CONCAT16(uVar30,CONCAT15((char)((ulong)uVar61 >> 8),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    CONCAT13((char)uVar62,
                                                                             (int3)CONCAT52((int5)((
                                                  uint7)uVar48 >> 0x10),
                                                  CONCAT11((char)uVar61,(char)uVar59)))))));
          uVar48 = CONCAT16(uVar31,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x18),
                                                   (uint)(byte)(uVar16 >> 0x10) << 0x10));
          uVar60 = CONCAT13((char)((ulong)uVar62 >> 0x10),
                            (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                           CONCAT11((char)((ulong)uVar61 >> 0x10),
                                                    (char)((ulong)uVar59 >> 0x10))));
          in_d29 = CONCAT17((char)((ulong)uVar62 >> 0x18),
                            CONCAT16(uVar31,CONCAT15((char)((ulong)uVar61 >> 0x18),
                                                     (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                    uVar60))));
          if ((uVar63 & 4) != 0) {
            *(undefined4 *)puVar13 = uVar47;
            *(int *)((long)param_3 + 0x24) = (int)((ulong)in_d30 >> 0x20);
            *(undefined4 *)(param_3 + 5) = uVar64;
            *(int *)((long)param_3 + 0x2c) = (int)((ulong)in_d31 >> 0x20);
            puVar13 = param_3 + 6;
          }
          if ((uVar63 & 2) != 0) {
            *(undefined4 *)puVar13 = uVar60;
            *(int *)((long)puVar13 + 4) = (int)((ulong)in_d29 >> 0x20);
            puVar13 = puVar13 + 1;
          }
          if ((uVar63 & 1) != 0) {
            *(int *)puVar13 = (int)((ulong)in_d28 >> 0x20);
            puVar13 = (undefined8 *)((long)puVar13 + 4);
          }
        }
        param_3 = (undefined8 *)((long)puVar13 + uVar15 * -4 + (long)param_4 * 4);
        bVar11 = 0 < lVar19;
        lVar19 = lVar19 + -1;
      } while (bVar11);
      return;
    }
    do {
      puVar14 = param_3;
      uVar39 = uVar30;
      if ((uVar15 & 8) != 0) {
        uVar31 = *(undefined1 *)((long)param_3 + 3);
        uVar33 = *(undefined1 *)((long)param_3 + 7);
        uVar36 = *(undefined1 *)((long)param_3 + 0xb);
        uVar38 = *(undefined1 *)((long)param_3 + 0xf);
        uVar32 = *(undefined1 *)((long)param_3 + 0x13);
        uVar34 = *(undefined1 *)((long)param_3 + 0x17);
        uVar39 = *(undefined1 *)((long)param_3 + 0x1b);
        in_d4 = CONCAT17(*(undefined1 *)((long)param_3 + 0x1c),
                         CONCAT16(*(undefined1 *)(param_3 + 3),
                                  CONCAT15(*(undefined1 *)((long)param_3 + 0x14),
                                           CONCAT14(*(undefined1 *)(param_3 + 2),
                                                    CONCAT13(*(undefined1 *)((long)param_3 + 0xc),
                                                             CONCAT12(*(undefined1 *)(param_3 + 1),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)param_3 + 4),
                                                                               *(undefined1 *)
                                                                                param_3)))))));
        in_d5 = CONCAT17(*(undefined1 *)((long)param_3 + 0x1d),
                         CONCAT16(*(undefined1 *)((long)param_3 + 0x19),
                                  CONCAT15(*(undefined1 *)((long)param_3 + 0x15),
                                           CONCAT14(*(undefined1 *)((long)param_3 + 0x11),
                                                    CONCAT13(*(undefined1 *)((long)param_3 + 0xd),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)param_3 + 9),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)param_3 + 5),
                                                                               *(undefined1 *)
                                                                                ((long)param_3 + 1))
                                                                     ))))));
        in_d6 = CONCAT17(*(undefined1 *)((long)param_3 + 0x1e),
                         CONCAT16(*(undefined1 *)((long)param_3 + 0x1a),
                                  CONCAT15(*(undefined1 *)((long)param_3 + 0x16),
                                           CONCAT14(*(undefined1 *)((long)param_3 + 0x12),
                                                    CONCAT13(*(undefined1 *)((long)param_3 + 0xe),
                                                             CONCAT12(*(undefined1 *)
                                                                       ((long)param_3 + 10),
                                                                      CONCAT11(*(undefined1 *)
                                                                                ((long)param_3 + 6),
                                                                               *(undefined1 *)
                                                                                ((long)param_3 + 2))
                                                                     ))))));
        uVar40 = *(undefined1 *)((long)param_3 + 0x1f);
        puVar14 = param_3 + 4;
        bVar51 = ~bVar29;
        bVar52 = ~bVar29;
        bVar53 = ~bVar29;
        bVar54 = ~bVar29;
        bVar55 = ~bVar29;
        bVar56 = ~bVar29;
        bVar57 = ~bVar29;
        bVar58 = ~bVar29;
        auVar41 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d4,1);
        auVar42 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d5,1);
        auVar43 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d6,1);
        auVar44 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                             CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar34,CONCAT14(uVar32,
                                                  CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar33,
                                                  uVar31))))))),1);
        auVar45 = NEON_urshr(auVar41,8,2);
        auVar46 = NEON_urshr(auVar42,8,2);
        auVar49 = NEON_urshr(auVar43,8,2);
        auVar50 = NEON_urshr(auVar44,8,2);
        uVar59 = NEON_raddhn(in_d28,auVar45,auVar41,2);
        uVar61 = NEON_raddhn(in_d29,auVar46,auVar42,2);
        uVar62 = NEON_raddhn(in_d30,auVar49,auVar43,2);
        uVar65 = NEON_raddhn(in_d31,auVar50,auVar44,2);
        in_d28 = NEON_uqadd(CONCAT17(uVar26,CONCAT16(uVar26,CONCAT15(uVar26,CONCAT14(uVar26,CONCAT13
                                                  (uVar26,CONCAT12(uVar26,CONCAT11(uVar26,uVar26))))
                                                  ))),uVar59,1);
        in_d29 = NEON_uqadd(CONCAT17(uVar27,CONCAT16(uVar27,CONCAT15(uVar27,CONCAT14(uVar27,CONCAT13
                                                  (uVar27,CONCAT12(uVar27,CONCAT11(uVar27,uVar27))))
                                                  ))),uVar61,1);
        in_d30 = NEON_uqadd(CONCAT17(uVar28,CONCAT16(uVar28,CONCAT15(uVar28,CONCAT14(uVar28,CONCAT13
                                                  (uVar28,CONCAT12(uVar28,CONCAT11(uVar28,uVar28))))
                                                  ))),uVar62,1);
        in_d31 = NEON_uqadd(CONCAT17(bVar29,CONCAT16(bVar29,CONCAT15(bVar29,CONCAT14(bVar29,CONCAT13
                                                  (bVar29,CONCAT12(bVar29,CONCAT11(bVar29,bVar29))))
                                                  ))),uVar65,1);
        *(char *)param_3 = (char)in_d28;
        *(char *)((long)param_3 + 1) = (char)in_d29;
        *(char *)((long)param_3 + 2) = (char)in_d30;
        *(char *)((long)param_3 + 3) = (char)in_d31;
        *(char *)((long)param_3 + 4) = (char)((ulong)in_d28 >> 8);
        *(char *)((long)param_3 + 5) = (char)((ulong)in_d29 >> 8);
        *(char *)((long)param_3 + 6) = (char)((ulong)in_d30 >> 8);
        *(char *)((long)param_3 + 7) = (char)((ulong)in_d31 >> 8);
        *(char *)(param_3 + 1) = (char)((ulong)in_d28 >> 0x10);
        *(char *)((long)param_3 + 9) = (char)((ulong)in_d29 >> 0x10);
        *(char *)((long)param_3 + 10) = (char)((ulong)in_d30 >> 0x10);
        *(char *)((long)param_3 + 0xb) = (char)((ulong)in_d31 >> 0x10);
        *(char *)((long)param_3 + 0xc) = (char)((ulong)in_d28 >> 0x18);
        *(char *)((long)param_3 + 0xd) = (char)((ulong)in_d29 >> 0x18);
        *(char *)((long)param_3 + 0xe) = (char)((ulong)in_d30 >> 0x18);
        *(char *)((long)param_3 + 0xf) = (char)((ulong)in_d31 >> 0x18);
        *(char *)(param_3 + 2) = (char)((ulong)in_d28 >> 0x20);
        *(char *)((long)param_3 + 0x11) = (char)((ulong)in_d29 >> 0x20);
        *(char *)((long)param_3 + 0x12) = (char)((ulong)in_d30 >> 0x20);
        *(char *)((long)param_3 + 0x13) = (char)((ulong)in_d31 >> 0x20);
        *(char *)((long)param_3 + 0x14) = (char)((ulong)in_d28 >> 0x28);
        *(char *)((long)param_3 + 0x15) = (char)((ulong)in_d29 >> 0x28);
        *(char *)((long)param_3 + 0x16) = (char)((ulong)in_d30 >> 0x28);
        *(char *)((long)param_3 + 0x17) = (char)((ulong)in_d31 >> 0x28);
        *(char *)(param_3 + 3) = (char)((ulong)in_d28 >> 0x30);
        *(char *)((long)param_3 + 0x19) = (char)((ulong)in_d29 >> 0x30);
        *(char *)((long)param_3 + 0x1a) = (char)((ulong)in_d30 >> 0x30);
        *(char *)((long)param_3 + 0x1b) = (char)((ulong)in_d31 >> 0x30);
        *(char *)((long)param_3 + 0x1c) = (char)((ulong)in_d28 >> 0x38);
        *(char *)((long)param_3 + 0x1d) = (char)((ulong)in_d29 >> 0x38);
        *(char *)((long)param_3 + 0x1e) = (char)((ulong)in_d30 >> 0x38);
        *(char *)((long)param_3 + 0x1f) = (char)((ulong)in_d31 >> 0x38);
      }
      uVar30 = uVar39;
      if ((uVar15 & 7) != 0) {
        puVar12 = puVar14;
        uVar23 = uVar31;
        uVar24 = uVar33;
        uVar25 = uVar36;
        uVar30 = uVar38;
        uVar35 = uVar32;
        uVar37 = uVar34;
        if ((uVar15 & 4) != 0) {
          in_d6 = *puVar14;
          uVar47 = *(undefined4 *)(puVar14 + 1);
          uVar23 = (undefined1)uVar47;
          uVar24 = (undefined1)((uint)uVar47 >> 8);
          uVar25 = (undefined1)((uint)uVar47 >> 0x10);
          uVar30 = (undefined1)((uint)uVar47 >> 0x18);
          uVar47 = *(undefined4 *)((long)puVar14 + 0xc);
          uVar35 = (undefined1)uVar47;
          uVar37 = (undefined1)((uint)uVar47 >> 8);
          uVar39 = (undefined1)((uint)uVar47 >> 0x10);
          uVar40 = (undefined1)((uint)uVar47 >> 0x18);
          puVar12 = puVar14 + 2;
        }
        if ((uVar15 & 2) != 0) {
          in_d5 = *puVar12;
          puVar12 = puVar12 + 1;
        }
        if ((uVar15 & 1) != 0) {
          in_d4 = CONCAT44(*(undefined4 *)puVar12,(int)in_d4);
        }
        uVar21 = (ulong)in_d4 >> 0x10;
        uVar20 = (ulong)in_d4 >> 0x30;
        uVar22 = (undefined1)in_d5;
        uVar16 = (ulong)in_d5 >> 0x10;
        uVar63 = (ulong)in_d5 >> 0x20;
        uVar17 = (ulong)in_d5 >> 0x30;
        uVar31 = (undefined1)((ulong)in_d4 >> 0x18);
        uVar33 = (undefined1)((ulong)in_d4 >> 0x38);
        uVar36 = (undefined1)((ulong)in_d5 >> 0x18);
        uVar38 = (undefined1)((ulong)in_d5 >> 0x38);
        uVar32 = (undefined1)((ulong)in_d6 >> 0x18);
        uVar34 = (undefined1)((ulong)in_d6 >> 0x38);
        in_d5 = CONCAT17(uVar37,CONCAT16(uVar24,CONCAT15((char)((ulong)in_d6 >> 0x28),
                                                         CONCAT14((char)((ulong)in_d6 >> 8),
                                                                  CONCAT13((char)((ulong)in_d5 >>
                                                                                 0x28),
                                                                           CONCAT12((char)((ulong)
                                                  in_d5 >> 8),
                                                  CONCAT11((char)((ulong)in_d4 >> 0x28),
                                                           (char)((ulong)in_d4 >> 8))))))));
        in_d4 = CONCAT17(uVar35,CONCAT16(uVar23,CONCAT15((char)((ulong)in_d6 >> 0x20),
                                                         CONCAT14((char)in_d6,
                                                                  CONCAT13((char)uVar63,
                                                                           CONCAT12(uVar22,CONCAT11(
                                                  (char)((ulong)in_d4 >> 0x20),(char)in_d4)))))));
        in_d6 = CONCAT17(uVar39,CONCAT16(uVar25,CONCAT15((char)((ulong)in_d6 >> 0x30),
                                                         CONCAT14((char)((ulong)in_d6 >> 0x10),
                                                                  CONCAT13((char)uVar17,
                                                                           CONCAT12((char)uVar16,
                                                                                    CONCAT11((char)
                                                  uVar20,(char)uVar21)))))));
        bVar51 = ~bVar29;
        bVar52 = ~bVar29;
        bVar53 = ~bVar29;
        bVar54 = ~bVar29;
        bVar55 = ~bVar29;
        bVar56 = ~bVar29;
        bVar57 = ~bVar29;
        bVar58 = ~bVar29;
        auVar41 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d4,1);
        auVar42 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d5,1);
        auVar43 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),in_d6,1);
        auVar44 = NEON_umull(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,
                                                  CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))))))),
                             CONCAT17(uVar40,CONCAT16(uVar30,CONCAT15(uVar34,CONCAT14(uVar32,
                                                  CONCAT13(uVar38,CONCAT12(uVar36,CONCAT11(uVar33,
                                                  uVar31))))))),1);
        auVar45 = NEON_urshr(auVar41,8,2);
        auVar46 = NEON_urshr(auVar42,8,2);
        auVar49 = NEON_urshr(auVar43,8,2);
        auVar50 = NEON_urshr(auVar44,8,2);
        uVar59 = NEON_raddhn(in_d28,auVar45,auVar41,2);
        uVar61 = NEON_raddhn(in_d29,auVar46,auVar42,2);
        uVar62 = NEON_raddhn(in_d30,auVar49,auVar43,2);
        uVar65 = NEON_raddhn(in_d31,auVar50,auVar44,2);
        uVar59 = NEON_uqadd(CONCAT17(uVar26,CONCAT16(uVar26,CONCAT15(uVar26,CONCAT14(uVar26,CONCAT13
                                                  (uVar26,CONCAT12(uVar26,CONCAT11(uVar26,uVar26))))
                                                  ))),uVar59,1);
        uVar61 = NEON_uqadd(CONCAT17(uVar27,CONCAT16(uVar27,CONCAT15(uVar27,CONCAT14(uVar27,CONCAT13
                                                  (uVar27,CONCAT12(uVar27,CONCAT11(uVar27,uVar27))))
                                                  ))),uVar61,1);
        uVar21 = NEON_uqadd(CONCAT17(uVar28,CONCAT16(uVar28,CONCAT15(uVar28,CONCAT14(uVar28,CONCAT13
                                                  (uVar28,CONCAT12(uVar28,CONCAT11(uVar28,uVar28))))
                                                  ))),uVar62,1);
        uVar62 = NEON_uqadd(CONCAT17(bVar29,CONCAT16(bVar29,CONCAT15(bVar29,CONCAT14(bVar29,CONCAT13
                                                  (bVar29,CONCAT12(bVar29,CONCAT11(bVar29,bVar29))))
                                                  ))),uVar65,1);
        uVar39 = (undefined1)(uVar21 >> 8);
        uVar23 = (undefined1)(uVar21 >> 0x18);
        uVar24 = (undefined1)(uVar21 >> 0x28);
        uVar25 = (undefined1)(uVar21 >> 0x38);
        uVar48 = CONCAT16(uVar24,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x28),
                                                 ((uint)(uVar21 >> 0x20) & 0xff) << 0x10));
        uVar47 = CONCAT13((char)((ulong)uVar62 >> 0x20),
                          (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                         CONCAT11((char)((ulong)uVar61 >> 0x20),
                                                  (char)((ulong)uVar59 >> 0x20))));
        in_d30 = CONCAT17((char)((ulong)uVar62 >> 0x28),
                          CONCAT16(uVar24,CONCAT15((char)((ulong)uVar61 >> 0x28),
                                                   (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                  uVar47))));
        uVar48 = CONCAT16(uVar25,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x38),
                                                 (uint)(byte)(uVar21 >> 0x30) << 0x10));
        uVar64 = CONCAT13((char)((ulong)uVar62 >> 0x30),
                          (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                         CONCAT11((char)((ulong)uVar61 >> 0x30),
                                                  (char)((ulong)uVar59 >> 0x30))));
        in_d31 = CONCAT17((char)((ulong)uVar62 >> 0x38),
                          CONCAT16(uVar25,CONCAT15((char)((ulong)uVar61 >> 0x38),
                                                   (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                  uVar64))));
        uVar48 = CONCAT16(uVar39,(uint6)CONCAT14((char)((ulong)uVar59 >> 8),
                                                 (int)((uVar21 & 0xff) << 0x10)));
        in_d28 = CONCAT17((char)((ulong)uVar62 >> 8),
                          CONCAT16(uVar39,CONCAT15((char)((ulong)uVar61 >> 8),
                                                   (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                  CONCAT13((char)uVar62,
                                                                           (int3)CONCAT52((int5)((
                                                  uint7)uVar48 >> 0x10),
                                                  CONCAT11((char)uVar61,(char)uVar59)))))));
        uVar48 = CONCAT16(uVar23,(uint6)CONCAT14((char)((ulong)uVar59 >> 0x18),
                                                 (uint)(byte)(uVar21 >> 0x10) << 0x10));
        uVar60 = CONCAT13((char)((ulong)uVar62 >> 0x10),
                          (int3)CONCAT52((int5)((uint7)uVar48 >> 0x10),
                                         CONCAT11((char)((ulong)uVar61 >> 0x10),
                                                  (char)((ulong)uVar59 >> 0x10))));
        in_d29 = CONCAT17((char)((ulong)uVar62 >> 0x18),
                          CONCAT16(uVar23,CONCAT15((char)((ulong)uVar61 >> 0x18),
                                                   (int5)CONCAT34((int3)((uint7)uVar48 >> 0x20),
                                                                  uVar60))));
        if ((uVar15 & 4) != 0) {
          *(undefined4 *)puVar14 = uVar47;
          *(int *)((long)puVar14 + 4) = (int)((ulong)in_d30 >> 0x20);
          *(undefined4 *)(puVar14 + 1) = uVar64;
          *(int *)((long)puVar14 + 0xc) = (int)((ulong)in_d31 >> 0x20);
          puVar14 = puVar14 + 2;
        }
        if ((uVar15 & 2) != 0) {
          *(undefined4 *)puVar14 = uVar60;
          *(int *)((long)puVar14 + 4) = (int)((ulong)in_d29 >> 0x20);
          puVar14 = puVar14 + 1;
        }
        if ((uVar15 & 1) != 0) {
          *(int *)puVar14 = (int)((ulong)in_d28 >> 0x20);
          puVar14 = (undefined8 *)((long)puVar14 + 4);
        }
      }
      param_3 = (undefined8 *)((long)puVar14 + uVar15 * -4 + (long)param_4 * 4);
      bVar11 = 0 < lVar18;
      lVar18 = lVar18 + -1;
    } while (bVar11);
  }
  return;
}


// ===== 001a12f0  FUN_001a12f0 =====

void FUN_001a12f0(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  uVar2 = (ulong)param_1;
  lVar6 = (long)param_2 + -1;
  if (0 < (long)param_2) {
    if (0xf < (long)uVar2) {
      do {
        uVar3 = uVar2;
        if (((ulong)param_3 & 0xf) != 0) {
          puVar7 = param_3;
          if (((ulong)param_3 & 4) != 0) {
            puVar7 = param_3 + 1;
            uVar3 = uVar2 - 1;
          }
          if (((ulong)puVar7 & 8) != 0) {
            uVar3 = uVar3 - 2;
          }
          uVar3 = uVar3 - 4;
          if (((ulong)param_3 & 4) != 0) {
            *param_3 = param_5;
            param_3 = param_3 + 1;
          }
          if (((ulong)param_3 & 8) != 0) {
            *param_3 = param_5;
            param_3[1] = param_5;
            param_3 = param_3 + 2;
          }
          *param_3 = param_5;
          param_3[1] = param_5;
          param_3[2] = param_5;
          param_3[3] = param_5;
          param_3 = param_3 + 4;
        }
        uVar5 = uVar3 - 0x10;
        uVar4 = uVar5;
        if (0xf < (long)uVar3) {
          do {
            *param_3 = param_5;
            param_3[1] = param_5;
            param_3[2] = param_5;
            param_3[3] = param_5;
            param_3[4] = param_5;
            param_3[5] = param_5;
            param_3[6] = param_5;
            param_3[7] = param_5;
            param_3 = param_3 + 8;
            uVar5 = uVar4 - 8;
            bVar1 = 7 < (long)uVar4;
            uVar4 = uVar5;
          } while (bVar1);
        }
        *param_3 = param_5;
        param_3[1] = param_5;
        param_3[2] = param_5;
        param_3[3] = param_5;
        param_3[4] = param_5;
        param_3[5] = param_5;
        param_3[6] = param_5;
        param_3[7] = param_5;
        puVar7 = param_3 + 8;
        if ((uVar5 & 7) != 0) {
          if ((uVar5 & 4) != 0) {
            *puVar7 = param_5;
            param_3[9] = param_5;
            param_3[10] = param_5;
            param_3[0xb] = param_5;
            puVar7 = param_3 + 0xc;
          }
          if ((uVar5 & 2) != 0) {
            *puVar7 = param_5;
            puVar7[1] = param_5;
            puVar7 = puVar7 + 2;
          }
          if ((uVar5 & 1) != 0) {
            *puVar7 = param_5;
            puVar7 = puVar7 + 1;
          }
        }
        param_3 = puVar7 + ((long)param_4 - uVar2);
        bVar1 = 0 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar1);
      return;
    }
    do {
      if ((uVar2 & 8) != 0) {
        *param_3 = param_5;
        param_3[1] = param_5;
        param_3[2] = param_5;
        param_3[3] = param_5;
        param_3[4] = param_5;
        param_3[5] = param_5;
        param_3[6] = param_5;
        param_3[7] = param_5;
        param_3 = param_3 + 8;
      }
      if ((uVar2 & 7) != 0) {
        if ((uVar2 & 4) != 0) {
          *param_3 = param_5;
          param_3[1] = param_5;
          param_3[2] = param_5;
          param_3[3] = param_5;
          param_3 = param_3 + 4;
        }
        if ((uVar2 & 2) != 0) {
          *param_3 = param_5;
          param_3[1] = param_5;
          param_3 = param_3 + 2;
        }
        if ((uVar2 & 1) != 0) {
          *param_3 = param_5;
          param_3 = param_3 + 1;
        }
      }
      param_3 = param_3 + ((long)param_4 - uVar2);
      bVar1 = 0 < lVar6;
      lVar6 = lVar6 + -1;
    } while (bVar1);
  }
  return;
}


// ===== 001a1524  FUN_001a1524 =====

void FUN_001a1524(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],int param_5,int param_6,undefined4 *param_7,int param_8,
                 undefined4 *param_9,int param_10)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  uVar19 = param_4._4_4_;
  uVar18 = param_4._0_4_;
  uVar17 = param_3._4_4_;
  uVar16 = param_3._0_4_;
  uVar15 = param_2._4_4_;
  uVar14 = param_2._0_4_;
  uVar13 = param_1._4_4_;
  uVar3 = (ulong)param_5;
  lVar7 = (long)param_6;
  uVar11 = 0;
  uVar10 = lVar7 * 0x10 - 6;
  if (0 < lVar7) {
    lVar8 = lVar7 + -1;
    lVar7 = lVar7 + -1;
    puVar12 = param_9;
    if (0xf < (long)uVar3) {
      do {
        uVar4 = uVar3;
        if (((ulong)param_7 & 0xf) != 0) {
          puVar9 = param_7;
          uVar6 = uVar11;
          if (((ulong)param_7 & 4) != 0) {
            uVar13 = *param_9;
            param_9 = param_9 + 1;
            puVar9 = param_7 + 1;
            uVar6 = uVar11 + 1;
            uVar4 = uVar3 - 1;
          }
          if (((ulong)puVar9 & 8) != 0) {
            uVar14 = *param_9;
            uVar15 = param_9[1];
            param_9 = param_9 + 2;
            uVar6 = uVar6 + 2;
            uVar4 = uVar4 - 2;
          }
          uVar16 = *param_9;
          uVar17 = param_9[1];
          uVar18 = param_9[2];
          uVar19 = param_9[3];
          param_9 = param_9 + 4;
          uVar11 = uVar6 + 4;
          uVar4 = uVar4 - 4;
          if ((uVar10 & 0xf) != 0) {
            uVar11 = uVar6 + 0xc;
            uVar10 = uVar10 - 1;
          }
          bVar1 = SBORROW8(uVar11,uVar3);
          bVar2 = uVar11 == uVar3;
          Hint_Prefetch(puVar12 + uVar11,0,0,0);
          uVar6 = uVar11 - uVar3;
          if ((long)uVar3 < (long)uVar11) {
            uVar11 = uVar11 - uVar3;
            bVar1 = SBORROW8(uVar10,0x10);
            uVar10 = uVar10 - 0x10;
            bVar2 = uVar10 == 0;
            uVar6 = uVar10;
          }
          if (!bVar2 && (long)uVar6 < 0 == bVar1) {
            puVar12 = (undefined4 *)((long)puVar12 + 1);
          }
          if (((ulong)param_7 & 4) != 0) {
            *param_7 = uVar13;
            param_7 = param_7 + 1;
          }
          if (((ulong)param_7 & 8) != 0) {
            *param_7 = uVar14;
            param_7[1] = uVar15;
            param_7 = param_7 + 2;
          }
          *param_7 = uVar16;
          param_7[1] = uVar17;
          param_7[2] = uVar18;
          param_7[3] = uVar19;
          param_7 = param_7 + 4;
        }
        uVar16 = *param_9;
        uVar13 = param_9[1];
        uVar14 = param_9[2];
        uVar15 = param_9[3];
        uVar17 = param_9[4];
        uVar18 = param_9[5];
        uVar19 = param_9[6];
        uVar20 = param_9[7];
        param_9 = param_9 + 8;
        uVar6 = uVar11 + 8;
        if ((uVar10 & 0xf) != 0) {
          uVar10 = uVar10 - 1;
          uVar6 = uVar11 + 0x10;
        }
        uVar11 = uVar6;
        bVar1 = SBORROW8(uVar11,uVar3);
        bVar2 = uVar11 == uVar3;
        Hint_Prefetch(puVar12 + uVar11,0,0,0);
        uVar6 = uVar11 - uVar3;
        if ((long)uVar3 < (long)uVar11) {
          uVar11 = uVar11 - uVar3;
          bVar1 = SBORROW8(uVar10,0x10);
          uVar10 = uVar10 - 0x10;
          bVar2 = uVar10 == 0;
          uVar6 = uVar10;
        }
        if (!bVar2 && (long)uVar6 < 0 == bVar1) {
          puVar12 = (undefined4 *)((long)puVar12 + 1);
        }
        uVar6 = uVar4 - 0x10;
        uVar5 = uVar6;
        if (0xf < (long)uVar4) {
          do {
            *param_7 = uVar16;
            param_7[1] = uVar13;
            param_7[2] = uVar14;
            param_7[3] = uVar15;
            param_7[4] = uVar17;
            param_7[5] = uVar18;
            param_7[6] = uVar19;
            param_7[7] = uVar20;
            param_7 = param_7 + 8;
            uVar16 = *param_9;
            uVar13 = param_9[1];
            uVar14 = param_9[2];
            uVar15 = param_9[3];
            uVar17 = param_9[4];
            uVar18 = param_9[5];
            uVar19 = param_9[6];
            uVar20 = param_9[7];
            param_9 = param_9 + 8;
            uVar4 = uVar11 + 8;
            if ((uVar10 & 0xf) != 0) {
              uVar10 = uVar10 - 1;
              uVar4 = uVar11 + 0x10;
            }
            uVar11 = uVar4;
            bVar1 = SBORROW8(uVar11,uVar3);
            bVar2 = uVar11 == uVar3;
            Hint_Prefetch(puVar12 + uVar11,0,0,0);
            uVar4 = uVar11 - uVar3;
            if ((long)uVar3 < (long)uVar11) {
              uVar11 = uVar11 - uVar3;
              bVar1 = SBORROW8(uVar10,0x10);
              uVar10 = uVar10 - 0x10;
              bVar2 = uVar10 == 0;
              uVar4 = uVar10;
            }
            if (!bVar2 && (long)uVar4 < 0 == bVar1) {
              puVar12 = (undefined4 *)((long)puVar12 + 1);
            }
            uVar6 = uVar5 - 8;
            bVar2 = 7 < (long)uVar5;
            uVar5 = uVar6;
          } while (bVar2);
        }
        *param_7 = uVar16;
        param_7[1] = uVar13;
        param_7[2] = uVar14;
        param_7[3] = uVar15;
        param_7[4] = uVar17;
        param_7[5] = uVar18;
        param_7[6] = uVar19;
        param_7[7] = uVar20;
        puVar9 = param_7 + 8;
        if ((uVar6 & 7) != 0) {
          if ((uVar6 & 4) != 0) {
            uVar17 = *param_9;
            uVar18 = param_9[1];
            uVar19 = param_9[2];
            uVar20 = param_9[3];
            param_9 = param_9 + 4;
            uVar11 = uVar11 + 4;
          }
          if ((uVar6 & 2) != 0) {
            uVar14 = *param_9;
            uVar15 = param_9[1];
            param_9 = param_9 + 2;
            uVar11 = uVar11 + 2;
          }
          if ((uVar6 & 1) != 0) {
            uVar13 = *param_9;
            param_9 = param_9 + 1;
            uVar11 = uVar11 + 1;
          }
          if ((uVar10 & 0xf) != 0) {
            uVar11 = uVar11 + 8;
            uVar10 = uVar10 - 1;
          }
          bVar1 = SBORROW8(uVar11,uVar3);
          bVar2 = uVar11 == uVar3;
          Hint_Prefetch(puVar12 + uVar11,0,0,0);
          uVar4 = uVar11 - uVar3;
          if ((long)uVar3 < (long)uVar11) {
            uVar11 = uVar11 - uVar3;
            bVar1 = SBORROW8(uVar10,0x10);
            uVar10 = uVar10 - 0x10;
            bVar2 = uVar10 == 0;
            uVar4 = uVar10;
          }
          if (!bVar2 && (long)uVar4 < 0 == bVar1) {
            puVar12 = (undefined4 *)((long)puVar12 + 1);
          }
          if ((uVar6 & 4) != 0) {
            *puVar9 = uVar17;
            param_7[9] = uVar18;
            param_7[10] = uVar19;
            param_7[0xb] = uVar20;
            puVar9 = param_7 + 0xc;
          }
          if ((uVar6 & 2) != 0) {
            *puVar9 = uVar14;
            puVar9[1] = uVar15;
            puVar9 = puVar9 + 2;
          }
          if ((uVar6 & 1) != 0) {
            *puVar9 = uVar13;
            puVar9 = puVar9 + 1;
          }
        }
        param_7 = puVar9 + ((long)param_8 - uVar3);
        param_9 = param_9 + ((long)param_10 - uVar3);
        bVar2 = 0 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar2);
      return;
    }
    do {
      if ((uVar3 & 8) != 0) {
        uVar20 = *param_9;
        uVar13 = param_9[1];
        uVar14 = param_9[2];
        uVar15 = param_9[3];
        uVar16 = param_9[4];
        uVar17 = param_9[5];
        uVar18 = param_9[6];
        uVar19 = param_9[7];
        param_9 = param_9 + 8;
        *param_7 = uVar20;
        param_7[1] = uVar13;
        param_7[2] = uVar14;
        param_7[3] = uVar15;
        param_7[4] = uVar16;
        param_7[5] = uVar17;
        param_7[6] = uVar18;
        param_7[7] = uVar19;
        param_7 = param_7 + 8;
      }
      if ((uVar3 & 7) != 0) {
        if ((uVar3 & 4) != 0) {
          uVar16 = *param_9;
          uVar17 = param_9[1];
          uVar18 = param_9[2];
          uVar19 = param_9[3];
          param_9 = param_9 + 4;
        }
        if ((uVar3 & 2) != 0) {
          uVar14 = *param_9;
          uVar15 = param_9[1];
          param_9 = param_9 + 2;
        }
        if ((uVar3 & 1) != 0) {
          uVar13 = *param_9;
          param_9 = param_9 + 1;
        }
        if ((uVar3 & 4) != 0) {
          *param_7 = uVar16;
          param_7[1] = uVar17;
          param_7[2] = uVar18;
          param_7[3] = uVar19;
          param_7 = param_7 + 4;
        }
        if ((uVar3 & 2) != 0) {
          *param_7 = uVar14;
          param_7[1] = uVar15;
          param_7 = param_7 + 2;
        }
        if ((uVar3 & 1) != 0) {
          *param_7 = uVar13;
          param_7 = param_7 + 1;
        }
      }
      param_7 = param_7 + ((long)param_8 - uVar3);
      param_9 = param_9 + ((long)param_10 - uVar3);
      bVar2 = 0 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar2);
  }
  return;
}


// ===== 001a18a0  std::__ndk1::condition_variable::notify_one =====

/* std::__ndk1::condition_variable::notify_one() */

int __thiscall std::__ndk1::condition_variable::notify_one(condition_variable *this)

{
  int iVar1;
  
                    /* try { // try from 001a18a8 to 001a18ab has its CatchHandler @ 001a18b4 */
  iVar1 = pthread_cond_signal((pthread_cond_t *)this);
  return iVar1;
}


// ===== 001a18b8  FUN_001a18b8 =====

void FUN_001a18b8(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 001a18c4  std::__ndk1::condition_variable::notify_all =====

/* std::__ndk1::condition_variable::notify_all() */

int __thiscall std::__ndk1::condition_variable::notify_all(condition_variable *this)

{
  int iVar1;
  
                    /* try { // try from 001a18cc to 001a18cf has its CatchHandler @ 001a18d8 */
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)this);
  return iVar1;
}


// ===== 001a18dc  std::__ndk1::condition_variable::wait =====

/* std::__ndk1::condition_variable::wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */

void __thiscall std::__ndk1::condition_variable::wait(condition_variable *this,unique_lock *param_1)

{
  int iVar1;
  
  if (param_1[8] == (unique_lock)0x0) {
                    /* try { // try from 001a1900 to 001a190f has its CatchHandler @ 001a191c */
                    /* WARNING: Subroutine does not return */
    __throw_system_error(1,"condition_variable::wait: mutex not locked");
  }
                    /* try { // try from 001a18f0 to 001a18f3 has its CatchHandler @ 001a1920 */
  iVar1 = pthread_cond_wait((pthread_cond_t *)this,*(pthread_mutex_t **)param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* try { // try from 001a1910 to 001a191b has its CatchHandler @ 001a1920 */
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"condition_variable wait failed");
}


// ===== 001a1924  std::__ndk1::condition_variable::__do_timed_wait =====

/* std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&,
   std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall
std::__ndk1::condition_variable::__do_timed_wait
          (condition_variable *this,undefined8 *param_1,long param_3)

{
  long lVar1;
  int iVar2;
  timespec local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 1) == '\0') {
                    /* try { // try from 001a19c0 to 001a19cf has its CatchHandler @ 001a19e0 */
                    /* WARNING: Subroutine does not return */
    __throw_system_error(1,"condition_variable::timed wait: mutex not locked");
  }
  if (0x59682f000000e940 < param_3) {
    param_3 = 0x59682f000000e941;
  }
  local_38.tv_sec = param_3 / 1000000000;
  local_38.tv_nsec = param_3 % 1000000000;
                    /* try { // try from 001a198c to 001a1993 has its CatchHandler @ 001a19e4 */
  iVar2 = pthread_cond_timedwait((pthread_cond_t *)this,(pthread_mutex_t *)*param_1,&local_38);
  if ((iVar2 != 0) && (iVar2 != 0x6e)) {
                    /* try { // try from 001a19d0 to 001a19db has its CatchHandler @ 001a19e4 */
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar2,"condition_variable timed_wait failed");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a19e8  std::__ndk1::notify_all_at_thread_exit =====

/* std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&,
   std::__ndk1::unique_lock<std::__ndk1::mutex>) */

void std::__ndk1::notify_all_at_thread_exit(mutex *param_1,undefined8 *param_2)

{
  pthread_key_t *ppVar1;
  void *pvVar2;
  __thread_struct *this;
  condition_variable *pcVar3;
  
  ppVar1 = (pthread_key_t *)__thread_local_data();
  pvVar2 = pthread_getspecific(*ppVar1);
  if (pvVar2 == (void *)0x0) {
    this = (__thread_struct *)operator_new(8);
                    /* try { // try from 001a1a20 to 001a1a23 has its CatchHandler @ 001a1a5c */
    __thread_struct::__thread_struct(this);
    pthread_setspecific(*ppVar1,this);
  }
  ppVar1 = (pthread_key_t *)__thread_local_data();
  pcVar3 = (condition_variable *)pthread_getspecific(*ppVar1);
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  __thread_struct::notify_all_at_thread_exit(pcVar3,param_1);
  return;
}


// ===== 001a1a70  std::__ndk1::condition_variable::~condition_variable =====

/* std::__ndk1::condition_variable::~condition_variable() */

int __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  int iVar1;
  
                    /* try { // try from 001a1a78 to 001a1a7b has its CatchHandler @ 001a1a84 */
  iVar1 = pthread_cond_destroy((pthread_cond_t *)this);
  return iVar1;
}


// ===== 001a1a88  std::__ndk1::__next_prime =====

/* std::__ndk1::__next_prime(unsigned long) */

ulong std::__ndk1::__next_prime(ulong param_1)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_1 < 0xd4) {
    uVar5 = 0x30;
    puVar4 = (uint *)&UNK_001472a0;
    do {
      uVar6 = uVar5 >> 1;
      puVar1 = puVar4 + uVar6 + 1;
      uVar5 = uVar5 + ~uVar6;
      if (param_1 <= puVar4[uVar6]) {
        puVar1 = puVar4;
        uVar5 = uVar6;
      }
      puVar4 = puVar1;
    } while (uVar5 != 0);
    return (ulong)*puVar1;
  }
  if (0xffffffffffffffc5 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_001a21cc("__next_prime overflow");
  }
  uVar5 = param_1 / 0xd2;
  uVar6 = 0x30;
  puVar4 = (uint *)&DAT_00147360;
  do {
    uVar8 = uVar6 >> 1;
    puVar1 = puVar4 + uVar8 + 1;
    uVar6 = uVar6 + ~uVar8;
    if (param_1 % 0xd2 <= (ulong)puVar4[uVar8]) {
      puVar1 = puVar4;
      uVar6 = uVar8;
    }
    puVar4 = puVar1;
  } while (uVar6 != 0);
  lVar9 = (long)(puVar1 + -0x51cd8) >> 2;
  do {
    lVar7 = lVar9;
    uVar6 = uVar5 * 0xd2 + (ulong)*(uint *)(&DAT_00147360 + lVar7 * 4);
    lVar9 = 0x14;
    do {
      uVar10 = (ulong)*(uint *)(&UNK_001472a0 + lVar9);
      uVar2 = 0;
      if (uVar10 != 0) {
        uVar2 = uVar6 / uVar10;
      }
      uVar3 = uVar6;
      if ((uVar2 < uVar10) || (uVar3 = uVar8, uVar6 == uVar2 * uVar10)) {
        if ((uVar2 < uVar10) || (uVar6 != uVar2 * uVar10)) {
          if (uVar2 < uVar10) {
            return uVar6;
          }
          return uVar8;
        }
        goto LAB_001a2198;
      }
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0xbc);
    uVar8 = 0xd3;
    do {
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = uVar6 / uVar8;
      }
      if (uVar2 < uVar8) {
        return uVar6;
      }
      if (uVar6 == uVar2 * uVar8) break;
      uVar2 = uVar8 + 10;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar2) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xc;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xc) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x10;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x10) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x12;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x12) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x16;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x16) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x1c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x1c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x1e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x1e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x24;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x24) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x28;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x28) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x2a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x2a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x2e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x2e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x34;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x34) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x3a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x3a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x3c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x3c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x42;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x42) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x46;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x46) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x48;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x48) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x4e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x4e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x52;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x52) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x58;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x58) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x60;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x60) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 100;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 100) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x66;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x66) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x6a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x6a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x6c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x6c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x70;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x70) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x78;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x78) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x7e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x7e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x82;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x82) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x88;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x88) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x8a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x8a) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x8e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x8e) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x94;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x94) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x96;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x96) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0x9c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0x9c) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xa2;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xa2) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xa6;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xa6) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xa8;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xa8) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xac;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xac) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xb2;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xb2) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xb4;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xb4) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xba;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xba) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xbe;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xbe) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xc0;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xc0) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xc4;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xc4) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xc6;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xc6) {
        return uVar6;
      }
      if (uVar6 == uVar10 * uVar2) break;
      uVar2 = uVar8 + 0xd0;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar6 / uVar2;
      }
      if (uVar10 < uVar8 + 0xd0) {
        return uVar6;
      }
      uVar8 = uVar8 + 0xd2;
    } while (uVar6 != uVar10 * uVar2);
LAB_001a2198:
    uVar8 = uVar3;
    if (lVar7 == 0x2f) {
      uVar5 = uVar5 + 1;
    }
    lVar9 = 0;
    if (lVar7 != 0x2f) {
      lVar9 = lVar7 + 1;
    }
  } while( true );
}


// ===== 001a21cc  FUN_001a21cc =====

void FUN_001a21cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 001a21e8 to 001a21ef has its CatchHandler @ 001a2208 */
  FUN_001a221c(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_0020f870,PTR__underflow_error_0020f878);
}


// ===== 001a221c  FUN_001a221c =====

void FUN_001a221c(runtime_error *param_1,char *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_0020f880 + 0x10;
  return;
}


// ===== 001a224c  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios =====

/* std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios() */

void __thiscall
std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
          (basic_ios<char,std::__ndk1::char_traits<char>> *this)

{
  (*(code *)PTR__ios_base_00210128)();
  return;
}


// ===== 001a2250  std::__ndk1::ios_base::~ios_base =====

/* std::__ndk1::ios_base::~ios_base() */

void __thiscall std::__ndk1::ios_base::~ios_base(ios_base *this)

{
  long lVar1;
  
  *(undefined **)this = PTR_vtable_0020f888 + 0x10;
  if (*(long *)(this + 0x48) != 0) {
    lVar1 = *(long *)(this + 0x48) + -1;
    do {
                    /* try { // try from 001a2288 to 001a2293 has its CatchHandler @ 001a22d0 */
      (**(code **)(*(long *)(this + 0x38) + lVar1 * 8))
                (0,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  locale::~locale((locale *)(this + 0x30));
  free(*(void **)(this + 0x38));
  free(*(void **)(this + 0x40));
  free(*(void **)(this + 0x58));
  free(*(void **)(this + 0x70));
  return;
}


// ===== 001a22d4  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios =====

/* std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios() */

void __thiscall
std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
          (basic_ios<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)this);
  operator_delete(this);
  return;
}


// ===== 001a22f8  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::copyfmt =====

/* std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char>
   >::copyfmt(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> > const&) */

basic_ios<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::copyfmt
          (basic_ios<char,std::__ndk1::char_traits<char>> *this,basic_ios *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (this != (basic_ios<char,std::__ndk1::char_traits<char>> *)param_1) {
    if (*(long *)(this + 0x48) != 0) {
      lVar3 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar3 * 8))
                  (0,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar3 * 4));
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
    }
    ios_base::copyfmt((ios_base *)this,(ios_base *)param_1);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
    if (*(long *)(this + 0x48) != 0) {
      lVar3 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar3 * 8))
                  (2,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar3 * 4));
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar2 = *(uint *)(this + 0x20) | (uint)(*(long *)(this + 0x28) == 0);
    *(uint *)(this + 0x20) = uVar2;
    *(uint *)(this + 0x24) = uVar1;
    if ((uVar2 & uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  return this;
}


// ===== 001a23d8  std::__ndk1::ios_base::__call_callbacks =====

/* std::__ndk1::ios_base::__call_callbacks(std::__ndk1::ios_base::event) */

void __thiscall std::__ndk1::ios_base::__call_callbacks(ios_base *this,undefined4 param_2)

{
  long lVar1;
  
  if (*(long *)(this + 0x48) != 0) {
    lVar1 = *(long *)(this + 0x48) + -1;
    do {
      (**(code **)(*(long *)(this + 0x38) + lVar1 * 8))
                (param_2,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  return;
}


// ===== 001a2430  std::__ndk1::ios_base::copyfmt =====

/* WARNING: Removing unreachable block (ram,0x001a269c) */
/* std::__ndk1::ios_base::copyfmt(std::__ndk1::ios_base const&) */

void __thiscall std::__ndk1::ios_base::copyfmt(ios_base *this,ios_base *param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *__ptr_01;
  void *__ptr_02;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x48);
  if (*(ulong *)(this + 0x50) < uVar4) {
    __ptr = malloc(uVar4 << 3);
    if (__ptr == (void *)0x0) {
                    /* try { // try from 001a2690 to 001a2693 has its CatchHandler @ 001a2694 */
      uVar1 = __throw_bad_alloc();
                    /* catch() { ... } // from try @ 001a2690 with catch @ 001a2694 */
                    /* WARNING: Subroutine does not return */
      FUN_00200e50(uVar1);
    }
    __ptr_00 = malloc(uVar4 << 2);
    if (__ptr_00 == (void *)0x0) {
                    /* try { // try from 001a247c to 001a247f has its CatchHandler @ 001a26cc */
      __throw_bad_alloc();
      goto LAB_001a2480;
    }
  }
  else {
LAB_001a2480:
    __ptr_00 = (void *)0x0;
    __ptr = (void *)0x0;
  }
  if (*(ulong *)(this + 0x68) < *(ulong *)(param_1 + 0x60)) {
    __ptr_01 = malloc(*(ulong *)(param_1 + 0x60) << 3);
    if (__ptr_01 == (void *)0x0) {
                    /* try { // try from 001a24a8 to 001a24ab has its CatchHandler @ 001a26a4 */
      __throw_bad_alloc();
      goto LAB_001a24ac;
    }
  }
  else {
LAB_001a24ac:
    __ptr_01 = (void *)0x0;
  }
  if (*(ulong *)(this + 0x80) < *(ulong *)(param_1 + 0x78)) {
    __ptr_02 = malloc(*(ulong *)(param_1 + 0x78) << 3);
    if (__ptr_02 != (void *)0x0) goto LAB_001a24d8;
                    /* try { // try from 001a24d0 to 001a24d3 has its CatchHandler @ 001a26a0 */
    __throw_bad_alloc();
  }
  __ptr_02 = (void *)0x0;
LAB_001a24d8:
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  locale::operator=((locale *)(this + 0x30),(locale *)(param_1 + 0x30));
  if (*(ulong *)(this + 0x50) < *(ulong *)(param_1 + 0x48)) {
    free(*(void **)(this + 0x38));
    *(void **)(this + 0x38) = __ptr;
    free(*(void **)(this + 0x40));
    *(void **)(this + 0x40) = __ptr_00;
    __ptr = (void *)0x0;
    __ptr_00 = (void *)0x0;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*(long *)(this + 0x38) + uVar4 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar4 * 8);
      lVar3 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(*(long *)(this + 0x40) + lVar3) =
           *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar3);
      *(ulong *)(this + 0x48) = uVar4;
    } while (uVar4 < *(ulong *)(param_1 + 0x48));
  }
  if (*(ulong *)(this + 0x68) < *(ulong *)(param_1 + 0x60)) {
    free(*(void **)(this + 0x58));
    *(void **)(this + 0x58) = __ptr_01;
    __ptr_01 = (void *)0x0;
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x60);
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    lVar2 = *(long *)(this + 0x58);
    uVar4 = 0;
    do {
      *(undefined8 *)(lVar2 + uVar4 * 8) = *(undefined8 *)(lVar3 + uVar4 * 8);
      uVar4 = *(long *)(this + 0x60) + 1;
      *(ulong *)(this + 0x60) = uVar4;
    } while (uVar4 < *(ulong *)(param_1 + 0x60));
  }
  if (*(ulong *)(this + 0x80) < *(ulong *)(param_1 + 0x78)) {
    free(*(void **)(this + 0x70));
    *(void **)(this + 0x70) = __ptr_02;
    __ptr_02 = (void *)0x0;
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x78);
  }
  *(undefined8 *)(this + 0x78) = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar4 = 0;
    do {
      lVar3 = uVar4 * 8;
      uVar4 = uVar4 + 1;
      *(undefined8 *)(*(long *)(this + 0x70) + lVar3) =
           *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar3);
      *(ulong *)(this + 0x78) = uVar4;
    } while (uVar4 < *(ulong *)(param_1 + 0x78));
  }
  if (__ptr_02 != (void *)0x0) {
    free(__ptr_02);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 001a26f0  std::__ndk1::basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ios =====

/* std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ios() */

void __thiscall
std::__ndk1::basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ios
          (basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  (*(code *)PTR__ios_base_00210128)();
  return;
}


// ===== 001a26f4  std::__ndk1::basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ios =====

/* std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ios() */

void __thiscall
std::__ndk1::basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ios
          (basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base::~ios_base((ios_base *)this);
  operator_delete(this);
  return;
}


// ===== 001a2718  std::__ndk1::basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>>::copyfmt =====

/* std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::copyfmt(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> > const&) */

basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>>::copyfmt
          (basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_ios *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if (this != (basic_ios<wchar_t,std::__ndk1::char_traits<wchar_t>> *)param_1) {
    if (*(long *)(this + 0x48) != 0) {
      lVar3 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar3 * 8))
                  (0,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar3 * 4));
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
    }
    ios_base::copyfmt((ios_base *)this,(ios_base *)param_1);
    *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
    if (*(long *)(this + 0x48) != 0) {
      lVar3 = *(long *)(this + 0x48) + -1;
      do {
        (**(code **)(*(long *)(this + 0x38) + lVar3 * 8))
                  (2,this,*(undefined4 *)(*(long *)(this + 0x40) + lVar3 * 4));
        lVar3 = lVar3 + -1;
      } while (lVar3 != -1);
    }
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar2 = *(uint *)(this + 0x20) | (uint)(*(long *)(this + 0x28) == 0);
    *(uint *)(this + 0x20) = uVar2;
    *(uint *)(this + 0x24) = uVar1;
    if ((uVar2 & uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  return this;
}


// ===== 001a27f8  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  *(undefined **)this = PTR_vtable_0020f890 + 0x10;
  locale::~locale((locale *)(this + 8));
  return;
}


// ===== 001a280c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  *(undefined **)this = PTR_vtable_0020f890 + 0x10;
  locale::~locale((locale *)(this + 8));
  operator_delete(this);
  return;
}


// ===== 001a2840  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubimbue =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubimbue(std::__ndk1::locale
   const&) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubimbue(locale *param_1)

{
  locale *in_x1;
  locale *in_x8;
  
  (**(code **)(*(long *)param_1 + 0x10))();
  locale::locale(in_x8,param_1 + 8);
  locale::operator=(param_1 + 8,in_x1);
  return;
}


// ===== 001a288c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::getloc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::getloc() const */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::getloc(void)

{
  long in_x0;
  locale *in_x8;
  
  locale::locale(in_x8,(locale *)(in_x0 + 8));
  return;
}


// ===== 001a2898  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubsetbuf =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubsetbuf(char*, long) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubsetbuf
               (char *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001a28a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))();
  return;
}


// ===== 001a28a4  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubseekoff =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubseekoff(long long,
   std::__ndk1::ios_base::seekdir, unsigned int) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubseekoff(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a28ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


// ===== 001a28b0  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubseekpos =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char>
   >::pubseekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubseekpos(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a28b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


// ===== 001a28bc  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubsync =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubsync() */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pubsync
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
                    /* WARNING: Could not recover jumptable at 0x001a28c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))();
  return;
}


// ===== 001a28c8  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::in_avail =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::in_avail() */

long __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::in_avail
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  long lVar1;
  
  if (*(ulong *)(this + 0x18) < *(ulong *)(this + 0x20)) {
    return *(ulong *)(this + 0x20) - *(ulong *)(this + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x001a28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(long *)this + 0x38))();
  return lVar1;
}


// ===== 001a28e8  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::snextc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::snextc() */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::snextc
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (*(byte **)(this + 0x18) == *(byte **)(this + 0x20)) {
    uVar1 = (**(code **)(*(long *)this + 0x50))(this);
    if ((int)uVar1 == -1) {
      return uVar1;
    }
    pbVar2 = *(byte **)(this + 0x18);
    if (pbVar2 == *(byte **)(this + 0x20)) goto LAB_001a2940;
  }
  else {
    pbVar2 = *(byte **)(this + 0x18) + 1;
    *(byte **)(this + 0x18) = pbVar2;
    if (pbVar2 == *(byte **)(this + 0x20)) {
LAB_001a2940:
                    /* WARNING: Could not recover jumptable at 0x001a2954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)this + 0x48))(this);
      return uVar1;
    }
  }
  return (ulong)*pbVar2;
}


// ===== 001a2964  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sbumpc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sbumpc() */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sbumpc
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = *(byte **)(this + 0x18);
  if (pbVar1 != *(byte **)(this + 0x20)) {
    *(byte **)(this + 0x18) = pbVar1 + 1;
    return (ulong)*pbVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x001a2988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x50))();
  return uVar2;
}


// ===== 001a298c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sgetc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sgetc() */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sgetc
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  ulong uVar1;
  
  if (*(byte **)(this + 0x18) != *(byte **)(this + 0x20)) {
    return (ulong)**(byte **)(this + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x001a29a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  return uVar1;
}


// ===== 001a29ac  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sgetn =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sgetn(char*, long) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sgetn
               (char *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001a29b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x40))();
  return;
}


// ===== 001a29b8  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sputbackc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sputbackc(char) */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sputbackc
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  if ((*(long *)(this + 0x10) != *(long *)(this + 0x18)) &&
     (pbVar2 = (byte *)(*(long *)(this + 0x18) + -1), *pbVar2 == param_1)) {
    *(byte **)(this + 0x18) = pbVar2;
    return (ulong)*pbVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x001a29e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x58))(this,param_1);
  return uVar1;
}


// ===== 001a29ec  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sungetc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sungetc() */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sungetc
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x10) != lVar1) {
    *(long *)(this + 0x18) = lVar1 + -1;
    return (ulong)*(byte *)(lVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001a2a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x58))(this,0xffffffff);
  return uVar2;
}


// ===== 001a2a18  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sputc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sputc(char) */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sputc
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  pcVar1 = *(char **)(this + 0x30);
  if (pcVar1 != *(char **)(this + 0x38)) {
    *(char **)(this + 0x30) = pcVar1 + 1;
    *pcVar1 = param_1;
    return (ulong)(byte)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x001a2a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x68))(this,param_1);
  return uVar2;
}


// ===== 001a2a4c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sputn =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sputn(char const*, long) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sputn
               (char *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001a2a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x60))();
  return;
}


// ===== 001a2a58  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf() */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  *(undefined **)this = PTR_vtable_0020f890 + 0x10;
  locale::locale((locale *)(this + 8));
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


// ===== 001a2a94  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char>
   >::basic_streambuf(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > const&) */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined8 uVar1;
  
  *(undefined **)this = PTR_vtable_0020f890 + 0x10;
  locale::locale((locale *)(this + 8),(locale *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}


// ===== 001a2ae8  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::operator= =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >
   const&) */

basic_streambuf<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::operator=
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined8 uVar1;
  
  locale::operator=((locale *)(this + 8),(locale *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar1;
  return this;
}


// ===== 001a2b30  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::swap =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char>
   >::swap(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::swap
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  long lVar1;
  undefined8 uVar2;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_50,(locale *)(this + 8));
  locale::operator=((locale *)(this + 8),(locale *)(param_1 + 8));
  locale::operator=((locale *)(param_1 + 8),alStack_50);
  locale::~locale(alStack_50);
  uVar2 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a2c1c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::gbump =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::gbump(int) */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::gbump
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)param_1;
  return;
}


// ===== 001a2c2c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::setg =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setg(char*, char*, char*) */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::setg
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char *param_1,char *param_2,
          char *param_3)

{
  *(char **)(this + 0x10) = param_1;
  *(char **)(this + 0x18) = param_2;
  *(char **)(this + 0x20) = param_3;
  return;
}


// ===== 001a2c38  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pbump =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pbump(int) */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pbump
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + (long)param_1;
  return;
}


// ===== 001a2c48  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::setp =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setp(char*, char*) */

void __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::setp
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char *param_1,char *param_2)

{
  *(char **)(this + 0x28) = param_1;
  *(char **)(this + 0x30) = param_1;
  *(char **)(this + 0x38) = param_2;
  return;
}


// ===== 001a2c54  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::imbue =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::imbue(std::__ndk1::locale
   const&) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::imbue(locale *param_1)

{
  return;
}


// ===== 001a2c58  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::setbuf =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setbuf(char*, long) */

void std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::setbuf
               (char *param_1,long param_2)

{
  return;
}


// ===== 001a2c5c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::seekoff =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::seekoff(long long,
   std::__ndk1::ios_base::seekdir, unsigned int) */

undefined1  [16] std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::seekoff(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 001a2c68  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::seekpos =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char>
   >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */

undefined1  [16] std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::seekpos(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 001a2c74  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sync =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sync() */

undefined8 std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::sync(void)

{
  return 0;
}


// ===== 001a2c7c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::showmanyc =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::showmanyc() */

undefined8 std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::showmanyc(void)

{
  return 0;
}


// ===== 001a2c84  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::xsgetn =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsgetn(char*, long) */

long __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::xsgetn
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  int iVar1;
  void *__src;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  size_t __n;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      __src = *(void **)(this + 0x18);
      if (__src < *(void **)(this + 0x20)) {
        sVar2 = (long)*(void **)(this + 0x20) - (long)__src;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (0x7ffffffe < (long)__n) {
          __n = 0x7fffffff;
        }
        if (__n != 0) {
          memcpy(param_1,__src,__n);
          __src = *(void **)(this + 0x18);
        }
        pcVar4 = param_1 + __n;
        *(long *)(this + 0x18) = (long)__src + (long)(int)__n;
      }
      else {
        iVar1 = (**(code **)(*(long *)this + 0x50))(this);
        if (iVar1 == -1) {
          return lVar3;
        }
        pcVar4 = param_1 + 1;
        *param_1 = (char)iVar1;
        __n = 1;
      }
      lVar3 = __n + lVar3;
      param_1 = pcVar4;
    } while (lVar3 < param_2);
  }
  return lVar3;
}


// ===== 001a2d4c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::underflow =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::underflow() */

undefined8 std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::underflow(void)

{
  return 0xffffffff;
}


// ===== 001a2d54  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::uflow =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::uflow() */

ulong __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::uflow
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  if ((int)uVar1 != -1) {
    pbVar2 = *(byte **)(this + 0x18);
    *(byte **)(this + 0x18) = pbVar2 + 1;
    uVar1 = (ulong)*pbVar2;
  }
  return uVar1;
}


// ===== 001a2d94  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pbackfail =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pbackfail(int) */

undefined8 std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::pbackfail(int param_1)

{
  return 0xffffffff;
}


// ===== 001a2d9c  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::xsputn =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsputn(char const*, long) */

long __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::xsputn
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  size_t __n;
  int iVar1;
  void *__dest;
  size_t sVar2;
  long lVar3;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      while( true ) {
        __dest = *(void **)(this + 0x30);
        if (*(void **)(this + 0x38) <= __dest) break;
        sVar2 = (long)*(void **)(this + 0x38) - (long)__dest;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (__n != 0) {
          memcpy(__dest,param_1,__n);
          __dest = *(void **)(this + 0x30);
        }
        param_1 = param_1 + __n;
        lVar3 = __n + lVar3;
        *(size_t *)(this + 0x30) = (long)__dest + __n;
        if (param_2 <= lVar3) {
          return lVar3;
        }
      }
      iVar1 = (**(code **)(*(long *)this + 0x68))(this,*param_1);
      if (iVar1 == -1) {
        return lVar3;
      }
      param_1 = param_1 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_2);
  }
  return lVar3;
}


// ===== 001a2e64  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::overflow =====

/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::overflow(int) */

undefined8 std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::overflow(int param_1)

{
  return 0xffffffff;
}


// ===== 001a2e6c  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_streambuf =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_streambuf() */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_streambuf
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  *(undefined **)this = PTR_vtable_0020f898 + 0x10;
  locale::~locale((locale *)(this + 8));
  return;
}


// ===== 001a2e80  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_streambuf =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_streambuf() */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_streambuf
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  *(undefined **)this = PTR_vtable_0020f898 + 0x10;
  locale::~locale((locale *)(this + 8));
  operator_delete(this);
  return;
}


// ===== 001a2eb4  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubimbue =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::pubimbue(std::__ndk1::locale const&) */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubimbue
               (locale *param_1)

{
  locale *in_x1;
  locale *in_x8;
  
  (**(code **)(*(long *)param_1 + 0x10))();
  locale::locale(in_x8,param_1 + 8);
  locale::operator=(param_1 + 8,in_x1);
  return;
}


// ===== 001a2f00  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::getloc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::getloc() const */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::getloc(void)

{
  long in_x0;
  locale *in_x8;
  
  locale::locale(in_x8,(locale *)(in_x0 + 8));
  return;
}


// ===== 001a2f0c  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubsetbuf =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubsetbuf(wchar_t*,
   long) */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubsetbuf
               (wchar_t *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001a2f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))();
  return;
}


// ===== 001a2f18  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubseekoff =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubseekoff(long long,
   std::__ndk1::ios_base::seekdir, unsigned int) */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubseekoff
               (long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a2f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


// ===== 001a2f24  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubseekpos =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::pubseekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubseekpos
               (long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a2f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}


// ===== 001a2f30  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubsync =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubsync() */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pubsync
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
                    /* WARNING: Could not recover jumptable at 0x001a2f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))();
  return;
}


// ===== 001a2f3c  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::in_avail =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::in_avail() */

long __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::in_avail
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  long lVar1;
  
  if (*(ulong *)(this + 0x18) < *(ulong *)(this + 0x20)) {
    return (long)(*(ulong *)(this + 0x20) - *(ulong *)(this + 0x18)) >> 2;
  }
                    /* WARNING: Could not recover jumptable at 0x001a2f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(*(long *)this + 0x38))();
  return lVar1;
}


// ===== 001a2f60  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::snextc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::snextc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::snextc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  
  puVar1 = *(uint **)(this + 0x18);
  if (puVar1 == *(uint **)(this + 0x20)) {
    uVar3 = (**(code **)(*(long *)this + 0x50))(this);
    uVar2 = (uint)uVar3;
  }
  else {
    *(uint **)(this + 0x18) = puVar1 + 1;
    uVar2 = *puVar1;
    uVar3 = (ulong)uVar2;
  }
  if (uVar2 != 0xffffffff) {
    if (*(uint **)(this + 0x18) == *(uint **)(this + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x001a2fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)this + 0x48))(this);
      return uVar3;
    }
    uVar3 = (ulong)**(uint **)(this + 0x18);
  }
  return uVar3;
}


// ===== 001a2fe0  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sbumpc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sbumpc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sbumpc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint *puVar1;
  ulong uVar2;
  
  puVar1 = *(uint **)(this + 0x18);
  if (puVar1 != *(uint **)(this + 0x20)) {
    *(uint **)(this + 0x18) = puVar1 + 1;
    return (ulong)*puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x001a3004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x50))();
  return uVar2;
}


// ===== 001a3008  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sgetc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sgetc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sgetc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ulong uVar1;
  
  if (*(uint **)(this + 0x18) != *(uint **)(this + 0x20)) {
    return (ulong)**(uint **)(this + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x001a3024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  return uVar1;
}


// ===== 001a3028  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sgetn =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sgetn(wchar_t*, long)
    */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sgetn
               (wchar_t *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001a3030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x40))();
  return;
}


// ===== 001a3034  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sputbackc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sputbackc(wchar_t) */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sputbackc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  ulong uVar1;
  wchar_t *pwVar2;
  
  if ((*(long *)(this + 0x10) != *(long *)(this + 0x18)) &&
     (pwVar2 = (wchar_t *)(*(long *)(this + 0x18) + -4), *pwVar2 == param_1)) {
    *(wchar_t **)(this + 0x18) = pwVar2;
    return (ulong)(uint)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x001a3060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x58))();
  return uVar1;
}


// ===== 001a3064  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sungetc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sungetc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sungetc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x10) != lVar1) {
    *(long *)(this + 0x18) = lVar1 + -4;
    return (ulong)*(uint *)(lVar1 + -4);
  }
                    /* WARNING: Could not recover jumptable at 0x001a308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x58))(this,0xffffffff);
  return uVar2;
}


// ===== 001a3090  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sputc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sputc(wchar_t) */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sputc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = *(wchar_t **)(this + 0x30);
  if (pwVar1 != *(wchar_t **)(this + 0x38)) {
    *(wchar_t **)(this + 0x30) = pwVar1 + 1;
    *pwVar1 = param_1;
    return (ulong)(uint)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x001a30b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x68))();
  return uVar2;
}


// ===== 001a30bc  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sputn =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sputn(wchar_t const*,
   long) */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sputn
               (wchar_t *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001a30c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x60))();
  return;
}


// ===== 001a30c8  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_streambuf =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_streambuf() */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_streambuf
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  *(undefined **)this = PTR_vtable_0020f898 + 0x10;
  locale::locale((locale *)(this + 8));
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


// ===== 001a3104  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_streambuf =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::basic_streambuf(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >
   const&) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_streambuf
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1
          )

{
  undefined8 uVar1;
  
  *(undefined **)this = PTR_vtable_0020f898 + 0x10;
  locale::locale((locale *)(this + 8),(locale *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}


// ===== 001a3158  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator= =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> > const&) */

basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator=
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1
          )

{
  undefined8 uVar1;
  
  locale::operator=((locale *)(this + 8),(locale *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar1;
  return this;
}


// ===== 001a31a0  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::swap =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::swap(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::swap
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1
          )

{
  long lVar1;
  undefined8 uVar2;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_50,(locale *)(this + 8));
  locale::operator=((locale *)(this + 8),(locale *)(param_1 + 8));
  locale::operator=((locale *)(param_1 + 8),alStack_50);
  locale::~locale(alStack_50);
  uVar2 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  uVar2 = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a328c  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::gbump =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::gbump(int) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::gbump
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,int param_1)

{
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)param_1 * 4;
  return;
}


// ===== 001a329c  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::setg =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::setg(wchar_t*,
   wchar_t*, wchar_t*) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::setg
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          wchar_t *param_2,wchar_t *param_3)

{
  *(wchar_t **)(this + 0x10) = param_1;
  *(wchar_t **)(this + 0x18) = param_2;
  *(wchar_t **)(this + 0x20) = param_3;
  return;
}


// ===== 001a32a8  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pbump =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pbump(int) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pbump
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,int param_1)

{
  *(long *)(this + 0x30) = *(long *)(this + 0x30) + (long)param_1 * 4;
  return;
}


// ===== 001a32b8  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::setp =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::setp(wchar_t*,
   wchar_t*) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::setp
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          wchar_t *param_2)

{
  *(wchar_t **)(this + 0x28) = param_1;
  *(wchar_t **)(this + 0x30) = param_1;
  *(wchar_t **)(this + 0x38) = param_2;
  return;
}


// ===== 001a32c4  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::imbue =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::imbue(std::__ndk1::locale const&) */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::imbue(locale *param_1)

{
  return;
}


// ===== 001a32c8  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::setbuf =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::setbuf(wchar_t*, long)
    */

void std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::setbuf
               (wchar_t *param_1,long param_2)

{
  return;
}


// ===== 001a32cc  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekoff =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekoff(long long,
   std::__ndk1::ios_base::seekdir, unsigned int) */

undefined1  [16]
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekoff(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 001a32d8  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekpos =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */

undefined1  [16]
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekpos(void)

{
  return ZEXT816(0xffffffffffffffff) << 0x40;
}


// ===== 001a32e4  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sync =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sync() */

undefined8 std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sync(void)

{
  return 0;
}


// ===== 001a32ec  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::showmanyc =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::showmanyc() */

undefined8 std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::showmanyc(void)

{
  return 0;
}


// ===== 001a32f4  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsgetn =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::xsgetn(wchar_t*, long)
    */

long __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsgetn
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  wchar_t wVar1;
  wchar_t *__s2;
  size_t sVar2;
  long lVar3;
  wchar_t *pwVar4;
  size_t __n;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      __s2 = *(wchar_t **)(this + 0x18);
      if (__s2 < *(wchar_t **)(this + 0x20)) {
        sVar2 = (long)*(wchar_t **)(this + 0x20) - (long)__s2 >> 2;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (0x7ffffffe < (long)__n) {
          __n = 0x7fffffff;
        }
        if (__n != 0) {
                    /* try { // try from 001a3370 to 001a337b has its CatchHandler @ 001a33c4 */
          wmemcpy(param_1,__s2,__n);
          __s2 = *(wchar_t **)(this + 0x18);
        }
        pwVar4 = param_1 + __n;
        *(long *)(this + 0x18) = (long)__s2 + ((long)(__n << 0x20) >> 0x1e);
      }
      else {
        wVar1 = (**(code **)(*(long *)this + 0x50))(this);
        if (wVar1 == L'\xffffffff') {
          return lVar3;
        }
        pwVar4 = param_1 + 1;
        *param_1 = wVar1;
        __n = 1;
      }
      lVar3 = __n + lVar3;
      param_1 = pwVar4;
    } while (lVar3 < param_2);
  }
  return lVar3;
}


// ===== 001a33c8  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::underflow =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::underflow() */

undefined8 std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::underflow(void)

{
  return 0xffffffff;
}


// ===== 001a33d0  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::uflow =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::uflow() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::uflow
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  if ((int)uVar1 != -1) {
    puVar2 = *(uint **)(this + 0x18);
    *(uint **)(this + 0x18) = puVar2 + 1;
    uVar1 = (ulong)*puVar2;
  }
  return uVar1;
}


// ===== 001a3410  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pbackfail =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pbackfail(unsigned
   int) */

undefined8
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::pbackfail(uint param_1)

{
  return 0xffffffff;
}


// ===== 001a3418  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsputn =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::xsputn(wchar_t const*,
   long) */

long __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsputn
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  size_t __n;
  int iVar1;
  wchar_t *__s1;
  size_t sVar2;
  long lVar3;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      while( true ) {
        __s1 = *(wchar_t **)(this + 0x30);
        if (*(wchar_t **)(this + 0x38) <= __s1) break;
        sVar2 = (long)*(wchar_t **)(this + 0x38) - (long)__s1 >> 2;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (__n != 0) {
                    /* try { // try from 001a3488 to 001a3493 has its CatchHandler @ 001a34e8 */
          wmemcpy(__s1,param_1,__n);
          __s1 = *(wchar_t **)(this + 0x30);
        }
        param_1 = param_1 + __n;
        lVar3 = __n + lVar3;
        *(wchar_t **)(this + 0x30) = __s1 + __n;
        if (param_2 <= lVar3) {
          return lVar3;
        }
      }
      iVar1 = (**(code **)(*(long *)this + 0x68))(this,*param_1);
      if (iVar1 == -1) {
        return lVar3;
      }
      param_1 = param_1 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_2);
  }
  return lVar3;
}


// ===== 001a34ec  std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::overflow =====

/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::overflow(unsigned int)
    */

undefined8
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::overflow(uint param_1)

{
  return 0xffffffff;
}


// ===== 001a34f4  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::basic_istream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::basic_istream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::basic_istream
               (basic_streambuf *param_1)

{
  undefined8 uVar1;
  long *in_x1;
  long in_x2;
  long lVar2;
  
  lVar2 = *in_x1;
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[1];
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = _DAT_001462d0;
  lVar2 = *(long *)(*(long *)param_1 + -0x18);
  *(undefined8 *)(param_1 + lVar2 + 0x18) = _UNK_001462d8;
  *(undefined8 *)(param_1 + lVar2 + 0x10) = uVar1;
  *(long *)(param_1 + lVar2 + 0x28) = in_x2;
  *(uint *)(param_1 + lVar2 + 0x20) = (uint)(in_x2 == 0);
  *(undefined4 *)(param_1 + lVar2 + 0x24) = 0;
  *(undefined4 *)(param_1 + lVar2 + 8) = 0x1002;
  *(undefined8 *)(param_1 + lVar2 + 0x40) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x38) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x50) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x48) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x60) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x58) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x70) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x68) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x80) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x78) = 0;
  locale::locale((locale *)(param_1 + lVar2 + 0x30));
  *(undefined8 *)(param_1 + lVar2 + 0x88) = 0;
  *(undefined4 *)(param_1 + lVar2 + 0x90) = 0xffffffff;
  return;
}


// ===== 001a3580  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::basic_istream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::basic_istream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_0020f8a0;
  uVar2 = _UNK_001462d8;
  uVar1 = _DAT_001462d0;
  *(basic_streambuf **)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x18) = 0x1002;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)(this + 0x10) = puVar3 + 0x40;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined **)this = puVar3 + 0x18;
  *(uint *)(this + 0x30) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  locale::locale((locale *)(this + 0x40));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  return;
}


// ===== 001a3604  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  return;
}


// ===== 001a3608  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 0x10));
  return;
}


// ===== 001a3610  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream =====

/* virtual thunk to std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + *(long *)(*(long *)this + -0x18) + 0x10));
  return;
}


// ===== 001a3624  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 0x10));
  operator_delete(this);
  return;
}


// ===== 001a364c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream =====

/* virtual thunk to std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  ios_base::~ios_base((ios_base *)(this + lVar1 + 0x10));
  operator_delete(this + lVar1);
  return;
}


// ===== 001a367c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::swap =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::swap(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::swap
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_istream *param_1)

{
  ios_base *this_00;
  ios_base *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  piVar1 = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  ios_base::swap(this_00,piVar1);
  uVar3 = *(undefined8 *)(this_00 + 0x88);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(piVar1 + 0x88);
  *(undefined8 *)(piVar1 + 0x88) = uVar3;
  uVar2 = *(undefined4 *)(this_00 + 0x90);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(piVar1 + 0x90);
  *(undefined4 *)(piVar1 + 0x90) = uVar2;
  return;
}


// ===== 001a36e8  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::sentry::sentry(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *this = (sentry)0x0;
  lVar5 = *(long *)(*(long *)param_1 + -0x18);
  if (*(uint *)(param_1 + lVar5 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(param_1 + lVar5 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(param_1 + lVar5 + 0x88));
    }
    if ((!param_2) && (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0)) {
      locale::locale(alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a3790 to 001a379f has its CatchHandler @ 001a3900 */
      lVar5 = locale::use_facet(alStack_50,(id *)PTR_id_0020f840);
      locale::~locale(alStack_50);
      plVar6 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
      while (plVar6 != (long *)0x0) {
        while( true ) {
          if ((plVar6[3] == plVar6[4]) &&
             (iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar4 == -1)) {
            plVar6 = (long *)0x0;
            goto LAB_001a37c0;
          }
          if ((byte *)plVar6[3] == (byte *)plVar6[4]) {
            bVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
          }
          else {
            bVar3 = *(byte *)plVar6[3];
          }
          if (((char)bVar3 < '\0') ||
             ((*(ulong *)(*(long *)(lVar5 + 0x10) + (ulong)bVar3 * 8) & 1) == 0)) goto LAB_001a37c0;
          if (plVar6[3] != plVar6[4]) break;
          (**(code **)(*plVar6 + 0x50))(plVar6);
          if (plVar6 == (long *)0x0) goto LAB_001a37c0;
        }
        plVar6[3] = plVar6[3] + 1;
      }
LAB_001a37c0:
      if ((plVar6 == (long *)0x0) ||
         ((plVar6[3] == plVar6[4] && (iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar4 == -1))))
      {
        lVar5 = *(long *)(*(long *)param_1 + -0x18);
        uVar1 = *(uint *)(param_1 + lVar5 + 0x20) | (uint)(*(long *)(param_1 + lVar5 + 0x28) == 0) |
                6;
        *(uint *)(param_1 + lVar5 + 0x20) = uVar1;
        if ((uVar1 & *(uint *)(param_1 + lVar5 + 0x24)) != 0) goto LAB_001a3748;
      }
    }
    *this = (sentry)(*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0);
  }
  else {
    uVar1 = *(uint *)(param_1 + lVar5 + 0x20) | (uint)(*(long *)(param_1 + lVar5 + 0x28) == 0) | 4;
    *(uint *)(param_1 + lVar5 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar5 + 0x24)) != 0) {
LAB_001a3748:
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a3914  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush() */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  sentry local_48 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)this;
  if (*(long *)(this + *(long *)(lVar4 + -0x18) + 0x28) != 0) {
    local_48[0] = (sentry)0x0;
    local_40 = this;
    if (*(int *)(this + *(long *)(lVar4 + -0x18) + 0x20) == 0) {
      if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
           (this + *(long *)(lVar4 + -0x18) + 0x88) !=
          (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001a396c to 001a396f has its CatchHandler @ 001a39fc */
        flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
               (this + *(long *)(lVar4 + -0x18) + 0x88));
        lVar4 = *(long *)this;
      }
      local_48[0] = (sentry)0x1;
                    /* try { // try from 001a3990 to 001a3993 has its CatchHandler @ 001a3a04 */
      iVar3 = (**(code **)(**(long **)(this + *(long *)(lVar4 + -0x18) + 0x28) + 0x30))();
      if (iVar3 == -1) {
        lVar4 = *(long *)(*(long *)this + -0x18);
        uVar1 = *(uint *)(this + lVar4 + 0x20);
        *(uint *)(this + lVar4 + 0x20) = uVar1 | 1;
        if ((*(uint *)(this + lVar4 + 0x24) & (uVar1 | 1)) != 0) {
                    /* try { // try from 001a39f0 to 001a39fb has its CatchHandler @ 001a3a04 */
                    /* WARNING: Subroutine does not return */
          FUN_001aedec("ios_base::clear");
        }
      }
    }
    sentry::~sentry(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3a58  std::__ndk1::ios_base::getloc =====

/* std::__ndk1::ios_base::getloc() const */

void std::__ndk1::ios_base::getloc(void)

{
  long in_x0;
  locale *in_x8;
  
  locale::locale(in_x8,(locale *)(in_x0 + 0x30));
  return;
}


// ===== 001a3a64  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   (*)(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&)) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,
          _func_basic_istream_ptr_basic_istream_ptr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a3a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)((basic_istream *)this);
  return;
}


// ===== 001a3a68  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >&
   (*)(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >&)) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,
          _func_basic_ios_ptr_basic_ios_ptr *param_1)

{
  (*param_1)((basic_ios *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001a3a98  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,
          _func_ios_base_ptr_ios_base_ptr *param_1)

{
  (*param_1)((ios_base *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001a3ac8  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*)
    */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) != 0) {
    uVar2 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar6 = uVar2 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar2;
    goto joined_r0x001a3b14;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 != (basic_streambuf *)0x0) {
LAB_001a3b58:
    plVar4 = *(long **)(this + lVar5 + 0x28);
    if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
                    /* try { // try from 001a3b78 to 001a3be7 has its CatchHandler @ 001a3c68 */
      uVar2 = (**(code **)(*plVar4 + 0x48))();
      if (uVar2 == 0xffffffff) {
        uVar2 = 2;
        goto LAB_001a3c08;
      }
    }
    else {
      uVar2 = (uint)*(byte *)plVar4[3];
    }
    puVar1 = *(undefined1 **)(param_1 + 0x30);
    if (puVar1 == *(undefined1 **)(param_1 + 0x38)) {
      iVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1,uVar2 & 0xff);
      if (iVar3 == -1) goto LAB_001a3c04;
    }
    else {
      *(undefined1 **)(param_1 + 0x30) = puVar1 + 1;
      *puVar1 = (char)uVar2;
    }
    lVar5 = *(long *)this;
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
    plVar4 = *(long **)(this + *(long *)(lVar5 + -0x18) + 0x28);
    if (plVar4[3] == plVar4[4]) {
      (**(code **)(*plVar4 + 0x50))();
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
    else {
      plVar4[3] = plVar4[3] + 1;
      lVar5 = *(long *)(lVar5 + -0x18);
    }
    goto LAB_001a3b58;
  }
  uVar6 = 4;
  goto LAB_001a3c18;
LAB_001a3c04:
  uVar2 = 0;
LAB_001a3c08:
  uVar6 = uVar2 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar6 = uVar2;
  }
LAB_001a3c18:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar2 = *(uint *)(this + lVar5 + 0x20) | uVar6 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar6 = uVar2 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar2;
joined_r0x001a3b14:
  if (uVar6 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a3cc4  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(bool&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,bool *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3cc8  FUN_001a3cc8 =====

basic_istream * FUN_001a3cc8(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a3d24 to 001a3d5b has its CatchHandler @ 001a3dd0 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3e38  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(short&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,short *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  locale alStack_50 [8];
  long lStack_48;
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] == (sentry)0x0) goto LAB_001a3f4c;
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8a8);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
             this + *(long *)(*(long *)this + -0x18),&uStack_3c,&lStack_48);
  locale::~locale(alStack_50);
  if (lStack_48 < -0x8000) {
    sVar5 = -0x8000;
LAB_001a3f04:
    uStack_3c = uStack_3c | 4;
    *param_1 = sVar5;
  }
  else {
    if (0x7fff < lStack_48) {
      sVar5 = 0x7fff;
      goto LAB_001a3f04;
    }
    *param_1 = (short)lStack_48;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a3f4c:
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3e3c  FUN_001a3e3c =====

basic_istream * FUN_001a3e3c(basic_istream *param_1,undefined2 *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined2 uVar5;
  locale alStack_50 [8];
  long local_48;
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] == (sentry)0x0) goto LAB_001a3f4c;
  std::__ndk1::locale::locale
            (alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a3e98 to 001a3ecf has its CatchHandler @ 001a3f84 */
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_50,(id *)PTR_id_0020f8a8);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
             param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,&local_48);
  std::__ndk1::locale::~locale(alStack_50);
  if (local_48 < -0x8000) {
    uVar5 = 0x8000;
LAB_001a3f04:
    local_3c = local_3c | 4;
    *param_2 = uVar5;
  }
  else {
    if (0x7fff < local_48) {
      uVar5 = 0x7fff;
      goto LAB_001a3f04;
    }
    *param_2 = (short)local_48;
  }
  lVar4 = *(long *)(*(long *)param_1 + -0x18);
  uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
          (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
  *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a3f4c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3fec  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned short&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,ushort *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x30))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a3ff0  FUN_001a3ff0 =====

basic_istream * FUN_001a3ff0(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a404c to 001a4083 has its CatchHandler @ 001a40f8 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x30))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4160  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(int&)
    */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,int *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  locale alStack_50 [8];
  long lStack_48;
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] == (sentry)0x0) goto LAB_001a4278;
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8a8);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
             this + *(long *)(*(long *)this + -0x18),&uStack_3c,&lStack_48);
  locale::~locale(alStack_50);
  if (lStack_48 < -0x80000000) {
    iVar5 = -0x80000000;
LAB_001a4230:
    uStack_3c = uStack_3c | 4;
    *param_1 = iVar5;
  }
  else {
    if (0x7fffffff < lStack_48) {
      iVar5 = 0x7fffffff;
      goto LAB_001a4230;
    }
    *param_1 = (int)lStack_48;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a4278:
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4164  FUN_001a4164 =====

basic_istream * FUN_001a4164(basic_istream *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  locale alStack_50 [8];
  long local_48;
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] == (sentry)0x0) goto LAB_001a4278;
  std::__ndk1::locale::locale
            (alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a41c0 to 001a41f7 has its CatchHandler @ 001a42b0 */
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_50,(id *)PTR_id_0020f8a8);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
             param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,&local_48);
  std::__ndk1::locale::~locale(alStack_50);
  if (local_48 < -0x80000000) {
    uVar5 = 0x80000000;
LAB_001a4230:
    local_3c = local_3c | 4;
    *param_2 = uVar5;
  }
  else {
    if (0x7fffffff < local_48) {
      uVar5 = 0x7fffffff;
      goto LAB_001a4230;
    }
    *param_2 = (int)local_48;
  }
  lVar4 = *(long *)(*(long *)param_1 + -0x18);
  uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
          (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
  *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a4278:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4318  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned int&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,uint *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x38))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a431c  FUN_001a431c =====

basic_istream * FUN_001a431c(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a4378 to 001a43af has its CatchHandler @ 001a4424 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x38))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a448c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(long&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x20))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4490  FUN_001a4490 =====

basic_istream * FUN_001a4490(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a44ec to 001a4523 has its CatchHandler @ 001a4598 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x20))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4600  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,ulong *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x40))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4604  FUN_001a4604 =====

basic_istream * FUN_001a4604(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a4660 to 001a4697 has its CatchHandler @ 001a470c */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x40))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4774  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(long
   long&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,longlong *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x28))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4778  FUN_001a4778 =====

basic_istream * FUN_001a4778(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a47d4 to 001a480b has its CatchHandler @ 001a4880 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x28))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a48e8  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long long&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,ulonglong *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x48))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a48ec  FUN_001a48ec =====

basic_istream * FUN_001a48ec(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a4948 to 001a497f has its CatchHandler @ 001a49f4 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x48))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4a5c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(float&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,float *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x50))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4a60  FUN_001a4a60 =====

basic_istream * FUN_001a4a60(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a4abc to 001a4af3 has its CatchHandler @ 001a4b68 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x50))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4bd0  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(double&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,double *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x58))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4bd4  FUN_001a4bd4 =====

basic_istream * FUN_001a4bd4(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a4c30 to 001a4c67 has its CatchHandler @ 001a4cdc */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x58))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4d44  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(long
   double&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,longdouble *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x60))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4d48  FUN_001a4d48 =====

basic_istream * FUN_001a4d48(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a4da4 to 001a4ddb has its CatchHandler @ 001a4e50 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x60))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4eb8  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>> =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(void*&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::operator>>
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,void **param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x68))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a4ebc  FUN_001a4ebc =====

basic_istream * FUN_001a4ebc(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a4f18 to 001a4f4f has its CatchHandler @ 001a4fc4 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8a8);
    (**(code **)(*plVar3 + 0x68))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a502c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get() */

uint __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) != 0) {
    uVar3 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar3;
    if ((uVar3 & *(uint *)(this + lVar4 + 0x24)) == 0) {
      return 0xffffffff;
    }
    goto LAB_001a5130;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
    lVar4 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar4 + 0x20) != 0) {
      return 0xffffffff;
    }
  }
  plVar2 = *(long **)(this + lVar4 + 0x28);
  pbVar1 = (byte *)plVar2[3];
  if (pbVar1 == (byte *)plVar2[4]) {
                    /* try { // try from 001a50cc to 001a50cf has its CatchHandler @ 001a513c */
    uVar3 = (**(code **)(*plVar2 + 0x50))();
    if (uVar3 != 0xffffffff) goto LAB_001a50dc;
    uVar5 = 6;
  }
  else {
    plVar2[3] = (long)(pbVar1 + 1);
    uVar3 = (uint)*pbVar1;
LAB_001a50dc:
    uVar5 = 0;
    *(undefined8 *)(this + 8) = 1;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return uVar3;
  }
LAB_001a5130:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a5190  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char&) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1)

{
  int iVar1;
  
  iVar1 = get(this);
  if (iVar1 != -1) {
    *param_1 = (char)iVar1;
  }
  return this;
}


// ===== 001a51c4  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char*, long) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
                    /* try { // try from 001a520c to 001a522b has its CatchHandler @ 001a5278 */
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f840);
  cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  locale::~locale(alStack_50);
  get(this,param_1,param_2,cVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a528c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a5434;
    }
    if (param_2 < 1) {
      uVar3 = 4;
    }
    else {
      lVar5 = *(long *)(this + 8);
      if (lVar5 < param_2 + -1) {
        while( true ) {
          plVar2 = *(long **)(this + lVar4 + 0x28);
          if ((byte *)plVar2[3] == (byte *)plVar2[4]) {
                    /* try { // try from 001a534c to 001a534f has its CatchHandler @ 001a5470 */
            uVar1 = (**(code **)(*plVar2 + 0x48))();
            if (uVar1 == 0xffffffff) {
              uVar1 = 2;
              goto LAB_001a53f0;
            }
          }
          else {
            uVar1 = (uint)*(byte *)plVar2[3];
          }
          if ((uVar1 & 0xff) == (uint)(byte)param_3) {
            uVar1 = 0;
            goto LAB_001a53f0;
          }
          *param_1 = (char)uVar1;
          lVar4 = *(long *)(this + 8) + 1;
          *(long *)(this + 8) = lVar4;
          plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
          if (plVar2[3] == plVar2[4]) {
                    /* try { // try from 001a53a8 to 001a53ab has its CatchHandler @ 001a5468 */
            (**(code **)(*plVar2 + 0x50))();
            lVar4 = *(long *)(this + 8);
          }
          else {
            plVar2[3] = plVar2[3] + 1;
          }
          if (param_2 + -1 <= lVar4) break;
          lVar4 = *(long *)(*(long *)this + -0x18);
          param_1 = param_1 + 1;
        }
        uVar1 = 0;
        param_1 = param_1 + 1;
LAB_001a53f0:
        lVar5 = *(long *)(this + 8);
      }
      else {
        uVar1 = 0;
      }
      uVar3 = uVar1 | 4;
      if (lVar5 != 0) {
        uVar3 = uVar1;
      }
      *param_1 = '\0';
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uVar3 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    uVar3 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    uVar3 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a5434:
  if (0 < param_2) {
    *param_1 = '\0';
  }
  return this;
}


// ===== 001a54c4  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::get(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  locale alStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_40,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
                    /* try { // try from 001a5504 to 001a5523 has its CatchHandler @ 001a5568 */
  plVar3 = (long *)locale::use_facet(alStack_40,(id *)PTR_id_0020f840);
  cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  locale::~locale(alStack_40);
  get(this,param_1,cVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a557c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::get(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >&, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::get
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1,
          char param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar6 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar6 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar6 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar6 + 0x88));
      lVar6 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar6 + 0x20) != 0) {
        return this;
      }
    }
    while( true ) {
      plVar5 = *(long **)(this + lVar6 + 0x28);
      if ((byte *)plVar5[3] == (byte *)plVar5[4]) {
                    /* try { // try from 001a562c to 001a562f has its CatchHandler @ 001a571c */
        uVar3 = (**(code **)(*plVar5 + 0x48))();
        if (uVar3 == 0xffffffff) {
          uVar3 = 2;
          goto LAB_001a56c0;
        }
      }
      else {
        uVar3 = (uint)*(byte *)plVar5[3];
      }
      if ((uVar3 & 0xff) == (uint)(byte)param_2) break;
      puVar1 = *(undefined1 **)(param_1 + 0x30);
      if (puVar1 == *(undefined1 **)(param_1 + 0x38)) {
                    /* try { // try from 001a566c to 001a56a7 has its CatchHandler @ 001a5720 */
        iVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1,uVar3 & 0xff);
        if (iVar4 == -1) break;
      }
      else {
        *(undefined1 **)(param_1 + 0x30) = puVar1 + 1;
        *puVar1 = (char)uVar3;
      }
      lVar6 = *(long *)this;
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      plVar5 = *(long **)(this + *(long *)(lVar6 + -0x18) + 0x28);
      if (plVar5[3] == plVar5[4]) {
        (**(code **)(*plVar5 + 0x50))();
        lVar6 = *(long *)(*(long *)this + -0x18);
      }
      else {
        plVar5[3] = plVar5[3] + 1;
        lVar6 = *(long *)(lVar6 + -0x18);
      }
    }
    uVar3 = 0;
LAB_001a56c0:
    lVar6 = *(long *)(*(long *)this + -0x18);
    uVar2 = uVar3 | 4;
    if (*(long *)(this + 8) != 0) {
      uVar2 = uVar3;
    }
    uVar3 = *(uint *)(this + lVar6 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar6 + 0x28) == 0);
    uVar2 = uVar3 & *(uint *)(this + lVar6 + 0x24);
    *(uint *)(this + lVar6 + 0x20) = uVar3;
  }
  else {
    uVar3 = *(uint *)(this + lVar6 + 0x20) | (uint)(*(long *)(this + lVar6 + 0x28) == 0) | 4;
    uVar2 = uVar3 & *(uint *)(this + lVar6 + 0x24);
    *(uint *)(this + lVar6 + 0x20) = uVar3;
  }
  if (uVar2 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a5730  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::getline(char*, long) */

void __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
                    /* try { // try from 001a5778 to 001a5797 has its CatchHandler @ 001a57e4 */
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f840);
  cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,10);
  locale::~locale(alStack_50);
  getline(this,param_1,param_2,cVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a57f8  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::getline(char*, long, char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::getline
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2,
          char param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a5858;
    }
    while( true ) {
      plVar3 = *(long **)(this + lVar4 + 0x28);
      if ((byte *)plVar3[3] == (byte *)plVar3[4]) {
                    /* try { // try from 001a592c to 001a592f has its CatchHandler @ 001a59f4 */
        uVar2 = (**(code **)(*plVar3 + 0x48))();
        if (uVar2 == 0xffffffff) {
          uVar2 = 2;
          goto LAB_001a585c;
        }
      }
      else {
        uVar2 = (uint)*(byte *)plVar3[3];
      }
      if ((uVar2 & 0xff) == (uint)(byte)param_3) {
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar3[3] == plVar3[4]) {
                    /* try { // try from 001a59c4 to 001a59c7 has its CatchHandler @ 001a59e8 */
          (**(code **)(*plVar3 + 0x50))();
        }
        else {
          plVar3[3] = plVar3[3] + 1;
        }
        uVar2 = 0;
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
        goto LAB_001a585c;
      }
      if (param_2 + -1 <= *(long *)(this + 8)) break;
      *param_1 = (char)uVar2;
      lVar4 = *(long *)this;
      plVar3 = *(long **)(this + *(long *)(lVar4 + -0x18) + 0x28);
      if (plVar3[3] == plVar3[4]) {
                    /* try { // try from 001a5978 to 001a597b has its CatchHandler @ 001a59ec */
        (**(code **)(*plVar3 + 0x50))();
        lVar4 = *(long *)this;
      }
      else {
        plVar3[3] = plVar3[3] + 1;
      }
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      lVar4 = *(long *)(lVar4 + -0x18);
      param_1 = param_1 + 1;
    }
    uVar2 = 4;
  }
  else {
    uVar2 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar2;
    if ((uVar2 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a59dc;
LAB_001a5858:
    uVar2 = 0;
  }
LAB_001a585c:
  if (0 < param_2) {
    *param_1 = '\0';
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar1 = uVar2 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar1 = uVar2;
  }
  uVar2 = *(uint *)(this + lVar4 + 0x20) | uVar1 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_001a59dc:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a5a50  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::ignore =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::ignore(long, int) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::ignore
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,long param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) != 0) {
    uVar3 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar2 = uVar3 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar3;
    goto joined_r0x001a5a9c;
  }
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 == 0x7fffffffffffffff) {
    while( true ) {
      plVar4 = *(long **)(this + lVar5 + 0x28);
      pbVar1 = (byte *)plVar4[3];
      if (pbVar1 == (byte *)plVar4[4]) {
                    /* try { // try from 001a5b04 to 001a5b07 has its CatchHandler @ 001a5bf4 */
        uVar3 = (**(code **)(*plVar4 + 0x50))();
        if (uVar3 == 0xffffffff) goto LAB_001a5b9c;
      }
      else {
        plVar4[3] = (long)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      if (uVar3 == param_2) break;
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
  }
  else {
    lVar5 = *(long *)(this + 8);
    do {
      if (param_1 <= lVar5) break;
      plVar4 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      pbVar1 = (byte *)plVar4[3];
      if (pbVar1 == (byte *)plVar4[4]) {
                    /* try { // try from 001a5b7c to 001a5b7f has its CatchHandler @ 001a5bf0 */
        uVar3 = (**(code **)(*plVar4 + 0x50))();
        if (uVar3 == 0xffffffff) goto LAB_001a5b9c;
        lVar5 = *(long *)(this + 8);
      }
      else {
        plVar4[3] = (long)(pbVar1 + 1);
        uVar3 = (uint)*pbVar1;
      }
      lVar5 = lVar5 + 1;
      *(long *)(this + 8) = lVar5;
    } while (uVar3 != param_2);
  }
  uVar3 = 0;
  goto LAB_001a5ba0;
LAB_001a5b9c:
  uVar3 = 2;
LAB_001a5ba0:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar3 = *(uint *)(this + lVar5 + 0x20) | uVar3 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar2 = uVar3 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar3;
joined_r0x001a5a9c:
  if (uVar2 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a5c44  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::peek() */

uint __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::peek
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a5c8c;
    }
    plVar2 = *(long **)(this + lVar4 + 0x28);
    if ((byte *)plVar2[3] == (byte *)plVar2[4]) {
                    /* try { // try from 001a5cdc to 001a5cdf has its CatchHandler @ 001a5d3c */
      uVar3 = (**(code **)(*plVar2 + 0x48))();
    }
    else {
      uVar3 = (uint)*(byte *)plVar2[3];
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(uVar3 == 0xffffffff) << 1 |
            (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
LAB_001a5d30:
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  else {
    uVar3 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar3;
    if ((uVar3 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a5d30;
LAB_001a5c8c:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// ===== 001a5d90  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::read =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::read(char*, long) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::read
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar2 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar2 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar2 + 0x88));
      lVar2 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar2 + 0x20) != 0) goto LAB_001a5de0;
    }
                    /* try { // try from 001a5e20 to 001a5e2b has its CatchHandler @ 001a5e8c */
    lVar2 = (**(code **)(**(long **)(this + lVar2 + 0x28) + 0x40))
                      (*(long **)(this + lVar2 + 0x28),param_1,param_2);
    *(long *)(this + 8) = lVar2;
    uVar1 = 0;
    if (lVar2 != param_2) {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar2 + 0x20) | (uint)(*(long *)(this + lVar2 + 0x28) == 0) | 4;
    *(uint *)(this + lVar2 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar2 + 0x24)) != 0) goto LAB_001a5e80;
LAB_001a5de0:
    uVar1 = 4;
  }
  lVar2 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar2 + 0x20) | uVar1 | (uint)(*(long *)(this + lVar2 + 0x28) == 0);
  *(uint *)(this + lVar2 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar2 + 0x24)) == 0) {
    return this;
  }
LAB_001a5e80:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a5edc  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::readsome =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::readsome(char*, long) */

undefined8 __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::readsome
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  *(undefined8 *)(this + 8) = 0;
  lVar3 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar3 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88));
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_001a5f2c;
    }
    plVar1 = *(long **)(this + lVar3 + 0x28);
    if ((ulong)plVar1[3] < (ulong)plVar1[4]) {
      lVar3 = plVar1[4] - plVar1[3];
    }
    else {
                    /* try { // try from 001a5fc0 to 001a600f has its CatchHandler @ 001a6030 */
      lVar3 = (**(code **)(*plVar1 + 0x38))();
    }
    if (lVar3 == -1) {
      uVar2 = 2;
    }
    else if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      if (lVar3 <= param_2) {
        param_2 = lVar3;
      }
      lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x40))
                        (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,param_2)
      ;
      *(long *)(this + 8) = lVar3;
      uVar2 = 0;
      if (lVar3 != param_2) {
        uVar2 = 6;
      }
    }
  }
  else {
    uVar2 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
    *(uint *)(this + lVar3 + 0x20) = uVar2;
    if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_001a6024;
LAB_001a5f2c:
    uVar2 = 4;
  }
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar2 = *(uint *)(this + lVar3 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
  *(uint *)(this + lVar3 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) == 0) {
    return *(undefined8 *)(this + 8);
  }
LAB_001a6024:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a6080  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::putback =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::putback(char) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::putback
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20);
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar6 = uVar6 & 0xfffffffd;
  uVar1 = uVar6 | *(long *)(this + lVar4 + 0x28) == 0;
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a61c4;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a610c;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if (plVar3 == (long *)0x0) {
LAB_001a61bc:
      uVar6 = uVar6 | 1;
    }
    else if ((plVar3[2] == plVar3[3]) || (pcVar5 = (char *)(plVar3[3] + -1), *pcVar5 != param_1)) {
                    /* try { // try from 001a61b0 to 001a61b3 has its CatchHandler @ 001a61d0 */
      iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
      if (iVar2 == -1) goto LAB_001a61bc;
    }
    else {
      plVar3[3] = (long)pcVar5;
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a61c4;
LAB_001a610c:
    uVar6 = uVar6 | 4;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar6 = *(uint *)(this + lVar4 + 0x20) | uVar6 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar6;
  if ((uVar6 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_001a61c4:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a6220  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::unget() */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::unget
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20);
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = uVar5 & 0xfffffffd;
  uVar1 = uVar5 | *(long *)(this + lVar4 + 0x28) == 0;
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a6350;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a62a8;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if (plVar3 == (long *)0x0) {
LAB_001a6348:
      uVar5 = uVar5 | 1;
    }
    else if (plVar3[2] == plVar3[3]) {
                    /* try { // try from 001a6338 to 001a633f has its CatchHandler @ 001a635c */
      iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,0xffffffff);
      if (iVar2 == -1) goto LAB_001a6348;
    }
    else {
      plVar3[3] = plVar3[3] + -1;
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a6350;
LAB_001a62a8:
    uVar5 = uVar5 | 4;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_001a6350:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a63ac  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sync =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sync() */

undefined4 __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sync
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar4 + 0x88));
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) {
        return 0;
      }
    }
                    /* try { // try from 001a643c to 001a643f has its CatchHandler @ 001a6490 */
    if ((*(long **)(this + lVar4 + 0x28) == (long *)0x0) ||
       (iVar3 = (**(code **)(**(long **)(this + lVar4 + 0x28) + 0x30))(), iVar3 == -1)) {
      return 0xffffffff;
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    uVar2 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    uVar2 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  if (uVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a64e0  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::tellg =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::tellg() */

undefined8 __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::tellg
          (basic_istream<char,std::__ndk1::char_traits<char>> *this)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar3 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88));
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_001a6524;
    }
                    /* try { // try from 001a6564 to 001a6573 has its CatchHandler @ 001a65c0 */
    uVar2 = (**(code **)(**(long **)(this + lVar3 + 0x28) + 0x20))
                      (*(long **)(this + lVar3 + 0x28),0,1,8);
    lVar3 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
    *(uint *)(this + lVar3 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) {
LAB_001a65b4:
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
    *(uint *)(this + lVar3 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_001a65b4;
LAB_001a6524:
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 001a6618  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::seekg =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >::seekg(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::seekg
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  long *plVar3;
  long extraout_x1;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + -0x18);
  uVar1 = *(uint *)((long)param_1 + lVar4 + 0x20) & 0xfffffffd;
  uVar2 = uVar1 | *(long *)((long)param_1 + lVar4 + 0x28) == 0;
  *(uint *)((long)param_1 + lVar4 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)((long)param_1 + lVar4 + 0x24)) == 0) {
    lVar4 = *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)((long)param_1 + lVar4 + 0x20);
    if (uVar2 == 0) {
      this = *(basic_ostream<char,std::__ndk1::char_traits<char>> **)((long)param_1 + lVar4 + 0x88);
      if (this != (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
        basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this);
        lVar4 = *(long *)(*param_1 + -0x18);
        if (*(int *)((long)param_1 + lVar4 + 0x20) != 0) {
          return param_1;
        }
      }
      plVar3 = *(long **)((long)param_1 + lVar4 + 0x28);
                    /* try { // try from 001a66d0 to 001a66df has its CatchHandler @ 001a673c */
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,8);
      uVar2 = uVar1 | 4;
      if (extraout_x1 != -1) {
        uVar2 = uVar1;
      }
      lVar4 = *(long *)(*param_1 + -0x18);
      uVar1 = *(uint *)((long)param_1 + lVar4 + 0x20) | uVar2 |
              (uint)(*(long *)((long)param_1 + lVar4 + 0x28) == 0);
      uVar2 = uVar1 & *(uint *)((long)param_1 + lVar4 + 0x24);
      *(uint *)((long)param_1 + lVar4 + 0x20) = uVar1;
    }
    else {
      uVar1 = uVar2 | *(long *)((long)param_1 + lVar4 + 0x28) == 0 | 4;
      uVar2 = uVar1 & *(uint *)((long)param_1 + lVar4 + 0x24);
      *(uint *)((long)param_1 + lVar4 + 0x20) = uVar1;
    }
    if (uVar2 == 0) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a678c  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::seekg =====

/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::seekg(long long,
   std::__ndk1::ios_base::seekdir) */

basic_istream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::seekg
          (basic_istream<char,std::__ndk1::char_traits<char>> *this,undefined8 param_1,
          undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long extraout_x1;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar3 + 0x20) & 0xfffffffd;
  uVar2 = uVar1 | *(long *)(this + lVar3 + 0x28) == 0;
  *(uint *)(this + lVar3 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) == 0) {
    lVar3 = *(long *)(*(long *)this + -0x18);
    if (*(uint *)(this + lVar3 + 0x20) == 0) {
      if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88) !=
          (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
        basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar3 + 0x88));
        lVar3 = *(long *)(*(long *)this + -0x18);
        if (*(int *)(this + lVar3 + 0x20) != 0) {
          return this;
        }
      }
                    /* try { // try from 001a6844 to 001a6853 has its CatchHandler @ 001a68b0 */
      (**(code **)(**(long **)(this + lVar3 + 0x28) + 0x20))
                (*(long **)(this + lVar3 + 0x28),param_1,param_3,8);
      uVar2 = uVar1 | 4;
      if (extraout_x1 != -1) {
        uVar2 = uVar1;
      }
      lVar3 = *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this + lVar3 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
      uVar2 = uVar1 & *(uint *)(this + lVar3 + 0x24);
      *(uint *)(this + lVar3 + 0x20) = uVar1;
    }
    else {
      uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
      uVar2 = uVar1 & *(uint *)(this + lVar3 + 0x24);
      *(uint *)(this + lVar3 + 0x20) = uVar1;
    }
    if (uVar2 == 0) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a6900  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_istream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::basic_istream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */

void std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_istream
               (basic_streambuf *param_1)

{
  undefined8 uVar1;
  long *in_x1;
  long in_x2;
  long lVar2;
  
  lVar2 = *in_x1;
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[1];
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = _DAT_001462d0;
  lVar2 = *(long *)(*(long *)param_1 + -0x18);
  *(undefined8 *)(param_1 + lVar2 + 0x18) = _UNK_001462d8;
  *(undefined8 *)(param_1 + lVar2 + 0x10) = uVar1;
  *(long *)(param_1 + lVar2 + 0x28) = in_x2;
  *(uint *)(param_1 + lVar2 + 0x20) = (uint)(in_x2 == 0);
  *(undefined4 *)(param_1 + lVar2 + 0x24) = 0;
  *(undefined4 *)(param_1 + lVar2 + 8) = 0x1002;
  *(undefined8 *)(param_1 + lVar2 + 0x40) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x38) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x50) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x48) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x60) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x58) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x70) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x68) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x80) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x78) = 0;
  locale::locale((locale *)(param_1 + lVar2 + 0x30));
  *(undefined8 *)(param_1 + lVar2 + 0x88) = 0;
  *(undefined4 *)(param_1 + lVar2 + 0x90) = 0xffffffff;
  return;
}


// ===== 001a698c  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_istream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::basic_istream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_istream
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_0020f8b0;
  uVar2 = _UNK_001462d8;
  uVar1 = _DAT_001462d0;
  *(basic_streambuf **)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x18) = 0x1002;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)(this + 0x10) = puVar3 + 0x40;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined **)this = puVar3 + 0x18;
  *(uint *)(this + 0x30) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  locale::locale((locale *)(this + 0x40));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0xffffffff;
  return;
}


// ===== 001a6a10  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  return;
}


// ===== 001a6a14  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 0x10));
  return;
}


// ===== 001a6a1c  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream =====

/* virtual thunk to std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base::~ios_base((ios_base *)(this + *(long *)(*(long *)this + -0x18) + 0x10));
  return;
}


// ===== 001a6a30  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 0x10));
  operator_delete(this);
  return;
}


// ===== 001a6a58  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream =====

/* virtual thunk to std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::~basic_istream() */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  ios_base::~ios_base((ios_base *)(this + lVar1 + 0x10));
  operator_delete(this + lVar1);
  return;
}


// ===== 001a6a88  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::swap =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::swap(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::swap
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_istream *param_1)

{
  ios_base *this_00;
  ios_base *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  piVar1 = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  ios_base::swap(this_00,piVar1);
  uVar3 = *(undefined8 *)(this_00 + 0x88);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(piVar1 + 0x88);
  *(undefined8 *)(piVar1 + 0x88) = uVar3;
  uVar2 = *(undefined4 *)(this_00 + 0x90);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(piVar1 + 0x90);
  *(undefined4 *)(piVar1 + 0x90) = uVar2;
  return;
}


// ===== 001a6af4  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::sentry::sentry(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&, bool)
    */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
          (sentry *this,basic_istream *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *this = (sentry)0x0;
  lVar7 = *(long *)(*(long *)param_1 + -0x18);
  if (*(uint *)(param_1 + lVar7 + 0x20) != 0) {
    uVar1 = *(uint *)(param_1 + lVar7 + 0x20) | (uint)(*(long *)(param_1 + lVar7 + 0x28) == 0) | 4;
    *(uint *)(param_1 + lVar7 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar7 + 0x24)) != 0) goto LAB_001a6b54;
    goto LAB_001a6cfc;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(param_1 + lVar7 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
                (param_1 + lVar7 + 0x88));
  }
  if ((!param_2) && (((byte)param_1[*(long *)(*(long *)param_1 + -0x18) + 9] >> 4 & 1) != 0)) {
    locale::locale(alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a6b9c to 001a6bab has its CatchHandler @ 001a6d28 */
    plVar5 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8b8);
    locale::~locale(alStack_50);
    plVar8 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
    while (plVar8 != (long *)0x0) {
      while( true ) {
        if ((int *)plVar8[3] == (int *)plVar8[4]) {
          iVar4 = (**(code **)(*plVar8 + 0x48))(plVar8);
        }
        else {
          iVar4 = *(int *)plVar8[3];
        }
        if (iVar4 == -1) {
          plVar8 = (long *)0x0;
          goto LAB_001a6c74;
        }
        if ((undefined4 *)plVar8[3] == (undefined4 *)plVar8[4]) {
          uVar3 = (**(code **)(*plVar8 + 0x48))(plVar8);
        }
        else {
          uVar3 = *(undefined4 *)plVar8[3];
        }
        uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,1,uVar3);
        plVar9 = plVar8;
        if ((uVar6 & 1) == 0) goto LAB_001a6c78;
        if (plVar8[3] != plVar8[4]) break;
        (**(code **)(*plVar8 + 0x50))(plVar8);
        if (plVar8 == (long *)0x0) goto LAB_001a6c74;
      }
      plVar8[3] = plVar8[3] + 4;
    }
LAB_001a6c74:
    plVar9 = (long *)0x0;
LAB_001a6c78:
    if (plVar8 != (long *)0x0) {
      if ((int *)plVar9[3] == (int *)plVar9[4]) {
        iVar4 = (**(code **)(*plVar8 + 0x48))(plVar9);
      }
      else {
        iVar4 = *(int *)plVar9[3];
      }
      if (iVar4 != -1) goto LAB_001a6ce0;
    }
    lVar7 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar7 + 0x20) | (uint)(*(long *)(param_1 + lVar7 + 0x28) == 0) | 6;
    *(uint *)(param_1 + lVar7 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar7 + 0x24)) != 0) {
LAB_001a6b54:
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
LAB_001a6ce0:
  *this = (sentry)(*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0);
LAB_001a6cfc:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 001a6d3c  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush() */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)this;
  if (*(long *)(this + *(long *)(lVar4 + -0x18) + 0x28) != 0) {
    local_48[0] = (sentry)0x0;
    local_40 = this;
    if (*(int *)(this + *(long *)(lVar4 + -0x18) + 0x20) == 0) {
      if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
           (this + *(long *)(lVar4 + -0x18) + 0x88) !=
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001a6d94 to 001a6d97 has its CatchHandler @ 001a6e24 */
        flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
               (this + *(long *)(lVar4 + -0x18) + 0x88));
        lVar4 = *(long *)this;
      }
      local_48[0] = (sentry)0x1;
                    /* try { // try from 001a6db8 to 001a6dbb has its CatchHandler @ 001a6e2c */
      iVar3 = (**(code **)(**(long **)(this + *(long *)(lVar4 + -0x18) + 0x28) + 0x30))();
      if (iVar3 == -1) {
        lVar4 = *(long *)(*(long *)this + -0x18);
        uVar1 = *(uint *)(this + lVar4 + 0x20);
        *(uint *)(this + lVar4 + 0x20) = uVar1 | 1;
        if ((*(uint *)(this + lVar4 + 0x24) & (uVar1 | 1)) != 0) {
                    /* try { // try from 001a6e18 to 001a6e23 has its CatchHandler @ 001a6e2c */
                    /* WARNING: Subroutine does not return */
          FUN_001aedec("ios_base::clear");
        }
      }
    }
    sentry::~sentry(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a6e80  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >& (*)(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,
          _func_basic_istream_ptr_basic_istream_ptr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a6e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)((basic_istream *)this);
  return;
}


// ===== 001a6e84  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >&
   (*)(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,
          _func_basic_ios_ptr_basic_ios_ptr *param_1)

{
  (*param_1)((basic_ios *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001a6eb4  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,
          _func_ios_base_ptr_ios_base_ptr *param_1)

{
  (*param_1)((ios_base *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001a6ee4  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> >*) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) != 0) {
    uVar4 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar6 = uVar4 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar4;
    goto joined_r0x001a6f30;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 != (basic_streambuf *)0x0) {
LAB_001a6f74:
    plVar3 = *(long **)(this + lVar5 + 0x28);
    if ((int *)plVar3[3] == (int *)plVar3[4]) {
                    /* try { // try from 001a6f94 to 001a7003 has its CatchHandler @ 001a7084 */
      iVar2 = (**(code **)(*plVar3 + 0x48))();
    }
    else {
      iVar2 = *(int *)plVar3[3];
    }
    if (iVar2 == -1) {
      uVar4 = 2;
      goto LAB_001a7024;
    }
    piVar1 = *(int **)(param_1 + 0x30);
    if (piVar1 == *(int **)(param_1 + 0x38)) {
      iVar2 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
      if (iVar2 == -1) goto LAB_001a7020;
    }
    else {
      *(int **)(param_1 + 0x30) = piVar1 + 1;
      *piVar1 = iVar2;
    }
    lVar5 = *(long *)this;
    *(long *)(this + 8) = *(long *)(this + 8) + 1;
    plVar3 = *(long **)(this + *(long *)(lVar5 + -0x18) + 0x28);
    if (plVar3[3] == plVar3[4]) {
      (**(code **)(*plVar3 + 0x50))();
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
    else {
      plVar3[3] = plVar3[3] + 4;
      lVar5 = *(long *)(lVar5 + -0x18);
    }
    goto LAB_001a6f74;
  }
  uVar6 = 4;
  goto LAB_001a7034;
LAB_001a7020:
  uVar4 = 0;
LAB_001a7024:
  uVar6 = uVar4 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar6 = uVar4;
  }
LAB_001a7034:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar4 = *(uint *)(this + lVar5 + 0x20) | uVar6 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar6 = uVar4 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar4;
joined_r0x001a6f30:
  if (uVar6 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a70e0  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(bool&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,bool *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a70e4  FUN_001a70e4 =====

basic_istream * FUN_001a70e4(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7140 to 001a7177 has its CatchHandler @ 001a71ec */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x18))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7254  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(short&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,short *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  locale alStack_50 [8];
  long lStack_48;
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] == (sentry)0x0) goto LAB_001a7368;
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8c0);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
             this + *(long *)(*(long *)this + -0x18),&uStack_3c,&lStack_48);
  locale::~locale(alStack_50);
  if (lStack_48 < -0x8000) {
    sVar5 = -0x8000;
LAB_001a7320:
    uStack_3c = uStack_3c | 4;
    *param_1 = sVar5;
  }
  else {
    if (0x7fff < lStack_48) {
      sVar5 = 0x7fff;
      goto LAB_001a7320;
    }
    *param_1 = (short)lStack_48;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a7368:
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7258  FUN_001a7258 =====

basic_istream * FUN_001a7258(basic_istream *param_1,undefined2 *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined2 uVar5;
  locale alStack_50 [8];
  long local_48;
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] == (sentry)0x0) goto LAB_001a7368;
  std::__ndk1::locale::locale
            (alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a72b4 to 001a72eb has its CatchHandler @ 001a73a0 */
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_50,(id *)PTR_id_0020f8c0);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
             param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,&local_48);
  std::__ndk1::locale::~locale(alStack_50);
  if (local_48 < -0x8000) {
    uVar5 = 0x8000;
LAB_001a7320:
    local_3c = local_3c | 4;
    *param_2 = uVar5;
  }
  else {
    if (0x7fff < local_48) {
      uVar5 = 0x7fff;
      goto LAB_001a7320;
    }
    *param_2 = (short)local_48;
  }
  lVar4 = *(long *)(*(long *)param_1 + -0x18);
  uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
          (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
  *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a7368:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7408  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned short&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ushort *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x30))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a740c  FUN_001a740c =====

basic_istream * FUN_001a740c(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7468 to 001a749f has its CatchHandler @ 001a7514 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x30))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a757c  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(int&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,int *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  locale alStack_50 [8];
  long lStack_48;
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] == (sentry)0x0) goto LAB_001a7694;
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8c0);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
             this + *(long *)(*(long *)this + -0x18),&uStack_3c,&lStack_48);
  locale::~locale(alStack_50);
  if (lStack_48 < -0x80000000) {
    iVar5 = -0x80000000;
LAB_001a764c:
    uStack_3c = uStack_3c | 4;
    *param_1 = iVar5;
  }
  else {
    if (0x7fffffff < lStack_48) {
      iVar5 = 0x7fffffff;
      goto LAB_001a764c;
    }
    *param_1 = (int)lStack_48;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a7694:
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7580  FUN_001a7580 =====

basic_istream * FUN_001a7580(basic_istream *param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  locale alStack_50 [8];
  long local_48;
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] == (sentry)0x0) goto LAB_001a7694;
  std::__ndk1::locale::locale
            (alStack_50,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a75dc to 001a7613 has its CatchHandler @ 001a76cc */
  plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_50,(id *)PTR_id_0020f8c0);
  (**(code **)(*plVar3 + 0x20))
            (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
             param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,&local_48);
  std::__ndk1::locale::~locale(alStack_50);
  if (local_48 < -0x80000000) {
    uVar5 = 0x80000000;
LAB_001a764c:
    local_3c = local_3c | 4;
    *param_2 = uVar5;
  }
  else {
    if (0x7fffffff < local_48) {
      uVar5 = 0x7fffffff;
      goto LAB_001a764c;
    }
    *param_2 = (int)local_48;
  }
  lVar4 = *(long *)(*(long *)param_1 + -0x18);
  uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
          (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
  *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a7694:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7734  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned int&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,uint *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x38))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7738  FUN_001a7738 =====

basic_istream * FUN_001a7738(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7794 to 001a77cb has its CatchHandler @ 001a7840 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x38))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a78a8  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x20))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a78ac  FUN_001a78ac =====

basic_istream * FUN_001a78ac(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7908 to 001a793f has its CatchHandler @ 001a79b4 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x20))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7a1c  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ulong *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x40))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7a20  FUN_001a7a20 =====

basic_istream * FUN_001a7a20(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7a7c to 001a7ab3 has its CatchHandler @ 001a7b28 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x40))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7b90  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long long&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,longlong *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x28))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7b94  FUN_001a7b94 =====

basic_istream * FUN_001a7b94(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7bf0 to 001a7c27 has its CatchHandler @ 001a7c9c */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x28))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7d04  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long long&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ulonglong *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x48))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7d08  FUN_001a7d08 =====

basic_istream * FUN_001a7d08(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7d64 to 001a7d9b has its CatchHandler @ 001a7e10 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x48))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7e78  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(float&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,float *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x50))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7e7c  FUN_001a7e7c =====

basic_istream * FUN_001a7e7c(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a7ed8 to 001a7f0f has its CatchHandler @ 001a7f84 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x50))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7fec  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(double&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,double *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x58))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a7ff0  FUN_001a7ff0 =====

basic_istream * FUN_001a7ff0(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a804c to 001a8083 has its CatchHandler @ 001a80f8 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x58))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8160  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long double&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,longdouble *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x60))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8164  FUN_001a8164 =====

basic_istream * FUN_001a8164(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a81c0 to 001a81f7 has its CatchHandler @ 001a826c */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x60))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a82d4  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>> =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(void*&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator>>
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,void **param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry asStack_40 [4];
  uint uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uStack_3c = 0;
  sentry::sentry(asStack_40,(basic_istream *)this,false);
  if (asStack_40[0] != (sentry)0x0) {
    locale::locale(alStack_48,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
    plVar3 = (long *)locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x68))
              (plVar3,*(undefined8 *)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,
               this + *(long *)(*(long *)this + -0x18),&uStack_3c,param_1);
    locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | uStack_3c | (uint)(*(long *)(this + lVar4 + 0x28) == 0)
    ;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a82d8  FUN_001a82d8 =====

basic_istream * FUN_001a82d8(basic_istream *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  locale alStack_48 [8];
  sentry local_40 [4];
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_40,param_1,false);
  if (local_40[0] != (sentry)0x0) {
    std::__ndk1::locale::locale
              (alStack_48,(locale *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x30));
                    /* try { // try from 001a8334 to 001a836b has its CatchHandler @ 001a83e0 */
    plVar3 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)PTR_id_0020f8c0);
    (**(code **)(*plVar3 + 0x68))
              (plVar3,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_3c,param_2);
    std::__ndk1::locale::~locale(alStack_48);
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 0x20) | local_3c |
            (uint)(*(long *)(param_1 + lVar4 + 0x28) == 0);
    *(uint *)(param_1 + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(param_1 + lVar4 + 0x24)) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8448  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get() */

int __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) != 0) {
    uVar5 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar5;
    if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
      return -1;
    }
    goto LAB_001a8550;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88));
    lVar4 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar4 + 0x20) != 0) {
      return -1;
    }
  }
  plVar3 = *(long **)(this + lVar4 + 0x28);
  piVar1 = (int *)plVar3[3];
  if (piVar1 == (int *)plVar3[4]) {
                    /* try { // try from 001a84fc to 001a84ff has its CatchHandler @ 001a855c */
    iVar2 = (**(code **)(*plVar3 + 0x50))();
    if (iVar2 == -1) goto LAB_001a850c;
LAB_001a84e4:
    uVar5 = 0;
    *(undefined8 *)(this + 8) = 1;
  }
  else {
    plVar3[3] = (long)(piVar1 + 1);
    iVar2 = *piVar1;
    if (iVar2 != -1) goto LAB_001a84e4;
LAB_001a850c:
    uVar5 = 6;
  }
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return iVar2;
  }
LAB_001a8550:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a85b0  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t&) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1)

{
  wchar_t wVar1;
  
  wVar1 = get(this);
  if (wVar1 != L'\xffffffff') {
    *param_1 = wVar1;
  }
  return this;
}


// ===== 001a85e4  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long) */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
                    /* try { // try from 001a862c to 001a864b has its CatchHandler @ 001a8698 */
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8b8);
  wVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,10);
  locale::~locale(alStack_50);
  get(this,param_1,param_2,wVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a86ac  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  wchar_t wVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88)
                );
      lVar5 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar5 + 0x20) != 0) goto LAB_001a8850;
    }
    if (param_2 < 1) {
      uVar4 = 4;
    }
    else {
      lVar6 = *(long *)(this + 8);
      if (lVar6 < param_2 + -1) {
        while( true ) {
          plVar2 = *(long **)(this + lVar5 + 0x28);
          if ((wchar_t *)plVar2[3] == (wchar_t *)plVar2[4]) {
                    /* try { // try from 001a876c to 001a876f has its CatchHandler @ 001a888c */
            wVar1 = (**(code **)(*plVar2 + 0x48))();
          }
          else {
            wVar1 = *(wchar_t *)plVar2[3];
          }
          if (wVar1 == L'\xffffffff') {
            uVar3 = 2;
            goto LAB_001a880c;
          }
          if (wVar1 == param_3) {
            uVar3 = 0;
            goto LAB_001a880c;
          }
          *param_1 = wVar1;
          lVar5 = *(long *)(this + 8) + 1;
          *(long *)(this + 8) = lVar5;
          plVar2 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
          if (plVar2[3] == plVar2[4]) {
                    /* try { // try from 001a87c4 to 001a87c7 has its CatchHandler @ 001a8884 */
            (**(code **)(*plVar2 + 0x50))();
            lVar5 = *(long *)(this + 8);
          }
          else {
            plVar2[3] = plVar2[3] + 4;
          }
          if (param_2 + -1 <= lVar5) break;
          lVar5 = *(long *)(*(long *)this + -0x18);
          param_1 = param_1 + 1;
        }
        uVar3 = 0;
        param_1 = param_1 + 1;
LAB_001a880c:
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar3 = 0;
      }
      uVar4 = uVar3 | 4;
      if (lVar6 != 0) {
        uVar4 = uVar3;
      }
      *param_1 = L'\0';
    }
    lVar5 = *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(this + lVar5 + 0x20) | uVar4 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
    uVar4 = uVar3 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar3;
  }
  else {
    uVar3 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar4 = uVar3 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar3;
  }
  if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001a8850:
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  return this;
}


// ===== 001a88e0  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::get(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  locale alStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_40,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
                    /* try { // try from 001a8920 to 001a893f has its CatchHandler @ 001a8984 */
  plVar3 = (long *)locale::use_facet(alStack_40,(id *)PTR_id_0020f8b8);
  wVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,10);
  locale::~locale(alStack_40);
  get(this,param_1,wVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8998  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::get(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&, wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::get
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1,
          wchar_t param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  wchar_t wVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  
  *(undefined8 *)(this + 8) = 0;
  lVar7 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar7 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar7 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar7 + 0x88)
                );
      lVar7 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar7 + 0x20) != 0) {
        return this;
      }
    }
    while( true ) {
      plVar5 = *(long **)(this + lVar7 + 0x28);
      if ((wchar_t *)plVar5[3] == (wchar_t *)plVar5[4]) {
                    /* try { // try from 001a8a48 to 001a8a4f has its CatchHandler @ 001a8b34 */
        wVar3 = (**(code **)(*plVar5 + 0x48))();
      }
      else {
        wVar3 = *(wchar_t *)plVar5[3];
      }
      if (wVar3 == L'\xffffffff') {
        uVar6 = 2;
        goto LAB_001a8ad8;
      }
      if (wVar3 == param_2) break;
      pwVar1 = *(wchar_t **)(param_1 + 0x30);
      if (pwVar1 == *(wchar_t **)(param_1 + 0x38)) {
                    /* try { // try from 001a8a84 to 001a8abf has its CatchHandler @ 001a8b38 */
        iVar4 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
        if (iVar4 == -1) break;
      }
      else {
        *(wchar_t **)(param_1 + 0x30) = pwVar1 + 1;
        *pwVar1 = wVar3;
      }
      lVar7 = *(long *)this;
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      plVar5 = *(long **)(this + *(long *)(lVar7 + -0x18) + 0x28);
      if (plVar5[3] == plVar5[4]) {
        (**(code **)(*plVar5 + 0x50))();
        lVar7 = *(long *)(*(long *)this + -0x18);
      }
      else {
        plVar5[3] = plVar5[3] + 4;
        lVar7 = *(long *)(lVar7 + -0x18);
      }
    }
    uVar6 = 0;
LAB_001a8ad8:
    lVar7 = *(long *)(*(long *)this + -0x18);
    uVar2 = uVar6 | 4;
    if (*(long *)(this + 8) != 0) {
      uVar2 = uVar6;
    }
    uVar6 = *(uint *)(this + lVar7 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar7 + 0x28) == 0);
    uVar2 = uVar6 & *(uint *)(this + lVar7 + 0x24);
    *(uint *)(this + lVar7 + 0x20) = uVar6;
  }
  else {
    uVar6 = *(uint *)(this + lVar7 + 0x20) | (uint)(*(long *)(this + lVar7 + 0x28) == 0) | 4;
    uVar2 = uVar6 & *(uint *)(this + lVar7 + 0x24);
    *(uint *)(this + lVar7 + 0x20) = uVar6;
  }
  if (uVar2 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a8b48  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::getline(wchar_t*, long)
    */

void __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  locale alStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  locale::locale(alStack_50,(locale *)(this + *(long *)(*(long *)this + -0x18) + 0x30));
                    /* try { // try from 001a8b90 to 001a8baf has its CatchHandler @ 001a8bfc */
  plVar3 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8b8);
  wVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,10);
  locale::~locale(alStack_50);
  getline(this,param_1,param_2,wVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001a8c10  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::getline(wchar_t*, long,
   wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::getline
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2,wchar_t param_3)

{
  uint uVar1;
  wchar_t wVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88)
                );
      lVar5 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar5 + 0x20) != 0) goto LAB_001a8c70;
    }
    while( true ) {
      plVar3 = *(long **)(this + lVar5 + 0x28);
      if ((wchar_t *)plVar3[3] == (wchar_t *)plVar3[4]) {
                    /* try { // try from 001a8d40 to 001a8d43 has its CatchHandler @ 001a8e04 */
        wVar2 = (**(code **)(*plVar3 + 0x48))();
      }
      else {
        wVar2 = *(wchar_t *)plVar3[3];
      }
      if (wVar2 == L'\xffffffff') {
        uVar4 = 2;
        goto LAB_001a8c74;
      }
      if (wVar2 == param_3) {
        plVar3 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
        if (plVar3[3] == plVar3[4]) {
                    /* try { // try from 001a8dd4 to 001a8dd7 has its CatchHandler @ 001a8df8 */
          (**(code **)(*plVar3 + 0x50))();
        }
        else {
          plVar3[3] = plVar3[3] + 4;
        }
        uVar4 = 0;
        *(long *)(this + 8) = *(long *)(this + 8) + 1;
        goto LAB_001a8c74;
      }
      lVar5 = *(long *)(this + 8);
      if (param_2 + -1 <= lVar5) break;
      *param_1 = wVar2;
      lVar6 = *(long *)this;
      plVar3 = *(long **)(this + *(long *)(lVar6 + -0x18) + 0x28);
      if (plVar3[3] == plVar3[4]) {
                    /* try { // try from 001a8d88 to 001a8d8b has its CatchHandler @ 001a8dfc */
        (**(code **)(*plVar3 + 0x50))();
        lVar6 = *(long *)this;
        lVar5 = *(long *)(this + 8);
      }
      else {
        plVar3[3] = plVar3[3] + 4;
      }
      *(long *)(this + 8) = lVar5 + 1;
      lVar5 = *(long *)(lVar6 + -0x18);
      param_1 = param_1 + 1;
    }
    uVar4 = 4;
  }
  else {
    uVar4 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    *(uint *)(this + lVar5 + 0x20) = uVar4;
    if ((uVar4 & *(uint *)(this + lVar5 + 0x24)) != 0) goto LAB_001a8dec;
LAB_001a8c70:
    uVar4 = 0;
  }
LAB_001a8c74:
  if (0 < param_2) {
    *param_1 = L'\0';
  }
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar1 = uVar4 | 4;
  if (*(long *)(this + 8) != 0) {
    uVar1 = uVar4;
  }
  uVar4 = *(uint *)(this + lVar5 + 0x20) | uVar1 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  *(uint *)(this + lVar5 + 0x20) = uVar4;
  if ((uVar4 & *(uint *)(this + lVar5 + 0x24)) == 0) {
    return this;
  }
LAB_001a8dec:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a8e60  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::ignore =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::ignore(long, unsigned
   int) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::ignore
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  *(undefined8 *)(this + 8) = 0;
  lVar5 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar5 + 0x20) != 0) {
    uVar3 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
    uVar2 = uVar3 & *(uint *)(this + lVar5 + 0x24);
    *(uint *)(this + lVar5 + 0x20) = uVar3;
    goto joined_r0x001a8eac;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar5 + 0x88));
    lVar5 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar5 + 0x20) != 0) {
      return this;
    }
  }
  if (param_1 == 0x7fffffffffffffff) {
    while( true ) {
      plVar4 = *(long **)(this + lVar5 + 0x28);
      puVar1 = (uint *)plVar4[3];
      if (puVar1 == (uint *)plVar4[4]) {
                    /* try { // try from 001a8f14 to 001a8f17 has its CatchHandler @ 001a8ffc */
        uVar3 = (**(code **)(*plVar4 + 0x50))();
      }
      else {
        plVar4[3] = (long)(puVar1 + 1);
        uVar3 = *puVar1;
      }
      if (uVar3 == 0xffffffff) goto LAB_001a8fa4;
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      if (uVar3 == param_2) break;
      lVar5 = *(long *)(*(long *)this + -0x18);
    }
  }
  else {
    lVar5 = *(long *)(this + 8);
    do {
      if (param_1 <= lVar5) break;
      plVar4 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
      puVar1 = (uint *)plVar4[3];
      if (puVar1 == (uint *)plVar4[4]) {
                    /* try { // try from 001a8f7c to 001a8f7f has its CatchHandler @ 001a8ff8 */
        uVar3 = (**(code **)(*plVar4 + 0x50))();
      }
      else {
        plVar4[3] = (long)(puVar1 + 1);
        uVar3 = *puVar1;
      }
      if (uVar3 == 0xffffffff) goto LAB_001a8fa4;
      lVar5 = *(long *)(this + 8) + 1;
      *(long *)(this + 8) = lVar5;
    } while (uVar3 != param_2);
  }
  uVar3 = 0;
  goto LAB_001a8fa8;
LAB_001a8fa4:
  uVar3 = 2;
LAB_001a8fa8:
  lVar5 = *(long *)(*(long *)this + -0x18);
  uVar3 = *(uint *)(this + lVar5 + 0x20) | uVar3 | (uint)(*(long *)(this + lVar5 + 0x28) == 0);
  uVar2 = uVar3 & *(uint *)(this + lVar5 + 0x24);
  *(uint *)(this + lVar5 + 0x20) = uVar3;
joined_r0x001a8eac:
  if (uVar2 == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a904c  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::peek =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::peek() */

int __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::peek
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88)
                );
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a9094;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if ((int *)plVar3[3] == (int *)plVar3[4]) {
                    /* try { // try from 001a90e4 to 001a90e7 has its CatchHandler @ 001a9144 */
      iVar2 = (**(code **)(*plVar3 + 0x48))();
    }
    else {
      iVar2 = *(int *)plVar3[3];
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(iVar2 == -1) << 1 |
            (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) {
LAB_001a9138:
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a9138;
LAB_001a9094:
    iVar2 = -1;
  }
  return iVar2;
}


// ===== 001a9198  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::read =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::read(wchar_t*, long) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::read
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  uint uVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar2 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88)
                );
      lVar2 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar2 + 0x20) != 0) goto LAB_001a91e8;
    }
                    /* try { // try from 001a9228 to 001a9233 has its CatchHandler @ 001a9294 */
    lVar2 = (**(code **)(**(long **)(this + lVar2 + 0x28) + 0x40))
                      (*(long **)(this + lVar2 + 0x28),param_1,param_2);
    *(long *)(this + 8) = lVar2;
    uVar1 = 0;
    if (lVar2 != param_2) {
      uVar1 = 6;
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar2 + 0x20) | (uint)(*(long *)(this + lVar2 + 0x28) == 0) | 4;
    *(uint *)(this + lVar2 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar2 + 0x24)) != 0) goto LAB_001a9288;
LAB_001a91e8:
    uVar1 = 4;
  }
  lVar2 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar2 + 0x20) | uVar1 | (uint)(*(long *)(this + lVar2 + 0x28) == 0);
  *(uint *)(this + lVar2 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar2 + 0x24)) == 0) {
    return this;
  }
LAB_001a9288:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a92e4  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::readsome =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::readsome(wchar_t*, long)
    */

undefined8 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::readsome
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  *(undefined8 *)(this + 8) = 0;
  lVar3 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar3 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88)
                );
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_001a9334;
    }
    plVar1 = *(long **)(this + lVar3 + 0x28);
    if ((ulong)plVar1[3] < (ulong)plVar1[4]) {
      lVar3 = plVar1[4] - plVar1[3] >> 2;
    }
    else {
                    /* try { // try from 001a93cc to 001a941b has its CatchHandler @ 001a943c */
      lVar3 = (**(code **)(*plVar1 + 0x38))();
    }
    if (lVar3 == -1) {
      uVar2 = 2;
    }
    else if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      if (lVar3 <= param_2) {
        param_2 = lVar3;
      }
      lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x40))
                        (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,param_2)
      ;
      *(long *)(this + 8) = lVar3;
      uVar2 = 0;
      if (lVar3 != param_2) {
        uVar2 = 6;
      }
    }
  }
  else {
    uVar2 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
    *(uint *)(this + lVar3 + 0x20) = uVar2;
    if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_001a9430;
LAB_001a9334:
    uVar2 = 4;
  }
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar2 = *(uint *)(this + lVar3 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
  *(uint *)(this + lVar3 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) == 0) {
    return *(undefined8 *)(this + 8);
  }
LAB_001a9430:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a948c  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::putback =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::putback(wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::putback
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20);
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar6 = uVar6 & 0xfffffffd;
  uVar1 = uVar6 | *(long *)(this + lVar4 + 0x28) == 0;
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a95dc;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) != 0) {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a95dc;
LAB_001a9518:
    uVar6 = uVar6 | 4;
    goto LAB_001a951c;
  }
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
    basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
              (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88));
    lVar4 = *(long *)(*(long *)this + -0x18);
    if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a9518;
  }
  plVar3 = *(long **)(this + lVar4 + 0x28);
  if (plVar3 == (long *)0x0) {
LAB_001a95d4:
    uVar6 = uVar6 | 1;
  }
  else if ((plVar3[2] == plVar3[3]) || (pwVar5 = (wchar_t *)(plVar3[3] + -4), *pwVar5 != param_1)) {
                    /* try { // try from 001a95c0 to 001a95c7 has its CatchHandler @ 001a95e8 */
    iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
    if (iVar2 == -1) goto LAB_001a95d4;
  }
  else {
    plVar3[3] = (long)pwVar5;
    if (param_1 == L'\xffffffff') goto LAB_001a95d4;
  }
LAB_001a951c:
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar6 = *(uint *)(this + lVar4 + 0x20) | uVar6 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar6;
  if ((uVar6 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_001a95dc:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a9638  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::unget =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::unget() */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::unget
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(this + *(long *)(*(long *)this + -0x18) + 0x20);
  *(undefined8 *)(this + 8) = 0;
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = uVar5 & 0xfffffffd;
  uVar1 = uVar5 | *(long *)(this + lVar4 + 0x28) == 0;
  *(uint *)(this + lVar4 + 0x20) = uVar1;
  if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a976c;
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88)
                );
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) goto LAB_001a96c0;
    }
    plVar3 = *(long **)(this + lVar4 + 0x28);
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[3];
      if (plVar3[2] == lVar4) {
                    /* try { // try from 001a9754 to 001a975b has its CatchHandler @ 001a9778 */
        iVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,0xffffffff);
      }
      else {
        plVar3[3] = lVar4 + -4;
        iVar2 = *(int *)(lVar4 + -4);
      }
      if (iVar2 != -1) goto LAB_001a96c4;
    }
    uVar5 = uVar5 | 1;
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    *(uint *)(this + lVar4 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar4 + 0x24)) != 0) goto LAB_001a976c;
LAB_001a96c0:
    uVar5 = uVar5 | 4;
  }
LAB_001a96c4:
  lVar4 = *(long *)(*(long *)this + -0x18);
  uVar5 = *(uint *)(this + lVar4 + 0x20) | uVar5 | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
  *(uint *)(this + lVar4 + 0x20) = uVar5;
  if ((uVar5 & *(uint *)(this + lVar4 + 0x24)) == 0) {
    return this;
  }
LAB_001a976c:
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a97c8  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sync =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sync() */

undefined4 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sync
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar4 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar4 + 0x88)
                );
      lVar4 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar4 + 0x20) != 0) {
        return 0;
      }
    }
                    /* try { // try from 001a9858 to 001a985b has its CatchHandler @ 001a98ac */
    if ((*(long **)(this + lVar4 + 0x28) == (long *)0x0) ||
       (iVar3 = (**(code **)(**(long **)(this + lVar4 + 0x28) + 0x30))(), iVar3 == -1)) {
      return 0xffffffff;
    }
    lVar4 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0);
    uVar2 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  else {
    uVar1 = *(uint *)(this + lVar4 + 0x20) | (uint)(*(long *)(this + lVar4 + 0x28) == 0) | 4;
    uVar2 = uVar1 & *(uint *)(this + lVar4 + 0x24);
    *(uint *)(this + lVar4 + 0x20) = uVar1;
  }
  if (uVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a98fc  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::tellg =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::tellg() */

undefined8 __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::tellg
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  if (*(uint *)(this + lVar3 + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88)
                );
      lVar3 = *(long *)(*(long *)this + -0x18);
      if (*(int *)(this + lVar3 + 0x20) != 0) goto LAB_001a9940;
    }
                    /* try { // try from 001a9980 to 001a998f has its CatchHandler @ 001a99dc */
    uVar2 = (**(code **)(**(long **)(this + lVar3 + 0x28) + 0x20))
                      (*(long **)(this + lVar3 + 0x28),0,1,8);
    lVar3 = *(long *)(*(long *)this + -0x18);
    uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
    *(uint *)(this + lVar3 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) {
LAB_001a99d0:
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  else {
    uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
    *(uint *)(this + lVar3 + 0x20) = uVar1;
    if ((uVar1 & *(uint *)(this + lVar3 + 0x24)) != 0) goto LAB_001a99d0;
LAB_001a9940:
    uVar2 = 0;
  }
  return uVar2;
}


// ===== 001a9a34  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekg =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::seekg(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekg
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this;
  long *plVar3;
  long extraout_x1;
  long lVar4;
  
  lVar4 = *(long *)(*param_1 + -0x18);
  uVar1 = *(uint *)((long)param_1 + lVar4 + 0x20) & 0xfffffffd;
  uVar2 = uVar1 | *(long *)((long)param_1 + lVar4 + 0x28) == 0;
  *(uint *)((long)param_1 + lVar4 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)((long)param_1 + lVar4 + 0x24)) == 0) {
    lVar4 = *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)((long)param_1 + lVar4 + 0x20);
    if (uVar2 == 0) {
      this = *(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
              ((long)param_1 + lVar4 + 0x88);
      if (this != (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
        basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush(this);
        lVar4 = *(long *)(*param_1 + -0x18);
        if (*(int *)((long)param_1 + lVar4 + 0x20) != 0) {
          return param_1;
        }
      }
      plVar3 = *(long **)((long)param_1 + lVar4 + 0x28);
                    /* try { // try from 001a9aec to 001a9afb has its CatchHandler @ 001a9b58 */
      (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,8);
      uVar2 = uVar1 | 4;
      if (extraout_x1 != -1) {
        uVar2 = uVar1;
      }
      lVar4 = *(long *)(*param_1 + -0x18);
      uVar1 = *(uint *)((long)param_1 + lVar4 + 0x20) | uVar2 |
              (uint)(*(long *)((long)param_1 + lVar4 + 0x28) == 0);
      uVar2 = uVar1 & *(uint *)((long)param_1 + lVar4 + 0x24);
      *(uint *)((long)param_1 + lVar4 + 0x20) = uVar1;
    }
    else {
      uVar1 = uVar2 | *(long *)((long)param_1 + lVar4 + 0x28) == 0 | 4;
      uVar2 = uVar1 & *(uint *)((long)param_1 + lVar4 + 0x24);
      *(uint *)((long)param_1 + lVar4 + 0x20) = uVar1;
    }
    if (uVar2 == 0) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a9ba8  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekg =====

/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekg(long long,
   std::__ndk1::ios_base::seekdir) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekg
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,undefined8 param_1,
          undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  long extraout_x1;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  uVar1 = *(uint *)(this + lVar3 + 0x20) & 0xfffffffd;
  uVar2 = uVar1 | *(long *)(this + lVar3 + 0x28) == 0;
  *(uint *)(this + lVar3 + 0x20) = uVar2;
  if ((uVar2 & *(uint *)(this + lVar3 + 0x24)) == 0) {
    lVar3 = *(long *)(*(long *)this + -0x18);
    if (*(uint *)(this + lVar3 + 0x20) == 0) {
      if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar3 + 0x88) !=
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
        basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::flush
                  (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
                    (this + lVar3 + 0x88));
        lVar3 = *(long *)(*(long *)this + -0x18);
        if (*(int *)(this + lVar3 + 0x20) != 0) {
          return this;
        }
      }
                    /* try { // try from 001a9c60 to 001a9c6f has its CatchHandler @ 001a9ccc */
      (**(code **)(**(long **)(this + lVar3 + 0x28) + 0x20))
                (*(long **)(this + lVar3 + 0x28),param_1,param_3,8);
      uVar2 = uVar1 | 4;
      if (extraout_x1 != -1) {
        uVar2 = uVar1;
      }
      lVar3 = *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this + lVar3 + 0x20) | uVar2 | (uint)(*(long *)(this + lVar3 + 0x28) == 0);
      uVar2 = uVar1 & *(uint *)(this + lVar3 + 0x24);
      *(uint *)(this + lVar3 + 0x20) = uVar1;
    }
    else {
      uVar1 = *(uint *)(this + lVar3 + 0x20) | (uint)(*(long *)(this + lVar3 + 0x28) == 0) | 4;
      uVar2 = uVar1 & *(uint *)(this + lVar3 + 0x24);
      *(uint *)(this + lVar3 + 0x20) = uVar1;
    }
    if (uVar2 == 0) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001aedec("ios_base::clear");
}


// ===== 001a9d1c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::basic_ostream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::basic_ostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::basic_ostream
               (basic_streambuf *param_1)

{
  undefined8 uVar1;
  long *in_x1;
  long in_x2;
  long lVar2;
  
  lVar2 = *in_x1;
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[1];
  uVar1 = _DAT_001462d0;
  lVar2 = *(long *)(*(long *)param_1 + -0x18);
  *(undefined8 *)(param_1 + lVar2 + 0x18) = _UNK_001462d8;
  *(undefined8 *)(param_1 + lVar2 + 0x10) = uVar1;
  *(long *)(param_1 + lVar2 + 0x28) = in_x2;
  *(uint *)(param_1 + lVar2 + 0x20) = (uint)(in_x2 == 0);
  *(undefined4 *)(param_1 + lVar2 + 0x24) = 0;
  *(undefined4 *)(param_1 + lVar2 + 8) = 0x1002;
  *(undefined8 *)(param_1 + lVar2 + 0x40) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x38) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x50) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x48) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x60) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x58) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x70) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x68) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x80) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x78) = 0;
  locale::locale((locale *)(param_1 + lVar2 + 0x30));
  *(undefined8 *)(param_1 + lVar2 + 0x88) = 0;
  *(undefined4 *)(param_1 + lVar2 + 0x90) = 0xffffffff;
  return;
}


// ===== 001a9da4  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::basic_ostream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::basic_ostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_0020f8c8;
  uVar2 = _UNK_001462d8;
  uVar1 = _DAT_001462d0;
  *(basic_streambuf **)(this + 0x30) = param_1;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x10) = 0x1002;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)this = puVar3 + 0x18;
  *(undefined **)(this + 8) = puVar3 + 0x40;
  *(uint *)(this + 0x28) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  locale::locale((locale *)(this + 0x38));
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return;
}


// ===== 001a9e1c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  return;
}


// ===== 001a9e20  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 8));
  return;
}


// ===== 001a9e28  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream =====

/* virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + *(long *)(*(long *)this + -0x18) + 8));
  return;
}


// ===== 001a9e3c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 8));
  operator_delete(this);
  return;
}


// ===== 001a9e64  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream =====

/* virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  ios_base::~ios_base((ios_base *)(this + lVar1 + 8));
  operator_delete(this + lVar1);
  return;
}


// ===== 001a9e94  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::swap =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::swap(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::swap
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,basic_ostream *param_1)

{
  ios_base *this_00;
  ios_base *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  piVar1 = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  ios_base::swap(this_00,piVar1);
  uVar3 = *(undefined8 *)(this_00 + 0x88);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(piVar1 + 0x88);
  *(undefined8 *)(piVar1 + 0x88) = uVar3;
  uVar2 = *(undefined4 *)(this_00 + 0x90);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(piVar1 + 0x90);
  *(undefined4 *)(piVar1 + 0x90) = uVar2;
  return;
}


// ===== 001a9ef0  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::sentry::sentry(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  *this = (sentry)0x0;
  *(basic_ostream **)(this + 8) = param_1;
  if (*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x88));
    }
    *this = (sentry)0x1;
  }
  return;
}


// ===== 001a9f3c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry() */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(this + 8);
  lVar5 = *(long *)(*plVar4 + -0x18);
                    /* try { // try from 001a9f98 to 001a9fdf has its CatchHandler @ 001a9fe0 */
  if ((((*(long *)((long)plVar4 + lVar5 + 0x28) != 0) &&
       (*(int *)((long)plVar4 + lVar5 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar4 + lVar5 + 9) >> 5 & 1) != 0)) &&
     ((uVar3 = uncaught_exception(), (uVar3 & 1) == 0 &&
      (iVar2 = (**(code **)(**(long **)((long)*(long **)(this + 8) +
                                       *(long *)(**(long **)(this + 8) + -0x18) + 0x28) + 0x30))(),
      iVar2 == -1)))) {
    plVar4 = *(long **)(this + 8);
    lVar5 = *(long *)(*plVar4 + -0x18);
    uVar1 = *(uint *)((long)plVar4 + lVar5 + 0x20) | 1;
    *(uint *)((long)plVar4 + lVar5 + 0x20) = uVar1;
    if ((*(uint *)((long)plVar4 + lVar5 + 0x24) & uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  return;
}


// ===== 001a9ff0  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   (*)(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)) */

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001a9ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)((basic_ostream *)this);
  return;
}


// ===== 001a9ff4  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >&
   (*)(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >&)) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,
          _func_basic_ios_ptr_basic_ios_ptr *param_1)

{
  (*param_1)((basic_ios *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001aa024  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,
          _func_ios_base_ptr_ios_base_ptr *param_1)

{
  (*param_1)((ios_base *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001aa054  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(bool)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,bool param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aa0a8 to 001aa0ab has its CatchHandler @ 001aa1d4 */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001aa0cc to 001aa0db has its CatchHandler @ 001aa1e8 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aa110 to 001aa12f has its CatchHandler @ 001aa1dc */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001aa14c to 001aa15f has its CatchHandler @ 001aa1e0 */
    lVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001aa1c4 to 001aa1cf has its CatchHandler @ 001aa1d0 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa244  std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* std::__ndk1::ios_base::__set_badbit_and_consider_rethrow() */

ios_base * __thiscall std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(ios_base *this)

{
  ios_base *piVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ios_base *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  sentry asStack_80 [8];
  ios_base *piStack_78;
  locale alStack_70 [8];
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 1;
  if (((byte)this[0x24] & 1) == 0) {
    return this;
  }
  auVar11 = __cxa_rethrow();
  piVar6 = auVar11._0_8_;
  pcStack_58 = basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<;
  lVar4 = tpidr_el0;
  lStack_68 = *(long *)(lVar4 + 0x28);
  asStack_80[0] = (sentry)0x0;
  lVar9 = *(long *)piVar6;
  piStack_78 = piVar6;
  puStack_60 = &stack0xfffffffffffffff0;
  if (*(int *)(piVar6 + *(long *)(lVar9 + -0x18) + 0x20) == 0) {
    puStack_60 = &stack0xfffffffffffffff0;
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (piVar6 + *(long *)(lVar9 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      puStack_60 = &stack0xfffffffffffffff0;
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
                  (piVar6 + *(long *)(lVar9 + -0x18) + 0x88));
      lVar9 = *(long *)piVar6;
    }
    asStack_80[0] = (sentry)0x1;
    uVar3 = *(uint *)(piVar6 + *(long *)(lVar9 + -0x18) + 8);
    locale::locale(alStack_70,(locale *)(piVar6 + *(long *)(lVar9 + -0x18) + 0x30));
    plVar7 = (long *)locale::use_facet(alStack_70,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_70);
    piVar1 = piVar6 + *(long *)(*(long *)piVar6 + -0x18);
    uVar5 = *(uint *)(piVar1 + 0x90);
    uVar10 = *(undefined8 *)(piVar1 + 0x28);
    if (uVar5 == 0xffffffff) {
      locale::locale(alStack_70,(locale *)(piVar1 + 0x30));
      plVar8 = (long *)locale::use_facet(alStack_70,(id *)PTR_id_0020f840);
      uVar5 = (**(code **)(*plVar8 + 0x38))(plVar8,0x20);
      locale::~locale(alStack_70);
      uVar5 = uVar5 & 0xff;
      *(uint *)(piVar1 + 0x90) = uVar5;
    }
    uVar2 = auVar11._8_8_ & 0xffff;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)auVar11._8_2_;
    }
    lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar10,piVar1,uVar5,uVar2);
    if (lVar9 == 0) {
      lVar9 = *(long *)(*(long *)piVar6 + -0x18);
      uVar5 = *(uint *)(piVar6 + lVar9 + 0x20);
      *(uint *)(piVar6 + lVar9 + 0x20) = uVar5 | 5;
      if ((*(uint *)(piVar6 + lVar9 + 0x24) & (uVar5 | 5)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(asStack_80);
  if (*(long *)(lVar4 + 0x28) == lStack_68) {
    return piVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa26c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(short) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,short param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar8 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar8 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar8 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aa2c0 to 001aa2c3 has its CatchHandler @ 001aa40c */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar8 + -0x18) + 0x88));
      lVar8 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    uVar3 = *(uint *)(this + *(long *)(lVar8 + -0x18) + 8);
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar8 + -0x18) + 0x30));
                    /* try { // try from 001aa2e8 to 001aa2f7 has its CatchHandler @ 001aa420 */
    plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar5 = *(uint *)(pbVar1 + 0x90);
    uVar9 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar5 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aa32c to 001aa34b has its CatchHandler @ 001aa414 */
      plVar7 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
      locale::~locale(alStack_60);
      uVar5 = uVar5 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar5;
    }
    uVar2 = (ulong)(ushort)param_1;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)param_1;
    }
                    /* try { // try from 001aa388 to 001aa397 has its CatchHandler @ 001aa418 */
    lVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,pbVar1,uVar5,uVar2);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)this + -0x18);
      uVar5 = *(uint *)(this + lVar8 + 0x20);
      *(uint *)(this + lVar8 + 0x20) = uVar5 | 5;
      if ((*(uint *)(this + lVar8 + 0x24) & (uVar5 | 5)) != 0) {
                    /* try { // try from 001aa3fc to 001aa407 has its CatchHandler @ 001aa408 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa47c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned short) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,ushort param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aa4d0 to 001aa4d3 has its CatchHandler @ 001aa5fc */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001aa4f4 to 001aa503 has its CatchHandler @ 001aa610 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aa538 to 001aa557 has its CatchHandler @ 001aa604 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001aa578 to 001aa587 has its CatchHandler @ 001aa608 */
    lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001aa5ec to 001aa5f7 has its CatchHandler @ 001aa5f8 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa66c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(int)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,int param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar8 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar8 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar8 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aa6c0 to 001aa6c3 has its CatchHandler @ 001aa80c */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar8 + -0x18) + 0x88));
      lVar8 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    uVar3 = *(uint *)(this + *(long *)(lVar8 + -0x18) + 8);
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar8 + -0x18) + 0x30));
                    /* try { // try from 001aa6e8 to 001aa6f7 has its CatchHandler @ 001aa820 */
    plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar5 = *(uint *)(pbVar1 + 0x90);
    uVar9 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar5 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aa72c to 001aa74b has its CatchHandler @ 001aa814 */
      plVar7 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
      locale::~locale(alStack_60);
      uVar5 = uVar5 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar5;
    }
    uVar2 = (ulong)(uint)param_1;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)param_1;
    }
                    /* try { // try from 001aa788 to 001aa797 has its CatchHandler @ 001aa818 */
    lVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,pbVar1,uVar5,uVar2);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)this + -0x18);
      uVar5 = *(uint *)(this + lVar8 + 0x20);
      *(uint *)(this + lVar8 + 0x20) = uVar5 | 5;
      if ((*(uint *)(this + lVar8 + 0x24) & (uVar5 | 5)) != 0) {
                    /* try { // try from 001aa7fc to 001aa807 has its CatchHandler @ 001aa808 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aa87c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,uint param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aa8d0 to 001aa8d3 has its CatchHandler @ 001aa9fc */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001aa8f4 to 001aa903 has its CatchHandler @ 001aaa10 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aa938 to 001aa957 has its CatchHandler @ 001aaa04 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001aa978 to 001aa987 has its CatchHandler @ 001aaa08 */
    lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001aa9ec to 001aa9f7 has its CatchHandler @ 001aa9f8 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aaa6c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(long)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,long param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aaac0 to 001aaac3 has its CatchHandler @ 001aabec */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001aaae4 to 001aaaf3 has its CatchHandler @ 001aac00 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aab28 to 001aab47 has its CatchHandler @ 001aabf4 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001aab64 to 001aab77 has its CatchHandler @ 001aabf8 */
    lVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001aabdc to 001aabe7 has its CatchHandler @ 001aabe8 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aac5c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,ulong param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aacb0 to 001aacb3 has its CatchHandler @ 001aaddc */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001aacd4 to 001aace3 has its CatchHandler @ 001aadf0 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aad18 to 001aad37 has its CatchHandler @ 001aade4 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001aad54 to 001aad67 has its CatchHandler @ 001aade8 */
    lVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001aadcc to 001aadd7 has its CatchHandler @ 001aadd8 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001aae4c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(long
   long) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,longlong param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aaea0 to 001aaea3 has its CatchHandler @ 001aafcc */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001aaec4 to 001aaed3 has its CatchHandler @ 001aafe0 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001aaf08 to 001aaf27 has its CatchHandler @ 001aafd4 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001aaf44 to 001aaf57 has its CatchHandler @ 001aafd8 */
    lVar6 = (**(code **)(*plVar4 + 0x28))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001aafbc to 001aafc7 has its CatchHandler @ 001aafc8 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab03c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long long) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,ulonglong param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001ab090 to 001ab093 has its CatchHandler @ 001ab1bc */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001ab0b4 to 001ab0c3 has its CatchHandler @ 001ab1d0 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ab0f8 to 001ab117 has its CatchHandler @ 001ab1c4 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001ab134 to 001ab147 has its CatchHandler @ 001ab1c8 */
    lVar6 = (**(code **)(*plVar4 + 0x38))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001ab1ac to 001ab1b7 has its CatchHandler @ 001ab1b8 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab22c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(float) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,float param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001ab280 to 001ab283 has its CatchHandler @ 001ab3ac */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001ab2a4 to 001ab2b3 has its CatchHandler @ 001ab3c0 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (*(int *)(pbVar1 + 0x90) == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ab2e8 to 001ab307 has its CatchHandler @ 001ab3b4 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      *(uint *)(pbVar1 + 0x90) = uVar3 & 0xff;
    }
                    /* try { // try from 001ab328 to 001ab337 has its CatchHandler @ 001ab3b8 */
    lVar6 = (**(code **)(*plVar4 + 0x40))((double)param_1,plVar4,uVar7,pbVar1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001ab39c to 001ab3a7 has its CatchHandler @ 001ab3a8 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab41c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(double) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,double param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001ab470 to 001ab473 has its CatchHandler @ 001ab59c */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001ab494 to 001ab4a3 has its CatchHandler @ 001ab5b0 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (*(int *)(pbVar1 + 0x90) == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ab4d8 to 001ab4f7 has its CatchHandler @ 001ab5a4 */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      *(uint *)(pbVar1 + 0x90) = uVar3 & 0xff;
    }
                    /* try { // try from 001ab514 to 001ab527 has its CatchHandler @ 001ab5a8 */
    lVar6 = (**(code **)(*plVar4 + 0x40))(param_1,plVar4,uVar7,pbVar1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001ab58c to 001ab597 has its CatchHandler @ 001ab598 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab60c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(long
   double) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,longdouble param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_60 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_58;
  locale alStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_58 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001ab65c to 001ab65f has its CatchHandler @ 001ab784 */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_60[0] = (sentry)0x1;
    locale::locale(alStack_50,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001ab680 to 001ab68f has its CatchHandler @ 001ab798 */
    plVar4 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_50);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (*(int *)(pbVar1 + 0x90) == -1) {
      locale::locale(alStack_50,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ab6c4 to 001ab6e3 has its CatchHandler @ 001ab78c */
      plVar5 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_50);
      *(uint *)(pbVar1 + 0x90) = uVar3 & 0xff;
    }
                    /* try { // try from 001ab700 to 001ab713 has its CatchHandler @ 001ab790 */
    lVar6 = (**(code **)(*plVar4 + 0x48))(param_1,plVar4,uVar7,pbVar1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001ab774 to 001ab77f has its CatchHandler @ 001ab780 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab7f4  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::TEMPNAMEPLACEHOLDERVALUE(void
   const*) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,void *param_1)

{
  basic_ostream<char,std::__ndk1::char_traits<char>> *pbVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  sentry local_70 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001ab848 to 001ab84b has its CatchHandler @ 001ab974 */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar6 + -0x18) + 0x30));
                    /* try { // try from 001ab86c to 001ab87b has its CatchHandler @ 001ab988 */
    plVar4 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8d0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    uVar3 = *(uint *)(pbVar1 + 0x90);
    uVar7 = *(undefined8 *)(pbVar1 + 0x28);
    if (uVar3 == 0xffffffff) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ab8b0 to 001ab8cf has its CatchHandler @ 001ab97c */
      plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f840);
      uVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,0x20);
      locale::~locale(alStack_60);
      uVar3 = uVar3 & 0xff;
      *(uint *)(pbVar1 + 0x90) = uVar3;
    }
                    /* try { // try from 001ab8ec to 001ab8ff has its CatchHandler @ 001ab980 */
    lVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar7,pbVar1,uVar3,param_1);
    if (lVar6 == 0) {
      lVar6 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar6 + 0x20);
      *(uint *)(this + lVar6 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar6 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001ab964 to 001ab96f has its CatchHandler @ 001ab970 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ab9e4  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*)
    */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  basic_streambuf *pbVar7;
  long *plVar8;
  sentry local_58 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_50 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(lVar6 + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001aba34 to 001aba37 has its CatchHandler @ 001abbac */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(lVar6 + -0x18) + 0x88));
      lVar6 = *(long *)this;
    }
    local_58[0] = (sentry)0x1;
    lVar6 = *(long *)(lVar6 + -0x18);
    if (param_1 != (basic_streambuf *)0x0) {
      plVar8 = *(long **)(this + lVar6 + 0x28);
      lVar6 = 0;
      do {
        pbVar7 = param_1;
        if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
                    /* try { // try from 001aba7c to 001abb0b has its CatchHandler @ 001abbf4 */
          iVar5 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
          pbVar7 = (basic_streambuf *)0x0;
          if (iVar5 != -1) {
            pbVar7 = param_1;
          }
          if (pbVar7 == (basic_streambuf *)0x0) goto LAB_001abb30;
        }
        if (*(undefined1 **)(pbVar7 + 0x18) == *(undefined1 **)(pbVar7 + 0x20)) {
          uVar4 = (**(code **)(*(long *)pbVar7 + 0x48))(pbVar7);
        }
        else {
          uVar4 = **(undefined1 **)(pbVar7 + 0x18);
        }
        if (plVar8 == (long *)0x0) goto LAB_001abb34;
        puVar1 = (undefined1 *)plVar8[6];
        if (puVar1 == (undefined1 *)plVar8[7]) {
          iVar5 = (**(code **)(*plVar8 + 0x68))(plVar8,uVar4);
          if (iVar5 == -1) goto LAB_001abb30;
        }
        else {
          plVar8[6] = (long)(puVar1 + 1);
          *puVar1 = uVar4;
        }
        if (*(long *)(pbVar7 + 0x18) == *(long *)(pbVar7 + 0x20)) {
          (**(code **)(*(long *)pbVar7 + 0x50))(pbVar7);
        }
        else {
          *(long *)(pbVar7 + 0x18) = *(long *)(pbVar7 + 0x18) + 1;
        }
        lVar6 = lVar6 + -1;
        param_1 = pbVar7;
      } while( true );
    }
    uVar2 = *(uint *)(this + lVar6 + 0x20);
    *(uint *)(this + lVar6 + 0x20) = uVar2 | 1;
    if ((*(uint *)(this + lVar6 + 0x24) & (uVar2 | 1)) != 0) {
                    /* try { // try from 001abb24 to 001abb2f has its CatchHandler @ 001abc34 */
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
LAB_001abb64:
  sentry::~sentry(local_58);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001abb30:
  if (lVar6 == 0) {
LAB_001abb34:
    lVar6 = *(long *)(*(long *)this + -0x18);
    uVar2 = *(uint *)(this + lVar6 + 0x20) | (uint)(*(long *)(this + lVar6 + 0x28) == 0) | 4;
    *(uint *)(this + lVar6 + 0x20) = uVar2;
    if ((uVar2 & *(uint *)(this + lVar6 + 0x24)) != 0) {
                    /* try { // try from 001abb9c to 001abba7 has its CatchHandler @ 001abba8 */
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  goto LAB_001abb64;
}


// ===== 001abc44  std::__ndk1::ios_base::__set_failbit_and_consider_rethrow =====

/* std::__ndk1::ios_base::__set_failbit_and_consider_rethrow() */

ios_base * __thiscall std::__ndk1::ios_base::__set_failbit_and_consider_rethrow(ios_base *this)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  ios_base *piVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [12];
  sentry asStack_58 [8];
  ios_base *piStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 4;
  if (((byte)this[0x24] >> 2 & 1) == 0) {
    return this;
  }
  auVar8 = __cxa_rethrow();
  piVar5 = auVar8._0_8_;
  pcStack_38 = basic_ostream<char,std::__ndk1::char_traits<char>>::put;
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  asStack_58[0] = (sentry)0x0;
  lVar7 = *(long *)piVar5;
  piStack_50 = piVar5;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(int *)(piVar5 + *(long *)(lVar7 + -0x18) + 0x20) != 0) goto LAB_001abd2c;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
       (piVar5 + *(long *)(lVar7 + -0x18) + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
    puStack_40 = &stack0xfffffffffffffff0;
    basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
                (piVar5 + *(long *)(lVar7 + -0x18) + 0x88));
    lVar7 = *(long *)piVar5;
  }
  asStack_58[0] = (sentry)0x1;
  plVar6 = *(long **)(piVar5 + *(long *)(lVar7 + -0x18) + 0x28);
  if (plVar6 != (long *)0x0) {
    puVar2 = (undefined1 *)plVar6[6];
    if (puVar2 != (undefined1 *)plVar6[7]) {
      plVar6[6] = (long)(puVar2 + 1);
      *puVar2 = auVar8[8];
      goto LAB_001abd2c;
    }
    iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,auVar8._8_4_ & 0xff);
    if (iVar4 != -1) goto LAB_001abd2c;
    lVar7 = *(long *)piVar5;
  }
  lVar7 = *(long *)(lVar7 + -0x18);
  uVar1 = *(uint *)(piVar5 + lVar7 + 0x20);
  *(uint *)(piVar5 + lVar7 + 0x20) = uVar1 | 1;
  if ((*(uint *)(piVar5 + lVar7 + 0x24) & (uVar1 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001abd2c:
  basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(asStack_58);
  if (*(long *)(lVar3 + 0x28) == lStack_48) {
    return piVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abc6c  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::put(char) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  sentry local_48 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_40 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) != 0) goto LAB_001abd2c;
  if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
       (this + *(long *)(lVar6 + -0x18) + 0x88) !=
      (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001abcb8 to 001abcbb has its CatchHandler @ 001abd7c */
    flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
           (this + *(long *)(lVar6 + -0x18) + 0x88));
    lVar6 = *(long *)this;
  }
  local_48[0] = (sentry)0x1;
  plVar5 = *(long **)(this + *(long *)(lVar6 + -0x18) + 0x28);
  if (plVar5 != (long *)0x0) {
    pcVar2 = (char *)plVar5[6];
    if (pcVar2 != (char *)plVar5[7]) {
      plVar5[6] = (long)(pcVar2 + 1);
      *pcVar2 = param_1;
      goto LAB_001abd2c;
    }
                    /* try { // try from 001abd00 to 001abd03 has its CatchHandler @ 001abd6c */
    iVar4 = (**(code **)(*plVar5 + 0x68))(plVar5,param_1);
    if (iVar4 != -1) goto LAB_001abd2c;
    lVar6 = *(long *)this;
  }
  lVar6 = *(long *)(lVar6 + -0x18);
  uVar1 = *(uint *)(this + lVar6 + 0x20);
  *(uint *)(this + lVar6 + 0x20) = uVar1 | 1;
  if ((*(uint *)(this + lVar6 + 0x24) & (uVar1 | 1)) != 0) {
                    /* try { // try from 001abd60 to 001abd6b has its CatchHandler @ 001abd6c */
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001abd2c:
  sentry::~sentry(local_48);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abdc8  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(char const*, long) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  sentry local_48 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48[0] = (sentry)0x0;
  local_40 = this;
  if (*(int *)(this + *(long *)(*(long *)this + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
         (this + *(long *)(*(long *)this + -0x18) + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
                    /* try { // try from 001abe48 to 001abe4b has its CatchHandler @ 001abec4 */
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)
             (this + *(long *)(*(long *)this + -0x18) + 0x88));
    }
    local_48[0] = (sentry)0x1;
                    /* try { // try from 001abe70 to 001abeaf has its CatchHandler @ 001abeb4 */
    if ((param_2 != 0) &&
       (lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x60))
                          (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,
                           param_2), lVar3 != param_2)) {
      lVar3 = *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this + lVar3 + 0x20);
      *(uint *)(this + lVar3 + 0x20) = uVar1 | 1;
      if ((*(uint *)(this + lVar3 + 0x24) & (uVar1 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001abf10  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::tellp =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::tellp() */

undefined1  [16] __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::tellp
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this)

{
  undefined1 auVar1 [16];
  
  if (((byte)this[*(long *)(*(long *)this + -0x18) + 0x20] & 5) != 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  auVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x20))
                     (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,1,0x10);
  return auVar1;
}


// ===== 001abf68  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::seekp =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char>
   >::seekp(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::seekp
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  long *plVar2;
  long extraout_x1;
  long lVar3;
  long lVar4;
  uint uVar5;
  sentry local_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar4 = *param_1;
  lVar3 = *(long *)(lVar4 + -0x18);
  uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20);
  local_40 = param_1;
  if (uVar5 == 0) {
    this = *(basic_ostream<char,std::__ndk1::char_traits<char>> **)((long)param_1 + lVar3 + 0x88);
    if (this != (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(this);
      lVar4 = *param_1;
    }
    local_48[0] = (sentry)0x1;
    lVar3 = *(long *)(lVar4 + -0x18);
    uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20);
  }
                    /* try { // try from 001abff0 to 001abfff has its CatchHandler @ 001ac07c */
  if (((uVar5 & 5) == 0) &&
     (plVar2 = *(long **)((long)param_1 + lVar3 + 0x28),
     (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,0x10), extraout_x1 == -1)) {
    lVar3 = *(long *)(*param_1 + -0x18);
    uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20) |
            (uint)(*(long *)((long)param_1 + lVar3 + 0x28) == 0) | 4;
    *(uint *)((long)param_1 + lVar3 + 0x20) = uVar5;
    if ((uVar5 & *(uint *)((long)param_1 + lVar3 + 0x24)) != 0) {
                    /* try { // try from 001ac06c to 001ac077 has its CatchHandler @ 001ac078 */
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac090  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::seekp =====

/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::seekp(long long,
   std::__ndk1::ios_base::seekdir) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::seekp
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,undefined8 param_1,
          undefined4 param_3)

{
  long lVar1;
  long extraout_x1;
  long lVar2;
  long lVar3;
  uint uVar4;
  sentry local_48 [8];
  basic_ostream<char,std::__ndk1::char_traits<char>> *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar3 = *(long *)this;
  lVar2 = *(long *)(lVar3 + -0x18);
  uVar4 = *(uint *)(this + lVar2 + 0x20);
  local_40 = this;
  if (uVar4 == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar2 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      flush(*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(this + lVar2 + 0x88));
      lVar3 = *(long *)this;
    }
    local_48[0] = (sentry)0x1;
    lVar2 = *(long *)(lVar3 + -0x18);
    uVar4 = *(uint *)(this + lVar2 + 0x20);
  }
                    /* try { // try from 001ac118 to 001ac127 has its CatchHandler @ 001ac1a4 */
  if (((uVar4 & 5) == 0) &&
     ((**(code **)(**(long **)(this + lVar2 + 0x28) + 0x20))
                (*(long **)(this + lVar2 + 0x28),param_1,param_3,0x10), extraout_x1 == -1)) {
    lVar2 = *(long *)(*(long *)this + -0x18);
    uVar4 = *(uint *)(this + lVar2 + 0x20) | (uint)(*(long *)(this + lVar2 + 0x28) == 0) | 4;
    *(uint *)(this + lVar2 + 0x20) = uVar4;
    if ((uVar4 & *(uint *)(this + lVar2 + 0x24)) != 0) {
                    /* try { // try from 001ac194 to 001ac19f has its CatchHandler @ 001ac1a0 */
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac1b8  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_ostream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::basic_ostream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */

void std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_ostream
               (basic_streambuf *param_1)

{
  undefined8 uVar1;
  long *in_x1;
  long in_x2;
  long lVar2;
  
  lVar2 = *in_x1;
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[1];
  uVar1 = _DAT_001462d0;
  lVar2 = *(long *)(*(long *)param_1 + -0x18);
  *(undefined8 *)(param_1 + lVar2 + 0x18) = _UNK_001462d8;
  *(undefined8 *)(param_1 + lVar2 + 0x10) = uVar1;
  *(long *)(param_1 + lVar2 + 0x28) = in_x2;
  *(uint *)(param_1 + lVar2 + 0x20) = (uint)(in_x2 == 0);
  *(undefined4 *)(param_1 + lVar2 + 0x24) = 0;
  *(undefined4 *)(param_1 + lVar2 + 8) = 0x1002;
  *(undefined8 *)(param_1 + lVar2 + 0x40) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x38) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x50) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x48) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x60) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x58) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x70) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x68) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x80) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x78) = 0;
  locale::locale((locale *)(param_1 + lVar2 + 0x30));
  *(undefined8 *)(param_1 + lVar2 + 0x88) = 0;
  *(undefined4 *)(param_1 + lVar2 + 0x90) = 0xffffffff;
  return;
}


// ===== 001ac240  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_ostream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::basic_ostream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_ostream
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_vtable_0020f8d8;
  uVar2 = _UNK_001462d8;
  uVar1 = _DAT_001462d0;
  *(basic_streambuf **)(this + 0x30) = param_1;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x10) = 0x1002;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)this = puVar3 + 0x18;
  *(undefined **)(this + 8) = puVar3 + 0x40;
  *(uint *)(this + 0x28) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  locale::locale((locale *)(this + 0x38));
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  return;
}


// ===== 001ac2b8  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  return;
}


// ===== 001ac2bc  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 8));
  return;
}


// ===== 001ac2c4  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream =====

/* virtual thunk to std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base::~ios_base((ios_base *)(this + *(long *)(*(long *)this + -0x18) + 8));
  return;
}


// ===== 001ac2d8  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 8));
  operator_delete(this);
  return;
}


// ===== 001ac300  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream =====

/* virtual thunk to std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::~basic_ostream() */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  ios_base::~ios_base((ios_base *)(this + lVar1 + 8));
  operator_delete(this + lVar1);
  return;
}


// ===== 001ac330  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::swap =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::swap(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::swap
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_ostream *param_1)

{
  ios_base *this_00;
  ios_base *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  piVar1 = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  ios_base::swap(this_00,piVar1);
  uVar3 = *(undefined8 *)(this_00 + 0x88);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(piVar1 + 0x88);
  *(undefined8 *)(piVar1 + 0x88) = uVar3;
  uVar2 = *(undefined4 *)(this_00 + 0x90);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(piVar1 + 0x90);
  *(undefined4 *)(piVar1 + 0x90) = uVar2;
  return;
}


// ===== 001ac38c  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::sentry::sentry(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  *this = (sentry)0x0;
  *(basic_ostream **)(this + 8) = param_1;
  if (*(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x88));
    }
    *this = (sentry)0x1;
  }
  return;
}


// ===== 001ac3d8  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::~sentry =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry() */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::~sentry(sentry *this)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(this + 8);
  lVar5 = *(long *)(*plVar4 + -0x18);
                    /* try { // try from 001ac434 to 001ac47b has its CatchHandler @ 001ac47c */
  if ((((*(long *)((long)plVar4 + lVar5 + 0x28) != 0) &&
       (*(int *)((long)plVar4 + lVar5 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar4 + lVar5 + 9) >> 5 & 1) != 0)) &&
     ((uVar3 = uncaught_exception(), (uVar3 & 1) == 0 &&
      (iVar2 = (**(code **)(**(long **)((long)*(long **)(this + 8) +
                                       *(long *)(**(long **)(this + 8) + -0x18) + 0x28) + 0x30))(),
      iVar2 == -1)))) {
    plVar4 = *(long **)(this + 8);
    lVar5 = *(long *)(*plVar4 + -0x18);
    uVar1 = *(uint *)((long)plVar4 + lVar5 + 0x20) | 1;
    *(uint *)((long)plVar4 + lVar5 + 0x20) = uVar1;
    if ((*(uint *)((long)plVar4 + lVar5 + 0x24) & uVar1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  return;
}


// ===== 001ac48c  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >& (*)(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */

void __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,
          _func_basic_ostream_ptr_basic_ostream_ptr *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001ac48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_1)((basic_ostream *)this);
  return;
}


// ===== 001ac490  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >&
   (*)(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,
          _func_basic_ios_ptr_basic_ios_ptr *param_1)

{
  (*param_1)((basic_ios *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001ac4c0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,
          _func_ios_base_ptr_ios_base_ptr *param_1)

{
  (*param_1)((ios_base *)(this + *(long *)(*(long *)this + -0x18)));
  return this;
}


// ===== 001ac4f0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(bool) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,bool param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ac544 to 001ac547 has its CatchHandler @ 001ac670 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001ac568 to 001ac577 has its CatchHandler @ 001ac684 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ac5ac to 001ac5cb has its CatchHandler @ 001ac678 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001ac5e4 to 001ac5fb has its CatchHandler @ 001ac67c */
    lVar7 = (**(code **)(*plVar5 + 0x18))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ac660 to 001ac66b has its CatchHandler @ 001ac66c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac6e0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(short) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,short param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar8 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar8 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar8 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ac734 to 001ac737 has its CatchHandler @ 001ac880 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar8 + -0x18) + 0x88));
      lVar8 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    uVar3 = *(uint *)(this + *(long *)(lVar8 + -0x18) + 8);
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar8 + -0x18) + 0x30));
                    /* try { // try from 001ac75c to 001ac76b has its CatchHandler @ 001ac894 */
    plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar5 = *(int *)(pbVar1 + 0x90);
    uVar9 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar5 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ac7a0 to 001ac7bf has its CatchHandler @ 001ac888 */
      plVar7 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar5 = (**(code **)(*plVar7 + 0x58))(plVar7,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar5;
    }
    uVar2 = (ulong)(ushort)param_1;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)param_1;
    }
                    /* try { // try from 001ac7f8 to 001ac80b has its CatchHandler @ 001ac88c */
    lVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,pbVar1,iVar5,uVar2);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar8 + 0x20);
      *(uint *)(this + lVar8 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar8 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001ac870 to 001ac87b has its CatchHandler @ 001ac87c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ac8f0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned short) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ushort param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ac944 to 001ac947 has its CatchHandler @ 001aca70 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001ac968 to 001ac977 has its CatchHandler @ 001aca84 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ac9ac to 001ac9cb has its CatchHandler @ 001aca78 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001ac9e8 to 001ac9fb has its CatchHandler @ 001aca7c */
    lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001aca60 to 001aca6b has its CatchHandler @ 001aca6c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001acae0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(int) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,int param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar8 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar8 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar8 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001acb34 to 001acb37 has its CatchHandler @ 001acc80 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar8 + -0x18) + 0x88));
      lVar8 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    uVar3 = *(uint *)(this + *(long *)(lVar8 + -0x18) + 8);
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar8 + -0x18) + 0x30));
                    /* try { // try from 001acb5c to 001acb6b has its CatchHandler @ 001acc94 */
    plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar5 = *(int *)(pbVar1 + 0x90);
    uVar9 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar5 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001acba0 to 001acbbf has its CatchHandler @ 001acc88 */
      plVar7 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar5 = (**(code **)(*plVar7 + 0x58))(plVar7,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar5;
    }
    uVar2 = (ulong)(uint)param_1;
    if ((uVar3 & 0x4a) != 8 && (uVar3 & 0x4a) != 0x40) {
      uVar2 = (long)param_1;
    }
                    /* try { // try from 001acbf8 to 001acc0b has its CatchHandler @ 001acc8c */
    lVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,uVar9,pbVar1,iVar5,uVar2);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)this + -0x18);
      uVar3 = *(uint *)(this + lVar8 + 0x20);
      *(uint *)(this + lVar8 + 0x20) = uVar3 | 5;
      if ((*(uint *)(this + lVar8 + 0x24) & (uVar3 | 5)) != 0) {
                    /* try { // try from 001acc70 to 001acc7b has its CatchHandler @ 001acc7c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001accf0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,uint param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001acd44 to 001acd47 has its CatchHandler @ 001ace70 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001acd68 to 001acd77 has its CatchHandler @ 001ace84 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001acdac to 001acdcb has its CatchHandler @ 001ace78 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001acde8 to 001acdfb has its CatchHandler @ 001ace7c */
    lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ace60 to 001ace6b has its CatchHandler @ 001ace6c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001acee0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,long param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001acf34 to 001acf37 has its CatchHandler @ 001ad060 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001acf58 to 001acf67 has its CatchHandler @ 001ad074 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001acf9c to 001acfbb has its CatchHandler @ 001ad068 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001acfd4 to 001acfeb has its CatchHandler @ 001ad06c */
    lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ad050 to 001ad05b has its CatchHandler @ 001ad05c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad0d0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ulong param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ad124 to 001ad127 has its CatchHandler @ 001ad250 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001ad148 to 001ad157 has its CatchHandler @ 001ad264 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ad18c to 001ad1ab has its CatchHandler @ 001ad258 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001ad1c4 to 001ad1db has its CatchHandler @ 001ad25c */
    lVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ad240 to 001ad24b has its CatchHandler @ 001ad24c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad2c0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,longlong param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ad314 to 001ad317 has its CatchHandler @ 001ad440 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001ad338 to 001ad347 has its CatchHandler @ 001ad454 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ad37c to 001ad39b has its CatchHandler @ 001ad448 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001ad3b4 to 001ad3cb has its CatchHandler @ 001ad44c */
    lVar7 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ad430 to 001ad43b has its CatchHandler @ 001ad43c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad4b0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(unsigned long long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,ulonglong param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ad504 to 001ad507 has its CatchHandler @ 001ad630 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001ad528 to 001ad537 has its CatchHandler @ 001ad644 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ad56c to 001ad58b has its CatchHandler @ 001ad638 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001ad5a4 to 001ad5bb has its CatchHandler @ 001ad63c */
    lVar7 = (**(code **)(*plVar5 + 0x38))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ad620 to 001ad62b has its CatchHandler @ 001ad62c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad6a0  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(float) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,float param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ad6f4 to 001ad6f7 has its CatchHandler @ 001ad820 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001ad718 to 001ad727 has its CatchHandler @ 001ad834 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ad75c to 001ad77b has its CatchHandler @ 001ad828 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001ad798 to 001ad7ab has its CatchHandler @ 001ad82c */
    lVar7 = (**(code **)(*plVar5 + 0x40))((double)param_1,plVar5,uVar8,pbVar1,iVar4);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ad810 to 001ad81b has its CatchHandler @ 001ad81c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ad890  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(double) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,double param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ad8e4 to 001ad8e7 has its CatchHandler @ 001ada10 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001ad908 to 001ad917 has its CatchHandler @ 001ada24 */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001ad94c to 001ad96b has its CatchHandler @ 001ada18 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001ad984 to 001ad99b has its CatchHandler @ 001ada1c */
    lVar7 = (**(code **)(*plVar5 + 0x40))(param_1,plVar5,uVar8,pbVar1,iVar4);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001ada00 to 001ada0b has its CatchHandler @ 001ada0c */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ada80  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long double) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,longdouble param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_60 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_58;
  locale alStack_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_60[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_58 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001adad0 to 001adad3 has its CatchHandler @ 001adbf8 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_60[0] = (sentry)0x1;
    locale::locale(alStack_50,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001adaf4 to 001adb03 has its CatchHandler @ 001adc0c */
    plVar5 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_50);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_50,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001adb38 to 001adb57 has its CatchHandler @ 001adc00 */
      plVar6 = (long *)locale::use_facet(alStack_50,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_50);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001adb70 to 001adb87 has its CatchHandler @ 001adc04 */
    lVar7 = (**(code **)(*plVar5 + 0x48))(param_1,plVar5,uVar8,pbVar1,iVar4);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001adbe8 to 001adbf3 has its CatchHandler @ 001adbf4 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_60);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001adc68  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(void const*) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,void *param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_70[0] = (sentry)0x0;
  lVar7 = *(long *)this;
  local_68 = this;
  if (*(int *)(this + *(long *)(lVar7 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar7 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001adcbc to 001adcbf has its CatchHandler @ 001adde8 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar7 + -0x18) + 0x88));
      lVar7 = *(long *)this;
    }
    local_70[0] = (sentry)0x1;
    locale::locale(alStack_60,(locale *)(this + *(long *)(lVar7 + -0x18) + 0x30));
                    /* try { // try from 001adce0 to 001adcef has its CatchHandler @ 001addfc */
    plVar5 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8e0);
    locale::~locale(alStack_60);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar4 = *(int *)(pbVar1 + 0x90);
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar4 == -1) {
      locale::locale(alStack_60,(locale *)(pbVar1 + 0x30));
                    /* try { // try from 001add24 to 001add43 has its CatchHandler @ 001addf0 */
      plVar6 = (long *)locale::use_facet(alStack_60,(id *)PTR_id_0020f8b8);
      iVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = iVar4;
    }
                    /* try { // try from 001add5c to 001add73 has its CatchHandler @ 001addf4 */
    lVar7 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar8,pbVar1,iVar4,param_1);
    if (lVar7 == 0) {
      lVar7 = *(long *)(*(long *)this + -0x18);
      uVar2 = *(uint *)(this + lVar7 + 0x20);
      *(uint *)(this + lVar7 + 0x20) = uVar2 | 5;
      if ((*(uint *)(this + lVar7 + 0x24) & (uVar2 | 5)) != 0) {
                    /* try { // try from 001addd8 to 001adde3 has its CatchHandler @ 001adde4 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_70);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ade58  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<< =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_streambuf<wchar_t,
   std::__ndk1::char_traits<wchar_t> >*) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,basic_streambuf *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  sentry local_58 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_58[0] = (sentry)0x0;
  lVar5 = *(long *)this;
  local_50 = this;
  if (*(int *)(this + *(long *)(lVar5 + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(lVar5 + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001adedc to 001adedf has its CatchHandler @ 001ae02c */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(lVar5 + -0x18) + 0x88));
      lVar5 = *(long *)this;
    }
    local_58[0] = (sentry)0x1;
    lVar5 = *(long *)(lVar5 + -0x18);
    if (param_1 == (basic_streambuf *)0x0) {
      uVar2 = *(uint *)(this + lVar5 + 0x20);
      *(uint *)(this + lVar5 + 0x20) = uVar2 | 1;
      if ((*(uint *)(this + lVar5 + 0x24) & (uVar2 | 1)) != 0) {
                    /* try { // try from 001ae018 to 001ae023 has its CatchHandler @ 001ae0b4 */
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
    else {
      plVar6 = *(long **)(this + lVar5 + 0x28);
      lVar5 = 0;
      while( true ) {
        if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
                    /* try { // try from 001adf2c to 001adfbf has its CatchHandler @ 001ae074 */
          iVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
        else {
          iVar4 = **(int **)(param_1 + 0x18);
        }
        if (iVar4 == -1) break;
        if (*(int **)(param_1 + 0x18) == *(int **)(param_1 + 0x20)) {
          iVar4 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
        }
        else {
          iVar4 = **(int **)(param_1 + 0x18);
        }
        if (plVar6 == (long *)0x0) goto LAB_001adfc8;
        piVar1 = (int *)plVar6[6];
        if (piVar1 == (int *)plVar6[7]) {
          iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        else {
          plVar6[6] = (long)(piVar1 + 1);
          *piVar1 = iVar4;
        }
        if (iVar4 == -1) break;
        if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)) {
          (**(code **)(*(long *)param_1 + 0x50))(param_1);
        }
        else {
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
        }
        lVar5 = lVar5 + -1;
      }
      if (lVar5 == 0) {
LAB_001adfc8:
        lVar5 = *(long *)(*(long *)this + -0x18);
        uVar2 = *(uint *)(this + lVar5 + 0x20) | (uint)(*(long *)(this + lVar5 + 0x28) == 0) | 4;
        *(uint *)(this + lVar5 + 0x20) = uVar2;
        if ((uVar2 & *(uint *)(this + lVar5 + 0x24)) != 0) {
                    /* try { // try from 001adff8 to 001ae003 has its CatchHandler @ 001ae028 */
                    /* WARNING: Subroutine does not return */
          FUN_001aedec("ios_base::clear");
        }
      }
    }
  }
  sentry::~sentry(local_58);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


// ===== 001ae0c4  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::put =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::put(wchar_t) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::put
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar6 = *(long *)this;
  local_40 = this;
  if (*(int *)(this + *(long *)(lVar6 + -0x18) + 0x20) != 0) goto LAB_001ae190;
  if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
       (this + *(long *)(lVar6 + -0x18) + 0x88) !=
      (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ae110 to 001ae113 has its CatchHandler @ 001ae1e0 */
    flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
           (this + *(long *)(lVar6 + -0x18) + 0x88));
    lVar6 = *(long *)this;
  }
  local_48[0] = (sentry)0x1;
  lVar6 = *(long *)(lVar6 + -0x18);
  plVar5 = *(long **)(this + lVar6 + 0x28);
  if (plVar5 != (long *)0x0) {
    pwVar2 = (wchar_t *)plVar5[6];
    if (pwVar2 == (wchar_t *)plVar5[7]) {
                    /* try { // try from 001ae15c to 001ae163 has its CatchHandler @ 001ae1d0 */
      iVar4 = (**(code **)(*plVar5 + 0x68))(plVar5,param_1);
      if (iVar4 != -1) goto LAB_001ae190;
    }
    else {
      plVar5[6] = (long)(pwVar2 + 1);
      *pwVar2 = param_1;
      if (param_1 != L'\xffffffff') goto LAB_001ae190;
    }
    lVar6 = *(long *)(*(long *)this + -0x18);
  }
  uVar1 = *(uint *)(this + lVar6 + 0x20);
  *(uint *)(this + lVar6 + 0x20) = uVar1 | 1;
  if ((*(uint *)(this + lVar6 + 0x24) & (uVar1 | 1)) != 0) {
                    /* try { // try from 001ae1c4 to 001ae1cf has its CatchHandler @ 001ae1d0 */
                    /* WARNING: Subroutine does not return */
    FUN_001aedec("ios_base::clear");
  }
LAB_001ae190:
  sentry::~sentry(local_48);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


// ===== 001ae22c  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::write =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::write(wchar_t const*,
   long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::write
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48[0] = (sentry)0x0;
  local_40 = this;
  if (*(int *)(this + *(long *)(*(long *)this + -0x18) + 0x20) == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
         (this + *(long *)(*(long *)this + -0x18) + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
                    /* try { // try from 001ae2ac to 001ae2af has its CatchHandler @ 001ae328 */
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
             (this + *(long *)(*(long *)this + -0x18) + 0x88));
    }
    local_48[0] = (sentry)0x1;
                    /* try { // try from 001ae2d4 to 001ae313 has its CatchHandler @ 001ae318 */
    if ((param_2 != 0) &&
       (lVar3 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x60))
                          (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),param_1,
                           param_2), lVar3 != param_2)) {
      lVar3 = *(long *)(*(long *)this + -0x18);
      uVar1 = *(uint *)(this + lVar3 + 0x20);
      *(uint *)(this + lVar3 + 0x20) = uVar1 | 1;
      if ((*(uint *)(this + lVar3 + 0x24) & (uVar1 | 1)) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001aedec("ios_base::clear");
      }
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae374  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::tellp =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::tellp() */

undefined1  [16] __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::tellp
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  undefined1 auVar1 [16];
  
  if (((byte)this[*(long *)(*(long *)this + -0x18) + 0x20] & 5) != 0) {
    return ZEXT816(0xffffffffffffffff) << 0x40;
  }
  auVar1 = (**(code **)(**(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28) + 0x20))
                     (*(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28),0,1,0x10);
  return auVar1;
}


// ===== 001ae3cc  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekp =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::seekp(std::__ndk1::fpos<mbstate_t>) */

long * std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekp
                 (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this;
  long *plVar2;
  long extraout_x1;
  long lVar3;
  long lVar4;
  uint uVar5;
  sentry local_48 [8];
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar4 = *param_1;
  lVar3 = *(long *)(lVar4 + -0x18);
  uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20);
  local_40 = param_1;
  if (uVar5 == 0) {
    this = *(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)
            ((long)param_1 + lVar3 + 0x88);
    if (this != (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(this);
      lVar4 = *param_1;
    }
    local_48[0] = (sentry)0x1;
    lVar3 = *(long *)(lVar4 + -0x18);
    uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20);
  }
                    /* try { // try from 001ae454 to 001ae463 has its CatchHandler @ 001ae4e0 */
  if (((uVar5 & 5) == 0) &&
     (plVar2 = *(long **)((long)param_1 + lVar3 + 0x28),
     (**(code **)(*plVar2 + 0x28))(plVar2,param_2,param_3,0x10), extraout_x1 == -1)) {
    lVar3 = *(long *)(*param_1 + -0x18);
    uVar5 = *(uint *)((long)param_1 + lVar3 + 0x20) |
            (uint)(*(long *)((long)param_1 + lVar3 + 0x28) == 0) | 4;
    *(uint *)((long)param_1 + lVar3 + 0x20) = uVar5;
    if ((uVar5 & *(uint *)((long)param_1 + lVar3 + 0x24)) != 0) {
                    /* try { // try from 001ae4d0 to 001ae4db has its CatchHandler @ 001ae4dc */
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae4f4  std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekp =====

/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekp(long long,
   std::__ndk1::ios_base::seekdir) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::seekp
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,undefined8 param_1,
          undefined4 param_3)

{
  long lVar1;
  long extraout_x1;
  long lVar2;
  long lVar3;
  uint uVar4;
  sentry local_48 [8];
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = (sentry)0x0;
  lVar3 = *(long *)this;
  lVar2 = *(long *)(lVar3 + -0x18);
  uVar4 = *(uint *)(this + lVar2 + 0x20);
  local_40 = this;
  if (uVar4 == 0) {
    if (*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88) !=
        (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *)0x0) {
      flush(*(basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> **)(this + lVar2 + 0x88));
      lVar3 = *(long *)this;
    }
    local_48[0] = (sentry)0x1;
    lVar2 = *(long *)(lVar3 + -0x18);
    uVar4 = *(uint *)(this + lVar2 + 0x20);
  }
                    /* try { // try from 001ae57c to 001ae58b has its CatchHandler @ 001ae608 */
  if (((uVar4 & 5) == 0) &&
     ((**(code **)(**(long **)(this + lVar2 + 0x28) + 0x20))
                (*(long **)(this + lVar2 + 0x28),param_1,param_3,0x10), extraout_x1 == -1)) {
    lVar2 = *(long *)(*(long *)this + -0x18);
    uVar4 = *(uint *)(this + lVar2 + 0x20) | (uint)(*(long *)(this + lVar2 + 0x28) == 0) | 4;
    *(uint *)(this + lVar2 + 0x20) = uVar4;
    if ((uVar4 & *(uint *)(this + lVar2 + 0x24)) != 0) {
                    /* try { // try from 001ae5f8 to 001ae603 has its CatchHandler @ 001ae604 */
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
  }
  sentry::~sentry(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001ae61c  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::basic_iostream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::basic_iostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::basic_iostream
               (basic_streambuf *param_1)

{
  undefined8 uVar1;
  long *in_x1;
  long in_x2;
  long lVar2;
  basic_streambuf *pbVar3;
  
  lVar2 = in_x1[1];
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[2];
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = _DAT_001462d0;
  lVar2 = *(long *)(*(long *)param_1 + -0x18);
  *(undefined8 *)(param_1 + lVar2 + 0x18) = _UNK_001462d8;
  *(undefined8 *)(param_1 + lVar2 + 0x10) = uVar1;
  *(long *)(param_1 + lVar2 + 0x28) = in_x2;
  *(uint *)(param_1 + lVar2 + 0x20) = (uint)(in_x2 == 0);
  *(undefined4 *)(param_1 + lVar2 + 0x24) = 0;
  *(undefined4 *)(param_1 + lVar2 + 8) = 0x1002;
  *(undefined8 *)(param_1 + lVar2 + 0x40) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x38) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x50) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x48) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x60) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x58) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x70) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x68) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x80) = 0;
  *(undefined8 *)(param_1 + lVar2 + 0x78) = 0;
  locale::locale((locale *)(param_1 + lVar2 + 0x30));
  *(undefined8 *)(param_1 + lVar2 + 0x88) = 0;
  *(undefined4 *)(param_1 + lVar2 + 0x90) = 0xffffffff;
  lVar2 = in_x1[3];
  pbVar3 = param_1 + 0x10;
  *(long *)pbVar3 = lVar2;
  *(long *)(pbVar3 + *(long *)(lVar2 + -0x18)) = in_x1[4];
  lVar2 = *in_x1;
  *(long *)param_1 = lVar2;
  *(long *)(param_1 + *(long *)(lVar2 + -0x18)) = in_x1[5];
  *(long *)pbVar3 = in_x1[6];
  return;
}


// ===== 001ae6ec  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::basic_iostream =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::basic_iostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this,basic_streambuf *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_construction_vtable_0020f8e8;
  uVar2 = _UNK_001462d8;
  uVar1 = _DAT_001462d0;
  *(basic_streambuf **)(this + 0x40) = param_1;
  *(undefined4 *)(this + 0x20) = 0x1002;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined **)(this + 0x18) = puVar3 + 0x40;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined **)this = puVar3 + 0x18;
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x38) = (uint)(param_1 == (basic_streambuf *)0x0);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  locale::locale((locale *)(this + 0x48));
  *(undefined8 *)(this + 0xa0) = 0;
  puVar3 = PTR_vtable_0020f8f0;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined **)(this + 0x10) = puVar3 + 0x40;
  *(undefined **)(this + 0x18) = puVar3 + 0x68;
  *(undefined **)this = puVar3 + 0x18;
  return;
}


// ===== 001ae784  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  return;
}


// ===== 001ae788  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 0x18));
  return;
}


// ===== 001ae790  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

/* non-virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::~basic_iostream() */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 8));
  return;
}


// ===== 001ae798  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

/* virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::~basic_iostream() */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + *(long *)(*(long *)this + -0x18) + 0x18));
  return;
}


// ===== 001ae7ac  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 0x18));
  operator_delete(this);
  return;
}


// ===== 001ae7d4  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

/* non-virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::~basic_iostream() */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  ios_base::~ios_base((ios_base *)(this + 8));
  operator_delete(this + -0x10);
  return;
}


// ===== 001ae7fc  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream =====

/* virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::~basic_iostream() */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)this + -0x18);
  ios_base::~ios_base((ios_base *)(this + lVar1 + 0x18));
  operator_delete(this + lVar1);
  return;
}


// ===== 001ae82c  std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::swap =====

/* std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char>
   >::swap(std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >&) */

void __thiscall
std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::swap
          (basic_iostream<char,std::__ndk1::char_traits<char>> *this,basic_iostream *param_1)

{
  ios_base *this_00;
  ios_base *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar3;
  this_00 = (ios_base *)(this + *(long *)(*(long *)this + -0x18));
  piVar1 = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  ios_base::swap(this_00,piVar1);
  uVar3 = *(undefined8 *)(this_00 + 0x88);
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(piVar1 + 0x88);
  *(undefined8 *)(piVar1 + 0x88) = uVar3;
  uVar2 = *(undefined4 *)(this_00 + 0x90);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(piVar1 + 0x90);
  *(undefined4 *)(piVar1 + 0x90) = uVar2;
  return;
}


// ===== 001ae898  FUN_001ae898 =====

char * FUN_001ae898(void)

{
  return "iostream";
}


// ===== 001ae8a4  FUN_001ae8a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ae8a4(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if ((param_3 != 1) && (param_3 < 0x1000)) {
    FUN_001e590c(param_1);
    return;
  }
  pcVar7 = (char *)operator_new(0x30);
  uVar6 = _UNK_00146278;
  uVar5 = _DAT_00146270;
  uVar4 = s_unspecified_iostream_category_er_0014574c._24_8_;
  uVar3 = s_unspecified_iostream_category_er_0014574c._16_8_;
  uVar2 = s_unspecified_iostream_category_er_0014574c._8_8_;
  uVar1 = s_unspecified_iostream_category_er_0014574c._0_8_;
  pcVar7[0x1f] = 'r';
  pcVar7[0x20] = 'r';
  pcVar7[0x21] = 'o';
  pcVar7[0x22] = 'r';
  *(undefined8 *)(pcVar7 + 8) = uVar2;
  *(undefined8 *)pcVar7 = uVar1;
  *(undefined8 *)(pcVar7 + 0x18) = uVar4;
  *(undefined8 *)(pcVar7 + 0x10) = uVar3;
  param_1[2] = pcVar7;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  pcVar7[0x23] = '\0';
  return;
}


// ===== 001ae918  std::__ndk1::iostream_category =====

/* std::__ndk1::iostream_category() */

undefined8 * std::__ndk1::iostream_category(void)

{
  int iVar1;
  
  if (((DAT_00214d38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00214d38), iVar1 != 0)) {
    error_category::error_category((error_category *)&DAT_00214d30);
    DAT_00214d30 = &PTR__error_category_00209c00;
    __cxa_atexit(PTR__error_category_0020f8f8,&DAT_00214d30,&PTR_LOOP_002086b0);
    __cxa_guard_release(&DAT_00214d38);
  }
  return &DAT_00214d30;
}


// ===== 001ae99c  std::__ndk1::ios_base::failure::failure =====

/* std::__ndk1::ios_base::failure::failure(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::error_code
   const&) */

void __thiscall
std::__ndk1::ios_base::failure::failure
          (failure *this,basic_string_conflict *param_1,error_code *param_2)

{
  system_error::system_error
            ((system_error *)this,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8),param_1);
  *(undefined **)this = PTR_vtable_0020f900 + 0x10;
  return;
}


// ===== 001ae9d4  std::__ndk1::ios_base::failure::failure =====

/* std::__ndk1::ios_base::failure::failure(char const*, std::__ndk1::error_code const&) */

void __thiscall
std::__ndk1::ios_base::failure::failure(failure *this,char *param_1,error_code *param_2)

{
  system_error::system_error
            ((system_error *)this,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8),param_1);
  *(undefined **)this = PTR_vtable_0020f900 + 0x10;
  return;
}


// ===== 001aea0c  std::__ndk1::ios_base::failure::~failure =====

/* std::__ndk1::ios_base::failure::~failure() */

void __thiscall std::__ndk1::ios_base::failure::~failure(failure *this)

{
  (*(code *)PTR__system_error_002101f8)();
  return;
}


// ===== 001aea10  std::__ndk1::ios_base::failure::~failure =====

/* std::__ndk1::ios_base::failure::~failure() */

void __thiscall std::__ndk1::ios_base::failure::~failure(failure *this)

{
  system_error::~system_error((system_error *)this);
  operator_delete(this);
  return;
}


// ===== 001aea34  std::__ndk1::ios_base::imbue =====

/* std::__ndk1::ios_base::imbue(std::__ndk1::locale const&) */

void std::__ndk1::ios_base::imbue(locale *param_1)

{
  locale *in_x1;
  locale *in_x8;
  long lVar1;
  
  locale::locale(in_x8,param_1 + 0x30);
  locale::operator=(param_1 + 0x30,in_x1);
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x48) + -1;
    do {
                    /* try { // try from 001aea84 to 001aea8f has its CatchHandler @ 001aeaac */
      (**(code **)(*(long *)(param_1 + 0x38) + lVar1 * 8))
                (1,param_1,*(undefined4 *)(*(long *)(param_1 + 0x40) + lVar1 * 4));
      lVar1 = lVar1 + -1;
    } while (lVar1 != -1);
  }
  return;
}


// ===== 001aeac0  std::__ndk1::ios_base::xalloc =====

/* std::__ndk1::ios_base::xalloc() */

void std::__ndk1::ios_base::xalloc(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  puVar3 = PTR___xindex__0020f908;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(int *)puVar3 = *(int *)puVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


// ===== 001aeadc  std::__ndk1::ios_base::iword =====

/* std::__ndk1::ios_base::iword(int) */

undefined8 * __thiscall std::__ndk1::ios_base::iword(ios_base *this,int param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *__s;
  void *pvVar3;
  ulong uVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  
  uVar1 = (long)param_1 + 1;
  if (*(ulong *)(this + 0x68) < uVar1) {
    uVar7 = *(ulong *)(this + 0x68) << 1;
    uVar4 = uVar1;
    if (uVar1 <= uVar7) {
      uVar4 = uVar7;
    }
    if (0xffffffffffffffe < uVar1) {
      uVar4 = 0x1fffffffffffffff;
    }
    pvVar6 = realloc(*(void **)(this + 0x58),uVar4 << 3);
    if (pvVar6 == (void *)0x0) {
      uVar5 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar5 | 1;
      if ((*(uint *)(this + 0x24) & (uVar5 | 1)) == 0) {
        DAT_00214d48 = 0;
        return &DAT_00214d48;
      }
                    /* WARNING: Subroutine does not return */
      FUN_001aedec("ios_base::clear");
    }
    uVar7 = *(ulong *)(this + 0x60);
    *(void **)(this + 0x58) = pvVar6;
    if ((long)uVar7 < (long)uVar4) {
      __s = (void *)((long)pvVar6 + uVar7 * 8);
      pvVar3 = (void *)((long)pvVar6 + uVar4 * 8);
      pvVar2 = (void *)((long)__s + 8);
      if (pvVar2 <= pvVar3) {
        pvVar2 = pvVar3;
      }
      memset(__s,0,(long)pvVar2 + ~(ulong)pvVar6 + uVar7 * -8 + 8 & 0xfffffffffffffff8);
    }
    *(ulong *)(this + 0x68) = uVar4;
  }
  else {
    pvVar6 = *(void **)(this + 0x58);
    uVar7 = *(ulong *)(this + 0x60);
  }
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return (undefined8 *)((long)pvVar6 + (long)param_1 * 8);
}


