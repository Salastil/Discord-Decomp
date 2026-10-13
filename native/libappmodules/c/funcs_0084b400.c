// ===== 0084b400  facebook::react::RNLinearGradientProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNLinearGradientProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNLinearGradientProps::getDiffPropsImplementationTarget(void)

{
  return "RNLinearGradient";
}


// ===== 0084b40c  facebook::react::RNLinearGradientProps::getDiffProps =====

/* facebook::react::RNLinearGradientProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNLinearGradientProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  Props PVar2;
  long lVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  dynamic *pdVar8;
  Props *in_x1;
  undefined4 *in_x8;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  int *piVar12;
  float *pfVar13;
  float fVar14;
  int local_c8 [2];
  undefined8 local_c0;
  dynamic *local_b8;
  dynamic *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  int local_98 [2];
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (((DAT_009b9920 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_009b9920), iVar6 != 0)) {
    memset(&DAT_009b91d8,0,0x748);
                    /* try { // try from 0084bbdc to 0084bbdf has its CatchHandler @ 0084bc10 */
    FUN_0084bca0();
    __cxa_atexit(FUN_0084bd4c,&DAT_009b91d8,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009b9920);
  }
  pPVar1 = (Props *)&DAT_009b91d8;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_78 = 0;
    local_98[0] = 5;
    piVar7 = local_98;
    local_88 = 0;
    uStack_80 = 0;
    local_70 = 0x3f800000;
    *in_x8 = 5;
    local_90 = 0.0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    if ((*(float *)(param_1 + 0x6e0) != *(float *)(pPVar1 + 0x6e0)) ||
       (*(float *)(param_1 + 0x6e4) != *(float *)(pPVar1 + 0x6e4))) {
      local_78 = 0;
      local_98[0] = 5;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0x3f800000;
      local_c8[0] = 5;
      local_90 = 0.0;
      local_c0 = 0;
      local_b8 = (dynamic *)0x0;
      local_b0 = (dynamic *)0x0;
      uStack_a8 = 0;
      local_a0 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_98);
      fVar14 = *(float *)(param_1 + 0x6e0);
                    /* try { // try from 0084b4d0 to 0084b523 has its CatchHandler @ 0084bc4c */
      piVar7 = (int *)folly::dynamic::operator[](local_c8,&DAT_0036adfd,&DAT_0036adfe);
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
      fVar14 = *(float *)(param_1 + 0x6e4);
      piVar7 = (int *)folly::dynamic::operator[](local_c8,&DAT_0036ecbd,&DAT_0036ecbe);
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
                    /* try { // try from 0084b54c to 0084b55f has its CatchHandler @ 0084bc2c */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_c8);
      folly::dynamic::folly::dynamic::destroy(local_c8);
    }
    if ((*(float *)(param_1 + 0x6e8) != *(float *)(pPVar1 + 0x6e8)) ||
       (*(float *)(param_1 + 0x6ec) != *(float *)(pPVar1 + 0x6ec))) {
      local_78 = 0;
      local_98[0] = 5;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0x3f800000;
      local_c8[0] = 5;
      local_90 = 0.0;
      local_c0 = 0;
      local_b8 = (dynamic *)0x0;
      local_b0 = (dynamic *)0x0;
      uStack_a8 = 0;
      local_a0 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_98);
      fVar14 = *(float *)(param_1 + 0x6e8);
                    /* try { // try from 0084b5c8 to 0084b61b has its CatchHandler @ 0084bc48 */
      piVar7 = (int *)folly::dynamic::operator[](local_c8,&DAT_0036adfd,&DAT_0036adfe);
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
      fVar14 = *(float *)(param_1 + 0x6ec);
      piVar7 = (int *)folly::dynamic::operator[](local_c8,&DAT_0036ecbd,&DAT_0036ecbe);
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
                    /* try { // try from 0084b644 to 0084b657 has its CatchHandler @ 0084bc28 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_c8);
      folly::dynamic::folly::dynamic::destroy(local_c8);
    }
    piVar10 = *(int **)(param_1 + 0x6f8);
    piVar12 = *(int **)(param_1 + 0x6f0);
    piVar7 = *(int **)(pPVar1 + 0x6f0);
    piVar4 = piVar12;
    if ((long)piVar10 - (long)piVar12 == *(long *)(pPVar1 + 0x6f8) - (long)piVar7) {
      for (; piVar4 != piVar10; piVar4 = piVar4 + 1) {
        if (*piVar4 != *piVar7) goto LAB_0084b6b8;
        piVar7 = piVar7 + 1;
      }
    }
    else {
LAB_0084b6b8:
      local_b8 = (dynamic *)0x0;
      local_b0 = (dynamic *)0x0;
      local_c8[0] = 1;
      local_c0 = 0;
      pdVar8 = local_b8;
      for (; local_b8 = pdVar8, piVar12 != piVar10; piVar12 = piVar12 + 1) {
        local_90 = (double)(long)*piVar12;
        local_98[0] = 4;
        if (local_c8[0] != 1) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0084bb60 to 0084bb6f has its CatchHandler @ 0084bc68 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
          }
          goto LAB_0084bc9c;
        }
        if (pdVar8 < local_b0) {
          folly::dynamic::dynamic(pdVar8,(dynamic *)local_98);
          local_b8 = pdVar8 + 0x30;
        }
        else {
                    /* try { // try from 0084b728 to 0084b733 has its CatchHandler @ 0084bc5c */
          local_b8 = (dynamic *)FUN_00801fe4(&local_c0,local_98);
        }
        folly::dynamic::folly::dynamic::destroy(local_98);
        pdVar8 = local_b8;
      }
                    /* try { // try from 0084b738 to 0084b74b has its CatchHandler @ 0084bc38 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_c8);
      folly::dynamic::folly::dynamic::destroy(local_c8);
    }
    pfVar11 = *(float **)(param_1 + 0x710);
    pfVar13 = *(float **)(param_1 + 0x708);
    pfVar9 = *(float **)(pPVar1 + 0x708);
    pfVar5 = pfVar13;
    if ((long)pfVar11 - (long)pfVar13 == *(long *)(pPVar1 + 0x710) - (long)pfVar9) {
      for (; pfVar5 != pfVar11; pfVar5 = pfVar5 + 1) {
        if (*pfVar5 != *pfVar9) goto LAB_0084b7ac;
        pfVar9 = pfVar9 + 1;
      }
    }
    else {
LAB_0084b7ac:
      local_b8 = (dynamic *)0x0;
      local_b0 = (dynamic *)0x0;
      local_c8[0] = 1;
      local_c0 = 0;
      pdVar8 = local_b8;
      for (; local_b8 = pdVar8, pfVar13 != pfVar11; pfVar13 = pfVar13 + 1) {
        local_98[0] = 3;
        local_90 = (double)*pfVar13;
        if (local_c8[0] != 1) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0084bb80 to 0084bb8f has its CatchHandler @ 0084bc64 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
          }
          goto LAB_0084bc9c;
        }
        if (pdVar8 < local_b0) {
          folly::dynamic::dynamic(pdVar8,(dynamic *)local_98);
          local_b8 = pdVar8 + 0x30;
        }
        else {
                    /* try { // try from 0084b820 to 0084b82b has its CatchHandler @ 0084bc58 */
          local_b8 = (dynamic *)FUN_00801fe4(&local_c0,local_98);
        }
        folly::dynamic::folly::dynamic::destroy(local_98);
        pdVar8 = local_b8;
      }
                    /* try { // try from 0084b830 to 0084b843 has its CatchHandler @ 0084bc34 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_c8);
      folly::dynamic::folly::dynamic::destroy(local_c8);
    }
    PVar2 = param_1[0x720];
    if (PVar2 != pPVar1[0x720]) {
                    /* try { // try from 0084b864 to 0084b877 has its CatchHandler @ 0084bc3c */
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 2;
      }
      *(Props *)(piVar7 + 2) = PVar2;
    }
    if ((*(float *)(param_1 + 0x724) != *(float *)(pPVar1 + 0x724)) ||
       (*(float *)(param_1 + 0x728) != *(float *)(pPVar1 + 0x728))) {
      local_78 = 0;
      local_98[0] = 5;
      local_88 = 0;
      uStack_80 = 0;
      local_70 = 0x3f800000;
      local_c8[0] = 5;
      local_90 = 0.0;
      local_c0 = 0;
      local_b8 = (dynamic *)0x0;
      local_b0 = (dynamic *)0x0;
      uStack_a8 = 0;
      local_a0 = 0x3f800000;
      folly::dynamic::folly::dynamic::destroy(local_98);
      fVar14 = *(float *)(param_1 + 0x724);
                    /* try { // try from 0084b8f4 to 0084b947 has its CatchHandler @ 0084bc44 */
      piVar7 = (int *)folly::dynamic::operator[](local_c8,&DAT_0036adfd,&DAT_0036adfe);
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
      fVar14 = *(float *)(param_1 + 0x728);
      piVar7 = (int *)folly::dynamic::operator[](local_c8,&DAT_0036ecbd,&DAT_0036ecbe);
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
                    /* try { // try from 0084b970 to 0084b983 has its CatchHandler @ 0084bc24 */
      pdVar8 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar8,(dynamic *)local_c8);
      folly::dynamic::folly::dynamic::destroy(local_c8);
    }
    fVar14 = *(float *)(param_1 + 0x72c);
    if ((fVar14 != *(float *)(pPVar1 + 0x72c)) &&
       ((!NAN(fVar14) || (!NAN(*(float *)(pPVar1 + 0x72c)))))) {
                    /* try { // try from 0084b9b4 to 0084b9c7 has its CatchHandler @ 0084bc3c */
      piVar7 = (int *)folly::dynamic::operator[]();
      if (*piVar7 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar7);
        *piVar7 = 3;
      }
      *(double *)(piVar7 + 2) = (double)fVar14;
    }
    pfVar11 = *(float **)(param_1 + 0x738);
    pfVar13 = *(float **)(param_1 + 0x730);
    pfVar9 = *(float **)(pPVar1 + 0x730);
    pfVar5 = pfVar13;
    if ((long)pfVar11 - (long)pfVar13 == *(long *)(pPVar1 + 0x738) - (long)pfVar9) {
      for (; pfVar5 != pfVar11; pfVar5 = pfVar5 + 1) {
        if (*pfVar5 != *pfVar9) goto LAB_0084ba40;
        pfVar9 = pfVar9 + 1;
      }
      goto LAB_0084bb1c;
    }
LAB_0084ba40:
    local_b8 = (dynamic *)0x0;
    local_b0 = (dynamic *)0x0;
    local_c8[0] = 1;
    local_c0 = 0;
    pdVar8 = local_b8;
    for (; local_b8 = pdVar8, pfVar13 != pfVar11; pfVar13 = pfVar13 + 1) {
      local_98[0] = 3;
      local_90 = (double)*pfVar13;
      if (local_c8[0] != 1) {
        if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0084bba0 to 0084bbaf has its CatchHandler @ 0084bc60 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_0084bc9c;
      }
      if (pdVar8 < local_b0) {
        folly::dynamic::dynamic(pdVar8,(dynamic *)local_98);
        local_b8 = pdVar8 + 0x30;
      }
      else {
                    /* try { // try from 0084bab4 to 0084babf has its CatchHandler @ 0084bc54 */
        local_b8 = (dynamic *)FUN_00801fe4(&local_c0,local_98);
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
      pdVar8 = local_b8;
    }
                    /* try { // try from 0084bac4 to 0084bad7 has its CatchHandler @ 0084bc30 */
    pdVar8 = (dynamic *)folly::dynamic::operator[]();
    folly::dynamic::operator=(pdVar8,(dynamic *)local_c8);
    piVar7 = local_c8;
  }
  folly::dynamic::folly::dynamic::destroy(piVar7);
LAB_0084bb1c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_0084bc9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084bca0  FUN_0084bca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084bca0(void)

{
  FUN_00788b10(&DAT_009b91d8,PTR_PTR_0099e498 + 0x10);
  DAT_009b97b4 = 0;
  DAT_009b97b8 = 0;
  DAT_009b9818 = 0;
  DAT_009b9820 = 0;
  DAT_009b9880 = 0;
  DAT_009b9890 = 0;
  DAT_009b9894 = 0;
  DAT_009b9898 = 0;
  DAT_009b989c = 0;
  DAT_009b98a0 = 0;
  DAT_009b98a4 = 0;
  DAT_009b98a8 = 0;
  DAT_009b98ac = 0;
  DAT_009b98b0 = 0;
  DAT_009b98b4 = 0;
  DAT_009b9888 = 0;
  DAT_009b988c = 0;
  uRam00000000009b98c0 = 0;
  _DAT_009b98b8 = 0;
  DAT_009b91d8 = PTR_vtable_0099e490 + 0x20;
  uRam00000000009b98d0 = 0;
  _DAT_009b98c8 = 0;
  uRam00000000009b98e0 = 0;
  _DAT_009b98d8 = 0;
  uRam00000000009b98f0 = 0;
  _DAT_009b98e8 = 0;
  DAT_009b98f8 = 0;
  DAT_009b991c = 0;
  uRam00000000009b9904 = 0;
  _DAT_009b98fc = 0;
  uRam00000000009b9914 = 0;
  _DAT_009b990c = 0;
  return;
}


// ===== 0084bd4c  FUN_0084bd4c =====

void FUN_0084bd4c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x730);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x738) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x708);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x710) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x6f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x6f8) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1,PTR_PTR_0099e498 + 8);
  return;
}


// ===== 0084bda8  FUN_0084bda8 =====

void FUN_0084bda8(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x730);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x738) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)((long)param_1 + 0x708);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x710) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)((long)param_1 + 0x6f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)((long)param_1 + 0x6f8) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1,PTR_PTR_0099e498 + 8);
  operator_delete(param_1);
  return;
}


// ===== 0084be0c  FUN_0084be0c =====

void FUN_0084be0c(int *param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  void *__s2;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined8 *unaff_x26;
  byte *pbVar24;
  undefined2 uVar25;
  undefined8 uVar26;
  double dVar27;
  byte local_110;
  undefined7 uStack_10f;
  size_t sStack_108;
  char *local_100;
  int local_f8 [4];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *puStack_b8;
  long *local_b0;
  ulong local_a8;
  float local_a0;
  long *local_98;
  long **pplStack_90;
  undefined1 local_88;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  if (param_1[0xc] != 1) {
    if (param_1[0xc] != 0) goto LAB_0084cab8;
    iVar8 = *param_1;
    if (iVar8 == 5) {
      if ((*(long *)(param_1 + 6) == 0) || (*(int *)(*(long *)(param_1 + 6) + 0x40) - 3U < 2)) {
LAB_0084bfb8:
        local_a0 = 1.0;
        local_a8 = 0;
        local_b0 = (long *)0x0;
        puStack_b8 = (undefined8 *)0x0;
        local_c0 = (undefined8 *)0x0;
        plVar22 = *(long **)(param_1 + 6);
        if (plVar22 != (long *)0x0) {
          do {
            iVar8 = (int)plVar22[8];
            if (iVar8 < 4) {
              if (iVar8 == 2) {
                dVar27 = (double)NEON_ucvtf((ulong)*(byte *)(plVar22 + 9));
              }
              else {
                if (iVar8 != 3) {
LAB_0084ca98:
                  if (*(long *)(lVar6 + 0x28) == local_80) {
                    /* WARNING: Subroutine does not return */
                    FUN_00789f8c("int/double/bool/string");
                  }
                  goto LAB_0084cc9c;
                }
                dVar27 = (double)plVar22[9];
              }
            }
            else if (iVar8 == 6) {
              dVar27 = (double)FUN_008111e4(plVar22 + 9);
            }
            else {
              if (iVar8 != 4) goto LAB_0084ca98;
                    /* try { // try from 0084c020 to 0084c03f has its CatchHandler @ 0084cc74 */
              dVar27 = (double)FUN_008110a0(plVar22 + 9);
            }
            if ((int)plVar22[2] != 6) {
              if (*(long *)(lVar6 + 0x28) == local_80) {
                    /* try { // try from 0084ca88 to 0084cab7 has its CatchHandler @ 0084cc70 */
                    /* WARNING: Subroutine does not return */
                FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
              }
              goto LAB_0084cc9c;
            }
            pbVar24 = (byte *)(plVar22 + 3);
            uVar13 = plVar22[4];
            lVar9 = plVar22[5];
            if ((*pbVar24 & 1) == 0) {
              lVar9 = (long)plVar22 + 0x19;
              uVar13 = (ulong)(*pbVar24 >> 1);
            }
                    /* try { // try from 0084c06c to 0084c073 has its CatchHandler @ 0084cc6c */
            puVar10 = (undefined8 *)FUN_00756d84(&local_98,lVar9,uVar13);
            puVar14 = puStack_b8;
            if (puStack_b8 != (undefined8 *)0x0) {
              uVar26 = NEON_cnt(puStack_b8,1);
              uVar25 = NEON_uaddlv(uVar26,1);
              uVar13 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
              if (uVar13 < 2) {
                unaff_x26 = (undefined8 *)((ulong)((long)puStack_b8 + -1) & (ulong)puVar10);
              }
              else {
                unaff_x26 = puVar10;
                if (puStack_b8 <= puVar10) {
                  uVar16 = 0;
                  if (puStack_b8 != (undefined8 *)0x0) {
                    uVar16 = (ulong)puVar10 / (ulong)puStack_b8;
                  }
                  unaff_x26 = (undefined8 *)((long)puVar10 - uVar16 * (long)puStack_b8);
                }
              }
              if (((undefined8 *)local_c0[(long)unaff_x26] != (undefined8 *)0x0) &&
                 (plVar20 = *(long **)local_c0[(long)unaff_x26], plVar20 != (long *)0x0)) {
                puVar23 = (undefined1 *)((long)puStack_b8 + -1);
                __s2 = (void *)((long)plVar22 + 0x19);
                sVar1 = (ulong)(*(byte *)(plVar22 + 3) >> 1);
                if ((*(byte *)(plVar22 + 3) & 1) != 0) {
                  __s2 = (void *)plVar22[5];
                  sVar1 = plVar22[4];
                }
                do {
                  puVar12 = (undefined8 *)plVar20[1];
                  if (puVar12 == puVar10) {
                    bVar4 = *(byte *)(plVar20 + 2);
                    sVar2 = (ulong)(bVar4 >> 1);
                    if ((bVar4 & 1) != 0) {
                      sVar2 = plVar20[3];
                    }
                    if (sVar2 == sVar1) {
                      if ((bVar4 & 1) == 0) {
                        if (bVar4 < 2) goto LAB_0084bfdc;
                        uVar16 = 0;
                        while (*(char *)((long)plVar20 + uVar16 + 0x11) ==
                               *(char *)((long)__s2 + uVar16)) {
                          uVar16 = uVar16 + 1;
                          if (bVar4 >> 1 == uVar16) goto LAB_0084bfdc;
                        }
                      }
                      else {
                        iVar8 = memcmp((void *)plVar20[4],__s2,plVar20[3]);
                        if (iVar8 == 0) goto LAB_0084bfdc;
                      }
                    }
                  }
                  else {
                    if (uVar13 < 2) {
                      puVar12 = (undefined8 *)((ulong)puVar12 & (ulong)puVar23);
                    }
                    else if (puVar14 <= puVar12) {
                      uVar16 = 0;
                      if (puVar14 != (undefined8 *)0x0) {
                        uVar16 = (ulong)puVar12 / (ulong)puVar14;
                      }
                      puVar12 = (undefined8 *)((long)puVar12 - uVar16 * (long)puVar14);
                    }
                    if (puVar12 != unaff_x26) break;
                  }
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
            }
                    /* try { // try from 0084c198 to 0084c19f has its CatchHandler @ 0084cc74 */
            plVar20 = (long *)operator_new(0x30);
            *plVar20 = 0;
            plVar20[1] = (long)puVar10;
            local_88 = 0;
            local_98 = plVar20;
            pplStack_90 = &local_b0;
            if ((*pbVar24 & 1) == 0) {
              lVar21 = plVar22[4];
              lVar9 = *(long *)pbVar24;
              plVar20[4] = plVar22[5];
              plVar20[3] = lVar21;
              plVar20[2] = lVar9;
            }
            else {
                    /* try { // try from 0084c1d0 to 0084c1d7 has its CatchHandler @ 0084cc58 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(plVar20 + 2),(char *)plVar22[5],plVar22[4]);
            }
            *(undefined4 *)(plVar20 + 5) = 0;
            local_88 = 1;
            if ((puVar14 == (undefined8 *)0x0) ||
               (local_a0 * (float)puVar14 < (float)(local_a8 + 1))) {
              if (puVar14 < (undefined8 *)0x3) {
                uVar13 = 1;
              }
              else {
                uVar13 = (ulong)(((ulong)puVar14 & (ulong)((long)puVar14 + -1)) != 0);
              }
              puVar14 = (undefined8 *)(uVar13 | (long)puVar14 << 1);
              puVar12 = (undefined8 *)(long)((float)(local_a8 + 1) / local_a0);
              if (puVar14 <= puVar12) {
                puVar14 = puVar12;
              }
              if ((undefined1 *)((long)puVar14 + -1) == (undefined1 *)0x0) {
                puVar14 = (undefined8 *)&DAT_00000002;
              }
              else if (((ulong)puVar14 & (ulong)((long)puVar14 + -1)) != 0) {
                    /* try { // try from 0084c250 to 0084c2cf has its CatchHandler @ 0084cc5c */
                puVar14 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar14);
              }
              puVar12 = puStack_b8;
              if (puStack_b8 < puVar14) {
LAB_0084c268:
                FUN_0084cd60(&local_c0,puVar14);
              }
              else if (puVar14 < puStack_b8) {
                puVar11 = (undefined8 *)(long)((float)local_a8 / local_a0);
                if (puStack_b8 < (undefined8 *)0x3) {
LAB_0084c2cc:
                  puVar11 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar11);
                }
                else {
                  uVar26 = NEON_cnt(puStack_b8,1);
                  uVar25 = NEON_uaddlv(uVar26,1);
                  if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_0084c2cc;
                  if ((undefined8 *)0x1 < puVar11) {
                    puVar11 = (undefined8 *)
                              (1L << (-LZCOUNT((undefined1 *)((long)puVar11 + -1)) & 0x3fU));
                  }
                }
                if (puVar14 <= puVar11) {
                  puVar14 = puVar11;
                }
                if (puVar14 < puVar12) goto LAB_0084c268;
              }
              puVar14 = puStack_b8;
              if (((ulong)puStack_b8 & (ulong)((long)puStack_b8 + -1)) == 0) {
                unaff_x26 = (undefined8 *)((ulong)((long)puStack_b8 + -1) & (ulong)puVar10);
              }
              else {
                unaff_x26 = puVar10;
                if (puStack_b8 <= puVar10) {
                  uVar13 = 0;
                  if (puStack_b8 != (undefined8 *)0x0) {
                    uVar13 = (ulong)puVar10 / (ulong)puStack_b8;
                  }
                  unaff_x26 = (undefined8 *)((long)puVar10 - uVar13 * (long)puStack_b8);
                }
              }
            }
            plVar15 = (long *)local_c0[(long)unaff_x26];
            if (plVar15 == (long *)0x0) {
              *plVar20 = (long)local_b0;
              local_c0[(long)unaff_x26] = &local_b0;
              local_b0 = plVar20;
              if (*plVar20 != 0) {
                puVar10 = *(undefined8 **)(*plVar20 + 8);
                if (((ulong)puVar14 & (ulong)((long)puVar14 + -1)) == 0) {
                  puVar10 = (undefined8 *)((ulong)puVar10 & (ulong)((long)puVar14 + -1));
                }
                else if (puVar14 <= puVar10) {
                  uVar13 = 0;
                  if (puVar14 != (undefined8 *)0x0) {
                    uVar13 = (ulong)puVar10 / (ulong)puVar14;
                  }
                  puVar10 = (undefined8 *)((long)puVar10 - uVar13 * (long)puVar14);
                }
                plVar15 = local_c0 + (long)puVar10;
                goto LAB_0084c370;
              }
            }
            else {
              *plVar20 = *plVar15;
LAB_0084c370:
              *plVar15 = (long)plVar20;
            }
            local_a8 = local_a8 + 1;
LAB_0084bfdc:
            *(float *)(plVar20 + 5) = (float)dVar27;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        goto LAB_0084c990;
      }
    }
    else {
LAB_0084c390:
      if ((iVar8 == 1) &&
         ((*(int **)(param_1 + 2) == *(int **)(param_1 + 4) || (**(int **)(param_1 + 2) - 3U < 2))))
      {
LAB_0084c3dc:
        FUN_00810ab4(&local_c0,param_1,0);
LAB_0084c450:
        if ((ulong)((long)puStack_b8 - (long)local_c0) < 5) {
          *param_2 = 0;
                    /* try { // try from 0084c478 to 0084c48f has its CatchHandler @ 0084cb08 */
          google::LogMessage::LogMessage
                    ((LogMessage *)&local_98,
                     "/root/.gradle/caches/9.3.1/transforms/c350feea77f5f0e7dea9ff1a822a73d9/transformed/react-android-0.86.0-discord-29-release/prefab/modules/reactnative/include/react/renderer/core/graphicsConversions.h"
                     ,0x6c,2);
                    /* try { // try from 0084c490 to 0084c4b7 has its CatchHandler @ 0084cb98 */
          uVar26 = google::LogMessage::google::LogMessage::stream(&local_98);
          this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                 FUN_00807bd4(uVar26,"Unsupported Point vector size: ",0x1f);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    (this,(long)puStack_b8 - (long)local_c0 >> 2);
          google::LogMessage::~LogMessage((LogMessage *)&local_98);
          if (local_c0 == (undefined8 *)0x0) goto LAB_0084ca3c;
        }
        else {
          *param_2 = *local_c0;
        }
        puStack_b8 = local_c0;
        puVar14 = local_c0;
LAB_0084ca38:
        operator_delete(puVar14);
        goto LAB_0084ca3c;
      }
    }
LAB_0084c3f0:
    google::LogMessage::LogMessage
              ((LogMessage *)&local_c0,
               "/root/.gradle/caches/9.3.1/transforms/c350feea77f5f0e7dea9ff1a822a73d9/transformed/react-android-0.86.0-discord-29-release/prefab/modules/reactnative/include/react/renderer/core/graphicsConversions.h"
               ,0x6f,2);
                    /* try { // try from 0084c408 to 0084c41f has its CatchHandler @ 0084cbc4 */
    uVar26 = google::LogMessage::google::LogMessage::stream(&local_c0);
    FUN_00807bd4(uVar26,"Unsupported Point type",0x16);
    google::LogMessage::~LogMessage((LogMessage *)&local_c0);
LAB_0084ca3c:
    if (*(long *)(lVar6 + 0x28) == local_80) {
      return;
    }
    goto LAB_0084cc9c;
  }
  piVar19 = param_1 + 2;
  if (*piVar19 == 7) {
    plVar22 = *(long **)param_1;
    local_98 = (long *)(**(code **)(*plVar22 + 0x88))(plVar22,*(undefined8 *)(param_1 + 4));
                    /* try { // try from 0084bec4 to 0084bed3 has its CatchHandler @ 0084cb74 */
    (**(code **)(*plVar22 + 0x218))(&local_110,plVar22,&local_98);
                    /* try { // try from 0084bedc to 0084bee7 has its CatchHandler @ 0084cb50 */
    lVar9 = (**(code **)(*plVar22 + 0x240))(plVar22,&local_110);
    if (lVar9 == 0) {
      bVar7 = true;
      puVar14 = (undefined8 *)CONCAT71(uStack_10f,local_110);
    }
    else {
                    /* try { // try from 0084bef4 to 0084bf07 has its CatchHandler @ 0084cb4c */
      (**(code **)(*plVar22 + 0x260))(&local_c0,plVar22,&local_110,0);
      local_e0 = puStack_b8;
      puStack_b8 = (undefined8 *)0x0;
      facebook::jsi::Value::~Value((Value *)&local_c0);
                    /* try { // try from 0084bf24 to 0084bf37 has its CatchHandler @ 0084cb10 */
      (**(code **)(*plVar22 + 0x188))(&local_c0,plVar22,&local_98,&local_e0);
      bVar7 = (int)local_c0 == 3;
      facebook::jsi::Value::~Value((Value *)&local_c0);
      if (local_e0 != (undefined8 *)0x0) {
        (**(code **)*local_e0)();
      }
      puVar14 = (undefined8 *)CONCAT71(uStack_10f,local_110);
    }
    if (puVar14 != (undefined8 *)0x0) {
      (**(code **)*puVar14)();
    }
    if (local_98 != (long *)0x0) {
      (**(code **)*local_98)();
    }
    iVar8 = param_1[0xc];
    if (!bVar7) {
      if (iVar8 == 1) goto LAB_0084c3b8;
      if (iVar8 == 0) {
        iVar8 = *param_1;
        goto LAB_0084c390;
      }
      goto LAB_0084cab8;
    }
    if (iVar8 == 1) {
      plVar22 = *(long **)param_1;
      local_c8 = (undefined8 *)(**(code **)(*plVar22 + 0x88))(plVar22,*(undefined8 *)(param_1 + 4));
                    /* try { // try from 0084c4f4 to 0084c503 has its CatchHandler @ 0084cb00 */
      (**(code **)(*plVar22 + 0x218))(&local_d0,plVar22,&local_c8);
                    /* try { // try from 0084c50c to 0084c517 has its CatchHandler @ 0084caf8 */
      lVar9 = (**(code **)(*plVar22 + 0x240))(plVar22,&local_d0);
      local_a0 = 1.0;
      puStack_b8 = (undefined8 *)0x0;
      local_c0 = (undefined8 *)0x0;
      local_a8 = 0;
      local_b0 = (long *)0x0;
      if (lVar9 != 0) {
        lVar21 = 0;
        do {
                    /* try { // try from 0084c56c to 0084c57f has its CatchHandler @ 0084cbd4 */
          (**(code **)(*plVar22 + 0x260))(&local_e0,plVar22,&local_d0,lVar21);
                    /* try { // try from 0084c58c to 0084c593 has its CatchHandler @ 0084cbdc */
          local_e8 = (undefined8 *)(**(code **)(*plVar22 + 0x80))(plVar22,local_d8);
                    /* try { // try from 0084c5a0 to 0084c5b3 has its CatchHandler @ 0084cbe4 */
          (**(code **)(*plVar22 + 0x188))(local_f8,plVar22,&local_c8,&local_e8);
          if (local_f8[0] != 0) {
                    /* try { // try from 0084c5c4 to 0084c5d3 has its CatchHandler @ 0084cbbc */
            (**(code **)(*plVar22 + 0x120))(&local_110,plVar22,&local_e8);
                    /* try { // try from 0084c5d4 to 0084c5db has its CatchHandler @ 0084cbec */
            dVar27 = (double)facebook::jsi::Value::asNumber();
            sVar1 = (ulong)(local_110 >> 1);
            pcVar3 = (char *)((ulong)&local_110 | 1);
            if ((local_110 & 1) != 0) {
              sVar1 = sStack_108;
              pcVar3 = local_100;
            }
                    /* try { // try from 0084c5fc to 0084c603 has its CatchHandler @ 0084cbb8 */
            puVar10 = (undefined8 *)FUN_00756d84(&local_98,pcVar3,sVar1);
            puVar14 = puStack_b8;
            bVar4 = local_110;
            if (puStack_b8 != (undefined8 *)0x0) {
              uVar26 = NEON_cnt(puStack_b8,1);
              uVar25 = NEON_uaddlv(uVar26,1);
              uVar13 = CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25) & 0xffffffff;
              if (uVar13 < 2) {
                unaff_x26 = (undefined8 *)((ulong)((long)puStack_b8 + -1) & (ulong)puVar10);
              }
              else {
                unaff_x26 = puVar10;
                if (puStack_b8 <= puVar10) {
                  uVar16 = 0;
                  if (puStack_b8 != (undefined8 *)0x0) {
                    uVar16 = (ulong)puVar10 / (ulong)puStack_b8;
                  }
                  unaff_x26 = (undefined8 *)((long)puVar10 - uVar16 * (long)puStack_b8);
                }
              }
              if (((long *)local_c0[(long)unaff_x26] != (long *)0x0) &&
                 (plVar20 = *(long **)local_c0[(long)unaff_x26], plVar20 != (long *)0x0)) {
                puVar23 = (undefined1 *)((long)puStack_b8 + -1);
                sVar1 = (ulong)(local_110 >> 1);
                pcVar3 = (char *)((ulong)&local_110 | 1);
                if ((local_110 & 1) != 0) {
                  sVar1 = sStack_108;
                  pcVar3 = local_100;
                }
                do {
                  puVar12 = (undefined8 *)plVar20[1];
                  if (puVar12 == puVar10) {
                    bVar5 = *(byte *)(plVar20 + 2);
                    uVar16 = (ulong)(bVar5 >> 1);
                    sVar2 = uVar16;
                    if ((bVar5 & 1) != 0) {
                      sVar2 = plVar20[3];
                    }
                    if (sVar2 == sVar1) {
                      if ((bVar5 & 1) == 0) {
                        if (bVar5 < 2) goto joined_r0x0084c72c;
                        pcVar17 = (char *)((long)plVar20 + 0x11);
                        pcVar18 = pcVar3;
                        while (*pcVar17 == *pcVar18) {
                          uVar16 = uVar16 - 1;
                          pcVar17 = pcVar17 + 1;
                          pcVar18 = pcVar18 + 1;
                          if (uVar16 == 0) goto joined_r0x0084c72c;
                        }
                      }
                      else {
                        iVar8 = memcmp((void *)plVar20[4],pcVar3,plVar20[3]);
                        if (iVar8 == 0) goto joined_r0x0084c72c;
                      }
                    }
                  }
                  else {
                    if (uVar13 < 2) {
                      puVar12 = (undefined8 *)((ulong)puVar12 & (ulong)puVar23);
                    }
                    else if (puVar14 <= puVar12) {
                      uVar16 = 0;
                      if (puVar14 != (undefined8 *)0x0) {
                        uVar16 = (ulong)puVar12 / (ulong)puVar14;
                      }
                      puVar12 = (undefined8 *)((long)puVar12 - uVar16 * (long)puVar14);
                    }
                    if (puVar12 != unaff_x26) break;
                  }
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
            }
                    /* try { // try from 0084c738 to 0084c73f has its CatchHandler @ 0084cbec */
            plVar20 = (long *)operator_new(0x30);
            local_88 = 0;
            *plVar20 = 0;
            plVar20[1] = (long)puVar10;
            local_98 = plVar20;
            pplStack_90 = &local_b0;
            if ((local_110 & 1) == 0) {
              plVar20[3] = sStack_108;
              plVar20[2] = CONCAT71(uStack_10f,local_110);
              plVar20[4] = (long)local_100;
            }
            else {
                    /* try { // try from 0084c774 to 0084c77b has its CatchHandler @ 0084cb88 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __init_copy_ctor_external
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)(plVar20 + 2),local_100,sStack_108);
            }
            *(float *)(plVar20 + 5) = (float)dVar27;
            local_88 = 1;
            if ((puVar14 == (undefined8 *)0x0) ||
               (local_a0 * (float)puVar14 < (float)(local_a8 + 1))) {
              if (puVar14 < (undefined8 *)0x3) {
                uVar13 = 1;
              }
              else {
                uVar13 = (ulong)(((ulong)puVar14 & (ulong)((long)puVar14 + -1)) != 0);
              }
              puVar14 = (undefined8 *)(uVar13 | (long)puVar14 << 1);
              puVar12 = (undefined8 *)(long)((float)(local_a8 + 1) / local_a0);
              if (puVar14 <= puVar12) {
                puVar14 = puVar12;
              }
              if ((undefined1 *)((long)puVar14 + -1) == (undefined1 *)0x0) {
                puVar14 = (undefined8 *)&DAT_00000002;
              }
              else if (((ulong)puVar14 & (ulong)((long)puVar14 + -1)) != 0) {
                    /* try { // try from 0084c7fc to 0084c87f has its CatchHandler @ 0084cb84 */
                puVar14 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar14);
              }
              puVar12 = puStack_b8;
              if (puStack_b8 < puVar14) {
LAB_0084c814:
                FUN_0084cd60(&local_c0,puVar14);
              }
              else if (puVar14 < puStack_b8) {
                puVar11 = (undefined8 *)(long)((float)local_a8 / local_a0);
                if (puStack_b8 < (undefined8 *)0x3) {
LAB_0084c87c:
                  puVar11 = (undefined8 *)std::__ndk1::__next_prime((ulong)puVar11);
                }
                else {
                  uVar26 = NEON_cnt(puStack_b8,1);
                  uVar25 = NEON_uaddlv(uVar26,1);
                  if (1 < (uint)CONCAT62((int6)((ulong)uVar26 >> 0x10),uVar25)) goto LAB_0084c87c;
                  if ((undefined8 *)0x1 < puVar11) {
                    puVar11 = (undefined8 *)
                              (1L << (-LZCOUNT((undefined1 *)((long)puVar11 + -1)) & 0x3fU));
                  }
                }
                if (puVar14 <= puVar11) {
                  puVar14 = puVar11;
                }
                if (puVar14 < puVar12) goto LAB_0084c814;
              }
              puVar14 = puStack_b8;
              if (((ulong)puStack_b8 & (ulong)((long)puStack_b8 + -1)) == 0) {
                unaff_x26 = (undefined8 *)((ulong)((long)puStack_b8 + -1) & (ulong)puVar10);
              }
              else {
                unaff_x26 = puVar10;
                if (puStack_b8 <= puVar10) {
                  uVar13 = 0;
                  if (puStack_b8 != (undefined8 *)0x0) {
                    uVar13 = (ulong)puVar10 / (ulong)puStack_b8;
                  }
                  unaff_x26 = (undefined8 *)((long)puVar10 - uVar13 * (long)puStack_b8);
                }
              }
            }
            plVar15 = (long *)local_c0[(long)unaff_x26];
            if (plVar15 == (long *)0x0) {
              *plVar20 = (long)local_b0;
              local_c0[(long)unaff_x26] = &local_b0;
              local_b0 = plVar20;
              if (*plVar20 != 0) {
                puVar10 = *(undefined8 **)(*plVar20 + 8);
                if (((ulong)puVar14 & (ulong)((long)puVar14 + -1)) == 0) {
                  puVar10 = (undefined8 *)((ulong)puVar10 & (ulong)((long)puVar14 + -1));
                }
                else if (puVar14 <= puVar10) {
                  uVar13 = 0;
                  if (puVar14 != (undefined8 *)0x0) {
                    uVar13 = (ulong)puVar10 / (ulong)puVar14;
                  }
                  puVar10 = (undefined8 *)((long)puVar10 - uVar13 * (long)puVar14);
                }
                plVar15 = local_c0 + (long)puVar10;
                goto LAB_0084c924;
              }
            }
            else {
              *plVar20 = *plVar15;
LAB_0084c924:
              *plVar15 = (long)plVar20;
            }
            local_a8 = local_a8 + 1;
            bVar4 = local_110;
joined_r0x0084c72c:
            if ((bVar4 & 1) != 0) {
              operator_delete(local_100);
            }
          }
          facebook::jsi::Value::~Value((Value *)local_f8);
          if (local_e8 != (undefined8 *)0x0) {
            (**(code **)*local_e8)();
          }
          facebook::jsi::Value::~Value((Value *)&local_e0);
          lVar21 = lVar21 + 1;
        } while (lVar21 != lVar9);
      }
      if (local_d0 != (undefined8 *)0x0) {
        (**(code **)*local_d0)();
      }
      if (local_c8 != (undefined8 *)0x0) {
        (**(code **)*local_c8)();
      }
LAB_0084c990:
      if (local_b0 != (long *)0x0) {
        plVar22 = local_b0;
        do {
          bVar4 = *(byte *)(plVar22 + 2);
          uVar13 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar13 = plVar22[3];
          }
          if (uVar13 == 1) {
            pcVar3 = (char *)((long)plVar22 + 0x11);
            if ((bVar4 & 1) != 0) {
              pcVar3 = (char *)plVar22[4];
            }
            puVar14 = param_2;
            if ((*pcVar3 == 'x') || (puVar14 = (undefined8 *)((long)param_2 + 4), *pcVar3 == 'y')) {
              *(int *)puVar14 = (int)plVar22[5];
            }
          }
          plVar22 = (long *)*plVar22;
          plVar20 = local_b0;
        } while (plVar22 != (long *)0x0);
        do {
          plVar22 = (long *)*plVar20;
          if ((*(byte *)(plVar20 + 2) & 1) != 0) {
            operator_delete((void *)plVar20[4]);
          }
          operator_delete(plVar20);
          plVar20 = plVar22;
        } while (plVar22 != (long *)0x0);
      }
      puVar14 = local_c0;
      local_c0 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) goto LAB_0084ca38;
      goto LAB_0084ca3c;
    }
    if (iVar8 != 0) goto LAB_0084cab8;
    local_a0 = 1.0;
    puStack_b8 = (undefined8 *)0x0;
    local_c0 = (undefined8 *)0x0;
    local_a8 = 0;
    local_b0 = (long *)0x0;
    if (*param_1 == 5) goto LAB_0084bfb8;
  }
  else {
LAB_0084c3b8:
    uVar13 = FUN_00810988(*(undefined8 *)param_1,piVar19,0);
    if ((uVar13 & 1) == 0) goto LAB_0084c3f0;
    if (param_1[0xc] == 1) {
      FUN_00810d24(&local_c0,*(undefined8 *)param_1,piVar19,0);
      goto LAB_0084c450;
    }
    if (param_1[0xc] == 0) goto LAB_0084c3dc;
LAB_0084cab8:
    if (*(long *)(lVar6 + 0x28) != local_80) goto LAB_0084cc9c;
    FUN_00807a38();
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
                    /* try { // try from 0084cae4 to 0084caf3 has its CatchHandler @ 0084caf4 */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
  }
LAB_0084cc9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084cca0  FUN_0084cca0 =====

void FUN_0084cca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = (undefined8 *)pvVar2;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}


// ===== 0084cd10  FUN_0084cd10 =====

void FUN_0084cd10(undefined8 *param_1)

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


// ===== 0084cd60  FUN_0084cd60 =====

void FUN_0084cd60(long *param_1,ulong param_2)

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
      FUN_00756920();
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


// ===== 0084cebc  FUN_0084cebc =====

void FUN_0084cebc(undefined8 *param_1,undefined8 *param_2)

{
  ulong __n;
  void *__dest;
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = (void *)*param_2;
  __n = param_2[1] - (long)pvVar2;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0084cf1c to 0084cf1f has its CatchHandler @ 0084cf20 */
      uVar1 = FUN_0084d48c();
                    /* catch() { ... } // from try @ 0084cee8 with catch @ 0084cf20
                       catch() { ... } // from try @ 0084cf1c with catch @ 0084cf20 */
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        operator_delete(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00751c7c(uVar1);
    }
                    /* try { // try from 0084cee8 to 0084ceef has its CatchHandler @ 0084cf20 */
    __dest = operator_new(__n);
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,pvVar2,__n);
    param_1[1] = (long)__dest + __n;
  }
  return;
}


// ===== 0084cf40  FUN_0084cf40 =====

void FUN_0084cf40(undefined4 *param_1,int *param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  void *pvVar16;
  long lVar17;
  void *pvVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  void *local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2[0xc] == 1) {
    uVar10 = FUN_0081b334(*(undefined8 *)param_2,param_2 + 2,0);
    if ((uVar10 & 1) != 0) {
      if (param_2[0xc] == 1) {
        FUN_00817594(&local_80,*(undefined8 *)param_2,param_2 + 2,0);
        goto LAB_0084d0a8;
      }
      if (param_2[0xc] == 0) goto LAB_0084cfc0;
      goto LAB_0084d400;
    }
LAB_0084cfd4:
    pvVar16 = (void *)*param_3;
    param_3[1] = (long)pvVar16;
    if ((void *)param_3[2] == pvVar16) {
      pvVar4 = operator_new(4);
      *param_3 = (long)pvVar4;
      param_3[1] = (long)pvVar4;
      param_3[2] = (long)pvVar4 + 4;
      if (pvVar16 != (void *)0x0) {
        operator_delete(pvVar16);
      }
    }
    local_80 = 0;
    FUN_00807f90(*(undefined8 *)(param_1 + 2),*param_1,param_2,&local_80,
                 PTR_parsePlatformColor_0099e140);
    puVar15 = (undefined4 *)param_3[1];
    if (puVar15 < (undefined4 *)param_3[2]) {
      puVar8 = puVar15 + 1;
      *puVar15 = local_80;
    }
    else {
      puVar14 = (undefined4 *)*param_3;
      lVar17 = (long)puVar15 - (long)puVar14 >> 2;
      uVar10 = lVar17 + 1;
      if (uVar10 >> 0x3e != 0) goto LAB_0084d414;
      uVar6 = param_3[2] - (long)puVar14;
      uVar11 = (long)uVar6 >> 1;
      if (uVar11 <= uVar10) {
        uVar11 = uVar10;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar11 = 0x3fffffffffffffff;
      }
      if (uVar11 == 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        if (uVar11 >> 0x3e != 0) goto LAB_0084d43c;
        pvVar16 = operator_new(uVar11 << 2);
      }
      puVar19 = (undefined4 *)((long)pvVar16 + lVar17 * 4);
      puVar8 = puVar19 + 1;
      *puVar19 = local_80;
      if ((long)puVar15 - (long)puVar14 != 0) {
        uVar10 = ((long)puVar15 - (long)puVar14) - 4;
        puVar7 = puVar19;
        if ((0x1b < uVar10) &&
           (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar14) - (long)pvVar16)))) {
          puVar13 = (undefined8 *)(puVar15 + -4);
          uVar10 = (uVar10 >> 2) + 1;
          uVar12 = uVar10 & 0x7ffffffffffffff8;
          puVar15 = puVar15 + -uVar12;
          puVar7 = puVar19 + -uVar12;
          puVar9 = (undefined8 *)(puVar19 + -4);
          uVar6 = uVar12;
          do {
            puVar2 = puVar13 + -1;
            uVar22 = puVar13[-2];
            uVar21 = puVar13[1];
            uVar20 = *puVar13;
            uVar6 = uVar6 - 8;
            puVar13 = puVar13 + -4;
            puVar9[-1] = *puVar2;
            puVar9[-2] = uVar22;
            puVar9[1] = uVar21;
            *puVar9 = uVar20;
            puVar9 = puVar9 + -4;
          } while (uVar6 != 0);
          puVar19 = puVar7;
          if (uVar10 == uVar12) goto LAB_0084d388;
        }
        do {
          puVar15 = puVar15 + -1;
          puVar19 = puVar7 + -1;
          *puVar19 = *puVar15;
          puVar7 = puVar19;
        } while (puVar15 != puVar14);
      }
LAB_0084d388:
      *param_3 = (long)puVar19;
      param_3[1] = (long)puVar8;
      param_3[2] = (long)((long)pvVar16 + uVar11 * 4);
      if (puVar14 != (undefined4 *)0x0) {
        operator_delete(puVar14);
      }
    }
    param_3[1] = (long)puVar8;
  }
  else {
    if (param_2[0xc] != 0) {
LAB_0084d400:
      if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_0084d488;
      FUN_00807a38();
LAB_0084d414:
      if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_0084d488;
      FUN_0084d48c();
LAB_0084d428:
      if (*(long *)(lVar1 + 0x28) != local_68) goto LAB_0084d488;
                    /* try { // try from 0084d438 to 0084d43b has its CatchHandler @ 0084d450 */
      FUN_0084d48c();
LAB_0084d43c:
      if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00756920();
      }
      goto LAB_0084d488;
    }
    if (*param_2 != 1) goto LAB_0084cfd4;
LAB_0084cfc0:
    FUN_008173e8(&local_80,param_2,0);
LAB_0084d0a8:
    pvVar4 = local_78;
    pvVar16 = (void *)CONCAT44(uStack_7c,local_80);
    pvVar18 = (void *)*param_3;
    param_3[1] = (long)pvVar18;
    lVar17 = (long)local_78 - (long)pvVar16 >> 3;
    uVar11 = lVar17 * 0x6db6db6db6db6db7;
    uVar10 = param_3[2] - (long)pvVar18 >> 2;
    if (uVar10 <= uVar11 && uVar11 - uVar10 != 0) {
      if (uVar11 >> 0x3e != 0) goto LAB_0084d428;
                    /* try { // try from 0084d0ec to 0084d0ef has its CatchHandler @ 0084d450 */
      pvVar5 = operator_new(lVar17 * -0x4924924924924924);
      *param_3 = (long)pvVar5;
      param_3[1] = (long)pvVar5;
      param_3[2] = (long)((long)pvVar5 + lVar17 * -0x4924924924924924);
      if (pvVar18 != (void *)0x0) {
        operator_delete(pvVar18);
        pvVar16 = (void *)CONCAT44(uStack_7c,local_80);
        pvVar4 = local_78;
      }
    }
    puVar3 = PTR_parsePlatformColor_0099e140;
    if (pvVar16 != pvVar4) {
      do {
        local_84 = 0;
                    /* try { // try from 0084d14c to 0084d1b3 has its CatchHandler @ 0084d460 */
        FUN_00807f90(*(undefined8 *)(param_1 + 2),*param_1,pvVar16,&local_84,puVar3);
        puVar15 = (undefined4 *)param_3[1];
        if (puVar15 < (undefined4 *)param_3[2]) {
          puVar14 = puVar15 + 1;
          *puVar15 = local_84;
        }
        else {
          puVar19 = (undefined4 *)*param_3;
          lVar17 = (long)puVar15 - (long)puVar19 >> 2;
          uVar10 = lVar17 + 1;
          if (uVar10 >> 0x3e != 0) {
            if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0084d3e4 to 0084d3ff has its CatchHandler @ 0084d45c */
              FUN_0084d48c();
LAB_0084d3e8:
              if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_00756920();
              }
            }
            goto LAB_0084d488;
          }
          uVar6 = param_3[2] - (long)puVar19;
          uVar11 = (long)uVar6 >> 1;
          if (uVar11 <= uVar10) {
            uVar11 = uVar10;
          }
          if (0x7ffffffffffffffb < uVar6) {
            uVar11 = 0x3fffffffffffffff;
          }
          if (uVar11 == 0) {
            pvVar18 = (void *)0x0;
          }
          else {
            if (uVar11 >> 0x3e != 0) goto LAB_0084d3e8;
            pvVar18 = operator_new(uVar11 << 2);
          }
          puVar8 = (undefined4 *)((long)pvVar18 + lVar17 * 4);
          puVar14 = puVar8 + 1;
          *puVar8 = local_84;
          if ((long)puVar15 - (long)puVar19 != 0) {
            uVar10 = ((long)puVar15 - (long)puVar19) - 4;
            puVar7 = puVar8;
            if ((0x1b < uVar10) &&
               (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar19) - (long)pvVar18))))
            {
              puVar13 = (undefined8 *)(puVar15 + -4);
              uVar10 = (uVar10 >> 2) + 1;
              uVar12 = uVar10 & 0x7ffffffffffffff8;
              puVar15 = puVar15 + -uVar12;
              puVar7 = puVar8 + -uVar12;
              puVar9 = (undefined8 *)(puVar8 + -4);
              uVar6 = uVar12;
              do {
                puVar2 = puVar13 + -1;
                uVar22 = puVar13[-2];
                uVar21 = puVar13[1];
                uVar20 = *puVar13;
                uVar6 = uVar6 - 8;
                puVar13 = puVar13 + -4;
                puVar9[-1] = *puVar2;
                puVar9[-2] = uVar22;
                puVar9[1] = uVar21;
                *puVar9 = uVar20;
                puVar9 = puVar9 + -4;
              } while (uVar6 != 0);
              puVar8 = puVar7;
              if (uVar10 == uVar12) goto LAB_0084d258;
            }
            do {
              puVar15 = puVar15 + -1;
              puVar8 = puVar7 + -1;
              *puVar8 = *puVar15;
              puVar7 = puVar8;
            } while (puVar15 != puVar19);
          }
LAB_0084d258:
          *param_3 = (long)puVar8;
          param_3[1] = (long)puVar14;
          param_3[2] = (long)((long)pvVar18 + uVar11 * 4);
          if (puVar19 != (undefined4 *)0x0) {
            operator_delete(puVar19);
          }
        }
        pvVar16 = (void *)((long)pvVar16 + 0x38);
        param_3[1] = (long)puVar14;
      } while (pvVar16 != pvVar4);
      pvVar4 = (void *)CONCAT44(uStack_7c,local_80);
    }
    if (pvVar4 != (void *)0x0) {
      pvVar16 = local_78;
      if (local_78 != pvVar4) {
        do {
          pvVar18 = (void *)((long)pvVar16 + -0x38);
          if (*(uint *)((long)pvVar16 + -8) != 0xffffffff) {
                    /* try { // try from 0084d2c4 to 0084d2cf has its CatchHandler @ 0084d458 */
            (*(code *)(&PTR_FUN_0098e700)[*(uint *)((long)pvVar16 + -8)])(&local_84,pvVar18);
          }
          *(undefined4 *)((long)pvVar16 + -8) = 0xffffffff;
          pvVar16 = pvVar18;
        } while (pvVar18 != pvVar4);
        pvVar4 = (void *)CONCAT44(uStack_7c,local_80);
      }
      operator_delete(pvVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_0084d488:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084d48c  FUN_0084d48c =====

void FUN_0084d48c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_007568a0("vector");
}


// ===== 0084d4a0  FUN_0084d4a0 =====

void FUN_0084d4a0(undefined8 *param_1,undefined8 *param_2)

{
  ulong __n;
  void *__dest;
  undefined8 uVar1;
  void *pvVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar2 = (void *)*param_2;
  __n = param_2[1] - (long)pvVar2;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0084d500 to 0084d507 has its CatchHandler @ 0084d508 */
      uVar1 = FUN_0081108c(param_1);
                    /* catch() { ... } // from try @ 0084d4cc with catch @ 0084d508
                       catch() { ... } // from try @ 0084d500 with catch @ 0084d508 */
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        operator_delete(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00751c7c(uVar1);
    }
                    /* try { // try from 0084d4cc to 0084d4d3 has its CatchHandler @ 0084d508 */
    __dest = operator_new(__n);
    *param_1 = __dest;
    param_1[1] = __dest;
    param_1[2] = (long)__dest + __n;
    memcpy(__dest,pvVar2,__n);
    param_1[1] = (long)__dest + __n;
  }
  return;
}


// ===== 0084d528  facebook::react::NativeNitroModulesSpecJSI::NativeNitroModulesSpecJSI =====

/* facebook::react::NativeNitroModulesSpecJSI::NativeNitroModulesSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeNitroModulesSpecJSI::NativeNitroModulesSpecJSI
          (NativeNitroModulesSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  *(undefined ***)this = &PTR__JavaTurboModule_0098e720;
  local_60[8] = 0;
  local_60[0] = 0xe;
  local_60[1] = 0x69;
  local_60[2] = 0x6e;
  local_60[3] = 0x73;
  local_60[4] = 0x74;
  local_60[5] = 0x61;
  local_60[6] = 0x6c;
  local_60[7] = 0x6c;
                    /* try { // try from 0084d58c to 0084d5a3 has its CatchHandler @ 0084d5e4 */
  local_40 = local_60;
  lVar2 = FUN_00756964(this + 0x30,local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_0084d61c;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084d61c  FUN_0084d61c =====

void FUN_0084d61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58;
  char local_57 [8];
  undefined7 uStack_4f;
  char cStack_48;
  undefined4 uStack_47;
  undefined1 uStack_43;
  undefined2 uStack_42;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0xe;
  local_40[8] = 0;
  uStack_43 = 0;
  local_40[1] = 0x69;
  local_40[2] = 0x6e;
  local_40[3] = 0x73;
  local_40[4] = 0x74;
  local_40[5] = 0x61;
  local_40[6] = 0x6c;
  local_40[7] = 0x6c;
  local_58 = 0x28;
  uStack_47 = 0x3b676e69;
  uStack_4f = (undefined7)s___Ljava_lang_String__00365b7f._8_8_;
  cStack_48 = SUB81(s___Ljava_lang_String__00365b7f._8_8_,7);
  local_57 = (char  [8])s___Ljava_lang_String__00365b7f._0_8_;
                    /* try { // try from 0084d690 to 0084d6af has its CatchHandler @ 0084d6f0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,3,local_40,&local_58,param_3,param_4,&DAT_009b9928);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT41(uStack_47,cStack_48))));
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084d730  facebook::react::NitroModulesSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::NitroModulesSpec_ModuleProvider */

void __rustcall
facebook::react::NitroModulesSpec_ModuleProvider
          (undefined8 *param_1,byte *param_2,InitParams *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0xc) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if (*(long *)pbVar4 == 0x646f4d6f7274694e && *(int *)(pbVar4 + 8) == 0x73656c75) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0098e778;
                    /* try { // try from 0084d7d0 to 0084d7db has its CatchHandler @ 0084d7e4 */
      NativeNitroModulesSpecJSI::NativeNitroModulesSpecJSI
                ((NativeNitroModulesSpecJSI *)(puVar3 + 3),param_3);
      *param_1 = (NativeNitroModulesSpecJSI *)(puVar3 + 3);
      param_1[1] = puVar3;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0084d800  FUN_0084d800 =====

void FUN_0084d800(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084d824  FUN_0084d824 =====

void FUN_0084d824(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e778;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084d834  FUN_0084d834 =====

void FUN_0084d834(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e778;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084d864  FUN_0084d864 =====

void FUN_0084d864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084d86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0084d870  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084d874  facebook::react::NitroModulesSpec_registerComponentDescriptorsFromCodegen =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::NitroModulesSpec_registerComponentDescriptorsFromCodegen */

void __rustcall facebook::react::NitroModulesSpec_registerComponentDescriptorsFromCodegen(void)

{
  return;
}


// ===== 0084d878  facebook::react::RNPlainTextSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNPlainTextSpec_ModuleProvider */

void __rustcall facebook::react::RNPlainTextSpec_ModuleProvider(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0084d880  facebook::react::RNPlainTextSpec_registerComponentDescriptorsFromCodegen =====

/* WARNING: Removing unreachable block (ram,0x0084d8cc) */
/* WARNING: Removing unreachable block (ram,0x0084d8dc) */
/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::RNPlainTextSpec_registerComponentDescriptorsFromCodegen */

void __rustcall
facebook::react::RNPlainTextSpec_registerComponentDescriptorsFromCodegen(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0084d8bc to 0084d8c3 has its CatchHandler @ 0084d914 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0084d93c  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNPlainTextComponentDescriptor> =====

/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNPlainTextComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNPlainTextComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  void *pvVar1;
  undefined8 *in_x8;
  
  pvVar1 = operator_new(0x98);
                    /* try { // try from 0084d960 to 0084d967 has its CatchHandler @ 0084d97c */
  FUN_0084d990(pvVar1,this);
  *in_x8 = pvVar1;
  return;
}


// ===== 0084d990  FUN_0084d990 =====

void FUN_0084d990(ComponentDescriptor *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 0084d9c4 to 0084d9cb has its CatchHandler @ 0084da60 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (param_1,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)param_1 = &PTR_FUN_0098e870;
  FUN_0084e47c(param_1 + 0x38);
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  *(undefined ***)param_1 = &PTR_FUN_0098e7c8;
                    /* try { // try from 0084da20 to 0084da2b has its CatchHandler @ 0084da50 */
  FUN_0084ec24(param_1 + 0x88,&local_90,param_1 + 0x18);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084da88  FUN_0084da88 =====

void FUN_0084da88(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x90);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_007bae18(param_1);
  return;
}


// ===== 0084dad8  FUN_0084dad8 =====

void FUN_0084dad8(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x90);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_007bae18(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084db30  FUN_0084db30 =====

undefined * FUN_0084db30(void)

{
  return PTR_RNPlainTextComponentName_0099e4c0;
}


// ===== 0084db3c  FUN_0084db3c =====

undefined * FUN_0084db3c(void)

{
  return PTR_RNPlainTextComponentName_0099e4c0;
}


// ===== 0084db48  FUN_0084db48 =====

undefined8 FUN_0084db48(void)

{
  return 0x279;
}


// ===== 0084db50  FUN_0084db50 =====

void FUN_0084db50(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = tpidr_el0;
  lVar11 = *(long *)(lVar7 + 0x28);
  uVar9 = (**(code **)(*param_2 + 0x20))();
  puVar10 = (undefined8 *)operator_new(0x418);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar10 + 3);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_0098e948;
                    /* try { // try from 0084dbbc to 0084dbcb has its CatchHandler @ 0084dcc4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar9);
  lVar12 = puVar10[4];
  puVar10[3] = &PTR_FUN_0098e998;
  uVar3 = *(uint *)((long)puVar10 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar12 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar10 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar12 + 0x50) & 0x30000000) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(char *)(lVar12 + 0x5b4) != '\0') {
      uVar9 = *(undefined4 *)(lVar12 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar10 + 10) = uVar9;
  puVar8 = PTR_vtable_0099e4d8;
  cVar4 = *(char *)(lVar12 + 0x6b0);
  cVar5 = *(char *)(lVar12 + 0x6b1);
  cVar6 = *(char *)(lVar12 + 0x1e8);
  puVar10[0x81] = 0;
  puVar10[0x80] = 0;
  puVar10[3] = puVar8 + 0x10;
  lVar12 = *param_2;
  *(undefined1 *)(puVar10 + 0x82) = 1;
  *(uint *)((long)puVar10 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 0084dc78 to 0084dc83 has its CatchHandler @ 0084dcb4 */
  (**(code **)(lVar12 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar10;
  if (*(long *)(lVar7 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0084dcf4  FUN_0084dcf4 =====

void FUN_0084dcf4(long *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x418);
  plVar1 = plVar3 + 3;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_0098e948;
                    /* try { // try from 0084dd4c to 0084dd5b has its CatchHandler @ 0084de1c */
  FUN_0084f0c8(plVar1,param_3,param_4);
  local_68 = plVar1;
  local_60 = plVar3;
                    /* try { // try from 0084dd60 to 0084dd6f has its CatchHandler @ 0084de34 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(plVar1,param_3,param_4);
  local_78 = plVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 0084dd80 to 0084dd8f has its CatchHandler @ 0084de0c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar1 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
                    /* try { // try from 0084ddcc to 0084ddd7 has its CatchHandler @ 0084de34 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = (long)plVar1;
  param_1[1] = (long)local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084de5c  FUN_0084de5c =====

void FUN_0084de5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 0084de68  FUN_0084de68 =====

void FUN_0084de68(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
                                   ), iVar7 != 0)) {
                    /* try { // try from 0084e134 to 0084e143 has its CatchHandler @ 0084e170 */
      FUN_0084f560(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
                   ,adStack_d0);
      __cxa_atexit(FUN_0084f510,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_0084f1ec(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 0084df10 to 0084df23 has its CatchHandler @ 0084e1a4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_0084df4c:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 0084df64 to 0084df73 has its CatchHandler @ 0084e194 */
      FUN_0084f338(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0084df34 to 0084df3b has its CatchHandler @ 0084e184 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_RNPlainTextComponentName_0099e4c0,pcVar9);
      if (iVar7 != 0) goto LAB_0084df4c;
      bVar3 = false;
    }
                    /* try { // try from 0084dfa8 to 0084dfab has its CatchHandler @ 0084e1a4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0084dfb8 to 0084dfd3 has its CatchHandler @ 0084e190 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0084e114 to 0084e123 has its CatchHandler @ 0084e188 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0084e1f0;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0084e0f4 to 0084e103 has its CatchHandler @ 0084e1b0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0084e1f0;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 0084e054 to 0084e05f has its CatchHandler @ 0084e1b8 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0084e064 to 0084e07b has its CatchHandler @ 0084e1bc */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0084e08c to 0084e097 has its CatchHandler @ 0084e1ac */
          (*(code *)(&PTR_FUN_0098e8d8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0084e1f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084e1f4  FUN_0084e1f4 =====

void FUN_0084e1f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0084e1fc  FUN_0084e1fc =====

void FUN_0084e1fc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0084e204  FUN_0084e204 =====

void FUN_0084e204(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_90;
  long *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 0084e24c to 0084e253 has its CatchHandler @ 0084e3d8 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_0098ead0;
                    /* try { // try from 0084e26c to 0084e27b has its CatchHandler @ 0084e3c0 */
  FUN_0084f7ec(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0084e2b0 to 0084e2b7 has its CatchHandler @ 0084e3b0 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  plVar1 = plVar6 + 4;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 0084e2d4 to 0084e2eb has its CatchHandler @ 0084e398 */
  FUN_0084f9fc(plVar1,param_3,&local_70,param_2 + 8,param_2);
  plVar4 = local_70;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  local_90 = plVar1;
  local_88 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 0084e304 to 0084e30f has its CatchHandler @ 0084e378 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_90);
  if (local_88 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084e400  FUN_0084e400 =====

void FUN_0084e400(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    FUN_00757d00(1,lVar2 + 8);
  }
  plVar3 = *(long **)(param_2 + 0x3f0);
  *(undefined8 *)(param_2 + 1000) = uVar1;
  *(long *)(param_2 + 0x3f0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084e47c  FUN_0084e47c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084e47c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1160 [2];
  undefined8 *local_1158;
  undefined *local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined4 local_1130 [2];
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined4 local_1108;
  undefined4 local_1100;
  undefined1 local_10fc;
  undefined8 local_10fb;
  undefined8 local_10f3;
  undefined8 uStack_10eb;
  undefined8 local_10e3;
  undefined8 uStack_10db;
  undefined8 local_10d3;
  undefined8 uStack_10cb;
  undefined8 local_10c3;
  undefined6 uStack_10bb;
  undefined2 uStack_10b5;
  undefined6 uStack_10b3;
  undefined8 uStack_10ad;
  undefined4 local_10a5;
  undefined8 local_10a1;
  undefined1 local_1099;
  undefined1 uStack_1098;
  undefined7 uStack_1097;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1008;
  undefined4 uStack_1004;
  undefined4 uStack_1000;
  undefined4 uStack_ffc;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined4 local_fe8;
  undefined1 local_fe4;
  undefined4 local_fe0;
  undefined1 local_fdc;
  undefined4 local_fd8;
  undefined1 local_fd4;
  undefined4 local_fd0;
  undefined1 local_fcc;
  undefined4 local_fc8;
  undefined1 local_fc4;
  undefined4 local_fc0;
  undefined1 local_fbc;
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
  undefined1 local_f68;
  undefined1 local_f64;
  undefined1 local_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined1 uStack_f18;
  undefined7 local_f17;
  undefined1 uStack_f10;
  undefined8 uStack_f0f;
  undefined8 local_f04;
  undefined8 uStack_efc;
  undefined8 uStack_ef4;
  undefined8 uStack_eec;
  undefined8 local_ee4;
  undefined8 uStack_edc;
  undefined8 uStack_ed4;
  undefined8 uStack_ecc;
  undefined8 local_ec4;
  undefined8 uStack_ebc;
  undefined8 uStack_eb4;
  undefined5 uStack_eac;
  undefined3 local_ea7;
  undefined5 uStack_ea4;
  undefined1 local_e9c;
  undefined1 local_e98;
  undefined1 local_e94;
  undefined1 local_e90;
  undefined1 local_e8c;
  undefined1 local_e88;
  undefined1 local_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e4b;
  undefined1 local_e47;
  undefined1 local_e46;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined7 uStack_e18;
  undefined4 uStack_e11;
  undefined8 local_e0c;
  undefined1 local_e04;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined1 local_df0;
  undefined1 local_dec;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_dd8;
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
  undefined1 local_d64;
  undefined1 local_d60;
  undefined1 local_d5c;
  undefined1 local_d58;
  undefined1 local_d54;
  undefined1 local_d50;
  undefined1 local_d4c;
  undefined1 local_d48;
  undefined1 local_d44;
  undefined1 local_d40;
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
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined2 local_cd8;
  undefined8 local_cd4;
  undefined1 local_ccc;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined1 local_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined6 uStack_bb0;
  undefined2 uStack_baa;
  undefined6 uStack_ba8;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined8 local_b94;
  undefined8 uStack_b8c;
  undefined1 local_b84;
  undefined8 local_b80;
  undefined2 local_b78;
  undefined1 local_b76;
  undefined4 local_b74;
  undefined1 local_b70;
  undefined1 local_b10;
  undefined1 local_b08;
  undefined1 local_aa8;
  undefined4 local_aa0;
  undefined2 local_a9c;
  undefined1 local_a98;
  undefined1 local_a94;
  undefined1 local_a90;
  undefined1 local_a8c;
  undefined1 local_a88;
  undefined1 local_a84;
  undefined1 local_a80;
  undefined1 local_a7c;
  undefined1 local_a78;
  undefined1 local_a74;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined1 local_9d0;
  undefined8 local_9cc;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined4 local_9a0;
  undefined1 local_99c;
  undefined4 local_998;
  undefined2 local_994;
  undefined1 local_992;
  RNPlainTextProps aRStack_990 [1984];
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
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 0084e508 to 0084e513 has its CatchHandler @ 0084eae4 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1160[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_1158 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_1130,0,0x7a0);
  local_88[0] = 5;
  local_70 = 0;
  local_1150 = PTR_construction_vtable_0099e4e0 + 0x20;
  local_1130[0] = 5;
  uStack_1138 = 0;
  local_1140 = 0;
  uStack_1148 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1120 = 0;
  local_1128 = 0;
  uStack_1110 = 0;
  local_1118 = 0;
  local_1108 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_10fc = 0;
  local_10a1 = 0;
  uStack_bc0 = _UNK_0048804c;
  local_bc8 = _DAT_00488044;
  local_10fb = _s__00375408;
  uStack_cb8 = _UNK_00371598;
  local_cc0 = _DAT_00371590;
  uStack_bd0 = _UNK_0048803c;
  local_bd8 = _DAT_00488034;
  local_fe4 = 0;
  uStack_be0 = _UNK_0048802c;
  local_be8 = _DAT_00488024;
  uStack_bf0 = _UNK_0048801c;
  local_bf8 = _DAT_00488014;
  uStack_ba8 = 0;
  local_fdc = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  uStack_ffc = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  local_1100 = 0x10410710;
  local_e4b = 0;
  local_10a5 = 0x40004;
  local_e46 = 0x23;
  uStack_1004 = 0;
  uStack_1000 = 0;
  uStack_100c = 0;
  uStack_1008 = 0;
  uStack_ff0 = 0;
  local_ff8 = 0;
  local_e0c = 0x3f800000;
  local_fe8 = 0x7fc00000;
  local_fe0 = 0x7fc00000;
  local_fd8 = 0x7fc00000;
  local_fd0 = 0x7fc00000;
  local_fc8 = 0x7fc00000;
  local_fc0 = 0x7fc00000;
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
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_f0f = 0;
  uStack_f10 = 0;
  local_cd4 = 0;
  uStack_efc = 0;
  local_f04 = 0;
  uStack_eec = 0;
  uStack_ef4 = 0;
  uStack_edc = 0;
  local_ee4 = 0;
  uStack_ecc = 0;
  uStack_ed4 = 0;
  uStack_ebc = 0;
  local_ec4 = 0;
  uStack_eac = 0;
  uStack_eb4 = 0;
  local_ea7 = 0;
  uStack_ea4 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_c90 = 0;
  uStack_c98 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c40 = 0;
  local_c48 = 0;
  uStack_c30 = 0;
  uStack_c38 = 0;
  uStack_c20 = 0;
  local_c28 = 0;
  uStack_c10 = 0;
  uStack_c18 = 0;
  uStack_c00 = 0;
  local_c08 = 0;
  uStack_bb0 = 0;
  uStack_baa = 0;
  local_bb8 = 0;
  uStack_1097 = 0;
  uStack_10eb = 0;
  local_10f3 = 0;
  uStack_10db = 0;
  local_10e3 = 0;
  uStack_10cb = 0;
  local_10d3 = 0;
  uStack_10bb = 0;
  local_10c3 = 0;
  uStack_10ad = 0;
  uStack_10b5 = 0;
  uStack_10b3 = 0;
  local_1099 = 0;
  uStack_1098 = 0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  local_1078 = 0;
  uStack_1080 = 0;
  local_1068 = 0;
  uStack_1070 = 0;
  local_1058 = 0;
  uStack_1060 = 0;
  local_1048 = 0;
  uStack_1050 = 0;
  uStack_1038 = 0;
  uStack_1040 = 0;
  local_1030 = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc4 = 0;
  local_fbc = 0;
  local_fb4 = 0;
  local_fac = 0;
  local_fa4 = 0;
  local_f9c = 0;
  local_f94 = 0;
  local_f8c = 0;
  local_f84 = 0;
  local_f7c = 0;
  local_f74 = 0;
  local_f6c = 0;
  local_f68 = 0;
  local_f64 = 0;
  local_f58 = 0;
  local_e9c = 0;
  local_e98 = 0;
  local_e94 = 0;
  local_e90 = 0;
  local_e8c = 0;
  local_e88 = 0;
  local_e70 = 0;
  uStack_f48 = 0;
  local_f50 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  uStack_f28 = 0;
  local_f30 = 0;
  uStack_f18 = 0;
  local_f17 = 0;
  uStack_f20 = 0;
  local_e58 = 0;
  local_e50 = 0;
  local_e4c = 1;
  local_e47 = 0;
  uStack_e38 = 0;
  local_e40 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e11 = 0;
  local_e20 = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_dd8 = 0;
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
  local_d64 = 0;
  local_d60 = 0;
  local_d5c = 0;
  local_d58 = 0;
  local_d54 = 0;
  local_d50 = 0;
  local_d4c = 0;
  local_d48 = 0;
  local_d44 = 0;
  local_d40 = 0;
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
  local_cc8 = 0;
  local_cd8 = 0;
  local_ccc = 0;
  local_cb0 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b80 = 0;
  uStack_b8c = 0;
  local_b94 = 0;
  local_b84 = 0;
  local_b78 = 0x101;
  local_b76 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b10 = 0;
  local_b08 = 0;
  local_aa8 = 0;
  local_a98 = 0;
  local_a94 = 0;
  local_a90 = 0;
  local_a8c = 0;
  local_a88 = 0;
  local_a84 = 0;
  local_a80 = 0;
  local_a7c = 0;
  local_a78 = 0;
  local_a74 = 0;
  local_a9c = 0;
  local_aa0 = 0;
  local_1150 = PTR_vtable_0099e4c8 + 0x20;
  local_a60 = 0;
  local_a58 = 0x4160000000000000;
  local_9cc = 0;
  uStack_a68 = 0;
  local_a70 = 0;
  uStack_a48 = 0;
  local_a50 = 0;
  uStack_a38 = 0;
  local_a40 = 0;
  uStack_a28 = 0;
  local_a30 = 0;
  uStack_a18 = 0;
  local_a20 = 0;
  uStack_a08 = 0;
  local_a10 = 0;
  uStack_9f8 = 0;
  local_a00 = 0;
  uStack_9e8 = 0;
  local_9f0 = 0;
  uStack_9d8 = 0;
  local_9e0 = 0;
  local_9d0 = 0;
  uStack_9b8 = 0;
  local_9c0 = 0;
  uStack_9a8 = 0;
  local_9b0 = 0;
  local_9a0 = 2;
  local_99c = 1;
  local_998 = 0;
  local_994 = 0;
  local_992 = 1;
                    /* try { // try from 0084e954 to 0084e967 has its CatchHandler @ 0084eae4 */
  facebook::react::RNPlainTextProps::RNPlainTextProps
            (aRStack_990,(PropsParserContext *)local_1160,(RNPlainTextProps *)&local_1150,
             (RawProps *)&local_118);
  puVar5 = PTR_PTR_0099e4d0;
  FUN_0084eb14(aRStack_990,PTR_PTR_0099e4d0);
  FUN_0084eb14(&local_1150,puVar5);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0084ea74 to 0084ea7f has its CatchHandler @ 0084eae8 */
        (*(code *)(&PTR_FUN_0098e8d8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1150,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084eaec  FUN_0084eaec =====

void FUN_0084eaec(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0084eb10  FUN_0084eb10 =====

void FUN_0084eb10(void)

{
  return;
}


// ===== 0084eb14  FUN_0084eb14 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0084eb14(long param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*(byte *)(param_1 + 0x790) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7a0));
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  if ((bVar1 & 1) == 0) {
    pbVar3 = *(byte **)(param_1 + 0x748);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x770));
    pbVar3 = *(byte **)(param_1 + 0x748);
  }
  if (pbVar3 == (byte *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  else {
    pbVar2 = *(byte **)(param_1 + 0x750);
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = *(byte **)(param_1 + 0x748);
    }
    *(byte **)(param_1 + 0x750) = pbVar3;
    operator_delete(pbVar4);
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  if ((bVar1 & 1) == 0) {
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
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x710));
    bVar1 = *(byte *)(param_1 + 0x6e0);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,param_2 + 8);
  return;
}


// ===== 0084ec24  FUN_0084ec24 =====

void FUN_0084ec24(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  byte local_50;
  char local_4f [7];
  char cStack_48;
  char acStack_47 [7];
  undefined1 local_40;
  undefined7 uStack_3f;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x20);
  *puVar2 = &PTR_FUN_0098e8f8;
  puVar2[1] = 0;
  puVar2[2] = 0;
  local_50 = 0x1e;
  local_4f[0] = s_FabricU_00367357[0];
  local_4f[1] = s_FabricU_00367357[1];
  local_4f[2] = s_FabricU_00367357[2];
  local_4f[3] = s_FabricU_00367357[3];
  local_4f[4] = s_FabricU_00367357[4];
  local_4f[5] = s_FabricU_00367357[5];
  local_4f[6] = s_FabricU_00367357[6];
  cStack_48 = s_IManager_0036735e[0];
  acStack_47[0] = s_IManager_0036735e[1];
  acStack_47[1] = s_IManager_0036735e[2];
  acStack_47[2] = s_IManager_0036735e[3];
  acStack_47[3] = s_IManager_0036735e[4];
  acStack_47[4] = s_IManager_0036735e[5];
  acStack_47[5] = s_IManager_0036735e[6];
  acStack_47[6] = s_IManager_0036735e[7];
  local_40 = 0;
                    /* try { // try from 0084ec94 to 0084ec9f has its CatchHandler @ 0084ecd8 */
  FUN_00812f24(puVar2 + 3,*param_3,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_3f,local_40));
  }
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084ed18  FUN_0084ed18 =====

void FUN_0084ed18(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e8f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084ed28  FUN_0084ed28 =====

void FUN_0084ed28(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e8f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084ed58  FUN_0084ed58 =====

void FUN_0084ed58(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
                    /* try { // try from 0084ed70 to 0084ed83 has its CatchHandler @ 0084ed94 */
    plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 0084ed98  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084ed9c  FUN_0084ed9c =====

void FUN_0084ed9c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084edec  FUN_0084edec =====

void FUN_0084edec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084ee3c  FUN_0084ee3c =====

void FUN_0084ee3c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e948;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084ee4c  FUN_0084ee4c =====

void FUN_0084ee4c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098e948;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084ee7c  FUN_0084ee7c =====

void FUN_0084ee7c(long param_1)

{
  FUN_0084efe0(param_1 + 0x18);
  return;
}


// ===== 0084ee84  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084ee88  FUN_0084ee88 =====

void FUN_0084ee88(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084ef48  FUN_0084ef48 =====

void FUN_0084ef48(long param_1)

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


// ===== 0084efb0  FUN_0084efb0 =====

bool FUN_0084efb0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0084efc8  FUN_0084efc8 =====

bool FUN_0084efc8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0084efe0  FUN_0084efe0 =====

void FUN_0084efe0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (long *)param_1[0x7e];
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  return;
}


// ===== 0084f0c8  FUN_0084f0c8 =====

void FUN_0084f0c8(YogaLayoutableShadowNode *param_1,ShadowNode *param_2,ShadowNodeFragment *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(param_1,param_2,param_3);
  lVar11 = *(long *)(param_1 + 8);
  *(undefined ***)param_1 = &PTR_FUN_0098e998;
  uVar2 = *(uint *)(param_1 + 0x54);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar11 + 0x54) & 0xc) == 4) << 2;
  *(uint *)(param_1 + 0x54) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar11 + 0x50) & 0x30000000) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(char *)(lVar11 + 0x5b4) != '\0') {
      uVar9 = *(undefined4 *)(lVar11 + 0x5b0);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  cVar3 = *(char *)(lVar11 + 0x6b0);
  cVar4 = *(char *)(lVar11 + 0x6b1);
  cVar5 = *(char *)(lVar11 + 0x1e8);
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  puVar6 = PTR_vtable_0099e4d8;
  lVar10 = **(long **)param_3;
  *(uint *)(param_1 + 0x54) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  *(undefined **)param_1 = puVar6 + 0x10;
  if (lVar10 == 0) {
    bVar7 = 0;
  }
  else {
                    /* try { // try from 0084f194 to 0084f19b has its CatchHandler @ 0084f1d0 */
    puVar8 = (undefined8 *)facebook::react::ShadowNode::getProps();
    bVar7 = facebook::react::measurementInputsEqual(*puVar8,lVar11);
    bVar7 = bVar7 ^ 1;
  }
  param_1[0x3f8] = (YogaLayoutableShadowNode)(bVar7 & 1);
  return;
}


// ===== 0084f1ec  FUN_0084f1ec =====

void FUN_0084f1ec(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  RNPlainTextProps *pRVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar4 = (RNPlainTextProps *)*param_4;
  if (pRVar4 == (RNPlainTextProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
                                   ), iVar2 != 0)) {
                    /* try { // try from 0084f2b8 to 0084f2c7 has its CatchHandler @ 0084f2f4 */
      FUN_0084f560(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
                   ,&uStack_59);
      __cxa_atexit(FUN_0084f510,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
                         );
    }
    pRVar4 = *(RNPlainTextProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x7d8);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0098ea80;
                    /* try { // try from 0084f264 to 0084f277 has its CatchHandler @ 0084f308 */
  facebook::react::RNPlainTextProps::RNPlainTextProps
            ((RNPlainTextProps *)(puVar3 + 3),param_2,pRVar4,param_3);
  *param_1 = (RNPlainTextProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084f338  FUN_0084f338 =====

void FUN_0084f338(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
                                   ), iVar2 != 0)) {
                    /* try { // try from 0084f41c to 0084f42b has its CatchHandler @ 0084f458 */
      FUN_0084f560(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
                   ,local_70);
      __cxa_atexit(FUN_0084f510,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b8
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 0084f3a8 to 0084f3bb has its CatchHandler @ 0084f46c */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNPlainTextComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16RNPlainTextPropsENS0_23RNPlainTextEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e4b0
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 0084f36c to 0084f383 has its CatchHandler @ 0084f470 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0084f3e8;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0084f3e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084f4c0  FUN_0084f4c0 =====

void FUN_0084f4c0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084f510  FUN_0084f510 =====

void FUN_0084f510(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084f560  FUN_0084f560 =====

void FUN_0084f560(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x7d8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0098ea30;
  memset(__s,0,0x7c0);
                    /* try { // try from 0084f5a4 to 0084f5b7 has its CatchHandler @ 0084f688 */
  FUN_00788b10(__s,PTR_PTR_0099e4d0 + 0x10);
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
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar1 = PTR_vtable_0099e4c8;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  *(undefined1 *)(puVar2 + 0xf3) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe2] = 0x4160000000000000;
  *(undefined8 *)((long)puVar2 + 0x79c) = 0;
  *(undefined4 *)(puVar2 + 0xf9) = 2;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xea] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  puVar2[0xf6] = 0;
  puVar2[0xf5] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  *(undefined1 *)((long)puVar2 + 0x7cc) = 1;
  *(undefined4 *)(puVar2 + 0xfa) = 0;
  *(undefined2 *)((long)puVar2 + 0x7d4) = 0;
  *(undefined1 *)((long)puVar2 + 0x7d6) = 1;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 0084f6a4  FUN_0084f6a4 =====

void FUN_0084f6a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ea30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084f6b4  FUN_0084f6b4 =====

void FUN_0084f6b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ea30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084f6e4  FUN_0084f6e4 =====

void FUN_0084f6e4(long param_1)

{
  FUN_0084eb14(param_1 + 0x18,PTR_PTR_0099e4d0);
  return;
}


// ===== 0084f6f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084f6f8  FUN_0084f6f8 =====

void FUN_0084f6f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ea80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084f708  FUN_0084f708 =====

void FUN_0084f708(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ea80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084f738  FUN_0084f738 =====

void FUN_0084f738(long param_1)

{
  FUN_0084eb14(param_1 + 0x18,PTR_PTR_0099e4d0);
  return;
}


// ===== 0084f748  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084f74c  FUN_0084f74c =====

void FUN_0084f74c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0084f79c  FUN_0084f79c =====

void FUN_0084f79c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ead0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0084f7ac  FUN_0084f7ac =====

void FUN_0084f7ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ead0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0084f7dc  FUN_0084f7dc =====

void FUN_0084f7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0084f7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0084f7e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0084f7ec  FUN_0084f7ec =====

EventEmitter * FUN_0084f7ec(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 0084f834 to 0084f843 has its CatchHandler @ 0084f910 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0084f854 to 0084f85b has its CatchHandler @ 0084f900 */
  plVar3 = (long *)operator_new(0x58);
  puVar2 = PTR_DAT_0099dc90;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(long **)(param_1 + 0x40) = plVar3 + 3;
  *(long **)(param_1 + 0x48) = plVar3;
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_0098eb20;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084f944  FUN_0084f944 =====

void FUN_0084f944(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0084f9fc  FUN_0084f9fc =====

ShadowNodeFamily *
FUN_0084f9fc(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0084fa60 to 0084fa77 has its CatchHandler @ 0084fae0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0084fb18  facebook::react::RNPlainTextProps::RNPlainTextProps =====

/* facebook::react::RNPlainTextProps::RNPlainTextProps(facebook::react::PropsParserContext const&,
   facebook::react::RNPlainTextProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNPlainTextProps::RNPlainTextProps
          (RNPlainTextProps *this,PropsParserContext *param_1,RNPlainTextProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong *puVar4;
  function *in_x4;
  long lVar5;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar4 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 0084fb58 to 0084fb67 has its CatchHandler @ 0085013c */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,param_1 + 8,(HostPlatformViewProps *)param_2,param_3,
             in_x4);
  if ((ulong *)local_70 == local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0084fb94;
    lVar5 = 5;
    puVar4 = (ulong *)local_70;
  }
  (**(code **)(*puVar4 + lVar5 * 8))();
LAB_0084fb94:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined8 *)this = *(undefined8 *)param_1;
                    /* try { // try from 0084fba4 to 0084fbcb has its CatchHandler @ 00850128 */
  FUN_007ea274(this + 0x6e0,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084fbe0 to 0084fc03 has its CatchHandler @ 00850120 */
  uVar3 = FUN_007ec7c8(param_2);
  *(undefined4 *)(this + 0x6f8) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,0x41600000);
                    /* try { // try from 0084fc10 to 0084fc33 has its CatchHandler @ 00850118 */
  uVar3 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x6fc) = uVar3;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0084fc40 to 0084fc67 has its CatchHandler @ 00850104 */
  FUN_007ea274(this + 0x700,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0084fc80 to 0084fca7 has its CatchHandler @ 008500f0 */
  FUN_007ea274(this + 0x718,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0084fcc0 to 0084fce7 has its CatchHandler @ 008500dc */
  FUN_007ea274(this + 0x730,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0084fd00 to 0084fd17 has its CatchHandler @ 008500d0 */
  FUN_00850174(this + 0x748,param_2);
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0084fd20 to 0084fd47 has its CatchHandler @ 008500bc */
  FUN_007ea274(this + 0x760,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084fd5c to 0084fd7f has its CatchHandler @ 008500b4 */
  uVar3 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x778) = uVar3;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084fd88 to 0084fdab has its CatchHandler @ 008500ac */
  uVar3 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x77c) = uVar3;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0084fdb4 to 0084fdd7 has its CatchHandler @ 008500a4 */
  bVar2 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffff00000000;
  this[0x780] = (RNPlainTextProps)(bVar2 & 1);
                    /* try { // try from 0084fde4 to 0084fdf3 has its CatchHandler @ 0085009c */
  uVar3 = FUN_008503b8();
  *(undefined4 *)(this + 0x784) = uVar3;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084fdfc to 0084fe0b has its CatchHandler @ 00850094 */
  uVar3 = FUN_0085056c();
  *(undefined4 *)(this + 0x788) = uVar3;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 0084fe18 to 0084fe3f has its CatchHandler @ 00850080 */
  FUN_007ea274(this + 0x790,param_2);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084fe54 to 0084fe63 has its CatchHandler @ 0084ffec */
  uVar3 = FUN_00850720();
  *(undefined4 *)(this + 0x7a8) = uVar3;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 0084fe6c to 0084fe8f has its CatchHandler @ 0084ffe8 */
  uVar3 = FUN_007ece34(param_2);
  *(undefined4 *)(this + 0x7ac) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,2);
                    /* try { // try from 0084fe9c to 0084feab has its CatchHandler @ 0084ffe4 */
  uVar3 = FUN_008508d4();
  *(undefined4 *)(this + 0x7b0) = uVar3;
  local_90[0] = CONCAT71(local_90[0]._1_7_,1);
                    /* try { // try from 0084feb8 to 0084fedb has its CatchHandler @ 0084ffe0 */
  bVar2 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffff00000000;
  this[0x7b4] = (RNPlainTextProps)(bVar2 & 1);
                    /* try { // try from 0084fee8 to 0084ff0b has its CatchHandler @ 0084ffdc */
  uVar3 = FUN_007f0fe0(param_2);
  *(undefined4 *)(this + 0x7b8) = uVar3;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 0084ff14 to 0084ff37 has its CatchHandler @ 0084ffd8 */
  bVar2 = FUN_007ea510(param_2);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x7bc] = (RNPlainTextProps)(bVar2 & 1);
                    /* try { // try from 0084ff44 to 0084ff67 has its CatchHandler @ 0084ffd4 */
  bVar2 = FUN_007ea510(param_2);
  this[0x7bd] = (RNPlainTextProps)(bVar2 & 1);
  local_90[0] = CONCAT71(local_90[0]._1_7_,1);
                    /* try { // try from 0084ff78 to 0084ff9b has its CatchHandler @ 0084ffd0 */
  bVar2 = FUN_007ea510(param_2);
  this[0x7be] = (RNPlainTextProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00850174  FUN_00850174 =====

void FUN_00850174(undefined8 *param_1,undefined8 param_2,char *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_3,"fontVariant",(char *)0x0);
  if (lVar2 == 0) {
    lVar2 = *param_4;
    lVar4 = param_4[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar3 = FUN_00807970();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00850228 to 00850237 has its CatchHandler @ 00850268 */
      FUN_0081af80(param_2,lVar2,param_1);
      if (*(long *)(lVar1 + 0x28) == lVar5) {
        return;
      }
      goto LAB_008503b0;
    }
    lVar2 = *param_5;
    lVar4 = param_5[1];
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    FUN_0081a444(param_1,lVar2,lVar4,(lVar4 - lVar2 >> 3) * -0x5555555555555555);
    return;
  }
LAB_008503b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008503b8  FUN_008503b8 =====

void FUN_008503b8(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"textAlign",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 00850430 to 0085043b has its CatchHandler @ 0085044c */
      FUN_008523dc(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 0085056c  FUN_0085056c =====

void FUN_0085056c(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"textAlignVertical",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 008505e4 to 008505ef has its CatchHandler @ 00850600 */
      FUN_008525d0(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 00850720  FUN_00850720 =====

void FUN_00850720(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"textTransform",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 00850798 to 008507a3 has its CatchHandler @ 008507b4 */
      FUN_0085277c(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 008508d4  FUN_008508d4 =====

void FUN_008508d4(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_50 [6];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = facebook::react::RawProps::at(param_1,"ellipsizeMode",(char *)0x0);
  if (lVar2 == 0) {
    local_50[0] = *param_2;
  }
  else {
    uVar3 = FUN_00807970();
    if ((uVar3 & 1) == 0) {
      local_50[0] = *param_3;
    }
    else {
                    /* try { // try from 0085094c to 00850957 has its CatchHandler @ 00850968 */
      FUN_00852940(lVar2,local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50[0]);
}


// ===== 00850a88  facebook::react::RNPlainTextProps::RNPlainTextProps =====

/* facebook::react::RNPlainTextProps::RNPlainTextProps(facebook::react::PropsParserContext const&,
   facebook::react::RNPlainTextProps const&, facebook::react::RawProps const&) */

void __thiscall
facebook::react::RNPlainTextProps::RNPlainTextProps
          (RNPlainTextProps *this,PropsParserContext *param_1,RNPlainTextProps *param_2,
          RawProps *param_3)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong local_90 [2];
  void *local_80;
  long *local_70;
  long local_58;
  
  puVar4 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
                    /* try { // try from 00850ac4 to 00850ae7 has its CatchHandler @ 008510c4 */
  ::facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)this,(PropsParserContext *)(PTR_PTR_0099e4d0 + 8),
             (HostPlatformViewProps *)param_1,(RawProps *)param_2,(function *)param_3);
  if ((ulong *)local_70 == local_90) {
    lVar5 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00850b14;
    lVar5 = 5;
    puVar4 = (ulong *)local_70;
  }
  (**(code **)(*puVar4 + lVar5 * 8))();
LAB_00850b14:
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  *(undefined **)this = PTR_vtable_0099e4c8 + 0x20;
                    /* try { // try from 00850b2c to 00850b53 has its CatchHandler @ 008510b0 */
  FUN_007ea274(this + 0x6e0,param_1,param_3,&DAT_003697cb,param_2 + 0x6e0,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 00850b68 to 00850b8b has its CatchHandler @ 008510a8 */
  uVar3 = FUN_007ec7c8(param_1,param_3,"color",param_2 + 0x6f8,local_90,0,0);
  *(undefined4 *)(this + 0x6f8) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,0x41600000);
                    /* try { // try from 00850b98 to 00850bbb has its CatchHandler @ 008510a0 */
  uVar3 = FUN_007f0fe0(param_1,param_3,"fontSize",param_2 + 0x6fc,local_90,0,0);
  *(undefined4 *)(this + 0x6fc) = uVar3;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00850bc8 to 00850bef has its CatchHandler @ 0085108c */
  FUN_007ea274(this + 0x700,param_1,param_3,"fontFamily",param_2 + 0x700,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00850c08 to 00850c2f has its CatchHandler @ 00851078 */
  FUN_007ea274(this + 0x718,param_1,param_3,"fontWeight",param_2 + 0x718,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00850c48 to 00850c6f has its CatchHandler @ 00851064 */
  FUN_007ea274(this + 0x730,param_1,param_3,"fontStyle",param_2 + 0x730,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00850c88 to 00850c9f has its CatchHandler @ 00851058 */
  FUN_00850174(this + 0x748,param_1,param_3,param_2 + 0x748,local_90);
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00850ca8 to 00850ccf has its CatchHandler @ 00851044 */
  FUN_007ea274(this + 0x760,param_1,param_3,"fontVariationSettings",param_2 + 0x760,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 00850ce4 to 00850d07 has its CatchHandler @ 0085103c */
  uVar3 = FUN_007f0fe0(param_1,param_3,"lineHeight",param_2 + 0x778,local_90,0,0);
  *(undefined4 *)(this + 0x778) = uVar3;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 00850d10 to 00850d33 has its CatchHandler @ 00851034 */
  uVar3 = FUN_007f0fe0(param_1,param_3,"letterSpacing",param_2 + 0x77c,local_90,0,0);
  *(undefined4 *)(this + 0x77c) = uVar3;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 00850d3c to 00850d5f has its CatchHandler @ 0085102c */
  bVar2 = FUN_007ea510(param_1,param_3,"hasLetterSpacing",param_2 + 0x780,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffff00000000;
  this[0x780] = (RNPlainTextProps)(bVar2 & 1);
                    /* try { // try from 00850d6c to 00850d7b has its CatchHandler @ 00851024 */
  uVar3 = FUN_008503b8(param_3,param_2 + 0x784,local_90);
  *(undefined4 *)(this + 0x784) = uVar3;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 00850d84 to 00850d93 has its CatchHandler @ 0085101c */
  uVar3 = FUN_0085056c(param_3,param_2 + 0x788,local_90);
  *(undefined4 *)(this + 0x788) = uVar3;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
                    /* try { // try from 00850da0 to 00850dc7 has its CatchHandler @ 00851008 */
  FUN_007ea274(this + 0x790,param_1,param_3,"textDecorationLine",param_2 + 0x790,local_90,0,0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 00850ddc to 00850deb has its CatchHandler @ 00850f74 */
  uVar3 = FUN_00850720(param_3,param_2 + 0x7a8,local_90);
  *(undefined4 *)(this + 0x7a8) = uVar3;
  local_90[0] = local_90[0] & 0xffffffff00000000;
                    /* try { // try from 00850df4 to 00850e17 has its CatchHandler @ 00850f70 */
  uVar3 = FUN_007ece34(param_1,param_3,"numberOfLines",param_2 + 0x7ac,local_90,0,0);
  *(undefined4 *)(this + 0x7ac) = uVar3;
  local_90[0] = CONCAT44(local_90[0]._4_4_,2);
                    /* try { // try from 00850e24 to 00850e33 has its CatchHandler @ 00850f6c */
  uVar3 = FUN_008508d4(param_3,param_2 + 0x7b0,local_90);
  *(undefined4 *)(this + 0x7b0) = uVar3;
  local_90[0] = CONCAT71(local_90[0]._1_7_,1);
                    /* try { // try from 00850e40 to 00850e63 has its CatchHandler @ 00850f68 */
  bVar2 = FUN_007ea510(param_1,param_3,"allowFontScaling",param_2 + 0x7b4,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffff00000000;
  this[0x7b4] = (RNPlainTextProps)(bVar2 & 1);
                    /* try { // try from 00850e70 to 00850e93 has its CatchHandler @ 00850f64 */
  uVar3 = FUN_007f0fe0(param_1,param_3,"maxFontSizeMultiplier",param_2 + 0x7b8,local_90,0,0);
  *(undefined4 *)(this + 0x7b8) = uVar3;
  local_90[0] = local_90[0] & 0xffffffffffffff00;
                    /* try { // try from 00850e9c to 00850ebf has its CatchHandler @ 00850f60 */
  bVar2 = FUN_007ea510(param_1,param_3,"experiment",param_2 + 0x7bc,local_90,0,0);
  local_90[0] = local_90[0] & 0xffffffffffffff00;
  this[0x7bc] = (RNPlainTextProps)(bVar2 & 1);
                    /* try { // try from 00850ecc to 00850eef has its CatchHandler @ 00850f5c */
  bVar2 = FUN_007ea510(param_1,param_3,"lineHeightClippingIos",param_2 + 0x7bd,local_90,0,0);
  this[0x7bd] = (RNPlainTextProps)(bVar2 & 1);
  local_90[0] = CONCAT71(local_90[0]._1_7_,1);
                    /* try { // try from 00850f00 to 00850f23 has its CatchHandler @ 00850f58 */
  bVar2 = FUN_007ea510(param_1,param_3,"includeFontPadding",param_2 + 0x7be,local_90,0,0);
  this[0x7be] = (RNPlainTextProps)(bVar2 & 1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008510fc  facebook::react::RNPlainTextProps::getDiffPropsImplementationTarget =====

/* facebook::react::RNPlainTextProps::getDiffPropsImplementationTarget() const */

char * facebook::react::RNPlainTextProps::getDiffPropsImplementationTarget(void)

{
  return "RNPlainText";
}


// ===== 00851108  facebook::react::RNPlainTextProps::getDiffProps =====

/* facebook::react::RNPlainTextProps::getDiffProps(facebook::react::Props const*) const */

void facebook::react::RNPlainTextProps::getDiffProps(Props *param_1)

{
  Props *pPVar1;
  ulong uVar2;
  size_t sVar3;
  Props PVar4;
  Props PVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  dynamic *pdVar11;
  Props *in_x1;
  undefined4 *in_x8;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 extraout_w10;
  undefined1 extraout_w10_00;
  undefined1 extraout_w10_01;
  undefined1 extraout_w10_02;
  undefined1 extraout_w10_03;
  undefined1 extraout_w10_04;
  undefined1 extraout_w10_05;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  Props *pPVar18;
  Props *extraout_x10;
  Props *extraout_x10_00;
  Props *extraout_x10_01;
  Props *pPVar19;
  byte *__s2;
  Props *pPVar20;
  Props *extraout_x11;
  Props *extraout_x11_00;
  Props *extraout_x11_01;
  ulong uVar21;
  size_t sVar22;
  byte *pbVar23;
  byte *pbVar24;
  char *pcVar25;
  byte *pbVar26;
  float fVar27;
  undefined1 local_160 [16];
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  ulong local_110;
  undefined8 uStack_108;
  void *local_100;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90;
  undefined2 uStack_8f;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined4 uStack_84;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  puVar12 = local_160;
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (((DAT_009ba108 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_009ba108), iVar9 != 0)) {
    memset(&DAT_009b9948,0,0x7c0);
                    /* try { // try from 008520e4 to 008520e7 has its CatchHandler @ 00852168 */
    FUN_008522b0();
    __cxa_atexit(FUN_008523a4,&DAT_009b9948,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009ba108);
  }
  pPVar1 = (Props *)&DAT_009b9948;
  if (in_x1 != (Props *)0x0) {
    pPVar1 = in_x1;
  }
  if (pPVar1 == param_1) {
    local_78 = 0;
    local_98[0] = 5;
    uStack_88 = 0;
    uStack_87 = 0;
    uStack_86 = 0;
    uStack_85 = 0;
    uStack_84 = 0;
    local_80 = (void *)0x0;
    local_70 = 0x3f800000;
    *in_x8 = 5;
    local_90 = 0;
    uStack_8f = 0;
    uStack_8d = 0;
    uStack_8c = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = 0;
    *(undefined8 *)(in_x8 + 2) = 0;
    *(undefined8 *)(in_x8 + 4) = 0;
    *(undefined8 *)(in_x8 + 6) = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    in_x8[10] = 0x3f800000;
    folly::dynamic::folly::dynamic::destroy(local_98);
  }
  else {
    ::facebook::react::HostPlatformViewProps::getDiffProps(param_1);
    PVar4 = param_1[0x6e0];
    PVar5 = pPVar1[0x6e0];
    uVar21 = *(ulong *)(param_1 + 0x6e8);
    uVar13 = (ulong)((byte)PVar4 >> 1);
    uVar14 = uVar13;
    if (((byte)PVar4 & 1) != 0) {
      uVar14 = uVar21;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x6e8);
    }
    if (uVar14 == uVar2) {
      pPVar18 = pPVar1 + 0x6e1;
      if (((byte)PVar5 & 1) != 0) {
        pPVar18 = *(Props **)(pPVar1 + 0x6f0);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar20 = param_1 + 0x6e1;
          do {
            if (*pPVar20 != *pPVar18) goto LAB_00851224;
            uVar13 = uVar13 - 1;
            pPVar20 = pPVar20 + 1;
            pPVar18 = pPVar18 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x6f0);
        iVar9 = memcmp(pcVar25,pPVar18,uVar21);
        if (iVar9 != 0) goto LAB_0085125c;
      }
    }
    else {
LAB_00851224:
      if (((byte)PVar4 & 1) == 0) {
        uStack_a8 = *(undefined8 *)(param_1 + 0x6e8);
        local_b0 = *(ulong *)(param_1 + 0x6e0);
        local_a0 = *(void **)(param_1 + 0x6f0);
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x6f0);
LAB_0085125c:
                    /* try { // try from 0085125c to 0085126b has its CatchHandler @ 008521a0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_b0,pcVar25,uVar21);
      }
      local_98[0] = 6;
      uStack_88 = (undefined1)uStack_a8;
      uStack_87 = (undefined1)((ulong)uStack_a8 >> 8);
      uStack_86 = (undefined1)((ulong)uStack_a8 >> 0x10);
      uStack_85 = (undefined1)((ulong)uStack_a8 >> 0x18);
      uStack_84 = (undefined4)((ulong)uStack_a8 >> 0x20);
      local_90 = (undefined1)local_b0;
      uStack_8f = (undefined2)(local_b0 >> 8);
      uStack_8d = (undefined1)(local_b0 >> 0x18);
      uStack_8c = (undefined1)(local_b0 >> 0x20);
      uStack_8b = (undefined1)(local_b0 >> 0x28);
      uStack_8a = (undefined1)(local_b0 >> 0x30);
      uStack_89 = (undefined1)(local_b0 >> 0x38);
      local_80 = local_a0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
                    /* try { // try from 0085128c to 0085129f has its CatchHandler @ 00852254 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
    }
    iVar9 = *(int *)(param_1 + 0x6f8);
    if (iVar9 != *(int *)(pPVar1 + 0x6f8)) {
                    /* try { // try from 008512d0 to 0085133b has its CatchHandler @ 00852288 */
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 4;
      }
      *(long *)(piVar10 + 2) = (long)iVar9;
    }
    fVar27 = *(float *)(param_1 + 0x6fc);
    if ((fVar27 != *(float *)(pPVar1 + 0x6fc)) &&
       ((!NAN(fVar27) || (!NAN(*(float *)(pPVar1 + 0x6fc)))))) {
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 3;
      }
      *(double *)(piVar10 + 2) = (double)fVar27;
    }
    PVar4 = param_1[0x700];
    PVar5 = pPVar1[0x700];
    uVar21 = *(ulong *)(param_1 + 0x708);
    uVar13 = (ulong)((byte)PVar4 >> 1);
    uVar14 = uVar13;
    if (((byte)PVar4 & 1) != 0) {
      uVar14 = uVar21;
    }
    uVar2 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar2 = *(ulong *)(pPVar1 + 0x708);
    }
    if (uVar14 == uVar2) {
      pPVar18 = pPVar1 + 0x701;
      if (((byte)PVar5 & 1) != 0) {
        pPVar18 = *(Props **)(pPVar1 + 0x710);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar20 = param_1 + 0x701;
          do {
            if (*pPVar20 != *pPVar18) goto LAB_008513d8;
            uVar13 = uVar13 - 1;
            pPVar20 = pPVar20 + 1;
            pPVar18 = pPVar18 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x710);
        iVar9 = memcmp(pcVar25,pPVar18,uVar21);
        if (iVar9 != 0) goto LAB_00851410;
      }
    }
    else {
LAB_008513d8:
      if (((byte)PVar4 & 1) == 0) {
        uStack_c8 = *(undefined8 *)(param_1 + 0x708);
        local_d0 = *(ulong *)(param_1 + 0x700);
        local_c0 = *(void **)(param_1 + 0x710);
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x710);
LAB_00851410:
                    /* try { // try from 00851410 to 0085141f has its CatchHandler @ 0085219c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_d0,pcVar25,uVar21);
      }
      local_98[0] = 6;
      uStack_88 = (undefined1)uStack_c8;
      uStack_87 = (undefined1)((ulong)uStack_c8 >> 8);
      uStack_86 = (undefined1)((ulong)uStack_c8 >> 0x10);
      uStack_85 = (undefined1)((ulong)uStack_c8 >> 0x18);
      uStack_84 = (undefined4)((ulong)uStack_c8 >> 0x20);
      local_90 = (undefined1)local_d0;
      uStack_8f = (undefined2)(local_d0 >> 8);
      uStack_8d = (undefined1)(local_d0 >> 0x18);
      uStack_8c = (undefined1)(local_d0 >> 0x20);
      uStack_8b = (undefined1)(local_d0 >> 0x28);
      uStack_8a = (undefined1)(local_d0 >> 0x30);
      uStack_89 = (undefined1)(local_d0 >> 0x38);
      local_80 = local_c0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = (void *)0x0;
                    /* try { // try from 00851440 to 00851453 has its CatchHandler @ 00852234 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    PVar4 = param_1[0x718];
    PVar5 = pPVar1[0x718];
    sVar22 = *(size_t *)(param_1 + 0x720);
    uVar13 = (ulong)((byte)PVar4 >> 1);
    uVar14 = uVar13;
    if (((byte)PVar4 & 1) != 0) {
      uVar14 = sVar22;
    }
    uVar21 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar21 = *(ulong *)(pPVar1 + 0x720);
    }
    if (uVar14 == uVar21) {
      pPVar18 = pPVar1 + 0x719;
      if (((byte)PVar5 & 1) != 0) {
        pPVar18 = *(Props **)(pPVar1 + 0x728);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar20 = param_1 + 0x719;
          do {
            if (*pPVar20 != *pPVar18) goto LAB_008514e8;
            uVar13 = uVar13 - 1;
            pPVar20 = pPVar20 + 1;
            pPVar18 = pPVar18 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x728);
        iVar9 = memcmp(pcVar25,pPVar18,sVar22);
        if (iVar9 != 0) goto LAB_00851520;
      }
    }
    else {
LAB_008514e8:
      if (((byte)PVar4 & 1) == 0) {
        uStack_e8 = *(undefined8 *)(param_1 + 0x720);
        local_f0 = *(ulong *)(param_1 + 0x718);
        local_e0 = *(void **)(param_1 + 0x728);
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x728);
LAB_00851520:
                    /* try { // try from 00851520 to 0085152f has its CatchHandler @ 00852198 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_f0,pcVar25,sVar22);
      }
      local_98[0] = 6;
      uStack_88 = (undefined1)uStack_e8;
      uStack_87 = (undefined1)((ulong)uStack_e8 >> 8);
      uStack_86 = (undefined1)((ulong)uStack_e8 >> 0x10);
      uStack_85 = (undefined1)((ulong)uStack_e8 >> 0x18);
      uStack_84 = (undefined4)((ulong)uStack_e8 >> 0x20);
      local_90 = (undefined1)local_f0;
      uStack_8f = (undefined2)(local_f0 >> 8);
      uStack_8d = (undefined1)(local_f0 >> 0x18);
      uStack_8c = (undefined1)(local_f0 >> 0x20);
      uStack_8b = (undefined1)(local_f0 >> 0x28);
      uStack_8a = (undefined1)(local_f0 >> 0x30);
      uStack_89 = (undefined1)(local_f0 >> 0x38);
      local_80 = local_e0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = (void *)0x0;
                    /* try { // try from 00851550 to 00851563 has its CatchHandler @ 00852214 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
    }
    PVar4 = param_1[0x730];
    PVar5 = pPVar1[0x730];
    sVar22 = *(size_t *)(param_1 + 0x738);
    uVar13 = (ulong)((byte)PVar4 >> 1);
    uVar14 = uVar13;
    if (((byte)PVar4 & 1) != 0) {
      uVar14 = sVar22;
    }
    uVar21 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar21 = *(ulong *)(pPVar1 + 0x738);
    }
    if (uVar14 == uVar21) {
      pPVar18 = pPVar1 + 0x731;
      if (((byte)PVar5 & 1) != 0) {
        pPVar18 = *(Props **)(pPVar1 + 0x740);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar20 = param_1 + 0x731;
          do {
            if (*pPVar20 != *pPVar18) goto LAB_008515f8;
            uVar13 = uVar13 - 1;
            pPVar20 = pPVar20 + 1;
            pPVar18 = pPVar18 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x740);
        iVar9 = memcmp(pcVar25,pPVar18,sVar22);
        if (iVar9 != 0) goto LAB_00851630;
      }
    }
    else {
LAB_008515f8:
      if (((byte)PVar4 & 1) == 0) {
        uStack_108 = *(undefined8 *)(param_1 + 0x738);
        local_110 = *(ulong *)(param_1 + 0x730);
        local_100 = *(void **)(param_1 + 0x740);
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x740);
LAB_00851630:
                    /* try { // try from 00851630 to 0085163f has its CatchHandler @ 00852194 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_110,pcVar25,sVar22);
      }
      local_98[0] = 6;
      uStack_88 = (undefined1)uStack_108;
      uStack_87 = (undefined1)((ulong)uStack_108 >> 8);
      uStack_86 = (undefined1)((ulong)uStack_108 >> 0x10);
      uStack_85 = (undefined1)((ulong)uStack_108 >> 0x18);
      uStack_84 = (undefined4)((ulong)uStack_108 >> 0x20);
      local_90 = (undefined1)local_110;
      uStack_8f = (undefined2)(local_110 >> 8);
      uStack_8d = (undefined1)(local_110 >> 0x18);
      uStack_8c = (undefined1)(local_110 >> 0x20);
      uStack_8b = (undefined1)(local_110 >> 0x28);
      uStack_8a = (undefined1)(local_110 >> 0x30);
      uStack_89 = (undefined1)(local_110 >> 0x38);
      local_80 = local_100;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = (void *)0x0;
                    /* try { // try from 00851660 to 00851673 has its CatchHandler @ 008521f4 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
    }
    pbVar23 = *(byte **)(param_1 + 0x750);
    pbVar24 = *(byte **)(param_1 + 0x748);
    pbVar26 = *(byte **)(pPVar1 + 0x748);
    if ((long)pbVar23 - (long)pbVar24 == *(long *)(pPVar1 + 0x750) - (long)pbVar26) {
      for (; pbVar24 != pbVar23; pbVar24 = pbVar24 + 0x18) {
        bVar6 = *pbVar24;
        bVar7 = *pbVar26;
        sVar22 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar22 = *(size_t *)(pbVar24 + 8);
        }
        sVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar3 = *(size_t *)(pbVar26 + 8);
        }
        if (sVar22 != sVar3) goto LAB_0085174c;
        __s2 = *(byte **)(pbVar26 + 0x10);
        if ((bVar7 & 1) == 0) {
          __s2 = pbVar26 + 1;
        }
        if ((bVar6 & 1) == 0) {
          if (1 < bVar6) {
            uVar14 = 0;
            do {
              if (pbVar24[uVar14 + 1] != __s2[uVar14]) goto LAB_0085174c;
              uVar14 = uVar14 + 1;
            } while (bVar6 >> 1 != uVar14);
          }
        }
        else {
          iVar9 = memcmp(*(void **)(pbVar24 + 0x10),__s2,*(size_t *)(pbVar24 + 8));
          if (iVar9 != 0) goto LAB_0085174c;
        }
        pbVar26 = pbVar26 + 0x18;
      }
    }
    else {
LAB_0085174c:
                    /* try { // try from 0085174c to 00851757 has its CatchHandler @ 00852284 */
      FUN_00802138(local_98,param_1 + 0x748);
                    /* try { // try from 00851758 to 0085176b has its CatchHandler @ 00852274 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    PVar4 = param_1[0x760];
    PVar5 = pPVar1[0x760];
    pPVar18 = (Props *)(ulong)(byte)PVar5;
    sVar22 = *(size_t *)(param_1 + 0x768);
    uVar13 = (ulong)((byte)PVar4 >> 1);
    uVar14 = uVar13;
    if (((byte)PVar4 & 1) != 0) {
      uVar14 = sVar22;
    }
    uVar21 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar21 = *(ulong *)(pPVar1 + 0x768);
    }
    if (uVar14 == uVar21) {
      pPVar20 = pPVar1 + 0x761;
      if (((byte)PVar5 & 1) != 0) {
        pPVar20 = *(Props **)(pPVar1 + 0x770);
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar18 = param_1 + 0x761;
          do {
            if (*pPVar18 != *pPVar20) goto LAB_008517f0;
            uVar13 = uVar13 - 1;
            pPVar18 = pPVar18 + 1;
            pPVar20 = pPVar20 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x770);
        iVar9 = memcmp(pcVar25,pPVar20,sVar22);
        pPVar18 = extraout_x10;
        if (iVar9 != 0) goto LAB_00851828;
      }
    }
    else {
LAB_008517f0:
      if (((byte)PVar4 & 1) == 0) {
        uStack_128 = *(undefined8 *)(param_1 + 0x768);
        local_130 = *(ulong *)(param_1 + 0x760);
        local_120 = *(void **)(param_1 + 0x770);
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x770);
LAB_00851828:
                    /* try { // try from 00851828 to 00851837 has its CatchHandler @ 00852190 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_130,pcVar25,sVar22);
      }
      local_98[0] = 6;
      uStack_88 = (undefined1)uStack_128;
      uStack_87 = (undefined1)((ulong)uStack_128 >> 8);
      uStack_86 = (undefined1)((ulong)uStack_128 >> 0x10);
      uStack_85 = (undefined1)((ulong)uStack_128 >> 0x18);
      uStack_84 = (undefined4)((ulong)uStack_128 >> 0x20);
      local_90 = (undefined1)local_130;
      uStack_8f = (undefined2)(local_130 >> 8);
      uStack_8d = (undefined1)(local_130 >> 0x18);
      uStack_8c = (undefined1)(local_130 >> 0x20);
      uStack_8b = (undefined1)(local_130 >> 0x28);
      uStack_8a = (undefined1)(local_130 >> 0x30);
      uStack_89 = (undefined1)(local_130 >> 0x38);
      local_80 = local_120;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = (void *)0x0;
                    /* try { // try from 00851858 to 0085186b has its CatchHandler @ 008521d4 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
      pPVar18 = extraout_x10_00;
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
        pPVar18 = extraout_x10_01;
      }
    }
    uVar15 = SUB81(pPVar18,0);
    fVar27 = *(float *)(param_1 + 0x778);
    if ((fVar27 != *(float *)(pPVar1 + 0x778)) &&
       ((!NAN(fVar27) || (!NAN(*(float *)(pPVar1 + 0x778)))))) {
                    /* try { // try from 008518ac to 00851967 has its CatchHandler @ 00852288 */
      piVar10 = (int *)folly::dynamic::operator[]();
      uVar15 = extraout_w10;
      if (*piVar10 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 3;
        uVar15 = extraout_w10_00;
      }
      *(double *)(piVar10 + 2) = (double)fVar27;
    }
    fVar27 = *(float *)(param_1 + 0x77c);
    if ((fVar27 != *(float *)(pPVar1 + 0x77c)) &&
       ((!NAN(fVar27) || (!NAN(*(float *)(pPVar1 + 0x77c)))))) {
      piVar10 = (int *)folly::dynamic::operator[]();
      uVar15 = extraout_w10_01;
      if (*piVar10 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 3;
        uVar15 = extraout_w10_02;
      }
      *(double *)(piVar10 + 2) = (double)fVar27;
    }
    PVar4 = param_1[0x780];
    if (PVar4 != pPVar1[0x780]) {
      piVar10 = (int *)folly::dynamic::operator[]();
      uVar15 = extraout_w10_03;
      if (*piVar10 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 2;
        uVar15 = extraout_w10_04;
      }
      *(Props *)(piVar10 + 2) = PVar4;
    }
    iVar9 = *(int *)(param_1 + 0x784);
    if (iVar9 != *(int *)(pPVar1 + 0x784)) {
      if (iVar9 < 2) {
        if (iVar9 == 0) {
          puVar12 = local_160 + 0xc;
          local_90 = 8;
          uVar16 = 0x6f747561;
        }
        else {
          if (iVar9 != 1) {
LAB_00852154:
            if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00852164 to 00852167 has its CatchHandler @ 0085217c */
              abort();
            }
            goto LAB_008522ac;
          }
          puVar12 = local_160 + 0xc;
          local_90 = 8;
          uVar16 = 0x7466656c;
        }
      }
      else if (iVar9 == 2) {
        local_90 = 10;
        local_160[0xc] = 0x74;
        puVar12 = local_160 + 8;
        uVar16 = 0x68676972;
      }
      else if (iVar9 == 3) {
        local_160[0xc] = 0x65;
        puVar12 = local_160 + 4;
        uVar16 = 0x746e6563;
        local_160[8] = 0x72;
        local_90 = 0xc;
      }
      else {
        if (iVar9 != 4) goto LAB_00852154;
        local_160[4] = 0x79;
        local_160[0xc] = 0x69;
        uVar16 = 0x7473756a;
        local_160[8] = 0x66;
        local_90 = 0xe;
      }
      *puVar12 = 0;
      local_98[0] = 6;
      uStack_8b = local_160[0xc];
      uStack_8a = local_160[8];
      uStack_8f = (undefined2)uVar16;
      uStack_8d = (undefined1)((uint)uVar16 >> 0x10);
      uStack_8c = (undefined1)((uint)uVar16 >> 0x18);
      uStack_89 = local_160[4];
      uStack_88 = local_160[0];
      local_80 = (void *)0x0;
                    /* try { // try from 00851a90 to 00851aa3 has its CatchHandler @ 008521b0 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
      uVar15 = extraout_w10_05;
    }
    iVar9 = *(int *)(param_1 + 0x788);
    if (iVar9 != *(int *)(pPVar1 + 0x788)) {
      if (iVar9 < 2) {
        if (iVar9 == 0) {
          local_90 = 8;
          local_160[0xc] = 0x6f;
          uVar16 = 0x747561;
          puVar12 = local_160 + 8;
          uStack_8a = uVar15;
        }
        else {
          if (iVar9 != 1) {
LAB_00852118:
            if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00852128 to 0085212b has its CatchHandler @ 00852188 */
              abort();
            }
            goto LAB_008522ac;
          }
          puVar12 = local_160 + 0xc;
          local_90 = 6;
          uVar16 = 0x706f74;
          uStack_8a = uVar15;
        }
      }
      else if (iVar9 == 2) {
        local_90 = 0xc;
        local_160[0xc] = 0x74;
        uVar16 = 0x746f62;
        local_160[8] = 0x6f;
        puVar12 = local_160 + 4;
        uStack_8a = 0x6d;
      }
      else {
        if (iVar9 != 3) goto LAB_00852118;
        puVar12 = local_160 + 4;
        local_160[0xc] = 0x74;
        local_90 = 0xc;
        local_160[8] = 0x65;
        uVar16 = 0x6e6563;
        uStack_8a = 0x72;
      }
      *puVar12 = 0;
      local_98[0] = 6;
      uStack_8f = (undefined2)uVar16;
      uStack_8b = local_160[8];
      uStack_8d = (undefined1)((uint)uVar16 >> 0x10);
      uStack_8c = local_160[0xc];
      uStack_89 = local_160[4];
      uStack_88 = 0;
      uStack_87 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      local_80 = (void *)0x0;
                    /* try { // try from 00851ba4 to 00851bb7 has its CatchHandler @ 008521ac */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    PVar4 = param_1[0x790];
    PVar5 = pPVar1[0x790];
    sVar22 = *(size_t *)(param_1 + 0x798);
    uVar13 = (ulong)((byte)PVar4 >> 1);
    uVar14 = uVar13;
    if (((byte)PVar4 & 1) != 0) {
      uVar14 = sVar22;
    }
    uVar21 = (ulong)((byte)PVar5 >> 1);
    if (((byte)PVar5 & 1) != 0) {
      uVar21 = *(ulong *)(pPVar1 + 0x798);
    }
    if (uVar14 == uVar21) {
      pPVar20 = *(Props **)(pPVar1 + 0x7a0);
      pPVar18 = pPVar1 + 0x791;
      if (((byte)PVar5 & 1) != 0) {
        pPVar18 = pPVar20;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (1 < (byte)PVar4) {
          pPVar19 = param_1 + 0x791;
          do {
            pPVar20 = (Props *)(ulong)(byte)*pPVar19;
            if (*pPVar19 != *pPVar18) goto LAB_00851c3c;
            uVar13 = uVar13 - 1;
            pPVar19 = pPVar19 + 1;
            pPVar18 = pPVar18 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x7a0);
        iVar9 = memcmp(pcVar25,pPVar18,sVar22);
        pPVar20 = extraout_x11;
        if (iVar9 != 0) goto LAB_00851c74;
      }
    }
    else {
LAB_00851c3c:
      if (((byte)PVar4 & 1) == 0) {
        uStack_148 = *(undefined8 *)(param_1 + 0x798);
        local_150 = *(ulong *)(param_1 + 0x790);
        local_140 = *(void **)(param_1 + 0x7a0);
      }
      else {
        pcVar25 = *(char **)(param_1 + 0x7a0);
LAB_00851c74:
                    /* try { // try from 00851c74 to 00851c83 has its CatchHandler @ 0085218c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_150,pcVar25,sVar22);
      }
      local_98[0] = 6;
      uStack_88 = (undefined1)uStack_148;
      uStack_87 = (undefined1)((ulong)uStack_148 >> 8);
      uStack_86 = (undefined1)((ulong)uStack_148 >> 0x10);
      uStack_85 = (undefined1)((ulong)uStack_148 >> 0x18);
      uStack_84 = (undefined4)((ulong)uStack_148 >> 0x20);
      local_90 = (undefined1)local_150;
      uStack_8f = (undefined2)(local_150 >> 8);
      uStack_8d = (undefined1)(local_150 >> 0x18);
      uStack_8c = (undefined1)(local_150 >> 0x20);
      uStack_8b = (undefined1)(local_150 >> 0x28);
      uStack_8a = (undefined1)(local_150 >> 0x30);
      uStack_89 = (undefined1)(local_150 >> 0x38);
      local_80 = local_140;
      local_150 = 0;
      uStack_148 = 0;
      local_140 = (void *)0x0;
                    /* try { // try from 00851ca4 to 00851cb7 has its CatchHandler @ 008521b4 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
      pPVar20 = extraout_x11_00;
      if ((local_150 & 1) != 0) {
        operator_delete(local_140);
        pPVar20 = extraout_x11_01;
      }
    }
    uVar16 = SUB84(pPVar20,0);
    iVar9 = *(int *)(param_1 + 0x7a8);
    if (iVar9 != *(int *)(pPVar1 + 0x7a8)) {
      if (iVar9 < 2) {
        if (iVar9 == 0) {
          puVar12 = local_160 + 0xc;
          local_90 = 8;
          uVar17 = 0x656e6f6e;
        }
        else {
          if (iVar9 != 1) {
LAB_0085212c:
            if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0085213c to 0085213f has its CatchHandler @ 00852184 */
              abort();
            }
            goto LAB_008522ac;
          }
          uVar17 = 0x65707075;
LAB_00851d80:
          local_160[0xc] = 0x72;
          puVar12 = local_160 + 8;
          local_90 = 0x12;
          uVar16 = 0x65736163;
        }
      }
      else {
        if (iVar9 == 2) {
          uVar17 = 0x65776f6c;
          goto LAB_00851d80;
        }
        if (iVar9 != 3) goto LAB_0085212c;
        local_160[0xc] = 0x74;
        puVar12 = local_160 + 4;
        local_160[8] = 0x65;
        local_90 = 0x14;
        uVar17 = 0x69706163;
        uVar16 = 0x7a696c61;
      }
      *puVar12 = 0;
      local_98[0] = 6;
      uStack_8b = local_160[0xc];
      uStack_8f = (undefined2)uVar17;
      uStack_8d = (undefined1)((uint)uVar17 >> 0x10);
      uStack_8c = (undefined1)((uint)uVar17 >> 0x18);
      uStack_8a = (undefined1)uVar16;
      uStack_89 = (undefined1)((uint)uVar16 >> 8);
      uStack_88 = (undefined1)((uint)uVar16 >> 0x10);
      uStack_87 = (undefined1)((uint)uVar16 >> 0x18);
      uStack_86 = local_160[8];
      uStack_85 = local_160[4];
      uStack_84 = 0;
      local_80 = (void *)0x0;
                    /* try { // try from 00851dc0 to 00851dd3 has its CatchHandler @ 008521a8 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    iVar9 = *(int *)(param_1 + 0x7ac);
    if (iVar9 != *(int *)(pPVar1 + 0x7ac)) {
                    /* try { // try from 00851df4 to 00851e07 has its CatchHandler @ 00852288 */
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 4) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 4;
      }
      *(long *)(piVar10 + 2) = (long)iVar9;
    }
    iVar9 = *(int *)(param_1 + 0x7b0);
    if (iVar9 != *(int *)(pPVar1 + 0x7b0)) {
      if (iVar9 < 2) {
        if (iVar9 == 0) {
          puVar12 = local_160 + 0xc;
          local_90 = 8;
          uVar16 = 0x64616568;
        }
        else {
          if (iVar9 != 1) {
LAB_00852140:
            if (*(long *)(lVar8 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00852150 to 00852153 has its CatchHandler @ 00852180 */
              abort();
            }
            goto LAB_008522ac;
          }
          local_90 = 0xc;
          local_160[0xc] = 0x6c;
          puVar12 = local_160 + 8;
          uVar16 = 0x6464696d;
        }
      }
      else if (iVar9 == 2) {
        puVar12 = local_160 + 0xc;
        local_90 = 8;
        uVar16 = 0x6c696174;
      }
      else {
        if (iVar9 != 3) goto LAB_00852140;
        puVar12 = local_160 + 0xc;
        local_90 = 8;
        uVar16 = 0x70696c63;
      }
      *puVar12 = 0;
      local_98[0] = 6;
      uStack_8b = local_160[0xc];
      uStack_8f = (undefined2)uVar16;
      uStack_8d = (undefined1)((uint)uVar16 >> 0x10);
      uStack_8c = (undefined1)((uint)uVar16 >> 0x18);
      uStack_8a = 0x65;
      uStack_89 = local_160[8];
      uStack_88 = 0;
      uStack_87 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      local_80 = (void *)0x0;
                    /* try { // try from 00851ee4 to 00851ef7 has its CatchHandler @ 008521a4 */
      pdVar11 = (dynamic *)folly::dynamic::operator[]();
      folly::dynamic::operator=(pdVar11,(dynamic *)local_98);
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    PVar4 = param_1[0x7b4];
    if (PVar4 != pPVar1[0x7b4]) {
                    /* try { // try from 00851f18 to 0085205f has its CatchHandler @ 00852288 */
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 2;
      }
      *(Props *)(piVar10 + 2) = PVar4;
    }
    fVar27 = *(float *)(param_1 + 0x7b8);
    if ((fVar27 != *(float *)(pPVar1 + 0x7b8)) &&
       ((!NAN(fVar27) || (!NAN(*(float *)(pPVar1 + 0x7b8)))))) {
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 3) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 3;
      }
      *(double *)(piVar10 + 2) = (double)fVar27;
    }
    PVar4 = param_1[0x7bc];
    if (PVar4 != pPVar1[0x7bc]) {
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 2;
      }
      *(Props *)(piVar10 + 2) = PVar4;
    }
    PVar4 = param_1[0x7bd];
    if (PVar4 != pPVar1[0x7bd]) {
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 2;
      }
      *(Props *)(piVar10 + 2) = PVar4;
    }
    PVar4 = param_1[0x7be];
    if (PVar4 != pPVar1[0x7be]) {
      piVar10 = (int *)folly::dynamic::operator[]();
      if (*piVar10 != 2) {
        folly::dynamic::folly::dynamic::destroy(piVar10);
        *piVar10 = 2;
      }
      *(Props *)(piVar10 + 2) = PVar4;
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_008522ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008522b0  FUN_008522b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008522b0(void)

{
  FUN_00788b10(&DAT_009b9948,PTR_PTR_0099e4d0 + 0x10);
  DAT_009b9f24 = 0;
  DAT_009b9f28 = 0;
  DAT_009b9f88 = 0;
  DAT_009b9f90 = 0;
  DAT_009b9ff0 = 0;
  DAT_009ba000 = 0;
  DAT_009ba004 = 0;
  DAT_009ba008 = 0;
  DAT_009ba00c = 0;
  DAT_009ba010 = 0;
  DAT_009ba014 = 0;
  DAT_009ba018 = 0;
  DAT_009ba01c = 0;
  DAT_009ba020 = 0;
  DAT_009ba024 = 0;
  DAT_009b9ff8 = 0;
  DAT_009b9ffc = 0;
  DAT_009ba028 = 0;
  DAT_009b9948 = PTR_vtable_0099e4c8 + 0x20;
  DAT_009ba044 = 0x41600000;
  DAT_009ba0cc = 0;
  DAT_009ba0f8 = 2;
  DAT_009ba038 = 0;
  DAT_009ba030 = 0;
  DAT_009ba040 = 0;
  uRam00000000009ba050 = 0;
  _DAT_009ba048 = 0;
  uRam00000000009ba060 = 0;
  _DAT_009ba058 = 0;
  uRam00000000009ba070 = 0;
  _DAT_009ba068 = 0;
  uRam00000000009ba080 = 0;
  _DAT_009ba078 = 0;
  uRam00000000009ba090 = 0;
  _DAT_009ba088 = 0;
  uRam00000000009ba0a0 = 0;
  _DAT_009ba098 = 0;
  uRam00000000009ba0b0 = 0;
  _DAT_009ba0a8 = 0;
  uRam00000000009ba0c0 = 0;
  _DAT_009ba0b8 = 0;
  DAT_009ba0c8 = 0;
  uRam00000000009ba0e0 = 0;
  _DAT_009ba0d8 = 0;
  uRam00000000009ba0f0 = 0;
  _DAT_009ba0e8 = 0;
  DAT_009ba0fc = 1;
  DAT_009ba100 = 0;
  DAT_009ba104 = 0;
  DAT_009ba106 = 1;
  return;
}


// ===== 008523a4  FUN_008523a4 =====

void FUN_008523a4(undefined8 param_1)

{
  FUN_0084eb14(param_1,PTR_PTR_0099e4d0);
  return;
}


// ===== 008523b0  FUN_008523b0 =====

void FUN_008523b0(void *param_1)

{
  FUN_0084eb14(param_1,PTR_PTR_0099e4d0);
  operator_delete(param_1);
  return;
}


// ===== 008523dc  FUN_008523dc =====

void FUN_008523dc(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  byte local_40 [8];
  ulong local_38;
  int *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00807a6c(local_40);
  uVar1 = (ulong)(local_40[0] >> 1);
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if ((long)uVar1 < 6) {
    if (uVar1 == 4) {
      piVar2 = (int *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        piVar2 = local_30;
      }
      if (*piVar2 == 0x6f747561) {
        *param_2 = 0;
      }
      else {
        if (*piVar2 != 0x7466656c) goto LAB_0085258c;
        *param_2 = 1;
      }
joined_r0x008524c4:
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
      if (*(long *)(lVar3 + 0x28) == local_28) {
        return;
      }
      goto LAB_008525cc;
    }
    if (uVar1 == 5) {
      piVar2 = (int *)((ulong)local_40 | 1);
      if ((local_40[0] & 1) != 0) {
        piVar2 = local_30;
      }
      if (*piVar2 == 0x68676972 && (char)piVar2[1] == 't') {
        *param_2 = 2;
        goto joined_r0x008524c4;
      }
    }
  }
  else if (uVar1 == 6) {
    piVar2 = (int *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      piVar2 = local_30;
    }
    if (*piVar2 == 0x746e6563 && (short)piVar2[1] == 0x7265) {
      *param_2 = 3;
      goto joined_r0x008524c4;
    }
  }
  else if (uVar1 == 7) {
    piVar2 = (int *)((ulong)local_40 | 1);
    if ((local_40[0] & 1) != 0) {
      piVar2 = local_30;
    }
    if (*piVar2 == 0x7473756a && *(int *)((long)piVar2 + 3) == 0x79666974) {
      *param_2 = 4;
      goto joined_r0x008524c4;
    }
  }
LAB_0085258c:
  if (*(long *)(lVar3 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0085259c to 0085259f has its CatchHandler @ 008525a0 */
    abort();
  }
LAB_008525cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008525d0  FUN_008525d0 =====

void FUN_008525d0(undefined8 param_1,undefined4 *param_2)

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
  FUN_00807a6c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 3) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if ((short)*piVar2 == 0x6f74 && *(char *)((long)piVar2 + 2) == 'p') {
      *param_2 = 1;
      goto joined_r0x00852730;
    }
  }
  else {
    if (uVar1 == 6) {
      piVar2 = (int *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        piVar2 = local_40;
      }
      if (*piVar2 == 0x74746f62 && (short)piVar2[1] == 0x6d6f) {
        *param_2 = 2;
      }
      else {
        if (*piVar2 != 0x746e6563 || (short)piVar2[1] != 0x7265) goto LAB_00852738;
        *param_2 = 3;
      }
joined_r0x00852730:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_00852778;
    }
    if (uVar1 == 4) {
      piVar2 = (int *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        piVar2 = local_40;
      }
      if (*piVar2 == 0x6f747561) {
        *param_2 = 0;
        goto joined_r0x00852730;
      }
    }
  }
LAB_00852738:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00852748 to 0085274b has its CatchHandler @ 0085274c */
    abort();
  }
LAB_00852778:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085277c  FUN_0085277c =====

void FUN_0085277c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  byte local_50 [8];
  ulong local_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00807a6c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 10) {
    plVar2 = (long *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      plVar2 = local_40;
    }
    if (*plVar2 == 0x696c617469706163 && (short)plVar2[1] == 0x657a) {
      *param_2 = 3;
      goto joined_r0x008528f4;
    }
  }
  else {
    if (uVar1 == 9) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if (*plVar2 == 0x7361637265707075 && (char)plVar2[1] == 'e') {
        *param_2 = 1;
      }
      else {
        if (*plVar2 != 0x7361637265776f6c || (char)plVar2[1] != 'e') goto LAB_008528fc;
        *param_2 = 2;
      }
joined_r0x008528f4:
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if (*(long *)(lVar3 + 0x28) == local_38) {
        return;
      }
      goto LAB_0085293c;
    }
    if (uVar1 == 4) {
      plVar2 = (long *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        plVar2 = local_40;
      }
      if ((int)*plVar2 == 0x656e6f6e) {
        *param_2 = 0;
        goto joined_r0x008528f4;
      }
    }
  }
LAB_008528fc:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0085290c to 0085290f has its CatchHandler @ 00852910 */
    abort();
  }
LAB_0085293c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00852940  FUN_00852940 =====

void FUN_00852940(undefined8 param_1,undefined4 *param_2)

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
  FUN_00807a6c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 6) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x6464696d && (short)piVar2[1] == 0x656c) {
      *param_2 = 1;
      goto joined_r0x00852a3c;
    }
  }
  else if (uVar1 == 4) {
    piVar2 = (int *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      piVar2 = local_40;
    }
    if (*piVar2 == 0x64616568) {
      *param_2 = 0;
    }
    else if (*piVar2 == 0x6c696174) {
      *param_2 = 2;
    }
    else {
      if (*piVar2 != 0x70696c63) goto LAB_00852a78;
      *param_2 = 3;
    }
joined_r0x00852a3c:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return;
    }
    goto LAB_00852ab8;
  }
LAB_00852a78:
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00852a88 to 00852a8b has its CatchHandler @ 00852a8c */
    abort();
  }
LAB_00852ab8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00852abc  facebook::react::PlainTextMeasurementsManager::measure =====

/* facebook::react::PlainTextMeasurementsManager::measure(int, facebook::react::RNPlainTextProps
   const&, facebook::react::LayoutConstraints) const */

undefined4 __thiscall
facebook::react::PlainTextMeasurementsManager::measure
          (PlainTextMeasurementsManager *this,undefined4 param_1,undefined8 param_2,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 extraout_var;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> abStack_a0 [48];
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_009ba118 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_009ba118), iVar3 != 0)) {
                    /* try { // try from 00852bf4 to 00852c0b has its CatchHandler @ 00852cac */
    ::facebook::jni::facebook::jni::findClassStatic
              (abStack_a0,"com/facebook/react/fabric/FabricUIManager");
    DAT_009ba110 = FUN_00852cfc(abStack_a0);
    __cxa_guard_release(&DAT_009ba118);
  }
  if (((DAT_009ba128 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_009ba128), iVar3 != 0)) {
                    /* try { // try from 00852c34 to 00852c43 has its CatchHandler @ 00852c98 */
    ::facebook::jni::facebook::jni::make_jstring(abStack_a0,"RNPlainText");
                    /* try { // try from 00852c44 to 00852c53 has its CatchHandler @ 00852c88 */
    FUN_00852d50(&DAT_009ba120,abStack_a0);
    jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref(abStack_a0);
    __cxa_atexit(FUN_00852dc0,&DAT_009ba120,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009ba128);
  }
  fVar8 = *param_4;
  fVar7 = param_4[1];
  fVar10 = param_4[2];
  fVar9 = param_4[3];
  FUN_008535d0(abStack_a0,param_2);
                    /* try { // try from 00852b2c to 00852b37 has its CatchHandler @ 00852cc0 */
  FUN_00852e00(&local_70,abStack_a0);
  folly::dynamic::folly::dynamic::destroy(abStack_a0);
  uVar2 = DAT_009ba120;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00852b50 to 00852b8f has its CatchHandler @ 00852cd4 */
  uVar4 = ::facebook::jni::Environment::facebook::jni::Environment::current();
  FUN_008547b0((double)fVar8,(double)fVar10,(double)fVar7,(double)fVar9,uVar4,uVar6,DAT_009ba110,
               param_1,uVar2,0,local_70,0);
  ::facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_70 != 0) {
                    /* try { // try from 00852b94 to 00852ba7 has its CatchHandler @ 00852cd0 */
    plVar5 = (long *)::facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar5 + 0xb8))(plVar5,local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return extraout_var;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00852cfc  FUN_00852cfc =====

long FUN_00852cfc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))(plVar1,*param_1,"measure",PTR_kDescriptor_0099e560);
  facebook::jni::facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00852d50  FUN_00852d50 =====

void FUN_00852d50(long *param_1,long *param_2)

{
  long *plVar1;
  bad_alloc *this;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar2);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar2 == 0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,PTR_typeinfo_0099e570,PTR__bad_alloc_0099e568);
    }
  }
  *param_1 = lVar2;
  return;
}


// ===== 00852dc0  FUN_00852dc0 =====

void FUN_00852dc0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00852dd8 to 00852deb has its CatchHandler @ 00852dfc */
    plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb0))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 00852e00  FUN_00852e00 =====

/* WARNING: Removing unreachable block (ram,0x00852ee4) */
/* WARNING: Removing unreachable block (ram,0x00853184) */

void FUN_00852e00(long *param_1,dynamic *param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  bad_alloc *this;
  HybridData *extraout_x1;
  undefined8 uVar13;
  long local_a0;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((*PTR_isHybrid_0099e4f0 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_isHybrid_0099e4f0), iVar5 != 0)) {
                    /* try { // try from 00853260 to 00853277 has its CatchHandler @ 00853434 */
    FUN_00854264(&local_80);
    local_78 = local_80;
    bVar4 = facebook::jni::detail::HybridClassBase::isHybridClassBase(&local_78);
    *PTR_isHybrid_0099e4e8 = bVar4 & 1;
    __cxa_guard_release(PTR_isHybrid_0099e4f0);
  }
  plVar6 = (long *)operator_new(0x78);
  *plVar6 = (long)&PTR_FUN_0098ed98;
  *(undefined1 *)(plVar6 + 1) = 0;
                    /* try { // try from 00852e5c to 00852e67 has its CatchHandler @ 00853504 */
  folly::dynamic::dynamic((dynamic *)(plVar6 + 2),param_2);
  puVar3 = PTR_isHybrid_0099e4e8;
  *plVar6 = (long)&PTR_FUN_0098ed08;
  *(undefined1 *)(plVar6 + 8) = 0;
  cVar1 = *puVar3;
  *(undefined1 *)(plVar6 + 0xe) = 0;
  if (cVar1 == '\0') {
                    /* try { // try from 00852fb8 to 00852fbf has its CatchHandler @ 008534a0 */
    facebook::jni::detail::HybridData::facebook::jni::detail::HybridData::create(&local_88);
    lVar9 = local_88;
                    /* try { // try from 00852fc4 to 00852fdf has its CatchHandler @ 0085352c */
    plVar8 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar8 + 200))(plVar8,lVar9);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00852fe4 to 00852fef has its CatchHandler @ 00853484 */
    local_70 = lVar9;
    facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
              ((detail *)&local_70,extraout_x1);
                    /* try { // try from 00852ff4 to 00852fff has its CatchHandler @ 00853458 */
    local_68 = plVar6;
    facebook::jni::detail::HybridDestructor::facebook::jni::detail::HybridDestructor::
    setNativePointer(&local_60,&local_68);
    plVar6 = local_68;
    local_68 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (local_60 != (long *)0x0) {
                    /* try { // try from 00853020 to 00853033 has its CatchHandler @ 008534c4 */
      plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,local_60);
    }
    lVar9 = local_70;
    if (local_70 != 0) {
                    /* try { // try from 0085303c to 0085304f has its CatchHandler @ 008534c0 */
      plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar9);
    }
    lVar9 = local_88;
                    /* try { // try from 00853054 to 0085306f has its CatchHandler @ 00853524 */
    plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar6 + 200))(plVar6,lVar9);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
                    /* try { // try from 00853074 to 0085308f has its CatchHandler @ 0085351c */
    plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar10 = (**(code **)(*plVar6 + 200))(plVar6,lVar9);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
    local_70 = lVar10;
    if (((DAT_009ba1c8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_009ba1c8), iVar5 != 0)) {
                    /* try { // try from 00853374 to 0085337f has its CatchHandler @ 008533cc */
      FUN_0085432c(&DAT_009ba1c0);
      __cxa_guard_release(&DAT_009ba1c8);
    }
    if (((DAT_009ba1d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_009ba1d8), iVar5 != 0)) {
                    /* try { // try from 008533a0 to 008533a3 has its CatchHandler @ 008533b8 */
      DAT_009ba1d0 = FUN_0085471c();
      __cxa_guard_release(&DAT_009ba1d8);
    }
    lVar10 = local_70;
    uVar7 = DAT_009ba1d0;
                    /* try { // try from 008530c0 to 008530db has its CatchHandler @ 00853514 */
    plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    plVar6 = (long *)(**(code **)(*plVar6 + 200))(plVar6,lVar10);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
    local_68 = plVar6;
                    /* try { // try from 008530e0 to 0085310b has its CatchHandler @ 00853554 */
    uVar11 = facebook::jni::Environment::facebook::jni::Environment::current();
    uVar13 = DAT_009ba1c0;
    plVar8 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    plVar8 = (long *)(**(code **)(*plVar8 + 200))(plVar8,plVar6);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
    local_60 = plVar8;
                    /* try { // try from 00853110 to 00853123 has its CatchHandler @ 00853448 */
    local_a0 = _JNIEnv::NewObject(uVar11,uVar13,uVar7,plVar8);
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 0085312c to 0085313f has its CatchHandler @ 008534bc */
      plVar12 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar12 + 0xb8))(plVar12,plVar8);
    }
                    /* try { // try from 00853148 to 0085314b has its CatchHandler @ 00853554 */
    facebook::jni::facebook::jni::throwCppExceptionIf(local_a0 == 0);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 00853150 to 00853163 has its CatchHandler @ 008534b8 */
      plVar8 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,plVar6);
    }
    if (lVar10 != 0) {
                    /* try { // try from 00853168 to 0085317b has its CatchHandler @ 008534b4 */
      plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar10);
    }
    if (lVar9 != 0) {
                    /* try { // try from 008531a4 to 008531b7 has its CatchHandler @ 008534ac */
      plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar9);
    }
    if (local_88 != 0) {
                    /* try { // try from 008531c4 to 008531d7 has its CatchHandler @ 008534a8 */
      plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,local_88);
    }
  }
  else {
    if (((DAT_009ba188 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_009ba188), iVar5 != 0)) {
                    /* try { // try from 008532a8 to 008532b3 has its CatchHandler @ 00853420 */
      FUN_0085432c(&DAT_009ba180);
      __cxa_guard_release(&DAT_009ba188);
    }
    if (((DAT_009ba198 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_009ba198), iVar5 != 0)) {
                    /* try { // try from 008532d4 to 008532d7 has its CatchHandler @ 0085340c */
      DAT_009ba190 = FUN_0085448c();
      __cxa_guard_release(&DAT_009ba198);
    }
    uVar13 = DAT_009ba190;
                    /* try { // try from 00852eb8 to 00852edb has its CatchHandler @ 00853588 */
    uVar7 = facebook::jni::Environment::facebook::jni::Environment::current();
    local_a0 = _JNIEnv::NewObject(uVar7,DAT_009ba180,uVar13);
    facebook::jni::facebook::jni::throwCppExceptionIf(local_a0 == 0);
                    /* try { // try from 00852efc to 00852f17 has its CatchHandler @ 00853584 */
    plVar8 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar8 + 200))(plVar8,local_a0);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
    puVar3 = PTR_holderField_0099e530;
    local_70 = lVar9;
    if (((*PTR_holderField_0099e538 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_holderField_0099e538), iVar5 != 0)) {
      facebook::jni::JObject::getClass();
                    /* try { // try from 00853308 to 0085330f has its CatchHandler @ 008533e0 */
      uVar13 = facebook::jni::detail::getDestructorField(&local_60);
      *(undefined8 *)puVar3 = uVar13;
      facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
      ~base_owned_ref((base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>
                       *)&local_60);
      __cxa_guard_release(PTR_holderField_0099e538);
    }
    lVar9 = local_70;
    uVar13 = *(undefined8 *)puVar3;
                    /* try { // try from 00852f3c to 00852f53 has its CatchHandler @ 00853550 */
    plVar8 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    local_68 = (long *)(**(code **)(*plVar8 + 0x2f8))(plVar8,lVar9,uVar13);
                    /* try { // try from 00852f58 to 00852f63 has its CatchHandler @ 008534c8 */
    local_60 = plVar6;
    facebook::jni::detail::HybridDestructor::facebook::jni::detail::HybridDestructor::
    setNativePointer(&local_68,&local_60);
    plVar6 = local_60;
    local_60 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_68;
    if (local_68 != (long *)0x0) {
                    /* try { // try from 00852f84 to 00852f97 has its CatchHandler @ 008534fc */
      plVar8 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar8 + 0xb8))(plVar8,plVar6);
    }
    lVar9 = local_70;
    if (local_70 != 0) {
                    /* try { // try from 00852fa0 to 00852fb3 has its CatchHandler @ 008534f8 */
      plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
      (**(code **)(*plVar6 + 0xb8))(plVar6,lVar9);
    }
  }
  if (local_a0 == 0) {
    *param_1 = 0;
  }
  else {
                    /* try { // try from 008531e4 to 008531ff has its CatchHandler @ 008535a8 */
    plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    lVar9 = (**(code **)(*plVar6 + 200))(plVar6,local_a0);
    facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
    if (lVar9 == 0) {
      this = (bad_alloc *)__cxa_allocate_exception(8);
      std::bad_alloc::bad_alloc(this);
      if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 0085334c to 00853363 has its CatchHandler @ 008535a8 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,PTR_typeinfo_0099e570,PTR__bad_alloc_0099e568);
      }
      goto LAB_008535cc;
    }
    *param_1 = lVar9;
                    /* try { // try from 00853208 to 0085321b has its CatchHandler @ 0085354c */
    plVar6 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar6 + 0xb8))(plVar6,local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_008535cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008535d0  FUN_008535d0 =====

void FUN_008535d0(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  dynamic *pdVar5;
  int *piVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  ulong *puVar10;
  ulong *puVar11;
  float fVar12;
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [4];
  ulong local_1a0;
  undefined8 uStack_198;
  dynamic *local_190;
  ulong local_180;
  ulong uStack_178;
  void *local_170;
  ulong local_160;
  undefined8 uStack_158;
  dynamic *local_150;
  ulong local_140;
  undefined8 uStack_138;
  dynamic *local_130;
  ulong local_120;
  undefined8 uStack_118;
  dynamic *local_110;
  ulong local_100;
  undefined8 uStack_f8;
  dynamic *local_f0;
  undefined4 local_e8 [2];
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  int local_b8 [2];
  undefined1 local_b0;
  undefined4 uStack_af;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  dynamic *local_a0;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_2 + 0x6e0);
  *param_1 = 5;
  uVar7 = *(ulong *)(param_2 + 0x6e8);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[10] = 0x3f800000;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = uVar7;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if (uVar1 != 0) {
    if ((bVar3 & 1) == 0) {
      uStack_f8 = *(undefined8 *)(param_2 + 0x6e8);
      local_100 = *(ulong *)(param_2 + 0x6e0);
      local_f0 = *(dynamic **)(param_2 + 0x6f0);
    }
    else {
                    /* try { // try from 00853664 to 0085366b has its CatchHandler @ 00853d80 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_100,*(char **)(param_2 + 0x6f0),uVar7);
    }
    local_b8[0] = 6;
    uStack_a8 = (undefined2)uStack_f8;
    uStack_a6 = (undefined1)((ulong)uStack_f8 >> 0x10);
    uStack_a5 = (undefined1)((ulong)uStack_f8 >> 0x18);
    uStack_a4 = (undefined4)((ulong)uStack_f8 >> 0x20);
    local_b0 = (undefined1)local_100;
    uStack_af = (undefined4)(local_100 >> 8);
    uStack_ab = (undefined1)(local_100 >> 0x28);
    uStack_aa = (undefined2)(local_100 >> 0x30);
    local_a0 = local_f0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = (dynamic *)0x0;
                    /* try { // try from 0085368c to 0085369f has its CatchHandler @ 00853e0c */
    pdVar5 = (dynamic *)folly::dynamic::operator[](param_1,&DAT_003697cb,&DAT_003697cf);
    folly::dynamic::operator=(pdVar5,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if ((local_100 & 1) != 0) {
      operator_delete(local_f0);
    }
  }
  fVar12 = *(float *)(param_2 + 0x6fc);
  if (fVar12 != 14.0) {
                    /* try { // try from 008536d0 to 008536e3 has its CatchHandler @ 00853e2c */
    piVar6 = (int *)folly::dynamic::operator[](param_1,"fontSize","");
    if (*piVar6 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 3;
    }
    *(double *)(piVar6 + 2) = (double)fVar12;
  }
  bVar3 = *(byte *)(param_2 + 0x700);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x708);
  }
  if (uVar1 != 0) {
    if ((bVar3 & 1) == 0) {
      uStack_118 = *(undefined8 *)(param_2 + 0x708);
      local_120 = *(ulong *)(param_2 + 0x700);
      local_110 = *(dynamic **)(param_2 + 0x710);
    }
    else {
                    /* try { // try from 00853744 to 0085374b has its CatchHandler @ 00853d7c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_120,*(char **)(param_2 + 0x710),*(ulong *)(param_2 + 0x708));
    }
    local_b8[0] = 6;
    uStack_a8 = (undefined2)uStack_118;
    uStack_a6 = (undefined1)((ulong)uStack_118 >> 0x10);
    uStack_a5 = (undefined1)((ulong)uStack_118 >> 0x18);
    uStack_a4 = (undefined4)((ulong)uStack_118 >> 0x20);
    local_b0 = (undefined1)local_120;
    uStack_af = (undefined4)(local_120 >> 8);
    uStack_ab = (undefined1)(local_120 >> 0x28);
    uStack_aa = (undefined2)(local_120 >> 0x30);
    local_a0 = local_110;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = (dynamic *)0x0;
                    /* try { // try from 0085376c to 0085377f has its CatchHandler @ 00853dec */
    pdVar5 = (dynamic *)folly::dynamic::operator[](param_1,"fontFamily","");
    folly::dynamic::operator=(pdVar5,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if ((local_120 & 1) != 0) {
      operator_delete(local_110);
    }
  }
  bVar3 = *(byte *)(param_2 + 0x718);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x720);
  }
  if (uVar1 != 0) {
    if ((bVar3 & 1) == 0) {
      uStack_138 = *(undefined8 *)(param_2 + 0x720);
      local_140 = *(ulong *)(param_2 + 0x718);
      local_130 = *(dynamic **)(param_2 + 0x728);
    }
    else {
                    /* try { // try from 008537d8 to 008537df has its CatchHandler @ 00853d78 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_140,*(char **)(param_2 + 0x728),*(ulong *)(param_2 + 0x720));
    }
    local_b8[0] = 6;
    uStack_a8 = (undefined2)uStack_138;
    uStack_a6 = (undefined1)((ulong)uStack_138 >> 0x10);
    uStack_a5 = (undefined1)((ulong)uStack_138 >> 0x18);
    uStack_a4 = (undefined4)((ulong)uStack_138 >> 0x20);
    local_b0 = (undefined1)local_140;
    uStack_af = (undefined4)(local_140 >> 8);
    uStack_ab = (undefined1)(local_140 >> 0x28);
    uStack_aa = (undefined2)(local_140 >> 0x30);
    local_a0 = local_130;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = (dynamic *)0x0;
                    /* try { // try from 00853800 to 00853813 has its CatchHandler @ 00853dcc */
    pdVar5 = (dynamic *)folly::dynamic::operator[](param_1,"fontWeight","");
    folly::dynamic::operator=(pdVar5,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
  }
  bVar3 = *(byte *)(param_2 + 0x730);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x738);
  }
  if (uVar1 != 0) {
    if ((bVar3 & 1) == 0) {
      uStack_158 = *(undefined8 *)(param_2 + 0x738);
      local_160 = *(ulong *)(param_2 + 0x730);
      local_150 = *(dynamic **)(param_2 + 0x740);
    }
    else {
                    /* try { // try from 0085386c to 00853873 has its CatchHandler @ 00853d74 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_160,*(char **)(param_2 + 0x740),*(ulong *)(param_2 + 0x738));
    }
    local_b8[0] = 6;
    uStack_a8 = (undefined2)uStack_158;
    uStack_a6 = (undefined1)((ulong)uStack_158 >> 0x10);
    uStack_a5 = (undefined1)((ulong)uStack_158 >> 0x18);
    uStack_a4 = (undefined4)((ulong)uStack_158 >> 0x20);
    local_b0 = (undefined1)local_160;
    uStack_af = (undefined4)(local_160 >> 8);
    uStack_ab = (undefined1)(local_160 >> 0x28);
    uStack_aa = (undefined2)(local_160 >> 0x30);
    local_a0 = local_150;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = (dynamic *)0x0;
                    /* try { // try from 00853894 to 008538a7 has its CatchHandler @ 00853dac */
    pdVar5 = (dynamic *)folly::dynamic::operator[](param_1,"fontStyle","");
    folly::dynamic::operator=(pdVar5,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if ((local_160 & 1) != 0) {
      operator_delete(local_150);
    }
  }
  puVar10 = *(ulong **)(param_2 + 0x748);
  puVar11 = *(ulong **)(param_2 + 0x750);
  if (puVar10 != puVar11) {
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    local_a0 = (dynamic *)0x0;
    local_b8[0] = 1;
    local_b0 = 0;
    uStack_af = 0;
    uStack_ab = 0;
    uStack_aa = 0;
    do {
      if ((*puVar10 & 1) == 0) {
        local_170 = (void *)puVar10[2];
        uStack_178 = puVar10[1];
        local_180 = *puVar10;
      }
      else {
                    /* try { // try from 00853924 to 0085392b has its CatchHandler @ 00853e34 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__init_copy_ctor_external
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_180,(char *)puVar10[2],puVar10[1]);
      }
      local_e8[0] = 6;
      uStack_d8 = uStack_178;
      local_e0 = local_180;
      local_d0 = local_170;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = (void *)0x0;
      if (local_b8[0] != 1) {
        if (*(long *)(lVar4 + 0x28) == local_88) {
                    /* try { // try from 00853d48 to 00853d57 has its CatchHandler @ 00853e40 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099e338);
        }
        goto LAB_00853e84;
      }
      pdVar5 = (dynamic *)CONCAT44(uStack_a4,CONCAT13(uStack_a5,CONCAT12(uStack_a6,uStack_a8)));
      if (pdVar5 < local_a0) {
        folly::dynamic::dynamic(pdVar5,(dynamic *)local_e8);
        pdVar5 = pdVar5 + 0x30;
      }
      else {
                    /* try { // try from 00853974 to 0085397f has its CatchHandler @ 00853e3c */
        pdVar5 = (dynamic *)FUN_00801fe4(&local_b0,local_e8);
      }
      uStack_a8 = SUB82(pdVar5,0);
      uStack_a6 = (undefined1)((ulong)pdVar5 >> 0x10);
      uStack_a5 = (undefined1)((ulong)pdVar5 >> 0x18);
      uStack_a4 = (undefined4)((ulong)pdVar5 >> 0x20);
      folly::dynamic::folly::dynamic::destroy(local_e8);
      if ((local_180 & 1) != 0) {
        operator_delete(local_170);
      }
      puVar10 = puVar10 + 3;
    } while (puVar10 != puVar11);
                    /* try { // try from 008539a0 to 008539b3 has its CatchHandler @ 00853d84 */
    pdVar5 = (dynamic *)folly::dynamic::operator[](param_1,"fontVariant","");
    folly::dynamic::operator=(pdVar5,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
  }
  bVar3 = *(byte *)(param_2 + 0x760);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x768);
  }
  if (uVar1 != 0) {
    if ((bVar3 & 1) == 0) {
      uStack_198 = *(undefined8 *)(param_2 + 0x768);
      local_1a0 = *(ulong *)(param_2 + 0x760);
      local_190 = *(dynamic **)(param_2 + 0x770);
    }
    else {
                    /* try { // try from 008539fc to 00853a03 has its CatchHandler @ 00853d70 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __init_copy_ctor_external
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_1a0,*(char **)(param_2 + 0x770),*(ulong *)(param_2 + 0x768));
    }
    local_b8[0] = 6;
    uStack_a8 = (undefined2)uStack_198;
    uStack_a6 = (undefined1)((ulong)uStack_198 >> 0x10);
    uStack_a5 = (undefined1)((ulong)uStack_198 >> 0x18);
    uStack_a4 = (undefined4)((ulong)uStack_198 >> 0x20);
    local_b0 = (undefined1)local_1a0;
    uStack_af = (undefined4)(local_1a0 >> 8);
    uStack_ab = (undefined1)(local_1a0 >> 0x28);
    uStack_aa = (undefined2)(local_1a0 >> 0x30);
    local_a0 = local_190;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = (dynamic *)0x0;
                    /* try { // try from 00853a24 to 00853a37 has its CatchHandler @ 00853d8c */
    pdVar5 = (dynamic *)folly::dynamic::operator[](param_1,"fontVariationSettings","");
    folly::dynamic::operator=(pdVar5,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
  }
  fVar12 = *(float *)(param_2 + 0x778);
  if (fVar12 != 0.0) {
                    /* try { // try from 00853a64 to 00853abf has its CatchHandler @ 00853e2c */
    piVar6 = (int *)folly::dynamic::operator[](param_1,"lineHeight","");
    if (*piVar6 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 3;
    }
    *(double *)(piVar6 + 2) = (double)fVar12;
  }
  fVar12 = *(float *)(param_2 + 0x77c);
  if (fVar12 != 0.0) {
    piVar6 = (int *)folly::dynamic::operator[](param_1,"letterSpacing","");
    if (*piVar6 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 3;
    }
    *(double *)(piVar6 + 2) = (double)fVar12;
  }
  iVar2 = *(int *)(param_2 + 0x7a8);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uStack_af = 0x65707075;
LAB_00853b54:
      puVar8 = local_1a4;
      local_b0 = 0x12;
      uStack_ab = 0x72;
      uVar9 = 0x65736163;
    }
    else {
      if (iVar2 != 3) {
        if (iVar2 != 2) {
          if (*(long *)(lVar4 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00853d68 to 00853d6b has its CatchHandler @ 00853d6c */
            abort();
          }
          goto LAB_00853e84;
        }
        uStack_af = 0x65776f6c;
        goto LAB_00853b54;
      }
      puVar8 = local_1a8;
      local_1a4[0] = 0x65;
      local_b0 = 0x14;
      uStack_af = 0x69706163;
      uVar9 = 0x7a696c61;
      uStack_ab = 0x74;
    }
    *puVar8 = 0;
    local_b8[0] = 6;
    uStack_aa = (undefined2)uVar9;
    uStack_a8 = (undefined2)((uint)uVar9 >> 0x10);
    uStack_a6 = local_1a4[0];
    uStack_a5 = local_1a8[0];
    uStack_a4 = 0;
    local_a0 = (dynamic *)0x0;
                    /* try { // try from 00853b94 to 00853ba7 has its CatchHandler @ 00853d88 */
    pdVar5 = (dynamic *)folly::dynamic::operator[](param_1,"textTransform","");
    folly::dynamic::operator=(pdVar5,(dynamic *)local_b8);
    folly::dynamic::folly::dynamic::destroy(local_b8);
  }
  iVar2 = *(int *)(param_2 + 0x7ac);
  if (iVar2 != 0) {
                    /* try { // try from 00853bc0 to 00853cdf has its CatchHandler @ 00853e2c */
    piVar6 = (int *)folly::dynamic::operator[](param_1,"numberOfLines","");
    if (*piVar6 != 4) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 4;
    }
    *(long *)(piVar6 + 2) = (long)iVar2;
  }
  if (*(char *)(param_2 + 0x7b4) == '\0') {
    piVar6 = (int *)folly::dynamic::operator[](param_1,"allowFontScaling","");
    if (*piVar6 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 2;
    }
    *(undefined1 *)(piVar6 + 2) = 0;
  }
  fVar12 = *(float *)(param_2 + 0x7b8);
  if (fVar12 != 0.0) {
    piVar6 = (int *)folly::dynamic::operator[](param_1,"maxFontSizeMultiplier","");
    if (*piVar6 != 3) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 3;
    }
    *(double *)(piVar6 + 2) = (double)fVar12;
  }
  if (*(char *)(param_2 + 0x7bc) != '\0') {
    piVar6 = (int *)folly::dynamic::operator[](param_1,"experiment","");
    if (*piVar6 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 2;
    }
    *(undefined1 *)(piVar6 + 2) = 1;
  }
  if (*(char *)(param_2 + 0x7be) == '\0') {
    piVar6 = (int *)folly::dynamic::operator[](param_1,"includeFontPadding","");
    if (*piVar6 != 2) {
      folly::dynamic::folly::dynamic::destroy(piVar6);
      *piVar6 = 2;
    }
    *(undefined1 *)(piVar6 + 2) = 0;
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
LAB_00853e84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00853e88  FUN_00853e88 =====

void FUN_00853e88(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00853ea0 to 00853eb3 has its CatchHandler @ 00853ec4 */
    plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 00853ec8  facebook::react::PlainTextMeasurementsManager::baseline =====

/* facebook::react::PlainTextMeasurementsManager::baseline(int, facebook::react::RNPlainTextProps
   const&, facebook::react::Size) const */

undefined4
facebook::react::PlainTextMeasurementsManager::baseline
          (float param_1,float param_2,undefined8 *param_3,undefined4 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long local_90;
  base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> abStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((DAT_009ba138 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_009ba138), iVar4 != 0)) {
                    /* try { // try from 00854028 to 0085403f has its CatchHandler @ 008540e0 */
    ::facebook::jni::facebook::jni::findClassStatic
              (abStack_88,"com/facebook/react/fabric/FabricUIManager");
    DAT_009ba130 = FUN_00852cfc(abStack_88);
    __cxa_guard_release(&DAT_009ba138);
  }
  if (((DAT_009ba148 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_009ba148), iVar4 != 0)) {
                    /* try { // try from 00854068 to 00854077 has its CatchHandler @ 008540cc */
    ::facebook::jni::facebook::jni::make_jstring(abStack_88,"RNPlainText");
                    /* try { // try from 00854078 to 00854087 has its CatchHandler @ 008540bc */
    FUN_00852d50(&DAT_009ba140,abStack_88);
    jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
    ~base_owned_ref(abStack_88);
    __cxa_atexit(FUN_00852dc0,&DAT_009ba140,&PTR_LOOP_008d5d30);
    __cxa_guard_release(&DAT_009ba148);
  }
  FUN_008535d0(abStack_88,param_5);
                    /* try { // try from 00853f30 to 00853f43 has its CatchHandler @ 008540fc */
  piVar5 = (int *)folly::dynamic::operator[](abStack_88,"__baseline","");
  if (*piVar5 != 2) {
    folly::dynamic::folly::dynamic::destroy(piVar5);
    *piVar5 = 2;
  }
  *(undefined1 *)(piVar5 + 2) = 1;
                    /* try { // try from 00853f6c to 00853f77 has its CatchHandler @ 008540f4 */
  FUN_00852e00(&local_90,abStack_88);
  uVar2 = DAT_009ba140;
  uVar8 = *param_3;
                    /* try { // try from 00853f88 to 00853fc7 has its CatchHandler @ 00854108 */
  uVar6 = ::facebook::jni::Environment::facebook::jni::Environment::current();
  uVar3 = FUN_008547b0((double)param_1,(double)param_1,(double)param_2,(double)param_2,uVar6,uVar8,
                       DAT_009ba130,param_4,uVar2,0,local_90,0);
  ::facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException();
  if (local_90 != 0) {
                    /* try { // try from 00853fcc to 00853fdf has its CatchHandler @ 00854104 */
    plVar7 = (long *)::facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar7 + 0xb8))(plVar7,local_90);
  }
  folly::dynamic::folly::dynamic::destroy(abStack_88);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00854138  FUN_00854138 =====

void FUN_00854138(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00854150 to 00854163 has its CatchHandler @ 00854174 */
    plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 00854178  FUN_00854178 =====

void FUN_00854178(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00854190 to 008541a3 has its CatchHandler @ 008541b4 */
    plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 008541b8  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::jni::detail::HybridClassBase::isHybridClassBase */

bool __rustcall facebook::jni::detail::HybridClassBase::isHybridClassBase(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((*PTR_cls_0099e500 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_cls_0099e500), iVar2 != 0))
  {
                    /* try { // try from 00854224 to 00854237 has its CatchHandler @ 00854248 */
    ::facebook::jni::facebook::jni::findClassStatic(PTR_cls_0099e4f8,PTR_kBaseName_0099e508);
    __cxa_guard_release(PTR_cls_0099e500);
  }
  uVar4 = *param_1;
  uVar5 = *(undefined8 *)PTR_cls_0099e4f8;
                    /* try { // try from 008541e8 to 008541ff has its CatchHandler @ 00854260 */
  plVar3 = (long *)::facebook::jni::Environment::facebook::jni::Environment::current();
  cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,uVar4,uVar5);
  return cVar1 != '\0';
}


// ===== 00854264  FUN_00854264 =====

void FUN_00854264(undefined8 *param_1)

{
  int iVar1;
  
  if (((*PTR_cls_0099e518 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_cls_0099e518), iVar1 != 0))
  {
                    /* try { // try from 008542b0 to 008542c3 has its CatchHandler @ 008542d4 */
    facebook::jni::facebook::jni::findClassStatic(PTR_cls_0099e510,PTR_kBaseName_0099e520);
    __cxa_guard_release(PTR_cls_0099e518);
  }
  *param_1 = *(undefined8 *)PTR_cls_0099e510;
  return;
}


// ===== 008542ec  FUN_008542ec =====

void FUN_008542ec(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* try { // try from 00854304 to 00854317 has its CatchHandler @ 00854328 */
    plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *param_1 = 0;
  return;
}


// ===== 0085432c  FUN_0085432c =====

void FUN_0085432c(undefined8 *param_1)

{
  int iVar1;
  
  if (((*PTR_cls_0099e518 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_cls_0099e518), iVar1 != 0))
  {
                    /* try { // try from 00854378 to 0085438b has its CatchHandler @ 0085439c */
    facebook::jni::facebook::jni::findClassStatic(PTR_cls_0099e510,PTR_kBaseName_0099e520);
    __cxa_guard_release(PTR_cls_0099e518);
  }
  *param_1 = *(undefined8 *)PTR_cls_0099e510;
  return;
}


// ===== 008543b4  FUN_008543b4 =====

void FUN_008543b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0098ed08;
  if (*(char *)(param_1 + 0xe) != '\0') {
    folly::dynamic::folly::dynamic::destroy(param_1 + 8);
  }
  *param_1 = &PTR_FUN_0098ed98;
  folly::dynamic::folly::dynamic::destroy(param_1 + 2);
  return;
}


// ===== 008543fc  FUN_008543fc =====

void FUN_008543fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0098ed08;
  if (*(char *)(param_1 + 0xe) != '\0') {
    folly::dynamic::folly::dynamic::destroy(param_1 + 8);
  }
  *param_1 = &PTR_FUN_0098ed98;
  folly::dynamic::folly::dynamic::destroy(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 0085444c  FUN_0085444c =====

void FUN_0085444c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0098ed98;
  folly::dynamic::folly::dynamic::destroy(param_1 + 2);
  return;
}


// ===== 0085445c  FUN_0085445c =====

void FUN_0085445c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0098ed98;
  folly::dynamic::folly::dynamic::destroy(param_1 + 2);
  operator_delete(param_1);
  return;
}


// ===== 0085448c  FUN_0085448c =====

long FUN_0085448c(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,DAT_009ba180,"<init>",PTR_kConstructorDescriptor_0099e528);
  facebook::jni::facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 008544e0  _JNIEnv::NewObject =====

/* WARNING: Unknown calling convention: __rustcall */
/* _JNIEnv::NewObject */

void __rustcall
_JNIEnv::NewObject(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(*param_1 + 0xe8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085457c  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00854594 to 008545a7 has its CatchHandler @ 008545b8 */
    plVar1 = (long *)::facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 008545bc  facebook::jni::detail::getDestructorField =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::jni::detail::getDestructorField */

long __rustcall facebook::jni::detail::getDestructorField(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)::facebook::jni::Environment::facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x2f0))(plVar1,*param_1,"mDestructor",PTR_kDescriptor_0099e540);
  ::facebook::jni::facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00854610  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

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
  HybridData *extraout_x1;
  HybridData *extraout_x1_00;
  undefined8 *in_x8;
  undefined8 uVar5;
  undefined8 uVar6;
  base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> abStack_40 [8];
  long local_38;
  
  puVar2 = PTR_holderField_0099e548;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_holderField_0099e550 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_holderField_0099e550), param_1 = extraout_x1, iVar3 != 0)) {
    JObject::getClass();
                    /* try { // try from 008546bc to 008546c3 has its CatchHandler @ 008546e4 */
    uVar5 = getDestructorField(abStack_40);
    *(undefined8 *)puVar2 = uVar5;
    base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref
              (abStack_40);
    __cxa_guard_release(PTR_holderField_0099e550);
    param_1 = extraout_x1_00;
  }
  uVar5 = *(undefined8 *)puVar2;
  uVar6 = *(undefined8 *)this;
                    /* try { // try from 00854654 to 0085466b has its CatchHandler @ 00854718 */
  plVar4 = (long *)::facebook::jni::Environment::facebook::jni::Environment::current(this,param_1);
  uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,uVar6,uVar5);
  *in_x8 = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085471c  FUN_0085471c =====

long FUN_0085471c(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)facebook::jni::Environment::facebook::jni::Environment::current();
  lVar2 = (**(code **)(*plVar1 + 0x108))
                    (plVar1,DAT_009ba1c0,"<init>",PTR_kConstructorDescriptor_0099e558);
  facebook::jni::facebook::jni::throwCppExceptionIf(lVar2 == 0);
  return lVar2;
}


// ===== 00854770  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

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
                    /* try { // try from 00854788 to 0085479b has its CatchHandler @ 008547ac */
    plVar1 = (long *)::facebook::jni::Environment::facebook::jni::Environment::current();
    (**(code **)(*plVar1 + 0xb8))(plVar1,lVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


// ===== 008547b0  FUN_008547b0 =====

void FUN_008547b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  (**(code **)(*param_1 + 0x1a8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085484c  facebook::react::PlainTextShadowNode::setPlainTextMeasurementsManager =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::PlainTextShadowNode::setPlainTextMeasurementsManager */

void __rustcall
facebook::react::PlainTextShadowNode::setPlainTextMeasurementsManager
          (long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    FUN_00757d00(1,lVar2 + 8);
  }
  plVar3 = *(long **)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 1000) = uVar1;
  *(long *)(param_1 + 0x3f0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008548c8  facebook::react::PlainTextShadowNode::measureContent =====

/* facebook::react::PlainTextShadowNode::measureContent(facebook::react::LayoutContext const&,
   facebook::react::LayoutConstraints const&) const */

void __thiscall
facebook::react::PlainTextShadowNode::measureContent
          (PlainTextShadowNode *this,LayoutContext *param_1,LayoutConstraints *param_2)

{
  long lVar1;
  undefined4 uVar2;
  PlainTextMeasurementsManager *pPVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pPVar3 = *(PlainTextMeasurementsManager **)(this + 1000);
  uVar2 = ::facebook::react::ShadowNode::getSurfaceId();
  uStack_48 = *(undefined8 *)(param_2 + 8);
  local_50 = *(undefined8 *)param_2;
  local_40 = *(undefined4 *)(param_2 + 0x10);
  PlainTextMeasurementsManager::measure(pPVar3,uVar2,*(undefined8 *)(this + 8),&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00854944  facebook::react::PlainTextShadowNode::baseline =====

/* facebook::react::PlainTextShadowNode::baseline(facebook::react::LayoutContext const&,
   facebook::react::Size) const */

void __thiscall
facebook::react::PlainTextShadowNode::baseline
          (undefined4 param_1,undefined4 param_2,PlainTextShadowNode *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 1000);
  uVar1 = ::facebook::react::ShadowNode::getSurfaceId();
  PlainTextMeasurementsManager::baseline(param_1,param_2,uVar2,uVar1,*(undefined8 *)(this + 8));
  return;
}


// ===== 0085498c  FUN_0085498c =====

void FUN_0085498c(void *param_1)

{
  FUN_0084efe0();
  operator_delete(param_1);
  return;
}


// ===== 008549b0  FUN_008549b0 =====

undefined1 FUN_008549b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3f8);
}


// ===== 008549b8  facebook::react::measurementInputsEqual =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::measurementInputsEqual */

bool __rustcall facebook::react::measurementInputsEqual(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  byte *__s2;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  bVar3 = *(byte *)(param_1 + 0x6e0);
  bVar4 = *(byte *)(param_2 + 0x6e0);
  uVar7 = (ulong)(bVar3 >> 1);
  sVar1 = uVar7;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x6e8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x6e8);
  }
  if (sVar1 != sVar2) {
    return false;
  }
  pcVar6 = (char *)(param_2 + 0x6e1);
  if ((bVar4 & 1) != 0) {
    pcVar6 = *(char **)(param_2 + 0x6f0);
  }
  if ((bVar3 & 1) == 0) {
    if (1 < bVar3) {
      pcVar8 = (char *)(param_1 + 0x6e1);
      do {
        if (*pcVar8 != *pcVar6) {
          return false;
        }
        uVar7 = uVar7 - 1;
        pcVar8 = pcVar8 + 1;
        pcVar6 = pcVar6 + 1;
      } while (uVar7 != 0);
    }
  }
  else {
    iVar5 = memcmp(*(void **)(param_1 + 0x6f0),pcVar6,*(size_t *)(param_1 + 0x6e8));
    if (iVar5 != 0) {
      return false;
    }
  }
  if (*(float *)(param_1 + 0x6fc) == *(float *)(param_2 + 0x6fc)) {
    bVar3 = *(byte *)(param_1 + 0x700);
    bVar4 = *(byte *)(param_2 + 0x700);
    uVar7 = (ulong)(bVar3 >> 1);
    sVar1 = uVar7;
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x708);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 0x708);
    }
    if (sVar1 == sVar2) {
      pcVar6 = (char *)(param_2 + 0x701);
      if ((bVar4 & 1) != 0) {
        pcVar6 = *(char **)(param_2 + 0x710);
      }
      if ((bVar3 & 1) == 0) {
        if (1 < bVar3) {
          pcVar8 = (char *)(param_1 + 0x701);
          do {
            if (*pcVar8 != *pcVar6) {
              return false;
            }
            uVar7 = uVar7 - 1;
            pcVar8 = pcVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (uVar7 != 0);
        }
      }
      else {
        iVar5 = memcmp(*(void **)(param_1 + 0x710),pcVar6,*(size_t *)(param_1 + 0x708));
        if (iVar5 != 0) {
          return false;
        }
      }
      bVar3 = *(byte *)(param_1 + 0x718);
      bVar4 = *(byte *)(param_2 + 0x718);
      uVar7 = (ulong)(bVar3 >> 1);
      sVar1 = uVar7;
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x720);
      }
      sVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar2 = *(size_t *)(param_2 + 0x720);
      }
      if (sVar1 == sVar2) {
        pcVar6 = (char *)(param_2 + 0x719);
        if ((bVar4 & 1) != 0) {
          pcVar6 = *(char **)(param_2 + 0x728);
        }
        if ((bVar3 & 1) == 0) {
          if (1 < bVar3) {
            pcVar8 = (char *)(param_1 + 0x719);
            do {
              if (*pcVar8 != *pcVar6) {
                return false;
              }
              uVar7 = uVar7 - 1;
              pcVar8 = pcVar8 + 1;
              pcVar6 = pcVar6 + 1;
            } while (uVar7 != 0);
          }
        }
        else {
          iVar5 = memcmp(*(void **)(param_1 + 0x728),pcVar6,*(size_t *)(param_1 + 0x720));
          if (iVar5 != 0) {
            return false;
          }
        }
        bVar3 = *(byte *)(param_1 + 0x730);
        bVar4 = *(byte *)(param_2 + 0x730);
        uVar7 = (ulong)(bVar3 >> 1);
        sVar1 = uVar7;
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_1 + 0x738);
        }
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = *(size_t *)(param_2 + 0x738);
        }
        if (sVar1 == sVar2) {
          pcVar6 = (char *)(param_2 + 0x731);
          if ((bVar4 & 1) != 0) {
            pcVar6 = *(char **)(param_2 + 0x740);
          }
          if ((bVar3 & 1) == 0) {
            if (1 < bVar3) {
              pcVar8 = (char *)(param_1 + 0x731);
              do {
                if (*pcVar8 != *pcVar6) {
                  return false;
                }
                uVar7 = uVar7 - 1;
                pcVar8 = pcVar8 + 1;
                pcVar6 = pcVar6 + 1;
              } while (uVar7 != 0);
            }
          }
          else {
            iVar5 = memcmp(*(void **)(param_1 + 0x740),pcVar6,*(size_t *)(param_1 + 0x738));
            if (iVar5 != 0) {
              return false;
            }
          }
          pbVar9 = *(byte **)(param_1 + 0x750);
          pbVar10 = *(byte **)(param_1 + 0x748);
          pbVar11 = *(byte **)(param_2 + 0x748);
          if ((long)pbVar9 - (long)pbVar10 == *(long *)(param_2 + 0x750) - (long)pbVar11) {
            for (; pbVar10 != pbVar9; pbVar10 = pbVar10 + 0x18) {
              bVar3 = *pbVar10;
              bVar4 = *pbVar11;
              sVar1 = (ulong)(bVar3 >> 1);
              if ((bVar3 & 1) != 0) {
                sVar1 = *(size_t *)(pbVar10 + 8);
              }
              sVar2 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                sVar2 = *(size_t *)(pbVar11 + 8);
              }
              if (sVar1 != sVar2) {
                return false;
              }
              __s2 = *(byte **)(pbVar11 + 0x10);
              if ((bVar4 & 1) == 0) {
                __s2 = pbVar11 + 1;
              }
              if ((bVar3 & 1) == 0) {
                if (1 < bVar3) {
                  uVar7 = 0;
                  do {
                    if (pbVar10[uVar7 + 1] != __s2[uVar7]) {
                      return false;
                    }
                    uVar7 = uVar7 + 1;
                  } while (bVar3 >> 1 != uVar7);
                }
              }
              else {
                iVar5 = memcmp(*(void **)(pbVar10 + 0x10),__s2,*(size_t *)(pbVar10 + 8));
                if (iVar5 != 0) {
                  return false;
                }
              }
              pbVar11 = pbVar11 + 0x18;
            }
            uVar7 = FUN_007eac74(param_1 + 0x760,param_2 + 0x760);
            if ((((((uVar7 & 1) != 0) &&
                  (*(float *)(param_1 + 0x778) == *(float *)(param_2 + 0x778))) &&
                 (*(float *)(param_1 + 0x77c) == *(float *)(param_2 + 0x77c))) &&
                ((*(char *)(param_1 + 0x780) == *(char *)(param_2 + 0x780) &&
                 (*(int *)(param_1 + 0x7a8) == *(int *)(param_2 + 0x7a8))))) &&
               ((*(int *)(param_1 + 0x7ac) == *(int *)(param_2 + 0x7ac) &&
                ((*(char *)(param_1 + 0x7b4) == *(char *)(param_2 + 0x7b4) &&
                 (*(float *)(param_1 + 0x7b8) == *(float *)(param_2 + 0x7b8))))))) {
              return *(char *)(param_1 + 0x7be) == *(char *)(param_2 + 0x7be);
            }
          }
        }
      }
    }
  }
  return false;
}


// ===== 00854de0  facebook::react::shouldRevisionDirtyMeasurement =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::shouldRevisionDirtyMeasurement */

uint __rustcall
facebook::react::shouldRevisionDirtyMeasurement
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)*param_2;
  if (uVar3 != 0) {
    puVar2 = (undefined8 *)::facebook::react::ShadowNode::getProps();
    uVar1 = measurementInputsEqual(*puVar2,param_3);
    uVar3 = (ulong)(uVar1 ^ 1);
  }
  return (uint)uVar3 & 1;
}


// ===== 00854e20  facebook::react::rnreanimated_registerComponentDescriptorsFromCodegen =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::rnreanimated_registerComponentDescriptorsFromCodegen */

void __rustcall facebook::react::rnreanimated_registerComponentDescriptorsFromCodegen(void)

{
  return;
}


// ===== 00854e24  facebook::react::NativeReanimatedModuleSpecJSI::NativeReanimatedModuleSpecJSI =====

/* facebook::react::NativeReanimatedModuleSpecJSI::NativeReanimatedModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeReanimatedModuleSpecJSI::NativeReanimatedModuleSpecJSI
          (NativeReanimatedModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  local_60 = 0x24;
  *(undefined ***)this = &PTR__JavaTurboModule_0098ee68;
  uStack_4d = 0;
  uStack_4f = 0x656c;
  uStack_57 = (undefined7)s_installTurboModule_0036a91f._8_8_;
  cStack_50 = SUB81(s_installTurboModule_0036a91f._8_8_,7);
  local_5f[0] = s_installTurboModule_0036a91f[0];
  local_5f[1] = s_installTurboModule_0036a91f[1];
  local_5f[2] = s_installTurboModule_0036a91f[2];
  local_5f[3] = s_installTurboModule_0036a91f[3];
  local_5f[4] = s_installTurboModule_0036a91f[4];
  local_5f[5] = s_installTurboModule_0036a91f[5];
  local_5f[6] = s_installTurboModule_0036a91f[6];
  local_5f[7] = s_installTurboModule_0036a91f[7];
                    /* try { // try from 00854e88 to 00854e9f has its CatchHandler @ 00854ee0 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(code **)(lVar2 + 0x30) = FUN_00854f18;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00854f18  FUN_00854f18 =====

void FUN_00854f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_58 [16];
  void *local_48;
  byte local_40;
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x24;
  uStack_2f = 0x656c;
  local_58[0] = 6;
  uStack_37 = (undefined7)s_installTurboModule_0036a91f._8_8_;
  cStack_30 = SUB81(s_installTurboModule_0036a91f._8_8_,7);
  local_3f = (char  [8])s_installTurboModule_0036a91f._0_8_;
  uStack_2d = 0;
  local_58[1] = 0x28;
  local_58[2] = 0x29;
  local_58[3] = 0x5a;
  local_58[4] = 0;
                    /* try { // try from 00854f78 to 00854f97 has its CatchHandler @ 00854fd8 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,1,&local_40,local_58,param_3,param_4,&DAT_009ba1e0);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,cStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00855018  facebook::react::NativeWorkletsModuleSpecJSI::NativeWorkletsModuleSpecJSI =====

/* facebook::react::NativeWorkletsModuleSpecJSI::NativeWorkletsModuleSpecJSI(facebook::react::JavaTurboModule::InitParams
   const&) */

void __thiscall
facebook::react::NativeWorkletsModuleSpecJSI::NativeWorkletsModuleSpecJSI
          (NativeWorkletsModuleSpecJSI *this,InitParams *param_1)

{
  long lVar1;
  long lVar2;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined1 uStack_41;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ::facebook::react::JavaTurboModule::JavaTurboModule((JavaTurboModule *)this,param_1);
  local_60 = 0x24;
  *(undefined ***)this = &PTR__JavaTurboModule_0098eea8;
  uStack_4d = 0;
  uStack_4f = 0x656c;
  uStack_57 = (undefined7)s_installTurboModule_0036a91f._8_8_;
  cStack_50 = SUB81(s_installTurboModule_0036a91f._8_8_,7);
  local_5f[0] = s_installTurboModule_0036a91f[0];
  local_5f[1] = s_installTurboModule_0036a91f[1];
  local_5f[2] = s_installTurboModule_0036a91f[2];
  local_5f[3] = s_installTurboModule_0036a91f[3];
  local_5f[4] = s_installTurboModule_0036a91f[4];
  local_5f[5] = s_installTurboModule_0036a91f[5];
  local_5f[6] = s_installTurboModule_0036a91f[6];
  local_5f[7] = s_installTurboModule_0036a91f[7];
                    /* try { // try from 0085507c to 00855093 has its CatchHandler @ 008550d8 */
  local_40 = &local_60;
  lVar2 = FUN_00756964(this + 0x30,&local_60,PTR_piecewise_construct_0099dad8,&local_40,&uStack_41);
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(code **)(lVar2 + 0x30) = FUN_00855110;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00855110  FUN_00855110 =====

void FUN_00855110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  char local_3f [8];
  undefined7 uStack_37;
  char cStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x24;
  uStack_2f = 0x656c;
  local_58 = 0x2a;
  uStack_37 = (undefined7)s_installTurboModule_0036a91f._8_8_;
  cStack_30 = SUB81(s_installTurboModule_0036a91f._8_8_,7);
  local_3f = (char  [8])s_installTurboModule_0036a91f._0_8_;
  uStack_2d = 0;
  acStack_4f = (char  [5])s__Ljava_lang_S_0036bf77._8_5_;
  local_57 = (char  [8])s__Ljava_lang_S_0036bf77._0_8_;
  uStack_4a = (undefined2)s_tring__Z_0036bf84._0_3_;
  cStack_48 = SUB31(s_tring__Z_0036bf84._0_3_,2);
  acStack_47 = (char  [5])s_tring__Z_0036bf84._3_5_;
  uStack_42 = 0;
                    /* try { // try from 00855180 to 0085519f has its CatchHandler @ 008551e0 */
  facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod
            (param_2,param_1,1,&local_40,&local_58,param_3,param_4,&DAT_009ba1e8);
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT51(acStack_47,cStack_48))));
  }
  if ((local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,cStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00855220  facebook::react::rnreanimated_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::rnreanimated_ModuleProvider */

void __rustcall
facebook::react::rnreanimated_ModuleProvider(undefined8 *param_1,byte *param_2,InitParams *param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  NativeReanimatedModuleSpecJSI *this;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0xe) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if (*(long *)pbVar4 == 0x7374656c6b726f57 && *(long *)(pbVar4 + 6) == 0x656c75646f4d7374) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      this = (NativeReanimatedModuleSpecJSI *)(puVar3 + 3);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0098ef68;
                    /* try { // try from 0085533c to 00855347 has its CatchHandler @ 0085535c */
      NativeWorkletsModuleSpecJSI::NativeWorkletsModuleSpecJSI
                ((NativeWorkletsModuleSpecJSI *)this,param_3);
LAB_00855348:
      *param_1 = this;
      param_1[1] = puVar3;
      return;
    }
  }
  else if (uVar1 == 0x10) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if (*(long *)pbVar4 == 0x74616d696e616552 && *(long *)(pbVar4 + 8) == 0x656c75646f4d6465) {
      puVar3 = (undefined8 *)operator_new(0xb8);
      this = (NativeReanimatedModuleSpecJSI *)(puVar3 + 3);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = &PTR_FUN_0098ef18;
                    /* try { // try from 008552b8 to 008552c3 has its CatchHandler @ 00855360 */
      NativeReanimatedModuleSpecJSI::NativeReanimatedModuleSpecJSI(this,param_3);
      goto LAB_00855348;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0085537c  FUN_0085537c =====

void FUN_0085537c(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008553a0  FUN_008553a0 =====

void FUN_008553a0(JavaTurboModule *param_1)

{
  facebook::react::JavaTurboModule::~JavaTurboModule(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008553c4  FUN_008553c4 =====

void FUN_008553c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ef18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008553d4  FUN_008553d4 =====

void FUN_008553d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ef18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00855404  FUN_00855404 =====

void FUN_00855404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00855410  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00855414  FUN_00855414 =====

void FUN_00855414(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ef68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00855424  FUN_00855424 =====

void FUN_00855424(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098ef68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00855454  FUN_00855454 =====

void FUN_00855454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085545c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00855460  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00855464  facebook::react::autolinking_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::autolinking_ModuleProvider */

void __rustcall
facebook::react::autolinking_ModuleProvider(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long local_148;
  long local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  long *local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ::facebook::react::facebook::react::ReanimatedView_ModuleProvider(&local_58);
  if (local_58 == 0) {
                    /* try { // try from 008554d4 to 008554e3 has its CatchHandler @ 008559fc */
    RNDiscordMarkdownSpec_ModuleProvider(&local_68,param_2,param_3);
    if (local_68 == 0) {
                    /* try { // try from 00855528 to 00855537 has its CatchHandler @ 008559ec */
      DiscordCodegen_ModuleProvider(&local_78,param_2,param_3);
      if (local_78 == 0) {
                    /* try { // try from 0085557c to 0085558b has its CatchHandler @ 008559dc */
        rnclipboard_ModuleProvider(&local_88,param_2,param_3);
        if (local_88 == 0) {
                    /* try { // try from 008555d0 to 008555df has its CatchHandler @ 008559cc */
          ::facebook::react::facebook::react::RNCSlider_ModuleProvider(&local_98,param_2,param_3);
          if (local_98 == 0) {
                    /* try { // try from 00855624 to 00855633 has its CatchHandler @ 008559bc */
            rndocumentpickerCGen_ModuleProvider(&local_a8,param_2,param_3);
            if (local_a8 == 0) {
              local_b8 = 0;
              uStack_b0 = 0;
                    /* try { // try from 0085567c to 0085568b has its CatchHandler @ 008559a4 */
              RNSentrySpec_ModuleProvider(&local_c8,param_2,param_3);
              lVar2 = local_c0;
              lVar3 = local_c8;
              if (local_c8 == 0) {
                local_d8 = 0;
                uStack_d0 = 0;
                    /* try { // try from 008556a8 to 008556b7 has its CatchHandler @ 0085598c */
                RNDatePickerSpecs_ModuleProvider(&local_e8,param_2,param_3);
                lVar2 = local_e0;
                lVar3 = local_e8;
                if (local_e8 == 0) {
                    /* try { // try from 008556d0 to 008556df has its CatchHandler @ 0085597c */
                  ::facebook::react::facebook::react::rngesturehandler_codegen_ModuleProvider
                            (&local_f8,param_2,param_3);
                  lVar2 = local_f0;
                  lVar3 = local_f8;
                  if (local_f8 == 0) {
                    /* try { // try from 008556f8 to 00855707 has its CatchHandler @ 0085596c */
                    RNHapticFeedbackSpec_ModuleProvider(&local_108,param_2,param_3);
                    lVar2 = local_100;
                    lVar3 = local_108;
                    if (local_108 == 0) {
                    /* try { // try from 00855720 to 0085572f has its CatchHandler @ 0085595c */
                      RNCImageCropPickerSpec_ModuleProvider(&local_118,param_2,param_3);
                      lVar2 = local_110;
                      lVar3 = local_118;
                      if (local_118 == 0) {
                    /* try { // try from 00855748 to 00855757 has its CatchHandler @ 0085594c */
                        ::facebook::react::facebook::react::RNKC_ModuleProvider
                                  (&local_128,param_2,param_3);
                        lVar2 = local_120;
                        lVar3 = local_128;
                        if (local_128 == 0) {
                          local_138 = 0;
                          uStack_130 = 0;
                    /* try { // try from 00855774 to 00855783 has its CatchHandler @ 00855934 */
                          NitroModulesSpec_ModuleProvider(&local_148,param_2,param_3);
                          lVar2 = local_140;
                          lVar3 = local_148;
                          if (local_148 == 0) {
                            local_158 = 0;
                            uStack_150 = 0;
                    /* try { // try from 008557a0 to 008557af has its CatchHandler @ 0085591c */
                            rnreanimated_ModuleProvider(&local_168,param_2,param_3);
                            lVar2 = local_160;
                            lVar3 = local_168;
                            if (local_168 == 0) {
                    /* try { // try from 008557c8 to 008557d7 has its CatchHandler @ 0085590c */
                              ::facebook::react::facebook::react::safeareacontext_ModuleProvider
                                        (&local_178,param_2,param_3);
                              lVar2 = local_170;
                              lVar3 = local_178;
                              if (local_178 == 0) {
                    /* try { // try from 008557f0 to 008557ff has its CatchHandler @ 008558fc */
                                ::facebook::react::facebook::react::rnscreens_ModuleProvider
                                          (&local_188,param_2,param_3);
                                lVar2 = local_180;
                                lVar3 = local_188;
                                if (local_188 == 0) {
                    /* try { // try from 00855818 to 00855827 has its CatchHandler @ 008558ec */
                                  ::facebook::react::facebook::react::rnsvg_ModuleProvider
                                            (&local_198,param_2,param_3);
                                  if (local_198 != 0) {
                                    *param_1 = local_198;
                                    param_1[1] = local_190;
                                    param_1 = &local_198;
                                  }
                                  *param_1 = 0;
                                  param_1[1] = 0;
                                  FUN_00855a24(&local_198);
                                }
                                else {
                                  local_188 = 0;
                                  local_180 = 0;
                                  *param_1 = lVar3;
                                  param_1[1] = lVar2;
                                }
                                FUN_00855a24(&local_188);
                              }
                              else {
                                local_178 = 0;
                                local_170 = 0;
                                *param_1 = lVar3;
                                param_1[1] = lVar2;
                              }
                              FUN_00855a24(&local_178);
                            }
                            else {
                              local_168 = 0;
                              local_160 = 0;
                              *param_1 = lVar3;
                              param_1[1] = lVar2;
                            }
                            FUN_00855a24(&local_168);
                            FUN_00855a24(&local_158);
                          }
                          else {
                            local_148 = 0;
                            local_140 = 0;
                            *param_1 = lVar3;
                            param_1[1] = lVar2;
                          }
                          FUN_00855a24(&local_148);
                          FUN_00855a24(&local_138);
                        }
                        else {
                          local_128 = 0;
                          local_120 = 0;
                          *param_1 = lVar3;
                          param_1[1] = lVar2;
                        }
                        FUN_00855a24(&local_128);
                      }
                      else {
                        local_118 = 0;
                        local_110 = 0;
                        *param_1 = lVar3;
                        param_1[1] = lVar2;
                      }
                      FUN_00855a24(&local_118);
                    }
                    else {
                      local_108 = 0;
                      local_100 = 0;
                      *param_1 = lVar3;
                      param_1[1] = lVar2;
                    }
                    FUN_00855a24(&local_108);
                  }
                  else {
                    local_f8 = 0;
                    local_f0 = 0;
                    *param_1 = lVar3;
                    param_1[1] = lVar2;
                  }
                  FUN_00855a24(&local_f8);
                }
                else {
                  local_e8 = 0;
                  local_e0 = 0;
                  *param_1 = lVar3;
                  param_1[1] = lVar2;
                }
                FUN_00855a24(&local_e8);
                FUN_00855a24(&local_d8);
              }
              else {
                local_c8 = 0;
                local_c0 = 0;
                *param_1 = lVar3;
                param_1[1] = lVar2;
              }
              FUN_00855a24(&local_c8);
              FUN_00855a24(&local_b8);
              if ((local_a0 != (long *)0x0) &&
                 (lVar3 = FUN_00757990(0xffffffffffffffff,local_a0 + 1), lVar3 == 0)) {
                (**(code **)(*local_a0 + 0x10))(local_a0);
                std::__ndk1::__shared_weak_count::__release_weak();
              }
            }
            else {
              *param_1 = local_a8;
              param_1[1] = (long)local_a0;
            }
            if ((local_90 != (long *)0x0) &&
               (lVar3 = FUN_00757990(0xffffffffffffffff,local_90 + 1), lVar3 == 0)) {
              (**(code **)(*local_90 + 0x10))(local_90);
              std::__ndk1::__shared_weak_count::__release_weak();
            }
          }
          else {
            *param_1 = local_98;
            param_1[1] = (long)local_90;
          }
          if ((local_80 != (long *)0x0) &&
             (lVar3 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar3 == 0)) {
            (**(code **)(*local_80 + 0x10))(local_80);
            std::__ndk1::__shared_weak_count::__release_weak();
          }
        }
        else {
          *param_1 = local_88;
          param_1[1] = (long)local_80;
        }
        if ((local_70 != (long *)0x0) &&
           (lVar3 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar3 == 0)) {
          (**(code **)(*local_70 + 0x10))(local_70);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      else {
        *param_1 = local_78;
        param_1[1] = (long)local_70;
      }
      if ((local_60 != (long *)0x0) &&
         (lVar3 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar3 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
    else {
      *param_1 = local_68;
      param_1[1] = (long)local_60;
    }
    if ((local_50 != (long *)0x0) &&
       (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
  else {
    *param_1 = local_58;
    param_1[1] = (long)local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00855a24  FUN_00855a24 =====

void FUN_00855a24(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00855a74  facebook::react::autolinking_cxxModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::autolinking_cxxModuleProvider */

void __rustcall facebook::react::autolinking_cxxModuleProvider(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 == 0xf) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    if (*(long *)pbVar4 == 0x4d64726f63736944 && *(long *)(pbVar4 + 7) == 0x6e776f646b72614d) {
      FUN_00857cb0(&local_40,&uStack_29);
      param_1[1] = uStack_38;
      *param_1 = local_40;
      if (*(long *)(lVar3 + 0x28) == local_28) {
        return;
      }
      goto LAB_00855b3c;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
LAB_00855b3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00855b40  facebook::react::autolinking_registerProviders =====

/* WARNING: Removing unreachable block (ram,0x00857a2c) */
/* WARNING: Removing unreachable block (ram,0x00857a3c) */
/* WARNING: Removing unreachable block (ram,0x0085797c) */
/* WARNING: Removing unreachable block (ram,0x0085798c) */
/* WARNING: Removing unreachable block (ram,0x008578cc) */
/* WARNING: Removing unreachable block (ram,0x008578dc) */
/* WARNING: Removing unreachable block (ram,0x0085781c) */
/* WARNING: Removing unreachable block (ram,0x0085782c) */
/* WARNING: Removing unreachable block (ram,0x0085776c) */
/* WARNING: Removing unreachable block (ram,0x0085777c) */
/* WARNING: Removing unreachable block (ram,0x008576bc) */
/* WARNING: Removing unreachable block (ram,0x008576cc) */
/* WARNING: Removing unreachable block (ram,0x0085760c) */
/* WARNING: Removing unreachable block (ram,0x0085761c) */
/* WARNING: Removing unreachable block (ram,0x0085755c) */
/* WARNING: Removing unreachable block (ram,0x0085756c) */
/* WARNING: Removing unreachable block (ram,0x008574ac) */
/* WARNING: Removing unreachable block (ram,0x008574bc) */
/* WARNING: Removing unreachable block (ram,0x008573fc) */
/* WARNING: Removing unreachable block (ram,0x0085740c) */
/* WARNING: Removing unreachable block (ram,0x0085734c) */
/* WARNING: Removing unreachable block (ram,0x0085735c) */
/* WARNING: Removing unreachable block (ram,0x0085729c) */
/* WARNING: Removing unreachable block (ram,0x008572ac) */
/* WARNING: Removing unreachable block (ram,0x008571ec) */
/* WARNING: Removing unreachable block (ram,0x008571fc) */
/* WARNING: Removing unreachable block (ram,0x0085713c) */
/* WARNING: Removing unreachable block (ram,0x0085714c) */
/* WARNING: Removing unreachable block (ram,0x0085708c) */
/* WARNING: Removing unreachable block (ram,0x0085709c) */
/* WARNING: Removing unreachable block (ram,0x00856fdc) */
/* WARNING: Removing unreachable block (ram,0x00856fec) */
/* WARNING: Removing unreachable block (ram,0x00856f2c) */
/* WARNING: Removing unreachable block (ram,0x00856f3c) */
/* WARNING: Removing unreachable block (ram,0x00856e7c) */
/* WARNING: Removing unreachable block (ram,0x00856e8c) */
/* WARNING: Removing unreachable block (ram,0x00856dcc) */
/* WARNING: Removing unreachable block (ram,0x00856ddc) */
/* WARNING: Removing unreachable block (ram,0x00856d1c) */
/* WARNING: Removing unreachable block (ram,0x00856d2c) */
/* WARNING: Removing unreachable block (ram,0x00856c6c) */
/* WARNING: Removing unreachable block (ram,0x00856c7c) */
/* WARNING: Removing unreachable block (ram,0x00856bbc) */
/* WARNING: Removing unreachable block (ram,0x00856bcc) */
/* WARNING: Removing unreachable block (ram,0x00856b0c) */
/* WARNING: Removing unreachable block (ram,0x00856b1c) */
/* WARNING: Removing unreachable block (ram,0x00856a5c) */
/* WARNING: Removing unreachable block (ram,0x00856a6c) */
/* WARNING: Removing unreachable block (ram,0x008569ac) */
/* WARNING: Removing unreachable block (ram,0x008569bc) */
/* WARNING: Removing unreachable block (ram,0x008568fc) */
/* WARNING: Removing unreachable block (ram,0x0085690c) */
/* WARNING: Removing unreachable block (ram,0x0085684c) */
/* WARNING: Removing unreachable block (ram,0x0085685c) */
/* WARNING: Removing unreachable block (ram,0x0085679c) */
/* WARNING: Removing unreachable block (ram,0x008567ac) */
/* WARNING: Removing unreachable block (ram,0x008566ec) */
/* WARNING: Removing unreachable block (ram,0x008566fc) */
/* WARNING: Removing unreachable block (ram,0x0085663c) */
/* WARNING: Removing unreachable block (ram,0x0085664c) */
/* WARNING: Removing unreachable block (ram,0x0085658c) */
/* WARNING: Removing unreachable block (ram,0x0085659c) */
/* WARNING: Removing unreachable block (ram,0x008564dc) */
/* WARNING: Removing unreachable block (ram,0x008564ec) */
/* WARNING: Removing unreachable block (ram,0x0085642c) */
/* WARNING: Removing unreachable block (ram,0x0085643c) */
/* WARNING: Removing unreachable block (ram,0x0085637c) */
/* WARNING: Removing unreachable block (ram,0x0085638c) */
/* WARNING: Removing unreachable block (ram,0x008562cc) */
/* WARNING: Removing unreachable block (ram,0x008562dc) */
/* WARNING: Removing unreachable block (ram,0x0085621c) */
/* WARNING: Removing unreachable block (ram,0x0085622c) */
/* WARNING: Removing unreachable block (ram,0x0085616c) */
/* WARNING: Removing unreachable block (ram,0x0085617c) */
/* WARNING: Removing unreachable block (ram,0x008560bc) */
/* WARNING: Removing unreachable block (ram,0x008560cc) */
/* WARNING: Removing unreachable block (ram,0x0085600c) */
/* WARNING: Removing unreachable block (ram,0x0085601c) */
/* WARNING: Removing unreachable block (ram,0x00855f5c) */
/* WARNING: Removing unreachable block (ram,0x00855f6c) */
/* WARNING: Removing unreachable block (ram,0x00855eac) */
/* WARNING: Removing unreachable block (ram,0x00855ebc) */
/* WARNING: Removing unreachable block (ram,0x00855dfc) */
/* WARNING: Removing unreachable block (ram,0x00855e0c) */
/* WARNING: Removing unreachable block (ram,0x00855d4c) */
/* WARNING: Removing unreachable block (ram,0x00855d5c) */
/* WARNING: Removing unreachable block (ram,0x00855c9c) */
/* WARNING: Removing unreachable block (ram,0x00855cac) */
/* WARNING: Removing unreachable block (ram,0x00855bec) */
/* WARNING: Removing unreachable block (ram,0x00855bfc) */
/* WARNING: Removing unreachable block (ram,0x00855b94) */
/* WARNING: Removing unreachable block (ram,0x00855ba4) */
/* WARNING: Removing unreachable block (ram,0x00855c44) */
/* WARNING: Removing unreachable block (ram,0x00855c54) */
/* WARNING: Removing unreachable block (ram,0x00855cf4) */
/* WARNING: Removing unreachable block (ram,0x00855d04) */
/* WARNING: Removing unreachable block (ram,0x00855da4) */
/* WARNING: Removing unreachable block (ram,0x00855db4) */
/* WARNING: Removing unreachable block (ram,0x00855e54) */
/* WARNING: Removing unreachable block (ram,0x00855e64) */
/* WARNING: Removing unreachable block (ram,0x00855f04) */
/* WARNING: Removing unreachable block (ram,0x00855f14) */
/* WARNING: Removing unreachable block (ram,0x00855fb4) */
/* WARNING: Removing unreachable block (ram,0x00855fc4) */
/* WARNING: Removing unreachable block (ram,0x00856064) */
/* WARNING: Removing unreachable block (ram,0x00856074) */
/* WARNING: Removing unreachable block (ram,0x00856114) */
/* WARNING: Removing unreachable block (ram,0x00856124) */
/* WARNING: Removing unreachable block (ram,0x008561c4) */
/* WARNING: Removing unreachable block (ram,0x008561d4) */
/* WARNING: Removing unreachable block (ram,0x00856274) */
/* WARNING: Removing unreachable block (ram,0x00856284) */
/* WARNING: Removing unreachable block (ram,0x00856324) */
/* WARNING: Removing unreachable block (ram,0x00856334) */
/* WARNING: Removing unreachable block (ram,0x008563d4) */
/* WARNING: Removing unreachable block (ram,0x008563e4) */
/* WARNING: Removing unreachable block (ram,0x00856484) */
/* WARNING: Removing unreachable block (ram,0x00856494) */
/* WARNING: Removing unreachable block (ram,0x00856534) */
/* WARNING: Removing unreachable block (ram,0x00856544) */
/* WARNING: Removing unreachable block (ram,0x008565e4) */
/* WARNING: Removing unreachable block (ram,0x008565f4) */
/* WARNING: Removing unreachable block (ram,0x00856694) */
/* WARNING: Removing unreachable block (ram,0x008566a4) */
/* WARNING: Removing unreachable block (ram,0x00856744) */
/* WARNING: Removing unreachable block (ram,0x00856754) */
/* WARNING: Removing unreachable block (ram,0x008567f4) */
/* WARNING: Removing unreachable block (ram,0x00856804) */
/* WARNING: Removing unreachable block (ram,0x008568a4) */
/* WARNING: Removing unreachable block (ram,0x008568b4) */
/* WARNING: Removing unreachable block (ram,0x00856954) */
/* WARNING: Removing unreachable block (ram,0x00856964) */
/* WARNING: Removing unreachable block (ram,0x00856a04) */
/* WARNING: Removing unreachable block (ram,0x00856a14) */
/* WARNING: Removing unreachable block (ram,0x00856ab4) */
/* WARNING: Removing unreachable block (ram,0x00856ac4) */
/* WARNING: Removing unreachable block (ram,0x00856b64) */
/* WARNING: Removing unreachable block (ram,0x00856b74) */
/* WARNING: Removing unreachable block (ram,0x00856c14) */
/* WARNING: Removing unreachable block (ram,0x00856c24) */
/* WARNING: Removing unreachable block (ram,0x00856cc4) */
/* WARNING: Removing unreachable block (ram,0x00856cd4) */
/* WARNING: Removing unreachable block (ram,0x00856d74) */
/* WARNING: Removing unreachable block (ram,0x00856d84) */
/* WARNING: Removing unreachable block (ram,0x00856e24) */
/* WARNING: Removing unreachable block (ram,0x00856e34) */
/* WARNING: Removing unreachable block (ram,0x00856ed4) */
/* WARNING: Removing unreachable block (ram,0x00856ee4) */
/* WARNING: Removing unreachable block (ram,0x00856f84) */
/* WARNING: Removing unreachable block (ram,0x00856f94) */
/* WARNING: Removing unreachable block (ram,0x00857034) */
/* WARNING: Removing unreachable block (ram,0x00857044) */
/* WARNING: Removing unreachable block (ram,0x008570e4) */
/* WARNING: Removing unreachable block (ram,0x008570f4) */
/* WARNING: Removing unreachable block (ram,0x00857194) */
/* WARNING: Removing unreachable block (ram,0x008571a4) */
/* WARNING: Removing unreachable block (ram,0x00857244) */
/* WARNING: Removing unreachable block (ram,0x00857254) */
/* WARNING: Removing unreachable block (ram,0x008572f4) */
/* WARNING: Removing unreachable block (ram,0x00857304) */
/* WARNING: Removing unreachable block (ram,0x008573a4) */
/* WARNING: Removing unreachable block (ram,0x008573b4) */
/* WARNING: Removing unreachable block (ram,0x00857454) */
/* WARNING: Removing unreachable block (ram,0x00857464) */
/* WARNING: Removing unreachable block (ram,0x00857504) */
/* WARNING: Removing unreachable block (ram,0x00857514) */
/* WARNING: Removing unreachable block (ram,0x008575b4) */
/* WARNING: Removing unreachable block (ram,0x008575c4) */
/* WARNING: Removing unreachable block (ram,0x00857664) */
/* WARNING: Removing unreachable block (ram,0x00857674) */
/* WARNING: Removing unreachable block (ram,0x00857714) */
/* WARNING: Removing unreachable block (ram,0x00857724) */
/* WARNING: Removing unreachable block (ram,0x008577c4) */
/* WARNING: Removing unreachable block (ram,0x008577d4) */
/* WARNING: Removing unreachable block (ram,0x00857874) */
/* WARNING: Removing unreachable block (ram,0x00857884) */
/* WARNING: Removing unreachable block (ram,0x00857924) */
/* WARNING: Removing unreachable block (ram,0x00857934) */
/* WARNING: Removing unreachable block (ram,0x008579d4) */
/* WARNING: Removing unreachable block (ram,0x008579e4) */
/* WARNING: Removing unreachable block (ram,0x00857a84) */
/* WARNING: Removing unreachable block (ram,0x00857a94) */
/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::autolinking_registerProviders */

void __rustcall facebook::react::autolinking_registerProviders(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00855b84 to 00855b8b has its CatchHandler @ 00857c38 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855bdc to 00855be3 has its CatchHandler @ 00857c34 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855c34 to 00855c3b has its CatchHandler @ 00857c30 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855c8c to 00855c93 has its CatchHandler @ 00857c2c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855ce4 to 00855ceb has its CatchHandler @ 00857c28 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855d3c to 00855d43 has its CatchHandler @ 00857c24 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855d94 to 00855d9b has its CatchHandler @ 00857c20 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855dec to 00855df3 has its CatchHandler @ 00857c1c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855e44 to 00855e4b has its CatchHandler @ 00857c18 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855e9c to 00855ea3 has its CatchHandler @ 00857c14 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855ef4 to 00855efb has its CatchHandler @ 00857c10 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855f4c to 00855f53 has its CatchHandler @ 00857c0c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855fa4 to 00855fab has its CatchHandler @ 00857c08 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00855ffc to 00856003 has its CatchHandler @ 00857c04 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856054 to 0085605b has its CatchHandler @ 00857c00 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008560ac to 008560b3 has its CatchHandler @ 00857bfc */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856104 to 0085610b has its CatchHandler @ 00857bf8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085615c to 00856163 has its CatchHandler @ 00857bf4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008561b4 to 008561bb has its CatchHandler @ 00857bf0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085620c to 00856213 has its CatchHandler @ 00857bec */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856264 to 0085626b has its CatchHandler @ 00857be8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008562bc to 008562c3 has its CatchHandler @ 00857be4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856314 to 0085631b has its CatchHandler @ 00857be0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085636c to 00856373 has its CatchHandler @ 00857bdc */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008563c4 to 008563cb has its CatchHandler @ 00857bd8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085641c to 00856423 has its CatchHandler @ 00857bd4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856474 to 0085647b has its CatchHandler @ 00857bd0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008564cc to 008564d3 has its CatchHandler @ 00857bcc */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856524 to 0085652b has its CatchHandler @ 00857bc8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085657c to 00856583 has its CatchHandler @ 00857bc4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008565d4 to 008565db has its CatchHandler @ 00857bc0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085662c to 00856633 has its CatchHandler @ 00857bbc */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856684 to 0085668b has its CatchHandler @ 00857bb8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008566dc to 008566e3 has its CatchHandler @ 00857bb4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856734 to 0085673b has its CatchHandler @ 00857bb0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085678c to 00856793 has its CatchHandler @ 00857bac */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008567e4 to 008567eb has its CatchHandler @ 00857ba8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085683c to 00856843 has its CatchHandler @ 00857ba4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856894 to 0085689b has its CatchHandler @ 00857ba0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008568ec to 008568f3 has its CatchHandler @ 00857b9c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856944 to 0085694b has its CatchHandler @ 00857b98 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085699c to 008569a3 has its CatchHandler @ 00857b94 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008569f4 to 008569fb has its CatchHandler @ 00857b90 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856a4c to 00856a53 has its CatchHandler @ 00857b8c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856aa4 to 00856aab has its CatchHandler @ 00857b88 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856afc to 00856b03 has its CatchHandler @ 00857b84 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856b54 to 00856b5b has its CatchHandler @ 00857b80 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856bac to 00856bb3 has its CatchHandler @ 00857b7c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856c04 to 00856c0b has its CatchHandler @ 00857b78 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856c5c to 00856c63 has its CatchHandler @ 00857b74 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856cb4 to 00856cbb has its CatchHandler @ 00857b70 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856d0c to 00856d13 has its CatchHandler @ 00857b6c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856d64 to 00856d6b has its CatchHandler @ 00857b68 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856dbc to 00856dc3 has its CatchHandler @ 00857b64 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856e14 to 00856e1b has its CatchHandler @ 00857b60 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856e6c to 00856e73 has its CatchHandler @ 00857b5c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856ec4 to 00856ecb has its CatchHandler @ 00857b58 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856f1c to 00856f23 has its CatchHandler @ 00857b54 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856f74 to 00856f7b has its CatchHandler @ 00857b50 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00856fcc to 00856fd3 has its CatchHandler @ 00857b4c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857024 to 0085702b has its CatchHandler @ 00857b48 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085707c to 00857083 has its CatchHandler @ 00857b44 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008570d4 to 008570db has its CatchHandler @ 00857b40 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085712c to 00857133 has its CatchHandler @ 00857b3c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857184 to 0085718b has its CatchHandler @ 00857b38 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008571dc to 008571e3 has its CatchHandler @ 00857b34 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857234 to 0085723b has its CatchHandler @ 00857b30 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085728c to 00857293 has its CatchHandler @ 00857b2c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008572e4 to 008572eb has its CatchHandler @ 00857b28 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085733c to 00857343 has its CatchHandler @ 00857b24 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857394 to 0085739b has its CatchHandler @ 00857b20 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008573ec to 008573f3 has its CatchHandler @ 00857b1c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857444 to 0085744b has its CatchHandler @ 00857b18 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085749c to 008574a3 has its CatchHandler @ 00857b14 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008574f4 to 008574fb has its CatchHandler @ 00857b10 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085754c to 00857553 has its CatchHandler @ 00857b0c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008575a4 to 008575ab has its CatchHandler @ 00857b08 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008575fc to 00857603 has its CatchHandler @ 00857b04 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857654 to 0085765b has its CatchHandler @ 00857b00 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008576ac to 008576b3 has its CatchHandler @ 00857afc */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857704 to 0085770b has its CatchHandler @ 00857af8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085775c to 00857763 has its CatchHandler @ 00857af4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008577b4 to 008577bb has its CatchHandler @ 00857af0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085780c to 00857813 has its CatchHandler @ 00857aec */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857864 to 0085786b has its CatchHandler @ 00857ae8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008578bc to 008578c3 has its CatchHandler @ 00857ae4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857914 to 0085791b has its CatchHandler @ 00857ae0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 0085796c to 00857973 has its CatchHandler @ 00857adc */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 008579c4 to 008579cb has its CatchHandler @ 00857ad8 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857a1c to 00857a23 has its CatchHandler @ 00857ad4 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
                    /* try { // try from 00857a74 to 00857a7b has its CatchHandler @ 00857ad0 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00857c60  FUN_00857c60 =====

void FUN_00857c60(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00857cb0  FUN_00857cb0 =====

/* WARNING: Removing unreachable block (ram,0x00857d6c) */
/* WARNING: Removing unreachable block (ram,0x00857d7c) */

void FUN_00857cb0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)operator_new(0xa0);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  puVar1 = puVar4 + 3;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_0098efb8;
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
                    /* try { // try from 00857d18 to 00857d23 has its CatchHandler @ 00857dc0 */
  FUN_008cbe60(puVar1,&local_58);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *puVar1 = &PTR_FUN_0099d730;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar4;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00857e00  FUN_00857e00 =====

void FUN_00857e00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098efb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00857e10  FUN_00857e10 =====

void FUN_00857e10(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098efb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00857e40  FUN_00857e40 =====

void FUN_00857e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00857e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00857e4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00857e50  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

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
  undefined4 local_d0 [2];
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
                    /* try { // try from 00857ea0 to 00857eab has its CatchHandler @ 008584d0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0098f008;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
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
                    /* try { // try from 00857f1c to 00857f27 has its CatchHandler @ 00858500 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_f60,0,0x6c8);
  puVar5 = PTR_VTT_0099ed68;
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = *(undefined **)(PTR_VTT_0099ed68 + 0x20);
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  local_878 = 0;
  uStack_f78 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_898);
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00488920;
  local_9f8 = _DAT_00488918;
  local_f2b = _s__00375408;
  uStack_ae8 = _UNK_00371598;
  local_af0 = _DAT_00371590;
  uStack_a00 = _UNK_00488910;
  local_a08 = _DAT_00488908;
  local_e14 = 0;
  uStack_a10 = _UNK_00488900;
  local_a18 = _DAT_004888f8;
  uStack_a20 = _UNK_004888f0;
  local_a28 = _DAT_004888e8;
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
  local_f80 = PTR_vtable_0099ed60 + 0x20;
  local_8a0 = 0;
                    /* try { // try from 00858314 to 00858327 has its CatchHandler @ 00858500 */
  facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
            ((ReanimatedViewCustomProps *)local_898,(PropsParserContext *)local_fe0,
             (ReanimatedViewCustomProps *)&local_f80,(RawProps *)&local_f8);
  FUN_0078917c(local_898,puVar5 + 8);
  FUN_0078917c(&local_f80,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 0085842c to 00858437 has its CatchHandler @ 00858504 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
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
  folly::dynamic::folly::dynamic::destroy(local_d0);
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


// ===== 00858508  FUN_00858508 =====

void FUN_00858508(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0085852c  FUN_0085852c =====

undefined * FUN_0085852c(void)

{
  return PTR_ReanimatedViewComponentName_0099ed58;
}


// ===== 00858538  FUN_00858538 =====

undefined * FUN_00858538(void)

{
  return PTR_ReanimatedViewComponentName_0099ed58;
}


// ===== 00858544  FUN_00858544 =====

undefined8 FUN_00858544(void)

{
  return 0x61;
}


// ===== 0085854c  FUN_0085854c =====

void FUN_0085854c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0098f0a8;
                    /* try { // try from 008585b8 to 008585c7 has its CatchHandler @ 008586a0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0098f0f8;
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
                    /* try { // try from 00858654 to 0085865f has its CatchHandler @ 00858690 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008586d0  FUN_008586d0 =====

void FUN_008586d0(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_0098f0a8;
                    /* try { // try from 00858728 to 00858737 has its CatchHandler @ 00858878 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_0098f0f8;
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
                    /* try { // try from 008587bc to 008587cb has its CatchHandler @ 00858890 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 008587dc to 008587eb has its CatchHandler @ 00858868 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00858828 to 00858833 has its CatchHandler @ 00858890 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008588b8  FUN_008588b8 =====

void FUN_008588b8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008588c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008588cc  FUN_008588cc =====

void FUN_008588cc(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  ReanimatedViewCustomProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
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
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
                                   ), iVar6 != 0)) {
                    /* try { // try from 00858d00 to 00858d03 has its CatchHandler @ 00858d30 */
      FUN_0085947c();
      __cxa_atexit(FUN_0085942c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (ReanimatedViewCustomProps *)*param_4;
    if (pRVar12 == (ReanimatedViewCustomProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
                                     ), iVar6 != 0)) {
                    /* try { // try from 00858c80 to 00858c83 has its CatchHandler @ 00858d48 */
        FUN_0085947c();
        __cxa_atexit(FUN_0085942c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
                           );
      }
      pRVar12 = *(ReanimatedViewCustomProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
      ;
    }
    plVar8 = (long *)operator_new(0x700);
    this = (ReanimatedViewCustomProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0098f210;
                    /* try { // try from 008589ac to 008589bf has its CatchHandler @ 00858dbc */
    facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 008589c4 to 008589d7 has its CatchHandler @ 00858dd4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00858a00:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
                                       ), iVar6 != 0)) {
                    /* try { // try from 00858cc0 to 00858cc3 has its CatchHandler @ 00858d34 */
          FUN_0085947c();
          __cxa_atexit(FUN_0085942c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e748
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00858a68 to 00858a7b has its CatchHandler @ 00858d60 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00858ab4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00858ab4;
        }
        if (plVar8 != (long *)0x0) goto LAB_00858ac8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00858a1c to 00858a2f has its CatchHandler @ 00858d88 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00858ac8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00858ac8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008589e4 to 008589ef has its CatchHandler @ 00858d5c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_ReanimatedViewComponentName_0099ed58,pcVar9);
      if (iVar6 != 0) goto LAB_00858a00;
      bVar3 = false;
    }
                    /* try { // try from 00858af4 to 00858af7 has its CatchHandler @ 00858dd4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00858b04 to 00858b1f has its CatchHandler @ 00858d84 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00858c60 to 00858c6f has its CatchHandler @ 00858d7c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00858e20;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00858c40 to 00858c4f has its CatchHandler @ 00858de0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00858e20;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 00858ba0 to 00858bab has its CatchHandler @ 00858de8 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00858bb0 to 00858bc7 has its CatchHandler @ 00858dec */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00858bd8 to 00858be3 has its CatchHandler @ 00858ddc */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00858e20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00858e24  FUN_00858e24 =====

void FUN_00858e24(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00858e2c  FUN_00858e2c =====

void FUN_00858e2c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00858e34  FUN_00858e34 =====

void FUN_00858e34(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
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
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 00858e7c to 00858e83 has its CatchHandler @ 00859168 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0098f260;
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
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 00858ec0 to 00858ecf has its CatchHandler @ 0085913c */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00858ee0 to 00858ee7 has its CatchHandler @ 0085912c */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_0098f2b0;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00858f98 to 00858f9f has its CatchHandler @ 0085911c */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 00858fec to 00859003 has its CatchHandler @ 008590ec */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 00859058 to 00859063 has its CatchHandler @ 008590cc */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00859190  FUN_00859190 =====

void FUN_00859190(void)

{
  return;
}


// ===== 00859194  FUN_00859194 =====

void FUN_00859194(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008591e4  FUN_008591e4 =====

void FUN_008591e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f0a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008591f4  FUN_008591f4 =====

void FUN_008591f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f0a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00859224  FUN_00859224 =====

void FUN_00859224(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085922c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00859230  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00859234  FUN_00859234 =====

void FUN_00859234(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008592f4  FUN_008592f4 =====

void FUN_008592f4(long param_1)

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


// ===== 0085935c  FUN_0085935c =====

bool FUN_0085935c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00859374  FUN_00859374 =====

bool FUN_00859374(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0085938c  FUN_0085938c =====

void FUN_0085938c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008593dc  FUN_008593dc =====

void FUN_008593dc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085942c  FUN_0085942c =====

void FUN_0085942c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085947c  FUN_0085947c =====

void FUN_0085947c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0098f1c0;
  memset(__s,0,0x6e8);
                    /* try { // try from 008594b8 to 008594cb has its CatchHandler @ 0085953c */
  FUN_00788b10(__s,PTR_VTT_0099ed68 + 0x10);
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
  puVar1 = PTR_vtable_0099ed60;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27ReanimatedViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25ReanimatedViewCustomPropsENS0_32ReanimatedViewCustomEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e740
  ;
  *(undefined1 *)(puVar2 + 0xdf) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00859558  FUN_00859558 =====

void FUN_00859558(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f1c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00859568  FUN_00859568 =====

void FUN_00859568(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f1c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00859598  FUN_00859598 =====

void FUN_00859598(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ed68 + 8);
  return;
}


// ===== 008595ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008595b0  FUN_008595b0 =====

void FUN_008595b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f210;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008595c0  FUN_008595c0 =====

void FUN_008595c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f210;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008595f0  FUN_008595f0 =====

void FUN_008595f0(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ed68 + 8);
  return;
}


// ===== 00859604  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00859608  FUN_00859608 =====

void FUN_00859608(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00859658  FUN_00859658 =====

void FUN_00859658(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f260;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00859668  FUN_00859668 =====

void FUN_00859668(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f260;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00859698  FUN_00859698 =====

void FUN_00859698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008596a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008596a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008596a8  FUN_008596a8 =====

void FUN_008596a8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00859760  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNCSliderComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNCSliderComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNCSliderComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  ComponentDescriptor *this_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_15f0 [2];
  undefined8 *local_15e8;
  void *local_15e0;
  void *pvStack_15d8;
  undefined8 local_15d0;
  void *pvStack_15c8;
  void *local_15c0;
  undefined8 uStack_15b8;
  void *local_15b0;
  void *pvStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined *local_1590;
  undefined8 uStack_1588;
  undefined8 local_1580;
  undefined8 uStack_1578;
  undefined4 local_1570 [2];
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined4 local_1548;
  undefined4 local_1540;
  undefined1 local_153c;
  undefined8 local_153b;
  undefined8 local_1533;
  undefined8 uStack_152b;
  undefined8 local_1523;
  undefined8 uStack_151b;
  undefined8 local_1513;
  undefined8 uStack_150b;
  undefined8 local_1503;
  undefined6 uStack_14fb;
  undefined2 uStack_14f5;
  undefined6 uStack_14f3;
  undefined8 uStack_14ed;
  undefined4 local_14e5;
  undefined8 local_14e1;
  undefined1 local_14d9;
  undefined1 uStack_14d8;
  undefined7 uStack_14d7;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  undefined8 local_1498;
  undefined8 uStack_1490;
  undefined8 local_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 local_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined4 uStack_1450;
  undefined4 uStack_144c;
  undefined4 uStack_1448;
  undefined4 uStack_1444;
  undefined4 uStack_1440;
  undefined4 uStack_143c;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined4 local_1428;
  undefined1 local_1424;
  undefined4 local_1420;
  undefined1 local_141c;
  undefined4 local_1418;
  undefined1 local_1414;
  undefined4 local_1410;
  undefined1 local_140c;
  undefined4 local_1408;
  undefined1 local_1404;
  undefined4 local_1400;
  undefined1 local_13fc;
  undefined4 local_13f8;
  undefined1 local_13f4;
  undefined4 local_13f0;
  undefined1 local_13ec;
  undefined4 local_13e8;
  undefined1 local_13e4;
  undefined4 local_13e0;
  undefined1 local_13dc;
  undefined4 local_13d8;
  undefined1 local_13d4;
  undefined4 local_13d0;
  undefined1 local_13cc;
  undefined4 local_13c8;
  undefined1 local_13c4;
  undefined4 local_13c0;
  undefined1 local_13bc;
  undefined4 local_13b8;
  undefined1 local_13b4;
  undefined4 local_13b0;
  undefined1 local_13ac;
  undefined1 local_13a8;
  undefined1 local_13a4;
  undefined1 local_1398;
  undefined8 local_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 local_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined1 uStack_1358;
  undefined7 local_1357;
  undefined1 uStack_1350;
  undefined8 uStack_134f;
  undefined8 local_1344;
  undefined8 uStack_133c;
  undefined8 uStack_1334;
  undefined8 uStack_132c;
  undefined8 local_1324;
  undefined8 uStack_131c;
  undefined8 uStack_1314;
  undefined8 uStack_130c;
  undefined8 local_1304;
  undefined8 uStack_12fc;
  undefined8 uStack_12f4;
  undefined5 uStack_12ec;
  undefined3 local_12e7;
  undefined5 uStack_12e4;
  undefined1 local_12dc;
  undefined1 local_12d8;
  undefined1 local_12d4;
  undefined1 local_12d0;
  undefined1 local_12cc;
  undefined1 local_12c8;
  undefined1 local_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined4 local_1290;
  undefined1 local_128c;
  undefined4 local_128b;
  undefined1 local_1287;
  undefined1 local_1286;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined7 uStack_1258;
  undefined4 uStack_1251;
  undefined8 local_124c;
  undefined1 local_1244;
  undefined1 local_123c;
  undefined1 local_1238;
  undefined1 local_1230;
  undefined1 local_122c;
  undefined1 local_1224;
  undefined1 local_1220;
  undefined1 local_1218;
  undefined1 local_1214;
  undefined1 local_120c;
  undefined1 local_1208;
  undefined1 local_1200;
  undefined1 local_11fc;
  undefined1 local_11f4;
  undefined1 local_11f0;
  undefined1 local_11e8;
  undefined1 local_11e4;
  undefined1 local_11dc;
  undefined1 local_11d8;
  undefined1 local_11d0;
  undefined1 local_11cc;
  undefined1 local_11c4;
  undefined1 local_11c0;
  undefined1 local_11b8;
  undefined1 local_11b4;
  undefined1 local_11ac;
  undefined1 local_11a8;
  undefined1 local_11a4;
  undefined1 local_11a0;
  undefined1 local_119c;
  undefined1 local_1198;
  undefined1 local_1194;
  undefined1 local_1190;
  undefined1 local_118c;
  undefined1 local_1188;
  undefined1 local_1184;
  undefined1 local_1180;
  undefined1 local_117c;
  undefined1 local_1178;
  undefined1 local_1174;
  undefined1 local_1170;
  undefined1 local_116c;
  undefined1 local_1168;
  undefined1 local_1164;
  undefined1 local_1160;
  undefined1 local_115c;
  undefined1 local_1158;
  undefined1 local_1154;
  undefined1 local_1150;
  undefined1 local_114c;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined2 local_1118;
  undefined8 local_1114;
  undefined1 local_110c;
  undefined8 local_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined1 local_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
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
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined6 uStack_ff0;
  undefined2 uStack_fea;
  undefined6 uStack_fe8;
  undefined1 local_fe0;
  undefined1 local_fdc;
  undefined1 local_fd8;
  undefined8 local_fd4;
  undefined8 uStack_fcc;
  undefined1 local_fc4;
  undefined8 local_fc0;
  undefined2 local_fb8;
  undefined1 local_fb6;
  undefined4 local_fb4;
  undefined1 local_fb0;
  undefined1 local_f50;
  undefined1 local_f48;
  undefined1 local_ee8;
  undefined4 local_ee0;
  undefined2 local_edc;
  undefined1 local_ed8;
  undefined1 local_ed4;
  undefined1 local_ed0;
  undefined1 local_ecc;
  undefined1 local_ec8;
  undefined1 local_ec4;
  undefined1 local_ec0;
  undefined1 local_ebc;
  undefined1 local_eb8;
  undefined1 local_eb4;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined4 local_e80;
  undefined4 local_e78;
  undefined8 local_e70;
  undefined8 local_e68;
  undefined8 local_e60;
  undefined1 local_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 local_e40;
  undefined8 local_e38;
  undefined4 local_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined4 local_df8;
  undefined8 local_df0;
  undefined8 local_de8;
  undefined8 local_de0;
  undefined4 local_dd8;
  undefined8 local_dd0;
  undefined4 local_dc8;
  undefined8 local_dc0;
  undefined8 local_db8;
  undefined8 local_db0;
  undefined1 local_da8;
  undefined8 local_da0;
  undefined8 local_d98;
  undefined8 local_d90;
  undefined8 local_d88;
  undefined4 local_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined4 local_d48;
  undefined8 local_d40;
  undefined8 local_d38;
  undefined8 local_d30;
  undefined4 local_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined4 uStack_d08;
  undefined4 local_d04;
  undefined4 uStack_d00;
  undefined8 uStack_cfc;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined8 local_ce0;
  undefined1 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined4 local_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined4 local_c50;
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined1 local_c30;
  undefined8 local_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 local_c10;
  undefined4 local_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined4 local_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined4 local_ba8;
  undefined4 local_ba0 [2];
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
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
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x98);
  pvStack_15c8 = (void *)0x0;
  local_15d0 = 0;
  uStack_15b8 = 0;
  local_15c0 = (void *)0x0;
  pvStack_15a8 = (void *)0x0;
  local_15b0 = (void *)0x0;
  uStack_1598 = 0;
  uStack_15a0 = 0;
  pvStack_15d8 = (void *)0x0;
  local_15e0 = (void *)0x0;
                    /* try { // try from 008597b4 to 008597bf has its CatchHandler @ 00859f98 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_15e0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_0098f390;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
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
                    /* try { // try from 0085982c to 0085983f has its CatchHandler @ 00859fc8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_15f0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_15e8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_1570,0,0x9d0);
  local_ba0[0] = 5;
  local_b88 = 0;
  local_1590 = *(undefined **)(PTR_VTT_0099ed80 + 0x20);
  local_1570[0] = 5;
  uStack_1578 = 0;
  local_1580 = 0;
  uStack_1588 = 0;
  local_b80 = 0;
  uStack_b78 = 0x3f800000;
  uStack_b90 = 0;
  local_b98 = 0;
  uStack_1560 = 0;
  local_1568 = 0;
  uStack_1550 = 0;
  local_1558 = 0;
  local_1548 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_ba0);
  local_153c = 0;
  local_14e1 = 0;
  uStack_1000 = _UNK_00488920;
  local_1008 = _DAT_00488918;
  local_153b = _s__00375408;
  uStack_10f8 = _UNK_00371598;
  local_1100 = _DAT_00371590;
  uStack_1010 = _UNK_00488910;
  local_1018 = _DAT_00488908;
  local_1424 = 0;
  uStack_1020 = _UNK_00488900;
  local_1028 = _DAT_004888f8;
  uStack_1030 = _UNK_004888f0;
  local_1038 = _DAT_004888e8;
  uStack_fe8 = 0;
  local_141c = 0;
  uStack_1450 = 0;
  local_1458 = 0;
  uStack_143c = 0;
  uStack_1460 = 0;
  local_1468 = 0;
  uStack_ff0 = 0;
  uStack_fea = 0;
  local_ff8 = 0;
  local_1540 = 0x10410710;
  local_14e5 = 0x40004;
  uStack_1444 = 0;
  uStack_1440 = 0;
  uStack_144c = 0;
  uStack_1448 = 0;
  uStack_1430 = 0;
  local_1438 = 0;
  local_1428 = 0x7fc00000;
  local_1420 = 0x7fc00000;
  local_1418 = 0x7fc00000;
  local_1410 = 0x7fc00000;
  local_1408 = 0x7fc00000;
  local_1400 = 0x7fc00000;
  local_13f8 = 0x7fc00000;
  local_13f0 = 0x7fc00000;
  local_13e8 = 0x7fc00000;
  local_13e0 = 0x7fc00000;
  local_13d8 = 0x7fc00000;
  local_13d0 = 0x7fc00000;
  local_13c8 = 0x7fc00000;
  local_13c0 = 0x7fc00000;
  local_13b8 = 0x7fc00000;
  local_13b0 = 0x7fc00000;
  uStack_134f = 0;
  uStack_1350 = 0;
  uStack_133c = 0;
  local_1344 = 0;
  uStack_132c = 0;
  uStack_1334 = 0;
  uStack_131c = 0;
  local_1324 = 0;
  uStack_130c = 0;
  uStack_1314 = 0;
  uStack_12fc = 0;
  local_1304 = 0;
  uStack_12ec = 0;
  uStack_12f4 = 0;
  local_12e7 = 0;
  uStack_12e4 = 0;
  local_128c = 1;
  local_128b = 0;
  local_1286 = 0x23;
  local_124c = 0x3f800000;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1120 = 0;
  uStack_1128 = 0;
  uStack_1140 = 0;
  local_1148 = 0;
  local_1114 = 0;
  uStack_10e0 = 0;
  local_10e8 = 0;
  uStack_10d0 = 0;
  uStack_10d8 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  uStack_10b0 = 0;
  uStack_10b8 = 0;
  uStack_10a0 = 0;
  local_10a8 = 0;
  uStack_1090 = 0;
  uStack_1098 = 0;
  uStack_1080 = 0;
  local_1088 = 0;
  uStack_1070 = 0;
  uStack_1078 = 0;
  uStack_1060 = 0;
  local_1068 = 0;
  uStack_1050 = 0;
  uStack_1058 = 0;
  uStack_1040 = 0;
  local_1048 = 0;
  uStack_14d7 = 0;
  uStack_152b = 0;
  local_1533 = 0;
  uStack_151b = 0;
  local_1523 = 0;
  uStack_150b = 0;
  local_1513 = 0;
  uStack_14fb = 0;
  local_1503 = 0;
  uStack_14ed = 0;
  uStack_14f5 = 0;
  uStack_14f3 = 0;
  local_14d9 = 0;
  uStack_14d8 = 0;
  uStack_14c8 = 0;
  uStack_14d0 = 0;
  local_14b8 = 0;
  uStack_14c0 = 0;
  local_14a8 = 0;
  uStack_14b0 = 0;
  local_1498 = 0;
  uStack_14a0 = 0;
  local_1488 = 0;
  uStack_1490 = 0;
  uStack_1478 = 0;
  uStack_1480 = 0;
  local_1470 = 0;
  local_1414 = 0;
  local_140c = 0;
  local_1404 = 0;
  local_13fc = 0;
  local_13f4 = 0;
  local_13ec = 0;
  local_13e4 = 0;
  local_13dc = 0;
  local_13d4 = 0;
  local_13cc = 0;
  local_13c4 = 0;
  local_13bc = 0;
  local_13b4 = 0;
  local_13ac = 0;
  local_13a8 = 0;
  local_13a4 = 0;
  local_1398 = 0;
  local_12dc = 0;
  local_12d8 = 0;
  local_12d4 = 0;
  local_12d0 = 0;
  local_12cc = 0;
  local_12c8 = 0;
  local_12b0 = 0;
  uStack_1388 = 0;
  local_1390 = 0;
  uStack_1378 = 0;
  uStack_1380 = 0;
  uStack_1368 = 0;
  local_1370 = 0;
  uStack_1358 = 0;
  local_1357 = 0;
  uStack_1360 = 0;
  uStack_12a0 = 0;
  local_12a8 = 0;
  local_1298 = 0;
  local_1290 = 0;
  local_1287 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  uStack_1270 = 0;
  uStack_1258 = 0;
  uStack_1251 = 0;
  local_1260 = 0;
  local_1244 = 0;
  local_123c = 0;
  local_1238 = 0;
  local_1230 = 0;
  local_122c = 0;
  local_1224 = 0;
  local_1220 = 0;
  local_1218 = 0;
  local_1214 = 0;
  local_120c = 0;
  local_1208 = 0;
  local_1200 = 0;
  local_11fc = 0;
  local_11f4 = 0;
  local_11f0 = 0;
  local_11e8 = 0;
  local_11e4 = 0;
  local_11dc = 0;
  local_11d8 = 0;
  local_11d0 = 0;
  local_11cc = 0;
  local_11c4 = 0;
  local_11c0 = 0;
  local_11b8 = 0;
  local_11b4 = 0;
  local_11ac = 0;
  local_11a8 = 0;
  local_11a4 = 0;
  local_11a0 = 0;
  local_119c = 0;
  local_1198 = 0;
  local_1194 = 0;
  local_1190 = 0;
  local_118c = 0;
  local_1188 = 0;
  local_1184 = 0;
  local_1180 = 0;
  local_117c = 0;
  local_1178 = 0;
  local_1174 = 0;
  local_1170 = 0;
  local_116c = 0;
  local_1168 = 0;
  local_1164 = 0;
  local_1160 = 0;
  local_115c = 0;
  local_1158 = 0;
  local_1154 = 0;
  local_1150 = 0;
  local_114c = 0;
  local_1108 = 0;
  local_1118 = 0;
  local_110c = 0;
  local_10f0 = 0;
  local_fe0 = 0;
  local_fdc = 0;
  local_fd8 = 0;
  local_fc0 = 0;
  uStack_fcc = 0;
  local_fd4 = 0;
  local_fc4 = 0;
  local_fb8 = 0x101;
  local_fb6 = 0;
  local_fb4 = 0;
  local_fb0 = 0;
  local_f50 = 0;
  local_f48 = 0;
  local_ee8 = 0;
  local_ed8 = 0;
  local_ed4 = 0;
  local_ed0 = 0;
  local_ecc = 0;
  local_ec8 = 0;
  local_ec4 = 0;
  local_ec0 = 0;
  local_ebc = 0;
  local_eb8 = 0;
  local_eb4 = 0;
  local_edc = 0;
  local_ee0 = 0;
  local_1590 = PTR_vtable_0099ed78 + 0x20;
  local_e78 = 0;
  local_e40 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
  uStack_e00 = 0;
  uStack_e08 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  uStack_d50 = 0;
  uStack_d58 = 0;
  uStack_d70 = 0;
  local_d78 = 0;
  uStack_cfc = 0;
  uStack_d00 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  uStack_c80 = 0;
  uStack_c88 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  local_e50 = 0;
  local_e48 = 0;
  uStack_ea8 = 0;
  local_eb0 = 0;
  uStack_e98 = 0;
  local_ea0 = 0;
  uStack_e88 = 0;
  local_e90 = 0;
  local_e80 = 0;
  local_e60 = 0;
  local_e70 = 0;
  local_e68 = 0;
  local_e58 = 0;
  local_e38 = _s__003752b8;
  local_e30 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_d98 = 0;
  local_da0 = 0;
  local_d90 = 0;
  local_df8 = 0;
  local_de8 = 0;
  local_df0 = 0;
  local_dd8 = 0;
  local_de0 = 0;
  local_da8 = 0;
  local_db8 = 0;
  local_dc0 = 0;
  local_db0 = 0;
  local_d88 = _s__003752b8;
  local_d80 = 0;
  local_cc0 = 0;
  local_cd0 = 0;
  local_cc8 = 0;
  local_d48 = 0;
  local_d38 = 0;
  local_d40 = 0;
  local_d28 = 0;
  local_d30 = 0;
  uStack_d08 = 0;
  local_d04 = 0;
  uStack_d10 = 0;
  uStack_d18 = 0;
  local_d20 = 0;
  local_ce8 = 0;
  local_cf0 = 0;
  local_cd8 = 0;
  local_ce0 = 0;
  local_cb8 = _s__003752b8;
  local_cb0 = 0;
  local_c20 = 0;
  local_c28 = 0;
  local_c18 = 0;
  local_c78 = 0;
  local_c50 = 0;
  uStack_c58 = 0;
  local_c60 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  local_c40 = 0;
  local_c48 = 0;
  local_c30 = 0;
  local_c38 = 0;
  local_c10 = _s__003752b8;
  local_c08 = 0;
  local_bd0 = 0;
  uStack_bd8 = 0;
  local_be0 = 0;
  uStack_be8 = 0;
  local_bf0 = 0;
  uStack_bf8 = 0;
  local_c00 = 0;
  uStack_bb0 = 0;
  local_bb8 = 0;
  uStack_bc0 = 0;
  local_bc8 = 0;
  local_ba8 = 0;
                    /* try { // try from 00859d6c to 00859d7f has its CatchHandler @ 00859fc8 */
  ::facebook::react::RNCSliderProps::RNCSliderProps
            ((RNCSliderProps *)local_ba0,(PropsParserContext *)local_15f0,
             (RNCSliderProps *)&local_1590,(RawProps *)&local_f8);
  FUN_0085b110(local_ba0);
  FUN_0085b110(&local_1590);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar4 = local_120;
  puVar6 = (undefined8 *)local_110;
  while (puVar6 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar6[6];
    pvVar8 = (void *)*puVar6;
    local_120 = pvVar4;
    if ((plVar7 == (long *)0x0) || (lVar5 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar5 != 0)
       ) {
      bVar2 = *(byte *)(puVar6 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar2 = *(byte *)(puVar6 + 2);
    }
    if ((bVar2 & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    pvVar4 = local_120;
    puVar6 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = local_80;
  pvVar4 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar4 != pvVar8) {
      if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 00859e84 to 00859e8f has its CatchHandler @ 00859fcc */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar4 + -8)])
                  (&local_1590,(void *)((long)pvVar4 + -0x38));
      }
      *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
      pvVar4 = (void *)((long)pvVar4 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_15b0 != (void *)0x0) {
    pvStack_15a8 = local_15b0;
    operator_delete(local_15b0);
  }
  if (pvStack_15c8 != (void *)0x0) {
    local_15c0 = pvStack_15c8;
    operator_delete(pvStack_15c8);
  }
  if (local_15e0 != (void *)0x0) {
    pvStack_15d8 = local_15e0;
    operator_delete(local_15e0);
  }
  *(undefined ***)this_00 = &PTR_FUN_0098f2e8;
                    /* try { // try from 00859efc to 00859f03 has its CatchHandler @ 00859f88 */
  puVar6 = (undefined8 *)operator_new(0x60);
  *puVar6 = &PTR_FUN_0098f408;
  uVar1 = *(undefined8 *)(this_00 + 0x18);
  lVar5 = *(long *)(this_00 + 0x20);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = uVar1;
  puVar6[4] = lVar5;
  if (lVar5 != 0) {
    FUN_00757d00(1,lVar5 + 8);
  }
  *(undefined4 *)((long)puVar6 + 0x54) = 0;
  *(undefined4 *)(puVar6 + 0xb) = 0;
  *(undefined8 **)(this_00 + 0x88) = puVar6 + 3;
  *(undefined8 **)(this_00 + 0x90) = puVar6;
  *in_x8 = this_00;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  *(undefined8 *)((long)puVar6 + 0x49) = 0;
  *(undefined8 *)((long)puVar6 + 0x41) = 0;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00859fd0  FUN_00859fd0 =====

void FUN_00859fd0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x90);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_007bae18(param_1);
  return;
}


// ===== 0085a020  FUN_0085a020 =====

void FUN_0085a020(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x90);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_007bae18(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085a078  FUN_0085a078 =====

undefined * FUN_0085a078(void)

{
  return PTR_RNCSliderComponentName_0099ed70;
}


// ===== 0085a084  FUN_0085a084 =====

undefined * FUN_0085a084(void)

{
  return PTR_RNCSliderComponentName_0099ed70;
}


// ===== 0085a090  FUN_0085a090 =====

undefined8 FUN_0085a090(void)

{
  return 0x61;
}


// ===== 0085a098  FUN_0085a098 =====

void FUN_0085a098(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = tpidr_el0;
  lVar11 = *(long *)(lVar7 + 0x28);
  uVar9 = (**(code **)(*param_2 + 0x20))();
  puVar10 = (undefined8 *)operator_new(0x410);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar10 + 3);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_0098f458;
                    /* try { // try from 0085a104 to 0085a113 has its CatchHandler @ 0085a204 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar9);
  lVar12 = puVar10[4];
  puVar10[3] = &PTR_FUN_0098f4a8;
  uVar3 = *(uint *)((long)puVar10 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar12 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar10 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar12 + 0x50) & 0x30000000) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(char *)(lVar12 + 0x5b4) != '\0') {
      uVar9 = *(undefined4 *)(lVar12 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar10 + 10) = uVar9;
  puVar8 = PTR_vtable_0099ed88;
  cVar4 = *(char *)(lVar12 + 0x6b0);
  cVar5 = *(char *)(lVar12 + 0x6b1);
  cVar6 = *(char *)(lVar12 + 0x1e8);
  puVar10[0x81] = 0;
  puVar10[0x80] = 0;
  lVar12 = *param_2;
  puVar10[3] = puVar8 + 0x10;
  *(uint *)((long)puVar10 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 0085a1b8 to 0085a1c3 has its CatchHandler @ 0085a1f4 */
  (**(code **)(lVar12 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar10;
  if (*(long *)(lVar7 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085a234  FUN_0085a234 =====

void FUN_0085a234(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar9 = (long *)operator_new(0x410);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar9 + 3);
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_0098f458;
                    /* try { // try from 0085a28c to 0085a29b has its CatchHandler @ 0085a3f4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar10 = plVar9[4];
  plVar9[3] = (long)&PTR_FUN_0098f4a8;
  uVar3 = *(uint *)((long)plVar9 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar10 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar9 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar10 + 0x50) & 0x30000000) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (*(char *)(lVar10 + 0x5b4) != '\0') {
      uVar11 = *(undefined4 *)(lVar10 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar9 + 10) = uVar11;
  puVar8 = PTR_vtable_0099ed88;
  cVar4 = *(char *)(lVar10 + 0x6b0);
  cVar5 = *(char *)(lVar10 + 0x6b1);
  cVar6 = *(char *)(lVar10 + 0x1e8);
  plVar9[0x81] = 0;
  plVar9[0x80] = 0;
  plVar9[3] = (long)(puVar8 + 0x10);
  *(uint *)((long)plVar9 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar9;
                    /* try { // try from 0085a338 to 0085a347 has its CatchHandler @ 0085a40c */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar9;
  FUN_00757d00(1,plVar9 + 1);
                    /* try { // try from 0085a358 to 0085a367 has its CatchHandler @ 0085a3e4 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar9 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar10 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar10 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0085a3a4 to 0085a3af has its CatchHandler @ 0085a40c */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085a434  FUN_0085a434 =====

void FUN_0085a434(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 0085a440  FUN_0085a440 =====

void FUN_0085a440(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNCSliderProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNCSliderProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
                                   ), iVar6 != 0)) {
                    /* try { // try from 0085a874 to 0085a877 has its CatchHandler @ 0085a8a4 */
      FUN_0085b594();
      __cxa_atexit(FUN_0085b788,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNCSliderProps *)*param_4;
    if (pRVar12 == (RNCSliderProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
                                     ), iVar6 != 0)) {
                    /* try { // try from 0085a7f4 to 0085a7f7 has its CatchHandler @ 0085a8bc */
        FUN_0085b594();
        __cxa_atexit(FUN_0085b788,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
                           );
      }
      pRVar12 = *(RNCSliderProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
      ;
    }
    plVar8 = (long *)operator_new(0xa08);
    this = (RNCSliderProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0098f5c0;
                    /* try { // try from 0085a520 to 0085a533 has its CatchHandler @ 0085a930 */
    facebook::react::RNCSliderProps::RNCSliderProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 0085a538 to 0085a54b has its CatchHandler @ 0085a948 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0085a574:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
                                       ), iVar6 != 0)) {
                    /* try { // try from 0085a834 to 0085a837 has its CatchHandler @ 0085a8a8 */
          FUN_0085b594();
          __cxa_atexit(FUN_0085b788,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e758
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0085a5dc to 0085a5ef has its CatchHandler @ 0085a8d4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0085a628:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0085a628;
        }
        if (plVar8 != (long *)0x0) goto LAB_0085a63c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0085a590 to 0085a5a3 has its CatchHandler @ 0085a8fc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0085a63c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0085a63c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0085a558 to 0085a563 has its CatchHandler @ 0085a8d0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNCSliderComponentName_0099ed70,pcVar9);
      if (iVar6 != 0) goto LAB_0085a574;
      bVar3 = false;
    }
                    /* try { // try from 0085a668 to 0085a66b has its CatchHandler @ 0085a948 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0085a678 to 0085a693 has its CatchHandler @ 0085a8f8 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0085a7d4 to 0085a7e3 has its CatchHandler @ 0085a8f0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0085a994;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0085a7b4 to 0085a7c3 has its CatchHandler @ 0085a954 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0085a994;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 0085a714 to 0085a71f has its CatchHandler @ 0085a95c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0085a724 to 0085a73b has its CatchHandler @ 0085a960 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0085a74c to 0085a757 has its CatchHandler @ 0085a950 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0085a994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085a998  FUN_0085a998 =====

/* WARNING: Removing unreachable block (ram,0x0085aa90) */
/* WARNING: Removing unreachable block (ram,0x0085aaa0) */
/* WARNING: Removing unreachable block (ram,0x0085aac4) */
/* WARNING: Removing unreachable block (ram,0x0085aad4) */

void FUN_0085a998(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_0098f818;
                    /* try { // try from 0085a9ec to 0085a9f3 has its CatchHandler @ 0085ab50 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_0098f610;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 0085aa30 to 0085aa3f has its CatchHandler @ 0085ab18 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_0098f660;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085ab78  FUN_0085ab78 =====

/* WARNING: Removing unreachable block (ram,0x0085ac4c) */
/* WARNING: Removing unreachable block (ram,0x0085ac5c) */
/* WARNING: Removing unreachable block (ram,0x0085acb0) */
/* WARNING: Removing unreachable block (ram,0x0085acc0) */

void FUN_0085ab78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 0085abbc to 0085abc7 has its CatchHandler @ 0085ad38 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 0085abcc to 0085abd3 has its CatchHandler @ 0085ad28 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_0098f878;
                    /* try { // try from 0085abf8 to 0085ac07 has its CatchHandler @ 0085ad00 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_0098f660;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085ad60  FUN_0085ad60 =====

void FUN_0085ad60(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
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
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 0085ada8 to 0085adaf has its CatchHandler @ 0085b094 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0098f8c8;
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
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0085adec to 0085adfb has its CatchHandler @ 0085b068 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0085ae0c to 0085ae13 has its CatchHandler @ 0085b058 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_0098f918;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0085aec4 to 0085aecb has its CatchHandler @ 0085b048 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0085af18 to 0085af2f has its CatchHandler @ 0085b018 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 0085af84 to 0085af8f has its CatchHandler @ 0085aff8 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085b0bc  FUN_0085b0bc =====

void FUN_0085b0bc(long param_1,undefined8 param_2)

{
  facebook::react::RNCSliderShadowNode::facebook::react::RNCSliderShadowNode::
  setSliderMeasurementsManager(param_2,param_1 + 0x88);
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  enableMeasurement(param_2);
  return;
}


// ===== 0085b0e8  FUN_0085b0e8 =====

void FUN_0085b0e8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0085b10c  FUN_0085b10c =====

void FUN_0085b10c(void)

{
  return;
}


// ===== 0085b110  FUN_0085b110 =====

void FUN_0085b110(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  FUN_0079dd90(param_1 + 0x940);
  FUN_0079dd90(param_1 + 0x898);
  if ((*(byte *)(param_1 + 0x880) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x890));
  }
  FUN_0079dd90(param_1 + 0x7c8);
  FUN_0079dd90(param_1 + 0x718);
  pbVar2 = *(byte **)(param_1 + 0x6f8);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x700);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x6f8);
    }
    *(byte **)(param_1 + 0x700) = pbVar2;
    operator_delete(pbVar3);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_VTT_0099ed80 + 8);
  return;
}


// ===== 0085b1d0  FUN_0085b1d0 =====

void FUN_0085b1d0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f408;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085b1e0  FUN_0085b1e0 =====

void FUN_0085b1e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f408;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085b210  FUN_0085b210 =====

void FUN_0085b210(long param_1)

{
  long lVar1;
  long *plVar2;
  
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x28));
  plVar2 = *(long **)(param_1 + 0x20);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085b26c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085b270  FUN_0085b270 =====

void FUN_0085b270(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085b2c0  FUN_0085b2c0 =====

void FUN_0085b2c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f458;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085b2d0  FUN_0085b2d0 =====

void FUN_0085b2d0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f458;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085b300  FUN_0085b300 =====

void FUN_0085b300(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = *(long **)(param_1 + 0x408);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pvVar4 = *(void **)(param_1 + 0x3e0);
  *(undefined **)(param_1 + 0x18) = PTR_vtable_0099de98 + 0x10;
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784(param_1 + 0x18);
  return;
}


// ===== 0085b3e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085b3ec  FUN_0085b3ec =====

void FUN_0085b3ec(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085b4ac  FUN_0085b4ac =====

void FUN_0085b4ac(long param_1)

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


// ===== 0085b514  FUN_0085b514 =====

bool FUN_0085b514(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0085b52c  FUN_0085b52c =====

bool FUN_0085b52c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0085b544  FUN_0085b544 =====

void FUN_0085b544(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085b594  FUN_0085b594 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085b594(void)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0xa08);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0098f570;
  memset(__s,0,0x9f0);
                    /* try { // try from 0085b5d0 to 0085b5e3 has its CatchHandler @ 0085b76c */
  FUN_00788b10(__s,PTR_VTT_0099ed80 + 0x10);
  *(undefined4 *)((long)puVar3 + 0x5f4) = 0;
  *(undefined1 *)(puVar3 + 0xbf) = 0;
  *(undefined1 *)(puVar3 + 0xcb) = 0;
  *(undefined1 *)(puVar3 + 0xcc) = 0;
  *(undefined1 *)(puVar3 + 0xd8) = 0;
  *(undefined1 *)(puVar3 + 0xda) = 0;
  *(undefined1 *)((long)puVar3 + 0x6d4) = 0;
  *(undefined1 *)(puVar3 + 0xdb) = 0;
  *(undefined1 *)((long)puVar3 + 0x6dc) = 0;
  *(undefined1 *)(puVar3 + 0xdc) = 0;
  *(undefined1 *)((long)puVar3 + 0x6e4) = 0;
  *(undefined1 *)(puVar3 + 0xdd) = 0;
  *(undefined1 *)((long)puVar3 + 0x6ec) = 0;
  *(undefined1 *)(puVar3 + 0xde) = 0;
  *(undefined1 *)((long)puVar3 + 0x6f4) = 0;
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  puVar2 = PTR_vtable_0099ed78;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  *(undefined4 *)(puVar3 + 0xe6) = 0;
  puVar3[0xed] = 0;
  puVar3[3] = puVar2 + 0x20;
  uVar1 = _s__003752b8;
  puVar3[0xec] = 0;
  puVar3[0xeb] = 0;
  puVar3[0xe0] = 0;
  puVar3[0xdf] = 0;
  puVar3[0xe2] = 0;
  puVar3[0xe1] = 0;
  puVar3[0xe4] = 0;
  puVar3[0xe3] = 0;
  *(undefined4 *)(puVar3 + 0xe5) = 0;
  puVar3[0xe9] = 0;
  puVar3[0xe8] = 0;
  puVar3[0xe7] = 0;
  *(undefined1 *)(puVar3 + 0xea) = 0;
  puVar3[0xee] = uVar1;
  *(undefined4 *)(puVar3 + 0xef) = 0;
  puVar3[0xfb] = 0;
  *(undefined4 *)(puVar3 + 0xfc) = 0;
  puVar3[0x103] = 0;
  puVar3[0x102] = 0;
  puVar3[0x101] = 0;
  puVar3[0xf1] = 0;
  puVar3[0xf0] = 0;
  puVar3[0xf3] = 0;
  puVar3[0xf2] = 0;
  puVar3[0xf5] = 0;
  puVar3[0xf4] = 0;
  *(undefined4 *)(puVar3 + 0xf6) = 0;
  *(undefined4 *)(puVar3 + 0xfa) = 0;
  puVar3[0xf9] = 0;
  puVar3[0xf8] = 0;
  puVar3[0xf7] = 0;
  *(undefined1 *)(puVar3 + 0x100) = 0;
  puVar3[0xff] = 0;
  puVar3[0xfe] = 0;
  puVar3[0xfd] = 0;
  puVar3[0x104] = uVar1;
  *(undefined4 *)(puVar3 + 0x105) = 0;
  puVar3[0x11d] = 0;
  puVar3[0x11c] = 0;
  puVar3[0x11b] = 0;
  puVar3[0x107] = 0;
  puVar3[0x106] = 0;
  puVar3[0x109] = 0;
  puVar3[0x108] = 0;
  puVar3[0x10b] = 0;
  puVar3[0x10a] = 0;
  *(undefined4 *)(puVar3 + 0x10c) = 0;
  puVar3[0x10e] = 0;
  puVar3[0x10d] = 0;
  *(undefined4 *)(puVar3 + 0x110) = 0;
  puVar3[0x10f] = 0;
  puVar3[0x112] = 0;
  puVar3[0x111] = 0;
  puVar3[0x114] = 0;
  puVar3[0x113] = 0;
  *(undefined8 *)((long)puVar3 + 0x8ac) = 0;
  *(undefined8 *)((long)puVar3 + 0x8a4) = 0;
  *(undefined1 *)(puVar3 + 0x11a) = 0;
  puVar3[0x119] = 0;
  puVar3[0x118] = 0;
  puVar3[0x117] = 0;
  puVar3[0x11e] = uVar1;
  *(undefined4 *)(puVar3 + 0x11f) = 0;
  puVar3[0x132] = 0;
  puVar3[0x131] = 0;
  puVar3[0x130] = 0;
  *(undefined4 *)(puVar3 + 0x126) = 0;
  puVar3[0x125] = 0;
  puVar3[0x124] = 0;
  puVar3[0x123] = 0;
  puVar3[0x122] = 0;
  puVar3[0x121] = 0;
  puVar3[0x120] = 0;
  *(undefined4 *)(puVar3 + 299) = 0;
  puVar3[0x12a] = 0;
  puVar3[0x129] = 0;
  puVar3[0x128] = 0;
  puVar3[0x127] = 0;
  *(undefined1 *)(puVar3 + 0x12f) = 0;
  puVar3[0x12e] = 0;
  puVar3[0x12d] = 0;
  puVar3[300] = 0;
  puVar3[0x133] = uVar1;
  *(undefined4 *)(puVar3 + 0x134) = 0;
  *(undefined4 *)(puVar3 + 0x13b) = 0;
  puVar3[0x13a] = 0;
  puVar3[0x139] = 0;
  puVar3[0x138] = 0;
  puVar3[0x137] = 0;
  puVar3[0x136] = 0;
  puVar3[0x135] = 0;
  *(undefined4 *)(puVar3 + 0x140) = 0;
  puVar3[0x13f] = 0;
  puVar3[0x13e] = 0;
  puVar2 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNCSliderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_14RNCSliderPropsENS0_21RNCSliderEventEmitterENS0_14RNCSliderStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e750
  ;
  puVar3[0x13d] = 0;
  puVar3[0x13c] = 0;
  *(undefined8 **)puVar2 = __s;
  *(undefined8 **)(puVar2 + 8) = puVar3;
  return;
}


// ===== 0085b788  FUN_0085b788 =====

void FUN_0085b788(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085b7d8  FUN_0085b7d8 =====

void FUN_0085b7d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f570;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085b7e8  FUN_0085b7e8 =====

void FUN_0085b7e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f570;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085b818  FUN_0085b818 =====

void FUN_0085b818(long param_1)

{
  FUN_0085b110(param_1 + 0x18);
  return;
}


// ===== 0085b820  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085b824  FUN_0085b824 =====

void FUN_0085b824(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f5c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085b834  FUN_0085b834 =====

void FUN_0085b834(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f5c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085b864  FUN_0085b864 =====

void FUN_0085b864(long param_1)

{
  FUN_0085b110(param_1 + 0x18);
  return;
}


// ===== 0085b86c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085b870  FUN_0085b870 =====

void FUN_0085b870(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085b8c0  FUN_0085b8c0 =====

void FUN_0085b8c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f610;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085b8d0  FUN_0085b8d0 =====

void FUN_0085b8d0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f610;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085b900  FUN_0085b900 =====

void FUN_0085b900(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085b908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0085b90c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085b910  FUN_0085b910 =====

void FUN_0085b910(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
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


// ===== 0085b978  FUN_0085b978 =====

void FUN_0085b978(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 0085b984  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 0085b988  FUN_0085b988 =====

void FUN_0085b988(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0085b990  FUN_0085b990 =====

void FUN_0085b990(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_0098f798;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 0085ba28 to 0085ba4f has its CatchHandler @ 0085bbf0 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 0085ba54 to 0085ba5b has its CatchHandler @ 0085bc08 */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_0098f708;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_0085ba90:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_0085ba90;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 0085baa4 to 0085bab3 has its CatchHandler @ 0085bbec */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_0085badc:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_0085badc;
      }
                    /* try { // try from 0085baec to 0085bafb has its CatchHandler @ 0085bbf8 */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_0085bb24:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_0085bb24;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_0085bb90;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_0085bb90:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_0085bbbc;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_0085bbbc:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085bca4  FUN_0085bca4 =====

void FUN_0085bca4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x85bca8);
  (*pcVar1)();
}


// ===== 0085bca8  FUN_0085bca8 =====

void FUN_0085bca8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085bcf8  FUN_0085bcf8 =====

void FUN_0085bcf8(long param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_0085bd38;
    lVar2 = 5;
    plVar3 = plVar1;
  }
  (**(code **)(*plVar3 + lVar2 * 8))();
LAB_0085bd38:
  plVar3 = *(long **)(param_1 + 8);
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085bd7c  FUN_0085bd7c =====

void FUN_0085bd7c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0098f708;
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
                    /* WARNING: Could not recover jumptable at 0x0085bdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0085bdc0  FUN_0085bdc0 =====

void FUN_0085bdc0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0098f708;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0085be0c;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0085be0c:
  operator_delete(param_1);
  return;
}


// ===== 0085be1c  FUN_0085be1c =====

undefined8 * FUN_0085be1c(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_0098f708;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0085be64 to 0085be7f has its CatchHandler @ 0085be90 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 0085bea4  FUN_0085bea4 =====

void FUN_0085bea4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0098f708;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0085bf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 0085bf18  FUN_0085bf18 =====

void FUN_0085bf18(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0085bf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0085bf50  FUN_0085bf50 =====

void FUN_0085bf50(void *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_0085bf90;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0085bf90:
  operator_delete(param_1);
  return;
}


// ===== 0085bfa0  FUN_0085bfa0 =====

void FUN_0085bfa0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 0085bfc4  FUN_0085bfc4 =====

long FUN_0085bfc4(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e768) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0085bfe0  FUN_0085bfe0 =====

undefined * FUN_0085bfe0(void)

{
  return PTR_typeinfo_0099e770;
}


// ===== 0085bfec  FUN_0085bfec =====

void FUN_0085bfec(void)

{
  return;
}


// ===== 0085bff0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085bff4  FUN_0085bff4 =====

void FUN_0085bff4(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0098f798;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0085c02c  FUN_0085c02c =====

void FUN_0085c02c(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0098f798;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 0085c044  FUN_0085c044 =====

void FUN_0085c044(void)

{
  return;
}


// ===== 0085c048  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085c04c  FUN_0085c04c =====

void FUN_0085c04c(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_0098f818;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 0085c088  FUN_0085c088 =====

long FUN_0085c088(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e778) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0085c0a4  FUN_0085c0a4 =====

undefined * FUN_0085c0a4(void)

{
  return PTR_typeinfo_0099e780;
}


// ===== 0085c0b0  FUN_0085c0b0 =====

void FUN_0085c0b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f818;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085c0c0  FUN_0085c0c0 =====

void FUN_0085c0c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f818;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085c0f0  FUN_0085c0f0 =====

void FUN_0085c0f0(void)

{
  return;
}


// ===== 0085c0f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085c0f8  FUN_0085c0f8 =====

void FUN_0085c0f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f878;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085c108  FUN_0085c108 =====

void FUN_0085c108(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f878;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085c138  FUN_0085c138 =====

void FUN_0085c138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085c140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0085c144  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085c148  FUN_0085c148 =====

void FUN_0085c148(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085c198  FUN_0085c198 =====

void FUN_0085c198(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f8c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085c1a8  FUN_0085c1a8 =====

void FUN_0085c1a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098f8c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085c1d8  FUN_0085c1d8 =====

void FUN_0085c1d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085c1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0085c1e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085c1e8  FUN_0085c1e8 =====

void FUN_0085c1e8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0085c2a0  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNGestureHandlerDetectorComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNGestureHandlerDetectorComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNGestureHandlerDetectorComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  void *pvVar6;
  long lVar7;
  undefined8 *in_x8;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined4 local_1060 [2];
  undefined8 *local_1058;
  void *local_1050;
  void *pvStack_1048;
  undefined8 local_1040;
  void *pvStack_1038;
  void *local_1030;
  undefined8 uStack_1028;
  void *local_1020;
  void *pvStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined *local_1000;
  undefined8 uStack_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined4 local_fe0 [2];
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined4 local_fb8;
  undefined4 local_fb0;
  undefined1 local_fac;
  undefined8 local_fab;
  undefined8 local_fa3;
  undefined8 uStack_f9b;
  undefined8 local_f93;
  undefined8 uStack_f8b;
  undefined8 local_f83;
  undefined8 uStack_f7b;
  undefined8 local_f73;
  undefined6 uStack_f6b;
  undefined2 uStack_f65;
  undefined6 uStack_f63;
  undefined8 uStack_f5d;
  undefined4 local_f55;
  undefined8 local_f51;
  undefined1 local_f49;
  undefined1 uStack_f48;
  undefined7 uStack_f47;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  undefined4 uStack_eb8;
  undefined4 uStack_eb4;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined4 local_e98;
  undefined1 local_e94;
  undefined4 local_e90;
  undefined1 local_e8c;
  undefined4 local_e88;
  undefined1 local_e84;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined4 local_e78;
  undefined1 local_e74;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined4 local_e68;
  undefined1 local_e64;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined4 local_e50;
  undefined1 local_e4c;
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
  undefined1 local_e18;
  undefined1 local_e14;
  undefined1 local_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined1 uStack_dc8;
  undefined7 local_dc7;
  undefined1 uStack_dc0;
  undefined8 uStack_dbf;
  undefined8 local_db4;
  undefined8 uStack_dac;
  undefined8 uStack_da4;
  undefined8 uStack_d9c;
  undefined8 local_d94;
  undefined8 uStack_d8c;
  undefined8 uStack_d84;
  undefined8 uStack_d7c;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined8 uStack_d64;
  undefined5 uStack_d5c;
  undefined3 local_d57;
  undefined5 uStack_d54;
  undefined1 local_d4c;
  undefined1 local_d48;
  undefined1 local_d44;
  undefined1 local_d40;
  undefined1 local_d3c;
  undefined1 local_d38;
  undefined1 local_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined4 local_d00;
  undefined1 local_cfc;
  undefined4 local_cfb;
  undefined1 local_cf7;
  undefined1 local_cf6;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined7 uStack_cc8;
  undefined4 uStack_cc1;
  undefined8 local_cbc;
  undefined1 local_cb4;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_ca0;
  undefined1 local_c9c;
  undefined1 local_c94;
  undefined1 local_c90;
  undefined1 local_c88;
  undefined1 local_c84;
  undefined1 local_c7c;
  undefined1 local_c78;
  undefined1 local_c70;
  undefined1 local_c6c;
  undefined1 local_c64;
  undefined1 local_c60;
  undefined1 local_c58;
  undefined1 local_c54;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined2 local_b88;
  undefined8 local_b84;
  undefined1 local_b7c;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined1 local_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined6 uStack_a60;
  undefined2 uStack_a5a;
  undefined6 uStack_a58;
  undefined1 local_a50;
  undefined1 local_a4c;
  undefined1 local_a48;
  undefined8 local_a44;
  undefined8 uStack_a3c;
  undefined1 local_a34;
  undefined8 local_a30;
  undefined2 local_a28;
  undefined1 local_a26;
  undefined4 local_a24;
  undefined1 local_a20;
  undefined1 local_9c0;
  undefined1 local_9b8;
  undefined1 local_958;
  undefined4 local_950;
  undefined2 local_94c;
  undefined1 local_948;
  undefined1 local_944;
  undefined1 local_940;
  undefined1 local_93c;
  undefined1 local_938;
  undefined1 local_934;
  undefined1 local_930;
  undefined1 local_92c;
  undefined1 local_928;
  undefined1 local_924;
  void *local_920;
  void *pvStack_918;
  undefined8 local_910;
  undefined4 local_908;
  undefined8 *local_900;
  undefined8 *puStack_8f8;
  undefined8 local_8f0;
  undefined4 local_8e8;
  undefined4 local_8e0 [2];
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  void *local_200;
  void *local_1f8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
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
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0 [4];
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  void *local_90;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_1038 = (void *)0x0;
  local_1040 = 0;
  uStack_1028 = 0;
  local_1030 = (void *)0x0;
  pvStack_1018 = (void *)0x0;
  local_1020 = (void *)0x0;
  uStack_1008 = 0;
  uStack_1010 = 0;
  pvStack_1048 = (void *)0x0;
  local_1050 = (void *)0x0;
                    /* try { // try from 0085c2f0 to 0085c2fb has its CatchHandler @ 0085c9f8 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_1050);
  local_108 = 0;
  *(undefined ***)this_00 = &PTR_FUN_0098f9f8;
  local_100 = 0;
  local_f8 = 0;
  local_f0[0] = 0;
  local_e0[0] = 0;
  local_d8 = 0;
  local_b0 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_98 = 0;
  uStack_80 = 0;
  local_88 = (void *)0x0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
                    /* try { // try from 0085c368 to 0085c373 has its CatchHandler @ 0085ca28 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1c0);
  local_110 = CONCAT44(local_110._4_4_,0x3f800000);
  local_1060[0] = 0xffffffff;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  local_1058 = &local_1c0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_108,this_00 + 0x38);
  memset(local_fe0,0,0x700);
  puVar5 = PTR_VTT_0099eda0;
  local_8e0[0] = 5;
  local_8c8 = 0;
  local_1000 = *(undefined **)(PTR_VTT_0099eda0 + 0x20);
  local_fe0[0] = 5;
  uStack_fe8 = 0;
  local_ff0 = 0;
  uStack_ff8 = 0;
  local_8c0 = 0;
  uStack_8b8 = 0x3f800000;
  uStack_8d0 = 0;
  local_8d8 = 0;
  uStack_fd0 = 0;
  local_fd8 = 0;
  uStack_fc0 = 0;
  local_fc8 = 0;
  local_fb8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_8e0);
  local_fac = 0;
  local_f51 = 0;
  uStack_a70 = _UNK_00488920;
  local_a78 = _DAT_00488918;
  local_fab = _s__00375408;
  uStack_b68 = _UNK_00371598;
  local_b70 = _DAT_00371590;
  uStack_a80 = _UNK_00488910;
  local_a88 = _DAT_00488908;
  local_e94 = 0;
  uStack_a90 = _UNK_00488900;
  local_a98 = _DAT_004888f8;
  uStack_aa0 = _UNK_004888f0;
  local_aa8 = _DAT_004888e8;
  uStack_a58 = 0;
  local_e8c = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  uStack_eac = 0;
  uStack_ed0 = 0;
  local_ed8 = 0;
  uStack_a60 = 0;
  uStack_a5a = 0;
  local_a68 = 0;
  local_fb0 = 0x10410710;
  local_f55 = 0x40004;
  uStack_eb4 = 0;
  uStack_eb0 = 0;
  uStack_ebc = 0;
  uStack_eb8 = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  local_e98 = 0x7fc00000;
  local_e90 = 0x7fc00000;
  local_e88 = 0x7fc00000;
  local_e80 = 0x7fc00000;
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  uStack_dbf = 0;
  uStack_dc0 = 0;
  uStack_dac = 0;
  local_db4 = 0;
  uStack_d9c = 0;
  uStack_da4 = 0;
  uStack_d8c = 0;
  local_d94 = 0;
  uStack_d7c = 0;
  uStack_d84 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  uStack_d5c = 0;
  uStack_d64 = 0;
  local_d57 = 0;
  uStack_d54 = 0;
  local_cfc = 1;
  local_cfb = 0;
  local_cf6 = 0x23;
  local_cbc = 0x3f800000;
  uStack_ba0 = 0;
  local_ba8 = 0;
  uStack_b90 = 0;
  uStack_b98 = 0;
  uStack_bb0 = 0;
  local_bb8 = 0;
  local_b84 = 0;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  uStack_ab0 = 0;
  local_ab8 = 0;
  uStack_f47 = 0;
  uStack_f9b = 0;
  local_fa3 = 0;
  uStack_f8b = 0;
  local_f93 = 0;
  uStack_f7b = 0;
  local_f83 = 0;
  uStack_f6b = 0;
  local_f73 = 0;
  uStack_f5d = 0;
  uStack_f65 = 0;
  uStack_f63 = 0;
  local_f49 = 0;
  uStack_f48 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  local_f28 = 0;
  uStack_f30 = 0;
  local_f18 = 0;
  uStack_f20 = 0;
  local_f08 = 0;
  uStack_f10 = 0;
  local_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ee0 = 0;
  local_e84 = 0;
  local_e7c = 0;
  local_e74 = 0;
  local_e6c = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e18 = 0;
  local_e14 = 0;
  local_e08 = 0;
  local_d4c = 0;
  local_d48 = 0;
  local_d44 = 0;
  local_d40 = 0;
  local_d3c = 0;
  local_d38 = 0;
  local_d20 = 0;
  uStack_df8 = 0;
  local_e00 = 0;
  uStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  local_de0 = 0;
  uStack_dc8 = 0;
  local_dc7 = 0;
  uStack_dd0 = 0;
  uStack_d10 = 0;
  local_d18 = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cf7 = 0;
  uStack_ce8 = 0;
  local_cf0 = 0;
  uStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  uStack_cc1 = 0;
  local_cd0 = 0;
  local_cb4 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c9c = 0;
  local_c94 = 0;
  local_c90 = 0;
  local_c88 = 0;
  local_c84 = 0;
  local_c7c = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c6c = 0;
  local_c64 = 0;
  local_c60 = 0;
  local_c58 = 0;
  local_c54 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_b78 = 0;
  local_b88 = 0;
  local_b7c = 0;
  local_b60 = 0;
  local_a50 = 0;
  local_a4c = 0;
  local_a48 = 0;
  local_a30 = 0;
  uStack_a3c = 0;
  local_a44 = 0;
  local_a34 = 0;
  local_a28 = 0x101;
  local_a26 = 0;
  local_a24 = 0;
  local_a20 = 0;
  local_9c0 = 0;
  local_9b8 = 0;
  local_958 = 0;
  local_948 = 0;
  local_944 = 0;
  local_940 = 0;
  local_93c = 0;
  local_938 = 0;
  local_934 = 0;
  local_930 = 0;
  local_92c = 0;
  local_928 = 0;
  local_924 = 0;
  local_94c = 0;
  local_950 = 0;
  local_1000 = PTR_vtable_0099ed98 + 0x20;
  local_910 = 0;
  pvStack_918 = (void *)0x0;
  local_920 = (void *)0x0;
  local_908 = 0xffffffff;
  local_8f0 = 0;
  puStack_8f8 = (undefined8 *)0x0;
  local_900 = (undefined8 *)0x0;
  local_8e8 = 3;
                    /* try { // try from 0085c77c to 0085c78f has its CatchHandler @ 0085ca28 */
  ::facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps
            ((RNGestureHandlerDetectorProps *)local_8e0,(PropsParserContext *)local_1060,
             (RNGestureHandlerDetectorProps *)&local_1000,(RawProps *)&local_108);
  puVar3 = local_1e0;
  if (local_1e0 != (undefined8 *)0x0) {
    while (puVar10 = local_1d8, puVar10 != puVar3) {
      local_1d8 = puVar10 + -4;
      pvVar6 = (void *)*local_1d8;
      if (pvVar6 != (void *)0x0) {
        puVar10[-3] = pvVar6;
        operator_delete(pvVar6);
      }
    }
    local_1d8 = puVar3;
    operator_delete(local_1e0);
  }
  if (local_200 != (void *)0x0) {
    local_1f8 = local_200;
    operator_delete(local_200);
  }
  FUN_0078917c(local_8e0,puVar5 + 8);
  puVar3 = local_900;
  puVar10 = puStack_8f8;
  if (local_900 != (undefined8 *)0x0) {
    while (puVar4 = puVar10, puVar4 != puVar3) {
      puVar10 = puVar4 + -4;
      pvVar6 = (void *)*puVar10;
      if (pvVar6 != (void *)0x0) {
        puVar4[-3] = pvVar6;
        operator_delete(pvVar6);
      }
    }
    puStack_8f8 = puVar3;
    operator_delete(local_900);
  }
  if (local_920 != (void *)0x0) {
    pvStack_918 = local_920;
    operator_delete(local_920);
  }
  FUN_0078917c(&local_1000,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar6 = local_130;
  puVar3 = (undefined8 *)local_120;
  while (puVar3 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar3[6];
    pvVar9 = (void *)*puVar3;
    local_130 = pvVar6;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_00757990(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar3 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar3 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    pvVar6 = local_130;
    puVar3 = (undefined8 *)pvVar9;
  }
  local_130 = (void *)0x0;
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_168);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::mutex::~mutex((mutex *)&local_1c0);
  pvVar9 = local_90;
  pvVar6 = local_88;
  if (local_90 != (void *)0x0) {
    while (pvVar6 != pvVar9) {
      if (*(uint *)((long)pvVar6 + -8) != 0xffffffff) {
                    /* try { // try from 0085c94c to 0085c957 has its CatchHandler @ 0085ca2c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar6 + -8)])
                  (&local_1000,(void *)((long)pvVar6 + -0x38));
      }
      *(undefined4 *)((long)pvVar6 + -8) = 0xffffffff;
      pvVar6 = (void *)((long)pvVar6 + -0x38);
    }
    local_88 = pvVar9;
    operator_delete(local_90);
  }
  if (local_a8 != (void *)0x0) {
    pvStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  folly::dynamic::folly::dynamic::destroy(local_e0);
  ::facebook::jsi::Value::~Value((Value *)local_f0);
  *(undefined ***)this_00 = &PTR_FUN_0098f950;
  if (local_1020 != (void *)0x0) {
    pvStack_1018 = local_1020;
    operator_delete(local_1020);
  }
  if (pvStack_1038 != (void *)0x0) {
    local_1030 = pvStack_1038;
    operator_delete(pvStack_1038);
  }
  if (local_1050 != (void *)0x0) {
    pvStack_1048 = local_1050;
    operator_delete(local_1050);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085ca30  FUN_0085ca30 =====

void FUN_0085ca30(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0085ca54  FUN_0085ca54 =====

undefined * FUN_0085ca54(void)

{
  return PTR_RNGestureHandlerDetectorComponentName_0099ed90;
}


// ===== 0085ca60  FUN_0085ca60 =====

undefined * FUN_0085ca60(void)

{
  return PTR_RNGestureHandlerDetectorComponentName_0099ed90;
}


// ===== 0085ca6c  FUN_0085ca6c =====

undefined8 FUN_0085ca6c(void)

{
  return 0x61;
}


// ===== 0085ca74  FUN_0085ca74 =====

void FUN_0085ca74(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = tpidr_el0;
  lVar11 = *(long *)(lVar7 + 0x28);
  uVar9 = (**(code **)(*param_2 + 0x20))();
  puVar10 = (undefined8 *)operator_new(0x458);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar10 + 3);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_0098fa70;
                    /* try { // try from 0085cae0 to 0085caef has its CatchHandler @ 0085cbf8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar9);
  lVar12 = puVar10[4];
  puVar10[3] = &PTR_FUN_0098fac0;
  uVar3 = *(uint *)((long)puVar10 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar12 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar10 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar12 + 0x50) & 0x30000000) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(char *)(lVar12 + 0x5b4) != '\0') {
      uVar9 = *(undefined4 *)(lVar12 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar10 + 10) = uVar9;
  puVar8 = PTR_vtable_0099eda8;
  cVar4 = *(char *)(lVar12 + 0x6b0);
  cVar5 = *(char *)(lVar12 + 0x6b1);
  cVar6 = *(char *)(lVar12 + 0x1e8);
  *(undefined1 *)((long)puVar10 + 0x3fc) = 0;
  *(undefined1 *)(puVar10 + 0x8a) = 0;
  puVar10[3] = puVar8 + 0x10;
  *(uint *)((long)puVar10 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 0085cb88 to 0085cb8f has its CatchHandler @ 0085cbe8 */
  facebook::react::RNGestureHandlerDetectorShadowNode::facebook::react::
  RNGestureHandlerDetectorShadowNode::initialize(pYVar1);
                    /* try { // try from 0085cb9c to 0085cba7 has its CatchHandler @ 0085cbd8 */
  (**(code **)(*param_2 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar10;
  if (*(long *)(lVar7 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085cc28  FUN_0085cc28 =====

void FUN_0085cc28(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *this;
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  YogaLayoutableShadowNode *local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar9 = (long *)operator_new(0x458);
  this = (YogaLayoutableShadowNode *)(plVar9 + 3);
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_0098fa70;
                    /* try { // try from 0085cc80 to 0085cc8f has its CatchHandler @ 0085ce44 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(this,param_3,param_4);
  lVar10 = plVar9[4];
  plVar9[3] = (long)&PTR_FUN_0098fac0;
  uVar2 = *(uint *)((long)plVar9 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar10 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar9 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar10 + 0x50) & 0x30000000) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (*(char *)(lVar10 + 0x5b4) != '\0') {
      uVar11 = *(undefined4 *)(lVar10 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar9 + 10) = uVar11;
  puVar7 = PTR_vtable_0099eda8;
  cVar3 = *(char *)(lVar10 + 0x6b0);
  cVar4 = *(char *)(lVar10 + 0x6b1);
  cVar5 = *(char *)(lVar10 + 0x1e8);
  *(undefined1 *)((long)plVar9 + 0x3fc) = 0;
  *(undefined1 *)(plVar9 + 0x8a) = 0;
  plVar9[3] = (long)(puVar7 + 0x10);
  *(uint *)((long)plVar9 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
                    /* try { // try from 0085cd28 to 0085cd33 has its CatchHandler @ 0085ce34 */
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  *(undefined8 *)((long)plVar9 + 0x424) = uStack_88;
  *(undefined8 *)((long)plVar9 + 0x41c) = local_90;
  *(undefined8 *)((long)plVar9 + 0x434) = uStack_78;
  *(undefined8 *)((long)plVar9 + 0x42c) = uStack_80;
  *(undefined8 *)((long)plVar9 + 0x444) = uStack_68;
  *(undefined8 *)((long)plVar9 + 0x43c) = local_70;
  *(undefined4 *)((long)plVar9 + 0x44c) = local_60;
  *(long **)((long)plVar9 + 0x404) = plStack_a8;
  *(YogaLayoutableShadowNode **)((long)plVar9 + 0x3fc) = local_b0;
  *(undefined8 *)((long)plVar9 + 0x414) = uStack_98;
  *(undefined8 *)((long)plVar9 + 0x40c) = uStack_a0;
  if ((char)plVar9[0x8a] == '\0') {
    *(undefined1 *)(plVar9 + 0x8a) = 1;
  }
                    /* try { // try from 0085cd68 to 0085cd6f has its CatchHandler @ 0085ce30 */
  facebook::react::RNGestureHandlerDetectorShadowNode::facebook::react::
  RNGestureHandlerDetectorShadowNode::initialize(this);
                    /* try { // try from 0085cd74 to 0085cd83 has its CatchHandler @ 0085ce5c */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(this,param_3,param_4);
  local_b0 = this;
  plStack_a8 = plVar9;
  FUN_00757d00(1,plVar9 + 1);
                    /* try { // try from 0085cd94 to 0085cda3 has its CatchHandler @ 0085ce20 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_b0);
  plVar8 = plStack_a8;
  if ((plStack_a8 != (long *)0x0) &&
     (lVar10 = FUN_00757990(0xffffffffffffffff,plStack_a8 + 1), lVar10 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0085cde0 to 0085cdeb has its CatchHandler @ 0085ce5c */
  (**(code **)(*param_2 + 0x60))(param_2,this);
  *param_1 = this;
  param_1[1] = plVar9;
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085ce84  FUN_0085ce84 =====

void FUN_0085ce84(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::RNGestureHandlerDetectorShadowNode::facebook::react::
  RNGestureHandlerDetectorShadowNode::appendChild(*param_2,param_3);
  return;
}


// ===== 0085ce90  FUN_0085ce90 =====

void FUN_0085ce90(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNGestureHandlerDetectorProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  RNGestureHandlerDetectorProps *pRVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
                                   ), iVar6 != 0)) {
                    /* try { // try from 0085d2c4 to 0085d2c7 has its CatchHandler @ 0085d2f4 */
      FUN_0085de88();
      __cxa_atexit(FUN_0085de38,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNGestureHandlerDetectorProps *)*param_4;
    if (pRVar12 == (RNGestureHandlerDetectorProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
                                     ), iVar6 != 0)) {
                    /* try { // try from 0085d244 to 0085d247 has its CatchHandler @ 0085d30c */
        FUN_0085de88();
        __cxa_atexit(FUN_0085de38,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
                           );
      }
      pRVar12 = *(RNGestureHandlerDetectorProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
      ;
    }
    plVar8 = (long *)operator_new(0x738);
    this = (RNGestureHandlerDetectorProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0098fbd8;
                    /* try { // try from 0085cf70 to 0085cf83 has its CatchHandler @ 0085d380 */
    facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 0085cf88 to 0085cf9b has its CatchHandler @ 0085d398 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0085cfc4:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
                                       ), iVar6 != 0)) {
                    /* try { // try from 0085d284 to 0085d287 has its CatchHandler @ 0085d2f8 */
          FUN_0085de88();
          __cxa_atexit(FUN_0085de38,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e790
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0085d02c to 0085d03f has its CatchHandler @ 0085d324 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0085d078:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0085d078;
        }
        if (plVar8 != (long *)0x0) goto LAB_0085d08c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0085cfe0 to 0085cff3 has its CatchHandler @ 0085d34c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0085d08c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0085d08c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0085cfa8 to 0085cfb3 has its CatchHandler @ 0085d320 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNGestureHandlerDetectorComponentName_0099ed90,pcVar9);
      if (iVar6 != 0) goto LAB_0085cfc4;
      bVar3 = false;
    }
                    /* try { // try from 0085d0b8 to 0085d0bb has its CatchHandler @ 0085d398 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0085d0c8 to 0085d0e3 has its CatchHandler @ 0085d348 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0085d224 to 0085d233 has its CatchHandler @ 0085d340 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0085d3e4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0085d204 to 0085d213 has its CatchHandler @ 0085d3a4 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0085d3e4;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 0085d164 to 0085d16f has its CatchHandler @ 0085d3ac */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0085d174 to 0085d18b has its CatchHandler @ 0085d3b0 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0085d19c to 0085d1a7 has its CatchHandler @ 0085d3a0 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0085d3e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085d3e8  FUN_0085d3e8 =====

/* WARNING: Removing unreachable block (ram,0x0085d4e0) */
/* WARNING: Removing unreachable block (ram,0x0085d4f0) */
/* WARNING: Removing unreachable block (ram,0x0085d514) */
/* WARNING: Removing unreachable block (ram,0x0085d524) */

void FUN_0085d3e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_0098fdd0;
                    /* try { // try from 0085d43c to 0085d443 has its CatchHandler @ 0085d5a0 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_0098fc28;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 0085d480 to 0085d48f has its CatchHandler @ 0085d568 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_0098fc78;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085d5c8  FUN_0085d5c8 =====

/* WARNING: Removing unreachable block (ram,0x0085d69c) */
/* WARNING: Removing unreachable block (ram,0x0085d6ac) */
/* WARNING: Removing unreachable block (ram,0x0085d700) */
/* WARNING: Removing unreachable block (ram,0x0085d710) */

void FUN_0085d5c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 0085d60c to 0085d617 has its CatchHandler @ 0085d788 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 0085d61c to 0085d623 has its CatchHandler @ 0085d778 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_0098fe30;
                    /* try { // try from 0085d648 to 0085d657 has its CatchHandler @ 0085d750 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_0098fc78;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085d7b0  FUN_0085d7b0 =====

void FUN_0085d7b0(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
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
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 0085d7f8 to 0085d7ff has its CatchHandler @ 0085dae4 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0098fe80;
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
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0085d83c to 0085d84b has its CatchHandler @ 0085dab8 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0085d85c to 0085d863 has its CatchHandler @ 0085daa8 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_0098fed0;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0085d914 to 0085d91b has its CatchHandler @ 0085da98 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0085d968 to 0085d97f has its CatchHandler @ 0085da68 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 0085d9d4 to 0085d9df has its CatchHandler @ 0085da48 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085db0c  FUN_0085db0c =====

void FUN_0085db0c(void)

{
  return;
}


// ===== 0085db10  FUN_0085db10 =====

void FUN_0085db10(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0085db34  FUN_0085db34 =====

void FUN_0085db34(void)

{
  return;
}


// ===== 0085db38  FUN_0085db38 =====

void FUN_0085db38(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085db88  FUN_0085db88 =====

void FUN_0085db88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fa70;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085db98  FUN_0085db98 =====

void FUN_0085db98(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fa70;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085dbc8  FUN_0085dbc8 =====

void FUN_0085dbc8(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(long *)(param_1 + 0x18) = (long)(PTR_vtable_0099de98 + 0x10);
  pvVar4 = *(void **)(param_1 + 0x3e0);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784((long *)(param_1 + 0x18));
  return;
}


// ===== 0085dc8c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085dc90  FUN_0085dc90 =====

void FUN_0085dc90(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085dd50  FUN_0085dd50 =====

void FUN_0085dd50(long param_1)

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


// ===== 0085ddb8  FUN_0085ddb8 =====

bool FUN_0085ddb8(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0085ddd0  FUN_0085ddd0 =====

bool FUN_0085ddd0(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0085dde8  FUN_0085dde8 =====

void FUN_0085dde8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085de38  FUN_0085de38 =====

void FUN_0085de38(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085de88  FUN_0085de88 =====

void FUN_0085de88(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x738);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0098fb88;
  memset(__s,0,0x720);
                    /* try { // try from 0085dec4 to 0085ded7 has its CatchHandler @ 0085df6c */
  FUN_00788b10(__s,PTR_VTT_0099eda0 + 0x10);
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
  puVar1 = PTR_vtable_0099ed98;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined4 *)(puVar2 + 0xe2) = 0xffffffff;
  puVar2[0xe5] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37RNGestureHandlerDetectorComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29RNGestureHandlerDetectorPropsENS0_36RNGestureHandlerDetectorEventEmitterENS0_29RNGestureHandlerDetectorStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e788
  ;
  *(undefined4 *)(puVar2 + 0xe6) = 3;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0085df88  FUN_0085df88 =====

void FUN_0085df88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fb88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085df98  FUN_0085df98 =====

void FUN_0085df98(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fb88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085dfc8  FUN_0085dfc8 =====

void FUN_0085dfc8(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x718);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x720);
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
      puVar2 = *(undefined8 **)(param_1 + 0x718);
    }
    *(undefined8 **)(param_1 + 0x720) = puVar4;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x6f8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x700) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eda0 + 8);
  return;
}


// ===== 0085e058  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e05c  FUN_0085e05c =====

void FUN_0085e05c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fbd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085e06c  FUN_0085e06c =====

void FUN_0085e06c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fbd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085e09c  FUN_0085e09c =====

void FUN_0085e09c(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x718);
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x720);
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
      puVar2 = *(undefined8 **)(param_1 + 0x718);
    }
    *(undefined8 **)(param_1 + 0x720) = puVar4;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x6f8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x700) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eda0 + 8);
  return;
}


// ===== 0085e12c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e130  FUN_0085e130 =====

void FUN_0085e130(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085e180  FUN_0085e180 =====

void FUN_0085e180(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fc28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085e190  FUN_0085e190 =====

void FUN_0085e190(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fc28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085e1c0  FUN_0085e1c0 =====

void FUN_0085e1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085e1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0085e1cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e1d0  FUN_0085e1d0 =====

void FUN_0085e1d0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
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


// ===== 0085e238  FUN_0085e238 =====

void FUN_0085e238(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 0085e244  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 0085e248  FUN_0085e248 =====

void FUN_0085e248(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0085e250  FUN_0085e250 =====

void FUN_0085e250(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_0098fd50;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 0085e2e8 to 0085e30f has its CatchHandler @ 0085e4b0 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 0085e314 to 0085e31b has its CatchHandler @ 0085e4c8 */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_0098fcd0;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_0085e350:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_0085e350;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 0085e364 to 0085e373 has its CatchHandler @ 0085e4ac */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_0085e39c:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_0085e39c;
      }
                    /* try { // try from 0085e3ac to 0085e3bb has its CatchHandler @ 0085e4b8 */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_0085e3e4:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_0085e3e4;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_0085e450;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_0085e450:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_0085e47c;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_0085e47c:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085e564  FUN_0085e564 =====

void FUN_0085e564(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0098fcd0;
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
                    /* WARNING: Could not recover jumptable at 0x0085e5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0085e5a8  FUN_0085e5a8 =====

void FUN_0085e5a8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0098fcd0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_0085e5f4;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0085e5f4:
  operator_delete(param_1);
  return;
}


// ===== 0085e604  FUN_0085e604 =====

undefined8 * FUN_0085e604(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_0098fcd0;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0085e64c to 0085e667 has its CatchHandler @ 0085e678 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 0085e68c  FUN_0085e68c =====

void FUN_0085e68c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0098fcd0;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0085e6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 0085e700  FUN_0085e700 =====

void FUN_0085e700(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0085e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 0085e738  FUN_0085e738 =====

void FUN_0085e738(void *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_0085e778;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_0085e778:
  operator_delete(param_1);
  return;
}


// ===== 0085e788  FUN_0085e788 =====

void FUN_0085e788(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085e79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 0085e7ac  FUN_0085e7ac =====

long FUN_0085e7ac(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e798) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0085e7c8  FUN_0085e7c8 =====

undefined * FUN_0085e7c8(void)

{
  return PTR_typeinfo_0099e7a0;
}


// ===== 0085e7d4  FUN_0085e7d4 =====

void FUN_0085e7d4(void)

{
  return;
}


// ===== 0085e7d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e7dc  FUN_0085e7dc =====

void FUN_0085e7dc(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_0098fd50;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0085e814  FUN_0085e814 =====

void FUN_0085e814(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0098fd50;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 0085e82c  FUN_0085e82c =====

void FUN_0085e82c(void)

{
  return;
}


// ===== 0085e830  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e834  FUN_0085e834 =====

void FUN_0085e834(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_0098fdd0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 0085e870  FUN_0085e870 =====

long FUN_0085e870(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e7a8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0085e88c  FUN_0085e88c =====

undefined * FUN_0085e88c(void)

{
  return PTR_typeinfo_0099e7b0;
}


// ===== 0085e898  FUN_0085e898 =====

void FUN_0085e898(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fdd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085e8a8  FUN_0085e8a8 =====

void FUN_0085e8a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fdd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085e8d8  FUN_0085e8d8 =====

void FUN_0085e8d8(void)

{
  return;
}


// ===== 0085e8dc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e8e0  FUN_0085e8e0 =====

void FUN_0085e8e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fe30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085e8f0  FUN_0085e8f0 =====

void FUN_0085e8f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fe30;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085e920  FUN_0085e920 =====

void FUN_0085e920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085e928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0085e92c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e930  FUN_0085e930 =====

void FUN_0085e930(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0085e980  FUN_0085e980 =====

void FUN_0085e980(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fe80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0085e990  FUN_0085e990 =====

void FUN_0085e990(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0098fe80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0085e9c0  FUN_0085e9c0 =====

void FUN_0085e9c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0085e9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0085e9cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0085e9d0  FUN_0085e9d0 =====

void FUN_0085e9d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0085ea88  facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardControllerViewComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::KeyboardControllerViewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::KeyboardControllerViewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
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
  undefined4 local_d0 [2];
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
  this_00 = (ComponentDescriptor *)operator_new(0x88);
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
                    /* try { // try from 0085ead8 to 0085eae3 has its CatchHandler @ 0085f114 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_0098ffb0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
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
                    /* try { // try from 0085eb54 to 0085eb5f has its CatchHandler @ 0085f144 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f60,0,0x6c8);
  puVar5 = PTR_VTT_0099edc0;
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = *(undefined **)(PTR_VTT_0099edc0 + 0x20);
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  local_878 = 0;
  uStack_f78 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_898);
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00488920;
  local_9f8 = _DAT_00488918;
  local_f2b = _s__00375408;
  uStack_ae8 = _UNK_00371598;
  local_af0 = _DAT_00371590;
  uStack_a00 = _UNK_00488910;
  local_a08 = _DAT_00488908;
  local_e14 = 0;
  uStack_a10 = _UNK_00488900;
  local_a18 = _DAT_004888f8;
  uStack_a20 = _UNK_004888f0;
  local_a28 = _DAT_004888e8;
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
  local_f80 = PTR_vtable_0099edb8 + 0x20;
  local_8a0 = 0;
                    /* try { // try from 0085ef4c to 0085ef5f has its CatchHandler @ 0085f144 */
  ::facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps
            ((KeyboardControllerViewProps *)local_898,(PropsParserContext *)local_fe0,
             (KeyboardControllerViewProps *)&local_f80,(RawProps *)&local_f8);
  FUN_0078917c(local_898,puVar5 + 8);
  FUN_0078917c(&local_f80,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
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
                    /* try { // try from 0085f064 to 0085f06f has its CatchHandler @ 0085f148 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
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
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_0098ff08;
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
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085f14c  FUN_0085f14c =====

void FUN_0085f14c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0085f170  FUN_0085f170 =====

undefined * FUN_0085f170(void)

{
  return PTR_KeyboardControllerViewComponentName_0099edb0;
}


// ===== 0085f17c  FUN_0085f17c =====

undefined * FUN_0085f17c(void)

{
  return PTR_KeyboardControllerViewComponentName_0099edb0;
}


// ===== 0085f188  FUN_0085f188 =====

undefined8 FUN_0085f188(void)

{
  return 0x61;
}


// ===== 0085f190  FUN_0085f190 =====

void FUN_0085f190(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_00990028;
                    /* try { // try from 0085f1fc to 0085f20b has its CatchHandler @ 0085f2e4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00990078;
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
                    /* try { // try from 0085f298 to 0085f2a3 has its CatchHandler @ 0085f2d4 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085f314  FUN_0085f314 =====

void FUN_0085f314(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_00990028;
                    /* try { // try from 0085f36c to 0085f37b has its CatchHandler @ 0085f4bc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00990078;
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
                    /* try { // try from 0085f400 to 0085f40f has its CatchHandler @ 0085f4d4 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 0085f420 to 0085f42f has its CatchHandler @ 0085f4ac */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0085f46c to 0085f477 has its CatchHandler @ 0085f4d4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085f4fc  FUN_0085f4fc =====

void FUN_0085f4fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0085f50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0085f510  FUN_0085f510 =====

void FUN_0085f510(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  KeyboardControllerViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  KeyboardControllerViewProps *pKVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0085f944 to 0085f947 has its CatchHandler @ 0085f974 */
      FUN_00860450();
      __cxa_atexit(FUN_00860400,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pKVar12 = (KeyboardControllerViewProps *)*param_4;
    if (pKVar12 == (KeyboardControllerViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0085f8c4 to 0085f8c7 has its CatchHandler @ 0085f98c */
        FUN_00860450();
        __cxa_atexit(FUN_00860400,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
                           );
      }
      pKVar12 = *(KeyboardControllerViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
      ;
    }
    plVar8 = (long *)operator_new(0x700);
    this = (KeyboardControllerViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00990190;
                    /* try { // try from 0085f5f0 to 0085f603 has its CatchHandler @ 0085fa00 */
    facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps
              (this,param_3,pKVar12,param_5);
                    /* try { // try from 0085f608 to 0085f61b has its CatchHandler @ 0085fa18 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0085f644:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0085f904 to 0085f907 has its CatchHandler @ 0085f978 */
          FUN_00860450();
          __cxa_atexit(FUN_00860400,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7c0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0085f6ac to 0085f6bf has its CatchHandler @ 0085f9a4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0085f6f8:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0085f6f8;
        }
        if (plVar8 != (long *)0x0) goto LAB_0085f70c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0085f660 to 0085f673 has its CatchHandler @ 0085f9cc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0085f70c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0085f70c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0085f628 to 0085f633 has its CatchHandler @ 0085f9a0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_KeyboardControllerViewComponentName_0099edb0,pcVar9);
      if (iVar6 != 0) goto LAB_0085f644;
      bVar3 = false;
    }
                    /* try { // try from 0085f738 to 0085f73b has its CatchHandler @ 0085fa18 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0085f748 to 0085f763 has its CatchHandler @ 0085f9c8 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0085f8a4 to 0085f8b3 has its CatchHandler @ 0085f9c0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0085fa64;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0085f884 to 0085f893 has its CatchHandler @ 0085fa24 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0085fa64;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 0085f7e4 to 0085f7ef has its CatchHandler @ 0085fa2c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0085f7f4 to 0085f80b has its CatchHandler @ 0085fa30 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0085f81c to 0085f827 has its CatchHandler @ 0085fa20 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0085fa64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0085fa68  FUN_0085fa68 =====

/* WARNING: Removing unreachable block (ram,0x0085fb60) */
/* WARNING: Removing unreachable block (ram,0x0085fb70) */
/* WARNING: Removing unreachable block (ram,0x0085fb94) */
/* WARNING: Removing unreachable block (ram,0x0085fba4) */

void FUN_0085fa68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00990388;
                    /* try { // try from 0085fabc to 0085fac3 has its CatchHandler @ 0085fc20 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009901e0;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 0085fb00 to 0085fb0f has its CatchHandler @ 0085fbe8 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00990230;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085fc48  FUN_0085fc48 =====

/* WARNING: Removing unreachable block (ram,0x0085fd1c) */
/* WARNING: Removing unreachable block (ram,0x0085fd2c) */
/* WARNING: Removing unreachable block (ram,0x0085fd80) */
/* WARNING: Removing unreachable block (ram,0x0085fd90) */

void FUN_0085fc48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 0085fc8c to 0085fc97 has its CatchHandler @ 0085fe08 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 0085fc9c to 0085fca3 has its CatchHandler @ 0085fdf8 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_009903e8;
                    /* try { // try from 0085fcc8 to 0085fcd7 has its CatchHandler @ 0085fdd0 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00990230;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0085fe30  FUN_0085fe30 =====

void FUN_0085fe30(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
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
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 0085fe78 to 0085fe7f has its CatchHandler @ 00860164 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00990438;
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
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0085febc to 0085fecb has its CatchHandler @ 00860138 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0085fedc to 0085fee3 has its CatchHandler @ 00860128 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_00990488;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0085ff94 to 0085ff9b has its CatchHandler @ 00860118 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 0085ffe8 to 0085ffff has its CatchHandler @ 008600e8 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 00860054 to 0086005f has its CatchHandler @ 008600c8 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086018c  FUN_0086018c =====

void FUN_0086018c(void)

{
  return;
}


// ===== 00860190  FUN_00860190 =====

void FUN_00860190(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008601b4  FUN_008601b4 =====

void FUN_008601b4(void)

{
  return;
}


// ===== 008601b8  FUN_008601b8 =====

void FUN_008601b8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00860208  FUN_00860208 =====

void FUN_00860208(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990028;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00860218  FUN_00860218 =====

void FUN_00860218(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990028;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00860248  FUN_00860248 =====

void FUN_00860248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00860250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00860254  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00860258  FUN_00860258 =====

void FUN_00860258(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
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
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00860318  FUN_00860318 =====

void FUN_00860318(long param_1)

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


// ===== 00860380  FUN_00860380 =====

bool FUN_00860380(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00860398  FUN_00860398 =====

bool FUN_00860398(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008603b0  FUN_008603b0 =====

void FUN_008603b0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00860400  FUN_00860400 =====

void FUN_00860400(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 00860450  FUN_00860450 =====

void FUN_00860450(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00990140;
  memset(__s,0,0x6e8);
                    /* try { // try from 0086048c to 0086049f has its CatchHandler @ 00860510 */
  FUN_00788b10(__s,PTR_VTT_0099edc0 + 0x10);
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
  puVar1 = PTR_vtable_0099edb8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35KeyboardControllerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27KeyboardControllerViewPropsENS0_34KeyboardControllerViewEventEmitterENS0_27KeyboardControllerViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e7b8
  ;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0086052c  FUN_0086052c =====

void FUN_0086052c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990140;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086053c  FUN_0086053c =====

void FUN_0086053c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990140;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086056c  FUN_0086056c =====

void FUN_0086056c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099edc0 + 8);
  return;
}


// ===== 00860580  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00860584  FUN_00860584 =====

void FUN_00860584(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990190;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00860594  FUN_00860594 =====

void FUN_00860594(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00990190;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008605c4  FUN_008605c4 =====

void FUN_008605c4(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099edc0 + 8);
  return;
}


// ===== 008605d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008605dc  FUN_008605dc =====

void FUN_008605dc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 0086062c  FUN_0086062c =====

void FUN_0086062c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009901e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086063c  FUN_0086063c =====

void FUN_0086063c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009901e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086066c  FUN_0086066c =====

void FUN_0086066c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00860674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00860678  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086067c  FUN_0086067c =====

void FUN_0086067c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
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


