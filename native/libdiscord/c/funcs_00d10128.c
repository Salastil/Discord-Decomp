// ===== 00d10128  FUN_00d10128 =====

bool FUN_00d10128(undefined8 param_1,uint param_2)

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
  return (param_2 & 0xffffffe0) != 0x20;
}


// ===== 00d1016c  FUN_00d1016c =====

undefined8 FUN_00d1016c(long param_1,uint param_2)

{
  FILE *__stream;
  undefined8 *puVar1;
  
  if (param_2 == 0xfffffffe) {
    puVar1 = (undefined8 *)(param_1 + 0x108);
  }
  else if (param_2 == 0x22) {
    puVar1 = (undefined8 *)(param_1 + 0x118);
  }
  else if (param_2 == 0xffffffff) {
    puVar1 = (undefined8 *)(param_1 + 0x110);
  }
  else {
    if (0x1f < param_2) {
      __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
      fprintf(__stream,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
      fflush(__stream);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x10);
  }
  return *puVar1;
}


// ===== 00d10208  FUN_00d10208 =====

void FUN_00d10208(long param_1,uint param_2,undefined8 param_3)

{
  FILE *__stream;
  undefined8 *puVar1;
  
  if (param_2 == 0xfffffffe) {
    puVar1 = (undefined8 *)(param_1 + 0x108);
  }
  else if (param_2 == 0x22) {
    puVar1 = (undefined8 *)(param_1 + 0x118);
  }
  else if (param_2 == 0xffffffff) {
    puVar1 = (undefined8 *)(param_1 + 0x110);
  }
  else {
    if (0x1f < param_2) {
      __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
      fprintf(__stream,"libunwind: %s - %s\n","setRegister","unsupported arm64 register");
      fflush(__stream);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar1 = (undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x10);
  }
  *puVar1 = param_3;
  return;
}


// ===== 00d102a4  FUN_00d102a4 =====

bool FUN_00d102a4(undefined8 param_1,uint param_2)

{
  return (param_2 & 0xffffffe0) == 0x40;
}


// ===== 00d102b8  FUN_00d102b8 =====

undefined1  [16] FUN_00d102b8(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + (long)param_2 * 8 + -0xe0);
  auVar1._8_8_ = 0;
  return auVar1;
}


// ===== 00d102c8  FUN_00d102c8 =====

void FUN_00d102c8(undefined8 param_1,long param_2,int param_3)

{
  *(undefined8 *)(param_2 + (long)param_3 * 8 + -0xe0) = param_1;
  return;
}


// ===== 00d102d8  FUN_00d102d8 =====

int FUN_00d102d8(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_240 [528];
  
  if ((char)param_1[0x4d] == '\0') {
    if (*(char *)((long)param_1 + 0x26a) == '\0') {
      lVar1 = param_1[1];
      uVar3 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
      iVar2 = FUN_00d10750(lVar1,uVar3,param_1[0x4b],param_1 + 2,(long)param_1 + 0x269);
    }
    else {
      memset(auStack_240,0,0x210);
      iVar2 = FUN_00d1062c(param_1,auStack_240);
    }
    if (iVar2 != 1) {
      return iVar2;
    }
    (**(code **)(*param_1 + 0x68))(param_1,1);
    if ((char)param_1[0x4d] == '\0') {
      return 1;
    }
  }
  return 0;
}


// ===== 00d103a8  FUN_00d103a8 =====

void FUN_00d103a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x268) != '\0') {
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x248);
  uVar3 = *(undefined8 *)(param_1 + 0x240);
  uVar2 = *(undefined8 *)(param_1 + 600);
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  uVar6 = *(undefined8 *)(param_1 + 0x238);
  uVar5 = *(undefined8 *)(param_1 + 0x230);
  param_2[8] = *(undefined8 *)(param_1 + 0x260);
  param_2[5] = uVar4;
  param_2[4] = uVar3;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  return;
}


// ===== 00d103ec  FUN_00d103ec =====

void FUN_00d103ec(long param_1)

{
  FUN_00d139e8(param_1 + 0x10);
  return;
}


// ===== 00d103f8  FUN_00d103f8 =====

undefined1 FUN_00d103f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x269);
}


// ===== 00d10404  FUN_00d10404 =====

undefined8 FUN_00d10404(long *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  return 0;
}


// ===== 00d10430  FUN_00d10430 =====

void FUN_00d10430(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 auStack_6e0 [32];
  long local_6c0;
  long local_6a8;
  undefined4 local_6a0;
  long local_690;
  long lStack_688;
  long local_680;
  undefined1 auStack_678 [16];
  long local_668;
  long local_648;
  undefined1 *puStack_640;
  ulong local_638;
  
  *(undefined1 *)((long)param_1 + 0x26a) = 0;
  lVar2 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (lVar2 != 0) {
    local_648 = param_1[1];
    uVar6 = lVar2 - (param_2 & 1);
    puStack_640 = auStack_678;
    local_638 = uVar6;
    iVar1 = dl_iterate_phdr(FUN_00d12e68,&local_648);
    if (((iVar1 != 0) && (local_668 != 0)) &&
       (uVar3 = FUN_00d12b88(param_1,uVar6,auStack_678,0), (uVar3 & 1) != 0)) {
      return;
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00dbbb34);
    for (puVar5 = PTR_DAT_00d601e0; puVar5 < PTR_DAT_00d601e8; puVar5 = puVar5 + 0x20) {
      if ((*(ulong *)(puVar5 + 8) <= uVar6) && (uVar6 < *(ulong *)(puVar5 + 0x10))) {
        lVar2 = *(long *)(puVar5 + 0x18);
        pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00dbbb34);
        if ((lVar2 != 0) &&
           (lVar2 = FUN_00d0fef8(param_1[1],lVar2,&local_6a8,auStack_6e0), lVar2 == 0)) {
          memset(&local_648,0,0x618);
          uVar6 = FUN_00d10a1c(param_1[1],&local_6a8,auStack_6e0,uVar6,4,&local_648);
          if ((uVar6 & 1) != 0) {
            param_1[0x45] = lStack_688;
            param_1[0x44] = local_690;
            param_1[0x46] = local_680;
            param_1[0x47] = local_6c0;
            param_1[0x48] = local_638 & 0xffffffff;
            param_1[0x49] = 0;
            *(undefined4 *)(param_1 + 0x4a) = 0x3000000;
            param_1[0x4b] = local_6a8;
            *(undefined4 *)((long)param_1 + 0x254) = local_6a0;
            param_1[0x4c] = 0;
            return;
          }
        }
        goto LAB_00d105a8;
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00dbbb34);
LAB_00d105a8:
    piVar4 = (int *)(**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
    if ((*piVar4 == -0x2d7fee98) && (piVar4[1] == -0x2bffffff)) {
      param_1[0x4c] = 0;
      param_1[0x49] = 0;
      param_1[0x48] = 0;
      param_1[0x4b] = 0;
      param_1[0x4a] = 0;
      param_1[0x45] = 0;
      param_1[0x44] = 0;
      param_1[0x47] = 0;
      param_1[0x46] = 0;
      *(undefined1 *)((long)param_1 + 0x26a) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x4d) = 1;
  return;
}


// ===== 00d10620  FUN_00d10620 =====

void FUN_00d10620(undefined8 param_1,undefined4 param_2)

{
  FUN_00d13948(param_2);
  return;
}


// ===== 00d1062c  FUN_00d1062c =====

undefined8 FUN_00d1062c(long param_1)

{
  long lVar1;
  
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
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar1 + 0x238);
  *(undefined1 *)(param_1 + 0x269) = 1;
  return 1;
}


// ===== 00d10750  FUN_00d10750 =====

undefined8
FUN_00d10750(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  FILE *__stream;
  undefined8 uVar10;
  int *piVar11;
  long local_9e0 [96];
  undefined1 auStack_6e0 [24];
  int local_6c8 [2];
  long local_6c0 [191];
  undefined1 auStack_c8 [48];
  undefined1 local_98;
  byte local_96;
  undefined1 auStack_90 [48];
  
  lVar3 = FUN_00d0fef8(param_1,param_3,auStack_90,auStack_c8);
  if (lVar3 == 0) {
    memset(auStack_6e0,0,0x618);
    uVar4 = FUN_00d10a1c(param_1,auStack_90,auStack_c8,param_2,4,auStack_6e0);
    if ((uVar4 & 1) != 0) {
      lVar3 = FUN_00d11cd0(param_1,auStack_6e0,param_4);
      memcpy(local_9e0 + 0x1e,param_4,0x210);
      uVar4 = 0;
      uVar10 = 0;
      piVar11 = local_6c8;
      do {
        iVar2 = *piVar11;
        if (iVar2 == 0) {
          if (uVar4 == local_96) {
            puVar9 = (undefined8 *)((long)param_4 + 0x108);
            if (local_96 != 0x22) {
              if (0x1f < local_96) {
                pcVar7 = "getRegister";
LAB_00d109fc:
                pcVar8 = "unsupported arm64 register";
LAB_00d10a08:
                __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
                fprintf(__stream,"libunwind: %s - %s\n",pcVar7,pcVar8);
                fflush(__stream);
                    /* WARNING: Subroutine does not return */
                abort();
              }
              puVar9 = (undefined8 *)((long)param_4 + (ulong)local_96 * 8);
            }
            uVar10 = *puVar9;
          }
        }
        else {
          uVar1 = (uint)uVar4 & 0x7fffffe0;
          if (uVar1 == 0x40) {
            if (iVar2 == 5) {
              plVar5 = (long *)FUN_00d1220c(*(undefined8 *)(piVar11 + 2),param_1,param_4,lVar3);
            }
            else {
              if (iVar2 != 2) {
                pcVar7 = "getSavedFloatRegister";
                pcVar8 = "unsupported restore location for float register";
                goto LAB_00d10a08;
              }
              plVar5 = (long *)(*(long *)(piVar11 + 2) + lVar3);
            }
            local_9e0[uVar4] = *plVar5;
          }
          else if (uVar4 == local_96) {
            uVar10 = FUN_00d11db4(param_1,param_4,lVar3,piVar11);
          }
          else if (uVar4 == 0x22) {
            local_9e0[0x3f] = FUN_00d11db4(param_1,param_4,lVar3,piVar11);
          }
          else {
            if (uVar1 == 0x20) {
              return 0xffffe672;
            }
            lVar6 = FUN_00d11db4(param_1,param_4,lVar3,piVar11);
            if (0x1f < uVar4) {
              pcVar7 = "setRegister";
              goto LAB_00d109fc;
            }
            local_9e0[uVar4 + 0x1e] = lVar6;
          }
        }
        uVar4 = uVar4 + 1;
        piVar11 = piVar11 + 4;
        if (uVar4 == 0x60) {
          *param_5 = local_98;
          local_9e0[0x3d] = lVar3;
          local_9e0[0x3e] = uVar10;
          memcpy(param_4,local_9e0 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


// ===== 00d10a1c  FUN_00d10a1c =====

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00d10a1c(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  char *pcVar6;
  size_t __size;
  char *pcVar7;
  undefined4 uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  FILE *__stream;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *pbVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined1 auStack_6f0 [8];
  byte **local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  int local_6cc;
  long *local_6c8;
  byte *local_6c0;
  byte *apbStack_6a0 [193];
  long local_98;
  long local_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  long local_70;
  long lStack_68;
  
  puVar4 = (undefined8 *)auStack_6f0;
  plVar25 = &local_98;
  local_98 = param_3[2];
  local_90 = param_3[1] + *param_3;
  puVar26 = (undefined8 *)0x0;
  local_88 = 0xffffffffffffffff;
  lStack_80 = param_2[2];
  local_6e0 = (undefined8 *)(param_6 + 0x8e);
  local_6d8 = param_1;
  local_78 = param_2[1] + *param_2;
  local_6c8 = &lStack_68;
  local_6cc = param_5;
  local_6e8 = apbStack_6a0 + 0x44;
  local_70 = param_4 - param_2[3];
  do {
    pbVar9 = (byte *)*plVar25;
    uVar20 = plVar25[2];
    apbStack_6a0[0xc0] = pbVar9;
    if ((uVar20 != 0) && (pbVar21 = (byte *)plVar25[1], pbVar9 < pbVar21)) {
      uVar22 = 0;
      pbVar5 = pbVar21 + -1;
      local_6c0 = pbVar5;
      do {
        pbVar23 = pbVar9 + 1;
        bVar2 = *pbVar9;
        apbStack_6a0[0xc0] = pbVar23;
        pbVar24 = pbVar23;
        switch((ulong)bVar2) {
        case 0:
          goto code_r0x00d11a60;
        case 1:
          uVar22 = FUN_00d11f1c(local_6d8,apbStack_6a0 + 0xc0,pbVar21,(char)param_3[3],0);
          pbVar9 = apbStack_6a0[0xc0];
          pbVar5 = local_6c0;
          break;
        case 2:
          uVar11 = (uint)pbVar9[1];
          iVar14 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar9 + 2;
          goto LAB_00d10b7c;
        case 3:
          uVar11 = (uint)*(ushort *)(pbVar9 + 1);
          iVar14 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar9 + 3;
          goto LAB_00d10b7c;
        case 4:
          uVar11 = *(uint *)(pbVar9 + 1);
          iVar14 = (int)param_3[5];
          apbStack_6a0[0xc0] = pbVar9 + 5;
LAB_00d10b7c:
          uVar22 = uVar22 + iVar14 * uVar11;
          pbVar9 = apbStack_6a0[0xc0];
          break;
        case 5:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_00d11c48;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          pbVar23 = pbVar9 + lVar17;
          apbStack_6a0[0xc0] = pbVar23;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_offset_extended DWARF unwind, reg too big\n";
            __size = 0x46;
            goto LAB_00d11c18;
          }
          puVar13 = param_6 + uVar15 * 4;
          pcVar6 = (char *)(puVar13 + 7);
          cVar3 = *pcVar6;
          lVar17 = uVar12 * (long)*(int *)((long)param_3 + 0x2c);
          goto joined_r0x00d11a2c;
        case 6:
          uVar15 = 0;
          uVar10 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar15) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar15 & 0x3f);
            if (uVar12 >> (uVar15 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar10 = uVar12 | uVar10;
            uVar15 = uVar15 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar10) {
            pcVar6 = "libunwind: malformed DW_CFA_restore_extended DWARF unwind, reg too big\n";
LAB_00d11b38:
            __size = 0x47;
LAB_00d11c18:
            fwrite(pcVar6,__size,1,(FILE *)(PTR___sF_00d54a40 + 0x130));
            return 0;
          }
LAB_00d11888:
          pbVar23 = pbVar9;
          if (*(char *)(param_6 + uVar10 * 4 + 7) == '\0') goto code_r0x00d11a60;
          pbVar23 = apbStack_6a0[uVar10 * 2];
          *(byte **)(param_6 + uVar10 * 4 + 8) = apbStack_6a0[uVar10 * 2 + 1];
          *(byte **)(param_6 + uVar10 * 4 + 6) = pbVar23;
          break;
        case 7:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_undefined DWARF unwind, reg too big\n";
LAB_00d11c10:
            __size = 0x40;
            goto LAB_00d11c18;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 1;
          break;
        case 8:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_same_value DWARF unwind, reg too big\n";
LAB_00d11b84:
            __size = 0x41;
            goto LAB_00d11c18;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 0;
          break;
        case 9:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_00d11c48;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_register DWARF unwind, reg too big\n";
            __size = 0x3f;
            goto LAB_00d11c18;
          }
          if (0x5f < uVar12) {
            pcVar6 = "libunwind: malformed DW_CFA_register DWARF unwind, reg2 too big\n";
            goto LAB_00d11c10;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 4;
          *(ulong *)(param_6 + uVar15 * 4 + 8) = uVar12;
          pbVar9 = pbVar9 + lVar17;
          break;
        case 10:
          puVar27 = puVar4 + -0xc4;
          *puVar27 = puVar26;
          memcpy(puVar4 + -0xc3,param_6,0x618);
          pbVar9 = pbVar23;
          puVar26 = puVar27;
          puVar4 = puVar27;
          pbVar5 = local_6c0;
          break;
        case 0xb:
          if (puVar26 == (undefined8 *)0x0) {
            return 0;
          }
          memcpy(param_6,puVar26 + 1,0x618);
          pbVar9 = pbVar23;
          puVar26 = (undefined8 *)*puVar26;
          pbVar5 = local_6c0;
          break;
        case 0xc:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_00d11c48;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_def_cfa DWARF unwind, reg too big\n";
            __size = 0x3e;
            goto LAB_00d11c18;
          }
          *param_6 = (int)uVar15;
          param_6[1] = (int)uVar12;
          pbVar9 = pbVar9 + lVar17;
          break;
        case 0xd:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_def_cfa_register DWARF unwind, reg too big\n";
            goto LAB_00d11b38;
          }
          *param_6 = (int)uVar15;
          break;
        case 0xe:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          param_6[1] = (int)uVar15;
          break;
        case 0xf:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = -(long)pbVar23;
          *param_6 = 0;
          *(byte **)(param_6 + 2) = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            lVar17 = lVar17 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = (byte *)(uVar15 - lVar17);
          pbVar9 = (byte *)(uVar15 - lVar17);
          break;
        case 0x10:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar24 = pbVar24 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar24;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_expression DWARF unwind, reg too big\n";
            goto LAB_00d11b84;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          param_6[uVar15 * 4 + 6] = 5;
          *(byte **)(param_6 + uVar15 * 4 + 8) = pbVar24;
          do {
            if (lVar16 == 0) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            pbVar9 = pbVar23 + lVar17;
            uVar18 = (ulong)*pbVar9 & 0x7f;
            uVar15 = uVar18 << (uVar10 & 0x3f);
            if (uVar15 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar12 = uVar15 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar9 < '\0');
          goto LAB_00d117a8;
        case 0x11:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_offset_extended_sf DWARF unwind, reg too big\n";
            __size = 0x49;
            goto LAB_00d11c18;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_00d11ca8;
            bVar2 = pbVar23[lVar17];
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
            uVar18 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar12 = ((ulong)bVar2 & 0x7f) << uVar18 | uVar12;
          } while ((char)bVar2 < '\0');
          pbVar23 = pbVar9 + lVar17;
          puVar13 = param_6 + uVar15 * 4;
          apbStack_6a0[0xc0] = pbVar23;
          uVar18 = -1L << (uVar10 & 0x3f);
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar18 = 0;
          }
          lVar17 = (uVar12 | uVar18) * (long)*(int *)((long)param_3 + 0x2c);
          if (*(char *)(puVar13 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(puVar13 + 7) = '\x01';
          }
          goto LAB_00d11a50;
        case 0x12:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            apbStack_6a0[0xc0] = pbVar9;
            if (lVar16 == 0) goto LAB_00d11ca8;
            bVar2 = pbVar23[lVar17];
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
            uVar18 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar12 = ((ulong)bVar2 & 0x7f) << uVar18 | uVar12;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_def_cfa_sf DWARF unwind, reg too big\n";
            goto LAB_00d11b84;
          }
          iVar14 = *(int *)((long)param_3 + 0x2c);
          uVar11 = (uint)(-1L << (uVar10 & 0x3f));
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar11 = 0;
          }
          *param_6 = (int)uVar15;
          param_6[1] = iVar14 * ((uint)uVar12 | uVar11);
          pbVar9 = pbVar9 + lVar17;
          break;
        case 0x13:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar9) goto LAB_00d11ca8;
            bVar2 = *pbVar9;
            pbVar23 = pbVar23 + 1;
            uVar12 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar15 = ((ulong)bVar2 & 0x7f) << uVar12 | uVar15;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar23;
          uVar11 = (uint)(-1L << (uVar10 & 0x3f));
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar11 = 0;
          }
          param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar15 | uVar11);
          pbVar9 = pbVar23;
          break;
        case 0x14:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            fprintf((FILE *)(PTR___sF_00d54a40 + 0x130),
                    "libunwind: malformed DW_CFA_val_offset DWARF unwind, reg (%lu) out of range\n\n"
                   );
            return 0;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_00d11c48;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          apbStack_6a0[0xc0] = pbVar9 + lVar17;
          iVar14 = *(int *)((long)param_3 + 0x2c);
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar23 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar23;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          param_6[uVar15 * 4 + 6] = 3;
          *(ulong *)(param_6 + uVar15 * 4 + 8) = uVar12 * (long)iVar14;
          pbVar9 = pbVar9 + lVar17;
          break;
        case 0x15:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_val_offset_sf DWARF unwind, reg too big\n";
            __size = 0x44;
            goto LAB_00d11c18;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_00d11ca8;
            bVar2 = pbVar23[lVar17];
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
            uVar18 = uVar10 & 0x3f;
            uVar10 = uVar10 + 7;
            uVar12 = ((ulong)bVar2 & 0x7f) << uVar18 | uVar12;
          } while ((char)bVar2 < '\0');
          pbVar23 = pbVar9 + lVar17;
          puVar13 = param_6 + uVar15 * 4;
          apbStack_6a0[0xc0] = pbVar23;
          uVar18 = -1L << (uVar10 & 0x3f);
          if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
            uVar18 = 0;
          }
          lVar17 = (uVar12 | uVar18) * (long)*(int *)((long)param_3 + 0x2c);
          if (*(char *)(puVar13 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(puVar13 + 7) = '\x01';
          }
          uVar8 = 3;
          goto LAB_00d11a54;
        case 0x16:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar24 = pbVar24 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar24;
          if (0x5f < uVar15) {
            pcVar6 = "libunwind: malformed DW_CFA_val_expression DWARF unwind, reg too big\n";
            __size = 0x45;
            goto LAB_00d11c18;
          }
          if (*(char *)(param_6 + uVar15 * 4 + 7) == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *(char *)(param_6 + uVar15 * 4 + 7) = '\x01';
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          param_6[uVar15 * 4 + 6] = 6;
          *(byte **)(param_6 + uVar15 * 4 + 8) = pbVar24;
          do {
            if (lVar16 == 0) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            pbVar9 = pbVar23 + lVar17;
            uVar18 = (ulong)*pbVar9 & 0x7f;
            uVar15 = uVar18 << (uVar10 & 0x3f);
            if (uVar15 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar12 = uVar15 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar9 < '\0');
LAB_00d117a8:
          apbStack_6a0[0xc0] = pbVar24 + lVar17 + uVar12;
          pbVar9 = pbVar24 + lVar17 + uVar12;
          break;
        default:
          bVar1 = bVar2 & 0xc0;
          uVar10 = (ulong)bVar2 & 0x3f;
          if (bVar1 == 0x40) {
            uVar22 = uVar22 + (uint)((int)param_3[5] * (int)uVar10);
            pbVar9 = pbVar23;
          }
          else {
            pbVar9 = pbVar23;
            if (bVar1 == 0xc0) goto LAB_00d11888;
            if (bVar1 != 0x80) {
              return 0;
            }
            uVar15 = 0;
            uVar12 = 0;
            do {
              if (pbVar21 == pbVar23) goto LAB_00d11c70;
              if (0x3f < uVar15) goto LAB_00d11c48;
              bVar2 = *pbVar23;
              uVar19 = (ulong)bVar2 & 0x7f;
              uVar18 = uVar19 << (uVar15 & 0x3f);
              if (uVar18 >> (uVar15 & 0x3f) != uVar19) goto LAB_00d11c48;
              uVar12 = uVar18 | uVar12;
              uVar15 = uVar15 + 7;
              pbVar23 = pbVar23 + 1;
              pbVar9 = pbVar9 + 1;
            } while ((char)bVar2 < '\0');
            apbStack_6a0[0xc0] = pbVar9;
            iVar14 = *(int *)((long)param_3 + 0x2c);
            if (*(char *)(param_6 + uVar10 * 4 + 7) == '\0') {
              pbVar23 = *(byte **)(param_6 + uVar10 * 4 + 6);
              apbStack_6a0[uVar10 * 2 + 1] = *(byte **)(param_6 + uVar10 * 4 + 8);
              apbStack_6a0[uVar10 * 2] = pbVar23;
              *(char *)(param_6 + uVar10 * 4 + 7) = '\x01';
            }
            param_6[uVar10 * 4 + 6] = 2;
            *(ulong *)(param_6 + uVar10 * 4 + 8) = uVar12 * (long)iVar14;
          }
          break;
        case 0x2d:
          if (local_6cc != 4) goto code_r0x00d11a60;
          if (*(char *)(param_6 + 0x8f) == '\0') {
            pbVar9 = (byte *)*local_6e0;
            local_6e8[1] = (byte *)local_6e0[1];
            *local_6e8 = pbVar9;
            *(undefined1 *)(param_6 + 0x8f) = 1;
          }
          *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
          pbVar9 = pbVar23;
          break;
        case 0x2e:
          uVar10 = 0;
          uVar15 = 0;
          pbVar9 = pbVar23;
          do {
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          param_6[4] = (int)uVar15;
          break;
        case 0x2f:
          uVar10 = 0;
          uVar15 = 0;
          lVar17 = (long)pbVar5 - (long)pbVar23;
          pbVar9 = pbVar23;
          do {
            lVar16 = lVar17;
            if (pbVar21 == pbVar23) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            bVar2 = *pbVar23;
            uVar18 = (ulong)bVar2 & 0x7f;
            uVar12 = uVar18 << (uVar10 & 0x3f);
            if (uVar12 >> (uVar10 & 0x3f) != uVar18) goto LAB_00d11c48;
            uVar15 = uVar12 | uVar15;
            uVar10 = uVar10 + 7;
            pbVar23 = pbVar23 + 1;
            pbVar9 = pbVar9 + 1;
            lVar17 = lVar16 + -1;
          } while ((char)bVar2 < '\0');
          apbStack_6a0[0xc0] = pbVar9;
          if (0x5f < uVar15) {
            pcVar6 = 
            "libunwind: malformed DW_CFA_GNU_negative_offset_extended DWARF unwind, reg too big\n";
            __size = 0x53;
            goto LAB_00d11c18;
          }
          lVar17 = 0;
          uVar10 = 0;
          uVar12 = 0;
          do {
            if (lVar16 == 0) goto LAB_00d11c70;
            if (0x3f < uVar10) goto LAB_00d11c48;
            pbVar24 = pbVar23 + lVar17;
            uVar19 = (ulong)*pbVar24 & 0x7f;
            uVar18 = uVar19 << (uVar10 & 0x3f);
            if (uVar18 >> (uVar10 & 0x3f) != uVar19) goto LAB_00d11c48;
            uVar12 = uVar18 | uVar12;
            uVar10 = uVar10 + 7;
            lVar17 = lVar17 + 1;
            lVar16 = lVar16 + -1;
          } while ((char)*pbVar24 < '\0');
          pbVar23 = pbVar9 + lVar17;
          puVar13 = param_6 + uVar15 * 4;
          apbStack_6a0[0xc0] = pbVar23;
          pcVar6 = (char *)(puVar13 + 7);
          cVar3 = *pcVar6;
          lVar17 = -(uVar12 * (long)*(int *)((long)param_3 + 0x2c));
joined_r0x00d11a2c:
          if (cVar3 == '\0') {
            pbVar9 = *(byte **)(param_6 + uVar15 * 4 + 6);
            apbStack_6a0[uVar15 * 2 + 1] = *(byte **)(param_6 + uVar15 * 4 + 8);
            apbStack_6a0[uVar15 * 2] = pbVar9;
            *pcVar6 = '\x01';
          }
LAB_00d11a50:
          uVar8 = 2;
LAB_00d11a54:
          puVar13[6] = uVar8;
          *(long *)(puVar13 + 8) = lVar17;
code_r0x00d11a60:
          pbVar9 = pbVar23;
        }
      } while ((uVar22 < uVar20) && (pbVar9 < pbVar21));
    }
    plVar25 = plVar25 + 3;
    if (plVar25 == local_6c8) {
      return 1;
    }
  } while( true );
LAB_00d11ca8:
  pcVar6 = "getSLEB128";
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  pcVar7 = "truncated sleb128 expression";
  goto LAB_00d11c94;
LAB_00d11c70:
  pcVar6 = "getULEB128";
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  pcVar7 = "truncated uleb128 expression";
  goto LAB_00d11c94;
LAB_00d11c48:
  pcVar6 = "getULEB128";
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  pcVar7 = "malformed uleb128 expression";
LAB_00d11c94:
  fprintf(__stream,"libunwind: %s - %s\n",pcVar6,pcVar7);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d11cd0  FUN_00d11cd0 =====

long FUN_00d11cd0(undefined8 param_1,uint *param_2,long param_3)

{
  FILE *__stream;
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *param_2;
  switch(uVar1) {
  case 0:
    lVar2 = FUN_00d1220c(*(undefined8 *)(param_2 + 2),param_1,param_3,0);
    return lVar2;
  default:
    if (0x1f < uVar1) {
      __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
      fprintf(__stream,"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
      fflush(__stream);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar3 = (long *)(param_3 + (ulong)uVar1 * 8);
    break;
  case 0x22:
    plVar3 = (long *)(param_3 + 0x108);
    break;
  case 0xfffffffe:
    plVar3 = (long *)(param_3 + 0xf8);
    break;
  case 0xffffffff:
    plVar3 = (long *)(param_3 + 0x100);
  }
  return *plVar3 + (long)(int)param_2[1];
}


// ===== 00d11db4  FUN_00d11db4 =====

undefined8 FUN_00d11db4(undefined8 param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  FILE *__stream;
  
  switch(*param_4) {
  case 1:
    return 0;
  case 2:
    return *(undefined8 *)(*(long *)(param_4 + 2) + param_3);
  default:
    pcVar3 = "getSavedRegister";
    pcVar4 = "unsupported restore location for register";
LAB_00d11f08:
    __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
    fprintf(__stream,"libunwind: %s - %s\n",pcVar3,pcVar4);
    fflush(__stream);
                    /* WARNING: Subroutine does not return */
    abort();
  case 4:
    break;
  case 5:
    puVar1 = (undefined8 *)FUN_00d1220c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
    return *puVar1;
  case 6:
    uVar2 = FUN_00d1220c(*(undefined8 *)(param_4 + 2),param_1,param_2,param_3);
    return uVar2;
  }
  uVar5 = (uint)*(ulong *)(param_4 + 2);
  if (uVar5 == 0xfffffffe) {
    puVar1 = (undefined8 *)(param_2 + 0xf8);
  }
  else if (uVar5 == 0x22) {
    puVar1 = (undefined8 *)(param_2 + 0x108);
  }
  else if (uVar5 == 0xffffffff) {
    puVar1 = (undefined8 *)(param_2 + 0x100);
  }
  else {
    if (0x1f < uVar5) {
      pcVar3 = "getRegister";
      pcVar4 = "unsupported arm64 register";
      goto LAB_00d11f08;
    }
    puVar1 = (undefined8 *)(param_2 + (*(ulong *)(param_4 + 2) & 0xffffffff) * 8);
  }
  return *puVar1;
}


// ===== 00d11f1c  FUN_00d11f1c =====

long * FUN_00d11f1c(undefined8 param_1,long *param_2,uint *param_3,uint param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  FILE *__stream;
  
  if (0xc < (param_4 & 0xf)) {
switchD_00d12070_default:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
    pcVar5 = "unknown pointer encoding";
    goto LAB_00d12120;
  }
  puVar6 = (uint *)*param_2;
  switch(param_4 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    puVar8 = puVar6 + 2;
    plVar3 = *(long **)puVar6;
    break;
  case 1:
    uVar10 = 0;
    plVar3 = (long *)0x0;
    puVar8 = puVar6;
    do {
      if (param_3 == puVar8) {
        pcVar4 = "getULEB128";
        __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
        pcVar5 = "truncated uleb128 expression";
        goto LAB_00d12120;
      }
      if (0x3f < uVar10) {
LAB_00d120ac:
        pcVar4 = "getULEB128";
        __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
        pcVar5 = "malformed uleb128 expression";
        goto LAB_00d12120;
      }
      uVar2 = *puVar8;
      uVar11 = (ulong)(byte)uVar2 & 0x7f;
      uVar9 = uVar11 << (uVar10 & 0x3f);
      if (uVar9 >> (uVar10 & 0x3f) != uVar11) goto LAB_00d120ac;
      plVar3 = (long *)(uVar9 | (ulong)plVar3);
      uVar10 = uVar10 + 7;
      puVar8 = (uint *)((long)puVar8 + 1);
    } while ((char)(byte)uVar2 < '\0');
    break;
  case 2:
    puVar8 = (uint *)((long)puVar6 + 2);
    plVar3 = (long *)(ulong)(ushort)*puVar6;
    break;
  case 3:
    puVar8 = puVar6 + 1;
    plVar3 = (long *)(ulong)*puVar6;
    break;
  default:
    goto switchD_00d12070_default;
  case 9:
    uVar10 = 0;
    uVar9 = 0;
    puVar7 = puVar6;
    do {
      if (param_3 == puVar7) {
        pcVar4 = "getSLEB128";
        __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
        pcVar5 = "truncated sleb128 expression";
        goto LAB_00d12120;
      }
      puVar8 = (uint *)((long)puVar7 + 1);
      bVar1 = (byte)*puVar7;
      uVar9 = ((ulong)bVar1 & 0x7f) << (uVar10 & 0x3f) | uVar9;
      uVar10 = uVar10 + 7;
      puVar7 = puVar8;
    } while ((char)bVar1 < '\0');
    uVar11 = -1L << (uVar10 & 0x3f);
    if (((uint)((int)uVar10 - 7U < 0x39) & (bVar1 & 0x40) >> 6) == 0) {
      uVar11 = 0;
    }
    plVar3 = (long *)(uVar9 | uVar11);
    break;
  case 10:
    puVar8 = (uint *)((long)puVar6 + 2);
    plVar3 = (long *)(long)(short)*puVar6;
    break;
  case 0xb:
    puVar8 = puVar6 + 1;
    plVar3 = (long *)(long)(int)*puVar6;
  }
  param_4 = param_4 & 0xff;
  *param_2 = (long)puVar8;
  switch(param_4 >> 4 & 7) {
  case 1:
    plVar3 = (long *)((long)plVar3 + (long)puVar6);
  case 0:
    if (param_4 >> 7 != 0) {
LAB_00d12084:
      plVar3 = (long *)*plVar3;
    }
    return plVar3;
  case 2:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
    pcVar5 = "DW_EH_PE_textrel pointer encoding not supported";
    break;
  case 3:
    if (param_5 == 0) {
      pcVar4 = "getEncodedP";
      __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
      pcVar5 = "DW_EH_PE_datarel is invalid with a datarelBase of 0";
      break;
    }
    plVar3 = (long *)((long)plVar3 + param_5);
    if (param_4 >> 7 == 0) {
      return plVar3;
    }
    goto LAB_00d12084;
  case 4:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
    pcVar5 = "DW_EH_PE_funcrel pointer encoding not supported";
    break;
  case 5:
    pcVar4 = "getEncodedP";
    __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
    pcVar5 = "DW_EH_PE_aligned pointer encoding not supported";
    break;
  default:
    goto switchD_00d12070_default;
  }
LAB_00d12120:
  fprintf(__stream,"libunwind: %s - %s\n",pcVar4,pcVar5);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d1220c  FUN_00d1220c =====

ulong FUN_00d1220c(byte *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  ulong *puVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbVar19;
  ulong *puVar20;
  FILE *__stream;
  undefined1 auVar21 [16];
  ulong local_338 [99];
  
  uVar12 = 0;
  uVar10 = 0;
  pbVar19 = param_1 + 0x14;
  lVar13 = -(long)param_1;
  do {
    if (pbVar19 == param_1) goto LAB_00d12a78;
    if (0x3f < uVar12) goto LAB_00d12a50;
    bVar5 = *param_1;
    uVar16 = (ulong)bVar5 & 0x7f;
    uVar14 = uVar16 << (uVar12 & 0x3f);
    if (uVar14 >> (uVar12 & 0x3f) != uVar16) goto LAB_00d12a50;
    uVar10 = uVar14 | uVar10;
    uVar12 = uVar12 + 7;
    param_1 = param_1 + 1;
    lVar13 = lVar13 + -1;
  } while ((char)bVar5 < '\0');
  pbVar19 = (byte *)-lVar13;
  pbVar11 = (byte *)(uVar10 - lVar13);
  local_338[0] = param_4;
  if (pbVar19 < pbVar11) {
    puVar1 = (ulong *)(param_3 + 0x108);
    puVar2 = (ulong *)(param_3 + 0xf8);
    puVar3 = (ulong *)(param_3 + 0x100);
    puVar15 = local_338;
    do {
      pbVar17 = pbVar19 + 1;
      bVar5 = *pbVar19;
      uVar18 = (uint)bVar5;
      if (0x91 < uVar18 - 3) {
code_r0x00d12adc:
        pcVar8 = "evaluateExpression";
        pcVar9 = "DWARF opcode not implemented";
        goto LAB_00d12a9c;
      }
      puVar7 = puVar15;
      switch(uVar18) {
      case 3:
      case 0xe:
      case 0xf:
        puVar20 = (ulong *)(pbVar19 + 1);
        pbVar19 = pbVar19 + 9;
        puVar7 = puVar15 + 1;
        *puVar7 = *puVar20;
        break;
      case 4:
      case 5:
      case 7:
        goto code_r0x00d12adc;
      case 6:
        uVar12 = *(ulong *)*puVar15;
        goto LAB_00d12a04;
      case 8:
        uVar12 = (ulong)pbVar19[1];
        goto LAB_00d125cc;
      case 9:
        uVar12 = (ulong)(char)pbVar19[1];
        goto LAB_00d125cc;
      case 10:
        uVar12 = (ulong)*(ushort *)(pbVar19 + 1);
        goto LAB_00d124bc;
      case 0xb:
        uVar12 = (ulong)*(short *)(pbVar19 + 1);
LAB_00d124bc:
        pbVar19 = pbVar19 + 3;
        puVar7 = puVar15 + 1;
        *puVar7 = uVar12;
        break;
      case 0xc:
        uVar12 = (ulong)*(uint *)(pbVar19 + 1);
        goto LAB_00d124dc;
      case 0xd:
        uVar12 = (ulong)*(int *)(pbVar19 + 1);
LAB_00d124dc:
        pbVar19 = pbVar19 + 5;
        puVar7 = puVar15 + 1;
        *puVar7 = uVar12;
        break;
      case 0x10:
        uVar10 = 0;
        uVar12 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_00d12a78;
          if (0x3f < uVar10) goto LAB_00d12a50;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar10 & 0x3f);
          if (uVar14 >> (uVar10 & 0x3f) != uVar16) goto LAB_00d12a50;
          uVar12 = uVar14 | uVar12;
          uVar10 = uVar10 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        goto LAB_00d122b4;
      case 0x11:
        uVar10 = 0;
        uVar12 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_00d12a28;
          bVar5 = *pbVar19;
          pbVar17 = pbVar17 + 1;
          uVar14 = uVar10 & 0x3f;
          uVar10 = uVar10 + 7;
          uVar12 = ((ulong)bVar5 & 0x7f) << uVar14 | uVar12;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar5 < '\0');
        uVar14 = -1L << (uVar10 & 0x3f);
        if (((uint)((int)uVar10 - 7U < 0x39) & (bVar5 & 0x40) >> 6) == 0) {
          uVar14 = 0;
        }
        uVar12 = uVar12 | uVar14;
        goto LAB_00d122b4;
      case 0x12:
        uVar12 = *puVar15;
        goto LAB_00d122b4;
      case 0x13:
        puVar7 = puVar15 + -1;
        pbVar19 = pbVar17;
        break;
      case 0x14:
        uVar12 = puVar15[-1];
        goto LAB_00d122b4;
      case 0x15:
        uVar12 = puVar15[-(ulong)pbVar19[1]];
LAB_00d125cc:
        puVar7 = puVar15 + 1;
        *puVar7 = uVar12;
        pbVar19 = pbVar19 + 2;
        break;
      case 0x16:
        auVar21 = NEON_ext(*(undefined1 (*) [16])(puVar15 + -1),*(undefined1 (*) [16])(puVar15 + -1)
                           ,8,1);
        *puVar15 = auVar21._8_8_;
        puVar15[-1] = auVar21._0_8_;
        pbVar19 = pbVar17;
        break;
      case 0x17:
        uVar12 = *puVar15;
        *puVar15 = SUB168(*(undefined1 (*) [16])(puVar15 + -2),8);
        puVar15[-1] = SUB168(*(undefined1 (*) [16])(puVar15 + -2),0);
        puVar15[-2] = uVar12;
        pbVar19 = pbVar17;
        break;
      case 0x18:
        puVar15[-1] = *(ulong *)*puVar15;
        puVar7 = puVar15 + -1;
        pbVar19 = pbVar17;
        break;
      case 0x19:
        pbVar19 = pbVar17;
        if ((long)*puVar15 < 0) {
          uVar12 = -*puVar15;
          goto LAB_00d12a04;
        }
        break;
      case 0x1a:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 & *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x1b:
        puVar7 = puVar15 + -1;
        uVar12 = 0;
        if (*puVar15 != 0) {
          uVar12 = (long)*puVar7 / (long)*puVar15;
        }
        *puVar7 = uVar12;
        pbVar19 = pbVar17;
        break;
      case 0x1c:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 - *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x1d:
        puVar7 = puVar15 + -1;
        uVar12 = *puVar15;
        lVar13 = 0;
        if (uVar12 != 0) {
          lVar13 = (long)*puVar7 / (long)uVar12;
        }
        *puVar7 = *puVar7 - lVar13 * uVar12;
        pbVar19 = pbVar17;
        break;
      case 0x1e:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 * *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x1f:
        uVar12 = -*puVar15;
        goto LAB_00d12a04;
      case 0x20:
        uVar12 = ~*puVar15;
        goto LAB_00d12a04;
      case 0x21:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 | *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x22:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 + *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x23:
        uVar10 = 0;
        uVar12 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_00d12a78;
          if (0x3f < uVar10) goto LAB_00d12a50;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar10 & 0x3f);
          if (uVar14 >> (uVar10 & 0x3f) != uVar16) goto LAB_00d12a50;
          uVar12 = uVar14 | uVar12;
          uVar10 = uVar10 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        uVar12 = *puVar15 + uVar12;
        goto LAB_00d12a04;
      case 0x24:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 << (*puVar15 & 0x3f);
        pbVar19 = pbVar17;
        break;
      case 0x25:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 >> (*puVar15 & 0x3f);
        pbVar19 = pbVar17;
        break;
      case 0x26:
        puVar7 = puVar15 + -1;
        *puVar7 = (long)*puVar7 >> (*puVar15 & 0x3f);
        pbVar19 = pbVar17;
        break;
      case 0x27:
        puVar7 = puVar15 + -1;
        *puVar7 = *puVar7 ^ *puVar15;
        pbVar19 = pbVar17;
        break;
      case 0x28:
        puVar7 = puVar15 + -1;
        pbVar19 = pbVar19 + 3;
        if (*puVar15 != 0) {
          pbVar19 = pbVar19 + *(short *)pbVar17;
        }
        break;
      case 0x29:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 == *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2a:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar15 <= *puVar7);
        pbVar19 = pbVar17;
        break;
      case 0x2b:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar15 < *puVar7);
        pbVar19 = pbVar17;
        break;
      case 0x2c:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 <= *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2d:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 < *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2e:
        puVar7 = puVar15 + -1;
        *puVar7 = (ulong)(*puVar7 != *puVar15);
        pbVar19 = pbVar17;
        break;
      case 0x2f:
        pbVar19 = pbVar19 + (long)*(short *)(pbVar19 + 1) + 3;
        break;
      default:
        uVar12 = (ulong)bVar5 - 0x30;
        goto LAB_00d122b4;
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
        uVar12 = *(ulong *)(param_3 + (ulong)(bVar5 - 0x50) * 8);
        goto LAB_00d122b4;
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
        uVar12 = 0;
        uVar10 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_00d12a28;
          bVar4 = *pbVar19;
          pbVar17 = pbVar17 + 1;
          uVar14 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar10 = ((ulong)bVar4 & 0x7f) << uVar14 | uVar10;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar4 < '\0');
        uVar14 = -1L << (uVar12 & 0x3f);
        if (((uint)((int)uVar12 - 7U < 0x39) & (bVar4 & 0x40) >> 6) == 0) {
          uVar14 = 0;
        }
        puVar7 = puVar1;
        if (((uVar18 != 0x92) && (puVar7 = puVar3, uVar18 != 0x6f)) &&
           (puVar7 = puVar2, bVar5 != 0x6e)) {
          if (0x1f < uVar18 - 0x70) {
LAB_00d12ab0:
            pcVar8 = "getRegister";
            pcVar9 = "unsupported arm64 register";
            goto LAB_00d12a9c;
          }
          puVar7 = (ulong *)(param_3 + (ulong)(uVar18 - 0x70) * 8);
        }
        uVar12 = *puVar7 + (uVar10 | uVar14);
        goto LAB_00d122b4;
      case 0x90:
        uVar12 = 0;
        uVar10 = 0;
        pbVar19 = pbVar17;
        do {
          if (pbVar11 == pbVar19) goto LAB_00d12a78;
          if (0x3f < uVar12) goto LAB_00d12a50;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar12 & 0x3f);
          if (uVar14 >> (uVar12 & 0x3f) != uVar16) goto LAB_00d12a50;
          uVar10 = uVar14 | uVar10;
          uVar12 = uVar12 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar17 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        uVar18 = (uint)uVar10;
        puVar7 = puVar1;
        if (((uVar18 != 0x22) && (puVar7 = puVar3, uVar18 != 0xffffffff)) &&
           (puVar7 = puVar2, uVar18 != 0xfffffffe)) {
          if (0x1f < uVar18) goto LAB_00d12ab0;
          puVar7 = (ulong *)(param_3 + (uVar10 & 0xffffffff) * 8);
        }
        uVar12 = *puVar7;
        goto LAB_00d122b4;
      case 0x91:
        pcVar8 = "evaluateExpression";
        pcVar9 = "DW_OP_fbreg not implemented";
        goto LAB_00d12a9c;
      case 0x92:
        uVar12 = 0;
        uVar10 = 0;
        pbVar6 = pbVar19 + 2;
        pbVar19 = pbVar17;
        do {
          pbVar17 = pbVar6;
          if (pbVar11 == pbVar19) goto LAB_00d12a78;
          if (0x3f < uVar12) goto LAB_00d12a50;
          bVar5 = *pbVar19;
          uVar16 = (ulong)bVar5 & 0x7f;
          uVar14 = uVar16 << (uVar12 & 0x3f);
          if (uVar14 >> (uVar12 & 0x3f) != uVar16) goto LAB_00d12a50;
          uVar10 = uVar14 | uVar10;
          uVar12 = uVar12 + 7;
          pbVar19 = pbVar19 + 1;
          pbVar6 = pbVar17 + 1;
        } while ((char)bVar5 < '\0');
        uVar12 = 0;
        uVar14 = 0;
        do {
          if (pbVar11 == pbVar19) goto LAB_00d12a28;
          bVar5 = *pbVar19;
          pbVar17 = pbVar17 + 1;
          uVar16 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar14 = ((ulong)bVar5 & 0x7f) << uVar16 | uVar14;
          pbVar19 = pbVar19 + 1;
        } while ((char)bVar5 < '\0');
        uVar16 = -1L << (uVar12 & 0x3f);
        if (((uint)((int)uVar12 - 7U < 0x39) & (bVar5 & 0x40) >> 6) == 0) {
          uVar16 = 0;
        }
        uVar18 = (uint)uVar10;
        puVar7 = puVar1;
        if (((uVar18 != 0x22) && (puVar7 = puVar3, uVar18 != 0xffffffff)) &&
           (puVar7 = puVar2, uVar18 != 0xfffffffe)) {
          if (0x1f < uVar18) goto LAB_00d12ab0;
          puVar7 = (ulong *)(param_3 + (uVar10 & 0xffffffff) * 8);
        }
        uVar12 = *puVar7 + (uVar14 | uVar16);
LAB_00d122b4:
        puVar15[1] = uVar12;
        puVar7 = puVar15 + 1;
        pbVar19 = pbVar17;
        break;
      case 0x93:
        pcVar8 = "evaluateExpression";
        pcVar9 = "DW_OP_piece not implemented";
        goto LAB_00d12a9c;
      case 0x94:
        if (7 < pbVar19[1] - 1) {
code_r0x00d12b60:
          pcVar8 = "evaluateExpression";
          pcVar9 = "DW_OP_deref_size with bad size";
          goto LAB_00d12a9c;
        }
        puVar20 = (ulong *)*puVar15;
        pbVar17 = pbVar19 + 2;
        switch((uint)pbVar19[1]) {
        case 1:
          uVar12 = (ulong)(byte)*puVar20;
          break;
        case 2:
          uVar12 = (ulong)(ushort)*puVar20;
          break;
        default:
          goto code_r0x00d12b60;
        case 4:
          uVar12 = (ulong)(uint)*puVar20;
          break;
        case 8:
          uVar12 = *puVar20;
        }
LAB_00d12a04:
        *puVar15 = uVar12;
        pbVar19 = pbVar17;
      }
      puVar15 = puVar7;
    } while (pbVar19 < pbVar11);
    param_4 = *puVar7;
  }
  return param_4;
LAB_00d12a28:
  pcVar8 = "getSLEB128";
  pcVar9 = "truncated sleb128 expression";
  goto LAB_00d12a9c;
LAB_00d12a78:
  pcVar8 = "getULEB128";
  pcVar9 = "truncated uleb128 expression";
  goto LAB_00d12a9c;
LAB_00d12a50:
  pcVar8 = "getULEB128";
  pcVar9 = "malformed uleb128 expression";
LAB_00d12a9c:
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  fprintf(__stream,"libunwind: %s - %s\n",pcVar8,pcVar9);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d12b88  FUN_00d12b88 =====

undefined8 FUN_00d12b88(long param_1,ulong param_2,long *param_3,uint param_4)

{
  byte bVar1;
  undefined *__src;
  ulong uVar2;
  undefined *__dest;
  long *plVar3;
  size_t __n;
  long lVar4;
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
      (uVar2 = FUN_00d13038(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],
                            param_3[2] + (ulong)param_4,&local_6b0,auStack_6e8), (uVar2 & 1) == 0))
     && ((param_3[4] == 0 ||
         (uVar2 = FUN_00d132a0(*(undefined8 *)(param_1 + 8),param_2,param_3[4],(int)param_3[5],
                               &local_6b0,auStack_6e8), (uVar2 & 1) == 0)))) {
    lVar4 = *param_3;
    pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00dbbb34);
    if (PTR_DAT_00d601e0 < PTR_DAT_00d601e8) {
      plVar3 = (long *)PTR_DAT_00d601e0;
      if (lVar4 == -1) {
        do {
          if (((ulong)plVar3[1] <= param_2) && (param_2 < (ulong)plVar3[2])) goto LAB_00d12c90;
          plVar3 = plVar3 + 4;
        } while (plVar3 < PTR_DAT_00d601e8);
      }
      else {
        do {
          if (((*plVar3 == lVar4) && ((ulong)plVar3[1] <= param_2)) && (param_2 < (ulong)plVar3[2]))
          goto LAB_00d12c90;
          plVar3 = plVar3 + 4;
        } while (plVar3 < PTR_DAT_00d601e8);
      }
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00dbbb34);
    goto LAB_00d12cd8;
  }
LAB_00d12cf8:
  bVar1 = 1;
LAB_00d12cfc:
  lVar4 = *param_3;
  memset(auStack_680,0,0x618);
  uVar2 = FUN_00d10a1c(*(undefined8 *)(param_1 + 8),&local_6b0,auStack_6e8,param_2,4,auStack_680);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(long *)(param_1 + 0x220) = local_698;
  *(undefined8 *)(param_1 + 0x230) = uStack_688;
  *(long *)(param_1 + 0x228) = local_690;
  *(undefined8 *)(param_1 + 0x238) = local_6c8;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0x3000000;
  *(ulong *)(param_1 + 0x240) = (ulong)local_670;
  *(long *)(param_1 + 600) = local_6b0;
  *(undefined4 *)(param_1 + 0x254) = uStack_6a8;
  *(long *)(param_1 + 0x260) = lVar4;
  if ((!(bool)(param_4 != 0 | bVar1 ^ 1)) && (param_3[4] == 0)) {
    lVar4 = *param_3;
    pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00dbbb34);
    __src = PTR_DAT_00d601e0;
    if (DAT_00d601f0 <= PTR_DAT_00d601e8) {
      __n = (long)DAT_00d601f0 - (long)PTR_DAT_00d601e0;
      __dest = (undefined *)malloc(__n * 4);
      memcpy(__dest,__src,__n);
      if ((undefined8 *)__src != &DAT_00dbbb70) {
        free(__src);
      }
      PTR_DAT_00d601e8 = __dest + ((long)__n >> 5) * 0x20;
      DAT_00d601f0 = __dest + ((long)__n >> 3) * 0x20;
      PTR_DAT_00d601e0 = __dest;
    }
    *(long *)PTR_DAT_00d601e8 = lVar4;
    *(long *)((long)PTR_DAT_00d601e8 + 8) = local_698;
    *(long *)((long)PTR_DAT_00d601e8 + 0x18) = local_6b0;
    *(long *)((long)PTR_DAT_00d601e8 + 0x10) = local_690;
    PTR_DAT_00d601e8 = (undefined *)((long)PTR_DAT_00d601e8 + 0x20);
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00dbbb34);
  }
  return 1;
LAB_00d12c90:
  lVar4 = plVar3[3];
  pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00dbbb34);
  if ((lVar4 != 0) &&
     (uVar2 = FUN_00d13038(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],lVar4,
                           &local_6b0,auStack_6e8), (uVar2 & 1) != 0)) {
    bVar1 = 0;
    goto LAB_00d12cfc;
  }
LAB_00d12cd8:
  uVar2 = FUN_00d13038(*(undefined8 *)(param_1 + 8),param_2,param_3[2],param_3[3],0,&local_6b0,
                       auStack_6e8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  goto LAB_00d12cf8;
}


// ===== 00d12e68  FUN_00d12e68 =====

undefined8 FUN_00d12e68(ulong *param_1,undefined8 param_2,undefined8 *param_3)

{
  FILE *__s;
  ulong uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  char *local_68;
  
  uVar14 = (ulong)(ushort)param_1[3];
  if (uVar14 != 0) {
    uVar7 = param_3[2];
    uVar15 = *param_1;
    if (uVar15 <= uVar7) {
      uVar6 = param_1[2];
      lVar9 = 0;
      do {
        if (*(int *)(uVar6 + lVar9) == 1) {
          uVar1 = *(long *)(uVar6 + lVar9 + 0x10) + uVar15;
          if ((uVar1 <= uVar7) &&
             (uVar11 = *(ulong *)(uVar6 + lVar9 + 0x28), uVar7 < uVar11 + uVar1)) {
            puVar8 = (ulong *)param_3[1];
            uVar7 = uVar14 + 0xffffffff;
            __s = (FILE *)(PTR___sF_00d54a40 + 0x130);
            *puVar8 = uVar1;
            puVar8[1] = uVar11;
            while( true ) {
              if (*(int *)(uVar6 + (uVar7 & 0xffffffff) * 0x38) == 0x6474e550) {
                lVar9 = uVar6 + (uVar7 & 0xffffffff) * 0x38;
                lVar10 = param_3[1];
                pcVar2 = (char *)(*(long *)(lVar9 + 0x10) + uVar15);
                *(char **)(lVar10 + 0x20) = pcVar2;
                uVar12 = *(undefined8 *)(lVar9 + 0x28);
                local_68 = pcVar2 + 1;
                *(undefined8 *)(lVar10 + 0x28) = uVar12;
                uVar13 = *param_3;
                if (*pcVar2 == '\x01') {
                  cVar3 = pcVar2[2];
                  local_68 = pcVar2 + 4;
                  uVar5 = FUN_00d11f1c(uVar13,&local_68,uVar12,pcVar2[1],pcVar2);
                  if (cVar3 != -1) {
                    FUN_00d11f1c(uVar13,&local_68,uVar12,cVar3,pcVar2);
                  }
                  lVar9 = param_3[1];
                  *(undefined8 *)(lVar9 + 0x10) = uVar5;
                  *(undefined8 *)(lVar9 + 0x18) = 0xffffffffffffffff;
                  return 1;
                }
                fwrite("libunwind: Unsupported .eh_frame_hdr version\n",0x2d,1,__s);
              }
              uVar4 = (int)uVar14 - 1;
              uVar14 = (ulong)uVar4;
              if ((uVar4 & 0xffff) == 0) break;
              uVar6 = param_1[2];
              uVar7 = uVar7 - 1;
            }
            return 0;
          }
        }
        lVar9 = lVar9 + 0x38;
      } while (uVar14 * 0x38 - lVar9 != 0);
    }
  }
  return 0;
}


// ===== 00d13038  FUN_00d13038 =====

undefined8
FUN_00d13038(undefined8 param_1,ulong param_2,uint *param_3,long param_4,uint *param_5,
            undefined8 *param_6,long param_7)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  FILE *__stream;
  uint *puVar15;
  uint *local_68;
  
  puVar15 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar15 = (uint *)0xffffffffffffffff;
  }
  do {
    do {
      puVar2 = puVar1;
      if (puVar15 <= puVar2) {
        return 0;
      }
      local_68 = puVar2 + 1;
      uVar10 = (ulong)*puVar2;
      if (*puVar2 == 0xffffffff) {
        uVar10 = *(ulong *)(puVar2 + 1);
        local_68 = puVar2 + 3;
      }
      if (uVar10 == 0) {
        return 0;
      }
      puVar1 = (uint *)((long)local_68 + uVar10);
    } while ((((*local_68 == 0) ||
              (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), puVar7 < param_3)) ||
             (puVar15 <= puVar7)) || (lVar4 = FUN_00d1347c(param_1,puVar7,param_7), lVar4 != 0));
    local_68 = local_68 + 1;
    uVar10 = FUN_00d11f1c(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x18),0);
    lVar4 = FUN_00d11f1c(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
  } while ((param_2 <= uVar10) || (lVar4 + uVar10 < param_2));
  param_6[5] = 0;
  puVar15 = local_68;
  if (*(char *)(param_7 + 0x31) != '\0') {
    uVar12 = 0;
    uVar9 = 0;
    lVar11 = -(long)local_68;
    do {
      if (puVar1 == puVar15) {
        pcVar8 = "truncated uleb128 expression";
        goto LAB_00d1328c;
      }
      if (0x3f < uVar12) {
LAB_00d13240:
        pcVar8 = "malformed uleb128 expression";
LAB_00d1328c:
        __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
        fprintf(__stream,"libunwind: %s - %s\n","getULEB128",pcVar8);
        fflush(__stream);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar3 = *puVar15;
      uVar14 = (ulong)(byte)uVar3 & 0x7f;
      uVar13 = uVar14 << (uVar12 & 0x3f);
      if (uVar13 >> (uVar12 & 0x3f) != uVar14) goto LAB_00d13240;
      uVar9 = uVar13 | uVar9;
      uVar12 = uVar12 + 7;
      puVar15 = (uint *)((long)puVar15 + 1);
      lVar11 = lVar11 + -1;
    } while ((char)(byte)uVar3 < '\0');
    puVar15 = (uint *)(uVar9 - lVar11);
    if ((*(byte *)(param_7 + 0x19) != 0xff) &&
       (local_68 = (uint *)-lVar11,
       lVar5 = FUN_00d11f1c(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0), lVar5 != 0)
       ) {
      local_68 = (uint *)-lVar11;
      uVar6 = FUN_00d11f1c(param_1,&local_68,puVar1,*(undefined1 *)(param_7 + 0x19),0);
      param_6[5] = uVar6;
    }
  }
  param_6[2] = puVar15;
  param_6[3] = uVar10;
  param_6[4] = lVar4 + uVar10;
  *param_6 = puVar2;
  param_6[1] = (long)puVar1 - (long)puVar2;
  return 1;
}


// ===== 00d132a0  FUN_00d132a0 =====

undefined8
FUN_00d132a0(undefined8 param_1,ulong param_2,char *param_3,ulong param_4,long param_5,
            undefined8 param_6)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  char *local_68;
  
  local_68 = param_3 + 1;
  if (*param_3 == '\x01') {
    local_68 = param_3 + 4;
    cVar2 = param_3[2];
    cVar3 = param_3[3];
    pcVar1 = param_3 + (param_4 & 0xffffffff);
    FUN_00d11f1c(param_1,&local_68,pcVar1,param_3[1],param_3);
    if (cVar2 != -1) {
      uVar6 = FUN_00d11f1c(param_1,&local_68,pcVar1,cVar2,param_3);
      pcVar4 = local_68;
      if (uVar6 == 0) {
        return 0;
      }
      lVar7 = FUN_00d13870(cVar3);
      lVar12 = 0;
      do {
        if (uVar6 < 2) {
          pcVar10 = pcVar4 + lVar12 * lVar7;
          break;
        }
        uVar11 = uVar6 >> 1;
        pcVar10 = pcVar4 + (uVar11 + lVar12) * lVar7;
        local_68 = pcVar10;
        uVar8 = FUN_00d11f1c(param_1,&local_68,pcVar1,cVar3,param_3);
        uVar6 = uVar6 - uVar11;
        lVar5 = uVar11 + lVar12;
        if (param_2 <= uVar8) {
          uVar6 = uVar11;
          lVar5 = lVar12;
        }
        lVar12 = lVar5;
      } while (uVar8 != param_2);
      local_68 = pcVar10;
      FUN_00d11f1c(param_1,&local_68,pcVar1,cVar3,param_3);
      uVar9 = FUN_00d11f1c(param_1,&local_68,pcVar1,cVar3,param_3);
      lVar12 = FUN_00d0fef8(param_1,uVar9,param_5,param_6);
      if (((lVar12 == 0) && (*(ulong *)(param_5 + 0x18) <= param_2)) &&
         (param_2 < *(ulong *)(param_5 + 0x20))) {
        return 1;
      }
    }
  }
  else {
    fwrite("libunwind: Unsupported .eh_frame_hdr version\n",0x2d,1,
           (FILE *)(PTR___sF_00d54a40 + 0x130));
  }
  return 0;
}


// ===== 00d1347c  FUN_00d1347c =====

char * FUN_00d1347c(undefined8 param_1,uint *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  FILE *__stream;
  byte *pbVar18;
  byte *local_38;
  
  *(undefined1 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar7 = param_2 + 1;
  uVar10 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar10 = *(ulong *)(param_2 + 1);
    puVar7 = param_2 + 3;
    pbVar1 = (byte *)(uVar10 + (long)puVar7);
  }
  else {
    pbVar1 = (byte *)((long)puVar7 + uVar10);
  }
  if (uVar10 == 0) {
    return (char *)0x0;
  }
  if (*puVar7 != 0) {
    return "CIE ID is not zero";
  }
  uVar3 = puVar7[1];
  if ((byte)((byte)uVar3 | 2) != 3) {
    return "CIE version is not 1 or 3";
  }
  pbVar18 = (byte *)((long)puVar7 + 5);
  lVar11 = -5 - (long)puVar7;
  pbVar8 = pbVar18;
  do {
    local_38 = pbVar8 + 1;
    bVar2 = *pbVar8;
    lVar11 = lVar11 + -1;
    pbVar8 = local_38;
  } while (bVar2 != 0);
  lVar13 = 0;
  uVar10 = 0;
  uVar15 = 0;
  do {
    if ((long)pbVar1 - (long)local_38 == lVar13) goto LAB_00d13810;
    if (0x3f < uVar10) goto LAB_00d137e8;
    pbVar8 = local_38 + lVar13;
    uVar17 = (ulong)*pbVar8 & 0x7f;
    uVar16 = uVar17 << (uVar10 & 0x3f);
    if (uVar16 >> (uVar10 & 0x3f) != uVar17) goto LAB_00d137e8;
    uVar15 = uVar16 | uVar15;
    uVar10 = uVar10 + 7;
    lVar13 = lVar13 + 1;
  } while ((char)*pbVar8 < '\0');
  uVar10 = 0;
  uVar16 = 0;
  pbVar8 = local_38 + lVar13;
  *(int *)(param_3 + 5) = (int)uVar15;
  do {
    if ((long)pbVar1 - (long)local_38 == lVar13) {
      pcVar5 = "getSLEB128";
      __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
      pcVar6 = "truncated sleb128 expression";
      local_38 = pbVar8;
      goto LAB_00d1385c;
    }
    bVar2 = local_38[lVar13];
    lVar13 = lVar13 + 1;
    uVar16 = ((ulong)bVar2 & 0x7f) << (uVar10 & 0x3f) | uVar16;
    uVar10 = uVar10 + 7;
  } while ((char)bVar2 < '\0');
  uVar14 = (uint)(-1L << (uVar10 & 0x3f));
  if (((uint)((int)uVar10 - 7U < 0x39) & (bVar2 & 0x40) >> 6) == 0) {
    uVar14 = 0;
  }
  local_38 = local_38 + lVar13;
  *(uint *)((long)param_3 + 0x2c) = (uint)uVar16 | uVar14;
  if ((byte)uVar3 == 1) {
    *(byte *)((long)param_3 + 0x32) = *local_38;
    bVar2 = *pbVar18;
    local_38 = local_38 + 1;
  }
  else {
    uVar10 = 0;
    uVar15 = 0;
    pbVar12 = pbVar1 + (lVar11 - lVar13);
    pbVar9 = local_38;
    pbVar8 = local_38;
    do {
      if (pbVar12 == (byte *)0x0) goto LAB_00d13810;
      if (0x3f < uVar10) goto LAB_00d137e8;
      bVar2 = *pbVar8;
      uVar17 = (ulong)bVar2 & 0x7f;
      uVar16 = uVar17 << (uVar10 & 0x3f);
      if (uVar16 >> (uVar10 & 0x3f) != uVar17) goto LAB_00d137e8;
      uVar15 = uVar16 | uVar15;
      uVar10 = uVar10 + 7;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + -1;
    } while ((char)bVar2 < '\0');
    *(char *)((long)param_3 + 0x32) = (char)uVar15;
    bVar2 = *pbVar18;
    local_38 = pbVar9;
  }
  if (bVar2 == 0x7a) {
    uVar10 = 0;
    pbVar9 = local_38;
    pbVar8 = local_38;
    do {
      if (pbVar1 == pbVar8) goto LAB_00d13810;
      if ((0x3f < uVar10) ||
         (bVar2 = *pbVar8, 0xffffffffffffffffU >> (uVar10 & 0x3f) < ((ulong)bVar2 & 0x7f)))
      goto LAB_00d137e8;
      uVar10 = uVar10 + 7;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while ((char)bVar2 < '\0');
LAB_00d13700:
    local_38 = pbVar9;
    pbVar9 = local_38;
    switch(*pbVar18) {
    case 0x42:
      *(undefined1 *)((long)param_3 + 0x33) = 1;
      break;
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x51:
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
      break;
    case 0x4c:
      pbVar18 = pbVar18 + 1;
      *(byte *)((long)param_3 + 0x19) = *local_38;
      pbVar9 = local_38 + 1;
      goto LAB_00d13700;
    case 0x50:
      bVar2 = *local_38;
      *(byte *)((long)param_3 + 0x1a) = bVar2;
      *(char *)((long)param_3 + 0x1b) = (char)(local_38 + 1) - (char)param_2;
      local_38 = local_38 + 1;
      uVar4 = FUN_00d11f1c(param_1,&local_38,pbVar1,bVar2,0);
      param_3[4] = uVar4;
      pbVar18 = pbVar18 + 1;
      pbVar9 = local_38;
      goto LAB_00d13700;
    case 0x52:
      pbVar18 = pbVar18 + 1;
      *(byte *)(param_3 + 3) = *local_38;
      pbVar9 = local_38 + 1;
      goto LAB_00d13700;
    case 0x53:
      *(undefined1 *)(param_3 + 6) = 1;
      pbVar18 = pbVar18 + 1;
      goto LAB_00d13700;
    case 0x7a:
      goto code_r0x00d137a8;
    default:
      if (*pbVar18 == 0) goto code_r0x00d137b8;
    }
    pbVar18 = pbVar18 + 1;
    goto LAB_00d13700;
  }
LAB_00d137c0:
  param_3[1] = (long)pbVar1 - (long)param_2;
  param_3[2] = local_38;
  return (char *)0x0;
LAB_00d13810:
  pcVar5 = "getULEB128";
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  pcVar6 = "truncated uleb128 expression";
  goto LAB_00d1385c;
code_r0x00d137b8:
  param_2 = (uint *)*param_3;
  goto LAB_00d137c0;
code_r0x00d137a8:
  *(undefined1 *)((long)param_3 + 0x31) = 1;
  pbVar18 = pbVar18 + 1;
  goto LAB_00d13700;
LAB_00d137e8:
  pcVar5 = "getULEB128";
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  pcVar6 = "malformed uleb128 expression";
LAB_00d1385c:
  fprintf(__stream,"libunwind: %s - %s\n",pcVar5,pcVar6);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d13870  FUN_00d13870 =====

undefined8 FUN_00d13870(uint param_1)

{
  char *pcVar1;
  FILE *__stream;
  
  switch(param_1 & 0xf) {
  case 1:
  case 9:
    pcVar1 = "Can\'t binary search on variable length encoded data.";
    break;
  case 2:
  case 10:
    return 4;
  case 3:
  case 0xb:
    return 8;
  case 4:
  case 0xc:
    return 0x10;
  default:
    pcVar1 = "Unknown DWARF encoding for search table.";
  }
  __stream = (FILE *)(PTR___sF_00d54a40 + 0x130);
  fprintf(__stream,"libunwind: %s - %s\n","getTableEntrySize",pcVar1);
  fflush(__stream);
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00d13948  FUN_00d13948 =====

char * FUN_00d13948(int param_1)

{
  if (param_1 + 2U < 0x62) {
    return (&PTR_DAT_00d51510)[(int)(param_1 + 2U)];
  }
  return "unknown register";
}


// ===== 00d13974  FUN_00d13974 =====

undefined8 FUN_00d13974(code *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4b0 [528];
  undefined1 auStack_2a0 [624];
  
  FUN_00d13a78(auStack_4b0);
  FUN_00d0fc94(auStack_2a0,auStack_4b0);
  do {
    iVar1 = FUN_00d0fe80(auStack_2a0);
    if (iVar1 < 1) {
      return 5;
    }
    uVar2 = (*param_1)(auStack_2a0,param_2);
  } while ((int)uVar2 == 0);
  return uVar2;
}


// ===== 00d139e8  FUN_00d139e8 =====

undefined1  [16] FUN_00d139e8(undefined1 (*param_1) [16])

{
  return *param_1;
}


// ===== 00d13a78  FUN_00d13a78 =====

undefined8
FUN_00d13a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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


// ===== 00d13b14  FUN_00d13b14 =====

void FUN_00d13b14(void)

{
  FUN_00a5e008();
  return;
}


// ===== 00d13b1c  FUN_00d13b1c =====

void FUN_00d13b1c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  
  if (param_2 != 0) {
    FUN_006e75a0();
    return;
  }
  FUN_00622058(3,"low_level_alloc.cc",0x28c,"Check %s failed: %s","arena != nullptr",
               "must pass a valid arena");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd13b64);
  (*pcVar1)();
}


// ===== 00d13b64  FUN_00d13b64 =====

void FUN_00d13b64(long param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 local_50;
  undefined1 *puStack_48;
  uint *local_40;
  undefined1 *local_38;
  
  if (param_1 != 0) {
    puVar6 = *(uint **)(param_1 + -0x10);
    puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = 0xaaaaaaaaaaaa0000;
    local_40 = puVar6;
    if (((byte)puVar6[0x49] >> 1 & 1) != 0) {
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      sigfillset((sigset_t *)&stack0xffffffffffffffc8);
      iVar3 = pthread_sigmask(0,(__sigset_t *)&stack0xffffffffffffffc8,
                              (__sigset_t *)((ulong)&local_50 | 8));
      local_50._0_2_ = CONCAT11(iVar3 == 0,(undefined1)local_50);
    }
    puVar1 = local_40;
    uVar4 = *local_40;
    if (((uVar4 & 1) != 0) || (uVar5 = FUN_00d0f4e0(uVar4,uVar4 | 1,local_40), (uVar5 & 1) != 0)) {
      FUN_006e7f78(puVar1);
    }
    FUN_006e735c(param_1,puVar6);
    puVar1 = local_40;
    if ((int)puVar6[0x48] < 1) {
      FUN_00622058(3,"low_level_alloc.cc",0x221,"Check %s failed: %s","arena->allocation_count > 0",
                   "nothing in arena to free");
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd13cb0);
      (*pcVar2)();
    }
    puVar6[0x48] = puVar6[0x48] - 1;
    uVar4 = FUN_00d0f680(*local_40 & 2,local_40);
    if (7 < uVar4) {
      FUN_006e80d4(puVar1,uVar4);
    }
    if ((local_50._1_1_ == '\x01') &&
       (iVar3 = pthread_sigmask(2,(__sigset_t *)((ulong)&local_50 | 8),(__sigset_t *)0x0),
       iVar3 != 0)) {
      FUN_00622058(3,"low_level_alloc.cc",0x14a,"pthread_sigmask failed: %d",iVar3);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xd13cd4);
      (*pcVar2)();
    }
  }
  return;
}


// ===== 00d13cd4  FUN_00d13cd4 =====

void FUN_00d13cd4(undefined8 param_1)

{
  if ((int)DAT_00d66a30 != 0xdd) {
    FUN_006e7e64(&DAT_00d66a30,0,FUN_006e71f4);
  }
  FUN_006e75a0(param_1,&DAT_00d668e0);
  return;
}


// ===== 00d13d40  FUN_00d13d40 =====

void FUN_00d13d40(void)

{
  (*(code *)PTR_00d54a58)();
  return;
}


// ===== 00d13d60  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00d54a60)();
  return;
}


// ===== 00d13d70  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_00d54a68)();
  return;
}


// ===== 00d13d80  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_00d54a70)();
  return;
}


// ===== 00d13d90  operator.new =====

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00d54a78)();
  return pvVar1;
}


// ===== 00d13da0  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00d54a80)();
  return;
}


// ===== 00d13db0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00d54a88)(__s,__c);
  return pvVar1;
}


// ===== 00d13dc0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00d54a90)();
  return;
}


// ===== 00d13dd0  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00d54a98)();
  return;
}


// ===== 00d13de0  <EXTERNAL>::memmove =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memmove_00d54aa0)();
  return pvVar1;
}


// ===== 00d13df0  std::__Cr::__libcpp_verbose_abort =====

void std::__Cr::__libcpp_verbose_abort(char *param_1,...)

{
  (*(code *)PTR___libcpp_verbose_abort_00d54aa8)();
  return;
}


// ===== 00d13e00  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_00d54ab0)();
  return;
}


// ===== 00d13e10  Discord::Connect =====

void __thiscall Discord::Connect(void)

{
  (*(code *)PTR_Connect_00d54ab8)();
  return;
}


// ===== 00d13e20  Discord::SetIdleJitterBufferFlush =====

void __thiscall Discord::SetIdleJitterBufferFlush(Discord *this,bool param_1)

{
  (*(code *)PTR_SetIdleJitterBufferFlush_00d54ac0)(this,param_1);
  return;
}


// ===== 00d13e30  Discord::EnableBuiltInAEC =====

void __thiscall Discord::EnableBuiltInAEC(Discord *this,bool param_1)

{
  (*(code *)PTR_EnableBuiltInAEC_00d54ac8)(this,param_1);
  return;
}


// ===== 00d13e40  Discord::SetEchoCancellation =====

void __thiscall Discord::SetEchoCancellation(Discord *this,bool param_1)

{
  (*(code *)PTR_SetEchoCancellation_00d54ad0)(this,param_1);
  return;
}


// ===== 00d13e50  Discord::SetNoiseSuppression =====

void __thiscall Discord::SetNoiseSuppression(Discord *this,bool param_1)

{
  (*(code *)PTR_SetNoiseSuppression_00d54ad8)(this,param_1);
  return;
}


// ===== 00d13e60  Discord::SetAutomaticGainControlConfig =====

void __thiscall Discord::SetAutomaticGainControlConfig(void)

{
  (*(code *)PTR_SetAutomaticGainControlConfig_00d54ae0)();
  return;
}


// ===== 00d13e70  Discord::SetAutomaticGainControl =====

void __thiscall Discord::SetAutomaticGainControl(Discord *this,bool param_1)

{
  (*(code *)PTR_SetAutomaticGainControl_00d54ae8)(this,param_1);
  return;
}


// ===== 00d13e80  Discord::SetNoiseCancellation =====

void __thiscall Discord::SetNoiseCancellation(Discord *this,bool param_1)

{
  (*(code *)PTR_SetNoiseCancellation_00d54af0)(this,param_1);
  return;
}


// ===== 00d13e90  Discord::SetNoiseCancellationDuringProcessing =====

void __thiscall Discord::SetNoiseCancellationDuringProcessing(Discord *this,bool param_1)

{
  (*(code *)PTR_SetNoiseCancellationDuringProcessing_00d54af8)(this,param_1);
  return;
}


// ===== 00d13ea0  Discord::SetDeviceChangeCallback =====

void __thiscall Discord::SetDeviceChangeCallback(void)

{
  (*(code *)PTR_SetDeviceChangeCallback_00d54b00)();
  return;
}


// ===== 00d13eb0  Discord::GetDevices =====

void __thiscall Discord::GetDevices(void)

{
  (*(code *)PTR_GetDevices_00d54b08)();
  return;
}


// ===== 00d13ec0  Discord::GetRecordingDevices =====

void __thiscall Discord::GetRecordingDevices(void)

{
  (*(code *)PTR_GetRecordingDevices_00d54b10)();
  return;
}


// ===== 00d13ed0  Discord::SetRecordingDevice =====

void __thiscall Discord::SetRecordingDevice(void)

{
  (*(code *)PTR_SetRecordingDevice_00d54b18)();
  return;
}


// ===== 00d13ee0  Discord::SetRecordingDevice =====

void __thiscall Discord::SetRecordingDevice(Discord *this,int param_1)

{
  (*(code *)PTR_SetRecordingDevice_00d54b20)(this,param_1);
  return;
}


// ===== 00d13ef0  Discord::GetPlayoutDevices =====

void __thiscall Discord::GetPlayoutDevices(void)

{
  (*(code *)PTR_GetPlayoutDevices_00d54b28)();
  return;
}


// ===== 00d13f00  Discord::SetPlayoutDevice =====

void __thiscall Discord::SetPlayoutDevice(void)

{
  (*(code *)PTR_SetPlayoutDevice_00d54b30)();
  return;
}


// ===== 00d13f10  Discord::SetPlayoutDevice =====

void __thiscall Discord::SetPlayoutDevice(Discord *this,int param_1)

{
  (*(code *)PTR_SetPlayoutDevice_00d54b38)(this,param_1);
  return;
}


// ===== 00d13f20  Discord::GetVideoInputDevices =====

void __thiscall Discord::GetVideoInputDevices(void)

{
  (*(code *)PTR_GetVideoInputDevices_00d54b40)();
  return;
}


// ===== 00d13f30  Discord::SetVideoInputDevice =====

void __thiscall Discord::SetVideoInputDevice(Discord *this,int param_1)

{
  (*(code *)PTR_SetVideoInputDevice_00d54b48)(this,param_1);
  return;
}


// ===== 00d13f40  Discord::SetVideoInputDevice =====

void __thiscall Discord::SetVideoInputDevice(void)

{
  (*(code *)PTR_SetVideoInputDevice_00d54b50)();
  return;
}


// ===== 00d13f50  Discord::SetVideoOutputSink =====

void __thiscall Discord::SetVideoOutputSink(void)

{
  (*(code *)PTR_SetVideoOutputSink_00d54b58)();
  return;
}


// ===== 00d13f60  Discord::SetMicVolume =====

void __thiscall Discord::SetMicVolume(Discord *this,float param_1)

{
  (*(code *)PTR_SetMicVolume_00d54b60)();
  return;
}


// ===== 00d13f70  Discord::SetSpeakerVolume =====

void __thiscall Discord::SetSpeakerVolume(Discord *this,float param_1)

{
  (*(code *)PTR_SetSpeakerVolume_00d54b68)();
  return;
}


// ===== 00d13f80  Discord::SetNoAudioInputThreshold =====

void __thiscall Discord::SetNoAudioInputThreshold(Discord *this,float param_1)

{
  (*(code *)PTR_SetNoAudioInputThreshold_00d54b70)();
  return;
}


// ===== 00d13f90  Discord::SetNoAudioInputCallback =====

void __thiscall Discord::SetNoAudioInputCallback(void)

{
  (*(code *)PTR_SetNoAudioInputCallback_00d54b78)();
  return;
}


// ===== 00d13fa0  Discord::SetLocalVoiceLevelChangedCallback =====

void __thiscall Discord::SetLocalVoiceLevelChangedCallback(Discord *this,function *param_1)

{
  (*(code *)PTR_SetLocalVoiceLevelChangedCallback_00d54b80)();
  return;
}


// ===== 00d13fb0  Discord::SetDuckingPreference =====

void __thiscall Discord::SetDuckingPreference(Discord *this,bool param_1)

{
  (*(code *)PTR_SetDuckingPreference_00d54b88)(this,param_1);
  return;
}


// ===== 00d13fc0  Discord::GetCodecCapabilities =====

void __thiscall Discord::GetCodecCapabilities(void)

{
  (*(code *)PTR_GetCodecCapabilities_00d54b90)();
  return;
}


// ===== 00d13fd0  Discord::GetCodecSurvey =====

void __thiscall Discord::GetCodecSurvey(void)

{
  (*(code *)PTR_GetCodecSurvey_00d54b98)();
  return;
}


// ===== 00d13fe0  Discord::GetAudioSubsystem =====

void __thiscall Discord::GetAudioSubsystem(void)

{
  (*(code *)PTR_GetAudioSubsystem_00d54ba0)();
  return;
}


// ===== 00d13ff0  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_00d54ba8)((int)__s1);
  return iVar1;
}


// ===== 00d14000  Discord::SetVoiceProcessingErrorCallback =====

void __thiscall Discord::SetVoiceProcessingErrorCallback(void)

{
  (*(code *)PTR_SetVoiceProcessingErrorCallback_00d54bb0)();
  return;
}


// ===== 00d14010  Discord::RankRtcRegions =====

void __thiscall Discord::RankRtcRegions(void)

{
  (*(code *)PTR_RankRtcRegions_00d54bb8)();
  return;
}


// ===== 00d14020  Discord::SetAudioInputInitializationCallback =====

void __thiscall Discord::SetAudioInputInitializationCallback(void)

{
  (*(code *)PTR_SetAudioInputInitializationCallback_00d54bc0)();
  return;
}


// ===== 00d14030  Discord::SetAudioInputEnabled =====

void __thiscall Discord::SetAudioInputEnabled(Discord *this,bool param_1)

{
  (*(code *)PTR_SetAudioInputEnabled_00d54bc8)(this,param_1);
  return;
}


// ===== 00d14040  Discord::SetSidechainCompression =====

void __thiscall Discord::SetSidechainCompression(Discord *this,bool param_1)

{
  (*(code *)PTR_SetSidechainCompression_00d54bd0)(this,param_1);
  return;
}


// ===== 00d14050  Discord::UpdateFieldTrial =====

void __thiscall Discord::UpdateFieldTrial(void)

{
  (*(code *)PTR_UpdateFieldTrial_00d54bd8)();
  return;
}


// ===== 00d14060  Discord::SetHasFullbandPerformance =====

void __thiscall Discord::SetHasFullbandPerformance(Discord *this,bool param_1)

{
  (*(code *)PTR_SetHasFullbandPerformance_00d54be0)(this,param_1);
  return;
}


// ===== 00d14070  <EXTERNAL>::pthread_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00d54be8)((int)__newthread);
  return iVar1;
}


// ===== 00d14080  <EXTERNAL>::pthread_getspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * pthread_getspecific(pthread_key_t __key)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_pthread_getspecific_00d54bf0)(__key);
  return pvVar1;
}


// ===== 00d14090  <EXTERNAL>::pthread_setspecific =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setspecific(pthread_key_t __key,void *__pointer)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setspecific_00d54bf8)(__key);
  return iVar1;
}


// ===== 00d140a0  discord::MediaEngine::MediaEngine =====

void __thiscall discord::MediaEngine::MediaEngine(void)

{
  (*(code *)PTR_MediaEngine_00d54c00)();
  return;
}


// ===== 00d140b0  Discord::Discord =====

void __thiscall Discord::Discord(void)

{
  (*(code *)PTR_Discord_00d54c08)();
  return;
}


// ===== 00d140c0  Discord::~Discord =====

void __thiscall Discord::~Discord(Discord *this)

{
  (*(code *)PTR__Discord_00d54c10)();
  return;
}


// ===== 00d140d0  <EXTERNAL>::memchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memchr(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memchr_00d54c18)(__s,__c);
  return pvVar1;
}


// ===== 00d140e0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00d54c20)();
  return pvVar1;
}


// ===== 00d140f0  operator.new[] =====

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new___00d54c28)();
  return pvVar1;
}


// ===== 00d14100  operator.delete[] =====

void operator_delete__(void *param_1)

{
  (*(code *)PTR_operator_delete___00d54c30)();
  return;
}


// ===== 00d14110  <EXTERNAL>::sinf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float sinf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_sinf_00d54c38)();
  return fVar1;
}


// ===== 00d14120  <EXTERNAL>::calloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00d54c40)();
  return pvVar1;
}


// ===== 00d14130  <EXTERNAL>::fopen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00d54c48)();
  return pFVar1;
}


// ===== 00d14140  <EXTERNAL>::fclose =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_00d54c50)((int)__stream);
  return iVar1;
}


// ===== 00d14150  <EXTERNAL>::fwrite =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fwrite_00d54c58)();
  return sVar1;
}


// ===== 00d14160  <EXTERNAL>::fread =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_fread_00d54c60)();
  return sVar1;
}


// ===== 00d14170  <EXTERNAL>::log10 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log10(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_log10_00d54c68)();
  return dVar1;
}


// ===== 00d14180  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_00d54c70)();
  return sVar1;
}


// ===== 00d14190  <EXTERNAL>::localtime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime(time_t *__timer)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_00d54c78)();
  return ptVar1;
}


// ===== 00d141a0  <EXTERNAL>::atoi =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_atoi_00d54c80)((int)__nptr);
  return iVar1;
}


// ===== 00d141b0  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00d54c88)();
  return pvVar1;
}


// ===== 00d141c0  <EXTERNAL>::log =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_log_00d54c90)();
  return dVar1;
}


// ===== 00d141d0  <EXTERNAL>::exp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double exp(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_exp_00d54c98)();
  return dVar1;
}


// ===== 00d141e0  <EXTERNAL>::log10f =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float log10f(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_log10f_00d54ca0)();
  return fVar1;
}


// ===== 00d141f0  <EXTERNAL>::inet_ntop =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_inet_ntop_00d54ca8)(__af,__cp,__buf,__len);
  return pcVar1;
}


// ===== 00d14200  discord::voice::Connection::ConnectUser =====

void __thiscall discord::voice::Connection::ConnectUser(void)

{
  (*(code *)PTR_ConnectUser_00d54cb0)();
  return;
}


// ===== 00d14210  discord::voice::Connection::DisconnectUser =====

void __thiscall discord::voice::Connection::DisconnectUser(Connection *this,basic_string *param_1)

{
  (*(code *)PTR_DisconnectUser_00d54cb8)();
  return;
}


// ===== 00d14220  discord::voice::Connection::PrepareSecureFramesTransition =====

void __thiscall discord::voice::Connection::PrepareSecureFramesTransition(void)

{
  (*(code *)PTR_PrepareSecureFramesTransition_00d54cc0)();
  return;
}


// ===== 00d14230  discord::voice::Connection::PrepareSecureFramesEpoch =====

void __thiscall
discord::voice::Connection::PrepareSecureFramesEpoch
          (Connection *this,ulong param_1,ushort param_2,ulong param_3)

{
  (*(code *)PTR_PrepareSecureFramesEpoch_00d54cc8)(this,param_1,param_2);
  return;
}


// ===== 00d14240  discord::voice::Connection::ExecuteSecureFramesTransition =====

void __thiscall
discord::voice::Connection::ExecuteSecureFramesTransition(Connection *this,ushort param_1)

{
  (*(code *)PTR_ExecuteSecureFramesTransition_00d54cd0)(this,param_1);
  return;
}


// ===== 00d14250  discord::voice::Connection::GetMLSKeyPackage =====

void __thiscall discord::voice::Connection::GetMLSKeyPackage(void)

{
  (*(code *)PTR_GetMLSKeyPackage_00d54cd8)();
  return;
}


// ===== 00d14260  discord::voice::Connection::UpdateMLSExternalSender =====

void __thiscall discord::voice::Connection::UpdateMLSExternalSender(void)

{
  (*(code *)PTR_UpdateMLSExternalSender_00d54ce0)();
  return;
}


// ===== 00d14270  discord::voice::Connection::ProcessMLSProposals =====

void __thiscall discord::voice::Connection::ProcessMLSProposals(void)

{
  (*(code *)PTR_ProcessMLSProposals_00d54ce8)();
  return;
}


// ===== 00d14280  discord::voice::Connection::PrepareMLSCommitTransition =====

void __thiscall discord::voice::Connection::PrepareMLSCommitTransition(void)

{
  (*(code *)PTR_PrepareMLSCommitTransition_00d54cf0)();
  return;
}


// ===== 00d14290  discord::voice::Connection::ProcessMLSWelcome =====

void __thiscall discord::voice::Connection::ProcessMLSWelcome(void)

{
  (*(code *)PTR_ProcessMLSWelcome_00d54cf8)();
  return;
}


// ===== 00d142a0  discord::voice::Connection::GetMLSPairwiseFingerprint =====

void __thiscall discord::voice::Connection::GetMLSPairwiseFingerprint(void)

{
  (*(code *)PTR_GetMLSPairwiseFingerprint_00d54d00)();
  return;
}


// ===== 00d142b0  discord::voice::Connection::SetOnMLSFailureCallback =====

void __thiscall discord::voice::Connection::SetOnMLSFailureCallback(void)

{
  (*(code *)PTR_SetOnMLSFailureCallback_00d54d08)();
  return;
}


// ===== 00d142c0  discord::voice::Connection::SetSecureFramesStateUpdateCallback =====

void __thiscall discord::voice::Connection::SetSecureFramesStateUpdateCallback(void)

{
  (*(code *)PTR_SetSecureFramesStateUpdateCallback_00d54d10)();
  return;
}


// ===== 00d142d0  discord::voice::Connection::GetEncryptionModes =====

void __thiscall discord::voice::Connection::GetEncryptionModes(void)

{
  (*(code *)PTR_GetEncryptionModes_00d54d18)();
  return;
}


// ===== 00d142e0  discord::voice::Connection::SetUserPlayoutPan =====

void __thiscall
discord::voice::Connection::SetUserPlayoutPan
          (Connection *this,basic_string *param_1,float param_2,float param_3)

{
  (*(code *)PTR_SetUserPlayoutPan_00d54d20)();
  return;
}


// ===== 00d142f0  discord::voice::Connection::SetUserPlayoutVolume =====

void __thiscall
discord::voice::Connection::SetUserPlayoutVolume
          (Connection *this,basic_string *param_1,float param_2)

{
  (*(code *)PTR_SetUserPlayoutVolume_00d54d28)();
  return;
}


// ===== 00d14300  discord::voice::Connection::MuteUser =====

void __thiscall
discord::voice::Connection::MuteUser(Connection *this,basic_string *param_1,bool param_2)

{
  (*(code *)PTR_MuteUser_00d54d30)(this,param_1,param_2);
  return;
}


// ===== 00d14310  discord::voice::Connection::FastUdpReconnect =====

void __thiscall discord::voice::Connection::FastUdpReconnect(Connection *this)

{
  (*(code *)PTR_FastUdpReconnect_00d54d38)();
  return;
}


// ===== 00d14320  discord::voice::Connection::SetUdpEndpoint =====

void __thiscall discord::voice::Connection::SetUdpEndpoint(void)

{
  (*(code *)PTR_SetUdpEndpoint_00d54d40)();
  return;
}


// ===== 00d14330  discord::voice::Connection::SetOnConnectionFailedCallback =====

void __thiscall discord::voice::Connection::SetOnConnectionFailedCallback(void)

{
  (*(code *)PTR_SetOnConnectionFailedCallback_00d54d48)();
  return;
}


// ===== 00d14340  discord::voice::Connection::ApplySettings =====

void discord::voice::Connection::ApplySettings(ConnectionSettings *param_1)

{
  (*(code *)PTR_ApplySettings_00d54d50)();
  return;
}


// ===== 00d14350  discord::voice::Connection::SetPTTActive =====

void __thiscall
discord::voice::Connection::SetPTTActive(Connection *this,bool param_1,bool param_2,bool param_3)

{
  (*(code *)PTR_SetPTTActive_00d54d58)(this,param_1,param_2,param_3);
  return;
}


// ===== 00d14360  discord::voice::Connection::SetVideoBroadcast =====

void __thiscall discord::voice::Connection::SetVideoBroadcast(Connection *this,bool param_1)

{
  (*(code *)PTR_SetVideoBroadcast_00d54d60)(this,param_1);
  return;
}


// ===== 00d14370  discord::voice::Connection::SetOnVideoCallback =====

void __thiscall discord::voice::Connection::SetOnVideoCallback(void)

{
  (*(code *)PTR_SetOnVideoCallback_00d54d68)();
  return;
}


// ===== 00d14380  discord::voice::Connection::SetOnFirstFrameCallback =====

void __thiscall discord::voice::Connection::SetOnFirstFrameCallback(void)

{
  (*(code *)PTR_SetOnFirstFrameCallback_00d54d70)();
  return;
}


// ===== 00d14390  discord::voice::Connection::SetDesktopSourceAndroid =====

void __thiscall discord::voice::Connection::SetDesktopSourceAndroid(void)

{
  (*(code *)PTR_SetDesktopSourceAndroid_00d54d78)();
  return;
}


// ===== 00d143a0  discord::voice::Connection::SetSoundshareControllerAndroid =====

void discord::voice::Connection::SetSoundshareControllerAndroid(void)

{
  (*(code *)PTR_SetSoundshareControllerAndroid_00d54d80)();
  return;
}


// ===== 00d143b0  discord::voice::Connection::GetStats =====

void __thiscall discord::voice::Connection::GetStats(void)

{
  (*(code *)PTR_GetStats_00d54d88)();
  return;
}


// ===== 00d143c0  <EXTERNAL>::cos =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double cos(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_cos_00d54d90)();
  return dVar1;
}


// ===== 00d143d0  <EXTERNAL>::hypotf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float hypotf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_hypotf_00d54d98)();
  return fVar1;
}


// ===== 00d143e0  <EXTERNAL>::__android_log_print =====

void __android_log_print(void)

{
  (*(code *)PTR___android_log_print_00d54da0)();
  return;
}


// ===== 00d143f0  <EXTERNAL>::pthread_key_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_create(pthread_key_t *__key,__destr_function *__destr_function)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_create_00d54da8)((int)__key);
  return iVar1;
}


// ===== 00d14400  <EXTERNAL>::AAssetManager_fromJava =====

void AAssetManager_fromJava(void)

{
  (*(code *)PTR_AAssetManager_fromJava_00d54db0)();
  return;
}


// ===== 00d14410  <EXTERNAL>::logf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float logf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_logf_00d54db8)();
  return fVar1;
}


// ===== 00d14420  <EXTERNAL>::dlopen =====

void dlopen(void)

{
  (*(code *)PTR_dlopen_00d54dc0)();
  return;
}


// ===== 00d14430  <EXTERNAL>::dlsym =====

void dlsym(void)

{
  (*(code *)PTR_dlsym_00d54dc8)();
  return;
}


// ===== 00d14440  <EXTERNAL>::dlerror =====

void dlerror(void)

{
  (*(code *)PTR_dlerror_00d54dd0)();
  return;
}


// ===== 00d14450  <EXTERNAL>::dlclose =====

void dlclose(void)

{
  (*(code *)PTR_dlclose_00d54dd8)();
  return;
}


// ===== 00d14460  <EXTERNAL>::mkdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mkdir_00d54de0)((int)__path,__mode);
  return iVar1;
}


// ===== 00d14470  <EXTERNAL>::AAssetManager_open =====

void AAssetManager_open(void)

{
  (*(code *)PTR_AAssetManager_open_00d54de8)();
  return;
}


// ===== 00d14480  <EXTERNAL>::AAsset_getBuffer =====

void AAsset_getBuffer(void)

{
  (*(code *)PTR_AAsset_getBuffer_00d54df0)();
  return;
}


// ===== 00d14490  <EXTERNAL>::AAsset_getLength =====

void AAsset_getLength(void)

{
  (*(code *)PTR_AAsset_getLength_00d54df8)();
  return;
}


// ===== 00d144a0  <EXTERNAL>::AAsset_close =====

void AAsset_close(void)

{
  (*(code *)PTR_AAsset_close_00d54e00)();
  return;
}


// ===== 00d144b0  discord::media::VideoFrameRgba::ok =====

void __thiscall discord::media::VideoFrameRgba::ok(VideoFrameRgba *this)

{
  (*(code *)PTR_ok_00d54e08)();
  return;
}


// ===== 00d144c0  discord::media::VideoFrameI420::ok =====

void discord::media::VideoFrameI420::ok(void)

{
  (*(code *)PTR_ok_00d54e10)();
  return;
}


// ===== 00d144d0  discord::media::VideoFrameI420::buffer =====

void __thiscall discord::media::VideoFrameI420::buffer(VideoFrameI420 *this)

{
  (*(code *)PTR_buffer_00d54e18)();
  return;
}


// ===== 00d144e0  discord::media::VideoFrameI420::rotation =====

void __thiscall discord::media::VideoFrameI420::rotation(VideoFrameI420 *this)

{
  (*(code *)PTR_rotation_00d54e20)();
  return;
}


// ===== 00d144f0  discord::media::VideoFrameI420::sourceFacing =====

void __thiscall discord::media::VideoFrameI420::sourceFacing(VideoFrameI420 *this)

{
  (*(code *)PTR_sourceFacing_00d54e28)();
  return;
}


// ===== 00d14500  discord::media::VideoFrameRgba::VideoFrameRgba =====

void __thiscall discord::media::VideoFrameRgba::VideoFrameRgba(void)

{
  (*(code *)PTR_VideoFrameRgba_00d54e30)();
  return;
}


// ===== 00d14510  discord::media::VideoFrameI420::VideoFrameI420 =====

void __thiscall discord::media::VideoFrameI420::VideoFrameI420(void)

{
  (*(code *)PTR_VideoFrameI420_00d54e38)();
  return;
}


// ===== 00d14520  discord::media::VideoFrameI420::~VideoFrameI420 =====

void __thiscall discord::media::VideoFrameI420::~VideoFrameI420(VideoFrameI420 *this)

{
  (*(code *)PTR__VideoFrameI420_00d54e40)();
  return;
}


// ===== 00d14530  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_00d54e48)((int)__s1);
  return iVar1;
}


// ===== 00d14540  <EXTERNAL>::vsnprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsnprintf_00d54e50)((int)__s);
  return iVar1;
}


// ===== 00d14550  <EXTERNAL>::fflush =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fflush_00d54e58)((int)__stream);
  return iVar1;
}


// ===== 00d14560  <EXTERNAL>::fputs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputs(char *__s,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputs_00d54e60)((int)__s);
  return iVar1;
}


// ===== 00d14570  <EXTERNAL>::stat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_stat_00d54e68)((int)__file);
  return iVar1;
}


// ===== 00d14580  <EXTERNAL>::rename =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rename(char *__old,char *__new)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rename_00d54e70)((int)__old);
  return iVar1;
}


// ===== 00d14590  <EXTERNAL>::unlink =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_unlink_00d54e78)((int)__name);
  return iVar1;
}


// ===== 00d145a0  <EXTERNAL>::snprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_snprintf_00d54e80)((int)__s);
  return iVar1;
}


// ===== 00d145b0  <EXTERNAL>::strncmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strncmp_00d54e88)((int)__s1);
  return iVar1;
}


// ===== 00d145c0  <EXTERNAL>::strrchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strrchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strrchr_00d54e90)(__s,__c);
  return pcVar1;
}


// ===== 00d145d0  <EXTERNAL>::strtoull =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull(char *__nptr,char **__endptr,int __base)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_00d54e98)(__nptr,__endptr,__base);
  return uVar1;
}


// ===== 00d145e0  <EXTERNAL>::open =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_00d54ea0)((int)__file,__oflag);
  return iVar1;
}


// ===== 00d145f0  <EXTERNAL>::write =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_00d54ea8)(__fd);
  return sVar1;
}


// ===== 00d14600  <EXTERNAL>::close =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00d54eb0)(__fd);
  return iVar1;
}


// ===== 00d14610  <EXTERNAL>::__errno =====

void __errno(void)

{
  (*(code *)PTR___errno_00d54eb8)();
  return;
}


// ===== 00d14620  <EXTERNAL>::pow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double pow(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_pow_00d54ec0)();
  return dVar1;
}


// ===== 00d14630  <EXTERNAL>::wmemchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wchar_t * wmemchr(wchar_t *__s,wchar_t __c,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = (wchar_t *)(*(code *)PTR_wmemchr_00d54ec8)(__s,__c);
  return pwVar1;
}


// ===== 00d14640  <EXTERNAL>::wcslen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcslen(wchar_t *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcslen_00d54ed0)();
  return sVar1;
}


// ===== 00d14650  <EXTERNAL>::strftime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime(char *__s,size_t __maxsize,char *__format,tm *__tp)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_00d54ed8)();
  return sVar1;
}


// ===== 00d14660  <EXTERNAL>::pthread_self =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t pthread_self(void)

{
  pthread_t pVar1;
  
  pVar1 = (*(code *)PTR_pthread_self_00d54ee0)();
  return pVar1;
}


// ===== 00d14670  <EXTERNAL>::pthread_setname_np =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setname_np(pthread_t __target_thread,char *__name)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setname_np_00d54ee8)((int)__target_thread);
  return iVar1;
}


// ===== 00d14680  <EXTERNAL>::setsockopt =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setsockopt_00d54ef0)(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}


// ===== 00d14690  <EXTERNAL>::clock_gettime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_gettime_00d54ef8)(__clock_id);
  return iVar1;
}


// ===== 00d146a0  <EXTERNAL>::pthread_cond_signal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_signal(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_signal_00d54f00)((int)__cond);
  return iVar1;
}


// ===== 00d146b0  <EXTERNAL>::pthread_cond_broadcast =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_broadcast(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_broadcast_00d54f08)((int)__cond);
  return iVar1;
}


// ===== 00d146c0  <EXTERNAL>::pthread_cond_wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_wait_00d54f10)((int)__cond);
  return iVar1;
}


// ===== 00d146d0  <EXTERNAL>::pthread_cond_timedwait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_timedwait(pthread_cond_t *__cond,pthread_mutex_t *__mutex,timespec *__abstime)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_timedwait_00d54f18)((int)__cond);
  return iVar1;
}


// ===== 00d146e0  <EXTERNAL>::pthread_cond_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_destroy(pthread_cond_t *__cond)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_destroy_00d54f20)((int)__cond);
  return iVar1;
}


// ===== 00d146f0  <EXTERNAL>::readdir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = (dirent *)(*(code *)PTR_readdir_00d54f28)();
  return pdVar1;
}


// ===== 00d14700  <EXTERNAL>::closedir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_closedir_00d54f30)((int)__dirp);
  return iVar1;
}


// ===== 00d14710  <EXTERNAL>::opendir =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = (DIR *)(*(code *)PTR_opendir_00d54f38)();
  return pDVar1;
}


// ===== 00d14720  <EXTERNAL>::realpath =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_realpath_00d54f40)();
  return pcVar1;
}


// ===== 00d14730  <EXTERNAL>::lstat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int lstat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_lstat_00d54f48)((int)__file);
  return iVar1;
}


// ===== 00d14740  <EXTERNAL>::pathconf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long pathconf(char *__path,int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_pathconf_00d54f50)(__path,__name);
  return lVar1;
}


// ===== 00d14750  <EXTERNAL>::getcwd =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getcwd(char *__buf,size_t __size)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getcwd_00d54f58)();
  return pcVar1;
}


// ===== 00d14760  <EXTERNAL>::getenv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_getenv_00d54f60)();
  return pcVar1;
}


// ===== 00d14770  <EXTERNAL>::fstat =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fstat(int __fd,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fstat_00d54f68)(__fd);
  return iVar1;
}


// ===== 00d14780  <EXTERNAL>::realloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_00d54f70)();
  return pvVar1;
}


// ===== 00d14790  <EXTERNAL>::ungetc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ungetc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ungetc_00d54f78)(__c);
  return iVar1;
}


// ===== 00d147a0  <EXTERNAL>::getc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getc(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getc_00d54f80)((int)__stream);
  return iVar1;
}


// ===== 00d147b0  <EXTERNAL>::newlocale =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__locale_t newlocale(int __category_mask,char *__locale,__locale_t __base)

{
  __locale_t p_Var1;
  
  p_Var1 = (__locale_t)(*(code *)PTR_newlocale_00d54f88)(__category_mask);
  return p_Var1;
}


// ===== 00d147c0  <EXTERNAL>::uselocale =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__locale_t uselocale(__locale_t __dataset)

{
  __locale_t p_Var1;
  
  p_Var1 = (__locale_t)(*(code *)PTR_uselocale_00d54f90)();
  return p_Var1;
}


// ===== 00d147d0  <EXTERNAL>::vsscanf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vsscanf(char *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vsscanf_00d54f98)((int)__s);
  return iVar1;
}


// ===== 00d147e0  <EXTERNAL>::isxdigit_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isxdigit_l(int param_1,__locale_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isxdigit_l_00d54fa0)(param_1);
  return iVar1;
}


// ===== 00d147f0  <EXTERNAL>::isdigit_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isdigit_l(int param_1,__locale_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isdigit_l_00d54fa8)(param_1);
  return iVar1;
}


// ===== 00d14800  <EXTERNAL>::strftime_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strftime_l(char *__s,size_t __maxsize,char *__format,tm *__tp,__locale_t __loc)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strftime_l_00d54fb0)();
  return sVar1;
}


// ===== 00d14810  <EXTERNAL>::mbsrtowcs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbsrtowcs(wchar_t *__dst,char **__src,size_t __len,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbsrtowcs_00d54fb8)();
  return sVar1;
}


// ===== 00d14820  <EXTERNAL>::sscanf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sscanf(char *__s,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sscanf_00d54fc0)((int)__s);
  return iVar1;
}


// ===== 00d14830  <EXTERNAL>::vasprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vasprintf_00d54fc8)((int)__ptr);
  return iVar1;
}


// ===== 00d14840  <EXTERNAL>::freelocale =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void freelocale(__locale_t __dataset)

{
  (*(code *)PTR_freelocale_00d54fd0)();
  return;
}


// ===== 00d14850  <EXTERNAL>::strcoll_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcoll_l(char *__s1,char *__s2,__locale_t __l)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcoll_l_00d54fd8)((int)__s1);
  return iVar1;
}


// ===== 00d14860  <EXTERNAL>::strxfrm_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strxfrm_l(char *__dest,char *__src,size_t __n,__locale_t __l)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strxfrm_l_00d54fe0)();
  return sVar1;
}


// ===== 00d14870  <EXTERNAL>::wcscoll_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wcscoll_l(wchar_t *__s1,wchar_t *__s2,__locale_t __loc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wcscoll_l_00d54fe8)((int)__s1);
  return iVar1;
}


// ===== 00d14880  <EXTERNAL>::wcsxfrm_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcsxfrm_l(wchar_t *__s1,wchar_t *__s2,size_t __n,__locale_t __loc)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcsxfrm_l_00d54ff0)();
  return sVar1;
}


// ===== 00d14890  <EXTERNAL>::iswlower_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswlower_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswlower_l_00d54ff8)(__wc);
  return iVar1;
}


// ===== 00d148a0  <EXTERNAL>::islower_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int islower_l(int param_1,__locale_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_islower_l_00d55000)(param_1);
  return iVar1;
}


// ===== 00d148b0  <EXTERNAL>::isupper_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int isupper_l(int param_1,__locale_t param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_isupper_l_00d55008)(param_1);
  return iVar1;
}


// ===== 00d148c0  <EXTERNAL>::toupper_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int toupper_l(int __c,__locale_t __l)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_toupper_l_00d55010)(__c);
  return iVar1;
}


// ===== 00d148d0  <EXTERNAL>::tolower_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tolower_l(int __c,__locale_t __l)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_tolower_l_00d55018)(__c);
  return iVar1;
}


// ===== 00d148e0  <EXTERNAL>::iswspace_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswspace_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswspace_l_00d55020)(__wc);
  return iVar1;
}


// ===== 00d148f0  <EXTERNAL>::iswprint_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswprint_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswprint_l_00d55028)(__wc);
  return iVar1;
}


// ===== 00d14900  <EXTERNAL>::iswblank_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswblank_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswblank_l_00d55030)(__wc);
  return iVar1;
}


// ===== 00d14910  <EXTERNAL>::iswcntrl_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswcntrl_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswcntrl_l_00d55038)(__wc);
  return iVar1;
}


// ===== 00d14920  <EXTERNAL>::iswupper_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswupper_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswupper_l_00d55040)(__wc);
  return iVar1;
}


// ===== 00d14930  <EXTERNAL>::iswalpha_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswalpha_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswalpha_l_00d55048)(__wc);
  return iVar1;
}


// ===== 00d14940  <EXTERNAL>::iswdigit_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswdigit_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswdigit_l_00d55050)(__wc);
  return iVar1;
}


// ===== 00d14950  <EXTERNAL>::iswpunct_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswpunct_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswpunct_l_00d55058)(__wc);
  return iVar1;
}


// ===== 00d14960  <EXTERNAL>::iswxdigit_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int iswxdigit_l(wint_t __wc,__locale_t __locale)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_l_00d55060)(__wc);
  return iVar1;
}


// ===== 00d14970  <EXTERNAL>::towupper_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t towupper_l(wint_t __wc,__locale_t __locale)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_towupper_l_00d55068)(__wc);
  return wVar1;
}


// ===== 00d14980  <EXTERNAL>::towlower_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t towlower_l(wint_t __wc,__locale_t __locale)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_towlower_l_00d55070)(__wc);
  return wVar1;
}


// ===== 00d14990  <EXTERNAL>::btowc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wint_t btowc(int __c)

{
  wint_t wVar1;
  
  wVar1 = (*(code *)PTR_btowc_00d55078)(__c);
  return wVar1;
}


// ===== 00d149a0  <EXTERNAL>::wctob =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wctob(wint_t __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wctob_00d55080)(__c);
  return iVar1;
}


// ===== 00d149b0  <EXTERNAL>::wcsnrtombs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcsnrtombs(char *__dst,wchar_t **__src,size_t __nwc,size_t __len,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcsnrtombs_00d55088)();
  return sVar1;
}


// ===== 00d149c0  <EXTERNAL>::wcrtomb =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t wcrtomb(char *__s,wchar_t __wc,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_wcrtomb_00d55090)(__s,__wc);
  return sVar1;
}


// ===== 00d149d0  <EXTERNAL>::mbsnrtowcs =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbsnrtowcs(wchar_t *__dst,char **__src,size_t __nmc,size_t __len,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbsnrtowcs_00d55098)();
  return sVar1;
}


// ===== 00d149e0  <EXTERNAL>::mbrtowc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbrtowc(wchar_t *__pwc,char *__s,size_t __n,mbstate_t *__p)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbrtowc_00d550a0)();
  return sVar1;
}


// ===== 00d149f0  <EXTERNAL>::mbtowc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mbtowc(wchar_t *__pwc,char *__s,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_mbtowc_00d550a8)((int)__pwc);
  return iVar1;
}


// ===== 00d14a00  <EXTERNAL>::__ctype_get_mb_cur_max =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t __ctype_get_mb_cur_max(void)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR___ctype_get_mb_cur_max_00d550b0)();
  return sVar1;
}


// ===== 00d14a10  <EXTERNAL>::mbrlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t mbrlen(char *__s,size_t __n,mbstate_t *__ps)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_mbrlen_00d550b8)();
  return sVar1;
}


// ===== 00d14a20  <EXTERNAL>::localeconv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

lconv * localeconv(void)

{
  lconv *plVar1;
  
  plVar1 = (lconv *)(*(code *)PTR_localeconv_00d550c0)();
  return plVar1;
}


// ===== 00d14a30  <EXTERNAL>::strtoll_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll_l(char *__nptr,char **__endptr,int __base,__locale_t __loc)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_l_00d550c8)(__nptr,__endptr,__base);
  return lVar1;
}


// ===== 00d14a40  <EXTERNAL>::strtoull_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulonglong strtoull_l(char *__nptr,char **__endptr,int __base,__locale_t __loc)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_strtoull_l_00d550d0)(__nptr,__endptr,__base);
  return uVar1;
}


// ===== 00d14a50  <EXTERNAL>::strtof =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float strtof(char *__nptr,char **__endptr)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_strtof_00d550d8)();
  return fVar1;
}


// ===== 00d14a60  <EXTERNAL>::strtod =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtod(char *__nptr,char **__endptr)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_strtod_00d550e0)();
  return dVar1;
}


// ===== 00d14a70  <EXTERNAL>::strtold_l =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double strtold_l(char *__nptr,char **__endptr,__locale_t __loc)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_strtold_l_00d550e8)();
  return dVar1;
}


// ===== 00d14a80  <EXTERNAL>::pthread_mutex_lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00d550f0)((int)__mutex);
  return iVar1;
}


// ===== 00d14a90  <EXTERNAL>::pthread_mutex_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_00d550f8)((int)__mutex);
  return iVar1;
}


// ===== 00d14aa0  <EXTERNAL>::pthread_mutexattr_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_init(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_init_00d55100)((int)__attr);
  return iVar1;
}


// ===== 00d14ab0  <EXTERNAL>::pthread_mutexattr_settype =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_settype(pthread_mutexattr_t *__attr,int __kind)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_settype_00d55108)((int)__attr,__kind);
  return iVar1;
}


// ===== 00d14ac0  <EXTERNAL>::pthread_mutex_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00d55110)((int)__mutex);
  return iVar1;
}


// ===== 00d14ad0  <EXTERNAL>::pthread_mutexattr_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutexattr_destroy_00d55118)((int)__attr);
  return iVar1;
}


// ===== 00d14ae0  <EXTERNAL>::pthread_mutex_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_00d55120)((int)__mutex);
  return iVar1;
}


// ===== 00d14af0  operator.new =====

void * operator_new(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_00d55128)();
  return pvVar1;
}


// ===== 00d14b00  <EXTERNAL>::posix_memalign =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int posix_memalign(void **__memptr,size_t __alignment,size_t __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_posix_memalign_00d55130)((int)__memptr);
  return iVar1;
}


// ===== 00d14b10  operator.delete =====

void operator_delete(void)

{
  (*(code *)PTR_operator_delete_00d55138)();
  return;
}


// ===== 00d14b20  <EXTERNAL>::read =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_read_00d55140)(__fd);
  return sVar1;
}


// ===== 00d14b30  <EXTERNAL>::ioctl =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_ioctl_00d55148)(__fd);
  return iVar1;
}


// ===== 00d14b40  <EXTERNAL>::strtoll =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_00d55150)(__nptr,__endptr,__base);
  return lVar1;
}


// ===== 00d14b50  <EXTERNAL>::strtol =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long strtol(char *__nptr,char **__endptr,int __base)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_strtol_00d55158)(__nptr,__endptr,__base);
  return lVar1;
}


// ===== 00d14b60  <EXTERNAL>::__gnu_strerror_r =====

void __gnu_strerror_r(void)

{
  (*(code *)PTR___gnu_strerror_r_00d55160)();
  return;
}


// ===== 00d14b70  <EXTERNAL>::pthread_join =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00d55168)((int)__th);
  return iVar1;
}


// ===== 00d14b80  <EXTERNAL>::pthread_detach =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_detach(pthread_t __th)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_detach_00d55170)((int)__th);
  return iVar1;
}


// ===== 00d14b90  <EXTERNAL>::sysconf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long sysconf(int __name)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_sysconf_00d55178)(__name);
  return lVar1;
}


// ===== 00d14ba0  <EXTERNAL>::nanosleep =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_nanosleep_00d55180)((int)__requested_time);
  return iVar1;
}


// ===== 00d14bb0  <EXTERNAL>::syscall =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long syscall(long __sysno,...)

{
  long lVar1;
  
  lVar1 = (*(code *)PTR_syscall_00d55188)();
  return lVar1;
}


// ===== 00d14bc0  <EXTERNAL>::fseek =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseek(FILE *__stream,long __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseek_00d55190)((int)__stream,__off,__whence);
  return iVar1;
}


// ===== 00d14bd0  <EXTERNAL>::fseeko =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fseeko(FILE *__stream,__off_t __off,int __whence)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fseeko_00d55198)((int)__stream,__off,__whence);
  return iVar1;
}


// ===== 00d14be0  <EXTERNAL>::ftello =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__off_t ftello(FILE *__stream)

{
  __off_t _Var1;
  
  _Var1 = (*(code *)PTR_ftello_00d551a0)();
  return _Var1;
}


// ===== 00d14bf0  <EXTERNAL>::vfprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int vfprintf(FILE *__s,char *__format,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_vfprintf_00d551a8)((int)__s);
  return iVar1;
}


// ===== 00d14c00  <EXTERNAL>::android_set_abort_message =====

void android_set_abort_message(void)

{
  (*(code *)PTR_android_set_abort_message_00d551b0)();
  return;
}


// ===== 00d14c10  <EXTERNAL>::openlog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void openlog(char *__ident,int __option,int __facility)

{
  (*(code *)PTR_openlog_00d551b8)(__ident,__option,__facility);
  return;
}


// ===== 00d14c20  <EXTERNAL>::syslog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void syslog(int __pri,char *__fmt,...)

{
  (*(code *)PTR_syslog_00d551c0)(__pri);
  return;
}


// ===== 00d14c30  <EXTERNAL>::closelog =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void closelog(void)

{
  (*(code *)PTR_closelog_00d551c8)();
  return;
}


// ===== 00d14c40  <EXTERNAL>::fputc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fputc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fputc_00d551d0)(__c);
  return iVar1;
}


// ===== 00d14c50  <EXTERNAL>::pthread_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_once(pthread_once_t *__once_control,__init_routine *__init_routine)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_once_00d551d8)((int)__once_control);
  return iVar1;
}


// ===== 00d14c60  __emutls_get_address =====

void __emutls_get_address(void)

{
  (*(code *)PTR___emutls_get_address_00d551e0)();
  return;
}


// ===== 00d14c70  <EXTERNAL>::sincos =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincos(double __x,double *__sinx,double *__cosx)

{
  (*(code *)PTR_sincos_00d551e8)();
  return;
}


// ===== 00d14c80  <EXTERNAL>::rand =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_00d551f0)();
  return iVar1;
}


// ===== 00d14c90  <EXTERNAL>::munmap =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int munmap(void *__addr,size_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_munmap_00d551f8)((int)__addr);
  return iVar1;
}


// ===== 00d14ca0  <EXTERNAL>::mmap =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_mmap_00d55200)(__addr,__len,__prot,__flags,__fd);
  return pvVar1;
}


// ===== 00d14cb0  <EXTERNAL>::getpid =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = (*(code *)PTR_getpid_00d55208)();
  return _Var1;
}


// ===== 00d14cc0  <EXTERNAL>::gettimeofday =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_gettimeofday_00d55210)((int)__tv);
  return iVar1;
}


// ===== 00d14cd0  <EXTERNAL>::poll =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_poll_00d55218)((int)__fds,__nfds,__timeout);
  return iVar1;
}


// ===== 00d14ce0  <EXTERNAL>::fcntl =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fcntl_00d55220)(__fd,__cmd);
  return iVar1;
}


// ===== 00d14cf0  <EXTERNAL>::strchr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strchr_00d55228)(__s,__c);
  return pcVar1;
}


// ===== 00d14d00  <EXTERNAL>::madvise =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int madvise(void *__addr,size_t __len,int __advice)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_madvise_00d55230)((int)__addr,__len,__advice);
  return iVar1;
}


// ===== 00d14d10  <EXTERNAL>::time =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_00d55238)();
  return tVar1;
}


// ===== 00d14d20  <EXTERNAL>::printf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00d55240)((int)__format);
  return iVar1;
}


// ===== 00d14d30  <EXTERNAL>::strncpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strncpy_00d55248)();
  return pcVar1;
}


// ===== 00d14d40  <EXTERNAL>::fprintf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fprintf(FILE *__stream,char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fprintf_00d55250)((int)__stream);
  return iVar1;
}


// ===== 00d14d50  <EXTERNAL>::getsockopt =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockopt_00d55258)(__fd,__level,__optname);
  return iVar1;
}


// ===== 00d14d60  <EXTERNAL>::socket =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_socket_00d55260)(__domain,__type,__protocol);
  return iVar1;
}


// ===== 00d14d70  <EXTERNAL>::fdopen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * fdopen(int __fd,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fdopen_00d55268)(__fd);
  return pFVar1;
}


// ===== 00d14d80  <EXTERNAL>::accept =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_accept_00d55270)(__fd);
  return iVar1;
}


// ===== 00d14d90  <EXTERNAL>::recvmsg =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recvmsg_00d55278)(__fd,__message,__flags);
  return sVar1;
}


// ===== 00d14da0  <EXTERNAL>::__cmsg_nxthdr =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

cmsghdr * __cmsg_nxthdr(msghdr *__mhdr,cmsghdr *__cmsg)

{
  cmsghdr *pcVar1;
  
  pcVar1 = (cmsghdr *)(*(code *)PTR___cmsg_nxthdr_00d55280)();
  return pcVar1;
}


// ===== 00d14db0  <EXTERNAL>::getaddrinfo =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getaddrinfo(char *__name,char *__service,addrinfo *__req,addrinfo **__pai)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getaddrinfo_00d55288)((int)__name);
  return iVar1;
}


// ===== 00d14dc0  <EXTERNAL>::freeaddrinfo =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void freeaddrinfo(addrinfo *__ai)

{
  (*(code *)PTR_freeaddrinfo_00d55290)();
  return;
}


// ===== 00d14dd0  <EXTERNAL>::bind =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_bind_00d55298)(__fd,__addr,__len);
  return iVar1;
}


// ===== 00d14de0  <EXTERNAL>::listen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_listen_00d552a0)(__fd,__n);
  return iVar1;
}


// ===== 00d14df0  <EXTERNAL>::connect =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_connect_00d552a8)(__fd,__addr,__len);
  return iVar1;
}


// ===== 00d14e00  <EXTERNAL>::getsockname =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getsockname_00d552b0)(__fd);
  return iVar1;
}


// ===== 00d14e10  <EXTERNAL>::getpeername =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_getpeername_00d552b8)(__fd);
  return iVar1;
}


// ===== 00d14e20  <EXTERNAL>::pipe =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pipe(int *__pipedes)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pipe_00d552c0)((int)__pipedes);
  return iVar1;
}


// ===== 00d14e30  <EXTERNAL>::_exit =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _exit(int __status)

{
  (*(code *)PTR__exit_00d552c8)(__status);
  return;
}


// ===== 00d14e40  <EXTERNAL>::sigaction =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00d552d0)(__sig);
  return iVar1;
}


// ===== 00d14e50  <EXTERNAL>::sigfillset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigfillset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigfillset_00d552d8)((int)__set);
  return iVar1;
}


// ===== 00d14e60  <EXTERNAL>::sendmsg =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendmsg_00d552e0)(__fd,__message,__flags);
  return sVar1;
}


// ===== 00d14e70  <EXTERNAL>::pthread_equal =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_equal(pthread_t __thread1,pthread_t __thread2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_equal_00d552e8)((int)__thread1);
  return iVar1;
}


// ===== 00d14e80  <EXTERNAL>::pthread_rwlock_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_init(pthread_rwlock_t *__rwlock,pthread_rwlockattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_init_00d552f0)((int)__rwlock);
  return iVar1;
}


// ===== 00d14e90  <EXTERNAL>::pthread_rwlock_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_destroy_00d552f8)((int)__rwlock);
  return iVar1;
}


// ===== 00d14ea0  <EXTERNAL>::pthread_rwlock_rdlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_rdlock_00d55300)((int)__rwlock);
  return iVar1;
}


// ===== 00d14eb0  <EXTERNAL>::pthread_rwlock_unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_unlock_00d55308)((int)__rwlock);
  return iVar1;
}


// ===== 00d14ec0  <EXTERNAL>::pthread_rwlock_wrlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_rwlock_wrlock_00d55310)((int)__rwlock);
  return iVar1;
}


// ===== 00d14ed0  <EXTERNAL>::sem_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_init(sem_t *__sem,int __pshared,uint __value)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_init_00d55318)((int)__sem,__pshared,__value);
  return iVar1;
}


// ===== 00d14ee0  <EXTERNAL>::sem_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_destroy(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_destroy_00d55320)((int)__sem);
  return iVar1;
}


// ===== 00d14ef0  <EXTERNAL>::sem_post =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_post(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_post_00d55328)((int)__sem);
  return iVar1;
}


// ===== 00d14f00  <EXTERNAL>::sem_wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sem_wait(sem_t *__sem)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sem_wait_00d55330)((int)__sem);
  return iVar1;
}


// ===== 00d14f10  <EXTERNAL>::pthread_condattr_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_condattr_init(pthread_condattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_condattr_init_00d55338)((int)__attr);
  return iVar1;
}


// ===== 00d14f20  <EXTERNAL>::pthread_condattr_setclock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_condattr_setclock(pthread_condattr_t *__attr,__clockid_t __clock_id)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_condattr_setclock_00d55340)((int)__attr,__clock_id);
  return iVar1;
}


// ===== 00d14f30  <EXTERNAL>::pthread_cond_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_cond_init(pthread_cond_t *__cond,pthread_condattr_t *__cond_attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_cond_init_00d55348)((int)__cond);
  return iVar1;
}


// ===== 00d14f40  <EXTERNAL>::pthread_condattr_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_condattr_destroy(pthread_condattr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_condattr_destroy_00d55350)((int)__attr);
  return iVar1;
}


// ===== 00d14f50  <EXTERNAL>::pthread_key_delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_key_delete(pthread_key_t __key)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_key_delete_00d55358)(__key);
  return iVar1;
}


// ===== 00d14f60  <EXTERNAL>::sendto =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_sendto_00d55360)(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}


// ===== 00d14f70  <EXTERNAL>::epoll_create =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_create(int __size)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_create_00d55368)(__size);
  return iVar1;
}


// ===== 00d14f80  <EXTERNAL>::epoll_ctl =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_ctl(int __epfd,int __op,int __fd,epoll_event *__event)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_ctl_00d55370)(__epfd,__op,__fd);
  return iVar1;
}


// ===== 00d14f90  <EXTERNAL>::sigemptyset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigemptyset(sigset_t *__set)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigemptyset_00d55378)((int)__set);
  return iVar1;
}


// ===== 00d14fa0  <EXTERNAL>::sigaddset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaddset(sigset_t *__set,int __signo)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaddset_00d55380)((int)__set,__signo);
  return iVar1;
}


// ===== 00d14fb0  <EXTERNAL>::epoll_wait =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int epoll_wait(int __epfd,epoll_event *__events,int __maxevents,int __timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_epoll_wait_00d55388)(__epfd,__events,__maxevents,__timeout);
  return iVar1;
}


// ===== 00d14fc0  <EXTERNAL>::clock_getres =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clock_getres(clockid_t __clock_id,timespec *__res)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_clock_getres_00d55390)(__clock_id);
  return iVar1;
}


// ===== 00d14fd0  <EXTERNAL>::prctl =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_prctl_00d55398)(__option);
  return iVar1;
}


// ===== 00d14fe0  <EXTERNAL>::sigprocmask =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigprocmask(int __how,sigset_t *__set,sigset_t *__oset)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigprocmask_00d553a0)(__how);
  return iVar1;
}


// ===== 00d14ff0  <EXTERNAL>::pthread_sigmask =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_sigmask(int __how,__sigset_t *__newmask,__sigset_t *__oldmask)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_sigmask_00d553a8)(__how);
  return iVar1;
}


// ===== 00d15000  <EXTERNAL>::sched_yield =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_yield(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_yield_00d553b0)();
  return iVar1;
}


// ===== 00d15010  <EXTERNAL>::slCreateEngine =====

void slCreateEngine(void)

{
  (*(code *)PTR_slCreateEngine_00d553b8)();
  return;
}


// ===== 00d15020  <EXTERNAL>::__android_log_write =====

void __android_log_write(void)

{
  (*(code *)PTR___android_log_write_00d553c0)();
  return;
}


// ===== 00d15030  <EXTERNAL>::sin =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double sin(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_sin_00d553c8)();
  return dVar1;
}


// ===== 00d15040  <EXTERNAL>::frexp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double frexp(double __x,int *__exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_frexp_00d553d0)();
  return dVar1;
}


// ===== 00d15050  <EXTERNAL>::nan =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nan(char *__tagb)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_nan_00d553d8)();
  return dVar1;
}


// ===== 00d15060  <EXTERNAL>::ldexp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double ldexp(double __x,int __exponent)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_ldexp_00d553e0)(__exponent);
  return dVar1;
}


// ===== 00d15070  <EXTERNAL>::localtime_r =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

tm * localtime_r(time_t *__timer,tm *__tp)

{
  tm *ptVar1;
  
  ptVar1 = (tm *)(*(code *)PTR_localtime_r_00d553e8)();
  return ptVar1;
}


// ===== 00d15080  <EXTERNAL>::strerror =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_strerror_00d553f0)(__errnum);
  return pcVar1;
}


// ===== 00d15090  <EXTERNAL>::gettid =====

void gettid(void)

{
  (*(code *)PTR_gettid_00d553f8)();
  return;
}


// ===== 00d150a0  <EXTERNAL>::powf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float powf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_powf_00d55400)();
  return fVar1;
}


// ===== 00d150b0  <EXTERNAL>::exp2f =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float exp2f(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_exp2f_00d55408)();
  return fVar1;
}


// ===== 00d150c0  <EXTERNAL>::__open_2 =====

void __open_2(void)

{
  (*(code *)PTR___open_2_00d55410)();
  return;
}


// ===== 00d150d0  <EXTERNAL>::__read_chk =====

void __read_chk(void)

{
  (*(code *)PTR___read_chk_00d55418)();
  return;
}


// ===== 00d150e0  <EXTERNAL>::getauxval =====

void getauxval(void)

{
  (*(code *)PTR_getauxval_00d55420)();
  return;
}


// ===== 00d150f0  <EXTERNAL>::feof =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_feof_00d55428)((int)__stream);
  return iVar1;
}


// ===== 00d15100  <EXTERNAL>::pthread_attr_init =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_init(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_init_00d55430)((int)__attr);
  return iVar1;
}


// ===== 00d15110  <EXTERNAL>::pthread_attr_setstacksize =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setstacksize(pthread_attr_t *__attr,size_t __stacksize)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setstacksize_00d55438)((int)__attr);
  return iVar1;
}


// ===== 00d15120  <EXTERNAL>::pthread_attr_setdetachstate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_setdetachstate(pthread_attr_t *__attr,int __detachstate)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_setdetachstate_00d55440)((int)__attr,__detachstate);
  return iVar1;
}


// ===== 00d15130  <EXTERNAL>::pthread_attr_destroy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_attr_destroy(pthread_attr_t *__attr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_attr_destroy_00d55448)((int)__attr);
  return iVar1;
}


// ===== 00d15140  <EXTERNAL>::sched_get_priority_min =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_get_priority_min(int __algorithm)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_get_priority_min_00d55450)(__algorithm);
  return iVar1;
}


// ===== 00d15150  <EXTERNAL>::sched_get_priority_max =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sched_get_priority_max(int __algorithm)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sched_get_priority_max_00d55458)(__algorithm);
  return iVar1;
}


// ===== 00d15160  <EXTERNAL>::pthread_setschedparam =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_setschedparam(pthread_t __target_thread,int __policy,sched_param *__param)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_setschedparam_00d55460)((int)__target_thread,__policy);
  return iVar1;
}


// ===== 00d15170  <EXTERNAL>::ldiv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ldiv_t ldiv(long __numer,long __denom)

{
  ldiv_t lVar1;
  
  lVar1 = (ldiv_t)(*(code *)PTR_ldiv_00d55468)();
  return lVar1;
}


// ===== 00d15180  <EXTERNAL>::tgkill =====

void tgkill(void)

{
  (*(code *)PTR_tgkill_00d55470)();
  return;
}


// ===== 00d15190  <EXTERNAL>::dladdr =====

void dladdr(void)

{
  (*(code *)PTR_dladdr_00d55478)();
  return;
}


// ===== 00d151a0  <EXTERNAL>::acos =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double acos(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_acos_00d55480)();
  return dVar1;
}


// ===== 00d151b0  <EXTERNAL>::exp2 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double exp2(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_exp2_00d55488)();
  return dVar1;
}


// ===== 00d151c0  <EXTERNAL>::expf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float expf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_expf_00d55490)();
  return fVar1;
}


// ===== 00d151d0  <EXTERNAL>::__gcov_dump =====

void __gcov_dump(void)

{
  (*(code *)PTR___gcov_dump_00d55498)();
  return;
}


// ===== 00d151e0  <EXTERNAL>::__gcov_flush =====

void __gcov_flush(void)

{
  (*(code *)PTR___gcov_flush_00d554a0)();
  return;
}


// ===== 00d151f0  <EXTERNAL>::pthread_getschedparam =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_getschedparam(pthread_t __target_thread,int *__policy,sched_param *__param)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_getschedparam_00d554a8)((int)__target_thread);
  return iVar1;
}


// ===== 00d15200  <EXTERNAL>::log2 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double log2(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_log2_00d554b0)();
  return dVar1;
}


// ===== 00d15210  <EXTERNAL>::qsort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  (*(code *)PTR_qsort_00d554b8)();
  return;
}


// ===== 00d15220  <EXTERNAL>::bsearch =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * bsearch(void *__key,void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_bsearch_00d554c0)();
  return pvVar1;
}


// ===== 00d15230  <EXTERNAL>::OPENSSL_memory_alloc =====

void OPENSSL_memory_alloc(void)

{
  (*(code *)PTR_OPENSSL_memory_alloc_00d554c8)();
  return;
}


// ===== 00d15240  <EXTERNAL>::OPENSSL_memory_free =====

void OPENSSL_memory_free(void)

{
  (*(code *)PTR_OPENSSL_memory_free_00d554d0)();
  return;
}


// ===== 00d15250  <EXTERNAL>::OPENSSL_memory_get_size =====

void OPENSSL_memory_get_size(void)

{
  (*(code *)PTR_OPENSSL_memory_get_size_00d554d8)();
  return;
}


// ===== 00d15260  <EXTERNAL>::perror =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void perror(char *__s)

{
  (*(code *)PTR_perror_00d554e0)();
  return;
}


// ===== 00d15270  <EXTERNAL>::strnlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_00d554e8)();
  return sVar1;
}


// ===== 00d15280  <EXTERNAL>::send =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_send_00d554f0)(__fd,__buf,__n,__flags);
  return sVar1;
}


// ===== 00d15290  <EXTERNAL>::recv =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_recv_00d554f8)(__fd,__buf,__n,__flags);
  return sVar1;
}


// ===== 00d152a0  <EXTERNAL>::__FD_SET_chk =====

void __FD_SET_chk(void)

{
  (*(code *)PTR___FD_SET_chk_00d55500)();
  return;
}


// ===== 00d152b0  <EXTERNAL>::select =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_select_00d55508)(__nfds);
  return iVar1;
}


// ===== 00d152c0  <EXTERNAL>::__FD_ISSET_chk =====

void __FD_ISSET_chk(void)

{
  (*(code *)PTR___FD_ISSET_chk_00d55510)();
  return;
}


// ===== 00d152d0  <EXTERNAL>::__FD_CLR_chk =====

void __FD_CLR_chk(void)

{
  (*(code *)PTR___FD_CLR_chk_00d55518)();
  return;
}


// ===== 00d152e0  <EXTERNAL>::inet_pton =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int inet_pton(int __af,char *__cp,void *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_inet_pton_00d55520)(__af);
  return iVar1;
}


// ===== 00d152f0  <EXTERNAL>::strspn =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strspn(char *__s,char *__accept)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strspn_00d55528)();
  return sVar1;
}


// ===== 00d15300  <EXTERNAL>::expm1 =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double expm1(double __x)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_expm1_00d55530)();
  return dVar1;
}


// ===== 00d15310  <EXTERNAL>::cosf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float cosf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_cosf_00d55538)();
  return fVar1;
}


// ===== 00d15320  <EXTERNAL>::sincosf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sincosf(float __x,float *__sinx,float *__cosx)

{
  (*(code *)PTR_sincosf_00d55540)();
  return;
}


// ===== 00d15330  <EXTERNAL>::tanhf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float tanhf(float __x)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_tanhf_00d55548)();
  return fVar1;
}


// ===== 00d15340  <EXTERNAL>::setjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int setjmp(__jmp_buf_tag *__env)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_setjmp_00d55550)((int)__env);
  return iVar1;
}


// ===== 00d15350  <EXTERNAL>::longjmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void longjmp(__jmp_buf_tag *__env,int __val)

{
  (*(code *)PTR_longjmp_00d55558)(__env,__val);
  return;
}


// ===== 00d15360  <EXTERNAL>::if_indextoname =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * if_indextoname(uint __ifindex,char *__ifname)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_if_indextoname_00d55560)(__ifindex);
  return pcVar1;
}


// ===== 00d15370  <EXTERNAL>::exit =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00d55568)(__status);
  return;
}


// ===== 00d15380  <EXTERNAL>::dl_iterate_phdr =====

void dl_iterate_phdr(void)

{
  (*(code *)PTR_dl_iterate_phdr_00d55570)();
  return;
}


// ===== 00dbd000  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd008  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd010  <EXTERNAL>::__register_atfork =====

/* WARNING: Control flow encountered bad instruction data */

void __register_atfork(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd018  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd020  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd028  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd030  <EXTERNAL>::memmove =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memmove(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd038  <EXTERNAL>::abort =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd040  <EXTERNAL>::memcmp =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 00dbd048  <EXTERNAL>::pthread_create =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
                  void *__arg)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


