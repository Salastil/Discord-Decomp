// ===== 00560c3c  FUN_00560c3c =====

void FUN_00560c3c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00560c48  FUN_00560c48 =====

undefined8 FUN_00560c48(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return 0;
}


// ===== 00560c58  FUN_00560c58 =====

undefined8 FUN_00560c58(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  return 0;
}


// ===== 00560c68  FUN_00560c68 =====

undefined8 FUN_00560c68(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  return 0;
}


// ===== 00560c78  FUN_00560c78 =====

undefined8 FUN_00560c78(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  return 0;
}


// ===== 00560c88  FUN_00560c88 =====

undefined8 FUN_00560c88(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  
  if (((*(int *)((long)param_1 + 0xc) == *(int *)((long)param_2 + 0xc)) &&
      (*(int *)(param_1 + 2) == *(int *)(param_2 + 2))) &&
     (*(int *)(param_1 + 1) == *(int *)(param_2 + 1))) {
    iVar1 = strcmp((char *)*param_1,(char *)*param_2);
    *param_3 = -(uint)(iVar1 != 0);
    return 0;
  }
  *param_3 = -1;
  return 0;
}


// ===== 00560d04  FUN_00560d04 =====

void FUN_00560d04(long param_1,int *param_2)

{
  *param_2 = (int)*(char *)(param_1 + 0x14);
  return;
}


// ===== 00560d10  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00560d14  FUN_00560d14 =====

void FUN_00560d14(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_250 [24];
  byte local_238 [16];
  void *local_228;
  byte local_218;
  void *local_208;
  byte *local_200;
  byte *local_1f8;
  long *local_1e8;
  long *local_1e0 [14];
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  plVar11 = *(long **)(param_2 + 0x20);
  local_1e0[0] = (long *)CONCAT62(local_1e0[0]._2_6_,*(undefined2 *)(param_2 + 0x30));
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)0x0;
    if (*(long *)(lVar7 + 0x28) != local_68) goto LAB_005611b0;
    FUN_0030be88();
LAB_00560fec:
    uVar14 = FUN_00753a74(0x88);
                    /* try { // try from 00560ff8 to 00560fff has its CatchHandler @ 005610e4 */
    FUN_00645c30(local_238);
                    /* try { // try from 00561000 to 0056101f has its CatchHandler @ 005610c4 */
    FUN_0047488c(local_1e0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/allocator_utils.cc"
                 ,0x3d,"AllocatorPtr onnxruntime::CreateAllocator(const AllocatorCreationInfo &)",
                 local_238);
                    /* try { // try from 00561020 to 0056102f has its CatchHandler @ 00561084 */
    FUN_00479eac(auStack_250,"StreamAwareArena should be transparent to minimal build.");
    plVar11 = (long *)FUN_004792b8(uVar14,local_1e0,auStack_250);
    if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 00561050 to 00561067 has its CatchHandler @ 00561068 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar14,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    (**(code **)(*plVar11 + 0x30))(&local_1e8,plVar11,local_1e0);
    plVar13 = local_1e8;
    if (*(char *)(param_2 + 0x32) == '\0') {
      *param_1 = (long)local_1e8;
      if (local_1e8 == (long *)0x0) {
        plVar11 = (long *)0x0;
        param_1[1] = 0;
      }
      else {
                    /* try { // try from 00560e6c to 00560e73 has its CatchHandler @ 00561100 */
        plVar11 = (long *)FUN_00759c3c(0x20);
        puVar9 = PTR_DAT_007a26f0;
        plVar11[2] = 0;
        plVar11[3] = (long)plVar13;
        param_1[1] = (long)plVar11;
        *plVar11 = (long)(puVar9 + 0x10);
        plVar11[1] = 0;
      }
    }
    else {
      lVar15 = *(long *)(param_2 + 0x38);
      if (lVar15 == 0) {
        lVar15 = -1;
      }
      iVar2 = 0x100000;
      if (*(int *)(param_2 + 0x44) != -1) {
        iVar2 = *(int *)(param_2 + 0x44);
      }
      iVar3 = 0x8000000;
      if (*(int *)(param_2 + 0x48) != -1) {
        iVar3 = *(int *)(param_2 + 0x48);
      }
      iVar4 = 0x200000;
      if (*(int *)(param_2 + 0x4c) != -1) {
        iVar4 = *(int *)(param_2 + 0x4c);
      }
      uVar1 = *(int *)(param_2 + 0x40) + 1;
      lVar5 = 0x40000000;
      if (*(long *)(param_2 + 0x50) != -1) {
        lVar5 = *(long *)(param_2 + 0x50);
      }
      if (uVar1 < 3) {
        if (*(char *)(param_2 + 0x58) != '\0') goto LAB_00560fec;
        uVar6 = *(undefined4 *)(&DAT_0020f218 + (ulong)uVar1 * 4);
                    /* try { // try from 00560de0 to 00560de7 has its CatchHandler @ 00561180 */
        lVar12 = FUN_00759c3c(0x470);
        local_1e0[0] = local_1e8;
        local_1e8 = (long *)0x0;
                    /* try { // try from 00560df4 to 00560e13 has its CatchHandler @ 0056114c */
        FUN_00561234(lVar12,local_1e0,lVar15,uVar6,iVar2,iVar3,iVar4,lVar5);
        plVar11 = local_1e0[0];
        local_1e0[0] = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        *param_1 = lVar12;
                    /* try { // try from 00560e30 to 00560e37 has its CatchHandler @ 00561128 */
        plVar13 = (long *)FUN_00759c3c(0x20);
        plVar11 = local_1e8;
        puVar9 = PTR_DAT_007a26e8;
        plVar13[2] = 0;
        plVar13[3] = lVar12;
        param_1[1] = (long)plVar13;
        *plVar13 = (long)(puVar9 + 0x10);
        plVar13[1] = 0;
        local_1e8 = (long *)0x0;
        if (plVar11 != (long *)0x0) goto LAB_00560f9c;
        plVar11 = (long *)0x0;
      }
      else {
                    /* try { // try from 00560e90 to 00560e93 has its CatchHandler @ 00561184 */
        lVar15 = FUN_00488994();
        if (*(int *)(lVar15 + 0x20) < 4) {
                    /* try { // try from 00560ea0 to 00560ea3 has its CatchHandler @ 005610e0 */
          uVar14 = FUN_00488994();
          uVar16 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00560eb4 to 00560ecf has its CatchHandler @ 005610dc */
          FUN_0048a3f4(local_238,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/allocator_utils.cc"
                       ,0x2d,"CreateAllocator");
                    /* try { // try from 00560ed0 to 00560eef has its CatchHandler @ 005610d4 */
          FUN_0048a554(local_1e0,uVar14,3,uVar16,0,local_238);
                    /* try { // try from 00560ef0 to 00560f0b has its CatchHandler @ 00561104 */
          uVar14 = FUN_00303e0c(auStack_170,"Received invalid value of arena_extend_strategy ",0x30)
          ;
          FUN_00717214(uVar14,*(undefined4 *)(param_2 + 0x40));
          FUN_00637fac(local_1e0);
          pbVar10 = local_200;
          if (local_200 != (byte *)0x0) {
            while (pbVar8 = local_1f8, pbVar8 != pbVar10) {
              local_1f8 = pbVar8 + -0x18;
              if ((*local_1f8 & 1) != 0) {
                free(*(void **)(pbVar8 + -8));
              }
            }
            local_1f8 = pbVar10;
            free(local_200);
          }
          if ((local_218 & 1) != 0) {
            free(local_208);
          }
          if ((local_238[0] & 1) != 0) {
            free(local_228);
          }
        }
        plVar11 = local_1e8;
        *param_1 = 0;
        param_1[1] = 0;
        local_1e8 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
LAB_00560f9c:
          local_1e8 = (long *)0x0;
          plVar11 = (long *)(**(code **)(*plVar11 + 8))();
        }
      }
    }
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
  }
LAB_005611b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar11);
}


// ===== 005611b4  FUN_005611b4 =====

void FUN_005611b4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 005611d8  FUN_005611d8 =====

void FUN_005611d8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005611e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 005611f0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 005611f4  FUN_005611f4 =====

void FUN_005611f4(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00561218  FUN_00561218 =====

void FUN_00561218(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00561228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00561230  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00561234  FUN_00561234 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561234(long *param_1,long *param_2,ulong param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,long param_8)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  undefined *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined8 uVar17;
  char *__s;
  undefined1 auStack_238 [24];
  byte local_220 [16];
  void *local_210;
  byte local_200;
  void *local_1f0;
  byte *local_1e8;
  byte *local_1e0;
  undefined1 auStack_1d0 [112];
  undefined1 auStack_160 [264];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar10 = *param_2;
  uVar2 = *(undefined4 *)(lVar10 + 0x1c);
  param_1[1] = *(long *)(lVar10 + 8);
  puVar6 = PTR_DAT_007a26f8;
  lVar10 = *(long *)(lVar10 + 0x10);
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x70] = 0;
  param_1[2] = lVar10;
  lVar5 = _UNK_00200248;
  lVar10 = _DAT_00200240;
  lVar11 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x71] = lVar11;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = lVar5;
  param_1[0x7a] = lVar10;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8a) = param_5;
  *(undefined4 *)((long)param_1 + 0x454) = param_6;
  *(undefined4 *)(param_1 + 0x8b) = param_7;
  param_1[0x8c] = param_8;
                    /* try { // try from 00561304 to 00561307 has its CatchHandler @ 005617bc */
  lVar10 = FUN_00488994();
  if (*(int *)(lVar10 + 0x20) < 2) {
                    /* try { // try from 00561314 to 00561317 has its CatchHandler @ 005617b8 */
    uVar8 = FUN_00488994();
    uVar17 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00561328 to 00561343 has its CatchHandler @ 005617b4 */
    FUN_0048a3f4(local_220,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x1d,"BFCArena");
                    /* try { // try from 00561344 to 00561363 has its CatchHandler @ 005617ac */
    FUN_0048a554(auStack_1d0,uVar8,1,uVar17,0,local_220);
                    /* try { // try from 00561364 to 0056142b has its CatchHandler @ 0056186c */
    uVar8 = FUN_00303e0c(auStack_160,"Creating BFCArena for ",0x16);
    __s = *(char **)(param_1[0x71] + 8);
    sVar9 = strlen(__s);
    uVar8 = FUN_00303e0c(uVar8,__s,sVar9);
    uVar8 = FUN_00303e0c(uVar8," with following configs: initial_chunk_size_bytes: ",0x33);
    uVar8 = FUN_00717214(uVar8,(int)param_1[0x8a]);
    uVar8 = FUN_00303e0c(uVar8," max_dead_bytes_per_chunk: ",0x1b);
    uVar8 = FUN_00717214(uVar8,*(undefined4 *)((long)param_1 + 0x454));
    uVar8 = FUN_00303e0c(uVar8," initial_growth_chunk_size_bytes: ",0x22);
    uVar8 = FUN_00717214(uVar8,(int)param_1[0x8b]);
    uVar8 = FUN_00303e0c(uVar8," max_power_of_two_extend_bytes: ",0x20);
    uVar8 = FUN_0071755c(uVar8,param_1[0x8c]);
    uVar8 = FUN_00303e0c(uVar8," memory limit: ",0xf);
    uVar8 = FUN_007176ec(uVar8,param_3);
    uVar8 = FUN_00303e0c(uVar8," arena_extend_strategy: ",0x18);
    FUN_00717214(uVar8,param_4);
    FUN_00637fac(auStack_1d0);
    pbVar7 = local_1e8;
    if (local_1e8 != (byte *)0x0) {
      while (pbVar16 = local_1e0, pbVar16 != pbVar7) {
        local_1e0 = pbVar16 + -0x18;
        if ((*local_1e0 & 1) != 0) {
          free(*(void **)(pbVar16 + -8));
        }
      }
      local_1e0 = pbVar7;
      free(local_1e8);
    }
    if ((local_200 & 1) != 0) {
      free(local_1f0);
    }
    if ((local_220[0] & 1) != 0) {
      free(local_210);
    }
  }
  param_1[5] = param_3;
  param_1[0x84] = param_3;
  *(int *)(param_1 + 6) = param_4;
  uVar12 = (long)(int)param_1[0x8a];
  if (param_3 <= (ulong)(long)(int)param_1[0x8a]) {
    uVar12 = param_3;
  }
  *(bool *)(param_1 + 0x8d) = param_4 == 1;
  param_1[0x70] = uVar12 + 0xff & 0xffffffffffffff00;
                    /* try { // try from 005614d0 to 005614d3 has its CatchHandler @ 005617bc */
  lVar10 = FUN_00488994();
  if (*(int *)(lVar10 + 0x20) < 1) {
                    /* try { // try from 005614e0 to 005614e3 has its CatchHandler @ 005617a8 */
    uVar8 = FUN_00488994();
    uVar17 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 005614f4 to 0056150f has its CatchHandler @ 005617a4 */
    FUN_0048a3f4(local_220,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x42,"BFCArena");
                    /* try { // try from 00561510 to 0056152f has its CatchHandler @ 0056179c */
    FUN_0048a554(auStack_1d0,uVar8,0,uVar17,0,local_220);
                    /* try { // try from 00561530 to 0056157b has its CatchHandler @ 005617d4 */
    uVar8 = FUN_00303e0c(auStack_160,"Creating ",9);
    uVar8 = FUN_00717214(uVar8,0x15);
    uVar8 = FUN_00303e0c(uVar8," bins of max chunk size ",0x18);
    uVar8 = FUN_007176ec(uVar8,0x100);
    uVar8 = FUN_00303e0c(uVar8,&DAT_001e1e07,4);
    FUN_007176ec(uVar8,0x10000000);
    FUN_00637fac(auStack_1d0);
    pbVar7 = local_1e8;
    pbVar16 = local_1e0;
    if (local_1e8 != (byte *)0x0) {
      while (pbVar4 = pbVar16, pbVar4 != pbVar7) {
        pbVar16 = pbVar4 + -0x18;
        if ((*pbVar16 & 1) != 0) {
          free(*(void **)(pbVar4 + -8));
        }
      }
      local_1e0 = pbVar7;
      free(local_1e8);
    }
    if ((local_200 & 1) != 0) {
      free(local_1f0);
    }
    if ((local_220[0] & 1) != 0) {
      free(local_210);
    }
  }
  lVar10 = 0;
  uVar12 = 0;
  do {
    uVar13 = 0x100L << (uVar12 & 0x3f);
    puVar15 = (undefined8 *)((long)param_1 + lVar10 + 0x48);
    *puVar15 = 0;
    *(undefined8 *)((long)param_1 + lVar10 + 0x50) = 0;
    uVar14 = uVar13 >> 8;
    *(long **)((long)param_1 + lVar10 + 0x58) = param_1;
    *(ulong *)((long)param_1 + lVar10 + 0x38) = uVar13;
    *(undefined8 **)((long)param_1 + lVar10 + 0x40) = puVar15;
    uVar13 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    if (uVar12 != LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20)) {
      uVar8 = FUN_00753a74(0x88);
                    /* try { // try from 0056169c to 005616a3 has its CatchHandler @ 00561898 */
      FUN_00645c30(local_220);
                    /* try { // try from 005616a4 to 005616c3 has its CatchHandler @ 0056185c */
      FUN_0047488c(auStack_1d0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x47,
                   "onnxruntime::BFCArena::BFCArena(std::unique_ptr<IAllocator>, size_t, ArenaExtendStrategy, int, int, int, int64_t)"
                   ,local_220);
      FUN_00476720(auStack_238);
                    /* try { // try from 005616d0 to 00561713 has its CatchHandler @ 005617e0 */
      FUN_00474a40(uVar8,auStack_1d0,"BinForSize(bin_size) == BinFromIndex(b)",auStack_238);
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar8,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_005618ec;
    }
    if (lVar10 == 800) break;
    uVar1 = (uint)LZCOUNT((ulong)(0x200L << (uVar12 & 0x3f)) >> 8) ^ 0x3f;
    if (0x13 < uVar1) {
      uVar1 = 0x14;
    }
    if (uVar12 == uVar1) {
      uVar8 = FUN_00753a74(0x88);
                    /* try { // try from 00561724 to 0056172b has its CatchHandler @ 00561894 */
      FUN_00645c30(local_220);
                    /* try { // try from 0056172c to 0056174b has its CatchHandler @ 005617dc */
      FUN_0047488c(auStack_1d0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x4b,
                   "onnxruntime::BFCArena::BFCArena(std::unique_ptr<IAllocator>, size_t, ArenaExtendStrategy, int, int, int, int64_t)"
                   ,local_220);
      FUN_00476720(auStack_238);
                    /* try { // try from 00561758 to 0056179b has its CatchHandler @ 005617d8 */
      FUN_00474a40(uVar8,auStack_1d0,"BinForSize(bin_size * 2) != BinFromIndex(b)",auStack_238);
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar8,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_005618ec;
    }
    lVar10 = lVar10 + 0x28;
    uVar12 = uVar12 + 1;
  } while (lVar10 != 0x348);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_005618ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005618f0  FUN_005618f0 =====

void FUN_005618f0(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 0056193c  FUN_0056193c =====

void FUN_0056193c(undefined8 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  void *pvVar1;
  
  __ptr_00 = (void *)*param_1;
  if (__ptr_00 == (void *)0x0) {
    return;
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 == __ptr_00) {
    param_1[1] = __ptr_00;
    free(__ptr_00);
    return;
  }
  do {
    __ptr = *(void **)((long)pvVar1 + -8);
    *(undefined8 *)((long)pvVar1 + -8) = 0;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    pvVar1 = (void *)((long)pvVar1 + -0x28);
  } while (pvVar1 != __ptr_00);
  param_1[1] = __ptr_00;
  free((void *)*param_1);
  return;
}


// ===== 005619c4  FUN_005619c4 =====

void FUN_005619c4(long *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  puVar2 = (undefined8 *)param_1[0x74];
  puVar5 = (undefined8 *)param_1[0x75];
  *param_1 = (long)(PTR_DAT_007a26f8 + 0x10);
  for (; puVar2 != puVar5; puVar2 = puVar2 + 5) {
                    /* try { // try from 00561a08 to 00561a0b has its CatchHandler @ 00561bec */
    (**(code **)(*(long *)param_1[0x71] + 0x18))((long *)param_1[0x71],*puVar2);
  }
  plVar3 = param_1 + 0x87;
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
                    /* try { // try from 00561a34 to 00561a37 has its CatchHandler @ 00561bf0 */
    (**(code **)(*(long *)param_1[0x71] + 0x18))((long *)param_1[0x71],plVar3[2]);
  }
  FUN_00567a5c(param_1 + 8,param_1[9]);
  FUN_00567a5c(param_1 + 0xd,param_1[0xe]);
  FUN_00567a5c(param_1 + 0x12,param_1[0x13]);
  FUN_00567a5c(param_1 + 0x17,param_1[0x18]);
  FUN_00567a5c(param_1 + 0x1c,param_1[0x1d]);
  FUN_00567a5c(param_1 + 0x21,param_1[0x22]);
  FUN_00567a5c(param_1 + 0x26,param_1[0x27]);
  FUN_00567a5c(param_1 + 0x2b,param_1[0x2c]);
  FUN_00567a5c(param_1 + 0x30,param_1[0x31]);
  FUN_00567a5c(param_1 + 0x35,param_1[0x36]);
  FUN_00567a5c(param_1 + 0x3a,param_1[0x3b]);
  FUN_00567a5c(param_1 + 0x3f,param_1[0x40]);
  FUN_00567a5c(param_1 + 0x44,param_1[0x45]);
  FUN_00567a5c(param_1 + 0x49,param_1[0x4a]);
  FUN_00567a5c(param_1 + 0x4e,param_1[0x4f]);
  FUN_00567a5c(param_1 + 0x53,param_1[0x54]);
  FUN_00567a5c(param_1 + 0x58,param_1[0x59]);
  FUN_00567a5c(param_1 + 0x5d,param_1[0x5e]);
  FUN_00567a5c(param_1 + 0x62,param_1[99]);
  FUN_00567a5c(param_1 + 0x67,param_1[0x68]);
  FUN_00567a5c(param_1 + 0x6c,param_1[0x6d]);
  puVar2 = (undefined8 *)param_1[0x87];
  while (puVar2 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar2;
    free(puVar2);
    puVar2 = (undefined8 *)pvVar4;
  }
  pvVar4 = (void *)param_1[0x85];
  param_1[0x85] = 0;
  if (pvVar4 != (void *)0x0) {
    free(pvVar4);
  }
  pvVar4 = (void *)param_1[0x77];
  if (pvVar4 != (void *)0x0) {
    param_1[0x78] = (long)pvVar4;
    free(pvVar4);
  }
  pvVar4 = (void *)param_1[0x74];
  if (pvVar4 != (void *)0x0) {
    pvVar6 = (void *)param_1[0x75];
    pvVar1 = pvVar4;
    if (pvVar6 != pvVar4) {
      do {
        pvVar1 = *(void **)((long)pvVar6 + -8);
        *(undefined8 *)((long)pvVar6 + -8) = 0;
        if (pvVar1 != (void *)0x0) {
          free(pvVar1);
        }
        pvVar6 = (void *)((long)pvVar6 + -0x28);
      } while (pvVar6 != pvVar4);
      pvVar1 = (void *)param_1[0x74];
    }
    param_1[0x75] = (long)pvVar4;
    free(pvVar1);
  }
  plVar3 = (long *)param_1[0x71];
  param_1[0x71] = 0;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00561bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}


// ===== 00561bf4  FUN_00561bf4 =====

void FUN_00561bf4(void *param_1)

{
  FUN_005619c4();
  free(param_1);
  return;
}


// ===== 00561c18  FUN_00561c18 =====

long FUN_00561c18(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (*(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8) >> 3) * -0x71c71c71c71c71c7;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00561ca0 to 00561ca7 has its CatchHandler @ 00561d88 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00561ca8 to 00561cc7 has its CatchHandler @ 00561d78 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x5f,"BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                 auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 00561cd4 to 00561d1b has its CatchHandler @ 00561d1c */
    FUN_00474a40(uVar2,auStack_88,"h < chunks_.size()",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return *(long *)(param_1 + 0x3b8) + param_2 * 0x48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00561dac  FUN_00561dac =====

void FUN_00561dac(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  char *local_268 [2];
  void *local_258;
  byte local_248;
  void *local_238;
  byte *local_230;
  byte *local_228;
  ulong local_218;
  ulong local_210;
  undefined4 local_204;
  char *local_200 [3];
  char *local_1e8;
  byte local_1e0 [16];
  void *local_1d0;
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar10 = *(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x408) & 0xffffffffffffff00;
  local_218 = uVar10;
  local_210 = param_3;
  if (uVar10 < param_3) {
    local_268[0] = "Available memory of ";
    local_200[0] = " is smaller than requested bytes of ";
    FUN_004774b0(local_1e0,local_268,&local_218,local_200,&local_210);
                    /* try { // try from 00561e28 to 00561e3b has its CatchHandler @ 00562540 */
    FUN_0063aa48(param_1,2,1,local_1e0);
LAB_00561e3c:
    if ((local_1e0[0] & 1) != 0) {
      free(local_1d0);
    }
  }
  else {
    if (*(int *)(param_2 + 0x30) != 1) {
      if (*(int *)(param_2 + 0x30) != 0) {
        uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 00562338 to 0056233f has its CatchHandler @ 005623f4 */
        FUN_00645c30(local_268);
                    /* try { // try from 00562340 to 0056235f has its CatchHandler @ 005623e4 */
        FUN_0047488c(local_1e0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                     ,0xa3,
                     "auto onnxruntime::BFCArena::Extend(size_t)::(anonymous class)::operator()(const size_t) const"
                     ,local_268);
        local_204 = *(undefined4 *)(param_2 + 0x30);
        local_1e8 = "Incorrect arena extend strategy.";
        FUN_004a0638(local_200,&local_1e8,&local_204);
        FUN_004792b8(uVar6,local_1e0,local_200);
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 005623a4 to 005623bb has its CatchHandler @ 005623bc */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
        goto LAB_00562588;
      }
      uVar9 = *(ulong *)(param_2 + 0x380);
      if (uVar9 < param_3) {
        do {
          while ((long)uVar9 < 0) {
            FUN_00485180();
            uVar9 = 0;
            *(undefined8 *)(param_2 + 0x380) = 0;
            if (param_3 == 0) goto LAB_00561eb8;
          }
          uVar9 = uVar9 << 1;
          *(ulong *)(param_2 + 0x380) = uVar9;
        } while (uVar9 < param_3);
LAB_00561eb8:
        param_3 = uVar10;
        if (uVar9 <= uVar10) {
          param_3 = uVar9;
        }
        goto LAB_00561f04;
      }
      if (uVar9 <= uVar10) {
        uVar10 = uVar9;
      }
      if ((long)uVar9 < 0) {
        FUN_00485180();
        uVar9 = 0;
        uVar11 = *(ulong *)(param_2 + 0x460);
        if (-1 < (long)uVar11) goto LAB_00561ed4;
LAB_00561eec:
        if ((long)uVar11 < 0) {
          FUN_00485180();
        }
      }
      else {
        uVar9 = uVar9 << 1;
        uVar11 = *(ulong *)(param_2 + 0x460);
        if ((long)uVar11 < 0) goto LAB_00561eec;
LAB_00561ed4:
        if (uVar11 <= uVar9) goto LAB_00561eec;
        if (*(long *)(param_2 + 0x380) < 0) {
          FUN_00485180();
          uVar11 = 0;
        }
        else {
          uVar11 = *(long *)(param_2 + 0x380) << 1;
        }
      }
      *(ulong *)(param_2 + 0x380) = uVar11;
      param_3 = uVar10;
    }
LAB_00561f04:
                    /* try { // try from 00561f10 to 00561f17 has its CatchHandler @ 00562420 */
    uVar10 = (**(code **)(**(long **)(param_2 + 0x388) + 0x10))(*(long **)(param_2 + 0x388),param_3)
    ;
    while (uVar10 == 0) {
      param_3 = (long)((float)param_3 * 0.9) + 0xffU & 0xffffffffffffff00;
      if (param_3 < 0x2000 || param_3 < local_210) {
        local_268[0] = "Failed to allocate memory for requested buffer of size ";
        FUN_004fbd40(local_1e0,local_268,&local_210);
                    /* try { // try from 00562504 to 00562517 has its CatchHandler @ 0056253c */
        FUN_0063aa48(param_1,2,1,local_1e0);
        goto LAB_00561e3c;
      }
                    /* try { // try from 00562494 to 0056249b has its CatchHandler @ 005624a4 */
      uVar10 = (**(code **)(**(long **)(param_2 + 0x388) + 0x10))
                         (*(long **)(param_2 + 0x388),param_3);
    }
    lVar5 = FUN_00488994();
    if (*(int *)(lVar5 + 0x20) < 2) {
      uVar6 = FUN_00488994();
      uVar12 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_268,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0xce,"Extend");
                    /* try { // try from 00561f60 to 00561f7f has its CatchHandler @ 00562414 */
      FUN_0048a554(local_1e0,uVar6,1,uVar12,0,local_268);
                    /* try { // try from 00561f80 to 00561fab has its CatchHandler @ 00562558 */
      uVar6 = FUN_00303e0c(auStack_170,"Extended allocation by ",0x17);
      uVar6 = FUN_007176ec(uVar6,param_3);
      FUN_00303e0c(uVar6," bytes.",7);
      FUN_00637fac(local_1e0);
      pbVar3 = local_230;
      if (local_230 != (byte *)0x0) {
        while (pbVar13 = local_228, pbVar13 != pbVar3) {
          local_228 = pbVar13 + -0x18;
          if ((*local_228 & 1) != 0) {
            free(*(void **)(pbVar13 + -8));
          }
        }
        local_228 = pbVar3;
        free(local_230);
      }
      if ((local_248 & 1) != 0) {
        free(local_238);
      }
      if (((ulong)local_268[0] & 1) != 0) {
        free(local_258);
      }
    }
    *(ulong *)(param_2 + 0x408) = *(long *)(param_2 + 0x408) + param_3;
    lVar5 = FUN_00488994();
    if (*(int *)(lVar5 + 0x20) < 2) {
      uVar6 = FUN_00488994();
      uVar12 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_268,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0xd1,"Extend");
                    /* try { // try from 0056206c to 0056208b has its CatchHandler @ 0056240c */
      FUN_0048a554(local_1e0,uVar6,1,uVar12,0,local_268);
                    /* try { // try from 0056208c to 005620a7 has its CatchHandler @ 0056241c */
      uVar6 = FUN_00303e0c(auStack_170,"Total allocated bytes: ",0x17);
      FUN_0071755c(uVar6,*(undefined8 *)(param_2 + 0x408));
      FUN_00637fac(local_1e0);
      pbVar3 = local_230;
      pbVar13 = local_228;
      if (local_230 != (byte *)0x0) {
        while (pbVar2 = pbVar13, pbVar2 != pbVar3) {
          pbVar13 = pbVar2 + -0x18;
          if ((*pbVar13 & 1) != 0) {
            free(*(void **)(pbVar2 + -8));
          }
        }
        local_228 = pbVar3;
        free(local_230);
      }
      if ((local_248 & 1) != 0) {
        free(local_238);
      }
      if (((ulong)local_268[0] & 1) != 0) {
        free(local_258);
      }
    }
    lVar5 = FUN_00488994();
    if (*(int *)(lVar5 + 0x20) < 2) {
      uVar6 = FUN_00488994();
      uVar12 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_268,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0xd4,"Extend");
                    /* try { // try from 0056215c to 0056217b has its CatchHandler @ 00562404 */
      FUN_0048a554(local_1e0,uVar6,1,uVar12,0,local_268);
                    /* try { // try from 0056217c to 005621af has its CatchHandler @ 0056255c */
      uVar6 = FUN_00303e0c(auStack_170,"Allocated memory at ",0x14);
      uVar6 = FUN_00717a0c(uVar6,uVar10);
      uVar6 = FUN_00303e0c(uVar6,&DAT_001e1e07,4);
      FUN_00717a0c(uVar6,uVar10 + param_3);
      FUN_00637fac(local_1e0);
      pbVar3 = local_230;
      pbVar13 = local_228;
      if (local_230 != (byte *)0x0) {
        while (pbVar2 = pbVar13, pbVar2 != pbVar3) {
          pbVar13 = pbVar2 + -0x18;
          if ((*pbVar13 & 1) != 0) {
            free(*(void **)(pbVar2 + -8));
          }
        }
        local_228 = pbVar3;
        free(local_230);
      }
      if ((local_248 & 1) != 0) {
        free(local_238);
      }
      if (((ulong)local_268[0] & 1) != 0) {
        free(local_258);
      }
    }
    FUN_0056258c(param_2 + 0x3a0,uVar10,param_3,*(undefined8 *)(param_2 + 0x3f0));
    lVar5 = *(long *)(param_2 + 0x3d0);
    *(long *)(param_2 + 0x3f0) = *(long *)(param_2 + 0x3f0) + 1;
    if (lVar5 == -1) {
      lVar5 = *(long *)(param_2 + 0x3c0) - *(long *)(param_2 + 0x3b8);
      if (lVar5 == -0x48) {
        lVar5 = -1;
        *(long *)(param_2 + 0x3c0) = *(long *)(param_2 + 0x3b8);
      }
      else {
        lVar5 = (lVar5 >> 3) * -0x71c71c71c71c71c7;
        FUN_00568dc0(param_2 + 0x3b8,1);
      }
    }
    else {
      lVar7 = FUN_00561c18(param_2,lVar5);
      *(undefined8 *)(param_2 + 0x3d0) = *(undefined8 *)(lVar7 + 0x28);
    }
    puVar8 = (ulong *)FUN_00561c18(param_2,lVar5);
    *puVar8 = param_3;
    puVar8[2] = 0xffffffffffffffff;
    puVar8[3] = uVar10;
    puVar8[4] = 0xffffffffffffffff;
    puVar8[5] = 0xffffffffffffffff;
    puVar8[7] = 0;
    lVar7 = FUN_005686fc(param_2 + 0x3a0,uVar10);
    iVar4 = FUN_005688d8(lVar7,uVar10);
    *(long *)(*(long *)(lVar7 + 0x20) + (long)iVar4 * 8) = lVar5;
    FUN_00562680(param_2,lVar5);
    *param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00562588:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056258c  FUN_0056258c =====

void FUN_0056258c(long *param_1,ulong param_2)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [32];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  lVar5 = param_1[1] - lVar2;
  lVar6 = param_1[1];
  if (lVar5 != 0) {
    uVar3 = (lVar5 >> 3) * -0x3333333333333333;
    do {
      uVar4 = uVar3 >> 1;
      lVar5 = lVar2 + uVar4 * 0x28;
      if (*(ulong *)(lVar5 + 0x10) <= param_2) {
        lVar2 = lVar5 + 0x28;
        uVar4 = uVar3 + ~uVar4;
      }
      uVar3 = uVar4;
      lVar6 = lVar2;
    } while (uVar3 != 0);
  }
  FUN_005680b4(auStack_60);
                    /* try { // try from 0056260c to 0056261b has its CatchHandler @ 00562650 */
  FUN_00567dcc(param_1,lVar6,auStack_60);
  __ptr = local_40;
  local_40 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00562680  FUN_00562680 =====

void FUN_00562680(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90 [10];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_2;
  puVar3 = (ulong *)FUN_00561c18();
  if ((puVar3[2] == 0xffffffffffffffff) && ((int)puVar3[6] == -1)) {
    uVar7 = *puVar3;
    if (uVar7 < 0x101) {
      uVar7 = 0x100;
    }
    uVar1 = (uint)LZCOUNT(uVar7 >> 8) ^ 0x3f;
    if (0x13 < uVar1) {
      uVar1 = 0x14;
    }
    *(uint *)(puVar3 + 6) = uVar1;
    param_1 = param_1 + (ulong)(uVar1 * 0x28);
    plVar4 = (long *)FUN_00569700(param_1 + 0x40,local_90,&local_40);
    if (*plVar4 == 0) {
      puVar5 = (undefined8 *)FUN_00759c3c(0x28);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[4] = local_40;
      puVar5[2] = local_90[0];
      *plVar4 = (long)puVar5;
      if (**(long **)(param_1 + 0x40) != 0) {
        *(long *)(param_1 + 0x40) = **(long **)(param_1 + 0x40);
        puVar5 = (undefined8 *)*plVar4;
      }
      FUN_00328410(*(undefined8 *)(param_1 + 0x48),puVar5);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x88);
                    /* try { // try from 0056279c to 005627a3 has its CatchHandler @ 00562884 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 005627a4 to 005627c3 has its CatchHandler @ 00562874 */
    FUN_0047488c(local_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x273,"void onnxruntime::BFCArena::InsertFreeChunkIntoBin(BFCArena::ChunkHandle)",
                 auStack_a8);
    FUN_00476720(auStack_c0);
                    /* try { // try from 005627d0 to 00562817 has its CatchHandler @ 00562818 */
    FUN_00474a40(uVar6,local_90,"!c->in_use() && (c->bin_num == kInvalidBinNum)",auStack_c0);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005628a8  FUN_005628a8 =====

void FUN_005628a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_60 [32];
  undefined8 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  FUN_00562900(param_1,param_2,0,0,0,auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00562900  FUN_00562900 =====

undefined8
FUN_00562900(long param_1,long param_2,ulong param_3,long param_4,uint param_5,long *param_6)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  void *__ptr;
  long lVar4;
  size_t sVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  char *__s;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  void *local_2a8;
  ulong local_2a0;
  char *local_298 [2];
  void *local_288;
  byte local_278;
  void *local_268;
  byte *local_260;
  byte *local_258;
  byte local_248 [16];
  void *local_238;
  undefined1 auStack_1d8 [264];
  long local_d0 [4];
  long *local_b0;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
    lVar4 = FUN_00488994();
    if (*(int *)(lVar4 + 0x20) < 1) {
      uVar10 = FUN_00488994();
      uVar12 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_298,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x13d,"AllocateRawInternal");
                    /* try { // try from 005629e4 to 00562a03 has its CatchHandler @ 00562fd0 */
      FUN_0048a554(local_248,uVar10,0,uVar12,0,local_298);
                    /* try { // try from 00562a04 to 00562a17 has its CatchHandler @ 00562fc0 */
      FUN_00303e0c(auStack_1d8,"tried to allocate 0 bytes",0x19);
      FUN_00637fac(local_248);
      pbVar7 = local_260;
      if (local_260 != (byte *)0x0) {
        while (pbVar3 = local_258, pbVar3 != pbVar7) {
          local_258 = pbVar3 + -0x18;
          if ((*local_258 & 1) != 0) {
            free(*(void **)(pbVar3 + -8));
          }
        }
        local_258 = pbVar7;
        free(local_260);
      }
      if ((local_278 & 1) != 0) {
        free(local_268);
      }
      if (((ulong)local_298[0] & 1) != 0) {
        free(local_288);
      }
    }
    uVar10 = 0;
  }
  else {
    uVar11 = param_2 + 0xffU & 0xffffffffffffff00;
    uVar1 = uVar11;
    if (uVar11 < 0x101) {
      uVar1 = 0x100;
    }
    uVar9 = (uint)LZCOUNT(uVar1 >> 8) ^ 0x3f;
    if (0x13 < uVar9) {
      uVar9 = 0x14;
    }
    local_2a0 = uVar11;
    FUN_007073d8(param_1 + 0x390);
    local_80 = (long *)param_6[4];
    if (local_80 != (long *)0x0) {
      if (local_80 == param_6) {
        local_80 = local_a0;
                    /* try { // try from 00562a70 to 00562a7b has its CatchHandler @ 00563060 */
        (**(code **)(*param_6 + 0x18))(param_6,local_a0);
      }
      else {
                    /* try { // try from 00562998 to 0056299b has its CatchHandler @ 00563060 */
        local_80 = (long *)(**(code **)(*local_80 + 0x10))();
      }
    }
                    /* try { // try from 00562a7c to 00562a9f has its CatchHandler @ 00563028 */
    lVar4 = FUN_005633f4(param_1,uVar9,uVar11,param_2,param_4,param_5 & 1,local_a0);
    if (local_80 == local_a0) {
      lVar8 = 0x20;
      plVar6 = local_a0;
LAB_00562ac4:
      (**(code **)(*plVar6 + lVar8))();
    }
    else if (local_80 != (long *)0x0) {
      lVar8 = 0x28;
      plVar6 = local_80;
      goto LAB_00562ac4;
    }
    if (lVar4 == 0) {
                    /* try { // try from 00562af4 to 00562af7 has its CatchHandler @ 00563060 */
      lVar4 = FUN_00488994();
      if (*(int *)(lVar4 + 0x20) < 2) {
                    /* try { // try from 00562b04 to 00562b07 has its CatchHandler @ 00562fbc */
        uVar10 = FUN_00488994();
        uVar12 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00562b18 to 00562b33 has its CatchHandler @ 00562fb8 */
        FUN_0048a3f4(local_298,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                     ,0x15b,"AllocateRawInternal");
                    /* try { // try from 00562b34 to 00562b53 has its CatchHandler @ 00562fb0 */
        FUN_0048a554(local_248,uVar10,1,uVar12,0,local_298);
                    /* try { // try from 00562b54 to 00562bd3 has its CatchHandler @ 00563068 */
        uVar10 = FUN_00303e0c(auStack_1d8,"Extending BFCArena for ",0x17);
        __s = *(char **)(*(long *)(param_1 + 0x388) + 8);
        sVar5 = strlen(__s);
        uVar10 = FUN_00303e0c(uVar10,__s,sVar5);
        uVar10 = FUN_00303e0c(uVar10,". bin_num:",10);
        uVar10 = FUN_00717214(uVar10,uVar9);
        uVar10 = FUN_00303e0c(uVar10," (requested) num_bytes: ",0x18);
        uVar10 = FUN_007176ec(uVar10,param_2);
        uVar10 = FUN_00303e0c(uVar10," (actual) rounded_bytes:",0x18);
        FUN_007176ec(uVar10,local_2a0);
        FUN_00637fac(local_248);
        pbVar7 = local_260;
        if (local_260 != (byte *)0x0) {
          while (pbVar3 = local_258, pbVar3 != pbVar7) {
            local_258 = pbVar3 + -0x18;
            if ((*local_258 & 1) != 0) {
              free(*(void **)(pbVar3 + -8));
            }
          }
          local_258 = pbVar7;
          free(local_260);
        }
        if ((local_278 & 1) != 0) {
          free(local_268);
        }
        if (((ulong)local_298[0] & 1) != 0) {
          free(local_288);
        }
      }
                    /* try { // try from 00562c80 to 00562c8b has its CatchHandler @ 00563020 */
      FUN_00561dac(&local_2a8,param_1,local_2a0);
      if (local_2a8 == (void *)0x0) {
        local_b0 = (long *)0x0;
                    /* try { // try from 00562c9c to 00562cbb has its CatchHandler @ 00562fe0 */
        lVar4 = FUN_005633f4(param_1,uVar9,local_2a0,param_2,param_4,0,local_d0);
        if (local_b0 == local_d0) {
          lVar8 = 0x20;
          plVar6 = local_d0;
LAB_00562ce0:
          (**(code **)(*plVar6 + lVar8))();
        }
        else if (local_b0 != (long *)0x0) {
          lVar8 = 0x28;
          plVar6 = local_b0;
          goto LAB_00562ce0;
        }
        __ptr = local_2a8;
        if (lVar4 != 0) {
          if ((param_4 != 0) && (*(long *)(lVar4 + 0x38) == 0)) {
            *(long *)(lVar4 + 0x38) = param_4;
          }
          uVar10 = *(undefined8 *)(lVar4 + 0x18);
          local_2a8 = (void *)0x0;
          if (__ptr != (void *)0x0) {
            if ((*(byte *)((long)__ptr + 8) & 1) != 0) {
              free(*(void **)((long)__ptr + 0x18));
            }
            free(__ptr);
          }
          goto LAB_00562d28;
        }
        local_298[0] = "Failed to find a free memory block despite calling Extend. rounded_bytes=";
        FUN_004fbd40(local_248,local_298,&local_2a0);
                    /* try { // try from 00562d80 to 00562d93 has its CatchHandler @ 00562f98 */
        FUN_0063aa48(&local_2c0,2,1,local_248);
        FUN_0048f330(&local_2a8,&local_2c0);
        FUN_00474684(&local_2c0);
        if ((local_248[0] & 1) != 0) {
          free(local_238);
        }
      }
      if ((param_3 & 1) != 0) {
                    /* try { // try from 00562dbc to 00562dd7 has its CatchHandler @ 00562f90 */
        lVar4 = FUN_00488994();
        if (*(int *)(lVar4 + 0x20) < 4) {
                    /* try { // try from 00562e30 to 00562e33 has its CatchHandler @ 00562f38 */
          uVar10 = FUN_00488994();
          uVar12 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00562e44 to 00562e5f has its CatchHandler @ 00562f24 */
          FUN_0048a3f4(local_298,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                       ,0x173,"AllocateRawInternal");
                    /* try { // try from 00562e60 to 00562e7f has its CatchHandler @ 00562f14 */
          FUN_0048a554(local_248,uVar10,3,uVar12,0,local_298);
                    /* try { // try from 00562e80 to 00562eab has its CatchHandler @ 00562f04 */
          uVar10 = FUN_00303e0c(auStack_1d8,"BFC Arena ran out of memory trying to allocate ",0x2f);
          uVar10 = FUN_007176ec(uVar10,param_2);
          FUN_00303e0c(uVar10,".  Current allocation summary follows.",0x26);
          FUN_00637fac(local_248);
          FUN_00474ee8(local_298);
        }
        FUN_00563b2c(param_1,local_2a0);
      }
      uVar10 = FUN_00753a74(0x88);
                    /* try { // try from 00562de4 to 00562deb has its CatchHandler @ 00562f80 */
      FUN_00645c30(local_298);
                    /* try { // try from 00562dec to 00562e0b has its CatchHandler @ 00562f70 */
      FUN_0047488c(local_248,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x178,
                   "void *onnxruntime::BFCArena::AllocateRawInternal(size_t, bool, Stream *, bool, WaitNotificationFn)"
                   ,local_298);
      pbVar7 = (byte *)FUN_0063afd8(&local_2a8);
      if ((*pbVar7 & 1) == 0) {
        local_2b0 = *(undefined8 *)(pbVar7 + 0x10);
        uStack_2b8 = *(undefined8 *)(pbVar7 + 8);
        local_2c0 = *(undefined8 *)pbVar7;
      }
      else {
                    /* try { // try from 00562ec4 to 00562ecb has its CatchHandler @ 00562f2c */
        FUN_002fb36c(&local_2c0,*(undefined8 *)(pbVar7 + 0x10),*(undefined8 *)(pbVar7 + 8));
      }
      FUN_004792b8(uVar10,local_248,&local_2c0);
      if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00562eec to 00562f03 has its CatchHandler @ 00562f40 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar10,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0056309c;
    }
    if ((*(long *)(lVar4 + 0x38) == 0) && (*(long *)(lVar4 + 0x38) = param_4, param_4 != 0)) {
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_4 + 0x18);
    }
    uVar10 = *(undefined8 *)(lVar4 + 0x18);
LAB_00562d28:
                    /* try { // try from 00562d28 to 00562d2f has its CatchHandler @ 00563024 */
    FUN_00707c00(param_1 + 0x390);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar10;
  }
LAB_0056309c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005630a4  FUN_005630a4 =====

ulong FUN_005630a4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *__s;
  undefined1 auStack_230 [24];
  ulong local_218;
  byte local_210 [16];
  void *local_200;
  byte local_1f0;
  void *local_1e0;
  byte *local_1d8;
  byte *local_1d0;
  ulong local_1c0;
  ulong uStack_1b8;
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar9 = param_2;
  if (param_2 != 0) {
    FUN_007073d8(param_1 + 0x390);
                    /* try { // try from 005630dc to 005630df has its CatchHandler @ 005633b0 */
    lVar6 = FUN_00488994();
    if (*(int *)(lVar6 + 0x20) < 2) {
                    /* try { // try from 005630ec to 005630ef has its CatchHandler @ 0056339c */
      uVar7 = FUN_00488994();
      uVar10 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00563100 to 0056311b has its CatchHandler @ 00563398 */
      FUN_0048a3f4(local_210,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x119,"Reserve");
                    /* try { // try from 0056311c to 0056313b has its CatchHandler @ 00563390 */
      FUN_0048a554(&local_1c0,uVar7,1,uVar10,0,local_210);
                    /* try { // try from 0056313c to 0056318b has its CatchHandler @ 005633b8 */
      uVar7 = FUN_00303e0c(auStack_150,"Reserving memory in BFCArena for ",0x21);
      __s = *(char **)(*(long *)(param_1 + 0x388) + 8);
      sVar8 = strlen(__s);
      uVar7 = FUN_00303e0c(uVar7,__s,sVar8);
      uVar7 = FUN_00303e0c(uVar7," size: ",7);
      FUN_007176ec(uVar7,param_2);
      FUN_00637fac(&local_1c0);
      pbVar5 = local_1d8;
      if (local_1d8 != (byte *)0x0) {
        while (pbVar4 = local_1d0, pbVar4 != pbVar5) {
          local_1d0 = pbVar4 + -0x18;
          if ((*local_1d0 & 1) != 0) {
            free(*(void **)(pbVar4 + -8));
          }
        }
        local_1d0 = pbVar5;
        free(local_1d8);
      }
      if ((local_1f0 & 1) != 0) {
        free(local_1e0);
      }
      if ((local_210[0] & 1) != 0) {
        free(local_200);
      }
    }
                    /* try { // try from 0056320c to 00563213 has its CatchHandler @ 005633ac */
    local_218 = (**(code **)(**(long **)(param_1 + 0x388) + 0x10))
                          (*(long **)(param_1 + 0x388),param_2);
                    /* try { // try from 00563218 to 00563223 has its CatchHandler @ 005633a8 */
    lVar6 = FUN_00568f88(param_1 + 0x428,&local_218);
    if (lVar6 != 0) {
      uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 005632cc to 005632d3 has its CatchHandler @ 00563380 */
      FUN_00645c30(local_210);
                    /* try { // try from 005632d4 to 005632f3 has its CatchHandler @ 00563370 */
      FUN_0047488c(&local_1c0,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x11c,"virtual void *onnxruntime::BFCArena::Reserve(size_t)",local_210);
      FUN_00476720(auStack_230);
                    /* try { // try from 00563300 to 00563343 has its CatchHandler @ 00563344 */
      FUN_00474a40(uVar7,&local_1c0,"reserved_chunks_.find(ptr) == reserved_chunks_.end()",
                   auStack_230);
      if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_005633ec;
    }
    local_1c0 = local_218;
                    /* try { // try from 00563230 to 0056323f has its CatchHandler @ 005633a4 */
    uStack_1b8 = param_2;
    FUN_00569098(param_1 + 0x428,&local_1c0,&local_1c0);
    uVar9 = local_218;
    lVar6 = *(long *)(param_1 + 0x400) + param_2;
    uVar1 = *(ulong *)(param_1 + 0x418);
    if (*(ulong *)(param_1 + 0x418) <= param_2) {
      uVar1 = param_2;
    }
    *(ulong *)(param_1 + 0x418) = uVar1;
    *(ulong *)(param_1 + 0x408) = *(long *)(param_1 + 0x408) + param_2;
    *(long *)(param_1 + 0x400) = lVar6;
    *(long *)(param_1 + 1000) = *(long *)(param_1 + 1000) + 1;
    *(long *)(param_1 + 0x3e0) = *(long *)(param_1 + 0x3e0) + 1;
    lVar2 = *(long *)(param_1 + 0x410);
    if (*(long *)(param_1 + 0x410) <= lVar6) {
      lVar2 = lVar6;
    }
    *(long *)(param_1 + 0x410) = lVar2;
                    /* try { // try from 0056328c to 00563293 has its CatchHandler @ 005633a0 */
    FUN_00707c00(param_1 + 0x390);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar9;
  }
LAB_005633ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005633f4  FUN_005633f4 =====

ulong * FUN_005633f4(long *param_1,int param_2,ulong param_3,ulong param_4,ulong param_5,
                    byte param_6,long *param_7)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  long local_140;
  long *local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  ulong local_f0 [10];
  long local_a0 [4];
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (param_2 < 0x15) {
    if (param_5 == 0) {
      lVar4 = param_1[0x77];
      lVar13 = (long)param_2;
      uVar6 = (param_1[0x78] - lVar4 >> 3) * -0x71c71c71c71c71c7;
      uVar10 = local_f0[0];
      if ((param_6 & 1) == 0) {
        do {
          local_140 = lVar13 * 0x28;
          plVar8 = (long *)param_1[lVar13 * 5 + 8];
          while (plVar8 != param_1 + lVar13 * 5 + 9) {
            uVar7 = plVar8[4];
            if (uVar6 < uVar7 || uVar6 - uVar7 == 0) goto LAB_00563964;
            puVar11 = (ulong *)(lVar4 + uVar7 * 0x48);
            if (puVar11[2] != 0xffffffffffffffff) goto LAB_005638dc;
            if ((param_3 <= *puVar11) && (puVar11[7] == 0)) goto LAB_005636f8;
            plVar2 = (long *)plVar8[1];
            plVar9 = plVar8;
            if ((long *)plVar8[1] == (long *)0x0) {
              do {
                plVar8 = (long *)plVar9[2];
                bVar3 = (long *)*plVar8 != plVar9;
                plVar9 = plVar8;
              } while (bVar3);
            }
            else {
              do {
                plVar8 = plVar2;
                plVar2 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
          }
          lVar13 = lVar13 + 1;
          puVar11 = (ulong *)0x0;
        } while ((int)lVar13 != 0x15);
        goto LAB_005637d4;
      }
      puVar11 = (ulong *)0x0;
      do {
        local_140 = lVar13 * 0x28;
        plVar8 = (long *)param_1[lVar13 * 5 + 8];
        while (plVar8 != param_1 + lVar13 * 5 + 9) {
          uVar7 = plVar8[4];
          if (uVar6 < uVar7 || uVar6 - uVar7 == 0) goto LAB_00563964;
          puVar14 = (ulong *)(lVar4 + uVar7 * 0x48);
          if (puVar14[2] != 0xffffffffffffffff) goto LAB_005638dc;
          puVar12 = puVar11;
          if (param_3 <= *puVar14) {
            if (puVar14[7] == 0) goto LAB_005636f8;
            puVar12 = puVar14;
            if (puVar11 != (ulong *)0x0) {
              puVar12 = puVar11;
            }
          }
          plVar2 = (long *)plVar8[1];
          plVar9 = plVar8;
          puVar11 = puVar12;
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar9[2];
              bVar3 = (long *)*plVar8 != plVar9;
              plVar9 = plVar8;
            } while (bVar3);
          }
          else {
            do {
              plVar8 = plVar2;
              plVar2 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
        }
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 != 0x15);
    }
    else {
      lVar13 = (long)param_2;
      puVar11 = (ulong *)0x0;
      do {
        local_140 = lVar13 * 0x28;
        plVar8 = (long *)param_1[lVar13 * 5 + 8];
        uVar10 = local_f0[0];
        while (local_f0[0] = uVar10, plVar8 != param_1 + lVar13 * 5 + 9) {
          uVar7 = (param_1[0x78] - param_1[0x77] >> 3) * -0x71c71c71c71c71c7;
          uVar6 = plVar8[4];
          if (uVar7 < uVar6 || uVar7 - uVar6 == 0) goto LAB_00563964;
          puVar14 = (ulong *)(param_1[0x77] + uVar6 * 0x48);
          if (puVar14[2] != 0xffffffffffffffff) goto LAB_005638dc;
          puVar12 = puVar11;
          if (param_3 <= *puVar14) {
            local_f0[0] = puVar14[7];
            if (local_f0[0] == param_5 || local_f0[0] == 0) goto LAB_005636f8;
            uVar6 = puVar14[8];
            lVar4 = FUN_00568af8(param_5 + 0x20,local_f0);
            if ((lVar4 != 0) && (uVar10 = local_f0[0], uVar6 < *(ulong *)(lVar4 + 0x18)))
            goto LAB_005636f8;
            puVar12 = puVar14;
            if ((param_6 & puVar11 == (ulong *)0x0) == 0) {
              puVar12 = puVar11;
            }
          }
          plVar2 = (long *)plVar8[1];
          plVar9 = plVar8;
          uVar10 = local_f0[0];
          puVar11 = puVar12;
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar9[2];
              bVar3 = (long *)*plVar8 != plVar9;
              plVar9 = plVar8;
            } while (bVar3);
          }
          else {
            do {
              plVar8 = plVar2;
              plVar2 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
        }
        lVar13 = lVar13 + 1;
      } while ((int)lVar13 != 0x15);
    }
    if (puVar11 != (ulong *)0x0) {
      uVar10 = puVar11[7];
      plVar8 = (long *)param_7[4];
      if (plVar8 == (long *)0x0) {
        local_80 = (long *)0x0;
      }
      else if (plVar8 == param_7) {
        local_80 = local_a0;
        (**(code **)(*param_7 + 0x18))(param_7,local_a0);
      }
      else {
        local_80 = (long *)(**(code **)(*plVar8 + 0x10))();
      }
                    /* try { // try from 00563874 to 0056388b has its CatchHandler @ 00563a74 */
      (**(code **)(*param_1 + 0x30))(param_1,uVar10,param_5,local_a0);
      if (local_80 == local_a0) {
        lVar13 = 0x20;
        plVar8 = local_a0;
LAB_005638b4:
        (**(code **)(*plVar8 + lVar13))();
      }
      else if (local_80 != (long *)0x0) {
        lVar13 = 0x28;
        plVar8 = local_80;
        goto LAB_005638b4;
      }
      uVar10 = param_1[0x7b];
      param_1[0x7b] = uVar10 + 1;
      puVar11[2] = uVar10;
      *(undefined4 *)(puVar11 + 6) = 0xffffffff;
    }
  }
  else {
    puVar11 = (ulong *)0x0;
  }
  goto LAB_005637d4;
LAB_00563964:
  uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00563970 to 00563977 has its CatchHandler @ 00563afc */
  FUN_00645c30(auStack_108);
                    /* try { // try from 00563978 to 00563997 has its CatchHandler @ 00563abc */
  FUN_0047488c(local_f0,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
               ,0x5f,"BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
               auStack_108);
  FUN_00476720(auStack_120);
                    /* try { // try from 005639a4 to 005639eb has its CatchHandler @ 00563ab8 */
  FUN_00474a40(uVar5,local_f0,"h < chunks_.size()",auStack_120);
  if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
  goto LAB_00563b28;
LAB_005638dc:
  uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 005638e8 to 005638ef has its CatchHandler @ 00563b00 */
  FUN_00645c30(auStack_108);
                    /* try { // try from 005638f0 to 0056390f has its CatchHandler @ 00563aec */
  FUN_0047488c(local_f0,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
               ,0x1ad,
               "BFCArena::Chunk *onnxruntime::BFCArena::FindChunkPtr(BinNum, size_t, size_t, Stream *, bool, WaitNotificationFn)"
               ,auStack_108);
  FUN_00476720(auStack_120);
                    /* try { // try from 0056391c to 00563963 has its CatchHandler @ 00563ac0 */
  FUN_00474a40(uVar5,local_f0,"!chunk->in_use()",auStack_120);
  if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
  }
  goto LAB_00563b28;
LAB_005636f8:
  local_f0[0] = uVar10;
  uVar6 = plVar8[4];
  local_128 = plVar8;
  FUN_0056529c(param_1,(long)param_1 + local_140 + 0x40,&local_128);
  uVar10 = (param_1[0x78] - param_1[0x77] >> 3) * -0x71c71c71c71c71c7;
  if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 005639f8 to 005639ff has its CatchHandler @ 00563ab4 */
    FUN_00645c30(auStack_108);
                    /* try { // try from 00563a00 to 00563a1f has its CatchHandler @ 00563ab0 */
    FUN_0047488c(local_f0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x5f,"BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                 auStack_108);
    FUN_00476720(auStack_120);
                    /* try { // try from 00563a2c to 00563a73 has its CatchHandler @ 00563aac */
    FUN_00474a40(uVar5,local_f0,"h < chunks_.size()",auStack_120);
    if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_00563b28;
  }
  puVar11 = (ulong *)(param_1[0x77] + uVar6 * 0x48);
  uVar10 = *puVar11;
  if ((param_3 << 1 <= uVar10) ||
     ((long)*(int *)((long)param_1 + 0x454) <= (long)(uVar10 - param_3))) {
    FUN_00565484(param_1,uVar6,param_3);
    puVar11 = (ulong *)FUN_00561c18(param_1,uVar6);
    uVar10 = *puVar11;
  }
  puVar11[1] = param_4;
  lVar15 = param_1[0x7c];
  uVar6 = param_1[0x7b];
  puVar11[2] = uVar6;
  lVar13 = param_1[0x80] + uVar10;
  param_1[0x80] = lVar13;
  lVar4 = param_1[0x82];
  if (param_1[0x82] <= lVar13) {
    lVar4 = lVar13;
  }
  param_1[0x7c] = lVar15 + 1;
  param_1[0x7b] = uVar6 + 1;
  uVar6 = param_1[0x83];
  if (param_1[0x83] <= (long)uVar10) {
    uVar6 = uVar10;
  }
  param_1[0x82] = lVar4;
  param_1[0x83] = uVar6;
LAB_005637d4:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return puVar11;
  }
LAB_00563b28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00563b2c  FUN_00563b2c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00563b2c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined5 uVar9;
  undefined5 uVar10;
  undefined3 uVar11;
  undefined5 uVar12;
  undefined5 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte *pbVar18;
  bool bVar19;
  int iVar20;
  long lVar21;
  undefined8 uVar22;
  size_t sVar23;
  long lVar24;
  long *******ppppppplVar25;
  char *__ptr;
  ulong uVar26;
  long *******ppppppplVar27;
  undefined8 *puVar28;
  ulong uVar29;
  long *******ppppppplVar30;
  long ******pppppplVar31;
  long ******pppppplVar32;
  long *****ppppplVar33;
  undefined8 uVar34;
  byte *pbVar35;
  undefined8 uVar36;
  char *pcVar37;
  undefined8 *puVar38;
  long *******ppppppplVar39;
  long lVar40;
  long lVar41;
  long *******ppppppplVar42;
  long lVar43;
  undefined8 uVar44;
  long ******pppppplVar45;
  undefined8 *puVar46;
  undefined8 *puVar47;
  long *******local_5b8;
  long *******local_5b0;
  long local_5a8;
  ulong local_5a0;
  undefined8 uStack_598;
  char *local_590;
  undefined4 local_588;
  byte local_580;
  char acStack_57f [5];
  undefined2 uStack_57a;
  char cStack_578;
  char acStack_577 [5];
  undefined1 uStack_572;
  undefined1 uStack_571;
  void *local_570;
  byte *local_568;
  byte *local_560;
  undefined8 uStack_558;
  byte local_548;
  undefined1 auStack_547 [7];
  ulong local_540;
  undefined1 *local_538;
  long local_530;
  undefined4 local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined1 auStack_510 [24];
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  void *local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined *local_4c0 [9];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined *local_450;
  undefined8 uStack_438;
  undefined4 auStack_430 [4];
  undefined8 local_420;
  long local_3b8 [105];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  FUN_00566e64(local_3b8);
  lVar21 = FUN_00488994();
  if (*(int *)(lVar21 + 0x20) < 2) {
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x2e5,"DumpMemoryLog");
                    /* try { // try from 00563bac to 00563bcb has its CatchHandler @ 00565024 */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00563bcc to 00563c07 has its CatchHandler @ 00565038 */
    uVar22 = FUN_00303e0c(local_4c0,"Allocator:",10);
    pcVar37 = *(char **)(*(long *)(param_1 + 0x388) + 8);
    sVar23 = strlen(pcVar37);
    FUN_00303e0c(uVar22,pcVar37,sVar23);
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    if (local_568 != (byte *)0x0) {
      while (pbVar35 = local_560, pbVar35 != pbVar18) {
        local_560 = pbVar35 + -0x18;
        if ((*local_560 & 1) != 0) {
          free(*(void **)(pbVar35 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
  lVar21 = FUN_00488994();
  if (*(int *)(lVar21 + 0x20) < 2) {
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x2e6,"DumpMemoryLog");
                    /* try { // try from 00563cbc to 00563cdb has its CatchHandler @ 0056501c */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00563cdc to 00563cef has its CatchHandler @ 00565018 */
    FUN_00303e0c(local_4c0,
                 "Bin size: Chunks in_use/total (if not zero). Allocated bytes in_use/total. Requested bytes."
                 ,0x5b);
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    pbVar35 = local_560;
    if (local_568 != (byte *)0x0) {
      while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
        pbVar35 = pbVar8 + -0x18;
        if ((*pbVar35 & 1) != 0) {
          free(*(void **)(pbVar8 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
  lVar21 = 0;
  lVar40 = 0;
  do {
    puVar28 = (undefined8 *)(param_1 + 0x38 + lVar21 * 0x28);
    lVar41 = local_3b8[lVar21 * 5 + 3];
    lVar43 = local_3b8[lVar21 * 5 + 4];
    if (puVar28[3] != lVar43 - lVar41) {
      uVar22 = FUN_00753a74(0x88);
                    /* try { // try from 00564f2c to 00564f33 has its CatchHandler @ 005650f0 */
      FUN_00645c30(&local_5a0);
                    /* try { // try from 00564f34 to 00564f53 has its CatchHandler @ 005650a0 */
      FUN_0047488c(&local_530,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x2ed,"void onnxruntime::BFCArena::DumpMemoryLog(size_t)",&local_5a0);
      FUN_00476720(&local_548);
                    /* try { // try from 00564f60 to 00564fa7 has its CatchHandler @ 00565044 */
      FUN_00474a40(uVar22,&local_530,
                   "b->free_chunks.size() == bin_info.total_chunks_in_bin - bin_info.total_chunks_in_use"
                   ,&local_548);
      if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar22,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_00565244;
    }
    if (lVar43 != 0) {
      lVar24 = FUN_00488994();
      if (*(int *)(lVar24 + 0x20) < 2) {
        uVar22 = FUN_00488994();
        uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
        FUN_0048a3f4(&local_5a0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                     ,0x2f0,"DumpMemoryLog");
                    /* try { // try from 00563e0c to 00563e27 has its CatchHandler @ 005650e8 */
        FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00563e2c to 00563ecf has its CatchHandler @ 00565188 */
        uVar22 = FUN_007176ec(local_4c0,*puVar28);
        uVar22 = FUN_00303e0c(uVar22,": Chunks ",9);
        uVar22 = FUN_007176ec(uVar22,lVar41);
        uVar22 = FUN_00303e0c(uVar22,&DAT_001c55aa,1);
        uVar22 = FUN_007176ec(uVar22,lVar43);
        uVar22 = FUN_00303e0c(uVar22,". Bytes ",8);
        lVar41 = local_3b8[lVar21 * 5];
        uVar22 = FUN_007176ec(uVar22,lVar41);
        uVar22 = FUN_00303e0c(uVar22,&DAT_001c55aa,1);
        uVar22 = FUN_007176ec(uVar22,local_3b8[lVar21 * 5 + 1]);
        uVar22 = FUN_00303e0c(uVar22,&DAT_001d0878,2);
        uVar22 = FUN_00303e0c(uVar22,"Requested ",10);
        lVar43 = local_3b8[lVar21 * 5 + 2];
        uVar22 = FUN_007176ec(uVar22,lVar43);
        FUN_00303e0c(uVar22,&DAT_001c773b,1);
        FUN_00637fac(&local_530);
        pbVar18 = local_568;
        pbVar35 = local_560;
        if (local_568 != (byte *)0x0) {
          while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
            pbVar35 = pbVar8 + -0x18;
            if ((*pbVar35 & 1) != 0) {
              free(*(void **)(pbVar8 + -8));
            }
          }
          local_560 = pbVar18;
          free(local_568);
        }
        if ((local_580 & 1) != 0) {
          free(local_570);
        }
        if ((local_5a0 & 1) != 0) {
          free(local_590);
        }
      }
      else {
        lVar41 = local_3b8[lVar21 * 5];
        lVar43 = local_3b8[lVar21 * 5 + 2];
      }
      lVar40 = (lVar41 + lVar40) - lVar43;
    }
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0x15);
  if ((lVar40 != 0) && (lVar21 = FUN_00488994(), *(int *)(lVar21 + 0x20) < 2)) {
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x2fb,"DumpMemoryLog");
                    /* try { // try from 00563f9c to 00563fbb has its CatchHandler @ 00564fa8 */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00563fbc to 00563fd7 has its CatchHandler @ 0056502c */
    uVar22 = FUN_00303e0c(local_4c0,"Diff between in-use and requested bytes is ",0x2b);
    FUN_007176ec(uVar22,lVar40);
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    pbVar35 = local_560;
    if (local_568 != (byte *)0x0) {
      while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
        pbVar35 = pbVar8 + -0x18;
        if ((*pbVar35 & 1) != 0) {
          free(*(void **)(pbVar8 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
  uVar3 = param_2;
  if (param_2 < 0x101) {
    uVar3 = 0x100;
  }
  uVar4 = (uint)LZCOUNT(uVar3 >> 8) ^ 0x3f;
  if (0x13 < uVar4) {
    uVar4 = 0x14;
  }
  puVar28 = (undefined8 *)(param_1 + 0x38 + (ulong)(uVar4 * 0x28));
  lVar21 = FUN_00488994();
  if (*(int *)(lVar21 + 0x20) < 2) {
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x302,"DumpMemoryLog");
                    /* try { // try from 005640bc to 005640db has its CatchHandler @ 00565010 */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 005640dc to 0056411f has its CatchHandler @ 00565040 */
    uVar22 = FUN_00303e0c(local_4c0,"Bin for ",8);
    uVar22 = FUN_007176ec(uVar22,param_2);
    uVar22 = FUN_00303e0c(uVar22," bytes has max bytes of ",0x18);
    uVar22 = FUN_007176ec(uVar22,*puVar28);
    FUN_00303e0c(uVar22,", Chunk State: ",0xf);
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    pbVar35 = local_560;
    if (local_568 != (byte *)0x0) {
      while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
        pbVar35 = pbVar8 + -0x18;
        if ((*pbVar35 & 1) != 0) {
          free(*(void **)(pbVar8 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
  puVar46 = (undefined8 *)puVar28[1];
  if (puVar46 != puVar28 + 2) {
    do {
      uVar22 = FUN_00561c18(param_1,puVar46[4]);
      lVar21 = FUN_00488994();
      if (*(int *)(lVar21 + 0x20) < 2) {
        uVar34 = FUN_00488994();
        uVar44 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
        FUN_0048a3f4(&local_5a0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                     ,0x308,"DumpMemoryLog");
                    /* try { // try from 0056421c to 00564237 has its CatchHandler @ 005650c4 */
        FUN_0048a554(&local_530,uVar34,1,uVar44,0,&local_5a0);
                    /* try { // try from 00564238 to 0056424b has its CatchHandler @ 005650e4 */
        uVar34 = FUN_00303e0c(local_4c0,&DAT_001e7ed8,2);
                    /* try { // try from 0056424c to 00564263 has its CatchHandler @ 005650c0 */
        FUN_0056744c(&local_548,uVar22,param_1,1);
        uVar3 = (ulong)(local_548 >> 1);
        puVar7 = (undefined1 *)((ulong)&local_548 | 1);
        if ((local_548 & 1) != 0) {
          uVar3 = local_540;
          puVar7 = local_538;
        }
                    /* try { // try from 0056427c to 00564283 has its CatchHandler @ 005650cc */
        FUN_00303e0c(uVar34,puVar7,uVar3);
        if ((local_548 & 1) != 0) {
          free(local_538);
        }
        FUN_00637fac(&local_530);
        pbVar18 = local_568;
        pbVar35 = local_560;
        if (local_568 != (byte *)0x0) {
          while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
            pbVar35 = pbVar8 + -0x18;
            if ((*pbVar35 & 1) != 0) {
              free(*(void **)(pbVar8 + -8));
            }
          }
          local_560 = pbVar18;
          free(local_568);
        }
        if ((local_580 & 1) != 0) {
          free(local_570);
        }
        if ((local_5a0 & 1) != 0) {
          free(local_590);
        }
      }
      puVar38 = (undefined8 *)puVar46[1];
      puVar47 = puVar46;
      if ((undefined8 *)puVar46[1] == (undefined8 *)0x0) {
        do {
          puVar46 = (undefined8 *)puVar47[2];
          bVar19 = (undefined8 *)*puVar46 != puVar47;
          puVar47 = puVar46;
        } while (bVar19);
      }
      else {
        do {
          puVar46 = puVar38;
          puVar38 = (undefined8 *)*puVar46;
        } while ((undefined8 *)*puVar46 != (undefined8 *)0x0);
      }
    } while (puVar46 != puVar28 + 2);
  }
  lVar21 = FUN_00488994();
  if (*(int *)(lVar21 + 0x20) < 2) {
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x30d,"DumpMemoryLog");
                    /* try { // try from 00564378 to 00564397 has its CatchHandler @ 00565008 */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00564398 to 005643ab has its CatchHandler @ 00565004 */
    FUN_00303e0c(local_4c0,"Overall chunks summary:",0x17);
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    pbVar35 = local_560;
    if (local_568 != (byte *)0x0) {
      while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
        pbVar35 = pbVar8 + -0x18;
        if ((*pbVar35 & 1) != 0) {
          free(*(void **)(pbVar8 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
  uVar22 = _UNK_00200a08;
  uVar3 = _DAT_00200a00;
  local_5b0 = (long *******)0x0;
  local_5a8 = 0;
  puVar28 = *(undefined8 **)(param_1 + 0x3a0);
  puVar46 = *(undefined8 **)(param_1 + 0x3a8);
  local_5b8 = (long *******)&local_5b0;
  if (puVar28 != puVar46) {
    puVar5 = *(undefined **)(PTR_PTR_007a1e48 + 8);
    uVar34 = *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
    puVar1 = PTR_DAT_007a1e40 + 0x40;
    puVar2 = PTR_DAT_007a10f8 + 0x10;
    do {
      uVar44 = *puVar28;
                    /* try { // try from 005644b8 to 005644d3 has its CatchHandler @ 00565118 */
      lVar21 = FUN_005686fc(param_1 + 0x3a0,uVar44);
      iVar20 = FUN_005688d8(lVar21,uVar44);
      uVar26 = *(ulong *)(*(long *)(lVar21 + 0x20) + (long)iVar20 * 8);
      while (uVar26 != 0xffffffffffffffff) {
        uVar29 = (*(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8) >> 3) *
                 -0x71c71c71c71c71c7;
        if (uVar29 < uVar26 || uVar29 - uVar26 == 0) {
          uVar22 = FUN_00753a74(0x88);
                    /* try { // try from 00564e24 to 00564e2b has its CatchHandler @ 005651d8 */
          FUN_00645c30(&local_5a0);
                    /* try { // try from 00564e2c to 00564e4b has its CatchHandler @ 00565178 */
          FUN_0047488c(&local_530,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                       ,0x5f,"BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                       &local_5a0);
          FUN_00476720(&local_548);
                    /* try { // try from 00564e58 to 00564e9f has its CatchHandler @ 0056514c */
          FUN_00474a40(uVar22,&local_530,"h < chunks_.size()",&local_548);
          if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar22,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
          goto LAB_00565244;
        }
        puVar38 = (undefined8 *)(*(long *)(param_1 + 0x3b8) + uVar26 * 0x48);
        if (puVar38[2] != -1) {
          pppppplVar45 = (long ******)*puVar38;
          ppppppplVar30 = local_5b0;
          ppppppplVar27 = (long *******)&local_5b0;
          while (ppppppplVar42 = ppppppplVar27, ppppppplVar30 != (long *******)0x0) {
            while (ppppppplVar25 = ppppppplVar30, ppppppplVar25[4] <= pppppplVar45) {
              if (pppppplVar45 <= ppppppplVar25[4]) {
                iVar20 = *(int *)(ppppppplVar25 + 5);
                goto LAB_00564710;
              }
              ppppppplVar30 = (long *******)ppppppplVar25[1];
              if ((long *******)ppppppplVar25[1] == (long *******)0x0) {
                ppppppplVar27 = ppppppplVar25 + 1;
                ppppppplVar42 = ppppppplVar25;
                goto LAB_00564580;
              }
            }
            ppppppplVar27 = ppppppplVar25;
            ppppppplVar30 = (long *******)*ppppppplVar25;
          }
LAB_00564580:
                    /* try { // try from 00564580 to 00564587 has its CatchHandler @ 005651b4 */
          ppppppplVar25 = (long *******)FUN_00759c3c(0x30);
          ppppppplVar25[4] = pppppplVar45;
          *(undefined4 *)(ppppppplVar25 + 5) = 0;
          *ppppppplVar25 = (long ******)0x0;
          ppppppplVar25[1] = (long ******)0x0;
          ppppppplVar25[2] = (long ******)ppppppplVar42;
          *ppppppplVar27 = (long ******)ppppppplVar25;
          ppppppplVar30 = ppppppplVar25;
          if ((long *******)*local_5b8 != (long *******)0x0) {
            ppppppplVar30 = (long *******)*ppppppplVar27;
            local_5b8 = (long *******)*local_5b8;
          }
          bVar19 = ppppppplVar30 == local_5b0;
          *(bool *)(ppppppplVar30 + 3) = bVar19;
          while( true ) {
            if ((bVar19) || (pppppplVar45 = ppppppplVar30[2], ((ulong)pppppplVar45[3] & 1) != 0))
            goto LAB_00564700;
            ppppppplVar27 = (long *******)pppppplVar45[2];
            pppppplVar32 = *ppppppplVar27;
            if (pppppplVar32 != pppppplVar45) break;
            if ((ppppppplVar27[1] == (long ******)0x0) ||
               (pppppplVar32 = ppppppplVar27[1] + 3, *(char *)pppppplVar32 != '\0')) {
              if ((long *******)*pppppplVar45 == ppppppplVar30) {
                *(undefined1 *)(pppppplVar45 + 3) = 1;
                *(undefined1 *)(ppppppplVar27 + 3) = 0;
                pppppplVar32 = (long ******)pppppplVar45[1];
                *ppppppplVar27 = pppppplVar32;
              }
              else {
                pppppplVar31 = (long ******)pppppplVar45[1];
                ppppplVar33 = *pppppplVar31;
                pppppplVar45[1] = ppppplVar33;
                pppppplVar32 = pppppplVar45;
                if (ppppplVar33 != (long *****)0x0) {
                  ppppplVar33[2] = (long ****)pppppplVar45;
                  ppppppplVar27 = (long *******)pppppplVar45[2];
                  pppppplVar32 = *ppppppplVar27;
                }
                pppppplVar31[2] = (long *****)ppppppplVar27;
                ppppppplVar27[pppppplVar32 != pppppplVar45] = pppppplVar31;
                *pppppplVar31 = (long *****)pppppplVar45;
                pppppplVar45[2] = (long *****)pppppplVar31;
                ppppppplVar27 = (long *******)pppppplVar31[2];
                pppppplVar45 = *ppppppplVar27;
                *(undefined1 *)(pppppplVar31 + 3) = 1;
                *(undefined1 *)(ppppppplVar27 + 3) = 0;
                pppppplVar32 = (long ******)pppppplVar45[1];
                *ppppppplVar27 = pppppplVar32;
              }
              if (pppppplVar32 != (long ******)0x0) {
                pppppplVar32[2] = (long *****)ppppppplVar27;
              }
              pppppplVar32 = ppppppplVar27[2];
              pppppplVar45[2] = (long *****)pppppplVar32;
              pppppplVar32[(long *******)*pppppplVar32 != ppppppplVar27] = (long *****)pppppplVar45;
              pppppplVar45[1] = (long *****)ppppppplVar27;
              goto LAB_005646fc;
            }
LAB_005645cc:
            bVar19 = ppppppplVar27 == local_5b0;
            *(undefined1 *)(pppppplVar45 + 3) = 1;
            *(bool *)(ppppppplVar27 + 3) = bVar19;
            *(char *)pppppplVar32 = '\x01';
            ppppppplVar30 = ppppppplVar27;
          }
          if ((pppppplVar32 != (long ******)0x0) &&
             (pppppplVar32 = pppppplVar32 + 3, *(char *)pppppplVar32 == '\0')) goto LAB_005645cc;
          if ((long *******)*pppppplVar45 == ppppppplVar30) {
            pppppplVar32 = ppppppplVar30[1];
            *pppppplVar45 = (long *****)pppppplVar32;
            if (pppppplVar32 != (long ******)0x0) {
              pppppplVar32[2] = (long *****)pppppplVar45;
              ppppppplVar27 = (long *******)pppppplVar45[2];
            }
            ppppppplVar30[2] = (long ******)ppppppplVar27;
            ppppppplVar27[*ppppppplVar27 != pppppplVar45] = (long ******)ppppppplVar30;
            ppppppplVar30[1] = pppppplVar45;
            pppppplVar45[2] = (long *****)ppppppplVar30;
            ppppppplVar27 = (long *******)ppppppplVar30[2];
            *(undefined1 *)(ppppppplVar30 + 3) = 1;
            pppppplVar45 = ppppppplVar27[1];
            *(undefined1 *)(ppppppplVar27 + 3) = 0;
            pppppplVar32 = (long ******)*pppppplVar45;
            ppppppplVar27[1] = pppppplVar32;
          }
          else {
            *(undefined1 *)(pppppplVar45 + 3) = 1;
            pppppplVar45 = ppppppplVar27[1];
            *(undefined1 *)(ppppppplVar27 + 3) = 0;
            pppppplVar32 = (long ******)*pppppplVar45;
            ppppppplVar27[1] = pppppplVar32;
          }
          if (pppppplVar32 != (long ******)0x0) {
            pppppplVar32[2] = (long *****)ppppppplVar27;
          }
          pppppplVar32 = ppppppplVar27[2];
          pppppplVar45[2] = (long *****)pppppplVar32;
          pppppplVar32[(long *******)*pppppplVar32 != ppppppplVar27] = (long *****)pppppplVar45;
          *pppppplVar45 = (long *****)ppppppplVar27;
LAB_005646fc:
          ppppppplVar27[2] = pppppplVar45;
LAB_00564700:
          iVar20 = 0;
          local_5a8 = local_5a8 + 1;
LAB_00564710:
          *(int *)(ppppppplVar25 + 5) = iVar20 + 1;
        }
        lVar21 = *(long *)PTR_DAT_007a1f08;
        if (lVar21 == 0) {
          uVar22 = FUN_00753a74(0x88);
                    /* try { // try from 00564eac to 00564eb3 has its CatchHandler @ 005651b8 */
          FUN_00645c30(&local_5a0);
                    /* try { // try from 00564eb4 to 00564ed3 has its CatchHandler @ 00565148 */
          FUN_0047488c(&local_530,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/common/logging/logging.h"
                       ,0x140,
                       "static const Logger &onnxruntime::logging::LoggingManager::DefaultLogger()",
                       &local_5a0);
                    /* try { // try from 00564ed4 to 00564ee3 has its CatchHandler @ 00565138 */
          FUN_00479eac(&local_548,"Attempt to use DefaultLogger but none has been registered.");
          FUN_004792b8(uVar22,&local_530,&local_548);
          if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 00564f08 to 00564f1f has its CatchHandler @ 0056511c */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar22,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
          goto LAB_00565244;
        }
        if (*(int *)(lVar21 + 0x20) < 2) {
          uVar36 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00564740 to 00564747 has its CatchHandler @ 00565208 */
          __ptr = (char *)FUN_00759c3c(0x60);
          uVar17 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._64_8_;
          uVar16 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._56_8_;
          uVar15 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._48_8_;
          uVar14 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._40_8_;
          uVar44 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._32_8_;
          uStack_598 = uVar22;
          local_5a0 = uVar3;
          *(ulong *)(__ptr + 0x48) =
               CONCAT35(s__var_lib_jenkins__conan2_p_b_onn_001db65d._77_3_,
                        s__var_lib_jenkins__conan2_p_b_onn_001db65d._72_5_);
          *(undefined8 *)(__ptr + 0x40) = uVar17;
          *(undefined8 *)(__ptr + 0x28) = uVar14;
          *(undefined8 *)(__ptr + 0x20) = uVar44;
          *(undefined8 *)(__ptr + 0x38) = uVar16;
          *(undefined8 *)(__ptr + 0x30) = uVar15;
          uVar14 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._85_8_;
          uVar44 = CONCAT53(s__var_lib_jenkins__conan2_p_b_onn_001db65d._80_5_,
                            s__var_lib_jenkins__conan2_p_b_onn_001db65d._77_3_);
          __ptr[0x5d] = '\0';
          *(undefined8 *)(__ptr + 0x55) = uVar14;
          *(undefined8 *)(__ptr + 0x4d) = uVar44;
          uVar15 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._24_8_;
          uVar14 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._16_8_;
          uVar44 = s__var_lib_jenkins__conan2_p_b_onn_001db65d._0_8_;
          uVar12 = s_DumpMemoryLog_001bdb58._8_5_;
          uVar11 = s_DumpMemoryLog_001bdb58._5_3_;
          uVar9 = s_DumpMemoryLog_001bdb58._0_5_;
          local_588 = 0x316;
          local_580 = 0x1a;
          *(undefined8 *)(__ptr + 8) = s__var_lib_jenkins__conan2_p_b_onn_001db65d._8_8_;
          *(undefined8 *)__ptr = uVar44;
          *(undefined8 *)(__ptr + 0x18) = uVar15;
          *(undefined8 *)(__ptr + 0x10) = uVar14;
          uVar13 = s_DumpMemoryLog_001bdb58._8_5_;
          uVar10 = s_DumpMemoryLog_001bdb58._0_5_;
          s_DumpMemoryLog_001bdb58[8] = (char)uVar12;
          s_DumpMemoryLog_001bdb58[9] = SUB51(uVar12,1);
          s_DumpMemoryLog_001bdb58[10] = SUB51(uVar12,2);
          s_DumpMemoryLog_001bdb58[0xb] = SUB51(uVar12,3);
          s_DumpMemoryLog_001bdb58[0xc] = SUB51(uVar12,4);
          acStack_577[0] = s_DumpMemoryLog_001bdb58[8];
          acStack_577[1] = s_DumpMemoryLog_001bdb58[9];
          acStack_577[2] = s_DumpMemoryLog_001bdb58[10];
          acStack_577[3] = s_DumpMemoryLog_001bdb58[0xb];
          acStack_577[4] = s_DumpMemoryLog_001bdb58[0xc];
          s_DumpMemoryLog_001bdb58[0] = (char)uVar9;
          s_DumpMemoryLog_001bdb58[1] = SUB51(uVar9,1);
          s_DumpMemoryLog_001bdb58[2] = SUB51(uVar9,2);
          s_DumpMemoryLog_001bdb58[3] = SUB51(uVar9,3);
          s_DumpMemoryLog_001bdb58[4] = SUB51(uVar9,4);
          acStack_57f[0] = s_DumpMemoryLog_001bdb58[0];
          acStack_57f[1] = s_DumpMemoryLog_001bdb58[1];
          acStack_57f[2] = s_DumpMemoryLog_001bdb58[2];
          acStack_57f[3] = s_DumpMemoryLog_001bdb58[3];
          acStack_57f[4] = s_DumpMemoryLog_001bdb58[4];
          uStack_57a = (undefined2)uVar11;
          cStack_578 = SUB31(uVar11,2);
          uStack_572 = 0;
          local_560 = (byte *)0x0;
          uStack_558 = 0;
          local_568 = (byte *)0x0;
          local_528 = 1;
          local_518 = 0;
                    /* try { // try from 005647c4 to 005647d3 has its CatchHandler @ 00565200 */
          s_DumpMemoryLog_001bdb58._0_5_ = uVar10;
          s_DumpMemoryLog_001bdb58._8_5_ = uVar13;
          local_590 = __ptr;
          local_530 = lVar21;
          local_520 = uVar36;
          FUN_002fb36c(auStack_510,__ptr,0x5d);
          uStack_4e8 = CONCAT17(uStack_571,CONCAT16(uStack_572,CONCAT51(acStack_577,cStack_578)));
          local_4f0 = CONCAT26(uStack_57a,CONCAT51(acStack_57f,local_580));
          local_4f8 = 0x316;
          local_4d0 = 0;
          uStack_4c8 = 0;
          local_4e0 = local_570;
          uStack_4d8 = 0;
          local_420 = 0;
          local_4c0[0] = puVar5;
          local_450 = puVar1;
          *(undefined8 *)((long)local_4c0 + *(long *)(puVar5 + -0x18)) = uVar34;
          lVar21 = *(long *)(local_4c0[0] + -0x18);
                    /* try { // try from 00564810 to 0056481b has its CatchHandler @ 005651e8 */
          FUN_00715fc0((long)local_4c0 + lVar21,local_4c0 + 1);
          *(undefined8 *)((long)&uStack_438 + lVar21) = 0;
          *(undefined4 *)((long)auStack_430 + lVar21) = 0xffffffff;
          local_4c0[0] = PTR_DAT_007a1e40 + 0x18;
          local_450 = PTR_DAT_007a1e40 + 0x40;
                    /* try { // try from 00564840 to 00564847 has its CatchHandler @ 005651bc */
          FUN_007160dc(local_4c0 + 1);
          local_458 = 0x10;
          uStack_470 = 0;
          local_478 = 0;
          uStack_460 = 0;
          local_468 = 0;
          pcVar37 = "  Free ";
          if (puVar38[2] != -1) {
            pcVar37 = "  Chunk";
          }
          local_4c0[1] = puVar2;
                    /* try { // try from 00564880 to 005648bb has its CatchHandler @ 00565210 */
          uVar44 = FUN_00303e0c(local_4c0,pcVar37,7);
          uVar44 = FUN_00303e0c(uVar44,&DAT_001d7216,4);
          uVar44 = FUN_00717a0c(uVar44,puVar38[3]);
          uVar44 = FUN_00303e0c(uVar44," of size ",9);
          FUN_007176ec(uVar44,*puVar38);
          FUN_00637fac(&local_530);
          free(__ptr);
        }
        uVar26 = puVar38[5];
      }
      puVar28 = puVar28 + 5;
    } while (puVar28 != puVar46);
  }
                    /* try { // try from 0056492c to 0056492f has its CatchHandler @ 00565034 */
  lVar21 = FUN_00488994();
  if (*(int *)(lVar21 + 0x20) < 2) {
                    /* try { // try from 0056493c to 0056493f has its CatchHandler @ 00565000 */
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00564950 to 0056496b has its CatchHandler @ 00564ffc */
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x31c,"DumpMemoryLog");
                    /* try { // try from 0056496c to 0056498b has its CatchHandler @ 00564ff4 */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 0056498c to 0056499f has its CatchHandler @ 00564ff0 */
    FUN_00303e0c(local_4c0,"Summary of in-use chunks by size: ",0x22);
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    pbVar35 = local_560;
    if (local_568 != (byte *)0x0) {
      while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
        pbVar35 = pbVar8 + -0x18;
        if ((*pbVar35 & 1) != 0) {
          free(*(void **)(pbVar8 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
  if ((long ********)local_5b8 == &local_5b0) {
    lVar21 = 0;
  }
  else {
    lVar21 = 0;
    ppppppplVar27 = local_5b8;
    do {
                    /* try { // try from 00564a6c to 00564a6f has its CatchHandler @ 00565114 */
      lVar40 = FUN_00488994();
      if (*(int *)(lVar40 + 0x20) < 2) {
                    /* try { // try from 00564a7c to 00564a7f has its CatchHandler @ 005650b4 */
        uVar22 = FUN_00488994();
        uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00564a90 to 00564aa3 has its CatchHandler @ 005650b0 */
        FUN_0048a3f4(&local_5a0,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                     ,799,"DumpMemoryLog");
                    /* try { // try from 00564aa4 to 00564abf has its CatchHandler @ 005650b8 */
        FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00564ac0 to 00564b07 has its CatchHandler @ 00565144 */
        uVar22 = FUN_00303e0c(local_4c0,&DAT_001e7ed8,2);
        uVar22 = FUN_00717214(uVar22,*(undefined4 *)(ppppppplVar27 + 5));
        uVar22 = FUN_00303e0c(uVar22," chunks of size ",0x10);
        uVar22 = FUN_007176ec(uVar22,ppppppplVar27[4]);
        uVar22 = FUN_00303e0c(uVar22,". Total ",8);
        FUN_007176ec(uVar22,(long)ppppppplVar27[4] * (long)*(int *)(ppppppplVar27 + 5));
        FUN_00637fac(&local_530);
        pbVar18 = local_568;
        pbVar35 = local_560;
        if (local_568 != (byte *)0x0) {
          while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
            pbVar35 = pbVar8 + -0x18;
            if ((*pbVar35 & 1) != 0) {
              free(*(void **)(pbVar8 + -8));
            }
          }
          local_560 = pbVar18;
          free(local_568);
        }
        if ((local_580 & 1) != 0) {
          free(local_570);
        }
        if ((local_5a0 & 1) != 0) {
          free(local_590);
        }
      }
      ppppppplVar42 = ppppppplVar27 + 4;
      ppppppplVar30 = ppppppplVar27 + 5;
      ppppppplVar25 = (long *******)ppppppplVar27[1];
      ppppppplVar39 = ppppppplVar27;
      if ((long *******)ppppppplVar27[1] == (long *******)0x0) {
        do {
          ppppppplVar27 = (long *******)ppppppplVar39[2];
          bVar19 = (long *******)*ppppppplVar27 != ppppppplVar39;
          ppppppplVar39 = ppppppplVar27;
        } while (bVar19);
      }
      else {
        do {
          ppppppplVar27 = ppppppplVar25;
          ppppppplVar25 = (long *******)*ppppppplVar27;
        } while ((long *******)*ppppppplVar27 != (long *******)0x0);
      }
      lVar21 = lVar21 + (long)*ppppppplVar42 * (long)*(int *)ppppppplVar30;
    } while ((long ********)ppppppplVar27 != &local_5b0);
  }
                    /* try { // try from 00564bb8 to 00564bbb has its CatchHandler @ 0056503c */
  lVar40 = FUN_00488994();
  if (*(int *)(lVar40 + 0x20) < 2) {
                    /* try { // try from 00564bc8 to 00564bcb has its CatchHandler @ 00564fec */
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00564bdc to 00564bf7 has its CatchHandler @ 00564fe8 */
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x324,"DumpMemoryLog");
                    /* try { // try from 00564bf8 to 00564c17 has its CatchHandler @ 00564fe0 */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00564c18 to 00564c33 has its CatchHandler @ 00565030 */
    uVar22 = FUN_00303e0c(local_4c0,"Sum Total of in-use chunks: ",0x1c);
    FUN_007176ec(uVar22,lVar21);
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    pbVar35 = local_560;
    if (local_568 != (byte *)0x0) {
      while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
        pbVar35 = pbVar8 + -0x18;
        if ((*pbVar35 & 1) != 0) {
          free(*(void **)(pbVar8 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
                    /* try { // try from 00564ca8 to 00564cab has its CatchHandler @ 0056503c */
  lVar21 = FUN_00488994();
  if (*(int *)(lVar21 + 0x20) < 2) {
                    /* try { // try from 00564cb8 to 00564cbb has its CatchHandler @ 00564fdc */
    uVar22 = FUN_00488994();
    uVar34 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00564ccc to 00564ce7 has its CatchHandler @ 00564fd8 */
    FUN_0048a3f4(&local_5a0,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x325,"DumpMemoryLog");
                    /* try { // try from 00564ce8 to 00564d07 has its CatchHandler @ 00564fd0 */
    FUN_0048a554(&local_530,uVar22,1,uVar34,0,&local_5a0);
                    /* try { // try from 00564d08 to 00564d1b has its CatchHandler @ 00564fcc */
    uVar22 = FUN_00303e0c(local_4c0,"Stats: \n",8);
                    /* try { // try from 00564d1c to 00564d33 has its CatchHandler @ 00564fc8 */
    FUN_00567758(&local_548,param_1 + 0x3e0);
    puVar7 = local_538;
    if ((local_548 & 1) == 0) {
      local_540 = (ulong)(local_548 >> 1);
      puVar7 = auStack_547;
    }
                    /* try { // try from 00564d4c to 00564d53 has its CatchHandler @ 00564fb0 */
    FUN_00303e0c(uVar22,puVar7,local_540);
    if ((local_548 & 1) != 0) {
      free(local_538);
    }
    FUN_00637fac(&local_530);
    pbVar18 = local_568;
    pbVar35 = local_560;
    if (local_568 != (byte *)0x0) {
      while (pbVar8 = pbVar35, pbVar8 != pbVar18) {
        pbVar35 = pbVar8 + -0x18;
        if ((*pbVar35 & 1) != 0) {
          free(*(void **)(pbVar8 + -8));
        }
      }
      local_560 = pbVar18;
      free(local_568);
    }
    if ((local_580 & 1) != 0) {
      free(local_570);
    }
    if ((local_5a0 & 1) != 0) {
      free(local_590);
    }
  }
  FUN_0056990c(&local_5b8,local_5b0);
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
LAB_00565244:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00565248  FUN_00565248 =====

void FUN_00565248(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_007073d8(param_1 + 0x390);
  uVar1 = *(undefined8 *)(param_1 + 0x3e0);
  param_2[1] = *(undefined8 *)(param_1 + 1000);
  *param_2 = uVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x3f8);
  uVar3 = *(undefined8 *)(param_1 + 0x3f0);
  uVar6 = *(undefined8 *)(param_1 + 0x408);
  uVar5 = *(undefined8 *)(param_1 + 0x400);
  uVar2 = *(undefined8 *)(param_1 + 0x418);
  uVar1 = *(undefined8 *)(param_1 + 0x410);
  param_2[8] = *(undefined8 *)(param_1 + 0x420);
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[7] = uVar2;
  param_2[6] = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
                    /* try { // try from 00565284 to 0056528b has its CatchHandler @ 00565298 */
  FUN_00707c00(param_1 + 0x390);
  return;
}


// ===== 0056529c  FUN_0056529c =====

void FUN_0056529c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00561c18(param_1,*(undefined8 *)(*param_3 + 0x20));
  if ((*(long *)(lVar4 + 0x10) == -1) && (*(int *)(lVar4 + 0x30) != -1)) {
    param_3 = (long *)*param_3;
    plVar7 = param_3;
    plVar2 = (long *)param_3[1];
    if ((long *)param_3[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar2;
        plVar2 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    if ((long *)*param_2 == param_3) {
      *param_2 = (long)plVar6;
    }
    param_2[2] = param_2[2] + -1;
    FUN_00328dd0(param_2[1],param_3);
    free(param_3);
    *(undefined4 *)(lVar4 + 0x30) = 0xffffffff;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00565384 to 0056538b has its CatchHandler @ 00565464 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 0056538c to 005653ab has its CatchHandler @ 00565454 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x27f,
                 "void onnxruntime::BFCArena::RemoveFreeChunkIterFromBin(BFCArena::Bin::FreeChunkSet *, const BFCArena::Bin::FreeChunkSet::iterator &)"
                 ,auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 005653b8 to 005653fb has its CatchHandler @ 005653fc */
    FUN_00474a40(uVar5,auStack_88,"!c->in_use() && (c->bin_num != kInvalidBinNum)",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00565484  FUN_00565484 =====

void FUN_00565484(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [80];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_1 + 0x3d0);
  if (lVar8 == -1) {
    lVar8 = *(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8);
    if (lVar8 == -0x48) {
      lVar8 = -1;
      *(long *)(param_1 + 0x3c0) = *(long *)(param_1 + 0x3b8);
    }
    else {
      lVar8 = (lVar8 >> 3) * -0x71c71c71c71c71c7;
      FUN_00568dc0(param_1 + 0x3b8,1);
    }
  }
  else {
    lVar3 = FUN_00561c18(param_1,lVar8);
    *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(lVar3 + 0x28);
  }
  plVar4 = (long *)FUN_00561c18(param_1,param_2);
  if ((plVar4[2] == -1) && ((int)plVar4[6] == -1)) {
    plVar5 = (long *)FUN_00561c18(param_1,lVar8);
    lVar6 = plVar4[8];
    lVar3 = plVar4[3] + param_3;
    plVar5[7] = plVar4[7];
    plVar5[8] = lVar6;
    plVar5[3] = lVar3;
    lVar6 = FUN_005686fc(param_1 + 0x3a0,lVar3);
    iVar2 = FUN_005688d8(lVar6,lVar3);
    *(long *)(*(long *)(lVar6 + 0x20) + (long)iVar2 * 8) = lVar8;
    lVar6 = *plVar4;
    lVar3 = plVar4[5];
    plVar5[2] = -1;
    plVar5[4] = param_2;
    plVar5[5] = lVar3;
    *plVar5 = lVar6 - param_3;
    *plVar4 = param_3;
    plVar4[5] = lVar8;
    if (lVar3 != -1) {
      lVar3 = FUN_00561c18(param_1);
      *(long *)(lVar3 + 0x20) = lVar8;
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      FUN_00562680(param_1,lVar8);
      return;
    }
  }
  else {
    uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 0056560c to 00565613 has its CatchHandler @ 005656ec */
    FUN_00645c30(auStack_d0);
                    /* try { // try from 00565614 to 00565633 has its CatchHandler @ 005656dc */
    FUN_0047488c(auStack_b8,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x1cd,"void onnxruntime::BFCArena::SplitChunk(BFCArena::ChunkHandle, size_t)",
                 auStack_d0);
    FUN_00476720(auStack_e8);
                    /* try { // try from 00565640 to 00565683 has its CatchHandler @ 00565684 */
    FUN_00474a40(uVar7,auStack_b8,"!c->in_use() && (c->bin_num == kInvalidBinNum)",auStack_e8);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056570c  FUN_0056570c =====

void FUN_0056570c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *__ptr;
  long lVar3;
  long local_58;
  void *local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = param_2;
  if (param_2 != 0) {
    FUN_007073d8(param_1 + 0x390);
                    /* try { // try from 00565740 to 005657ab has its CatchHandler @ 005657dc */
    lVar3 = FUN_00568f88(param_1 + 0x428,&local_58);
    if (lVar3 == 0) {
      FUN_00565808(param_1,local_58);
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x388) + 0x18))
                (*(long **)(param_1 + 0x388),*(undefined8 *)(lVar3 + 0x10));
      lVar1 = *(long *)(lVar3 + 0x18);
      *(long *)(param_1 + 0x408) = *(long *)(param_1 + 0x408) - lVar1;
      *(long *)(param_1 + 0x400) = *(long *)(param_1 + 0x400) - lVar1;
      FUN_005695cc(local_50,param_1 + 0x428,lVar3);
      __ptr = local_50[0];
      local_50[0] = (void *)0x0;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
                    /* try { // try from 005657ac to 005657b3 has its CatchHandler @ 005657d8 */
    FUN_00707c00(param_1 + 0x390);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00565808  FUN_00565808 =====

void FUN_00565808(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_005686fc(param_1 + 0x3a0);
  iVar2 = FUN_005688d8(lVar3,param_2);
  if (*(long *)(*(long *)(lVar3 + 0x20) + (long)iVar2 * 8) == -1) {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00565888 to 0056588f has its CatchHandler @ 00565968 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00565890 to 005658af has its CatchHandler @ 00565958 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x243,"void onnxruntime::BFCArena::DeallocateRawInternal(void *)",auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 005658bc to 005658ff has its CatchHandler @ 00565900 */
    FUN_00474a40(uVar4,auStack_88,"h != kInvalidChunkHandle",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    FUN_005667b8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00565988  FUN_00565988 =====

void FUN_00565988(undefined8 *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *__s;
  byte *pbVar15;
  size_t sVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long local_288;
  byte local_280 [16];
  void *local_270;
  byte local_260;
  void *local_250;
  byte *local_248;
  byte *local_240;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [112];
  undefined1 auStack_178 [264];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_007073d8(param_2 + 0x390);
  puVar9 = *(undefined8 **)(param_2 + 0x3a8);
  puVar18 = *(undefined8 **)(param_2 + 0x3a0);
  local_218 = (undefined8 *)0x0;
  local_210 = (undefined8 *)0x0;
  local_208 = (undefined8 *)0x0;
  local_230 = (undefined8 *)0x0;
  local_228 = (undefined8 *)0x0;
  local_220 = (undefined8 *)0x0;
  if ((long)puVar9 - (long)puVar18 == 0) {
    puVar5 = (undefined8 *)0x0;
    puVar20 = (undefined8 *)0x0;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    lVar10 = (long)puVar9 - (long)puVar18 >> 3;
    if ((ulong)(lVar10 * -0x3333333333333333) >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 00566154 to 0056615b has its CatchHandler @ 00566164 */
        uVar19 = FUN_00373070(&local_218);
                    /* catch() { ... } // from try @ 00565e28 with catch @ 00566278 */
                    /* catch() { ... } // from try @ 00565ed8 with catch @ 0056615c */
        if (local_230 != (undefined8 *)0x0) {
          local_228 = local_230;
          free(local_230);
        }
        if (local_218 != (undefined8 *)0x0) {
          local_210 = local_218;
          free(local_218);
        }
                    /* try { // try from 00566218 to 0056621f has its CatchHandler @ 00566274 */
        FUN_00707c00(param_2 + 0x390);
        if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar19);
        }
      }
      goto LAB_0056623c;
    }
                    /* try { // try from 00565a0c to 00565a2b has its CatchHandler @ 00566164 */
    puVar5 = (undefined8 *)FUN_00759c3c(lVar10 * 0x6666666666666668);
    local_208 = puVar5 + lVar10 * 0xccccccccccccccd;
    local_218 = puVar5;
    local_210 = puVar5;
    puVar6 = (undefined8 *)FUN_00759c3c(lVar10 * 0x6666666666666668);
    puVar20 = puVar6 + lVar10 * 0xccccccccccccccd;
  }
  local_230 = puVar6;
  local_228 = puVar6;
  local_220 = puVar20;
  if (puVar18 != puVar9) {
    do {
      puVar7 = local_218;
      if (((*(byte *)(param_2 + 0x468) & 1) != 0) || (puVar11 = puVar5, puVar18[3] != 0)) {
        uVar19 = *puVar18;
        if (local_208 <= puVar5) {
          sVar16 = (long)puVar5 - (long)local_218;
          lVar10 = (long)sVar16 >> 3;
          uVar21 = lVar10 + 1;
          if (uVar21 >> 0x3d == 0) {
            uVar13 = (long)local_208 - (long)local_218 >> 2;
            if (uVar13 <= uVar21) {
              uVar13 = uVar21;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_208 - (long)local_218)) {
              uVar13 = 0x1fffffffffffffff;
            }
            if (uVar13 == 0) {
              puVar5 = (undefined8 *)0x0;
            }
            else {
              if (uVar13 >> 0x3d != 0) {
                if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0056613c to 0056613f has its CatchHandler @ 00566184 */
                  FUN_002f9ee0();
                }
                goto LAB_0056623c;
              }
                    /* try { // try from 00565b08 to 00565b0b has its CatchHandler @ 00566178 */
              puVar5 = (undefined8 *)FUN_00759c3c(uVar13 << 3);
            }
            puVar11 = puVar5 + lVar10 + 1;
            puVar5[lVar10] = uVar19;
            memcpy(puVar5,puVar7,sVar16);
            local_218 = puVar5;
            local_208 = puVar5 + uVar13;
            if (puVar7 != (undefined8 *)0x0) {
              free(puVar7);
            }
            uVar19 = puVar18[1];
            if (puVar6 < puVar20) goto LAB_00565a6c;
            goto LAB_00565b60;
          }
LAB_005660f4:
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 00566108 to 0056610f has its CatchHandler @ 00566184 */
            FUN_00373070(&local_218);
LAB_00566110:
            if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00566124 to 00566127 has its CatchHandler @ 00566188 */
              FUN_002f9ee0();
            }
          }
          goto LAB_0056623c;
        }
        puVar11 = puVar5 + 1;
        *puVar5 = uVar19;
        uVar19 = puVar18[1];
        puVar6 = local_228;
        puVar20 = local_220;
        if (local_228 < local_220) {
LAB_00565a6c:
          *puVar6 = uVar19;
          local_210 = puVar11;
        }
        else {
LAB_00565b60:
          puVar5 = local_230;
          sVar16 = (long)puVar6 - (long)local_230;
          lVar10 = (long)sVar16 >> 3;
          uVar21 = lVar10 + 1;
          local_210 = puVar11;
          if (uVar21 >> 0x3d != 0) {
            if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 005660ec to 005660f3 has its CatchHandler @ 00566188 */
              FUN_00368664(&local_230);
              goto LAB_005660f4;
            }
            goto LAB_0056623c;
          }
          uVar13 = (long)puVar20 - (long)local_230 >> 2;
          if (uVar13 <= uVar21) {
            uVar13 = uVar21;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puVar20 - (long)local_230)) {
            uVar13 = 0x1fffffffffffffff;
          }
          if (uVar13 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            if (uVar13 >> 0x3d != 0) goto LAB_00566110;
                    /* try { // try from 00565bac to 00565baf has its CatchHandler @ 0056617c */
            puVar7 = (undefined8 *)FUN_00759c3c(uVar13 << 3);
          }
          puVar6 = puVar7 + lVar10;
          puVar20 = puVar7 + uVar13;
          *puVar6 = uVar19;
          memcpy(puVar7,puVar5,sVar16);
          local_230 = puVar7;
          local_220 = puVar20;
          if (puVar5 != (undefined8 *)0x0) {
            free(puVar5);
          }
        }
        puVar6 = puVar6 + 1;
        local_228 = puVar6;
      }
      puVar18 = puVar18 + 5;
      puVar5 = puVar11;
    } while (puVar18 != puVar9);
    if (local_218 != puVar11) {
      local_288 = 0;
      puVar18 = local_218;
      do {
        uVar19 = *puVar18;
                    /* try { // try from 00565c40 to 00565c57 has its CatchHandler @ 005661b0 */
        lVar10 = FUN_005686fc(param_2 + 0x3a0,uVar19);
        iVar4 = FUN_005688d8(lVar10,uVar19);
        uVar21 = *(ulong *)(*(long *)(lVar10 + 0x20) + (long)iVar4 * 8);
        if (uVar21 != 0xffffffffffffffff) {
          uVar12 = (*(long *)(param_2 + 0x3c0) - *(long *)(param_2 + 0x3b8) >> 3) *
                   -0x71c71c71c71c71c7;
          uVar13 = uVar21;
          do {
            if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
              uVar19 = FUN_00753a74(0x88);
                    /* try { // try from 0056605c to 00566063 has its CatchHandler @ 00566254 */
              FUN_00645c30(local_280);
                    /* try { // try from 00566064 to 00566083 has its CatchHandler @ 005661b8 */
              FUN_0047488c(auStack_1e8,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                           ,0x5f,
                           "BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                           local_280);
              FUN_00476720(auStack_200);
                    /* try { // try from 00566090 to 005660d7 has its CatchHandler @ 005661b4 */
              FUN_00474a40(uVar19,auStack_1e8,"h < chunks_.size()",auStack_200);
              if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_00753c5c(uVar19,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
              }
              goto LAB_0056623c;
            }
            lVar10 = *(long *)(param_2 + 0x3b8) + uVar13 * 0x48;
            if (*(long *)(lVar10 + 0x10) != -1) goto LAB_00565c24;
            uVar13 = *(ulong *)(lVar10 + 0x28);
          } while (uVar13 != 0xffffffffffffffff);
        }
        lVar14 = local_230[local_288];
        *(long *)(param_2 + 0x3f8) = *(long *)(param_2 + 0x3f8) + 1;
        *(long *)(param_2 + 0x408) = *(long *)(param_2 + 0x408) - lVar14;
                    /* try { // try from 00565cc8 to 00565ccb has its CatchHandler @ 00566180 */
        lVar10 = FUN_00488994();
        if (*(int *)(lVar10 + 0x20) < 1) {
                    /* try { // try from 00565cd8 to 00565cdb has its CatchHandler @ 00566174 */
          uVar8 = FUN_00488994();
          uVar17 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
                    /* try { // try from 00565cec to 00565d07 has its CatchHandler @ 00566170 */
          FUN_0048a3f4(local_280,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                       ,0x223,"Shrink");
                    /* try { // try from 00565d08 to 00565d23 has its CatchHandler @ 00566168 */
          FUN_0048a554(auStack_1e8,uVar8,0,uVar17,0,local_280);
          __s = *(char **)(*(long *)(param_2 + 0x388) + 8);
          sVar16 = strlen(__s);
                    /* try { // try from 00565d38 to 00565d87 has its CatchHandler @ 00566190 */
          uVar8 = FUN_00303e0c(auStack_178,__s,sVar16);
          uVar8 = FUN_00303e0c(uVar8," BFC Arena shrunk by ",0x15);
          uVar8 = FUN_007176ec(uVar8,lVar14);
          uVar8 = FUN_00303e0c(uVar8," bytes. ",8);
          uVar8 = FUN_00303e0c(uVar8," The total allocated bytes is now ",0x22);
          FUN_0071755c(uVar8,*(undefined8 *)(param_2 + 0x408));
          FUN_00637fac(auStack_1e8);
          pbVar3 = local_248;
          pbVar15 = local_240;
          if (local_248 != (byte *)0x0) {
            while (pbVar2 = pbVar15, pbVar2 != pbVar3) {
              pbVar15 = pbVar2 + -0x18;
              if ((*pbVar15 & 1) != 0) {
                free(*(void **)(pbVar2 + -8));
              }
            }
            local_240 = pbVar3;
            free(local_248);
          }
          if ((local_260 & 1) != 0) {
            free(local_250);
          }
          if ((local_280[0] & 1) != 0) {
            free(local_270);
          }
        }
        while (uVar21 != 0xffffffffffffffff) {
          uVar13 = (*(long *)(param_2 + 0x3c0) - *(long *)(param_2 + 0x3b8) >> 3) *
                   -0x71c71c71c71c71c7;
          if (uVar13 < uVar21 || uVar13 - uVar21 == 0) {
            uVar19 = FUN_00753a74(0x88);
                    /* try { // try from 00565fd4 to 00565fdb has its CatchHandler @ 00566258 */
            FUN_00645c30(local_280);
                    /* try { // try from 00565fdc to 00565ffb has its CatchHandler @ 00566240 */
            FUN_0047488c(auStack_1e8,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                         ,0x5f,
                         "BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                         local_280);
            FUN_00476720(auStack_200);
                    /* try { // try from 00566008 to 0056604f has its CatchHandler @ 005661bc */
            FUN_00474a40(uVar19,auStack_1e8,"h < chunks_.size()",auStack_200);
            if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar19,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
            }
            goto LAB_0056623c;
          }
          uVar12 = *(ulong *)(*(long *)(param_2 + 0x3b8) + uVar21 * 0x48 + 0x28);
                    /* try { // try from 00565e28 to 00565e83 has its CatchHandler @ 00566278 */
          FUN_00566298(param_2,uVar21);
          uVar13 = (*(long *)(param_2 + 0x3c0) - *(long *)(param_2 + 0x3b8) >> 3) *
                   -0x71c71c71c71c71c7;
          if (uVar13 < uVar21 || uVar13 - uVar21 == 0) {
            uVar19 = FUN_00753a74(0x88);
                    /* try { // try from 00565f4c to 00565f53 has its CatchHandler @ 0056625c */
            FUN_00645c30(local_280);
                    /* try { // try from 00565f54 to 00565f73 has its CatchHandler @ 00566244 */
            FUN_0047488c(auStack_1e8,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                         ,0x5f,
                         "BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                         local_280);
            FUN_00476720(auStack_200);
                    /* try { // try from 00565f80 to 00565fc7 has its CatchHandler @ 005661c0 */
            FUN_00474a40(uVar19,auStack_1e8,"h < chunks_.size()",auStack_200);
            if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar19,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
            }
            goto LAB_0056623c;
          }
          uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x3b8) + uVar21 * 0x48 + 0x18);
          lVar10 = FUN_005686fc(param_2 + 0x3a0,uVar8);
          iVar4 = FUN_005688d8(lVar10,uVar8);
          *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)iVar4 * 8) = 0xffffffffffffffff;
          lVar10 = FUN_00561c18(param_2,uVar21);
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(param_2 + 0x3d0);
          *(ulong *)(param_2 + 0x3d0) = uVar21;
          uVar21 = uVar12;
        }
                    /* try { // try from 00565eac to 00565ebf has its CatchHandler @ 0056618c */
        (**(code **)(**(long **)(param_2 + 0x388) + 0x18))(*(long **)(param_2 + 0x388),uVar19);
        FUN_00566554(param_2 + 0x3a0,uVar19);
        *(long *)(param_2 + 0x3f0) = *(long *)(param_2 + 0x3f0) + -1;
LAB_00565c24:
        puVar18 = puVar18 + 1;
        local_288 = local_288 + 1;
      } while (puVar18 != puVar11);
    }
  }
  iVar4 = *(int *)(param_2 + 0x458);
  if (iVar4 < 0) {
                    /* try { // try from 00565ed8 to 00565edb has its CatchHandler @ 0056615c */
    FUN_00485180();
  }
  *(long *)(param_2 + 0x380) = (long)iVar4;
  *param_1 = 0;
  if (local_230 != (undefined8 *)0x0) {
    free(local_230);
  }
  if (local_218 != (undefined8 *)0x0) {
    local_210 = local_218;
    free(local_218);
  }
                    /* try { // try from 00565f04 to 00565f0b has its CatchHandler @ 00566160 */
  FUN_00707c00(param_2 + 0x390);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_0056623c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00566298  FUN_00566298 =====

void FUN_00566298(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *__ptr;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [80];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  lVar4 = FUN_00561c18();
  if ((*(long *)(lVar4 + 0x10) == -1) && (*(int *)(lVar4 + 0x30) != -1)) {
    param_1 = param_1 + (long)*(int *)(lVar4 + 0x30) * 0x28;
    __ptr = (undefined8 *)FUN_00569800(param_1 + 0x40,&local_40);
    if ((undefined8 *)(param_1 + 0x48) == __ptr) {
      uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00566420 to 00566427 has its CatchHandler @ 005664c8 */
      FUN_00645c30(auStack_a8);
                    /* try { // try from 00566428 to 00566447 has its CatchHandler @ 005664c4 */
      FUN_0047488c(auStack_90,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x288,
                   "void onnxruntime::BFCArena::RemoveFreeChunkFromBin(BFCArena::ChunkHandle)",
                   auStack_a8);
                    /* try { // try from 00566448 to 00566457 has its CatchHandler @ 005664a4 */
      FUN_00479eac(auStack_c0,"Could not find chunk in bin");
                    /* try { // try from 0056645c to 0056649f has its CatchHandler @ 005664a0 */
      FUN_00474a40(uVar5,auStack_90,"BinFromIndex(c->bin_num)->free_chunks.erase(h) > 0",auStack_c0)
      ;
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
    else {
      puVar7 = __ptr;
      puVar2 = (undefined8 *)__ptr[1];
      if ((undefined8 *)__ptr[1] == (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)puVar7[2];
          bVar3 = (undefined8 *)*puVar6 != puVar7;
          puVar7 = puVar6;
        } while (bVar3);
      }
      else {
        do {
          puVar6 = puVar2;
          puVar2 = (undefined8 *)*puVar6;
        } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
      }
      if ((undefined8 *)*(void **)(param_1 + 0x40) == __ptr) {
        *(undefined8 **)(param_1 + 0x40) = puVar6;
      }
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
      FUN_00328dd0(*(undefined8 *)(param_1 + 0x48),__ptr);
      free(__ptr);
      *(undefined4 *)(lVar4 + 0x30) = 0xffffffff;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
  }
  else {
    uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 00566398 to 0056639f has its CatchHandler @ 00566534 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 005663a0 to 005663bf has its CatchHandler @ 00566524 */
    FUN_0047488c(auStack_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x286,"void onnxruntime::BFCArena::RemoveFreeChunkFromBin(BFCArena::ChunkHandle)",
                 auStack_a8);
    FUN_00476720(auStack_c0);
                    /* try { // try from 005663cc to 0056640f has its CatchHandler @ 005664cc */
    FUN_00474a40(uVar5,auStack_90,"!c->in_use() && (c->bin_num != kInvalidBinNum)",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00566554  FUN_00566554 =====

void FUN_00566554(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  void *__ptr;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [80];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar9 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  puVar10 = puVar8;
  if ((long)puVar8 - (long)puVar9 != 0) {
    uVar5 = ((long)puVar8 - (long)puVar9 >> 3) * -0x3333333333333333;
    do {
      uVar6 = uVar5 >> 1;
      if ((ulong)puVar9[uVar6 * 5 + 2] <= param_2) {
        puVar9 = puVar9 + uVar6 * 5 + 5;
        uVar6 = uVar5 + ~uVar6;
      }
      uVar5 = uVar6;
      puVar10 = puVar9;
    } while (uVar5 != 0);
  }
  local_48 = param_2;
  if (puVar8 == puVar10) {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00566698 to 0056669f has its CatchHandler @ 00566794 */
    FUN_00645c30(auStack_b0);
                    /* try { // try from 005666a0 to 005666bf has its CatchHandler @ 00566784 */
    FUN_0047488c(auStack_98,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.h"
                 ,0x142,"void onnxruntime::BFCArena::RegionManager::RemoveAllocationRegion(void *)",
                 auStack_b0);
    local_40 = "Could not find Region for: ";
    FUN_00568c08(auStack_c8,&local_40,&local_48);
                    /* try { // try from 005666e0 to 00566727 has its CatchHandler @ 00566728 */
    FUN_00474a40(uVar4,auStack_98,"entry != regions_.end()",auStack_c8);
    if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
    goto LAB_005667b4;
  }
  puVar9 = puVar10;
  if (puVar10 + 5 == puVar8) {
LAB_00566674:
    do {
      __ptr = (void *)puVar8[-1];
      puVar8[-1] = 0;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      puVar8 = puVar8 + -5;
    } while (puVar8 != puVar10);
  }
  else {
    do {
      puVar10 = puVar9 + 5;
      uVar4 = *puVar9;
      uVar2 = puVar9[1];
      *puVar9 = *puVar10;
      puVar9[1] = puVar9[6];
      uVar12 = puVar9[3];
      uVar11 = puVar9[2];
      uVar7 = puVar9[4];
      puVar9[3] = puVar9[8];
      puVar9[2] = puVar9[7];
      puVar9[4] = puVar9[9];
      puVar1 = puVar9 + 10;
      puVar9[6] = uVar2;
      puVar9[8] = uVar12;
      puVar9[7] = uVar11;
      puVar9[9] = uVar7;
      *puVar10 = uVar4;
      puVar9 = puVar10;
    } while (puVar1 != puVar8);
    puVar8 = (undefined8 *)param_1[1];
    if (puVar10 != puVar8) goto LAB_00566674;
  }
  param_1[1] = (long)puVar10;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_005667b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005667b8  FUN_005667b8 =====

void FUN_005667b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00561c18();
  if ((plVar2[2] == -1) || ((int)plVar2[6] != -1)) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 00566858 to 0056685f has its CatchHandler @ 00566938 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00566860 to 0056687f has its CatchHandler @ 00566928 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x28e,"void onnxruntime::BFCArena::FreeAndMaybeCoalesce(BFCArena::ChunkHandle)",
                 auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 0056688c to 005668cf has its CatchHandler @ 005668d0 */
    FUN_00474a40(uVar3,auStack_88,"c->in_use() && (c->bin_num == kInvalidBinNum)",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x400);
    plVar2[2] = -1;
    *(long *)(param_1 + 0x400) = lVar4 - *plVar2;
    uVar3 = FUN_00566c2c(param_1,param_2);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00562680(param_1,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00566958  FUN_00566958 =====

void FUN_00566958(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [80];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FUN_00561c18();
  plVar5 = (long *)FUN_00561c18(param_1,param_3);
  if (((plVar4[2] == -1) && (plVar5[2] == -1)) && (plVar4[7] == plVar5[7])) {
    lVar6 = plVar5[5];
    plVar4[5] = lVar6;
    if (plVar5[4] == param_2) {
      if (lVar6 != -1) {
        lVar6 = FUN_00561c18(param_1);
        *(long *)(lVar6 + 0x20) = param_2;
      }
      *plVar4 = *plVar4 + *plVar5;
      uVar1 = plVar4[8];
      if ((ulong)plVar4[8] <= (ulong)plVar5[8]) {
        uVar1 = plVar5[8];
      }
      plVar4[8] = uVar1;
      lVar6 = FUN_00561c18(param_1,param_3);
      uVar7 = *(undefined8 *)(lVar6 + 0x18);
      lVar6 = FUN_005686fc(param_1 + 0x3a0,uVar7);
      iVar3 = FUN_005688d8(lVar6,uVar7);
      *(undefined8 *)(*(long *)(lVar6 + 0x20) + (long)iVar3 * 8) = 0xffffffffffffffff;
      lVar6 = FUN_00561c18(param_1,param_3);
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x3d0);
      *(undefined8 *)(param_1 + 0x3d0) = param_3;
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return;
      }
    }
    else {
      uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 00566b20 to 00566b27 has its CatchHandler @ 00566ba0 */
      FUN_00645c30(auStack_b0);
                    /* try { // try from 00566b28 to 00566b47 has its CatchHandler @ 00566b9c */
      FUN_0047488c(auStack_98,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                   ,0x25c,
                   "void onnxruntime::BFCArena::Merge(BFCArena::ChunkHandle, BFCArena::ChunkHandle)"
                   ,auStack_b0);
      FUN_00476720(auStack_c8);
                    /* try { // try from 00566b54 to 00566b97 has its CatchHandler @ 00566b98 */
      FUN_00474a40(uVar7,auStack_98,"c2->prev == h1",auStack_c8);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
  }
  else {
    uVar7 = FUN_00753a74(0x88);
                    /* try { // try from 00566a98 to 00566a9f has its CatchHandler @ 00566c0c */
    FUN_00645c30(auStack_b0);
                    /* try { // try from 00566aa0 to 00566abf has its CatchHandler @ 00566bfc */
    FUN_0047488c(auStack_98,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x250,
                 "void onnxruntime::BFCArena::Merge(BFCArena::ChunkHandle, BFCArena::ChunkHandle)",
                 auStack_b0);
    FUN_00476720(auStack_c8);
                    /* try { // try from 00566acc to 00566b0f has its CatchHandler @ 00566ba4 */
    FUN_00474a40(uVar7,auStack_98,"!c1->in_use() && !c2->in_use() && c1->stream == c2->stream",
                 auStack_c8);
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar7,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00566c2c  FUN_00566c2c =====

undefined8 FUN_00566c2c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00561c18();
  if (*(long *)(lVar2 + 0x10) == -1) {
    if (((*(long *)(lVar2 + 0x28) != -1) &&
        (lVar3 = FUN_00561c18(param_1), *(long *)(lVar3 + 0x10) == -1)) &&
       (*(long *)(lVar3 + 0x38) == *(long *)(lVar2 + 0x38))) {
      FUN_00566298(param_1,*(undefined8 *)(lVar2 + 0x28));
      lVar2 = FUN_00561c18(param_1,param_2);
      FUN_00566958(param_1,param_2,*(undefined8 *)(lVar2 + 0x28));
    }
    lVar2 = FUN_00561c18(param_1,param_2);
    uVar4 = param_2;
    if (((*(long *)(lVar2 + 0x20) != -1) &&
        (lVar3 = FUN_00561c18(param_1), *(long *)(lVar3 + 0x10) == -1)) &&
       (*(long *)(lVar3 + 0x38) == *(long *)(lVar2 + 0x38))) {
      uVar4 = *(undefined8 *)(lVar2 + 0x20);
      FUN_00566298(param_1,uVar4);
      lVar2 = FUN_00561c18(param_1,param_2);
      FUN_00566958(param_1,*(undefined8 *)(lVar2 + 0x20),param_2);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar4;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 00566d64 to 00566d6b has its CatchHandler @ 00566e44 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00566d6c to 00566d8b has its CatchHandler @ 00566e34 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                 ,0x29e,"BFCArena::ChunkHandle onnxruntime::BFCArena::Coalesce(ChunkHandle)",
                 auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 00566d98 to 00566ddb has its CatchHandler @ 00566ddc */
    FUN_00474a40(uVar4,auStack_88,"!c->in_use()",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00566e64  FUN_00566e64 =====

void FUN_00566e64(void *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [80];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  memset(param_1,0,0x348);
  puVar18 = *(undefined8 **)(param_2 + 0x3a0);
  puVar5 = *(undefined8 **)(param_2 + 0x3a8);
  if (puVar18 != puVar5) {
    do {
      uVar17 = *puVar18;
      lVar4 = FUN_005686fc(param_2 + 0x3a0,uVar17);
      iVar3 = FUN_005688d8(lVar4,uVar17);
      uVar8 = *(ulong *)(*(long *)(lVar4 + 0x20) + (long)iVar3 * 8);
      if (uVar8 != 0xffffffffffffffff) {
        lVar4 = *(long *)(param_2 + 0x3b8);
        uVar6 = (*(long *)(param_2 + 0x3c0) - lVar4 >> 3) * -0x71c71c71c71c71c7;
        do {
          if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
            uVar17 = FUN_00753a74(0x88);
                    /* try { // try from 0056724c to 00567253 has its CatchHandler @ 005673d4 */
            FUN_00645c30(auStack_d8);
                    /* try { // try from 00567254 to 00567277 has its CatchHandler @ 005673d0 */
            FUN_0047488c(auStack_c0,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                         ,0x5f,
                         "BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                         auStack_d8);
            FUN_00476720(auStack_f0);
                    /* try { // try from 00567284 to 005672c7 has its CatchHandler @ 005673a4 */
            FUN_00474a40(uVar17,auStack_c0,"h < chunks_.size()",auStack_f0);
            if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(uVar17,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
            }
            goto LAB_00567448;
          }
          puVar7 = (ulong *)(lVar4 + uVar8 * 0x48);
          uVar10 = *puVar7;
          uVar15 = puVar7[2];
          uVar14 = uVar10;
          if (uVar10 < 0x101) {
            uVar14 = 0x100;
          }
          uVar1 = (uint)LZCOUNT(uVar14 >> 8) ^ 0x3f;
          if (0x13 < uVar1) {
            uVar1 = 0x14;
          }
          plVar11 = (long *)((long)param_1 + (ulong)uVar1 * 0x28);
          plVar11[1] = plVar11[1] + uVar10;
          plVar11[4] = plVar11[4] + 1;
          if (uVar15 == 0xffffffffffffffff) {
            lVar12 = param_2 + 0x38 + (ulong)uVar1 * 0x28;
            plVar11 = *(long **)(lVar12 + 0x10);
            if (plVar11 == (long *)0x0) {
LAB_00567130:
              uVar17 = FUN_00753a74(0x88);
                    /* try { // try from 0056713c to 00567143 has its CatchHandler @ 00567420 */
              FUN_00645c30(auStack_d8);
                    /* try { // try from 00567144 to 00567167 has its CatchHandler @ 0056740c */
              FUN_0047488c(auStack_c0,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                           ,0x2da,
                           "std::array<BFCArena::BinDebugInfo, BFCArena::kNumBins> onnxruntime::BFCArena::get_bin_debug_info()"
                           ,auStack_d8);
              FUN_00476720(auStack_f0);
                    /* try { // try from 00567174 to 005671b7 has its CatchHandler @ 005673e0 */
              FUN_00474a40(uVar17,auStack_c0,"bin->free_chunks.count(h) == 1",auStack_f0);
              if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_00753c5c(uVar17,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
              }
              goto LAB_00567448;
            }
            lVar12 = *(long *)(lVar12 + 0x20);
            lVar13 = *(long *)(lVar12 + 0x3b8);
            uVar14 = (*(long *)(lVar12 + 0x3c0) - lVar13 >> 3) * -0x71c71c71c71c71c7;
            if (uVar14 < uVar8 || uVar14 - uVar8 == 0) {
              uVar17 = FUN_00753a74(0x88);
                    /* try { // try from 005672d4 to 005672db has its CatchHandler @ 005673a0 */
              FUN_00645c30(auStack_d8);
                    /* try { // try from 005672dc to 005672fb has its CatchHandler @ 00567388 */
              FUN_0047488c(auStack_c0,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                           ,0x5f,
                           "BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                           auStack_d8);
              FUN_00476720(auStack_f0);
                    /* try { // try from 00567308 to 0056734f has its CatchHandler @ 00567358 */
              FUN_00474a40(uVar17,auStack_c0,"h < chunks_.size()",auStack_f0);
              if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_00753c5c(uVar17,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
              }
              goto LAB_00567448;
            }
            puVar9 = (ulong *)(lVar13 + uVar8 * 0x48);
LAB_0056701c:
            uVar8 = plVar11[4];
            if (uVar14 < uVar8 || uVar14 - uVar8 == 0) {
              uVar17 = FUN_00753a74(0x88);
                    /* try { // try from 005671c4 to 005671cb has its CatchHandler @ 0056741c */
              FUN_00645c30(auStack_d8);
                    /* try { // try from 005671cc to 005671ef has its CatchHandler @ 005673dc */
              FUN_0047488c(auStack_c0,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                           ,0x5f,
                           "BFCArena::Chunk *onnxruntime::BFCArena::ChunkFromHandle(ChunkHandle)",
                           auStack_d8);
              FUN_00476720(auStack_f0);
                    /* try { // try from 005671fc to 0056723f has its CatchHandler @ 005673d8 */
              FUN_00474a40(uVar17,auStack_c0,"h < chunks_.size()",auStack_f0);
              if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_00753c5c(uVar17,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
              }
              goto LAB_00567448;
            }
            puVar16 = (ulong *)(lVar13 + uVar8 * 0x48);
            uVar10 = *puVar9;
            uVar8 = *puVar16;
            if (uVar10 == uVar8) {
              uVar10 = puVar9[3];
              uVar8 = puVar16[3];
              if (uVar8 <= uVar10) {
                if (uVar10 <= uVar8) goto LAB_00567064;
LAB_00567010:
                plVar11 = plVar11 + 1;
              }
LAB_00567014:
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_00567130;
              goto LAB_0056701c;
            }
            if (uVar10 < uVar8) goto LAB_00567014;
            if (uVar8 < uVar10) goto LAB_00567010;
LAB_00567064:
            if ((uint)puVar7[6] != uVar1) {
              uVar17 = FUN_00753a74(0x88);
                    /* try { // try from 0056707c to 00567083 has its CatchHandler @ 0056739c */
              FUN_00645c30(auStack_d8);
                    /* try { // try from 00567084 to 005670a3 has its CatchHandler @ 00567354 */
              FUN_0047488c(auStack_c0,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.cc"
                           ,0x2db,
                           "std::array<BFCArena::BinDebugInfo, BFCArena::kNumBins> onnxruntime::BFCArena::get_bin_debug_info()"
                           ,auStack_d8);
              FUN_00476720(auStack_f0);
                    /* try { // try from 005670b0 to 005670f7 has its CatchHandler @ 00567350 */
              FUN_00474a40(uVar17,auStack_c0,"c->bin_num == bin_num",auStack_f0);
              if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
                FUN_00753c5c(uVar17,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
              }
              goto LAB_00567448;
            }
          }
          else {
            uVar8 = puVar7[1];
            *plVar11 = *plVar11 + uVar10;
            plVar11[3] = plVar11[3] + 1;
            plVar11[2] = plVar11[2] + uVar8;
          }
          uVar8 = puVar7[5];
        } while (uVar8 != 0xffffffffffffffff);
      }
      puVar18 = puVar18 + 5;
    } while (puVar18 != puVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_00567448:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056744c  FUN_0056744c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0056744c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  byte local_190;
  undefined1 auStack_18f [7];
  ulong local_188;
  undefined1 *local_180;
  undefined *local_178 [9];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108 [3];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [4];
  undefined8 local_d8;
  long local_70;
  
  puVar6 = PTR_PTR_007a1e48;
  puVar5 = PTR_DAT_007a1e40;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_178[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d8 = 0;
  local_108[0] = puVar1;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar9 = *(long *)(local_178[0] + -0x18);
                    /* try { // try from 005674c4 to 005674cf has its CatchHandler @ 00567720 */
  FUN_00715fc0((long)local_178 + lVar9,local_178 + 1);
  local_178[0] = puVar5 + 0x18;
  *(undefined8 *)((long)&uStack_f0 + lVar9) = 0;
  *(undefined4 *)((long)auStack_e8 + lVar9) = 0xffffffff;
                    /* try { // try from 005674e8 to 005674ef has its CatchHandler @ 0056770c */
  local_108[0] = puVar1;
  FUN_007160dc(local_178 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_178[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
                    /* try { // try from 00567510 to 00567563 has its CatchHandler @ 00567730 */
  uVar7 = FUN_00303e0c(local_178,"  Size: ",8);
  uVar7 = FUN_007176ec(uVar7,*param_2);
  uVar7 = FUN_00303e0c(uVar7," | Requested Size: ",0x13);
  uVar7 = FUN_007176ec(uVar7,param_2[1]);
  uVar7 = FUN_00303e0c(uVar7," | in_use: ",0xb);
  FUN_00717084(uVar7,param_2[2] != -1);
  if ((param_4 & 1) != 0) {
    if (param_2[4] != -1) {
                    /* try { // try from 00567574 to 00567593 has its CatchHandler @ 00567708 */
      uVar7 = FUN_00561c18(param_3);
      uVar8 = FUN_00303e0c(local_178,", prev: ",8);
                    /* try { // try from 00567594 to 005675af has its CatchHandler @ 00567700 */
      FUN_0056744c(&local_190,uVar7,param_3,0);
      uVar2 = local_188;
      puVar4 = local_180;
      if ((local_190 & 1) == 0) {
        uVar2 = (ulong)(local_190 >> 1);
        puVar4 = auStack_18f;
      }
                    /* try { // try from 005675c8 to 005675cf has its CatchHandler @ 005676e8 */
      FUN_00303e0c(uVar8,puVar4,uVar2);
      if ((local_190 & 1) != 0) {
        free(local_180);
      }
    }
    if (param_2[5] != -1) {
                    /* try { // try from 005675ec to 0056760b has its CatchHandler @ 00567704 */
      uVar7 = FUN_00561c18(param_3);
      uVar8 = FUN_00303e0c(local_178,", next: ",8);
                    /* try { // try from 0056760c to 00567627 has its CatchHandler @ 005676e4 */
      FUN_0056744c(&local_190,uVar7,param_3,0);
      puVar4 = local_180;
      if ((local_190 & 1) == 0) {
        local_188 = (ulong)(local_190 >> 1);
        puVar4 = auStack_18f;
      }
                    /* try { // try from 00567640 to 00567647 has its CatchHandler @ 005676e0 */
      FUN_00303e0c(uVar8,puVar4,local_188);
      if ((local_190 & 1) != 0) {
        free(local_180);
      }
    }
  }
                    /* try { // try from 00567658 to 00567663 has its CatchHandler @ 00567730 */
  FUN_00718470(param_1,local_178 + 1);
  local_178[0] = *(undefined **)puVar6;
  *(undefined8 *)((long)local_178 + *(long *)(local_178[0] + -0x18)) =
       *(undefined8 *)(puVar6 + 0x18);
  local_178[1] = puVar1 + 0x10;
  if ((local_130 & 1) != 0) {
    free(local_120);
  }
  FUN_00716098(local_178 + 1);
  FUN_00716ee4(local_178,puVar6 + 8);
  thunk_FUN_00715e00(local_108);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00567758  FUN_00567758 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00567758(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 005677c8 to 005677d3 has its CatchHandler @ 00567a20 */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 005677ec to 005677f3 has its CatchHandler @ 00567a0c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
                    /* try { // try from 00567818 to 0056798f has its CatchHandler @ 00567a30 */
  uVar5 = FUN_00303e0c(local_170,"Limit:                    ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[8]);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"InUse:                    ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[4]);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"TotalAllocated:           ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[5]);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"MaxInUse:                 ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[6]);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"NumAllocs:                ",0x1a);
  uVar5 = FUN_0071755c(uVar5,*param_2);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"NumReserves:              ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[1]);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"NumArenaExtensions:       ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[2]);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"NumArenaShrinkages:       ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[3]);
  uVar5 = FUN_00303e0c(uVar5,&DAT_001e2980,1);
  uVar5 = FUN_00303e0c(uVar5,"MaxAllocSize:             ",0x1a);
  uVar5 = FUN_0071755c(uVar5,param_2[7]);
  FUN_00303e0c(uVar5,&DAT_001e2980,1);
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar4 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00567a58  FUN_00567a58 =====

void FUN_00567a58(void)

{
  return;
}


// ===== 00567a5c  FUN_00567a5c =====

void FUN_00567a5c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00567a5c(param_1,*param_2);
    FUN_00567a5c(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 00567aa0  FUN_00567aa0 =====

void FUN_00567aa0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  char *pcVar6;
  size_t sVar7;
  void *pvVar8;
  long *plVar9;
  void *__s;
  long *plVar10;
  void *pvVar11;
  undefined8 local_88;
  size_t local_80;
  void *pvStack_78;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pcVar6 = (char *)(**(code **)(*(long *)*param_1 + 0x10))();
  sVar7 = strlen(pcVar6);
  if (0xfffffffffffffff7 < sVar7) {
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_70);
    }
    goto LAB_00567dc8;
  }
  if (sVar7 < 0x17) {
    pvVar11 = (void *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
    if (sVar7 != 0) goto LAB_00567b40;
  }
  else {
    uVar2 = (sVar7 & 0xfffffffffffffff8) + 8;
    if ((sVar7 | 7) != 0x17) {
      uVar2 = sVar7 | 7;
    }
    pvVar11 = (void *)FUN_00759c3c(uVar2 + 1);
    local_70 = uVar2 + 1 | 1;
    local_68 = sVar7;
    local_60 = pvVar11;
LAB_00567b40:
    memmove(pvVar11,pcVar6,sVar7);
  }
  uVar2 = local_70;
  *(undefined1 *)((long)pvVar11 + sVar7) = 0;
  pvVar11 = local_60;
  sVar7 = local_68;
  if ((local_70 & 1) == 0) {
    pvVar11 = (void *)((long)&local_70 + 1);
    sVar7 = local_70 >> 1 & 0x7f;
  }
  if (9 < (long)sVar7) {
    plVar1 = (long *)((long)pvVar11 + sVar7);
    pvVar8 = pvVar11;
    while (plVar9 = (long *)memchr(pvVar8,99,sVar7 - 9), plVar9 != (long *)0x0) {
      if (*plVar9 == 0x6c6c614d61647563 && (short)plVar9[1] == 0x636f) {
        if ((plVar9 != plVar1) && ((long)plVar9 - (long)pvVar11 != -1)) {
          bVar5 = false;
          goto joined_r0x00567be4;
        }
        break;
      }
      pvVar8 = (void *)((long)plVar9 + 1);
      sVar7 = (long)plVar1 - (long)pvVar8;
      if ((long)sVar7 < 10) break;
    }
  }
  pcVar6 = (char *)(**(code **)(*(long *)*param_1 + 0x10))();
  sVar7 = strlen(pcVar6);
  if (sVar7 < 0xfffffffffffffff8) {
    if (sVar7 < 0x17) {
      pvVar11 = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_00567c60;
    }
    else {
      uVar2 = (sVar7 & 0xfffffffffffffff8) + 8;
      if ((sVar7 | 7) != 0x17) {
        uVar2 = sVar7 | 7;
      }
                    /* try { // try from 00567c48 to 00567c4f has its CatchHandler @ 00567d9c */
      pvVar11 = (void *)FUN_00759c3c(uVar2 + 1);
      local_88 = uVar2 + 1 | 1;
      local_80 = sVar7;
      pvStack_78 = pvVar11;
LAB_00567c60:
      memmove(pvVar11,pcVar6,sVar7);
    }
    pvVar8 = pvStack_78;
    uVar4 = local_88;
    *(undefined1 *)((long)pvVar11 + sVar7) = 0;
    pvVar11 = pvStack_78;
    sVar7 = local_80;
    if ((local_88 & 1) == 0) {
      pvVar11 = (void *)((long)&local_88 + 1);
      sVar7 = local_88 >> 1 & 0x7f;
    }
    if ((long)sVar7 < 9) {
      bVar5 = true;
    }
    else {
      plVar1 = (long *)((long)pvVar11 + sVar7);
      __s = pvVar11;
      do {
        plVar10 = (long *)memchr(__s,0x68,sVar7 - 8);
        plVar9 = plVar1;
        if ((plVar10 == (long *)0x0) ||
           (plVar9 = plVar10, *plVar10 == 0x6f6c6c614d706968 && (char)plVar10[1] == 'c')) break;
        __s = (void *)((long)plVar10 + 1);
        sVar7 = (long)plVar1 - (long)__s;
        plVar9 = plVar1;
      } while (8 < (long)sVar7);
      bVar5 = plVar9 == plVar1 || (long)plVar9 - (long)pvVar11 == -1;
    }
    uVar2 = local_70;
    if ((uVar4 & 1) != 0) {
      free(pvVar8);
      uVar2 = local_70;
    }
joined_r0x00567be4:
    if ((uVar2 & 1) != 0) {
      free(local_60);
    }
    if (!bVar5) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_00567dc8;
    }
    if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_00567dc8;
    FUN_00753dc8();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00567d94 to 00567d9b has its CatchHandler @ 00567d9c */
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&local_88);
  }
LAB_00567dc8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00567dcc  FUN_00567dcc =====

undefined8 * FUN_00567dcc(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  void *__ptr;
  undefined8 *puVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  void *local_80;
  void *local_78;
  void *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined8 *)param_1[1];
  plVar6 = param_1 + 2;
  if (puVar5 < (undefined8 *)*plVar6) {
    if ((long)param_2 - (long)puVar5 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0xffffffffffffffff;
      param_2[4] = 0;
      uVar13 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar13;
      uVar1 = param_3[3];
      *param_3 = 0;
      param_3[1] = 0;
      uVar13 = param_2[2];
      uVar2 = param_2[3];
      param_2[2] = param_3[2];
      param_2[3] = uVar1;
      param_3[2] = uVar13;
      param_3[3] = uVar2;
      uVar13 = param_2[4];
      param_2[4] = param_3[4];
      param_3[4] = uVar13;
      param_1[1] = (long)(param_2 + 5);
    }
    else {
      puVar9 = puVar5 + -5;
      puVar11 = puVar5;
      if (puVar9 < puVar5) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0xffffffffffffffff;
        puVar5[4] = 0;
        *puVar5 = *puVar9;
        puVar5[1] = puVar5[-4];
        *puVar9 = 0;
        puVar5[-4] = 0;
        uVar13 = puVar5[2];
        uVar1 = puVar5[3];
        puVar5[2] = puVar5[-3];
        puVar5[3] = puVar5[-2];
        puVar5[-3] = uVar13;
        puVar5[-2] = uVar1;
        uVar13 = puVar5[4];
        puVar5[4] = puVar5[-1];
        puVar11 = puVar5 + 5;
        puVar5[-1] = uVar13;
      }
      param_1[1] = (long)puVar11;
      if (puVar5 != param_2 + 5) {
        lVar15 = 0;
        do {
          lVar8 = lVar15 + -0x28;
          uVar14 = *(undefined8 *)((long)puVar5 + lVar15 + -0x18);
          uVar13 = *(undefined8 *)((long)puVar5 + lVar15 + -0x50);
          uVar1 = *(undefined8 *)((long)puVar5 + lVar15 + -0x48);
          *(undefined8 *)((long)puVar5 + lVar15 + -0x50) =
               *(undefined8 *)((long)puVar5 + lVar15 + -0x28);
          *(undefined8 *)((long)puVar5 + lVar15 + -0x48) =
               *(undefined8 *)((long)puVar5 + lVar15 + -0x20);
          *(undefined8 *)((long)puVar5 + lVar15 + -0x20) = uVar1;
          *(undefined8 *)((long)puVar5 + lVar15 + -0x18) =
               *(undefined8 *)((long)puVar5 + lVar15 + -0x40);
          uVar1 = *(undefined8 *)((long)puVar5 + lVar15 + -0x10);
          uVar2 = *(undefined8 *)((long)puVar5 + lVar15 + -8);
          *(undefined8 *)((long)puVar5 + lVar15 + -0x10) =
               *(undefined8 *)((long)puVar5 + lVar15 + -0x38);
          *(undefined8 *)((long)puVar5 + lVar15 + -8) =
               *(undefined8 *)((long)puVar5 + lVar15 + -0x30);
          *(undefined8 *)((long)puVar5 + lVar15 + -0x40) = uVar14;
          *(undefined8 *)((long)puVar5 + lVar15 + -0x38) = uVar1;
          *(undefined8 *)((long)puVar5 + lVar15 + -0x30) = uVar2;
          *(undefined8 *)((long)puVar5 + lVar15 + -0x28) = uVar13;
          lVar15 = lVar8;
        } while (((long)param_2 - (long)puVar5) + 0x28 != lVar8);
      }
      uVar1 = param_3[1];
      uVar13 = *param_2;
      uVar2 = param_2[1];
      *param_2 = *param_3;
      param_2[1] = uVar1;
      *param_3 = uVar13;
      param_3[1] = uVar2;
      uVar1 = param_3[3];
      uVar13 = param_2[2];
      uVar2 = param_2[3];
      param_2[2] = param_3[2];
      param_2[3] = uVar1;
      param_3[2] = uVar13;
      param_3[3] = uVar2;
      uVar13 = param_2[4];
      param_2[4] = param_3[4];
      param_3[4] = uVar13;
    }
  }
  else {
    lVar15 = *param_1;
    uVar10 = ((long)puVar5 - lVar15 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar10) {
      if (*(long *)(lVar3 + 0x28) != local_58) goto LAB_005680b0;
      FUN_005686e8();
LAB_00568078:
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      goto LAB_005680b0;
    }
    lVar8 = *plVar6 - lVar15 >> 3;
    uVar12 = lVar8 * -0x6666666666666666;
    if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
      uVar12 = uVar10;
    }
    if (0x333333333333332 < (ulong)(lVar8 * -0x3333333333333333)) {
      uVar12 = 0x666666666666666;
    }
    local_60 = plVar6;
    if (uVar12 == 0) {
      local_80 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar12) goto LAB_00568078;
      local_80 = (void *)FUN_00759c3c(uVar12 * 0x28);
    }
    local_78 = (void *)((long)local_80 + ((long)param_2 - lVar15 >> 3) * 8);
    pvStack_68 = (void *)((long)local_80 + uVar12 * 0x28);
    local_70 = local_78;
                    /* try { // try from 00567fdc to 00567ff7 has its CatchHandler @ 0056808c */
    FUN_005682b4(&local_80,param_3);
    param_2 = (undefined8 *)FUN_005684f0(param_1,&local_80,param_2);
    pvVar4 = local_78;
    while (local_70 != pvVar4) {
      pvVar7 = (void *)((long)local_70 + -0x28);
      __ptr = *(void **)((long)local_70 + -8);
      *(undefined8 *)((long)local_70 + -8) = 0;
      local_70 = pvVar7;
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
    if (local_80 != (void *)0x0) {
      free(local_80);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return param_2;
  }
LAB_005680b0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005680b4  FUN_005680b4 =====

void FUN_005680b4(long *param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  void *__s;
  undefined8 uVar2;
  ulong __n;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [80];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_2 + param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  if ((param_3 & 0xff) == 0) {
    __n = param_3 >> 5;
                    /* try { // try from 005680fc to 00568103 has its CatchHandler @ 0056828c */
    __s = (void *)thunk_FUN_00759c3c(__n);
    memset(__s,0,__n);
    param_1[4] = (long)__s;
    if (param_3 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_48) {
      memset(__s,0xff,__n);
      return;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00568184 to 0056818b has its CatchHandler @ 00568270 */
    FUN_00645c30(auStack_b0);
                    /* try { // try from 0056818c to 005681ab has its CatchHandler @ 00568260 */
    FUN_0047488c(auStack_98,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.h"
                 ,0xee,
                 "onnxruntime::BFCArena::AllocationRegion::AllocationRegion(void *, size_t, int64_t)"
                 ,auStack_b0);
    FUN_00476720(auStack_c8);
                    /* try { // try from 005681b8 to 005681fb has its CatchHandler @ 005681fc */
    FUN_00474a40(uVar2,auStack_98,"0 == memory_size % kMinAllocationSize",auStack_c8);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 005682b4  FUN_005682b4 =====

void FUN_005682b4(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar10 = (undefined8 *)param_1[2];
  puVar12 = puVar10;
  if (puVar10 == (undefined8 *)param_1[3]) {
    puVar9 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if (puVar12 < puVar9 || (long)puVar12 - (long)puVar9 == 0) {
      uVar4 = ((long)puVar10 - (long)puVar9 >> 3) * -0x6666666666666666;
      if ((long)puVar10 - (long)puVar9 == 0) {
        uVar4 = 1;
      }
      if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      lVar3 = FUN_00759c3c(uVar4 * 0x28);
      lVar6 = lVar3 + (uVar4 >> 2) * 0x28;
      lVar5 = lVar3 + uVar4 * 0x28;
      if ((long)puVar10 - (long)puVar12 == 0) {
        *param_1 = lVar3;
        param_1[1] = lVar6;
        param_1[2] = lVar6;
        param_1[3] = lVar5;
      }
      else {
        puVar10 = (undefined8 *)(lVar6 + ((long)puVar10 - (long)puVar12));
        lVar7 = (uVar4 >> 2) * 0x28;
        do {
          uVar8 = puVar12[1];
          puVar9 = (undefined8 *)(lVar3 + lVar7);
          lVar7 = lVar7 + 0x28;
          *puVar9 = *puVar12;
          puVar9[1] = uVar8;
          uVar8 = puVar12[3];
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar8;
          puVar12[2] = 0;
          puVar12[3] = 0xffffffffffffffff;
          puVar9[4] = puVar12[4];
          puVar12[4] = 0;
          puVar12 = puVar12 + 5;
        } while (puVar9 + 5 != puVar10);
        puVar9 = (undefined8 *)*param_1;
        lVar7 = param_1[1];
        lVar11 = param_1[2];
        *param_1 = lVar3;
        param_1[1] = lVar6;
        param_1[2] = (long)puVar10;
        param_1[3] = lVar5;
        for (; lVar11 != lVar7; lVar11 = lVar11 + -0x28) {
          __ptr = *(void **)(lVar11 + -8);
          *(undefined8 *)(lVar11 + -8) = 0;
          if (__ptr != (void *)0x0) {
            free(__ptr);
          }
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        free(puVar9);
      }
      puVar12 = (undefined8 *)param_1[2];
    }
    else {
      lVar3 = ((long)puVar12 - (long)puVar9 >> 3) * -0x3333333333333333;
      lVar5 = lVar3 + 2;
      if (lVar3 + 1 < 0 == SCARRY8(lVar3,1)) {
        lVar5 = lVar3 + 1;
      }
      lVar5 = lVar5 >> 1;
      if (puVar12 == puVar10) {
        puVar12 = puVar12 + lVar5 * -5;
      }
      else {
        do {
          puVar9 = puVar12 + lVar5 * -5;
          uVar1 = puVar12[1];
          uVar8 = *puVar9;
          uVar2 = puVar9[1];
          *puVar9 = *puVar12;
          puVar9[1] = uVar1;
          *puVar12 = uVar8;
          puVar12[1] = uVar2;
          uVar1 = puVar12[3];
          uVar8 = puVar9[2];
          uVar2 = puVar9[3];
          puVar9[2] = puVar12[2];
          puVar9[3] = uVar1;
          puVar12[2] = uVar8;
          puVar12[3] = uVar2;
          uVar8 = puVar9[4];
          puVar9[4] = puVar12[4];
          puVar12[4] = uVar8;
          puVar12 = puVar12 + 5;
        } while (puVar12 != puVar10);
        puVar10 = (undefined8 *)param_1[1];
        puVar12 = puVar12 + lVar5 * -5;
      }
      param_1[1] = (long)(puVar10 + lVar5 * -5);
      param_1[2] = (long)puVar12;
    }
  }
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0xffffffffffffffff;
  puVar12[4] = 0;
  uVar8 = param_2[1];
  *puVar12 = *param_2;
  puVar12[1] = uVar8;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = param_2[3];
  uVar8 = puVar12[2];
  uVar2 = puVar12[3];
  puVar12[2] = param_2[2];
  puVar12[3] = uVar1;
  param_2[2] = uVar8;
  uVar8 = puVar12[4];
  param_2[3] = uVar2;
  puVar12[4] = param_2[4];
  param_2[4] = uVar8;
  param_1[2] = param_1[2] + 0x28;
  return;
}


// ===== 005684f0  FUN_005684f0 =====

undefined8 FUN_005684f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar10 = (undefined8 *)param_1[1];
  uVar9 = param_2[1];
  if (puVar10 != param_3) {
    puVar5 = (undefined8 *)param_2[2];
    puVar7 = param_3;
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[3] = 0xffffffffffffffff;
      puVar5[4] = 0;
      puVar5[2] = 0;
      uVar8 = puVar7[1];
      *puVar5 = *puVar7;
      puVar5[1] = uVar8;
      *puVar7 = 0;
      puVar7[1] = 0;
      uVar1 = puVar7[3];
      uVar8 = puVar5[2];
      uVar2 = puVar5[3];
      puVar5[2] = puVar7[2];
      puVar5[3] = uVar1;
      puVar7[2] = uVar8;
      puVar7[3] = uVar2;
      uVar8 = puVar5[4];
      puVar5[4] = puVar7[4];
      puVar5 = puVar5 + 5;
      puVar7[4] = uVar8;
      puVar7 = puVar7 + 5;
      puVar6 = param_3;
    } while (puVar7 != puVar10);
    do {
      pvVar4 = (void *)puVar6[4];
      puVar6[4] = 0;
      if (pvVar4 != (void *)0x0) {
        free(pvVar4);
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar10);
  }
  puVar5 = (undefined8 *)*param_1;
  lVar3 = param_1[1];
  param_1[1] = param_3;
  puVar7 = (undefined8 *)(param_2[1] + ((long)puVar5 - (long)param_3));
  param_2[2] = param_2[2] + (lVar3 - (long)param_3);
  puVar6 = puVar7;
  puVar10 = puVar5;
  if ((long)puVar5 - (long)param_3 != 0) {
    do {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[3] = 0xffffffffffffffff;
      puVar6[4] = 0;
      puVar6[2] = 0;
      uVar8 = puVar10[1];
      *puVar6 = *puVar10;
      puVar6[1] = uVar8;
      *puVar10 = 0;
      puVar10[1] = 0;
      uVar1 = puVar10[3];
      uVar8 = puVar6[2];
      uVar2 = puVar6[3];
      puVar6[2] = puVar10[2];
      puVar6[3] = uVar1;
      puVar10[2] = uVar8;
      puVar10[3] = uVar2;
      uVar8 = puVar6[4];
      puVar6[4] = puVar10[4];
      puVar10[4] = uVar8;
      puVar10 = puVar10 + 5;
      puVar6 = puVar6 + 5;
    } while (puVar10 != param_3);
    do {
      pvVar4 = (void *)puVar5[4];
      puVar5[4] = 0;
      if (pvVar4 != (void *)0x0) {
        free(pvVar4);
      }
      puVar5 = puVar5 + 5;
    } while (puVar5 != param_3);
  }
  param_2[1] = puVar7;
  uVar8 = *param_1;
  *param_1 = puVar7;
  param_1[1] = uVar8;
  param_2[1] = uVar8;
  uVar8 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar8;
  uVar8 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar8;
  *param_2 = param_2[1];
  return uVar9;
}


// ===== 00568688  FUN_00568688 =====

void FUN_00568688(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    __ptr = *(void **)(lVar2 + -8);
    *(undefined8 *)(lVar2 + -8) = 0;
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 005686e8  FUN_005686e8 =====

void FUN_005686e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 005686fc  FUN_005686fc =====

void FUN_005686fc(long *param_1,ulong param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  byte local_210 [16];
  void *local_200;
  byte local_1f0;
  void *local_1e0;
  byte *local_1d8;
  byte *local_1d0;
  undefined1 auStack_1c0 [112];
  undefined1 auStack_150 [264];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  lVar8 = param_1[1] - lVar4;
  if (lVar8 != 0) {
    uVar6 = (lVar8 >> 3) * -0x3333333333333333;
    do {
      uVar7 = uVar6 >> 1;
      lVar8 = lVar4 + uVar7 * 0x28;
      if (*(ulong *)(lVar8 + 0x10) <= param_2) {
        lVar4 = lVar8 + 0x28;
        uVar7 = uVar6 + ~uVar7;
      }
      uVar6 = uVar7;
    } while (uVar6 != 0);
  }
  if (lVar4 == param_1[1]) {
    lVar4 = FUN_00488994();
    if (*(int *)(lVar4 + 0x20) < 5) {
      uVar5 = FUN_00488994();
      uVar9 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
      FUN_0048a3f4(local_210,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.h"
                   ,0x165,"RegionFor");
                    /* try { // try from 005687c4 to 005687e3 has its CatchHandler @ 005688a0 */
      FUN_0048a554(auStack_1c0,uVar5,4,uVar9,0,local_210);
                    /* try { // try from 005687e4 to 005687ff has its CatchHandler @ 005688a8 */
      uVar5 = FUN_00303e0c(auStack_150,"Could not find Region for ",0x1a);
      FUN_00717a0c(uVar5,param_2);
      FUN_00637fac(auStack_1c0);
      pbVar3 = local_1d8;
      if (local_1d8 != (byte *)0x0) {
        while (pbVar2 = local_1d0, pbVar2 != pbVar3) {
          local_1d0 = pbVar2 + -0x18;
          if ((*local_1d0 & 1) != 0) {
            free(*(void **)(pbVar2 + -8));
          }
        }
        local_1d0 = pbVar3;
        free(local_1d8);
      }
      if ((local_1f0 & 1) != 0) {
        free(local_1e0);
      }
      if ((local_210[0] & 1) != 0) {
        free(local_200);
      }
    }
    lVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4);
  }
  return;
}


// ===== 005688d8  FUN_005688d8 =====

ulong FUN_005688d8(ulong *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_1;
  if (param_2 < uVar3) {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 00568950 to 00568957 has its CatchHandler @ 00568ad4 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 00568958 to 00568977 has its CatchHandler @ 00568ac0 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.h"
                 ,0x118,"int onnxruntime::BFCArena::AllocationRegion::IndexFor(const void *) const",
                 auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 00568984 to 005689cb has its CatchHandler @ 00568a64 */
    FUN_00474a40(uVar2,auStack_88,"p_int >= base_int",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else if (param_2 < param_1[1] + uVar3) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return param_2 - uVar3 >> 8;
    }
  }
  else {
    uVar2 = FUN_00753a74(0x88);
                    /* try { // try from 005689e0 to 005689e7 has its CatchHandler @ 00568ad0 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 005689e8 to 00568a07 has its CatchHandler @ 00568a60 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/bfc_arena.h"
                 ,0x119,"int onnxruntime::BFCArena::AllocationRegion::IndexFor(const void *) const",
                 auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 00568a14 to 00568a5b has its CatchHandler @ 00568a5c */
    FUN_00474a40(uVar2,auStack_88,"p_int < base_int + memory_size_",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00568af8  FUN_00568af8 =====

long * FUN_00568af8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar9 = NEON_cnt(uVar3,1);
    uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar5 = uVar4 & uVar3 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar6 < 2) {
        do {
          if (uVar4 - plVar7[1] == 0) {
            if (plVar7[2] == uVar2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar6 = plVar7[1];
        if (uVar4 - uVar6 == 0) {
          if (plVar7[2] == uVar2) {
            return plVar7;
          }
        }
        else {
          if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar1 * uVar3;
          }
          if (uVar6 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 00568c08  FUN_00568c08 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00568c08(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 00568c7c to 00568c87 has its CatchHandler @ 00568dac */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 00568ca0 to 00568ca7 has its CatchHandler @ 00568d8c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 00568cdc to 00568ce7 has its CatchHandler @ 00568d88 */
  FUN_00303e0c(local_170,__s,sVar5);
                    /* try { // try from 00568cec to 00568cf3 has its CatchHandler @ 00568d84 */
  FUN_00717a0c(local_170,*param_3);
                    /* try { // try from 00568cf4 to 00568cff has its CatchHandler @ 00568d80 */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar4 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00568dc0  FUN_00568dc0 =====

void FUN_00568dc0(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  void *__dest;
  
  puVar3 = (undefined8 *)param_1[1];
  if ((ulong)((param_1[2] - (long)puVar3 >> 3) * -0x71c71c71c71c71c7) < param_2) {
    lVar2 = (long)puVar3 - *param_1 >> 3;
    uVar1 = lVar2 * -0x71c71c71c71c71c7 + param_2;
    if (0x38e38e38e38e38e < uVar1) {
      FUN_00568f74(param_1);
LAB_00568f70:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar5 * 0x1c71c71c71c71c72;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar5 * -0x71c71c71c71c71c7)) {
      uVar6 = 0x38e38e38e38e38e;
    }
    if (uVar6 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x38e38e38e38e38e < uVar6) goto LAB_00568f70;
      lVar5 = FUN_00759c3c(uVar6 * 0x48);
    }
    puVar4 = (undefined8 *)(lVar5 + lVar2 * 8);
    puVar3 = puVar4;
    do {
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[2] = 0xffffffffffffffff;
      puVar3[4] = 0xffffffffffffffff;
      puVar3[5] = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 6) = 0xffffffff;
      puVar3[8] = 0;
      puVar3 = puVar3 + 9;
    } while (puVar3 != puVar4 + param_2 * 9);
    __src = (void *)*param_1;
    __dest = (void *)((long)puVar4 - (param_1[1] - (long)__src));
    memcpy(__dest,__src,param_1[1] - (long)__src);
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar4 + param_2 * 9);
    param_1[2] = lVar5 + uVar6 * 0x48;
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    puVar4 = puVar3;
    if (param_2 != 0) {
      puVar4 = puVar3 + param_2 * 9;
      do {
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[2] = 0xffffffffffffffff;
        puVar3[4] = 0xffffffffffffffff;
        puVar3[5] = 0xffffffffffffffff;
        *(undefined4 *)(puVar3 + 6) = 0xffffffff;
        puVar3[8] = 0;
        puVar3 = puVar3 + 9;
      } while (puVar3 != puVar4);
    }
    param_1[1] = (long)puVar4;
  }
  return;
}


// ===== 00568f74  FUN_00568f74 =====

void FUN_00568f74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00568f88  FUN_00568f88 =====

long * FUN_00568f88(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar9 = NEON_cnt(uVar3,1);
    uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar5 = uVar4 & uVar3 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (plVar7[2] == uVar2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar6 = plVar7[1];
        if (uVar6 == uVar4) {
          if (plVar7[2] == uVar2) {
            return plVar7;
          }
        }
        else {
          if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar1 * uVar3;
          }
          if (uVar6 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 00569098  FUN_00569098 =====

undefined1  [16] FUN_00569098(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar2 = *param_2;
  uVar8 = param_1[1];
  uVar5 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar5 = (uVar2 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  uVar5 = uVar5 ^ uVar5 >> 0x2f;
  uVar9 = uVar5 * -0x622015f714c7d297;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = uVar9 & uVar8 - 1;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar1 * uVar8;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar9) {
            if (plVar6[2] == uVar2) {
LAB_005691c4:
              auVar13._8_8_ = 0;
              auVar13._0_8_ = plVar6;
              return auVar13;
            }
          }
          else if ((plVar6[1] & uVar8 - 1) != unaff_x24) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar9) {
            if (plVar6[2] == uVar2) goto LAB_005691c4;
          }
          else {
            if (uVar8 <= uVar7) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar1 * uVar8;
            }
            if (uVar7 != unaff_x24) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  auVar14._0_8_ = (long *)FUN_00759c3c(0x20);
  lVar3 = param_1[3];
  fVar12 = *(float *)(param_1 + 4);
  *auVar14._0_8_ = 0;
  auVar14._0_8_[1] = uVar9;
  lVar4 = param_3[1];
  auVar14._0_8_[2] = *param_3;
  auVar14._0_8_[3] = lVar4;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar3 + 1))) {
    if (uVar8 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar2 = uVar2 | uVar8 << 1;
    uVar7 = (ulong)((float)(lVar3 + 1) / fVar12);
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
                    /* try { // try from 00569280 to 00569303 has its CatchHandler @ 005693e0 */
      uVar2 = FUN_00711ce0(uVar2);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar2) {
LAB_00569298:
      FUN_005693f4(param_1,uVar2);
    }
    else if (uVar2 < uVar8) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_00569300:
        uVar7 = FUN_00711ce0();
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff)) goto LAB_00569300;
        if (1 < uVar7) {
          uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar7) {
        uVar2 = uVar7;
      }
      if (uVar2 < uVar8) goto LAB_00569298;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
      lVar4 = *param_1;
      plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
      goto joined_r0x0056937c;
    }
    if (uVar9 < uVar8) {
      lVar4 = *param_1;
      plVar6 = *(long **)(lVar4 + uVar5 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar9;
      goto joined_r0x0056937c;
    }
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar9 / uVar8;
    }
    unaff_x24 = uVar9 - uVar2 * uVar8;
    lVar4 = *param_1;
    plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
    if (plVar6 == (long *)0x0) goto LAB_00569334;
LAB_00569228:
    *auVar14._0_8_ = *plVar6;
  }
  else {
    lVar4 = *param_1;
    plVar6 = *(long **)(lVar4 + unaff_x24 * 8);
joined_r0x0056937c:
    if (plVar6 != (long *)0x0) goto LAB_00569228;
LAB_00569334:
    plVar6 = param_1 + 2;
    lVar3 = *plVar6;
    *plVar6 = (long)auVar14._0_8_;
    *auVar14._0_8_ = lVar3;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar6;
    if (*auVar14._0_8_ == 0) goto LAB_005693b8;
    uVar2 = *(ulong *)(*auVar14._0_8_ + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar2 = uVar2 & uVar8 - 1;
    }
    else if (uVar8 <= uVar2) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar2 / uVar8;
      }
      uVar2 = uVar2 - uVar5 * uVar8;
    }
    plVar6 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar6 = (long)auVar14._0_8_;
LAB_005693b8:
  param_1[3] = param_1[3] + 1;
  auVar14._8_8_ = 1;
  return auVar14;
}


// ===== 005693f4  FUN_005693f4 =====

void FUN_005693f4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_00569578:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_00569578;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 005695cc  FUN_005695cc =====

void FUN_005695cc(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00569698;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_00569698;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00569698:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 00569700  FUN_00569700 =====

long * FUN_00569700(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  plVar4 = *(long **)(param_1 + 8);
  plVar5 = (long *)(param_1 + 8);
  while (plVar8 = plVar5, plVar4 != (long *)0x0) {
    while( true ) {
      plVar8 = plVar4;
      lVar6 = plVar8[4];
      puVar2 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),*param_3);
      puVar3 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),lVar6);
      bVar1 = *puVar3 <= *puVar2;
      if (*puVar2 == *puVar3) {
        bVar1 = puVar3[3] <= puVar2[3];
      }
      if (!bVar1) break;
      uVar7 = *param_3;
      puVar2 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),plVar8[4]);
      puVar3 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),uVar7);
      bVar1 = *puVar3 <= *puVar2;
      if (*puVar2 == *puVar3) {
        bVar1 = puVar3[3] <= puVar2[3];
      }
      if (bVar1) goto LAB_005697e0;
      plVar5 = plVar8 + 1;
      plVar4 = (long *)*plVar5;
      if ((long *)*plVar5 == (long *)0x0) goto LAB_005697e0;
    }
    plVar5 = plVar8;
    plVar4 = (long *)*plVar8;
  }
LAB_005697e0:
  *param_2 = plVar8;
  return plVar5;
}


// ===== 00569800  FUN_00569800 =====

long * FUN_00569800(long param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)(param_1 + 8);
  plVar8 = (long *)*plVar7;
  plVar5 = plVar7;
  if (plVar8 != (long *)0x0) {
    do {
      uVar6 = *param_2;
      puVar2 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),plVar8[4]);
      puVar3 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),uVar6);
      bVar1 = *puVar3 <= *puVar2;
      if (*puVar2 == *puVar3) {
        bVar1 = puVar3[3] <= puVar2[3];
      }
      if (bVar1) {
        lVar4 = 0;
        plVar5 = plVar8;
      }
      else {
        lVar4 = 8;
      }
      plVar8 = *(long **)((long)plVar8 + lVar4);
    } while (plVar8 != (long *)0x0);
    if (plVar5 != plVar7) {
      lVar4 = plVar5[4];
      puVar2 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),*param_2);
      puVar3 = (ulong *)FUN_00561c18(*(undefined8 *)(param_1 + 0x18),lVar4);
      bVar1 = *puVar3 <= *puVar2;
      if (*puVar2 == *puVar3) {
        bVar1 = puVar3[3] <= puVar2[3];
      }
      if (bVar1) {
        return plVar5;
      }
    }
  }
  return plVar7;
}


// ===== 0056990c  FUN_0056990c =====

void FUN_0056990c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0056990c(param_1,*param_2);
    FUN_0056990c(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 00569950  FUN_00569950 =====

void FUN_00569950(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00569960 to 005699b7 has its CatchHandler @ 005699cc */
  lVar1 = FUN_0056a118();
  if (lVar1 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    return;
  }
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    param_1[2] = *(undefined8 *)(lVar1 + 0x38);
    param_1[1] = uVar3;
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  FUN_002fb36c(param_1,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x30));
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}


// ===== 005699d0  FUN_005699d0 =====

void FUN_005699d0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*param_3 & 1) == 0) {
    param_3[0] = 0;
    param_3[1] = 0;
  }
  else {
    **(undefined1 **)(param_3 + 0x10) = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
  }
                    /* try { // try from 00569a10 to 00569a47 has its CatchHandler @ 00569aa0 */
  lVar2 = FUN_0056a118();
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      uStack_58 = *(undefined8 *)(lVar2 + 0x30);
      local_60 = *(undefined8 *)(lVar2 + 0x28);
      local_50 = *(undefined8 *)(lVar2 + 0x38);
    }
    else {
      FUN_002fb36c(&local_60,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x30));
    }
    local_48 = 1;
    if ((*param_3 & 1) != 0) {
      free(*(void **)(param_3 + 0x10));
    }
    *(undefined8 *)(param_3 + 8) = uStack_58;
    *(undefined8 *)param_3 = local_60;
    *(undefined8 *)(param_3 + 0x10) = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 != 0);
}


// ===== 00569aa4  FUN_00569aa4 =====

void FUN_00569aa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00569acc to 00569b3b has its CatchHandler @ 00569b88 */
  lVar2 = FUN_0056a118();
  if (lVar2 == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        uVar4 = *(undefined8 *)param_4;
        uVar3 = *(undefined8 *)(param_4 + 0x10);
        param_1[1] = *(undefined8 *)(param_4 + 8);
        *param_1 = uVar4;
        param_1[2] = uVar3;
        return;
      }
      goto LAB_00569b80;
    }
                    /* try { // try from 00569b54 to 00569b5b has its CatchHandler @ 00569b84 */
    FUN_002fb36c(param_1,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
  }
  else {
    if ((*(byte *)(lVar2 + 0x28) & 1) == 0) {
      uStack_58 = *(undefined8 *)(lVar2 + 0x30);
      local_60 = *(undefined8 *)(lVar2 + 0x28);
      local_50 = *(undefined8 *)(lVar2 + 0x38);
    }
    else {
      FUN_002fb36c(&local_60,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x30));
    }
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[2] = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00569b80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00569b8c  FUN_00569b8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00569b8c(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  undefined8 uVar13;
  void *pvVar14;
  char *pcVar15;
  char *local_260 [2];
  void *local_250;
  byte local_240;
  void *local_230;
  byte *local_228;
  byte *local_220;
  undefined8 *local_210;
  size_t sStack_208;
  char *local_200;
  undefined8 local_1f8;
  size_t local_1f0;
  void *local_1e8;
  undefined8 *local_1e0;
  size_t sStack_1d8;
  char *local_1d0;
  undefined1 auStack_170 [264];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  sVar8 = strlen(param_3);
  if (0xfffffffffffffff7 < sVar8) {
    ppuVar12 = (undefined8 **)&local_1f8;
LAB_0056a058:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(ppuVar12);
    }
    goto LAB_0056a06c;
  }
  if (sVar8 < 0x17) {
    pvVar14 = (void *)((ulong)&local_1f8 | 1);
    local_1f8 = (undefined8 *)CONCAT71(local_1f8._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00569c2c;
  }
  else {
    uVar1 = (sVar8 & 0xfffffffffffffff8) + 8;
    if ((sVar8 | 7) != 0x17) {
      uVar1 = sVar8 | 7;
    }
                    /* try { // try from 00569c14 to 00569c1b has its CatchHandler @ 0056a070 */
    pvVar14 = (void *)FUN_00759c3c(uVar1 + 1);
    local_1f8 = (undefined8 *)(uVar1 + 1 | 1);
    local_1f0 = sVar8;
    local_1e8 = pvVar14;
LAB_00569c2c:
    memcpy(pvVar14,param_3,sVar8);
  }
  *(undefined1 *)((long)pvVar14 + sVar8) = 0;
  sVar8 = (ulong)local_1f8 >> 1 & 0x7f;
  if (((ulong)local_1f8 & 1) != 0) {
    sVar8 = local_1f0;
  }
  if (sVar8 - 0x81 < 0xffffffffffffff80) {
                    /* try { // try from 00569c60 to 00569d13 has its CatchHandler @ 0056a070 */
    local_1d0 = (char *)FUN_00759c3c(0x38);
    uVar4 = s_Config_key_is_empty_or_longer_th_001d50da._24_8_;
    uVar13 = s_Config_key_is_empty_or_longer_th_001d50da._16_8_;
    uVar11 = s_Config_key_is_empty_or_longer_th_001d50da._0_8_;
    sStack_1d8 = _UNK_00200998;
    local_1e0 = _DAT_00200990;
    *(undefined8 *)(local_1d0 + 8) = s_Config_key_is_empty_or_longer_th_001d50da._8_8_;
    *(undefined8 *)local_1d0 = uVar11;
    *(undefined8 *)(local_1d0 + 0x18) = uVar4;
    *(undefined8 *)(local_1d0 + 0x10) = uVar13;
    uVar4 = s_Config_key_is_empty_or_longer_th_001d50da._32_8_;
    uVar11 = CONCAT35(s_Config_key_is_empty_or_longer_th_001d50da._45_3_,
                      s_Config_key_is_empty_or_longer_th_001d50da._40_5_);
    uVar13 = CONCAT53(s_Config_key_is_empty_or_longer_th_001d50da._48_5_,
                      s_Config_key_is_empty_or_longer_th_001d50da._45_3_);
    local_1d0[0x35] = '\0';
    *(undefined8 *)(local_1d0 + 0x28) = uVar11;
    *(undefined8 *)(local_1d0 + 0x20) = uVar4;
    *(undefined8 *)(local_1d0 + 0x2d) = uVar13;
    FUN_0063aa48(param_1,2,2,&local_1e0);
    pcVar15 = local_1d0;
    if (((ulong)local_1e0 & 1) != 0) {
LAB_0056a000:
      free(pcVar15);
    }
  }
  else {
    sVar8 = strlen(param_4);
    if (0xfffffffffffffff7 < sVar8) {
      ppuVar12 = &local_210;
      goto LAB_0056a058;
    }
    if (sVar8 < 0x17) {
      pcVar15 = (char *)((ulong)&local_210 | 1);
      local_210 = (undefined8 *)CONCAT71(local_210._1_7_,(char)((int)sVar8 << 1));
      if (sVar8 != 0) goto LAB_00569d24;
    }
    else {
      uVar1 = (sVar8 & 0xfffffffffffffff8) + 8;
      if ((sVar8 | 7) != 0x17) {
        uVar1 = sVar8 | 7;
      }
      pcVar15 = (char *)FUN_00759c3c(uVar1 + 1);
      local_210 = (undefined8 *)(uVar1 + 1 | 1);
      sStack_208 = sVar8;
      local_200 = pcVar15;
LAB_00569d24:
      memcpy(pcVar15,param_4,sVar8);
    }
    pcVar15[sVar8] = '\0';
    bVar7 = ((ulong)local_210 & 1) != 0;
    bVar6 = 0x800 < sStack_208;
    if (bVar7 && bVar6) {
      local_260[0] = "Config value is longer than maximum length: ";
      FUN_004fbd40(&local_1e0,local_260,&DAT_0020f228);
                    /* try { // try from 00569da8 to 00569def has its CatchHandler @ 0056a070 */
      FUN_0063aa48(param_1,2,2,&local_1e0);
      pcVar15 = local_200;
      if (((ulong)local_1e0 & 1) != 0) {
        free(local_1d0);
        pcVar15 = local_200;
      }
      goto LAB_0056a000;
    }
    sVar8 = strlen(param_3);
    if (0xfffffffffffffff7 < sVar8) {
      ppuVar12 = &local_1e0;
      goto LAB_0056a058;
    }
    if (sVar8 < 0x17) {
      pcVar15 = (char *)((ulong)&local_1e0 | 1);
      local_1e0 = (undefined8 *)CONCAT71(local_1e0._1_7_,(char)((int)sVar8 << 1));
      if (sVar8 != 0) goto LAB_00569e00;
    }
    else {
      uVar1 = (sVar8 & 0xfffffffffffffff8) + 8;
      if ((sVar8 | 7) != 0x17) {
        uVar1 = sVar8 | 7;
      }
      pcVar15 = (char *)FUN_00759c3c(uVar1 + 1);
      local_1e0 = (undefined8 *)(uVar1 + 1 | 1);
      sStack_1d8 = sVar8;
      local_1d0 = pcVar15;
LAB_00569e00:
      memcpy(pcVar15,param_3,sVar8);
    }
    pcVar15[sVar8] = '\0';
                    /* try { // try from 00569e14 to 0056a06b has its CatchHandler @ 0056a070 */
    lVar9 = FUN_00487224(param_2,&local_1e0);
    if (((ulong)local_1e0 & 1) != 0) {
      free(local_1d0);
    }
    if (lVar9 == 0) {
      local_1e0 = &local_1f8;
      lVar9 = FUN_00488378(param_2,&local_1f8,PTR_DAT_007a10e8,&local_1e0,local_260);
      if ((*(byte *)(lVar9 + 0x28) & 1) != 0) {
        free(*(void **)(lVar9 + 0x38));
      }
      *param_1 = 0;
      *(size_t *)(lVar9 + 0x30) = sStack_208;
      *(undefined8 **)(lVar9 + 0x28) = local_210;
      *(char **)(lVar9 + 0x38) = local_200;
    }
    else {
      lVar10 = FUN_00488994();
      if (*(int *)(lVar10 + 0x20) < 3) {
        uVar11 = FUN_00488994();
        uVar13 = *(undefined8 *)PTR_PTR_s_onnxruntime_007a1f28;
        FUN_0048a3f4(local_260,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/config_options.cc"
                     ,0x2d,"AddConfigEntry");
        FUN_0048a554(&local_1e0,uVar11,2,uVar13,0,local_260);
        uVar11 = FUN_00303e0c(auStack_170,"Config with key [",0x11);
        sVar8 = local_1f0;
        pvVar14 = local_1e8;
        if (((ulong)local_1f8 & 1) == 0) {
          sVar8 = (ulong)local_1f8 >> 1 & 0x7f;
          pvVar14 = (void *)((long)&local_1f8 + 1);
        }
        uVar11 = FUN_00303e0c(uVar11,pvVar14,sVar8);
        uVar11 = FUN_00303e0c(uVar11,"] already exists with value [",0x1d);
        uVar1 = (ulong)(*(byte *)(lVar9 + 0x28) >> 1);
        lVar10 = lVar9 + 0x29;
        if ((*(byte *)(lVar9 + 0x28) & 1) != 0) {
          uVar1 = *(ulong *)(lVar9 + 0x30);
          lVar10 = *(long *)(lVar9 + 0x38);
        }
        uVar11 = FUN_00303e0c(uVar11,lVar10,uVar1);
        FUN_00303e0c(uVar11,"]. It will be overwritten",0x19);
        FUN_00637fac(&local_1e0);
        pbVar5 = local_228;
        if (local_228 != (byte *)0x0) {
          while (pbVar3 = local_220, pbVar3 != pbVar5) {
            local_220 = pbVar3 + -0x18;
            if ((*local_220 & 1) != 0) {
              free(*(void **)(pbVar3 + -8));
            }
          }
          local_220 = pbVar5;
          free(local_228);
        }
        if ((local_240 & 1) != 0) {
          free(local_230);
        }
        if (((ulong)local_260[0] & 1) != 0) {
          free(local_250);
        }
      }
      if ((*(byte *)(lVar9 + 0x28) & 1) != 0) {
        free(*(void **)(lVar9 + 0x38));
      }
      *param_1 = 0;
      *(size_t *)(lVar9 + 0x30) = sStack_208;
      *(undefined8 **)(lVar9 + 0x28) = local_210;
      *(char **)(lVar9 + 0x38) = local_200;
      pcVar15 = local_200;
      if (bVar7 && bVar6) goto LAB_0056a000;
    }
  }
  if (((ulong)local_1f8 & 1) != 0) {
    free(local_1e8);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0056a06c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056a074  FUN_0056a074 =====

undefined8 FUN_0056a074(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  for (plVar4 = *(long **)(param_2 + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    uVar3 = FUN_00303e0c(param_1,&DAT_001e7ed8,2);
    uVar1 = (ulong)(*(byte *)(plVar4 + 2) >> 1);
    lVar2 = (long)plVar4 + 0x11;
    if ((*(byte *)(plVar4 + 2) & 1) != 0) {
      uVar1 = plVar4[3];
      lVar2 = plVar4[4];
    }
    uVar3 = FUN_00303e0c(uVar3,lVar2,uVar1);
    uVar3 = FUN_00303e0c(uVar3,&DAT_001f2fbc,2);
    uVar1 = (ulong)(*(byte *)(plVar4 + 5) >> 1);
    lVar2 = (long)plVar4 + 0x29;
    if ((*(byte *)(plVar4 + 5) & 1) != 0) {
      uVar1 = plVar4[6];
      lVar2 = plVar4[7];
    }
    FUN_00303e0c(uVar3,lVar2,uVar1);
  }
  return param_1;
}


// ===== 0056a118  FUN_0056a118 =====

long * FUN_0056a118(long *param_1,byte *param_2)

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
  undefined2 uVar13;
  undefined8 uVar14;
  undefined1 uStack_59;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
    uVar8 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0056a160 to 0056a167 has its CatchHandler @ 0056a368 */
  uVar8 = FUN_0034bfb4(&uStack_59,pbVar3,uVar8);
  uVar12 = param_1[1];
  if (uVar12 == 0) {
LAB_0056a330:
    plVar9 = (long *)0x0;
  }
  else {
    uVar14 = NEON_cnt(uVar12,1);
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar10 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar10 < 2) {
      uVar11 = uVar12 - 1 & uVar8;
    }
    else {
      uVar11 = uVar8;
      if (uVar12 <= uVar8) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar8 / uVar12;
        }
        uVar11 = uVar8 - uVar11 * uVar12;
      }
    }
    plVar9 = *(long **)(*param_1 + uVar11 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      sVar1 = (ulong)(*param_2 >> 1);
      pbVar3 = param_2 + 1;
      if ((*param_2 & 1) != 0) {
        sVar1 = *(size_t *)(param_2 + 8);
        pbVar3 = *(byte **)(param_2 + 0x10);
      }
      if (uVar10 < 2) {
        do {
          if (uVar8 == plVar9[1]) {
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
                  if (bVar4 >> 1 == uVar10) goto LAB_0056a334;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else if ((plVar9[1] & uVar12 - 1) != uVar11) goto LAB_0056a330;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
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
                  if (bVar4 >> 1 == uVar10) goto LAB_0056a334;
                }
              }
              else {
                iVar7 = memcmp((void *)plVar9[4],pbVar3,plVar9[3]);
                if (iVar7 == 0) break;
              }
            }
          }
          else {
            if (uVar12 <= uVar10) {
              uVar5 = 0;
              if (uVar12 != 0) {
                uVar5 = uVar10 / uVar12;
              }
              uVar10 = uVar10 - uVar5 * uVar12;
            }
            if (uVar10 != uVar11) goto LAB_0056a330;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_0056a334:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056a36c  FUN_0056a36c =====

void FUN_0056a36c(ulong *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(param_2 + 0x18);
  if (uVar5 < 7) {
    if (uVar5 == 0) {
      *param_1 = 0;
      return;
    }
    uVar6 = 0;
    puVar2 = param_1 + 1;
  }
  else {
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar6 = uVar5;
    if (uVar5 < 0xd) {
      uVar6 = 0xc;
    }
    puVar2 = (ulong *)FUN_00759c3c(uVar6 << 3);
    param_1[1] = (ulong)puVar2;
    param_1[2] = uVar6;
    uVar6 = 1;
  }
  memset(puVar2,0,uVar5 << 3);
  lVar3 = *(long *)(param_2 + 0x20);
  uVar4 = 1;
  *param_1 = uVar6 | uVar5 << 1;
  uVar5 = uVar5 - 1;
  while( true ) {
    puVar2 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      puVar2 = (ulong *)param_1[1];
    }
    puVar2[uVar5] = uVar4;
    if (*(ulong *)(param_2 + 0x18) <= uVar5) break;
    lVar1 = uVar5 * 8;
    uVar5 = uVar5 - 1;
    uVar4 = *(long *)(lVar3 + lVar1) * uVar4;
    if (uVar5 == 0xffffffffffffffff) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_004839bc();
}


// ===== 0056a444  FUN_0056a444 =====

void FUN_0056a444(undefined8 *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined8 extraout_x1_01;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  
  uVar5 = *param_2;
  if (uVar5 < 4) {
    lVar11 = 1;
    FUN_004ed958(param_2,param_2,1);
    lVar6 = param_1[1];
    uVar2 = extraout_x1;
  }
  else {
    uVar8 = 0;
    puVar1 = param_2 + 1;
    uVar7 = 1;
    do {
      uVar15 = *param_2;
      puVar10 = (ulong *)param_2[1];
      uVar13 = uVar15 & 1;
      puVar12 = puVar1;
      if (uVar13 != 0) {
        puVar12 = puVar10;
      }
      if ((((1 < uVar15) && (puVar12 == (ulong *)0x0)) || (uVar15 >> 1 <= uVar8)) ||
         (uVar15 >> 1 <= uVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_004839bc();
      }
      plVar9 = (long *)*param_1;
      lVar11 = param_1[1];
      uVar15 = puVar12[uVar7];
      if ((puVar12[uVar8] == 1) || (uVar15 == 1)) {
LAB_0056a52c:
        if ((uVar15 != 1) && (lVar11 != 0)) {
          lVar11 = lVar11 << 3;
          do {
            puVar12 = (ulong *)*plVar9 + 1;
            if ((*(ulong *)*plVar9 & 1) != 0) {
              puVar12 = (ulong *)*puVar12;
            }
            lVar11 = lVar11 + -8;
            puVar12[uVar8] = puVar12[uVar7];
            plVar9 = plVar9 + 1;
          } while (lVar11 != 0);
          puVar10 = (ulong *)param_2[1];
          uVar13 = *param_2 & 1;
        }
      }
      else if (lVar11 != 0) {
        lVar14 = lVar11 << 3;
        lVar6 = lVar14;
        plVar3 = plVar9;
        do {
          pbVar4 = (byte *)*plVar3 + 8;
          if ((*(byte *)*plVar3 & 1) != 0) {
            pbVar4 = *(byte **)pbVar4;
          }
          if (*(long *)(pbVar4 + uVar7 * 8) * uVar15 - *(long *)(pbVar4 + uVar8 * 8) != 0) {
            uVar13 = uVar8 + 1;
            uVar8 = uVar7;
            if (uVar13 != uVar7) {
              do {
                puVar12 = (ulong *)*plVar9 + 1;
                if ((*(ulong *)*plVar9 & 1) != 0) {
                  puVar12 = (ulong *)*puVar12;
                }
                lVar14 = lVar14 + -8;
                puVar12[uVar13] = puVar12[uVar7];
                plVar9 = plVar9 + 1;
              } while (lVar14 != 0);
              puVar12 = puVar1;
              if ((*param_2 & 1) != 0) {
                puVar12 = (ulong *)param_2[1];
              }
              puVar12[uVar13] = puVar12[uVar7];
              uVar8 = uVar13;
            }
            goto LAB_0056a494;
          }
          lVar6 = lVar6 + -8;
          plVar3 = plVar3 + 1;
        } while (lVar6 != 0);
        goto LAB_0056a52c;
      }
      puVar12 = puVar1;
      if (uVar13 != 0) {
        puVar12 = puVar10;
      }
      puVar12[uVar8] = puVar12[uVar8] * puVar12[uVar7];
LAB_0056a494:
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar5 >> 1);
    lVar11 = uVar8 + 1;
    FUN_004ed958(param_2,param_2,lVar11);
    lVar6 = param_1[1];
    uVar2 = extraout_x1_00;
  }
  if (lVar6 != 0) {
    lVar6 = lVar6 << 3;
    puVar16 = (undefined8 *)*param_1;
    do {
      FUN_004ed958(*puVar16,uVar2,lVar11);
      lVar6 = lVar6 + -8;
      uVar2 = extraout_x1_01;
      puVar16 = puVar16 + 1;
    } while (lVar6 != 0);
  }
  return;
}


// ===== 0056a620  FUN_0056a620 =====

void FUN_0056a620(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  do {
    if (puVar1 == puVar2) {
      *param_1 = 0;
      return;
    }
    if (puVar1[2] == 0) {
      (**(code **)(*param_2 + 0x18))(param_1,param_2,*puVar1,puVar1[1]);
      if (*param_1 != 0) {
                    /* try { // try from 0056a6dc to 0056a6fb has its CatchHandler @ 0056a700 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer.cc"
                     ,"CopyTensors",0x1d);
        return;
      }
    }
    else {
      (**(code **)(*param_2 + 0x20))(param_1,param_2);
      if (*param_1 != 0) {
                    /* try { // try from 0056a698 to 0056a6b7 has its CatchHandler @ 0056a714 */
        FUN_00645c3c(0,param_1,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer.cc"
                     ,"CopyTensors",0x1b);
        return;
      }
    }
    puVar1 = puVar1 + 3;
    *param_1 = 0;
  } while( true );
}


// ===== 0056a728  FUN_0056a728 =====

void FUN_0056a728(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  while( true ) {
    if (puVar1 == puVar2) {
      *param_1 = 0;
      return;
    }
    FUN_005c3314(param_1,*puVar1,param_2,puVar1[1]);
    if (*param_1 != 0) break;
    puVar1 = puVar1 + 3;
  }
                    /* try { // try from 0056a784 to 0056a7a3 has its CatchHandler @ 0056a7b4 */
  FUN_00645c3c(0,param_1,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer.cc"
               ,"CopySparseTensors",0x26);
  return;
}


// ===== 0056a7c8  FUN_0056a7c8 =====

bool FUN_0056a7c8(undefined8 param_1,char *param_2,char *param_3)

{
  return *param_2 == '\0' && *param_3 == '\0';
}


// ===== 0056a7e0  FUN_0056a7e0 =====

void FUN_0056a7e0(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [80];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar5 = *param_3;
  lVar6 = param_3[0xf];
  lVar7 = *param_4;
  lVar8 = param_4[0xf];
  if ((void *)(lVar5 + lVar6) != (void *)(lVar7 + lVar8)) {
    lVar2 = FUN_005c8858(param_3);
    lVar3 = FUN_005c8858(param_4);
    if (lVar2 != lVar3) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056a900 to 0056a907 has its CatchHandler @ 0056a9e0 */
      FUN_00645c30(auStack_c0);
                    /* try { // try from 0056a908 to 0056a927 has its CatchHandler @ 0056a9d0 */
      FUN_0047488c(auStack_a8,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer.cc"
                   ,0x45,
                   "virtual common::Status onnxruntime::CPUDataTransfer::CopyTensor(const Tensor &, Tensor &) const"
                   ,auStack_c0);
      FUN_00476720(auStack_d8);
                    /* try { // try from 0056a934 to 0056a977 has its CatchHandler @ 0056a978 */
      FUN_00474a40(uVar4,auStack_a8,"src.SizeInBytes() == dst.SizeInBytes()",auStack_d8);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0056a9fc;
    }
    if (*(int *)(param_3[0xb] + 0x18) == 8) {
      lVar5 = FUN_0053c49c(param_3);
      lVar6 = FUN_0047e188(param_4);
      lVar7 = FUN_005cabcc(param_3 + 3);
      if (lVar7 != 0) {
        lVar7 = lVar7 * 0x18;
        do {
          FUN_007139b0(lVar6,lVar5);
          lVar7 = lVar7 + -0x18;
          lVar5 = lVar5 + 0x18;
          lVar6 = lVar6 + 0x18;
        } while (lVar7 != 0);
      }
    }
    else {
      __n = FUN_005c8858(param_3);
      memcpy((void *)(lVar7 + lVar8),(void *)(lVar5 + lVar6),__n);
    }
  }
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0056a9fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056aa00  FUN_0056aa00 =====

void FUN_0056aa00(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  char *local_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00753a74(0x10);
  local_30 = "CopyTensorAsync";
  local_38 = " is not implemented";
  FUN_004839f8(auStack_50,&local_30,&local_38);
                    /* try { // try from 0056aa50 to 0056aa5b has its CatchHandler @ 0056aac8 */
  FUN_0071259c(plVar2,auStack_50);
  *plVar2 = (long)(PTR_DAT_007a1ed8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0056aa7c to 0056aa93 has its CatchHandler @ 0056aa94 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar2,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056aacc  FUN_0056aacc =====

void FUN_0056aacc(void)

{
  return;
}


// ===== 0056aad0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0056aad4  FUN_0056aad4 =====

void FUN_0056aad4(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  void *__src;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  long lVar7;
  long *plVar8;
  
  lVar7 = *param_3;
  if (lVar7 == 0) {
    FUN_0063acd8(param_1,2,2,"data_transfer registered is nullptr.");
    return;
  }
  plVar2 = (long *)param_2[1];
  if (plVar2 < (long *)param_2[2]) {
    *param_3 = 0;
    plVar8 = plVar2 + 1;
    *plVar2 = lVar7;
  }
  else {
    lVar6 = (long)plVar2 - *param_2 >> 3;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_0056ba24(param_2);
LAB_0056ac08:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar4 = param_2[2] - *param_2;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar5 >> 0x3d != 0) goto LAB_0056ac08;
      lVar3 = FUN_00759c3c(uVar5 << 3);
    }
    *param_3 = 0;
    plVar2 = (long *)(lVar3 + lVar6 * 8);
    __src = (void *)*param_2;
    lVar6 = param_2[1];
    plVar8 = plVar2 + 1;
    *plVar2 = lVar7;
    __dest = (void *)((long)plVar2 - (lVar6 - (long)__src));
    memcpy(__dest,__src,lVar6 - (long)__src);
    *param_2 = (long)__dest;
    param_2[1] = (long)plVar8;
    param_2[2] = lVar3 + uVar5 * 8;
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_2[1] = (long)plVar8;
  *param_1 = 0;
  return;
}


// ===== 0056ac0c  FUN_0056ac0c =====

undefined8 FUN_0056ac0c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  while( true ) {
    if (puVar1 == puVar2) {
      return 0;
    }
    uVar3 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,param_2,param_3);
    if ((uVar3 & 1) != 0) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}


// ===== 0056ac80  FUN_0056ac80 =====

void FUN_0056ac80(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  undefined *local_58;
  char *pcStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_005cabcc(param_3 + 0x18);
  lVar5 = FUN_005cabcc(param_4 + 0x18);
  if (lVar4 == lVar5) {
    puVar2 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      uVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,param_3 + 0x74,param_4 + 0x74);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Could not recover jumptable at 0x0056ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)*puVar1 + 0x18))(param_1,(long *)*puVar1,param_3,param_4);
          return;
        }
        goto LAB_0056aed0;
      }
    }
    FUN_0049ee94(local_88,param_3 + 0x74);
                    /* try { // try from 0056ad10 to 0056ad1b has its CatchHandler @ 0056aeac */
    FUN_0049ee94(local_a0,param_4 + 0x74);
    local_58 = &DAT_001e1e07;
    pcStack_50 = "There\'s no data transfer registered for copying tensors from ";
    FUN_00550aec(local_70,&pcStack_50,local_88,&local_58,local_a0);
                    /* try { // try from 0056ad48 to 0056ad5b has its CatchHandler @ 0056ae54 */
    FUN_0063aa48(param_1,2,1,local_70);
    if ((local_70[0] & 1) != 0) {
      free(local_60);
    }
    if ((local_a0[0] & 1) != 0) {
      free(local_90);
    }
    if ((local_88[0] & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
    }
    else {
      free(local_78);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_48) {
    FUN_0063acd8(param_1,2,1,"Tensor size mismatch");
    return;
  }
LAB_0056aed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056aed4  FUN_0056aed4 =====

void FUN_0056aed4(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte local_b0 [16];
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  byte local_80 [16];
  void *local_70;
  undefined *local_68;
  char *pcStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_005cabcc(param_3 + 0x18);
  lVar5 = FUN_005cabcc(param_4 + 0x18);
  if (lVar4 == lVar5) {
    puVar2 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      uVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,param_3 + 0x74,param_4 + 0x74);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Could not recover jumptable at 0x0056b0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)*puVar1 + 0x20))(param_1,(long *)*puVar1,param_3,param_4,param_5);
          return;
        }
        goto LAB_0056b13c;
      }
    }
    FUN_0049ee94(local_98,param_3 + 0x74);
                    /* try { // try from 0056af6c to 0056af77 has its CatchHandler @ 0056b118 */
    FUN_0049ee94(local_b0,param_4 + 0x74);
    local_68 = &DAT_001e1e07;
    pcStack_60 = "There\'s no data transfer registered for copying tensors from ";
    FUN_00550aec(local_80,&pcStack_60,local_98,&local_68,local_b0);
                    /* try { // try from 0056afa4 to 0056afb7 has its CatchHandler @ 0056b0c0 */
    FUN_0063aa48(param_1,2,1,local_80);
    if ((local_80[0] & 1) != 0) {
      free(local_70);
    }
    if ((local_b0[0] & 1) != 0) {
      free(local_a0);
    }
    if ((local_98[0] & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
    }
    else {
      free(local_88);
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_58) {
    FUN_0063acd8(param_1,2,1,"Tensor size mismatch");
    return;
  }
LAB_0056b13c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056b140  FUN_0056b140 =====

void FUN_0056b140(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  undefined *local_58;
  char *pcStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_005cabcc(param_3 + 8);
  lVar5 = FUN_005cabcc(param_4 + 8);
  if (lVar4 == lVar5) {
    puVar2 = (undefined8 *)param_2[1];
    for (puVar1 = (undefined8 *)*param_2; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      uVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,param_3 + 0x74,param_4 + 0x74);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(lVar3 + 0x28) == local_48) {
          FUN_005c3314(param_1,param_3,*puVar1,param_4);
          return;
        }
        goto LAB_0056b388;
      }
    }
    FUN_0049ee94(local_88,param_3 + 0x74);
                    /* try { // try from 0056b1d0 to 0056b1db has its CatchHandler @ 0056b364 */
    FUN_0049ee94(local_a0,param_4 + 0x74);
    local_58 = &DAT_001e1e07;
    pcStack_50 = "There\'s no data transfer registered for copying tensors from ";
    FUN_00550aec(local_70,&pcStack_50,local_88,&local_58,local_a0);
                    /* try { // try from 0056b208 to 0056b21b has its CatchHandler @ 0056b30c */
    FUN_0063aa48(param_1,2,1,local_70);
    if ((local_70[0] & 1) != 0) {
      free(local_60);
    }
    if ((local_a0[0] & 1) != 0) {
      free(local_90);
    }
    if ((local_88[0] & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
    }
    else {
      free(local_78);
      if (*(long *)(lVar3 + 0x28) == local_48) {
        return;
      }
    }
  }
  else if (*(long *)(lVar3 + 0x28) == local_48) {
    FUN_0063acd8(param_1,2,1,"Tensor size mismatch");
    return;
  }
LAB_0056b388:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056b38c  FUN_0056b38c =====

void FUN_0056b38c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined *local_78;
  char *pcStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar1 = (long *)*param_3;
  plVar9 = (long *)param_3[1];
  if (plVar1 == plVar9) {
LAB_0056b5f8:
    *param_1 = 0;
  }
  else {
    lVar11 = *plVar1;
    lVar2 = plVar1[1];
    plVar10 = plVar1 + 3;
    if (plVar10 != plVar9) {
      do {
        if ((*(int *)(*plVar10 + 0x74) != *(int *)(lVar11 + 0x74)) ||
           (*(int *)(lVar2 + 0x74) != *(int *)(plVar10[1] + 0x74))) {
          bVar5 = false;
          plVar9 = (long *)*param_2;
          plVar10 = (long *)param_2[1];
          if (plVar9 != plVar10) goto LAB_0056b43c;
          goto LAB_0056b464;
        }
        plVar10 = plVar10 + 3;
      } while (plVar10 != plVar9);
    }
    bVar5 = true;
    plVar9 = (long *)*param_2;
    plVar10 = (long *)param_2[1];
    if (plVar9 != plVar10) {
LAB_0056b43c:
      do {
        uVar8 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar11 + 0x74,lVar2 + 0x74);
        if ((uVar8 & 1) != 0) {
          plVar9 = (long *)*plVar9;
          if (plVar9 != (long *)0x0) {
            if (bVar5) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x0056b54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar9 + 0x28))(param_1,plVar9,param_3);
                return;
              }
              goto LAB_0056b6f0;
            }
            if (plVar1[2] == 0) {
              (**(code **)(*plVar9 + 0x18))(param_1,plVar9,*plVar1,plVar1[1]);
              lVar11 = *param_1;
            }
            else {
              (**(code **)(*plVar9 + 0x20))(param_1);
              lVar11 = *param_1;
            }
            if (lVar11 == 0) {
              puVar3 = (undefined8 *)param_3[1];
              puVar7 = (undefined8 *)*param_3;
              goto joined_r0x0056b5b8;
            }
                    /* try { // try from 0056b574 to 0056b593 has its CatchHandler @ 0056b654 */
            FUN_00645c3c(0,param_1,
                         "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer_manager.cc"
                         ,"CopyTensors",0x8a);
            goto LAB_0056b5fc;
          }
          break;
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar10);
    }
LAB_0056b464:
    FUN_0049ee94(local_a8,lVar11 + 0x74);
                    /* try { // try from 0056b470 to 0056b47b has its CatchHandler @ 0056b6cc */
    FUN_0049ee94(local_c0,lVar2 + 0x74);
    local_78 = &DAT_001e1e07;
    pcStack_70 = "There\'s no data transfer registered for copying tensors from ";
    FUN_00550aec(local_90,&pcStack_70,local_a8,&local_78,local_c0);
                    /* try { // try from 0056b4a8 to 0056b4bb has its CatchHandler @ 0056b674 */
    FUN_0063aa48(param_1,2,1,local_90);
    if ((local_90[0] & 1) != 0) {
      free(local_80);
    }
    if ((local_c0[0] & 1) != 0) {
      free(local_b0);
    }
    if ((local_a8[0] & 1) != 0) {
      free(local_98);
    }
  }
  goto LAB_0056b5fc;
  while (FUN_0056ac80(param_1,param_2,*puVar6,puVar7[4]), puVar7 = puVar6, *param_1 == 0) {
joined_r0x0056b5b8:
    puVar6 = puVar7 + 3;
    if (puVar6 == puVar3) goto LAB_0056b5f8;
    if (puVar7[5] != 0) {
      FUN_0056aed4();
      puVar7 = puVar6;
      if (*param_1 != 0) break;
      goto joined_r0x0056b5b8;
    }
  }
                    /* try { // try from 0056b62c to 0056b64b has its CatchHandler @ 0056b650 */
  FUN_00645c3c(0,param_1,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer_manager.cc"
               ,"CopyTensors",0x8d);
LAB_0056b5fc:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
LAB_0056b6f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056b6f4  FUN_0056b6f4 =====

void FUN_0056b6f4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined *local_78;
  char *pcStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar1 = (long *)*param_3;
  plVar10 = (long *)param_3[1];
  if (plVar1 == plVar10) {
LAB_0056b928:
    *param_1 = 0;
  }
  else {
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    plVar11 = plVar1 + 3;
    if (plVar11 != plVar10) {
      do {
        if ((*(int *)(*plVar11 + 0x74) != *(int *)(lVar2 + 0x74)) ||
           (*(int *)(lVar3 + 0x74) != *(int *)(plVar11[1] + 0x74))) {
          bVar6 = false;
          plVar10 = (long *)*param_2;
          plVar11 = (long *)param_2[1];
          if (plVar10 != plVar11) goto LAB_0056b7a4;
          goto LAB_0056b7cc;
        }
        plVar11 = plVar11 + 3;
      } while (plVar11 != plVar10);
    }
    bVar6 = true;
    plVar10 = (long *)*param_2;
    plVar11 = (long *)param_2[1];
    if (plVar10 != plVar11) {
LAB_0056b7a4:
      do {
        uVar9 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar2 + 0x74,lVar3 + 0x74);
        if ((uVar9 & 1) != 0) {
          plVar10 = (long *)*plVar10;
          if (plVar10 != (long *)0x0) {
            if (bVar6) {
              if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Could not recover jumptable at 0x0056b8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar10 + 0x30))(param_1,plVar10,param_3);
                return;
              }
              goto LAB_0056ba20;
            }
            FUN_005c3314(param_1,*plVar1,plVar10,plVar1[1]);
            if (*param_1 != 0) {
                    /* try { // try from 0056b8d0 to 0056b8ef has its CatchHandler @ 0056b984 */
              FUN_00645c3c(0,param_1,
                           "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer_manager.cc"
                           ,"CopySparseTensors",0xbe);
              goto LAB_0056b92c;
            }
            puVar4 = (undefined8 *)param_3[1];
            puVar8 = (undefined8 *)*param_3;
            goto joined_r0x0056b900;
          }
          break;
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar11);
    }
LAB_0056b7cc:
    FUN_0049ee94(local_a8,lVar2 + 0x74);
                    /* try { // try from 0056b7d8 to 0056b7e3 has its CatchHandler @ 0056b9fc */
    FUN_0049ee94(local_c0,lVar3 + 0x74);
    local_78 = &DAT_001e1e07;
    pcStack_70 = "There\'s no data transfer registered for copying tensors from ";
    FUN_00550aec(local_90,&pcStack_70,local_a8,&local_78,local_c0);
                    /* try { // try from 0056b810 to 0056b823 has its CatchHandler @ 0056b9a4 */
    FUN_0063aa48(param_1,2,1,local_90);
    if ((local_90[0] & 1) != 0) {
      free(local_80);
    }
    if ((local_c0[0] & 1) != 0) {
      free(local_b0);
    }
    if ((local_a8[0] & 1) != 0) {
      free(local_98);
    }
  }
  goto LAB_0056b92c;
joined_r0x0056b900:
  do {
    puVar7 = puVar8 + 3;
    if (puVar7 == puVar4) goto LAB_0056b928;
    FUN_0056b140(param_1,param_2,*puVar7,puVar8[4]);
    puVar8 = puVar7;
  } while (*param_1 == 0);
                    /* try { // try from 0056b95c to 0056b97b has its CatchHandler @ 0056b980 */
  FUN_00645c3c(0,param_1,
               "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_transfer_manager.cc"
               ,"CopySparseTensors",0xc1);
LAB_0056b92c:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_0056ba20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0056ba24  FUN_0056ba24 =====

void FUN_0056ba24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0056ba38  FUN_0056ba38 =====

undefined * FUN_0056ba38(void)

{
  int iVar1;
  
  if (((DAT_007ad240 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad240), iVar1 != 0)) {
                    /* try { // try from 0056ba7c to 0056ba87 has its CatchHandler @ 0056babc */
    FUN_0056c018(&DAT_007ad840);
    __cxa_atexit(PTR_FUN_007a2700,&DAT_007ad840,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad240);
    return &DAT_007ad840;
  }
  return &DAT_007ad840;
}


// ===== 0056bad4  FUN_0056bad4 =====

undefined * FUN_0056bad4(void)

{
  int iVar1;
  
  if (((DAT_007ad248 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad248), iVar1 != 0)) {
                    /* try { // try from 0056bb18 to 0056bb23 has its CatchHandler @ 0056bb58 */
    FUN_0056c364(&DAT_007ad860);
    __cxa_atexit(PTR_FUN_007a2708,&DAT_007ad860,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad248);
    return &DAT_007ad860;
  }
  return &DAT_007ad860;
}


// ===== 0056bb70  FUN_0056bb70 =====

undefined * FUN_0056bb70(void)

{
  int iVar1;
  
  if (((DAT_007ad250 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad250), iVar1 != 0)) {
                    /* try { // try from 0056bbb4 to 0056bbbf has its CatchHandler @ 0056bbf4 */
    FUN_0056c6b8(&DAT_007ad880);
    __cxa_atexit(PTR_FUN_007a2710,&DAT_007ad880,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad250);
    return &DAT_007ad880;
  }
  return &DAT_007ad880;
}


// ===== 0056bc0c  FUN_0056bc0c =====

undefined * FUN_0056bc0c(void)

{
  int iVar1;
  
  if (((DAT_007ad250 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad250), iVar1 != 0)) {
                    /* try { // try from 0056bc50 to 0056bc5b has its CatchHandler @ 0056bc90 */
    FUN_0056c6b8(&DAT_007ad880);
    __cxa_atexit(PTR_FUN_007a2710,&DAT_007ad880,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad250);
    return &DAT_007ad880;
  }
  return &DAT_007ad880;
}


// ===== 0056bca8  FUN_0056bca8 =====

void FUN_0056bca8(undefined *param_1,undefined *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 == *(int *)(param_2 + 0x28)) {
    do {
      if (iVar6 < 7) {
        if (iVar6 != 4) {
          if (iVar6 != 1) goto LAB_0056bd98;
LAB_0056bd3c:
          uVar4 = (ulong)(*(int *)(*(long *)(param_2 + 0x20) + 0x20) ==
                         *(int *)(*(long *)(param_1 + 0x20) + 0x20));
          if (*(long *)(lVar3 + 0x28) == local_38) {
            return;
          }
          goto LAB_0056bedc;
        }
      }
      else if (iVar6 != 9) {
        if (iVar6 == 7) {
          uVar4 = *(ulong *)(param_1 + 0x20);
          if (*(long *)(lVar3 + 0x28) == local_38) {
            FUN_0056bee0(uVar4,*(undefined8 *)(param_2 + 0x20));
            return;
          }
        }
        else {
          if (iVar6 == 8) goto LAB_0056bd3c;
LAB_0056bd98:
          uVar5 = FUN_00753a74(0x88);
                    /* try { // try from 0056bda8 to 0056bdaf has its CatchHandler @ 0056bebc */
          FUN_00645c30(auStack_a0);
                    /* try { // try from 0056bdb0 to 0056bdcf has its CatchHandler @ 0056beac */
          FUN_0047488c(auStack_88,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                       ,0xd5,
                       "bool onnxruntime::data_types_internal::IsCompatible(const onnx::TypeProto &, const onnx::TypeProto &)"
                       ,auStack_a0);
          FUN_00476720(auStack_b8);
                    /* try { // try from 0056bddc to 0056be23 has its CatchHandler @ 0056be50 */
          uVar4 = FUN_00474a40(uVar5,auStack_88,"false",auStack_b8);
          if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar5,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
        goto LAB_0056bedc;
      }
      plVar1 = (long *)(param_1 + 0x20);
      plVar2 = (long *)(param_2 + 0x20);
      param_1 = PTR_PTR_007a1f50;
      if (*(undefined **)(*plVar1 + 0x18) != (undefined *)0x0) {
        param_1 = *(undefined **)(*plVar1 + 0x18);
      }
      param_2 = PTR_PTR_007a1f50;
      if (*(undefined **)(*plVar2 + 0x18) != (undefined *)0x0) {
        param_2 = *(undefined **)(*plVar2 + 0x18);
      }
      iVar6 = *(int *)(param_1 + 0x28);
    } while (iVar6 == *(int *)(param_2 + 0x28));
  }
  uVar4 = 0;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
LAB_0056bedc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0056bee0  FUN_0056bee0 =====

bool FUN_0056bee0(long param_1,long param_2)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *__s2;
  
  pbVar8 = (byte *)(*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc);
  pbVar9 = (byte *)(*(ulong *)(param_2 + 0x18) & 0xfffffffffffffffc);
  bVar4 = *pbVar8;
  bVar5 = *pbVar9;
  uVar10 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar10 = *(ulong *)(pbVar8 + 8);
  }
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar9 + 8);
  }
  if ((uVar10 != 0) != (uVar1 != 0)) {
    return false;
  }
  pbVar8 = (byte *)(*(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc);
  pbVar9 = (byte *)(*(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc);
  bVar4 = *pbVar8;
  bVar5 = *pbVar9;
  uVar10 = (ulong)(bVar4 >> 1);
  sVar2 = uVar10;
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(pbVar8 + 8);
  }
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(pbVar9 + 8);
  }
  bVar6 = (sVar2 != 0) == (sVar3 != 0);
  if ((sVar2 != 0) && (sVar3 != 0)) {
    if (sVar2 != sVar3) {
      return false;
    }
    __s2 = *(byte **)(pbVar9 + 0x10);
    if ((bVar5 & 1) == 0) {
      __s2 = pbVar9 + 1;
    }
    if ((bVar4 & 1) != 0) {
      iVar7 = memcmp(*(void **)(pbVar8 + 0x10),__s2,*(size_t *)(pbVar8 + 8));
      return iVar7 == 0;
    }
    if (bVar4 < 2) {
      return true;
    }
    do {
      uVar10 = uVar10 - 1;
      pbVar8 = pbVar8 + 1;
      bVar6 = *pbVar8 == *__s2;
      if (!bVar6) {
        return bVar6;
      }
      __s2 = __s2 + 1;
    } while (uVar10 != 0);
  }
  return bVar6;
}


// ===== 0056c010  FUN_0056c010 =====

undefined8 FUN_0056c010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0056c018  FUN_0056c018 =====

void FUN_0056c018(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined8 *)FUN_00759c3c(0x30);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
                    /* try { // try from 0056c060 to 0056c06b has its CatchHandler @ 0056c07c */
  FUN_0065e020(puVar2,0,0);
  param_1[3] = (long)puVar2;
  return;
}


// ===== 0056c090  FUN_0056c090 =====

void FUN_0056c090(void *param_1)

{
  FUN_0056e6c0();
  free(param_1);
  return;
}


// ===== 0056c0b4  FUN_0056c0b4 =====

code * FUN_0056c0b4(void)

{
  return FUN_0056c0c0;
}


// ===== 0056c0c0  FUN_0056c0c0 =====

void FUN_0056c0c0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_005c8ce4();
    free(param_1);
    return;
  }
  return;
}


// ===== 0056c0ec  FUN_0056c0ec =====

void FUN_0056c0ec(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if (*(int *)(lVar2 + 0x28) == 1) {
    iVar1 = *(int *)(*(long *)(lVar2 + 0x20) + 0x20);
    if (iVar1 == 0) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056c24c to 0056c253 has its CatchHandler @ 0056c33c */
      FUN_00645c30(auStack_a0);
                    /* try { // try from 0056c254 to 0056c273 has its CatchHandler @ 0056c2cc */
      FUN_0047488c(auStack_88,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                   ,0x167,
                   "virtual bool onnxruntime::TensorTypeBase::IsCompatible(const onnx::TypeProto &) const"
                   ,auStack_a0);
      FUN_00476720(auStack_b8);
                    /* try { // try from 0056c280 to 0056c2c7 has its CatchHandler @ 0056c2c8 */
      uVar3 = FUN_00474a40(uVar4,auStack_88,"utils::HasElemType(thisProto->tensor_type())",
                           auStack_b8);
      if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
    else {
      if (lVar2 == param_2) {
        uVar3 = 1;
        lVar5 = *(long *)(lVar5 + 0x28);
      }
      else {
        if (*(int *)(param_2 + 0x28) != 1) {
          uVar3 = 0;
          if (*(long *)(lVar5 + 0x28) == local_38) {
            return;
          }
          goto LAB_0056c360;
        }
        uVar3 = (ulong)(*(int *)(*(long *)(param_2 + 0x20) + 0x20) == iVar1);
        lVar5 = *(long *)(lVar5 + 0x28);
      }
      if (lVar5 == local_38) {
        return;
      }
    }
  }
  else {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056c1bc to 0056c1c3 has its CatchHandler @ 0056c340 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 0056c1c4 to 0056c1e3 has its CatchHandler @ 0056c32c */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                 ,0x166,
                 "virtual bool onnxruntime::TensorTypeBase::IsCompatible(const onnx::TypeProto &) const"
                 ,auStack_a0);
    FUN_00476720(auStack_b8);
                    /* try { // try from 0056c1f0 to 0056c237 has its CatchHandler @ 0056c2d0 */
    uVar3 = FUN_00474a40(uVar4,auStack_88,
                         "thisProto->value_case() == TypeProto::ValueCase::kTensorType",auStack_b8);
    if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
LAB_0056c360:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0056c364  FUN_0056c364 =====

void FUN_0056c364(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined8 *)FUN_00759c3c(0x30);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
                    /* try { // try from 0056c3ac to 0056c3b7 has its CatchHandler @ 0056c3c8 */
  FUN_0065e020(puVar2,0,0);
  param_1[3] = (long)puVar2;
  return;
}


// ===== 0056c3dc  FUN_0056c3dc =====

void FUN_0056c3dc(void *param_1)

{
  FUN_0056f878();
  free(param_1);
  return;
}


// ===== 0056c400  FUN_0056c400 =====

void FUN_0056c400(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if (lVar2 == param_2) {
    uVar3 = 1;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else if (*(int *)(param_2 + 0x28) == 8) {
    if (*(int *)(lVar2 + 0x28) != 8) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056c4d0 to 0056c4d7 has its CatchHandler @ 0056c654 */
      FUN_00645c30(auStack_a0);
                    /* try { // try from 0056c4d8 to 0056c4f7 has its CatchHandler @ 0056c640 */
      FUN_0047488c(auStack_88,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                   ,400,
                   "virtual bool onnxruntime::SparseTensorTypeBase::IsCompatible(const onnx::TypeProto &) const"
                   ,auStack_a0);
      FUN_00476720(auStack_b8);
                    /* try { // try from 0056c504 to 0056c54b has its CatchHandler @ 0056c5e4 */
      uVar3 = FUN_00474a40(uVar4,auStack_88,
                           "thisProto->value_case() == TypeProto::ValueCase::kSparseTensorType",
                           auStack_b8);
      if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0056c674;
    }
    iVar1 = *(int *)(*(long *)(lVar2 + 0x20) + 0x20);
    if (iVar1 == 0) {
      uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056c560 to 0056c567 has its CatchHandler @ 0056c650 */
      FUN_00645c30(auStack_a0);
                    /* try { // try from 0056c568 to 0056c587 has its CatchHandler @ 0056c5e0 */
      FUN_0047488c(auStack_88,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                   ,0x191,
                   "virtual bool onnxruntime::SparseTensorTypeBase::IsCompatible(const onnx::TypeProto &) const"
                   ,auStack_a0);
      FUN_00476720(auStack_b8);
                    /* try { // try from 0056c594 to 0056c5db has its CatchHandler @ 0056c5dc */
      uVar3 = FUN_00474a40(uVar4,auStack_88,"utils::HasElemType(thisProto->sparse_tensor_type())",
                           auStack_b8);
      if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
      goto LAB_0056c674;
    }
    uVar3 = (ulong)(*(int *)(*(long *)(param_2 + 0x20) + 0x20) == iVar1);
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    uVar3 = 0;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 == local_38) {
    return;
  }
LAB_0056c674:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0056c678  FUN_0056c678 =====

code * FUN_0056c678(void)

{
  return FUN_0056c684;
}


// ===== 0056c684  FUN_0056c684 =====

void FUN_0056c684(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_005bd638();
    free(param_1);
    return;
  }
  return;
}


// ===== 0056c6b0  FUN_0056c6b0 =====

undefined8 FUN_0056c6b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0056c6b8  FUN_0056c6b8 =====

void FUN_0056c6b8(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined8 *)FUN_00759c3c(0x30);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
                    /* try { // try from 0056c700 to 0056c70b has its CatchHandler @ 0056c71c */
  FUN_0065e020(puVar2,0,0);
  param_1[3] = (long)puVar2;
  return;
}


// ===== 0056c730  FUN_0056c730 =====

void FUN_0056c730(void *param_1)

{
  FUN_00570e20();
  free(param_1);
  return;
}


// ===== 0056c754  FUN_0056c754 =====

void FUN_0056c754(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  long lVar3;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  auVar8 = (**(code **)(*param_1 + 0x20))();
  lVar3 = auVar8._0_8_;
  if (lVar3 == param_2) {
    auVar8._8_8_ = auVar8._8_8_;
    auVar8._0_8_ = 1;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    if (*(int *)(param_2 + 0x28) == 4) {
      if (*(int *)(lVar3 + 0x28) == 4) {
        puVar6 = *(undefined **)(*(long *)(lVar3 + 0x20) + 0x18);
        puVar1 = PTR_PTR_007a1f50;
        if (puVar6 != (undefined *)0x0) {
          puVar1 = puVar6;
        }
        if (*(int *)(puVar1 + 0x28) == 0) {
          uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056c8d8 to 0056c8df has its CatchHandler @ 0056c9c8 */
          FUN_00645c30(auStack_a0);
                    /* try { // try from 0056c8e0 to 0056c8ff has its CatchHandler @ 0056c958 */
          FUN_0047488c(auStack_88,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                       ,0x1bf,
                       "virtual bool onnxruntime::SequenceTensorTypeBase::IsCompatible(const onnx::TypeProto &) const"
                       ,auStack_a0);
          FUN_00476720(auStack_b8);
                    /* try { // try from 0056c90c to 0056c953 has its CatchHandler @ 0056c954 */
          auVar8 = FUN_00474a40(uVar4,auStack_88,"utils::HasElemType(thisProto->sequence_type())",
                                auStack_b8);
          if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
        else {
          puVar7 = *(undefined **)(*(long *)(param_2 + 0x20) + 0x18);
          puVar6 = PTR_PTR_007a1f50;
          if (puVar7 != (undefined *)0x0) {
            puVar6 = puVar7;
          }
          auVar8._8_8_ = puVar6;
          auVar8._0_8_ = puVar1;
          if (*(long *)(lVar5 + 0x28) == local_38) {
            FUN_0056bca8();
            return;
          }
        }
      }
      else {
        uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056c848 to 0056c84f has its CatchHandler @ 0056c9cc */
        FUN_00645c30(auStack_a0);
                    /* try { // try from 0056c850 to 0056c86f has its CatchHandler @ 0056c9b8 */
        FUN_0047488c(auStack_88,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                     ,0x1be,
                     "virtual bool onnxruntime::SequenceTensorTypeBase::IsCompatible(const onnx::TypeProto &) const"
                     ,auStack_a0);
        FUN_00476720(auStack_b8);
                    /* try { // try from 0056c87c to 0056c8c3 has its CatchHandler @ 0056c95c */
        auVar8 = FUN_00474a40(uVar4,auStack_88,
                              "thisProto->value_case() == TypeProto::ValueCase::kSequenceType",
                              auStack_b8);
        if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
      }
      goto LAB_0056c9ec;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar8._8_8_;
    auVar8 = auVar2 << 0x40;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 == local_38) {
    return;
  }
LAB_0056c9ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar8._0_8_,auVar8._8_8_);
}


// ===== 0056c9f0  FUN_0056c9f0 =====

code * FUN_0056c9f0(void)

{
  return FUN_0056c9fc;
}


// ===== 0056c9fc  FUN_0056c9fc =====

void FUN_0056c9fc(void *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  pvVar3 = *(void **)((long)param_1 + 8);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)((long)param_1 + 0x10);
    __ptr = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        plVar2 = *(long **)((long)pvVar4 + -0x10);
        if ((plVar2 != (long *)0x0) &&
           (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0071245c(plVar2);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x18);
      } while (pvVar4 != pvVar3);
      __ptr = *(void **)((long)param_1 + 8);
    }
    *(void **)((long)param_1 + 0x10) = pvVar3;
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0056ca94  FUN_0056ca94 =====

undefined8 FUN_0056ca94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0056ca9c  FUN_0056ca9c =====

void FUN_0056ca9c(void *param_1)

{
  FUN_00573898();
  free(param_1);
  return;
}


// ===== 0056cac0  FUN_0056cac0 =====

void FUN_0056cac0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  long lVar3;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  auVar8 = (**(code **)(*param_1 + 0x20))();
  lVar3 = auVar8._0_8_;
  if (lVar3 == param_2) {
    auVar8._8_8_ = auVar8._8_8_;
    auVar8._0_8_ = 1;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    if (*(int *)(param_2 + 0x28) == 9) {
      if (*(int *)(lVar3 + 0x28) == 9) {
        puVar6 = *(undefined **)(*(long *)(lVar3 + 0x20) + 0x18);
        puVar1 = PTR_PTR_007a1f50;
        if (puVar6 != (undefined *)0x0) {
          puVar1 = puVar6;
        }
        if (*(int *)(puVar1 + 0x28) == 0) {
          uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056cc44 to 0056cc4b has its CatchHandler @ 0056cd34 */
          FUN_00645c30(auStack_a0);
                    /* try { // try from 0056cc4c to 0056cc6b has its CatchHandler @ 0056ccc4 */
          FUN_0047488c(auStack_88,
                       "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                       ,0x1f0,
                       "virtual bool onnxruntime::OptionalTypeBase::IsCompatible(const onnx::TypeProto &) const"
                       ,auStack_a0);
          FUN_00476720(auStack_b8);
                    /* try { // try from 0056cc78 to 0056ccbf has its CatchHandler @ 0056ccc0 */
          auVar8 = FUN_00474a40(uVar4,auStack_88,"utils::HasElemType(thisProto->optional_type())",
                                auStack_b8);
          if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
          }
        }
        else {
          puVar7 = *(undefined **)(*(long *)(param_2 + 0x20) + 0x18);
          puVar6 = PTR_PTR_007a1f50;
          if (puVar7 != (undefined *)0x0) {
            puVar6 = puVar7;
          }
          auVar8._8_8_ = puVar6;
          auVar8._0_8_ = puVar1;
          if (*(long *)(lVar5 + 0x28) == local_38) {
            FUN_0056bca8();
            return;
          }
        }
      }
      else {
        uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0056cbb4 to 0056cbbb has its CatchHandler @ 0056cd38 */
        FUN_00645c30(auStack_a0);
                    /* try { // try from 0056cbbc to 0056cbdb has its CatchHandler @ 0056cd24 */
        FUN_0047488c(auStack_88,
                     "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                     ,0x1ef,
                     "virtual bool onnxruntime::OptionalTypeBase::IsCompatible(const onnx::TypeProto &) const"
                     ,auStack_a0);
        FUN_00476720(auStack_b8);
                    /* try { // try from 0056cbe8 to 0056cc2f has its CatchHandler @ 0056ccc8 */
        auVar8 = FUN_00474a40(uVar4,auStack_88,
                              "thisProto->value_case() == TypeProto::ValueCase::kOptionalType",
                              auStack_b8);
        if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
        }
      }
      goto LAB_0056cd58;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar8._8_8_;
    auVar8 = auVar2 << 0x40;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 == local_38) {
    return;
  }
LAB_0056cd58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar8._0_8_,auVar8._8_8_);
}


// ===== 0056cd5c  FUN_0056cd5c =====

undefined8 FUN_0056cd5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


// ===== 0056cd64  FUN_0056cd64 =====

void FUN_0056cd64(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056cdb0 to 0056cdbb has its CatchHandler @ 0056ce48 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_007948a0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056cde4 to 0056ce03 has its CatchHandler @ 0056ce34 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 6;
  return;
}


// ===== 0056ce5c  FUN_0056ce5c =====

undefined8 * FUN_0056ce5c(void)

{
  int iVar1;
  
  if (((DAT_007ad260 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad260), iVar1 != 0)) {
                    /* try { // try from 0056cea0 to 0056ceab has its CatchHandler @ 0056cee0 */
    FUN_0056cd64(&DAT_007ad8c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad260);
    return &DAT_007ad8c0;
  }
  return &DAT_007ad8c0;
}


// ===== 0056cef8  FUN_0056cef8 =====

void FUN_0056cef8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056cf44 to 0056cf4f has its CatchHandler @ 0056cfdc */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_007948e0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056cf78 to 0056cf97 has its CatchHandler @ 0056cfc8 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 1;
  return;
}


// ===== 0056cff0  FUN_0056cff0 =====

undefined8 * FUN_0056cff0(void)

{
  int iVar1;
  
  if (((DAT_007ad268 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad268), iVar1 != 0)) {
                    /* try { // try from 0056d034 to 0056d03f has its CatchHandler @ 0056d074 */
    FUN_0056cef8(&DAT_007ad8e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad268);
    return &DAT_007ad8e0;
  }
  return &DAT_007ad8e0;
}


// ===== 0056d08c  FUN_0056d08c =====

void FUN_0056d08c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056d0d8 to 0056d0e3 has its CatchHandler @ 0056d170 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794920;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056d10c to 0056d12b has its CatchHandler @ 0056d15c */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 9;
  return;
}


// ===== 0056d184  FUN_0056d184 =====

undefined8 * FUN_0056d184(void)

{
  int iVar1;
  
  if (((DAT_007ad270 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad270), iVar1 != 0)) {
                    /* try { // try from 0056d1c8 to 0056d1d3 has its CatchHandler @ 0056d208 */
    FUN_0056d08c(&DAT_007ad900);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad900,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad270);
    return &DAT_007ad900;
  }
  return &DAT_007ad900;
}


// ===== 0056d220  FUN_0056d220 =====

void FUN_0056d220(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056d26c to 0056d277 has its CatchHandler @ 0056d304 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794960;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056d2a0 to 0056d2bf has its CatchHandler @ 0056d2f0 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 8;
  return;
}


// ===== 0056d318  FUN_0056d318 =====

undefined8 * FUN_0056d318(void)

{
  int iVar1;
  
  if (((DAT_007ad278 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad278), iVar1 != 0)) {
                    /* try { // try from 0056d35c to 0056d367 has its CatchHandler @ 0056d39c */
    FUN_0056d220(&DAT_007ad920);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad920,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad278);
    return &DAT_007ad920;
  }
  return &DAT_007ad920;
}


// ===== 0056d3b4  FUN_0056d3b4 =====

void FUN_0056d3b4(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056d400 to 0056d40b has its CatchHandler @ 0056d498 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_007949a0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056d434 to 0056d453 has its CatchHandler @ 0056d484 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 3;
  return;
}


// ===== 0056d4ac  FUN_0056d4ac =====

undefined8 * FUN_0056d4ac(void)

{
  int iVar1;
  
  if (((DAT_007ad280 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad280), iVar1 != 0)) {
                    /* try { // try from 0056d4f0 to 0056d4fb has its CatchHandler @ 0056d530 */
    FUN_0056d3b4(&DAT_007ad940);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad940,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad280);
    return &DAT_007ad940;
  }
  return &DAT_007ad940;
}


// ===== 0056d548  FUN_0056d548 =====

void FUN_0056d548(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056d594 to 0056d59f has its CatchHandler @ 0056d62c */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_007949e0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056d5c8 to 0056d5e7 has its CatchHandler @ 0056d618 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 2;
  return;
}


// ===== 0056d640  FUN_0056d640 =====

undefined8 * FUN_0056d640(void)

{
  int iVar1;
  
  if (((DAT_007ad288 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad288), iVar1 != 0)) {
                    /* try { // try from 0056d684 to 0056d68f has its CatchHandler @ 0056d6c4 */
    FUN_0056d548(&DAT_007ad960);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad960,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad288);
    return &DAT_007ad960;
  }
  return &DAT_007ad960;
}


// ===== 0056d6dc  FUN_0056d6dc =====

void FUN_0056d6dc(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056d728 to 0056d733 has its CatchHandler @ 0056d7c0 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794a20;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056d75c to 0056d77b has its CatchHandler @ 0056d7ac */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 4;
  return;
}


// ===== 0056d7d4  FUN_0056d7d4 =====

undefined8 * FUN_0056d7d4(void)

{
  int iVar1;
  
  if (((DAT_007ad290 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad290), iVar1 != 0)) {
                    /* try { // try from 0056d818 to 0056d823 has its CatchHandler @ 0056d858 */
    FUN_0056d6dc(&DAT_007ad980);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad980,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad290);
    return &DAT_007ad980;
  }
  return &DAT_007ad980;
}


// ===== 0056d870  FUN_0056d870 =====

void FUN_0056d870(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056d8bc to 0056d8c7 has its CatchHandler @ 0056d954 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794a60;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056d8f0 to 0056d90f has its CatchHandler @ 0056d940 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 5;
  return;
}


// ===== 0056d968  FUN_0056d968 =====

undefined8 * FUN_0056d968(void)

{
  int iVar1;
  
  if (((DAT_007ad298 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad298), iVar1 != 0)) {
                    /* try { // try from 0056d9ac to 0056d9b7 has its CatchHandler @ 0056d9ec */
    FUN_0056d870(&DAT_007ad9a0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad298);
    return &DAT_007ad9a0;
  }
  return &DAT_007ad9a0;
}


// ===== 0056da04  FUN_0056da04 =====

void FUN_0056da04(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056da50 to 0056da5b has its CatchHandler @ 0056dae8 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794aa0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056da84 to 0056daa3 has its CatchHandler @ 0056dad4 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 7;
  return;
}


// ===== 0056dafc  FUN_0056dafc =====

undefined8 * FUN_0056dafc(void)

{
  int iVar1;
  
  if (((DAT_007ad2a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2a0), iVar1 != 0)) {
                    /* try { // try from 0056db40 to 0056db4b has its CatchHandler @ 0056db80 */
    FUN_0056da04(&DAT_007ad9c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a0);
    return &DAT_007ad9c0;
  }
  return &DAT_007ad9c0;
}


// ===== 0056db98  FUN_0056db98 =====

void FUN_0056db98(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056dbe4 to 0056dbef has its CatchHandler @ 0056dc7c */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794ae0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056dc18 to 0056dc37 has its CatchHandler @ 0056dc68 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0xb;
  return;
}


// ===== 0056dc90  FUN_0056dc90 =====

undefined8 * FUN_0056dc90(void)

{
  int iVar1;
  
  if (((DAT_007ad2a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2a8), iVar1 != 0)) {
                    /* try { // try from 0056dcd4 to 0056dcdf has its CatchHandler @ 0056dd14 */
    FUN_0056db98(&DAT_007ad9e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a8);
    return &DAT_007ad9e0;
  }
  return &DAT_007ad9e0;
}


// ===== 0056dd2c  FUN_0056dd2c =====

void FUN_0056dd2c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056dd78 to 0056dd83 has its CatchHandler @ 0056de10 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794b20;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056ddac to 0056ddcb has its CatchHandler @ 0056ddfc */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0xc;
  return;
}


// ===== 0056de24  FUN_0056de24 =====

undefined8 * FUN_0056de24(void)

{
  int iVar1;
  
  if (((DAT_007ad2b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2b0), iVar1 != 0)) {
                    /* try { // try from 0056de68 to 0056de73 has its CatchHandler @ 0056dea8 */
    FUN_0056dd2c(&DAT_007ada00);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b0);
    return &DAT_007ada00;
  }
  return &DAT_007ada00;
}


// ===== 0056dec0  FUN_0056dec0 =====

void FUN_0056dec0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056df0c to 0056df17 has its CatchHandler @ 0056dfa4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794b60;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056df40 to 0056df5f has its CatchHandler @ 0056df90 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0xd;
  return;
}


// ===== 0056dfb8  FUN_0056dfb8 =====

undefined8 * FUN_0056dfb8(void)

{
  int iVar1;
  
  if (((DAT_007ad2b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2b8), iVar1 != 0)) {
                    /* try { // try from 0056dffc to 0056e007 has its CatchHandler @ 0056e03c */
    FUN_0056dec0(&DAT_007ada20);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b8);
    return &DAT_007ada20;
  }
  return &DAT_007ada20;
}


// ===== 0056e054  FUN_0056e054 =====

void FUN_0056e054(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e0a0 to 0056e0ab has its CatchHandler @ 0056e138 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794ba0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e0d4 to 0056e0f3 has its CatchHandler @ 0056e124 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 10;
  return;
}


// ===== 0056e14c  FUN_0056e14c =====

undefined8 * FUN_0056e14c(void)

{
  int iVar1;
  
  if (((DAT_007ad2c0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2c0), iVar1 != 0)) {
                    /* try { // try from 0056e190 to 0056e19b has its CatchHandler @ 0056e1d0 */
    FUN_0056e054(&DAT_007ada40);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2c0);
    return &DAT_007ada40;
  }
  return &DAT_007ada40;
}


// ===== 0056e1e8  FUN_0056e1e8 =====

void FUN_0056e1e8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e234 to 0056e23f has its CatchHandler @ 0056e2cc */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794be0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e268 to 0056e287 has its CatchHandler @ 0056e2b8 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x10;
  return;
}


// ===== 0056e2e0  FUN_0056e2e0 =====

void FUN_0056e2e0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e32c to 0056e337 has its CatchHandler @ 0056e3c4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794c20;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e360 to 0056e37f has its CatchHandler @ 0056e3b0 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x11;
  return;
}


// ===== 0056e3d8  FUN_0056e3d8 =====

void FUN_0056e3d8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e424 to 0056e42f has its CatchHandler @ 0056e4bc */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794c60;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e458 to 0056e477 has its CatchHandler @ 0056e4a8 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x12;
  return;
}


// ===== 0056e4d0  FUN_0056e4d0 =====

void FUN_0056e4d0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e51c to 0056e527 has its CatchHandler @ 0056e5b4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794ca0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e550 to 0056e56f has its CatchHandler @ 0056e5a0 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x13;
  return;
}


// ===== 0056e5c8  FUN_0056e5c8 =====

void FUN_0056e5c8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2718;
  *(undefined4 *)(param_1 + 1) = 2;
  param_1[2] = 0x80;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e614 to 0056e61f has its CatchHandler @ 0056e6ac */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794ce0;
  if (iVar1 == 1) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e648 to 0056e667 has its CatchHandler @ 0056e698 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 1;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661a68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x14;
  return;
}


// ===== 0056e6c0  FUN_0056e6c0 =====

void FUN_0056e6c0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0056e708  FUN_0056e708 =====

void FUN_0056e708(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e754 to 0056e75f has its CatchHandler @ 0056e7ec */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794d20;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e788 to 0056e7a7 has its CatchHandler @ 0056e7d8 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 6;
  return;
}


// ===== 0056e800  FUN_0056e800 =====

void FUN_0056e800(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e84c to 0056e857 has its CatchHandler @ 0056e8e4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794d60;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e880 to 0056e89f has its CatchHandler @ 0056e8d0 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 1;
  return;
}


// ===== 0056e8f8  FUN_0056e8f8 =====

void FUN_0056e8f8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056e944 to 0056e94f has its CatchHandler @ 0056e9dc */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794da0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056e978 to 0056e997 has its CatchHandler @ 0056e9c8 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 9;
  return;
}


// ===== 0056e9f0  FUN_0056e9f0 =====

void FUN_0056e9f0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056ea3c to 0056ea47 has its CatchHandler @ 0056ead4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794de0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056ea70 to 0056ea8f has its CatchHandler @ 0056eac0 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 8;
  return;
}


// ===== 0056eae8  FUN_0056eae8 =====

void FUN_0056eae8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056eb34 to 0056eb3f has its CatchHandler @ 0056ebcc */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794e20;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056eb68 to 0056eb87 has its CatchHandler @ 0056ebb8 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 3;
  return;
}


// ===== 0056ebe0  FUN_0056ebe0 =====

void FUN_0056ebe0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056ec2c to 0056ec37 has its CatchHandler @ 0056ecc4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794e60;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056ec60 to 0056ec7f has its CatchHandler @ 0056ecb0 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 2;
  return;
}


// ===== 0056ecd8  FUN_0056ecd8 =====

void FUN_0056ecd8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056ed24 to 0056ed2f has its CatchHandler @ 0056edbc */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794ea0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056ed58 to 0056ed77 has its CatchHandler @ 0056eda8 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 4;
  return;
}


// ===== 0056edd0  FUN_0056edd0 =====

void FUN_0056edd0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056ee1c to 0056ee27 has its CatchHandler @ 0056eeb4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794ee0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056ee50 to 0056ee6f has its CatchHandler @ 0056eea0 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 5;
  return;
}


// ===== 0056eec8  FUN_0056eec8 =====

void FUN_0056eec8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056ef14 to 0056ef1f has its CatchHandler @ 0056efac */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794f20;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056ef48 to 0056ef67 has its CatchHandler @ 0056ef98 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 7;
  return;
}


// ===== 0056efc0  FUN_0056efc0 =====

void FUN_0056efc0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f00c to 0056f017 has its CatchHandler @ 0056f0a4 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794f60;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f040 to 0056f05f has its CatchHandler @ 0056f090 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0xb;
  return;
}


// ===== 0056f0b8  FUN_0056f0b8 =====

void FUN_0056f0b8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f104 to 0056f10f has its CatchHandler @ 0056f19c */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794fa0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f138 to 0056f157 has its CatchHandler @ 0056f188 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0xc;
  return;
}


// ===== 0056f1b0  FUN_0056f1b0 =====

void FUN_0056f1b0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f1fc to 0056f207 has its CatchHandler @ 0056f294 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00794fe0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f230 to 0056f24f has its CatchHandler @ 0056f280 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0xd;
  return;
}


// ===== 0056f2a8  FUN_0056f2a8 =====

void FUN_0056f2a8(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f2f4 to 0056f2ff has its CatchHandler @ 0056f38c */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00795020;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f328 to 0056f347 has its CatchHandler @ 0056f378 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 10;
  return;
}


// ===== 0056f3a0  FUN_0056f3a0 =====

void FUN_0056f3a0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f3ec to 0056f3f7 has its CatchHandler @ 0056f484 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00795060;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f420 to 0056f43f has its CatchHandler @ 0056f470 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x10;
  return;
}


// ===== 0056f498  FUN_0056f498 =====

void FUN_0056f498(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f4e4 to 0056f4ef has its CatchHandler @ 0056f57c */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_007950a0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f518 to 0056f537 has its CatchHandler @ 0056f568 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x11;
  return;
}


// ===== 0056f590  FUN_0056f590 =====

void FUN_0056f590(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f5dc to 0056f5e7 has its CatchHandler @ 0056f674 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_007950e0;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f610 to 0056f62f has its CatchHandler @ 0056f660 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x12;
  return;
}


// ===== 0056f688  FUN_0056f688 =====

void FUN_0056f688(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f6d4 to 0056f6df has its CatchHandler @ 0056f76c */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00795120;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f708 to 0056f727 has its CatchHandler @ 0056f758 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x13;
  return;
}


// ===== 0056f780  FUN_0056f780 =====

void FUN_0056f780(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  
  puVar2 = PTR_DAT_007a2720;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0x120;
  *param_1 = (long)(puVar2 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f7cc to 0056f7d7 has its CatchHandler @ 0056f864 */
  FUN_0065e020(puVar3,0,0);
  iVar1 = *(int *)(puVar3 + 5);
  param_1[3] = (long)puVar3;
  *param_1 = (long)&PTR_FUN_00795160;
  if (iVar1 == 8) {
    lVar4 = puVar3[4];
  }
  else {
                    /* try { // try from 0056f800 to 0056f81f has its CatchHandler @ 0056f850 */
    FUN_0065de80(puVar3);
    *(undefined4 *)(puVar3 + 5) = 8;
    puVar5 = (ulong *)(puVar3[1] & 0xfffffffffffffffc);
    if ((puVar3[1] & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar4 = FUN_00661c68(puVar5);
    puVar3[4] = lVar4;
  }
  *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
  *(undefined4 *)(lVar4 + 0x20) = 0x14;
  return;
}


// ===== 0056f878  FUN_0056f878 =====

void FUN_0056f878(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0056f8c0  FUN_0056f8c0 =====

void FUN_0056f8c0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056f908 to 0056f913 has its CatchHandler @ 0056f9c4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2870;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad268 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad268), iVar2 != 0)) {
                    /* try { // try from 0056f974 to 0056f97f has its CatchHandler @ 0056f9a4 */
    FUN_0056cef8(&DAT_007ad8e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad268);
  }
                    /* try { // try from 0056f948 to 0056f953 has its CatchHandler @ 0056f9dc */
  uVar4 = (**(code **)(DAT_007ad8e0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 0056f9f0  FUN_0056f9f0 =====

void FUN_0056f9f0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056fa38 to 0056fa43 has its CatchHandler @ 0056faf4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2878;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2a8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2a8), iVar2 != 0)) {
                    /* try { // try from 0056faa4 to 0056faaf has its CatchHandler @ 0056fad4 */
    FUN_0056db98(&DAT_007ad9e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a8);
  }
                    /* try { // try from 0056fa78 to 0056fa83 has its CatchHandler @ 0056fb0c */
  uVar4 = (**(code **)(DAT_007ad9e0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 0056fb20  FUN_0056fb20 =====

void FUN_0056fb20(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056fb68 to 0056fb73 has its CatchHandler @ 0056fc24 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2880;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad280 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad280), iVar2 != 0)) {
                    /* try { // try from 0056fbd4 to 0056fbdf has its CatchHandler @ 0056fc04 */
    FUN_0056d3b4(&DAT_007ad940);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad940,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad280);
  }
                    /* try { // try from 0056fba8 to 0056fbb3 has its CatchHandler @ 0056fc3c */
  uVar4 = (**(code **)(DAT_007ad940 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 0056fc50  FUN_0056fc50 =====

void FUN_0056fc50(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056fc98 to 0056fca3 has its CatchHandler @ 0056fd54 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2888;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad288 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad288), iVar2 != 0)) {
                    /* try { // try from 0056fd04 to 0056fd0f has its CatchHandler @ 0056fd34 */
    FUN_0056d548(&DAT_007ad960);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad960,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad288);
  }
                    /* try { // try from 0056fcd8 to 0056fce3 has its CatchHandler @ 0056fd6c */
  uVar4 = (**(code **)(DAT_007ad960 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 0056fd80  FUN_0056fd80 =====

void FUN_0056fd80(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056fdc8 to 0056fdd3 has its CatchHandler @ 0056fe84 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2890;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad298 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad298), iVar2 != 0)) {
                    /* try { // try from 0056fe34 to 0056fe3f has its CatchHandler @ 0056fe64 */
    FUN_0056d870(&DAT_007ad9a0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad298);
  }
                    /* try { // try from 0056fe08 to 0056fe13 has its CatchHandler @ 0056fe9c */
  uVar4 = (**(code **)(DAT_007ad9a0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 0056feb0  FUN_0056feb0 =====

void FUN_0056feb0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0056fef8 to 0056ff03 has its CatchHandler @ 0056ffb4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2898;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad290 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad290), iVar2 != 0)) {
                    /* try { // try from 0056ff64 to 0056ff6f has its CatchHandler @ 0056ff94 */
    FUN_0056d6dc(&DAT_007ad980);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad980,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad290);
  }
                    /* try { // try from 0056ff38 to 0056ff43 has its CatchHandler @ 0056ffcc */
  uVar4 = (**(code **)(DAT_007ad980 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 0056ffe0  FUN_0056ffe0 =====

void FUN_0056ffe0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570028 to 00570033 has its CatchHandler @ 005700e4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28a0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad260 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad260), iVar2 != 0)) {
                    /* try { // try from 00570094 to 0057009f has its CatchHandler @ 005700c4 */
    FUN_0056cd64(&DAT_007ad8c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad260);
  }
                    /* try { // try from 00570068 to 00570073 has its CatchHandler @ 005700fc */
  uVar4 = (**(code **)(DAT_007ad8c0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570110  FUN_00570110 =====

void FUN_00570110(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570158 to 00570163 has its CatchHandler @ 00570214 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28a8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2b0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2b0), iVar2 != 0)) {
                    /* try { // try from 005701c4 to 005701cf has its CatchHandler @ 005701f4 */
    FUN_0056dd2c(&DAT_007ada00);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b0);
  }
                    /* try { // try from 00570198 to 005701a3 has its CatchHandler @ 0057022c */
  uVar4 = (**(code **)(DAT_007ada00 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570240  FUN_00570240 =====

void FUN_00570240(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570288 to 00570293 has its CatchHandler @ 00570344 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28b0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2a0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2a0), iVar2 != 0)) {
                    /* try { // try from 005702f4 to 005702ff has its CatchHandler @ 00570324 */
    FUN_0056da04(&DAT_007ad9c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a0);
  }
                    /* try { // try from 005702c8 to 005702d3 has its CatchHandler @ 0057035c */
  uVar4 = (**(code **)(DAT_007ad9c0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570370  FUN_00570370 =====

void FUN_00570370(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005703b8 to 005703c3 has its CatchHandler @ 00570474 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28b8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2b8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2b8), iVar2 != 0)) {
                    /* try { // try from 00570424 to 0057042f has its CatchHandler @ 00570454 */
    FUN_0056dec0(&DAT_007ada20);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b8);
  }
                    /* try { // try from 005703f8 to 00570403 has its CatchHandler @ 0057048c */
  uVar4 = (**(code **)(DAT_007ada20 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 005704a0  FUN_005704a0 =====

void FUN_005704a0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005704e8 to 005704f3 has its CatchHandler @ 005705a4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28c0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad270 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad270), iVar2 != 0)) {
                    /* try { // try from 00570554 to 0057055f has its CatchHandler @ 00570584 */
    FUN_0056d08c(&DAT_007ad900);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad900,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad270);
  }
                    /* try { // try from 00570528 to 00570533 has its CatchHandler @ 005705bc */
  uVar4 = (**(code **)(DAT_007ad900 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 005705d0  FUN_005705d0 =====

void FUN_005705d0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570618 to 00570623 has its CatchHandler @ 005706d4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28c8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad278 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad278), iVar2 != 0)) {
                    /* try { // try from 00570684 to 0057068f has its CatchHandler @ 005706b4 */
    FUN_0056d220(&DAT_007ad920);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad920,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad278);
  }
                    /* try { // try from 00570658 to 00570663 has its CatchHandler @ 005706ec */
  uVar4 = (**(code **)(DAT_007ad920 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570700  FUN_00570700 =====

void FUN_00570700(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570748 to 00570753 has its CatchHandler @ 00570804 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28d0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2c0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2c0), iVar2 != 0)) {
                    /* try { // try from 005707b4 to 005707bf has its CatchHandler @ 005707e4 */
    FUN_0056e054(&DAT_007ada40);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2c0);
  }
                    /* try { // try from 00570788 to 00570793 has its CatchHandler @ 0057081c */
  uVar4 = (**(code **)(DAT_007ada40 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570830  FUN_00570830 =====

void FUN_00570830(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570878 to 00570883 has its CatchHandler @ 00570934 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28d8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2c8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2c8), iVar2 != 0)) {
                    /* try { // try from 005708e4 to 005708ef has its CatchHandler @ 00570914 */
    FUN_0056e1e8(&DAT_007ada60);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2c8);
  }
                    /* try { // try from 005708b8 to 005708c3 has its CatchHandler @ 0057094c */
  uVar4 = (**(code **)(DAT_007ada60 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570960  FUN_00570960 =====

void FUN_00570960(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005709a8 to 005709b3 has its CatchHandler @ 00570a64 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28e0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2d0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2d0), iVar2 != 0)) {
                    /* try { // try from 00570a14 to 00570a1f has its CatchHandler @ 00570a44 */
    FUN_0056e2e0(&DAT_007ada80);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada80,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2d0);
  }
                    /* try { // try from 005709e8 to 005709f3 has its CatchHandler @ 00570a7c */
  uVar4 = (**(code **)(DAT_007ada80 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570a90  FUN_00570a90 =====

void FUN_00570a90(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570ad8 to 00570ae3 has its CatchHandler @ 00570b94 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28e8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2d8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2d8), iVar2 != 0)) {
                    /* try { // try from 00570b44 to 00570b4f has its CatchHandler @ 00570b74 */
    FUN_0056e3d8(&DAT_007adaa0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007adaa0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2d8);
  }
                    /* try { // try from 00570b18 to 00570b23 has its CatchHandler @ 00570bac */
  uVar4 = (**(code **)(DAT_007adaa0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570bc0  FUN_00570bc0 =====

void FUN_00570bc0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570c08 to 00570c13 has its CatchHandler @ 00570cc4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28f0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2e0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2e0), iVar2 != 0)) {
                    /* try { // try from 00570c74 to 00570c7f has its CatchHandler @ 00570ca4 */
    FUN_0056e4d0(&DAT_007adac0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007adac0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2e0);
  }
                    /* try { // try from 00570c48 to 00570c53 has its CatchHandler @ 00570cdc */
  uVar4 = (**(code **)(DAT_007adac0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570cf0  FUN_00570cf0 =====

void FUN_00570cf0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2728;
  *(undefined4 *)(param_1 + 1) = 3;
  param_1[2] = 0x20;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570d38 to 00570d43 has its CatchHandler @ 00570df4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a28f8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2e8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2e8), iVar2 != 0)) {
                    /* try { // try from 00570da4 to 00570daf has its CatchHandler @ 00570dd4 */
    FUN_0056e5c8(&DAT_007adae0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007adae0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2e8);
  }
                    /* try { // try from 00570d78 to 00570d83 has its CatchHandler @ 00570e0c */
  uVar4 = (**(code **)(DAT_007adae0 + 0x20))();
  FUN_0057ced8(uVar4,param_1[3]);
  return;
}


// ===== 00570e20  FUN_00570e20 =====

void FUN_00570e20(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00570e68  FUN_00570e68 =====

void FUN_00570e68(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570eac to 00570eb7 has its CatchHandler @ 00570f68 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2908;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad260 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad260), iVar2 != 0)) {
                    /* try { // try from 00570f18 to 00570f23 has its CatchHandler @ 00570f48 */
    FUN_0056cd64(&DAT_007ad8c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad260);
  }
                    /* try { // try from 00570eec to 00570ef7 has its CatchHandler @ 00570f80 */
  uVar4 = (**(code **)(DAT_007ad8c0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00570f94  FUN_00570f94 =====

void FUN_00570f94(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00570fd8 to 00570fe3 has its CatchHandler @ 00571094 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2910;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad268 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad268), iVar2 != 0)) {
                    /* try { // try from 00571044 to 0057104f has its CatchHandler @ 00571074 */
    FUN_0056cef8(&DAT_007ad8e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad268);
  }
                    /* try { // try from 00571018 to 00571023 has its CatchHandler @ 005710ac */
  uVar4 = (**(code **)(DAT_007ad8e0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005710c0  FUN_005710c0 =====

void FUN_005710c0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571104 to 0057110f has its CatchHandler @ 005711c0 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2918;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad270 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad270), iVar2 != 0)) {
                    /* try { // try from 00571170 to 0057117b has its CatchHandler @ 005711a0 */
    FUN_0056d08c(&DAT_007ad900);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad900,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad270);
  }
                    /* try { // try from 00571144 to 0057114f has its CatchHandler @ 005711d8 */
  uVar4 = (**(code **)(DAT_007ad900 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005711ec  FUN_005711ec =====

void FUN_005711ec(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571230 to 0057123b has its CatchHandler @ 005712ec */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2920;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad278 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad278), iVar2 != 0)) {
                    /* try { // try from 0057129c to 005712a7 has its CatchHandler @ 005712cc */
    FUN_0056d220(&DAT_007ad920);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad920,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad278);
  }
                    /* try { // try from 00571270 to 0057127b has its CatchHandler @ 00571304 */
  uVar4 = (**(code **)(DAT_007ad920 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571318  FUN_00571318 =====

void FUN_00571318(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0057135c to 00571367 has its CatchHandler @ 00571418 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2928;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad280 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad280), iVar2 != 0)) {
                    /* try { // try from 005713c8 to 005713d3 has its CatchHandler @ 005713f8 */
    FUN_0056d3b4(&DAT_007ad940);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad940,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad280);
  }
                    /* try { // try from 0057139c to 005713a7 has its CatchHandler @ 00571430 */
  uVar4 = (**(code **)(DAT_007ad940 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571444  FUN_00571444 =====

void FUN_00571444(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571488 to 00571493 has its CatchHandler @ 00571544 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2930;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad288 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad288), iVar2 != 0)) {
                    /* try { // try from 005714f4 to 005714ff has its CatchHandler @ 00571524 */
    FUN_0056d548(&DAT_007ad960);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad960,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad288);
  }
                    /* try { // try from 005714c8 to 005714d3 has its CatchHandler @ 0057155c */
  uVar4 = (**(code **)(DAT_007ad960 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571570  FUN_00571570 =====

void FUN_00571570(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005715b4 to 005715bf has its CatchHandler @ 00571670 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2938;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad290 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad290), iVar2 != 0)) {
                    /* try { // try from 00571620 to 0057162b has its CatchHandler @ 00571650 */
    FUN_0056d6dc(&DAT_007ad980);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad980,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad290);
  }
                    /* try { // try from 005715f4 to 005715ff has its CatchHandler @ 00571688 */
  uVar4 = (**(code **)(DAT_007ad980 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 0057169c  FUN_0057169c =====

void FUN_0057169c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005716e0 to 005716eb has its CatchHandler @ 0057179c */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2940;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad298 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad298), iVar2 != 0)) {
                    /* try { // try from 0057174c to 00571757 has its CatchHandler @ 0057177c */
    FUN_0056d870(&DAT_007ad9a0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad298);
  }
                    /* try { // try from 00571720 to 0057172b has its CatchHandler @ 005717b4 */
  uVar4 = (**(code **)(DAT_007ad9a0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005717c8  FUN_005717c8 =====

void FUN_005717c8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0057180c to 00571817 has its CatchHandler @ 005718c8 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2948;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2a0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2a0), iVar2 != 0)) {
                    /* try { // try from 00571878 to 00571883 has its CatchHandler @ 005718a8 */
    FUN_0056da04(&DAT_007ad9c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a0);
  }
                    /* try { // try from 0057184c to 00571857 has its CatchHandler @ 005718e0 */
  uVar4 = (**(code **)(DAT_007ad9c0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005718f4  FUN_005718f4 =====

void FUN_005718f4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571938 to 00571943 has its CatchHandler @ 005719f4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2950;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2a8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2a8), iVar2 != 0)) {
                    /* try { // try from 005719a4 to 005719af has its CatchHandler @ 005719d4 */
    FUN_0056db98(&DAT_007ad9e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a8);
  }
                    /* try { // try from 00571978 to 00571983 has its CatchHandler @ 00571a0c */
  uVar4 = (**(code **)(DAT_007ad9e0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571a20  FUN_00571a20 =====

void FUN_00571a20(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571a64 to 00571a6f has its CatchHandler @ 00571b20 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2958;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2b0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2b0), iVar2 != 0)) {
                    /* try { // try from 00571ad0 to 00571adb has its CatchHandler @ 00571b00 */
    FUN_0056dd2c(&DAT_007ada00);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b0);
  }
                    /* try { // try from 00571aa4 to 00571aaf has its CatchHandler @ 00571b38 */
  uVar4 = (**(code **)(DAT_007ada00 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571b4c  FUN_00571b4c =====

void FUN_00571b4c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571b90 to 00571b9b has its CatchHandler @ 00571c4c */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2960;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2b8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2b8), iVar2 != 0)) {
                    /* try { // try from 00571bfc to 00571c07 has its CatchHandler @ 00571c2c */
    FUN_0056dec0(&DAT_007ada20);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b8);
  }
                    /* try { // try from 00571bd0 to 00571bdb has its CatchHandler @ 00571c64 */
  uVar4 = (**(code **)(DAT_007ada20 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571c78  FUN_00571c78 =====

void FUN_00571c78(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571cbc to 00571cc7 has its CatchHandler @ 00571d78 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2968;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2c0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2c0), iVar2 != 0)) {
                    /* try { // try from 00571d28 to 00571d33 has its CatchHandler @ 00571d58 */
    FUN_0056e054(&DAT_007ada40);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2c0);
  }
                    /* try { // try from 00571cfc to 00571d07 has its CatchHandler @ 00571d90 */
  uVar4 = (**(code **)(DAT_007ada40 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571da4  FUN_00571da4 =====

void FUN_00571da4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571de8 to 00571df3 has its CatchHandler @ 00571ea4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2970;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2c8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2c8), iVar2 != 0)) {
                    /* try { // try from 00571e54 to 00571e5f has its CatchHandler @ 00571e84 */
    FUN_0056e1e8(&DAT_007ada60);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2c8);
  }
                    /* try { // try from 00571e28 to 00571e33 has its CatchHandler @ 00571ebc */
  uVar4 = (**(code **)(DAT_007ada60 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571ed0  FUN_00571ed0 =====

void FUN_00571ed0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00571f14 to 00571f1f has its CatchHandler @ 00571fd0 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2978;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2d0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2d0), iVar2 != 0)) {
                    /* try { // try from 00571f80 to 00571f8b has its CatchHandler @ 00571fb0 */
    FUN_0056e2e0(&DAT_007ada80);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada80,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2d0);
  }
                    /* try { // try from 00571f54 to 00571f5f has its CatchHandler @ 00571fe8 */
  uVar4 = (**(code **)(DAT_007ada80 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00571ffc  FUN_00571ffc =====

void FUN_00571ffc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572040 to 0057204b has its CatchHandler @ 005720fc */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2980;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2d8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2d8), iVar2 != 0)) {
                    /* try { // try from 005720ac to 005720b7 has its CatchHandler @ 005720dc */
    FUN_0056e3d8(&DAT_007adaa0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007adaa0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2d8);
  }
                    /* try { // try from 00572080 to 0057208b has its CatchHandler @ 00572114 */
  uVar4 = (**(code **)(DAT_007adaa0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572128  FUN_00572128 =====

void FUN_00572128(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0057216c to 00572177 has its CatchHandler @ 00572228 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2988;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2e0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2e0), iVar2 != 0)) {
                    /* try { // try from 005721d8 to 005721e3 has its CatchHandler @ 00572208 */
    FUN_0056e4d0(&DAT_007adac0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007adac0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2e0);
  }
                    /* try { // try from 005721ac to 005721b7 has its CatchHandler @ 00572240 */
  uVar4 = (**(code **)(DAT_007adac0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572254  FUN_00572254 =====

void FUN_00572254(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572298 to 005722a3 has its CatchHandler @ 00572354 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2990;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad2e8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad2e8), iVar2 != 0)) {
                    /* try { // try from 00572304 to 0057230f has its CatchHandler @ 00572334 */
    FUN_0056e5c8(&DAT_007adae0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007adae0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2e8);
  }
                    /* try { // try from 005722d8 to 005722e3 has its CatchHandler @ 0057236c */
  uVar4 = (**(code **)(DAT_007adae0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572380  FUN_00572380 =====

void FUN_00572380(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005723c4 to 005723cf has its CatchHandler @ 00572480 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2998;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3b0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3b0), iVar2 != 0)) {
                    /* try { // try from 00572430 to 0057243b has its CatchHandler @ 00572460 */
    FUN_0056ffe0(&DAT_007ade00);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3b0);
  }
                    /* try { // try from 00572404 to 0057240f has its CatchHandler @ 00572498 */
  uVar4 = (**(code **)(DAT_007ade00 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005724ac  FUN_005724ac =====

void FUN_005724ac(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005724f0 to 005724fb has its CatchHandler @ 005725ac */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29a0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad380 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad380), iVar2 != 0)) {
                    /* try { // try from 0057255c to 00572567 has its CatchHandler @ 0057258c */
    FUN_0056f8c0(&DAT_007add40);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007add40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad380);
  }
                    /* try { // try from 00572530 to 0057253b has its CatchHandler @ 005725c4 */
  uVar4 = (**(code **)(DAT_007add40 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005725d8  FUN_005725d8 =====

void FUN_005725d8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0057261c to 00572627 has its CatchHandler @ 005726d8 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29a8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3d0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3d0), iVar2 != 0)) {
                    /* try { // try from 00572688 to 00572693 has its CatchHandler @ 005726b8 */
    FUN_005704a0(&DAT_007ade80);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade80,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3d0);
  }
                    /* try { // try from 0057265c to 00572667 has its CatchHandler @ 005726f0 */
  uVar4 = (**(code **)(DAT_007ade80 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572704  FUN_00572704 =====

void FUN_00572704(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572748 to 00572753 has its CatchHandler @ 00572804 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29b0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3d8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3d8), iVar2 != 0)) {
                    /* try { // try from 005727b4 to 005727bf has its CatchHandler @ 005727e4 */
    FUN_005705d0(&DAT_007adea0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adea0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3d8);
  }
                    /* try { // try from 00572788 to 00572793 has its CatchHandler @ 0057281c */
  uVar4 = (**(code **)(DAT_007adea0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572830  FUN_00572830 =====

void FUN_00572830(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572874 to 0057287f has its CatchHandler @ 00572930 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29b8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad390 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad390), iVar2 != 0)) {
                    /* try { // try from 005728e0 to 005728eb has its CatchHandler @ 00572910 */
    FUN_0056fb20(&DAT_007add80);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007add80,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad390);
  }
                    /* try { // try from 005728b4 to 005728bf has its CatchHandler @ 00572948 */
  uVar4 = (**(code **)(DAT_007add80 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 0057295c  FUN_0057295c =====

void FUN_0057295c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005729a0 to 005729ab has its CatchHandler @ 00572a5c */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29c0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad398 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad398), iVar2 != 0)) {
                    /* try { // try from 00572a0c to 00572a17 has its CatchHandler @ 00572a3c */
    FUN_0056fc50(&DAT_007adda0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adda0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad398);
  }
                    /* try { // try from 005729e0 to 005729eb has its CatchHandler @ 00572a74 */
  uVar4 = (**(code **)(DAT_007adda0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572a88  FUN_00572a88 =====

void FUN_00572a88(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572acc to 00572ad7 has its CatchHandler @ 00572b88 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29c8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3a8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3a8), iVar2 != 0)) {
                    /* try { // try from 00572b38 to 00572b43 has its CatchHandler @ 00572b68 */
    FUN_0056feb0(&DAT_007adde0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adde0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3a8);
  }
                    /* try { // try from 00572b0c to 00572b17 has its CatchHandler @ 00572ba0 */
  uVar4 = (**(code **)(DAT_007adde0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572bb4  FUN_00572bb4 =====

void FUN_00572bb4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572bf8 to 00572c03 has its CatchHandler @ 00572cb4 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29d0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3a0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3a0), iVar2 != 0)) {
                    /* try { // try from 00572c64 to 00572c6f has its CatchHandler @ 00572c94 */
    FUN_0056fd80(&DAT_007addc0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007addc0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3a0);
  }
                    /* try { // try from 00572c38 to 00572c43 has its CatchHandler @ 00572ccc */
  uVar4 = (**(code **)(DAT_007addc0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572ce0  FUN_00572ce0 =====

void FUN_00572ce0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572d24 to 00572d2f has its CatchHandler @ 00572de0 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29d8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3c0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3c0), iVar2 != 0)) {
                    /* try { // try from 00572d90 to 00572d9b has its CatchHandler @ 00572dc0 */
    FUN_00570240(&DAT_007ade40);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3c0);
  }
                    /* try { // try from 00572d64 to 00572d6f has its CatchHandler @ 00572df8 */
  uVar4 = (**(code **)(DAT_007ade40 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572e0c  FUN_00572e0c =====

void FUN_00572e0c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572e50 to 00572e5b has its CatchHandler @ 00572f0c */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29e0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad388 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad388), iVar2 != 0)) {
                    /* try { // try from 00572ebc to 00572ec7 has its CatchHandler @ 00572eec */
    FUN_0056f9f0(&DAT_007add60);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007add60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad388);
  }
                    /* try { // try from 00572e90 to 00572e9b has its CatchHandler @ 00572f24 */
  uVar4 = (**(code **)(DAT_007add60 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00572f38  FUN_00572f38 =====

void FUN_00572f38(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00572f7c to 00572f87 has its CatchHandler @ 00573038 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29e8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3b8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3b8), iVar2 != 0)) {
                    /* try { // try from 00572fe8 to 00572ff3 has its CatchHandler @ 00573018 */
    FUN_00570110(&DAT_007ade20);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3b8);
  }
                    /* try { // try from 00572fbc to 00572fc7 has its CatchHandler @ 00573050 */
  uVar4 = (**(code **)(DAT_007ade20 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00573064  FUN_00573064 =====

void FUN_00573064(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005730a8 to 005730b3 has its CatchHandler @ 00573164 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29f0;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3c8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3c8), iVar2 != 0)) {
                    /* try { // try from 00573114 to 0057311f has its CatchHandler @ 00573144 */
    FUN_00570370(&DAT_007ade60);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3c8);
  }
                    /* try { // try from 005730e8 to 005730f3 has its CatchHandler @ 0057317c */
  uVar4 = (**(code **)(DAT_007ade60 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00573190  FUN_00573190 =====

void FUN_00573190(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005731d4 to 005731df has its CatchHandler @ 00573290 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a29f8;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3e0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3e0), iVar2 != 0)) {
                    /* try { // try from 00573240 to 0057324b has its CatchHandler @ 00573270 */
    FUN_00570700(&DAT_007adec0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adec0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3e0);
  }
                    /* try { // try from 00573214 to 0057321f has its CatchHandler @ 005732a8 */
  uVar4 = (**(code **)(DAT_007adec0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005732bc  FUN_005732bc =====

void FUN_005732bc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00573300 to 0057330b has its CatchHandler @ 005733bc */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2a00;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3e8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3e8), iVar2 != 0)) {
                    /* try { // try from 0057336c to 00573377 has its CatchHandler @ 0057339c */
    FUN_00570830(&DAT_007adee0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adee0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3e8);
  }
                    /* try { // try from 00573340 to 0057334b has its CatchHandler @ 005733d4 */
  uVar4 = (**(code **)(DAT_007adee0 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 005733e8  FUN_005733e8 =====

void FUN_005733e8(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 0057342c to 00573437 has its CatchHandler @ 005734e8 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2a08;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3f0 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3f0), iVar2 != 0)) {
                    /* try { // try from 00573498 to 005734a3 has its CatchHandler @ 005734c8 */
    FUN_00570960(&DAT_007adf00);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adf00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3f0);
  }
                    /* try { // try from 0057346c to 00573477 has its CatchHandler @ 00573500 */
  uVar4 = (**(code **)(DAT_007adf00 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00573514  FUN_00573514 =====

void FUN_00573514(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00573558 to 00573563 has its CatchHandler @ 00573614 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2a10;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad3f8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad3f8), iVar2 != 0)) {
                    /* try { // try from 005735c4 to 005735cf has its CatchHandler @ 005735f4 */
    FUN_00570a90(&DAT_007adf20);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adf20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3f8);
  }
                    /* try { // try from 00573598 to 005735a3 has its CatchHandler @ 0057362c */
  uVar4 = (**(code **)(DAT_007adf20 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00573640  FUN_00573640 =====

void FUN_00573640(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 00573684 to 0057368f has its CatchHandler @ 00573740 */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2a18;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad400 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad400), iVar2 != 0)) {
                    /* try { // try from 005736f0 to 005736fb has its CatchHandler @ 00573720 */
    FUN_00570bc0(&DAT_007adf40);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adf40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad400);
  }
                    /* try { // try from 005736c4 to 005736cf has its CatchHandler @ 00573758 */
  uVar4 = (**(code **)(DAT_007adf40 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 0057376c  FUN_0057376c =====

void FUN_0057376c(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_007a2730;
  *(undefined4 *)(param_1 + 1) = 5;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar3 = (undefined8 *)FUN_00759c3c(0x30);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
                    /* try { // try from 005737b0 to 005737bb has its CatchHandler @ 0057386c */
  FUN_0065e020(puVar3,0,0);
  puVar1 = PTR_DAT_007a2a20;
  param_1[3] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_007ad408 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad408), iVar2 != 0)) {
                    /* try { // try from 0057381c to 00573827 has its CatchHandler @ 0057384c */
    FUN_00570cf0(&DAT_007adf60);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adf60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad408);
  }
                    /* try { // try from 005737f0 to 005737fb has its CatchHandler @ 00573884 */
  uVar4 = (**(code **)(DAT_007adf60 + 0x20))();
  FUN_0057df3c(uVar4,param_1[3]);
  return;
}


// ===== 00573898  FUN_00573898 =====

void FUN_00573898(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 005738e0  FUN_005738e0 =====

void FUN_005738e0(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_007ad260 & 1) == 0) goto LAB_00574b84;
  do {
    plVar3 = *(long **)(param_1 + 0x20);
    local_40 = &DAT_007ad8c0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
      if (((DAT_007ad268 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad268), iVar2 != 0)) {
                    /* try { // try from 00574bdc to 00574be7 has its CatchHandler @ 00576928 */
        FUN_0056cef8(&DAT_007ad8e0);
        __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8e0,&PTR_LOOP_0075ec90);
        FUN_00739d60(&DAT_007ad268);
      }
      plVar3 = *(long **)(param_1 + 0x20);
      local_40 = &DAT_007ad8e0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
        if (((DAT_007ad270 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad270), iVar2 != 0)) {
                    /* try { // try from 00574c20 to 00574c2b has its CatchHandler @ 00576918 */
          FUN_0056d08c(&DAT_007ad900);
          __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad900,&PTR_LOOP_0075ec90);
          FUN_00739d60(&DAT_007ad270);
        }
        plVar3 = *(long **)(param_1 + 0x20);
        local_40 = &DAT_007ad900;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
          if (((DAT_007ad278 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad278), iVar2 != 0)) {
                    /* try { // try from 00574c64 to 00574c6f has its CatchHandler @ 00576908 */
            FUN_0056d220(&DAT_007ad920);
            __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad920,&PTR_LOOP_0075ec90);
            FUN_00739d60(&DAT_007ad278);
          }
          plVar3 = *(long **)(param_1 + 0x20);
          local_40 = &DAT_007ad920;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
            if (((DAT_007ad280 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad280), iVar2 != 0)) {
                    /* try { // try from 00574ca8 to 00574cb3 has its CatchHandler @ 005768f8 */
              FUN_0056d3b4(&DAT_007ad940);
              __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad940,&PTR_LOOP_0075ec90);
              FUN_00739d60(&DAT_007ad280);
            }
            plVar3 = *(long **)(param_1 + 0x20);
            local_40 = &DAT_007ad940;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
              if (((DAT_007ad288 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad288), iVar2 != 0)) {
                    /* try { // try from 00574cec to 00574cf7 has its CatchHandler @ 005768e8 */
                FUN_0056d548(&DAT_007ad960);
                __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad960,&PTR_LOOP_0075ec90);
                FUN_00739d60(&DAT_007ad288);
              }
              plVar3 = *(long **)(param_1 + 0x20);
              local_40 = &DAT_007ad960;
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                if (((DAT_007ad290 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad290), iVar2 != 0))
                {
                    /* try { // try from 00574d30 to 00574d3b has its CatchHandler @ 005768d8 */
                  FUN_0056d6dc(&DAT_007ad980);
                  __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad980,&PTR_LOOP_0075ec90);
                  FUN_00739d60(&DAT_007ad290);
                }
                plVar3 = *(long **)(param_1 + 0x20);
                local_40 = &DAT_007ad980;
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                  if (((DAT_007ad298 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad298), iVar2 != 0)
                     ) {
                    /* try { // try from 00574d74 to 00574d7f has its CatchHandler @ 005768c8 */
                    FUN_0056d870(&DAT_007ad9a0);
                    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9a0,&PTR_LOOP_0075ec90);
                    FUN_00739d60(&DAT_007ad298);
                  }
                  plVar3 = *(long **)(param_1 + 0x20);
                  local_40 = &DAT_007ad9a0;
                  if (plVar3 != (long *)0x0) {
                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                    if (((DAT_007ad2a0 & 1) == 0) &&
                       (iVar2 = FUN_00739c1c(&DAT_007ad2a0), iVar2 != 0)) {
                    /* try { // try from 00574db8 to 00574dc3 has its CatchHandler @ 005768b8 */
                      FUN_0056da04(&DAT_007ad9c0);
                      __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9c0,&PTR_LOOP_0075ec90);
                      FUN_00739d60(&DAT_007ad2a0);
                    }
                    plVar3 = *(long **)(param_1 + 0x20);
                    local_40 = &DAT_007ad9c0;
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                      if (((DAT_007ad2a8 & 1) == 0) &&
                         (iVar2 = FUN_00739c1c(&DAT_007ad2a8), iVar2 != 0)) {
                    /* try { // try from 00574dfc to 00574e07 has its CatchHandler @ 005768a8 */
                        FUN_0056db98(&DAT_007ad9e0);
                        __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9e0,&PTR_LOOP_0075ec90);
                        FUN_00739d60(&DAT_007ad2a8);
                      }
                      plVar3 = *(long **)(param_1 + 0x20);
                      local_40 = &DAT_007ad9e0;
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                        if (((DAT_007ad2b0 & 1) == 0) &&
                           (iVar2 = FUN_00739c1c(&DAT_007ad2b0), iVar2 != 0)) {
                    /* try { // try from 00574e40 to 00574e4b has its CatchHandler @ 00576898 */
                          FUN_0056dd2c(&DAT_007ada00);
                          __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada00,&PTR_LOOP_0075ec90);
                          FUN_00739d60(&DAT_007ad2b0);
                        }
                        plVar3 = *(long **)(param_1 + 0x20);
                        local_40 = &DAT_007ada00;
                        if (plVar3 != (long *)0x0) {
                          (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                          if (((DAT_007ad2b8 & 1) == 0) &&
                             (iVar2 = FUN_00739c1c(&DAT_007ad2b8), iVar2 != 0)) {
                    /* try { // try from 00574e84 to 00574e8f has its CatchHandler @ 00576888 */
                            FUN_0056dec0(&DAT_007ada20);
                            __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada20,&PTR_LOOP_0075ec90);
                            FUN_00739d60(&DAT_007ad2b8);
                          }
                          plVar3 = *(long **)(param_1 + 0x20);
                          local_40 = &DAT_007ada20;
                          if (plVar3 != (long *)0x0) {
                            (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                            if (((DAT_007ad2c0 & 1) == 0) &&
                               (iVar2 = FUN_00739c1c(&DAT_007ad2c0), iVar2 != 0)) {
                    /* try { // try from 00574ec8 to 00574ed3 has its CatchHandler @ 00576878 */
                              FUN_0056e054(&DAT_007ada40);
                              __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada40,&PTR_LOOP_0075ec90);
                              FUN_00739d60(&DAT_007ad2c0);
                            }
                            plVar3 = *(long **)(param_1 + 0x20);
                            local_40 = &DAT_007ada40;
                            if (plVar3 != (long *)0x0) {
                              (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                              if (((DAT_007ad2c8 & 1) == 0) &&
                                 (iVar2 = FUN_00739c1c(&DAT_007ad2c8), iVar2 != 0)) {
                    /* try { // try from 00574f0c to 00574f17 has its CatchHandler @ 00576868 */
                                FUN_0056e1e8(&DAT_007ada60);
                                __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada60,&PTR_LOOP_0075ec90);
                                FUN_00739d60(&DAT_007ad2c8);
                              }
                              plVar3 = *(long **)(param_1 + 0x20);
                              local_40 = &DAT_007ada60;
                              if (plVar3 != (long *)0x0) {
                                (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                if (((DAT_007ad2d0 & 1) == 0) &&
                                   (iVar2 = FUN_00739c1c(&DAT_007ad2d0), iVar2 != 0)) {
                    /* try { // try from 00574f50 to 00574f5b has its CatchHandler @ 00576858 */
                                  FUN_0056e2e0(&DAT_007ada80);
                                  __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada80,&PTR_LOOP_0075ec90);
                                  FUN_00739d60(&DAT_007ad2d0);
                                }
                                plVar3 = *(long **)(param_1 + 0x20);
                                local_40 = &DAT_007ada80;
                                if (plVar3 != (long *)0x0) {
                                  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                  if (((DAT_007ad2d8 & 1) == 0) &&
                                     (iVar2 = FUN_00739c1c(&DAT_007ad2d8), iVar2 != 0)) {
                    /* try { // try from 00574f94 to 00574f9f has its CatchHandler @ 00576848 */
                                    FUN_0056e3d8(&DAT_007adaa0);
                                    __cxa_atexit(PTR_FUN_007a2738,&DAT_007adaa0,&PTR_LOOP_0075ec90);
                                    FUN_00739d60(&DAT_007ad2d8);
                                  }
                                  plVar3 = *(long **)(param_1 + 0x20);
                                  local_40 = &DAT_007adaa0;
                                  if (plVar3 != (long *)0x0) {
                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                    if (((DAT_007ad2e0 & 1) == 0) &&
                                       (iVar2 = FUN_00739c1c(&DAT_007ad2e0), iVar2 != 0)) {
                    /* try { // try from 00574fd8 to 00574fe3 has its CatchHandler @ 00576838 */
                                      FUN_0056e4d0(&DAT_007adac0);
                                      __cxa_atexit(PTR_FUN_007a2738,&DAT_007adac0,&PTR_LOOP_0075ec90
                                                  );
                                      FUN_00739d60(&DAT_007ad2e0);
                                    }
                                    plVar3 = *(long **)(param_1 + 0x20);
                                    local_40 = &DAT_007adac0;
                                    if (plVar3 != (long *)0x0) {
                                      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                      if (((DAT_007ad2e8 & 1) == 0) &&
                                         (iVar2 = FUN_00739c1c(&DAT_007ad2e8), iVar2 != 0)) {
                    /* try { // try from 0057501c to 00575027 has its CatchHandler @ 00576828 */
                                        FUN_0056e5c8(&DAT_007adae0);
                                        __cxa_atexit(PTR_FUN_007a2738,&DAT_007adae0,
                                                     &PTR_LOOP_0075ec90);
                                        FUN_00739d60(&DAT_007ad2e8);
                                      }
                                      plVar3 = *(long **)(param_1 + 0x20);
                                      local_40 = &DAT_007adae0;
                                      if (plVar3 != (long *)0x0) {
                                        (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                        if (((DAT_007ad2f0 & 1) == 0) &&
                                           (iVar2 = FUN_00739c1c(&DAT_007ad2f0), iVar2 != 0)) {
                    /* try { // try from 00575060 to 0057506b has its CatchHandler @ 00576818 */
                                          FUN_0056e708(&DAT_007adb00);
                                          __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adb00,
                                                       &PTR_LOOP_0075ec90);
                                          FUN_00739d60(&DAT_007ad2f0);
                                        }
                                        plVar3 = *(long **)(param_1 + 0x20);
                                        local_40 = (undefined8 *)&DAT_007adb00;
                                        if (plVar3 != (long *)0x0) {
                                          (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                          if (((DAT_007ad2f8 & 1) == 0) &&
                                             (iVar2 = FUN_00739c1c(&DAT_007ad2f8), iVar2 != 0)) {
                    /* try { // try from 005750a4 to 005750af has its CatchHandler @ 00576808 */
                                            FUN_0056e800(&DAT_007adb20);
                                            __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adb20,
                                                         &PTR_LOOP_0075ec90);
                                            FUN_00739d60(&DAT_007ad2f8);
                                          }
                                          plVar3 = *(long **)(param_1 + 0x20);
                                          local_40 = (undefined8 *)&DAT_007adb20;
                                          if (plVar3 != (long *)0x0) {
                                            (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                            if (((DAT_007ad300 & 1) == 0) &&
                                               (iVar2 = FUN_00739c1c(&DAT_007ad300), iVar2 != 0)) {
                    /* try { // try from 005750e8 to 005750f3 has its CatchHandler @ 005767f8 */
                                              FUN_0056e8f8(&DAT_007adb40);
                                              __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adb40,
                                                           &PTR_LOOP_0075ec90);
                                              FUN_00739d60(&DAT_007ad300);
                                            }
                                            plVar3 = *(long **)(param_1 + 0x20);
                                            local_40 = (undefined8 *)&DAT_007adb40;
                                            if (plVar3 != (long *)0x0) {
                                              (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                              if (((DAT_007ad308 & 1) == 0) &&
                                                 (iVar2 = FUN_00739c1c(&DAT_007ad308), iVar2 != 0))
                                              {
                    /* try { // try from 0057512c to 00575137 has its CatchHandler @ 005767e8 */
                                                FUN_0056e9f0(&DAT_007adb60);
                                                __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adb60,
                                                             &PTR_LOOP_0075ec90);
                                                FUN_00739d60(&DAT_007ad308);
                                              }
                                              plVar3 = *(long **)(param_1 + 0x20);
                                              local_40 = (undefined8 *)&DAT_007adb60;
                                              if (plVar3 != (long *)0x0) {
                                                (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                if (((DAT_007ad310 & 1) == 0) &&
                                                   (iVar2 = FUN_00739c1c(&DAT_007ad310), iVar2 != 0)
                                                   ) {
                    /* try { // try from 00575170 to 0057517b has its CatchHandler @ 005767d8 */
                                                  FUN_0056eae8(&DAT_007adb80);
                                                  __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adb80,
                                                               &PTR_LOOP_0075ec90);
                                                  FUN_00739d60(&DAT_007ad310);
                                                }
                                                plVar3 = *(long **)(param_1 + 0x20);
                                                local_40 = (undefined8 *)&DAT_007adb80;
                                                if (plVar3 != (long *)0x0) {
                                                  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                  if (((DAT_007ad318 & 1) == 0) &&
                                                     (iVar2 = FUN_00739c1c(&DAT_007ad318),
                                                     iVar2 != 0)) {
                    /* try { // try from 005751b4 to 005751bf has its CatchHandler @ 005767c8 */
                                                    FUN_0056ebe0(&DAT_007adba0);
                                                    __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adba0,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad318);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = (undefined8 *)&DAT_007adba0;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad320 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad320),
                                                       iVar2 != 0)) {
                    /* try { // try from 005751f8 to 00575203 has its CatchHandler @ 005767b8 */
                                                      FUN_0056ecd8(&DAT_007adbc0);
                                                      __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adbc0,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad320);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = (undefined8 *)&DAT_007adbc0;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad328 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad328),
                                                         iVar2 != 0)) {
                    /* try { // try from 0057523c to 00575247 has its CatchHandler @ 005767a8 */
                                                        FUN_0056edd0(&DAT_007adbe0);
                                                        __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adbe0,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad328);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = (undefined8 *)&DAT_007adbe0;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad330 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad330),
                                                           iVar2 != 0)) {
                    /* try { // try from 00575280 to 0057528b has its CatchHandler @ 00576798 */
                                                          FUN_0056eec8(&DAT_007adc00);
                                                          __cxa_atexit(PTR_FUN_007a27d0,
                                                                       &DAT_007adc00,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad330);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007adc00;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad338 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad338),
                                                             iVar2 != 0)) {
                    /* try { // try from 005752c4 to 005752cf has its CatchHandler @ 00576788 */
                                                            FUN_0056efc0(&DAT_007adc20);
                                                            __cxa_atexit(PTR_FUN_007a27d0,
                                                                         &DAT_007adc20,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad338);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = (undefined8 *)&DAT_007adc20;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad340 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad340),
                                                               iVar2 != 0)) {
                    /* try { // try from 00575308 to 00575313 has its CatchHandler @ 00576778 */
                                                              FUN_0056f0b8(&DAT_007adc40);
                                                              __cxa_atexit(PTR_FUN_007a27d0,
                                                                           &DAT_007adc40,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad340);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = (undefined8 *)&DAT_007adc40;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad348 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad348
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 0057534c to 00575357 has its CatchHandler @ 00576768 */
                                                                FUN_0056f1b0(&DAT_007adc60);
                                                                __cxa_atexit(PTR_FUN_007a27d0,
                                                                             &DAT_007adc60,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad348);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = (undefined8 *)&DAT_007adc60
                                                              ;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad350 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad350), iVar2 != 0)) {
                    /* try { // try from 00575390 to 0057539b has its CatchHandler @ 00576758 */
                                                    FUN_0056f2a8(&DAT_007adc80);
                                                    __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adc80,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad350);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = (undefined8 *)&DAT_007adc80;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad358 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad358),
                                                       iVar2 != 0)) {
                    /* try { // try from 005753d4 to 005753df has its CatchHandler @ 00576748 */
                                                      FUN_0056f3a0(&DAT_007adca0);
                                                      __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adca0,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad358);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = (undefined8 *)&DAT_007adca0;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad360 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad360),
                                                         iVar2 != 0)) {
                    /* try { // try from 00575418 to 00575423 has its CatchHandler @ 00576738 */
                                                        FUN_0056f498(&DAT_007adcc0);
                                                        __cxa_atexit(PTR_FUN_007a27d0,&DAT_007adcc0,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad360);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = (undefined8 *)&DAT_007adcc0;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad368 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad368),
                                                           iVar2 != 0)) {
                    /* try { // try from 0057545c to 00575467 has its CatchHandler @ 00576728 */
                                                          FUN_0056f590(&DAT_007adce0);
                                                          __cxa_atexit(PTR_FUN_007a27d0,
                                                                       &DAT_007adce0,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad368);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007adce0;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad370 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad370),
                                                             iVar2 != 0)) {
                    /* try { // try from 005754a0 to 005754ab has its CatchHandler @ 00576718 */
                                                            FUN_0056f688(&DAT_007add00);
                                                            __cxa_atexit(PTR_FUN_007a27d0,
                                                                         &DAT_007add00,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad370);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = (undefined8 *)&DAT_007add00;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad378 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad378),
                                                               iVar2 != 0)) {
                    /* try { // try from 005754e4 to 005754ef has its CatchHandler @ 00576708 */
                                                              FUN_0056f780(&DAT_007add20);
                                                              __cxa_atexit(PTR_FUN_007a27d0,
                                                                           &DAT_007add20,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad378);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = (undefined8 *)&DAT_007add20;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad3b0 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad3b0
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 00575528 to 00575533 has its CatchHandler @ 005766f8 */
                                                                FUN_0056ffe0(&DAT_007ade00);
                                                                __cxa_atexit(PTR_FUN_007a2868,
                                                                             &DAT_007ade00,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad3b0);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = &DAT_007ade00;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad380 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad380), iVar2 != 0)) {
                    /* try { // try from 0057556c to 00575577 has its CatchHandler @ 005766e8 */
                                                    FUN_0056f8c0(&DAT_007add40);
                                                    __cxa_atexit(PTR_FUN_007a2868,&DAT_007add40,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad380);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = &DAT_007add40;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad3d0 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad3d0),
                                                       iVar2 != 0)) {
                    /* try { // try from 005755b0 to 005755bb has its CatchHandler @ 005766d8 */
                                                      FUN_005704a0(&DAT_007ade80);
                                                      __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade80,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad3d0);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = &DAT_007ade80;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad3d8 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad3d8),
                                                         iVar2 != 0)) {
                    /* try { // try from 005755f4 to 005755ff has its CatchHandler @ 005766c8 */
                                                        FUN_005705d0(&DAT_007adea0);
                                                        __cxa_atexit(PTR_FUN_007a2868,&DAT_007adea0,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad3d8);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = &DAT_007adea0;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad390 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad390),
                                                           iVar2 != 0)) {
                    /* try { // try from 00575638 to 00575643 has its CatchHandler @ 005766b8 */
                                                          FUN_0056fb20(&DAT_007add80);
                                                          __cxa_atexit(PTR_FUN_007a2868,
                                                                       &DAT_007add80,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad390);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = &DAT_007add80;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad398 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad398),
                                                             iVar2 != 0)) {
                    /* try { // try from 0057567c to 00575687 has its CatchHandler @ 005766a8 */
                                                            FUN_0056fc50(&DAT_007adda0);
                                                            __cxa_atexit(PTR_FUN_007a2868,
                                                                         &DAT_007adda0,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad398);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = &DAT_007adda0;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad3a8 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad3a8),
                                                               iVar2 != 0)) {
                    /* try { // try from 005756c0 to 005756cb has its CatchHandler @ 00576698 */
                                                              FUN_0056feb0(&DAT_007adde0);
                                                              __cxa_atexit(PTR_FUN_007a2868,
                                                                           &DAT_007adde0,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad3a8);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = &DAT_007adde0;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad3a0 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad3a0
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 00575704 to 0057570f has its CatchHandler @ 00576688 */
                                                                FUN_0056fd80(&DAT_007addc0);
                                                                __cxa_atexit(PTR_FUN_007a2868,
                                                                             &DAT_007addc0,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad3a0);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = &DAT_007addc0;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad3c0 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad3c0), iVar2 != 0)) {
                    /* try { // try from 00575748 to 00575753 has its CatchHandler @ 00576678 */
                                                    FUN_00570240(&DAT_007ade40);
                                                    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade40,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad3c0);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = &DAT_007ade40;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad388 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad388),
                                                       iVar2 != 0)) {
                    /* try { // try from 0057578c to 00575797 has its CatchHandler @ 00576668 */
                                                      FUN_0056f9f0(&DAT_007add60);
                                                      __cxa_atexit(PTR_FUN_007a2868,&DAT_007add60,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad388);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = &DAT_007add60;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad3b8 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad3b8),
                                                         iVar2 != 0)) {
                    /* try { // try from 005757d0 to 005757db has its CatchHandler @ 00576658 */
                                                        FUN_00570110(&DAT_007ade20);
                                                        __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade20,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad3b8);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = &DAT_007ade20;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad3c8 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad3c8),
                                                           iVar2 != 0)) {
                    /* try { // try from 00575814 to 0057581f has its CatchHandler @ 00576648 */
                                                          FUN_00570370(&DAT_007ade60);
                                                          __cxa_atexit(PTR_FUN_007a2868,
                                                                       &DAT_007ade60,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad3c8);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = &DAT_007ade60;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad3e0 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad3e0),
                                                             iVar2 != 0)) {
                    /* try { // try from 00575858 to 00575863 has its CatchHandler @ 00576638 */
                                                            FUN_00570700(&DAT_007adec0);
                                                            __cxa_atexit(PTR_FUN_007a2868,
                                                                         &DAT_007adec0,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad3e0);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = &DAT_007adec0;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad3e8 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad3e8),
                                                               iVar2 != 0)) {
                    /* try { // try from 0057589c to 005758a7 has its CatchHandler @ 00576628 */
                                                              FUN_00570830(&DAT_007adee0);
                                                              __cxa_atexit(PTR_FUN_007a2868,
                                                                           &DAT_007adee0,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad3e8);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = &DAT_007adee0;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad3f0 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad3f0
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 005758e0 to 005758eb has its CatchHandler @ 00576618 */
                                                                FUN_00570960(&DAT_007adf00);
                                                                __cxa_atexit(PTR_FUN_007a2868,
                                                                             &DAT_007adf00,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad3f0);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = &DAT_007adf00;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad3f8 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad3f8), iVar2 != 0)) {
                    /* try { // try from 00575924 to 0057592f has its CatchHandler @ 00576608 */
                                                    FUN_00570a90(&DAT_007adf20);
                                                    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adf20,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad3f8);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = &DAT_007adf20;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad400 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad400),
                                                       iVar2 != 0)) {
                    /* try { // try from 00575968 to 00575973 has its CatchHandler @ 005765f8 */
                                                      FUN_00570bc0(&DAT_007adf40);
                                                      __cxa_atexit(PTR_FUN_007a2868,&DAT_007adf40,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad400);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = &DAT_007adf40;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad408 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad408),
                                                         iVar2 != 0)) {
                    /* try { // try from 005759ac to 005759b7 has its CatchHandler @ 005765e8 */
                                                        FUN_00570cf0(&DAT_007adf60);
                                                        __cxa_atexit(PTR_FUN_007a2868,&DAT_007adf60,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad408);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = &DAT_007adf60;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad410 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad410),
                                                           iVar2 != 0)) {
                    /* try { // try from 005759f0 to 005759fb has its CatchHandler @ 005765d8 */
                                                          FUN_00570e68(&DAT_007adf80);
                                                          __cxa_atexit(PTR_FUN_007a2900,
                                                                       &DAT_007adf80,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad410);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007adf80;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad418 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad418),
                                                             iVar2 != 0)) {
                    /* try { // try from 00575a34 to 00575a3f has its CatchHandler @ 005765c8 */
                                                            FUN_00570f94(&DAT_007adfa0);
                                                            __cxa_atexit(PTR_FUN_007a2900,
                                                                         &DAT_007adfa0,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad418);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = (undefined8 *)&DAT_007adfa0;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad420 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad420),
                                                               iVar2 != 0)) {
                    /* try { // try from 00575a78 to 00575a83 has its CatchHandler @ 005765b8 */
                                                              FUN_005710c0(&DAT_007adfc0);
                                                              __cxa_atexit(PTR_FUN_007a2900,
                                                                           &DAT_007adfc0,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad420);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = (undefined8 *)&DAT_007adfc0;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad428 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad428
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 00575abc to 00575ac7 has its CatchHandler @ 005765a8 */
                                                                FUN_005711ec(&DAT_007adfe0);
                                                                __cxa_atexit(PTR_FUN_007a2900,
                                                                             &DAT_007adfe0,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad428);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = (undefined8 *)&DAT_007adfe0
                                                              ;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad430 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad430), iVar2 != 0)) {
                    /* try { // try from 00575b00 to 00575b0b has its CatchHandler @ 00576598 */
                                                    FUN_00571318(&DAT_007ae000);
                                                    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae000,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad430);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = (undefined8 *)&DAT_007ae000;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad438 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad438),
                                                       iVar2 != 0)) {
                    /* try { // try from 00575b44 to 00575b4f has its CatchHandler @ 00576588 */
                                                      FUN_00571444(&DAT_007ae020);
                                                      __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae020,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad438);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = (undefined8 *)&DAT_007ae020;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad440 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad440),
                                                         iVar2 != 0)) {
                    /* try { // try from 00575b88 to 00575b93 has its CatchHandler @ 00576578 */
                                                        FUN_00571570(&DAT_007ae040);
                                                        __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae040,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad440);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = (undefined8 *)&DAT_007ae040;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad448 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad448),
                                                           iVar2 != 0)) {
                    /* try { // try from 00575bcc to 00575bd7 has its CatchHandler @ 00576568 */
                                                          FUN_0057169c(&DAT_007ae060);
                                                          __cxa_atexit(PTR_FUN_007a2900,
                                                                       &DAT_007ae060,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad448);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007ae060;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad450 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad450),
                                                             iVar2 != 0)) {
                    /* try { // try from 00575c10 to 00575c1b has its CatchHandler @ 00576558 */
                                                            FUN_005717c8(&DAT_007ae080);
                                                            __cxa_atexit(PTR_FUN_007a2900,
                                                                         &DAT_007ae080,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad450);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = (undefined8 *)&DAT_007ae080;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad458 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad458),
                                                               iVar2 != 0)) {
                    /* try { // try from 00575c54 to 00575c5f has its CatchHandler @ 00576548 */
                                                              FUN_005718f4(&DAT_007ae0a0);
                                                              __cxa_atexit(PTR_FUN_007a2900,
                                                                           &DAT_007ae0a0,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad458);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = (undefined8 *)&DAT_007ae0a0;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad460 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad460
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 00575c98 to 00575ca3 has its CatchHandler @ 00576538 */
                                                                FUN_00571a20(&DAT_007ae0c0);
                                                                __cxa_atexit(PTR_FUN_007a2900,
                                                                             &DAT_007ae0c0,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad460);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = (undefined8 *)&DAT_007ae0c0
                                                              ;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad468 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad468), iVar2 != 0)) {
                    /* try { // try from 00575cdc to 00575ce7 has its CatchHandler @ 00576528 */
                                                    FUN_00571b4c(&DAT_007ae0e0);
                                                    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae0e0,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad468);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = (undefined8 *)&DAT_007ae0e0;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad470 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad470),
                                                       iVar2 != 0)) {
                    /* try { // try from 00575d20 to 00575d2b has its CatchHandler @ 00576518 */
                                                      FUN_00571c78(&DAT_007ae100);
                                                      __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae100,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad470);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = (undefined8 *)&DAT_007ae100;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad478 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad478),
                                                         iVar2 != 0)) {
                    /* try { // try from 00575d64 to 00575d6f has its CatchHandler @ 00576508 */
                                                        FUN_00571da4(&DAT_007ae120);
                                                        __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae120,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad478);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = (undefined8 *)&DAT_007ae120;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad480 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad480),
                                                           iVar2 != 0)) {
                    /* try { // try from 00575da8 to 00575db3 has its CatchHandler @ 005764f8 */
                                                          FUN_00571ed0(&DAT_007ae140);
                                                          __cxa_atexit(PTR_FUN_007a2900,
                                                                       &DAT_007ae140,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad480);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007ae140;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad488 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad488),
                                                             iVar2 != 0)) {
                    /* try { // try from 00575dec to 00575df7 has its CatchHandler @ 005764e8 */
                                                            FUN_00571ffc(&DAT_007ae160);
                                                            __cxa_atexit(PTR_FUN_007a2900,
                                                                         &DAT_007ae160,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad488);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = (undefined8 *)&DAT_007ae160;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad490 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad490),
                                                               iVar2 != 0)) {
                    /* try { // try from 00575e30 to 00575e3b has its CatchHandler @ 005764d8 */
                                                              FUN_00572128(&DAT_007ae180);
                                                              __cxa_atexit(PTR_FUN_007a2900,
                                                                           &DAT_007ae180,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad490);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = (undefined8 *)&DAT_007ae180;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad498 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad498
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 00575e74 to 00575e7f has its CatchHandler @ 005764c8 */
                                                                FUN_00572254(&DAT_007ae1a0);
                                                                __cxa_atexit(PTR_FUN_007a2900,
                                                                             &DAT_007ae1a0,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad498);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = (undefined8 *)&DAT_007ae1a0
                                                              ;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad4a0 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad4a0), iVar2 != 0)) {
                    /* try { // try from 00575eb8 to 00575ec3 has its CatchHandler @ 005764b8 */
                                                    FUN_00572380(&DAT_007ae1c0);
                                                    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae1c0,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad4a0);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = (undefined8 *)&DAT_007ae1c0;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad4a8 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad4a8),
                                                       iVar2 != 0)) {
                    /* try { // try from 00575efc to 00575f07 has its CatchHandler @ 005764a8 */
                                                      FUN_005724ac(&DAT_007ae1e0);
                                                      __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae1e0,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad4a8);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = (undefined8 *)&DAT_007ae1e0;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad4b0 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad4b0),
                                                         iVar2 != 0)) {
                    /* try { // try from 00575f40 to 00575f4b has its CatchHandler @ 00576498 */
                                                        FUN_005725d8(&DAT_007ae200);
                                                        __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae200,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad4b0);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = (undefined8 *)&DAT_007ae200;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad4b8 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad4b8),
                                                           iVar2 != 0)) {
                    /* try { // try from 00575f80 to 00575f8b has its CatchHandler @ 00576488 */
                                                          FUN_00572704(&DAT_007ae220);
                                                          __cxa_atexit(PTR_FUN_007a2900,
                                                                       &DAT_007ae220,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad4b8);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007ae220;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad4c0 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad4c0),
                                                             iVar2 != 0)) {
                    /* try { // try from 00575fc8 to 00575fd3 has its CatchHandler @ 00576478 */
                                                            FUN_00572830(&DAT_007ae240);
                                                            __cxa_atexit(PTR_FUN_007a2900,
                                                                         &DAT_007ae240,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad4c0);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = (undefined8 *)&DAT_007ae240;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad4c8 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad4c8),
                                                               iVar2 != 0)) {
                    /* try { // try from 00576010 to 0057601b has its CatchHandler @ 00576468 */
                                                              FUN_0057295c(&DAT_007ae260);
                                                              __cxa_atexit(PTR_FUN_007a2900,
                                                                           &DAT_007ae260,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad4c8);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = (undefined8 *)&DAT_007ae260;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad4d0 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad4d0
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 00576058 to 00576063 has its CatchHandler @ 00576458 */
                                                                FUN_00572a88(&DAT_007ae280);
                                                                __cxa_atexit(PTR_FUN_007a2900,
                                                                             &DAT_007ae280,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad4d0);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = (undefined8 *)&DAT_007ae280
                                                              ;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad4d8 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad4d8), iVar2 != 0)) {
                    /* try { // try from 005760a0 to 005760ab has its CatchHandler @ 00576448 */
                                                    FUN_00572bb4(&DAT_007ae2a0);
                                                    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae2a0,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad4d8);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = (undefined8 *)&DAT_007ae2a0;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad4e0 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad4e0),
                                                       iVar2 != 0)) {
                    /* try { // try from 005760e8 to 005760f3 has its CatchHandler @ 00576438 */
                                                      FUN_00572ce0(&DAT_007ae2c0);
                                                      __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae2c0,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad4e0);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = (undefined8 *)&DAT_007ae2c0;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad4e8 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad4e8),
                                                         iVar2 != 0)) {
                    /* try { // try from 00576130 to 0057613b has its CatchHandler @ 00576428 */
                                                        FUN_00572e0c(&DAT_007ae2e0);
                                                        __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae2e0,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad4e8);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = (undefined8 *)&DAT_007ae2e0;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad4f0 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad4f0),
                                                           iVar2 != 0)) {
                    /* try { // try from 00576178 to 00576183 has its CatchHandler @ 00576418 */
                                                          FUN_00572f38(&DAT_007ae300);
                                                          __cxa_atexit(PTR_FUN_007a2900,
                                                                       &DAT_007ae300,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad4f0);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007ae300;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (((DAT_007ad4f8 & 1) == 0) &&
                                                             (iVar2 = FUN_00739c1c(&DAT_007ad4f8),
                                                             iVar2 != 0)) {
                    /* try { // try from 005761c0 to 005761cb has its CatchHandler @ 00576408 */
                                                            FUN_00573064(&DAT_007ae320);
                                                            __cxa_atexit(PTR_FUN_007a2900,
                                                                         &DAT_007ae320,
                                                                         &PTR_LOOP_0075ec90);
                                                            FUN_00739d60(&DAT_007ad4f8);
                                                          }
                                                          plVar3 = *(long **)(param_1 + 0x20);
                                                          local_40 = (undefined8 *)&DAT_007ae320;
                                                          if (plVar3 != (long *)0x0) {
                                                            (**(code **)(*plVar3 + 0x30))
                                                                      (plVar3,&local_40);
                                                            if (((DAT_007ad500 & 1) == 0) &&
                                                               (iVar2 = FUN_00739c1c(&DAT_007ad500),
                                                               iVar2 != 0)) {
                    /* try { // try from 00576208 to 00576213 has its CatchHandler @ 005763f8 */
                                                              FUN_00573190(&DAT_007ae340);
                                                              __cxa_atexit(PTR_FUN_007a2900,
                                                                           &DAT_007ae340,
                                                                           &PTR_LOOP_0075ec90);
                                                              FUN_00739d60(&DAT_007ad500);
                                                            }
                                                            plVar3 = *(long **)(param_1 + 0x20);
                                                            local_40 = (undefined8 *)&DAT_007ae340;
                                                            if (plVar3 != (long *)0x0) {
                                                              (**(code **)(*plVar3 + 0x30))
                                                                        (plVar3,&local_40);
                                                              if (((DAT_007ad508 & 1) == 0) &&
                                                                 (iVar2 = FUN_00739c1c(&DAT_007ad508
                                                                                      ), iVar2 != 0)
                                                                 ) {
                    /* try { // try from 00576250 to 0057625b has its CatchHandler @ 005763e8 */
                                                                FUN_005732bc(&DAT_007ae360);
                                                                __cxa_atexit(PTR_FUN_007a2900,
                                                                             &DAT_007ae360,
                                                                             &PTR_LOOP_0075ec90);
                                                                FUN_00739d60(&DAT_007ad508);
                                                              }
                                                              plVar3 = *(long **)(param_1 + 0x20);
                                                              local_40 = (undefined8 *)&DAT_007ae360
                                                              ;
                                                              if (plVar3 != (long *)0x0) {
                                                                (**(code **)(*plVar3 + 0x30))
                                                                          (plVar3,&local_40);
                                                                if (((DAT_007ad510 & 1) == 0) &&
                                                                   (iVar2 = FUN_00739c1c(&
                                                  DAT_007ad510), iVar2 != 0)) {
                    /* try { // try from 00576298 to 005762a3 has its CatchHandler @ 005763d8 */
                                                    FUN_005733e8(&DAT_007ae380);
                                                    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae380,
                                                                 &PTR_LOOP_0075ec90);
                                                    FUN_00739d60(&DAT_007ad510);
                                                  }
                                                  plVar3 = *(long **)(param_1 + 0x20);
                                                  local_40 = (undefined8 *)&DAT_007ae380;
                                                  if (plVar3 != (long *)0x0) {
                                                    (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
                                                    if (((DAT_007ad518 & 1) == 0) &&
                                                       (iVar2 = FUN_00739c1c(&DAT_007ad518),
                                                       iVar2 != 0)) {
                    /* try { // try from 005762e0 to 005762eb has its CatchHandler @ 005763c8 */
                                                      FUN_00573514(&DAT_007ae3a0);
                                                      __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae3a0,
                                                                   &PTR_LOOP_0075ec90);
                                                      FUN_00739d60(&DAT_007ad518);
                                                    }
                                                    plVar3 = *(long **)(param_1 + 0x20);
                                                    local_40 = (undefined8 *)&DAT_007ae3a0;
                                                    if (plVar3 != (long *)0x0) {
                                                      (**(code **)(*plVar3 + 0x30))
                                                                (plVar3,&local_40);
                                                      if (((DAT_007ad520 & 1) == 0) &&
                                                         (iVar2 = FUN_00739c1c(&DAT_007ad520),
                                                         iVar2 != 0)) {
                    /* try { // try from 00576328 to 00576333 has its CatchHandler @ 005763b8 */
                                                        FUN_00573640(&DAT_007ae3c0);
                                                        __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae3c0,
                                                                     &PTR_LOOP_0075ec90);
                                                        FUN_00739d60(&DAT_007ad520);
                                                      }
                                                      plVar3 = *(long **)(param_1 + 0x20);
                                                      local_40 = (undefined8 *)&DAT_007ae3c0;
                                                      if (plVar3 != (long *)0x0) {
                                                        (**(code **)(*plVar3 + 0x30))
                                                                  (plVar3,&local_40);
                                                        if (((DAT_007ad528 & 1) == 0) &&
                                                           (iVar2 = FUN_00739c1c(&DAT_007ad528),
                                                           iVar2 != 0)) {
                    /* try { // try from 00576370 to 0057637b has its CatchHandler @ 005763a8 */
                                                          FUN_0057376c(&DAT_007ae3e0);
                                                          __cxa_atexit(PTR_FUN_007a2900,
                                                                       &DAT_007ae3e0,
                                                                       &PTR_LOOP_0075ec90);
                                                          FUN_00739d60(&DAT_007ad528);
                                                        }
                                                        plVar3 = *(long **)(param_1 + 0x20);
                                                        local_40 = (undefined8 *)&DAT_007ae3e0;
                                                        if (plVar3 != (long *)0x0) {
                                                          (**(code **)(*plVar3 + 0x30))
                                                                    (plVar3,&local_40);
                                                          if (*(long *)(lVar1 + 0x28) == local_38) {
                                                            return;
                                                          }
LAB_00576960:
                    /* WARNING: Subroutine does not return */
                                                          __stack_chk_fail();
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
    if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00576960;
    FUN_0030be88();
LAB_00574b84:
    iVar2 = FUN_00739c1c(&DAT_007ad260);
    if (iVar2 != 0) {
                    /* try { // try from 00574b98 to 00574ba3 has its CatchHandler @ 00576938 */
      FUN_0056cd64(&DAT_007ad8c0);
      __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8c0,&PTR_LOOP_0075ec90);
      FUN_00739d60(&DAT_007ad260);
    }
  } while( true );
}


// ===== 00576964  FUN_00576964 =====

void FUN_00576964(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x1;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long *plStack_88;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 005769f0 to 005769f7 has its CatchHandler @ 00576ba0 */
    FUN_00645c30(auStack_a8);
                    /* try { // try from 005769f8 to 00576a17 has its CatchHandler @ 00576b8c */
    FUN_0047488c(&local_90,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                 ,0x11a,
                 "void onnxruntime::data_types_internal::DataTypeRegistry::RegisterDataType(MLDataType)"
                 ,auStack_a8);
                    /* try { // try from 00576a18 to 00576a27 has its CatchHandler @ 00576b10 */
    FUN_00479eac(auStack_c0,"Only ONNX MLDataType can be registered");
                    /* try { // try from 00576a2c to 00576a6f has its CatchHandler @ 00576b0c */
    FUN_00474a40(uVar3,&local_90,"proto != nullptr",auStack_c0);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    local_c8 = FUN_00648c14();
    local_90 = local_c8;
    plStack_88 = param_2;
    FUN_0057a754(param_1,&local_90,&local_90);
    if ((extraout_x1 & 1) == 0) {
      uVar3 = FUN_00753a74(0x88);
                    /* try { // try from 00576a80 to 00576a87 has its CatchHandler @ 00576b9c */
      FUN_00645c30(auStack_a8);
                    /* try { // try from 00576a88 to 00576aa7 has its CatchHandler @ 00576b88 */
      FUN_0047488c(&local_90,
                   "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/onnxruntime/core/framework/data_types.cc"
                   ,0x11d,
                   "void onnxruntime::data_types_internal::DataTypeRegistry::RegisterDataType(MLDataType)"
                   ,auStack_a8);
      local_40 = "We do not expect duplicate registration of types for: ";
      FUN_0057ac88(auStack_c0,&local_40,&local_c8);
                    /* try { // try from 00576ac8 to 00576b0b has its CatchHandler @ 00576b30 */
      FUN_00474a40(uVar3,&local_90,"p.second",auStack_c0);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00576bc0  FUN_00576bc0 =====

void FUN_00576bc0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((*PTR_DAT_007a2a28 & 1) == 0) && (iVar2 = FUN_00739c1c(PTR_DAT_007a2a28), iVar2 != 0)) {
                    /* try { // try from 00576c48 to 00576c53 has its CatchHandler @ 00576c80 */
    FUN_0057a554(PTR_DAT_007a2a30);
    __cxa_atexit(PTR_FUN_007a2a38,PTR_DAT_007a2a30,&PTR_LOOP_0075ec90);
    FUN_00739d60(PTR_DAT_007a2a28);
  }
  lVar3 = FUN_0064a728(param_1);
  local_30 = lVar3;
  if ((lVar3 != 0) && (lVar3 = FUN_0057ae40(PTR_DAT_007a2a30,&local_30), lVar3 != 0)) {
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


// ===== 00576cac  FUN_00576cac =====

byte * FUN_00576cac(long *param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_1 == (long *)0x0) {
    return (byte *)"(null)";
  }
  if ((((int)param_1[1] == 6) && (uVar1 = (int)param_1[3] - 1, uVar1 < 0x14)) &&
     ((0xf9fffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return (&PTR_s_float_00796300)[uVar1];
  }
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if (lVar2 != 0) {
    pbVar3 = (byte *)FUN_00648c14();
    pbVar4 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar4 = pbVar3 + 1;
    }
    return pbVar4;
  }
  return (byte *)"(unknown type)";
}


// ===== 00576d3c  FUN_00576d3c =====

void FUN_00576d3c(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *local_70;
  int *local_60;
  undefined1 auStack_58 [28];
  undefined4 local_3c;
  char *local_38;
  char *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_3c = param_1;
  switch(param_1) {
  case 1:
    puVar4 = &DAT_007ad8e0;
    local_60 = &DAT_007ad8e8;
    if ((DAT_007ad268 & 1) == 0) {
      local_60 = &DAT_007ad8e8;
      local_70 = &DAT_007ad268;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00576db4 to 00576dbb has its CatchHandler @ 005774ac */
        puVar4 = &DAT_007ad8e0;
        FUN_0056cef8();
        local_60 = &DAT_007ad8e8;
LAB_00577300:
        __cxa_atexit(PTR_FUN_007a2738,puVar4,&PTR_LOOP_0075ec90);
        FUN_00739d60(local_70);
      }
    }
    break;
  case 2:
    puVar4 = &DAT_007ad960;
    local_60 = &DAT_007ad968;
    if ((DAT_007ad288 & 1) == 0) {
      local_60 = &DAT_007ad968;
      local_70 = &DAT_007ad288;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577274 to 0057727b has its CatchHandler @ 005773ac */
        puVar4 = &DAT_007ad960;
        FUN_0056d548();
        local_60 = &DAT_007ad968;
        goto LAB_00577300;
      }
    }
    break;
  case 3:
    puVar4 = &DAT_007ad940;
    local_60 = &DAT_007ad948;
    if ((DAT_007ad280 & 1) == 0) {
      local_60 = &DAT_007ad948;
      local_70 = &DAT_007ad280;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577190 to 00577197 has its CatchHandler @ 005773dc */
        puVar4 = &DAT_007ad940;
        FUN_0056d3b4();
        local_60 = &DAT_007ad948;
        goto LAB_00577300;
      }
    }
    break;
  case 4:
    puVar4 = &DAT_007ad980;
    local_60 = &DAT_007ad988;
    if ((DAT_007ad290 & 1) == 0) {
      local_60 = &DAT_007ad988;
      local_70 = &DAT_007ad290;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577228 to 0057722f has its CatchHandler @ 005773bc */
        puVar4 = &DAT_007ad980;
        FUN_0056d6dc();
        local_60 = &DAT_007ad988;
        goto LAB_00577300;
      }
    }
    break;
  case 5:
    puVar4 = &DAT_007ad9a0;
    local_60 = &DAT_007ad9a8;
    if ((DAT_007ad298 & 1) == 0) {
      local_60 = &DAT_007ad9a8;
      local_70 = &DAT_007ad298;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005770ac to 005770b3 has its CatchHandler @ 0057740c */
        puVar4 = &DAT_007ad9a0;
        FUN_0056d870();
        local_60 = &DAT_007ad9a8;
        goto LAB_00577300;
      }
    }
    break;
  case 6:
    puVar4 = &DAT_007ad8c0;
    local_60 = &DAT_007ad8c8;
    if ((DAT_007ad260 & 1) == 0) {
      local_60 = &DAT_007ad8c8;
      local_70 = &DAT_007ad260;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577144 to 0057714b has its CatchHandler @ 005773ec */
        puVar4 = &DAT_007ad8c0;
        FUN_0056cd64();
        local_60 = &DAT_007ad8c8;
        goto LAB_00577300;
      }
    }
    break;
  case 7:
    puVar4 = &DAT_007ad9c0;
    local_60 = &DAT_007ad9c8;
    if ((DAT_007ad2a0 & 1) == 0) {
      local_60 = &DAT_007ad9c8;
      local_70 = &DAT_007ad2a0;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005772ec to 005772f3 has its CatchHandler @ 0057739c */
        puVar4 = &DAT_007ad9c0;
        FUN_0056da04();
        local_60 = &DAT_007ad9c8;
        goto LAB_00577300;
      }
    }
    break;
  case 8:
    puVar4 = &DAT_007ad920;
    local_60 = &DAT_007ad928;
    if ((DAT_007ad278 & 1) == 0) {
      local_60 = &DAT_007ad928;
      local_70 = &DAT_007ad278;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005771dc to 005771e3 has its CatchHandler @ 005773cc */
        puVar4 = &DAT_007ad920;
        FUN_0056d220();
        local_60 = &DAT_007ad928;
        goto LAB_00577300;
      }
    }
    break;
  case 9:
    puVar4 = &DAT_007ad900;
    local_60 = &DAT_007ad908;
    if ((DAT_007ad270 & 1) == 0) {
      local_60 = &DAT_007ad908;
      local_70 = &DAT_007ad270;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00576f30 to 00576f37 has its CatchHandler @ 0057745c */
        puVar4 = &DAT_007ad900;
        FUN_0056d08c();
        local_60 = &DAT_007ad908;
        goto LAB_00577300;
      }
    }
    break;
  case 10:
    puVar4 = &DAT_007ada40;
    local_60 = &DAT_007ada48;
    if ((DAT_007ad2c0 & 1) == 0) {
      local_60 = &DAT_007ada48;
      local_70 = &DAT_007ad2c0;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00576e4c to 00576e53 has its CatchHandler @ 0057748c */
        puVar4 = &DAT_007ada40;
        FUN_0056e054();
        local_60 = &DAT_007ada48;
        goto LAB_00577300;
      }
    }
    break;
  case 0xb:
    puVar4 = &DAT_007ad9e0;
    local_60 = &DAT_007ad9e8;
    if ((DAT_007ad2a8 & 1) == 0) {
      local_60 = &DAT_007ad9e8;
      local_70 = &DAT_007ad2a8;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00576ee4 to 00576eeb has its CatchHandler @ 0057746c */
        puVar4 = &DAT_007ad9e0;
        FUN_0056db98();
        local_60 = &DAT_007ad9e8;
        goto LAB_00577300;
      }
    }
    break;
  case 0xc:
    puVar4 = &DAT_007ada00;
    local_60 = &DAT_007ada08;
    if ((DAT_007ad2b0 & 1) == 0) {
      local_60 = &DAT_007ada08;
      local_70 = &DAT_007ad2b0;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00576e00 to 00576e07 has its CatchHandler @ 0057749c */
        puVar4 = &DAT_007ada00;
        FUN_0056dd2c();
        local_60 = &DAT_007ada08;
        goto LAB_00577300;
      }
    }
    break;
  case 0xd:
    puVar4 = &DAT_007ada20;
    local_60 = &DAT_007ada28;
    if ((DAT_007ad2b8 & 1) == 0) {
      local_60 = &DAT_007ada28;
      local_70 = &DAT_007ad2b8;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00576e98 to 00576e9f has its CatchHandler @ 0057747c */
        puVar4 = &DAT_007ada20;
        FUN_0056dec0();
        local_60 = &DAT_007ada28;
        goto LAB_00577300;
      }
    }
    break;
  default:
    uVar3 = FUN_00753a74(0x10);
    local_38 = " is not supported";
    pcStack_30 = "tensor type ";
    FUN_004be564(auStack_58,&pcStack_30,&local_3c,&local_38);
    puVar4 = (undefined8 *)FUN_00495e58(uVar3,auStack_58);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00577384 to 0057739b has its CatchHandler @ 005774c0 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
    }
    goto LAB_005774f0;
  case 0x10:
    puVar4 = &DAT_007ada60;
    local_60 = &DAT_007ada68;
    if ((DAT_007ad2c8 & 1) == 0) {
      local_60 = &DAT_007ada68;
      local_70 = &DAT_007ad2c8;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00576f7c to 00576f83 has its CatchHandler @ 0057744c */
        puVar4 = &DAT_007ada60;
        FUN_0056e1e8();
        local_60 = &DAT_007ada68;
        goto LAB_00577300;
      }
    }
    break;
  case 0x11:
    puVar4 = &DAT_007ada80;
    local_60 = &DAT_007ada88;
    if ((DAT_007ad2d0 & 1) == 0) {
      local_60 = &DAT_007ada88;
      local_70 = &DAT_007ad2d0;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577014 to 0057701b has its CatchHandler @ 0057742c */
        puVar4 = &DAT_007ada80;
        FUN_0056e2e0();
        local_60 = &DAT_007ada88;
        goto LAB_00577300;
      }
    }
    break;
  case 0x12:
    puVar4 = &DAT_007adaa0;
    local_60 = &DAT_007adaa8;
    if ((DAT_007ad2d8 & 1) == 0) {
      local_60 = &DAT_007adaa8;
      local_70 = &DAT_007ad2d8;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
        puVar4 = &DAT_007adaa0;
                    /* try { // try from 005770f8 to 005770ff has its CatchHandler @ 005773fc */
        FUN_0056e3d8();
        local_60 = &DAT_007adaa8;
        goto LAB_00577300;
      }
    }
    break;
  case 0x13:
    puVar4 = &DAT_007adac0;
    local_60 = &DAT_007adac8;
    if ((DAT_007ad2e0 & 1) == 0) {
      local_60 = &DAT_007adac8;
      local_70 = &DAT_007ad2e0;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
        puVar4 = &DAT_007adac0;
                    /* try { // try from 00577060 to 00577067 has its CatchHandler @ 0057741c */
        FUN_0056e4d0();
        local_60 = &DAT_007adac8;
        goto LAB_00577300;
      }
    }
    break;
  case 0x14:
    puVar4 = &DAT_007adae0;
    local_60 = &DAT_007adae8;
    if ((DAT_007ad2e8 & 1) == 0) {
      local_60 = &DAT_007adae8;
      local_70 = &DAT_007ad2e8;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
        puVar4 = &DAT_007adae0;
                    /* try { // try from 00576fc8 to 00576fcf has its CatchHandler @ 0057743c */
        FUN_0056e5c8();
        local_60 = &DAT_007adae8;
        goto LAB_00577300;
      }
    }
  }
  if (*local_60 != 2) {
    puVar4 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_005774f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 005774f4  FUN_005774f4 =====

void FUN_005774f4(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *local_70;
  int *local_60;
  undefined1 auStack_58 [28];
  undefined4 local_3c;
  char *local_38;
  char *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_3c = param_1;
  switch(param_1) {
  case 1:
    puVar4 = &DAT_007adb20;
    local_60 = &DAT_007adb28;
    if ((DAT_007ad2f8 & 1) == 0) {
      local_60 = &DAT_007adb28;
      local_70 = &DAT_007ad2f8;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 0057756c to 00577573 has its CatchHandler @ 00577c64 */
        puVar4 = &DAT_007adb20;
        FUN_0056e800();
        local_60 = &DAT_007adb28;
LAB_00577ab8:
        __cxa_atexit(PTR_FUN_007a27d0,puVar4,&PTR_LOOP_0075ec90);
        FUN_00739d60(local_70);
      }
    }
    break;
  case 2:
    puVar4 = &DAT_007adba0;
    local_60 = &DAT_007adba8;
    if ((DAT_007ad318 & 1) == 0) {
      local_60 = &DAT_007adba8;
      local_70 = &DAT_007ad318;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577a2c to 00577a33 has its CatchHandler @ 00577b64 */
        puVar4 = &DAT_007adba0;
        FUN_0056ebe0();
        local_60 = &DAT_007adba8;
        goto LAB_00577ab8;
      }
    }
    break;
  case 3:
    puVar4 = &DAT_007adb80;
    local_60 = &DAT_007adb88;
    if ((DAT_007ad310 & 1) == 0) {
      local_60 = &DAT_007adb88;
      local_70 = &DAT_007ad310;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577948 to 0057794f has its CatchHandler @ 00577b94 */
        puVar4 = &DAT_007adb80;
        FUN_0056eae8();
        local_60 = &DAT_007adb88;
        goto LAB_00577ab8;
      }
    }
    break;
  case 4:
    puVar4 = &DAT_007adbc0;
    local_60 = &DAT_007adbc8;
    if ((DAT_007ad320 & 1) == 0) {
      local_60 = &DAT_007adbc8;
      local_70 = &DAT_007ad320;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005779e0 to 005779e7 has its CatchHandler @ 00577b74 */
        puVar4 = &DAT_007adbc0;
        FUN_0056ecd8();
        local_60 = &DAT_007adbc8;
        goto LAB_00577ab8;
      }
    }
    break;
  case 5:
    puVar4 = &DAT_007adbe0;
    local_60 = &DAT_007adbe8;
    if ((DAT_007ad328 & 1) == 0) {
      local_60 = &DAT_007adbe8;
      local_70 = &DAT_007ad328;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577864 to 0057786b has its CatchHandler @ 00577bc4 */
        puVar4 = &DAT_007adbe0;
        FUN_0056edd0();
        local_60 = &DAT_007adbe8;
        goto LAB_00577ab8;
      }
    }
    break;
  case 6:
    puVar4 = &DAT_007adb00;
    local_60 = &DAT_007adb08;
    if ((DAT_007ad2f0 & 1) == 0) {
      local_60 = &DAT_007adb08;
      local_70 = &DAT_007ad2f0;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005778fc to 00577903 has its CatchHandler @ 00577ba4 */
        puVar4 = &DAT_007adb00;
        FUN_0056e708();
        local_60 = &DAT_007adb08;
        goto LAB_00577ab8;
      }
    }
    break;
  case 7:
    puVar4 = &DAT_007adc00;
    local_60 = &DAT_007adc08;
    if ((DAT_007ad330 & 1) == 0) {
      local_60 = &DAT_007adc08;
      local_70 = &DAT_007ad330;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577aa4 to 00577aab has its CatchHandler @ 00577b54 */
        puVar4 = &DAT_007adc00;
        FUN_0056eec8();
        local_60 = &DAT_007adc08;
        goto LAB_00577ab8;
      }
    }
    break;
  case 8:
    puVar4 = &DAT_007adb60;
    local_60 = &DAT_007adb68;
    if ((DAT_007ad308 & 1) == 0) {
      local_60 = &DAT_007adb68;
      local_70 = &DAT_007ad308;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577994 to 0057799b has its CatchHandler @ 00577b84 */
        puVar4 = &DAT_007adb60;
        FUN_0056e9f0();
        local_60 = &DAT_007adb68;
        goto LAB_00577ab8;
      }
    }
    break;
  case 9:
    puVar4 = &DAT_007adb40;
    local_60 = &DAT_007adb48;
    if ((DAT_007ad300 & 1) == 0) {
      local_60 = &DAT_007adb48;
      local_70 = &DAT_007ad300;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005776e8 to 005776ef has its CatchHandler @ 00577c14 */
        puVar4 = &DAT_007adb40;
        FUN_0056e8f8();
        local_60 = &DAT_007adb48;
        goto LAB_00577ab8;
      }
    }
    break;
  case 10:
    puVar4 = &DAT_007adc80;
    local_60 = &DAT_007adc88;
    if ((DAT_007ad350 & 1) == 0) {
      local_60 = &DAT_007adc88;
      local_70 = &DAT_007ad350;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577604 to 0057760b has its CatchHandler @ 00577c44 */
        puVar4 = &DAT_007adc80;
        FUN_0056f2a8();
        local_60 = &DAT_007adc88;
        goto LAB_00577ab8;
      }
    }
    break;
  case 0xb:
    puVar4 = &DAT_007adc20;
    local_60 = &DAT_007adc28;
    if ((DAT_007ad338 & 1) == 0) {
      local_60 = &DAT_007adc28;
      local_70 = &DAT_007ad338;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 0057769c to 005776a3 has its CatchHandler @ 00577c24 */
        puVar4 = &DAT_007adc20;
        FUN_0056efc0();
        local_60 = &DAT_007adc28;
        goto LAB_00577ab8;
      }
    }
    break;
  case 0xc:
    puVar4 = &DAT_007adc40;
    local_60 = &DAT_007adc48;
    if ((DAT_007ad340 & 1) == 0) {
      local_60 = &DAT_007adc48;
      local_70 = &DAT_007ad340;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005775b8 to 005775bf has its CatchHandler @ 00577c54 */
        puVar4 = &DAT_007adc40;
        FUN_0056f0b8();
        local_60 = &DAT_007adc48;
        goto LAB_00577ab8;
      }
    }
    break;
  case 0xd:
    puVar4 = &DAT_007adc60;
    local_60 = &DAT_007adc68;
    if ((DAT_007ad348 & 1) == 0) {
      local_60 = &DAT_007adc68;
      local_70 = &DAT_007ad348;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577650 to 00577657 has its CatchHandler @ 00577c34 */
        puVar4 = &DAT_007adc60;
        FUN_0056f1b0();
        local_60 = &DAT_007adc68;
        goto LAB_00577ab8;
      }
    }
    break;
  default:
    uVar3 = FUN_00753a74(0x10);
    local_38 = " is not supported";
    pcStack_30 = "sparse tensor type ";
    FUN_004be564(auStack_58,&pcStack_30,&local_3c,&local_38);
    puVar4 = (undefined *)FUN_00495e58(uVar3,auStack_58);
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00577b3c to 00577b53 has its CatchHandler @ 00577c78 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
    }
    goto LAB_00577ca8;
  case 0x10:
    puVar4 = &DAT_007adca0;
    local_60 = &DAT_007adca8;
    if ((DAT_007ad358 & 1) == 0) {
      local_60 = &DAT_007adca8;
      local_70 = &DAT_007ad358;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 00577734 to 0057773b has its CatchHandler @ 00577c04 */
        puVar4 = &DAT_007adca0;
        FUN_0056f3a0();
        local_60 = &DAT_007adca8;
        goto LAB_00577ab8;
      }
    }
    break;
  case 0x11:
    puVar4 = &DAT_007adcc0;
    local_60 = &DAT_007adcc8;
    if ((DAT_007ad360 & 1) == 0) {
      local_60 = &DAT_007adcc8;
      local_70 = &DAT_007ad360;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
                    /* try { // try from 005777cc to 005777d3 has its CatchHandler @ 00577be4 */
        puVar4 = &DAT_007adcc0;
        FUN_0056f498();
        local_60 = &DAT_007adcc8;
        goto LAB_00577ab8;
      }
    }
    break;
  case 0x12:
    puVar4 = &DAT_007adce0;
    local_60 = &DAT_007adce8;
    if ((DAT_007ad368 & 1) == 0) {
      local_60 = &DAT_007adce8;
      local_70 = &DAT_007ad368;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
        puVar4 = &DAT_007adce0;
                    /* try { // try from 005778b0 to 005778b7 has its CatchHandler @ 00577bb4 */
        FUN_0056f590();
        local_60 = &DAT_007adce8;
        goto LAB_00577ab8;
      }
    }
    break;
  case 0x13:
    puVar4 = &DAT_007add00;
    local_60 = &DAT_007add08;
    if ((DAT_007ad370 & 1) == 0) {
      local_60 = &DAT_007add08;
      local_70 = &DAT_007ad370;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
        puVar4 = &DAT_007add00;
                    /* try { // try from 00577818 to 0057781f has its CatchHandler @ 00577bd4 */
        FUN_0056f688();
        local_60 = &DAT_007add08;
        goto LAB_00577ab8;
      }
    }
    break;
  case 0x14:
    puVar4 = &DAT_007add20;
    local_60 = &DAT_007add28;
    if ((DAT_007ad378 & 1) == 0) {
      local_60 = &DAT_007add28;
      local_70 = &DAT_007ad378;
      iVar2 = FUN_00739c1c();
      if (iVar2 != 0) {
        puVar4 = &DAT_007add20;
                    /* try { // try from 00577780 to 00577787 has its CatchHandler @ 00577bf4 */
        FUN_0056f780();
        local_60 = &DAT_007add28;
        goto LAB_00577ab8;
      }
    }
  }
  if (*local_60 != 4) {
    puVar4 = (undefined *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
LAB_00577ca8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar4);
}


// ===== 00577cac  FUN_00577cac =====

void FUN_00577cac(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60 [3];
  char *local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*PTR_DAT_007a2a28 & 1) == 0) && (iVar2 = FUN_00739c1c(PTR_DAT_007a2a28), iVar2 != 0)) {
                    /* try { // try from 00577dbc to 00577dc7 has its CatchHandler @ 00577df4 */
    FUN_0057a554(PTR_DAT_007a2a30);
    __cxa_atexit(PTR_FUN_007a2a38,PTR_DAT_007a2a30,&PTR_LOOP_0075ec90);
    FUN_00739d60(PTR_DAT_007a2a28);
  }
  local_60[0] = FUN_00648c14(param_1);
  lVar3 = FUN_0057ae40(PTR_DAT_007a2a30,local_60);
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
    uVar4 = FUN_00648c14(param_1);
    uVar5 = FUN_00753a74(0x10);
    local_40 = "MLDataType for: ";
    local_48 = " is not currently registered or supported";
    FUN_00497130(local_60,&local_40,uVar4,&local_48);
    FUN_00495e58(uVar5,local_60);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00577d90 to 00577dab has its CatchHandler @ 00577e08 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
    }
  }
  else if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00577e38  FUN_00577e38 =====

undefined8 * FUN_00577e38(void)

{
  int iVar1;
  
  if (((DAT_007ad530 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad530), iVar1 != 0)) {
    DAT_007ae408 = 6;
    DAT_007ae418 = 6;
    DAT_007ae410 = 4;
    DAT_007ae400 = PTR_DAT_007a2a40 + 0x10;
    FUN_00739d60(&DAT_007ad530);
    return &DAT_007ae400;
  }
  return &DAT_007ae400;
}


// ===== 00577eb8  FUN_00577eb8 =====

undefined8 * FUN_00577eb8(void)

{
  int iVar1;
  
  if (((DAT_007ad538 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad538), iVar1 != 0)) {
    DAT_007ae428 = 6;
    DAT_007ae430 = 4;
    DAT_007ae438 = 1;
    DAT_007ae420 = PTR_DAT_007a2a48 + 0x10;
    FUN_00739d60(&DAT_007ad538);
    return &DAT_007ae420;
  }
  return &DAT_007ae420;
}


// ===== 00577f3c  FUN_00577f3c =====

undefined8 * FUN_00577f3c(void)

{
  int iVar1;
  
  if (((DAT_007ad540 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad540), iVar1 != 0)) {
    DAT_007ae448 = 6;
    DAT_007ae450 = 1;
    DAT_007ae458 = 9;
    DAT_007ae440 = PTR_DAT_007a2a50 + 0x10;
    FUN_00739d60(&DAT_007ad540);
    return &DAT_007ae440;
  }
  return &DAT_007ae440;
}


// ===== 00577fc0  FUN_00577fc0 =====

undefined8 * FUN_00577fc0(void)

{
  int iVar1;
  
  if (((DAT_007ad558 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad558), iVar1 != 0)) {
    DAT_007ae4a8 = 6;
    DAT_007ae4b0 = 1;
    DAT_007ae4b8 = 2;
    DAT_007ae4a0 = PTR_DAT_007a2a68 + 0x10;
    FUN_00739d60(&DAT_007ad558);
    return &DAT_007ae4a0;
  }
  return &DAT_007ae4a0;
}


// ===== 00578044  FUN_00578044 =====

undefined8 * FUN_00578044(void)

{
  int iVar1;
  
  if (((DAT_007ad570 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad570), iVar1 != 0)) {
    DAT_007ae508 = 6;
    DAT_007ae510 = 8;
    DAT_007ae518 = 7;
    DAT_007ae500 = PTR_DAT_007a2a80 + 0x10;
    FUN_00739d60(&DAT_007ad570);
    return &DAT_007ae500;
  }
  return &DAT_007ae500;
}


// ===== 005780c8  FUN_005780c8 =====

undefined8 * FUN_005780c8(void)

{
  int iVar1;
  
  if (((DAT_007ad578 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad578), iVar1 != 0)) {
    DAT_007ae528 = 6;
    DAT_007ae530 = 8;
    DAT_007ae538 = 0xb;
    DAT_007ae520 = PTR_DAT_007a2a88 + 0x10;
    FUN_00739d60(&DAT_007ad578);
    return &DAT_007ae520;
  }
  return &DAT_007ae520;
}


// ===== 0057814c  FUN_0057814c =====

void FUN_0057814c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    param_1[1] = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 00578164  FUN_00578164 =====

undefined8 * FUN_00578164(void)

{
  int iVar1;
  
  if (((DAT_007ad5d8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5d8), iVar1 != 0)) {
                    /* try { // try from 005781a8 to 005781ab has its CatchHandler @ 005781e0 */
    FUN_005781f8();
    __cxa_atexit(FUN_0057814c,&DAT_007ad6a8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad5d8);
    return &DAT_007ad6a8;
  }
  return &DAT_007ad6a8;
}


// ===== 005781f8  FUN_005781f8 =====

void FUN_005781f8(void)

{
  int iVar1;
  
  if (((DAT_007ad268 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad268), iVar1 != 0)) {
                    /* try { // try from 0057837c to 00578387 has its CatchHandler @ 00578858 */
    FUN_0056cef8(&DAT_007ad8e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad268);
  }
  if (((DAT_007ad2a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2a8), iVar1 != 0)) {
                    /* try { // try from 005783c0 to 005783cb has its CatchHandler @ 00578840 */
    FUN_0056db98(&DAT_007ad9e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a8);
  }
  if (((DAT_007ad2a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2a0), iVar1 != 0)) {
                    /* try { // try from 00578404 to 0057840f has its CatchHandler @ 00578828 */
    FUN_0056da04(&DAT_007ad9c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a0);
  }
  if (((DAT_007ad2b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2b8), iVar1 != 0)) {
                    /* try { // try from 00578448 to 00578453 has its CatchHandler @ 00578810 */
    FUN_0056dec0(&DAT_007ada20);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b8);
  }
  if (((DAT_007ad260 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad260), iVar1 != 0)) {
                    /* try { // try from 0057848c to 00578497 has its CatchHandler @ 005787f8 */
    FUN_0056cd64(&DAT_007ad8c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad260);
  }
  if (((DAT_007ad2b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2b0), iVar1 != 0)) {
                    /* try { // try from 005784d0 to 005784db has its CatchHandler @ 005787e0 */
    FUN_0056dd2c(&DAT_007ada00);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b0);
  }
  if (((DAT_007ad298 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad298), iVar1 != 0)) {
                    /* try { // try from 00578514 to 0057851f has its CatchHandler @ 005787c8 */
    FUN_0056d870(&DAT_007ad9a0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad298);
  }
  if (((DAT_007ad290 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad290), iVar1 != 0)) {
                    /* try { // try from 00578558 to 00578563 has its CatchHandler @ 005787b0 */
    FUN_0056d6dc(&DAT_007ad980);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad980,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad290);
  }
  if (((DAT_007ad280 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad280), iVar1 != 0)) {
                    /* try { // try from 0057859c to 005785a7 has its CatchHandler @ 00578798 */
    FUN_0056d3b4(&DAT_007ad940);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad940,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad280);
  }
  if (((DAT_007ad288 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad288), iVar1 != 0)) {
                    /* try { // try from 005785e0 to 005785eb has its CatchHandler @ 00578780 */
    FUN_0056d548(&DAT_007ad960);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad960,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad288);
  }
  if (((DAT_007ad2c0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2c0), iVar1 != 0)) {
                    /* try { // try from 00578624 to 0057862f has its CatchHandler @ 00578768 */
    FUN_0056e054(&DAT_007ada40);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2c0);
  }
  if (((DAT_007ad2c8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2c8), iVar1 != 0)) {
                    /* try { // try from 00578668 to 00578673 has its CatchHandler @ 00578750 */
    FUN_0056e1e8(&DAT_007ada60);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2c8);
  }
  if (((DAT_007ad270 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad270), iVar1 != 0)) {
                    /* try { // try from 005786ac to 005786b7 has its CatchHandler @ 00578738 */
    FUN_0056d08c(&DAT_007ad900);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad900,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad270);
  }
  if (((DAT_007ad278 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad278), iVar1 != 0)) {
                    /* try { // try from 005786f0 to 005786fb has its CatchHandler @ 00578720 */
    FUN_0056d220(&DAT_007ad920);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad920,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad278);
  }
  DAT_007ad6a8 = (undefined8 *)0x0;
  DAT_007ad6b0 = (undefined8 *)0x0;
  DAT_007ad6b8 = (undefined8 *)0x0;
  DAT_007ad6a8 = (undefined8 *)FUN_00759c3c(0x70);
  *DAT_007ad6a8 = &DAT_007ad8e0;
  DAT_007ad6a8[1] = &DAT_007ad9e0;
  DAT_007ad6a8[2] = &DAT_007ad9c0;
  DAT_007ad6a8[3] = &DAT_007ada20;
  DAT_007ad6a8[4] = &DAT_007ad8c0;
  DAT_007ad6a8[5] = &DAT_007ada00;
  DAT_007ad6a8[6] = &DAT_007ad9a0;
  DAT_007ad6a8[7] = &DAT_007ad980;
  DAT_007ad6a8[8] = &DAT_007ad940;
  DAT_007ad6a8[9] = &DAT_007ad960;
  DAT_007ad6a8[10] = &DAT_007ada40;
  DAT_007ad6a8[0xb] = &DAT_007ada60;
  DAT_007ad6b8 = DAT_007ad6a8 + 0xe;
  DAT_007ad6a8[0xc] = &DAT_007ad900;
  DAT_007ad6a8[0xd] = &DAT_007ad920;
  DAT_007ad6b0 = DAT_007ad6a8 + 0xe;
  return;
}


// ===== 00578870  FUN_00578870 =====

undefined8 * FUN_00578870(void)

{
  int iVar1;
  
  if (((DAT_007ad5f8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5f8), iVar1 != 0)) {
                    /* try { // try from 005788b4 to 005788b7 has its CatchHandler @ 005788ec */
    FUN_00578904();
    __cxa_atexit(FUN_0057814c,&DAT_007ad708,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad5f8);
    return &DAT_007ad708;
  }
  return &DAT_007ad708;
}


// ===== 00578904  FUN_00578904 =====

void FUN_00578904(void)

{
  int iVar1;
  
  if (((DAT_007ad380 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad380), iVar1 != 0)) {
                    /* try { // try from 00578a88 to 00578a93 has its CatchHandler @ 00578f64 */
    FUN_0056f8c0(&DAT_007add40);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007add40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad380);
  }
  if (((DAT_007ad388 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad388), iVar1 != 0)) {
                    /* try { // try from 00578acc to 00578ad7 has its CatchHandler @ 00578f4c */
    FUN_0056f9f0(&DAT_007add60);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007add60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad388);
  }
  if (((DAT_007ad3c0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3c0), iVar1 != 0)) {
                    /* try { // try from 00578b10 to 00578b1b has its CatchHandler @ 00578f34 */
    FUN_00570240(&DAT_007ade40);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade40,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3c0);
  }
  if (((DAT_007ad3c8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3c8), iVar1 != 0)) {
                    /* try { // try from 00578b54 to 00578b5f has its CatchHandler @ 00578f1c */
    FUN_00570370(&DAT_007ade60);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade60,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3c8);
  }
  if (((DAT_007ad3b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3b0), iVar1 != 0)) {
                    /* try { // try from 00578b98 to 00578ba3 has its CatchHandler @ 00578f04 */
    FUN_0056ffe0(&DAT_007ade00);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3b0);
  }
  if (((DAT_007ad3b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3b8), iVar1 != 0)) {
                    /* try { // try from 00578bdc to 00578be7 has its CatchHandler @ 00578eec */
    FUN_00570110(&DAT_007ade20);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3b8);
  }
  if (((DAT_007ad3a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3a0), iVar1 != 0)) {
                    /* try { // try from 00578c20 to 00578c2b has its CatchHandler @ 00578ed4 */
    FUN_0056fd80(&DAT_007addc0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007addc0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3a0);
  }
  if (((DAT_007ad3a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3a8), iVar1 != 0)) {
                    /* try { // try from 00578c64 to 00578c6f has its CatchHandler @ 00578ebc */
    FUN_0056feb0(&DAT_007adde0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adde0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3a8);
  }
  if (((DAT_007ad390 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad390), iVar1 != 0)) {
                    /* try { // try from 00578ca8 to 00578cb3 has its CatchHandler @ 00578ea4 */
    FUN_0056fb20(&DAT_007add80);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007add80,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad390);
  }
  if (((DAT_007ad398 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad398), iVar1 != 0)) {
                    /* try { // try from 00578cec to 00578cf7 has its CatchHandler @ 00578e8c */
    FUN_0056fc50(&DAT_007adda0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adda0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad398);
  }
  if (((DAT_007ad3e0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3e0), iVar1 != 0)) {
                    /* try { // try from 00578d30 to 00578d3b has its CatchHandler @ 00578e74 */
    FUN_00570700(&DAT_007adec0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adec0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3e0);
  }
  if (((DAT_007ad3e8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3e8), iVar1 != 0)) {
                    /* try { // try from 00578d74 to 00578d7f has its CatchHandler @ 00578e5c */
    FUN_00570830(&DAT_007adee0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adee0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3e8);
  }
  if (((DAT_007ad3d0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3d0), iVar1 != 0)) {
                    /* try { // try from 00578db8 to 00578dc3 has its CatchHandler @ 00578e44 */
    FUN_005704a0(&DAT_007ade80);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007ade80,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3d0);
  }
  if (((DAT_007ad3d8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad3d8), iVar1 != 0)) {
                    /* try { // try from 00578dfc to 00578e07 has its CatchHandler @ 00578e2c */
    FUN_005705d0(&DAT_007adea0);
    __cxa_atexit(PTR_FUN_007a2868,&DAT_007adea0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad3d8);
  }
  DAT_007ad708 = (undefined8 *)0x0;
  DAT_007ad710 = (undefined8 *)0x0;
  DAT_007ad718 = (undefined8 *)0x0;
  DAT_007ad708 = (undefined8 *)FUN_00759c3c(0x70);
  *DAT_007ad708 = &DAT_007add40;
  DAT_007ad708[1] = &DAT_007add60;
  DAT_007ad708[2] = &DAT_007ade40;
  DAT_007ad708[3] = &DAT_007ade60;
  DAT_007ad708[4] = &DAT_007ade00;
  DAT_007ad708[5] = &DAT_007ade20;
  DAT_007ad708[6] = &DAT_007addc0;
  DAT_007ad708[7] = &DAT_007adde0;
  DAT_007ad708[8] = &DAT_007add80;
  DAT_007ad708[9] = &DAT_007adda0;
  DAT_007ad708[10] = &DAT_007adec0;
  DAT_007ad708[0xb] = &DAT_007adee0;
  DAT_007ad718 = DAT_007ad708 + 0xe;
  DAT_007ad708[0xc] = &DAT_007ade80;
  DAT_007ad708[0xd] = &DAT_007adea0;
  DAT_007ad710 = DAT_007ad708 + 0xe;
  return;
}


// ===== 00578f7c  FUN_00578f7c =====

undefined8 * FUN_00578f7c(void)

{
  int iVar1;
  
  if (((DAT_007ad620 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad620), iVar1 != 0)) {
                    /* try { // try from 00578fc0 to 00578fc3 has its CatchHandler @ 00578ff8 */
    FUN_00579010();
    __cxa_atexit(FUN_0057814c,&DAT_007ad780,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad620);
    return &DAT_007ad780;
  }
  return &DAT_007ad780;
}


// ===== 00579010  FUN_00579010 =====

void FUN_00579010(void)

{
  long lVar1;
  size_t __n;
  void *__src;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_007ad5d8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad5d8), iVar2 != 0)) {
                    /* try { // try from 005790d0 to 005790d3 has its CatchHandler @ 00579154 */
    FUN_005781f8();
    __cxa_atexit(FUN_0057814c,&DAT_007ad6a8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad5d8);
  }
  __src = DAT_007ad6a8;
  DAT_007ad780 = (void *)0x0;
  DAT_007ad788 = (void *)0x0;
  DAT_007ad790 = 0;
  __n = DAT_007ad6b0 - (long)DAT_007ad6a8;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 00579134 to 0057913f has its CatchHandler @ 00579190 */
      uVar3 = FUN_004b631c(&DAT_007ad780);
                    /* catch() { ... } // from try @ 0057910c with catch @ 00579140 */
      FUN_00739e08(&DAT_007ad5f8);
      if (DAT_007ad780 != (void *)0x0) {
        DAT_007ad788 = DAT_007ad780;
        free(DAT_007ad780);
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar3);
    }
                    /* try { // try from 00579050 to 00579057 has its CatchHandler @ 00579190 */
    DAT_007ad780 = (void *)FUN_00759c3c(__n);
    lVar1 = (long)DAT_007ad780 + __n;
    DAT_007ad788 = DAT_007ad780;
    DAT_007ad790 = lVar1;
    memcpy(DAT_007ad780,__src,__n);
    DAT_007ad788 = (void *)lVar1;
  }
  if (((DAT_007ad5f8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad5f8), iVar2 != 0)) {
                    /* try { // try from 0057910c to 0057910f has its CatchHandler @ 00579140 */
    FUN_00578904();
    __cxa_atexit(FUN_0057814c,&DAT_007ad708,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad5f8);
  }
                    /* try { // try from 005790a4 to 005790ab has its CatchHandler @ 0057916c */
  FUN_0057af50(&DAT_007ad780,DAT_007ad788,DAT_007ad708,DAT_007ad710,DAT_007ad710 - DAT_007ad708 >> 3
              );
  return;
}


// ===== 005791c0  FUN_005791c0 =====

void FUN_005791c0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *__ptr;
  
  if (((DAT_007ad418 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad418), iVar1 != 0)) {
                    /* try { // try from 005794ac to 005794b7 has its CatchHandler @ 00579e14 */
    FUN_00570f94(&DAT_007adfa0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007adfa0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad418);
  }
  if (((DAT_007ad458 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad458), iVar1 != 0)) {
                    /* try { // try from 005794f0 to 005794fb has its CatchHandler @ 00579e04 */
    FUN_005718f4(&DAT_007ae0a0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae0a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad458);
  }
  if (((DAT_007ad450 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad450), iVar1 != 0)) {
                    /* try { // try from 00579534 to 0057953f has its CatchHandler @ 00579df4 */
    FUN_005717c8(&DAT_007ae080);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae080,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad450);
  }
  if (((DAT_007ad468 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad468), iVar1 != 0)) {
                    /* try { // try from 00579578 to 00579583 has its CatchHandler @ 00579de4 */
    FUN_00571b4c(&DAT_007ae0e0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae0e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad468);
  }
  if (((DAT_007ad410 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad410), iVar1 != 0)) {
                    /* try { // try from 005795bc to 005795c7 has its CatchHandler @ 00579dd4 */
    FUN_00570e68(&DAT_007adf80);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007adf80,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad410);
  }
  if (((DAT_007ad460 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad460), iVar1 != 0)) {
                    /* try { // try from 00579600 to 0057960b has its CatchHandler @ 00579dc4 */
    FUN_00571a20(&DAT_007ae0c0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae0c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad460);
  }
  if (((DAT_007ad448 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad448), iVar1 != 0)) {
                    /* try { // try from 00579644 to 0057964f has its CatchHandler @ 00579db4 */
    FUN_0057169c(&DAT_007ae060);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae060,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad448);
  }
  if (((DAT_007ad440 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad440), iVar1 != 0)) {
                    /* try { // try from 00579688 to 00579693 has its CatchHandler @ 00579da4 */
    FUN_00571570(&DAT_007ae040);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae040,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad440);
  }
  if (((DAT_007ad430 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad430), iVar1 != 0)) {
                    /* try { // try from 005796cc to 005796d7 has its CatchHandler @ 00579d94 */
    FUN_00571318(&DAT_007ae000);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae000,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad430);
  }
  if (((DAT_007ad438 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad438), iVar1 != 0)) {
                    /* try { // try from 00579710 to 0057971b has its CatchHandler @ 00579d84 */
    FUN_00571444(&DAT_007ae020);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae020,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad438);
  }
  if (((DAT_007ad470 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad470), iVar1 != 0)) {
                    /* try { // try from 00579754 to 0057975f has its CatchHandler @ 00579d74 */
    FUN_00571c78(&DAT_007ae100);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae100,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad470);
  }
  if (((DAT_007ad478 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad478), iVar1 != 0)) {
                    /* try { // try from 00579798 to 005797a3 has its CatchHandler @ 00579d64 */
    FUN_00571da4(&DAT_007ae120);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae120,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad478);
  }
  if (((DAT_007ad420 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad420), iVar1 != 0)) {
                    /* try { // try from 005797dc to 005797e7 has its CatchHandler @ 00579d54 */
    FUN_005710c0(&DAT_007adfc0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007adfc0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad420);
  }
  if (((DAT_007ad428 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad428), iVar1 != 0)) {
                    /* try { // try from 00579820 to 0057982b has its CatchHandler @ 00579d44 */
    FUN_005711ec(&DAT_007adfe0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007adfe0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad428);
  }
  DAT_007ad7f0 = (undefined8 *)0x0;
  DAT_007ad7e8 = (undefined8 *)0x0;
  DAT_007ad7e0 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)FUN_00759c3c(0x70);
  DAT_007ad7e8 = puVar2 + 0xe;
  *puVar2 = &DAT_007adfa0;
  puVar2[1] = &DAT_007ae0a0;
  puVar2[2] = &DAT_007ae080;
  puVar2[3] = &DAT_007ae0e0;
  puVar2[4] = &DAT_007adf80;
  puVar2[5] = &DAT_007ae0c0;
  puVar2[6] = &DAT_007ae060;
  puVar2[7] = &DAT_007ae040;
  puVar2[8] = &DAT_007ae000;
  puVar2[9] = &DAT_007ae020;
  puVar2[10] = &DAT_007ae100;
  puVar2[0xb] = &DAT_007ae120;
  DAT_007ad7e0 = puVar2;
  DAT_007ad7f0 = DAT_007ad7e8;
  puVar2[0xc] = &DAT_007adfc0;
  puVar2[0xd] = &DAT_007adfe0;
  if (((DAT_007ad4a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4a8), iVar1 != 0)) {
                    /* try { // try from 0057985c to 00579867 has its CatchHandler @ 00579d30 */
    FUN_005724ac(&DAT_007ae1e0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae1e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4a8);
  }
  if (((DAT_007ad4e8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4e8), iVar1 != 0)) {
                    /* try { // try from 0057989c to 005798a7 has its CatchHandler @ 00579d1c */
    FUN_00572e0c(&DAT_007ae2e0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae2e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4e8);
  }
  if (((DAT_007ad4e0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4e0), iVar1 != 0)) {
                    /* try { // try from 005798e4 to 005798ef has its CatchHandler @ 00579d08 */
    FUN_00572ce0(&DAT_007ae2c0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae2c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4e0);
  }
  if (((DAT_007ad4f8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4f8), iVar1 != 0)) {
                    /* try { // try from 0057992c to 00579937 has its CatchHandler @ 00579cf4 */
    FUN_00573064(&DAT_007ae320);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae320,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4f8);
  }
  if (((DAT_007ad4a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4a0), iVar1 != 0)) {
                    /* try { // try from 00579978 to 00579983 has its CatchHandler @ 00579ce0 */
    FUN_00572380(&DAT_007ae1c0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae1c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4a0);
  }
  if (((DAT_007ad4f0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4f0), iVar1 != 0)) {
                    /* try { // try from 005799b8 to 005799c3 has its CatchHandler @ 00579ccc */
    FUN_00572f38(&DAT_007ae300);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae300,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4f0);
  }
  if (((DAT_007ad4d8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4d8), iVar1 != 0)) {
                    /* try { // try from 00579a00 to 00579a0b has its CatchHandler @ 00579cb8 */
    FUN_00572bb4(&DAT_007ae2a0);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae2a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4d8);
  }
  if (((DAT_007ad4d0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4d0), iVar1 != 0)) {
                    /* try { // try from 00579a48 to 00579a53 has its CatchHandler @ 00579ca4 */
    FUN_00572a88(&DAT_007ae280);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae280,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4d0);
  }
  if (((DAT_007ad4c0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4c0), iVar1 != 0)) {
                    /* try { // try from 00579a90 to 00579a9b has its CatchHandler @ 00579c90 */
    FUN_00572830(&DAT_007ae240);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae240,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4c0);
  }
  if (((DAT_007ad4c8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4c8), iVar1 != 0)) {
                    /* try { // try from 00579ad8 to 00579ae3 has its CatchHandler @ 00579c7c */
    FUN_0057295c(&DAT_007ae260);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae260,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4c8);
  }
  if (((DAT_007ad500 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad500), iVar1 != 0)) {
                    /* try { // try from 00579b20 to 00579b2b has its CatchHandler @ 00579c68 */
    FUN_00573190(&DAT_007ae340);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae340,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad500);
  }
  if (((DAT_007ad508 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad508), iVar1 != 0)) {
                    /* try { // try from 00579b68 to 00579b73 has its CatchHandler @ 00579c54 */
    FUN_005732bc(&DAT_007ae360);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae360,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad508);
  }
  if (((DAT_007ad4b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4b0), iVar1 != 0)) {
                    /* try { // try from 00579bb4 to 00579bbf has its CatchHandler @ 00579c40 */
    FUN_005725d8(&DAT_007ae200);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae200,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4b0);
  }
  if (((DAT_007ad4b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad4b8), iVar1 != 0)) {
                    /* try { // try from 00579bf4 to 00579bff has its CatchHandler @ 00579c2c */
    FUN_00572704(&DAT_007ae220);
    __cxa_atexit(PTR_FUN_007a2900,&DAT_007ae220,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad4b8);
  }
                    /* try { // try from 00579408 to 0057940f has its CatchHandler @ 00579e40 */
  __ptr = (undefined8 *)FUN_00759c3c(0x70);
  puVar2 = DAT_007ad7e8;
  *__ptr = &DAT_007ae1e0;
  __ptr[1] = &DAT_007ae2e0;
  __ptr[2] = &DAT_007ae2c0;
  __ptr[3] = &DAT_007ae320;
  __ptr[4] = &DAT_007ae1c0;
  __ptr[5] = &DAT_007ae300;
  __ptr[6] = &DAT_007ae2a0;
  __ptr[7] = &DAT_007ae280;
  __ptr[8] = &DAT_007ae240;
  __ptr[9] = &DAT_007ae260;
  __ptr[10] = &DAT_007ae340;
  __ptr[0xb] = &DAT_007ae360;
  __ptr[0xc] = &DAT_007ae200;
  __ptr[0xd] = &DAT_007ae220;
                    /* try { // try from 00579478 to 00579487 has its CatchHandler @ 00579e2c */
  FUN_0057af50(&DAT_007ad7e0,puVar2,__ptr,__ptr + 0xe,0xe);
  free(__ptr);
  return;
}


// ===== 00579e6c  FUN_00579e6c =====

undefined8 * FUN_00579e6c(void)

{
  int iVar1;
  
  if (((DAT_007ad650 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad650), iVar1 != 0)) {
                    /* try { // try from 00579eb0 to 00579eb3 has its CatchHandler @ 00579ee8 */
    FUN_00579f00();
    __cxa_atexit(FUN_0057814c,&DAT_007ad810,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad650);
    return &DAT_007ad810;
  }
  return &DAT_007ad810;
}


// ===== 00579f00  FUN_00579f00 =====

void FUN_00579f00(void)

{
  long lVar1;
  size_t __n;
  void *__src;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_007ad5d8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad5d8), iVar2 != 0)) {
                    /* try { // try from 00579ff0 to 00579ff3 has its CatchHandler @ 0057a0c4 */
    FUN_005781f8();
    __cxa_atexit(FUN_0057814c,&DAT_007ad6a8,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad5d8);
  }
  __src = DAT_007ad6a8;
  DAT_007ad810 = (void *)0x0;
  DAT_007ad818 = (void *)0x0;
  DAT_007ad820 = 0;
  __n = DAT_007ad6b0 - (long)DAT_007ad6a8;
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0057a090 to 0057a09b has its CatchHandler @ 0057a104 */
      uVar3 = FUN_004b631c(&DAT_007ad810);
                    /* catch() { ... } // from try @ 0057a068 with catch @ 0057a09c */
      FUN_00739e08(&DAT_007ad640);
      if (DAT_007ad810 != (void *)0x0) {
        DAT_007ad818 = DAT_007ad810;
        free(DAT_007ad810);
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar3);
    }
                    /* try { // try from 00579f40 to 00579f47 has its CatchHandler @ 0057a104 */
    DAT_007ad810 = (void *)FUN_00759c3c(__n);
    lVar1 = (long)DAT_007ad810 + __n;
    DAT_007ad818 = DAT_007ad810;
    DAT_007ad820 = lVar1;
    memcpy(DAT_007ad810,__src,__n);
    DAT_007ad818 = (void *)lVar1;
  }
  if (((DAT_007ad5f8 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad5f8), iVar2 != 0)) {
                    /* try { // try from 0057a02c to 0057a02f has its CatchHandler @ 0057a0b0 */
    FUN_00578904();
    __cxa_atexit(FUN_0057814c,&DAT_007ad708,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad5f8);
  }
  if (((DAT_007ad640 & 1) == 0) && (iVar2 = FUN_00739c1c(&DAT_007ad640), iVar2 != 0)) {
                    /* try { // try from 0057a068 to 0057a06b has its CatchHandler @ 0057a09c */
    FUN_005791c0();
    __cxa_atexit(FUN_0057814c,&DAT_007ad7e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad640);
  }
                    /* try { // try from 00579fa4 to 00579fab has its CatchHandler @ 0057a0e0 */
  FUN_0057af50(&DAT_007ad810,DAT_007ad818,DAT_007ad708,DAT_007ad710,DAT_007ad710 - DAT_007ad708 >> 3
              );
                    /* try { // try from 00579fc4 to 00579fcb has its CatchHandler @ 0057a0dc */
  FUN_0057af50(&DAT_007ad810,DAT_007ad818,DAT_007ad7e0,DAT_007ad7e8,DAT_007ad7e8 - DAT_007ad7e0 >> 3
              );
  return;
}


// ===== 0057a134  FUN_0057a134 =====

void FUN_0057a134(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00303e0c(param_1,"(unknown type)",0xe);
    return;
  }
  FUN_00303e0c(param_1,"(null)",6);
  return;
}


// ===== 0057a158  FUN_0057a158 =====

void FUN_0057a158(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  char *local_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00753a74(0x10);
  local_30 = "GetElementType";
  local_38 = " is not implemented";
  FUN_004839f8(auStack_50,&local_30,&local_38);
                    /* try { // try from 0057a1a8 to 0057a1b3 has its CatchHandler @ 0057a220 */
  FUN_0071259c(plVar2,auStack_50);
  *plVar2 = (long)(PTR_DAT_007a1ed8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0057a1d4 to 0057a1eb has its CatchHandler @ 0057a1ec */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar2,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057a224  FUN_0057a224 =====

void FUN_0057a224(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  char *local_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00753a74(0x10);
  local_30 = "GetElementType";
  local_38 = " is not implemented";
  FUN_004839f8(auStack_50,&local_30,&local_38);
                    /* try { // try from 0057a274 to 0057a27f has its CatchHandler @ 0057a2ec */
  FUN_0071259c(plVar2,auStack_50);
  *plVar2 = (long)(PTR_DAT_007a1ed8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0057a2a0 to 0057a2b7 has its CatchHandler @ 0057a2b8 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar2,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057a2f0  FUN_0057a2f0 =====

void FUN_0057a2f0(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  char *local_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00753a74(0x10);
  local_30 = "GetElementType";
  local_38 = " is not implemented";
  FUN_004839f8(auStack_50,&local_30,&local_38);
                    /* try { // try from 0057a340 to 0057a34b has its CatchHandler @ 0057a3b8 */
  FUN_0071259c(plVar2,auStack_50);
  *plVar2 = (long)(PTR_DAT_007a1ed8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0057a36c to 0057a383 has its CatchHandler @ 0057a384 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar2,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057a3bc  FUN_0057a3bc =====

void FUN_0057a3bc(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  char *local_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00753a74(0x10);
  local_30 = "GetDeleteFunc";
  local_38 = " is not implemented";
  FUN_004839f8(auStack_50,&local_30,&local_38);
                    /* try { // try from 0057a40c to 0057a417 has its CatchHandler @ 0057a484 */
  FUN_0071259c(plVar2,auStack_50);
  *plVar2 = (long)(PTR_DAT_007a1ed8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0057a438 to 0057a44f has its CatchHandler @ 0057a450 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar2,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057a488  FUN_0057a488 =====

void FUN_0057a488(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_50 [24];
  char *local_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00753a74(0x10);
  local_30 = "GetElementType";
  local_38 = " is not implemented";
  FUN_004839f8(auStack_50,&local_30,&local_38);
                    /* try { // try from 0057a4d8 to 0057a4e3 has its CatchHandler @ 0057a550 */
  FUN_0071259c(plVar2,auStack_50);
  *plVar2 = (long)(PTR_DAT_007a1ed8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0057a504 to 0057a51b has its CatchHandler @ 0057a51c */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar2,PTR_PTR_007a1e58,PTR_FUN_007a1f70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057a554  FUN_0057a554 =====

void FUN_0057a554(undefined8 *param_1)

{
  long lVar1;
  undefined ***pppuVar2;
  long lVar3;
  undefined **local_70;
  undefined8 *puStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  pppuVar2 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  local_70 = &PTR_FUN_00794858;
  puStack_68 = param_1;
                    /* try { // try from 0057a5a0 to 0057a5a7 has its CatchHandler @ 0057a5f8 */
  FUN_005738e0(&local_70);
  if ((undefined ***)local_50 == &local_70) {
    lVar3 = 0x20;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0057a5d4;
    lVar3 = 0x28;
    pppuVar2 = (undefined ***)local_50;
  }
  (**(code **)((long)*pppuVar2 + lVar3))();
LAB_0057a5d4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057a650  FUN_0057a650 =====

void FUN_0057a650(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 0057a69c  FUN_0057a69c =====

void FUN_0057a69c(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 0057a6e8  FUN_0057a6e8 =====

void FUN_0057a6e8(void)

{
  return;
}


// ===== 0057a6ec  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0057a6f0  FUN_0057a6f0 =====

void FUN_0057a6f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00794858;
  puVar1[1] = uVar2;
  return;
}


// ===== 0057a728  FUN_0057a728 =====

void FUN_0057a728(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_00794858;
  param_2[1] = uVar1;
  return;
}


// ===== 0057a740  FUN_0057a740 =====

void FUN_0057a740(void)

{
  return;
}


// ===== 0057a744  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0057a748  FUN_0057a748 =====

void FUN_0057a748(long param_1,undefined8 *param_2)

{
  FUN_00576964(*(undefined8 *)(param_1 + 8),*param_2);
  return;
}


// ===== 0057a754  FUN_0057a754 =====

undefined1  [16] FUN_0057a754(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar2 = *param_2;
  uVar8 = param_1[1];
  uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar9 = uVar4 * -0x622015f714c7d297;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = uVar9 & uVar8 - 1;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar1 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar5[1] == uVar9) {
            if (plVar5[2] == uVar2) {
LAB_0057a880:
              auVar14._8_8_ = 0;
              auVar14._0_8_ = plVar5;
              return auVar14;
            }
          }
          else if ((plVar5[1] & uVar8 - 1) != unaff_x24) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar9) {
            if (plVar5[2] == uVar2) goto LAB_0057a880;
          }
          else {
            if (uVar8 <= uVar6) {
              uVar1 = 0;
              if (uVar8 != 0) {
                uVar1 = uVar6 / uVar8;
              }
              uVar6 = uVar6 - uVar1 * uVar8;
            }
            if (uVar6 != unaff_x24) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  auVar15._0_8_ = (long *)FUN_00759c3c(0x20);
  lVar3 = param_1[3];
  lVar13 = param_3[1];
  lVar7 = *param_3;
  fVar12 = *(float *)(param_1 + 4);
  *auVar15._0_8_ = 0;
  auVar15._0_8_[1] = uVar9;
  auVar15._0_8_[3] = lVar13;
  auVar15._0_8_[2] = lVar7;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar3 + 1))) {
    if (uVar8 < 3) {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar2 = uVar2 | uVar8 << 1;
    uVar6 = (ulong)((float)(lVar3 + 1) / fVar12);
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
    if (uVar2 - 1 == 0) {
      uVar2 = 2;
    }
    else if ((uVar2 & uVar2 - 1) != 0) {
                    /* try { // try from 0057a93c to 0057a9bf has its CatchHandler @ 0057aa9c */
      uVar2 = FUN_00711ce0(uVar2);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar2) {
LAB_0057a954:
      FUN_0057aab0(param_1,uVar2);
    }
    else if (uVar2 < uVar8) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_0057a9bc:
        uVar6 = FUN_00711ce0();
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff)) goto LAB_0057a9bc;
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
      }
      if (uVar2 <= uVar6) {
        uVar2 = uVar6;
      }
      if (uVar2 < uVar8) goto LAB_0057a954;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
      lVar3 = *param_1;
      plVar5 = *(long **)(lVar3 + unaff_x24 * 8);
      goto joined_r0x0057aa38;
    }
    if (uVar9 < uVar8) {
      lVar3 = *param_1;
      plVar5 = *(long **)(lVar3 + uVar4 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar9;
      goto joined_r0x0057aa38;
    }
    uVar2 = 0;
    if (uVar8 != 0) {
      uVar2 = uVar9 / uVar8;
    }
    unaff_x24 = uVar9 - uVar2 * uVar8;
    lVar3 = *param_1;
    plVar5 = *(long **)(lVar3 + unaff_x24 * 8);
    if (plVar5 == (long *)0x0) goto LAB_0057a9f0;
LAB_0057a8e4:
    *auVar15._0_8_ = *plVar5;
  }
  else {
    lVar3 = *param_1;
    plVar5 = *(long **)(lVar3 + unaff_x24 * 8);
joined_r0x0057aa38:
    if (plVar5 != (long *)0x0) goto LAB_0057a8e4;
LAB_0057a9f0:
    plVar5 = param_1 + 2;
    lVar7 = *plVar5;
    *plVar5 = (long)auVar15._0_8_;
    *auVar15._0_8_ = lVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar5;
    if (*auVar15._0_8_ == 0) goto LAB_0057aa74;
    uVar2 = *(ulong *)(*auVar15._0_8_ + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar2 = uVar2 & uVar8 - 1;
    }
    else if (uVar8 <= uVar2) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar2 / uVar8;
      }
      uVar2 = uVar2 - uVar4 * uVar8;
    }
    plVar5 = (long *)(*param_1 + uVar2 * 8);
  }
  *plVar5 = (long)auVar15._0_8_;
LAB_0057aa74:
  param_1[3] = param_1[3] + 1;
  auVar15._8_8_ = 1;
  return auVar15;
}


// ===== 0057aab0  FUN_0057aab0 =====

void FUN_0057aab0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_0057ac34:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_0057ac34;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 0057ac88  FUN_0057ac88 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0057ac88(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_170 [9];
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined *local_100 [3];
  undefined8 uStack_e8;
  undefined4 auStack_e0 [4];
  undefined8 local_d0;
  long local_68;
  
  puVar4 = PTR_PTR_007a1e48;
  puVar3 = PTR_DAT_007a1e40;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = PTR_DAT_007a1e40 + 0x40;
  local_170[0] = *(undefined **)(PTR_PTR_007a1e48 + 8);
  local_d0 = 0;
  local_100[0] = puVar1;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(PTR_PTR_007a1e48 + 0x10);
  lVar6 = *(long *)(local_170[0] + -0x18);
                    /* try { // try from 0057acfc to 0057ad07 has its CatchHandler @ 0057ae2c */
  FUN_00715fc0((long)local_170 + lVar6,local_170 + 1);
  local_170[0] = puVar3 + 0x18;
  *(undefined8 *)((long)&uStack_e8 + lVar6) = 0;
  *(undefined4 *)((long)auStack_e0 + lVar6) = 0xffffffff;
                    /* try { // try from 0057ad20 to 0057ad27 has its CatchHandler @ 0057ae0c */
  local_100[0] = puVar1;
  FUN_007160dc(local_170 + 1);
  puVar1 = PTR_DAT_007a10f8;
  __s = (char *)*param_2;
  local_170[1] = PTR_DAT_007a10f8 + 0x10;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = (void *)0x0;
  local_108 = 0x10;
  sVar5 = strlen(__s);
                    /* try { // try from 0057ad5c to 0057ad67 has its CatchHandler @ 0057ae08 */
  FUN_00303e0c(local_170,__s,sVar5);
                    /* try { // try from 0057ad6c to 0057ad73 has its CatchHandler @ 0057ae04 */
  FUN_00717a0c(local_170,*param_3);
                    /* try { // try from 0057ad74 to 0057ad7f has its CatchHandler @ 0057ae00 */
  FUN_00718470(param_1,local_170 + 1);
  local_170[0] = *(undefined **)puVar4;
  *(undefined8 *)((long)local_170 + *(long *)(local_170[0] + -0x18)) =
       *(undefined8 *)(puVar4 + 0x18);
  local_170[1] = puVar1 + 0x10;
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
  FUN_00716098(local_170 + 1);
  FUN_00716ee4(local_170,puVar4 + 8);
  thunk_FUN_00715e00(local_100);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057ae40  FUN_0057ae40 =====

long * FUN_0057ae40(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar9 = NEON_cnt(uVar3,1);
    uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar2 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar5 = uVar4 & uVar3 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar6 < 2) {
        do {
          if (uVar4 - plVar7[1] == 0) {
            if (plVar7[2] == uVar2) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar6 = plVar7[1];
        if (uVar4 - uVar6 == 0) {
          if (plVar7[2] == uVar2) {
            return plVar7;
          }
        }
        else {
          if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            uVar6 = uVar6 - uVar1 * uVar3;
          }
          if (uVar6 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


// ===== 0057af50  FUN_0057af50 =====

undefined8 *
FUN_0057af50(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *__dest;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  void *__dest_00;
  void *__src;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_5 < 1) {
    return param_2;
  }
  __dest = (undefined8 *)param_1[1];
  if (param_5 <= param_1[2] - (long)__dest >> 3) {
    lVar13 = (long)__dest - (long)param_2 >> 3;
    if (lVar13 < param_5) {
      puVar1 = (undefined8 *)((long)param_3 + ((long)__dest - (long)param_2));
      sVar4 = param_4 - (long)puVar1;
      if (sVar4 != 0) {
        memmove(__dest,puVar1,sVar4);
      }
      puVar2 = (undefined8 *)((long)__dest + sVar4);
      param_1[1] = (long)puVar2;
      if (lVar13 < 1) {
        return param_2;
      }
      puVar6 = puVar2 + -param_5;
    }
    else {
      puVar1 = param_3 + param_5;
      puVar6 = __dest + -param_5;
      puVar2 = __dest;
    }
    puVar10 = puVar2;
    if (puVar6 < __dest) {
      puVar10 = __dest;
      if (__dest <= puVar6 + 1) {
        puVar10 = puVar6 + 1;
      }
      uVar8 = (long)puVar10 + param_5 * 8 + ~(ulong)puVar2;
      puVar9 = puVar2;
      if ((0x37 < uVar8) && (0x1f < (ulong)(param_5 * 8))) {
        puVar10 = puVar2 + 2;
        uVar8 = (uVar8 >> 3) + 1;
        uVar5 = uVar8 & 0x3ffffffffffffffc;
        puVar9 = puVar6 + 2;
        uVar7 = uVar5;
        do {
          puVar12 = puVar9 + -1;
          uVar14 = puVar9[-2];
          uVar16 = puVar9[1];
          uVar15 = *puVar9;
          uVar7 = uVar7 - 4;
          puVar9 = puVar9 + 4;
          puVar10[-1] = *puVar12;
          puVar10[-2] = uVar14;
          puVar10[1] = uVar16;
          *puVar10 = uVar15;
          puVar10 = puVar10 + 4;
        } while (uVar7 != 0);
        puVar10 = puVar2 + uVar5;
        puVar9 = puVar2 + uVar5;
        puVar6 = puVar6 + uVar5;
        if (uVar8 == uVar5) goto LAB_0057b1d8;
      }
      do {
        puVar12 = puVar6 + 1;
        *puVar9 = *puVar6;
        puVar10 = puVar9 + 1;
        puVar9 = puVar9 + 1;
        puVar6 = puVar12;
      } while (puVar12 < __dest);
    }
LAB_0057b1d8:
    param_1[1] = (long)puVar10;
    if (puVar2 != param_2 + param_5) {
      sVar4 = (long)puVar2 - (long)(param_2 + param_5);
      memmove((void *)((long)puVar2 - sVar4),param_2,sVar4);
    }
    if ((long)puVar1 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar1 - (long)param_3);
    return param_2;
  }
  lVar13 = *param_1;
  uVar8 = param_5 + ((long)__dest - lVar13 >> 3);
  if (uVar8 >> 0x3d != 0) {
    FUN_004b631c(param_1);
LAB_0057b22c:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar5 = param_1[2] - lVar13;
  uVar7 = (long)uVar5 >> 2;
  if (uVar7 <= uVar8) {
    uVar7 = uVar8;
  }
  if (0x7ffffffffffffff7 < uVar5) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    lVar3 = 0;
  }
  else {
    if (uVar7 >> 0x3d != 0) goto LAB_0057b22c;
    lVar3 = FUN_00759c3c(uVar7 << 3);
  }
  uVar8 = param_5 - 1U & 0x1fffffffffffffff;
  puVar2 = (undefined8 *)(lVar3 + ((long)param_2 - lVar13 >> 3) * 8);
  puVar1 = puVar2 + param_5;
  puVar6 = puVar2;
  if ((6 < uVar8) && (0x1f < (ulong)((((long)param_2 - lVar13) + lVar3) - (long)param_3))) {
    uVar8 = uVar8 + 1;
    puVar6 = param_3 + 2;
    puVar10 = puVar2 + 2;
    uVar11 = uVar8 & 0x3ffffffffffffffc;
    uVar5 = uVar11;
    do {
      puVar9 = puVar6 + -1;
      uVar14 = puVar6[-2];
      uVar16 = puVar6[1];
      uVar15 = *puVar6;
      uVar5 = uVar5 - 4;
      puVar6 = puVar6 + 4;
      puVar10[-1] = *puVar9;
      puVar10[-2] = uVar14;
      puVar10[1] = uVar16;
      *puVar10 = uVar15;
      puVar10 = puVar10 + 4;
    } while (uVar5 != 0);
    puVar6 = puVar2 + uVar11;
    param_3 = param_3 + uVar11;
    if (uVar8 == uVar11) goto LAB_0057b118;
  }
  do {
    puVar10 = puVar6 + 1;
    *puVar6 = *param_3;
    puVar6 = puVar10;
    param_3 = param_3 + 1;
  } while (puVar10 != puVar1);
LAB_0057b118:
  memcpy(puVar1,param_2,(long)__dest - (long)param_2);
  __src = (void *)*param_1;
  param_1[1] = (long)param_2;
  __dest_00 = (void *)((long)puVar2 - ((long)param_2 - (long)__src));
  memcpy(__dest_00,__src,(long)param_2 - (long)__src);
  *param_1 = (long)__dest_00;
  param_1[1] = (long)puVar1 + ((long)__dest - (long)param_2);
  param_1[2] = lVar3 + uVar7 * 8;
  if (__src != (void *)0x0) {
    free(__src);
  }
  return puVar2;
}


// ===== 0057b230  FUN_0057b230 =====

void FUN_0057b230(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b278  FUN_0057b278 =====

undefined8 * FUN_0057b278(void)

{
  int iVar1;
  
  if (((DAT_007ad530 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad530), iVar1 != 0)) {
    DAT_007ae408 = 6;
    DAT_007ae418 = 6;
    DAT_007ae410 = 4;
    DAT_007ae400 = PTR_DAT_007a2a40 + 0x10;
    FUN_00739d60(&DAT_007ad530);
    return &DAT_007ae400;
  }
  return &DAT_007ae400;
}


// ===== 0057b2f8  FUN_0057b2f8 =====

void FUN_0057b2f8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b340  FUN_0057b340 =====

undefined8 * FUN_0057b340(void)

{
  int iVar1;
  
  if (((DAT_007ad538 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad538), iVar1 != 0)) {
    DAT_007ae428 = 6;
    DAT_007ae430 = 4;
    DAT_007ae438 = 1;
    DAT_007ae420 = PTR_DAT_007a2a48 + 0x10;
    FUN_00739d60(&DAT_007ad538);
    return &DAT_007ae420;
  }
  return &DAT_007ae420;
}


// ===== 0057b3c4  FUN_0057b3c4 =====

void FUN_0057b3c4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b40c  FUN_0057b40c =====

undefined8 * FUN_0057b40c(void)

{
  int iVar1;
  
  if (((DAT_007ad540 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad540), iVar1 != 0)) {
    DAT_007ae448 = 6;
    DAT_007ae450 = 1;
    DAT_007ae458 = 9;
    DAT_007ae440 = PTR_DAT_007a2a50 + 0x10;
    FUN_00739d60(&DAT_007ad540);
    return &DAT_007ae440;
  }
  return &DAT_007ae440;
}


// ===== 0057b490  FUN_0057b490 =====

void FUN_0057b490(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b4d8  FUN_0057b4d8 =====

undefined8 * FUN_0057b4d8(void)

{
  int iVar1;
  
  if (((DAT_007ad548 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad548), iVar1 != 0)) {
    DAT_007ae468 = 6;
    DAT_007ae470 = 0x18;
    DAT_007ae478 = 8;
    DAT_007ae460 = PTR_DAT_007a2a58 + 0x10;
    FUN_00739d60(&DAT_007ad548);
    return &DAT_007ae460;
  }
  return &DAT_007ae460;
}


// ===== 0057b55c  FUN_0057b55c =====

void FUN_0057b55c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b5a4  FUN_0057b5a4 =====

undefined8 * FUN_0057b5a4(void)

{
  int iVar1;
  
  if (((DAT_007ad550 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad550), iVar1 != 0)) {
    DAT_007ae488 = 6;
    DAT_007ae490 = 1;
    DAT_007ae498 = 3;
    DAT_007ae480 = PTR_DAT_007a2a60 + 0x10;
    FUN_00739d60(&DAT_007ad550);
    return &DAT_007ae480;
  }
  return &DAT_007ae480;
}


// ===== 0057b628  FUN_0057b628 =====

void FUN_0057b628(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b670  FUN_0057b670 =====

undefined8 * FUN_0057b670(void)

{
  int iVar1;
  
  if (((DAT_007ad558 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad558), iVar1 != 0)) {
    DAT_007ae4a8 = 6;
    DAT_007ae4b0 = 1;
    DAT_007ae4b8 = 2;
    DAT_007ae4a0 = PTR_DAT_007a2a68 + 0x10;
    FUN_00739d60(&DAT_007ad558);
    return &DAT_007ae4a0;
  }
  return &DAT_007ae4a0;
}


// ===== 0057b6f4  FUN_0057b6f4 =====

void FUN_0057b6f4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b73c  FUN_0057b73c =====

undefined8 * FUN_0057b73c(void)

{
  int iVar1;
  
  if (((DAT_007ad560 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad560), iVar1 != 0)) {
    DAT_007ae4c8 = 6;
    DAT_007ae4d0 = 2;
    DAT_007ae4d8 = 4;
    DAT_007ae4c0 = PTR_DAT_007a2a70 + 0x10;
    FUN_00739d60(&DAT_007ad560);
    return &DAT_007ae4c0;
  }
  return &DAT_007ae4c0;
}


// ===== 0057b7c0  FUN_0057b7c0 =====

void FUN_0057b7c0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b808  FUN_0057b808 =====

undefined8 * FUN_0057b808(void)

{
  int iVar1;
  
  if (((DAT_007ad568 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad568), iVar1 != 0)) {
    DAT_007ae4e8 = 6;
    DAT_007ae4f0 = 2;
    DAT_007ae4f8 = 5;
    DAT_007ae4e0 = PTR_DAT_007a2a78 + 0x10;
    FUN_00739d60(&DAT_007ad568);
    return &DAT_007ae4e0;
  }
  return &DAT_007ae4e0;
}


// ===== 0057b88c  FUN_0057b88c =====

void FUN_0057b88c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b8d4  FUN_0057b8d4 =====

undefined8 * FUN_0057b8d4(void)

{
  int iVar1;
  
  if (((DAT_007ad570 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad570), iVar1 != 0)) {
    DAT_007ae508 = 6;
    DAT_007ae510 = 8;
    DAT_007ae518 = 7;
    DAT_007ae500 = PTR_DAT_007a2a80 + 0x10;
    FUN_00739d60(&DAT_007ad570);
    return &DAT_007ae500;
  }
  return &DAT_007ae500;
}


// ===== 0057b958  FUN_0057b958 =====

void FUN_0057b958(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057b9a0  FUN_0057b9a0 =====

undefined8 * FUN_0057b9a0(void)

{
  int iVar1;
  
  if (((DAT_007ad578 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad578), iVar1 != 0)) {
    DAT_007ae528 = 6;
    DAT_007ae530 = 8;
    DAT_007ae538 = 0xb;
    DAT_007ae520 = PTR_DAT_007a2a88 + 0x10;
    FUN_00739d60(&DAT_007ad578);
    return &DAT_007ae520;
  }
  return &DAT_007ae520;
}


// ===== 0057ba24  FUN_0057ba24 =====

void FUN_0057ba24(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057ba6c  FUN_0057ba6c =====

undefined8 * FUN_0057ba6c(void)

{
  int iVar1;
  
  if (((DAT_007ad580 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad580), iVar1 != 0)) {
    DAT_007ae548 = 6;
    DAT_007ae550 = 4;
    DAT_007ae558 = 0xc;
    DAT_007ae540 = PTR_DAT_007a2a90 + 0x10;
    FUN_00739d60(&DAT_007ad580);
    return &DAT_007ae540;
  }
  return &DAT_007ae540;
}


// ===== 0057baf0  FUN_0057baf0 =====

void FUN_0057baf0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057bb38  FUN_0057bb38 =====

undefined8 * FUN_0057bb38(void)

{
  int iVar1;
  
  if (((DAT_007ad588 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad588), iVar1 != 0)) {
    DAT_007ae568 = 6;
    DAT_007ae570 = 8;
    DAT_007ae578 = 0xd;
    DAT_007ae560 = PTR_DAT_007a2a98 + 0x10;
    FUN_00739d60(&DAT_007ad588);
    return &DAT_007ae560;
  }
  return &DAT_007ae560;
}


// ===== 0057bbbc  FUN_0057bbbc =====

void FUN_0057bbbc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057bc04  FUN_0057bc04 =====

undefined8 * FUN_0057bc04(void)

{
  int iVar1;
  
  if (((DAT_007ad590 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad590), iVar1 != 0)) {
    DAT_007ae588 = 6;
    DAT_007ae590 = 2;
    DAT_007ae598 = 10;
    DAT_007ae580 = PTR_DAT_007a2aa0 + 0x10;
    FUN_00739d60(&DAT_007ad590);
    return &DAT_007ae580;
  }
  return &DAT_007ae580;
}


// ===== 0057bc88  FUN_0057bc88 =====

void FUN_0057bc88(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057bcd0  FUN_0057bcd0 =====

undefined8 * FUN_0057bcd0(void)

{
  int iVar1;
  
  if (((DAT_007ad598 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad598), iVar1 != 0)) {
    DAT_007ae5a8 = 6;
    DAT_007ae5b0 = 2;
    DAT_007ae5b8 = 0x10;
    DAT_007ae5a0 = PTR_DAT_007a2aa8 + 0x10;
    FUN_00739d60(&DAT_007ad598);
    return &DAT_007ae5a0;
  }
  return &DAT_007ae5a0;
}


// ===== 0057bd54  FUN_0057bd54 =====

void FUN_0057bd54(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057bd9c  FUN_0057bd9c =====

undefined8 * FUN_0057bd9c(void)

{
  int iVar1;
  
  if (((DAT_007ad5a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5a0), iVar1 != 0)) {
    DAT_007ae5c8 = 6;
    DAT_007ae5d0 = 1;
    DAT_007ae5d8 = 0x11;
    DAT_007ae5c0 = PTR_DAT_007a2ab0 + 0x10;
    FUN_00739d60(&DAT_007ad5a0);
    return &DAT_007ae5c0;
  }
  return &DAT_007ae5c0;
}


// ===== 0057be20  FUN_0057be20 =====

void FUN_0057be20(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057be68  FUN_0057be68 =====

undefined8 * FUN_0057be68(void)

{
  int iVar1;
  
  if (((DAT_007ad5a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5a8), iVar1 != 0)) {
    DAT_007ae5e8 = 6;
    DAT_007ae5f0 = 1;
    DAT_007ae5f8 = 0x12;
    DAT_007ae5e0 = PTR_DAT_007a2ab8 + 0x10;
    FUN_00739d60(&DAT_007ad5a8);
    return &DAT_007ae5e0;
  }
  return &DAT_007ae5e0;
}


// ===== 0057beec  FUN_0057beec =====

void FUN_0057beec(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057bf34  FUN_0057bf34 =====

undefined8 * FUN_0057bf34(void)

{
  int iVar1;
  
  if (((DAT_007ad5b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5b0), iVar1 != 0)) {
    DAT_007ae608 = 6;
    DAT_007ae610 = 1;
    DAT_007ae618 = 0x13;
    DAT_007ae600 = PTR_DAT_007a2ac0 + 0x10;
    FUN_00739d60(&DAT_007ad5b0);
    return &DAT_007ae600;
  }
  return &DAT_007ae600;
}


// ===== 0057bfb8  FUN_0057bfb8 =====

void FUN_0057bfb8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794758;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c000  FUN_0057c000 =====

undefined8 * FUN_0057c000(void)

{
  int iVar1;
  
  if (((DAT_007ad5b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5b8), iVar1 != 0)) {
    DAT_007ae628 = 6;
    DAT_007ae630 = 1;
    DAT_007ae638 = 0x14;
    DAT_007ae620 = PTR_DAT_007a2ac8 + 0x10;
    FUN_00739d60(&DAT_007ad5b8);
    return &DAT_007ae620;
  }
  return &DAT_007ae620;
}


// ===== 0057c084  FUN_0057c084 =====

void FUN_0057c084(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c0cc  FUN_0057c0cc =====

undefined8 * FUN_0057c0cc(void)

{
  int iVar1;
  
  if (((DAT_007ad530 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad530), iVar1 != 0)) {
    DAT_007ae408 = 6;
    DAT_007ae418 = 6;
    DAT_007ae410 = 4;
    DAT_007ae400 = PTR_DAT_007a2a40 + 0x10;
    FUN_00739d60(&DAT_007ad530);
    return &DAT_007ae400;
  }
  return &DAT_007ae400;
}


// ===== 0057c14c  FUN_0057c14c =====

void FUN_0057c14c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c194  FUN_0057c194 =====

undefined8 * FUN_0057c194(void)

{
  int iVar1;
  
  if (((DAT_007ad538 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad538), iVar1 != 0)) {
    DAT_007ae428 = 6;
    DAT_007ae430 = 4;
    DAT_007ae438 = 1;
    DAT_007ae420 = PTR_DAT_007a2a48 + 0x10;
    FUN_00739d60(&DAT_007ad538);
    return &DAT_007ae420;
  }
  return &DAT_007ae420;
}


// ===== 0057c218  FUN_0057c218 =====

void FUN_0057c218(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c260  FUN_0057c260 =====

undefined8 * FUN_0057c260(void)

{
  int iVar1;
  
  if (((DAT_007ad540 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad540), iVar1 != 0)) {
    DAT_007ae448 = 6;
    DAT_007ae450 = 1;
    DAT_007ae458 = 9;
    DAT_007ae440 = PTR_DAT_007a2a50 + 0x10;
    FUN_00739d60(&DAT_007ad540);
    return &DAT_007ae440;
  }
  return &DAT_007ae440;
}


// ===== 0057c2e4  FUN_0057c2e4 =====

void FUN_0057c2e4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c32c  FUN_0057c32c =====

undefined8 * FUN_0057c32c(void)

{
  int iVar1;
  
  if (((DAT_007ad548 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad548), iVar1 != 0)) {
    DAT_007ae468 = 6;
    DAT_007ae470 = 0x18;
    DAT_007ae478 = 8;
    DAT_007ae460 = PTR_DAT_007a2a58 + 0x10;
    FUN_00739d60(&DAT_007ad548);
    return &DAT_007ae460;
  }
  return &DAT_007ae460;
}


// ===== 0057c3b0  FUN_0057c3b0 =====

void FUN_0057c3b0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c3f8  FUN_0057c3f8 =====

undefined8 * FUN_0057c3f8(void)

{
  int iVar1;
  
  if (((DAT_007ad550 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad550), iVar1 != 0)) {
    DAT_007ae488 = 6;
    DAT_007ae490 = 1;
    DAT_007ae498 = 3;
    DAT_007ae480 = PTR_DAT_007a2a60 + 0x10;
    FUN_00739d60(&DAT_007ad550);
    return &DAT_007ae480;
  }
  return &DAT_007ae480;
}


// ===== 0057c47c  FUN_0057c47c =====

void FUN_0057c47c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c4c4  FUN_0057c4c4 =====

undefined8 * FUN_0057c4c4(void)

{
  int iVar1;
  
  if (((DAT_007ad558 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad558), iVar1 != 0)) {
    DAT_007ae4a8 = 6;
    DAT_007ae4b0 = 1;
    DAT_007ae4b8 = 2;
    DAT_007ae4a0 = PTR_DAT_007a2a68 + 0x10;
    FUN_00739d60(&DAT_007ad558);
    return &DAT_007ae4a0;
  }
  return &DAT_007ae4a0;
}


// ===== 0057c548  FUN_0057c548 =====

void FUN_0057c548(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c590  FUN_0057c590 =====

undefined8 * FUN_0057c590(void)

{
  int iVar1;
  
  if (((DAT_007ad560 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad560), iVar1 != 0)) {
    DAT_007ae4c8 = 6;
    DAT_007ae4d0 = 2;
    DAT_007ae4d8 = 4;
    DAT_007ae4c0 = PTR_DAT_007a2a70 + 0x10;
    FUN_00739d60(&DAT_007ad560);
    return &DAT_007ae4c0;
  }
  return &DAT_007ae4c0;
}


// ===== 0057c614  FUN_0057c614 =====

void FUN_0057c614(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c65c  FUN_0057c65c =====

undefined8 * FUN_0057c65c(void)

{
  int iVar1;
  
  if (((DAT_007ad568 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad568), iVar1 != 0)) {
    DAT_007ae4e8 = 6;
    DAT_007ae4f0 = 2;
    DAT_007ae4f8 = 5;
    DAT_007ae4e0 = PTR_DAT_007a2a78 + 0x10;
    FUN_00739d60(&DAT_007ad568);
    return &DAT_007ae4e0;
  }
  return &DAT_007ae4e0;
}


// ===== 0057c6e0  FUN_0057c6e0 =====

void FUN_0057c6e0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c728  FUN_0057c728 =====

undefined8 * FUN_0057c728(void)

{
  int iVar1;
  
  if (((DAT_007ad570 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad570), iVar1 != 0)) {
    DAT_007ae508 = 6;
    DAT_007ae510 = 8;
    DAT_007ae518 = 7;
    DAT_007ae500 = PTR_DAT_007a2a80 + 0x10;
    FUN_00739d60(&DAT_007ad570);
    return &DAT_007ae500;
  }
  return &DAT_007ae500;
}


// ===== 0057c7ac  FUN_0057c7ac =====

void FUN_0057c7ac(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c7f4  FUN_0057c7f4 =====

undefined8 * FUN_0057c7f4(void)

{
  int iVar1;
  
  if (((DAT_007ad578 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad578), iVar1 != 0)) {
    DAT_007ae528 = 6;
    DAT_007ae530 = 8;
    DAT_007ae538 = 0xb;
    DAT_007ae520 = PTR_DAT_007a2a88 + 0x10;
    FUN_00739d60(&DAT_007ad578);
    return &DAT_007ae520;
  }
  return &DAT_007ae520;
}


// ===== 0057c878  FUN_0057c878 =====

void FUN_0057c878(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c8c0  FUN_0057c8c0 =====

undefined8 * FUN_0057c8c0(void)

{
  int iVar1;
  
  if (((DAT_007ad580 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad580), iVar1 != 0)) {
    DAT_007ae548 = 6;
    DAT_007ae550 = 4;
    DAT_007ae558 = 0xc;
    DAT_007ae540 = PTR_DAT_007a2a90 + 0x10;
    FUN_00739d60(&DAT_007ad580);
    return &DAT_007ae540;
  }
  return &DAT_007ae540;
}


// ===== 0057c944  FUN_0057c944 =====

void FUN_0057c944(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057c98c  FUN_0057c98c =====

undefined8 * FUN_0057c98c(void)

{
  int iVar1;
  
  if (((DAT_007ad588 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad588), iVar1 != 0)) {
    DAT_007ae568 = 6;
    DAT_007ae570 = 8;
    DAT_007ae578 = 0xd;
    DAT_007ae560 = PTR_DAT_007a2a98 + 0x10;
    FUN_00739d60(&DAT_007ad588);
    return &DAT_007ae560;
  }
  return &DAT_007ae560;
}


// ===== 0057ca10  FUN_0057ca10 =====

void FUN_0057ca10(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057ca58  FUN_0057ca58 =====

undefined8 * FUN_0057ca58(void)

{
  int iVar1;
  
  if (((DAT_007ad590 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad590), iVar1 != 0)) {
    DAT_007ae588 = 6;
    DAT_007ae590 = 2;
    DAT_007ae598 = 10;
    DAT_007ae580 = PTR_DAT_007a2aa0 + 0x10;
    FUN_00739d60(&DAT_007ad590);
    return &DAT_007ae580;
  }
  return &DAT_007ae580;
}


// ===== 0057cadc  FUN_0057cadc =====

void FUN_0057cadc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057cb24  FUN_0057cb24 =====

undefined8 * FUN_0057cb24(void)

{
  int iVar1;
  
  if (((DAT_007ad598 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad598), iVar1 != 0)) {
    DAT_007ae5a8 = 6;
    DAT_007ae5b0 = 2;
    DAT_007ae5b8 = 0x10;
    DAT_007ae5a0 = PTR_DAT_007a2aa8 + 0x10;
    FUN_00739d60(&DAT_007ad598);
    return &DAT_007ae5a0;
  }
  return &DAT_007ae5a0;
}


// ===== 0057cba8  FUN_0057cba8 =====

void FUN_0057cba8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057cbf0  FUN_0057cbf0 =====

undefined8 * FUN_0057cbf0(void)

{
  int iVar1;
  
  if (((DAT_007ad5a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5a0), iVar1 != 0)) {
    DAT_007ae5c8 = 6;
    DAT_007ae5d0 = 1;
    DAT_007ae5d8 = 0x11;
    DAT_007ae5c0 = PTR_DAT_007a2ab0 + 0x10;
    FUN_00739d60(&DAT_007ad5a0);
    return &DAT_007ae5c0;
  }
  return &DAT_007ae5c0;
}


// ===== 0057cc74  FUN_0057cc74 =====

void FUN_0057cc74(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057ccbc  FUN_0057ccbc =====

undefined8 * FUN_0057ccbc(void)

{
  int iVar1;
  
  if (((DAT_007ad5a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5a8), iVar1 != 0)) {
    DAT_007ae5e8 = 6;
    DAT_007ae5f0 = 1;
    DAT_007ae5f8 = 0x12;
    DAT_007ae5e0 = PTR_DAT_007a2ab8 + 0x10;
    FUN_00739d60(&DAT_007ad5a8);
    return &DAT_007ae5e0;
  }
  return &DAT_007ae5e0;
}


// ===== 0057cd40  FUN_0057cd40 =====

void FUN_0057cd40(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057cd88  FUN_0057cd88 =====

undefined8 * FUN_0057cd88(void)

{
  int iVar1;
  
  if (((DAT_007ad5b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5b0), iVar1 != 0)) {
    DAT_007ae608 = 6;
    DAT_007ae610 = 1;
    DAT_007ae618 = 0x13;
    DAT_007ae600 = PTR_DAT_007a2ac0 + 0x10;
    FUN_00739d60(&DAT_007ad5b0);
    return &DAT_007ae600;
  }
  return &DAT_007ae600;
}


// ===== 0057ce0c  FUN_0057ce0c =====

void FUN_0057ce0c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794798;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057ce54  FUN_0057ce54 =====

undefined8 * FUN_0057ce54(void)

{
  int iVar1;
  
  if (((DAT_007ad5b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5b8), iVar1 != 0)) {
    DAT_007ae628 = 6;
    DAT_007ae630 = 1;
    DAT_007ae638 = 0x14;
    DAT_007ae620 = PTR_DAT_007a2ac8 + 0x10;
    FUN_00739d60(&DAT_007ad5b8);
    return &DAT_007ae620;
  }
  return &DAT_007ae620;
}


// ===== 0057ced8  FUN_0057ced8 =====

void FUN_0057ced8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0057cfc0 to 0057cfc7 has its CatchHandler @ 0057d0c8 */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 0057cfc8 to 0057cfe7 has its CatchHandler @ 0057d0b8 */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/data_types.h"
                 ,0x185,
                 "static void onnxruntime::data_types_internal::SequenceTypeHelper::Set(const onnx::TypeProto *, onnx::TypeProto &)"
                 ,auStack_a0);
                    /* try { // try from 0057cfe8 to 0057cff7 has its CatchHandler @ 0057d098 */
    FUN_00479eac(auStack_b8,"expected a registered ONNX type");
                    /* try { // try from 0057cffc to 0057d03f has its CatchHandler @ 0057d040 */
    FUN_00474a40(uVar4,auStack_88,"elem_proto != nullptr",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    if (*(int *)(param_2 + 0x28) == 4) {
      lVar5 = *(long *)(param_2 + 0x20);
      lVar2 = *(long *)(lVar5 + 0x18);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
    }
    else {
      FUN_0065de80(param_2);
      *(undefined4 *)(param_2 + 0x28) = 4;
      puVar3 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar5 = FUN_00661ae8(puVar3);
      *(long *)(param_2 + 0x20) = lVar5;
      lVar2 = *(long *)(lVar5 + 0x18);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
    }
    if (lVar2 == 0) {
      puVar3 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar2 = FUN_00661d68(puVar3);
      *(long *)(lVar5 + 0x18) = lVar2;
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_0065f058(lVar2,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057d0e8  FUN_0057d0e8 =====

void FUN_0057d0e8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d130  FUN_0057d130 =====

undefined8 * FUN_0057d130(void)

{
  int iVar1;
  
  if (((DAT_007ad538 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad538), iVar1 != 0)) {
    DAT_007ae428 = 6;
    DAT_007ae430 = 4;
    DAT_007ae438 = 1;
    DAT_007ae420 = PTR_DAT_007a2a48 + 0x10;
    FUN_00739d60(&DAT_007ad538);
    return &DAT_007ae420;
  }
  return &DAT_007ae420;
}


// ===== 0057d1b4  FUN_0057d1b4 =====

void FUN_0057d1b4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d1fc  FUN_0057d1fc =====

undefined8 * FUN_0057d1fc(void)

{
  int iVar1;
  
  if (((DAT_007ad578 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad578), iVar1 != 0)) {
    DAT_007ae528 = 6;
    DAT_007ae530 = 8;
    DAT_007ae538 = 0xb;
    DAT_007ae520 = PTR_DAT_007a2a88 + 0x10;
    FUN_00739d60(&DAT_007ad578);
    return &DAT_007ae520;
  }
  return &DAT_007ae520;
}


// ===== 0057d280  FUN_0057d280 =====

void FUN_0057d280(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d2c8  FUN_0057d2c8 =====

undefined8 * FUN_0057d2c8(void)

{
  int iVar1;
  
  if (((DAT_007ad550 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad550), iVar1 != 0)) {
    DAT_007ae488 = 6;
    DAT_007ae490 = 1;
    DAT_007ae498 = 3;
    DAT_007ae480 = PTR_DAT_007a2a60 + 0x10;
    FUN_00739d60(&DAT_007ad550);
    return &DAT_007ae480;
  }
  return &DAT_007ae480;
}


// ===== 0057d34c  FUN_0057d34c =====

void FUN_0057d34c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d394  FUN_0057d394 =====

undefined8 * FUN_0057d394(void)

{
  int iVar1;
  
  if (((DAT_007ad558 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad558), iVar1 != 0)) {
    DAT_007ae4a8 = 6;
    DAT_007ae4b0 = 1;
    DAT_007ae4b8 = 2;
    DAT_007ae4a0 = PTR_DAT_007a2a68 + 0x10;
    FUN_00739d60(&DAT_007ad558);
    return &DAT_007ae4a0;
  }
  return &DAT_007ae4a0;
}


// ===== 0057d418  FUN_0057d418 =====

void FUN_0057d418(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d460  FUN_0057d460 =====

undefined8 * FUN_0057d460(void)

{
  int iVar1;
  
  if (((DAT_007ad568 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad568), iVar1 != 0)) {
    DAT_007ae4e8 = 6;
    DAT_007ae4f0 = 2;
    DAT_007ae4f8 = 5;
    DAT_007ae4e0 = PTR_DAT_007a2a78 + 0x10;
    FUN_00739d60(&DAT_007ad568);
    return &DAT_007ae4e0;
  }
  return &DAT_007ae4e0;
}


// ===== 0057d4e4  FUN_0057d4e4 =====

void FUN_0057d4e4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d52c  FUN_0057d52c =====

undefined8 * FUN_0057d52c(void)

{
  int iVar1;
  
  if (((DAT_007ad560 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad560), iVar1 != 0)) {
    DAT_007ae4c8 = 6;
    DAT_007ae4d0 = 2;
    DAT_007ae4d8 = 4;
    DAT_007ae4c0 = PTR_DAT_007a2a70 + 0x10;
    FUN_00739d60(&DAT_007ad560);
    return &DAT_007ae4c0;
  }
  return &DAT_007ae4c0;
}


// ===== 0057d5b0  FUN_0057d5b0 =====

void FUN_0057d5b0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d5f8  FUN_0057d5f8 =====

undefined8 * FUN_0057d5f8(void)

{
  int iVar1;
  
  if (((DAT_007ad530 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad530), iVar1 != 0)) {
    DAT_007ae408 = 6;
    DAT_007ae418 = 6;
    DAT_007ae410 = 4;
    DAT_007ae400 = PTR_DAT_007a2a40 + 0x10;
    FUN_00739d60(&DAT_007ad530);
    return &DAT_007ae400;
  }
  return &DAT_007ae400;
}


// ===== 0057d678  FUN_0057d678 =====

void FUN_0057d678(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d6c0  FUN_0057d6c0 =====

undefined8 * FUN_0057d6c0(void)

{
  int iVar1;
  
  if (((DAT_007ad580 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad580), iVar1 != 0)) {
    DAT_007ae548 = 6;
    DAT_007ae550 = 4;
    DAT_007ae558 = 0xc;
    DAT_007ae540 = PTR_DAT_007a2a90 + 0x10;
    FUN_00739d60(&DAT_007ad580);
    return &DAT_007ae540;
  }
  return &DAT_007ae540;
}


// ===== 0057d744  FUN_0057d744 =====

void FUN_0057d744(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d78c  FUN_0057d78c =====

undefined8 * FUN_0057d78c(void)

{
  int iVar1;
  
  if (((DAT_007ad570 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad570), iVar1 != 0)) {
    DAT_007ae508 = 6;
    DAT_007ae510 = 8;
    DAT_007ae518 = 7;
    DAT_007ae500 = PTR_DAT_007a2a80 + 0x10;
    FUN_00739d60(&DAT_007ad570);
    return &DAT_007ae500;
  }
  return &DAT_007ae500;
}


// ===== 0057d810  FUN_0057d810 =====

void FUN_0057d810(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d858  FUN_0057d858 =====

undefined8 * FUN_0057d858(void)

{
  int iVar1;
  
  if (((DAT_007ad588 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad588), iVar1 != 0)) {
    DAT_007ae568 = 6;
    DAT_007ae570 = 8;
    DAT_007ae578 = 0xd;
    DAT_007ae560 = PTR_DAT_007a2a98 + 0x10;
    FUN_00739d60(&DAT_007ad588);
    return &DAT_007ae560;
  }
  return &DAT_007ae560;
}


// ===== 0057d8dc  FUN_0057d8dc =====

void FUN_0057d8dc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d924  FUN_0057d924 =====

undefined8 * FUN_0057d924(void)

{
  int iVar1;
  
  if (((DAT_007ad540 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad540), iVar1 != 0)) {
    DAT_007ae448 = 6;
    DAT_007ae450 = 1;
    DAT_007ae458 = 9;
    DAT_007ae440 = PTR_DAT_007a2a50 + 0x10;
    FUN_00739d60(&DAT_007ad540);
    return &DAT_007ae440;
  }
  return &DAT_007ae440;
}


// ===== 0057d9a8  FUN_0057d9a8 =====

void FUN_0057d9a8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057d9f0  FUN_0057d9f0 =====

undefined8 * FUN_0057d9f0(void)

{
  int iVar1;
  
  if (((DAT_007ad548 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad548), iVar1 != 0)) {
    DAT_007ae468 = 6;
    DAT_007ae470 = 0x18;
    DAT_007ae478 = 8;
    DAT_007ae460 = PTR_DAT_007a2a58 + 0x10;
    FUN_00739d60(&DAT_007ad548);
    return &DAT_007ae460;
  }
  return &DAT_007ae460;
}


// ===== 0057da74  FUN_0057da74 =====

void FUN_0057da74(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057dabc  FUN_0057dabc =====

undefined8 * FUN_0057dabc(void)

{
  int iVar1;
  
  if (((DAT_007ad590 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad590), iVar1 != 0)) {
    DAT_007ae588 = 6;
    DAT_007ae590 = 2;
    DAT_007ae598 = 10;
    DAT_007ae580 = PTR_DAT_007a2aa0 + 0x10;
    FUN_00739d60(&DAT_007ad590);
    return &DAT_007ae580;
  }
  return &DAT_007ae580;
}


// ===== 0057db40  FUN_0057db40 =====

void FUN_0057db40(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057db88  FUN_0057db88 =====

undefined8 * FUN_0057db88(void)

{
  int iVar1;
  
  if (((DAT_007ad598 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad598), iVar1 != 0)) {
    DAT_007ae5a8 = 6;
    DAT_007ae5b0 = 2;
    DAT_007ae5b8 = 0x10;
    DAT_007ae5a0 = PTR_DAT_007a2aa8 + 0x10;
    FUN_00739d60(&DAT_007ad598);
    return &DAT_007ae5a0;
  }
  return &DAT_007ae5a0;
}


// ===== 0057dc0c  FUN_0057dc0c =====

void FUN_0057dc0c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057dc54  FUN_0057dc54 =====

undefined8 * FUN_0057dc54(void)

{
  int iVar1;
  
  if (((DAT_007ad5a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5a0), iVar1 != 0)) {
    DAT_007ae5c8 = 6;
    DAT_007ae5d0 = 1;
    DAT_007ae5d8 = 0x11;
    DAT_007ae5c0 = PTR_DAT_007a2ab0 + 0x10;
    FUN_00739d60(&DAT_007ad5a0);
    return &DAT_007ae5c0;
  }
  return &DAT_007ae5c0;
}


// ===== 0057dcd8  FUN_0057dcd8 =====

void FUN_0057dcd8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057dd20  FUN_0057dd20 =====

undefined8 * FUN_0057dd20(void)

{
  int iVar1;
  
  if (((DAT_007ad5a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5a8), iVar1 != 0)) {
    DAT_007ae5e8 = 6;
    DAT_007ae5f0 = 1;
    DAT_007ae5f8 = 0x12;
    DAT_007ae5e0 = PTR_DAT_007a2ab8 + 0x10;
    FUN_00739d60(&DAT_007ad5a8);
    return &DAT_007ae5e0;
  }
  return &DAT_007ae5e0;
}


// ===== 0057dda4  FUN_0057dda4 =====

void FUN_0057dda4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057ddec  FUN_0057ddec =====

undefined8 * FUN_0057ddec(void)

{
  int iVar1;
  
  if (((DAT_007ad5b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5b0), iVar1 != 0)) {
    DAT_007ae608 = 6;
    DAT_007ae610 = 1;
    DAT_007ae618 = 0x13;
    DAT_007ae600 = PTR_DAT_007a2ac0 + 0x10;
    FUN_00739d60(&DAT_007ad5b0);
    return &DAT_007ae600;
  }
  return &DAT_007ae600;
}


// ===== 0057de70  FUN_0057de70 =====

void FUN_0057de70(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_007947d8;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057deb8  FUN_0057deb8 =====

undefined8 * FUN_0057deb8(void)

{
  int iVar1;
  
  if (((DAT_007ad5b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad5b8), iVar1 != 0)) {
    DAT_007ae628 = 6;
    DAT_007ae630 = 1;
    DAT_007ae638 = 0x14;
    DAT_007ae620 = PTR_DAT_007a2ac8 + 0x10;
    FUN_00739d60(&DAT_007ad5b8);
    return &DAT_007ae620;
  }
  return &DAT_007ae620;
}


// ===== 0057df3c  FUN_0057df3c =====

void FUN_0057df3c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [80];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    uVar4 = FUN_00753a74(0x88);
                    /* try { // try from 0057e024 to 0057e02b has its CatchHandler @ 0057e12c */
    FUN_00645c30(auStack_a0);
                    /* try { // try from 0057e02c to 0057e04b has its CatchHandler @ 0057e11c */
    FUN_0047488c(auStack_88,
                 "/var/lib/jenkins/.conan2/p/b/onnxr4eb8b089c1bae/b/src/include/onnxruntime/core/framework/data_types.h"
                 ,0x19c,
                 "static void onnxruntime::data_types_internal::OptionalTypeHelper::Set(const onnx::TypeProto *, onnx::TypeProto &)"
                 ,auStack_a0);
                    /* try { // try from 0057e04c to 0057e05b has its CatchHandler @ 0057e0fc */
    FUN_00479eac(auStack_b8,"expected a registered ONNX type");
                    /* try { // try from 0057e060 to 0057e0a3 has its CatchHandler @ 0057e0a4 */
    FUN_00474a40(uVar4,auStack_88,"elem_proto != nullptr",auStack_b8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1e28,PTR_FUN_007a1e30);
    }
  }
  else {
    if (*(int *)(param_2 + 0x28) == 9) {
      lVar5 = *(long *)(param_2 + 0x20);
      lVar2 = *(long *)(lVar5 + 0x18);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
    }
    else {
      FUN_0065de80(param_2);
      *(undefined4 *)(param_2 + 0x28) = 9;
      puVar3 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(param_2 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar5 = FUN_00661be8(puVar3);
      *(long *)(param_2 + 0x20) = lVar5;
      lVar2 = *(long *)(lVar5 + 0x18);
      *(uint *)(lVar5 + 0x10) = *(uint *)(lVar5 + 0x10) | 1;
    }
    if (lVar2 == 0) {
      puVar3 = (ulong *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffc);
      if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar2 = FUN_00661d68(puVar3);
      *(long *)(lVar5 + 0x18) = lVar2;
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_0065f058(lVar2,param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0057e14c  FUN_0057e14c =====

void FUN_0057e14c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e194  FUN_0057e194 =====

undefined8 * FUN_0057e194(void)

{
  int iVar1;
  
  if (((DAT_007ad260 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad260), iVar1 != 0)) {
                    /* try { // try from 0057e1d8 to 0057e1e3 has its CatchHandler @ 0057e218 */
    FUN_0056cd64(&DAT_007ad8c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad260);
    return &DAT_007ad8c0;
  }
  return &DAT_007ad8c0;
}


// ===== 0057e230  FUN_0057e230 =====

void FUN_0057e230(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e278  FUN_0057e278 =====

undefined8 * FUN_0057e278(void)

{
  int iVar1;
  
  if (((DAT_007ad268 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad268), iVar1 != 0)) {
                    /* try { // try from 0057e2bc to 0057e2c7 has its CatchHandler @ 0057e2fc */
    FUN_0056cef8(&DAT_007ad8e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad8e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad268);
    return &DAT_007ad8e0;
  }
  return &DAT_007ad8e0;
}


// ===== 0057e314  FUN_0057e314 =====

void FUN_0057e314(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e35c  FUN_0057e35c =====

undefined8 * FUN_0057e35c(void)

{
  int iVar1;
  
  if (((DAT_007ad270 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad270), iVar1 != 0)) {
                    /* try { // try from 0057e3a0 to 0057e3ab has its CatchHandler @ 0057e3e0 */
    FUN_0056d08c(&DAT_007ad900);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad900,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad270);
    return &DAT_007ad900;
  }
  return &DAT_007ad900;
}


// ===== 0057e3f8  FUN_0057e3f8 =====

void FUN_0057e3f8(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e440  FUN_0057e440 =====

undefined8 * FUN_0057e440(void)

{
  int iVar1;
  
  if (((DAT_007ad278 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad278), iVar1 != 0)) {
                    /* try { // try from 0057e484 to 0057e48f has its CatchHandler @ 0057e4c4 */
    FUN_0056d220(&DAT_007ad920);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad920,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad278);
    return &DAT_007ad920;
  }
  return &DAT_007ad920;
}


// ===== 0057e4dc  FUN_0057e4dc =====

void FUN_0057e4dc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e524  FUN_0057e524 =====

undefined8 * FUN_0057e524(void)

{
  int iVar1;
  
  if (((DAT_007ad280 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad280), iVar1 != 0)) {
                    /* try { // try from 0057e568 to 0057e573 has its CatchHandler @ 0057e5a8 */
    FUN_0056d3b4(&DAT_007ad940);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad940,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad280);
    return &DAT_007ad940;
  }
  return &DAT_007ad940;
}


// ===== 0057e5c0  FUN_0057e5c0 =====

void FUN_0057e5c0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e608  FUN_0057e608 =====

undefined8 * FUN_0057e608(void)

{
  int iVar1;
  
  if (((DAT_007ad288 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad288), iVar1 != 0)) {
                    /* try { // try from 0057e64c to 0057e657 has its CatchHandler @ 0057e68c */
    FUN_0056d548(&DAT_007ad960);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad960,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad288);
    return &DAT_007ad960;
  }
  return &DAT_007ad960;
}


// ===== 0057e6a4  FUN_0057e6a4 =====

void FUN_0057e6a4(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e6ec  FUN_0057e6ec =====

undefined8 * FUN_0057e6ec(void)

{
  int iVar1;
  
  if (((DAT_007ad290 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad290), iVar1 != 0)) {
                    /* try { // try from 0057e730 to 0057e73b has its CatchHandler @ 0057e770 */
    FUN_0056d6dc(&DAT_007ad980);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad980,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad290);
    return &DAT_007ad980;
  }
  return &DAT_007ad980;
}


// ===== 0057e788  FUN_0057e788 =====

void FUN_0057e788(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e7d0  FUN_0057e7d0 =====

undefined8 * FUN_0057e7d0(void)

{
  int iVar1;
  
  if (((DAT_007ad298 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad298), iVar1 != 0)) {
                    /* try { // try from 0057e814 to 0057e81f has its CatchHandler @ 0057e854 */
    FUN_0056d870(&DAT_007ad9a0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9a0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad298);
    return &DAT_007ad9a0;
  }
  return &DAT_007ad9a0;
}


// ===== 0057e86c  FUN_0057e86c =====

void FUN_0057e86c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e8b4  FUN_0057e8b4 =====

undefined8 * FUN_0057e8b4(void)

{
  int iVar1;
  
  if (((DAT_007ad2a0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2a0), iVar1 != 0)) {
                    /* try { // try from 0057e8f8 to 0057e903 has its CatchHandler @ 0057e938 */
    FUN_0056da04(&DAT_007ad9c0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9c0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a0);
    return &DAT_007ad9c0;
  }
  return &DAT_007ad9c0;
}


// ===== 0057e950  FUN_0057e950 =====

void FUN_0057e950(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057e998  FUN_0057e998 =====

undefined8 * FUN_0057e998(void)

{
  int iVar1;
  
  if (((DAT_007ad2a8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2a8), iVar1 != 0)) {
                    /* try { // try from 0057e9dc to 0057e9e7 has its CatchHandler @ 0057ea1c */
    FUN_0056db98(&DAT_007ad9e0);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ad9e0,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2a8);
    return &DAT_007ad9e0;
  }
  return &DAT_007ad9e0;
}


// ===== 0057ea34  FUN_0057ea34 =====

void FUN_0057ea34(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057ea7c  FUN_0057ea7c =====

undefined8 * FUN_0057ea7c(void)

{
  int iVar1;
  
  if (((DAT_007ad2b0 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2b0), iVar1 != 0)) {
                    /* try { // try from 0057eac0 to 0057eacb has its CatchHandler @ 0057eb00 */
    FUN_0056dd2c(&DAT_007ada00);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada00,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b0);
    return &DAT_007ada00;
  }
  return &DAT_007ada00;
}


// ===== 0057eb18  FUN_0057eb18 =====

void FUN_0057eb18(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)param_1[3];
  *param_1 = &PTR_FUN_00794818;
  if (__ptr != (void *)0x0) {
    FUN_0065e3c8(__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 0057eb60  FUN_0057eb60 =====

undefined8 * FUN_0057eb60(void)

{
  int iVar1;
  
  if (((DAT_007ad2b8 & 1) == 0) && (iVar1 = FUN_00739c1c(&DAT_007ad2b8), iVar1 != 0)) {
                    /* try { // try from 0057eba4 to 0057ebaf has its CatchHandler @ 0057ebe4 */
    FUN_0056dec0(&DAT_007ada20);
    __cxa_atexit(PTR_FUN_007a2738,&DAT_007ada20,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007ad2b8);
    return &DAT_007ada20;
  }
  return &DAT_007ada20;
}


