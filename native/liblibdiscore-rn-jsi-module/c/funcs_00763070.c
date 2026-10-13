// ===== 00763070  FUN_00763070 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00763070(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  long local_40;
  ulong uStack_38;
  undefined8 local_30;
  ulong local_28;
  
  if (*param_1 == 2) {
    lStack_48 = param_1[2];
    lStack_50 = param_1[1];
    lVar9 = *param_2;
    local_28 = (ulong)(lVar9 != 0);
    local_40 = 0;
    uStack_38 = 0;
    bVar10 = (byte)((ulong)lStack_50 >> 8);
    bVar11 = (byte)((ulong)lStack_50 >> 0x10);
    bVar12 = (byte)((ulong)lStack_50 >> 0x18);
    bVar13 = (byte)((ulong)lStack_50 >> 0x20);
    bVar14 = (byte)((ulong)lStack_50 >> 0x28);
    bVar15 = (byte)((ulong)lStack_50 >> 0x30);
    bVar16 = (byte)((ulong)lStack_50 >> 0x38);
    local_70 = CONCAT17(bVar16 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                        CONCAT16(bVar15 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                                 CONCAT15(bVar14 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                          CONCAT14(bVar13 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                   CONCAT13(bVar12 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                           0x18),
                                                            CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 8
                                                                          ),
                                                           (byte)lStack_50 ^ (byte)_DAT_0029fb60))))
                                         )));
    lStack_68 = CONCAT17(bVar16 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                         CONCAT16(bVar15 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                  CONCAT15(bVar14 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                           CONCAT14(bVar13 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                    CONCAT13(bVar12 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                            0x18),
                                                             CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 8
                                                                          ),
                                                           (byte)lStack_50 ^ (byte)_UNK_0029fb68))))
                                          )));
    bVar10 = (byte)((ulong)lStack_48 >> 8);
    bVar11 = (byte)((ulong)lStack_48 >> 0x10);
    bVar12 = (byte)((ulong)lStack_48 >> 0x18);
    bVar13 = (byte)((ulong)lStack_48 >> 0x20);
    bVar14 = (byte)((ulong)lStack_48 >> 0x28);
    bVar15 = (byte)((ulong)lStack_48 >> 0x30);
    bVar16 = (byte)((ulong)lStack_48 >> 0x38);
    local_60 = CONCAT17(bVar16 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                        CONCAT16(bVar15 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                                 CONCAT15(bVar14 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                          CONCAT14(bVar13 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                   CONCAT13(bVar12 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                           0x18),
                                                            CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 8
                                                                          ),
                                                           (byte)lStack_48 ^ (byte)_DAT_0029f5c0))))
                                         )));
    uStack_58 = CONCAT17(bVar16 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                         CONCAT16(bVar15 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                  CONCAT15(bVar14 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                           CONCAT14(bVar13 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                    CONCAT13(bVar12 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                            0x18),
                                                             CONCAT12(bVar11 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 8
                                                                          ),
                                                           (byte)lStack_48 ^ (byte)_UNK_0029f5c8))))
                                          )));
    local_30 = 0;
    FUN_007657e8(&local_70,&local_28,8);
    if (lVar9 == 0) {
      local_28 = (ulong)*(byte *)(param_2 + 1);
      puVar3 = &local_28;
      lVar9 = 8;
    }
    else {
      puVar3 = (ulong *)param_2[1];
      lVar9 = param_2[2];
    }
    FUN_007657e8(&local_70,puVar3,lVar9);
    uStack_38 = uStack_38 | local_40 << 0x38;
    uStack_58 = uStack_38 ^ uStack_58;
    uVar5 = local_60 + local_70;
    uVar7 = uVar5 ^ (local_60 >> 0x33 | local_60 << 0xd);
    uVar8 = uStack_58 + lStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
    uVar1 = uStack_58 + lStack_68 + uVar7;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    uVar5 = (uVar5 ^ uStack_38) + uVar7;
    uVar1 = uVar8 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
    uVar7 = uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar1 = uVar7 + uVar1;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    uVar5 = uVar7 + uVar5;
    uVar1 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar7 = uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    uVar8 = uVar1 ^ (uVar8 >> 0x30 | uVar8 << 0x10);
    uVar1 = uVar7 + uVar1;
    uVar5 = uVar8 + (uVar5 >> 0x20 | uVar5 << 0x20);
    uVar7 = uVar1 ^ (uVar7 >> 0x2f | uVar7 << 0x11);
    uVar8 = uVar5 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
    lVar9 = uVar8 + (uVar1 >> 0x20 | uVar1 << 0x20);
    uVar5 = uVar7 + uVar5 ^ (uVar7 >> 0x33 | uVar7 << 0xd);
    lVar2 = uVar5 + lVar9;
    return (((uint)((ulong)lVar9 >> 0x20) ^ (uint)(uVar8 >> 0x10)) >> 0xb ^ (uint)(uVar5 >> 0x2f) ^
            (uint)((ulong)lVar2 >> 0x20) ^ (uint)lVar2) & 0x7fff;
  }
  uVar4 = (*param_2 != 0 ^ 0x2325) * 0x4a21;
  if (*param_2 != 0) {
    lVar9 = param_2[2];
    if (lVar9 != 0) {
      pbVar6 = (byte *)param_2[1];
      do {
        lVar9 = lVar9 + -1;
        uVar4 = (uVar4 ^ *pbVar6) * 0x1b3;
        pbVar6 = pbVar6 + 1;
      } while (lVar9 != 0);
    }
    return uVar4 & 0x7fff;
  }
  return (uVar4 ^ *(byte *)(param_2 + 1)) * 0x4a21 & 0x7fff;
}


// ===== 0076326c  FUN_0076326c =====

void FUN_0076326c(long *param_1,long param_2)

{
  ushort *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  void *__s2;
  ulong *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong local_188;
  ulong local_180;
  undefined8 local_178;
  long lStack_170;
  ulong local_168;
  ulong *puStack_160;
  ulong *local_158;
  undefined8 uStack_150;
  ulong *local_148;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_110;
  void *pvStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  void *pvStack_e8;
  size_t local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  undefined1 auStack_71 [17];
  
  puVar16 = *(ulong **)(param_2 + 0x20);
  lVar17 = *(long *)(param_2 + 0x28);
  local_168 = *(ulong *)(param_2 + 0x40);
  lStack_170 = *(long *)(param_2 + 0x38);
  local_178 = *(undefined8 *)(param_2 + 0x30);
  local_188 = 0;
  local_148 = puVar16 + lVar17 * 0xd;
  uStack_150 = *(undefined8 *)(param_2 + 0x18);
  puStack_160 = puVar16;
  local_158 = puVar16;
  if (*(long *)(param_2 + 0x50) != 0) {
    free(*(void **)(param_2 + 0x48));
  }
  puVar9 = local_158;
  if (lVar17 != 0) {
    uVar13 = *puVar16;
    puVar9 = puVar16 + 0xd;
    if (uVar13 != 2) {
      pvStack_108 = (void *)puVar16[9];
      local_110 = puVar16[8];
      uStack_f8 = puVar16[0xb];
      local_100 = puVar16[10];
      local_180 = puVar16[1];
      local_120 = puVar16[7];
      uStack_138 = puVar16[4];
      local_140 = puVar16[3];
      uStack_128 = puVar16[6];
      uStack_130 = puVar16[5];
      local_158 = puVar16 + 0xd;
LAB_00763344:
                    /* try { // try from 00763344 to 0076334b has its CatchHandler @ 00763838 */
      local_188 = uVar13 & 1;
      iVar10 = FUN_00763e2c(param_1);
      if (iVar10 != 0) {
        if (local_110 != 0) {
                    /* try { // try from 007637d4 to 00763803 has its CatchHandler @ 00763844 */
          (**(code **)(local_110 + 0x20))(&uStack_f8,pvStack_108,local_100);
        }
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00ad8220,
                   &PTR_s__root__cargo_registry_src_index__00ad81f0);
      }
      uVar11 = FUN_00763070(param_1,&local_110);
      uVar18 = local_100;
      __s2 = pvStack_108;
      uVar5 = local_110;
      uVar11 = uVar11 & 0xffff;
      uVar6 = *(ushort *)(param_1 + 0xb);
      lVar17 = param_1[9];
      uVar12 = param_1[10];
      lVar3 = param_1[4];
      uVar4 = param_1[5];
      uVar13 = 0;
      cVar8 = (char)pvStack_108;
      uVar14 = (ulong)(uVar6 & uVar11);
      do {
        if ((uVar12 <= uVar14) && (uVar14 = 0, uVar12 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar1 = (ushort *)(lVar17 + uVar14 * 4);
        uVar20 = (ulong)*puVar1;
        if ((uVar20 == 0xffff) ||
           (uVar7 = puVar1[1],
           ((ulong)((int)uVar14 - (uint)(uVar7 & uVar6)) & (ulong)uVar6) < uVar13)) {
          lVar17 = *param_1;
          uStack_d8 = uStack_f8;
          local_e0 = local_100;
          local_a0 = local_120;
          uStack_b8 = uStack_138;
          local_c0 = local_140;
          uStack_a8 = uStack_128;
          local_b0 = uStack_130;
          local_f0 = uVar5;
          pvStack_e8 = __s2;
          uVar12 = FUN_0076417c(param_1,uVar11,&local_f0,&local_c0);
          if ((uVar12 & 1) != 0) {
                    /* try { // try from 00763808 to 0076382b has its CatchHandler @ 007638fc */
                    /* WARNING: Subroutine does not return */
            core::result::unwrap_failed
                      ("size overflows MAX_SIZE",0x17,auStack_71,&DAT_00ad8220,
                       &PTR_s__root__cargo_registry_src_index__00ad8208);
          }
          lVar3 = param_1[9];
          uVar5 = param_1[10];
          uVar12 = 0;
          uVar18 = uVar4 & 0xffffffff;
          while( true ) {
            if ((uVar5 <= uVar14) && (uVar14 = 0, uVar5 == 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            puVar1 = (ushort *)(lVar3 + uVar14 * 4);
            uVar6 = *puVar1;
            if (uVar6 == 0xffff) break;
            uVar7 = puVar1[1];
            *puVar1 = (ushort)uVar18;
            uVar12 = uVar12 + 1;
            puVar1[1] = (ushort)uVar11;
            uVar14 = uVar14 + 1;
            uVar18 = (ulong)(uint)uVar6;
            uVar11 = (uint)uVar7;
          }
          *puVar1 = (ushort)uVar18;
          puVar1[1] = (ushort)uVar11;
          if ((0x7f < uVar12 || 0x1ff < uVar13 && lVar17 != 2) && (*param_1 == 0)) {
            *param_1 = 1;
          }
          goto joined_r0x007635b0;
        }
        if (uVar7 == uVar11) {
          if (uVar4 <= uVar20) {
                    /* try { // try from 00763798 to 007637ab has its CatchHandler @ 00763894 */
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_bounds_check
                      (uVar20,uVar4,&PTR_s__root__cargo_registry_src_index__00ad7ff8);
          }
          lVar15 = lVar3 + uVar20 * 0x68;
          if ((uVar5 == 0) != (*(long *)(lVar15 + 0x40) != 0)) {
            if (*(long *)(lVar15 + 0x40) == 0) {
              if (*(char *)(lVar15 + 0x48) == cVar8) goto LAB_00763460;
            }
            else if ((*(size_t *)(lVar15 + 0x50) == uVar18) &&
                    (iVar10 = memcmp(*(void **)(lVar15 + 0x48),__s2,uVar18), iVar10 == 0))
            goto code_r0x00763448;
          }
        }
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 + 1;
      } while( true );
    }
  }
LAB_007632ec:
  local_158 = puVar9;
  FUN_007613c4(&local_188);
  return;
code_r0x00763448:
                    /* try { // try from 00763450 to 0076345f has its CatchHandler @ 00763830 */
  (**(code **)(uVar5 + 0x20))(&uStack_f8,__s2);
LAB_00763460:
  uStack_b8 = uStack_138;
  local_c0 = local_140;
  uStack_a8 = uStack_128;
  local_b0 = uStack_130;
  local_a0 = local_120;
                    /* try { // try from 00763474 to 00763513 has its CatchHandler @ 00763834 */
  FUN_0076399c(&local_f0,param_1,uVar20,&local_c0);
  (**(code **)(local_f0 + 0x20))(&uStack_d8,pvStack_e8,local_e0);
  uVar4 = uVar20;
joined_r0x007635b0:
  if (local_188 == 1) {
    do {
      while( true ) {
        if (local_168 <= local_180) {
                    /* try { // try from 00763788 to 00763793 has its CatchHandler @ 007638fc */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (local_180,local_168,&PTR_s__root__cargo_registry_src_index__00ad82a0);
        }
        lVar17 = lStack_170 + local_180 * 0x48;
        local_180 = (ulong)*(uint *)(lVar17 + 0x10);
        bVar2 = (*(uint *)(lVar17 + 0x10) & 1) != 0;
        if (bVar2) {
          local_180 = *(ulong *)(lVar17 + 0x18);
        }
        local_188 = (ulong)bVar2;
        pvStack_e8 = *(void **)(lVar17 + 0x28);
        local_f0 = *(ulong *)(lVar17 + 0x20);
        uStack_d8 = *(ulong *)(lVar17 + 0x38);
        local_e0 = *(size_t *)(lVar17 + 0x30);
        local_d0 = *(undefined8 *)(lVar17 + 0x40);
        if ((ulong)param_1[5] <= uVar4) {
                    /* try { // try from 00763774 to 00763783 has its CatchHandler @ 007638d8 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar4,param_1[5],&PTR_s__root__cargo_registry_src_index__00ad8240);
        }
        plVar19 = (long *)(param_1[4] + uVar4 * 0x68);
        uStack_a8 = uVar4;
        if (*plVar19 == 1) break;
        local_80 = *(ulong *)(lVar17 + 0x40);
        uStack_98 = *(ulong *)(lVar17 + 0x28);
        local_a0 = *(ulong *)(lVar17 + 0x20);
        uStack_88 = *(ulong *)(lVar17 + 0x38);
        uStack_90 = *(ulong *)(lVar17 + 0x30);
        lVar17 = param_1[8];
        local_c0 = 0;
        local_b0 = 0;
        uStack_b8 = uVar4;
        if (lVar17 == param_1[6]) {
                    /* try { // try from 00763760 to 00763767 has its CatchHandler @ 00763870 */
          <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
          ::grow_one(param_1 + 6);
        }
        puVar16 = (ulong *)(param_1[7] + lVar17 * 0x48);
        puVar16[1] = uStack_b8;
        *puVar16 = local_c0;
        puVar16[8] = local_80;
        puVar16[5] = uStack_98;
        puVar16[4] = local_a0;
        puVar16[7] = uStack_88;
        puVar16[6] = uStack_90;
        puVar16[3] = uStack_a8;
        puVar16[2] = local_b0;
        param_1[8] = lVar17 + 1;
        *plVar19 = 1;
        plVar19[1] = lVar17;
        plVar19[2] = lVar17;
        if ((local_188 & 1) == 0) goto LAB_007635b4;
      }
      local_80 = *(ulong *)(lVar17 + 0x40);
      uStack_98 = *(ulong *)(lVar17 + 0x28);
      local_a0 = *(ulong *)(lVar17 + 0x20);
      uStack_88 = *(ulong *)(lVar17 + 0x38);
      uStack_90 = *(ulong *)(lVar17 + 0x30);
      uVar14 = param_1[8];
      uVar13 = plVar19[2];
      local_c0 = 1;
      local_b0 = 0;
      uStack_b8 = uVar13;
      if (uVar14 == param_1[6]) {
                    /* try { // try from 007636b4 to 007636bb has its CatchHandler @ 0076384c */
        <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::ExtraValue<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
        ::grow_one(param_1 + 6);
      }
      puVar16 = (ulong *)(param_1[7] + uVar14 * 0x48);
      puVar16[1] = uStack_b8;
      *puVar16 = local_c0;
      puVar16[8] = local_80;
      puVar16[5] = uStack_98;
      puVar16[4] = local_a0;
      puVar16[7] = uStack_88;
      puVar16[6] = uStack_90;
      puVar16[3] = uStack_a8;
      puVar16[2] = local_b0;
      param_1[8] = uVar14 + 1;
      if (uVar14 < uVar13) {
                    /* try { // try from 007637b0 to 007637bf has its CatchHandler @ 007638fc */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar13,uVar14 + 1,&PTR_s__root__cargo_registry_src_index__00ad8040);
      }
      lVar17 = param_1[7] + uVar13 * 0x48;
      *(undefined8 *)(lVar17 + 0x10) = 1;
      *(ulong *)(lVar17 + 0x18) = uVar14;
      *plVar19 = 1;
      plVar19[2] = uVar14;
    } while ((local_188 & 1) != 0);
  }
LAB_007635b4:
  puVar9 = local_158;
  if (local_158 == local_148) goto LAB_007632ec;
  uVar13 = *local_158;
  puVar9 = local_158 + 0xd;
  if (uVar13 == 2) goto LAB_007632ec;
  pvStack_108 = (void *)local_158[9];
  local_110 = local_158[8];
  uStack_f8 = local_158[0xb];
  local_100 = local_158[10];
  local_180 = local_158[1];
  local_120 = local_158[7];
  uStack_128 = local_158[6];
  uStack_130 = local_158[5];
  uStack_138 = local_158[4];
  local_140 = local_158[3];
  local_158 = local_158 + 0xd;
  goto LAB_00763344;
}


// ===== 00763914  <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<bytes::bytes::Bytes>>::grow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<bytes::bytes::Bytes>>::grow
    */

void __rustcall
<alloc::collections::vec_deque::[4]::alloc::collections::vec_deque::VecDeque<bytes::bytes::Bytes>>::
grow(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<bytes::bytes::Bytes>>::grow_one();
  uVar1 = param_1[2];
  if ((ulong)(lVar4 - param_1[3]) < uVar1) {
    uVar2 = lVar4 - uVar1;
    uVar3 = param_1[3] - uVar2;
    if ((uVar3 < uVar2) && (uVar3 <= (ulong)(*param_1 - lVar4))) {
      memcpy((void *)(param_1[1] + lVar4 * 0x20),(void *)param_1[1],uVar3 * 0x20);
      return;
    }
    lVar4 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar4 * 0x20),(void *)(param_1[1] + uVar1 * 0x20),uVar2 * 0x20);
    param_1[2] = lVar4;
  }
  return;
}


// ===== 0076399c  FUN_0076399c =====

void FUN_0076399c(undefined8 *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined **local_128;
  undefined **local_120;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  ulong uStack_a8;
  long local_a0;
  ulong uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar15 = *(ulong *)(param_2 + 0x28);
  if (uVar15 <= param_3) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (param_3,uVar15,&PTR_s__root__cargo_registry_src_index__00ad8258);
  }
  lVar16 = *(long *)(param_2 + 0x20);
  puVar8 = (uint *)(lVar16 + param_3 * 0x68);
  if ((*puVar8 & 1) == 0) {
LAB_00763c48:
    uVar18 = *(undefined8 *)(puVar8 + 6);
    uVar20 = *(undefined8 *)(puVar8 + 0xc);
    uVar19 = *(undefined8 *)(puVar8 + 10);
    uVar7 = *(undefined8 *)(puVar8 + 0xe);
    param_1[1] = *(undefined8 *)(puVar8 + 8);
    *param_1 = uVar18;
    param_1[3] = uVar20;
    param_1[2] = uVar19;
    uVar19 = param_4[1];
    uVar18 = *param_4;
    uVar21 = param_4[3];
    uVar20 = param_4[2];
    param_1[4] = uVar7;
    uVar7 = param_4[4];
    *(undefined8 *)(puVar8 + 8) = uVar19;
    *(undefined8 *)(puVar8 + 6) = uVar18;
    *(undefined8 *)(puVar8 + 0xc) = uVar21;
    *(undefined8 *)(puVar8 + 10) = uVar20;
    *(undefined8 *)(puVar8 + 0xe) = uVar7;
    return;
  }
  uVar13 = *(ulong *)(puVar8 + 2);
  uVar12 = *(ulong *)(param_2 + 0x40);
  if (uVar13 < uVar12) {
    lVar17 = *(long *)(param_2 + 0x38);
    local_128 = &PTR_s__root__cargo_registry_src_index__00ad8148;
    local_120 = &PTR_s__root__cargo_registry_src_index__00ad8088;
    uVar14 = uVar13;
    puVar3 = (undefined8 *)(lVar17 + uVar12 * 0x48);
    do {
      puVar5 = (uint *)(lVar17 + uVar14 * 0x48);
      uVar13 = *(ulong *)(puVar5 + 2);
      uVar9 = *(ulong *)(puVar5 + 6);
      if ((*puVar5 & 1) == 0) {
        if (puVar5[4] == 0) {
          if (uVar15 <= uVar13) {
            local_120 = &PTR_s__root__cargo_registry_src_index__00ad8070;
            goto LAB_00763da8;
          }
          *(undefined8 *)(lVar16 + uVar13 * 0x68) = 0;
        }
        else {
          if (uVar15 <= uVar13) goto LAB_00763da8;
          plVar6 = (long *)(lVar16 + uVar13 * 0x68);
          if (*plVar6 != 1) {
            ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad80a0;
LAB_00763ca4:
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(ppuVar4);
          }
          plVar6[1] = uVar9;
          if (uVar12 <= uVar9) {
            local_120 = &PTR_s__root__cargo_registry_src_index__00ad80b8;
            uVar15 = uVar12;
            uVar13 = uVar9;
            goto LAB_00763da8;
          }
          puVar10 = (undefined8 *)(lVar17 + uVar9 * 0x48);
          *puVar10 = 0;
          puVar10[1] = uVar13;
        }
      }
      else if ((puVar5[4] & 1) == 0) {
        if (uVar15 <= uVar9) {
          local_120 = &PTR_s__root__cargo_registry_src_index__00ad80d0;
          uVar13 = uVar9;
          goto LAB_00763da8;
        }
        plVar6 = (long *)(lVar16 + uVar9 * 0x68);
        if (*plVar6 != 1) {
          ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad80e8;
          goto LAB_00763ca4;
        }
        plVar6[2] = uVar13;
        if (uVar12 <= uVar13) {
          local_120 = &PTR_s__root__cargo_registry_src_index__00ad8100;
          uVar15 = uVar12;
          goto LAB_00763da8;
        }
        lVar11 = lVar17 + uVar13 * 0x48;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(ulong *)(lVar11 + 0x18) = uVar9;
      }
      else {
        if (uVar12 <= uVar13) {
          local_120 = &PTR_s__root__cargo_registry_src_index__00ad8118;
          uVar15 = uVar12;
          goto LAB_00763da8;
        }
        lVar11 = lVar17 + uVar13 * 0x48;
        *(undefined8 *)(lVar11 + 0x10) = 1;
        *(ulong *)(lVar11 + 0x18) = uVar9;
        if (uVar12 <= uVar9) {
          local_120 = &PTR_s__root__cargo_registry_src_index__00ad8130;
          uVar15 = uVar12;
          uVar13 = uVar9;
          goto LAB_00763da8;
        }
        puVar10 = (undefined8 *)(lVar17 + uVar9 * 0x48);
        *puVar10 = 1;
        puVar10[1] = uVar13;
      }
      uStack_a8 = *(ulong *)(puVar5 + 2);
      local_b0 = *(long *)puVar5;
      uVar12 = uVar12 - 1;
      *(ulong *)(param_2 + 0x40) = uVar12;
      uStack_88 = *(undefined8 *)(puVar5 + 10);
      local_90 = *(long *)(puVar5 + 8);
      uStack_78 = *(undefined8 *)(puVar5 + 0xe);
      local_80 = *(undefined8 *)(puVar5 + 0xc);
      local_70 = *(undefined8 *)(puVar5 + 0x10);
      uStack_98 = *(ulong *)(puVar5 + 6);
      local_a0 = *(long *)(puVar5 + 4);
      uVar18 = puVar3[-4];
      uVar7 = puVar3[-5];
      uVar20 = puVar3[-2];
      uVar19 = puVar3[-3];
      uVar22 = puVar3[-8];
      uVar21 = puVar3[-9];
      uVar24 = puVar3[-6];
      uVar23 = puVar3[-7];
      *(undefined8 *)(puVar5 + 0x10) = puVar3[-1];
      *(undefined8 *)(puVar5 + 10) = uVar18;
      *(undefined8 *)(puVar5 + 8) = uVar7;
      *(undefined8 *)(puVar5 + 0xe) = uVar20;
      *(undefined8 *)(puVar5 + 0xc) = uVar19;
      *(undefined8 *)(puVar5 + 2) = uVar22;
      *(undefined8 *)puVar5 = uVar21;
      *(undefined8 *)(puVar5 + 6) = uVar24;
      *(undefined8 *)(puVar5 + 4) = uVar23;
      if ((local_b0 != 0) && (uVar12 == uStack_a8)) {
        local_b0 = 1;
        uStack_a8 = uVar14;
      }
      if ((local_a0 != 0) && (uVar12 == uStack_98)) {
        local_a0 = 1;
        uStack_98 = uVar14;
      }
      uVar13 = uStack_98;
      if (uVar12 != uVar14) {
        uVar9 = uVar14;
        if (uVar12 <= uVar14) {
LAB_00763d80:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check(uVar9,uVar12,local_128);
        }
        uVar1 = *(ulong *)(puVar5 + 4);
        uVar2 = *(ulong *)(puVar5 + 6);
        uVar9 = *(ulong *)(puVar5 + 2);
        if ((*puVar5 & 1) == 0) {
          if (uVar15 <= uVar9) {
            local_128 = &PTR_s__root__cargo_registry_src_index__00ad8160;
            uVar12 = uVar15;
            goto LAB_00763d80;
          }
          plVar6 = (long *)(lVar16 + uVar9 * 0x68);
          if (*plVar6 != 1) {
            ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad8178;
            goto LAB_00763cc4;
          }
          plVar6[1] = uVar14;
        }
        else {
          if (uVar12 <= uVar9) {
            local_128 = &PTR_s__root__cargo_registry_src_index__00ad8190;
            goto LAB_00763d80;
          }
          lVar11 = lVar17 + uVar9 * 0x48;
          *(undefined8 *)(lVar11 + 0x10) = 1;
          *(ulong *)(lVar11 + 0x18) = uVar14;
        }
        uVar9 = uVar2;
        if ((uVar1 & 1) == 0) {
          if (uVar15 <= uVar2) {
            local_128 = &PTR_s__root__cargo_registry_src_index__00ad81a8;
            uVar12 = uVar15;
            goto LAB_00763d80;
          }
          plVar6 = (long *)(lVar16 + uVar2 * 0x68);
          if (*plVar6 != 1) {
            ppuVar4 = &PTR_s__root__cargo_registry_src_index__00ad81c0;
LAB_00763cc4:
                    /* try { // try from 00763cc4 to 00763d93 has its CatchHandler @ 00763de4 */
                    /* WARNING: Subroutine does not return */
            core::option::unwrap_failed(ppuVar4);
          }
          plVar6[2] = uVar14;
        }
        else {
          if (uVar12 <= uVar2) {
            local_128 = &PTR_s__root__cargo_registry_src_index__00ad81d8;
            goto LAB_00763d80;
          }
          puVar10 = (undefined8 *)(lVar17 + uVar2 * 0x48);
          *puVar10 = 1;
          puVar10[1] = uVar14;
        }
      }
      uStack_c8 = uStack_78;
      local_c0 = local_70;
      if (local_a0 != 1) {
                    /* try { // try from 00763c34 to 00763cab has its CatchHandler @ 00763e08 */
        (**(code **)(local_90 + 0x20))(&uStack_c8,uStack_88,local_80);
        goto LAB_00763c48;
      }
                    /* try { // try from 00763c04 to 00763c0f has its CatchHandler @ 00763ddc */
      (**(code **)(local_90 + 0x20))(&uStack_c8,uStack_88,local_80);
      uVar14 = uVar13;
      puVar3 = puVar3 + -9;
    } while (uVar13 < uVar12);
  }
  local_120 = &PTR_s__root__cargo_registry_src_index__00ad8058;
  uVar15 = uVar12;
LAB_00763da8:
                    /* try { // try from 00763da8 to 00763dd7 has its CatchHandler @ 00763e08 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(uVar13,uVar15,local_120);
}


// ===== 00763e2c  FUN_00763e2c =====

undefined8 FUN_00763e2c(long *param_1)

{
  long lVar1;
  short *psVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  short sVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  short sVar19;
  
  uVar8 = param_1[5];
  uVar16 = param_1[10];
  if (*param_1 != 1) {
    if (uVar8 != uVar16 - (uVar16 >> 2)) {
      return 0;
    }
    if (uVar8 == 0) {
      *(undefined2 *)(param_1 + 0xb) = 7;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar7 = (undefined8 *)FUN_004b25a4(0x20,2);
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(2,0x20);
      }
      puVar7[1] = 0xffff0000ffff;
      *puVar7 = 0xffff0000ffff;
      puVar7[3] = 0xffff0000ffff;
      puVar7[2] = 0xffff0000ffff;
      if (uVar16 != 0) {
        free((void *)param_1[9]);
      }
      param_1[9] = (long)puVar7;
      param_1[10] = 8;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      lVar9 = FUN_004b25a4(0x270,8);
      if (lVar9 != 0) {
                    /* try { // try from 00763f58 to 00763f63 has its CatchHandler @ 00764148 */
        FUN_00766164(param_1 + 3);
        if (param_1[3] != 0) {
          free((void *)param_1[4]);
        }
        param_1[5] = 0;
        param_1[3] = 6;
        param_1[4] = lVar9;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(8,0x270);
    }
    uVar8 = FUN_007642a4(param_1,uVar16 << 1);
joined_r0x00763edc:
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if ((float)uVar8 / (float)uVar16 < 0.2 == NAN((float)uVar8 / (float)uVar16)) {
    *param_1 = 0;
    uVar8 = FUN_007642a4(param_1,uVar16 << 1);
    goto joined_r0x00763edc;
  }
  <http::header::map::[12]::http::header::map::Danger>::set_red(param_1);
  lVar9 = param_1[10];
  if (lVar9 == 0) goto LAB_00763ffc;
  puVar10 = (undefined4 *)param_1[9];
  uVar8 = lVar9 * 4 - 4;
  puVar13 = puVar10;
  if (0xb < uVar8) {
    uVar16 = (uVar8 >> 2) + 1;
    if (uVar8 < 0x3c) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar16 & 0x7ffffffffffffff0;
      uVar8 = uVar16 & 0x7ffffffffffffff0;
      puVar7 = (undefined8 *)(puVar10 + 8);
      do {
        uVar8 = uVar8 - 0x10;
        puVar7[-3] = 0xffff0000ffff;
        puVar7[-4] = 0xffff0000ffff;
        puVar7[-1] = 0xffff0000ffff;
        puVar7[-2] = 0xffff0000ffff;
        puVar7[1] = 0xffff0000ffff;
        *puVar7 = 0xffff0000ffff;
        puVar7[3] = 0xffff0000ffff;
        puVar7[2] = 0xffff0000ffff;
        puVar7 = puVar7 + 8;
      } while (uVar8 != 0);
      if (uVar16 == uVar11) goto LAB_00763ffc;
      if ((uVar16 & 0xc) == 0) {
        puVar13 = puVar10 + uVar11;
        goto LAB_00763fe8;
      }
    }
    uVar8 = uVar16 & 0x7ffffffffffffffc;
    puVar13 = puVar10 + uVar8;
    lVar12 = uVar11 - uVar8;
    puVar7 = (undefined8 *)(puVar10 + uVar11);
    do {
      lVar12 = lVar12 + 4;
      puVar7[1] = 0xffff0000ffff;
      *puVar7 = 0xffff0000ffff;
      puVar7 = puVar7 + 2;
    } while (lVar12 != 0);
    if (uVar16 == uVar8) goto LAB_00763ffc;
  }
LAB_00763fe8:
  do {
    puVar14 = puVar13 + 1;
    *puVar13 = 0xffff;
    puVar13 = puVar14;
  } while (puVar14 != puVar10 + lVar9);
LAB_00763ffc:
  lVar9 = param_1[5];
  if (lVar9 == 0) {
    return 0;
  }
  lVar17 = param_1[4];
  uVar3 = *(ushort *)(param_1 + 0xb);
  lVar12 = param_1[9];
  uVar8 = param_1[10];
  lVar18 = lVar17;
  sVar15 = 0;
  do {
    lVar1 = lVar18 + 0x68;
    uVar6 = FUN_00763070(param_1,lVar18 + 0x40);
    uVar16 = 0;
    uVar11 = (ulong)(uVar6 & uVar3);
    *(ushort *)(lVar18 + 0x60) = uVar6;
    while( true ) {
      if ((uVar8 <= uVar11) && (uVar11 = 0, uVar8 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar2 = (short *)(lVar12 + uVar11 * 4);
      if (*psVar2 == -1) {
        *psVar2 = sVar15;
        *(ushort *)(lVar12 + uVar11 * 4 + 2) = uVar6;
        goto joined_r0x007640fc;
      }
      sVar19 = sVar15;
      if (((ulong)((int)uVar11 - (uint)(psVar2[1] & uVar3)) & (ulong)uVar3) < uVar16) break;
      uVar16 = uVar16 + 1;
      uVar11 = uVar11 + 1;
    }
    while( true ) {
      if ((uVar8 <= uVar11) && (uVar11 = 0, uVar8 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      psVar2 = (short *)(lVar12 + uVar11 * 4);
      sVar5 = *psVar2;
      if (sVar5 == -1) break;
      uVar4 = psVar2[1];
      *psVar2 = sVar19;
      uVar11 = uVar11 + 1;
      psVar2[1] = uVar6;
      sVar19 = sVar5;
      uVar6 = uVar4;
    }
    *psVar2 = sVar19;
    *(ushort *)(lVar12 + uVar11 * 4 + 2) = uVar6;
joined_r0x007640fc:
    lVar18 = lVar1;
    sVar15 = sVar15 + 1;
    if (lVar1 == lVar17 + lVar9 * 0x68) {
      return 0;
    }
  } while( true );
}


// ===== 0076417c  FUN_0076417c =====

bool FUN_0076417c(long param_1,undefined2 param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined6 uStack_36;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 >> 0xf == 0) {
    lVar6 = param_3[1];
    lVar4 = *param_3;
    lVar9 = param_3[3];
    lVar8 = param_3[2];
    lVar1 = param_4[4];
    lVar11 = param_4[1];
    lVar10 = *param_4;
    lVar7 = param_4[3];
    lVar5 = param_4[2];
    if (uVar3 == *(ulong *)(param_1 + 0x18)) {
                    /* try { // try from 00764204 to 00764207 has its CatchHandler @ 00764268 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one();
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 0x68);
    puVar2[3] = lVar10;
    puVar2[2] = uStack_88;
    puVar2[5] = lVar5;
    puVar2[4] = lVar11;
    puVar2[1] = uStack_90;
    *puVar2 = 0;
    puVar2[0xc] = CONCAT62(uStack_36,param_2);
    puVar2[9] = lVar6;
    puVar2[8] = lVar4;
    puVar2[0xb] = lVar9;
    puVar2[10] = lVar8;
    puVar2[7] = lVar1;
    puVar2[6] = lVar7;
    *(ulong *)(param_1 + 0x28) = uVar3 + 1;
  }
  else {
                    /* try { // try from 007641ac to 007641b3 has its CatchHandler @ 0076427c */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}


// ===== 007642a4  FUN_007642a4 =====

bool FUN_007642a4(long param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong uVar10;
  short *psVar11;
  undefined8 *puVar12;
  short *__ptr;
  ulong uVar13;
  ulong uVar14;
  long local_58;
  undefined8 local_50;
  long lStack_48;
  
  if (0x8000 < param_2) goto LAB_00764470;
  __ptr = *(short **)(param_1 + 0x48);
  uVar13 = *(ulong *)(param_1 + 0x50);
  uVar14 = 0;
  if (uVar13 == 0) {
LAB_00764314:
    if (param_2 != 0) goto LAB_00764318;
LAB_00764364:
    puVar3 = (undefined4 *)0x2;
  }
  else {
    lVar4 = uVar13 << 2;
    puVar8 = (ushort *)(__ptr + 1);
    do {
      if ((puVar8[-1] != 0xffff) &&
         (((int)uVar14 - (uint)(*puVar8 & *(ushort *)(param_1 + 0x58)) &
          (uint)*(ushort *)(param_1 + 0x58)) == 0)) goto LAB_00764314;
      lVar4 = lVar4 + -4;
      puVar8 = puVar8 + 2;
      uVar14 = uVar14 + 1;
    } while (lVar4 != 0);
    uVar14 = 0;
    if (param_2 == 0) goto LAB_00764364;
LAB_00764318:
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar3 = (undefined4 *)FUN_004b25a4(param_2 << 2,2);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(2,param_2 << 2);
    }
    uVar13 = param_2 - 1;
    puVar6 = puVar3;
    if (uVar13 != 0) {
      if (param_2 < 0x11) {
        uVar9 = 1;
      }
      else {
        uVar10 = uVar13 & 0xfffffffffffffff0;
        puVar6 = puVar3 + uVar10;
        uVar9 = uVar10 | 1;
        uVar7 = uVar13 & 0xfffffffffffffff0;
        puVar12 = (undefined8 *)(puVar3 + 8);
        do {
          uVar7 = uVar7 - 0x10;
          puVar12[-3] = 0xffff0000ffff;
          puVar12[-4] = 0xffff0000ffff;
          puVar12[-1] = 0xffff0000ffff;
          puVar12[-2] = 0xffff0000ffff;
          puVar12[1] = 0xffff0000ffff;
          *puVar12 = 0xffff0000ffff;
          puVar12[3] = 0xffff0000ffff;
          puVar12[2] = 0xffff0000ffff;
          puVar12 = puVar12 + 8;
        } while (uVar7 != 0);
        if (uVar13 == uVar10) goto LAB_007643b0;
      }
      lVar4 = param_2 - uVar9;
      puVar5 = puVar6;
      do {
        lVar4 = lVar4 + -1;
        puVar6 = puVar5 + 1;
        *puVar5 = 0xffff;
        puVar5 = puVar6;
      } while (lVar4 != 0);
    }
LAB_007643b0:
    __ptr = *(short **)(param_1 + 0x48);
    uVar13 = *(ulong *)(param_1 + 0x50);
    *puVar6 = 0xffff;
  }
  uVar2 = (int)param_2 - 1;
  *(undefined4 **)(param_1 + 0x48) = puVar3;
  *(ulong *)(param_1 + 0x50) = param_2;
  *(short *)(param_1 + 0x58) = (short)uVar2;
  if (uVar13 < uVar14) {
                    /* try { // try from 00764534 to 00764557 has its CatchHandler @ 00764570 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar14,uVar13,uVar13,&PTR_s__root__cargo_registry_src_index__00ad8270);
  }
  if (uVar14 != uVar13) {
    psVar11 = __ptr + uVar14 * 2;
    do {
      if (*psVar11 != -1) {
        uVar1 = psVar11[1];
        uVar7 = (ulong)(uVar1 & uVar2);
        while( true ) {
          do {
            uVar9 = uVar7;
            uVar7 = 0;
          } while (param_2 <= uVar9);
          if (*(short *)(puVar3 + uVar9) == -1) break;
          uVar7 = uVar9 + 1;
        }
        *(short *)(puVar3 + uVar9) = *psVar11;
        *(ushort *)((long)(puVar3 + uVar9) + 2) = uVar1;
      }
      psVar11 = psVar11 + 2;
    } while (psVar11 != __ptr + uVar13 * 2);
  }
  psVar11 = __ptr;
  if (uVar14 != 0) {
    do {
      if (*psVar11 != -1) {
        uVar1 = psVar11[1];
        uVar7 = (ulong)(uVar1 & uVar2);
        while( true ) {
          do {
            uVar9 = uVar7;
            uVar7 = 0;
          } while (param_2 <= uVar9);
          if (*(short *)(puVar3 + uVar9) == -1) break;
          uVar7 = uVar9 + 1;
        }
        *(short *)(puVar3 + uVar9) = *psVar11;
        *(ushort *)((long)(puVar3 + uVar9) + 2) = uVar1;
      }
      psVar11 = psVar11 + 2;
    } while (psVar11 != __ptr + uVar14 * 2);
  }
  uVar14 = *(ulong *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar7 = param_2 - (uVar14 + (param_2 >> 2));
  if (lVar4 - uVar14 < uVar7) {
    if (CARRY8(uVar7,uVar14)) {
      local_50 = 0;
      lStack_48 = lVar4;
LAB_00764554:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(local_50,lStack_48);
    }
    FUN_00730a04(&local_58,lVar4,*(undefined8 *)(param_1 + 0x20),uVar7 + uVar14,8,0x68);
    if (local_58 == 1) goto LAB_00764554;
    *(ulong *)(param_1 + 0x18) = uVar7 + uVar14;
    *(undefined8 *)(param_1 + 0x20) = local_50;
  }
  if (uVar13 != 0) {
    free(__ptr);
  }
LAB_00764470:
  return 0x8000 < param_2;
}


// ===== 00764590  FUN_00764590 =====

void FUN_00764590(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  void *__dest;
  ulong __n;
  void *__src;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar3 = param_2[10];
  __n = uVar3 * 4;
  if (uVar3 >> 0x3e != 0 || 0x7ffffffffffffffe < __n) {
    uVar2 = 0;
LAB_007645cc:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar2,__n);
  }
  uVar1 = *(undefined2 *)(param_2 + 0xb);
  if (__n == 0) {
    __dest = (void *)0x2;
  }
  else {
    __src = (void *)param_2[9];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar2 = 2;
    __dest = (void *)FUN_004b25a4(__n,2);
    if (__dest == (void *)0x0) goto LAB_007645cc;
    if (uVar3 != 0) {
      memcpy(__dest,__src,__n);
    }
  }
                    /* try { // try from 00764624 to 0076462f has its CatchHandler @ 007646a4 */
  FUN_00765eac(&local_80,param_2 + 3);
                    /* try { // try from 00764630 to 0076463b has its CatchHandler @ 00764690 */
  FUN_00765d80(&local_68,param_2 + 6);
  *(undefined2 *)(param_1 + 0xb) = uVar1;
  param_1[9] = __dest;
  param_1[10] = uVar3;
  param_1[4] = uStack_78;
  param_1[3] = local_80;
  param_1[5] = local_70;
  param_1[7] = uStack_60;
  param_1[6] = local_68;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  param_1[8] = local_58;
  uVar2 = param_2[2];
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar2;
  return;
}


// ===== 007646c4  FUN_007646c4 =====

void FUN_007646c4(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *__ptr;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong local_78;
  undefined8 *puStack_70;
  ulong local_68;
  
  uVar5 = param_2[7];
  if (uVar5 != 0) {
    lVar9 = param_2[3];
    uVar13 = param_2[4];
    if (uVar13 == 0) {
      puVar12 = (undefined8 *)param_2[5];
      do {
        puVar4 = puVar12 + 1;
        lVar9 = lVar9 + -0x40;
        uVar13 = NEON_cmge(*puVar12,0,1);
        uVar13 = uVar13 & 0x8080808080808080;
        puVar12 = puVar4;
      } while (uVar13 == 0);
      param_2[5] = (long)puVar4;
      param_2[3] = lVar9;
    }
    uVar1 = uVar5;
    if (uVar5 < 5) {
      uVar1 = 4;
    }
    uVar10 = uVar13 - 1 & uVar13;
    uVar8 = uVar1 * 8;
    uVar7 = 0;
    lVar6 = uVar5 - 1;
    param_2[4] = uVar10;
    param_2[7] = lVar6;
    if ((uVar5 >> 0x3d == 0) && (uVar8 < 0x7ffffffffffffff9)) {
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar11 = *(undefined8 *)((lVar9 - (LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) & 0x78U)) + -8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar7 = 8;
      puStack_70 = (undefined8 *)FUN_004b25a4(uVar8,8);
      if (puStack_70 != (undefined8 *)0x0) {
        lVar2 = *param_2;
        lVar3 = param_2[1];
        __ptr = (void *)param_2[2];
        *puStack_70 = uVar11;
        local_68 = 1;
        local_78 = uVar1;
        if (lVar6 != 0) {
          puVar12 = (undefined8 *)param_2[5];
          puVar4 = puStack_70;
          do {
            for (; uVar5 = local_68, uVar10 == 0; uVar10 = uVar10 & 0x8080808080808080) {
              lVar9 = lVar9 + -0x40;
              uVar10 = NEON_cmge(*puVar12,0,1);
              puVar12 = puVar12 + 1;
            }
            uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
            uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
            uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
            uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
            uVar7 = *(undefined8 *)
                     ((lVar9 - (LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) & 0x78U)) + -8);
            if (local_68 == local_78) {
                    /* try { // try from 0076480c to 00764823 has its CatchHandler @ 007648c0 */
              FUN_0072eae4(&local_78,local_68,lVar6,8,8);
              puVar4 = puStack_70;
            }
            lVar6 = lVar6 + -1;
            puVar4[uVar5] = uVar7;
            local_68 = uVar5 + 1;
            uVar10 = uVar10 - 1 & uVar10;
          } while (lVar6 != 0);
        }
        if ((lVar2 != 0) && (lVar3 != 0)) {
          free(__ptr);
        }
        param_1[1] = (ulong)puStack_70;
        *param_1 = local_78;
        param_1[2] = local_68;
        return;
      }
    }
                    /* try { // try from 00764868 to 00764873 has its CatchHandler @ 007648fc */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar7,uVar8);
  }
  lVar9 = *param_2;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  if ((lVar9 != 0) && (param_2[1] != 0)) {
    free((void *)param_2[2]);
    return;
  }
  return;
}


// ===== 00764910  FUN_00764910 =====

void FUN_00764910(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong local_158;
  undefined8 *puStack_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar4 = *param_2;
  lVar1 = param_2[1];
  uVar3 = lVar1 - lVar4;
  uVar8 = uVar3 / 0xb8;
  lVar2 = uVar8 * 0xe0;
  if (0x69249249249248f0 < uVar3) {
    uVar6 = 0;
LAB_00764978:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,lVar2);
  }
  if (lVar2 == 0) {
    local_158 = 0;
    puStack_150 = (undefined8 *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 8;
    puStack_150 = (undefined8 *)FUN_004b25a4(lVar2,8);
    local_158 = uVar8;
    if (puStack_150 == (undefined8 *)0x0) goto LAB_00764978;
  }
  if (lVar4 == lVar1) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)param_2[2];
    uVar3 = 0;
    puVar5 = puStack_150;
    do {
                    /* try { // try from 007649cc to 007649d7 has its CatchHandler @ 00764a68 */
      <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::
      from_server(&local_140,*puVar7,lVar4);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0xb8;
      puVar5[0x15] = uStack_98;
      puVar5[0x14] = local_a0;
      puVar5[0x17] = uStack_88;
      puVar5[0x16] = uStack_90;
      puVar5[0x19] = uStack_78;
      puVar5[0x18] = local_80;
      puVar5[0x1b] = uStack_68;
      puVar5[0x1a] = uStack_70;
      puVar5[0xd] = uStack_d8;
      puVar5[0xc] = local_e0;
      puVar5[0xf] = uStack_c8;
      puVar5[0xe] = local_d0;
      puVar5[0x11] = uStack_b8;
      puVar5[0x10] = local_c0;
      puVar5[0x13] = uStack_a8;
      puVar5[0x12] = uStack_b0;
      puVar5[5] = uStack_118;
      puVar5[4] = local_120;
      puVar5[7] = uStack_108;
      puVar5[6] = uStack_110;
      puVar5[9] = uStack_f8;
      puVar5[8] = local_100;
      puVar5[0xb] = uStack_e8;
      puVar5[10] = uStack_f0;
      puVar5[1] = uStack_138;
      *puVar5 = local_140;
      puVar5[3] = uStack_128;
      puVar5[2] = uStack_130;
      puVar5 = puVar5 + 0x1c;
    } while (uVar8 != uVar3);
  }
  param_1[1] = (ulong)puStack_150;
  *param_1 = local_158;
  param_1[2] = uVar8;
  return;
}


// ===== 00764a80  FUN_00764a80 =====

void FUN_00764a80(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_158;
  undefined8 *puStack_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *param_2;
  lVar6 = param_2[1];
  uVar2 = lVar6 - lVar3;
  uVar7 = uVar2 / 0xb8;
  lVar1 = uVar7 * 0xe0;
  if (0x69249249249248f0 < uVar2) {
    uVar5 = 0;
LAB_00764ae8:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar5,lVar1);
  }
  if (lVar1 == 0) {
    local_158 = 0;
    puStack_150 = (undefined8 *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar5 = 8;
    puStack_150 = (undefined8 *)FUN_004b25a4(lVar1,8);
    local_158 = uVar7;
    if (puStack_150 == (undefined8 *)0x0) goto LAB_00764ae8;
  }
  if (lVar3 == lVar6) {
    uVar7 = 0;
  }
  else {
    lVar6 = param_2[2];
    uVar2 = 0;
    puVar4 = puStack_150;
    do {
                    /* try { // try from 00764b3c to 00764b47 has its CatchHandler @ 00764bd8 */
      <libdiscore_common::stores::guild_role::libdiscore_common::stores::guild_role::GuildRole>::
      from_server(&local_140,*(undefined8 *)(lVar6 + 0x240),lVar3);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0xb8;
      puVar4[0x15] = uStack_98;
      puVar4[0x14] = local_a0;
      puVar4[0x17] = uStack_88;
      puVar4[0x16] = uStack_90;
      puVar4[0x19] = uStack_78;
      puVar4[0x18] = local_80;
      puVar4[0x1b] = uStack_68;
      puVar4[0x1a] = uStack_70;
      puVar4[0xd] = uStack_d8;
      puVar4[0xc] = local_e0;
      puVar4[0xf] = uStack_c8;
      puVar4[0xe] = local_d0;
      puVar4[0x11] = uStack_b8;
      puVar4[0x10] = local_c0;
      puVar4[0x13] = uStack_a8;
      puVar4[0x12] = uStack_b0;
      puVar4[5] = uStack_118;
      puVar4[4] = local_120;
      puVar4[7] = uStack_108;
      puVar4[6] = uStack_110;
      puVar4[9] = uStack_f8;
      puVar4[8] = local_100;
      puVar4[0xb] = uStack_e8;
      puVar4[10] = uStack_f0;
      puVar4[1] = uStack_138;
      *puVar4 = local_140;
      puVar4[3] = uStack_128;
      puVar4[2] = uStack_130;
      puVar4 = puVar4 + 0x1c;
    } while (uVar7 != uVar2);
  }
  param_1[1] = (ulong)puStack_150;
  *param_1 = local_158;
  param_1[2] = uVar7;
  return;
}


// ===== 00764bf0  FUN_00764bf0 =====

void FUN_00764bf0(ulong *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_240;
  long *plStack_238;
  ulong local_230;
  long local_228;
  long lStack_220;
  long local_218;
  long lStack_210;
  long local_208;
  long lStack_200;
  long local_1f8;
  long lStack_1f0;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long local_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  uVar5 = param_2[4];
  if (uVar5 != 0) {
    lVar8 = *param_2;
    uVar11 = param_2[1];
    if (uVar11 == 0) {
      puVar9 = (undefined8 *)param_2[2];
      do {
        puVar7 = puVar9 + 1;
        lVar8 = lVar8 + -0x600;
        uVar11 = NEON_cmge(*puVar9,0,1);
        uVar11 = uVar11 & 0x8080808080808080;
        puVar9 = puVar7;
      } while (uVar11 == 0);
      param_2[2] = (long)puVar7;
      *param_2 = lVar8;
    }
    uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    puVar9 = (undefined8 *)param_2[5];
    lVar4 = uVar5 - 1;
    uVar2 = *puVar9;
    uVar11 = uVar11 - 1 & uVar11;
    param_2[1] = uVar11;
    param_2[4] = lVar4;
    <libdiscore_common::actions::guilds::[1]::libdiscore_common::actions::guilds::SerializedRole>::
    into_role(&local_228,
              lVar8 + (long)-(int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) * 0xc0 +
              -0xb8,uVar2);
    if (local_228 != 2) {
      uVar10 = uVar5;
      if (uVar5 < 5) {
        uVar10 = 4;
      }
      lVar1 = uVar10 * 0xe0;
      if (uVar5 < 0x92492492492493) {
        if (lVar1 == 0) {
          uVar10 = 0;
          plStack_238 = (long *)&DAT_00000008;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar2 = 8;
          plStack_238 = (long *)FUN_004b25a4(lVar1,8);
          if (plStack_238 == (long *)0x0) goto LAB_00764cf0;
        }
        local_230 = 1;
        plStack_238[0x15] = lStack_180;
        plStack_238[0x14] = local_188;
        plStack_238[0x17] = lStack_170;
        plStack_238[0x16] = lStack_178;
        plStack_238[0x19] = lStack_160;
        plStack_238[0x18] = local_168;
        plStack_238[0x1b] = lStack_150;
        plStack_238[0x1a] = lStack_158;
        plStack_238[0xd] = lStack_1c0;
        plStack_238[0xc] = local_1c8;
        plStack_238[0xf] = lStack_1b0;
        plStack_238[0xe] = local_1b8;
        plStack_238[5] = lStack_200;
        plStack_238[4] = local_208;
        plStack_238[7] = lStack_1f0;
        plStack_238[6] = local_1f8;
        plStack_238[0x11] = lStack_1a0;
        plStack_238[0x10] = local_1a8;
        plStack_238[0x13] = lStack_190;
        plStack_238[0x12] = lStack_198;
        plStack_238[9] = lStack_1e0;
        plStack_238[8] = local_1e8;
        plStack_238[0xb] = lStack_1d0;
        plStack_238[10] = local_1d8;
        plStack_238[1] = lStack_220;
        *plStack_238 = local_228;
        plStack_238[3] = lStack_210;
        plStack_238[2] = local_218;
        local_240 = uVar10;
        if (lVar4 != 0) {
          puVar7 = (undefined8 *)param_2[2];
          plVar6 = plStack_238;
          do {
            for (; uVar5 = local_230, uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
              lVar8 = lVar8 + -0x600;
              uVar11 = NEON_cmge(*puVar7,0,1);
              puVar7 = puVar7 + 1;
            }
            uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00764e24 to 00764e2b has its CatchHandler @ 00764e94 */
            <libdiscore_common::actions::guilds::[1]::libdiscore_common::actions::guilds::SerializedRole>
            ::into_role(&local_148,
                        lVar8 + (long)-(int)((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) *
                                0xc0 + -0xb8,*puVar9);
            if (local_148 == 2) break;
            if (uVar5 == local_240) {
                    /* try { // try from 00764e44 to 00764e5b has its CatchHandler @ 00764e78 */
              FUN_0072eae4(&local_240,uVar5,lVar4,8,0xe0);
              plVar6 = plStack_238;
            }
            plVar3 = plVar6 + uVar5 * 0x1c;
            lVar4 = lVar4 + -1;
            local_230 = uVar5 + 1;
            plVar3[1] = lStack_140;
            *plVar3 = local_148;
            plVar3[3] = lStack_130;
            plVar3[2] = lStack_138;
            plVar3[9] = lStack_100;
            plVar3[8] = local_108;
            plVar3[0xb] = lStack_f0;
            plVar3[10] = lStack_f8;
            plVar3[5] = lStack_120;
            plVar3[4] = local_128;
            plVar3[7] = lStack_110;
            plVar3[6] = lStack_118;
            plVar3[0x11] = lStack_c0;
            plVar3[0x10] = local_c8;
            plVar3[0x13] = lStack_b0;
            plVar3[0x12] = lStack_b8;
            plVar3[0xd] = lStack_e0;
            plVar3[0xc] = local_e8;
            plVar3[0xf] = lStack_d0;
            plVar3[0xe] = lStack_d8;
            plVar3[0x19] = lStack_80;
            plVar3[0x18] = local_88;
            plVar3[0x1b] = lStack_70;
            plVar3[0x1a] = lStack_78;
            plVar3[0x15] = lStack_a0;
            plVar3[0x14] = local_a8;
            plVar3[0x17] = lStack_90;
            plVar3[0x16] = lStack_98;
            uVar11 = uVar11 - 1 & uVar11;
          } while (lVar4 != 0);
        }
        param_1[1] = (ulong)plStack_238;
        *param_1 = local_240;
        param_1[2] = local_230;
        return;
      }
      uVar2 = 0;
LAB_00764cf0:
                    /* try { // try from 00764cf0 to 00764cfb has its CatchHandler @ 00764ea8 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar2,lVar1);
    }
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  return;
}


// ===== 00764ebc  FUN_00764ebc =====

void FUN_00764ebc(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong local_c0;
  undefined8 *puStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar3 = *param_2;
  lVar1 = param_2[1];
  uVar2 = lVar1 - lVar3;
  uVar8 = uVar2 / 0x50;
  lVar5 = uVar8 * 0x58;
  if (0x745d1745d1745d10 < uVar2) {
    uVar7 = 0;
LAB_00764f14:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar7,lVar5);
  }
  if (lVar5 == 0) {
    local_c0 = 0;
    puStack_b8 = (undefined8 *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar7 = 8;
    puStack_b8 = (undefined8 *)FUN_004b25a4(lVar5,8);
    local_c0 = uVar8;
    if (puStack_b8 == (undefined8 *)0x0) goto LAB_00764f14;
  }
  if (lVar3 == lVar1) {
    uVar8 = 0;
  }
  else {
    puVar6 = (undefined8 *)param_2[2];
    uVar2 = 0;
    puVar4 = puStack_b8;
    do {
                    /* try { // try from 00764f64 to 00764f6f has its CatchHandler @ 00764fec */
      FUN_0072f820(&local_a8,*puVar6,lVar3);
      uVar2 = uVar2 + 1;
      puVar4[5] = uStack_80;
      puVar4[4] = local_88;
      puVar4[7] = uStack_70;
      puVar4[6] = local_78;
      lVar3 = lVar3 + 0x50;
      puVar4[9] = uStack_60;
      puVar4[8] = local_68;
      puVar4[10] = local_58;
      puVar4[1] = uStack_a0;
      *puVar4 = local_a8;
      puVar4[3] = uStack_90;
      puVar4[2] = local_98;
      puVar4 = puVar4 + 0xb;
    } while (uVar8 != uVar2);
  }
  param_1[1] = (ulong)puStack_b8;
  *param_1 = local_c0;
  param_1[2] = uVar8;
  return;
}


// ===== 00765004  FUN_00765004 =====

void FUN_00765004(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_c0;
  undefined8 *puStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar2 = *param_2;
  lVar5 = param_2[1];
  uVar1 = lVar5 - lVar2;
  uVar7 = uVar1 / 0x50;
  lVar4 = uVar7 * 0x58;
  if (0x745d1745d1745d10 < uVar1) {
    uVar6 = 0;
LAB_0076505c:
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,lVar4);
  }
  if (lVar4 == 0) {
    local_c0 = 0;
    puStack_b8 = (undefined8 *)&DAT_00000008;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    uVar6 = 8;
    puStack_b8 = (undefined8 *)FUN_004b25a4(lVar4,8);
    local_c0 = uVar7;
    if (puStack_b8 == (undefined8 *)0x0) goto LAB_0076505c;
  }
  if (lVar2 == lVar5) {
    uVar7 = 0;
  }
  else {
    lVar5 = param_2[2];
    uVar1 = 0;
    puVar3 = puStack_b8;
    do {
                    /* try { // try from 007650ac to 007650b7 has its CatchHandler @ 00765134 */
      FUN_0072f820(&local_a8,*(undefined8 *)(lVar5 + 0x18),lVar2);
      uVar1 = uVar1 + 1;
      puVar3[5] = uStack_80;
      puVar3[4] = local_88;
      puVar3[7] = uStack_70;
      puVar3[6] = local_78;
      lVar2 = lVar2 + 0x50;
      puVar3[9] = uStack_60;
      puVar3[8] = local_68;
      puVar3[10] = local_58;
      puVar3[1] = uStack_a0;
      *puVar3 = local_a8;
      puVar3[3] = uStack_90;
      puVar3[2] = local_98;
      puVar3 = puVar3 + 0xb;
    } while (uVar7 != uVar1);
  }
  param_1[1] = (ulong)puStack_b8;
  *param_1 = local_c0;
  param_1[2] = uVar7;
  return;
}


// ===== 0076514c  FUN_0076514c =====

void FUN_0076514c(ulong *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *param_2;
  local_c8 = param_2[1] - lVar1;
  if (local_c8 < 0x7ffffffffffffff9) {
    if (param_2[1] == lVar1) {
      local_c8 = 0;
      puStack_c0 = (undefined8 *)&DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 8;
      puStack_c0 = (undefined8 *)FUN_004b25a4(local_c8,8);
      if (puStack_c0 == (undefined8 *)0x0) goto LAB_0076517c;
      puVar5 = (undefined8 *)param_2[2];
      uVar4 = 0;
      local_c8 = local_c8 / 0x70;
      puVar2 = puStack_c0;
      do {
                    /* try { // try from 007651dc to 007651e7 has its CatchHandler @ 00765254 */
        FUN_0072f9f4(&local_b0,*puVar5,lVar1);
        uVar4 = uVar4 + 1;
        lVar1 = lVar1 + 0x70;
        puVar2[7] = uStack_78;
        puVar2[6] = local_80;
        puVar2[9] = uStack_68;
        puVar2[8] = uStack_70;
        puVar2[0xb] = uStack_58;
        puVar2[10] = local_60;
        puVar2[0xd] = uStack_48;
        puVar2[0xc] = uStack_50;
        puVar2[1] = uStack_a8;
        *puVar2 = local_b0;
        puVar2[3] = uStack_98;
        puVar2[2] = local_a0;
        puVar2[5] = uStack_88;
        puVar2[4] = uStack_90;
        puVar2 = puVar2 + 0xe;
      } while (local_c8 != uVar4);
    }
    param_1[1] = (ulong)puStack_c0;
    *param_1 = local_c8;
    param_1[2] = local_c8;
    return;
  }
  uVar3 = 0;
LAB_0076517c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,local_c8);
}


// ===== 0076526c  FUN_0076526c =====

void FUN_0076526c(ulong *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *param_2;
  local_c8 = param_2[1] - lVar1;
  if (local_c8 < 0x7ffffffffffffff9) {
    if (param_2[1] == lVar1) {
      local_c8 = 0;
      puStack_c0 = (undefined8 *)&DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 8;
      puStack_c0 = (undefined8 *)FUN_004b25a4(local_c8,8);
      if (puStack_c0 == (undefined8 *)0x0) goto LAB_0076529c;
      lVar5 = param_2[2];
      uVar4 = 0;
      local_c8 = local_c8 / 0x70;
      puVar2 = puStack_c0;
      do {
                    /* try { // try from 007652fc to 00765307 has its CatchHandler @ 00765374 */
        FUN_0072f9f4(&local_b0,*(undefined8 *)(lVar5 + 0x18),lVar1);
        uVar4 = uVar4 + 1;
        lVar1 = lVar1 + 0x70;
        puVar2[7] = uStack_78;
        puVar2[6] = local_80;
        puVar2[9] = uStack_68;
        puVar2[8] = uStack_70;
        puVar2[0xb] = uStack_58;
        puVar2[10] = local_60;
        puVar2[0xd] = uStack_48;
        puVar2[0xc] = uStack_50;
        puVar2[1] = uStack_a8;
        *puVar2 = local_b0;
        puVar2[3] = uStack_98;
        puVar2[2] = local_a0;
        puVar2[5] = uStack_88;
        puVar2[4] = uStack_90;
        puVar2 = puVar2 + 0xe;
      } while (local_c8 != uVar4);
    }
    param_1[1] = (ulong)puStack_c0;
    *param_1 = local_c8;
    param_1[2] = local_c8;
    return;
  }
  uVar3 = 0;
LAB_0076529c:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,local_c8);
}


// ===== 0076538c  FUN_0076538c =====

void FUN_0076538c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 extraout_w1;
  undefined1 extraout_w1_00;
  long local_78;
  undefined1 *puStack_70;
  long local_68;
  undefined8 local_60;
  long lStack_58;
  long local_50;
  undefined8 uStack_48;
  int *local_40;
  undefined1 uStack_31;
  
  uVar2 = FUN_00752080(param_2,&uStack_31,param_2[4]);
  if ((uVar2 & 1) == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 1;
    return;
  }
  if (((*(int *)param_2[4] == -1) && (param_2[1] != 0)) && (param_2[2] == 0)) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_const::panic_const_div_by_zero
              (&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6080);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined1 *)FUN_004b25a4(8,1);
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,8);
  }
  lStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  local_50 = param_2[2];
  local_78 = 8;
  local_40 = (int *)param_2[4];
  *puVar3 = extraout_w1;
  local_68 = 1;
  puStack_70 = puVar3;
  do {
    lVar1 = local_68;
                    /* try { // try from 0076542c to 00765483 has its CatchHandler @ 00765500 */
    uVar2 = FUN_00752080(&local_60,&uStack_31,local_40);
    if ((uVar2 & 1) == 0) {
      param_1[1] = (long)puStack_70;
      *param_1 = local_78;
      param_1[2] = local_68;
      return;
    }
    if (lVar1 == local_78) {
      if (((*local_40 == -1) && (lStack_58 != 0)) && (local_50 == 0)) {
                    /* try { // try from 007654d0 to 007654db has its CatchHandler @ 007654f8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_const::panic_const_div_by_zero
                  (&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6080);
      }
      FUN_0072eae4(&local_78,lVar1,1,1,1);
      puVar3 = puStack_70;
    }
    puVar3[lVar1] = extraout_w1_00;
    local_68 = lVar1 + 1;
  } while( true );
}


// ===== 00765524  FUN_00765524 =====

void FUN_00765524(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,"SendError",9);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish_non_exhaustive(auStack_20);
  return;
}


// ===== 0076555c  FUN_0076555c =====

void FUN_0076555c(ulong *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar10 = param_1[3];
  if (uVar10 != 0) {
    puVar2 = (undefined8 *)param_1[1];
    uVar3 = param_1[2];
    uVar6 = *param_1;
    uVar1 = 0;
    if (uVar6 <= uVar3) {
      uVar1 = uVar6;
    }
    lVar7 = uVar3 - uVar1;
    uVar11 = uVar6 - lVar7;
    lVar8 = 0;
    if (uVar11 <= uVar10) {
      lVar8 = uVar10 - uVar11;
    }
    if (uVar10 <= uVar11) {
      uVar6 = lVar7 + uVar10;
    }
    lVar7 = uVar6 - lVar7;
    if (lVar7 != 0) {
      puVar4 = puVar2 + (uVar3 - uVar1);
      do {
        uVar9 = *puVar4;
                    /* try { // try from 00765620 to 00765633 has its CatchHandler @ 0076565c */
        iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(uVar9);
        if (iVar5 != 0) {
          <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(uVar9);
        }
        lVar7 = lVar7 + -1;
        puVar4 = puVar4 + 1;
      } while (lVar7 != 0);
    }
    if (uVar11 < uVar10) {
      do {
        uVar9 = *puVar2;
                    /* try { // try from 007655d0 to 007655e3 has its CatchHandler @ 00765638 */
        iVar5 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(uVar9);
        if (iVar5 != 0) {
          <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(uVar9);
        }
        lVar8 = lVar8 + -1;
        puVar2 = puVar2 + 1;
      } while (lVar8 != 0);
    }
  }
  return;
}


// ===== 00765698  FUN_00765698 =====

void FUN_00765698(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = param_1[3];
  if (uVar5 == 0) {
    lVar6 = 0;
    uVar3 = 0;
    lVar4 = 0;
  }
  else {
    uVar3 = *param_1;
    uVar2 = 0;
    if (uVar3 <= param_1[2]) {
      uVar2 = uVar3;
    }
    lVar4 = param_1[2] - uVar2;
    lVar6 = uVar5 - (uVar3 - lVar4);
    if (uVar5 < uVar3 - lVar4 || lVar6 == 0) {
      lVar6 = 0;
      uVar3 = lVar4 + uVar5;
    }
  }
  uVar5 = param_1[1];
  lVar7 = lVar4 << 5;
  lVar4 = (uVar3 - lVar4) + 1;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    plVar1 = (long *)(uVar5 + lVar7);
    lVar7 = lVar7 + 0x20;
                    /* try { // try from 00765718 to 0076571f has its CatchHandler @ 00765794 */
    (**(code **)(*plVar1 + 0x20))(plVar1 + 3,plVar1[1],plVar1[2]);
  }
  lVar6 = lVar6 + 1;
  lVar4 = uVar5 + 0x18;
  while (lVar6 = lVar6 + -1, lVar6 != 0) {
                    /* try { // try from 00765744 to 00765747 has its CatchHandler @ 00765764 */
    (**(code **)(*(long *)(lVar4 + -0x18) + 0x20))
              (lVar4,*(undefined8 *)(lVar4 + -0x10),*(undefined8 *)(lVar4 + -8));
    lVar4 = lVar4 + 0x20;
  }
  return;
}


// ===== 007657e8  FUN_007657e8 =====

void FUN_007657e8(ulong *param_1,uint *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = param_1[8];
  param_1[6] = param_1[6] + param_3;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar4 = param_3 & 0xfffffffffffffff8;
    param_3 = param_3 & 7;
    if (uVar4 != 0) goto LAB_00765920;
LAB_00765844:
    if (param_3 < 4) goto LAB_00765978;
LAB_0076584c:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_007659a4;
  }
  else {
    uVar3 = 8 - uVar4;
    uVar7 = uVar3;
    if (param_3 <= uVar3) {
      uVar7 = param_3;
    }
    if (uVar7 < 4) {
      uVar9 = 0;
      uVar6 = 0;
      if (1 < uVar7) goto LAB_00765878;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_00765878:
        puVar1 = (ushort *)((long)param_2 + uVar9);
        lVar11 = uVar9 << 3;
        uVar9 = uVar9 | 2;
        uVar6 = (ulong)*puVar1 << lVar11 | uVar6;
      }
    }
    if (uVar9 < uVar7) {
      uVar6 = (ulong)*(byte *)((long)param_2 + uVar9) << (uVar9 << 3) | uVar6;
    }
    uVar7 = param_1[7] | uVar6 << ((uVar4 & 7) << 3);
    param_1[7] = uVar7;
    if (param_3 < uVar3) {
      param_1[8] = uVar4 + param_3;
      return;
    }
    uVar6 = param_1[2];
    uVar9 = param_1[3] ^ uVar7;
    uVar4 = uVar6 + *param_1;
    uVar8 = uVar4 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
    uVar5 = param_1[1] + uVar9 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
    uVar6 = param_1[1] + uVar9 + uVar8;
    uVar4 = uVar5 + (uVar4 >> 0x20 | uVar4 << 0x20);
    param_1[2] = uVar6 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
    param_1[3] = uVar4 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
    *param_1 = uVar4 ^ uVar7;
    param_1[1] = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar4 = param_3 - uVar3 & 0xfffffffffffffff8;
    param_3 = param_3 - uVar3 & 7;
    if (uVar4 <= uVar3) goto LAB_00765844;
LAB_00765920:
    uVar6 = param_1[2];
    uVar9 = param_1[3];
    uVar7 = *param_1;
    uVar5 = param_1[1];
    do {
      puVar2 = (ulong *)((long)param_2 + uVar3);
      uVar7 = uVar7 + uVar6;
      uVar3 = uVar3 + 8;
      uVar6 = uVar7 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
      uVar9 = *puVar2 ^ uVar9;
      uVar8 = uVar9 + uVar5 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
      uVar9 = uVar9 + uVar5 + uVar6;
      uVar6 = uVar9 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
      uVar5 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar8 + (uVar7 >> 0x20 | uVar7 << 0x20);
      uVar9 = uVar7 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
      uVar7 = uVar7 ^ *puVar2;
    } while (uVar3 < uVar4);
    param_1[2] = uVar6;
    param_1[3] = uVar9;
    *param_1 = uVar7;
    param_1[1] = uVar5;
    if (3 < param_3) goto LAB_0076584c;
LAB_00765978:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_007659a4;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_007659a4:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 007659d0  FUN_007659d0 =====

void FUN_007659d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  <libdiscore_common::core::http::native::StreamingBody_as_futures_core::stream::Stream>::poll_next
            (&local_48);
  if (local_48 == 0) {
    *param_1 = 0xfffffffffffffffd;
    return;
  }
  if (local_48 == 2) {
    *param_1 = 3;
    return;
  }
  if (local_40 != 0) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = local_40;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    param_1[4] = local_28;
    return;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = local_38;
    *param_1 = 0xfffffffffffffffe;
    param_1[1] = puVar1;
    param_1[2] = &PTR_FUN_00ad7538;
    return;
  }
                    /* try { // try from 00765aac to 00765ab7 has its CatchHandler @ 00765abc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,8);
}


// ===== 00765ad4  FUN_00765ad4 =====

bool FUN_00765ad4(long param_1)

{
  return *(ulong *)(param_1 + 0x40) <= *(ulong *)(param_1 + 0x50);
}


// ===== 00765ae8  FUN_00765ae8 =====

void FUN_00765ae8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  lVar2 = *(long *)(param_2 + 0x50);
  *param_1 = 1;
  lVar1 = lVar1 - lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  return;
}


// ===== 00765b04  FUN_00765b04 =====

void FUN_00765b04(ulong *param_1,undefined8 *param_2)

{
  void *__dest;
  void *__src;
  ulong uVar1;
  ulong uVar2;
  ulong __n;
  ulong uVar3;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  
  __dest = (void *)*param_2;
  __src = (void *)param_2[1];
  if (__dest == __src) {
    uVar3 = param_2[2];
    uVar2 = ((ulong)(param_2[3] - (long)__dest) >> 4) * 0x6db6db6db6db6db7;
  }
  else {
    uVar3 = param_2[2];
    __n = (long)param_2[3] - (long)__src;
    uVar2 = (__n >> 4) * 0x6db6db6db6db6db7;
    if (uVar2 < uVar3 >> 1) {
      local_68 = 0;
      uStack_60 = 8;
      local_58 = 0;
      if ((void *)param_2[3] != __src) {
                    /* try { // try from 00765c00 to 00765c17 has its CatchHandler @ 00765c40 */
        FUN_0072eae4(&local_68,0,uVar2,8,0x70);
        uVar1 = local_58;
        memcpy((void *)(uStack_60 + local_58 * 0x70),__src,__n);
        uVar2 = uVar1 + uVar2;
      }
      local_58 = uVar2;
      if (uVar3 != 0) {
        free(__dest);
      }
      param_1[1] = uStack_60;
      *param_1 = local_68;
      param_1[2] = local_58;
      return;
    }
    memmove(__dest,__src,__n);
  }
  *param_1 = uVar3;
  param_1[1] = (ulong)__dest;
  param_1[2] = uVar2;
  return;
}


// ===== 00765c60  FUN_00765c60 =====

void FUN_00765c60(ulong *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *param_2;
  local_c8 = param_2[1] - lVar1;
  if (local_c8 < 0x7ffffffffffffff9) {
    if (param_2[1] == lVar1) {
      local_c8 = 0;
      puStack_c0 = (undefined8 *)&DAT_00000008;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 8;
      puStack_c0 = (undefined8 *)FUN_004b25a4(local_c8,8);
      if (puStack_c0 == (undefined8 *)0x0) goto LAB_00765c90;
      puVar5 = (undefined8 *)param_2[2];
      uVar4 = 0;
      local_c8 = local_c8 / 0x70;
      puVar2 = puStack_c0;
      do {
                    /* try { // try from 00765cf0 to 00765cfb has its CatchHandler @ 00765d68 */
        FUN_0072f9f4(&local_b0,*puVar5,lVar1);
        uVar4 = uVar4 + 1;
        lVar1 = lVar1 + 0x70;
        puVar2[7] = uStack_78;
        puVar2[6] = local_80;
        puVar2[9] = uStack_68;
        puVar2[8] = uStack_70;
        puVar2[0xb] = uStack_58;
        puVar2[10] = local_60;
        puVar2[0xd] = uStack_48;
        puVar2[0xc] = uStack_50;
        puVar2[1] = uStack_a8;
        *puVar2 = local_b0;
        puVar2[3] = uStack_98;
        puVar2[2] = local_a0;
        puVar2[5] = uStack_88;
        puVar2[4] = uStack_90;
        puVar2 = puVar2 + 0xe;
      } while (local_c8 != uVar4);
    }
    param_1[1] = (ulong)puStack_c0;
    *param_1 = local_c8;
    param_1[2] = local_c8;
    return;
  }
  uVar3 = 0;
LAB_00765c90:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,local_c8);
}


// ===== 00765d80  FUN_00765d80 =====

void FUN_00765d80(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  
  uVar5 = *(ulong *)(param_2 + 0x10);
  lVar2 = uVar5 * 0x48;
  if (uVar5 < 0x1c71c71c71c71c8) {
    if (lVar2 == 0) {
      local_a8 = 0;
      uStack_a0 = 8;
    }
    else {
      puVar6 = *(undefined8 **)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 8;
      uStack_a0 = FUN_004b25a4(lVar2,8);
      if (uStack_a0 == 0) goto LAB_00765dc0;
      local_a8 = uVar5;
      if (uVar5 != 0) {
        uVar4 = 0;
        puVar7 = (undefined8 *)(uStack_a0 + 0x20);
        do {
          if (lVar2 == 0) break;
                    /* try { // try from 00765e10 to 00765e1b has its CatchHandler @ 00765e90 */
          (**(code **)puVar6[4])(&local_68,puVar6 + 7,puVar6[5],puVar6[6]);
          local_48 = *(undefined1 *)(puVar6 + 8);
          puVar1 = puVar6 + 1;
          uVar3 = *puVar6;
          uVar9 = puVar6[3];
          uVar8 = puVar6[2];
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 9;
          lVar2 = lVar2 + -0x48;
          puVar7[-3] = *puVar1;
          puVar7[-4] = uVar3;
          puVar7[-1] = uVar9;
          puVar7[-2] = uVar8;
          puVar7[1] = uStack_60;
          *puVar7 = local_68;
          puVar7[3] = uStack_50;
          puVar7[2] = local_58;
          puVar7[4] = CONCAT71(uStack_47,local_48);
          puVar7 = puVar7 + 9;
        } while (uVar5 != uVar4);
      }
    }
    param_1[1] = uStack_a0;
    *param_1 = local_a8;
    param_1[2] = uVar5;
    return;
  }
  uVar3 = 0;
LAB_00765dc0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,lVar2);
}


// ===== 00765eac  FUN_00765eac =====

void FUN_00765eac(ulong *param_1,long param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  ulong local_118;
  ulong uStack_110;
  ulong local_e0;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  ulong local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined7 uStack_6f;
  
  uVar10 = *(ulong *)(param_2 + 0x10);
  lVar7 = uVar10 * 0x68;
  if (uVar10 < 0x13b13b13b13b13c) {
    if (lVar7 == 0) {
      local_118 = 0;
      uStack_110 = 8;
    }
    else {
      plVar11 = *(long **)(param_2 + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar8 = 8;
      uStack_110 = FUN_004b25a4(lVar7,8);
      if (uStack_110 == 0) goto LAB_00765ef0;
      local_118 = uVar10;
      if (uVar10 != 0) {
        lVar12 = 0;
        uVar9 = 0;
        plVar14 = plVar11;
        do {
          if (lVar7 - lVar12 == 0) break;
          lVar5 = plVar14[0xc];
          if ((undefined8 *)plVar14[8] == (undefined8 *)0x0) {
            uVar13 = 0;
            uVar2 = *(undefined1 *)((long)plVar11 + lVar12 + 0x48);
          }
          else {
                    /* try { // try from 00765fbc to 00765fc7 has its CatchHandler @ 00766078 */
            (**(code **)plVar14[8])
                      (&local_90,(long)plVar11 + lVar12 + 0x58,
                       *(undefined8 *)((long)plVar11 + lVar12 + 0x48),
                       *(undefined8 *)((long)plVar11 + lVar12 + 0x50));
            local_e0 = CONCAT17(uStack_80,uStack_87);
            uStack_d8 = uStack_7f;
            uStack_d1 = uStack_78;
            uStack_d0 = uStack_77;
            uVar13 = local_90;
            uVar2 = uStack_88;
          }
          uStack_a7 = (undefined7)local_e0;
          uStack_a0 = (undefined1)(local_e0 >> 0x38);
                    /* try { // try from 00766018 to 00766023 has its CatchHandler @ 00766080 */
          auVar15 = (**(code **)plVar14[3])(&local_90,plVar14 + 6,plVar14[4],plVar14[5]);
          lVar6 = *plVar14;
          local_70 = (undefined1)plVar14[7];
          if (lVar6 == 1) {
            auVar15 = *(undefined1 (*) [16])((long)plVar11 + lVar12 + 8);
          }
          uVar4 = CONCAT71(uStack_d0,uStack_d1);
          uVar3 = CONCAT71(uStack_d8,uStack_a0);
          puVar1 = (ulong *)(uStack_110 + lVar12);
          *(undefined1 (*) [16])(puVar1 + 1) = auVar15;
          uVar9 = uVar9 + 1;
          plVar14 = plVar14 + 0xd;
          lVar12 = lVar12 + 0x68;
          *puVar1 = (ulong)(lVar6 == 1);
          uStack_d8 = (undefined7)CONCAT71(uStack_87,uStack_88);
          uStack_d1 = (undefined1)((uint7)uStack_87 >> 0x30);
          local_e0 = local_90;
          uStack_d0 = (undefined7)CONCAT71(uStack_7f,uStack_80);
          puVar1[6] = CONCAT71(uStack_77,uStack_78);
          puVar1[5] = CONCAT71(uStack_7f,uStack_80);
          puVar1[4] = CONCAT71(uStack_87,uStack_88);
          puVar1[3] = local_90;
          puVar1[7] = CONCAT71(uStack_6f,local_70);
          puVar1[9] = CONCAT71(uStack_a7,uVar2);
          puVar1[8] = uVar13;
          puVar1[0xb] = uVar4;
          puVar1[10] = uVar3;
          *(short *)(puVar1 + 0xc) = (short)lVar5;
        } while (uVar10 != uVar9);
      }
    }
    param_1[1] = uStack_110;
    *param_1 = local_118;
    param_1[2] = uVar10;
    return;
  }
  uVar8 = 0;
LAB_00765ef0:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar8,lVar7);
}


// ===== 007660b8  FUN_007660b8 =====

void FUN_007660b8(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 8) + 0x18;
    do {
      __ptr = *(void **)(lVar4 + -0x18);
      puVar1 = *(undefined8 **)(lVar4 + -0x10);
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007660f4 to 007660fb has its CatchHandler @ 00766124 */
        (*pcVar2)(__ptr);
      }
      if (puVar1[1] != 0) {
        free(__ptr);
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 != 0);
  }
  return;
}


// ===== 00766164  FUN_00766164 =====

void FUN_00766164(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  for (lVar2 = *(long *)(param_1 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 007661b8 to 007661bf has its CatchHandler @ 007661d4 */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 00766194 to 0076619b has its CatchHandler @ 007661f4 */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x68;
  }
  return;
}


// ===== 00766220  FUN_00766220 =====

void FUN_00766220(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    lVar5 = 0;
    do {
      puVar3 = (ulong *)(lVar6 + lVar5 * 0xf0);
      lVar1 = 2;
      if (1 < *puVar3) {
        lVar1 = *puVar3 - 2;
      }
      if (lVar1 == 2) {
        FUN_0076276c(puVar3);
      }
      else if ((lVar1 == 1) && (uVar10 = puVar3[3], uVar10 != 0)) {
        uVar8 = puVar3[5];
        if (uVar8 != 0) {
          puVar7 = (undefined8 *)puVar3[2];
          puVar9 = puVar7 + 1;
          uVar11 = NEON_cmge(*puVar7,0,1);
          uVar11 = uVar11 & 0x8080808080808080;
          do {
            for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
              puVar7 = puVar7 + -0xe8;
              uVar11 = NEON_cmge(*puVar9,0,1);
              puVar9 = puVar9 + 1;
            }
            uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 00766300 to 00766303 has its CatchHandler @ 00766368 */
            FUN_00702244(puVar7 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                  0x1d + -0x1c);
            uVar8 = uVar8 - 1;
            uVar11 = uVar11 - 1 & uVar11;
          } while (uVar8 != 0);
        }
        if (uVar10 * 0xe9 != -0xf1) {
          free((void *)(puVar3[2] + uVar10 * -0xe8 + -0xe8));
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != lVar4);
  }
  return;
}


// ===== 00766394  FUN_00766394 =====

void FUN_00766394(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    lVar6 = 0;
    do {
      puVar8 = (ulong *)(lVar7 + lVar6 * 0x68);
      lVar4 = 2;
      if (1 < *puVar8) {
        lVar4 = *puVar8 - 2;
      }
      if (lVar4 == 2) {
        if (0x18 < (byte)puVar8[5]) {
          plVar3 = (long *)puVar8[6];
          do {
            lVar4 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (puVar8[2] != 0) {
          free((void *)puVar8[3]);
        }
      }
      else if (lVar4 == 1) {
                    /* try { // try from 00766404 to 0076640b has its CatchHandler @ 00766474 */
        FUN_007043b0(puVar8 + 2);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar5);
  }
  return;
}


// ===== 007664a0  FUN_007664a0 =====

void FUN_007664a0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar8 = *(long *)(param_1 + 8);
    lVar7 = 0;
    do {
      puVar1 = (ulong *)(lVar8 + lVar7 * 0x80);
      lVar5 = 2;
      if (1 < *puVar1) {
        lVar5 = *puVar1 - 2;
      }
      if (lVar5 == 2) {
        if (0x18 < (byte)puVar1[2]) {
          plVar4 = (long *)puVar1[3];
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        if (((byte)puVar1[5] != 0xff) && (0x18 < (byte)puVar1[5])) {
          plVar4 = (long *)puVar1[6];
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
        plVar4 = (long *)puVar1[10];
        if (plVar4 != (long *)0x0) {
          do {
            lVar5 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(puVar1 + 10);
          }
        }
      }
      else if (lVar5 == 1) {
                    /* try { // try from 0076650c to 00766513 has its CatchHandler @ 007665c4 */
        FUN_00704618(puVar1 + 2);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  return;
}


// ===== 007665f0  FUN_007665f0 =====

void FUN_007665f0(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar8 = *(long *)(param_1 + 8);
    lVar7 = 0;
    do {
      lVar4 = lVar8 + lVar7 * 0x30;
      bVar1 = *(byte *)(lVar4 + 0x28);
      cVar2 = '\x02';
      if (1 < bVar1) {
        cVar2 = bVar1 - 2;
      }
      if (cVar2 == '\x02') {
        plVar5 = *(long **)(lVar4 + 0x18);
        if (plVar5 != (long *)0x0) {
          do {
            lVar4 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar4 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
          }
        }
      }
      else if (cVar2 == '\x01') {
                    /* try { // try from 00766664 to 00766667 has its CatchHandler @ 007666ac */
        FUN_007042ac();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  return;
}


// ===== 007666d8  FUN_007666d8 =====

void FUN_007666d8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar8 = *(long *)(param_1 + 8);
    lVar7 = 0;
    do {
      puVar4 = (ulong *)(lVar8 + lVar7 * 0x228);
      lVar1 = 2;
      if (1 < *puVar4) {
        lVar1 = *puVar4 - 2;
      }
      if (lVar1 == 2) {
                    /* try { // try from 00766728 to 0076672f has its CatchHandler @ 00766830 */
        FUN_007628fc(puVar4);
      }
      else if ((lVar1 == 1) && (uVar3 = puVar4[2], uVar3 != 0)) {
        uVar10 = puVar4[4];
        if (uVar10 != 0) {
          puVar6 = (undefined8 *)puVar4[1];
          puVar9 = puVar6 + 1;
          uVar11 = NEON_cmge(*puVar6,0,1);
          uVar11 = uVar11 & 0x8080808080808080;
          do {
            for (; uVar11 == 0; uVar11 = uVar11 & 0x8080808080808080) {
              puVar6 = puVar6 + -0x220;
              uVar11 = NEON_cmge(*puVar9,0,1);
              puVar9 = puVar9 + 1;
            }
            uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                    /* try { // try from 007667c0 to 007667c3 has its CatchHandler @ 00766838 */
            FUN_007024a8(puVar6 + (long)-(int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) *
                                  0x44 + -0x43);
            uVar10 = uVar10 - 1;
            uVar11 = uVar11 - 1 & uVar11;
          } while (uVar10 != 0);
        }
        if (uVar3 * 0x221 != -0x229) {
          free((void *)(puVar4[1] + uVar3 * -0x220 + -0x220));
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar5);
  }
  return;
}


// ===== 00766864  FUN_00766864 =====

void FUN_00766864(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    lVar9 = *(long *)(param_1 + 8);
    lVar8 = 0;
    do {
      plVar6 = (long *)(lVar9 + lVar8 * 0x28);
      if (*plVar6 == 2) {
        lVar4 = plVar6[4];
        if (lVar4 != 0) {
          lVar10 = plVar6[3];
          lVar11 = 0;
          do {
            plVar3 = *(long **)(lVar10 + lVar11 * 0x20 + 8);
            if (plVar3 != (long *)0x0) {
              do {
                lVar5 = *plVar3;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar2) {
                  *plVar3 = lVar5 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar5 + -1 == 0) {
                DataMemoryBarrier(2,1);
                <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
              }
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 != lVar4);
        }
        if (plVar6[2] != 0) {
          free((void *)plVar6[3]);
        }
      }
      else if (*plVar6 == 0) {
        plVar3 = (long *)plVar6[2];
        if (plVar3 != (long *)0x0) {
          do {
            lVar4 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 + -1 == 0) {
            DataMemoryBarrier(2,1);
            <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow(plVar6 + 2);
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar7);
  }
  return;
}


// ===== 00766960  FUN_00766960 =====

void FUN_00766960(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 007669b0  FUN_007669b0 =====

void FUN_007669b0(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    lVar6 = 0;
    do {
      lVar8 = lVar7 + lVar6 * 0x58;
      if (0x18 < *(byte *)(lVar8 + 0x28)) {
        plVar3 = *(long **)(lVar8 + 0x30);
        do {
          lVar4 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 + -1 == 0) {
          DataMemoryBarrier(2,1);
          <alloc::sync::[n]::alloc::sync::Arc<str>>::drop_slow();
        }
      }
      if (*(long *)(lVar8 + 0x10) != 0) {
        free(*(void **)(lVar8 + 0x18));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar5);
  }
  return;
}


// ===== 00766a4c  FUN_00766a4c =====

void FUN_00766a4c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 0x20);
    do {
      if (puVar2[-4] != 0) {
        free((void *)puVar2[-3]);
      }
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 6;
    } while (lVar1 != 0);
  }
  return;
}


// ===== 00766ab0  FUN_00766ab0 =====

void FUN_00766ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00ad76d8);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00766b1c  FUN_00766b1c =====

void FUN_00766b1c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  long local_90;
  ulong uStack_88;
  ulong local_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  local_80 = param_2[2];
  local_a8 = 0;
  local_a0 = &DAT_00000001;
  local_98 = 0;
  local_78 = 0x80;
                    /* try { // try from 00766b5c to 00766b67 has its CatchHandler @ 00766cd8 */
  FUN_007681c8(&local_70,&local_a8);
  if (local_70 == 0) {
    *param_1 = 0;
    param_1[1] = lStack_68;
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = local_70;
    param_1[3] = lStack_58;
    param_1[2] = lStack_60;
    param_1[5] = lStack_48;
    param_1[4] = local_50;
    if ((*param_1 != 0) && (local_80 < uStack_88)) {
      puVar1 = (undefined8 *)*param_1;
      lVar2 = param_1[1];
      lVar7 = param_1[3];
      do {
        if (0x20 < *(byte *)(local_90 + local_80) ||
            (1L << ((ulong)*(byte *)(local_90 + local_80) & 0x3f) & 0x100002600U) == 0) {
          local_70 = 0x16;
                    /* try { // try from 00766c14 to 00766c1f has its CatchHandler @ 00766cc4 */
          lVar5 = FUN_0076b518(&local_a8,&local_70);
          *param_1 = 0;
          param_1[1] = lVar5;
          if (lVar2 != 0) {
            if (lVar7 != 0) {
              puVar6 = puVar1 + 1;
              uVar8 = NEON_cmge(*puVar1,0,1);
              uVar8 = uVar8 & 0x8080808080808080;
              puVar4 = puVar1;
              do {
                for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
                  uVar8 = NEON_cmge(*puVar6,0,1);
                  puVar6 = puVar6 + 1;
                  puVar4 = puVar4 + -0x20;
                }
                uVar3 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78;
                if (*(long *)((long)puVar4 + uVar3 * -4 + -0x20) != 0) {
                  free(*(void **)((long)puVar4 + uVar3 * -4 + -0x18));
                }
                lVar7 = lVar7 + -1;
                uVar8 = uVar8 - 1 & uVar8;
              } while (lVar7 != 0);
            }
            if (lVar2 * 0x21 != -0x29) {
              free(puVar1 + lVar2 * -4 + -4);
            }
          }
          break;
        }
        local_80 = local_80 + 1;
      } while (uStack_88 != local_80);
    }
  }
  if (local_a8 != 0) {
    free(local_a0);
  }
  return;
}


// ===== 00766cf8  FUN_00766cf8 =====

void FUN_00766cf8(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long local_128;
  undefined1 *local_120;
  undefined8 local_118;
  long local_110;
  ulong uStack_108;
  ulong local_100;
  char local_f8;
  undefined8 local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined1 uStack_61;
  
  uStack_108 = param_2[1];
  local_110 = *param_2;
  local_100 = param_2[2];
  local_118 = 0;
  local_128 = 0;
  local_120 = &DAT_00000001;
  local_f8 = -0x80;
  if (local_100 < uStack_108) {
    do {
      bVar1 = *(byte *)(local_110 + local_100);
      if ((0x20 < bVar1) || ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar1 != 0x5b) {
          lVar8 = FUN_0076ccd0(&local_128,&uStack_61,&DAT_00ad8358);
          goto LAB_00767028;
        }
        local_100 = local_100 + 1;
        local_f8 = '\x7f';
        local_d0 = &local_128;
        local_c8 = 1;
        uVar9 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
        if (uVar9 == 0) {
          uVar9 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                  lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
          plVar6 = (long *)pthread_getspecific((pthread_key_t)uVar9);
        }
        else {
          plVar6 = (long *)pthread_getspecific((pthread_key_t)uVar9);
        }
        if (plVar6 < (long *)0x2) {
          plVar6 = (long *)FUN_0072c9d4(uVar9 & 0xffffffff,plVar6,0);
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
        }
        lVar8 = *plVar6;
        lVar10 = plVar6[1];
        *plVar6 = lVar8 + 1;
        FUN_00700850(&local_88,0x18,0,1);
        lStack_b8 = lStack_80;
        local_c0 = local_88;
        lStack_a8 = lStack_70;
        local_b0 = local_78;
        local_a0 = lVar8;
        lStack_98 = lVar10;
        goto LAB_00766e20;
      }
      local_100 = local_100 + 1;
    } while (uStack_108 != local_100);
  }
  local_c0 = (undefined8 *)&DAT_00000005;
                    /* try { // try from 00766d90 to 00766e0f has its CatchHandler @ 00767184 */
  uVar5 = FUN_0076c300(&local_128,&local_c0);
  goto LAB_00767034;
LAB_00766e20:
                    /* try { // try from 00766e20 to 00766e73 has its CatchHandler @ 0076718c */
  FUN_00767918(&local_88,&local_d0);
  if ((char)local_88 == '\x01') goto LAB_00766e7c;
  if (local_88._1_1_ != '\x01') {
    lStack_e8 = lStack_a8;
    local_f0 = local_b0;
    lStack_d8 = lStack_98;
    local_e0 = local_a0;
    lVar10 = lStack_b8;
    puVar11 = local_c0;
    goto LAB_00766f40;
  }
  FUN_007699c0(&local_88,local_d0);
  if (local_88 == (undefined8 *)0xffffffffffffffff) goto LAB_00766e7c;
  FUN_0075e540(&local_c0,&local_88);
  goto LAB_00766e20;
LAB_00766e7c:
  lVar8 = lStack_b8;
  if (lStack_b8 != 0) {
    if (lStack_a8 != 0) {
      puVar12 = local_c0 + 1;
      uVar9 = NEON_cmge(*local_c0,0,1);
      uVar9 = uVar9 & 0x8080808080808080;
      puVar11 = local_c0;
      lVar10 = lStack_a8;
      do {
        for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
          uVar9 = NEON_cmge(*puVar12,0,1);
          puVar11 = puVar11 + -0x18;
          puVar12 = puVar12 + 1;
        }
        uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
        if (puVar11[(long)-iVar3 * 3 + -3] != 0) {
          free((void *)puVar11[(long)-iVar3 * 3 + -2]);
        }
        lVar10 = lVar10 + -1;
        uVar9 = uVar9 - 1 & uVar9;
      } while (lVar10 != 0);
    }
    if (lVar8 * 0x19 != -0x21) {
      free(local_c0 + lVar8 * -3 + -3);
    }
  }
  lVar10 = lStack_80;
  puVar11 = (undefined8 *)0x0;
LAB_00766f40:
  local_f8 = local_f8 + '\x01';
  lStack_a8 = lStack_e8;
  local_b0 = local_f0;
  lStack_98 = lStack_d8;
  local_a0 = local_e0;
                    /* try { // try from 00766f5c to 00766f63 has its CatchHandler @ 00767170 */
  local_c0 = puVar11;
  lStack_b8 = lVar10;
  lVar7 = FUN_0076d488(&local_128);
  if (puVar11 == (undefined8 *)0x0) {
    lVar8 = lVar10;
    if (lVar7 != 0) {
                    /* try { // try from 00766ff4 to 00767033 has its CatchHandler @ 00767184 */
      FUN_00767720(lVar7);
    }
  }
  else {
    if (lVar7 == 0) {
      *param_1 = puVar11;
      param_1[1] = lVar10;
      param_1[3] = lStack_a8;
      param_1[2] = local_b0;
      param_1[5] = lStack_d8;
      param_1[4] = local_e0;
      lStack_a8 = param_1[3];
      local_b0 = param_1[2];
      lStack_98 = param_1[5];
      local_a0 = param_1[4];
      lStack_b8 = param_1[1];
      local_c0 = (undefined8 *)*param_1;
      if (local_100 < uStack_108) {
        do {
          if (0x20 < *(byte *)(local_110 + local_100) ||
              (1L << ((ulong)*(byte *)(local_110 + local_100) & 0x3f) & 0x100002600U) == 0) {
            local_88 = (undefined8 *)0x16;
                    /* try { // try from 007670e0 to 007670eb has its CatchHandler @ 0076715c */
            uVar5 = FUN_0076c300(&local_128,&local_88);
            *param_1 = 0;
            param_1[1] = uVar5;
                    /* try { // try from 007670f0 to 00767157 has its CatchHandler @ 00767184 */
            FUN_00703fac(&local_c0);
            break;
          }
          local_100 = local_100 + 1;
        } while (uStack_108 != local_100);
      }
      goto LAB_00767038;
    }
    lVar8 = lVar7;
    if (lVar10 != 0) {
      if (lStack_a8 != 0) {
        puVar12 = puVar11 + 1;
        uVar9 = NEON_cmge(*puVar11,0,1);
        uVar9 = uVar9 & 0x8080808080808080;
        puVar4 = puVar11;
        lVar7 = lStack_a8;
        do {
          for (; uVar9 == 0; uVar9 = uVar9 & 0x8080808080808080) {
            uVar9 = NEON_cmge(*puVar12,0,1);
            puVar12 = puVar12 + 1;
            puVar4 = puVar4 + -0x18;
          }
          uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
          if (puVar4[(long)-iVar3 * 3 + -3] != 0) {
            free((void *)puVar4[(long)-iVar3 * 3 + -2]);
          }
          lVar7 = lVar7 + -1;
          uVar9 = uVar9 - 1 & uVar9;
        } while (lVar7 != 0);
      }
      if (lVar10 * 0x19 != -0x21) {
        free(puVar11 + lVar10 * -3 + -3);
      }
    }
  }
LAB_00767028:
  uVar5 = FUN_00734cc8(lVar8,&local_128);
LAB_00767034:
  *param_1 = 0;
  param_1[1] = uVar5;
LAB_00767038:
  if (local_128 != 0) {
    free(local_120);
  }
  return;
}


// ===== 007671b8  FUN_007671b8 =====

void FUN_007671b8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  long local_90;
  ulong uStack_88;
  ulong local_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  local_80 = param_2[2];
  local_a8 = 0;
  local_a0 = &DAT_00000001;
  local_98 = 0;
  local_78 = 0x80;
                    /* try { // try from 007671f8 to 00767203 has its CatchHandler @ 00767374 */
  FUN_007691bc(&local_70,&local_a8);
  if (local_70 == 0) {
    *param_1 = 0;
    param_1[1] = lStack_68;
  }
  else {
    param_1[1] = lStack_68;
    *param_1 = local_70;
    param_1[3] = lStack_58;
    param_1[2] = lStack_60;
    param_1[5] = lStack_48;
    param_1[4] = local_50;
    if ((*param_1 != 0) && (local_80 < uStack_88)) {
      puVar1 = (undefined8 *)*param_1;
      lVar2 = param_1[1];
      lVar7 = param_1[3];
      do {
        if (0x20 < *(byte *)(local_90 + local_80) ||
            (1L << ((ulong)*(byte *)(local_90 + local_80) & 0x3f) & 0x100002600U) == 0) {
          local_70 = 0x16;
                    /* try { // try from 007672b0 to 007672bb has its CatchHandler @ 00767360 */
          lVar5 = FUN_0076c300(&local_a8,&local_70);
          *param_1 = 0;
          param_1[1] = lVar5;
          if (lVar2 != 0) {
            if (lVar7 != 0) {
              puVar6 = puVar1 + 1;
              uVar8 = NEON_cmge(*puVar1,0,1);
              uVar8 = uVar8 & 0x8080808080808080;
              puVar4 = puVar1;
              do {
                for (; uVar8 == 0; uVar8 = uVar8 & 0x8080808080808080) {
                  uVar8 = NEON_cmge(*puVar6,0,1);
                  puVar6 = puVar6 + 1;
                  puVar4 = puVar4 + -0x20;
                }
                uVar3 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                uVar3 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) & 0x78;
                if (*(long *)((long)puVar4 + uVar3 * -4 + -0x20) != 0) {
                  free(*(void **)((long)puVar4 + uVar3 * -4 + -0x18));
                }
                lVar7 = lVar7 + -1;
                uVar8 = uVar8 - 1 & uVar8;
              } while (lVar7 != 0);
            }
            if (lVar2 * 0x21 != -0x29) {
              free(puVar1 + lVar2 * -4 + -4);
            }
          }
          break;
        }
        local_80 = local_80 + 1;
      } while (uStack_88 != local_80);
    }
  }
  if (local_a8 != 0) {
    free(local_a0);
  }
  return;
}


// ===== 00767394  FUN_00767394 =====

void FUN_00767394(long *param_1,long *param_2)

{
  long lVar1;
  long local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  long local_90;
  ulong uStack_88;
  ulong local_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  undefined8 local_38 [3];
  
  uStack_88 = param_2[1];
  local_90 = *param_2;
  local_80 = param_2[2];
  local_a8 = 0;
  local_a0 = &DAT_00000001;
  local_98 = 0;
  local_78 = 0x80;
                    /* try { // try from 007673cc to 007673d7 has its CatchHandler @ 0076749c */
  FUN_00769f78(param_1,&local_a8);
  if (*param_1 != -1) {
    lStack_48 = param_1[5];
    local_50 = param_1[4];
    lStack_68 = param_1[1];
    local_70 = *param_1;
    lStack_58 = param_1[3];
    lStack_60 = param_1[2];
    if (local_80 < uStack_88) {
      do {
        if (0x20 < *(byte *)(local_90 + local_80) ||
            (1L << ((ulong)*(byte *)(local_90 + local_80) & 0x3f) & 0x100002600U) == 0) {
          local_38[0] = 0x16;
                    /* try { // try from 00767464 to 0076746f has its CatchHandler @ 0076748c */
          lVar1 = FUN_0076c300(&local_a8,local_38);
          *param_1 = -1;
          param_1[1] = lVar1;
          FUN_00767848(&local_70);
          break;
        }
        local_80 = local_80 + 1;
      } while (uStack_88 != local_80);
    }
  }
  if (local_a8 != 0) {
    free(local_a0);
  }
  return;
}


// ===== 007674bc  FUN_007674bc =====

void FUN_007674bc(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) &&
     (iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(lVar2),
     iVar1 != 0)) {
    <tokio::runtime::task::raw::tokio::runtime::task::raw::RawTask>::dealloc(lVar2);
    return;
  }
  return;
}


// ===== 007674f8  FUN_007674f8 =====

void FUN_007674f8(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 == -1) {
    FUN_00767720(param_1[1]);
    return;
  }
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar3[-1] != 0) {
        free((void *)*puVar3);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (lVar1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00767590  FUN_00767590 =====

void FUN_00767590(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00703ec8();
    return;
  }
  FUN_00767720(param_1[1]);
  return;
}


// ===== 007675a4  FUN_007675a4 =====

void FUN_007675a4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_00703fac();
    return;
  }
  FUN_00767720(param_1[1]);
  return;
}


// ===== 007675b8  FUN_007675b8 =====

void FUN_007675b8(long *param_1)

{
  if (*param_1 != -1) {
    FUN_00767848();
    return;
  }
  FUN_00767720(param_1[1]);
  return;
}


// ===== 007675d0  FUN_007675d0 =====

void FUN_007675d0(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00767650  FUN_00767650 =====

void FUN_00767650(long param_1)

{
  ulong uVar1;
  long lVar2;
  
                    /* try { // try from 00767660 to 00767663 has its CatchHandler @ 007676f8 */
  FUN_00704700();
                    /* try { // try from 00767664 to 0076766b has its CatchHandler @ 007676dc */
  FUN_00703ca4(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x68);
  if ((lVar2 != 0) && (uVar1 = lVar2 * 4 + 0xbU & 0xfffffffffffffff8, lVar2 + uVar1 != -9)) {
    free((void *)(*(long *)(param_1 + 0x60) - uVar1));
  }
  lVar2 = *(long *)(param_1 + 0x98);
  if ((lVar2 != 0) && (uVar1 = lVar2 + 8U & 0xfffffffffffffff8, lVar2 + uVar1 != -9)) {
    free((void *)(*(long *)(param_1 + 0x90) - uVar1));
    return;
  }
  return;
}


// ===== 00767720  FUN_00767720 =====

void FUN_00767720(long *param_1)

{
  ulong uVar1;
  long local_28;
  
  if (*param_1 == 1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_28 = param_1[1] - 1;
                    /* try { // try from 00767790 to 00767797 has its CatchHandler @ 007677b8 */
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_28);
    }
  }
  else if ((*param_1 == 0) && (param_1[2] != 0)) {
    free((void *)param_1[1]);
  }
  free(param_1);
  return;
}


// ===== 007677d4  FUN_007677d4 =====

void FUN_007677d4(long *param_1)

{
  ulong uVar1;
  long local_18;
  
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      free((void *)param_1[1]);
      return;
    }
  }
  else if (*param_1 == 1) {
    uVar1 = param_1[1] & 3;
    if ((1 < uVar1 - 2) && (uVar1 != 0)) {
      local_18 = param_1[1] - 1;
      <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
      return;
    }
  }
  return;
}


// ===== 00767848  FUN_00767848 =====

void FUN_00767848(long *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  
  pvVar1 = (void *)param_1[1];
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)((long)pvVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        free((void *)*puVar3);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (*param_1 != 0) {
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  lVar2 = param_1[5];
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)((long)pvVar1 + 8);
    do {
      if (puVar3[-1] != 0) {
        free((void *)*puVar3);
      }
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar2 != 0);
  }
  if (param_1[3] != 0) {
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00767918  FUN_00767918 =====

void FUN_00767918(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_38 [3];
  
  lVar4 = *param_2;
  uVar1 = *(ulong *)(lVar4 + 0x20);
  uVar5 = *(ulong *)(lVar4 + 0x28);
  if (uVar5 < uVar1) {
    do {
      bVar2 = *(byte *)(*(long *)(lVar4 + 0x18) + uVar5);
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar2 == 0x5d) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
        if ((*(byte *)(param_2 + 1) & 1) != 0) {
          *(undefined1 *)(param_2 + 1) = 0;
          param_1[1] = 1;
          *param_1 = 0;
          return;
        }
        if (bVar2 == 0x2c) {
          uVar5 = uVar5 + 1;
          *(ulong *)(lVar4 + 0x28) = uVar5;
          if (uVar5 < uVar1) goto LAB_00767a18;
          goto LAB_00767a40;
        }
        local_38[0] = 7;
        goto LAB_00767a44;
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(lVar4 + 0x28) = uVar5;
    } while (uVar1 != uVar5);
  }
  local_38[0] = 2;
  uVar3 = FUN_0076c300(lVar4,local_38);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 1;
  return;
LAB_00767a18:
  bVar2 = *(byte *)(*(long *)(lVar4 + 0x18) + uVar5);
  if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
    if (bVar2 != 0x5d) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    local_38[0] = 0x15;
    goto LAB_00767a44;
  }
  uVar5 = uVar5 + 1;
  *(ulong *)(lVar4 + 0x28) = uVar5;
  if (uVar1 == uVar5) {
LAB_00767a40:
    local_38[0] = 5;
LAB_00767a44:
    uVar3 = FUN_0076c300(lVar4,local_38);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *param_1 = 1;
    return;
  }
  goto LAB_00767a18;
}


// ===== 00767aa8  FUN_00767aa8 =====

void FUN_00767aa8(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_38 [3];
  
  lVar4 = *param_2;
  uVar1 = *(ulong *)(lVar4 + 0x20);
  uVar5 = *(ulong *)(lVar4 + 0x28);
  if (uVar5 < uVar1) {
    do {
      bVar2 = *(byte *)(*(long *)(lVar4 + 0x18) + uVar5);
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar2 == 0x7d) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
        if ((*(byte *)(param_2 + 1) & 1) == 0) {
          if (bVar2 == 0x2c) {
            uVar5 = uVar5 + 1;
            *(ulong *)(lVar4 + 0x28) = uVar5;
            if (uVar5 < uVar1) goto LAB_00767b98;
            goto LAB_00767bc0;
          }
          local_38[0] = 8;
        }
        else {
          *(undefined1 *)(param_2 + 1) = 0;
          if (bVar2 == 0x22) goto LAB_00767bd0;
          local_38[0] = 0x11;
        }
        goto LAB_00767b04;
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(lVar4 + 0x28) = uVar5;
    } while (uVar1 != uVar5);
  }
  local_38[0] = 3;
  goto LAB_00767b04;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(ulong *)(lVar4 + 0x28) = uVar5;
    if (uVar1 == uVar5) break;
LAB_00767b98:
    bVar2 = *(byte *)(*(long *)(lVar4 + 0x18) + uVar5);
    if (0x22 < bVar2) {
LAB_00767bec:
      if (bVar2 == 0x7d) {
        local_38[0] = 0x15;
      }
      else {
        local_38[0] = 0x11;
      }
      uVar3 = FUN_0076b518(lVar4,local_38);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *param_1 = 1;
      return;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 == 0x22) {
LAB_00767bd0:
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      goto LAB_00767bec;
    }
  }
LAB_00767bc0:
  local_38[0] = 5;
LAB_00767b04:
  uVar3 = FUN_0076b518(lVar4,local_38);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 1;
  return;
}


// ===== 00767c3c  FUN_00767c3c =====

void FUN_00767c3c(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_38 [3];
  
  lVar4 = *param_2;
  uVar1 = *(ulong *)(lVar4 + 0x20);
  uVar5 = *(ulong *)(lVar4 + 0x28);
  if (uVar5 < uVar1) {
    do {
      bVar2 = *(byte *)(*(long *)(lVar4 + 0x18) + uVar5);
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar2 == 0x7d) {
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
        if ((*(byte *)(param_2 + 1) & 1) == 0) {
          if (bVar2 == 0x2c) {
            uVar5 = uVar5 + 1;
            *(ulong *)(lVar4 + 0x28) = uVar5;
            if (uVar5 < uVar1) goto LAB_00767d2c;
            goto LAB_00767d54;
          }
          local_38[0] = 8;
        }
        else {
          *(undefined1 *)(param_2 + 1) = 0;
          if (bVar2 == 0x22) goto LAB_00767d64;
          local_38[0] = 0x11;
        }
        goto LAB_00767c98;
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(lVar4 + 0x28) = uVar5;
    } while (uVar1 != uVar5);
  }
  local_38[0] = 3;
  goto LAB_00767c98;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(ulong *)(lVar4 + 0x28) = uVar5;
    if (uVar1 == uVar5) break;
LAB_00767d2c:
    bVar2 = *(byte *)(*(long *)(lVar4 + 0x18) + uVar5);
    if (0x22 < bVar2) {
LAB_00767d80:
      if (bVar2 == 0x7d) {
        local_38[0] = 0x15;
      }
      else {
        local_38[0] = 0x11;
      }
      uVar3 = FUN_0076c300(lVar4,local_38);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *param_1 = 1;
      return;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 == 0x22) {
LAB_00767d64:
        param_1[1] = 1;
        *param_1 = 0;
        return;
      }
      goto LAB_00767d80;
    }
  }
LAB_00767d54:
  local_38[0] = 5;
LAB_00767c98:
  uVar3 = FUN_0076c300(lVar4,local_38);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *param_1 = 1;
  return;
}


// ===== 00767dd0  FUN_00767dd0 =====

void FUN_00767dd0(undefined4 *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  undefined1 uStack_11;
  
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar4 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + uVar4);
      if (0x2d < bVar1) {
LAB_00767eb4:
        if (9 < bVar1 - 0x30) {
          uVar2 = FUN_0076beac(param_2,&uStack_11,&DAT_00ad82b8);
          goto LAB_00767f14;
        }
        FUN_0076b850(&local_58,param_2,1);
        if (local_58 == -1) {
          *param_1 = 1;
          *(ulong *)(param_1 + 2) = local_50;
          return;
        }
LAB_00767f3c:
        if (local_58 == 1) {
          if (local_50 >> 0x1f == 0) {
LAB_00767f6c:
            *param_1 = 0;
            param_1[1] = (int)local_50;
            return;
          }
          uVar3 = 1;
        }
        else {
          if (local_58 != 2) {
            local_40 = local_50;
            local_48 = CONCAT71(local_48._1_7_,3);
            uVar2 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                              (&local_48,&uStack_11,&DAT_00ad82b8);
            goto LAB_00767f14;
          }
          if (local_50 == (long)(int)local_50) goto LAB_00767f6c;
          uVar3 = 2;
        }
        local_40 = local_50;
        local_48 = CONCAT71(local_48._1_7_,uVar3);
        uVar2 = <serde_json::error::Error_as_serde::de::Error>::invalid_value
                          (&local_48,&uStack_11,&DAT_00ad82b8);
LAB_00767f14:
        uVar2 = FUN_00734c54(uVar2,param_2);
        *(undefined8 *)(param_1 + 2) = uVar2;
        *param_1 = 1;
        return;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2d) goto LAB_00767eb4;
        *(ulong *)(param_2 + 0x28) = uVar4 + 1;
        FUN_0076b850(&local_58,param_2,0);
        if (local_58 == -1) {
          *(ulong *)(param_1 + 2) = local_50;
          *param_1 = 1;
          return;
        }
        goto LAB_00767f3c;
      }
      uVar4 = uVar4 + 1;
      *(ulong *)(param_2 + 0x28) = uVar4;
    } while (*(ulong *)(param_2 + 0x20) != uVar4);
  }
  local_48 = 5;
  uVar2 = FUN_0076b518(param_2,&local_48);
  *(undefined8 *)(param_1 + 2) = uVar2;
  *param_1 = 1;
  return;
}


// ===== 00767fcc  FUN_00767fcc =====

void FUN_00767fcc(undefined4 *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  undefined1 uStack_11;
  
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar4 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + uVar4);
      if (0x2d < bVar1) {
LAB_007680b0:
        if (9 < bVar1 - 0x30) {
          uVar2 = FUN_0076ccd0(param_2,&uStack_11,&DAT_00ad82b8);
          goto LAB_00768110;
        }
        FUN_0076c558(&local_58,param_2,1);
        if (local_58 == -1) {
          *param_1 = 1;
          *(ulong *)(param_1 + 2) = local_50;
          return;
        }
LAB_00768138:
        if (local_58 == 1) {
          if (local_50 >> 0x1f == 0) {
LAB_00768168:
            *param_1 = 0;
            param_1[1] = (int)local_50;
            return;
          }
          uVar3 = 1;
        }
        else {
          if (local_58 != 2) {
            local_40 = local_50;
            local_48 = CONCAT71(local_48._1_7_,3);
            uVar2 = <serde_json::error::Error_as_serde::de::Error>::invalid_type
                              (&local_48,&uStack_11,&DAT_00ad82b8);
            goto LAB_00768110;
          }
          if (local_50 == (long)(int)local_50) goto LAB_00768168;
          uVar3 = 2;
        }
        local_40 = local_50;
        local_48 = CONCAT71(local_48._1_7_,uVar3);
        uVar2 = <serde_json::error::Error_as_serde::de::Error>::invalid_value
                          (&local_48,&uStack_11,&DAT_00ad82b8);
LAB_00768110:
        uVar2 = FUN_00734cc8(uVar2,param_2);
        *(undefined8 *)(param_1 + 2) = uVar2;
        *param_1 = 1;
        return;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2d) goto LAB_007680b0;
        *(ulong *)(param_2 + 0x28) = uVar4 + 1;
        FUN_0076c558(&local_58,param_2,0);
        if (local_58 == -1) {
          *(ulong *)(param_1 + 2) = local_50;
          *param_1 = 1;
          return;
        }
        goto LAB_00768138;
      }
      uVar4 = uVar4 + 1;
      *(ulong *)(param_2 + 0x28) = uVar4;
    } while (*(ulong *)(param_2 + 0x20) != uVar4);
  }
  local_48 = 5;
  uVar2 = FUN_0076c300(param_2,&local_48);
  *(undefined8 *)(param_1 + 2) = uVar2;
  *param_1 = 1;
  return;
}


// ===== 007681c8  FUN_007681c8 =====

void FUN_007681c8(undefined8 *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined1 *puStack_b8;
  undefined8 *local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  int local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 *local_70;
  long lStack_68;
  undefined1 uStack_41;
  
  uVar12 = *(ulong *)(param_2 + 0x28);
  if (uVar12 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar12);
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar2 != 0x7b) {
          puVar10 = (undefined1 *)FUN_0076beac(param_2,&uStack_41,&DAT_00ad8318);
          goto LAB_00768590;
        }
        cVar3 = *(char *)(param_2 + 0x30) + -1;
        *(char *)(param_2 + 0x30) = cVar3;
        puVar5 = PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
        if (cVar3 == '\0') {
          local_c0 = (undefined8 *)0x18;
          goto LAB_00768238;
        }
        *(ulong *)(param_2 + 0x28) = uVar12 + 1;
        local_c8 = 1;
        uVar12 = *(ulong *)puVar5;
        local_d0 = param_2;
        if (uVar12 == 0) {
          uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                   lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
          plVar7 = (long *)pthread_getspecific((pthread_key_t)uVar12);
          if (plVar7 <= &DAT_00000001) goto LAB_00768678;
        }
        else {
          plVar7 = (long *)pthread_getspecific((pthread_key_t)uVar12);
          if (plVar7 < (long *)0x2) {
LAB_00768678:
            plVar7 = (long *)FUN_0072c9d4(uVar12 & 0xffffffff,plVar7,0);
          }
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
        }
        lVar13 = *plVar7;
        lVar1 = plVar7[1];
        uVar6 = 1;
        *plVar7 = lVar13 + 1;
        FUN_00700850(&local_80,0x20,0,1);
        puStack_b8 = puStack_78;
        local_c0 = local_80;
        lStack_a8 = lStack_68;
        local_b0 = local_70;
        local_a0 = lVar13;
        lStack_98 = lVar1;
        goto LAB_007682dc;
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(param_2 + 0x28) = uVar12;
    } while (*(ulong *)(param_2 + 0x20) != uVar12);
  }
  local_c0 = (undefined8 *)0x5;
LAB_00768238:
  uVar6 = FUN_0076b518(param_2,&local_c0);
  goto LAB_0076859c;
LAB_007682dc:
                    /* try { // try from 007682dc to 00768323 has its CatchHandler @ 007686e4 */
  FUN_00767aa8(&local_80,&local_d0);
  lVar13 = local_d0;
  puVar10 = puStack_b8;
  puVar9 = puStack_78;
  if ((char)local_80 == '\x01') goto joined_r0x0076852c;
  if (local_80._1_1_ != '\x01') {
    lStack_e8 = lStack_a8;
    local_f0 = local_b0;
    lStack_d8 = lStack_98;
    local_e0 = local_a0;
    puVar9 = puStack_b8;
    puVar14 = local_c0;
    goto LAB_007684e0;
  }
  *(undefined8 *)(local_d0 + 0x10) = 0;
  *(long *)(local_d0 + 0x28) = *(long *)(local_d0 + 0x28) + 1;
  <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str
            (&local_80,local_d0 + 0x18,local_d0);
  puVar9 = puStack_78;
  puVar10 = puStack_b8;
  if (local_80 == (undefined8 *)0x2) goto joined_r0x0076852c;
  if ((long)local_70 < 0) {
    uVar6 = 0;
LAB_007683f8:
                    /* try { // try from 007683f8 to 00768403 has its CatchHandler @ 007686e8 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,local_70);
  }
  if (local_70 != (undefined8 *)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar8 = (undefined1 *)FUN_004b25a4(local_70,1);
    if (puVar8 == (undefined1 *)0x0) goto LAB_007683f8;
    memcpy(puVar8,puVar9,(size_t)local_70);
    uVar11 = *(ulong *)(lVar13 + 0x20);
    uVar12 = *(ulong *)(lVar13 + 0x28);
    if (uVar12 < uVar11) goto LAB_00768380;
LAB_00768408:
    local_80 = (undefined8 *)0x3;
                    /* try { // try from 00768410 to 0076841b has its CatchHandler @ 007686b0 */
    puVar9 = (undefined1 *)FUN_0076b518(lVar13,&local_80);
joined_r0x00768548:
    puVar10 = puStack_b8;
    if (local_70 != (undefined8 *)0x0) {
      free(puVar8);
      puVar10 = puStack_b8;
    }
    goto joined_r0x0076852c;
  }
  puVar8 = &DAT_00000001;
  uVar11 = *(ulong *)(lVar13 + 0x20);
  uVar12 = *(ulong *)(lVar13 + 0x28);
  if (uVar11 <= uVar12) goto LAB_00768408;
LAB_00768380:
  while( true ) {
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x18) + uVar12);
    if (0x3a < bVar2) goto LAB_00768698;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
    uVar12 = uVar12 + 1;
    *(ulong *)(lVar13 + 0x28) = uVar12;
    if (uVar11 == uVar12) goto LAB_00768408;
  }
  if ((ulong)bVar2 != 0x3a) {
LAB_00768698:
    local_80 = (undefined8 *)&DAT_00000006;
                    /* try { // try from 007686a0 to 007686ab has its CatchHandler @ 007686b0 */
    puVar9 = (undefined1 *)FUN_0076b518(lVar13,&local_80);
    goto joined_r0x00768548;
  }
  *(ulong *)(lVar13 + 0x28) = uVar12 + 1;
                    /* try { // try from 007683c0 to 007683cb has its CatchHandler @ 007686c8 */
  FUN_00768700(&local_90,lVar13);
  puVar9 = local_88;
  if (local_90 == 1) goto joined_r0x00768548;
  local_80 = local_70;
                    /* try { // try from 007683e4 to 007683ef has its CatchHandler @ 007686e4 */
  puStack_78 = puVar8;
  FUN_0075e308(&local_c0,&local_80,local_8c);
  goto LAB_007682dc;
joined_r0x0076852c:
  if (puVar10 != (undefined1 *)0x0) {
    puStack_b8 = puVar10;
    if (lStack_a8 != 0) {
      puVar15 = local_c0 + 1;
      uVar12 = NEON_cmge(*local_c0,0,1);
      uVar12 = uVar12 & 0x8080808080808080;
      puVar14 = local_c0;
      lVar13 = lStack_a8;
      do {
        for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
          uVar12 = NEON_cmge(*puVar15,0,1);
          puVar14 = puVar14 + -0x20;
          puVar15 = puVar15 + 1;
        }
        uVar11 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) & 0x78;
        if (*(long *)((long)puVar14 + uVar11 * -4 + -0x20) != 0) {
          free(*(void **)((long)puVar14 + uVar11 * -4 + -0x18));
        }
        lVar13 = lVar13 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (lVar13 != 0);
    }
    if ((long)puVar10 * 0x21 != -0x29) {
      free(local_c0 + (long)puVar10 * -4 + -4);
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_007684e0:
  *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
  lStack_a8 = lStack_e8;
  local_b0 = local_f0;
  lStack_98 = lStack_d8;
  local_a0 = local_e0;
  local_c0 = puVar14;
  puStack_b8 = puVar9;
                    /* try { // try from 007684f8 to 007684ff has its CatchHandler @ 007686b4 */
  puVar8 = (undefined1 *)FUN_0076c258(param_2);
  if (puVar14 == (undefined8 *)0x0) {
    puVar10 = puVar9;
    if (puVar8 != (undefined1 *)0x0) {
      FUN_00767720(puVar8);
    }
  }
  else {
    if (puVar8 == (undefined1 *)0x0) {
      *param_1 = puVar14;
      param_1[1] = puVar9;
      param_1[3] = lStack_a8;
      param_1[2] = local_b0;
      param_1[5] = lStack_d8;
      param_1[4] = local_e0;
      return;
    }
    puVar10 = puVar8;
    if (puVar9 != (undefined1 *)0x0) {
      if (lStack_a8 != 0) {
        puVar15 = puVar14 + 1;
        uVar12 = NEON_cmge(*puVar14,0,1);
        uVar12 = uVar12 & 0x8080808080808080;
        puVar4 = puVar14;
        lVar13 = lStack_a8;
        do {
          for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
            uVar12 = NEON_cmge(*puVar15,0,1);
            puVar15 = puVar15 + 1;
            puVar4 = puVar4 + -0x20;
          }
          uVar11 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) & 0x78;
          if (*(long *)((long)puVar4 + uVar11 * -4 + -0x20) != 0) {
            free(*(void **)((long)puVar4 + uVar11 * -4 + -0x18));
          }
          lVar13 = lVar13 + -1;
          uVar12 = uVar12 - 1 & uVar12;
        } while (lVar13 != 0);
      }
      if ((long)puVar9 * 0x21 != -0x29) {
        free(puVar14 + (long)puVar9 * -4 + -4);
      }
    }
  }
LAB_00768590:
  uVar6 = FUN_00734c54(puVar10,param_2);
LAB_0076859c:
  *param_1 = 0;
  param_1[1] = uVar6;
  return;
}


// ===== 00768700  FUN_00768700 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00768700(undefined4 *param_1,code *param_2)

{
  code cVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 extraout_w15;
  undefined4 extraout_w15_00;
  undefined4 extraout_w15_01;
  code *unaff_x21;
  ulong uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  undefined4 local_a4;
  code *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  code *local_88;
  long local_80;
  undefined8 local_78;
  code *local_70;
  undefined1 uStack_61;
  
  uVar12 = *(ulong *)(param_2 + 0x20);
  uVar11 = *(ulong *)(param_2 + 0x28);
  if (uVar11 < uVar12) {
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar2 == 0x5b) {
          cVar1 = param_2[0x30];
          param_2[0x30] = (code)((char)cVar1 + -1);
          if ((code)((char)cVar1 + -1) != (code)0x0) {
            uVar11 = uVar11 + 1;
            *(ulong *)(param_2 + 0x28) = uVar11;
            if (uVar11 < uVar12) goto LAB_00768808;
            goto LAB_00768830;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar7 = (code *)FUN_0076beac(param_2,&uStack_61,&DAT_00ad8338);
            goto LAB_00768f3c;
          }
          cVar1 = param_2[0x30];
          param_2[0x30] = (code)((char)cVar1 + -1);
          if ((code)((char)cVar1 + -1) != (code)0x0) {
            *(ulong *)(param_2 + 0x28) = uVar11 + 1;
            local_98 = 1;
            local_a0 = param_2;
            FUN_00767aa8(&local_90,&local_a0);
            pcVar6 = local_88;
            if (((ulong)local_90 & 1) != 0) goto LAB_00768f04;
            bVar17 = false;
            goto LAB_007688c4;
          }
        }
        local_90 = (undefined8 *)0x18;
        uVar5 = FUN_0076b518(param_2,&local_90);
        *(undefined8 *)(param_1 + 2) = uVar5;
        uVar9 = 1;
        goto LAB_00769078;
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(param_2 + 0x28) = uVar11;
    } while (uVar12 != uVar11);
  }
  local_90 = (undefined8 *)0x5;
  uVar5 = FUN_0076b518(param_2,&local_90);
  goto LAB_00768f44;
  while( true ) {
    uVar11 = uVar11 + 1;
    *(ulong *)(param_2 + 0x28) = uVar11;
    if (uVar12 == uVar11) break;
LAB_00768808:
    bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
    if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
      if (bVar2 == 0x5d) {
        pcVar6 = (code *)FUN_0073b56c(0,&PTR_s_struct_CacheableExperimentConfig_00ad82d8,
                                      &DAT_00ad82e8);
        local_a4 = extraout_w15_01;
        goto LAB_00768870;
      }
      FUN_00767dd0(&local_90,param_2);
      pcVar6 = local_88;
      local_a4 = extraout_w15_00;
      if ((int)local_90 == 1) goto LAB_00768870;
      bVar17 = false;
      uVar12 = *(ulong *)(param_2 + 0x20);
      uVar11 = *(ulong *)(param_2 + 0x28);
      param_2[0x30] = (code)((char)param_2[0x30] + '\x01');
      pcVar6 = unaff_x21;
      local_a4 = local_90._4_4_;
      if (uVar12 <= uVar11) goto LAB_00768eb0;
      goto LAB_00768e78;
    }
  }
LAB_00768830:
  local_90 = (undefined8 *)0x2;
  pcVar6 = (code *)FUN_0076b518(param_2,&local_90);
  local_a4 = extraout_w15;
LAB_00768870:
  bVar17 = true;
  uVar12 = *(ulong *)(param_2 + 0x20);
  uVar11 = *(ulong *)(param_2 + 0x28);
  param_2[0x30] = (code)((char)param_2[0x30] + '\x01');
  unaff_x21 = pcVar6;
  if (uVar11 < uVar12) {
LAB_00768e78:
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
      if (0x2c < bVar2) {
LAB_00769058:
        if (bVar2 != 0x5d) {
          local_90 = (undefined8 *)0x16;
                    /* try { // try from 007690dc to 0076912f has its CatchHandler @ 007691a0 */
          pcVar7 = (code *)FUN_0076b518(param_2,&local_90);
          goto LAB_00768ec4;
        }
        *(ulong *)(param_2 + 0x28) = uVar11 + 1;
        pcVar7 = unaff_x21;
        if (bVar17) goto LAB_00768f3c;
        goto LAB_00769070;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x2c) goto LAB_00769058;
        uVar11 = uVar11 + 1;
        *(ulong *)(param_2 + 0x28) = uVar11;
        if (uVar11 < uVar12) goto LAB_0076902c;
        goto LAB_0076911c;
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(param_2 + 0x28) = uVar11;
      pcVar6 = unaff_x21;
    } while (uVar12 != uVar11);
  }
LAB_00768eb0:
  local_90 = (undefined8 *)0x2;
                    /* try { // try from 00768eb8 to 00768ec3 has its CatchHandler @ 007691a0 */
  pcVar7 = (code *)FUN_0076b518(param_2,&local_90);
  unaff_x21 = pcVar6;
  goto LAB_00768ec4;
LAB_007688c4:
  do {
    pcVar7 = local_a0;
    if (local_90._1_1_ != '\x01') {
      if (bVar17) {
        bVar17 = false;
        goto LAB_00768f0c;
      }
      puVar8 = &DAT_002a3696;
LAB_00768fd0:
      local_70 = (code *)0xb;
      local_78 = "treatmentId";
      local_90 = &local_78;
      local_88 = FUN_00753284;
      pcVar6 = (code *)FUN_00739c74(puVar8,&local_90);
      break;
    }
    *(long *)(local_a0 + 0x10) = 0;
    *(long *)(local_a0 + 0x28) = *(long *)(local_a0 + 0x28) + 1;
    <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str
              (&local_90,local_a0 + 0x18,local_a0);
    pcVar6 = local_88;
    if (local_90 == (undefined8 *)0x2) break;
    if ((local_80 != 0xb) ||
       (*(long *)local_88 != 0x6e656d7461657274 || *(long *)(local_88 + 3) != 0x6449746e656d7461)) {
      uVar12 = *(ulong *)(pcVar7 + 0x20);
      uVar11 = *(ulong *)(pcVar7 + 0x28);
      if (uVar11 < uVar12) {
        lVar10 = *(long *)(pcVar7 + 0x18);
        while( true ) {
          bVar2 = *(byte *)(lVar10 + uVar11);
          if (0x3a < bVar2) goto LAB_00769000;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          uVar11 = uVar11 + 1;
          *(ulong *)(pcVar7 + 0x28) = uVar11;
          if (uVar12 == uVar11) goto LAB_00768edc;
        }
        if ((ulong)bVar2 == 0x3a) {
          uVar11 = uVar11 + 1;
          *(ulong *)(pcVar7 + 0x28) = uVar11;
          *(long *)(pcVar7 + 0x10) = 0;
          if (uVar11 < uVar12) {
            uVar19 = 0;
            uVar16 = 0;
LAB_007689a4:
            lVar15 = uVar11 + 5;
            while( true ) {
              bVar2 = *(byte *)(lVar10 + lVar15 + -5);
              uVar18 = (uint)bVar2;
              if (0x2c < bVar2) break;
              if (0x22 < uVar18) goto LAB_00768bf8;
              if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                if ((ulong)bVar2 != 0x22) goto LAB_00768bf8;
                *(long *)(pcVar7 + 0x28) = lVar15 + -4;
                pcVar6 = (code *)<serde_json::read::StrRead_as_serde_json::read::Read>::ignore_str
                                           (pcVar7 + 0x18);
                goto joined_r0x00768c0c;
              }
              lVar14 = lVar15 + -4;
              lVar15 = lVar15 + 1;
              *(long *)(pcVar7 + 0x28) = lVar14;
              if (lVar15 - uVar12 == 5) goto LAB_00768eec;
            }
            if (bVar2 < 0x6e) {
              if (uVar18 == 0x2d) {
                *(long *)(pcVar7 + 0x28) = lVar15 + -4;
LAB_00768c04:
                pcVar6 = (code *)FUN_0076b9fc(pcVar7);
joined_r0x00768c0c:
                if (pcVar6 != (code *)0x0) break;
LAB_00768c10:
                if ((int)uVar16 == 0) {
                  if (*(long *)(pcVar7 + 0x10) == 0) {
                    FUN_00767aa8(&local_90,&local_a0);
                    pcVar6 = local_88;
                    goto joined_r0x00768e4c;
                  }
                  lVar10 = *(long *)(pcVar7 + 0x10) + -1;
                  bVar4 = true;
                  *(long *)(pcVar7 + 0x10) = lVar10;
                  uVar18 = (uint)*(byte *)(*(long *)(pcVar7 + 8) + lVar10);
                }
                else {
                  bVar4 = true;
                  uVar18 = uVar19;
                }
              }
              else {
                if (uVar18 != 0x5b) {
                  if (uVar18 != 0x66) goto LAB_00768bf8;
                  uVar13 = lVar15 - 4;
                  *(ulong *)(pcVar7 + 0x28) = uVar13;
                  uVar11 = uVar13;
                  if (uVar13 <= uVar12) {
                    uVar11 = uVar12;
                  }
                  if (uVar13 < uVar12) {
                    cVar3 = *(char *)(lVar10 + lVar15 + -4);
                    *(ulong *)(pcVar7 + 0x28) = lVar15 - 3U;
                    if (cVar3 == 'a') {
                      if (lVar15 - 3U == uVar11) goto LAB_00768f84;
                      cVar3 = *(char *)(lVar10 + lVar15 + -3);
                      *(ulong *)(pcVar7 + 0x28) = lVar15 - 2U;
                      if (cVar3 == 'l') {
                        if (lVar15 - 2U == uVar11) goto LAB_00768f84;
                        cVar3 = *(char *)(lVar10 + lVar15 + -2);
                        *(ulong *)(pcVar7 + 0x28) = lVar15 - 1U;
                        if (cVar3 == 's') {
                          if (lVar15 - 1U == uVar11) goto LAB_00768f84;
                          cVar3 = *(char *)(lVar10 + lVar15 + -1);
                          *(long *)(pcVar7 + 0x28) = lVar15;
                          if (cVar3 == 'e') goto LAB_00768c10;
                        }
                      }
                    }
                    goto LAB_00768fa4;
                  }
                  goto LAB_00768f84;
                }
LAB_00768ab0:
                lVar10 = *(long *)(pcVar7 + 0x10);
                if ((ulong)(*(long *)pcVar7 - lVar10) < uVar16) {
                  FUN_0072eae4(pcVar7,lVar10,uVar16,1,1);
                  lVar10 = *(long *)(pcVar7 + 0x10);
                }
                if ((int)uVar16 != 0) {
                  *(char *)(*(long *)(pcVar7 + 8) + lVar10) = (char)uVar19;
                  lVar10 = lVar10 + 1;
                }
                bVar4 = false;
                *(long *)(pcVar7 + 0x10) = lVar10;
                *(long *)(pcVar7 + 0x28) = *(long *)(pcVar7 + 0x28) + 1;
              }
              uVar12 = *(ulong *)(pcVar7 + 0x20);
              uVar11 = *(ulong *)(pcVar7 + 0x28);
              uVar19 = uVar18;
              if (uVar11 < uVar12) {
                lVar15 = *(long *)(pcVar7 + 0x10);
                lVar10 = *(long *)(pcVar7 + 0x18);
                do {
                  while( true ) {
                    bVar2 = *(byte *)(lVar10 + uVar11);
                    if (0x2c < bVar2) break;
                    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
                      if ((ulong)bVar2 != 0x2c) break;
                      if (bVar4) {
                        uVar11 = uVar11 + 1;
                        *(ulong *)(pcVar7 + 0x28) = uVar11;
                      }
                      goto LAB_00768ce0;
                    }
                    uVar11 = uVar11 + 1;
                    *(ulong *)(pcVar7 + 0x28) = uVar11;
                    if (uVar12 == uVar11) goto LAB_00768ecc;
                  }
                  if (bVar2 == 0x5d) {
                    if (uVar19 != 0x5b) goto LAB_00768ccc;
                  }
                  else if ((bVar2 != 0x7d) || (uVar19 != 0x7b)) goto LAB_00768ccc;
                  uVar11 = uVar11 + 1;
                  *(ulong *)(pcVar7 + 0x28) = uVar11;
                  if (lVar15 == 0) {
                    FUN_00767aa8(&local_90,&local_a0);
                    pcVar6 = local_88;
                    goto joined_r0x00768e4c;
                  }
                  lVar15 = lVar15 + -1;
                  bVar4 = true;
                  *(long *)(pcVar7 + 0x10) = lVar15;
                  uVar19 = (uint)*(byte *)(*(long *)(pcVar7 + 8) + lVar15);
                  if (uVar12 <= uVar11) break;
                } while( true );
              }
LAB_00768ecc:
              if (uVar19 == 0x5b) {
                local_90 = (undefined8 *)0x2;
                goto LAB_00768ef0;
              }
              if (uVar19 != 0x7b) {
                    /* WARNING: Subroutine does not return */
                core::panicking::panic
                          ("internal error: entered unreachable code",0x28,
                           &PTR_s__root__cargo_registry_src_index__00ad83f0);
              }
              goto LAB_00768edc;
            }
            if (bVar2 == 0x6e) {
              uVar13 = lVar15 - 4;
              *(ulong *)(pcVar7 + 0x28) = uVar13;
              uVar11 = uVar13;
              if (uVar13 <= uVar12) {
                uVar11 = uVar12;
              }
              if (uVar12 <= uVar13) goto LAB_00768f84;
              cVar3 = *(char *)(lVar10 + lVar15 + -4);
              *(ulong *)(pcVar7 + 0x28) = lVar15 - 3U;
              if (cVar3 == 'u') {
                if (lVar15 - 3U == uVar11) goto LAB_00768f84;
                cVar3 = *(char *)(lVar10 + lVar15 + -3);
                *(ulong *)(pcVar7 + 0x28) = lVar15 - 2U;
                if (cVar3 == 'l') {
                  if (lVar15 - 2U == uVar11) goto LAB_00768f84;
                  bVar4 = *(char *)(lVar10 + lVar15 + -2) == 'l';
LAB_00768bec:
                  *(long *)(pcVar7 + 0x28) = lVar15 + -1;
                  if (bVar4) goto LAB_00768c10;
                }
              }
LAB_00768fa4:
              local_90 = (undefined8 *)&DAT_00000009;
            }
            else {
              if (bVar2 != 0x74) {
                if (uVar18 == 0x7b) goto LAB_00768ab0;
LAB_00768bf8:
                if (uVar18 - 0x30 < 10) goto LAB_00768c04;
                local_90 = (undefined8 *)0xa;
                goto LAB_00768ef0;
              }
              uVar13 = lVar15 - 4;
              *(ulong *)(pcVar7 + 0x28) = uVar13;
              uVar11 = uVar13;
              if (uVar13 <= uVar12) {
                uVar11 = uVar12;
              }
              if (uVar13 < uVar12) {
                cVar3 = *(char *)(lVar10 + lVar15 + -4);
                *(ulong *)(pcVar7 + 0x28) = lVar15 - 3U;
                if (cVar3 != 'r') goto LAB_00768fa4;
                if (lVar15 - 3U != uVar11) {
                  cVar3 = *(char *)(lVar10 + lVar15 + -3);
                  *(ulong *)(pcVar7 + 0x28) = lVar15 - 2U;
                  if (cVar3 != 'u') goto LAB_00768fa4;
                  if (lVar15 - 2U != uVar11) {
                    bVar4 = *(char *)(lVar10 + lVar15 + -2) == 'e';
                    goto LAB_00768bec;
                  }
                }
              }
LAB_00768f84:
              local_90 = (undefined8 *)&DAT_00000005;
            }
            pcVar6 = (code *)FUN_0076c208(pcVar7,&local_90);
            break;
          }
LAB_00768eec:
          local_90 = (undefined8 *)&DAT_00000005;
        }
        else {
LAB_00769000:
          local_90 = (undefined8 *)&DAT_00000006;
        }
      }
      else {
LAB_00768edc:
        local_90 = (undefined8 *)0x3;
      }
LAB_00768ef0:
      pcVar6 = (code *)FUN_0076b518(pcVar7,&local_90);
      break;
    }
    if (bVar17) {
      puVar8 = &DAT_002a4623;
      goto LAB_00768fd0;
    }
    uVar11 = *(ulong *)(pcVar7 + 0x28);
    if (*(ulong *)(pcVar7 + 0x20) <= uVar11) goto LAB_00768edc;
    while( true ) {
      bVar2 = *(byte *)(*(long *)(pcVar7 + 0x18) + uVar11);
      if (0x3a < bVar2) goto LAB_00769000;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      uVar11 = uVar11 + 1;
      *(ulong *)(pcVar7 + 0x28) = uVar11;
      if (*(ulong *)(pcVar7 + 0x20) == uVar11) goto LAB_00768edc;
    }
    if ((ulong)bVar2 != 0x3a) goto LAB_00769000;
    *(ulong *)(pcVar7 + 0x28) = uVar11 + 1;
    FUN_00767dd0(&local_78,pcVar7);
    pcVar6 = local_70;
    if (((ulong)local_78 & 1) != 0) break;
    local_a4 = local_78._4_4_;
    bVar17 = true;
    FUN_00767aa8(&local_90,&local_a0);
    pcVar6 = local_88;
joined_r0x00768e4c:
    unaff_x21 = pcVar7;
    local_88 = pcVar6;
  } while (((ulong)local_90 & 1) == 0);
LAB_00768f04:
  bVar17 = true;
  unaff_x21 = pcVar6;
LAB_00768f0c:
  param_2[0x30] = (code)((char)param_2[0x30] + '\x01');
                    /* try { // try from 00768f18 to 00768f1f has its CatchHandler @ 0076918c */
  pcVar7 = (code *)FUN_0076c258(param_2);
  if (bVar17) {
    bVar17 = pcVar7 == (code *)0x0;
    pcVar7 = unaff_x21;
    if (bVar17) goto LAB_00768f3c;
    goto LAB_00768f34;
  }
  if (pcVar7 == (code *)0x0) {
LAB_00769070:
    uVar9 = 0;
    param_1[1] = local_a4;
    goto LAB_00769078;
  }
  goto LAB_00768f3c;
LAB_00768ccc:
  if (bVar4) {
    if (uVar19 == 0x5b) {
      local_90 = (undefined8 *)&DAT_00000007;
    }
    else {
      if (uVar19 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s__root__cargo_registry_src_index__00ad8408);
      }
      local_90 = (undefined8 *)&DAT_00000008;
    }
    goto LAB_00768ef0;
  }
LAB_00768ce0:
  if (uVar19 == 0x7b) {
    if (uVar12 <= uVar11) goto LAB_00768edc;
    while( true ) {
      bVar2 = *(byte *)(lVar10 + uVar11);
      if (0x22 < bVar2) goto LAB_007690b4;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      uVar11 = uVar11 + 1;
      *(ulong *)(pcVar7 + 0x28) = uVar11;
      if (uVar12 == uVar11) goto LAB_00768edc;
    }
    if ((ulong)bVar2 != 0x22) {
LAB_007690b4:
      local_90 = (undefined8 *)&DAT_00000011;
      goto LAB_00768ef0;
    }
    *(ulong *)(pcVar7 + 0x28) = uVar11 + 1;
    pcVar6 = (code *)<serde_json::read::StrRead_as_serde_json::read::Read>::ignore_str
                               (pcVar7 + 0x18);
    if (pcVar6 != (code *)0x0) goto LAB_00768f04;
    uVar12 = *(ulong *)(pcVar7 + 0x20);
    uVar11 = *(ulong *)(pcVar7 + 0x28);
    if (uVar12 <= uVar11) goto LAB_00768edc;
    lVar10 = *(long *)(pcVar7 + 0x18);
    while( true ) {
      bVar2 = *(byte *)(lVar10 + uVar11);
      if (0x3a < bVar2) goto LAB_00769000;
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
      uVar11 = uVar11 + 1;
      *(ulong *)(pcVar7 + 0x28) = uVar11;
      if (uVar12 == uVar11) goto LAB_00768edc;
    }
    if ((ulong)bVar2 != 0x3a) goto LAB_00769000;
    uVar11 = uVar11 + 1;
    *(ulong *)(pcVar7 + 0x28) = uVar11;
  }
  uVar16 = 1;
  if (uVar12 <= uVar11) goto LAB_00768eec;
  goto LAB_007689a4;
  while( true ) {
    uVar11 = uVar11 + 1;
    *(ulong *)(param_2 + 0x28) = uVar11;
    if (uVar12 == uVar11) break;
LAB_0076902c:
    bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar11);
    if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
      if (bVar2 == 0x5d) {
        local_90 = (undefined8 *)0x15;
        pcVar7 = (code *)FUN_0076b518(param_2,&local_90);
        goto LAB_00768ec4;
      }
      break;
    }
  }
LAB_0076911c:
  local_90 = (undefined8 *)0x16;
  pcVar7 = (code *)FUN_0076b518(param_2,&local_90);
LAB_00768ec4:
  if (bVar17) {
LAB_00768f34:
    pcVar7 = unaff_x21;
    FUN_00767720();
  }
LAB_00768f3c:
  uVar5 = FUN_00734c54(pcVar7,param_2);
LAB_00768f44:
  uVar9 = 1;
  *(undefined8 *)(param_1 + 2) = uVar5;
LAB_00769078:
  *param_1 = uVar9;
  return;
}


// ===== 007691bc  FUN_007691bc =====

void FUN_007691bc(undefined8 *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined1 *puStack_b8;
  undefined8 *local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  int local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 *local_70;
  long lStack_68;
  undefined1 uStack_41;
  
  uVar12 = *(ulong *)(param_2 + 0x28);
  if (uVar12 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar12);
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar2 != 0x7b) {
          puVar10 = (undefined1 *)FUN_0076ccd0(param_2,&uStack_41,&DAT_00ad8318);
          goto LAB_00769584;
        }
        cVar3 = *(char *)(param_2 + 0x30) + -1;
        *(char *)(param_2 + 0x30) = cVar3;
        puVar5 = PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
        if (cVar3 == '\0') {
          local_c0 = (undefined8 *)0x18;
          goto LAB_0076922c;
        }
        *(ulong *)(param_2 + 0x28) = uVar12 + 1;
        local_c8 = 1;
        uVar12 = *(ulong *)puVar5;
        local_d0 = param_2;
        if (uVar12 == 0) {
          uVar12 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                   lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
          plVar7 = (long *)pthread_getspecific((pthread_key_t)uVar12);
          if (plVar7 <= &DAT_00000001) goto LAB_0076966c;
        }
        else {
          plVar7 = (long *)pthread_getspecific((pthread_key_t)uVar12);
          if (plVar7 < (long *)0x2) {
LAB_0076966c:
            plVar7 = (long *)FUN_0072c9d4(uVar12 & 0xffffffff,plVar7,0);
          }
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
        }
        lVar13 = *plVar7;
        lVar1 = plVar7[1];
        uVar6 = 1;
        *plVar7 = lVar13 + 1;
        FUN_00700850(&local_80,0x20,0,1);
        puStack_b8 = puStack_78;
        local_c0 = local_80;
        lStack_a8 = lStack_68;
        local_b0 = local_70;
        local_a0 = lVar13;
        lStack_98 = lVar1;
        goto LAB_007692d0;
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(param_2 + 0x28) = uVar12;
    } while (*(ulong *)(param_2 + 0x20) != uVar12);
  }
  local_c0 = (undefined8 *)0x5;
LAB_0076922c:
  uVar6 = FUN_0076c300(param_2,&local_c0);
  goto LAB_00769590;
LAB_007692d0:
                    /* try { // try from 007692d0 to 00769317 has its CatchHandler @ 007696d8 */
  FUN_00767c3c(&local_80,&local_d0);
  lVar13 = local_d0;
  puVar10 = puStack_b8;
  puVar9 = puStack_78;
  if ((char)local_80 == '\x01') goto joined_r0x00769520;
  if (local_80._1_1_ != '\x01') {
    lStack_e8 = lStack_a8;
    local_f0 = local_b0;
    lStack_d8 = lStack_98;
    local_e0 = local_a0;
    puVar9 = puStack_b8;
    puVar14 = local_c0;
    goto LAB_007694d4;
  }
  *(undefined8 *)(local_d0 + 0x10) = 0;
  *(long *)(local_d0 + 0x28) = *(long *)(local_d0 + 0x28) + 1;
  <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str
            (&local_80,local_d0 + 0x18,local_d0);
  puVar9 = puStack_78;
  puVar10 = puStack_b8;
  if (local_80 == (undefined8 *)0x2) goto joined_r0x00769520;
  if ((long)local_70 < 0) {
    uVar6 = 0;
LAB_007693ec:
                    /* try { // try from 007693ec to 007693f7 has its CatchHandler @ 007696dc */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar6,local_70);
  }
  if (local_70 != (undefined8 *)0x0) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar8 = (undefined1 *)FUN_004b25a4(local_70,1);
    if (puVar8 == (undefined1 *)0x0) goto LAB_007693ec;
    memcpy(puVar8,puVar9,(size_t)local_70);
    uVar11 = *(ulong *)(lVar13 + 0x20);
    uVar12 = *(ulong *)(lVar13 + 0x28);
    if (uVar12 < uVar11) goto LAB_00769374;
LAB_007693fc:
    local_80 = (undefined8 *)0x3;
                    /* try { // try from 00769404 to 0076940f has its CatchHandler @ 007696a4 */
    puVar9 = (undefined1 *)FUN_0076c300(lVar13,&local_80);
joined_r0x0076953c:
    puVar10 = puStack_b8;
    if (local_70 != (undefined8 *)0x0) {
      free(puVar8);
      puVar10 = puStack_b8;
    }
    goto joined_r0x00769520;
  }
  puVar8 = &DAT_00000001;
  uVar11 = *(ulong *)(lVar13 + 0x20);
  uVar12 = *(ulong *)(lVar13 + 0x28);
  if (uVar11 <= uVar12) goto LAB_007693fc;
LAB_00769374:
  while( true ) {
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x18) + uVar12);
    if (0x3a < bVar2) goto LAB_0076968c;
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
    uVar12 = uVar12 + 1;
    *(ulong *)(lVar13 + 0x28) = uVar12;
    if (uVar11 == uVar12) goto LAB_007693fc;
  }
  if ((ulong)bVar2 != 0x3a) {
LAB_0076968c:
    local_80 = (undefined8 *)&DAT_00000006;
                    /* try { // try from 00769694 to 0076969f has its CatchHandler @ 007696a4 */
    puVar9 = (undefined1 *)FUN_0076c300(lVar13,&local_80);
    goto joined_r0x0076953c;
  }
  *(ulong *)(lVar13 + 0x28) = uVar12 + 1;
                    /* try { // try from 007693b4 to 007693bf has its CatchHandler @ 007696bc */
  FUN_00769b40(&local_90,lVar13);
  puVar9 = local_88;
  if (local_90 == 1) goto joined_r0x0076953c;
  local_80 = local_70;
                    /* try { // try from 007693d8 to 007693e3 has its CatchHandler @ 007696d8 */
  puStack_78 = puVar8;
  FUN_0075e308(&local_c0,&local_80,local_8c);
  goto LAB_007692d0;
joined_r0x00769520:
  if (puVar10 != (undefined1 *)0x0) {
    puStack_b8 = puVar10;
    if (lStack_a8 != 0) {
      puVar15 = local_c0 + 1;
      uVar12 = NEON_cmge(*local_c0,0,1);
      uVar12 = uVar12 & 0x8080808080808080;
      puVar14 = local_c0;
      lVar13 = lStack_a8;
      do {
        for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
          uVar12 = NEON_cmge(*puVar15,0,1);
          puVar14 = puVar14 + -0x20;
          puVar15 = puVar15 + 1;
        }
        uVar11 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) & 0x78;
        if (*(long *)((long)puVar14 + uVar11 * -4 + -0x20) != 0) {
          free(*(void **)((long)puVar14 + uVar11 * -4 + -0x18));
        }
        lVar13 = lVar13 + -1;
        uVar12 = uVar12 - 1 & uVar12;
      } while (lVar13 != 0);
    }
    if ((long)puVar10 * 0x21 != -0x29) {
      free(local_c0 + (long)puVar10 * -4 + -4);
    }
  }
  puVar14 = (undefined8 *)0x0;
LAB_007694d4:
  *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
  lStack_a8 = lStack_e8;
  local_b0 = local_f0;
  lStack_98 = lStack_d8;
  local_a0 = local_e0;
  local_c0 = puVar14;
  puStack_b8 = puVar9;
                    /* try { // try from 007694ec to 007694f3 has its CatchHandler @ 007696a8 */
  puVar8 = (undefined1 *)FUN_0076d3e0(param_2);
  if (puVar14 == (undefined8 *)0x0) {
    puVar10 = puVar9;
    if (puVar8 != (undefined1 *)0x0) {
      FUN_00767720(puVar8);
    }
  }
  else {
    if (puVar8 == (undefined1 *)0x0) {
      *param_1 = puVar14;
      param_1[1] = puVar9;
      param_1[3] = lStack_a8;
      param_1[2] = local_b0;
      param_1[5] = lStack_d8;
      param_1[4] = local_e0;
      return;
    }
    puVar10 = puVar8;
    if (puVar9 != (undefined1 *)0x0) {
      if (lStack_a8 != 0) {
        puVar15 = puVar14 + 1;
        uVar12 = NEON_cmge(*puVar14,0,1);
        uVar12 = uVar12 & 0x8080808080808080;
        puVar4 = puVar14;
        lVar13 = lStack_a8;
        do {
          for (; uVar12 == 0; uVar12 = uVar12 & 0x8080808080808080) {
            uVar12 = NEON_cmge(*puVar15,0,1);
            puVar15 = puVar15 + 1;
            puVar4 = puVar4 + -0x20;
          }
          uVar11 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) & 0x78;
          if (*(long *)((long)puVar4 + uVar11 * -4 + -0x20) != 0) {
            free(*(void **)((long)puVar4 + uVar11 * -4 + -0x18));
          }
          lVar13 = lVar13 + -1;
          uVar12 = uVar12 - 1 & uVar12;
        } while (lVar13 != 0);
      }
      if ((long)puVar9 * 0x21 != -0x29) {
        free(puVar14 + (long)puVar9 * -4 + -4);
      }
    }
  }
LAB_00769584:
  uVar6 = FUN_00734cc8(puVar10,param_2);
LAB_00769590:
  *param_1 = 0;
  param_1[1] = uVar6;
  return;
}


// ===== 007696f4  FUN_007696f4 =====

void FUN_007696f4(long *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *__ptr;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x24;
  long local_90;
  undefined1 local_88;
  long local_80;
  undefined1 *local_78;
  long local_70;
  undefined8 local_68;
  undefined1 *local_60;
  long local_58;
  undefined1 uStack_31;
  
  uVar8 = *(ulong *)(param_2 + 0x28);
  if (uVar8 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + uVar8);
      if ((0x20 < bVar1) || ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar1 != 0x5b) {
          puVar6 = (undefined1 *)FUN_0076ccd0(param_2,&uStack_31,&DAT_00ad8378);
          goto LAB_00769914;
        }
        cVar2 = *(char *)(param_2 + 0x30) + -1;
        *(char *)(param_2 + 0x30) = cVar2;
        if (cVar2 != '\0') {
          *(ulong *)(param_2 + 0x28) = uVar8 + 1;
          local_88 = 1;
          local_80 = 0;
          local_78 = &DAT_00000008;
          local_70 = 0;
          local_90 = param_2;
          goto LAB_007697d0;
        }
        local_68 = 0x18;
        goto LAB_00769760;
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(param_2 + 0x28) = uVar8;
    } while (*(ulong *)(param_2 + 0x20) != uVar8);
  }
  local_68 = 5;
LAB_00769760:
  lVar4 = FUN_0076c300(param_2,&local_68);
  goto LAB_00769920;
LAB_007697d0:
                    /* try { // try from 007697d0 to 007697ff has its CatchHandler @ 007699ac */
  FUN_00767918(&local_68,&local_90);
  __ptr = local_60;
  if ((char)local_68 == '\x01') goto LAB_00769830;
  __ptr = local_78;
  lVar10 = local_80;
  lVar4 = local_70;
  if (local_68._1_1_ != '\x01') goto LAB_00769894;
  FUN_007699c0(&local_68,local_90);
  lVar3 = local_58;
  puVar6 = local_60;
  lVar10 = local_68;
  lVar4 = local_70;
  __ptr = local_60;
  if (local_68 == -1) goto LAB_00769830;
  if (local_70 == local_80) {
                    /* try { // try from 00769820 to 00769827 has its CatchHandler @ 00769990 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<addr2line::function::FunctionAddress>>::grow_one
              (&local_80);
  }
  local_70 = lVar4 + 1;
  plVar7 = (long *)(local_78 + lVar4 * 0x18);
  *plVar7 = lVar10;
  plVar7[1] = (long)puVar6;
  plVar7[2] = lVar3;
  unaff_x24 = lVar4;
  goto LAB_007697d0;
LAB_00769830:
  if (local_70 != 0) {
    puVar9 = (undefined8 *)(local_78 + 8);
    lVar4 = local_70;
    do {
      if (puVar9[-1] != 0) {
        free((void *)*puVar9);
      }
      lVar4 = lVar4 + -1;
      puVar9 = puVar9 + 3;
    } while (lVar4 != 0);
  }
  if (local_80 != 0) {
    free(local_78);
  }
  lVar10 = -1;
  lVar4 = unaff_x24;
LAB_00769894:
  *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
  local_68 = lVar10;
  local_60 = __ptr;
  local_58 = lVar4;
                    /* try { // try from 007698a8 to 007698af has its CatchHandler @ 0076997c */
  puVar5 = (undefined1 *)FUN_0076d488(param_2);
  if (lVar10 == -1) {
    puVar6 = __ptr;
    if (puVar5 != (undefined1 *)0x0) {
      FUN_00767720(puVar5);
    }
  }
  else {
    if (puVar5 == (undefined1 *)0x0) {
      *param_1 = lVar10;
      param_1[1] = (long)__ptr;
      param_1[2] = lVar4;
      return;
    }
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)(__ptr + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar4 = lVar4 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar4 != 0);
    }
    puVar6 = puVar5;
    if (lVar10 != 0) {
      free(__ptr);
    }
  }
LAB_00769914:
  lVar4 = FUN_00734cc8(puVar6,param_2);
LAB_00769920:
  *param_1 = -1;
  param_1[1] = lVar4;
  return;
}


// ===== 007699c0  FUN_007699c0 =====

void FUN_007699c0(size_t *param_1,long param_2)

{
  byte bVar1;
  size_t sVar2;
  undefined1 *__dest;
  ulong uVar3;
  undefined8 uVar4;
  long local_58;
  void *pvStack_50;
  size_t local_48;
  undefined1 uStack_21;
  
  uVar3 = *(ulong *)(param_2 + 0x28);
  if (uVar3 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + uVar3);
      if (0x22 < bVar1) {
LAB_00769b20:
        uVar4 = FUN_0076ccd0(param_2,&uStack_21,&DAT_00ad8398);
        sVar2 = FUN_00734cc8(uVar4,param_2);
        goto LAB_00769a3c;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 == 0x22) {
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(ulong *)(param_2 + 0x28) = uVar3 + 1;
          <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str
                    (&local_58,(long *)(param_2 + 0x18),param_2);
          if (local_58 == 2) {
            *param_1 = 0xffffffffffffffff;
            param_1[1] = (size_t)pvStack_50;
            return;
          }
          if ((long)local_48 < 0) {
            uVar4 = 0;
LAB_00769ab8:
                    /* WARNING: Subroutine does not return */
            alloc::raw_vec::handle_error(uVar4,local_48);
          }
          if (local_48 == 0) {
            sVar2 = 0;
            __dest = &DAT_00000001;
          }
          else {
            __rustc::__rust_no_alloc_shim_is_unstable_v2();
            uVar4 = 1;
            __dest = (undefined1 *)FUN_004b25a4(local_48,1);
            if (__dest == (undefined1 *)0x0) goto LAB_00769ab8;
            memcpy(__dest,pvStack_50,local_48);
            sVar2 = local_48;
          }
          *param_1 = sVar2;
          param_1[1] = (size_t)__dest;
          param_1[2] = local_48;
          return;
        }
        goto LAB_00769b20;
      }
      uVar3 = uVar3 + 1;
      *(ulong *)(param_2 + 0x28) = uVar3;
    } while (*(ulong *)(param_2 + 0x20) != uVar3);
  }
  local_58 = 5;
  sVar2 = FUN_0076c300(param_2,&local_58);
LAB_00769a3c:
  *param_1 = 0xffffffffffffffff;
  param_1[1] = sVar2;
  return;
}


// ===== 00769b40  FUN_00769b40 =====

void FUN_00769b40(undefined4 *param_1,code *param_2)

{
  code cVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  code *unaff_x21;
  undefined4 unaff_w22;
  bool bVar9;
  code *local_98;
  undefined1 local_90;
  undefined8 local_88;
  code *local_80;
  long local_78;
  undefined8 local_70;
  code *local_68;
  undefined1 uStack_41;
  
  uVar8 = *(ulong *)(param_2 + 0x28);
  if (uVar8 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar8);
      if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
        if (bVar2 == 0x5b) {
          cVar1 = param_2[0x30];
          param_2[0x30] = (code)((char)cVar1 + -1);
          if ((code)((char)cVar1 + -1) != (code)0x0) {
            *(ulong *)(param_2 + 0x28) = uVar8 + 1;
            local_68 = (code *)CONCAT71(local_68._1_7_,1);
            local_70 = (char *)param_2;
            FUN_00767918(&local_88,&local_70);
            pcVar5 = local_80;
            if ((char)local_88 == '\x01') {
LAB_00769cbc:
              bVar9 = true;
              unaff_x21 = pcVar5;
            }
            else {
              if (local_88._1_1_ != '\x01') {
                pcVar5 = (code *)FUN_0073b56c(0,&PTR_s_struct_CacheableExperimentConfig_00ad82d8,
                                              &DAT_00ad82e8);
                goto LAB_00769cbc;
              }
              FUN_00767fcc(&local_88,local_70);
              pcVar5 = local_80;
              if ((int)local_88 == 1) goto LAB_00769cbc;
              bVar9 = false;
              unaff_w22 = local_88._4_4_;
            }
            param_2[0x30] = (code)((char)param_2[0x30] + '\x01');
                    /* try { // try from 00769e14 to 00769e1b has its CatchHandler @ 00769f48 */
            pcVar5 = (code *)FUN_0076d488(param_2);
            goto joined_r0x00769e1c;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            unaff_x21 = (code *)FUN_0076ccd0(param_2,&uStack_41,&DAT_00ad8338);
            goto LAB_00769c40;
          }
          cVar1 = param_2[0x30];
          param_2[0x30] = (code)((char)cVar1 + -1);
          if ((code)((char)cVar1 + -1) != (code)0x0) {
            *(ulong *)(param_2 + 0x28) = uVar8 + 1;
            local_90 = 1;
            local_98 = param_2;
            FUN_00767c3c(&local_88,&local_98);
            pcVar5 = local_80;
            if (((ulong)local_88 & 1) != 0) goto LAB_00769c14;
            bVar9 = false;
            goto LAB_00769cf8;
          }
        }
        local_88 = (undefined8 *)0x18;
        uVar4 = FUN_0076c300(param_2,&local_88);
        *(undefined8 *)(param_1 + 2) = uVar4;
        uVar7 = 1;
        goto LAB_00769e2c;
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(param_2 + 0x28) = uVar8;
    } while (*(ulong *)(param_2 + 0x20) != uVar8);
  }
  local_88 = (undefined8 *)0x5;
  uVar4 = FUN_0076c300(param_2,&local_88);
  goto LAB_00769c48;
LAB_00769cf8:
  do {
    pcVar3 = local_98;
    if (local_88._1_1_ != '\x01') {
      if (bVar9) {
        bVar9 = false;
        goto LAB_00769c1c;
      }
      puVar6 = &DAT_002a3696;
LAB_00769eb4:
      local_68 = (code *)0xb;
      local_70 = "treatmentId";
      local_88 = &local_70;
      local_80 = FUN_00753284;
      pcVar5 = (code *)FUN_00739c74(puVar6,&local_88);
      break;
    }
    *(long *)(local_98 + 0x10) = 0;
    *(long *)(local_98 + 0x28) = *(long *)(local_98 + 0x28) + 1;
    <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str
              (&local_88,local_98 + 0x18,local_98);
    pcVar5 = local_80;
    if (local_88 == (undefined8 *)0x2) break;
    if ((local_78 == 0xb) &&
       (*(long *)local_80 == 0x6e656d7461657274 && *(long *)(local_80 + 3) == 0x6449746e656d7461)) {
      if (bVar9) {
        puVar6 = &DAT_002a4623;
        goto LAB_00769eb4;
      }
      uVar8 = *(ulong *)(pcVar3 + 0x28);
      if (uVar8 < *(ulong *)(pcVar3 + 0x20)) {
        while( true ) {
          bVar2 = *(byte *)(*(long *)(pcVar3 + 0x18) + uVar8);
          if (0x3a < bVar2) goto LAB_00769f40;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          uVar8 = uVar8 + 1;
          *(ulong *)(pcVar3 + 0x28) = uVar8;
          if (*(ulong *)(pcVar3 + 0x20) == uVar8) goto LAB_00769ec4;
        }
        if ((ulong)bVar2 == 0x3a) {
          *(ulong *)(pcVar3 + 0x28) = uVar8 + 1;
          FUN_00767fcc(&local_70,pcVar3);
          pcVar5 = local_68;
          if (((ulong)local_70 & 1) == 0) {
            unaff_w22 = local_70._4_4_;
            bVar9 = true;
            FUN_00767c3c(&local_88,&local_98);
            pcVar5 = local_80;
            goto joined_r0x00769d70;
          }
          break;
        }
LAB_00769f40:
        local_88 = (undefined8 *)&DAT_00000006;
      }
      else {
LAB_00769ec4:
        local_88 = (undefined8 *)0x3;
      }
      pcVar5 = (code *)FUN_0076c300(pcVar3,&local_88);
      break;
    }
    pcVar5 = (code *)FUN_0076a898(pcVar3);
    if (pcVar5 != (code *)0x0) break;
    FUN_00767c3c(&local_88,&local_98);
    pcVar5 = local_80;
joined_r0x00769d70:
    unaff_x21 = pcVar3;
    local_80 = pcVar5;
  } while (((ulong)local_88 & 1) == 0);
LAB_00769c14:
  bVar9 = true;
  unaff_x21 = pcVar5;
LAB_00769c1c:
  param_2[0x30] = (code)((char)param_2[0x30] + '\x01');
                    /* try { // try from 00769c28 to 00769c2f has its CatchHandler @ 00769f5c */
  pcVar5 = (code *)FUN_0076d3e0(param_2);
joined_r0x00769e1c:
  if (bVar9) {
    if (pcVar5 != (code *)0x0) {
      FUN_00767720();
    }
  }
  else {
    unaff_x21 = pcVar5;
    if (pcVar5 == (code *)0x0) {
      uVar7 = 0;
      param_1[1] = unaff_w22;
      goto LAB_00769e2c;
    }
  }
LAB_00769c40:
  uVar4 = FUN_00734cc8(unaff_x21,param_2);
LAB_00769c48:
  uVar7 = 1;
  *(undefined8 *)(param_1 + 2) = uVar4;
LAB_00769e2c:
  *param_1 = uVar7;
  return;
}


// ===== 00769f78  FUN_00769f78 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00769f78(undefined8 *param_1,char *******param_2)

{
  char cVar1;
  byte bVar2;
  char *******pppppppcVar3;
  char *******pppppppcVar4;
  bool bVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  char ******ppppppcVar10;
  code *extraout_x8;
  code *pcVar11;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  char *******extraout_x9;
  char *******extraout_x9_00;
  char *******extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  code *extraout_x9_05;
  code *extraout_x9_06;
  char *******extraout_x9_07;
  char *******extraout_x9_08;
  char *******extraout_x9_09;
  code *extraout_x9_10;
  char *******extraout_x9_11;
  code *extraout_x9_12;
  code *extraout_x9_13;
  code *extraout_x9_14;
  code *extraout_x9_15;
  code *extraout_x9_16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *unaff_x22;
  code *pcVar12;
  code *unaff_x24;
  code *unaff_x25;
  char *******pppppppcVar13;
  char *******pppppppcVar14;
  char *******pppppppcVar15;
  code *local_178;
  code *local_170;
  char *******pppppppcStack_168;
  code *local_160;
  code *local_158;
  code *local_150;
  code *local_140;
  char *******pppppppcStack_138;
  code *pcStack_130;
  code *pcStack_128;
  undefined8 local_120;
  code *pcStack_118;
  code *local_110;
  char *******pppppppcStack_108;
  code *local_100;
  code *pcStack_f8;
  code *local_f0;
  char *******local_e0;
  code *pcStack_d8;
  code *local_d0;
  char *******pppppppcStack_c8;
  code *local_c0;
  code *pcStack_b8;
  char *******local_b0;
  undefined1 local_a8;
  char *******local_a0;
  code *local_98;
  code *local_90;
  char *******local_88;
  code *local_80;
  undefined1 auStack_69 [9];
  
  ppppppcVar10 = param_2[5];
  if (ppppppcVar10 < param_2[4]) {
    do {
      bVar2 = *(byte *)((long)param_2[3] + (long)ppppppcVar10);
      if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if (bVar2 != 0x5b) {
          if (bVar2 != 0x7b) {
            pcVar9 = (code *)FUN_0076ccd0(param_2,auStack_69,&DAT_00ad83b8);
            goto LAB_0076a70c;
          }
          cVar1 = *(char *)(param_2 + 6);
          *(char *)(param_2 + 6) = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            param_2[5] = (char ******)((long)ppppppcVar10 + 1);
            local_170 = (code *)&DAT_00000005;
            pppppppcStack_168 = (char *******)0x2d1a06;
            pppppppcVar13 = (char *******)0xffffffffffffffff;
            local_a8 = 1;
            local_b0 = param_2;
            pcVar9 = local_160;
            pppppppcVar4 = (char *******)0xffffffffffffffff;
            goto LAB_0076a070;
          }
LAB_0076a6ec:
          local_120 = (char *******)0x18;
          goto LAB_00769fe8;
        }
        cVar1 = *(char *)(param_2 + 6);
        *(char *)(param_2 + 6) = cVar1 + -1;
        if ((char)(cVar1 + -1) == '\0') goto LAB_0076a6ec;
        param_2[5] = (char ******)((long)ppppppcVar10 + 1);
        local_80 = (code *)CONCAT71(local_80._1_7_,1);
        local_88 = param_2;
        FUN_00767918(&local_120,&local_88);
        if ((char)local_120 == '\x01') {
          pppppppcVar13 = (char *******)0xffffffffffffffff;
          pcStack_b8 = (code *)((ulong)local_120 & 0xff);
          pppppppcStack_c8 = extraout_x9;
          pcVar9 = pcStack_118;
          goto LAB_0076a524;
        }
        if (local_120._1_1_ != '\x01') {
          pcVar9 = (code *)FUN_0073b56c(0,&PTR_s_struct_DeltaResponse_with_2_elem_00ad8308,
                                        &DAT_00ad82e8);
          pppppppcVar13 = (char *******)0xffffffffffffffff;
          pcStack_b8 = extraout_x8_04;
          pppppppcStack_c8 = extraout_x9_11;
          goto LAB_0076a524;
        }
        FUN_007696f4(&local_120,local_88);
        pcVar7 = local_110;
        pcVar9 = pcStack_118;
        pppppppcVar13 = local_120;
        pcStack_b8 = extraout_x8;
        pppppppcStack_c8 = extraout_x9_00;
        if (local_120 == (char *******)0xffffffffffffffff) goto LAB_0076a524;
        local_e0 = local_120;
        pcStack_d8 = pcStack_118;
        local_d0 = local_110;
                    /* try { // try from 0076a2b0 to 0076a2bb has its CatchHandler @ 0076a820 */
        FUN_00767918(&local_120,&local_88);
        pcVar11 = (code *)((ulong)local_120 & 0xff);
        pppppppcStack_c8 = extraout_x9_01;
        unaff_x22 = pcStack_118;
        if ((char)local_120 != '\x01') {
          if (local_120._1_1_ == '\x01') {
                    /* try { // try from 0076a458 to 0076a45f has its CatchHandler @ 0076a820 */
            FUN_007696f4(&local_120,local_88);
            pcStack_b8 = local_110;
            pcVar11 = extraout_x8_00;
            pppppppcStack_c8 = local_120;
            unaff_x22 = pcStack_118;
            unaff_x24 = pcVar7;
            if (local_120 != (char *******)0xffffffffffffffff) goto LAB_0076a524;
          }
          else {
                    /* try { // try from 0076a4b8 to 0076a4cf has its CatchHandler @ 0076a820 */
            unaff_x22 = (code *)FUN_0073b56c(1,&PTR_s_struct_DeltaResponse_with_2_elem_00ad8308,
                                             &DAT_00ad82e8);
            pcVar11 = extraout_x8_01;
            pppppppcStack_c8 = extraout_x9_07;
          }
        }
        if (pcVar7 != (code *)0x0) {
          pcVar8 = pcVar9 + 8;
          do {
            if (*(long *)(pcVar8 + -8) != 0) {
              free(*(void **)pcVar8);
              pcVar11 = extraout_x8_02;
              pppppppcStack_c8 = extraout_x9_08;
            }
            pcVar7 = pcVar7 + -1;
            pcVar8 = pcVar8 + 0x18;
          } while (pcVar7 != (code *)0x0);
        }
        if (pppppppcVar13 != (char *******)0x0) {
          free(pcVar9);
          pcVar11 = extraout_x8_03;
          pppppppcStack_c8 = extraout_x9_09;
        }
        pppppppcVar13 = (char *******)0xffffffffffffffff;
        pcStack_b8 = pcVar11;
        pcVar9 = unaff_x22;
        unaff_x24 = pcVar7;
LAB_0076a524:
        *(char *)(param_2 + 6) = *(char *)(param_2 + 6) + '\x01';
        local_e0 = pppppppcVar13;
        pcStack_d8 = pcVar9;
        local_d0 = unaff_x24;
        local_c0 = unaff_x22;
                    /* try { // try from 0076a53c to 0076a543 has its CatchHandler @ 0076a83c */
        pcVar7 = (code *)FUN_0076d488(param_2);
        pppppppcVar13 = local_e0;
        pcVar9 = pcStack_d8;
        local_110 = local_d0;
        pppppppcStack_108 = pppppppcStack_c8;
        local_100 = local_c0;
        pcStack_f8 = pcStack_b8;
        goto joined_r0x0076a3ec;
      }
      ppppppcVar10 = (char ******)((long)ppppppcVar10 + 1);
      param_2[5] = ppppppcVar10;
    } while (param_2[4] != ppppppcVar10);
  }
  local_120 = (char *******)0x5;
LAB_00769fe8:
  uVar6 = FUN_0076c300(param_2,&local_120);
  goto LAB_00769ff8;
LAB_0076a070:
  do {
                    /* try { // try from 0076a070 to 0076a163 has its CatchHandler @ 0076a850 */
    pcVar7 = unaff_x25;
    pppppppcVar15 = pppppppcVar4;
    local_160 = pcVar9;
    FUN_00767c3c(&local_120,&local_b0);
    pppppppcVar3 = local_b0;
    pcVar11 = extraout_x11;
    pcVar8 = pcStack_118;
    local_a0 = pppppppcVar13;
    local_88 = pppppppcVar15;
    if ((char)local_120 == '\x01') break;
    if (local_120._1_1_ != '\x01') {
      local_80 = local_160;
      local_98 = local_158;
      bVar5 = pppppppcVar13 == (char *******)0xffffffffffffffff;
      local_90 = local_150;
      if (bVar5) {
        local_e0 = (char *******)0x2d1a06;
        pcStack_d8 = (code *)&DAT_00000005;
        local_120 = (char *******)&local_e0;
        pcStack_118 = FUN_00753284;
                    /* try { // try from 0076a498 to 0076a4af has its CatchHandler @ 0076a818 */
        pcVar8 = (code *)FUN_00739c74(&DAT_002a3696,&local_120);
        local_160 = extraout_x9_06;
        pcVar11 = extraout_x11_08;
        goto LAB_0076a2f8;
      }
      local_160 = local_150;
      if (pppppppcVar15 != (char *******)0xffffffffffffffff) goto LAB_0076a3b0;
      local_e0 = (char *******)0x2d1a0b;
      pcStack_d8 = (code *)&DAT_00000007;
      local_120 = (char *******)&local_e0;
      pcStack_118 = FUN_00753284;
                    /* try { // try from 0076a5dc to 0076a5eb has its CatchHandler @ 0076a7f4 */
      pcVar8 = (code *)FUN_00739c74(&DAT_002a3696,&local_120);
      FUN_007675d0(&local_a0);
      local_160 = extraout_x9_10;
      pcVar11 = extraout_x11_09;
      goto LAB_0076a2f8;
    }
    local_b0[2] = (char ******)0x0;
    local_b0[5] = (char ******)((long)local_b0[5] + 1);
    <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str
              (&local_120,local_b0 + 3,local_b0);
    pcVar11 = extraout_x11_00;
    pcVar8 = pcStack_118;
    if (local_120 == (char *******)0x2) break;
    pcVar9 = local_160;
    pppppppcVar4 = pppppppcVar15;
    unaff_x25 = pcVar7;
    if (local_110 != (code *)&DAT_00000007) {
      if ((local_110 != (code *)&DAT_00000005) ||
         (*(int *)pcStack_118 != 0x45444441 || pcStack_118[4] != (code)0x44)) goto LAB_0076a15c;
      if (pppppppcVar13 != (char *******)0xffffffffffffffff) {
LAB_0076a72c:
        local_80 = local_160;
        local_98 = local_158;
        local_90 = local_150;
        local_e0 = pppppppcStack_168;
        pcStack_d8 = local_170;
        local_120 = (char *******)&local_e0;
        pcStack_118 = FUN_00753284;
                    /* try { // try from 0076a75c to 0076a7ef has its CatchHandler @ 0076a818 */
        pcVar8 = (code *)FUN_00739c74(&DAT_002a4623,&local_120);
        bVar5 = true;
        local_160 = extraout_x9_14;
        pcVar11 = extraout_x11_12;
        goto LAB_0076a2f8;
      }
      ppppppcVar10 = pppppppcVar3[5];
      if (ppppppcVar10 < pppppppcVar3[4]) {
        while( true ) {
          bVar2 = *(byte *)((long)pppppppcVar3[3] + (long)ppppppcVar10);
          if (0x3a < bVar2) goto LAB_0076a7bc;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          ppppppcVar10 = (char ******)((long)ppppppcVar10 + 1);
          pppppppcVar3[5] = ppppppcVar10;
          if (pppppppcVar3[4] == ppppppcVar10) goto LAB_0076a664;
        }
        if ((ulong)bVar2 == 0x3a) {
          pppppppcVar3[5] = (char ******)((long)ppppppcVar10 + 1);
                    /* try { // try from 0076a180 to 0076a18b has its CatchHandler @ 0076a80c */
          FUN_007696f4(&local_e0,pppppppcVar3);
          if (local_e0 != (char *******)0xffffffffffffffff) {
            local_150 = local_d0;
            pppppppcVar13 = local_e0;
            local_158 = pcStack_d8;
            goto LAB_0076a070;
          }
          local_80 = local_160;
          local_160 = (code *)0xffffffffffffffff;
          local_98 = local_158;
          local_90 = local_150;
          local_a0 = (char *******)0xffffffffffffffff;
          pcVar11 = extraout_x11_02;
          pcVar8 = pcStack_d8;
        }
        else {
LAB_0076a7bc:
          local_80 = local_160;
          local_a0 = (char *******)0xffffffffffffffff;
          local_98 = local_158;
          local_90 = local_150;
          local_120 = (char *******)&DAT_00000006;
          pcVar8 = (code *)FUN_0076c300(pppppppcVar3,&local_120);
          local_160 = extraout_x9_16;
          pcVar11 = extraout_x11_14;
        }
      }
      else {
LAB_0076a664:
        local_80 = local_160;
        local_a0 = (char *******)0xffffffffffffffff;
        local_98 = local_158;
        local_90 = local_150;
        local_120 = (char *******)0x3;
        pcVar8 = (code *)FUN_0076c300(pppppppcVar3,&local_120);
        local_160 = extraout_x9_13;
        pcVar11 = extraout_x11_11;
      }
      bVar5 = true;
      pppppppcVar13 = (char *******)0xffffffffffffffff;
      goto LAB_0076a2f8;
    }
    if (*(int *)pcStack_118 == 0x4f4d4552 && *(int *)(pcStack_118 + 3) == 0x4445564f) {
      if (pppppppcVar15 != (char *******)0xffffffffffffffff) {
        local_170 = (code *)&DAT_00000007;
        pppppppcStack_168 = (char *******)0x2d1a0b;
        goto LAB_0076a72c;
      }
      ppppppcVar10 = pppppppcVar3[5];
      pppppppcVar14 = pppppppcVar13;
      if (ppppppcVar10 < pppppppcVar3[4]) {
        while( true ) {
          bVar2 = *(byte *)((long)pppppppcVar3[3] + (long)ppppppcVar10);
          if (0x3a < bVar2) goto LAB_0076a780;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          ppppppcVar10 = (char ******)((long)ppppppcVar10 + 1);
          pppppppcVar3[5] = ppppppcVar10;
          if (pppppppcVar3[4] == ppppppcVar10) goto LAB_0076a620;
        }
        if ((ulong)bVar2 == 0x3a) {
          pppppppcVar3[5] = (char ******)((long)ppppppcVar10 + 1);
                    /* try { // try from 0076a208 to 0076a213 has its CatchHandler @ 0076a7fc */
          FUN_007696f4(&local_e0,pppppppcVar3);
          local_178 = pcStack_d8;
          pcVar9 = local_178;
          pppppppcVar4 = local_e0;
          unaff_x25 = local_d0;
          if (local_e0 == (char *******)0xffffffffffffffff) {
            local_80 = local_160;
            local_98 = local_158;
            bVar5 = true;
            local_90 = local_150;
            pcVar11 = extraout_x11_03;
            local_158 = pcStack_d8;
            goto LAB_0076a350;
          }
          goto LAB_0076a070;
        }
LAB_0076a780:
        local_98 = local_158;
        local_80 = local_160;
        local_90 = local_150;
        local_120 = (char *******)&DAT_00000006;
        local_158 = (code *)FUN_0076c300(pppppppcVar3,&local_120);
        local_160 = extraout_x9_15;
        pcVar11 = extraout_x11_13;
      }
      else {
LAB_0076a620:
        local_98 = local_158;
        local_80 = local_160;
        local_90 = local_150;
        local_120 = (char *******)0x3;
                    /* try { // try from 0076a644 to 0076a697 has its CatchHandler @ 0076a818 */
        local_158 = (code *)FUN_0076c300(pppppppcVar3,&local_120);
        local_160 = extraout_x9_12;
        pcVar11 = extraout_x11_10;
      }
      bVar5 = true;
      goto LAB_0076a350;
    }
LAB_0076a15c:
    pcVar8 = (code *)FUN_0076a898(pppppppcVar3);
    pcVar11 = extraout_x11_01;
  } while (pcVar8 == (code *)0x0);
  local_80 = local_160;
  local_98 = local_158;
  bVar5 = true;
  local_90 = local_150;
LAB_0076a2f8:
  local_158 = pcVar8;
  pppppppcVar14 = pppppppcVar13;
  if (pppppppcVar15 != (char *******)0xffffffffffffffff) {
    if (pcVar7 != (code *)0x0) {
      pcVar9 = local_178 + 8;
      do {
        if (*(long *)(pcVar9 + -8) != 0) {
          free(*(void **)pcVar9);
          local_160 = extraout_x9_02;
          pcVar11 = extraout_x11_04;
        }
        pcVar7 = pcVar7 + -1;
        pcVar9 = pcVar9 + 0x18;
      } while (pcVar7 != (code *)0x0);
    }
    if (pppppppcVar15 != (char *******)0x0) {
      free(local_178);
      local_160 = extraout_x9_03;
      pcVar11 = extraout_x11_05;
      pppppppcVar14 = local_a0;
    }
  }
LAB_0076a350:
  pcVar9 = local_98;
  pppppppcVar13 = (char *******)0xffffffffffffffff;
  local_178 = pcVar11;
  if ((bVar5) && (pppppppcVar14 != (char *******)0xffffffffffffffff)) {
    if (local_90 != (code *)0x0) {
      pcVar8 = local_98 + 8;
      pcVar12 = local_90;
      do {
        if (*(long *)(pcVar8 + -8) != 0) {
          free(*(void **)pcVar8);
          local_160 = extraout_x9_04;
          pcVar11 = extraout_x11_06;
        }
        pcVar12 = pcVar12 + -1;
        pcVar8 = pcVar8 + 0x18;
      } while (pcVar12 != (code *)0x0);
    }
    if (pppppppcVar14 != (char *******)0x0) {
      free(pcVar9);
      local_160 = extraout_x9_05;
      pcVar11 = extraout_x11_07;
    }
    pppppppcVar13 = (char *******)0xffffffffffffffff;
    local_178 = pcVar11;
  }
LAB_0076a3b0:
  *(char *)(param_2 + 6) = *(char *)(param_2 + 6) + '\x01';
  local_e0 = pppppppcVar13;
  pcStack_d8 = local_158;
  local_d0 = local_160;
  pppppppcStack_c8 = pppppppcVar15;
  local_c0 = local_178;
  pcStack_b8 = pcVar7;
                    /* try { // try from 0076a3c8 to 0076a3cf has its CatchHandler @ 0076a82c */
  pcVar7 = (code *)FUN_0076d3e0(param_2);
  pppppppcVar13 = local_e0;
  pcVar9 = pcStack_d8;
  local_110 = local_d0;
  pppppppcStack_108 = pppppppcStack_c8;
  local_100 = local_c0;
  pcStack_f8 = pcStack_b8;
joined_r0x0076a3ec:
  pcStack_b8 = pcStack_f8;
  pppppppcStack_c8 = pppppppcStack_108;
  local_120 = pppppppcVar13;
  pcStack_118 = pcVar9;
  local_f0 = pcVar7;
  local_e0 = pppppppcVar13;
  pcStack_d8 = pcVar9;
  local_d0 = local_110;
  local_c0 = local_100;
  if (pppppppcVar13 == (char *******)0xffffffffffffffff) {
    if (pcVar7 != (code *)0x0) {
      FUN_00767720();
    }
LAB_0076a584:
    pppppppcVar13 = (char *******)0xffffffffffffffff;
    pcVar11 = local_140;
    pppppppcVar4 = pppppppcStack_138;
    pcVar8 = pcStack_130;
    pcVar12 = pcStack_128;
  }
  else {
    pcVar11 = local_110;
    pppppppcVar4 = pppppppcStack_108;
    pcVar8 = local_100;
    pcVar12 = pcStack_f8;
    if (pcVar7 != (code *)0x0) {
      FUN_00767848(&local_120);
      pcVar9 = pcVar7;
      goto LAB_0076a584;
    }
  }
  pcStack_128 = pcVar12;
  pcStack_130 = pcVar8;
  pppppppcStack_138 = pppppppcVar4;
  local_140 = pcVar11;
  if (pppppppcVar13 != (char *******)0xffffffffffffffff) {
    *param_1 = pppppppcVar13;
    param_1[1] = pcVar9;
    param_1[3] = pppppppcStack_138;
    param_1[2] = local_140;
    param_1[5] = pcStack_128;
    param_1[4] = pcStack_130;
    return;
  }
LAB_0076a70c:
  uVar6 = FUN_00734cc8(pcVar9,param_2);
LAB_00769ff8:
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar6;
  return;
}


// ===== 0076a898  FUN_0076a898 =====

long FUN_0076a898(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 local_68 [3];
  
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  if (uVar6 < uVar5) {
    plVar10 = param_1 + 3;
    lVar4 = *plVar10;
    do {
      bVar1 = *(byte *)(lVar4 + uVar6);
      if (0x3a < bVar1) goto LAB_0076add4;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x3a) goto LAB_0076add4;
        uVar6 = uVar6 + 1;
        param_1[2] = 0;
        param_1[5] = uVar6;
        if (uVar5 <= uVar6) goto LAB_0076ad7c;
        uVar12 = 0;
        uVar13 = 0;
        goto LAB_0076a954;
      }
      uVar6 = uVar6 + 1;
      param_1[5] = uVar6;
    } while (uVar5 != uVar6);
  }
LAB_0076ad6c:
  local_68[0] = 3;
LAB_0076ad80:
  lVar4 = FUN_0076c300(param_1,local_68);
  return lVar4;
LAB_0076a954:
  lVar9 = uVar6 + 5;
  while( true ) {
    bVar1 = *(byte *)(lVar4 + lVar9 + -5);
    uVar11 = (uint)bVar1;
    if (0x2c < bVar1) break;
    if (0x22 < uVar11) goto LAB_0076abb4;
    if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar1 != 0x22) goto LAB_0076abb4;
      param_1[5] = lVar9 + -4;
      lVar4 = <serde_json::read::SliceRead_as_serde_json::read::Read>::ignore_str(plVar10);
      goto joined_r0x0076abc8;
    }
    lVar8 = lVar9 + -4;
    lVar9 = lVar9 + 1;
    param_1[5] = lVar8;
    if (lVar9 - uVar5 == 5) goto LAB_0076ad7c;
  }
  if (bVar1 < 0x6e) {
    if (uVar11 == 0x2d) {
      param_1[5] = lVar9 + -4;
LAB_0076abc0:
      lVar4 = FUN_0076c820(param_1);
joined_r0x0076abc8:
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_0076abcc;
    }
    if (uVar11 != 0x5b) {
      if (uVar11 == 0x66) {
        uVar7 = lVar9 - 4;
        param_1[5] = uVar7;
        uVar6 = uVar7;
        if (uVar7 <= uVar5) {
          uVar6 = uVar5;
        }
        if (uVar7 < uVar5) {
          cVar2 = *(char *)(lVar4 + lVar9 + -4);
          param_1[5] = lVar9 - 3U;
          if (cVar2 == 'a') {
            if (lVar9 - 3U == uVar6) goto LAB_0076adb4;
            cVar2 = *(char *)(lVar4 + lVar9 + -3);
            param_1[5] = lVar9 - 2U;
            if (cVar2 == 'l') {
              if (lVar9 - 2U == uVar6) goto LAB_0076adb4;
              cVar2 = *(char *)(lVar4 + lVar9 + -2);
              param_1[5] = lVar9 - 1U;
              if (cVar2 == 's') {
                if (lVar9 - 1U == uVar6) goto LAB_0076adb4;
                cVar2 = *(char *)(lVar4 + lVar9 + -1);
                param_1[5] = lVar9;
                if (cVar2 == 'e') goto LAB_0076abcc;
              }
            }
          }
          goto LAB_0076adcc;
        }
        goto LAB_0076adb4;
      }
LAB_0076abb4:
      if (uVar11 - 0x30 < 10) goto LAB_0076abc0;
      local_68[0] = 10;
      goto LAB_0076ad80;
    }
LAB_0076aa60:
    lVar4 = param_1[2];
    if ((ulong)(*param_1 - lVar4) < uVar13) {
      FUN_0072eae4(param_1,lVar4,uVar13,1,1);
      lVar4 = param_1[2];
    }
    if ((int)uVar13 != 0) {
      *(char *)(param_1[1] + lVar4) = (char)uVar12;
      lVar4 = lVar4 + 1;
    }
    bVar3 = false;
    param_1[2] = lVar4;
    param_1[5] = param_1[5] + 1;
    uVar5 = param_1[4];
    uVar6 = param_1[5];
    uVar12 = uVar11;
    if (uVar6 < uVar5) goto LAB_0076ac0c;
  }
  else {
    if (bVar1 != 0x6e) {
      if (bVar1 != 0x74) {
        if (uVar11 != 0x7b) goto LAB_0076abb4;
        goto LAB_0076aa60;
      }
      uVar7 = lVar9 - 4;
      param_1[5] = uVar7;
      uVar6 = uVar7;
      if (uVar7 <= uVar5) {
        uVar6 = uVar5;
      }
      if (uVar7 < uVar5) {
        cVar2 = *(char *)(lVar4 + lVar9 + -4);
        param_1[5] = lVar9 - 3U;
        if (cVar2 != 'r') goto LAB_0076adcc;
        if (lVar9 - 3U != uVar6) {
          cVar2 = *(char *)(lVar4 + lVar9 + -3);
          param_1[5] = lVar9 - 2U;
          if (cVar2 != 'u') goto LAB_0076adcc;
          if (lVar9 - 2U != uVar6) {
            bVar3 = *(char *)(lVar4 + lVar9 + -2) == 'e';
            goto LAB_0076aba8;
          }
        }
      }
LAB_0076adb4:
      local_68[0] = 5;
LAB_0076adb8:
      lVar4 = FUN_0076d390(param_1,local_68);
      return lVar4;
    }
    uVar7 = lVar9 - 4;
    param_1[5] = uVar7;
    uVar6 = uVar7;
    if (uVar7 <= uVar5) {
      uVar6 = uVar5;
    }
    if (uVar5 <= uVar7) goto LAB_0076adb4;
    cVar2 = *(char *)(lVar4 + lVar9 + -4);
    param_1[5] = lVar9 - 3U;
    if (cVar2 != 'u') {
LAB_0076adcc:
      local_68[0] = 9;
      goto LAB_0076adb8;
    }
    if (lVar9 - 3U == uVar6) goto LAB_0076adb4;
    cVar2 = *(char *)(lVar4 + lVar9 + -3);
    param_1[5] = lVar9 - 2U;
    if (cVar2 != 'l') goto LAB_0076adcc;
    if (lVar9 - 2U == uVar6) goto LAB_0076adb4;
    bVar3 = *(char *)(lVar4 + lVar9 + -2) == 'l';
LAB_0076aba8:
    param_1[5] = lVar9 + -1;
    if (!bVar3) goto LAB_0076adcc;
LAB_0076abcc:
    if ((int)uVar13 == 0) {
      if (param_1[2] == 0) {
        return 0;
      }
      lVar4 = param_1[2] + -1;
      bVar3 = true;
      param_1[2] = lVar4;
      uVar11 = (uint)*(byte *)(param_1[1] + lVar4);
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar12 = uVar11;
      if (uVar6 < uVar5) goto LAB_0076ac0c;
    }
    else {
      bVar3 = true;
      uVar5 = param_1[4];
      uVar6 = param_1[5];
      uVar11 = uVar12;
      if (uVar6 < uVar5) {
LAB_0076ac0c:
        lVar9 = param_1[2];
        lVar4 = param_1[3];
        uVar12 = uVar11;
LAB_0076ac14:
        do {
          bVar1 = *(byte *)(lVar4 + uVar6);
          if (bVar1 < 0x2d) {
            if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
              uVar6 = uVar6 + 1;
              param_1[5] = uVar6;
              if (uVar5 == uVar6) break;
              goto LAB_0076ac14;
            }
            if ((ulong)bVar1 == 0x2c) {
              if (bVar3) {
                uVar6 = uVar6 + 1;
                param_1[5] = uVar6;
              }
              goto LAB_0076aca8;
            }
          }
          if (bVar1 == 0x5d) {
            if (uVar12 != 0x5b) goto LAB_0076ac94;
          }
          else if ((bVar1 != 0x7d) || (uVar12 != 0x7b)) goto LAB_0076ac94;
          uVar6 = uVar6 + 1;
          param_1[5] = uVar6;
          if (lVar9 == 0) {
            return 0;
          }
          lVar9 = lVar9 + -1;
          bVar3 = true;
          param_1[2] = lVar9;
          uVar12 = (uint)*(byte *)(param_1[1] + lVar9);
          if (uVar5 <= uVar6) break;
        } while( true );
      }
    }
  }
  if (uVar12 != 0x5b) {
    if (uVar12 != 0x7b) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("internal error: entered unreachable code",0x28,
                 &PTR_s__root__cargo_registry_src_index__00ad83f0);
    }
    goto LAB_0076ad6c;
  }
  local_68[0] = 2;
  goto LAB_0076ad80;
LAB_0076ac94:
  if (bVar3) {
    if (uVar12 == 0x5b) {
      local_68[0] = 7;
    }
    else {
      if (uVar12 != 0x7b) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s__root__cargo_registry_src_index__00ad8408);
      }
      local_68[0] = 8;
    }
    goto LAB_0076ad80;
  }
LAB_0076aca8:
  if (uVar12 == 0x7b) {
    if (uVar5 <= uVar6) goto LAB_0076ad6c;
    while( true ) {
      bVar1 = *(byte *)(lVar4 + uVar6);
      if (0x22 < bVar1) goto LAB_0076adf4;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar6 = uVar6 + 1;
      param_1[5] = uVar6;
      if (uVar5 == uVar6) goto LAB_0076ad6c;
    }
    if ((ulong)bVar1 != 0x22) {
LAB_0076adf4:
      local_68[0] = 0x11;
      goto LAB_0076ad80;
    }
    param_1[5] = uVar6 + 1;
    lVar4 = <serde_json::read::SliceRead_as_serde_json::read::Read>::ignore_str(plVar10);
    if (lVar4 != 0) {
      return lVar4;
    }
    uVar5 = param_1[4];
    uVar6 = param_1[5];
    if (uVar5 <= uVar6) goto LAB_0076ad6c;
    lVar4 = *plVar10;
    while( true ) {
      bVar1 = *(byte *)(lVar4 + uVar6);
      if (0x3a < bVar1) goto LAB_0076add4;
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
      uVar6 = uVar6 + 1;
      param_1[5] = uVar6;
      if (uVar5 == uVar6) goto LAB_0076ad6c;
    }
    if ((ulong)bVar1 != 0x3a) goto LAB_0076add4;
    uVar6 = uVar6 + 1;
    param_1[5] = uVar6;
  }
  uVar13 = 1;
  if (uVar5 <= uVar6) goto LAB_0076ad7c;
  goto LAB_0076a954;
LAB_0076add4:
  local_68[0] = 6;
  goto LAB_0076ad80;
LAB_0076ad7c:
  local_68[0] = 5;
  goto LAB_0076ad80;
}


// ===== 0076ae3c  FUN_0076ae3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0076ae3c(undefined8 *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong uStack_28;
  undefined8 local_20;
  ulong local_18;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_18 = (ulong)*param_2;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_0076dbc4(&local_60,&local_18,8);
  uStack_28 = uStack_28 | local_30 << 0x38;
  uStack_48 = uStack_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ uStack_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 0076af58  FUN_0076af58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0076af58(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_0076dbc4(&local_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_14[0] = 0xff;
  FUN_0076dbc4(&local_60,local_14,1);
  local_28 = local_28 | local_30 << 0x38;
  uStack_48 = local_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ local_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 0076b084  FUN_0076b084 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0076b084(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_18 = *param_2;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_0076dbc4(&local_60,&local_18,8);
  uStack_28 = uStack_28 | local_30 << 0x38;
  uStack_48 = uStack_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ uStack_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 0076b1a0  FUN_0076b1a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0076b1a0(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_70;
  long lStack_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  ulong uStack_38;
  undefined8 local_30;
  undefined8 local_8;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  bVar5 = (byte)((ulong)uStack_50 >> 8);
  bVar6 = (byte)((ulong)uStack_50 >> 0x10);
  bVar7 = (byte)((ulong)uStack_50 >> 0x18);
  bVar8 = (byte)((ulong)uStack_50 >> 0x20);
  bVar9 = (byte)((ulong)uStack_50 >> 0x28);
  bVar10 = (byte)((ulong)uStack_50 >> 0x30);
  bVar11 = (byte)((ulong)uStack_50 >> 0x38);
  local_70 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_50 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_68 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_50 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_48 >> 8);
  bVar6 = (byte)((ulong)uStack_48 >> 0x10);
  bVar7 = (byte)((ulong)uStack_48 >> 0x18);
  bVar8 = (byte)((ulong)uStack_48 >> 0x20);
  bVar9 = (byte)((ulong)uStack_48 >> 0x28);
  bVar10 = (byte)((ulong)uStack_48 >> 0x30);
  bVar11 = (byte)((ulong)uStack_48 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_48 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_48 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  local_8 = 8;
  FUN_0071d84c(&local_70,&local_8);
  FUN_0071d84c(&local_70,param_2);
  uStack_38 = uStack_38 | local_40 << 0x38;
  uStack_58 = uStack_38 ^ uStack_58;
  uVar2 = local_60 + local_70;
  uVar3 = uVar2 ^ (local_60 >> 0x33 | local_60 << 0xd);
  uVar4 = uStack_58 + lStack_68 ^ (uStack_58 >> 0x30 | uStack_58 << 0x10);
  uVar1 = uStack_58 + lStack_68 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ uStack_38) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 0076b2d0  FUN_0076b2d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0076b2d0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong local_28;
  undefined8 uStack_20;
  undefined1 local_14 [4];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_0076dbc4(&local_60);
  local_14[0] = 0xff;
  FUN_0076dbc4(&local_60,local_14,1);
  local_28 = local_28 | local_30 << 0x38;
  uStack_48 = local_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ local_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 0076b3f4  FUN_0076b3f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0076b3f4(undefined8 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  long local_60;
  long lStack_58;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_30;
  ulong uStack_28;
  undefined8 local_20;
  undefined4 local_14;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  local_14 = *param_2;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  bVar5 = (byte)((ulong)uStack_40 >> 8);
  bVar6 = (byte)((ulong)uStack_40 >> 0x10);
  bVar7 = (byte)((ulong)uStack_40 >> 0x18);
  bVar8 = (byte)((ulong)uStack_40 >> 0x20);
  bVar9 = (byte)((ulong)uStack_40 >> 0x28);
  bVar10 = (byte)((ulong)uStack_40 >> 0x30);
  bVar11 = (byte)((ulong)uStack_40 >> 0x38);
  local_60 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029fb60 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029fb60 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029fb60 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029fb60 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029fb60 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029fb60 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029fb60 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_DAT_0029fb60)))
                                                ))));
  lStack_58 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029fb68 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029fb68 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029fb68 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029fb68 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029fb68 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029fb68 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029fb68 >> 8)
                                                           ,(byte)uStack_40 ^ (byte)_UNK_0029fb68)))
                                                 ))));
  bVar5 = (byte)((ulong)uStack_38 >> 8);
  bVar6 = (byte)((ulong)uStack_38 >> 0x10);
  bVar7 = (byte)((ulong)uStack_38 >> 0x18);
  bVar8 = (byte)((ulong)uStack_38 >> 0x20);
  bVar9 = (byte)((ulong)uStack_38 >> 0x28);
  bVar10 = (byte)((ulong)uStack_38 >> 0x30);
  bVar11 = (byte)((ulong)uStack_38 >> 0x38);
  local_50 = CONCAT17(bVar11 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x38),
                      CONCAT16(bVar10 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x30),
                               CONCAT15(bVar9 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x28),
                                        CONCAT14(bVar8 ^ (byte)((ulong)_DAT_0029f5c0 >> 0x20),
                                                 CONCAT13(bVar7 ^ (byte)((ulong)_DAT_0029f5c0 >>
                                                                        0x18),
                                                          CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _DAT_0029f5c0 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_DAT_0029f5c0 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_DAT_0029f5c0)))
                                                ))));
  uStack_48 = CONCAT17(bVar11 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x38),
                       CONCAT16(bVar10 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x30),
                                CONCAT15(bVar9 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x28),
                                         CONCAT14(bVar8 ^ (byte)((ulong)_UNK_0029f5c8 >> 0x20),
                                                  CONCAT13(bVar7 ^ (byte)((ulong)_UNK_0029f5c8 >>
                                                                         0x18),
                                                           CONCAT12(bVar6 ^ (byte)((ulong)
                                                  _UNK_0029f5c8 >> 0x10),
                                                  CONCAT11(bVar5 ^ (byte)((ulong)_UNK_0029f5c8 >> 8)
                                                           ,(byte)uStack_38 ^ (byte)_UNK_0029f5c8)))
                                                 ))));
  FUN_0076dbc4(&local_60,&local_14,4);
  uStack_28 = uStack_28 | local_30 << 0x38;
  uStack_48 = uStack_28 ^ uStack_48;
  uVar2 = local_50 + local_60;
  uVar3 = uVar2 ^ (local_50 >> 0x33 | local_50 << 0xd);
  uVar4 = uStack_48 + lStack_58 ^ (uStack_48 >> 0x30 | uStack_48 << 0x10);
  uVar1 = uStack_48 + lStack_58 + uVar3;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = (uVar2 ^ uStack_28) + uVar3;
  uVar1 = uVar4 + ((uVar1 >> 0x20 | uVar1 << 0x20) ^ 0xff);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar2 = uVar3 + uVar2;
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar3 = uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar4 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar3 + uVar1;
  uVar2 = uVar4 + (uVar2 >> 0x20 | uVar2 << 0x20);
  uVar3 = uVar1 ^ (uVar3 >> 0x2f | uVar3 << 0x11);
  uVar4 = uVar2 ^ (uVar4 >> 0x2b | uVar4 << 0x15);
  uVar1 = uVar4 + (uVar1 >> 0x20 | uVar1 << 0x20);
  uVar2 = uVar3 + uVar2 ^ (uVar3 >> 0x33 | uVar3 << 0xd);
  uVar3 = uVar1 ^ (uVar4 >> 0x30 | uVar4 << 0x10);
  uVar1 = uVar2 + uVar1;
  return (uVar3 >> 0x2b | uVar3 << 0x15) ^ (uVar2 >> 0x2f | uVar2 << 0x11) ^
         (uVar1 >> 0x20 | uVar1 << 0x20) ^ uVar1;
}


// ===== 0076b510  <libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>::now =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>::now
    */

void __rustcall
<libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>
::now(void)

{
  (*(code *)PTR_now_00b033f8)();
  return;
}


// ===== 0076b514  <libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>::elapsed =====

/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>::elapsed
    */

void __rustcall
<libdiscore_common::core::instant::instant_inner::libdiscore_common::core::instant::instant_inner::Instant>
::elapsed(void)

{
  (*(code *)PTR_elapsed_00b03400)();
  return;
}


// ===== 0076b518  FUN_0076b518 =====

void FUN_0076b518(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 0076b528 to 0076b52f has its CatchHandler @ 0076b550 */
  auVar1 = <serde_json::read::StrRead_as_serde_json::read::Read>::peek_position(param_1 + 0x18);
  <serde_json::error::[0]::serde_json::error::Error>::syntax(param_2,auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== 0076b568  FUN_0076b568 =====

void FUN_0076b568(undefined8 *param_1,long param_2,uint param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint local_48 [2];
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar3 = *(ulong *)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar3 <= uVar4) {
LAB_0076b5d8:
    if ((param_3 & 1) != 0) {
      *param_1 = 1;
      param_1[1] = param_4;
      return;
    }
    if (0 < (long)param_4) {
      *param_1 = 2;
      param_1[1] = -param_4;
      return;
    }
    *param_1 = 0;
    param_1[1] = (ulong)(double)param_4 | 0x8000000000000000;
    return;
  }
  cVar5 = *(char *)(*(long *)(param_2 + 0x18) + uVar4);
  if (cVar5 != '.') {
    if ((cVar5 == 'E') || (cVar5 == 'e')) {
      FUN_0076bc68(&local_38);
      if (((uint)local_38 & 1) == 0) {
        *param_1 = 0;
        param_1[1] = local_30;
        return;
      }
      *param_1 = 0xffffffffffffffff;
      param_1[1] = local_30;
      return;
    }
    goto LAB_0076b5d8;
  }
  uVar1 = uVar4 + 1;
  *(ulong *)(param_2 + 0x28) = uVar1;
  if (uVar1 < uVar3) {
    lVar10 = 0;
    uVar7 = ((int)uVar4 - (int)uVar3) + 1;
    uVar9 = (ulong)uVar7;
    do {
      uVar11 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + uVar1 + lVar10);
      uVar6 = uVar11 - 0x30;
      if (9 < uVar6) {
        if ((int)lVar10 == 0) {
          local_38 = 0xd;
          goto LAB_0076b808;
        }
        uVar9 = -lVar10;
        if ((uVar11 | 0x20) != 0x65) goto LAB_0076b72c;
        FUN_0076bc68(local_48);
LAB_0076b718:
        if ((local_48[0] & 1) == 0) goto LAB_0076b838;
        goto LAB_0076b7e0;
      }
      if ((0x1999999999999998 < param_4) &&
         ((param_4 != 0x1999999999999999 || (5 < (uVar6 & 0xff))))) {
        <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
        parse_decimal_overflow(local_48,param_2,param_3,param_4,-(int)lVar10);
        goto LAB_0076b718;
      }
      param_4 = ((ulong)uVar6 & 0xff) + param_4 * 10;
      lVar2 = uVar4 + 2 + lVar10;
      lVar10 = lVar10 + 1;
      *(long *)(param_2 + 0x28) = lVar2;
    } while (~uVar4 + uVar3 != lVar10);
    if (uVar7 != 0) {
LAB_0076b72c:
      local_40 = (double)param_4;
      uVar7 = (uint)uVar9;
      uVar6 = -uVar7;
      if (-1 < (int)uVar7) {
        uVar6 = uVar7;
      }
      while (0x134 < uVar6) {
        if (local_40 == 0.0) goto LAB_0076b7c4;
        iVar8 = (int)uVar9;
        if (-1 < iVar8) goto LAB_0076b7a0;
        local_40 = local_40 / DAT_002a11d0;
        uVar7 = iVar8 + 0x134;
        uVar6 = uVar7;
        if ((int)uVar7 < 0) {
          uVar6 = -iVar8 - 0x134;
        }
        uVar9 = (ulong)uVar7;
      }
      if ((int)uVar7 < 0) {
        local_40 = local_40 / *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar6 * 8);
LAB_0076b7c4:
        if (param_3 == 0) {
          local_40 = -local_40;
        }
LAB_0076b838:
        *param_1 = 0;
        param_1[1] = local_40;
        return;
      }
      local_40 = local_40 * *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar6 * 8);
      if (ABS(local_40) != INFINITY) goto LAB_0076b7c4;
LAB_0076b7a0:
      local_38 = 0xe;
      local_40 = (double)FUN_0076c208(param_2,&local_38);
      goto LAB_0076b7e0;
    }
  }
  local_38 = 5;
LAB_0076b808:
  local_40 = (double)FUN_0076b518(param_2,&local_38);
LAB_0076b7e0:
  *param_1 = 0xffffffffffffffff;
  param_1[1] = local_40;
  return;
}


// ===== 0076b850  FUN_0076b850 =====

void FUN_0076b850(undefined8 *param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long local_38;
  undefined8 local_30;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  uVar7 = *(ulong *)(param_2 + 0x28);
  if (uVar7 < uVar1) {
    lVar6 = *(long *)(param_2 + 0x18);
    bVar2 = *(byte *)(lVar6 + uVar7);
    uVar7 = uVar7 + 1;
    *(ulong *)(param_2 + 0x28) = uVar7;
    uVar3 = bVar2 - 0x30;
    if (uVar3 == 0) {
      if ((uVar7 < uVar1) && (*(byte *)(lVar6 + uVar7) - 0x30 < 10)) {
        local_38 = 0xd;
        uVar4 = FUN_0076b518(param_2,&local_38);
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar4;
        return;
      }
      FUN_0076b568();
      return;
    }
    if (bVar2 - 0x31 < 9) {
      uVar5 = (ulong)uVar3 & 0xff;
      if (uVar7 < uVar1) {
        do {
          uVar3 = *(byte *)(lVar6 + uVar7) - 0x30;
          if (9 < uVar3) break;
          if ((0x1999999999999998 < uVar5) &&
             ((uVar5 != 0x1999999999999999 || (5 < (uVar3 & 0xff))))) {
            <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
            parse_long_integer(&local_38,param_2,param_3,uVar5);
            if (local_38 != 1) {
              *param_1 = 0;
              param_1[1] = local_30;
              return;
            }
            *param_1 = 0xffffffffffffffff;
            param_1[1] = local_30;
            return;
          }
          uVar5 = ((ulong)uVar3 & 0xff) + uVar5 * 10;
          uVar7 = uVar7 + 1;
          *(ulong *)(param_2 + 0x28) = uVar7;
        } while (uVar1 != uVar7);
      }
      FUN_0076b568();
      return;
    }
    local_38 = 0xd;
  }
  else {
    local_38 = 5;
  }
  uVar4 = FUN_0076c208(param_2,&local_38);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar4;
  return;
}


// ===== 0076b9fc  FUN_0076b9fc =====

undefined8 FUN_0076b9fc(long param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_28 [3];
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar6 = *(ulong *)(param_1 + 0x28);
  if (uVar6 < uVar1) {
    lVar5 = *(long *)(param_1 + 0x18);
    bVar2 = *(byte *)(lVar5 + uVar6);
    uVar6 = uVar6 + 1;
    *(ulong *)(param_1 + 0x28) = uVar6;
    if (bVar2 == 0x30) {
      if ((uVar6 < uVar1) && (*(byte *)(lVar5 + uVar6) - 0x30 < 10)) goto LAB_0076ba44;
    }
    else {
      if (8 < bVar2 - 0x31) goto LAB_0076bc34;
      if (uVar6 < uVar1) {
        while (*(byte *)(lVar5 + uVar6) - 0x30 < 10) {
          uVar6 = uVar6 + 1;
          *(ulong *)(param_1 + 0x28) = uVar6;
          if (uVar1 == uVar6) {
            return 0;
          }
        }
      }
    }
    if (uVar1 <= uVar6) {
      return 0;
    }
    cVar3 = *(char *)(lVar5 + uVar6);
    if ((cVar3 == 'e') || (cVar3 == 'E')) {
      uVar7 = uVar6 + 1;
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar7 < uVar1) &&
         ((*(char *)(lVar5 + uVar7) == '+' || (*(char *)(lVar5 + uVar7) == '-')))) {
        uVar7 = uVar6 + 2;
        *(ulong *)(param_1 + 0x28) = uVar7;
      }
      if (uVar7 < uVar1) {
        bVar2 = *(byte *)(lVar5 + uVar7);
        uVar7 = uVar7 + 1;
        *(ulong *)(param_1 + 0x28) = uVar7;
        if (bVar2 - 0x30 < 10) {
          if (uVar1 <= uVar7) {
            return 0;
          }
          do {
            if (9 < *(byte *)(lVar5 + uVar7) - 0x30) {
              return 0;
            }
            uVar7 = uVar7 + 1;
            *(ulong *)(param_1 + 0x28) = uVar7;
          } while (uVar1 != uVar7);
          return 0;
        }
      }
    }
    else {
      if (cVar3 != '.') {
        return 0;
      }
      uVar7 = uVar6 + 1;
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar1 <= uVar7) || (9 < *(byte *)(lVar5 + uVar7) - 0x30)) {
LAB_0076ba44:
        local_28[0] = 0xd;
        uVar4 = FUN_0076b518(param_1,local_28);
        return uVar4;
      }
      uVar6 = uVar6 + 3;
      do {
        uVar7 = uVar6;
        if ((2 - uVar1) + uVar7 == 3) {
          *(ulong *)(param_1 + 0x28) = uVar1;
          return 0;
        }
        uVar6 = uVar7 + 1;
        uVar8 = (uint)*(byte *)(lVar5 + uVar7 + -1);
      } while (uVar8 - 0x30 < 10);
      *(ulong *)(param_1 + 0x28) = uVar7 - 1;
      if ((uVar8 | 0x20) != 0x65) {
        return 0;
      }
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar7 < uVar1) &&
         ((cVar3 = *(char *)(lVar5 + uVar6 + -1), cVar3 == '+' || (cVar3 == '-')))) {
        *(ulong *)(param_1 + 0x28) = uVar6;
        uVar7 = uVar6;
      }
      if (uVar7 < uVar1) {
        bVar2 = *(byte *)(lVar5 + uVar7);
        uVar7 = uVar7 + 1;
        *(ulong *)(param_1 + 0x28) = uVar7;
        if (bVar2 - 0x30 < 10) {
          if (uVar1 <= uVar7) {
            return 0;
          }
          do {
            if (9 < *(byte *)(lVar5 + uVar7) - 0x30) {
              return 0;
            }
            uVar7 = uVar7 + 1;
            *(ulong *)(param_1 + 0x28) = uVar7;
          } while (uVar1 != uVar7);
          return 0;
        }
      }
    }
  }
LAB_0076bc34:
  local_28[0] = 0xd;
  uVar4 = FUN_0076c208(param_1,local_28);
  return uVar4;
}


// ===== 0076bc68  FUN_0076bc68 =====

void FUN_0076bc68(undefined8 *param_1,long param_2,int param_3,ulong param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  double dVar10;
  undefined8 local_38 [3];
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  uVar9 = lVar3 + 1;
  *(ulong *)(param_2 + 0x28) = uVar9;
  if (uVar9 < uVar2) {
    cVar4 = *(char *)(*(long *)(param_2 + 0x18) + uVar9);
    iVar7 = 1;
    if (cVar4 != '+') {
      if (cVar4 != '-') goto LAB_0076bcbc;
      iVar7 = 0;
    }
    uVar9 = lVar3 + 2;
    *(ulong *)(param_2 + 0x28) = uVar9;
  }
  else {
    iVar7 = 1;
  }
LAB_0076bcbc:
  if (uVar9 < uVar2) {
    uVar8 = *(byte *)(*(long *)(param_2 + 0x18) + uVar9) - 0x30;
    uVar9 = uVar9 + 1;
    *(ulong *)(param_2 + 0x28) = uVar9;
    if (uVar8 < 10) {
      uVar8 = uVar8 & 0xff;
      if (uVar9 < uVar2) {
        do {
          uVar5 = *(byte *)(*(long *)(param_2 + 0x18) + uVar9) - 0x30;
          if (9 < uVar5) break;
          uVar9 = uVar9 + 1;
          *(ulong *)(param_2 + 0x28) = uVar9;
          if ((0xccccccb < (int)uVar8) && ((uVar8 != 0xccccccc || (7 < (uVar5 & 0xff))))) {
            <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::StrRead>>::
            parse_exponent_overflow(param_1,param_2,param_3,param_4 == 0,iVar7);
            return;
          }
          uVar8 = (uVar5 & 0xff) + uVar8 * 10;
        } while (uVar2 != uVar9);
      }
      dVar10 = (double)param_4;
      uVar5 = (int)(param_5 + uVar8) >> 0x1f ^ 0x80000000;
      if (!SCARRY4(param_5,uVar8)) {
        uVar5 = param_5 + uVar8;
      }
      uVar1 = (int)(param_5 - uVar8) >> 0x1f ^ 0x80000000;
      if (!SBORROW4(param_5,uVar8)) {
        uVar1 = param_5 - uVar8;
      }
      if (iVar7 == 0) {
        uVar5 = uVar1;
      }
      uVar8 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar8 = uVar5;
      }
      while (0x134 < uVar8) {
        if (dVar10 == 0.0) goto LAB_0076be4c;
        if (-1 < (int)uVar5) goto LAB_0076be0c;
        dVar10 = dVar10 / DAT_002a11d0;
        uVar8 = uVar5 + 0x134;
        iVar7 = -uVar5;
        uVar5 = uVar8;
        if ((int)uVar8 < 0) {
          uVar8 = iVar7 - 0x134;
        }
      }
      if ((int)uVar5 < 0) {
        dVar10 = dVar10 / *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar8 * 8);
      }
      else {
        dVar10 = dVar10 * *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar8 * 8);
        if (ABS(dVar10) == INFINITY) {
LAB_0076be0c:
          local_38[0] = 0xe;
          uVar6 = FUN_0076c208(param_2,local_38);
          param_1[1] = uVar6;
          *param_1 = 1;
          return;
        }
      }
LAB_0076be4c:
      if (param_3 == 0) {
        dVar10 = -dVar10;
      }
      param_1[1] = dVar10;
      *param_1 = 0;
      return;
    }
    local_38[0] = 0xd;
  }
  else {
    local_38[0] = 5;
  }
  uVar6 = FUN_0076c208(param_2,local_38);
  *param_1 = 1;
  param_1[1] = uVar6;
  return;
}


// ===== 0076beac  FUN_0076beac =====

undefined8 FUN_0076beac(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 uVar8;
  long lVar9;
  uint uVar10;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  long local_48 [3];
  
  plVar7 = &local_80;
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar2 <= uVar3) {
LAB_0076c1d0:
    local_48[0] = 10;
    uVar6 = FUN_0076b518(param_1,local_48);
LAB_0076c1e4:
    uVar6 = FUN_00734c54(uVar6,param_1);
    return uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  bVar4 = *(byte *)(lVar9 + uVar3);
  uVar10 = (uint)bVar4;
  if (bVar4 < 0x66) {
    if (uVar10 == 0x22) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(ulong *)(param_1 + 0x28) = uVar3 + 1;
      <serde_json::read::StrRead_as_serde_json::read::Read>::parse_str(&local_60,param_1 + 0x18);
      if (local_60 == 2) {
        return uStack_58;
      }
      local_48[0] = CONCAT71(local_48[0]._1_7_,5);
    }
    else {
      if (uVar10 == 0x2d) {
        *(ulong *)(param_1 + 0x28) = uVar3 + 1;
        FUN_0076b850(&local_80,param_1,0);
        if (local_80 == -1) {
          return local_78;
        }
LAB_0076c158:
        uVar6 = <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type
                          (plVar7,param_2,param_3);
        goto LAB_0076c1e4;
      }
      if (bVar4 != 0x5b) goto LAB_0076c184;
      uVar8 = 10;
LAB_0076c114:
      local_48[0] = CONCAT71(local_48[0]._1_7_,uVar8);
    }
LAB_0076c118:
    uVar6 = <serde_json::error::Error_as_serde::de::Error>::invalid_type(local_48,param_2,param_3);
    goto LAB_0076c1e4;
  }
  if (uVar10 == 0x73 || bVar4 < 0x73) {
    if (bVar4 == 0x66) {
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'a') {
          if (uVar2 == uVar1) goto LAB_0076c08c;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_0076c08c;
            cVar5 = *(char *)(lVar9 + uVar1);
            uVar1 = uVar3 + 4;
            *(ulong *)(param_1 + 0x28) = uVar1;
            if (cVar5 == 's') {
              if (uVar1 == uVar2) goto LAB_0076c08c;
              cVar5 = *(char *)(lVar9 + uVar1);
              *(ulong *)(param_1 + 0x28) = uVar3 + 5;
              if (cVar5 == 'e') {
                local_48[0] = (ulong)local_48[0]._2_6_ << 0x10;
                goto LAB_0076c118;
              }
            }
          }
        }
LAB_0076c124:
        local_48[0] = 9;
        goto LAB_0076c090;
      }
    }
    else {
      if (uVar10 != 0x6e) goto LAB_0076c184;
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar2 == uVar1) goto LAB_0076c08c;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_0076c08c;
            cVar5 = *(char *)(lVar9 + uVar1);
            *(ulong *)(param_1 + 0x28) = uVar3 + 4;
            if (cVar5 == 'l') {
              uVar8 = 7;
              goto LAB_0076c114;
            }
          }
        }
        goto LAB_0076c124;
      }
    }
  }
  else {
    if (uVar10 != 0x74) {
      if (bVar4 == 0x7b) {
        uVar8 = 0xb;
        goto LAB_0076c114;
      }
LAB_0076c184:
      if (uVar10 - 0x30 < 10) {
        FUN_0076b850(&local_70,param_1,1);
        if (local_70 == -1) {
          return local_68;
        }
        plVar7 = &local_70;
        goto LAB_0076c158;
      }
      goto LAB_0076c1d0;
    }
    uVar1 = uVar3 + 1;
    *(ulong *)(param_1 + 0x28) = uVar1;
    if (uVar1 < uVar2) {
      cVar5 = *(char *)(lVar9 + uVar1);
      uVar1 = uVar3 + 2;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (cVar5 == 'r') {
        if (uVar2 == uVar1) goto LAB_0076c08c;
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 3;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar1 == uVar2) goto LAB_0076c08c;
          cVar5 = *(char *)(lVar9 + uVar1);
          *(ulong *)(param_1 + 0x28) = uVar3 + 4;
          if (cVar5 == 'e') {
            local_48[0] = CONCAT62(local_48[0]._2_6_,0x100);
            goto LAB_0076c118;
          }
        }
      }
      goto LAB_0076c124;
    }
  }
LAB_0076c08c:
  local_48[0] = 5;
LAB_0076c090:
  uVar6 = FUN_0076c208(param_1,local_48);
  return uVar6;
}


// ===== 0076c208  FUN_0076c208 =====

void FUN_0076c208(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 0076c218 to 0076c21f has its CatchHandler @ 0076c240 */
  auVar1 = <serde_json::read::StrRead_as_serde_json::read::Read>::position(param_1 + 0x18);
  <serde_json::error::[0]::serde_json::error::Error>::syntax(param_2,auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== 0076c258  FUN_0076c258 =====

undefined8 FUN_0076c258(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28 [3];
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 < *(ulong *)(param_1 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + uVar3);
      if (0x2c < bVar1) {
LAB_0076c2d4:
        if (bVar1 == 0x7d) {
          *(ulong *)(param_1 + 0x28) = uVar3 + 1;
          return 0;
        }
        local_28[0] = 0x16;
        goto LAB_0076c2ac;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_0076c2d4;
        local_28[0] = 0x15;
        goto LAB_0076c2ac;
      }
      uVar3 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar3;
    } while (*(ulong *)(param_1 + 0x20) != uVar3);
  }
  local_28[0] = 3;
LAB_0076c2ac:
  uVar2 = FUN_0076b518(param_1,local_28);
  return uVar2;
}


// ===== 0076c300  FUN_0076c300 =====

void FUN_0076c300(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 0076c310 to 0076c317 has its CatchHandler @ 0076c338 */
  auVar1 = <serde_json::read::SliceRead_as_serde_json::read::Read>::peek_position(param_1 + 0x18);
  <serde_json::error::[0]::serde_json::error::Error>::syntax(param_2,auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== 0076c350  FUN_0076c350 =====

void FUN_0076c350(undefined8 *param_1,long param_2,int param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  double dVar10;
  undefined8 local_38 [3];
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar3 = *(ulong *)(param_2 + 0x28);
  uVar7 = uVar3 + 1;
  *(ulong *)(param_2 + 0x28) = uVar7;
  if (uVar7 < uVar2) {
    lVar8 = 0;
    iVar6 = (int)uVar3 + 1;
    do {
      uVar9 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + uVar7 + lVar8);
      uVar5 = uVar9 - 0x30;
      if (9 < uVar5) {
        if ((int)lVar8 == 0) {
          local_38[0] = 0xd;
          goto LAB_0076c528;
        }
        uVar7 = (param_5 & 0xffffffff) - lVar8;
        if ((uVar9 | 0x20) == 0x65) {
          FUN_0076ca8c();
          return;
        }
        goto LAB_0076c44c;
      }
      if ((0x1999999999999998 < param_4) &&
         ((param_4 != 0x1999999999999999 || (5 < (uVar5 & 0xff))))) {
        <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::
        parse_decimal_overflow(param_1,param_2,param_3,param_4,(int)param_5 - (int)lVar8);
        return;
      }
      param_4 = ((ulong)uVar5 & 0xff) + param_4 * 10;
      lVar1 = uVar3 + 2 + lVar8;
      lVar8 = lVar8 + 1;
      *(long *)(param_2 + 0x28) = lVar1;
    } while (~uVar3 + uVar2 != lVar8);
    if (iVar6 != (int)uVar2) {
      uVar7 = (ulong)(uint)((iVar6 + (int)param_5) - (int)uVar2);
LAB_0076c44c:
      dVar10 = (double)param_4;
      uVar5 = (uint)uVar7;
      uVar9 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar9 = uVar5;
      }
      while (0x134 < uVar9) {
        if (dVar10 == 0.0) goto LAB_0076c4f8;
        iVar6 = (int)uVar7;
        if (-1 < iVar6) goto LAB_0076c4c0;
        dVar10 = dVar10 / DAT_002a11d0;
        uVar5 = iVar6 + 0x134;
        uVar9 = uVar5;
        if ((int)uVar5 < 0) {
          uVar9 = -iVar6 - 0x134;
        }
        uVar7 = (ulong)uVar5;
      }
      if ((int)uVar5 < 0) {
        dVar10 = dVar10 / *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar9 * 8);
      }
      else {
        dVar10 = dVar10 * *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar9 * 8);
        if (ABS(dVar10) == INFINITY) {
LAB_0076c4c0:
          local_38[0] = 0xe;
          uVar4 = FUN_0076d390(param_2,local_38);
          *param_1 = 1;
          param_1[1] = uVar4;
          return;
        }
      }
LAB_0076c4f8:
      *param_1 = 0;
      if (param_3 == 0) {
        dVar10 = -dVar10;
      }
      param_1[1] = dVar10;
      return;
    }
  }
  local_38[0] = 5;
LAB_0076c528:
  uVar4 = FUN_0076c300(param_2,local_38);
  *param_1 = 1;
  param_1[1] = uVar4;
  return;
}


// ===== 0076c558  FUN_0076c558 =====

void FUN_0076c558(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_38;
  ulong local_30;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 0x28);
  if (uVar5 < uVar1) {
    lVar7 = *(long *)(param_2 + 0x18);
    bVar2 = *(byte *)(lVar7 + uVar5);
    uVar5 = uVar5 + 1;
    *(ulong *)(param_2 + 0x28) = uVar5;
    uVar4 = bVar2 - 0x30;
    if (uVar4 == 0) {
      if (uVar1 <= uVar5) {
LAB_0076c7c8:
        uVar5 = 0;
        if ((int)param_3 == 0) {
          uVar5 = 0x8000000000000000;
        }
        *param_1 = param_3 & 0xffffffff;
        param_1[1] = uVar5;
        return;
      }
      bVar2 = *(byte *)(lVar7 + uVar5);
      if (bVar2 - 0x30 < 10) {
        local_38 = 0xd;
        uVar5 = FUN_0076c300(param_2,&local_38);
        *param_1 = 0xffffffffffffffff;
        param_1[1] = uVar5;
        return;
      }
      if (bVar2 == 0x2e) {
        FUN_0076c350(&local_38,param_2,param_3,0,0);
      }
      else {
        if ((bVar2 != 0x45) && (bVar2 != 0x65)) goto LAB_0076c7c8;
        FUN_0076ca8c(&local_38,param_2,param_3,0,0);
      }
      if (((uint)local_38 & 1) == 0) {
        *param_1 = 0;
        param_1[1] = local_30;
        return;
      }
LAB_0076c75c:
      *param_1 = 0xffffffffffffffff;
      param_1[1] = local_30;
      return;
    }
    if (bVar2 - 0x31 < 9) {
      uVar6 = (ulong)uVar4 & 0xff;
      if (uVar5 < uVar1) {
        do {
          uVar4 = *(byte *)(lVar7 + uVar5) - 0x30;
          if (9 < uVar4) goto LAB_0076c684;
          if ((0x1999999999999998 < uVar6) &&
             ((uVar6 != 0x1999999999999999 || (5 < (uVar4 & 0xff))))) {
            <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::
            parse_long_integer(&local_38,param_2,param_3 & 0xffffffff,uVar6);
            if (local_38 != 1) {
              *param_1 = 0;
              param_1[1] = local_30;
              return;
            }
            goto LAB_0076c75c;
          }
          uVar6 = ((ulong)uVar4 & 0xff) + uVar6 * 10;
          uVar5 = uVar5 + 1;
          *(ulong *)(param_2 + 0x28) = uVar5;
        } while (uVar1 != uVar5);
      }
      else {
LAB_0076c684:
        if (uVar5 < uVar1) {
          cVar3 = *(char *)(lVar7 + uVar5);
          if (cVar3 == '.') {
            FUN_0076c350(&local_38);
          }
          else {
            if ((cVar3 != 'E') && (cVar3 != 'e')) goto LAB_0076c6c0;
            FUN_0076ca8c(&local_38);
          }
          if ((local_38 & 1) == 0) {
            *param_1 = 0;
            param_1[1] = local_30;
            return;
          }
          goto LAB_0076c75c;
        }
      }
LAB_0076c6c0:
      if ((param_3 & 1) != 0) {
        *param_1 = 1;
        param_1[1] = uVar6;
        return;
      }
      if ((long)uVar6 < 1) {
        *param_1 = 0;
        param_1[1] = (ulong)(double)uVar6 | 0x8000000000000000;
        return;
      }
      *param_1 = 2;
      param_1[1] = -uVar6;
      return;
    }
    local_38 = 0xd;
  }
  else {
    local_38 = 5;
  }
  uVar5 = FUN_0076d390(param_2,&local_38);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar5;
  return;
}


// ===== 0076c820  FUN_0076c820 =====

undefined8 FUN_0076c820(long param_1)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_28 [3];
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar6 = *(ulong *)(param_1 + 0x28);
  if (uVar6 < uVar1) {
    lVar5 = *(long *)(param_1 + 0x18);
    bVar2 = *(byte *)(lVar5 + uVar6);
    uVar6 = uVar6 + 1;
    *(ulong *)(param_1 + 0x28) = uVar6;
    if (bVar2 == 0x30) {
      if ((uVar6 < uVar1) && (*(byte *)(lVar5 + uVar6) - 0x30 < 10)) goto LAB_0076c868;
    }
    else {
      if (8 < bVar2 - 0x31) goto LAB_0076ca58;
      if (uVar6 < uVar1) {
        while (*(byte *)(lVar5 + uVar6) - 0x30 < 10) {
          uVar6 = uVar6 + 1;
          *(ulong *)(param_1 + 0x28) = uVar6;
          if (uVar1 == uVar6) {
            return 0;
          }
        }
      }
    }
    if (uVar1 <= uVar6) {
      return 0;
    }
    cVar3 = *(char *)(lVar5 + uVar6);
    if ((cVar3 == 'e') || (cVar3 == 'E')) {
      uVar7 = uVar6 + 1;
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar7 < uVar1) &&
         ((*(char *)(lVar5 + uVar7) == '+' || (*(char *)(lVar5 + uVar7) == '-')))) {
        uVar7 = uVar6 + 2;
        *(ulong *)(param_1 + 0x28) = uVar7;
      }
      if (uVar7 < uVar1) {
        bVar2 = *(byte *)(lVar5 + uVar7);
        uVar7 = uVar7 + 1;
        *(ulong *)(param_1 + 0x28) = uVar7;
        if (bVar2 - 0x30 < 10) {
          if (uVar1 <= uVar7) {
            return 0;
          }
          do {
            if (9 < *(byte *)(lVar5 + uVar7) - 0x30) {
              return 0;
            }
            uVar7 = uVar7 + 1;
            *(ulong *)(param_1 + 0x28) = uVar7;
          } while (uVar1 != uVar7);
          return 0;
        }
      }
    }
    else {
      if (cVar3 != '.') {
        return 0;
      }
      uVar7 = uVar6 + 1;
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar1 <= uVar7) || (9 < *(byte *)(lVar5 + uVar7) - 0x30)) {
LAB_0076c868:
        local_28[0] = 0xd;
        uVar4 = FUN_0076c300(param_1,local_28);
        return uVar4;
      }
      uVar6 = uVar6 + 3;
      do {
        uVar7 = uVar6;
        if ((2 - uVar1) + uVar7 == 3) {
          *(ulong *)(param_1 + 0x28) = uVar1;
          return 0;
        }
        uVar6 = uVar7 + 1;
        uVar8 = (uint)*(byte *)(lVar5 + uVar7 + -1);
      } while (uVar8 - 0x30 < 10);
      *(ulong *)(param_1 + 0x28) = uVar7 - 1;
      if ((uVar8 | 0x20) != 0x65) {
        return 0;
      }
      *(ulong *)(param_1 + 0x28) = uVar7;
      if ((uVar7 < uVar1) &&
         ((cVar3 = *(char *)(lVar5 + uVar6 + -1), cVar3 == '+' || (cVar3 == '-')))) {
        *(ulong *)(param_1 + 0x28) = uVar6;
        uVar7 = uVar6;
      }
      if (uVar7 < uVar1) {
        bVar2 = *(byte *)(lVar5 + uVar7);
        uVar7 = uVar7 + 1;
        *(ulong *)(param_1 + 0x28) = uVar7;
        if (bVar2 - 0x30 < 10) {
          if (uVar1 <= uVar7) {
            return 0;
          }
          do {
            if (9 < *(byte *)(lVar5 + uVar7) - 0x30) {
              return 0;
            }
            uVar7 = uVar7 + 1;
            *(ulong *)(param_1 + 0x28) = uVar7;
          } while (uVar1 != uVar7);
          return 0;
        }
      }
    }
  }
LAB_0076ca58:
  local_28[0] = 0xd;
  uVar4 = FUN_0076d390(param_1,local_28);
  return uVar4;
}


// ===== 0076ca8c  FUN_0076ca8c =====

void FUN_0076ca8c(undefined8 *param_1,long param_2,int param_3,ulong param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  double dVar10;
  undefined8 local_38 [3];
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  uVar9 = lVar3 + 1;
  *(ulong *)(param_2 + 0x28) = uVar9;
  if (uVar9 < uVar2) {
    cVar4 = *(char *)(*(long *)(param_2 + 0x18) + uVar9);
    iVar7 = 1;
    if (cVar4 != '+') {
      if (cVar4 != '-') goto LAB_0076cae0;
      iVar7 = 0;
    }
    uVar9 = lVar3 + 2;
    *(ulong *)(param_2 + 0x28) = uVar9;
  }
  else {
    iVar7 = 1;
  }
LAB_0076cae0:
  if (uVar9 < uVar2) {
    uVar8 = *(byte *)(*(long *)(param_2 + 0x18) + uVar9) - 0x30;
    uVar9 = uVar9 + 1;
    *(ulong *)(param_2 + 0x28) = uVar9;
    if (uVar8 < 10) {
      uVar8 = uVar8 & 0xff;
      if (uVar9 < uVar2) {
        do {
          uVar5 = *(byte *)(*(long *)(param_2 + 0x18) + uVar9) - 0x30;
          if (9 < uVar5) break;
          uVar9 = uVar9 + 1;
          *(ulong *)(param_2 + 0x28) = uVar9;
          if ((0xccccccb < (int)uVar8) && ((uVar8 != 0xccccccc || (7 < (uVar5 & 0xff))))) {
            <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::
            parse_exponent_overflow(param_1,param_2,param_3,param_4 == 0,iVar7);
            return;
          }
          uVar8 = (uVar5 & 0xff) + uVar8 * 10;
        } while (uVar2 != uVar9);
      }
      dVar10 = (double)param_4;
      uVar5 = (int)(param_5 + uVar8) >> 0x1f ^ 0x80000000;
      if (!SCARRY4(param_5,uVar8)) {
        uVar5 = param_5 + uVar8;
      }
      uVar1 = (int)(param_5 - uVar8) >> 0x1f ^ 0x80000000;
      if (!SBORROW4(param_5,uVar8)) {
        uVar1 = param_5 - uVar8;
      }
      if (iVar7 == 0) {
        uVar5 = uVar1;
      }
      uVar8 = -uVar5;
      if (-1 < (int)uVar5) {
        uVar8 = uVar5;
      }
      while (0x134 < uVar8) {
        if (dVar10 == 0.0) goto LAB_0076cc70;
        if (-1 < (int)uVar5) goto LAB_0076cc30;
        dVar10 = dVar10 / DAT_002a11d0;
        uVar8 = uVar5 + 0x134;
        iVar7 = -uVar5;
        uVar5 = uVar8;
        if ((int)uVar8 < 0) {
          uVar8 = iVar7 - 0x134;
        }
      }
      if ((int)uVar5 < 0) {
        dVar10 = dVar10 / *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar8 * 8);
      }
      else {
        dVar10 = dVar10 * *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar8 * 8);
        if (ABS(dVar10) == INFINITY) {
LAB_0076cc30:
          local_38[0] = 0xe;
          uVar6 = FUN_0076d390(param_2,local_38);
          param_1[1] = uVar6;
          *param_1 = 1;
          return;
        }
      }
LAB_0076cc70:
      if (param_3 == 0) {
        dVar10 = -dVar10;
      }
      param_1[1] = dVar10;
      *param_1 = 0;
      return;
    }
    local_38[0] = 0xd;
  }
  else {
    local_38[0] = 5;
  }
  uVar6 = FUN_0076d390(param_2,local_38);
  *param_1 = 1;
  param_1[1] = uVar6;
  return;
}


// ===== 0076ccd0  FUN_0076ccd0 =====

undefined8 FUN_0076ccd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 uVar8;
  long lVar9;
  uint uVar10;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  long local_48 [3];
  
  plVar7 = &local_80;
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar2 <= uVar3) {
LAB_0076cff4:
    local_48[0] = 10;
    uVar6 = FUN_0076c300(param_1,local_48);
LAB_0076d008:
    uVar6 = FUN_00734cc8(uVar6,param_1);
    return uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  bVar4 = *(byte *)(lVar9 + uVar3);
  uVar10 = (uint)bVar4;
  if (bVar4 < 0x66) {
    if (uVar10 == 0x22) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(ulong *)(param_1 + 0x28) = uVar3 + 1;
      <serde_json::read::SliceRead_as_serde_json::read::Read>::parse_str(&local_60,param_1 + 0x18);
      if (local_60 == 2) {
        return uStack_58;
      }
      local_48[0] = CONCAT71(local_48[0]._1_7_,5);
    }
    else {
      if (uVar10 == 0x2d) {
        *(ulong *)(param_1 + 0x28) = uVar3 + 1;
        FUN_0076c558(&local_80,param_1,0);
        if (local_80 == -1) {
          return local_78;
        }
LAB_0076cf7c:
        uVar6 = <serde_json::de::[2]::serde_json::de::ParserNumber>::invalid_type
                          (plVar7,param_2,param_3);
        goto LAB_0076d008;
      }
      if (bVar4 != 0x5b) goto LAB_0076cfa8;
      uVar8 = 10;
LAB_0076cf38:
      local_48[0] = CONCAT71(local_48[0]._1_7_,uVar8);
    }
LAB_0076cf3c:
    uVar6 = <serde_json::error::Error_as_serde::de::Error>::invalid_type(local_48,param_2,param_3);
    goto LAB_0076d008;
  }
  if (uVar10 == 0x73 || bVar4 < 0x73) {
    if (bVar4 == 0x66) {
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'a') {
          if (uVar2 == uVar1) goto LAB_0076ceb0;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_0076ceb0;
            cVar5 = *(char *)(lVar9 + uVar1);
            uVar1 = uVar3 + 4;
            *(ulong *)(param_1 + 0x28) = uVar1;
            if (cVar5 == 's') {
              if (uVar1 == uVar2) goto LAB_0076ceb0;
              cVar5 = *(char *)(lVar9 + uVar1);
              *(ulong *)(param_1 + 0x28) = uVar3 + 5;
              if (cVar5 == 'e') {
                local_48[0] = (ulong)local_48[0]._2_6_ << 0x10;
                goto LAB_0076cf3c;
              }
            }
          }
        }
LAB_0076cf48:
        local_48[0] = 9;
        goto LAB_0076ceb4;
      }
    }
    else {
      if (uVar10 != 0x6e) goto LAB_0076cfa8;
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar2 == uVar1) goto LAB_0076ceb0;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_0076ceb0;
            cVar5 = *(char *)(lVar9 + uVar1);
            *(ulong *)(param_1 + 0x28) = uVar3 + 4;
            if (cVar5 == 'l') {
              uVar8 = 7;
              goto LAB_0076cf38;
            }
          }
        }
        goto LAB_0076cf48;
      }
    }
  }
  else {
    if (uVar10 != 0x74) {
      if (bVar4 == 0x7b) {
        uVar8 = 0xb;
        goto LAB_0076cf38;
      }
LAB_0076cfa8:
      if (uVar10 - 0x30 < 10) {
        FUN_0076c558(&local_70,param_1,1);
        if (local_70 == -1) {
          return local_68;
        }
        plVar7 = &local_70;
        goto LAB_0076cf7c;
      }
      goto LAB_0076cff4;
    }
    uVar1 = uVar3 + 1;
    *(ulong *)(param_1 + 0x28) = uVar1;
    if (uVar1 < uVar2) {
      cVar5 = *(char *)(lVar9 + uVar1);
      uVar1 = uVar3 + 2;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (cVar5 == 'r') {
        if (uVar2 == uVar1) goto LAB_0076ceb0;
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 3;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar1 == uVar2) goto LAB_0076ceb0;
          cVar5 = *(char *)(lVar9 + uVar1);
          *(ulong *)(param_1 + 0x28) = uVar3 + 4;
          if (cVar5 == 'e') {
            local_48[0] = CONCAT62(local_48[0]._2_6_,0x100);
            goto LAB_0076cf3c;
          }
        }
      }
      goto LAB_0076cf48;
    }
  }
LAB_0076ceb0:
  local_48[0] = 5;
LAB_0076ceb4:
  uVar6 = FUN_0076d390(param_1,local_48);
  return uVar6;
}


// ===== 0076d02c  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_long_integer =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_long_integer
    */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_long_integer
          (undefined8 *param_1,long param_2,int param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  double dVar10;
  undefined8 local_38 [3];
  
  uVar3 = *(ulong *)(param_2 + 0x20);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar4 < uVar3) {
    lVar9 = 0;
    uVar8 = (int)uVar3 - (int)uVar4;
    do {
      bVar5 = *(byte *)(*(long *)(param_2 + 0x18) + uVar4 + lVar9);
      if (9 < bVar5 - 0x30) {
        if (bVar5 == 0x2e) {
          FUN_0076c350(param_1);
          return;
        }
        if ((bVar5 == 0x45) || (bVar5 == 0x65)) {
          FUN_0076ca8c(param_1);
          return;
        }
        uVar8 = (uint)lVar9;
        uVar1 = -uVar8;
        if (-1 < (int)uVar8) {
          uVar1 = uVar8;
        }
        goto joined_r0x0076d108;
      }
      lVar2 = uVar4 + 1 + lVar9;
      lVar9 = lVar9 + 1;
      *(long *)(param_2 + 0x28) = lVar2;
    } while (uVar3 - uVar4 != lVar9);
  }
  else {
    uVar8 = 0;
  }
  uVar1 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar1 = uVar8;
  }
joined_r0x0076d108:
  dVar10 = (double)param_4;
  while (0x134 < uVar1) {
    if (dVar10 == 0.0) goto LAB_0076d198;
    if (-1 < (int)uVar8) goto LAB_0076d164;
    dVar10 = dVar10 / DAT_002a11d0;
    uVar1 = uVar8 + 0x134;
    iVar6 = -uVar8;
    uVar8 = uVar1;
    if ((int)uVar1 < 0) {
      uVar1 = iVar6 - 0x134;
    }
  }
  if ((int)uVar8 < 0) {
    dVar10 = dVar10 / *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar1 * 8);
  }
  else {
    dVar10 = dVar10 * *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar1 * 8);
    if (ABS(dVar10) == INFINITY) {
LAB_0076d164:
      local_38[0] = 0xe;
      uVar7 = FUN_0076d390(param_2,local_38);
      param_1[1] = uVar7;
      *param_1 = 1;
      return;
    }
  }
LAB_0076d198:
  if (param_3 == 0) {
    dVar10 = -dVar10;
  }
  param_1[1] = dVar10;
  *param_1 = 0;
  return;
}


// ===== 0076d1bc  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_decimal_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_decimal_overflow
    */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::
parse_decimal_overflow(undefined8 *param_1,long param_2,int param_3,ulong param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  double dVar5;
  undefined8 local_38 [3];
  
  uVar3 = *(ulong *)(param_2 + 0x28);
  if (uVar3 < *(ulong *)(param_2 + 0x20)) {
    do {
      uVar4 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + uVar3);
      if (9 < uVar4 - 0x30) {
        if ((uVar4 | 0x20) == 0x65) {
          FUN_0076ca8c(param_1,param_2);
          return;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      *(ulong *)(param_2 + 0x28) = uVar3;
    } while (*(ulong *)(param_2 + 0x20) != uVar3);
  }
  dVar5 = (double)param_4;
  uVar4 = -param_5;
  if (-1 < (int)param_5) {
    uVar4 = param_5;
  }
  while (0x134 < uVar4) {
    if (dVar5 == 0.0) goto LAB_0076d2d8;
    if (-1 < (int)param_5) goto LAB_0076d2a4;
    dVar5 = dVar5 / DAT_002a11d0;
    uVar4 = param_5 + 0x134;
    iVar1 = -param_5;
    param_5 = uVar4;
    if ((int)uVar4 < 0) {
      uVar4 = iVar1 - 0x134;
    }
  }
  if ((int)param_5 < 0) {
    dVar5 = dVar5 / *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar4 * 8);
  }
  else {
    dVar5 = dVar5 * *(double *)(PTR_POW10_00b00cb8 + (ulong)uVar4 * 8);
    if (ABS(dVar5) == INFINITY) {
LAB_0076d2a4:
      local_38[0] = 0xe;
      uVar2 = FUN_0076d390(param_2,local_38);
      param_1[1] = uVar2;
      *param_1 = 1;
      return;
    }
  }
LAB_0076d2d8:
  if (param_3 == 0) {
    dVar5 = -dVar5;
  }
  param_1[1] = dVar5;
  *param_1 = 0;
  return;
}


// ===== 0076d2fc  <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_exponent_overflow =====

/* WARNING: Unknown calling convention: __rustcall */
/* <serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::parse_exponent_overflow
    */

void __rustcall
<serde_json::de::[3]::serde_json::de::Deserializer<serde_json::read::SliceRead>>::
parse_exponent_overflow(undefined8 *param_1,long param_2,int param_3,uint param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 auStack_28 [3];
  
  if (((param_4 & 1) == 0) && (param_5 != 0)) {
    auStack_28[0] = 0xe;
    uVar2 = FUN_0076d390(param_2,auStack_28);
    *param_1 = 1;
    param_1[1] = uVar2;
    return;
  }
  uVar1 = *(ulong *)(param_2 + 0x28);
  if (uVar1 < *(ulong *)(param_2 + 0x20)) {
    do {
      if (9 < *(byte *)(*(long *)(param_2 + 0x18) + uVar1) - 0x30) break;
      uVar1 = uVar1 + 1;
      *(ulong *)(param_2 + 0x28) = uVar1;
    } while (*(ulong *)(param_2 + 0x20) != uVar1);
  }
  uVar2 = 0;
  if (param_3 == 0) {
    uVar2 = 0x8000000000000000;
  }
  param_1[1] = uVar2;
  *param_1 = 0;
  return;
}


// ===== 0076d390  FUN_0076d390 =====

void FUN_0076d390(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
                    /* try { // try from 0076d3a0 to 0076d3a7 has its CatchHandler @ 0076d3c8 */
  auVar1 = <serde_json::read::SliceRead_as_serde_json::read::Read>::position(param_1 + 0x18);
  <serde_json::error::[0]::serde_json::error::Error>::syntax(param_2,auVar1._0_8_,auVar1._8_8_);
  return;
}


// ===== 0076d3e0  FUN_0076d3e0 =====

undefined8 FUN_0076d3e0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_28 [3];
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 < *(ulong *)(param_1 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + uVar3);
      if (0x2c < bVar1) {
LAB_0076d45c:
        if (bVar1 == 0x7d) {
          *(ulong *)(param_1 + 0x28) = uVar3 + 1;
          return 0;
        }
        local_28[0] = 0x16;
        goto LAB_0076d434;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x2c) goto LAB_0076d45c;
        local_28[0] = 0x15;
        goto LAB_0076d434;
      }
      uVar3 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar3;
    } while (*(ulong *)(param_1 + 0x20) != uVar3);
  }
  local_28[0] = 3;
LAB_0076d434:
  uVar2 = FUN_0076c300(param_1,local_28);
  return uVar2;
}


// ===== 0076d488  FUN_0076d488 =====

undefined8 FUN_0076d488(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_28 [3];
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (uVar4 < uVar1) {
    do {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + uVar4);
      if (0x2c < bVar2) {
LAB_0076d544:
        if (bVar2 == 0x5d) {
          *(ulong *)(param_1 + 0x28) = uVar4 + 1;
          return 0;
        }
        goto LAB_0076d578;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x2c) goto LAB_0076d544;
        uVar4 = uVar4 + 1;
        *(ulong *)(param_1 + 0x28) = uVar4;
        if (uVar4 < uVar1) goto LAB_0076d518;
        goto LAB_0076d578;
      }
      uVar4 = uVar4 + 1;
      *(ulong *)(param_1 + 0x28) = uVar4;
    } while (uVar1 != uVar4);
  }
  local_28[0] = 2;
  goto LAB_0076d4dc;
  while( true ) {
    uVar4 = uVar4 + 1;
    *(ulong *)(param_1 + 0x28) = uVar4;
    if (uVar1 == uVar4) break;
LAB_0076d518:
    bVar2 = *(byte *)(*(long *)(param_1 + 0x18) + uVar4);
    if ((0x20 < bVar2) || ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0)) {
      if (bVar2 == 0x5d) {
        local_28[0] = 0x15;
        goto LAB_0076d4dc;
      }
      break;
    }
  }
LAB_0076d578:
  local_28[0] = 0x16;
LAB_0076d4dc:
  uVar3 = FUN_0076c300(param_1,local_28);
  return uVar3;
}


// ===== 0076d580  <libdiscore_common::stores::dispatcher::[5]::libdiscore_common::stores::dispatcher::Dispatcher<libdiscore_common::actions::Action>>::with_defaults =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <libdiscore_common::stores::dispatcher::[5]::libdiscore_common::stores::dispatcher::Dispatcher<libdiscore_common::actions::Action>>::with_defaults
    */

void __rustcall
<libdiscore_common::stores::dispatcher::[5]::libdiscore_common::stores::dispatcher::Dispatcher<libdiscore_common::actions::Action>>
::with_defaults(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  long lStack_38;
  
  puVar5 = PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  uVar24 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
  if (uVar24 == 0) {
    uVar24 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  else {
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  puVar1 = PTR_DAT_00ad8438;
  uVar2 = _UNK_00ad8440;
  uVar3 = _DAT_00ad8448;
  uVar4 = _UNK_00ad8450;
  if (plVar23 <= &DAT_00000001) {
    plVar23 = (long *)FUN_0072c9d4(uVar24 & 0xffffffff,plVar23,0);
    puVar1 = PTR_DAT_00ad8438;
    uVar2 = _UNK_00ad8440;
    uVar3 = _DAT_00ad8448;
    uVar4 = _UNK_00ad8450;
  }
  PTR_DAT_00ad8438 = puVar1;
  _UNK_00ad8440 = uVar2;
  _DAT_00ad8448 = uVar3;
  _UNK_00ad8450 = uVar4;
  if (plVar23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  lStack_98 = plVar23[1];
  local_a0 = *plVar23;
  *plVar23 = *plVar23 + 1;
  uVar24 = *(ulong *)puVar5;
  local_c0 = puVar1;
  uStack_b8 = uVar2;
  uStack_b0 = uVar3;
  uStack_a8 = uVar4;
  if (uVar24 == 0) {
                    /* try { // try from 0076d790 to 0076d7bf has its CatchHandler @ 0076d87c */
    uVar24 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  else {
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  if (plVar23 < (long *)0x2) {
    plVar23 = (long *)FUN_0072c9d4(uVar24 & 0xffffffff,plVar23,0);
  }
  if (plVar23 == (long *)0x0) {
                    /* try { // try from 0076d82c to 0076d837 has its CatchHandler @ 0076d87c */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  lStack_68 = plVar23[1];
  local_70 = *plVar23;
  *plVar23 = *plVar23 + 1;
  uVar24 = *(ulong *)puVar5;
  local_90 = puVar1;
  uStack_88 = uVar2;
  local_80 = uVar3;
  uStack_78 = uVar4;
  if (uVar24 == 0) {
                    /* try { // try from 0076d7c4 to 0076d7f3 has its CatchHandler @ 0076d86c */
    uVar24 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  else {
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  if (plVar23 < (long *)0x2) {
    plVar23 = (long *)FUN_0072c9d4(uVar24 & 0xffffffff,plVar23,0);
  }
  if (plVar23 == (long *)0x0) {
                    /* try { // try from 0076d83c to 0076d847 has its CatchHandler @ 0076d86c */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  lStack_38 = plVar23[1];
  local_40 = *plVar23;
  *plVar23 = *plVar23 + 1;
  uVar24 = *(ulong *)puVar5;
  local_60 = puVar1;
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  if (uVar24 == 0) {
                    /* try { // try from 0076d7f8 to 0076d827 has its CatchHandler @ 0076d85c */
    uVar24 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  else {
    plVar23 = (long *)pthread_getspecific((pthread_key_t)uVar24);
  }
  if (plVar23 < (long *)0x2) {
    plVar23 = (long *)FUN_0072c9d4(uVar24 & 0xffffffff,plVar23,0);
  }
  lVar22 = lStack_38;
  lVar21 = local_40;
  uVar20 = uStack_48;
  uVar19 = uStack_50;
  uVar18 = uStack_58;
  puVar17 = local_60;
  lVar16 = lStack_68;
  lVar15 = local_70;
  uVar14 = uStack_78;
  uVar13 = local_80;
  uVar12 = uStack_88;
  puVar11 = local_90;
  lVar10 = lStack_98;
  lVar9 = local_a0;
  uVar8 = uStack_a8;
  uVar7 = uStack_b0;
  uVar6 = uStack_b8;
  puVar5 = local_c0;
  if (plVar23 == (long *)0x0) {
                    /* try { // try from 0076d84c to 0076d857 has its CatchHandler @ 0076d85c */
                    /* WARNING: Subroutine does not return */
    std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00ad6130);
  }
  lStack_d8 = plVar23[1];
  local_e0 = *plVar23;
  local_d0 = 0;
  *plVar23 = *plVar23 + 1;
  local_100 = puVar1;
  uStack_f8 = uVar2;
  local_f0 = uVar3;
  uStack_e8 = uVar4;
                    /* try { // try from 0076d6cc to 0076d703 has its CatchHandler @ 0076d890 */
  <hashbrown[32fc5d502e7f9af5]::raw::RawTable<(libdiscore_common[1cb84820f9455fa0]::actions::
  ActionTypes,())>>::reserve_rehash::<hashbrown[32fc5d502e7f9af5]::map::
  make_hasher<libdiscore_common[1cb84820f9455fa0]::actions::ActionTypes_();
  FUN_0075e174(&local_100,0);
  FUN_0075e174(&local_100,1);
  FUN_0075e174(&local_100,2);
  param_1[0x18] = CONCAT44(uStack_cc,local_d0);
  param_1[0x15] = uStack_e8;
  param_1[0x14] = local_f0;
  param_1[0x17] = lStack_d8;
  param_1[0x16] = local_e0;
  param_1[0xd] = uVar18;
  param_1[0xc] = puVar17;
  param_1[0xf] = uVar20;
  param_1[0xe] = uVar19;
  param_1[0x11] = lVar22;
  param_1[0x10] = lVar21;
  param_1[0x13] = uStack_f8;
  param_1[0x12] = local_100;
  param_1[5] = lVar10;
  param_1[4] = lVar9;
  param_1[7] = uVar12;
  param_1[6] = puVar11;
  param_1[9] = uVar14;
  param_1[8] = uVar13;
  param_1[0xb] = lVar16;
  param_1[10] = lVar15;
  param_1[1] = uVar6;
  *param_1 = puVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  return;
}


// ===== 0076d8a8  libdiscore_common::stores::dispatcher::panic_payload_as_str =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscore_common::stores::dispatcher::panic_payload_as_str */

undefined1  [16] __rustcall
libdiscore_common::stores::dispatcher::panic_payload_as_str(undefined1 (*param_1) [16],long param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  long local_30;
  long lStack_28;
  
  pcVar1 = *(code **)(param_2 + 0x18);
  (*pcVar1)(&local_30);
  if (lStack_28 == 0x24c161f26c70c1f1 && local_30 == -0x4609fd23a01609a4) {
    return *param_1;
  }
  (*pcVar1)(&local_30,param_1);
  if (lStack_28 == 0x16fa802d90bf615b && local_30 == -0x119351643378db84) {
    return *(undefined1 (*) [16])(*param_1 + 8);
  }
  auVar2._8_8_ = 0xc;
  auVar2._0_8_ = "Box<dyn Any>";
  return auVar2;
}


// ===== 0076d98c  libdiscore_common::stores::dispatcher::set_sentry_breadcrumb_callback =====

/* WARNING: Unknown calling convention: __rustcall */
/* libdiscore_common::stores::dispatcher::set_sentry_breadcrumb_callback */

void __rustcall
libdiscore_common::stores::dispatcher::set_sentry_breadcrumb_callback(undefined8 param_1)

{
  undefined8 local_18;
  
  if ((int)*(undefined8 *)(PTR_SENTRY_BREADCRUMB_CALLBACK_00b00cf8 + 8) == 0) {
    return;
  }
  local_18 = param_1;
  FUN_00715ac4(PTR_SENTRY_BREADCRUMB_CALLBACK_00b00cf8,&local_18);
  return;
}


// ===== 0076d9d8  <<libdiscore_common::actions::common::Logout_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::common::Logout as
   serde::de::Deserialize>::deserialize::__FieldVisitor as {backref 30}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::common::Logout_as_serde::de::Deserialize>::deserialize::__FieldVisitor_as{backref_30}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a0800,0x10);
  return;
}


// ===== 0076d9ec  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::ConnectResult_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::ConnectResult as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::ConnectResult_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ConnectResult",0x14);
  return;
}


// ===== 0076da00  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DispatchResult_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DispatchResult as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DispatchResult_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct DispatchResult",0x15);
  return;
}


// ===== 0076da14  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DispatchMetrics_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DispatchMetrics as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DispatchMetrics_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct DispatchMetrics",0x16);
  return;
}


// ===== 0076da28  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::TimingMetric_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::TimingMetric as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::TimingMetric_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct TimingMetric",0x13);
  return;
}


// ===== 0076da3c  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MutationMetric_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MutationMetric as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MutationMetric_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct MutationMetric",0x15);
  return;
}


// ===== 0076da50  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MutationMetrics_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MutationMetrics as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MutationMetrics_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct MutationMetrics",0x16);
  return;
}


// ===== 0076da64  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MemoryMetric_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MemoryMetric as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MemoryMetric_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct MemoryMetric",0x13);
  return;
}


// ===== 0076da78  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MemoryStatistics_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MemoryStatistics as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::MemoryStatistics_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct MemoryStatistics",0x17);
  return;
}


// ===== 0076da8c  <<libdiscore_common::stores::dispatcher::StoreDispatchResult_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::stores::dispatcher::StoreDispatchResult as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 28}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::stores::dispatcher::StoreDispatchResult_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_28}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct StoreDispatchResult",0x1a);
  return;
}


// ===== 0076daa0  <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DatabaseChange_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DatabaseChange as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::stores::dispatcher::DatabaseChange_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct DatabaseChange",0x15);
  return;
}


// ===== 0076dab4  <<libdiscore_common[1cb84820f9455fa0]::actions::guild_emoji::ServerGuildEmoji_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::guild_emoji::ServerGuildEmoji as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::guild_emoji::ServerGuildEmoji_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ServerGuildEmoji",0x17);
  return;
}


// ===== 0076dac8  <<libdiscore_common::actions::guild_emoji::CachedEmojisLoaded_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_29}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guild_emoji::CachedEmojisLoaded as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 29}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guild_emoji::CachedEmojisLoaded_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_29}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct CachedEmojisLoaded",0x19);
  return;
}


// ===== 0076dadc  <<libdiscore_common::actions::guild_emoji::GuildEmojisUpdate_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_27}::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */
/* <<libdiscore_common::actions::guild_emoji::GuildEmojisUpdate as
   serde::de::Deserialize>::deserialize::__Visitor as {backref 27}::Visitor>::expecting */

void __rustcall
<<libdiscore_common::actions::guild_emoji::GuildEmojisUpdate_as_serde::de::Deserialize>::deserialize::__Visitor_as{backref_27}::Visitor>
::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct GuildEmojisUpdate",0x18);
  return;
}


// ===== 0076daf0  <<libdiscore_common[1cb84820f9455fa0]::actions::common::Logout_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::common::Logout as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::common::Logout_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct Logout",0xd);
  return;
}


// ===== 0076db04  <<libdiscore_common[1cb84820f9455fa0]::actions::common::LibdiscoreReset_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::common::LibdiscoreReset as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::common::LibdiscoreReset_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct LibdiscoreReset",0x16);
  return;
}


// ===== 0076db18  <<libdiscore_common[1cb84820f9455fa0]::actions::common::SimulateCrash_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::common::SimulateCrash as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::common::SimulateCrash_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct SimulateCrash",0x14);
  return;
}


// ===== 0076db2c  <<libdiscore_common[1cb84820f9455fa0]::actions::common::SimulateStoreError_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::common::SimulateStoreError as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::common::SimulateStoreError_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct SimulateStoreError",0x19);
  return;
}


// ===== 0076db40  <<libdiscore_common[1cb84820f9455fa0]::actions::common::ConnectionOpen_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::common::ConnectionOpen as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::common::ConnectionOpen_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ConnectionOpen",0x15);
  return;
}


// ===== 0076db54  <<libdiscore_common[1cb84820f9455fa0]::actions::common::ResetSocket_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>::expecting =====

/* <<libdiscore_common[1cb84820f9455fa0]::actions::common::ResetSocket as
   serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor as
   serde[52fff5c06b43f145]::de::Visitor>::expecting */

void <<libdiscore_common[1cb84820f9455fa0]::actions::common::ResetSocket_as_serde[52fff5c06b43f145]::de::Deserialize>::deserialize::__Visitor_as_serde[52fff5c06b43f145]::de::Visitor>
     ::expecting(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"struct ResetSocket",0x12);
  return;
}


// ===== 0076db68  FUN_0076db68 =====

void FUN_0076db68(undefined8 *param_1,undefined8 param_2)

{
  char *local_18;
  
  local_18 = (char *)*param_1 + 1;
  if (*(char *)*param_1 == '\x01') {
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,&DAT_002bd0bc,4,&local_18,&DAT_00ad8470);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd198,4);
  return;
}


// ===== 0076dbc4  FUN_0076dbc4 =====

void FUN_0076dbc4(ulong *param_1,uint *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = param_1[8];
  param_1[6] = param_1[6] + param_3;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar4 = param_3 & 0xfffffffffffffff8;
    param_3 = param_3 & 7;
    if (uVar4 != 0) goto LAB_0076dcfc;
LAB_0076dc20:
    if (param_3 < 4) goto LAB_0076dd54;
LAB_0076dc28:
    uVar4 = (ulong)*(uint *)((long)param_2 + uVar3);
    uVar7 = 4;
    if (param_3 < 6) goto LAB_0076dd80;
  }
  else {
    uVar3 = 8 - uVar4;
    uVar7 = uVar3;
    if (param_3 <= uVar3) {
      uVar7 = param_3;
    }
    if (uVar7 < 4) {
      uVar9 = 0;
      uVar6 = 0;
      if (1 < uVar7) goto LAB_0076dc54;
    }
    else {
      uVar6 = (ulong)*param_2;
      uVar9 = 4;
      if (5 < uVar7) {
LAB_0076dc54:
        puVar1 = (ushort *)((long)param_2 + uVar9);
        lVar11 = uVar9 << 3;
        uVar9 = uVar9 | 2;
        uVar6 = (ulong)*puVar1 << lVar11 | uVar6;
      }
    }
    if (uVar9 < uVar7) {
      uVar6 = (ulong)*(byte *)((long)param_2 + uVar9) << (uVar9 << 3) | uVar6;
    }
    uVar7 = param_1[7] | uVar6 << ((uVar4 & 7) << 3);
    param_1[7] = uVar7;
    if (param_3 < uVar3) {
      param_1[8] = uVar4 + param_3;
      return;
    }
    uVar6 = param_1[2];
    uVar9 = param_1[3] ^ uVar7;
    uVar4 = uVar6 + *param_1;
    uVar8 = uVar4 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
    uVar5 = param_1[1] + uVar9 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
    uVar6 = param_1[1] + uVar9 + uVar8;
    uVar4 = uVar5 + (uVar4 >> 0x20 | uVar4 << 0x20);
    param_1[2] = uVar6 ^ (uVar8 >> 0x2f | uVar8 << 0x11);
    param_1[3] = uVar4 ^ (uVar5 >> 0x2b | uVar5 << 0x15);
    *param_1 = uVar4 ^ uVar7;
    param_1[1] = uVar6 >> 0x20 | uVar6 << 0x20;
    uVar4 = param_3 - uVar3 & 0xfffffffffffffff8;
    param_3 = param_3 - uVar3 & 7;
    if (uVar4 <= uVar3) goto LAB_0076dc20;
LAB_0076dcfc:
    uVar6 = param_1[2];
    uVar9 = param_1[3];
    uVar7 = *param_1;
    uVar5 = param_1[1];
    do {
      puVar2 = (ulong *)((long)param_2 + uVar3);
      uVar7 = uVar7 + uVar6;
      uVar3 = uVar3 + 8;
      uVar6 = uVar7 ^ (uVar6 >> 0x33 | uVar6 << 0xd);
      uVar9 = *puVar2 ^ uVar9;
      uVar8 = uVar9 + uVar5 ^ (uVar9 >> 0x30 | uVar9 << 0x10);
      uVar9 = uVar9 + uVar5 + uVar6;
      uVar6 = uVar9 ^ (uVar6 >> 0x2f | uVar6 << 0x11);
      uVar5 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar8 + (uVar7 >> 0x20 | uVar7 << 0x20);
      uVar9 = uVar7 ^ (uVar8 >> 0x2b | uVar8 << 0x15);
      uVar7 = uVar7 ^ *puVar2;
    } while (uVar3 < uVar4);
    param_1[2] = uVar6;
    param_1[3] = uVar9;
    *param_1 = uVar7;
    param_1[1] = uVar5;
    if (3 < param_3) goto LAB_0076dc28;
LAB_0076dd54:
    uVar7 = 0;
    uVar4 = 0;
    if (param_3 < 2) goto LAB_0076dd80;
  }
  lVar10 = uVar7 << 3;
  lVar11 = uVar7 + uVar3;
  uVar7 = uVar7 | 2;
  uVar4 = (ulong)*(ushort *)((long)param_2 + lVar11) << lVar10 | uVar4;
LAB_0076dd80:
  if (uVar7 < param_3) {
    param_1[7] = (ulong)*(byte *)((long)param_2 + uVar7 + uVar3) << (uVar7 << 3) | uVar4;
    param_1[8] = param_3;
    return;
  }
  param_1[7] = uVar4;
  param_1[8] = param_3;
  return;
}


// ===== 0076ddac  FUN_0076ddac =====

void FUN_0076ddac(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 in_x4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_28;
  undefined4 local_8;
  uint local_4;
  
  if (((*(ulong *)PTR_GLOBAL_PANIC_COUNT_00b00bf0 & 0x7fffffffffffffff) == 0) ||
     (iVar4 = std::panicking::panic_count::is_zero_slow_path(), iVar4 != 0)) {
    lVar5 = *param_1;
    puVar1 = (ulong *)(lVar5 + 0x18);
    uVar6 = *puVar1;
    local_8 = (undefined4)(uVar6 >> 0x20);
    if (*(int *)(lVar5 + 0x20) != (int)uVar6) {
      uVar9 = uVar6 & 0xffffffff;
      do {
        local_4 = (uint)uVar9 + 1;
        uVar7 = (uint)(uVar6 >> 0x20);
        if (uVar7 == (uint)uVar9) {
          uVar8 = CONCAT44(local_4,local_4);
        }
        else {
          if (local_4 == uVar7) {
                    /* WARNING: Subroutine does not return */
            core::panicking::assert_failed<u32,u32>
                      (1,&local_8,&local_4,0,in_x4,&PTR_s__root__cargo_registry_src_index__00ad83d8)
            ;
          }
          uVar8 = uVar6 & 0xffffffff00000000 | (ulong)local_4;
        }
        while (uVar9 = *puVar1, uVar9 == uVar6) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            local_28 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + (uVar6 & 0xff) * 8);
            FUN_007674bc(&local_28);
                    /* WARNING: Subroutine does not return */
            core::panicking::panic_fmt
                      ("queue not empty",0x1f,&PTR_s__root__cargo_registry_src_index__00ad8458);
          }
        }
        ClearExclusiveLocal();
        local_8 = (undefined4)(uVar9 >> 0x20);
        uVar6 = uVar9;
      } while (*(int *)(lVar5 + 0x20) != (int)uVar9);
    }
  }
  return;
}


// ===== 0076dec8  FUN_0076dec8 =====

void FUN_0076dec8(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a sequence",10);
  return;
}


// ===== 0076dedc  FUN_0076dedc =====

void FUN_0076dedc(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"a map",5);
  return;
}


// ===== 0076def0  <serde::de::impls::StringVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall <serde::de::impls::StringVisitor_as_serde::de::Visitor>::expecting(void)

{
  (*(code *)PTR_expecting_00b021d8)();
  return;
}


// ===== 0076def4  <<i32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
<<i32_as_serde::de::Deserialize>::deserialize::PrimitiveVisitor_as_serde::de::Visitor>::expecting
          (void)

{
  (*(code *)PTR_expecting_00b021f0)();
  return;
}


// ===== 0076def8  FUN_0076def8 =====

void FUN_0076def8(undefined2 param_1,undefined2 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_34;
  
  if (param_3 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar1 = (long *)FUN_004b25a4(8,8);
    if (plVar1 == (long *)0x0) {
                    /* try { // try from 0076dfb4 to 0076dfbf has its CatchHandler @ 0076dfc4 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    *plVar1 = param_3;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = plVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = CONCAT44(uStack_34,CONCAT22(param_2,param_1));
    puVar2[0xc] = &PTR_FUN_00adea90;
    puVar2[1] = uStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = uStack_88;
    puVar2[2] = local_90;
    puVar2[5] = uStack_78;
    puVar2[4] = uStack_80;
    return;
  }
                    /* try { // try from 0076dfa4 to 0076dfaf has its CatchHandler @ 0076dfd8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076dff0  FUN_0076dff0 =====

void FUN_0076dff0(undefined2 param_1,undefined2 param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_34;
  
  if (*param_3 == -1) {
    plVar1 = (long *)0x0;
  }
  else {
    lStack_98 = param_3[1];
    lStack_88 = param_3[3];
    local_90 = param_3[2];
    lStack_78 = param_3[5];
    local_80 = param_3[4];
    local_70 = param_3[6];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar1 = (long *)FUN_004b25a4(0x38,8);
    if (plVar1 == (long *)0x0) {
                    /* try { // try from 0076e0dc to 0076e0e7 has its CatchHandler @ 0076e0ec */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x38);
    }
    lVar5 = param_3[1];
    lVar4 = *param_3;
    lVar7 = param_3[3];
    lVar6 = param_3[2];
    lVar8 = param_3[4];
    lVar3 = param_3[6];
    plVar1[5] = param_3[5];
    plVar1[4] = lVar8;
    plVar1[1] = lVar5;
    *plVar1 = lVar4;
    plVar1[3] = lVar7;
    plVar1[2] = lVar6;
    plVar1[6] = lVar3;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = plVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = CONCAT44(uStack_34,CONCAT22(param_2,param_1));
    puVar2[0xc] = &PTR_FUN_00adebf8;
    puVar2[1] = lStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = lStack_88;
    puVar2[2] = local_90;
    puVar2[5] = lStack_78;
    puVar2[4] = local_80;
    return;
  }
                    /* try { // try from 0076e0cc to 0076e0d7 has its CatchHandler @ 0076e100 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076e118  FUN_0076e118 =====

void FUN_0076e118(undefined2 param_1,undefined2 param_2,char param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_34;
  
  if (param_3 == -1) {
    pcVar1 = (char *)0x0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pcVar1 = (char *)FUN_004b25a4(1,1);
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,1);
    }
    *pcVar1 = param_3;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = pcVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = CONCAT44(uStack_34,CONCAT22(param_2,param_1));
    puVar2[0xc] = &DAT_00adec70;
    puVar2[1] = uStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = uStack_88;
    puVar2[2] = local_90;
    puVar2[5] = uStack_78;
    puVar2[4] = uStack_80;
    return;
  }
                    /* try { // try from 0076e1c8 to 0076e1d3 has its CatchHandler @ 0076e1e4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076e1fc  FUN_0076e1fc =====

void FUN_0076e1fc(undefined2 param_1,undefined2 param_2,char param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_34;
  
  if (param_3 == -1) {
    pcVar1 = (char *)0x0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pcVar1 = (char *)FUN_004b25a4(1,1);
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,1);
    }
    *pcVar1 = param_3;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = pcVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = CONCAT44(uStack_34,CONCAT22(param_2,param_1));
    puVar2[0xc] = &DAT_00aded60;
    puVar2[1] = uStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = uStack_88;
    puVar2[2] = local_90;
    puVar2[5] = uStack_78;
    puVar2[4] = uStack_80;
    return;
  }
                    /* try { // try from 0076e2ac to 0076e2b7 has its CatchHandler @ 0076e2c8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076e2e0  FUN_0076e2e0 =====

void FUN_0076e2e0(undefined2 param_1,undefined2 param_2,char param_3,char param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_34;
  
  if (param_3 == -1) {
    pcVar1 = (char *)0x0;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    pcVar1 = (char *)FUN_004b25a4(2,1);
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(1,2);
    }
    *pcVar1 = param_3;
    pcVar1[1] = param_4;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = pcVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = CONCAT44(uStack_34,CONCAT22(param_2,param_1));
    puVar2[0xc] = &DAT_00adedd8;
    puVar2[1] = uStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = uStack_88;
    puVar2[2] = local_90;
    puVar2[5] = uStack_78;
    puVar2[4] = uStack_80;
    return;
  }
                    /* try { // try from 0076e398 to 0076e3a3 has its CatchHandler @ 0076e3b4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076e3cc  FUN_0076e3cc =====

void FUN_0076e3cc(undefined2 param_1,undefined2 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_34;
  
  if (*(char *)((long)param_3 + 0x29) == -1) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = param_3[1];
    uStack_88 = param_3[3];
    local_90 = param_3[2];
    uStack_78 = param_3[5];
    local_80 = param_3[4];
    local_70 = param_3[6];
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x38,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0076e4b8 to 0076e4c3 has its CatchHandler @ 0076e4c8 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x38);
    }
    uVar5 = param_3[1];
    uVar4 = *param_3;
    uVar7 = param_3[3];
    uVar6 = param_3[2];
    uVar8 = param_3[4];
    uVar3 = param_3[6];
    puVar1[5] = param_3[5];
    puVar1[4] = uVar8;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
    puVar1[6] = uVar3;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = puVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = CONCAT44(uStack_34,CONCAT22(param_2,param_1));
    puVar2[0xc] = &PTR_FUN_00adefb8;
    puVar2[1] = uStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = uStack_88;
    puVar2[2] = local_90;
    puVar2[5] = uStack_78;
    puVar2[4] = local_80;
    return;
  }
                    /* try { // try from 0076e4a8 to 0076e4b3 has its CatchHandler @ 0076e4dc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076e4f4  FUN_0076e4f4 =====

void FUN_0076e4f4(undefined2 param_1,undefined2 param_2,void *param_3,size_t param_4)

{
  undefined1 *__dest;
  size_t *psVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_44;
  
  if (param_3 == (void *)0x0) {
    psVar1 = (size_t *)0x0;
  }
  else {
    if ((long)param_4 < 0) {
      uVar3 = 0;
LAB_0076e520:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar3,param_4);
    }
    if (param_4 == 0) {
      __dest = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_4,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0076e520;
      memcpy(__dest,param_3,param_4);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    if (psVar1 == (size_t *)0x0) {
                    /* try { // try from 0076e610 to 0076e61b has its CatchHandler @ 0076e630 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    *psVar1 = param_4;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = param_4;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0076e620 to 0076e62b has its CatchHandler @ 0076e650 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x70);
  }
  puVar2[7] = uStack_78;
  puVar2[6] = local_80;
  puVar2[9] = uStack_68;
  puVar2[8] = uStack_70;
  puVar2[0xb] = psVar1;
  puVar2[10] = local_60;
  puVar2[0xd] = CONCAT44(uStack_44,CONCAT22(param_2,param_1));
  puVar2[0xc] = &PTR_FUN_00ad86a8;
  puVar2[1] = uStack_a8;
  *puVar2 = 0xffffffffffffffff;
  puVar2[3] = uStack_98;
  puVar2[2] = local_a0;
  puVar2[5] = uStack_88;
  puVar2[4] = uStack_90;
  return;
}


// ===== 0076e668  FUN_0076e668 =====

void FUN_0076e668(byte *param_1,char *param_2,byte *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  
  uStack_c8 = *(undefined8 *)(param_2 + 0x29);
  local_d0 = *(undefined8 *)(param_2 + 0x21);
  uStack_b8 = *(undefined8 *)(param_2 + 0x39);
  uStack_c0 = *(undefined8 *)(param_2 + 0x31);
  bVar3 = *param_3;
  local_b0 = *(undefined8 *)(param_2 + 0x41);
  uStack_d8 = *(undefined8 *)(param_2 + 0x19);
  uStack_e0 = *(undefined8 *)(param_2 + 0x11);
  plVar2 = *(long **)(param_3 + 8);
  uStack_a8 = (undefined7)*(undefined8 *)(param_2 + 0x49);
  uStack_e8 = *(undefined8 *)(param_2 + 9);
  local_f0 = *(undefined8 *)(param_2 + 1);
  uStack_a1 = (undefined1)*(undefined8 *)(param_2 + 0x50);
  uStack_a0 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x50) >> 8);
  if (*param_2 == -2) {
    if (1 < bVar3) {
                    /* try { // try from 0076e6d4 to 0076e6db has its CatchHandler @ 0076e81c */
      (**(code **)(*plVar2 + 0x20))(plVar2 + 3,plVar2[1],plVar2[2]);
      free(plVar2);
    }
    bVar3 = 0xfe;
  }
  else {
    uStack_6f = *(undefined8 *)(param_2 + 0x29);
    local_77 = *(undefined8 *)(param_2 + 0x21);
    puVar4 = (undefined8 *)((ulong)&uStack_98 | 1);
    uStack_8f = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_2 + 9) >> 0x38);
    local_97 = (undefined7)*(undefined8 *)(param_2 + 1);
    uStack_90 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
    uStack_5f = *(undefined8 *)(param_2 + 0x39);
    local_67 = *(undefined8 *)(param_2 + 0x31);
    local_57 = *(undefined8 *)(param_2 + 0x41);
    uStack_7f = *(undefined8 *)(param_2 + 0x19);
    local_87 = *(undefined8 *)(param_2 + 0x11);
    uStack_4f = (undefined7)*(undefined8 *)(param_2 + 0x49);
    uStack_48 = (undefined1)*(undefined8 *)(param_2 + 0x50);
    uStack_47 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x50) >> 8);
    if (*param_2 == '\x02') {
      plVar2 = (long *)CONCAT71(uStack_8f,uStack_90);
                    /* try { // try from 0076e748 to 0076e74f has its CatchHandler @ 0076e7dc */
      (**(code **)(*plVar2 + 0x20))(plVar2 + 3,plVar2[1],plVar2[2]);
      free(plVar2);
    }
    uVar1 = *(undefined4 *)(param_3 + 4);
    uStack_c8 = puVar4[5];
    local_d0 = puVar4[4];
    uStack_b8 = puVar4[7];
    uStack_c0 = puVar4[6];
    local_b0 = puVar4[8];
    *(undefined4 *)puVar4 = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((long)puVar4 + 3) = uVar1;
    uStack_e8 = puVar4[1];
    local_f0 = *puVar4;
    uStack_d8 = puVar4[3];
    uStack_e0 = puVar4[2];
    uStack_a8 = (undefined7)puVar4[9];
    uStack_a1 = (undefined1)*(undefined8 *)((long)puVar4 + 0x4f);
    uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)puVar4 + 0x4f) >> 8);
  }
  *param_1 = bVar3;
  *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_a1,uStack_a8);
  *(undefined8 *)(param_1 + 0x41) = local_b0;
  *(undefined8 *)(param_1 + 0x29) = uStack_c8;
  *(undefined8 *)(param_1 + 0x21) = local_d0;
  *(undefined8 *)(param_1 + 0x39) = uStack_b8;
  *(undefined8 *)(param_1 + 0x31) = uStack_c0;
  *(ulong *)(param_1 + 0x50) = CONCAT71(uStack_a0,uStack_a1);
  *(undefined8 *)(param_1 + 9) = uStack_e8;
  *(undefined8 *)(param_1 + 1) = local_f0;
  *(undefined8 *)(param_1 + 0x19) = uStack_d8;
  *(undefined8 *)(param_1 + 0x11) = uStack_e0;
  return;
}


// ===== 0076e838  FUN_0076e838 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076e838(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  uint local_e8;
  undefined4 uStack_e4;
  long local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  long local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 auStack_70 [2];
  
  lVar4 = *param_2 - 2;
  if (*param_2 < 2) {
    lVar4 = 1;
  }
  if (lVar4 == 0) {
    if (param_2[1] != 0) {
      FUN_007d57fc(&local_e8,param_4,param_3);
      if (CONCAT44(uStack_e4,local_e8) != 1) {
        if (local_e0 == 0) {
          *param_1 = 0xfffffffffffffffe;
          param_1[1] = uStack_d8;
          return;
        }
        local_88 = local_e0;
        uStack_80 = uStack_d8;
        auStack_70[0] = uStack_c8;
        local_78 = local_d0;
        uVar2 = param_2[1] - local_d0;
        if (param_2[1] < local_d0) {
          uVar2 = 0;
        }
        else if (local_d0 == 0) {
                    /* try { // try from 0076f3d0 to 0076f3d7 has its CatchHandler @ 0076f674 */
          uVar1 = <alloc::io::error::core::io::error::Error>::
                  new<hyper::proto::h1::decode::IncompleteBody>(0x25);
          pcVar3 = *(code **)(local_e0 + 0x20);
          *param_1 = 0xfffffffffffffffe;
          param_1[1] = uVar1;
          (*pcVar3)(auStack_70,uStack_d8,0);
          return;
        }
        param_2[1] = uVar2;
        param_1[2] = uStack_d8;
        param_1[1] = local_e0;
        param_1[4] = uStack_c8;
        param_1[3] = local_d0;
        *param_1 = 0xffffffffffffffff;
        return;
      }
      goto LAB_0076f310;
    }
  }
  else {
    if (lVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0076e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_0076e8fc + (ulong)*(ushort *)("" + (ulong)(byte)param_2[0xb] * 2) * 4))();
      return;
    }
    if ((param_2[1] & 1) == 0) {
      FUN_007d57fc(&local_e8,param_4,param_3,0x2000);
      if ((local_e8 & 1) == 0) {
        if (local_e0 != 0) {
          *param_1 = 0xffffffffffffffff;
          param_1[2] = uStack_d8;
          param_1[1] = local_e0;
          param_1[4] = uStack_c8;
          param_1[3] = local_d0;
          *(bool *)(param_2 + 1) = local_d0 == 0;
          return;
        }
        *param_1 = 0xfffffffffffffffe;
        param_1[1] = uStack_d8;
        return;
      }
LAB_0076f310:
      *param_1 = 0xfffffffffffffffd;
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = &PTR_FUN_00ad8490;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 1;
  return;
}


// ===== 0076f85c  FUN_0076f85c =====

void FUN_0076f85c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,void *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long local_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 local_1030;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined1 auStack_ce0 [1096];
  undefined1 auStack_898 [1056];
  undefined1 auStack_478 [1096];
  
  local_1030 = 0;
  plVar4 = (long *)*param_2;
  do {
    lVar6 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar6 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (-1 < lVar6) {
                    /* try { // try from 0076f898 to 0076f89f has its CatchHandler @ 0076f984 */
    <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>
    ::new(&local_1140);
    if (local_1140 == 2) {
      uStack_d18 = uStack_1130;
      local_d20 = local_1138;
      uStack_d08 = uStack_1120;
      local_d10 = local_1128;
      uStack_cf8 = uStack_1110;
      local_d00 = local_1118;
      local_cf0 = local_1108;
      memcpy(auStack_ce0,param_4,0x448);
                    /* try { // try from 0076f8dc to 0076f8e7 has its CatchHandler @ 0076f974 */
      uVar5 = <alloc::io::error::core::io::error::Error>::new<rustls::error::Error>(0x2a,&local_d20)
      ;
      memcpy(param_1 + 1,param_4,0x448);
      param_1[0x8a] = uVar5;
      *param_1 = 4;
      return;
    }
    memcpy(auStack_898,&local_1140,0x420);
    memcpy(auStack_478,param_4,0x448);
    memcpy(param_1,auStack_898,0x868);
    *(undefined1 *)(param_1 + 0x10d) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x76f974);
  (*pcVar3)();
}


// ===== 0076f99c  FUN_0076f99c =====

void FUN_0076f99c(void *param_1,size_t param_2)

{
  undefined1 *__dest;
  size_t *psVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  uint6 uStack_36;
  
  if (-1 < (long)param_2) {
    if (param_2 == 0) {
      __dest = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar3 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_2,1);
      if (__dest == (undefined1 *)0x0) goto LAB_0076f9bc;
      memcpy(__dest,param_1,param_2);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    if (psVar1 == (size_t *)0x0) {
                    /* try { // try from 0076fa8c to 0076fa97 has its CatchHandler @ 0076fac4 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    *psVar1 = param_2;
    psVar1[1] = (size_t)__dest;
    psVar1[2] = param_2;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* try { // try from 0076fa9c to 0076faa7 has its CatchHandler @ 0076faac */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    puVar2[7] = uStack_68;
    puVar2[6] = local_70;
    puVar2[9] = uStack_58;
    puVar2[8] = uStack_60;
    puVar2[0xb] = psVar1;
    puVar2[10] = local_50;
    puVar2[0xd] = (ulong)uStack_36 << 0x10;
    puVar2[0xc] = &PTR_FUN_00ad86a8;
    puVar2[1] = uStack_98;
    *puVar2 = 0xffffffffffffffff;
    puVar2[3] = uStack_88;
    puVar2[2] = local_90;
    puVar2[5] = uStack_78;
    puVar2[4] = uStack_80;
    return;
  }
  uVar3 = 0;
LAB_0076f9bc:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar3,param_2);
}


// ===== 0076fae4  FUN_0076fae4 =====

long * FUN_0076fae4(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  undefined6 uStack_26;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar1 = (long *)FUN_004b25a4(0x70,8);
  if (plVar1 != (long *)0x0) {
    plVar1[9] = lStack_48;
    plVar1[8] = local_50;
    plVar1[0xb] = param_1;
    plVar1[10] = lStack_40;
    plVar1[1] = lStack_88;
    *plVar1 = -1;
    plVar1[3] = lStack_78;
    plVar1[2] = lStack_80;
    plVar1[0xd] = CONCAT62(uStack_26,2);
    plVar1[0xc] = param_2;
    plVar1[5] = lStack_68;
    plVar1[4] = local_70;
    plVar1[7] = lStack_58;
    plVar1[6] = lStack_60;
    if ((*plVar1 != -1) && (*plVar1 != 0)) {
      free((void *)plVar1[1]);
    }
    lVar4 = param_3[5];
    lVar3 = param_3[4];
    lVar6 = param_3[7];
    lVar5 = param_3[6];
    lVar7 = param_3[8];
    lVar2 = param_3[10];
    plVar1[9] = param_3[9];
    plVar1[8] = lVar7;
    plVar1[5] = lVar4;
    plVar1[4] = lVar3;
    plVar1[7] = lVar6;
    plVar1[6] = lVar5;
    lVar4 = param_3[1];
    lVar3 = *param_3;
    lVar6 = param_3[3];
    lVar5 = param_3[2];
    plVar1[10] = lVar2;
    plVar1[1] = lVar4;
    *plVar1 = lVar3;
    plVar1[3] = lVar6;
    plVar1[2] = lVar5;
    return plVar1;
  }
                    /* try { // try from 0076fb94 to 0076fb9f has its CatchHandler @ 0076fba4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076fbd0  FUN_0076fbd0 =====

long * FUN_0076fbd0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  undefined6 uStack_26;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(8,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0076fca8 to 0076fcb3 has its CatchHandler @ 0076fcdc */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,8);
  }
  *puVar1 = param_1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar2 = (long *)FUN_004b25a4(0x70,8);
  if (plVar2 != (long *)0x0) {
    plVar2[9] = lStack_48;
    plVar2[8] = local_50;
    plVar2[0xb] = (long)puVar1;
    plVar2[10] = lStack_40;
    plVar2[1] = lStack_88;
    *plVar2 = -1;
    plVar2[3] = lStack_78;
    plVar2[2] = lStack_80;
    plVar2[0xd] = CONCAT62(uStack_26,2);
    plVar2[0xc] = (long)&PTR_FUN_00adea90;
    plVar2[5] = lStack_68;
    plVar2[4] = local_70;
    plVar2[7] = lStack_58;
    plVar2[6] = lStack_60;
    if ((*plVar2 != -1) && (*plVar2 != 0)) {
      free((void *)plVar2[1]);
    }
    lVar5 = param_2[5];
    lVar4 = param_2[4];
    lVar7 = param_2[7];
    lVar6 = param_2[6];
    lVar8 = param_2[8];
    lVar3 = param_2[10];
    plVar2[9] = param_2[9];
    plVar2[8] = lVar8;
    plVar2[5] = lVar5;
    plVar2[4] = lVar4;
    plVar2[7] = lVar7;
    plVar2[6] = lVar6;
    lVar5 = param_2[1];
    lVar4 = *param_2;
    lVar7 = param_2[3];
    lVar6 = param_2[2];
    plVar2[10] = lVar3;
    plVar2[1] = lVar5;
    *plVar2 = lVar4;
    plVar2[3] = lVar7;
    plVar2[2] = lVar6;
    return plVar2;
  }
                    /* try { // try from 0076fcb8 to 0076fcc3 has its CatchHandler @ 0076fcc8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 0076fd08  FUN_0076fd08 =====

void FUN_0076fd08(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long local_58;
  
  uVar4 = *param_1;
  lVar7 = uVar4 - (uVar4 != 0);
  if (uVar4 != (uVar4 != 0)) {
    if (lVar7 != 1) {
      if (lVar7 == 2) {
                    /* try { // try from 0076fd4c to 0076fd53 has its CatchHandler @ 0076fec8 */
        FUN_00770080(param_1 + 8);
        uVar4 = param_1[6];
        if (uVar4 != 0) {
          uVar2 = param_1[4];
          uVar3 = param_1[5];
          uVar5 = param_1[3];
          uVar1 = 0;
          if (uVar5 <= uVar3) {
            uVar1 = uVar5;
          }
          lVar6 = uVar3 - uVar1;
          uVar9 = uVar5 - lVar6;
          lVar7 = 0;
          if (uVar9 <= uVar4) {
            lVar7 = uVar4 - uVar9;
          }
          if (uVar4 <= uVar9) {
            uVar5 = lVar6 + uVar4;
          }
          lVar6 = uVar5 - lVar6;
          if (lVar6 != 0) {
            puVar8 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + uVar2 + 8);
            do {
              if (puVar8[-1] != 0) {
                free((void *)*puVar8);
              }
              lVar6 = lVar6 + -1;
              puVar8 = puVar8 + 3;
            } while (lVar6 != 0);
          }
          if (uVar9 < uVar4) {
            puVar8 = (undefined8 *)(uVar2 + 8);
            do {
              if (puVar8[-1] != 0) {
                free((void *)*puVar8);
              }
              lVar7 = lVar7 + -1;
              puVar8 = puVar8 + 3;
            } while (lVar7 != 0);
          }
        }
        if (param_1[3] != 0) {
          free((void *)param_1[4]);
        }
        uVar4 = param_1[0x91];
      }
      else {
                    /* try { // try from 0076fdec to 0076fdf3 has its CatchHandler @ 0076feb4 */
        FUN_00770080(param_1 + 1);
        uVar4 = param_1[0x8a];
      }
      if ((1 < (uVar4 & 3) - 2) && ((uVar4 & 3) != 0)) {
        local_58 = uVar4 - 1;
        <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_58);
      }
    }
    return;
  }
                    /* try { // try from 0076fdc4 to 0076fdcb has its CatchHandler @ 0076fee4 */
  FUN_00770080(param_1 + 0x84);
  FUN_00771948(param_1);
  return;
}


// ===== 0076fefc  FUN_0076fefc =====

void FUN_0076fefc(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0076ff1c to 0076ff23 has its CatchHandler @ 0076ff54 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0076ff74  FUN_0076ff74 =====

void FUN_0076ff74(long param_1)

{
  if (*(char *)(param_1 + 0xa9) == '\x02') {
    return;
  }
                    /* try { // try from 0076ff98 to 0076ffa3 has its CatchHandler @ 0076ffb4 */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x10);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x58);
  return;
}


// ===== 0076ffcc  FUN_0076ffcc =====

void FUN_0076ffcc(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    __ptr = (void *)param_1[1];
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar3[-1] != -1) && (puVar3[-1] != 0)) {
          free((void *)*puVar3);
        }
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    if (lVar1 != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 00770058  FUN_00770058 =====

void FUN_00770058(char *param_1)

{
  if (((*param_1 == '\0') && (*(long *)(param_1 + 8) != -1)) && (*(long *)(param_1 + 8) != 0)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 00770080  FUN_00770080 =====

void FUN_00770080(long *param_1)

{
  if (*param_1 == 2) {
                    /* try { // try from 0077009c to 007700a3 has its CatchHandler @ 007700d4 */
    FUN_007dfadc(param_1 + 1);
    if ((int)param_1[4] != -1) {
      close((int)param_1[4]);
    }
    FUN_00771dd0(param_1 + 1);
    return;
  }
  FUN_00770364(param_1);
  return;
}


// ===== 00770100  FUN_00770100 =====

void FUN_00770100(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077012c to 00770133 has its CatchHandler @ 007701c4 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00770154 to 00770157 has its CatchHandler @ 007701bc */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = (long *)param_1[3];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00770178 to 0077017b has its CatchHandler @ 007701b4 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = (long *)param_1[4];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_hyper_rustls[8b73b3c5adfefd00]::connector::ResolveServerName+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
    ::drop_slow(param_1 + 4);
    return;
  }
  return;
}


// ===== 00770248  FUN_00770248 =====

void FUN_00770248(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  pcVar1 = (code *)*puVar2;
  if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0077026c to 00770273 has its CatchHandler @ 007702a4 */
    (*pcVar1)(*param_1);
  }
  if (puVar2[1] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 007702c4  FUN_007702c4 =====

void FUN_007702c4(long param_1)

{
                    /* try { // try from 007702d4 to 007702db has its CatchHandler @ 007702ec */
  FUN_00770080(param_1 + 0x420);
  FUN_00771948(param_1);
  return;
}


// ===== 00770304  FUN_00770304 =====

void FUN_00770304(long param_1)

{
                    /* try { // try from 00770314 to 00770317 has its CatchHandler @ 00770338 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_00771dd0(param_1);
  return;
}


// ===== 00770364  FUN_00770364 =====

void FUN_00770364(long param_1)

{
                    /* try { // try from 00770374 to 00770377 has its CatchHandler @ 007703a8 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
                    /* try { // try from 00770388 to 0077038f has its CatchHandler @ 007703a0 */
  FUN_00771dd0(param_1);
  FUN_00771948(param_1 + 0x20);
  return;
}


// ===== 007703e0  FUN_007703e0 =====

void FUN_007703e0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077040c to 00770413 has its CatchHandler @ 0077044c */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 00770480  FUN_00770480 =====

void FUN_00770480(long param_1)

{
  if (*(byte *)(param_1 + 0x984) - 3 < 2) {
    if (*(long *)(param_1 + 0x960) != 0) {
      free(*(void **)(param_1 + 0x968));
    }
    *(undefined2 *)(param_1 + 0x986) = 0;
    if (*(long *)(param_1 + 0x8f8) != 0) {
      free(*(void **)(param_1 + 0x900));
    }
                    /* try { // try from 007704cc to 007704d3 has its CatchHandler @ 007705d0 */
    FUN_00770080(param_1 + 0x4b0);
    *(undefined1 *)(param_1 + 0x985) = 0;
    return;
  }
  if (*(byte *)(param_1 + 0x984) == 0) {
                    /* try { // try from 007704e8 to 007704ef has its CatchHandler @ 00770568 */
    FUN_00770080(param_1);
    if (*(long *)(param_1 + 0x448) != 0) {
      free(*(void **)(param_1 + 0x450));
    }
    if (*(char *)(param_1 + 0x480) != '\x02') {
                    /* try { // try from 00770520 to 00770527 has its CatchHandler @ 00770560 */
      (**(code **)(*(long *)(param_1 + 0x460) + 0x20))
                (param_1 + 0x478,*(undefined8 *)(param_1 + 0x468),*(undefined8 *)(param_1 + 0x470));
    }
    if (*(char *)(param_1 + 0x4a8) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0077055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x488) + 0x20))
                (param_1 + 0x4a0,*(undefined8 *)(param_1 + 0x490),*(undefined8 *)(param_1 + 0x498));
      return;
    }
  }
  return;
}


// ===== 007705e0  FUN_007705e0 =====

ulong FUN_007705e0(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    uVar2 = param_1;
    if (*(char *)(param_1 + 0x58) == '\x03') {
                    /* try { // try from 007705fc to 00770607 has its CatchHandler @ 00770628 */
      uVar2 = FUN_00770630(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x59) = 0;
    }
    return uVar2;
  }
  uVar1 = close(*(int *)(param_1 + 0x50));
  return (ulong)uVar1;
}


// ===== 00770630  FUN_00770630 =====

ulong FUN_00770630(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar1 = close(*(int *)(param_1 + 0x28));
    return (ulong)uVar1;
  }
  if (*(char *)(param_1 + 0x2c) == '\x03') {
                    /* try { // try from 00770650 to 00770657 has its CatchHandler @ 00770694 */
    FUN_007dfadc(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      close(*(int *)(param_1 + 0x18));
    }
    uVar2 = FUN_00771dd0(param_1);
    return uVar2;
  }
  return param_1;
}


// ===== 007706c0  FUN_007706c0 =====

void FUN_007706c0(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__ptr;
  
  bVar1 = *(byte *)(param_1 + 0x2b2);
  if (bVar1 < 4) {
    if (bVar1 == 0) {
                    /* try { // try from 0077089c to 007708a3 has its CatchHandler @ 00770938 */
      FUN_00770f14(param_1 + 0x50);
                    /* try { // try from 007708a4 to 007708ab has its CatchHandler @ 00770930 */
      FUN_00771708(param_1 + 0xc0);
      FUN_00770e5c(param_1);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x2d0);
    __ptr = *(void **)(param_1 + 0x2c8);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00770748 to 0077074f has its CatchHandler @ 007708f4 */
      (*pcVar4)(__ptr);
    }
    if (puVar7[1] != 0) {
      free(__ptr);
    }
    bVar1 = *(byte *)(param_1 + 0x2b5);
    *(undefined1 *)(param_1 + 699) = 0;
  }
  else {
    if (bVar1 == 4) {
                    /* try { // try from 00770774 to 0077077b has its CatchHandler @ 00770984 */
      FUN_00770480(param_1 + 0x2c8);
      bVar1 = *(byte *)(param_1 + 0x2b4);
      *(undefined1 *)(param_1 + 0x2b3) = 0;
    }
    else {
      if (bVar1 != 5) {
        if (bVar1 != 6) {
          return;
        }
                    /* try { // try from 007706fc to 00770703 has its CatchHandler @ 007709f8 */
        FUN_00770abc(param_1 + 0x2c8);
        if (*(char *)(param_1 + 0x250) != '\x02') {
                    /* try { // try from 00770720 to 00770727 has its CatchHandler @ 007708ec */
          (**(code **)(*(long *)(param_1 + 0x230) + 0x20))
                    (param_1 + 0x248,*(undefined8 *)(param_1 + 0x238),
                     *(undefined8 *)(param_1 + 0x240));
        }
        goto LAB_00770860;
      }
                    /* try { // try from 0077078c to 00770793 has its CatchHandler @ 00770954 */
      FUN_0076fd08(param_1 + 0x2d0);
      plVar5 = *(long **)(param_1 + 0x2c8);
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007707b0 to 007707b7 has its CatchHandler @ 007708e0 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (param_1 + 0x2c8);
      }
      *(undefined1 *)(param_1 + 0x2ba) = 0;
      bVar1 = *(byte *)(param_1 + 0x2b4);
      *(undefined1 *)(param_1 + 0x2b3) = 0;
    }
    if (((((bVar1 & 1) != 0) && (*(char *)(param_1 + 0x2c70) == '\0')) &&
        (*(long *)(param_1 + 0x2c78) != -1)) && (*(long *)(param_1 + 0x2c78) != 0)) {
      free(*(void **)(param_1 + 0x2c80));
    }
    *(undefined1 *)(param_1 + 0x2b4) = 0;
    bVar1 = *(byte *)(param_1 + 0x2b5);
    *(undefined1 *)(param_1 + 699) = 0;
  }
  if ((bVar1 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x2a8);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00770800 to 00770807 has its CatchHandler @ 00770928 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_1 + 0x2a8);
    }
  }
  *(undefined1 *)(param_1 + 0x2b5) = 0;
                    /* try { // try from 0077080c to 00770813 has its CatchHandler @ 00770a2c */
  FUN_00770100(param_1 + 0x270);
  if (((*(byte *)(param_1 + 0x2b6) & 1) != 0) && (*(long *)(param_1 + 600) != 0)) {
    free(*(void **)(param_1 + 0x260));
  }
  *(undefined1 *)(param_1 + 0x2b6) = 0;
  if (((*(byte *)(param_1 + 0x2b7) & 1) != 0) && (*(char *)(param_1 + 0x250) != '\x02')) {
                    /* try { // try from 00770858 to 0077085f has its CatchHandler @ 00770920 */
    (**(code **)(*(long *)(param_1 + 0x230) + 0x20))
              (param_1 + 0x248,*(undefined8 *)(param_1 + 0x238),*(undefined8 *)(param_1 + 0x240));
  }
LAB_00770860:
  *(undefined1 *)(param_1 + 0x2b7) = 0;
  *(undefined1 *)(param_1 + 700) = 0;
  *(undefined1 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2bd) = 0;
                    /* try { // try from 00770870 to 00770877 has its CatchHandler @ 00770a98 */
  FUN_00771708(param_1 + 0x188);
  if ((*(byte *)(param_1 + 0x2b9) & 1) != 0) {
                    /* try { // try from 00770880 to 00770887 has its CatchHandler @ 00770a24 */
    FUN_00770f14(param_1 + 0x118);
  }
  *(undefined1 *)(param_1 + 0x2b9) = 0;
  return;
}


// ===== 00770abc  FUN_00770abc =====

void FUN_00770abc(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  void *__ptr;
  
  if (*(char *)(param_1 + 0x211) == '\0') {
                    /* try { // try from 00770bec to 00770bf3 has its CatchHandler @ 00770d88 */
    FUN_00770f14(param_1);
    FUN_00771708(param_1 + 0x70);
    return;
  }
  if (*(char *)(param_1 + 0x211) == '\x03') {
    puVar6 = *(undefined8 **)(param_1 + 0x208);
    __ptr = *(void **)(param_1 + 0x200);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00770af0 to 00770af7 has its CatchHandler @ 00770cbc */
      (*pcVar3)(__ptr);
    }
    if (puVar6[1] != 0) {
      free(__ptr);
    }
                    /* try { // try from 00770b0c to 00770b13 has its CatchHandler @ 00770ce4 */
    FUN_00770100(param_1 + 0x1c8);
    plVar4 = *(long **)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x213) = 0;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00770b34 to 00770b3b has its CatchHandler @ 00770cb4 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_1 + 0x1a8);
    }
    plVar4 = *(long **)(param_1 + 400);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00770b58 to 00770b5f has its CatchHandler @ 00770c84 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow(param_1 + 400);
    }
    plVar4 = *(long **)(param_1 + 0x198);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00770b7c to 00770b83 has its CatchHandler @ 00770c7c */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x198);
    }
    plVar4 = *(long **)(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x214) = 0;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00770ba4 to 00770bab has its CatchHandler @ 00770c30 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_1 + 0x120);
    }
    plVar4 = *(long **)(param_1 + 0x128);
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00770bc8 to 00770bcf has its CatchHandler @ 00770c28 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
                (param_1 + 0x128);
    }
    if (*(char *)(param_1 + 0xf8) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00770c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0xd8) + 0x20))
                (param_1 + 0xf0,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8));
      return;
    }
  }
  return;
}


// ===== 00770da0  FUN_00770da0 =====

void FUN_00770da0(long *param_1)

{
  code *pcVar1;
  void *__ptr;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[0xb];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00770dc8 to 00770dcf has its CatchHandler @ 00770e1c */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00770e5c  FUN_00770e5c =====

void FUN_00770e5c(long *param_1)

{
  if (*param_1 == 0) {
    if ((char)param_1[9] != '\x02') {
                    /* try { // try from 00770eb0 to 00770eb7 has its CatchHandler @ 00770ed4 */
      (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
    }
  }
  else if ((char)param_1[9] != '\x02') {
                    /* try { // try from 00770e8c to 00770e93 has its CatchHandler @ 00770ef0 */
    (**(code **)(param_1[5] + 0x20))(param_1 + 8,param_1[6],param_1[7]);
  }
                    /* WARNING: Could not recover jumptable at 0x00770ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 00770f14  FUN_00770f14 =====

void FUN_00770f14(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x38);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00770f40 to 00770f43 has its CatchHandler @ 00771028 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x40);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00770f64 to 00770f67 has its CatchHandler @ 00771020 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x50);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00770f88 to 00770f8b has its CatchHandler @ 00771018 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x58);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00770fac to 00770faf has its CatchHandler @ 00771010 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x60);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00770fd0 to 00770fd3 has its CatchHandler @ 00771008 */
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
  }
  if (*(char *)(param_1 + 0x30) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00771004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 007710f4  FUN_007710f4 =====

void FUN_007710f4(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  pcVar4 = (code *)*puVar10;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0077111c to 00771123 has its CatchHandler @ 007713c8 */
    (*pcVar4)(pvVar2);
  }
  if (puVar10[1] != 0) {
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  pcVar4 = (code *)*puVar10;
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00771144 to 0077114b has its CatchHandler @ 007713ac */
    (*pcVar4)(pvVar2);
  }
  if (puVar10[1] != 0) {
    free(pvVar2);
  }
  if ((*(long *)(param_1 + 0x2d8) != -1) && (*(long *)(param_1 + 0x2d8) != 0)) {
    free(*(void **)(param_1 + 0x2e0));
  }
  lVar5 = *(long *)(param_1 + 0x2f0);
  if (lVar5 != -1) {
    lVar8 = *(long *)(param_1 + 0x300);
    if (lVar8 != 0) {
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x2f8) + 8);
      do {
        if ((puVar10[-1] != -1) && (puVar10[-1] != 0)) {
          free((void *)*puVar10);
        }
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar8 != 0);
      lVar5 = *(long *)(param_1 + 0x2f0);
    }
    if (lVar5 != 0) {
      free(*(void **)(param_1 + 0x2f8));
    }
  }
  uVar9 = *(ulong *)(param_1 + 0x78);
  if (uVar9 != 0) {
    lVar5 = *(long *)(param_1 + 0x68);
    uVar3 = *(ulong *)(param_1 + 0x70);
    uVar6 = *(ulong *)(param_1 + 0x60);
    uVar1 = 0;
    if (uVar6 <= uVar3) {
      uVar1 = uVar6;
    }
    lVar7 = uVar3 - uVar1;
    uVar11 = uVar6 - lVar7;
    lVar8 = 0;
    if (uVar11 <= uVar9) {
      lVar8 = uVar9 - uVar11;
    }
    if (uVar9 <= uVar11) {
      uVar6 = lVar7 + uVar9;
    }
    lVar7 = uVar6 - lVar7;
    if (lVar7 != 0) {
      puVar10 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar7 = lVar7 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar7 != 0);
    }
    if (uVar11 < uVar9) {
      puVar10 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar8 != 0);
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    free(*(void **)(param_1 + 0x68));
  }
  uVar9 = *(ulong *)(param_1 + 0xb0);
  if (uVar9 != 0) {
    lVar5 = *(long *)(param_1 + 0xa0);
    uVar3 = *(ulong *)(param_1 + 0xa8);
    uVar6 = *(ulong *)(param_1 + 0x98);
    uVar1 = 0;
    if (uVar6 <= uVar3) {
      uVar1 = uVar6;
    }
    lVar7 = uVar3 - uVar1;
    uVar11 = uVar6 - lVar7;
    lVar8 = 0;
    if (uVar11 <= uVar9) {
      lVar8 = uVar9 - uVar11;
    }
    if (uVar9 <= uVar11) {
      uVar6 = lVar7 + uVar9;
    }
    lVar7 = uVar6 - lVar7;
    if (lVar7 != 0) {
      puVar10 = (undefined8 *)(uVar3 * 0x18 + uVar1 * -0x18 + lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar7 = lVar7 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar7 != 0);
    }
    if (uVar11 < uVar9) {
      puVar10 = (undefined8 *)(lVar5 + 8);
      do {
        if (puVar10[-1] != 0) {
          free((void *)*puVar10);
        }
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 3;
      } while (lVar8 != 0);
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    free(*(void **)(param_1 + 0xa0));
  }
  if ((*(long *)(param_1 + 0x308) != -1) && (*(long *)(param_1 + 0x308) != 0)) {
    free(*(void **)(param_1 + 0x310));
  }
  FUN_00771448(param_1 + 0xc0);
  return;
}


// ===== 00771448  FUN_00771448 =====

void FUN_00771448(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((param_1[0xe] != -1) && (param_1[0xe] != 0)) {
    free((void *)param_1[0xf]);
  }
  uVar8 = param_1[0xd];
  uVar6 = param_1[10];
  if (uVar8 != 0) {
    lVar3 = param_1[0xb];
    uVar4 = param_1[0xc];
    uVar1 = 0;
    if (uVar6 <= uVar4) {
      uVar1 = uVar6;
    }
    lVar5 = uVar4 - uVar1;
    uVar10 = uVar6 - lVar5;
    lVar7 = 0;
    if (uVar10 <= uVar8) {
      lVar7 = uVar8 - uVar10;
    }
    uVar2 = uVar6;
    if (uVar8 <= uVar10) {
      uVar2 = lVar5 + uVar8;
    }
    lVar5 = uVar2 - lVar5;
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(lVar3 + uVar1 * -0x20 + uVar4 * 0x20 + 0x10);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar5 != 0);
    }
    if (uVar10 < uVar8) {
      puVar9 = (undefined8 *)(lVar3 + 0x10);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 4;
      } while (lVar7 != 0);
    }
  }
  if (uVar6 != 0) {
    free((void *)param_1[0xb]);
  }
  if (*param_1 != 0) {
                    /* try { // try from 0077150c to 00771513 has its CatchHandler @ 007715dc */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 1);
  }
  if (*(char *)((long)param_1 + 0x131) != '\x02') {
                    /* try { // try from 00771520 to 00771527 has its CatchHandler @ 007715c8 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x13);
                    /* try { // try from 00771528 to 0077152f has its CatchHandler @ 007715c0 */
    <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x1c);
  }
  if (*(char *)((long)param_1 + 0x1e1) == '\x02') {
    return;
  }
                    /* try { // try from 00771554 to 0077155b has its CatchHandler @ 007715ac */
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x29);
  <rustls::crypto::tls13::OkmBlock_as_core::ops::drop::Drop>::drop(param_1 + 0x32);
  return;
}


// ===== 007715fc  FUN_007715fc =====

void FUN_007715fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar8 = *(ulong *)(param_1 + 0x28);
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar8 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    uVar4 = *(ulong *)(param_1 + 0x20);
    uVar1 = 0;
    if (uVar6 <= uVar4) {
      uVar1 = uVar6;
    }
    lVar5 = uVar4 - uVar1;
    uVar10 = uVar6 - lVar5;
    lVar7 = 0;
    if (uVar10 <= uVar8) {
      lVar7 = uVar8 - uVar10;
    }
    uVar2 = uVar6;
    if (uVar8 <= uVar10) {
      uVar2 = lVar5 + uVar8;
    }
    lVar5 = uVar2 - lVar5;
    if (lVar5 != 0) {
      puVar9 = (undefined8 *)(uVar4 * 0x18 + uVar1 * -0x18 + lVar3 + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar5 = lVar5 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar5 != 0);
    }
    if (uVar10 < uVar8) {
      puVar9 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar9[-1] != 0) {
          free((void *)*puVar9);
        }
        lVar7 = lVar7 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar7 != 0);
    }
  }
  if (uVar6 != 0) {
    free(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 00771708  FUN_00771708 =====

void FUN_00771708(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 00771734 to 0077173b has its CatchHandler @ 0077177c */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 00771758 to 0077175f has its CatchHandler @ 007717ac */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00771778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 007717d0  FUN_007717d0 =====

void FUN_007717d0(char *param_1)

{
  long *__ptr;
  
  if (*param_1 == '\x02') {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 007717fc to 00771803 has its CatchHandler @ 00771858 */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 00771824 to 0077182b has its CatchHandler @ 0077188c */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
              (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00771848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
              (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    return;
  }
  return;
}


// ===== 007718b4  FUN_007718b4 =====

void FUN_007718b4(ulong param_1)

{
  long local_18;
  
  if ((1 < (param_1 & 3) - 2) && ((param_1 & 3) != 0)) {
    local_18 = param_1 - 1;
    <core::io::error::CustomOwner_as_core::ops::drop::Drop>::drop(&local_18);
  }
  return;
}


// ===== 007718fc  FUN_007718fc =====

void FUN_007718fc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 00771948  FUN_00771948 =====

void FUN_00771948(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  
  uVar9 = *(ulong *)(param_1 + 0x388);
  if (uVar9 == 0xffffffffffffffff) {
    puVar13 = *(undefined8 **)(param_1 + 0x398);
    pvVar4 = *(void **)(param_1 + 0x390);
    pcVar5 = (code *)*puVar13;
    if (pcVar5 != (code *)0x0) {
                    /* try { // try from 007719d8 to 007719df has its CatchHandler @ 00771cec */
      (*pcVar5)(pvVar4);
    }
    if (puVar13[1] != 0) {
      free(pvVar4);
    }
    goto LAB_00771b3c;
  }
  lVar15 = uVar9 + 0x7fffffffffffffef;
  if (uVar9 < 0x8000000000000011) {
    lVar15 = 0xb;
  }
  if (lVar15 < 0xb) {
    if (lVar15 < 8) {
      if (lVar15 - 2U < 6) goto LAB_00771b3c;
      if ((lVar15 == 0) || (lVar15 == 1)) {
        if (*(long *)(param_1 + 0x390) == 0) goto LAB_00771b3c;
        pvVar4 = *(void **)(param_1 + 0x398);
LAB_00771a8c:
        free(pvVar4);
        goto LAB_00771b3c;
      }
    }
    else {
      if (lVar15 - 9U < 2) goto LAB_00771b3c;
      if (lVar15 == 8) {
                    /* try { // try from 00771a3c to 00771a47 has its CatchHandler @ 00771cc4 */
        if (((*(long *)(param_1 + 0x390) < -0x7fffffffffffffeb) ||
            (*(long *)(param_1 + 0x390) == -1)) ||
           (FUN_0078ad9c(param_1 + 0x390), *(long *)(param_1 + 0x390) == 0)) goto LAB_00771b3c;
        pvVar4 = *(void **)(param_1 + 0x398);
LAB_00771a5c:
        free(pvVar4);
        goto LAB_00771b3c;
      }
    }
LAB_00771b18:
    plVar7 = *(long **)(param_1 + 0x390);
    lVar15 = param_1 + 0x390;
    do {
      bVar3 = *plVar7 + -1 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if (0xd < lVar15) {
      if (lVar15 - 0xeU < 7) goto LAB_00771b3c;
      goto LAB_00771b18;
    }
    if (lVar15 == 0xb) {
      uVar6 = uVar9 ^ 0x8000000000000000;
      if (-1 < (long)uVar9) {
        uVar6 = 0xd;
      }
      if ((uVar6 < 0xd) || (uVar6 - 0xe < 2)) goto LAB_00771b3c;
      if (uVar6 == 0xd) {
        if ((((*(byte *)(param_1 + 0x3a0) & 1) == 0) && (*(long *)(param_1 + 0x3a8) != -1)) &&
           (*(long *)(param_1 + 0x3a8) != 0)) {
          free(*(void **)(param_1 + 0x3b0));
        }
                    /* try { // try from 00771ad0 to 00771ad7 has its CatchHandler @ 00771ca8 */
        FUN_0078aba0(param_1 + 0x388);
        if (*(long *)(param_1 + 0x388) == 0) goto LAB_00771b3c;
        pvVar4 = *(void **)(param_1 + 0x390);
        goto LAB_00771a5c;
      }
      plVar7 = *(long **)(param_1 + 0x390);
      lVar15 = param_1 + 0x390;
      do {
        bVar3 = *plVar7 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    else {
      if (lVar15 != 0xc) {
        if (lVar15 == 0xd) {
          if (*(long *)(param_1 + 0x390) == 0) goto LAB_00771b3c;
          pvVar4 = *(void **)(param_1 + 0x398);
          goto LAB_00771a8c;
        }
        goto LAB_00771b18;
      }
      if (*(long *)(param_1 + 0x390) != 4) goto LAB_00771b3c;
      plVar7 = *(long **)(param_1 + 0x398);
      lVar15 = param_1 + 0x398;
      do {
        bVar3 = *plVar7 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = *plVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  if (bVar3) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00771b38 to 00771b3b has its CatchHandler @ 00771ce4 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(lVar15);
  }
LAB_00771b3c:
                    /* try { // try from 00771b3c to 00771b43 has its CatchHandler @ 00771d14 */
  FUN_007710f4(param_1);
  if (*(long *)(param_1 + 0x368) != 0) {
    free(*(void **)(param_1 + 0x370));
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    free(*(void **)(param_1 + 0x408));
  }
  uVar9 = *(ulong *)(param_1 + 0x3f0);
  if (uVar9 != 0) {
    uVar10 = *(ulong *)(param_1 + 0x3d8);
    uVar8 = *(ulong *)(param_1 + 1000);
    lVar15 = *(long *)(param_1 + 0x3e0);
    uVar6 = 0;
    if (uVar10 <= uVar8) {
      uVar6 = uVar10;
    }
    lVar11 = uVar8 - uVar6;
    uVar14 = uVar10 - lVar11;
    lVar12 = 0;
    if (uVar14 <= uVar9) {
      lVar12 = uVar9 - uVar14;
    }
    if (uVar9 <= uVar14) {
      uVar10 = lVar11 + uVar9;
    }
    lVar11 = uVar10 - lVar11;
    if (lVar11 != 0) {
      puVar13 = (undefined8 *)(uVar8 * 0x18 + uVar6 * -0x18 + lVar15 + 8);
      do {
        if (puVar13[-1] != 0) {
          free((void *)*puVar13);
        }
        lVar11 = lVar11 + -1;
        puVar13 = puVar13 + 3;
      } while (lVar11 != 0);
    }
    if (uVar14 < uVar9) {
      puVar13 = (undefined8 *)(lVar15 + 8);
      do {
        if (puVar13[-1] != 0) {
          free((void *)*puVar13);
        }
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 3;
      } while (lVar12 != 0);
    }
  }
  if (*(long *)(param_1 + 0x3d8) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x3e0));
  return;
}


// ===== 00771d70  FUN_00771d70 =====

void FUN_00771d70(long param_1)

{
                    /* try { // try from 00771d80 to 00771d83 has its CatchHandler @ 00771da4 */
  FUN_007dfadc();
  if (*(int *)(param_1 + 0x18) != -1) {
    close(*(int *)(param_1 + 0x18));
  }
  FUN_00771dd0(param_1);
  return;
}


// ===== 00771dd0  FUN_00771dd0 =====

void FUN_00771dd0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00771de0 to 00771de3 has its CatchHandler @ 00771e74 */
  <tokio::runtime::io::registration::Registration_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00771e0c to 00771e33 has its CatchHandler @ 00771e6c */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
              (param_1 + 2);
    return;
  }
  return;
}


// ===== 00771eb0  FUN_00771eb0 =====

void FUN_00771eb0(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 00771ec8  FUN_00771ec8 =====

void FUN_00771ec8(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined1 uVar16;
  void *__ptr;
  char *unaff_x24;
  ulong uVar17;
  undefined8 *unaff_x25;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  ulong local_1178;
  ulong *puStack_1170;
  undefined **local_1168;
  undefined1 auStack_1160 [256];
  undefined8 local_1060;
  undefined1 auStack_d30 [1072];
  undefined8 local_900 [2];
  undefined **local_8f0;
  ulong local_4b0;
  ulong *puStack_4a8;
  undefined **local_4a0;
  long *aplStack_498 [7];
  undefined8 local_460;
  
  local_1060 = 0;
  bVar3 = *(byte *)((long)param_2 + 0x211);
  if (bVar3 < 2) {
    if (bVar3 == 0) {
      unaff_x24 = (char *)(param_2 + 0x27);
      *(undefined2 *)((long)param_2 + 0x213) = 0x100;
      unaff_x25 = local_900;
      param_2[0x20] = param_2[7];
      param_2[0x1f] = param_2[6];
      param_2[0x31] = param_2[0x18];
      param_2[0x22] = param_2[9];
      param_2[0x21] = param_2[8];
      param_2[0x24] = param_2[0xb];
      param_2[0x23] = param_2[10];
      param_2[0x26] = param_2[0xd];
      param_2[0x25] = param_2[0xc];
      *(undefined1 *)((long)param_2 + 0x212) = *(undefined1 *)(param_2 + 0x42);
      param_2[0x1a] = param_2[1];
      param_2[0x19] = *param_2;
      param_2[0x1c] = param_2[3];
      param_2[0x1b] = param_2[2];
      param_2[0x34] = param_2[9];
      param_2[0x35] = param_2[0x23];
      param_2[0x1e] = param_2[5];
      param_2[0x1d] = param_2[4];
      param_2[0x28] = param_2[0xf];
      *(undefined8 *)unaff_x24 = param_2[0xe];
      param_2[0x2a] = param_2[0x11];
      param_2[0x29] = param_2[0x10];
      param_2[0x2e] = param_2[0x15];
      param_2[0x2d] = param_2[0x14];
      param_2[0x30] = param_2[0x17];
      param_2[0x2f] = param_2[0x16];
      param_2[0x33] = param_2[8];
      param_2[0x32] = param_2[7];
      plVar10 = (long *)param_2[0x32];
      param_2[0x2c] = param_2[0x13];
      param_2[0x2b] = param_2[0x12];
      do {
        lVar14 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 < 0) goto LAB_00772560;
      plVar2 = (long *)param_2[0x33];
      uVar12 = param_2[0x34];
      do {
        lVar14 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 < 0) goto LAB_00772560;
      param_2[0x36] = plVar10;
      param_2[0x37] = plVar2;
      param_2[0x38] = uVar12;
      *(undefined1 *)((long)param_2 + 0x213) = 1;
      if ((*(char *)((long)param_2 + 0x131) != '\x01') && (*unaff_x24 != '\0')) {
                    /* try { // try from 00771fdc to 00771feb has its CatchHandler @ 007726ac */
        iVar6 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq
                          (param_2 + 0x27,&DAT_0029f4e0);
        if (iVar6 != 0) {
          plVar10 = (long *)param_2[0x36];
          do {
            if (*plVar10 != 1) goto LAB_00772100;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppuVar15 = (undefined **)param_2[0x36];
          if (ppuVar15[1] == (undefined *)0x1) {
            *ppuVar15 = (undefined *)0x1;
            local_4a0 = ppuVar15;
          }
          else {
                    /* try { // try from 00772040 to 0077204b has its CatchHandler @ 00772570 */
            FUN_0079c188(&local_4b0,ppuVar15 + 2);
            ppuVar1 = ppuVar15 + 1;
            puVar11 = ppuVar15[2];
            puVar23 = ppuVar15[5];
            puVar20 = ppuVar15[4];
            puVar27 = ppuVar15[7];
            puVar25 = ppuVar15[6];
            puVar18 = (undefined8 *)((long)local_4a0 + (local_4b0 + 0xf & -local_4b0));
            puVar18[1] = ppuVar15[3];
            *puVar18 = puVar11;
            puVar18[3] = puVar23;
            puVar18[2] = puVar20;
            puVar18[5] = puVar27;
            puVar18[4] = puVar25;
            puVar23 = ppuVar15[0xc];
            puVar20 = ppuVar15[0xf];
            puVar11 = ppuVar15[0xe];
            puVar30 = ppuVar15[9];
            puVar29 = ppuVar15[8];
            puVar27 = ppuVar15[0xb];
            puVar25 = ppuVar15[10];
            puVar18[0xb] = ppuVar15[0xd];
            puVar18[10] = puVar23;
            puVar18[0xd] = puVar20;
            puVar18[0xc] = puVar11;
            puVar18[7] = puVar30;
            puVar18[6] = puVar29;
            puVar18[9] = puVar27;
            puVar18[8] = puVar25;
            puVar23 = ppuVar15[0x14];
            puVar20 = ppuVar15[0x17];
            puVar11 = ppuVar15[0x16];
            puVar30 = ppuVar15[0x11];
            puVar29 = ppuVar15[0x10];
            puVar27 = ppuVar15[0x13];
            puVar25 = ppuVar15[0x12];
            puVar18[0x13] = ppuVar15[0x15];
            puVar18[0x12] = puVar23;
            puVar18[0x15] = puVar20;
            puVar18[0x14] = puVar11;
            puVar18[0xf] = puVar30;
            puVar18[0xe] = puVar29;
            puVar18[0x11] = puVar27;
            puVar18[0x10] = puVar25;
            if (((byte)aplStack_498[0] & 1) == 0) {
                    /* try { // try from 007720d8 to 007720e3 has its CatchHandler @ 00772714 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00adcb60);
            }
            param_2[0x36] = local_4a0;
            if (ppuVar15 != (undefined **)0xffffffffffffffff) {
              do {
                puVar11 = *ppuVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                if (bVar5) {
                  *ppuVar1 = puVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (puVar11 + -1 == (undefined *)0x0) {
                DataMemoryBarrier(2,1);
                free(ppuVar15);
              }
            }
          }
          goto LAB_00772138;
        }
      }
    }
    else {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00ad8560);
LAB_007720f4:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic
                (&PTR_s__root__cargo_registry_src_index__00ad8560);
LAB_00772100:
      ClearExclusiveLocal();
      plVar10 = (long *)param_2[0x36];
                    /* try { // try from 00772108 to 0077210f has its CatchHandler @ 00772580 */
      local_4a0 = (undefined **)FUN_0079d310(plVar10 + 2);
      do {
        lVar14 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077212c to 00772133 has its CatchHandler @ 00772564 */
        <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
        drop_slow(param_2 + 0x36);
      }
      param_2[0x36] = local_4a0;
LAB_00772138:
      *(undefined1 *)((long)local_4a0 + 0xb7) = 1;
    }
    uVar12 = param_2[0x36];
    ppuVar15 = (undefined **)param_2[0x38];
    plVar10 = (long *)param_2[0x35];
    *(undefined1 *)((long)param_2 + 0x213) = 0;
    unaff_x25[1] = param_2[0x37];
    *unaff_x25 = uVar12;
    local_8f0 = ppuVar15;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 < 0) {
LAB_00772560:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x772564);
      (*pcVar13)();
    }
    aplStack_498[0] = plVar10;
    unaff_x25[0x8b] = unaff_x25[1];
    unaff_x25[0x8a] = *unaff_x25;
                    /* try { // try from 00772180 to 0077218b has its CatchHandler @ 007726f4 */
    local_4a0 = ppuVar15;
    FUN_007baaac(param_2 + 0x39,&local_4b0);
    uVar21 = *(undefined8 *)(unaff_x24 + 0x28);
    uVar19 = *(undefined8 *)(unaff_x24 + 0x20);
    uVar24 = *(undefined8 *)(unaff_x24 + 0x38);
    uVar22 = *(undefined8 *)(unaff_x24 + 0x30);
    uVar28 = *(undefined8 *)(unaff_x24 + 0x48);
    uVar26 = *(undefined8 *)(unaff_x24 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x24 + 0x50);
    *(undefined1 *)((long)param_2 + 0x214) = 0;
    unaff_x25[0x93] = uVar28;
    unaff_x25[0x92] = uVar26;
    unaff_x25[0x8f] = uVar21;
    unaff_x25[0x8e] = uVar19;
    unaff_x25[0x91] = uVar24;
    unaff_x25[0x90] = uVar22;
    uVar19 = *(undefined8 *)unaff_x24;
    uVar22 = *(undefined8 *)(unaff_x24 + 0x18);
    uVar21 = *(undefined8 *)(unaff_x24 + 0x10);
    local_460 = uVar12;
    unaff_x25[0x8b] = *(undefined8 *)(unaff_x24 + 8);
    unaff_x25[0x8a] = uVar19;
    unaff_x25[0x8d] = uVar22;
    unaff_x25[0x8c] = uVar21;
                    /* try { // try from 007721b8 to 007721c3 has its CatchHandler @ 007726ec */
    auVar31 = FUN_007bb884(param_2 + 0x39,&local_4b0);
    *(undefined1 (*) [16])(param_2 + 0x40) = auVar31;
  }
  else {
    if (bVar3 != 3) goto LAB_007720f4;
    auVar31 = *(undefined1 (*) [16])(param_2 + 0x40);
  }
                    /* try { // try from 007721d0 to 007721db has its CatchHandler @ 007726fc */
  (**(code **)(auVar31._8_8_ + 0x18))(&local_4b0,auVar31._0_8_,param_3);
  ppuVar15 = local_4a0;
  uVar17 = local_4b0;
  if (local_4b0 == 0xfffffffffffffffe) {
    param_1[1][1] = 0xff;
    uVar9 = 3;
    goto LAB_0077252c;
  }
  memcpy(auStack_d30,aplStack_498,0x430);
  puVar18 = (undefined8 *)param_2[0x41];
  __ptr = (void *)param_2[0x40];
  pcVar13 = (code *)*puVar18;
  if (pcVar13 != (code *)0x0) {
                    /* try { // try from 00772224 to 0077222b has its CatchHandler @ 007726cc */
    (*pcVar13)(__ptr);
  }
  if (puVar18[1] != 0) {
    free(__ptr);
  }
  puVar8 = puStack_4a8;
  if (uVar17 == 0xffffffffffffffff) {
LAB_0077230c:
                    /* try { // try from 0077230c to 00772313 has its CatchHandler @ 007726e8 */
    auVar31._8_8_ = ppuVar15;
    auVar31._0_8_ = puVar8;
    FUN_00770100(param_2 + 0x39);
    plVar10 = (long *)param_2[0x35];
    *(undefined1 *)((long)param_2 + 0x213) = 0;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00772334 to 0077233b has its CatchHandler @ 007726c4 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x35);
    }
    plVar10 = (long *)param_2[0x32];
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00772358 to 0077235f has its CatchHandler @ 007725f4 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow(param_2 + 0x32);
    }
    plVar10 = (long *)param_2[0x33];
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0077237c to 00772383 has its CatchHandler @ 007726bc */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_2 + 0x33);
    }
    plVar10 = (long *)param_2[0x24];
    *(undefined1 *)((long)param_2 + 0x214) = 0;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007723a4 to 007723ab has its CatchHandler @ 007725a8 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x24);
    }
    plVar10 = (long *)param_2[0x25];
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007723c8 to 007723cf has its CatchHandler @ 007725a0 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
                (param_2 + 0x25);
    }
    if (*(char *)(param_2 + 0x1f) != '\x02') {
                    /* try { // try from 007723e8 to 007723ef has its CatchHandler @ 007726b0 */
      (**(code **)(param_2[0x1b] + 0x20))(param_2 + 0x1e,param_2[0x1c],param_2[0x1d]);
    }
    uVar16 = 2;
  }
  else {
    memcpy(auStack_1160,auStack_d30,0x430);
    local_1178 = uVar17;
    puStack_1170 = puStack_4a8;
    local_1168 = ppuVar15;
    if (uVar17 == 2) {
      memcpy(&local_4b0,&local_1178,0x448);
                    /* try { // try from 0077227c to 00772287 has its CatchHandler @ 007726a8 */
      auVar31 = FUN_007a7e44(param_2 + 0x26,&local_4b0);
      uVar17 = (ulong)*(byte *)((long)param_2 + 0x212);
      uVar16 = 0;
    }
    else {
      memcpy(local_900,&local_1178,0x448);
                    /* try { // try from 007722b4 to 007722bf has its CatchHandler @ 00772590 */
      if (((*(byte *)((long)param_2 + 0x131) & 1) == 0) &&
         (uVar7 = <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::set_nodelay
                            (local_900,0), uVar7 != 0)) {
        local_4b0 = uVar7;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar8 = (ulong *)FUN_004b25a4(8,8);
        if (puVar8 == (ulong *)0x0) {
                    /* try { // try from 00772554 to 0077255f has its CatchHandler @ 0077274c */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,8);
        }
        *puVar8 = uVar7;
                    /* try { // try from 007722e8 to 007722ef has its CatchHandler @ 00772584 */
        FUN_00770364(local_900);
        if (local_1178 == 2) {
                    /* try { // try from 007722fc to 00772303 has its CatchHandler @ 0077258c */
          FUN_00770080(&local_1178);
        }
        ppuVar15 = &PTR_FUN_00adee50;
        goto LAB_0077230c;
      }
      memcpy(&local_4b0,local_900,0x448);
                    /* try { // try from 00772408 to 00772413 has its CatchHandler @ 00772598 */
      auVar31 = FUN_007a7af4(param_2 + 0x26,&local_4b0);
      uVar17 = (ulong)*(byte *)((long)param_2 + 0x212);
      uVar16 = *(undefined1 *)((long)param_2 + 0x132);
      if (local_1178 == 2) {
                    /* try { // try from 00772430 to 00772437 has its CatchHandler @ 0077258c */
        FUN_00770080(&local_1178);
      }
    }
                    /* try { // try from 00772438 to 0077243f has its CatchHandler @ 007726e8 */
    FUN_00770100(param_2 + 0x39);
    plVar10 = (long *)param_2[0x35];
    *(undefined1 *)((long)param_2 + 0x213) = 0;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00772460 to 00772467 has its CatchHandler @ 007726c4 */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x35);
    }
    plVar10 = (long *)param_2[0x32];
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00772484 to 0077248b has its CatchHandler @ 00772678 */
      <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
      drop_slow(param_2 + 0x32);
    }
    plVar10 = (long *)param_2[0x33];
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007724a8 to 007724af has its CatchHandler @ 007726bc */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_2 + 0x33);
    }
    plVar10 = (long *)param_2[0x24];
    *(undefined1 *)((long)param_2 + 0x214) = 0;
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007724d0 to 007724d7 has its CatchHandler @ 0077262c */
      <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                (param_2 + 0x24);
    }
    plVar10 = (long *)param_2[0x25];
    do {
      lVar14 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 007724f4 to 007724fb has its CatchHandler @ 00772624 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
                (param_2 + 0x25);
    }
    if (*(char *)(param_2 + 0x1f) != '\x02') {
                    /* try { // try from 00772514 to 0077251b has its CatchHandler @ 007726b0 */
      (**(code **)(param_2[0x1b] + 0x20))(param_2 + 0x1e,param_2[0x1c],param_2[0x1d]);
    }
  }
  uVar9 = 1;
  *param_1 = auVar31;
  param_1[1][0] = (char)uVar17;
  param_1[1][1] = uVar16;
LAB_0077252c:
  *(undefined1 *)((long)param_2 + 0x211) = uVar9;
  return;
}


// ===== 00772850  <reqwest::error::reqwest::error::Error>::is_connect =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::reqwest::error::Error>::is_connect */

undefined8 __rustcall <reqwest::error::reqwest::error::Error>::is_connect(long *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  long local_40;
  long lStack_38;
  
  lVar1 = *(long *)(*param_1 + 0x58);
  if (lVar1 == 0) {
    return 0;
  }
  auVar2._8_8_ = *(undefined8 *)(*param_1 + 0x60);
  auVar2._0_8_ = lVar1;
  while( true ) {
    lVar1 = auVar2._0_8_;
    (**(code **)(auVar2._8_8_ + 0x38))(&local_40,lVar1);
    if ((lStack_38 == -0x586ffed30175f8a0 && local_40 == 0x57ced4bb1f83863f) &&
       (*(char *)(lVar1 + 0x30) == '\x02')) break;
    auVar2 = (**(code **)(auVar2._8_8_ + 0x30))(lVar1);
    if (auVar2._0_8_ == 0) {
      return 0;
    }
  }
  return 1;
}


// ===== 0077290c  <reqwest::error::reqwest::error::Error>::is_timeout =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::reqwest::error::Error>::is_timeout */

undefined1 * __rustcall <reqwest::error::reqwest::error::Error>::is_timeout(long *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  long local_60;
  long lStack_58;
  
  lVar5 = *(long *)(*param_1 + 0x58);
  if (lVar5 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    auVar8._8_8_ = *(undefined8 *)(*param_1 + 0x60);
    auVar8._0_8_ = lVar5;
    do {
      puVar6 = auVar8._0_8_;
      pcVar7 = *(code **)(auVar8._8_8_ + 0x38);
      (*pcVar7)(&local_60,puVar6);
      if (lStack_58 == 0xa3a3975681f469a && local_60 == 0x54892ea8b533dad5) {
LAB_00772a20:
        return &DAT_00000001;
      }
      (*pcVar7)(&local_60,puVar6);
      if (lStack_58 == -0x4723b82420871904 && local_60 == 0x57ee152c47d5ae67) {
        uVar3 = *puVar6;
        uVar4 = uVar3 & 3;
        if (uVar4 < 2) {
          if (uVar4 == 0) {
            uVar1 = (uint)*(byte *)(uVar3 + 0x10);
          }
          else {
            uVar1 = (uint)*(byte *)(uVar3 + 0x1f);
          }
        }
        else {
          uVar1 = (uint)(uVar3 >> 0x20);
          if (uVar4 == 2) {
            lVar5 = core::io::error::os_functions::get_os_functions();
            uVar1 = (**(code **)(lVar5 + 8))(uVar1);
          }
        }
        if ((uVar1 & 0xff) == 0x16) goto LAB_00772a20;
      }
      auVar8 = (**(code **)(auVar8._8_8_ + 0x30))(puVar6);
      puVar2 = auVar8._0_8_;
    } while (puVar2 != (undefined1 *)0x0);
  }
  return puVar2;
}


// ===== 00772a48  <reqwest::error::reqwest::error::Error>::without_url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::reqwest::error::Error>::without_url */

long * __rustcall <reqwest::error::reqwest::error::Error>::without_url(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
  }
  *param_1 = -1;
  return param_1;
}


// ===== 00772a8c  <reqwest::error::reqwest::error::Error>::with_url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::reqwest::error::Error>::with_url */

long * __rustcall <reqwest::error::reqwest::error::Error>::with_url(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
  }
  lVar3 = param_2[5];
  lVar2 = param_2[4];
  lVar5 = param_2[7];
  lVar4 = param_2[6];
  lVar6 = param_2[8];
  lVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = lVar6;
  param_1[5] = lVar3;
  param_1[4] = lVar2;
  param_1[7] = lVar5;
  param_1[6] = lVar4;
  lVar3 = param_2[1];
  lVar2 = *param_2;
  lVar5 = param_2[3];
  lVar4 = param_2[2];
  param_1[10] = lVar1;
  param_1[1] = lVar3;
  *param_1 = lVar2;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  return param_1;
}


// ===== 00772af0  FUN_00772af0 =====

long * FUN_00772af0(long *param_1,undefined2 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long local_30;
  undefined4 uStack_24;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar1 = (long *)FUN_004b25a4(0x70,8);
  if (plVar1 != (long *)0x0) {
    plVar1[9] = lStack_48;
    plVar1[8] = local_50;
    plVar1[0xb] = 0;
    plVar1[10] = lStack_40;
    plVar1[1] = lStack_88;
    *plVar1 = -1;
    plVar1[3] = lStack_78;
    plVar1[2] = lStack_80;
    plVar1[0xd] = CONCAT44(uStack_24,CONCAT22(param_2,3));
    plVar1[0xc] = local_30;
    plVar1[5] = lStack_68;
    plVar1[4] = local_70;
    plVar1[7] = lStack_58;
    plVar1[6] = lStack_60;
    if ((*plVar1 != -1) && (*plVar1 != 0)) {
      free((void *)plVar1[1]);
    }
    lVar4 = param_1[5];
    lVar3 = param_1[4];
    lVar6 = param_1[7];
    lVar5 = param_1[6];
    lVar7 = param_1[8];
    lVar2 = param_1[10];
    plVar1[9] = param_1[9];
    plVar1[8] = lVar7;
    plVar1[5] = lVar4;
    plVar1[4] = lVar3;
    plVar1[7] = lVar6;
    plVar1[6] = lVar5;
    lVar4 = param_1[1];
    lVar3 = *param_1;
    lVar6 = param_1[3];
    lVar5 = param_1[2];
    plVar1[10] = lVar2;
    plVar1[1] = lVar4;
    *plVar1 = lVar3;
    plVar1[3] = lVar6;
    plVar1[2] = lVar5;
    return plVar1;
  }
                    /* try { // try from 00772ba4 to 00772baf has its CatchHandler @ 00772bb4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 00772be0  FUN_00772be0 =====

long * FUN_00772be0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  uint6 uStack_26;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  plVar1 = (long *)FUN_004b25a4(0x70,8);
  if (plVar1 != (long *)0x0) {
    plVar1[9] = lStack_48;
    plVar1[8] = local_50;
    plVar1[0xb] = 1;
    plVar1[10] = lStack_40;
    plVar1[1] = lStack_88;
    *plVar1 = -1;
    plVar1[3] = lStack_78;
    plVar1[2] = lStack_80;
    plVar1[0xd] = (ulong)uStack_26 << 0x10;
    plVar1[0xc] = (long)&DAT_00adeb80;
    plVar1[5] = lStack_68;
    plVar1[4] = local_70;
    plVar1[7] = lStack_58;
    plVar1[6] = lStack_60;
    if ((*plVar1 != -1) && (*plVar1 != 0)) {
      free((void *)plVar1[1]);
    }
    lVar4 = param_1[5];
    lVar3 = param_1[4];
    lVar6 = param_1[7];
    lVar5 = param_1[6];
    lVar7 = param_1[8];
    lVar2 = param_1[10];
    plVar1[9] = param_1[9];
    plVar1[8] = lVar7;
    plVar1[5] = lVar4;
    plVar1[4] = lVar3;
    plVar1[7] = lVar6;
    plVar1[6] = lVar5;
    lVar4 = param_1[1];
    lVar3 = *param_1;
    lVar6 = param_1[3];
    lVar5 = param_1[2];
    plVar1[10] = lVar2;
    plVar1[1] = lVar4;
    *plVar1 = lVar3;
    plVar1[3] = lVar6;
    plVar1[2] = lVar5;
    return plVar1;
  }
                    /* try { // try from 00772c98 to 00772ca3 has its CatchHandler @ 00772ca8 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x70);
}


// ===== 00772cd4  FUN_00772cd4 =====

long * FUN_00772cd4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  uint6 uStack_36;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  pcVar4 = (char *)FUN_004b25a4(0x1d,1);
  uVar3 = s_not_a_valid_Uri_002d1ed3._8_8_;
  uVar2 = s_Parsed_Url_is_002d1ec6._0_8_;
  if (pcVar4 == (char *)0x0) {
                    /* try { // try from 00772e00 to 00772e0b has its CatchHandler @ 00772e10 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(1,0x1d);
  }
  uVar1 = CONCAT53(s_not_a_valid_Uri_002d1ed3._3_5_,s_not_a_valid_Uri_002d1ed3._0_3_);
  *(ulong *)(pcVar4 + 8) = CONCAT35(s_not_a_valid_Uri_002d1ed3._0_3_,s_Parsed_Url_is_002d1ec6._8_5_)
  ;
  *(undefined8 *)pcVar4 = uVar2;
  *(undefined8 *)(pcVar4 + 0x15) = uVar3;
  *(undefined8 *)(pcVar4 + 0xd) = uVar1;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar5 = (undefined8 *)FUN_004b25a4(0x18,8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0x1d;
    puVar5[1] = pcVar4;
    puVar5[2] = 0x1d;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    plVar6 = (long *)FUN_004b25a4(0x70,8);
    if (plVar6 != (long *)0x0) {
      plVar6[9] = lStack_58;
      plVar6[8] = local_60;
      plVar6[0xb] = (long)puVar5;
      plVar6[10] = lStack_50;
      plVar6[1] = lStack_98;
      *plVar6 = -1;
      plVar6[3] = lStack_88;
      plVar6[2] = lStack_90;
      plVar6[0xd] = (ulong)uStack_36 << 0x10;
      plVar6[0xc] = (long)&PTR_FUN_00ad86a8;
      plVar6[5] = lStack_78;
      plVar6[4] = local_80;
      plVar6[7] = lStack_68;
      plVar6[6] = lStack_70;
      if ((*plVar6 != -1) && (*plVar6 != 0)) {
        free((void *)plVar6[1]);
      }
      lVar9 = param_1[5];
      lVar8 = param_1[4];
      lVar11 = param_1[7];
      lVar10 = param_1[6];
      lVar12 = param_1[8];
      lVar7 = param_1[10];
      plVar6[9] = param_1[9];
      plVar6[8] = lVar12;
      plVar6[5] = lVar9;
      plVar6[4] = lVar8;
      plVar6[7] = lVar11;
      plVar6[6] = lVar10;
      lVar9 = param_1[1];
      lVar8 = *param_1;
      lVar11 = param_1[3];
      lVar10 = param_1[2];
      plVar6[10] = lVar7;
      plVar6[1] = lVar9;
      *plVar6 = lVar8;
      plVar6[3] = lVar11;
      plVar6[2] = lVar10;
      return plVar6;
    }
                    /* try { // try from 00772df0 to 00772dfb has its CatchHandler @ 00772e18 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x70);
  }
                    /* try { // try from 00772de0 to 00772deb has its CatchHandler @ 00772e2c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x18);
}


// ===== 00772e5c  FUN_00772e5c =====

undefined1  [16] FUN_00772e5c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  long local_40;
  long lStack_38;
  
                    /* try { // try from 00772e80 to 00772e87 has its CatchHandler @ 00772f24 */
  (*(code *)param_2[7])(&local_40);
  if (lStack_38 == -0xf3a48b77ba164dd && local_40 == -0x730872ac34b7b5ff) {
    if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00772ec0 to 00772ec7 has its CatchHandler @ 00772f04 */
      (*(code *)*param_2)(param_1);
    }
    if (param_2[1] != 0) {
      free(param_1);
    }
    param_2 = (undefined8 *)&UNK_00ad8598;
    param_1 = &DAT_00000001;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}


// ===== 00772f3c  FUN_00772f3c =====

void FUN_00772f3c(void)

{
  return;
}


// ===== 00772f40  FUN_00772f40 =====

void FUN_00772f40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00ad8490;
  param_1[1] = param_3;
  return;
}


// ===== 00772f54  FUN_00772f54 =====

undefined8 FUN_00772f54(void)

{
  return 0;
}


// ===== 00772f5c  <reqwest::error::Error_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::Error as core::fmt::Display>::fmt */

undefined8 __rustcall
<reqwest::error::Error_as_core::fmt::Display>::fmt(undefined8 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_58;
  long *local_50;
  undefined8 uStack_48;
  long **local_40;
  code *pcStack_38;
  long *local_30;
  code *pcStack_28;
  
  plVar4 = (long *)*param_1;
  uVar1 = *(ushort *)(plVar4 + 0xd);
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"builder error",0xd);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else if (uVar1 == 1) {
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                        (param_2,"error sending request",0x15);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                        (param_2,
                         "error following redirectHTTP status server errorHTTP status client error",
                         0x18);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  else if (uVar1 < 5) {
    if (uVar1 == 3) {
      local_58 = (long)plVar4 + 0x6a;
      local_40 = &local_50;
      pcStack_38 = FUN_00782f80;
      local_50 = (long *)0x2d1f35;
      if (99 < *(ushort *)((long)plVar4 + 0x6a) - 400) {
        local_50 = (long *)0x2d1f1d;
      }
      uStack_48 = 0x18;
      local_30 = &local_58;
      pcStack_28 = FUN_0079e898;
      uVar2 = core::fmt::write(*param_2,param_2[1],&DAT_002abbe3,&local_40);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else {
      uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                        (param_2,"request or response body error",0x1e);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  else if (uVar1 == 5) {
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                      (param_2,"error decoding response body",0x1c);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  else {
    uVar2 = <core::fmt::[a]::core::fmt::Formatter>::write_str
                      (param_2,"error upgrading connection",0x1a);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  if (*plVar4 != -1) {
    local_40 = &local_50;
    pcStack_38 = FUN_00782f6c;
    local_50 = plVar4;
    uVar3 = core::fmt::write(*param_2,param_2[1],&DAT_002a9f14,&local_40);
    return uVar3;
  }
  return 0;
}


// ===== 00773180  FUN_00773180 =====

undefined1  [16] FUN_00773180(long param_1,undefined8 param_2,long *param_3)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined1 *__src;
  ulong uVar8;
  undefined1 auVar9 [16];
  long local_60;
  long lStack_58;
  byte local_50;
  long local_48;
  undefined2 local_40;
  undefined6 uStack_3e;
  ulong local_38;
  
  bVar3 = *(byte *)(param_1 + 0x440);
  uVar8 = 0;
  __src = &DAT_00000001;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
LAB_007731c4:
      lStack_58 = param_1 + 0x20;
      local_50 = bVar3 & 1;
      local_60 = param_1;
      FUN_007aa35c(&local_48,&local_60,param_2);
      if (local_48 == 1) {
        auVar9._8_8_ = param_3;
        auVar9._0_8_ = 1;
        return auVar9;
      }
      __src = (undefined1 *)CONCAT62(uStack_3e,local_40);
      if (__src == (undefined1 *)0x0) {
        uVar8 = local_38 & 3;
        if (uVar8 < 2) {
          if (uVar8 == 0) {
            uVar6 = (uint)*(byte *)(local_38 + 0x10);
          }
          else {
            uVar6 = (uint)*(byte *)(local_38 + 0x1f);
          }
        }
        else if (uVar8 == 3) {
          uVar6 = (uint)(local_38 >> 0x20);
        }
        else {
                    /* try { // try from 007732e4 to 007732f7 has its CatchHandler @ 0077333c */
          lVar7 = core::io::error::os_functions::get_os_functions();
          uVar6 = (**(code **)(lVar7 + 8))(local_38 >> 0x20);
        }
        if ((uVar6 & 0xff) == 6) {
          *(byte *)(param_1 + 0x440) = *(byte *)(param_1 + 0x440) | 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_38;
          return auVar5 << 0x40;
        }
        goto LAB_00773294;
      }
      uVar8 = local_38;
      if (local_38 == 0) {
        *(byte *)(param_1 + 0x440) = *(byte *)(param_1 + 0x440) | 1;
      }
    }
  }
  else if (bVar3 == 2) goto LAB_007731c4;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  __n = uVar1 - uVar2;
  if (uVar8 <= uVar1 - uVar2) {
    __n = uVar8;
  }
  uVar8 = __n + uVar2;
  if ((uVar8 < uVar2) || (uVar1 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar8,uVar1,&PTR_s__root__cargo_registry_src_index__00ad85f0);
  }
  memcpy((void *)(*param_3 + uVar2),__src,__n);
  if ((ulong)param_3[3] < uVar8) {
    param_3[3] = uVar8;
  }
  local_48 = param_1 + 0x70;
  local_40 = *(undefined2 *)(param_1 + 0x357);
  param_3[2] = uVar8;
  <rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::consume(&local_48,__n);
  local_38 = 0;
LAB_00773294:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_38;
  return auVar4 << 0x40;
}


// ===== 00773354  FUN_00773354 =====

undefined1  [16] FUN_00773354(long param_1,undefined8 param_2,long *param_3)

{
  size_t __n;
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined1 *__src;
  ulong uVar8;
  undefined1 auVar9 [16];
  long local_60;
  long lStack_58;
  byte local_50;
  long local_48;
  undefined2 local_40;
  undefined6 uStack_3e;
  ulong local_38;
  
  bVar3 = *(byte *)(param_1 + 0x868);
  uVar8 = 0;
  __src = &DAT_00000001;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
LAB_00773398:
      local_60 = param_1 + 0x420;
      local_50 = bVar3 & 1;
      lStack_58 = param_1;
      FUN_007aa8a4(&local_48,&local_60,param_2);
      if (local_48 == 1) {
        auVar9._8_8_ = param_3;
        auVar9._0_8_ = 1;
        return auVar9;
      }
      __src = (undefined1 *)CONCAT62(uStack_3e,local_40);
      if (__src == (undefined1 *)0x0) {
        uVar8 = local_38 & 3;
        if (uVar8 < 2) {
          if (uVar8 == 0) {
            uVar6 = (uint)*(byte *)(local_38 + 0x10);
          }
          else {
            uVar6 = (uint)*(byte *)(local_38 + 0x1f);
          }
        }
        else if (uVar8 == 3) {
          uVar6 = (uint)(local_38 >> 0x20);
        }
        else {
                    /* try { // try from 007734b8 to 007734cb has its CatchHandler @ 00773510 */
          lVar7 = core::io::error::os_functions::get_os_functions();
          uVar6 = (**(code **)(lVar7 + 8))(local_38 >> 0x20);
        }
        if ((uVar6 & 0xff) == 6) {
          *(byte *)(param_1 + 0x868) = *(byte *)(param_1 + 0x868) | 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_38;
          return auVar5 << 0x40;
        }
        goto LAB_00773468;
      }
      uVar8 = local_38;
      if (local_38 == 0) {
        *(byte *)(param_1 + 0x868) = *(byte *)(param_1 + 0x868) | 1;
      }
    }
  }
  else if (bVar3 == 2) goto LAB_00773398;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  __n = uVar1 - uVar2;
  if (uVar8 <= uVar1 - uVar2) {
    __n = uVar8;
  }
  uVar8 = __n + uVar2;
  if ((uVar8 < uVar2) || (uVar1 < uVar8)) {
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (uVar2,uVar8,uVar1,&PTR_s__root__cargo_registry_src_index__00ad85f0);
  }
  memcpy((void *)(*param_3 + uVar2),__src,__n);
  if ((ulong)param_3[3] < uVar8) {
    param_3[3] = uVar8;
  }
  local_48 = param_1 + 0x50;
  local_40 = *(undefined2 *)(param_1 + 0x337);
  param_3[2] = uVar8;
  <rustls::conn::connection::Reader_as_alloc::io::buf_read::BufRead>::consume(&local_48,__n);
  local_38 = 0;
LAB_00773468:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_38;
  return auVar4 << 0x40;
}


// ===== 00773528  FUN_00773528 =====

void FUN_00773528(undefined8 *param_1)

{
  <reqwest::error::Error_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00773530  FUN_00773530 =====

void FUN_00773530(undefined8 *param_1)

{
  <hyper::proto::h1::decode::Decoder_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00773538  <reqwest::error::TimedOut_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::TimedOut as core::fmt::Display>::fmt */

void __rustcall
<reqwest::error::TimedOut_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"operation timed out",0x13);
  return;
}


// ===== 0077354c  <reqwest::error::BadScheme_as_core::fmt::Display>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::BadScheme as core::fmt::Display>::fmt */

void __rustcall
<reqwest::error::BadScheme_as_core::fmt::Display>::fmt(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"URL scheme is not allowed",0x19);
  return;
}


// ===== 00773560  <tokio_rustls[c75bc2af7aba517d]::client::TlsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>as_reqwest[6fed810f3e38d558]::connect::TlsInfoFactory>::tls_info =====

/* <tokio_rustls[c75bc2af7aba517d]::client::TlsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>
   as reqwest[6fed810f3e38d558]::connect::TlsInfoFactory>::tls_info */

void <tokio_rustls[c75bc2af7aba517d]::client::TlsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>as_reqwest[6fed810f3e38d558]::connect::TlsInfoFactory>
     ::tls_info(size_t *param_1,long param_2)

{
  size_t __n;
  undefined1 *unaff_x20;
  void *__src;
  undefined8 uVar1;
  
  __n = 0xffffffffffffffff;
  if ((*(long *)(param_2 + 0x310) != -1) && (*(long *)(param_2 + 800) != 0)) {
    __n = *(size_t *)(*(long *)(param_2 + 0x318) + 0x10);
    if ((long)__n < 0) {
      uVar1 = 0;
LAB_0077359c:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__n);
    }
    if (__n == 0) {
      unaff_x20 = &DAT_00000001;
    }
    else {
      __src = *(void **)(*(long *)(param_2 + 0x318) + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar1 = 1;
      unaff_x20 = (undefined1 *)FUN_004b25a4(__n,1);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_0077359c;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 00773608  <tokio_rustls[c75bc2af7aba517d]::client::TlsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>as_reqwest[6fed810f3e38d558]::connect::TlsInfoFactory>::tls_info =====

/* <tokio_rustls[c75bc2af7aba517d]::client::TlsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>
   as reqwest[6fed810f3e38d558]::connect::TlsInfoFactory>::tls_info */

void <tokio_rustls[c75bc2af7aba517d]::client::TlsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<hyper_rustls[8b73b3c5adfefd00]::stream::MaybeHttpsStream<hyper_util[52a210df7efc1bae]::rt::tokio::TokioIo<tokio[8c8895dbfa691109]::net::tcp::stream::TcpStream>>>>as_reqwest[6fed810f3e38d558]::connect::TlsInfoFactory>
     ::tls_info(size_t *param_1,long param_2)

{
  size_t __n;
  undefined1 *unaff_x20;
  void *__src;
  undefined8 uVar1;
  
  __n = 0xffffffffffffffff;
  if ((*(long *)(param_2 + 0x2f0) != -1) && (*(long *)(param_2 + 0x300) != 0)) {
    __n = *(size_t *)(*(long *)(param_2 + 0x2f8) + 0x10);
    if ((long)__n < 0) {
      uVar1 = 0;
LAB_00773644:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar1,__n);
    }
    if (__n == 0) {
      unaff_x20 = &DAT_00000001;
    }
    else {
      __src = *(void **)(*(long *)(param_2 + 0x2f8) + 8);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar1 = 1;
      unaff_x20 = (undefined1 *)FUN_004b25a4(__n,1);
      if (unaff_x20 == (undefined1 *)0x0) goto LAB_00773644;
      memcpy(unaff_x20,__src,__n);
    }
  }
  *param_1 = __n;
  param_1[1] = (size_t)unaff_x20;
  param_1[2] = __n;
  return;
}


// ===== 007736b0  FUN_007736b0 =====

void FUN_007736b0(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort *local_18;
  
  uVar1 = *param_1;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Builder",7);
      return;
    }
    if (uVar1 == 1) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Request",7);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002a15a8,8);
    return;
  }
  if (4 < uVar1) {
    if (uVar1 == 5) {
      <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Decode",6);
      return;
    }
    <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"Upgrade",7);
    return;
  }
  if (uVar1 == 3) {
    local_18 = param_1 + 1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"Status",6,&local_18,&DAT_00ad8608);
    return;
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,&DAT_002bd114,4);
  return;
}


// ===== 00773784  FUN_00773784 =====

void FUN_00773784(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,"TimedOutDTLSv1_3",8);
  return;
}


// ===== 00773798  <reqwest::error::Error_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::error::Error as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::error::Error_as_core::fmt::Debug>::fmt(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  long local_30;
  long lStack_28;
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,"reqwest::Error",0xe);
  plVar1 = (long *)*param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_40,"kind",4,plVar1 + 0xd,&DAT_00ad8628);
  if (*plVar1 != -1) {
    local_30 = plVar1[1];
    lStack_28 = plVar1[2];
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_40,"url",3,&local_30,&DAT_00ad8648);
  }
  if (plVar1[0xb] != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_40,"source",6,plVar1 + 0xb,&PTR_FUN_00ad8668);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_40);
  return;
}


// ===== 00773860  FUN_00773860 =====

ulong FUN_00773860(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  byte bVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  long lVar9;
  char cVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char local_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
  undefined1 uStack_110;
  char local_10f;
  undefined6 uStack_10e;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar11 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar11 == 0) {
    uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
    if (puVar6 <= &DAT_00000001) goto LAB_00773984;
LAB_007738b0:
    if (puVar6 != (undefined1 *)0x0) goto LAB_007738b4;
LAB_00773998:
    uVar4 = 0;
    bVar8 = *(byte *)(param_2 + 0xd0);
    if (1 < bVar8) goto LAB_007739a8;
LAB_007738d0:
    if (bVar8 != 0) {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00ad8518);
      goto LAB_00773c40;
    }
    uStack_138 = *(undefined8 *)(param_2 + 0x80);
    local_140 = *(undefined8 *)(param_2 + 0x78);
    uStack_128 = *(undefined8 *)(param_2 + 0x90);
    uStack_130 = *(undefined8 *)(param_2 + 0x88);
    *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 200);
    *(undefined1 *)(param_2 + 0xd1) = 1;
                    /* try { // try from 007738f4 to 0077390b has its CatchHandler @ 00773cd8 */
    <socket2[797b7815e2a0656b]::sockaddr::SockAddr_as_core[bcece726f298455b]::convert::From<core[bcece726f298455b]::net::socket_addr::SocketAddr>>
    ::from(&local_118,&local_140);
    uVar11 = <socket2::socket::socket2::socket::Socket>::connect
                       ((undefined4 *)(param_2 + 0xcc),&local_118);
    if ((uVar11 != 0) && ((((uVar11 & 3) < 2 || ((uVar11 & 3) == 3)) || (uVar11 >> 0x20 != 0x73))))
    {
      uVar4 = close(*(int *)(param_2 + 0xcc));
      uVar7 = (ulong)uVar4;
      lVar9 = 2;
      goto LAB_00773ae8;
    }
    *(undefined1 *)(param_2 + 0xd1) = 0;
                    /* try { // try from 0077393c to 0077393f has its CatchHandler @ 00773cbc */
    uVar11 = <mio::net::tcp::stream::TcpStream_as_std::os::fd::raw::FromRawFd>::from_raw_fd
                       (*(undefined4 *)(param_2 + 0xcc));
    *(undefined1 *)(param_2 + 0xc4) = 0;
    *(int *)(param_2 + 0xc0) = (int)uVar11;
LAB_007739cc:
                    /* try { // try from 007739cc to 007739d3 has its CatchHandler @ 00773cc4 */
    lVar9 = param_2 + 0x98;
    <tokio::net::tcp::stream::tokio::net::tcp::stream::TcpStream>::new(&local_118,uVar11);
    lVar1 = CONCAT62(uStack_116,CONCAT11(uStack_117,local_118));
    uVar11 = CONCAT62(uStack_10e,CONCAT11(local_10f,uStack_110));
    if (lVar1 != 2) {
      *(long *)(param_2 + 0x98) = lVar1;
      *(ulong *)(param_2 + 0xa0) = uVar11;
      *(long *)(param_2 + 0xb8) = lVar9;
      uStack_68 = uStack_100;
      local_70 = local_108;
      *(undefined8 *)(param_2 + 0xb0) = uStack_100;
      *(undefined8 *)(param_2 + 0xa8) = local_108;
      goto LAB_00773a08;
    }
LAB_00773acc:
    *(undefined1 *)(param_2 + 0xc4) = 1;
    lVar9 = 2;
LAB_00773ad8:
    lStack_78 = lStack_88;
    local_80 = local_90;
                    /* try { // try from 00773ae0 to 00773ae7 has its CatchHandler @ 00773cc0 */
    uVar7 = FUN_00770630(param_2 + 0x98);
LAB_00773ae8:
    *(undefined1 *)(param_2 + 0xd1) = 0;
    *param_1 = lVar9;
    param_1[1] = uVar11;
    *(undefined1 *)(param_2 + 0xd0) = 1;
    param_1[3] = lStack_78;
    param_1[2] = local_80;
    return uVar7;
  }
  puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
  if (&DAT_00000001 < puVar6) goto LAB_007738b0;
LAB_00773984:
  puVar6 = (undefined1 *)FUN_007bc03c(uVar11 & 0xffffffff,puVar6,0);
  if (puVar6 == (undefined1 *)0x0) goto LAB_00773998;
LAB_007738b4:
  uVar4 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining(puVar6[0x44],puVar6[0x45]);
  uVar4 = uVar4 ^ 1;
  bVar8 = *(byte *)(param_2 + 0xd0);
  if (bVar8 < 2) goto LAB_007738d0;
LAB_007739a8:
  if (bVar8 == 3) {
    bVar8 = *(byte *)(param_2 + 0xc4);
    if (1 < bVar8) {
      if (bVar8 != 3) {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00ad8530);
        goto LAB_00773c68;
      }
      lVar9 = *(long *)(param_2 + 0xb8);
LAB_00773a08:
                    /* try { // try from 00773a08 to 00773a13 has its CatchHandler @ 00773ccc */
      <tokio::runtime::io::registration::[0]::tokio::runtime::io::registration::Registration>::
      poll_write_ready(&local_118,lVar9,param_3);
      if (local_10f == -1) {
        *(undefined1 *)(param_2 + 0xc4) = 3;
LAB_00773a28:
        *(undefined1 *)(param_2 + 0xd0) = 3;
        uVar11 = *(ulong *)puVar2;
        if (uVar11 == 0) {
          uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                   lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
          puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
          if (puVar6 <= &DAT_00000001) goto LAB_00773b9c;
        }
        else {
          puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
          if (puVar6 <= &DAT_00000001) {
LAB_00773b9c:
            puVar6 = (undefined1 *)FUN_007bc03c(uVar11 & 0xffffffff,puVar6,0);
          }
        }
        if ((puVar6 == (undefined1 *)0x0) ||
           (uVar5 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining
                              (puVar6[0x44],puVar6[0x45]), ((uVar4 | uVar5) & 1) != 0)) {
          uVar11 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll
                             (param_2,param_3);
          if ((uVar11 & 1) == 0) {
            lVar9 = -1;
          }
          else {
            lVar9 = -2;
          }
          *param_1 = lVar9;
          return uVar11;
        }
        uVar11 = *(ulong *)puVar2;
        if (uVar11 == 0) {
          uVar11 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
                   lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
          puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
          uStack_117 = extraout_w8_00;
          if (&DAT_00000001 < puVar6) goto joined_r0x00773bf4;
        }
        else {
          puVar6 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar11);
          uStack_117 = extraout_w8;
          if (&DAT_00000001 < puVar6) goto joined_r0x00773bf4;
        }
        puVar6 = (undefined1 *)FUN_007bc03c(uVar11 & 0xffffffff,puVar6,0);
        uStack_117 = extraout_w8_01;
joined_r0x00773bf4:
        if (puVar6 == (undefined1 *)0x0) {
          cVar10 = '\x02';
        }
        else {
          cVar10 = puVar6[0x44];
          uStack_117 = puVar6[0x45];
          puVar6[0x44] = 0;
        }
        local_118 = cVar10;
                    /* try { // try from 00773c04 to 00773c0f has its CatchHandler @ 00773c6c */
        uVar11 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
        lVar9 = -2;
        if ((int)uVar11 == 0) {
          lVar9 = -1;
        }
        *param_1 = lVar9;
        if (cVar10 == '\x02') {
          return uVar11;
        }
        uVar11 = <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop
                           (&local_118);
        return uVar11;
      }
      if (local_10f == '\x02') {
        uVar11 = CONCAT62(uStack_116,CONCAT11(uStack_117,local_118));
LAB_00773aac:
                    /* try { // try from 00773aac to 00773ab3 has its CatchHandler @ 00773c94 */
        FUN_007dfadc(param_2 + 0x98);
        if (*(int *)(param_2 + 0xb0) != -1) {
          close(*(int *)(param_2 + 0xb0));
        }
                    /* try { // try from 00773ac4 to 00773acb has its CatchHandler @ 00773c90 */
        FUN_00771dd0(param_2 + 0x98);
        goto LAB_00773acc;
      }
      if (*(int *)(param_2 + 0xb0) == -1) {
                    /* try { // try from 00773bb4 to 00773bbf has its CatchHandler @ 00773ce0 */
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00adfed0);
      }
                    /* try { // try from 00773a9c to 00773a9f has its CatchHandler @ 00773c8c */
      auVar12 = <mio::net::tcp::stream::mio::net::tcp::stream::TcpStream>::take_error();
      uVar11 = auVar12._8_8_;
      if (((auVar12 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || (uVar11 != 0))
      goto LAB_00773aac;
      lVar9 = *(long *)(param_2 + 0x98);
      uVar11 = *(ulong *)(param_2 + 0xa0);
      lStack_88 = *(long *)(param_2 + 0xb0);
      local_90 = *(long *)(param_2 + 0xa8);
      *(undefined1 *)(param_2 + 0xc4) = 1;
      if (lVar9 == -1) goto LAB_00773a28;
      goto LAB_00773ad8;
    }
    if (bVar8 == 0) {
      uVar11 = (ulong)*(uint *)(param_2 + 0xc0);
      goto LAB_007739cc;
    }
  }
  else {
LAB_00773c40:
    core::panicking::panic_const::panic_const_async_fn_resumed_panic
              (&PTR_s__root__cargo_registry_src_index__00ad8518);
  }
                    /* try { // try from 00773c4c to 00773c67 has its CatchHandler @ 00773cd0 */
  core::panicking::panic_const::panic_const_async_fn_resumed
            (&PTR_s__root__cargo_registry_src_index__00ad8530);
LAB_00773c68:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x773c6c);
  (*pcVar3)();
}


// ===== 00773d24  FUN_00773d24 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00773d24(undefined1 (*param_1) [16],long param_2,undefined8 param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  size_t *psVar14;
  size_t *******pppppppsVar15;
  long lVar16;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  uint extraout_w8_02;
  long *plVar17;
  long lVar18;
  size_t *******pppppppsVar19;
  size_t ******ppppppsVar20;
  size_t *******pppppppsVar21;
  undefined1 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  char cVar25;
  undefined8 uVar26;
  void *pvVar27;
  char *pcVar28;
  size_t sVar29;
  undefined8 uVar30;
  size_t *******pppppppsVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  void *local_48f0;
  uint local_48e4;
  size_t *******local_48e0;
  size_t *******pppppppsStack_48d8;
  size_t *******pppppppsStack_48d0;
  size_t *******pppppppsStack_48c8;
  char *local_48c0;
  undefined8 uStack_48b8;
  undefined8 local_48b0;
  undefined *puStack_48a8;
  undefined8 local_48a0;
  undefined8 uStack_4898;
  char *local_4890;
  size_t *******local_4880;
  size_t *******pppppppsStack_4878;
  size_t *******pppppppsStack_4870;
  size_t *******pppppppsStack_4868;
  size_t *******local_4860;
  size_t *******local_4858;
  size_t *******local_4850;
  size_t *******pppppppsStack_4848;
  undefined1 auStack_4840 [1072];
  undefined1 auStack_4410 [944];
  undefined8 local_4060;
  long local_3fe0;
  undefined1 local_3fd8 [16];
  undefined1 auStack_3fc8 [1072];
  undefined1 auStack_3b98 [1072];
  undefined4 uStack_3768;
  undefined3 uStack_3764;
  size_t *******local_3760;
  size_t *******pppppppsStack_3758;
  size_t *******local_3750;
  size_t *******pppppppsStack_3748;
  char *local_3740;
  undefined8 uStack_3738;
  undefined8 local_3730;
  undefined *puStack_3728;
  undefined8 local_3720;
  undefined8 uStack_3718;
  char *local_3710;
  undefined8 local_3060;
  undefined4 local_2ef0;
  undefined3 uStack_2eec;
  size_t *******local_2ae0;
  code *pcStack_2ad8;
  ulong local_2ad0;
  undefined8 uStack_2ac8;
  undefined8 local_2ac0;
  size_t *******local_2690;
  size_t *******pppppppsStack_2688;
  size_t *******local_2680;
  size_t *******pppppppsStack_2678;
  char local_2280;
  undefined4 local_227f;
  undefined3 uStack_227b;
  void *local_2278;
  size_t local_2270;
  undefined8 local_2268;
  size_t *******local_2260;
  size_t *******pppppppsStack_2258;
  size_t *******local_2250;
  size_t *******pppppppsStack_2248;
  size_t *******local_2240;
  undefined8 uStack_2238;
  undefined8 local_2230;
  undefined1 auStack_2228 [456];
  undefined8 local_2060;
  undefined1 auStack_19f8 [2144];
  undefined4 local_1198;
  undefined2 local_1194;
  undefined8 local_1190;
  size_t *******pppppppsStack_1188;
  undefined8 local_1180;
  size_t *******pppppppsStack_1178;
  char *local_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined *puStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  char *local_1140;
  size_t *******pppppppsStack_1138;
  size_t *******pppppppsStack_1130;
  size_t *******pppppppsStack_1128;
  size_t *******pppppppsStack_1120;
  size_t *******local_1118;
  size_t *******local_1110;
  size_t *******pppppppsStack_1108;
  char *local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined *puStack_10e8;
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  char *local_10d0;
  undefined8 local_1060;
  size_t *******local_d78;
  size_t *******pppppppsStack_d70;
  size_t *******pppppppsStack_d68;
  size_t *******pppppppsStack_d60;
  size_t *******local_d58;
  undefined8 uStack_d50;
  size_t *******local_920;
  size_t *******pppppppsStack_918;
  size_t *******local_910;
  size_t *******pppppppsStack_908;
  char *local_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined *local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined *local_8d0;
  size_t *******local_8c8;
  size_t *******local_4d0;
  code *pcStack_4c8;
  ulong uStack_4c0;
  undefined *local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  code *local_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_71 [17];
  
  local_1060 = 0;
  local_2060 = 0;
  local_3060 = 0;
  local_4060 = 0;
  uVar23 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar23 == 0) {
    uVar23 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar11 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar23);
    if (puVar11 <= &DAT_00000001) goto LAB_00773ddc;
LAB_00773d9c:
    if (puVar11 != (undefined1 *)0x0) goto LAB_00773da4;
LAB_00773df4:
    local_48e4 = 0;
  }
  else {
    puVar11 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar23);
    if (&DAT_00000001 < puVar11) goto LAB_00773d9c;
LAB_00773ddc:
    puVar11 = (undefined1 *)FUN_007bc03c(uVar23 & 0xffffffff,puVar11,0);
    if (puVar11 == (undefined1 *)0x0) goto LAB_00773df4;
LAB_00773da4:
    local_48e4 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining
                           (puVar11[0x44],puVar11[0x45]);
    local_48e4 = local_48e4 ^ 1;
  }
  pcVar28 = (char *)(param_2 + 0x2ce8);
  bVar2 = *(byte *)(param_2 + 0x32a);
  if (bVar2 < 4) {
    if (1 < bVar2) {
      if (bVar2 != 3) goto LAB_00774ec4;
      auVar33 = *(undefined1 (*) [16])(param_2 + 0x340);
LAB_00774034:
                    /* try { // try from 00774038 to 00774047 has its CatchHandler @ 007750d4 */
      (**(code **)(auVar33._8_8_ + 0x18))(&local_1190,auVar33._0_8_,param_3);
      pppppppsVar31 = local_1180;
      pppppppsVar19 = pppppppsStack_1188;
      pppppppsVar15 = local_1190;
      auVar34._8_8_ = local_1180;
      auVar34._0_8_ = pppppppsStack_1188;
      if (local_1190 == (size_t *******)&DAT_fffffffffffffffe) {
        uVar22 = 3;
        goto LAB_00775698;
      }
      memcpy(auStack_4410,&pppppppsStack_1178,0x430);
      puVar12 = *(undefined8 **)(param_2 + 0x348);
      pvVar27 = *(void **)(param_2 + 0x340);
      pcVar8 = (code *)*puVar12;
      if (pcVar8 != (code *)0x0) {
                    /* try { // try from 007740bc to 007740c3 has its CatchHandler @ 00774ff8 */
        (*pcVar8)(pvVar27);
      }
      if (puVar12[1] != 0) {
        free(pvVar27);
      }
      if (pppppppsVar15 != (size_t *******)0xffffffffffffffff) {
        memcpy(auStack_4840,auStack_4410,0x430);
        local_4858 = pppppppsVar15;
        *(undefined1 *)(param_2 + 0x333) = 1;
        local_4850 = pppppppsVar19;
        pppppppsStack_4848 = pppppppsVar31;
        if (4 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
          local_1150 = 0x10;
          pppppppsStack_1138 = (size_t *******)0x35;
          local_1140 = "tunneling HTTPS over proxy";
          pppppppsStack_1178 = _UNK_002a0818;
          local_1180 = _DAT_002a0810;
          local_1190 = (size_t *******)0x0;
          uStack_1160 = _UNK_002a03d8;
          uStack_1168 = _DAT_002a03d0;
          pppppppsStack_1188 = (size_t *******)&DAT_002a1040;
          puStack_1158 = &DAT_002a1040;
          local_1170 = 
          "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs"
          ;
          uStack_1148 = DAT_002a19e8;
                    /* try { // try from 00774184 to 00774193 has its CatchHandler @ 00774fbc */
          <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_1190);
        }
        pppppppsVar15 = *(size_t ********)(param_2 + 0x2e0);
        if ((long)pppppppsVar15 < 0) {
          uVar24 = 0;
LAB_007741a4:
                    /* try { // try from 007741a4 to 007741af has its CatchHandler @ 007751f8 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar24,pppppppsVar15);
        }
        if (pppppppsVar15 == (size_t *******)0x0) {
          pppppppsVar19 = (size_t *******)&DAT_00000001;
        }
        else {
          pvVar27 = *(void **)(param_2 + 0x2d8);
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar24 = 1;
          pppppppsVar19 = (size_t *******)FUN_004b25a4(pppppppsVar15,1);
          if (pppppppsVar19 == (size_t *******)0x0) goto LAB_007741a4;
          memcpy(pppppppsVar19,pvVar27,(size_t)pppppppsVar15);
        }
                    /* try { // try from 00774638 to 0077464b has its CatchHandler @ 007751f8 */
        local_3760 = pppppppsVar15;
        pppppppsStack_3758 = pppppppsVar19;
        local_3750 = pppppppsVar15;
        <rustls_pki_types::server_name::ServerName_as_core::convert::TryFrom<alloc::string::String>>
        ::try_from(&local_1190,&local_3760);
        if ((char)local_1190 == '\x02') {
          *(char **)(param_2 + 0x2cf0) = "Invalid Server Name";
          *(undefined8 *)(param_2 + 0x2cf8) = 0x13;
          *pcVar28 = '\x02';
        }
        else {
          *(size_t ********)(param_2 + 0x2cf0) = pppppppsStack_1188;
          *(size_t ********)pcVar28 = local_1190;
          *(size_t ********)(param_2 + 0x2d00) = pppppppsStack_1178;
          *(size_t ********)(param_2 + 0x2cf8) = local_1180;
        }
        *(undefined1 *)(param_2 + 0x32c) = 1;
        *(undefined1 *)(param_2 + 0x333) = 0;
        memcpy(&local_1190,&local_4858,0x448);
        uVar26 = *(undefined8 *)(param_2 + 0x2d0);
        uVar24 = *(undefined8 *)(param_2 + 0x2d8);
        uVar30 = *(undefined8 *)(param_2 + 0x2e0);
        uVar3 = *(undefined2 *)(param_2 + 0x328);
        *(undefined1 *)(param_2 + 0x32e) = 0;
        if (*(char *)(param_2 + 0x1c0) == '\x02') {
          uVar22 = 2;
        }
        else {
                    /* try { // try from 007746e8 to 007746f7 has its CatchHandler @ 00774f64 */
          (*(code *)**(undefined8 **)(param_2 + 0x1a0))
                    (&local_2260,param_2 + 0x1b8,*(undefined8 *)(param_2 + 0x1a8),
                     *(undefined8 *)(param_2 + 0x1b0));
          uVar22 = *(undefined1 *)(param_2 + 0x1c0);
          pppppppsStack_918 = pppppppsStack_2258;
          local_920 = local_2260;
          pppppppsStack_908 = pppppppsStack_2248;
          local_910 = local_2250;
          local_2ae0._0_7_ = (undefined7)((ulong)local_2240 >> 8);
        }
        *(undefined1 *)(param_2 + 0x32f) = 0;
        memcpy(&local_3760,&local_1190,0x448);
        pppppppsStack_2688 = pppppppsStack_918;
        local_2690 = local_920;
        pppppppsStack_2678 = pppppppsStack_908;
        local_2680 = local_910;
        uStack_2eec = (undefined3)((ulong)local_2ae0 >> 0x20);
        local_2ef0 = local_2ae0._0_4_;
        memcpy((void *)(param_2 + 0x340),&local_3760,0x448);
        *(undefined8 *)(param_2 + 0x788) = uVar26;
        *(undefined4 *)(param_2 + 0x7c1) = local_2ef0;
        *(size_t ********)(param_2 + 0x7a8) = pppppppsStack_2688;
        *(size_t ********)(param_2 + 0x7a0) = local_2690;
        *(size_t ********)(param_2 + 0x7b8) = pppppppsStack_2678;
        *(size_t ********)(param_2 + 0x7b0) = local_2680;
        *(undefined8 *)(param_2 + 0x790) = uVar24;
        *(undefined8 *)(param_2 + 0x798) = uVar30;
        *(undefined1 *)(param_2 + 0x7c0) = uVar22;
        *(uint *)(param_2 + 0x7c4) = CONCAT31(uStack_2eec,local_2ef0._3_1_);
        *(undefined8 *)(param_2 + 2000) = *(undefined8 *)(param_2 + 0x2b0);
        *(undefined8 *)(param_2 + 0x7c8) = *(undefined8 *)(param_2 + 0x2a8);
        *(undefined8 *)(param_2 + 0x7e0) = *(undefined8 *)(param_2 + 0x2c0);
        *(undefined8 *)(param_2 + 0x7d8) = *(undefined8 *)(param_2 + 0x2b8);
        *(undefined8 *)(param_2 + 0x7e8) = *(undefined8 *)(param_2 + 0x2c8);
        *(undefined2 *)(param_2 + 0xcc0) = uVar3;
        *(undefined1 *)(param_2 + 0xcc4) = 0;
        goto LAB_007747e8;
      }
      cVar25 = '\x02';
      bVar2 = *(byte *)(param_2 + 0x32d);
      *(undefined1 *)(param_2 + 0x333) = 0;
      goto joined_r0x00774580;
    }
    if (bVar2 != 0) {
      core::panicking::panic_const::panic_const_async_fn_resumed
                (&PTR_s__root__cargo_registry_src_index__00ad8548);
LAB_00774ec4:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic
                (&PTR_s__root__cargo_registry_src_index__00ad8548);
      uVar9 = extraout_w8_02;
LAB_00774ed0:
      if (uVar9 == 1) {
                    /* try { // try from 00774ed8 to 00774ef3 has its CatchHandler @ 007750b8 */
        core::panicking::panic_const::panic_const_async_fn_resumed
                  (&PTR_s__root__cargo_registry_src_index__00ad84e8);
      }
      else {
        core::panicking::panic_const::panic_const_async_fn_resumed_panic
                  (&PTR_s__root__cargo_registry_src_index__00ad84e8);
      }
      goto LAB_007752e8;
    }
    *(undefined8 *)(param_2 + 0x32b) = 0;
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_2 + 0x1a8) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined2 *)(param_2 + 0x333) = 0;
    *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_2 + 0x1b0) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_2 + 0xf8);
    *(undefined1 *)(param_2 + 0x331) = 1;
    *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x1e8) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_2 + 0x228) = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_2 + 0x220) = *(undefined8 *)(param_2 + 0x158);
    *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_2 + 0x1f0) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x208) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x200) = *(undefined8 *)(param_2 + 0x138);
    *(undefined8 *)(param_2 + 0x218) = *(undefined8 *)(param_2 + 0x150);
    *(undefined8 *)(param_2 + 0x210) = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_2 + 0x250) = *(undefined8 *)(param_2 + 0x188);
    *(undefined8 *)(param_2 + 0x238) = *(undefined8 *)(param_2 + 0x170);
    *(undefined8 *)(param_2 + 0x230) = *(undefined8 *)(param_2 + 0x168);
    *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_2 + 0x180);
    *(undefined8 *)(param_2 + 0x240) = *(undefined8 *)(param_2 + 0x178);
    *(undefined4 *)(param_2 + 0x335) = 0x1010101;
    *(undefined8 *)(param_2 + 0x290) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_2 + 0x288) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_2 + 0x2a0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_2 + 0x298) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_2 + 0x280) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_2 + 0x98);
    puVar7 = PTR_MAX_LOG_LEVEL_FILTER_00b00c78;
    *(undefined8 *)(param_2 + 0x260) = *(undefined8 *)(param_2 + 0x80);
    *(size_t *******)(param_2 + 600) = *(size_t *******)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x270) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x268) = *(undefined8 *)(param_2 + 0x88);
    if (3 < *(ulong *)puVar7) {
      pppppppsStack_3758 = (size_t *******)PTR_fmt_00b00e30;
      pppppppsStack_3748 = (size_t *******)PTR_fmt_00b00e38;
      pppppppsStack_1178 = _UNK_002a0818;
      local_1180 = _DAT_002a0810;
      local_1150 = 0x10;
      uStack_1160 = _UNK_0029fac8;
      uStack_1168 = _DAT_0029fac0;
      pppppppsStack_1138 = (size_t *******)&local_3760;
      local_1140 = &DAT_002b8954;
      local_1190 = (size_t *******)0x0;
      pppppppsStack_1188 = (size_t *******)&DAT_002a1040;
      puStack_1158 = &DAT_002a1040;
      local_1170 = 
      "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs";
      uStack_1148 = DAT_002a1248;
                    /* try { // try from 00773fc0 to 00773fcf has its CatchHandler @ 007750a0 */
      local_3760 = (size_t *******)(param_2 + 600);
      local_3750 = (size_t *******)(param_2 + 0x200);
      <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_1190);
    }
    if ((*(uint *)(param_2 + 600) & 1) == 0) {
      pppppppsStack_918 = *(size_t ********)(param_2 + 0x268);
      local_920 = *(size_t ********)(param_2 + 0x260);
      pppppppsStack_908 = *(size_t ********)(param_2 + 0x278);
      local_910 = *(size_t ********)(param_2 + 0x270);
      *(undefined1 *)(param_2 + 0x336) = 0;
      *(undefined1 *)(param_2 + 0x335) = 0;
      pppppppsStack_2258 = *(size_t ********)(param_2 + 0x288);
      local_2260 = *(size_t ********)(param_2 + 0x280);
      pppppppsStack_2248 = *(size_t ********)(param_2 + 0x298);
      local_2250 = *(size_t ********)(param_2 + 0x290);
      local_2240 = *(size_t ********)(param_2 + 0x2a0);
                    /* try { // try from 007741dc to 007741f7 has its CatchHandler @ 00775038 */
      reqwest::connect::into_uri(&local_3760,&DAT_002a02b0,&local_920);
    }
    else {
      pppppppsStack_918 = *(size_t ********)(param_2 + 0x268);
      local_920 = *(size_t ********)(param_2 + 0x260);
      pppppppsStack_908 = *(size_t ********)(param_2 + 0x278);
      local_910 = *(size_t ********)(param_2 + 0x270);
      *(undefined1 *)(param_2 + 0x338) = 0;
      *(undefined1 *)(param_2 + 0x337) = 0;
      pppppppsStack_2258 = *(size_t ********)(param_2 + 0x288);
      local_2260 = *(size_t ********)(param_2 + 0x280);
      pppppppsStack_2248 = *(size_t ********)(param_2 + 0x298);
      local_2250 = *(size_t ********)(param_2 + 0x290);
      local_2240 = *(size_t ********)(param_2 + 0x2a0);
                    /* try { // try from 00774004 to 0077401f has its CatchHandler @ 0077506c */
      reqwest::connect::into_uri(&local_3760,&DAT_0029f4e0,&local_920);
    }
    pppppppsStack_1130 = pppppppsStack_2258;
    pppppppsStack_1138 = local_2260;
    pppppppsStack_1120 = pppppppsStack_2248;
    pppppppsStack_1128 = local_2250;
    uStack_1168 = uStack_3738;
    local_1170 = local_3740;
    puStack_1158 = puStack_3728;
    uStack_1160 = local_3730;
    uStack_1148 = uStack_3718;
    local_1150 = local_3720;
    pppppppsStack_1178 = pppppppsStack_3748;
    local_1180 = local_3750;
    pppppppsStack_1188 = pppppppsStack_3758;
    local_1190 = local_3760;
    local_1118 = local_2240;
    uStack_48b8 = uStack_3738;
    local_48c0 = local_3740;
    puStack_48a8 = puStack_3728;
    local_48b0 = local_3730;
    uStack_4898 = uStack_3718;
    local_48a0 = local_3720;
    pppppppsStack_48d8 = pppppppsStack_3758;
    local_48e0 = local_3760;
    pppppppsStack_48c8 = pppppppsStack_3748;
    pppppppsStack_48d0 = local_3750;
    local_4890 = local_3710;
    local_1140 = local_3710;
    *(size_t ********)(param_2 + 0x2b0) = pppppppsStack_2258;
    *(size_t ********)(param_2 + 0x2a8) = local_2260;
    *(size_t ********)(param_2 + 0x2c0) = pppppppsStack_2248;
    *(size_t ********)(param_2 + 0x2b8) = local_2250;
    *(undefined1 *)(param_2 + 0x330) = 1;
    pppppppsStack_4878 = pppppppsStack_2258;
    local_4880 = local_2260;
    pppppppsStack_4868 = pppppppsStack_2248;
    pppppppsStack_4870 = local_2250;
    local_4860 = local_2240;
    *(undefined1 *)(param_2 + 0x334) = 0;
    *(undefined1 *)(param_2 + 0x32f) = 1;
    *(size_t ********)(param_2 + 0x2c8) = local_2240;
                    /* try { // try from 007742a4 to 007742b3 has its CatchHandler @ 007750b0 */
    if ((*(char *)(param_2 + 0x200) == '\0') ||
       (iVar10 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq
                           (param_2 + 0x200,&DAT_0029f4e0), iVar10 == 0)) {
      puStack_1158 = *(undefined **)(param_2 + 0x1c8);
      uStack_1160 = *(undefined8 *)(param_2 + 0x1c0);
      uStack_1148 = *(undefined8 *)(param_2 + 0x1d8);
      local_1150 = *(undefined8 *)(param_2 + 0x1d0);
      pppppppsStack_1138 = *(size_t ********)(param_2 + 0x1e8);
      local_1140 = *(char **)(param_2 + 0x1e0);
      pppppppsStack_1178 = *(size_t ********)(param_2 + 0x1a8);
      local_1180 = *(size_t ********)(param_2 + 0x1a0);
      uStack_1168 = *(undefined8 *)(param_2 + 0x1b8);
      local_1170 = *(char **)(param_2 + 0x1b0);
      pppppppsStack_1188 = *(size_t ********)(param_2 + 0x198);
      local_1190 = *(size_t ********)(param_2 + 400);
      pppppppsStack_1128 = *(size_t ********)(param_2 + 0x1f8);
      pppppppsStack_1130 = *(size_t ********)(param_2 + 0x1f0);
      local_1118 = pppppppsStack_48d8;
      pppppppsStack_1120 = local_48e0;
      *(undefined2 *)(param_2 + 0x330) = 0;
      local_10d0 = local_4890;
      uStack_10d8 = uStack_4898;
      local_10e0 = local_48a0;
      puStack_10e8 = puStack_48a8;
      local_10f0 = local_48b0;
      pppppppsStack_1108 = pppppppsStack_48c8;
      local_1110 = pppppppsStack_48d0;
      uStack_10f8 = uStack_48b8;
      local_1100 = local_48c0;
      memcpy(&local_3760,&local_1190,0x210);
      memcpy((void *)(param_2 + 0x340),&local_3760,0x210);
      *(undefined2 *)(param_2 + 0x550) = 1;
      goto LAB_0077437c;
    }
    if (*(long *)(param_2 + 0x220) != 0) {
                    /* try { // try from 007742c4 to 007742c7 has its CatchHandler @ 00774fec */
      auVar33 = http::uri::authority::host(*(undefined8 *)(param_2 + 0x218));
      sVar29 = auVar33._8_8_;
      if (auVar33._0_8_ != (void *)0x0) {
        if ((long)sVar29 < 0) {
          uVar24 = 0;
LAB_007742d8:
                    /* try { // try from 007742d8 to 007742e3 has its CatchHandler @ 007751f0 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(uVar24,sVar29);
        }
        if (sVar29 == 0) {
          puVar11 = &DAT_00000001;
        }
        else {
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          uVar24 = 1;
          puVar11 = (undefined1 *)FUN_004b25a4(sVar29,1);
          if (puVar11 == (undefined1 *)0x0) goto LAB_007742d8;
          memcpy(puVar11,auVar33._0_8_,sVar29);
        }
        *(size_t *)(param_2 + 0x2d0) = sVar29;
        *(undefined1 **)(param_2 + 0x2d8) = puVar11;
        *(size_t *)(param_2 + 0x2e0) = sVar29;
        *(undefined1 *)(param_2 + 0x32e) = 1;
                    /* try { // try from 00774c70 to 00774c7f has its CatchHandler @ 00774f60 */
        <http::uri::http::uri::Uri>::port(&local_1190,param_2 + 0x200);
        auVar6._8_8_ = local_3fd8._8_8_;
        auVar6._0_8_ = local_3fd8._0_8_;
        auVar33._8_8_ = local_3fd8._8_8_;
        auVar33._0_8_ = local_3fd8._0_8_;
        uVar3 = 0x1bb;
        if (local_1190 != (size_t *******)0x0) {
          uVar3 = (undefined2)local_1180;
        }
        pppppppsVar15 = *(size_t ********)(param_2 + 0x1c8);
        *(undefined2 *)(param_2 + 0x328) = uVar3;
        do {
          ppppppsVar20 = *pppppppsVar15;
          cVar25 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppsVar15,0x10);
          if (bVar5) {
            *pppppppsVar15 = (size_t ******)((long)ppppppsVar20 + 1);
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        if ((long)ppppppsVar20 < 0) goto LAB_007752e8;
        pppppppsVar31 = *(size_t ********)(param_2 + 0x1d8);
        pppppppsVar19 = *(size_t ********)(param_2 + 0x1d0);
        do {
          ppppppsVar20 = *pppppppsVar19;
          cVar25 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppsVar19,0x10);
          if (bVar5) {
            *pppppppsVar19 = (size_t ******)((long)ppppppsVar20 + 1);
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        local_3fd8 = auVar33;
        if ((long)ppppppsVar20 < 0) goto LAB_007752e8;
        pppppppsVar21 = *(size_t ********)(param_2 + 0x1e8);
        do {
          ppppppsVar20 = *pppppppsVar21;
          cVar25 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppsVar21,0x10);
          if (bVar5) {
            *pppppppsVar21 = (size_t ******)((long)ppppppsVar20 + 1);
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        local_3fd8 = auVar6;
        if ((long)ppppppsVar20 < 0) goto LAB_007752e8;
                    /* try { // try from 00774cf8 to 00774d07 has its CatchHandler @ 00774f5c */
        local_1190 = pppppppsVar15;
        pppppppsStack_1188 = pppppppsVar19;
        local_1180 = pppppppsVar31;
        pppppppsStack_1178 = pppppppsVar21;
        FUN_007baaac(param_2 + 0x2e8,&local_1190);
        plVar17 = *(long **)(param_2 + 0x1e0);
        do {
          lVar18 = *plVar17;
          cVar25 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar18 + 1;
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        if (lVar18 < 0) goto LAB_007752e8;
        *(long **)(param_2 + 800) = plVar17;
        *(undefined1 *)(param_2 + 0x330) = 0;
        *(undefined1 *)(param_2 + 0x32d) = 1;
        uStack_1168 = uStack_48b8;
        local_1170 = local_48c0;
        puStack_1158 = puStack_48a8;
        uStack_1160 = local_48b0;
        uStack_1148 = uStack_4898;
        local_1150 = local_48a0;
        local_1140 = local_4890;
        pppppppsStack_1188 = pppppppsStack_48d8;
        local_1190 = local_48e0;
        pppppppsStack_1178 = pppppppsStack_48c8;
        local_1180 = pppppppsStack_48d0;
                    /* try { // try from 00774d58 to 00774d67 has its CatchHandler @ 00774f54 */
        auVar33 = FUN_007bb884(param_2 + 0x2e8,&local_1190);
        *(undefined1 (*) [16])(param_2 + 0x340) = auVar33;
        goto LAB_00774034;
      }
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar12 = (undefined8 *)FUN_004b25a4(0xe,1);
    if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00774ef8 to 00774f03 has its CatchHandler @ 00774fe0 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(1,0xe);
    }
    uVar24 = CONCAT62(s_t_in_url_002d1ea4._2_6_,s_t_in_url_002d1ea4._0_2_);
    *puVar12 = CONCAT26(s_t_in_url_002d1ea4._0_2_,s_no_hos_002d1e9e);
    *(undefined8 *)((long)puVar12 + 6) = uVar24;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar13 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar13 == (undefined8 *)0x0) {
                    /* try { // try from 00774dd8 to 00774de3 has its CatchHandler @ 00775150 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    cVar25 = '\x02';
    auVar34._8_8_ = &PTR_FUN_00ad86a8;
    auVar34._0_8_ = puVar13;
    *puVar13 = 0xe;
    puVar13[1] = puVar12;
    puVar13[2] = 0xe;
    goto LAB_00775200;
  }
  if (bVar2 == 4) {
    bVar2 = *(byte *)(param_2 + 0xcc4);
    uVar9 = (uint)bVar2;
    if (bVar2 < 3) {
      if (bVar2 != 0) goto LAB_00774ed0;
      uVar3 = *(undefined2 *)(param_2 + 0xcc0);
LAB_007747e8:
      local_48f0 = (void *)(param_2 + 0x340);
      *(undefined1 *)(param_2 + 0xcc5) = 1;
      memcpy((void *)(param_2 + 0x7f0),local_48f0,0x448);
      *(undefined2 *)(param_2 + 0xcc2) = uVar3;
      pppppppsVar15 = (size_t *******)(param_2 + 0xc38);
      *(undefined8 *)(param_2 + 0xc48) = *(undefined8 *)(param_2 + 0x798);
      *(undefined8 *)(param_2 + 0xc58) = *(undefined8 *)(param_2 + 0x7a8);
      *(undefined8 *)(param_2 + 0xc50) = *(undefined8 *)(param_2 + 0x7a0);
      *(undefined8 *)(param_2 + 0xc70) = *(undefined8 *)(param_2 + 0x7c0);
      local_910 = (size_t *******)(param_2 + 0xcc2);
      *(undefined8 *)(param_2 + 0xc40) = *(undefined8 *)(param_2 + 0x790);
      *pppppppsVar15 = *(size_t *******)(param_2 + 0x788);
      *(undefined8 *)(param_2 + 0xc68) = *(undefined8 *)(param_2 + 0x7b8);
      *(undefined8 *)(param_2 + 0xc60) = *(undefined8 *)(param_2 + 0x7b0);
      *(undefined2 *)(param_2 + 0xcc6) = 0x101;
      *(undefined8 *)(param_2 + 0xc98) = *(undefined8 *)(param_2 + 0x7e8);
      *(undefined8 *)(param_2 + 0xc80) = *(undefined8 *)(param_2 + 2000);
      *(undefined8 *)(param_2 + 0xc78) = *(undefined8 *)(param_2 + 0x7c8);
      *(undefined8 *)(param_2 + 0xc90) = *(undefined8 *)(param_2 + 0x7e0);
      *(undefined8 *)(param_2 + 0xc88) = *(undefined8 *)(param_2 + 0x7d8);
      pppppppsStack_918 = (size_t *******)FUN_0077607c;
      pppppppsStack_908 = (size_t *******)PTR_fmt_00b00e10;
                    /* try { // try from 00774878 to 00774893 has its CatchHandler @ 00775030 */
      local_920 = pppppppsVar15;
      alloc::fmt::format::format_inner(&local_2ae0,&DAT_002d1df0,&local_920);
      pcStack_4c8 = pcStack_2ad8;
      local_4d0 = local_2ae0;
      uStack_4c0 = local_2ad0;
      *(code **)(param_2 + 0xca8) = pcStack_2ad8;
      *(size_t ********)(param_2 + 0xca0) = local_2ae0;
      *(ulong *)(param_2 + 0xcb0) = local_2ad0;
      if (*(char *)(param_2 + 0xc70) != '\x02') {
        lVar18 = *(long *)(param_2 + 0xcb0);
        pppppppsStack_918 = *(size_t ********)(param_2 + 0xc58);
        local_920 = *(size_t ********)(param_2 + 0xc50);
        pppppppsStack_908 = *(size_t ********)(param_2 + 0xc68);
        local_910 = *(size_t ********)(param_2 + 0xc60);
        local_900 = *(char **)(param_2 + 0xc70);
        *(undefined1 *)(param_2 + 0xcc7) = 0;
        if ((ulong)(*(long *)(param_2 + 0xca0) - lVar18) < 0xc) {
                    /* try { // try from 00774de8 to 00774dfb has its CatchHandler @ 00774f1c */
          FUN_0079be54(param_2 + 0xca0,lVar18,0xc,1,1);
          lVar18 = *(long *)(param_2 + 0xcb0);
        }
        pppppppsVar31 = local_910;
        pppppppsVar19 = pppppppsStack_918;
        lVar16 = lVar18 + 0xc;
        pcVar1 = (char *)(*(long *)(param_2 + 0xca8) + lVar18);
        *(undefined8 *)pcVar1 = s_User_Agent__002d1e19._0_8_;
        pcVar1[8] = 'n';
        pcVar1[9] = 't';
        pcVar1[10] = ':';
        pcVar1[0xb] = ' ';
        lVar18 = *(long *)(param_2 + 0xca0);
        *(long *)(param_2 + 0xcb0) = lVar16;
        if ((size_t *******)(lVar18 - lVar16) < local_910) {
                    /* try { // try from 00774e08 to 00774e1f has its CatchHandler @ 00774f18 */
          FUN_0079be54(param_2 + 0xca0,lVar16,local_910,1,1);
          lVar16 = *(long *)(param_2 + 0xcb0);
LAB_00774934:
          memcpy((void *)(*(long *)(param_2 + 0xca8) + lVar16),pppppppsVar19,(size_t)pppppppsVar31);
          lVar18 = *(long *)(param_2 + 0xca0);
        }
        else if (local_910 != (size_t *******)0x0) goto LAB_00774934;
        puVar11 = (undefined1 *)(lVar16 + (long)pppppppsVar31);
        *(undefined1 **)(param_2 + 0xcb0) = puVar11;
        if ((ulong)(lVar18 - (long)puVar11) < 2) {
                    /* try { // try from 00774e2c to 00774e3f has its CatchHandler @ 00774f14 */
          FUN_0079be54(param_2 + 0xca0,puVar11,2,1,1);
          puVar11 = *(undefined1 **)(param_2 + 0xcb0);
        }
        *(undefined2 *)(puVar11 + *(long *)(param_2 + 0xca8)) = 0xa0d;
        *(undefined1 **)(param_2 + 0xcb0) = puVar11 + 2;
                    /* try { // try from 00774994 to 0077499b has its CatchHandler @ 00774ff4 */
        (*(code *)local_920[4])(&pppppppsStack_908,pppppppsStack_918,local_910);
      }
      if (*(char *)(param_2 + 0xc98) != '\x02') {
        pcStack_2ad8 = *(code **)(param_2 + 0xc80);
        local_2ae0 = *(size_t ********)(param_2 + 0xc78);
        uStack_2ac8 = *(undefined8 *)(param_2 + 0xc90);
        local_2ad0 = *(ulong *)(param_2 + 0xc88);
        *(undefined1 *)(param_2 + 0xcc6) = 0;
        local_2ac0 = *(undefined8 *)(param_2 + 0xc98);
        if (3 < *(ulong *)PTR_MAX_LOG_LEVEL_FILTER_00b00c78) {
          pcStack_4c8 = FUN_0077607c;
          local_8e0 = 0x10;
          local_8c8 = (size_t *******)&local_4d0;
          local_8d0 = &DAT_002aaf3a;
          local_4b8 = PTR_fmt_00b00e10;
          pppppppsStack_908 = _UNK_002a0818;
          local_910 = _DAT_002a0810;
          local_8e8 = &DAT_002a1040;
          pppppppsStack_918 = (size_t *******)&DAT_002a1040;
          uStack_8f0 = _UNK_0029fac8;
          local_8f8 = _DAT_0029fac0;
          local_920 = (size_t *******)0x0;
          local_900 = 
          "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/reqwest-0.12.15/src/connect.rs"
          ;
          local_8d8 = DAT_002a1958;
                    /* try { // try from 00774a60 to 00774a6f has its CatchHandler @ 00774f90 */
          local_4d0 = pppppppsVar15;
          uStack_4c0 = param_2 + 0xcc2;
          <log::__private_api::GlobalLogger_as_log::Log>::log(auStack_71,&local_920);
        }
        lVar18 = *(long *)(param_2 + 0xcb0);
        if ((ulong)(*(long *)(param_2 + 0xca0) - lVar18) < 0x15) {
                    /* try { // try from 00774e54 to 00774e67 has its CatchHandler @ 00774f10 */
          FUN_0079be54(param_2 + 0xca0,lVar18,0x15,1,1);
          lVar18 = *(long *)(param_2 + 0xcb0);
        }
        uVar23 = local_2ad0;
        pcVar8 = pcStack_2ad8;
        uVar26 = s_Proxy_Authori_002d1e25._0_8_;
        uVar24 = CONCAT35(s_zation__002d1e32._0_3_,s_Proxy_Authori_002d1e25._8_5_);
        lVar16 = lVar18 + 0x15;
        pcVar1 = (char *)(*(long *)(param_2 + 0xca8) + lVar18);
        *(ulong *)(pcVar1 + 0xd) = CONCAT53(s_zation__002d1e32._3_5_,s_zation__002d1e32._0_3_);
        *(undefined8 *)(pcVar1 + 8) = uVar24;
        *(undefined8 *)pcVar1 = uVar26;
        lVar18 = *(long *)(param_2 + 0xca0);
        *(long *)(param_2 + 0xcb0) = lVar16;
        if ((ulong)(lVar18 - lVar16) < local_2ad0) {
                    /* try { // try from 00774e74 to 00774e8b has its CatchHandler @ 00774f0c */
          FUN_0079be54(param_2 + 0xca0,lVar16,local_2ad0,1,1);
          lVar16 = *(long *)(param_2 + 0xcb0);
LAB_00774ac8:
          memcpy((void *)(*(long *)(param_2 + 0xca8) + lVar16),pcVar8,uVar23);
          lVar18 = *(long *)(param_2 + 0xca0);
        }
        else if (local_2ad0 != 0) goto LAB_00774ac8;
        lVar16 = lVar16 + uVar23;
        *(long *)(param_2 + 0xcb0) = lVar16;
        if ((ulong)(lVar18 - lVar16) < 2) {
                    /* try { // try from 00774e98 to 00774eab has its CatchHandler @ 00774f08 */
          FUN_0079be54(param_2 + 0xca0,lVar16,2,1,1);
          lVar16 = *(long *)(param_2 + 0xcb0);
        }
        *(undefined2 *)(*(long *)(param_2 + 0xca8) + lVar16) = 0xa0d;
        *(long *)(param_2 + 0xcb0) = lVar16 + 2;
                    /* try { // try from 00774b24 to 00774b2b has its CatchHandler @ 00774ff0 */
        (*(code *)local_2ae0[4])(&uStack_2ac8,pcStack_2ad8,local_2ad0);
      }
      lVar18 = *(long *)(param_2 + 0xcb0);
      if ((ulong)(*(long *)(param_2 + 0xca0) - lVar18) < 2) {
                    /* try { // try from 00774db0 to 00774dc3 has its CatchHandler @ 00774f48 */
        FUN_0079be54(param_2 + 0xca0,lVar18,2,1,1);
        lVar18 = *(long *)(param_2 + 0xcb0);
      }
      lVar16 = lVar18 + 2;
      *(undefined2 *)(*(long *)(param_2 + 0xca8) + lVar18) = 0xa0d;
      *(long *)(param_2 + 0xcb0) = lVar16;
      *(long *)(param_2 + 0xcb8) = param_2 + 0x7f0;
      *(long *)(param_2 + 0xcc8) = param_2 + 0xcb8;
      *(undefined8 *)(param_2 + 0xcd0) = *(undefined8 *)(param_2 + 0xca8);
      *(long *)(param_2 + 0xcd8) = lVar16;
    }
    else {
      if (bVar2 != 3) {
        local_920 = *(size_t ********)(param_2 + 0xcd8);
        pppppppsStack_918 = *(size_t ********)(param_2 + 0xce0);
        lVar18 = *(long *)(param_2 + 0xcd0);
        goto LAB_0077549c;
      }
      lVar16 = *(long *)(param_2 + 0xcd8);
    }
    do {
      if (lVar16 == 0) {
        memset((void *)(param_2 + 0xce8),0,0x2000);
        puVar11 = (undefined1 *)0x0;
        *(undefined8 *)(param_2 + 0xcc8) = 0;
        goto LAB_00775568;
      }
                    /* try { // try from 00774b88 to 00774b8f has its CatchHandler @ 0077514c */
      auVar33 = FUN_007dfd98(*(undefined8 *)(param_2 + 0xcc8),param_3,
                             *(undefined8 *)(param_2 + 0xcd0));
      pppppppsVar15 = auVar33._8_8_;
      if (auVar33._0_8_ != 0) {
        if (auVar33._0_8_ != 2) goto LAB_00774bd8;
        uVar22 = 3;
        goto LAB_00775590;
      }
      pppppppsVar19 = *(size_t ********)(param_2 + 0xcd8);
      lVar18 = *(long *)(param_2 + 0xcd0);
      *(undefined8 *)(param_2 + 0xcd0) = 1;
      *(undefined8 *)(param_2 + 0xcd8) = 0;
      lVar16 = (long)pppppppsVar19 - (long)pppppppsVar15;
      if (pppppppsVar19 < pppppppsVar15) {
                    /* try { // try from 00774d74 to 00774d8b has its CatchHandler @ 007751ec */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("mid > len",0x13,&PTR_s__root__cargo_registry_src_index__00ade798);
      }
      *(long *)(param_2 + 0xcd8) = lVar16;
      *(undefined1 **)(param_2 + 0xcd0) = (undefined1 *)(lVar18 + (long)pppppppsVar15);
    } while (pppppppsVar15 != (size_t *******)0x0);
    pppppppsVar15 = (size_t *******)0x1700000003;
LAB_00774bd8:
    local_920 = pppppppsVar15;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar12 = (undefined8 *)FUN_004b25a4(8,8);
    if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00774d90 to 00774d9b has its CatchHandler @ 007751d0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,8);
    }
    auVar34._8_8_ = &PTR_FUN_00adee50;
    auVar34._0_8_ = puVar12;
    *puVar12 = pppppppsVar15;
    goto LAB_00775628;
  }
  if (bVar2 == 5) {
LAB_00773e2c:
                    /* try { // try from 00773e2c to 00773e3f has its CatchHandler @ 007750f0 */
    FUN_007ab534(&local_1190,param_2 + 0x348,param_3);
    pppppppsVar19 = pppppppsStack_1188;
    pppppppsVar15 = local_1190;
    if (local_1190 != (size_t *******)0xffffffffffffffff) {
      if (local_1190 == (size_t *******)0x2) {
        memcpy(&local_920,&pppppppsStack_1188,0x450);
        pppppppsVar19 = local_920;
                    /* try { // try from 00773e7c to 00773e83 has its CatchHandler @ 007750f0 */
        FUN_00770080(&pppppppsStack_918);
      }
      else {
        memcpy(&local_2260,&local_1180,0x860);
      }
      memcpy(auStack_19f8,&local_2260,0x860);
                    /* try { // try from 00774448 to 0077444f has its CatchHandler @ 007750c4 */
      FUN_0076fd08(param_2 + 0x348);
      if (pppppppsVar15 == (size_t *******)0x2) {
        local_1190 = pppppppsVar19;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        puVar12 = (undefined8 *)FUN_004b25a4(8,8);
        if (puVar12 == (undefined8 *)0x0) {
                    /* try { // try from 00774da0 to 00774dab has its CatchHandler @ 0077516c */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,8);
        }
        plVar17 = *(long **)(param_2 + 0x340);
        auVar34._8_8_ = &PTR_FUN_00adee50;
        auVar34._0_8_ = puVar12;
        auVar32._8_8_ = &PTR_FUN_00adee50;
        auVar32._0_8_ = puVar12;
        *puVar12 = pppppppsVar19;
        do {
          lVar18 = *plVar17;
          cVar25 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar18 + -1;
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        if (lVar18 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0077449c to 007744a3 has its CatchHandler @ 00774fc8 */
          <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                    (param_2 + 0x340);
        }
        bVar2 = *(byte *)(param_2 + 0x32b);
        *(undefined1 *)(param_2 + 0x332) = 0;
        goto joined_r0x00775ab8;
      }
      memcpy(&local_3750,auStack_19f8,0x860);
      plVar17 = *(long **)(param_2 + 0x340);
      local_3760 = pppppppsVar15;
      do {
        lVar18 = *plVar17;
        cVar25 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar18 + -1;
          cVar25 = ExclusiveMonitorsStatus();
        }
      } while (cVar25 != '\0');
      pppppppsStack_3758 = pppppppsVar19;
      if (lVar18 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007744f8 to 007744ff has its CatchHandler @ 00774fcc */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (param_2 + 0x340);
      }
      memcpy(&local_1190,&local_3760,0x870);
                    /* try { // try from 00774518 to 00774527 has its CatchHandler @ 00775020 */
      auVar32 = FUN_007a7c9c(param_2 + 0x1f8,&local_1190);
      cVar25 = '\0';
      *(undefined1 *)(param_2 + 0x332) = 0;
      auVar34 = auVar32;
      if ((*(byte *)(param_2 + 0x32b) & 1) == 0) goto LAB_007757bc;
      goto LAB_00774540;
    }
    uVar22 = 5;
  }
  else {
LAB_0077437c:
                    /* try { // try from 0077437c to 0077438f has its CatchHandler @ 00775100 */
    FUN_00771ec8(&local_1190,param_2 + 0x340,param_3);
    auVar34._8_8_ = pppppppsStack_1188;
    auVar34._0_8_ = local_1190;
    cVar25 = local_1180._1_1_;
    if (local_1180._1_1_ != -1) {
      uVar22 = (undefined1)local_1180;
      local_1198 = local_1180._2_4_;
      local_1194 = local_1180._6_2_;
                    /* try { // try from 007743b8 to 007743bf has its CatchHandler @ 007750cc */
      FUN_00770abc(param_2 + 0x340);
      if (*(char *)(param_2 + 0x2c8) != '\x02') {
                    /* try { // try from 007743dc to 007743e3 has its CatchHandler @ 007750a8 */
        (**(code **)(*(long *)(param_2 + 0x2a8) + 0x20))
                  (param_2 + 0x2c0,*(undefined8 *)(param_2 + 0x2b0),*(undefined8 *)(param_2 + 0x2b8)
                  );
      }
      *(undefined1 *)(param_2 + 0x32f) = 0;
      *(undefined1 *)(param_2 + 0x334) = 0;
      *(undefined1 *)(param_2 + 0x330) = 0;
      *(undefined4 *)(param_2 + 0x335) = 0;
                    /* try { // try from 007743f4 to 007743fb has its CatchHandler @ 007752b4 */
      FUN_00771708(param_2 + 0x200);
      goto LAB_00775264;
    }
    uVar22 = 6;
  }
  goto LAB_00775698;
LAB_00775568:
  lVar18 = param_2 + 0xcb8;
  local_920 = (size_t *******)(puVar11 + param_2 + 0xce8);
  pppppppsStack_918 = (size_t *******)(0x2000 - (long)puVar11);
  *(long *)(param_2 + 0xcd0) = lVar18;
  *(size_t ********)(param_2 + 0xcd8) = local_920;
  *(size_t ********)(param_2 + 0xce0) = pppppppsStack_918;
LAB_0077549c:
  local_910 = (size_t *******)0x0;
                    /* try { // try from 007754ac to 007754bb has its CatchHandler @ 00775c6c */
  pppppppsStack_908 = pppppppsStack_918;
  auVar33 = FUN_007df904(lVar18,param_3,&local_920);
  if ((auVar33 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    uVar22 = 4;
LAB_00775590:
    *(undefined1 *)(param_2 + 0xcc4) = uVar22;
    goto LAB_00775694;
  }
  if (auVar33._8_8_ != 0) {
                    /* try { // try from 00775598 to 0077559f has its CatchHandler @ 00775be4 */
    auVar34 = FUN_007c7ea8(auVar33._8_8_);
    goto LAB_00775628;
  }
  if (pppppppsStack_918 < local_910) {
                    /* try { // try from 00775ad4 to 00775ae3 has its CatchHandler @ 00775c6c */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,local_910,pppppppsStack_918,&PTR_s__root__cargo_registry_src_index__00add9b0);
  }
  if (local_910 == (size_t *******)0x0) {
                    /* try { // try from 007755a4 to 007755a7 has its CatchHandler @ 00775be0 */
    auVar34 = reqwest::connect::tunnel_eof();
    goto LAB_00775628;
  }
  puVar11 = (undefined1 *)(*(long *)(param_2 + 0xcc8) + (long)local_910);
  *(undefined1 **)(param_2 + 0xcc8) = puVar11;
  if ((undefined1 *)0x2000 < puVar11) {
                    /* try { // try from 00775ae8 to 00775afb has its CatchHandler @ 00775c68 */
                    /* WARNING: Subroutine does not return */
    core::slice::index::slice_index_fail
              (0,puVar11,0x2000,&PTR_s__root__cargo_registry_src_index__00ad8500);
  }
  if (puVar11 < (undefined1 *)0xc) {
LAB_0077560c:
                    /* try { // try from 0077560c to 0077561b has its CatchHandler @ 00775be8 */
    uVar24 = FUN_00775fa8("unsuccessful tunnel",0x13);
  }
  else {
    plVar17 = (long *)(param_2 + 0xce8);
    if ((*plVar17 == 0x312e312f50545448 && *(int *)(param_2 + 0xcf0) == 0x30303220) ||
       (*plVar17 == 0x302e312f50545448 && *(int *)(param_2 + 0xcf0) == 0x30303220)) {
      if (*(int *)((long)plVar17 + (long)(puVar11 + -4)) != 0xa0d0a0d) goto code_r0x00775560;
      lVar18 = *(long *)(param_2 + 0x7f0);
      auVar34 = *(undefined1 (*) [16])(param_2 + 0x7f8);
      *(undefined1 *)(param_2 + 0xcc5) = 0;
      memcpy(&local_1190,(void *)(param_2 + 0x808),0x430);
      goto LAB_0077562c;
    }
    if (*plVar17 != 0x312e312f50545448 || *(int *)(param_2 + 0xcf0) != 0x37303420)
    goto LAB_0077560c;
                    /* try { // try from 00775ac0 to 00775acf has its CatchHandler @ 00775bc4 */
    uVar24 = FUN_00775fa8("proxy authentication required",0x1d);
  }
  goto LAB_0077561c;
code_r0x00775560:
  if (puVar11 == (undefined1 *)0x2000) goto LAB_007755dc;
  goto LAB_00775568;
LAB_007755dc:
                    /* try { // try from 007755dc to 007755eb has its CatchHandler @ 00775bdc */
  uVar24 = FUN_00775fa8("proxy headers too long for tunnel",0x21);
LAB_0077561c:
  auVar34._8_8_ = &PTR_FUN_00ad86a8;
  auVar34._0_8_ = uVar24;
LAB_00775628:
  lVar18 = -1;
LAB_0077562c:
  local_48f0 = (void *)(param_2 + 0x340);
  if (*(long *)(param_2 + 0xca0) != 0) {
    free(*(void **)(param_2 + 0xca8));
  }
  *(undefined2 *)(param_2 + 0xcc6) = 0;
  if (*(long *)(param_2 + 0xc38) != 0) {
    free(*(void **)(param_2 + 0xc40));
  }
  if ((*(byte *)(param_2 + 0xcc5) & 1) != 0) {
                    /* try { // try from 00775660 to 00775667 has its CatchHandler @ 00775c14 */
    FUN_00770080(param_2 + 0x7f0);
  }
  *(undefined1 *)(param_2 + 0xcc5) = 0;
  memcpy(&local_2260,&local_1190,0x430);
  *(undefined1 *)(param_2 + 0xcc4) = 1;
  if (lVar18 != -2) {
    memcpy(auStack_3b98,&local_2260,0x430);
                    /* try { // try from 00775748 to 0077574f has its CatchHandler @ 00775c0c */
    FUN_00770480(local_48f0);
    if (lVar18 == -1) {
      cVar25 = '\x02';
    }
    else {
      memcpy(auStack_3fc8,auStack_3b98,0x430);
      pvVar27 = *(void **)(param_2 + 0x2cf0);
      sVar29 = *(size_t *)(param_2 + 0x2cf8);
      *(undefined1 *)(param_2 + 0x32b) = 1;
      *(undefined1 *)(param_2 + 0x32c) = 0;
      local_3fe0 = lVar18;
      local_3fd8 = auVar34;
      if (*pcVar28 != '\x02') {
        uStack_3768 = *(undefined4 *)(param_2 + 0x2ce9);
        plVar17 = *(long **)(param_2 + 800);
        uStack_3764 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x2cec) >> 8);
        local_2268 = *(undefined8 *)(param_2 + 0x2d00);
        *(undefined1 *)(param_2 + 0x32d) = 0;
        *(undefined1 *)(param_2 + 0x332) = 0;
        *(long **)(param_2 + 0x340) = plVar17;
        uStack_227b = uStack_3764;
        *(undefined1 *)(param_2 + 0x32b) = 0;
        local_2280 = *pcVar28;
        local_227f = uStack_3768;
        local_2278 = pvVar27;
        local_2270 = sVar29;
        memcpy(&local_2260,&local_3fe0,0x448);
        do {
          lVar18 = *plVar17;
          cVar25 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar18 + 1;
            cVar25 = ExclusiveMonitorsStatus();
          }
        } while (cVar25 != '\0');
        if (lVar18 < 0) {
LAB_007752e8:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x7752ec);
          (*pcVar8)();
        }
                    /* try { // try from 007758e0 to 007758fb has its CatchHandler @ 00775bec */
        <rustls::client::client_conn::connection::[2]::rustls::client::client_conn::connection::ClientConnection>
        ::new(&local_4d0,plVar17,&local_2280);
        pppppppsVar15 = local_4d0;
        if (local_4d0 == (size_t *******)0x2) {
          uStack_a8 = uStack_4c0;
          local_b0 = pcStack_4c8;
          uStack_98 = uStack_4b0;
          puStack_a0 = local_4b8;
          uStack_88 = uStack_4a0;
          local_90 = local_4a8;
          local_80 = local_498;
          memcpy(&local_1190,&local_2260,0x448);
                    /* try { // try from 0077593c to 00775947 has its CatchHandler @ 00775bc8 */
          uVar24 = <alloc::io::error::core::io::error::Error>::new<rustls::error::Error>
                             (0x2a,&local_b0);
          memcpy(&local_920,&local_2260,0x448);
          pppppppsVar15 = (size_t *******)&DAT_00000004;
        }
        else {
          memcpy(&local_1190,&pcStack_4c8,0x418);
          pppppppsStack_d70 = pppppppsStack_2258;
          local_d78 = local_2260;
          pppppppsStack_d60 = pppppppsStack_2248;
          pppppppsStack_d68 = local_2250;
          uStack_d50 = uStack_2238;
          local_d58 = local_2240;
          memcpy(&local_2690,auStack_2228,0x410);
          memcpy(&local_920,&local_1190,0x448);
          uVar24 = local_2230;
        }
        memcpy(&local_2ae0,&local_920,0x448);
        memcpy(&local_2ef0,&local_2690,0x410);
        *(size_t ********)(param_2 + 0x348) = pppppppsVar15;
        memcpy((void *)(param_2 + 0x350),&local_2ae0,0x448);
        *(undefined8 *)(param_2 + 0x798) = uVar24;
        memcpy((void *)(param_2 + 0x7a0),&local_2ef0,0x410);
        *(undefined1 *)(param_2 + 0xbb0) = 0;
        goto LAB_00773e2c;
      }
      if ((long)sVar29 < 0) {
        uVar24 = 0;
LAB_007757a4:
                    /* try { // try from 007757a4 to 007757af has its CatchHandler @ 00775d20 */
                    /* WARNING: Subroutine does not return */
        alloc::raw_vec::handle_error(uVar24,sVar29);
      }
      if (sVar29 == 0) {
        puVar11 = &DAT_00000001;
      }
      else {
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        uVar24 = 1;
        puVar11 = (undefined1 *)FUN_004b25a4(sVar29,1);
        if (puVar11 == (undefined1 *)0x0) goto LAB_007757a4;
        memcpy(puVar11,pvVar27,sVar29);
        auVar34 = local_3fd8;
      }
      local_3fd8 = auVar34;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar14 = (size_t *)FUN_004b25a4(0x18,8);
      if (psVar14 == (size_t *)0x0) {
                    /* try { // try from 00775bb4 to 00775bbf has its CatchHandler @ 00775c40 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x18);
      }
      auVar34._8_8_ = &PTR_FUN_00ad86a8;
      auVar34._0_8_ = psVar14;
      auVar32._8_8_ = &PTR_FUN_00ad86a8;
      auVar32._0_8_ = psVar14;
      *psVar14 = sVar29;
      psVar14[1] = (size_t)puVar11;
      psVar14[2] = sVar29;
      bVar2 = *(byte *)(param_2 + 0x32b);
      *(undefined1 *)(param_2 + 0x332) = 0;
joined_r0x00775ab8:
      cVar25 = '\x02';
      if ((bVar2 & 1) != 0) {
LAB_00774540:
                    /* try { // try from 00774540 to 00774547 has its CatchHandler @ 00775028 */
        FUN_00770080(&local_3fe0);
        auVar34 = auVar32;
      }
    }
LAB_007757bc:
    *(undefined1 *)(param_2 + 0x32b) = 0;
    if (((((*(byte *)(param_2 + 0x32c) & 1) != 0) && (*pcVar28 == '\0')) &&
        (*(long *)(param_2 + 0x2cf0) != -1)) && (*(long *)(param_2 + 0x2cf0) != 0)) {
      free(*(void **)(param_2 + 0x2cf8));
    }
    *(undefined1 *)(param_2 + 0x32c) = 0;
    bVar2 = *(byte *)(param_2 + 0x32d);
    *(undefined1 *)(param_2 + 0x333) = 0;
joined_r0x00774580:
    if ((bVar2 & 1) != 0) {
      plVar17 = *(long **)(param_2 + 800);
      do {
        lVar18 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar18 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 007757fc to 00775803 has its CatchHandler @ 00775c04 */
        <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
                  (param_2 + 800);
      }
    }
    *(undefined1 *)(param_2 + 0x32d) = 0;
                    /* try { // try from 00775808 to 0077580f has its CatchHandler @ 00775c3c */
    FUN_00770100(param_2 + 0x2e8);
    if ((*(char *)(param_2 + 0x32e) == '\x01') && (*(long *)(param_2 + 0x2d0) != 0)) {
      free(*(void **)(param_2 + 0x2d8));
    }
LAB_00775200:
    *(undefined1 *)(param_2 + 0x32e) = 0;
    if (((*(byte *)(param_2 + 0x32f) & 1) != 0) && (*(char *)(param_2 + 0x2c8) != '\x02')) {
                    /* try { // try from 00775228 to 0077522f has its CatchHandler @ 00775290 */
      (**(code **)(*(long *)(param_2 + 0x2a8) + 0x20))
                (param_2 + 0x2c0,*(undefined8 *)(param_2 + 0x2b0),*(undefined8 *)(param_2 + 0x2b8));
    }
    *(undefined1 *)(param_2 + 0x32f) = 0;
    *(undefined1 *)(param_2 + 0x334) = 0;
    if ((*(byte *)(param_2 + 0x330) & 1) != 0) {
                    /* try { // try from 00775240 to 00775247 has its CatchHandler @ 007752a4 */
      FUN_00771708(&local_48e0);
    }
    *(undefined1 *)(param_2 + 0x330) = 0;
    *(undefined4 *)(param_2 + 0x335) = 0;
                    /* try { // try from 00775250 to 00775257 has its CatchHandler @ 007752b4 */
    FUN_00771708(param_2 + 0x200);
                    /* try { // try from 00775258 to 0077525f has its CatchHandler @ 007752ac */
    FUN_00770f14(param_2 + 400);
    uVar22 = 0;
LAB_00775264:
    *(undefined1 *)(param_2 + 0x331) = 0;
    *param_1 = auVar34;
    *(undefined4 *)(param_1[1] + 2) = local_1198;
    *(undefined2 *)(param_1[1] + 6) = local_1194;
    *(undefined1 *)(param_2 + 0x32a) = 1;
    param_1[1][0] = uVar22;
    param_1[1][1] = cVar25;
    return;
  }
LAB_00775694:
  uVar22 = 4;
LAB_00775698:
  *(undefined1 *)(param_2 + 0x32a) = uVar22;
  puVar7 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar23 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar23 == 0) {
    uVar23 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar11 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar23);
    if (puVar11 <= &DAT_00000001) goto LAB_00775b20;
  }
  else {
    puVar11 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar23);
    if (puVar11 <= &DAT_00000001) {
LAB_00775b20:
      puVar11 = (undefined1 *)FUN_007bc03c(uVar23 & 0xffffffff,puVar11,0);
    }
  }
  if (puVar11 == (undefined1 *)0x0) {
LAB_007756dc:
    uVar23 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
    if ((uVar23 & 1) != 0) {
      param_1[1][1] = 0xfe;
      return;
    }
    param_1[1][1] = 0xff;
    return;
  }
  uVar9 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining(puVar11[0x44],puVar11[0x45])
  ;
  if (((local_48e4 | uVar9) & 1) != 0) goto LAB_007756dc;
  uVar23 = *(ulong *)puVar7;
  if (uVar23 == 0) {
    uVar23 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
             lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar11 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar23);
    uVar22 = extraout_w8_00;
    if (&DAT_00000001 < puVar11) goto joined_r0x00775b68;
  }
  else {
    puVar11 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar23);
    uVar22 = extraout_w8;
    if (&DAT_00000001 < puVar11) goto joined_r0x00775b68;
  }
  puVar11 = (undefined1 *)FUN_007bc03c(uVar23 & 0xffffffff,puVar11,0);
  uVar22 = extraout_w8_01;
joined_r0x00775b68:
  if (puVar11 == (undefined1 *)0x0) {
    cVar25 = '\x02';
  }
  else {
    cVar25 = *(char *)((long)puVar11 + 0x44);
    uVar22 = *(undefined1 *)((long)puVar11 + 0x45);
    *(undefined1 *)((long)puVar11 + 0x44) = 0;
  }
  uVar23 = (ulong)local_1190 >> 0x10;
  local_1190._2_6_ = (undefined6)uVar23;
  local_1190._0_2_ = CONCAT11(uVar22,cVar25);
                    /* try { // try from 00775b80 to 00775b8b has its CatchHandler @ 00775c1c */
  iVar10 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
  uVar22 = 0xfe;
  if (iVar10 == 0) {
    uVar22 = 0xff;
  }
  param_1[1][1] = uVar22;
  if (cVar25 == '\x02') {
    return;
  }
  <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(&local_1190);
  return;
}


// ===== 00775d54  FUN_00775d54 =====

void FUN_00775d54(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  char cVar7;
  ulong uVar8;
  char local_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  undefined8 uStack_50;
  undefined1 local_48;
  char cStack_47;
  undefined6 uStack_46;
  
  puVar1 = PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  uVar8 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar5 <= &DAT_00000001) goto LAB_00775dd4;
LAB_00775d9c:
    if (puVar5 != (undefined1 *)0x0) goto LAB_00775da0;
LAB_00775de8:
    uVar2 = 0;
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (&DAT_00000001 < puVar5) goto LAB_00775d9c;
LAB_00775dd4:
    puVar5 = (undefined1 *)FUN_007bc03c(uVar8 & 0xffffffff,puVar5,0);
    if (puVar5 == (undefined1 *)0x0) goto LAB_00775de8;
LAB_00775da0:
    uVar2 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining(puVar5[0x44],puVar5[0x45])
    ;
    uVar2 = uVar2 ^ 1;
  }
  FUN_00771ec8(&local_58,param_2 + 0x78,param_3);
  if (cStack_47 != -1) {
    param_1[1] = uStack_50;
    *param_1 = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
    param_1[2] = CONCAT62(uStack_46,CONCAT11(cStack_47,local_48));
    return;
  }
  uVar8 = *(ulong *)puVar1;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar5 <= &DAT_00000001) goto LAB_00775eec;
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    if (puVar5 <= &DAT_00000001) {
LAB_00775eec:
      puVar5 = (undefined1 *)FUN_007bc03c(uVar8 & 0xffffffff,puVar5,0);
    }
  }
  if ((puVar5 == (undefined1 *)0x0) ||
     (uVar3 = <tokio::task::coop::tokio::task::coop::Budget>::has_remaining
                        (puVar5[0x44],puVar5[0x45]), ((uVar2 | uVar3) & 1) != 0)) {
    uVar8 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
    if ((uVar8 & 1) == 0) {
      uVar6 = 0xff;
    }
    else {
      uVar6 = 0xfe;
    }
    *(undefined1 *)((long)param_1 + 0x11) = uVar6;
    return;
  }
  uVar8 = *(ulong *)puVar1;
  if (uVar8 == 0) {
    uVar8 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    uStack_57 = extraout_w8_00;
    if (&DAT_00000001 < puVar5) goto joined_r0x00775f34;
  }
  else {
    puVar5 = (undefined1 *)pthread_getspecific((pthread_key_t)uVar8);
    uStack_57 = extraout_w8;
    if (&DAT_00000001 < puVar5) goto joined_r0x00775f34;
  }
  puVar5 = (undefined1 *)FUN_007bc03c(uVar8 & 0xffffffff,puVar5,0);
  uStack_57 = extraout_w8_01;
joined_r0x00775f34:
  if (puVar5 == (undefined1 *)0x0) {
    cVar7 = '\x02';
  }
  else {
    cVar7 = puVar5[0x44];
    uStack_57 = puVar5[0x45];
    puVar5[0x44] = 0;
  }
  local_58 = cVar7;
                    /* try { // try from 00775f44 to 00775f4f has its CatchHandler @ 00775f88 */
  iVar4 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
  uVar6 = 0xfe;
  if (iVar4 == 0) {
    uVar6 = 0xff;
  }
  *(undefined1 *)((long)param_1 + 0x11) = uVar6;
  if (cVar7 == '\x02') {
    return;
  }
  <tokio::task::coop::with_budget::ResetGuard_as_core::ops::drop::Drop>::drop(&local_58);
  return;
}


// ===== 00775fa8  FUN_00775fa8 =====

void FUN_00775fa8(void *param_1,size_t param_2)

{
  undefined1 *__dest;
  size_t *psVar1;
  undefined8 uVar2;
  
  if (-1 < (long)param_2) {
    if (param_2 == 0) {
      __dest = &DAT_00000001;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_2,1);
      if (__dest == (undefined1 *)0x0) goto LAB_00775fc4;
      memcpy(__dest,param_1,param_2);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      psVar1 = (size_t *)FUN_004b25a4(0x18,8);
    }
    if (psVar1 != (size_t *)0x0) {
      *psVar1 = param_2;
      psVar1[1] = (size_t)__dest;
      psVar1[2] = param_2;
      return;
    }
                    /* try { // try from 0077604c to 00776057 has its CatchHandler @ 0077605c */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x18);
  }
  uVar2 = 0;
LAB_00775fc4:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_2);
}


// ===== 0077607c  FUN_0077607c =====

void FUN_0077607c(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00776090  FUN_00776090 =====

void FUN_00776090(long *param_1)

{
  if (*(long *)(*param_1 + 0x58) != 0) {
    return;
  }
  return;
}


// ===== 007760a8  FUN_007760a8 =====

undefined1  [16] FUN_007760a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 007760b8  FUN_007760b8 =====

undefined8 FUN_007760b8(void)

{
  return 0;
}


// ===== 007760c0  FUN_007760c0 =====

void FUN_007760c0(void)

{
  return;
}


// ===== 007760c4  FUN_007760c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007760c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0820;
  param_1[1] = _UNK_002a0828;
  *param_1 = uVar1;
  return;
}


// ===== 007760d8  FUN_007760d8 =====

undefined8 FUN_007760d8(void)

{
  return 0;
}


// ===== 007760e0  FUN_007760e0 =====

undefined1  [16] FUN_007760e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x28;
  auVar1._0_8_ = "description() is deprecated; use Display";
  return auVar1;
}


// ===== 007760f0  FUN_007760f0 =====

undefined8 FUN_007760f0(void)

{
  return 0;
}


// ===== 007760f8  FUN_007760f8 =====

void FUN_007760f8(void)

{
  return;
}


// ===== 007760fc  FUN_007760fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007760fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_002a0db0;
  param_1[1] = _UNK_002a0db8;
  *param_1 = uVar1;
  return;
}


// ===== 00776110  FUN_00776110 =====

undefined8 FUN_00776110(undefined8 param_1,uint *param_2)

{
  ushort *puVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *local_60;
  long *plStack_58;
  
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    plVar3 = *(long **)(param_2 + 4);
    uVar4 = *param_2;
    uVar2 = *(ulong *)(param_2 + 6);
    plVar5 = *(long **)(param_2 + 2);
    do {
      if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00add9c8);
      }
      if (plVar5 == (long *)0x0) {
        for (; plVar5 = plVar3, uVar2 != 0; uVar2 = uVar2 - 1) {
          plVar3 = (long *)plVar5[0x70];
        }
        plVar3 = (long *)0x0;
        uVar2 = 0;
        plVar8 = plVar5;
        if (*(short *)((long)plVar5 + 0x37a) == 0) goto LAB_007761e8;
      }
      else {
        plVar8 = plVar5;
        if (*(ushort *)((long)plVar5 + 0x37a) <= uVar2) {
LAB_007761e8:
          do {
            plVar5 = (long *)*plVar8;
            if (plVar5 == (long *)0x0) {
                    /* try { // try from 0077624c to 00776257 has its CatchHandler @ 00776268 */
                    /* WARNING: Subroutine does not return */
              core::option::unwrap_failed(&PTR_s__nix_store_8006w282fgsx3273c878b_00add998);
            }
            puVar1 = (ushort *)(plVar8 + 0x6f);
            uVar2 = (ulong)*puVar1;
            plVar3 = (long *)((long)plVar3 + 1);
            plVar8 = plVar5;
          } while (*(ushort *)((long)plVar5 + 0x37a) <= *puVar1);
        }
      }
      if (plVar3 == (long *)0x0) {
        uVar9 = uVar2 + 1;
        plVar8 = plVar5;
      }
      else {
        plVar6 = plVar5 + uVar2 + 0x71;
        do {
          plVar8 = (long *)*plVar6;
          plVar3 = (long *)((long)plVar3 + -1);
          plVar6 = plVar8 + 0x70;
        } while (plVar3 != (long *)0x0);
        uVar9 = 0;
      }
      lVar7 = lVar7 + -1;
      local_60 = plVar5 + uVar2 * 3 + 1;
      plStack_58 = plVar5 + uVar2 * 7 + 0x22;
      <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
                (param_1,&local_60,&DAT_00ad8880,&plStack_58,&DAT_00ad88a0);
      plVar3 = (long *)0x0;
      uVar4 = 1;
      uVar2 = uVar9;
      plVar5 = plVar8;
    } while (lVar7 != 0);
  }
  return param_1;
}


// ===== 0077626c  FUN_0077626c =====

undefined8 FUN_0077626c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *local_68;
  long *local_48;
  
  lVar6 = *param_2;
  uVar5 = param_2[1];
  lVar1 = param_2[2];
  uVar4 = param_2[3];
  do {
    if (lVar6 == 2) {
      uVar4 = uVar4 + 1;
      if (*(ulong *)(lVar1 + 0x28) <= uVar4) {
        return param_1;
      }
      plVar2 = (long *)(*(long *)(lVar1 + 0x20) + uVar4 * 0x68);
LAB_00776344:
      if (*plVar2 == 1) {
        uVar5 = plVar2[1];
        lVar6 = 1;
      }
      else {
        lVar6 = 2;
      }
      local_48 = plVar2 + 3;
    }
    else {
      if (*(ulong *)(lVar1 + 0x28) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar4,*(ulong *)(lVar1 + 0x28),&PTR_s__root__cargo_registry_src_index__00ade880);
      }
      plVar2 = (long *)(*(long *)(lVar1 + 0x20) + uVar4 * 0x68);
      if (lVar6 == 0) goto LAB_00776344;
      if (*(ulong *)(lVar1 + 0x40) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (uVar5,*(ulong *)(lVar1 + 0x40),&PTR_s__root__cargo_registry_src_index__00ade898);
      }
      lVar3 = *(long *)(lVar1 + 0x38) + uVar5 * 0x48;
      if ((*(uint *)(lVar3 + 0x10) & 1) == 0) {
        lVar6 = 2;
      }
      else {
        uVar5 = *(ulong *)(lVar3 + 0x18);
        lVar6 = 1;
      }
      local_48 = (long *)(lVar3 + 0x20);
    }
    local_68 = plVar2 + 8;
    <core::fmt::builders::[7]::core::fmt::builders::DebugMap>::entry
              (param_1,&local_68,&DAT_00ad8900,&local_48,&DAT_00ad8920);
  } while( true );
}


// ===== 007763ac  FUN_007763ac =====

void FUN_007763ac(long param_1)

{
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
                    /* try { // try from 007763cc to 007763cf has its CatchHandler @ 0077641c */
  local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                       (*(undefined8 *)(param_1 + 8));
                    /* try { // try from 007763d4 to 007763db has its CatchHandler @ 00776400 */
  FUN_00776ee8(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_44,2);
  *(undefined8 *)(param_1 + 0x28) = uStack_30;
  *(undefined8 *)(param_1 + 0x20) = local_38;
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
  return;
}


// ===== 00776434  FUN_00776434 =====

void FUN_00776434(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00776454 to 0077645b has its CatchHandler @ 0077648c */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007764ac  FUN_007764ac =====

void FUN_007764ac(void *param_1)

{
                    /* try { // try from 007764bc to 007764bf has its CatchHandler @ 007764d8 */
  FUN_007772cc();
  free(param_1);
  return;
}


// ===== 007764f4  FUN_007764f4 =====

void FUN_007764f4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -3) {
    return;
  }
  if (lVar1 == -2) {
    FUN_00777008(param_1[1]);
    return;
  }
  if (lVar1 != -1) {
    FUN_007773e8();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00776530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))(param_1 + 4,param_1[2],param_1[3]);
  return;
}


// ===== 00776534  FUN_00776534 =====

void FUN_00776534(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 00776544 to 00776547 has its CatchHandler @ 00776584 */
  FUN_0079377c();
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 007765bc  FUN_007765bc =====

void FUN_007765bc(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *param_1;
  pcVar1 = (char *)(lVar7 + 0x88);
  *(undefined4 *)(lVar7 + 0xa8) = 1;
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x78);
    *(undefined8 *)(lVar7 + 0x78) = 0;
    *(undefined4 *)(lVar7 + 0x88) = 0;
    if (lVar3 != 0) {
                    /* try { // try from 00776608 to 0077663f has its CatchHandler @ 00776678 */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
    }
  }
  pcVar1 = (char *)(lVar7 + 0xa0);
  do {
    cVar2 = *pcVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar5) {
      *pcVar1 = '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (cVar2 == '\0') {
    lVar3 = *(long *)(lVar7 + 0x90);
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined4 *)(lVar7 + 0xa0) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar7 + 0x98));
    }
  }
  plVar6 = (long *)*param_1;
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar5) {
      *plVar6 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


// ===== 007766ac  FUN_007766ac =====

void FUN_007766ac(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *pvVar3;
  
                    /* try { // try from 007766bc to 007766bf has its CatchHandler @ 0077675c */
  FUN_007773e8();
  pvVar3 = *(void **)(param_1 + 0x60);
  if (pvVar3 != (void *)0x0) {
                    /* try { // try from 007766c8 to 007766cf has its CatchHandler @ 00776740 */
    FUN_007b3bec(pvVar3);
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x70);
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007766ec to 007766f3 has its CatchHandler @ 0077671c */
    (*pcVar2)(pvVar3);
  }
  if (puVar1[1] != 0) {
    free(pvVar3);
    return;
  }
  return;
}


// ===== 00776784  FUN_00776784 =====

void FUN_00776784(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 007767c0 to 007767c3 has its CatchHandler @ 0077680c */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00776860  FUN_00776860 =====

void FUN_00776860(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  free(param_1);
  return;
}


// ===== 007768a0  FUN_007768a0 =====

void FUN_007768a0(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 007768b8 to 007768bf has its CatchHandler @ 007768e8 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077690c  FUN_0077690c =====

void FUN_0077690c(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  __ptr = (void *)param_1[0x11];
  puVar1 = (undefined8 *)param_1[0x12];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0077692c to 00776933 has its CatchHandler @ 00776978 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
  }
  if (*param_1 == 2) {
    return;
  }
  FUN_007772cc(param_1);
  return;
}


// ===== 007769b4  FUN_007769b4 =====

void FUN_007769b4(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 007769c4 to 007769c7 has its CatchHandler @ 00776a0c */
  FUN_0077690c();
  __ptr = *(void **)(param_1 + 0x98);
                    /* try { // try from 007769cc to 007769d3 has its CatchHandler @ 007769ec */
  FUN_007772cc(__ptr);
  free(__ptr);
  return;
}


// ===== 00776a28  FUN_00776a28 =====

void FUN_00776a28(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00776a48 to 00776a4f has its CatchHandler @ 00776a8c */
    (*pcVar2)(pvVar3);
  }
  if (puVar1[1] != 0) {
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[2];
                    /* try { // try from 00776a68 to 00776a6f has its CatchHandler @ 00776abc */
  FUN_007772cc(pvVar3);
  free(pvVar3);
  return;
}


// ===== 00776ad8  FUN_00776ad8 =====

void FUN_00776ad8(long *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*param_1 != 0) {
                    /* try { // try from 00776aec to 00776af3 has its CatchHandler @ 00776c68 */
    <hyper::common::watch::Sender_as_core::ops::drop::Drop>::drop();
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00776b10 to 00776b17 has its CatchHandler @ 00776c2c */
      <alloc::sync::[n]::alloc::sync::Arc<hyper::common::watch::Shared>>::drop_slow(param_1);
    }
                    /* try { // try from 00776b18 to 00776b1f has its CatchHandler @ 00776c34 */
    FUN_0079377c(param_1 + 3);
    plVar6 = (long *)param_1[3];
    if (plVar6 != (long *)0x0) {
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 00776b40 to 00776b47 has its CatchHandler @ 00776bf4 */
        <alloc::sync::[n]::alloc::sync::Arc<futures_channel::mpsc::BoundedInner<core::result::Result<bytes::bytes::Bytes,hyper::error::Error>>>>
        ::drop_slow(param_1 + 3);
      }
    }
    param_1 = param_1 + 1;
    lVar7 = *param_1;
    pcVar1 = (char *)(lVar7 + 0x88);
    *(undefined4 *)(lVar7 + 0xa8) = 1;
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x78);
      *(undefined8 *)(lVar7 + 0x78) = 0;
      *(undefined4 *)(lVar7 + 0x88) = 0;
      if (lVar2 != 0) {
                    /* try { // try from 00776b84 to 00776bbb has its CatchHandler @ 00776bfc */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar7 + 0x80));
      }
    }
    pcVar1 = (char *)(lVar7 + 0xa0);
    do {
      cVar3 = *pcVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = '\x01';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\0') {
      lVar2 = *(long *)(lVar7 + 0x90);
      *(undefined8 *)(lVar7 + 0x90) = 0;
      *(undefined4 *)(lVar7 + 0xa0) = 0;
      if (lVar2 != 0) {
        (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar7 + 0x98));
      }
    }
    plVar6 = (long *)*param_1;
    do {
      lVar7 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<futures_channel::oneshot::Inner<http::header::map::HeaderMap>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


// ===== 00776cb0  FUN_00776cb0 =====

void FUN_00776cb0(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 00776cd0 to 00776cd7 has its CatchHandler @ 00776cf4 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00776cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 00776d18  FUN_00776d18 =====

void FUN_00776d18(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00776d44 to 00776d47 has its CatchHandler @ 00776da0 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
    drop_slow();
  }
                    /* try { // try from 00776d48 to 00776d4f has its CatchHandler @ 00776de8 */
  FUN_00776ee8(param_1 + 0x30);
  if (*(long *)(param_1 + 0x60) != 0) {
                    /* try { // try from 00776d60 to 00776d63 has its CatchHandler @ 00776db4 */
    (**(code **)(*(long *)(param_1 + 0x60) + 0x18))(*(undefined8 *)(param_1 + 0x68));
  }
  plVar3 = *(long **)(param_1 + 0x70);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x70));
      return;
    }
  }
  return;
}


// ===== 00776e00  FUN_00776e00 =====

void FUN_00776e00(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 00776e2c to 00776e2f has its CatchHandler @ 00776e88 */
    <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>::
    drop_slow();
  }
                    /* try { // try from 00776e30 to 00776e37 has its CatchHandler @ 00776ed0 */
  FUN_00776ee8(param_1 + 0x30);
  if (*(long *)(param_1 + 0x60) != 0) {
                    /* try { // try from 00776e48 to 00776e4b has its CatchHandler @ 00776e9c */
    (**(code **)(*(long *)(param_1 + 0x60) + 0x18))(*(undefined8 *)(param_1 + 0x68));
  }
  plVar3 = *(long **)(param_1 + 0x70);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x70));
      return;
    }
  }
  return;
}


// ===== 00776ee8  FUN_00776ee8 =====

void FUN_00776ee8(int *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  
  if (*param_1 == 0) {
    __ptr = *(void **)(param_1 + 2);
    puVar1 = *(undefined8 **)(param_1 + 4);
    if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 00776f38 to 00776f3f has its CatchHandler @ 00776f6c */
      (*(code *)*puVar1)(__ptr);
    }
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    if (*(long *)(param_1 + 2) == 0) {
      return;
    }
    __ptr = *(void **)(param_1 + 4);
    if (__ptr == (void *)0x0) {
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar1 != (code *)0x0) {
                    /* try { // try from 00776f20 to 00776f27 has its CatchHandler @ 00776f68 */
      (*(code *)*puVar1)(__ptr);
    }
  }
  if (puVar1[1] == 0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 00776f90  FUN_00776f90 =====

void FUN_00776f90(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00776fb0 to 00776fb7 has its CatchHandler @ 00776fe8 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 00777008  FUN_00777008 =====

void FUN_00777008(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  void *__ptr;
  
  __ptr = (void *)param_1[0xb];
  if (__ptr != (void *)0x0) {
    puVar2 = (undefined8 *)param_1[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 00777030 to 00777037 has its CatchHandler @ 00777084 */
      (*pcVar1)(__ptr);
    }
    if (puVar2[1] != 0) {
      free(__ptr);
    }
  }
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
  }
  free(param_1);
  return;
}


// ===== 007770d4  FUN_007770d4 =====

void FUN_007770d4(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 007770ec  FUN_007770ec =====

void FUN_007770ec(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 007770fc to 00777103 has its CatchHandler @ 00777128 */
    FUN_007b3bec();
    free(param_1);
    return;
  }
  return;
}


// ===== 00777144  FUN_00777144 =====

void FUN_00777144(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 00777154 to 00777157 has its CatchHandler @ 007771ac */
  FUN_007773e8();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 00777160 to 00777167 has its CatchHandler @ 0077718c */
    FUN_007b3bec(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 007771c8  FUN_007771c8 =====

void FUN_007771c8(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007771f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00777200 to 00777207 has its CatchHandler @ 00777230 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00777254  FUN_00777254 =====

void FUN_00777254(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00777274 to 0077727b has its CatchHandler @ 007772ac */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 007772cc  FUN_007772cc =====

void FUN_007772cc(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 007772dc to 007772df has its CatchHandler @ 00777368 */
  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 00777308 to 0077732f has its CatchHandler @ 00777360 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00777350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 0077739c  FUN_0077739c =====

void FUN_0077739c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 007773e8  FUN_007773e8 =====

void FUN_007773e8(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 00777418 to 0077741f has its CatchHandler @ 007774ac */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00777460 to 00777463 has its CatchHandler @ 007774dc */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00777530  FUN_00777530 =====

void FUN_00777530(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 00777550 to 00777553 has its CatchHandler @ 00777590 */
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  plVar3 = *(long **)(param_1 + 0x20);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<dyn_for<'a,'b>core[bcece726f298455b]::ops::function::Fn<(&'a_tokio[8c8895dbfa691109]::runtime::task_hooks::TaskMeta<'b>,),Output=()>+core[bcece726f298455b]::marker::Sync+core[bcece726f298455b]::marker::Send>>
      ::drop_slow((undefined8 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}


// ===== 007775c8  FUN_007775c8 =====

void FUN_007775c8(void *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 local_54 [4];
  undefined1 *local_50;
  undefined *puStack_48;
  
  puVar3 = PTR_NEXT_ID_00b00cd0;
  do {
    lVar5 = *(long *)puVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *(long *)puVar3 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || lVar5 == 0);
  uVar6 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00c08;
  if (uVar6 == 0) {
                    /* try { // try from 007776b0 to 007776df has its CatchHandler @ 00777780 */
    uVar6 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
            lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00c08);
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar6);
  }
  else {
    puVar4 = (ulong *)pthread_getspecific((pthread_key_t)uVar6);
  }
  if (puVar4 <= &DAT_00000001) {
    puVar4 = (ulong *)FUN_007bc03c(uVar6 & 0xffffffff,puVar4,0);
  }
  if (puVar4 == (ulong *)0x0) {
    if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 007776f0 to 007776f7 has its CatchHandler @ 007777c4 */
      (*(code *)*param_2)(param_1);
    }
    if (param_2[1] != 0) {
      free(param_1);
    }
  }
  else {
    if (0x7ffffffffffffffe < *puVar4) {
                    /* try { // try from 00777710 to 0077771b has its CatchHandler @ 007777fc */
                    /* WARNING: Subroutine does not return */
      core::cell::panic_already_mutably_borrowed(&PTR_s__root__cargo_registry_src_index__00ad8a30);
    }
    *puVar4 = *puVar4 + 1;
    if (puVar4[1] != 2) {
      if (puVar4[1] == 1) {
                    /* try { // try from 00777660 to 0077768b has its CatchHandler @ 007777e4 */
        FUN_007d7524(puVar4 + 2,param_1,param_2,lVar5);
      }
      else {
        FUN_007c8b60(puVar4 + 2,param_1,param_2,lVar5);
      }
      *puVar4 = *puVar4 - 1;
      return;
    }
    if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 00777728 to 0077772f has its CatchHandler @ 00777798 */
      (*(code *)*param_2)(param_1);
    }
    if (param_2[1] != 0) {
      free(param_1);
    }
    *puVar4 = *puVar4 - 1;
  }
  local_54[0] = puVar4 == (ulong *)0x0;
  local_50 = local_54;
  puStack_48 = PTR_fmt_00b00e40;
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_fmt(&DAT_002ab692,&local_50,param_3);
}


// ===== 00777818  FUN_00777818 =====

void FUN_00777818(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long local_60;
  void *pvStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_18;
  
  local_38 = &local_18;
  local_18 = 0;
                    /* try { // try from 00777840 to 0077784b has its CatchHandler @ 007778ec */
  local_48 = param_2;
  uStack_40 = param_3;
  FUN_00788c94(&local_60,&local_48);
  if (local_18 != 0) {
    *param_1 = -1;
    param_1[1] = local_18;
    if (local_50 != 0) {
      puVar1 = (undefined8 *)((long)pvStack_58 + 8);
      lVar2 = local_50;
      do {
        if ((puVar1[-1] != -1) && (puVar1[-1] != 0)) {
          free((void *)*puVar1);
        }
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 3;
      } while (lVar2 != 0);
    }
    if (local_60 != 0) {
      free(pvStack_58);
    }
    return;
  }
  param_1[1] = (long)pvStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 0077790c  FUN_0077790c =====

void FUN_0077790c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long local_60;
  void *pvStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_18;
  
  local_38 = &local_18;
  local_18 = 0;
                    /* try { // try from 00777934 to 0077793f has its CatchHandler @ 007779d8 */
  local_48 = param_2;
  uStack_40 = param_3;
  FUN_00788744(&local_60,&local_48);
  if (local_18 != 0) {
    *param_1 = -1;
    param_1[1] = local_18;
    if (local_50 != 0) {
      puVar1 = (undefined8 *)((long)pvStack_58 + 8);
      lVar2 = local_50;
      do {
        if (puVar1[-1] != 0) {
          free((void *)*puVar1);
        }
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 3;
      } while (lVar2 != 0);
    }
    if (local_60 != 0) {
      free(pvStack_58);
    }
    return;
  }
  param_1[1] = (long)pvStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 007779f8  FUN_007779f8 =====

void FUN_007779f8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long local_60;
  void *pvStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_18;
  
  local_38 = &local_18;
  local_18 = 0;
                    /* try { // try from 00777a20 to 00777a2b has its CatchHandler @ 00777ac4 */
  local_48 = param_2;
  uStack_40 = param_3;
  FUN_007888e4(&local_60,&local_48);
  if (local_18 != 0) {
    *param_1 = -1;
    param_1[1] = local_18;
    if (local_50 != 0) {
      puVar1 = (undefined8 *)((long)pvStack_58 + 8);
      lVar2 = local_50;
      do {
        if (puVar1[-1] != 0) {
          free((void *)*puVar1);
        }
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 3;
      } while (lVar2 != 0);
    }
    if (local_60 != 0) {
      free(pvStack_58);
    }
    return;
  }
  param_1[1] = (long)pvStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00777ae4  FUN_00777ae4 =====

void FUN_00777ae4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long local_60;
  void *pvStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_18;
  
  local_38 = &local_18;
  local_18 = 0;
                    /* try { // try from 00777b0c to 00777b17 has its CatchHandler @ 00777bac */
  local_48 = param_2;
  uStack_40 = param_3;
  FUN_00788a84(&local_60,&local_48);
  if (local_18 != 0) {
    *param_1 = -1;
    param_1[1] = local_18;
    if (local_50 != 0) {
      puVar1 = (undefined8 *)((long)pvStack_58 + 0x10);
      lVar2 = local_50;
      do {
        if (puVar1[-1] != 0) {
          free((void *)*puVar1);
        }
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 4;
      } while (lVar2 != 0);
    }
    if (local_60 != 0) {
      free(pvStack_58);
    }
    return;
  }
  param_1[1] = (long)pvStack_58;
  *param_1 = local_60;
  param_1[2] = local_50;
  return;
}


// ===== 00777bcc  FUN_00777bcc =====

void FUN_00777bcc(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  void *__ptr;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int local_50;
  
  iVar1 = tokio::runtime::task::harness::can_read_output(param_1,param_1 + 0x50);
  if (iVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 2;
    local_50 = (int)uVar5;
    if (local_50 != 1) {
                    /* try { // try from 00777c90 to 00777ca7 has its CatchHandler @ 00777ce4 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                ("JoinHandle polled after completion",0x45,
                 &PTR_s__root__cargo_registry_src_index__00ad8a48);
    }
    lVar7 = *(long *)(param_1 + 0x40);
    lVar6 = *(long *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x48);
    if (((*param_2 == 0) && (param_2[1] != 0)) && (__ptr = (void *)param_2[2], __ptr != (void *)0x0)
       ) {
      puVar4 = (undefined8 *)param_2[3];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
                    /* try { // try from 00777c70 to 00777c77 has its CatchHandler @ 00777cac */
        (*pcVar3)(__ptr);
      }
      if (puVar4[1] != 0) {
        free(__ptr);
      }
    }
    *param_2 = 0;
    param_2[2] = lVar7;
    param_2[1] = lVar6;
    param_2[3] = lVar2;
  }
  return;
}


// ===== 00777cfc  FUN_00777cfc =====

void FUN_00777cfc(void *param_1)

{
  int iVar1;
  
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec();
  if (iVar1 != 0) {
                    /* try { // try from 00777d14 to 00777d1b has its CatchHandler @ 00777d40 */
    FUN_00776d18(param_1);
    free(param_1);
    return;
  }
  return;
}


// ===== 00777d5c  FUN_00777d5c =====

void FUN_00777d5c(void *param_1)

{
  int iVar1;
  
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec();
  if (iVar1 != 0) {
                    /* try { // try from 00777d74 to 00777d7b has its CatchHandler @ 00777da0 */
    FUN_00776e00(param_1);
    free(param_1);
    return;
  }
  return;
}


// ===== 00777dbc  FUN_00777dbc =====

void FUN_00777dbc(void *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* try { // try from 00777dec to 00777def has its CatchHandler @ 00777e98 */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 00777df4 to 00777dfb has its CatchHandler @ 00777e60 */
    FUN_00776ee8((long)param_1 + 0x30);
    *(undefined8 *)((long)param_1 + 0x38) = uStack_50;
    *(ulong *)((long)param_1 + 0x30) = CONCAT44(uStack_54,2);
    *(undefined8 *)((long)param_1 + 0x48) = uStack_40;
    *(undefined8 *)((long)param_1 + 0x40) = local_48;
                    /* try { // try from 00777e08 to 00777e0f has its CatchHandler @ 00777e58 */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              ((long)param_1 + 0x50,0);
  }
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  if (iVar1 != 0) {
                    /* try { // try from 00777e2c to 00777e33 has its CatchHandler @ 00777e7c */
    FUN_00776d18(param_1);
    free(param_1);
  }
  return;
}


// ===== 00777f00  FUN_00777f00 =====

void FUN_00777f00(void *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
           transition_to_join_handle_dropped();
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* try { // try from 00777f30 to 00777f33 has its CatchHandler @ 00777fdc */
    local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 00777f38 to 00777f3f has its CatchHandler @ 00777fa4 */
    FUN_00776ee8((long)param_1 + 0x30);
    *(undefined8 *)((long)param_1 + 0x38) = uStack_50;
    *(ulong *)((long)param_1 + 0x30) = CONCAT44(uStack_54,2);
    *(undefined8 *)((long)param_1 + 0x48) = uStack_40;
    *(undefined8 *)((long)param_1 + 0x40) = local_48;
                    /* try { // try from 00777f4c to 00777f53 has its CatchHandler @ 00777f9c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
  }
  if ((auVar2 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
              ((long)param_1 + 0x50,0);
  }
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  if (iVar1 != 0) {
                    /* try { // try from 00777f70 to 00777f77 has its CatchHandler @ 00777fc0 */
    FUN_00776e00(param_1);
    free(param_1);
  }
  return;
}


// ===== 00778044  FUN_00778044 =====

void FUN_00778044(void *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined *local_b0;
  void *pvStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uStack_90 = 0;
      local_b0 = PTR_WAKER_VTABLE_00b00d40;
      piVar4 = (int *)((long)param_1 + 0x30);
      pvStack_a8 = param_1;
      if (*piVar4 != 0) {
        local_a0 = (undefined1 *)&local_b0;
        local_98 = (undefined1 *)&local_b0;
                    /* try { // try from 007781e8 to 007781ff has its CatchHandler @ 007782f0 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: unexpected stage",0x75,
                   &PTR_s__root__cargo_registry_src_index__00ad8a60);
      }
      local_a0 = (undefined1 *)&local_b0;
      local_98 = (undefined1 *)&local_b0;
                    /* try { // try from 0077809c to 0077809f has its CatchHandler @ 007782f0 */
      local_80 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                           (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 007780ac to 007780b7 has its CatchHandler @ 007782c0 */
      uVar3 = (**(code **)(*(long *)((long)param_1 + 0x40) + 0x18))
                        (*(undefined8 *)((long)param_1 + 0x38),&local_a0);
                    /* try { // try from 007780b8 to 007780c3 has its CatchHandler @ 007782f0 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_80);
      if ((uVar3 & 1) == 0) {
        local_80 = CONCAT44(local_80._4_4_,2);
                    /* try { // try from 007780d4 to 007780d7 has its CatchHandler @ 00778220 */
        local_60 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 007780dc to 007780e3 has its CatchHandler @ 00778208 */
        FUN_00776ee8(piVar4);
        *(undefined8 *)((long)param_1 + 0x38) = uStack_78;
        *(undefined8 *)piVar4 = local_80;
        *(undefined8 *)((long)param_1 + 0x48) = uStack_68;
        *(undefined8 *)((long)param_1 + 0x40) = uStack_70;
                    /* try { // try from 007780ec to 007780f3 has its CatchHandler @ 007782f0 */
        <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_60);
      }
      if ((uVar3 & 1) == 0) {
        uStack_50 = 0;
        local_48 = 0;
        local_58 = 1;
        uStack_40 = uVar3 & 0xffffffff;
                    /* try { // try from 00778194 to 0077819b has its CatchHandler @ 00778258 */
        local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 007781a0 to 007781a7 has its CatchHandler @ 0077823c */
        FUN_00776ee8(piVar4);
        *(undefined8 *)((long)param_1 + 0x38) = uStack_50;
        *(ulong *)piVar4 = CONCAT44(uStack_54,local_58);
        *(ulong *)((long)param_1 + 0x48) = uStack_40;
        *(undefined8 *)((long)param_1 + 0x40) = local_48;
                    /* try { // try from 007781b4 to 007781bb has its CatchHandler @ 00778234 */
        <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
        goto LAB_007781bc;
      }
      bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle
                        (param_1);
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          return;
        }
        <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
        ::schedule((long)param_1 + 0x20,param_1);
        iVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
        if (iVar2 == 0) {
          return;
        }
                    /* try { // try from 0077812c to 00778133 has its CatchHandler @ 00778204 */
        FUN_00776d18(param_1);
        goto LAB_00778148;
      }
      if (bVar1 == 2) goto LAB_00778140;
    }
    FUN_007787b4((long)param_1 + 0x20);
LAB_007781bc:
    FUN_00779498(param_1);
    return;
  }
  if (bVar1 == 2) {
    return;
  }
LAB_00778140:
                    /* try { // try from 00778140 to 00778147 has its CatchHandler @ 007782d4 */
  FUN_00776d18(param_1);
LAB_00778148:
  free(param_1);
  return;
}


// ===== 0077831c  FUN_0077831c =====

void FUN_0077831c(void *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined *local_b0;
  void *pvStack_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  
  bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_running()
  ;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uStack_90 = 0;
      local_b0 = PTR_WAKER_VTABLE_00b00d40;
      piVar4 = (int *)((long)param_1 + 0x30);
      pvStack_a8 = param_1;
      if (*piVar4 != 0) {
        local_a0 = (undefined1 *)&local_b0;
        local_98 = (undefined1 *)&local_b0;
                    /* try { // try from 007784c0 to 007784d7 has its CatchHandler @ 007785c8 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_fmt
                  ("internal error: entered unreachable code: unexpected stage",0x75,
                   &PTR_s__root__cargo_registry_src_index__00ad8a60);
      }
      local_a0 = (undefined1 *)&local_b0;
      local_98 = (undefined1 *)&local_b0;
                    /* try { // try from 00778374 to 00778377 has its CatchHandler @ 007785c8 */
      local_80 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                           (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 00778384 to 0077838f has its CatchHandler @ 00778598 */
      uVar3 = (**(code **)(*(long *)((long)param_1 + 0x40) + 0x18))
                        (*(undefined8 *)((long)param_1 + 0x38),&local_a0);
                    /* try { // try from 00778390 to 0077839b has its CatchHandler @ 007785c8 */
      <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_80);
      if ((uVar3 & 1) == 0) {
        local_80 = CONCAT44(local_80._4_4_,2);
                    /* try { // try from 007783ac to 007783af has its CatchHandler @ 007784f8 */
        local_60 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 007783b4 to 007783bb has its CatchHandler @ 007784e0 */
        FUN_00776ee8(piVar4);
        *(undefined8 *)((long)param_1 + 0x38) = uStack_78;
        *(undefined8 *)piVar4 = local_80;
        *(undefined8 *)((long)param_1 + 0x48) = uStack_68;
        *(undefined8 *)((long)param_1 + 0x40) = uStack_70;
                    /* try { // try from 007783c4 to 007783cb has its CatchHandler @ 007785c8 */
        <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_60);
      }
      if ((uVar3 & 1) == 0) {
        uStack_50 = 0;
        local_48 = 0;
        local_58 = 1;
        uStack_40 = uVar3 & 0xffffffff;
                    /* try { // try from 0077846c to 00778473 has its CatchHandler @ 00778530 */
        local_38 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                             (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 00778478 to 0077847f has its CatchHandler @ 00778514 */
        FUN_00776ee8(piVar4);
        *(undefined8 *)((long)param_1 + 0x38) = uStack_50;
        *(ulong *)piVar4 = CONCAT44(uStack_54,local_58);
        *(ulong *)((long)param_1 + 0x48) = uStack_40;
        *(undefined8 *)((long)param_1 + 0x40) = local_48;
                    /* try { // try from 0077848c to 00778493 has its CatchHandler @ 0077850c */
        <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_38);
        goto LAB_00778494;
      }
      bVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_idle
                        (param_1);
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          return;
        }
        <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
        ::yield_now((long)param_1 + 0x20,param_1);
        iVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
        if (iVar2 == 0) {
          return;
        }
                    /* try { // try from 00778404 to 0077840b has its CatchHandler @ 007784dc */
        FUN_00776e00(param_1);
        goto LAB_00778420;
      }
      if (bVar1 == 2) goto LAB_00778418;
    }
    FUN_007787b4((long)param_1 + 0x20);
LAB_00778494:
    FUN_00779678(param_1);
    return;
  }
  if (bVar1 == 2) {
    return;
  }
LAB_00778418:
                    /* try { // try from 00778418 to 0077841f has its CatchHandler @ 007785ac */
  FUN_00776e00(param_1);
LAB_00778420:
  free(param_1);
  return;
}


// ===== 007785f4  FUN_007785f4 =====

void FUN_007785f4(void *param_1)

{
                    /* try { // try from 00778604 to 00778607 has its CatchHandler @ 00778620 */
  FUN_00776d18();
  free(param_1);
  return;
}


// ===== 0077863c  FUN_0077863c =====

void FUN_0077863c(void *param_1)

{
                    /* try { // try from 0077864c to 0077864f has its CatchHandler @ 00778668 */
  FUN_00776e00();
  free(param_1);
  return;
}


// ===== 00778684  FUN_00778684 =====

void FUN_00778684(long param_1)

{
  <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
  ::schedule(param_1 + *(long *)(*(long *)(param_1 + 0x10) + 0x40),param_1);
  return;
}


// ===== 00778698  FUN_00778698 =====

void FUN_00778698(long param_1)

{
  <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
  ::schedule(param_1 + *(long *)(*(long *)(param_1 + 0x10) + 0x40),param_1);
  return;
}


// ===== 007786ac  FUN_007786ac =====

void FUN_007786ac(void *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) != 0) {
    FUN_007787b4((long)param_1 + 0x20);
    FUN_00779498(param_1);
    return;
  }
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  if (iVar1 != 0) {
                    /* try { // try from 007786e8 to 007786ef has its CatchHandler @ 00778714 */
    FUN_00776d18(param_1);
    free(param_1);
    return;
  }
  return;
}


// ===== 00778730  FUN_00778730 =====

void FUN_00778730(void *param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_shutdown
                    ();
  if ((uVar2 & 1) != 0) {
    FUN_007787b4((long)param_1 + 0x20);
    FUN_00779678(param_1);
    return;
  }
  iVar1 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::ref_dec(param_1);
  if (iVar1 != 0) {
                    /* try { // try from 0077876c to 00778773 has its CatchHandler @ 00778798 */
    FUN_00776e00(param_1);
    free(param_1);
    return;
  }
  return;
}


// ===== 007787b4  FUN_007787b4 =====

void FUN_007787b4(long param_1)

{
  undefined8 extraout_x1;
  undefined8 uVar1;
  undefined4 uStack_6c;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_48 = 2;
                    /* try { // try from 007787d4 to 007787d7 has its CatchHandler @ 00778898 */
  local_28 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                       (*(undefined8 *)(param_1 + 8));
                    /* try { // try from 007787dc to 007787e3 has its CatchHandler @ 00778864 */
  FUN_00776ee8(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_44,local_48);
  *(undefined8 *)(param_1 + 0x28) = uStack_30;
  *(undefined8 *)(param_1 + 0x20) = local_38;
                    /* try { // try from 007787f0 to 007787f7 has its CatchHandler @ 00778844 */
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_28);
  uVar1 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00778810 to 00778817 has its CatchHandler @ 00778880 */
  local_50 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                       (uVar1);
                    /* try { // try from 0077881c to 00778823 has its CatchHandler @ 0077884c */
  FUN_00776ee8(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_6c,1);
  *(undefined8 *)(param_1 + 0x28) = extraout_x1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_50);
  return;
}


// ===== 007788b8  FUN_007788b8 =====

void FUN_007788b8(long param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 *__dest;
  undefined1 *__dest_00;
  long lVar2;
  long *plVar3;
  size_t __n;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n_00;
  size_t sVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_80;
  size_t local_70;
  undefined1 *local_68;
  
  plVar1 = (long *)*param_3;
  lVar10 = param_3[1];
  if (param_1 != param_2) {
    puVar5 = (undefined8 *)(param_1 + 0x20);
    uVar4 = (ulong)(param_2 - param_1) / 0x48;
    puVar8 = (undefined8 *)(param_3[2] + lVar10 * 0x48 + 0x20);
    do {
      __dest_00 = &DAT_00000001;
      plVar9 = plVar1;
      if (puVar5[-4] == -1) {
        local_68 = (undefined1 *)puVar5[-3];
        __n_00 = puVar5[-2];
        local_70 = 0xffffffffffffffff;
        lVar2 = puVar5[-1];
joined_r0x00778980:
        if (lVar2 == -1) goto LAB_007789e0;
LAB_00778984:
        __n = puVar5[1];
        if ((long)__n < 0) {
          __dest_00 = (undefined1 *)0x0;
LAB_00778af4:
                    /* try { // try from 00778af4 to 00778aff has its CatchHandler @ 00778b54 */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(__dest_00,__n);
        }
        sVar7 = __n;
        if (__n == 0) {
          __dest = &DAT_00000001;
          plVar3 = (long *)puVar5[2];
          __n = 0;
          goto joined_r0x00778a6c;
        }
        pvVar6 = (void *)*puVar5;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        __dest = (undefined1 *)FUN_004b25a4(__n,1);
        if (__dest == (undefined1 *)0x0) goto LAB_00778af4;
        memcpy(__dest,pvVar6,__n);
        plVar3 = (long *)puVar5[2];
        if (plVar3 != (long *)&DAT_fffffffffffffffe) goto LAB_007789f4;
        plVar3 = (long *)&DAT_fffffffffffffffe;
      }
      else {
        __n_00 = puVar5[-2];
        if ((long)__n_00 < 0) {
          __dest_00 = (undefined1 *)0x0;
LAB_00778ae0:
                    /* try { // try from 00778ae0 to 00778aeb has its CatchHandler @ 00778b7c */
                    /* WARNING: Subroutine does not return */
          alloc::raw_vec::handle_error(__dest_00,__n_00);
        }
        if (__n_00 != 0) {
          pvVar6 = (void *)puVar5[-3];
          __rustc::__rust_no_alloc_shim_is_unstable_v2();
          local_68 = (undefined1 *)FUN_004b25a4(__n_00,1);
          if (local_68 == (undefined1 *)0x0) goto LAB_00778ae0;
          memcpy(local_68,pvVar6,__n_00);
          lVar2 = puVar5[-1];
          local_70 = __n_00;
          goto joined_r0x00778980;
        }
        local_70 = 0;
        local_68 = &DAT_00000001;
        if (puVar5[-1] != -1) goto LAB_00778984;
LAB_007789e0:
        __dest = (undefined1 *)*puVar5;
        sVar7 = puVar5[1];
        __n = 0xffffffffffffffff;
        plVar3 = (long *)puVar5[2];
joined_r0x00778a6c:
        if (plVar3 != (long *)&DAT_fffffffffffffffe) {
LAB_007789f4:
          if (plVar3 == (long *)0xffffffffffffffff) {
            __dest_00 = (undefined1 *)puVar5[3];
            plVar3 = (long *)0xffffffffffffffff;
            plVar9 = (long *)puVar5[4];
          }
          else {
            plVar9 = (long *)puVar5[4];
            if ((long)plVar9 < 0) {
              local_80 = 0;
LAB_00778b08:
                    /* try { // try from 00778b08 to 00778b13 has its CatchHandler @ 00778b18 */
                    /* WARNING: Subroutine does not return */
              alloc::raw_vec::handle_error(local_80,plVar9);
            }
            local_80 = 1;
            if (plVar9 == (long *)0x0) {
              plVar3 = (long *)0x0;
              __dest_00 = &DAT_00000001;
            }
            else {
              pvVar6 = (void *)puVar5[3];
              __rustc::__rust_no_alloc_shim_is_unstable_v2();
              __dest_00 = (undefined1 *)FUN_004b25a4(plVar9,1);
              if (__dest_00 == (undefined1 *)0x0) goto LAB_00778b08;
              memcpy(__dest_00,pvVar6,(size_t)plVar9);
              plVar3 = plVar9;
            }
          }
        }
      }
      lVar10 = lVar10 + 1;
      puVar8[-2] = __n_00;
      puVar8[-1] = __n;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 9;
      *puVar8 = __dest;
      puVar8[1] = sVar7;
      puVar8[-4] = local_70;
      puVar8[-3] = local_68;
      puVar8[2] = plVar3;
      puVar8[3] = __dest_00;
      puVar8[4] = plVar9;
      puVar8 = puVar8 + 9;
    } while (uVar4 != 0);
  }
  *plVar1 = lVar10;
  return;
}


// ===== 00778b84  <reqwest::async_impl::response::reqwest::async_impl::response::Response>::remote_addr =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::response::reqwest::async_impl::response::Response>::remote_addr */

void __rustcall
<reqwest::async_impl::response::reqwest::async_impl::response::Response>::remote_addr
          (undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long local_40;
  long lStack_38;
  
  plVar6 = *(long **)(param_2 + 0x60);
  if ((plVar6 != (long *)0x0) && (plVar6[3] != 0)) {
    lVar5 = 0;
    lVar1 = *plVar6;
    uVar2 = plVar6[1];
    uVar7 = uVar2 & 0xb4b4db6af6fd8324;
    uVar12 = *(undefined8 *)(lVar1 + uVar7);
    uVar13 = NEON_cmeq(uVar12,0x5a5a5a5a5a5a5a5a,1);
    uVar13 = uVar13 & 0x8080808080808080;
    while( true ) {
      for (; uVar13 == 0; uVar13 = uVar13 & 0x8080808080808080) {
        uVar12 = NEON_cmeq(uVar12,0xffffffffffffffff,1);
        bVar11 = NEON_umaxv(uVar12,1);
        if ((bVar11 & 1) != 0) goto LAB_00778ca8;
        lVar5 = lVar5 + 8;
        uVar7 = uVar7 + lVar5 & uVar2;
        uVar12 = *(undefined8 *)(lVar1 + uVar7);
        uVar13 = NEON_cmeq(uVar12,0x5a5a5a5a5a5a5a5a,1);
      }
      uVar3 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar8 = lVar1 + (uVar7 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar2) * -0x20
      ;
      if (*(long *)(lVar8 + -0x18) == -0x4b4b249509027cdc &&
          *(long *)(lVar8 + -0x20) == -0x7e96b72b2f9cc2f0) break;
      uVar13 = uVar13 - 1 & uVar13;
    }
    auVar14 = (**(code **)(*(long *)(lVar8 + -8) + 0x28))(*(undefined8 *)(lVar8 + -0x10));
    puVar4 = auVar14._0_8_;
    (**(code **)(auVar14._8_8_ + 0x18))(&local_40);
    if ((puVar4 != (undefined8 *)0x0) &&
       (lStack_38 == -0x4b4b249509027cdc && local_40 == -0x7e96b72b2f9cc2f0)) {
      uVar12 = *puVar4;
      uVar10 = puVar4[3];
      uVar9 = puVar4[2];
      param_1[1] = puVar4[1];
      *param_1 = uVar12;
      param_1[3] = uVar10;
      param_1[2] = uVar9;
      return;
    }
  }
LAB_00778ca8:
  *(undefined2 *)param_1 = 2;
  return;
}


// ===== 00778cc4  <reqwest::async_impl::response::reqwest::async_impl::response::Response>::bytes_stream =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::response::reqwest::async_impl::response::Response>::bytes_stream */

undefined1  [16] __rustcall
<reqwest::async_impl::response::reqwest::async_impl::response::Response>::bytes_stream(long param_1)

{
  undefined1 auVar1 [16];
  long *__ptr;
  void *__ptr_00;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
                    /* try { // try from 00778cdc to 00778cdf has its CatchHandler @ 00778d64 */
  FUN_007773e8();
  __ptr_00 = *(void **)(param_1 + 0x60);
  if (__ptr_00 != (void *)0x0) {
                    /* try { // try from 00778ce8 to 00778cef has its CatchHandler @ 00778d40 */
    FUN_007b3bec(__ptr_00);
    free(__ptr_00);
  }
  __ptr = *(long **)(param_1 + 0x80);
  if (*__ptr != 0) {
    free((void *)__ptr[1]);
  }
  free(__ptr);
  return auVar1;
}


// ===== 00778d88  <reqwest::async_impl::response::reqwest::async_impl::response::Response>::content_length =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::response::reqwest::async_impl::response::Response>::content_length */

undefined4 __rustcall
<reqwest::async_impl::response::reqwest::async_impl::response::Response>::content_length
          (long param_1)

{
  undefined4 uVar1;
  undefined4 local_28 [2];
  long local_20;
  long lStack_18;
  
  (**(code **)(*(long *)(param_1 + 0x78) + 0x28))(local_28,*(undefined8 *)(param_1 + 0x70));
  uVar1 = 0;
  if (lStack_18 == local_20) {
    uVar1 = local_28[0];
  }
  return uVar1;
}


// ===== 00778dc0  <reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status */

void __rustcall
<reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(ushort *)(param_2 + 0xd) - 400 < 200) {
    __ptr = (undefined8 *)param_2[0x10];
    uStack_68 = __ptr[5];
    local_70 = __ptr[4];
    uStack_58 = __ptr[7];
    uStack_60 = __ptr[6];
    uStack_48 = __ptr[9];
    local_50 = __ptr[8];
    local_40 = __ptr[10];
    uStack_88 = __ptr[1];
    local_90 = *__ptr;
    uStack_78 = __ptr[3];
    uStack_80 = __ptr[2];
                    /* try { // try from 00778e10 to 00778e17 has its CatchHandler @ 00778ea4 */
    uVar1 = FUN_00772af0(&local_90);
    *param_1 = 0xffffffffffffffff;
    param_1[1] = uVar1;
                    /* try { // try from 00778e20 to 00778e27 has its CatchHandler @ 00778e88 */
    FUN_007766ac(param_2);
    free(__ptr);
    return;
  }
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_1[0x10] = param_2[0x10];
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}


// ===== 00778ecc  <reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status_ref =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status_ref */

undefined1  [16] __rustcall
<reqwest::async_impl::response::reqwest::async_impl::response::Response>::error_for_status_ref
          (ulong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *__ptr;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar2 = *(ushort *)(param_1 + 0x68);
  if (199 < uVar2 - 400) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3 << 0x40;
  }
  lVar7 = *(long *)(param_1 + 0x80);
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  __ptr = (undefined8 *)FUN_004b25a4(0x58,8);
  if (__ptr != (undefined8 *)0x0) {
                    /* try { // try from 00778f0c to 00778f1b has its CatchHandler @ 00779000 */
    <alloc::string::String_as_core::clone::Clone>::clone(&local_90,lVar7);
    uVar1 = *(undefined4 *)(lVar7 + 0x3c);
    uVar9 = *(undefined8 *)(lVar7 + 0x48);
    uVar8 = *(undefined8 *)(lVar7 + 0x40);
    local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)(lVar7 + 0x50));
    uVar5 = *(undefined8 *)(lVar7 + 0x28);
    uVar6 = *(undefined8 *)(lVar7 + 0x18);
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    uStack_5c = (undefined4)*(undefined8 *)(lVar7 + 0x34);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x34) >> 0x20);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x2c) >> 0x20);
    __ptr[1] = uStack_88;
    *__ptr = local_90;
    __ptr[3] = uVar6;
    __ptr[2] = uStack_80;
    uStack_88 = __ptr[1];
    local_90 = *__ptr;
    local_78 = __ptr[3];
    uStack_80 = __ptr[2];
    __ptr[10] = local_40;
    __ptr[7] = CONCAT44(uVar1,uStack_58);
    __ptr[6] = CONCAT44(uStack_5c,uStack_60);
    __ptr[9] = uVar9;
    __ptr[8] = uVar8;
    __ptr[5] = uVar5;
    __ptr[4] = uVar4;
    uStack_48 = __ptr[9];
    local_50 = __ptr[8];
    uVar6 = __ptr[5];
    local_70 = __ptr[4];
    uStack_58 = (undefined4)__ptr[7];
    uStack_54 = (undefined4)((ulong)__ptr[7] >> 0x20);
    uStack_60 = (undefined4)__ptr[6];
    uStack_5c = (undefined4)((ulong)__ptr[6] >> 0x20);
    uStack_68 = (undefined2)uVar6;
    uStack_66 = (undefined2)((ulong)uVar6 >> 0x10);
    uStack_64 = (undefined4)((ulong)uVar6 >> 0x20);
                    /* try { // try from 00778f98 to 00778fa3 has its CatchHandler @ 00778ffc */
    uVar6 = FUN_00772af0(&local_90,(uint)uVar2);
    free(__ptr);
    auVar10._8_8_ = uVar6;
    auVar10._0_8_ = 1;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x58);
}


// ===== 0077901c  FUN_0077901c =====

void FUN_0077901c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_5c;
  
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  if (param_4 == 0) {
    if (param_6 == -1) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar1 = (undefined8 *)FUN_004b25a4(0x10,8);
      if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0077924c to 00779257 has its CatchHandler @ 0077925c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x10);
      }
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      ppuVar3 = &PTR_FUN_00ad8970;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar1 = (undefined8 *)FUN_004b25a4(0x98,8);
      if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0077922c to 00779237 has its CatchHandler @ 00779284 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x98);
      }
      puVar1[0x11] = uVar5;
      puVar1[0x10] = CONCAT44(uStack_5c,param_6);
      puVar1[0xd] = uStack_78;
      puVar1[0xc] = local_80;
      puVar1[0xf] = param_5;
      puVar1[0xe] = local_70;
      puVar1[0x12] = uVar6;
      ppuVar3 = &PTR_FUN_00ad89a0;
      puVar1[5] = uStack_b8;
      puVar1[4] = local_c0;
      puVar1[7] = uStack_a8;
      puVar1[6] = uStack_b0;
      puVar1[9] = uStack_98;
      puVar1[8] = local_a0;
      puVar1[0xb] = uStack_88;
      puVar1[10] = uStack_90;
      puVar1[1] = uStack_d8;
      *puVar1 = 2;
      puVar1[3] = uStack_c8;
      puVar1[2] = local_d0;
    }
  }
  else if (param_6 == -1) {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0x18,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0077923c to 00779247 has its CatchHandler @ 00779270 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x18);
    }
    puVar1[2] = param_4;
    ppuVar3 = &PTR_FUN_00ad89d0;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
  }
  else {
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar1 = (undefined8 *)FUN_004b25a4(0xa0,8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 0077921c to 00779227 has its CatchHandler @ 00779298 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0xa0);
    }
    ppuVar3 = &PTR_FUN_00ad8a00;
    puVar1[0xd] = uStack_78;
    puVar1[0xc] = local_80;
    puVar1[0xf] = param_5;
    puVar1[0xe] = local_70;
    puVar1[0x11] = uVar5;
    puVar1[0x10] = CONCAT44(uStack_5c,param_6);
    puVar1[0x13] = param_4;
    puVar1[0x12] = uVar6;
    puVar1[5] = uStack_b8;
    puVar1[4] = local_c0;
    puVar1[7] = uStack_a8;
    puVar1[6] = uStack_b0;
    puVar1[9] = uStack_98;
    puVar1[8] = local_a0;
    puVar1[0xb] = uStack_88;
    puVar1[10] = uStack_90;
    puVar1[1] = uStack_d8;
    *puVar1 = 2;
    puVar1[3] = uStack_c8;
    puVar1[2] = local_d0;
  }
  uVar9 = param_2[9];
  uVar5 = param_2[8];
  uVar16 = param_2[0xb];
  uVar13 = param_2[10];
  uVar22 = param_2[0xd];
  uVar19 = param_2[0xc];
  uVar10 = param_2[1];
  uVar6 = *param_2;
  uVar17 = param_2[3];
  uVar14 = param_2[2];
  uVar11 = param_2[5];
  uVar7 = param_2[4];
  uVar23 = param_2[7];
  uVar20 = param_2[6];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar2 = (undefined8 *)FUN_004b25a4(0x58,8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar12 = param_3[5];
    uVar8 = param_3[4];
    uVar18 = param_3[7];
    uVar15 = param_3[6];
    uVar21 = param_3[8];
    uVar4 = param_3[10];
    puVar2[9] = param_3[9];
    puVar2[8] = uVar21;
    puVar2[5] = uVar12;
    puVar2[4] = uVar8;
    puVar2[7] = uVar18;
    puVar2[6] = uVar15;
    uVar12 = param_3[1];
    uVar8 = *param_3;
    uVar18 = param_3[3];
    uVar15 = param_3[2];
    puVar2[10] = uVar4;
    puVar2[1] = uVar12;
    *puVar2 = uVar8;
    puVar2[3] = uVar18;
    puVar2[2] = uVar15;
    param_1[0xd] = uVar22;
    param_1[0xc] = uVar19;
    param_1[0xf] = ppuVar3;
    param_1[0xe] = puVar1;
    param_1[9] = uVar9;
    param_1[8] = uVar5;
    param_1[0xb] = uVar16;
    param_1[10] = uVar13;
    param_1[5] = uVar11;
    param_1[4] = uVar7;
    param_1[7] = uVar23;
    param_1[6] = uVar20;
    param_1[1] = uVar10;
    *param_1 = uVar6;
    param_1[3] = uVar17;
    param_1[2] = uVar14;
    param_1[0x10] = puVar2;
    return;
  }
                    /* try { // try from 0077920c to 00779217 has its CatchHandler @ 007792cc */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x58);
}


// ===== 007792f8  FUN_007792f8 =====

void FUN_007792f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uStack_cc;
  undefined8 uStack_b8;
  undefined8 uStack_98;
  
  plVar5 = *(long **)(param_3 + 400);
  if (plVar5 == (long *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x7793b0);
      (*pcVar3)();
    }
    uVar8 = *(undefined8 *)(param_3 + 0x198);
    uVar7 = *(undefined8 *)(param_3 + 400);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x80,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[9] = uStack_b8;
    puVar4[8] = param_2;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = uStack_98;
    puVar4[0xc] = 0;
    puVar4[0xf] = uVar8;
    puVar4[0xe] = uVar7;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_FUN_00ad8a78;
    puVar4[5] = param_5;
    puVar4[4] = param_3;
    puVar4[7] = param_1;
    puVar4[6] = (ulong)uStack_cc << 0x20;
    return;
  }
                    /* try { // try from 007793a0 to 007793ab has its CatchHandler @ 007793b0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x80);
}


// ===== 007793c8  FUN_007793c8 =====

void FUN_007793c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uStack_cc;
  undefined8 uStack_b8;
  undefined8 uStack_98;
  
  plVar5 = *(long **)(param_3 + 0x1f0);
  if (plVar5 == (long *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x779480);
      (*pcVar3)();
    }
    uVar8 = *(undefined8 *)(param_3 + 0x1f8);
    uVar7 = *(undefined8 *)(param_3 + 0x1f0);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar4 = (undefined8 *)FUN_004b25a4(0x80,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[9] = uStack_b8;
    puVar4[8] = param_2;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = uStack_98;
    puVar4[0xc] = 0;
    puVar4[0xf] = uVar8;
    puVar4[0xe] = uVar7;
    puVar4[1] = 0;
    *puVar4 = param_4;
    puVar4[3] = 0;
    puVar4[2] = &PTR_FUN_00ad8ac8;
    puVar4[5] = param_5;
    puVar4[4] = param_3;
    puVar4[7] = param_1;
    puVar4[6] = (ulong)uStack_cc << 0x20;
    return;
  }
                    /* try { // try from 00779470 to 0077947b has its CatchHandler @ 00779480 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(0x80,0x80);
}


// ===== 00779498  FUN_00779498 =====

void FUN_00779498(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_60 = 2;
                    /* try { // try from 007794c4 to 007794c7 has its CatchHandler @ 007795c8 */
    local_40 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 007794cc to 007794d3 has its CatchHandler @ 00779594 */
    FUN_00776ee8((long)param_1 + 0x30);
    *(undefined8 *)((long)param_1 + 0x38) = uStack_58;
    *(ulong *)((long)param_1 + 0x30) = CONCAT44(uStack_5c,local_60);
    *(undefined8 *)((long)param_1 + 0x48) = uStack_48;
    *(undefined8 *)((long)param_1 + 0x40) = uStack_50;
                    /* try { // try from 007794dc to 0077950b has its CatchHandler @ 0077961c */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_40);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              ((long)param_1 + 0x50);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                ((long)param_1 + 0x50,0);
    }
  }
  if (*(long *)((long)param_1 + 0x70) != 0) {
    local_38 = *(undefined8 *)((long)param_1 + 0x28);
                    /* try { // try from 00779534 to 0077953f has its CatchHandler @ 007795dc */
    (**(code **)(*(long *)((long)param_1 + 0x78) + 0x28))
              (*(long *)((long)param_1 + 0x70) +
               (*(long *)(*(long *)((long)param_1 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_68 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>as_tokio::runtime::task::Schedule>
          ::release((long)param_1 + 0x20,&local_68);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 00779568 to 0077956f has its CatchHandler @ 007795ac */
    FUN_00776d18(param_1);
    free(param_1);
  }
  return;
}


// ===== 00779678  FUN_00779678 =====

void FUN_00779678(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_complete
                    ();
  if ((uVar2 >> 3 & 1) == 0) {
    local_60 = 2;
                    /* try { // try from 007796a4 to 007796a7 has its CatchHandler @ 007797a8 */
    local_40 = <tokio::runtime::task::core::[2]::tokio::runtime::task::core::TaskIdGuard>::enter
                         (*(undefined8 *)((long)param_1 + 0x28));
                    /* try { // try from 007796ac to 007796b3 has its CatchHandler @ 00779774 */
    FUN_00776ee8((long)param_1 + 0x30);
    *(undefined8 *)((long)param_1 + 0x38) = uStack_58;
    *(ulong *)((long)param_1 + 0x30) = CONCAT44(uStack_5c,local_60);
    *(undefined8 *)((long)param_1 + 0x48) = uStack_48;
    *(undefined8 *)((long)param_1 + 0x40) = uStack_50;
                    /* try { // try from 007796bc to 007796eb has its CatchHandler @ 007797fc */
    <tokio::runtime::task::core::TaskIdGuard_as_core::ops::drop::Drop>::drop(&local_40);
  }
  else if ((uVar2 >> 4 & 1) != 0) {
    <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::wake_join
              ((long)param_1 + 0x50);
    uVar2 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::
            unset_waker_after_complete(param_1);
    if ((uVar2 >> 3 & 1) == 0) {
      <tokio::runtime::task::core::[6]::tokio::runtime::task::core::Trailer>::set_waker
                ((long)param_1 + 0x50,0);
    }
  }
  if (*(long *)((long)param_1 + 0x70) != 0) {
    local_38 = *(undefined8 *)((long)param_1 + 0x28);
                    /* try { // try from 00779714 to 0077971f has its CatchHandler @ 007797bc */
    (**(code **)(*(long *)((long)param_1 + 0x78) + 0x28))
              (*(long *)((long)param_1 + 0x70) +
               (*(long *)(*(long *)((long)param_1 + 0x78) + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
               &local_38);
  }
  local_68 = param_1;
  lVar3 = <alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>as_tokio::runtime::task::Schedule>
          ::release((long)param_1 + 0x20,&local_68);
  uVar1 = 1;
  if (lVar3 != 0) {
    uVar1 = 2;
  }
  uVar4 = <tokio::runtime::task::state::tokio::runtime::task::state::State>::transition_to_terminal
                    (param_1,uVar1);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 00779748 to 0077974f has its CatchHandler @ 0077978c */
    FUN_00776e00(param_1);
    free(param_1);
  }
  return;
}


// ===== 00779858  FUN_00779858 =====

void FUN_00779858(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  char local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  <bytes::bytes::bytes::bytes::Bytes>::copy_from_slice
            (auStack_88,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  <http::uri::http::uri::Uri>::from_shared(&local_e0,auStack_88);
  if (local_e0 != -1) {
    param_1[9] = uStack_98;
    param_1[8] = local_a0;
    param_1[5] = uStack_b8;
    param_1[4] = local_c0;
    param_1[7] = uStack_a8;
    param_1[6] = uStack_b0;
    param_1[10] = local_90;
    param_1[1] = uStack_d8;
    *param_1 = CONCAT71(uStack_df,local_e0);
    param_1[3] = uStack_c8;
    param_1[2] = uStack_d0;
    return;
  }
  <alloc::string::String_as_core::clone::Clone>::clone(auStack_88,param_2);
  local_38 = *(undefined1 *)(param_2 + 0x50);
  local_60 = *(undefined2 *)(param_2 + 0x28);
  local_4c = *(undefined4 *)(param_2 + 0x3c);
  uStack_40 = *(undefined8 *)(param_2 + 0x48);
  local_48 = *(undefined8 *)(param_2 + 0x40);
  local_5e = *(undefined2 *)(param_2 + 0x2a);
  local_70 = *(undefined4 *)(param_2 + 0x18);
  uStack_6c = *(undefined4 *)(param_2 + 0x1c);
  uStack_54 = *(undefined8 *)(param_2 + 0x34);
  local_5c = *(undefined8 *)(param_2 + 0x2c);
  local_68 = *(undefined4 *)(param_2 + 0x20);
  uStack_64 = *(undefined4 *)(param_2 + 0x24);
  uVar1 = FUN_00772cd4(auStack_88);
  param_1[1] = uVar1;
  *(undefined1 *)param_1 = 0xff;
  return;
}


// ===== 00779948  <http::response::Builder_as_reqwest::response::ResponseBuilderExt>::url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::response::Builder as reqwest::response::ResponseBuilderExt>::url */

void __rustcall
<http::response::Builder_as_reqwest::response::ResponseBuilderExt>::url
          (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_f8;
  long local_f0;
  long local_e8;
  void *local_e0;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  
  lStack_178 = param_2[10];
  local_180 = param_2[9];
  lStack_168 = param_2[0xc];
  local_170 = param_2[0xb];
  local_160 = param_2[0xd];
  lStack_188 = param_2[8];
  local_190 = param_2[7];
  lStack_1b8 = param_2[2];
  local_1c0 = param_2[1];
  lStack_1a8 = param_2[4];
  local_1b0 = param_2[3];
  lVar1 = *param_2;
  lStack_198 = param_2[6];
  local_1a0 = param_2[5];
  if (lVar1 == -1) {
    if (*param_3 != 0) {
      free((void *)param_3[1]);
    }
    lVar1 = -1;
  }
  else {
    lStack_188 = param_2[8];
    local_190 = param_2[7];
    lStack_178 = param_2[10];
    local_180 = param_2[9];
    lStack_f8 = param_2[0xc];
    local_170 = param_2[0xb];
    local_f0 = param_2[0xd];
    lStack_1b8 = param_2[2];
    local_1c0 = param_2[1];
    lStack_1a8 = param_2[4];
    local_1b0 = param_2[3];
    lStack_198 = param_2[6];
    local_1a0 = param_2[5];
    lStack_68 = param_3[5];
    local_70 = param_3[4];
    lStack_58 = param_3[7];
    lStack_60 = param_3[6];
    lStack_48 = param_3[9];
    local_50 = param_3[8];
    local_40 = param_3[10];
    lStack_88 = param_3[1];
    local_90 = *param_3;
    lStack_78 = param_3[3];
    lStack_80 = param_3[2];
                    /* try { // try from 007799f8 to 00779a07 has its CatchHandler @ 00779abc */
    FUN_007c8e7c(&local_e8,&lStack_f8,&local_90);
    if ((local_e8 != -1) && (local_e8 != 0)) {
      free(local_e0);
    }
    lStack_168 = lStack_f8;
    local_160 = local_f0;
  }
  *param_1 = lVar1;
  param_1[0xd] = local_160;
  param_1[8] = lStack_188;
  param_1[7] = local_190;
  param_1[10] = lStack_178;
  param_1[9] = local_180;
  param_1[0xc] = lStack_168;
  param_1[0xb] = local_170;
  param_1[2] = lStack_1b8;
  param_1[1] = local_1c0;
  param_1[4] = lStack_1a8;
  param_1[3] = local_1b0;
  param_1[6] = lStack_198;
  param_1[5] = local_1a0;
  return;
}


// ===== 00779ad4  FUN_00779ad4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00779ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0029f920;
  param_1[1] = _UNK_0029f928;
  *param_1 = uVar1;
  return;
}


// ===== 00779ae8  <reqwest::async_impl::body::Body_as_core::convert::From<reqwest::async_impl::response::Response>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::body::Body as
   core::convert::From<reqwest::async_impl::response::Response>>::from */

void __rustcall
<reqwest::async_impl::body::Body_as_core::convert::From<reqwest::async_impl::response::Response>>::
from(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *__ptr;
  void *__ptr_00;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
                    /* try { // try from 00779b0c to 00779b0f has its CatchHandler @ 00779bcc */
  FUN_007773e8();
  __ptr_00 = *(void **)(param_2 + 0x60);
  if (__ptr_00 != (void *)0x0) {
                    /* try { // try from 00779b18 to 00779b1f has its CatchHandler @ 00779ba8 */
    FUN_007b3bec(__ptr_00);
    free(__ptr_00);
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar3 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar3 != (undefined8 *)0x0) {
    __ptr = *(long **)(param_2 + 0x80);
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    *param_1 = 0;
    param_1[1] = puVar3;
    lVar4 = *__ptr;
    param_1[2] = &PTR_FUN_00ad8b18;
    if (lVar4 != 0) {
      free((void *)__ptr[1]);
    }
    free(__ptr);
    return;
  }
                    /* try { // try from 00779b98 to 00779ba3 has its CatchHandler @ 00779be4 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00779c04  FUN_00779c04 =====

void FUN_00779c04(void)

{
  return;
}


// ===== 00779c10  FUN_00779c10 =====

void FUN_00779c10(void)

{
  return;
}


// ===== 00779c1c  FUN_00779c1c =====

void FUN_00779c1c(void)

{
  return;
}


// ===== 00779c28  FUN_00779c28 =====

void FUN_00779c28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  
  <alloc::string::String_as_core::clone::Clone>::clone(&local_78);
  local_28 = *(undefined1 *)(param_1 + 0x50);
  uStack_50 = *(undefined2 *)(param_1 + 0x28);
  local_3c = *(undefined4 *)(param_1 + 0x3c);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uStack_4e = *(undefined2 *)(param_1 + 0x2a);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined4 *)(param_1 + 0x18);
  uStack_5c = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  local_58 = *(undefined4 *)(param_1 + 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_44 = (undefined4)*(undefined8 *)(param_1 + 0x34);
  uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  uStack_4c = (undefined4)*(undefined8 *)(param_1 + 0x2c);
  uStack_48 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
  uVar2 = CONCAT44(local_3c,uStack_40);
  uVar1 = CONCAT44(uStack_44,uStack_48);
  uVar3 = CONCAT71(uStack_27,local_28);
  local_38 = uVar8;
  uStack_30 = uVar9;
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar7 = (undefined8 *)FUN_004b25a4(0x58,8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = local_78;
    puVar7[1] = uStack_70;
    puVar7[5] = uVar5;
    puVar7[4] = uVar4;
    puVar7[7] = uVar2;
    puVar7[6] = uVar1;
    puVar7[10] = uVar3;
    puVar7[9] = uVar9;
    puVar7[8] = uVar8;
    puVar7[3] = uVar6;
    puVar7[2] = local_68;
    return;
  }
                    /* try { // try from 00779cfc to 00779d07 has its CatchHandler @ 00779d0c */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x58);
}


// ===== 00779d2c  <http::response::Response<reqwest::async_impl::body::Body>as_core::convert::From<reqwest::async_impl::response::Response>>::from =====

/* WARNING: Unknown calling convention: __rustcall */
/* <http::response::Response<reqwest::async_impl::body::Body> as
   core::convert::From<reqwest::async_impl::response::Response>>::from */

void __rustcall
<http::response::Response<reqwest::async_impl::body::Body>as_core::convert::From<reqwest::async_impl::response::Response>>
::from(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *__ptr;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = param_2[0xe];
  uVar6 = param_2[0xf];
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  puVar1 = (undefined8 *)FUN_004b25a4(0x10,8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_2[9];
    uVar3 = param_2[8];
    uVar8 = param_2[0xb];
    uVar7 = param_2[10];
    uVar10 = param_2[0xd];
    uVar9 = param_2[0xc];
    *puVar1 = uVar4;
    puVar1[1] = uVar6;
    param_1[0xe] = 0;
    param_1[0xf] = puVar1;
    param_1[9] = uVar5;
    param_1[8] = uVar3;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
    uVar6 = param_2[1];
    uVar4 = *param_2;
    uVar5 = param_2[3];
    uVar3 = param_2[2];
    param_1[0xd] = uVar10;
    param_1[0xc] = uVar9;
    param_1[0x10] = &PTR_FUN_00ad8b18;
    param_1[1] = uVar6;
    *param_1 = uVar4;
    param_1[3] = uVar5;
    param_1[2] = uVar3;
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar6 = param_2[6];
    __ptr = (long *)param_2[0x10];
    lVar2 = *__ptr;
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar6;
    if (lVar2 != 0) {
      free((void *)__ptr[1]);
    }
    free(__ptr);
    return;
  }
                    /* try { // try from 00779dd0 to 00779ddb has its CatchHandler @ 00779de0 */
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,0x10);
}


// ===== 00779e0c  <&str_as_reqwest::into_url::IntoUrlSealed>::into_url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <&str as reqwest::into_url::IntoUrlSealed>::into_url */

void __rustcall
<&str_as_reqwest::into_url::IntoUrlSealed>::into_url
          (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 extraout_x1;
  long local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long local_a0 [2];
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 local_28;
  
  local_28 = 0;
  local_48[0] = 0;
  local_38 = 0;
  <url::url::ParseOptions>::parse(&local_f8,local_48,param_2,param_3);
  if (local_f8 == -1) {
    lVar1 = FUN_0076e118(0,extraout_x1,local_f0);
    *param_1 = -1;
    param_1[1] = lVar1;
    return;
  }
  lStack_88 = lStack_e0;
  local_90 = local_e8;
  lStack_78 = lStack_d0;
  local_80 = local_d8;
  local_50 = local_a8;
  lStack_68 = lStack_c0;
  local_70 = local_c8;
  lStack_58 = lStack_b0;
  local_60 = local_b8;
  lVar1 = local_60;
  local_60._0_1_ = (char)local_b8;
  local_a0[0] = local_f8;
  if ((char)local_60 != '\0') {
    param_1[5] = lStack_d0;
    param_1[4] = local_d8;
    param_1[7] = lStack_c0;
    param_1[6] = local_c8;
    param_1[9] = lStack_b0;
    param_1[8] = local_b8;
    param_1[10] = local_a8;
    param_1[1] = CONCAT71(uStack_ef,local_f0);
    *param_1 = local_f8;
    param_1[3] = lStack_e0;
    param_1[2] = local_e8;
    return;
  }
  local_60 = lVar1;
  lVar1 = FUN_00772be0(local_a0);
  *param_1 = -1;
  param_1[1] = lVar1;
  return;
}


// ===== 00779ef4  <reqwest::async_impl::body::Body_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::body::Body as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::body::Body_as_core::fmt::Debug>::fmt(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_20,param_2,&DAT_002bd114,4);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_20);
  return;
}


// ===== 00779f2c  <reqwest::async_impl::body::Body_as_http_body::Body>::poll_frame =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::body::Body as http_body::Body>::poll_frame */

void __rustcall
<reqwest::async_impl::body::Body_as_http_body::Body>::poll_frame(long *param_1,long *param_2)

{
  long extraout_x8;
  long local_150;
  long *local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long *plStack_48;
  long lStack_40;
  undefined2 local_38;
  undefined6 uStack_36;
  
  if (*param_2 == 0) {
    (**(code **)(param_2[2] + 0x18))(&local_150,param_2[1]);
    if (local_150 == 3) {
      *param_1 = 3;
      return;
    }
    if (local_150 == -2) {
      plStack_48 = local_148;
      lStack_40 = lStack_140;
      local_38 = 4;
      local_a0 = -1;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      local_148 = (long *)FUN_004b25a4(0x70,8);
      if (local_148 == (long *)0x0) {
                    /* try { // try from 0077a0b4 to 0077a0bf has its CatchHandler @ 0077a0c4 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x70);
      }
      local_148[7] = lStack_68;
      local_148[6] = local_70;
      local_148[9] = lStack_58;
      local_148[8] = lStack_60;
      local_148[0xb] = (long)plStack_48;
      local_148[10] = local_50;
      local_148[0xd] = CONCAT62(uStack_36,local_38);
      local_148[0xc] = lStack_40;
      local_148[1] = lStack_98;
      *local_148 = local_a0;
      local_148[3] = lStack_88;
      local_148[2] = local_90;
      local_148[5] = lStack_78;
      local_148[4] = lStack_80;
      lStack_140 = extraout_x8;
    }
    else if (local_150 != -3) {
      lStack_c8 = lStack_110;
      local_d0 = local_118;
      lStack_b8 = lStack_100;
      local_c0 = local_108;
      local_b0 = local_f8;
      lStack_e8 = lStack_130;
      local_f0 = local_138;
      lStack_d8 = lStack_120;
      local_e0 = local_128;
    }
    param_1[2] = lStack_140;
    *param_1 = local_150;
    param_1[1] = (long)local_148;
    param_1[6] = lStack_d8;
    param_1[5] = local_e0;
    param_1[8] = lStack_c8;
    param_1[7] = local_d0;
    param_1[10] = lStack_b8;
    param_1[9] = local_c0;
    param_1[0xb] = local_b0;
    param_1[4] = lStack_e8;
    param_1[3] = local_f0;
    return;
  }
  <bytes::bytes::bytes::bytes::Bytes>::split_off(&local_a0,param_2,0);
  if (local_90 != 0) {
    *param_1 = -1;
    param_1[2] = lStack_98;
    param_1[1] = local_a0;
    param_1[4] = lStack_88;
    param_1[3] = local_90;
    return;
  }
  *param_1 = -3;
  (**(code **)(local_a0 + 0x20))(&lStack_88,lStack_98,0);
  return;
}


// ===== 0077a0dc  <reqwest::async_impl::body::Body_as_http_body::Body>::is_end_stream =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::body::Body as http_body::Body>::is_end_stream */

ulong __rustcall <reqwest::async_impl::body::Body_as_http_body::Body>::is_end_stream(long *param_1)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return (ulong)(param_1[2] == 0);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1[2] + 0x20))(param_1[1]);
  return uVar1;
}


// ===== 0077a100  <reqwest::async_impl::body::Body_as_http_body::Body>::size_hint =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::body::Body as http_body::Body>::size_hint */

void __rustcall
<reqwest::async_impl::body::Body_as_http_body::Body>::size_hint(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 != 0) {
    lVar1 = param_2[2];
    *param_1 = 1;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[2] + 0x28))(param_2[1]);
  return;
}


// ===== 0077a128  FUN_0077a128 =====

void FUN_0077a128(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long local_150;
  undefined8 *local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined *puStack_40;
  undefined2 local_38;
  undefined6 uStack_36;
  
  iVar1 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll
                    (*(undefined8 *)(param_2 + 0x98));
  if (iVar1 == 0) {
    local_38 = 4;
    puStack_48 = (undefined8 *)0x1;
    puStack_40 = &DAT_00adeb08;
    local_a0 = 0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
    if (puVar2 != (undefined8 *)0x0) {
      *param_1 = -2;
      param_1[1] = (long)puVar2;
      puVar2[7] = uStack_68;
      puVar2[6] = local_70;
      puVar2[9] = uStack_58;
      puVar2[8] = uStack_60;
      puVar2[0xb] = puStack_48;
      puVar2[10] = local_50;
      puVar2[0xd] = CONCAT62(uStack_36,local_38);
      puVar2[0xc] = puStack_40;
      puVar2[1] = uStack_98;
      *puVar2 = local_a0;
      puVar2[3] = uStack_88;
      puVar2[2] = local_90;
      puVar2[5] = uStack_78;
      puVar2[4] = uStack_80;
      return;
    }
                    /* try { // try from 0077a2bc to 0077a2c7 has its CatchHandler @ 0077a2f0 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x70);
  }
  FUN_00792eb0(&local_150,param_2,param_3);
  if (local_150 == 3) {
    *param_1 = 3;
    return;
  }
  if (local_150 == -2) {
    puStack_48 = local_148;
    puStack_40 = (undefined *)lStack_140;
    local_38 = 4;
    local_a0 = 0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_148 = (undefined8 *)FUN_004b25a4(0x70,8);
    if (local_148 == (undefined8 *)0x0) {
                    /* try { // try from 0077a2cc to 0077a2d7 has its CatchHandler @ 0077a2dc */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    local_148[7] = uStack_68;
    local_148[6] = local_70;
    local_148[9] = uStack_58;
    local_148[8] = uStack_60;
    local_148[0xb] = puStack_48;
    local_148[10] = local_50;
    local_148[0xd] = CONCAT62(uStack_36,local_38);
    local_148[0xc] = puStack_40;
    local_148[1] = uStack_98;
    *local_148 = local_a0;
    local_148[3] = uStack_88;
    local_148[2] = local_90;
    local_148[5] = uStack_78;
    local_148[4] = uStack_80;
    lStack_140 = extraout_x8;
  }
  else if (local_150 != -3) {
    lStack_c8 = lStack_110;
    local_d0 = local_118;
    lStack_b8 = lStack_100;
    local_c0 = local_108;
    local_b0 = local_f8;
    lStack_e8 = lStack_130;
    local_f0 = local_138;
    lStack_d8 = lStack_120;
    local_e0 = local_128;
  }
  param_1[2] = lStack_140;
  *param_1 = local_150;
  param_1[1] = (long)local_148;
  param_1[6] = lStack_d8;
  param_1[5] = local_e0;
  param_1[8] = lStack_c8;
  param_1[7] = local_d0;
  param_1[10] = lStack_b8;
  param_1[9] = local_c0;
  param_1[0xb] = local_b0;
  param_1[4] = lStack_e8;
  param_1[3] = local_f0;
  return;
}


// ===== 0077a308  FUN_0077a308 =====

void FUN_0077a308(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long local_150;
  undefined8 *local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined *puStack_40;
  undefined2 local_38;
  undefined6 uStack_36;
  
  iVar1 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2[2]);
  if (iVar1 == 0) {
    local_38 = 4;
    puStack_48 = (undefined8 *)0x1;
    puStack_40 = &DAT_00adeb08;
    local_a0 = 0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
    if (puVar2 != (undefined8 *)0x0) {
      *param_1 = -2;
      param_1[1] = (long)puVar2;
      puVar2[7] = uStack_68;
      puVar2[6] = local_70;
      puVar2[9] = uStack_58;
      puVar2[8] = uStack_60;
      puVar2[0xb] = puStack_48;
      puVar2[10] = local_50;
      puVar2[0xd] = CONCAT62(uStack_36,local_38);
      puVar2[0xc] = puStack_40;
      puVar2[1] = uStack_98;
      *puVar2 = local_a0;
      puVar2[3] = uStack_88;
      puVar2[2] = local_90;
      puVar2[5] = uStack_78;
      puVar2[4] = uStack_80;
      return;
    }
                    /* try { // try from 0077a4a0 to 0077a4ab has its CatchHandler @ 0077a4d4 */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x70);
  }
  (**(code **)(param_2[1] + 0x18))(&local_150,*param_2,param_3);
  if (local_150 == 3) {
    *param_1 = 3;
    return;
  }
  if (local_150 == -2) {
    puStack_48 = local_148;
    puStack_40 = (undefined *)lStack_140;
    local_38 = 4;
    local_a0 = 0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_148 = (undefined8 *)FUN_004b25a4(0x70,8);
    if (local_148 == (undefined8 *)0x0) {
                    /* try { // try from 0077a4b0 to 0077a4bb has its CatchHandler @ 0077a4c0 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x70);
    }
    local_148[7] = uStack_68;
    local_148[6] = local_70;
    local_148[9] = uStack_58;
    local_148[8] = uStack_60;
    local_148[0xb] = puStack_48;
    local_148[10] = local_50;
    local_148[0xd] = CONCAT62(uStack_36,local_38);
    local_148[0xc] = puStack_40;
    local_148[1] = uStack_98;
    *local_148 = local_a0;
    local_148[3] = uStack_88;
    local_148[2] = local_90;
    local_148[5] = uStack_78;
    local_148[4] = uStack_80;
    lStack_140 = extraout_x8;
  }
  else if (local_150 != -3) {
    lStack_c8 = lStack_110;
    local_d0 = local_118;
    lStack_b8 = lStack_100;
    local_c0 = local_108;
    local_b0 = local_f8;
    lStack_e8 = lStack_130;
    local_f0 = local_138;
    lStack_d8 = lStack_120;
    local_e0 = local_128;
  }
  param_1[2] = lStack_140;
  *param_1 = local_150;
  param_1[1] = (long)local_148;
  param_1[6] = lStack_d8;
  param_1[5] = local_e0;
  param_1[8] = lStack_c8;
  param_1[7] = local_d0;
  param_1[10] = lStack_b8;
  param_1[9] = local_c0;
  param_1[0xb] = local_b0;
  param_1[4] = lStack_e8;
  param_1[3] = local_f0;
  return;
}


// ===== 0077a4ec  FUN_0077a4ec =====

void FUN_0077a4ec(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  long lStack_180;
  long local_178;
  long local_170;
  long *plStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long lStack_120;
  long local_118;
  long local_110;
  long *local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long *plStack_58;
  undefined *puStack_50;
  undefined2 local_48;
  undefined6 uStack_46;
  
  if (*param_2 == 2) {
    tokio::time::sleep::sleep
              (&local_1e8,param_2[0xf],(int)param_2[0x10],
               &PTR_s__root__cargo_registry_src_index__00ad8ba8);
    if (*param_2 != 2) {
                    /* try { // try from 0077a540 to 0077a547 has its CatchHandler @ 0077a7b0 */
      FUN_007772cc(param_2);
    }
    param_2[1] = lStack_1e0;
    *param_2 = local_1e8;
    param_2[3] = lStack_1d0;
    param_2[2] = local_1d8;
    param_2[0xe] = local_178;
    param_2[9] = lStack_1a0;
    param_2[8] = local_1a8;
    param_2[0xb] = lStack_190;
    param_2[10] = local_198;
    param_2[0xd] = lStack_180;
    param_2[0xc] = local_188;
    param_2[5] = lStack_1c0;
    param_2[4] = local_1c8;
    param_2[7] = lStack_1b0;
    param_2[6] = local_1b8;
    if (*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
      core::option::unwrap_failed(&PTR_s__root__cargo_registry_src_index__00ad8bc0);
    }
  }
  iVar1 = <tokio::time::sleep::Sleep_as_core::future::future::Future>::poll(param_2,param_3);
  if (iVar1 == 0) {
    local_48 = 4;
    plStack_58 = (long *)0x1;
    puStack_50 = &DAT_00adeb08;
    local_b0 = 0xffffffffffffffff;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puVar2 = (undefined8 *)FUN_004b25a4(0x70,8);
    if (puVar2 != (undefined8 *)0x0) {
      *param_1 = -2;
      param_1[1] = (long)puVar2;
      puVar2[7] = lStack_78;
      puVar2[6] = local_80;
      puVar2[9] = lStack_68;
      puVar2[8] = local_70;
      puVar2[0xb] = plStack_58;
      puVar2[10] = local_60;
      puVar2[0xd] = CONCAT62(uStack_46,local_48);
      puVar2[0xc] = puStack_50;
      puVar2[1] = lStack_a8;
      *puVar2 = local_b0;
      puVar2[3] = lStack_98;
      puVar2[2] = local_a0;
      puVar2[5] = lStack_88;
      puVar2[4] = local_90;
      return;
    }
                    /* try { // try from 0077a768 to 0077a773 has its CatchHandler @ 0077a7fc */
                    /* WARNING: Subroutine does not return */
    alloc::alloc::handle_alloc_error(8,0x70);
  }
  (**(code **)(param_2[0x12] + 0x18))(&local_110,param_2[0x11],param_3);
  if (local_110 != 3) {
    if (local_110 == -3) {
      local_170 = -3;
      lVar3 = *param_2;
    }
    else {
      if (local_110 == -2) {
        plStack_58 = local_108;
        puStack_50 = (undefined *)lStack_100;
        local_48 = 4;
        local_b0 = -1;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        local_108 = (long *)FUN_004b25a4(0x70,8);
        if (local_108 == (long *)0x0) {
                    /* try { // try from 0077a784 to 0077a78f has its CatchHandler @ 0077a7e8 */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x70);
        }
        local_108[7] = lStack_78;
        local_108[6] = local_80;
        local_108[9] = lStack_68;
        local_108[8] = local_70;
        local_108[0xb] = (long)plStack_58;
        local_108[10] = local_60;
        local_108[0xd] = CONCAT62(uStack_46,local_48);
        local_108[0xc] = (long)puStack_50;
        local_108[1] = lStack_a8;
        *local_108 = local_b0;
        local_108[3] = lStack_98;
        local_108[2] = local_a0;
        local_108[5] = lStack_88;
        local_108[4] = local_90;
        lStack_100 = extraout_x8;
      }
      else {
        lStack_88 = lStack_d0;
        local_90 = local_d8;
        lStack_78 = lStack_c0;
        local_80 = local_c8;
        local_70 = local_b8;
        lStack_a8 = lStack_f0;
        local_b0 = local_f8;
        lStack_98 = lStack_e0;
        local_a0 = local_e8;
      }
      lVar3 = *param_2;
      plStack_168 = local_108;
      local_160 = lStack_100;
      local_170 = local_110;
      lStack_140 = lStack_98;
      lStack_148 = local_a0;
      local_130 = lStack_88;
      lStack_138 = local_90;
      lStack_120 = lStack_78;
      lStack_128 = local_80;
      local_118 = local_70;
      local_150 = lStack_a8;
      lStack_158 = local_b0;
    }
    if (lVar3 != 2) {
                    /* try { // try from 0077a724 to 0077a72b has its CatchHandler @ 0077a794 */
      FUN_007772cc(param_2);
    }
    *param_2 = 2;
    param_1[5] = lStack_148;
    param_1[4] = local_150;
    param_1[7] = lStack_138;
    param_1[6] = lStack_140;
    param_1[1] = (long)plStack_168;
    *param_1 = local_170;
    param_1[3] = lStack_158;
    param_1[2] = local_160;
    param_1[9] = lStack_128;
    param_1[8] = local_130;
    param_1[0xb] = local_118;
    param_1[10] = lStack_120;
    return;
  }
  *param_1 = 3;
  return;
}


// ===== 0077a814  <reqwest::async_impl::response::Response_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::response::Response as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::response::Response_as_core::fmt::Debug>::fmt(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined2 local_4 [2];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_40,param_2,&DAT_002a11f0,8);
  local_30 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 8);
  uStack_28 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_40,"url",3,&local_30,&DAT_00ad8bf0);
  local_4[0] = *(undefined2 *)(param_1 + 0x68);
  uVar1 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar1,"status",6,local_4,&DAT_00ad8c10);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar1,"headers",7,param_1,&PTR_FUN_00ad8c30);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


// ===== 0077a8c4  FUN_0077a8c4 =====

void FUN_0077a8c4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 8);
    uVar1 = uVar1 / 0x18;
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0077a95c  FUN_0077a95c =====

void FUN_0077a95c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = ((ulong)(param_1[3] - param_1[1]) >> 3) * 0x4ec4ec4ec4ec4ec5; lVar2 != 0;
      lVar2 = lVar2 + -1) {
    if (*(long *)(lVar1 + 0x40) != 0) {
                    /* try { // try from 0077a9d8 to 0077a9df has its CatchHandler @ 0077aa24 */
      (**(code **)(*(long *)(lVar1 + 0x40) + 0x20))
                (lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    }
                    /* try { // try from 0077a9b4 to 0077a9bb has its CatchHandler @ 0077aa44 */
    (**(code **)(*(long *)(lVar1 + 0x18) + 0x20))
              (lVar1 + 0x30,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
    lVar1 = lVar1 + 0x68;
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0077aa8c  FUN_0077aa8c =====

void FUN_0077aa8c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = param_1[1];
  uVar3 = param_1[3] - lVar6;
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      lVar5 = uVar7 * 0x10;
      uVar7 = uVar7 + 1;
      plVar4 = *(long **)(lVar6 + lVar5);
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077aaec to 0077aaef has its CatchHandler @ 0077ab30 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow();
      }
    } while (uVar7 != uVar3 >> 4);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0077ab94  FUN_0077ab94 =====

void FUN_0077ab94(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    puVar2 = (undefined8 *)(param_1[1] + 8);
    uVar1 = uVar1 / 0x18;
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 3;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0077ac34  FUN_0077ac34 =====

void FUN_0077ac34(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3] - param_1[1];
  if (uVar1 != 0) {
    uVar1 = uVar1 >> 5;
    puVar2 = (undefined8 *)(param_1[1] + 0x10);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 4;
    } while (uVar1 != 0);
  }
  if (param_1[2] != 0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0077acbc  FUN_0077acbc =====

void FUN_0077acbc(undefined8 *param_1,long *param_2,long *param_3,long *param_4)

{
  ushort *puVar1;
  undefined2 *puVar2;
  void *__s2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  size_t __n;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 local_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  
                    /* try { // try from 0077acec to 0077acf3 has its CatchHandler @ 0077b0c4 */
  iVar7 = FUN_007c545c(param_2);
  if (iVar7 == 0) {
                    /* try { // try from 0077ad48 to 0077ad53 has its CatchHandler @ 0077b0c4 */
    uVar8 = FUN_007c4738(param_2,param_3);
    uVar4 = *(ushort *)(param_2 + 0xb);
    lVar14 = param_2[9];
    uVar9 = param_2[10];
    lVar15 = param_2[4];
    uVar10 = param_2[5];
    lVar11 = *param_3;
    __s2 = (void *)param_3[1];
    uVar13 = (ulong)(uVar4 & uVar8);
    uVar17 = 0;
    lVar6 = param_3[1];
    __n = param_3[2];
    do {
      if ((uVar9 <= uVar13) && (uVar13 = 0, uVar9 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar1 = (ushort *)(lVar14 + uVar13 * 4);
      uVar19 = (ulong)*puVar1;
      if (uVar19 == 0xffff) {
        lStack_a8 = param_3[1];
        local_b0 = *param_3;
        lStack_98 = param_3[3];
        lStack_a0 = param_3[2];
        local_70 = param_4[4];
        lStack_88 = param_4[1];
        local_90 = *param_4;
        lStack_78 = param_4[3];
        lStack_80 = param_4[2];
        iVar7 = FUN_007829ac(param_2,uVar8,&local_b0,&local_90);
        if (iVar7 != 0) {
LAB_0077afa0:
          uVar12 = 0xff;
          goto LAB_0077afa8;
        }
        if ((ulong)param_2[10] <= uVar13) {
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar13,param_2[10],&PTR_s__root__cargo_registry_src_index__00ad8c68);
        }
        puVar2 = (undefined2 *)(param_2[9] + uVar13 * 4);
        *puVar2 = (short)uVar10;
        puVar2[1] = (ushort)uVar8;
        goto LAB_0077af4c;
      }
      uVar5 = puVar1[1];
      if (((ulong)((int)uVar13 - (uint)(uVar5 & uVar4)) & (ulong)uVar4) < uVar17) {
        local_70 = param_4[4];
        lStack_a8 = param_3[1];
        local_b0 = *param_3;
        lStack_98 = param_3[3];
        lStack_a0 = param_3[2];
        lVar14 = *param_2;
        lStack_88 = param_4[1];
        local_90 = *param_4;
        lStack_78 = param_4[3];
        lStack_80 = param_4[2];
        uVar9 = FUN_007829ac(param_2,uVar8,&local_b0,&local_90);
        if ((uVar9 & 1) != 0) goto LAB_0077afa0;
        lVar15 = param_2[9];
        uVar19 = param_2[10];
        uVar9 = 0;
        uVar16 = (uint)uVar10 & 0xffff;
        while( true ) {
          uVar5 = (ushort)uVar8;
          uVar4 = (ushort)uVar16;
          if ((uVar19 <= uVar13) && (uVar13 = 0, uVar19 == 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          puVar1 = (ushort *)(lVar15 + uVar13 * 4);
          uVar16 = (uint)*puVar1;
          if (uVar16 == 0xffff) break;
          uVar8 = (uint)puVar1[1];
          *puVar1 = uVar4;
          uVar9 = uVar9 + 1;
          puVar1[1] = uVar5;
          uVar13 = uVar13 + 1;
        }
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        if ((0x7f < uVar9 || 0x1ff < uVar17 && lVar14 != 2) && (*param_2 == 0)) {
          *param_2 = 1;
        }
LAB_0077af4c:
        uVar12 = 2;
LAB_0077afa8:
        *(undefined1 *)(param_1 + 4) = uVar12;
        return;
      }
      if (uVar5 == (ushort)uVar8) {
        if (uVar10 <= uVar19) {
                    /* try { // try from 0077b058 to 0077b06b has its CatchHandler @ 0077b0c4 */
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (uVar19,uVar10,&PTR_s__root__cargo_registry_src_index__00ad8c50);
        }
        puVar18 = (uint *)(lVar15 + uVar19 * 0x68);
        if ((lVar11 == 0) != (*(long *)(puVar18 + 0x10) != 0)) {
          if (*(long *)(puVar18 + 0x10) == 0) {
            if ((char)puVar18[0x12] == (char)lVar6) goto LAB_0077ae54;
          }
          else if ((*(size_t *)(puVar18 + 0x14) == __n) &&
                  (iVar7 = memcmp(*(void **)(puVar18 + 0x12),__s2,__n), iVar7 == 0))
          goto LAB_0077ae54;
        }
      }
      uVar17 = uVar17 + 1;
      uVar13 = uVar13 + 1;
    } while( true );
  }
  lVar14 = *param_4;
  lVar15 = param_4[1];
  lVar11 = param_4[2];
  *(undefined1 *)(param_1 + 4) = 0xff;
                    /* try { // try from 0077ad0c to 0077ad13 has its CatchHandler @ 0077b0b8 */
  (**(code **)(lVar14 + 0x20))(param_4 + 3,lVar15,lVar11);
  if (*param_3 == 0) {
    return;
  }
  lVar14 = param_3[1];
  lVar11 = param_3[2];
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x20);
LAB_0077ad28:
                    /* WARNING: Could not recover jumptable at 0x0077ad44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3 + 3,lVar14,lVar11);
  return;
LAB_0077ae54:
  lStack_88 = param_4[1];
  local_90 = *param_4;
  lStack_78 = param_4[3];
  lStack_80 = param_4[2];
  local_70 = param_4[4];
  if ((*puVar18 & 1) != 0) {
                    /* try { // try from 0077ae78 to 0077ae7f has its CatchHandler @ 0077b094 */
    FUN_007c5b7c(param_2,*(undefined8 *)(puVar18 + 2));
    uVar10 = param_2[5];
  }
  if (uVar10 <= uVar19) {
                    /* try { // try from 0077b080 to 0077b08f has its CatchHandler @ 0077b094 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar19,uVar10,&PTR_s__root__cargo_registry_src_index__00adba78);
  }
  lVar14 = param_2[4] + uVar19 * 0x68;
  uVar3 = *(undefined4 *)(lVar14 + 0x3c);
  uVar23 = *(undefined8 *)(lVar14 + 0x20);
  uVar22 = *(undefined8 *)(lVar14 + 0x18);
  *(long *)(lVar14 + 0x20) = lStack_88;
  *(long *)(lVar14 + 0x18) = local_90;
  uVar21 = *(undefined8 *)(lVar14 + 0x30);
  uVar20 = *(undefined8 *)(lVar14 + 0x28);
  uVar12 = *(undefined1 *)(lVar14 + 0x38);
  *(long *)(lVar14 + 0x30) = lStack_78;
  *(long *)(lVar14 + 0x28) = lStack_80;
  *(long *)(lVar14 + 0x38) = local_70;
  lVar15 = *param_3;
  local_b8._0_3_ = (undefined3)*(undefined4 *)(lVar14 + 0x39);
  local_b8._3_1_ = (undefined1)uVar3;
  param_1[1] = uVar23;
  *param_1 = uVar22;
  param_1[3] = uVar21;
  param_1[2] = uVar20;
  *(undefined1 *)(param_1 + 4) = uVar12;
  *(undefined4 *)((long)param_1 + 0x21) = local_b8;
  *(undefined4 *)((long)param_1 + 0x24) = uVar3;
  if (lVar15 == 0) {
    return;
  }
  lVar14 = param_3[1];
  lVar11 = param_3[2];
  UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x20);
  goto LAB_0077ad28;
}


// ===== 0077b10c  FUN_0077b10c =====

void FUN_0077b10c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  void *__s2;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong unaff_x26;
  ulong uVar17;
  undefined1 auStack_d8 [64];
  void *local_98;
  ulong uStack_90;
  byte local_88;
  void *local_80;
  ulong uStack_78;
  ulong local_70;
  
  http::header::name::parse_hdr(&local_98,param_2,param_3,auStack_d8,"");
  if (local_88 == 0xff) {
    *param_1 = 2;
    return;
  }
  local_70 = (ulong)local_88;
  uVar15 = *(ulong *)(param_4 + 0x28);
  uStack_78 = uStack_90;
  local_80 = local_98;
  if (uVar15 == 0) {
    uVar12 = 0;
  }
  else {
    uVar7 = FUN_007c4934(param_4,&local_80);
    uVar10 = uStack_78;
    __s2 = local_80;
    uVar5 = *(ushort *)(param_4 + 0x58);
    uVar17 = (ulong)uVar5;
    lVar3 = *(long *)(param_4 + 0x48);
    uVar4 = *(ulong *)(param_4 + 0x50);
    lVar13 = *(long *)(param_4 + 0x20);
    unaff_x26 = (ulong)(uVar5 & uVar7);
    uVar16 = (uint)local_80;
    uVar1 = (ushort)uVar7;
    if (uStack_78 == 0) {
      if ((char)local_70 != '\x02') {
        uVar10 = 0;
        uVar12 = 1;
        do {
          if ((uVar4 <= unaff_x26) && (unaff_x26 = 0, uVar4 == 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          puVar2 = (ushort *)(lVar3 + unaff_x26 * 4);
          param_4 = (ulong)*puVar2;
          if ((param_4 == 0xffff) ||
             (uVar6 = puVar2[1], ((int)unaff_x26 - (uint)(uVar6 & uVar5) & uVar17) < uVar10))
          goto LAB_0077b2dc;
          if (uVar6 == uVar1) {
            if (uVar15 <= param_4) goto LAB_0077b434;
            lVar9 = lVar13 + param_4 * 0x68;
            if ((*(long *)(lVar9 + 0x40) != 0) && (*(long *)(lVar9 + 0x50) == 0)) goto LAB_0077b40c;
          }
          uVar10 = uVar10 + 1;
          unaff_x26 = unaff_x26 + 1;
        } while( true );
      }
      uVar10 = 0;
      uVar12 = 1;
      do {
        if ((uVar4 <= unaff_x26) && (unaff_x26 = 0, uVar4 == 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar2 = (ushort *)(lVar3 + unaff_x26 * 4);
        param_4 = (ulong)*puVar2;
        if ((param_4 == 0xffff) ||
           (uVar6 = puVar2[1], ((int)unaff_x26 - (uint)(uVar6 & uVar5) & uVar17) < uVar10))
        goto LAB_0077b2dc;
        if (uVar6 == uVar1) {
          if (uVar15 <= param_4) goto LAB_0077b434;
          lVar9 = lVar13 + param_4 * 0x68;
          if ((*(long *)(lVar9 + 0x40) == 0) && ((uint)*(byte *)(lVar9 + 0x48) == (uVar16 & 0xff)))
          goto LAB_0077b40c;
        }
        uVar10 = uVar10 + 1;
        unaff_x26 = unaff_x26 + 1;
      } while( true );
    }
    uVar14 = 0;
    while( true ) {
      uVar12 = 1;
      if ((uVar4 <= unaff_x26) && (unaff_x26 = 0, uVar4 == 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar2 = (ushort *)(lVar3 + unaff_x26 * 4);
      param_4 = (ulong)*puVar2;
      if ((param_4 == 0xffff) ||
         (uVar6 = puVar2[1], ((int)unaff_x26 - (uint)(uVar6 & uVar5) & uVar17) < uVar14)) break;
      if (uVar6 == uVar1) {
        if (uVar15 <= param_4) {
LAB_0077b434:
                    /* WARNING: Subroutine does not return */
          core::panicking::panic_bounds_check
                    (param_4,uVar15,&PTR_s__root__cargo_registry_src_index__00ad8c80);
        }
        lVar9 = lVar13 + param_4 * 0x68;
        iVar8 = (int)(local_70 & 0xff);
        if (*(long *)(lVar9 + 0x40) == 0) {
          if ((iVar8 == 2) && ((uint)*(byte *)(lVar9 + 0x48) == (uVar16 & 0xff))) goto LAB_0077b40c;
        }
        else if ((local_70 & 0xff) == 0) {
          if (*(ulong *)(lVar9 + 0x50) == uVar10) {
            uVar11 = 0;
            while (*(char *)(*(long *)(lVar9 + 0x48) + uVar11) == ""[*(byte *)((long)__s2 + uVar11)]
                  ) {
              uVar11 = uVar11 + 1;
              if (uVar10 == uVar11) goto LAB_0077b40c;
            }
            if (uVar10 <= uVar11) goto LAB_0077b40c;
          }
        }
        else if ((iVar8 != 2) && (*(ulong *)(lVar9 + 0x50) == uVar10)) {
          iVar8 = memcmp(*(void **)(lVar9 + 0x48),__s2,uVar10);
          uVar12 = 1;
          if (iVar8 == 0) goto LAB_0077b40c;
        }
      }
      uVar14 = uVar14 + 1;
      unaff_x26 = unaff_x26 + 1;
    }
    uVar12 = 0;
  }
LAB_0077b40c:
  *param_1 = uVar12;
  param_1[1] = unaff_x26;
  param_1[2] = param_4;
  return;
LAB_0077b2dc:
  uVar12 = 0;
  goto LAB_0077b40c;
}


// ===== 0077b448  FUN_0077b448 =====

void FUN_0077b448(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 0077b458 to 0077b45f has its CatchHandler @ 0077b484 */
    FUN_0077ddf0();
    free(param_1);
    return;
  }
  return;
}


// ===== 0077b4a0  FUN_0077b4a0 =====

void FUN_0077b4a0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0077c844();
    return;
  }
  return;
}


// ===== 0077b4b0  FUN_0077b4b0 =====

void FUN_0077b4b0(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      free((void *)param_1[1]);
    }
    __ptr = (void *)param_1[4];
    lVar1 = param_1[5];
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar2[-1] != 0) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 3;
      } while (lVar1 != 0);
    }
    if (param_1[3] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0077b554  FUN_0077b554 =====

void FUN_0077b554(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  if ((lVar1 == -1) || (lVar1 == -2)) {
    if (param_1[1] != 0) {
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar1 != -3) {
    if (lVar1 != 0) {
      free((void *)param_1[1]);
    }
    if (param_1[3] != 0) {
      free((void *)param_1[4]);
    }
    if ((param_1[10] != -1) && (param_1[10] != 0)) {
      free((void *)param_1[0xb]);
    }
    __ptr = (void *)param_1[8];
    lVar1 = param_1[9];
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if (param_1[7] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0077b658  FUN_0077b658 =====

void FUN_0077b658(char *param_1)

{
  if (*param_1 != -1) {
    FUN_0077d138();
    return;
  }
  FUN_0077c844(param_1 + 8);
  return;
}


// ===== 0077b670  FUN_0077b670 =====

void FUN_0077b670(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  FUN_0077b554();
  plVar3 = *(long **)(param_1 + 0x90);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077b6a4 to 0077b6a7 has its CatchHandler @ 0077b6e0 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x98);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow((undefined8 *)(param_1 + 0x98));
    return;
  }
  return;
}


// ===== 0077b714  FUN_0077b714 =====

void FUN_0077b714(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
                    /* try { // try from 0077b724 to 0077b727 has its CatchHandler @ 0077b7a8 */
  FUN_0077d224();
  if (*(long *)(param_1 + 0xe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0xe0) + 0x20))
              (param_1 + 0xf8,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
    return;
  }
  __ptr = *(void **)(param_1 + 0xe8);
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0077b754 to 0077b75b has its CatchHandler @ 0077b784 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077b7c0  FUN_0077b7c0 =====

void FUN_0077b7c0(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *pvVar3;
  
                    /* try { // try from 0077b7d0 to 0077b7d3 has its CatchHandler @ 0077b870 */
  FUN_0077df7c();
  pvVar3 = *(void **)(param_1 + 0x60);
  if (pvVar3 != (void *)0x0) {
                    /* try { // try from 0077b7dc to 0077b7e3 has its CatchHandler @ 0077b854 */
    FUN_007b3bec(pvVar3);
    free(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x70);
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0077b800 to 0077b807 has its CatchHandler @ 0077b830 */
    (*pcVar2)(pvVar3);
  }
  if (puVar1[1] != 0) {
    free(pvVar3);
    return;
  }
  return;
}


// ===== 0077b898  FUN_0077b898 =====

void FUN_0077b898(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077b918  FUN_0077b918 =====

void FUN_0077b918(long *param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0077b954 to 0077b957 has its CatchHandler @ 0077b9a0 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077b9f4  FUN_0077b9f4 =====

void FUN_0077b9f4(long *param_1)

{
                    /* try { // try from 0077ba04 to 0077ba07 has its CatchHandler @ 0077ba38 */
  FUN_0078aa8c();
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0077ba60  FUN_0077ba60 =====

void FUN_0077ba60(long *param_1)

{
  void *__ptr;
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar6 = 0;
    do {
      lVar5 = lVar6 * 0x10;
      lVar6 = lVar6 + 1;
      plVar4 = *(long **)((long)__ptr + lVar5);
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077bab4 to 0077bab7 has its CatchHandler @ 0077baf8 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow();
      }
    } while (lVar6 != lVar1);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077bb5c  FUN_0077bb5c =====

void FUN_0077bb5c(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077bbe4  FUN_0077bbe4 =====

void FUN_0077bbe4(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x10);
    do {
      if (puVar2[-1] != 0) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 4;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077bc60  FUN_0077bc60 =====

void FUN_0077bc60(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077bce8  FUN_0077bce8 =====

void FUN_0077bce8(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0077bd18 to 0077bd1b has its CatchHandler @ 0077bd64 */
    FUN_007864bc(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x88);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077bdac  FUN_0077bdac =====

void FUN_0077bdac(long *param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = (void *)param_1[1];
  lVar2 = param_1[2] + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0077bddc to 0077bddf has its CatchHandler @ 0077be28 */
    FUN_007868b4(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x98);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077be70  FUN_0077be70 =====

void FUN_0077be70(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
    return;
  }
  return;
}


// ===== 0077be94  FUN_0077be94 =====

void FUN_0077be94(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow();
    return;
  }
  return;
}


// ===== 0077beb8  FUN_0077beb8 =====

void FUN_0077beb8(long param_1)

{
  void *__ptr;
  void *pvVar1;
  long lVar2;
  
  __ptr = *(void **)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20) + 1;
  pvVar1 = __ptr;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0077bee8 to 0077beeb has its CatchHandler @ 0077bf34 */
    FUN_007864bc(pvVar1);
    pvVar1 = (void *)((long)pvVar1 + 0x88);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077bf7c  FUN_0077bf7c =====

void FUN_0077bf7c(long param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = *(void **)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
    do {
      if ((puVar2[-4] != -1) && (puVar2[-4] != 0)) {
        free((void *)puVar2[-3]);
      }
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      if (((ulong)puVar2[2] < 0xfffffffffffffffe) && (puVar2[2] != 0)) {
        free((void *)puVar2[3]);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077c03c  FUN_0077c03c =====

void FUN_0077c03c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    free(*(void **)(param_1 + 0x30));
    return;
  }
  return;
}


// ===== 0077c090  FUN_0077c090 =====

void FUN_0077c090(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
                    /* try { // try from 0077c0a4 to 0077c0ab has its CatchHandler @ 0077c14c */
  FUN_0077df7c(param_1 + 0xe0);
                    /* try { // try from 0077c0ac to 0077c0b3 has its CatchHandler @ 0077c144 */
  FUN_0077c448(param_1 + 0x10);
  if (*(long *)(param_1 + 0x140) == 0) {
    __ptr = *(void **)(param_1 + 0x148);
    puVar1 = *(undefined8 **)(param_1 + 0x150);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0077c0c8 to 0077c0cf has its CatchHandler @ 0077c124 */
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
  }
  plVar5 = *(long **)(param_1 + 0x178);
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
              (param_1 + 0x178);
    return;
  }
  return;
}


// ===== 0077c190  FUN_0077c190 =====

void FUN_0077c190(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077c1bc to 0077c1bf has its CatchHandler @ 0077c1f8 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x20);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,alloc::vec::Vec<core::net::socket_addr::SocketAddr>>>>
    ::drop_slow((undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}


// ===== 0077c22c  FUN_0077c22c =====

void FUN_0077c22c(long param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = *(void **)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
    do {
      if ((puVar2[-4] != -1) && (puVar2[-4] != 0)) {
        free((void *)puVar2[-3]);
      }
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      if (((ulong)puVar2[2] < 0xfffffffffffffffe) && (puVar2[2] != 0)) {
        free((void *)puVar2[3]);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077c2ec  FUN_0077c2ec =====

void FUN_0077c2ec(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0077c30c to 0077c313 has its CatchHandler @ 0077c344 */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0077c364  FUN_0077c364 =====

void FUN_0077c364(void *param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
                    /* try { // try from 0077c384 to 0077c38b has its CatchHandler @ 0077c3bc */
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] != 0) {
    free(param_1);
    return;
  }
  return;
}


// ===== 0077c3dc  FUN_0077c3dc =====

void FUN_0077c3dc(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
                    /* try { // try from 0077c3fc to 0077c403 has its CatchHandler @ 0077c420 */
    (**(code **)(*(long *)(param_1 + 0x40) + 0x20))
              (param_1 + 0x58,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x0077c41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x20))
            (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}


// ===== 0077c444  thunk_FUN_007b38f0 =====

void thunk_FUN_007b38f0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)*param_1;
      puVar6 = puVar5 + 1;
      uVar7 = NEON_cmge(*puVar5,0,1);
      uVar7 = uVar7 & 0x8080808080808080;
      do {
        for (; uVar7 == 0; uVar7 = uVar7 & 0x8080808080808080) {
          puVar5 = puVar5 + -0x30;
          uVar7 = NEON_cmge(*puVar6,0,1);
          puVar6 = puVar6 + 1;
        }
        uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (puVar5[(long)-iVar2 * 6 + -6] != 0) {
          free((void *)puVar5[(long)-iVar2 * 6 + -5]);
        }
        if (puVar5[(long)-iVar2 * 6 + -3] != 0) {
          free((void *)puVar5[(long)-iVar2 * 6 + -2]);
        }
        lVar4 = lVar4 + -1;
        uVar7 = uVar7 - 1 & uVar7;
      } while (lVar4 != 0);
    }
    if (lVar3 * 0x31 != -0x39) {
      free((void *)(*param_1 + lVar3 * -0x30 + -0x30));
      return;
    }
  }
  return;
}


// ===== 0077c448  FUN_0077c448 =====

void FUN_0077c448(long param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x48) == -2) {
    __ptr = *(void **)(param_1 + 0x50);
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    pcVar4 = (code *)*puVar1;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0077c474 to 0077c47b has its CatchHandler @ 0077c558 */
      (*pcVar4)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
  }
  else {
                    /* try { // try from 0077c494 to 0077c49b has its CatchHandler @ 0077c580 */
    FUN_0077cc08(param_1 + 0x78);
    plVar5 = *(long **)(param_1 + 0xa0);
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0077c4bc to 0077c4bf has its CatchHandler @ 0077c550 */
      <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
    }
    if (*(char *)(param_1 + 0x70) != '\x02') {
                    /* try { // try from 0077c4d8 to 0077c4df has its CatchHandler @ 0077c548 */
      (**(code **)(*(long *)(param_1 + 0x50) + 0x20))
                (param_1 + 0x68,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    }
  }
  plVar5 = *(long **)(param_1 + 0xb0);
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077c500 to 0077c503 has its CatchHandler @ 0077c578 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar5 = *(long **)(param_1 + 0xc0);
  if (plVar5 != (long *)0x0) {
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc[c1f8e832b0d782c7]::sync::Arc<std[17aff9129faa4dc5]::sync::poison::mutex::Mutex<hyper_util[52a210df7efc1bae]::client::legacy::pool::PoolInner<hyper_util[52a210df7efc1bae]::client::legacy::client::PoolClient<reqwest[6fed810f3e38d558]::async_impl::body::Body>,(http[b87e90c26fe47eb4]::uri::scheme::Scheme,http[b87e90c26fe47eb4]::uri::authority::Authority)>>>>
      ::drop_slow((undefined8 *)(param_1 + 0xc0));
      return;
    }
  }
  return;
}


// ===== 0077c628  FUN_0077c628 =====

void FUN_0077c628(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077c654 to 0077c65b has its CatchHandler @ 0077c694 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(param_1 + 1);
    return;
  }
  return;
}


// ===== 0077c6c8  FUN_0077c6c8 =====

void FUN_0077c6c8(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0077c6e0  FUN_0077c6e0 =====

void FUN_0077c6e0(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
    do {
      if ((puVar2[-4] != -1) && (puVar2[-4] != 0)) {
        free((void *)puVar2[-3]);
      }
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      if (((ulong)puVar2[2] < 0xfffffffffffffffe) && (puVar2[2] != 0)) {
        free((void *)puVar2[3]);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077c7a0  FUN_0077c7a0 =====

void FUN_0077c7a0(long param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if ((*(long *)(param_1 + 8) != -1) && (*(long *)(param_1 + 8) != 0)) {
    free(*(void **)(param_1 + 0x10));
  }
  __ptr = *(void **)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 8);
    do {
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 3;
    } while (lVar1 != 0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077c844  FUN_0077c844 =====

void FUN_0077c844(undefined8 *param_1)

{
  code *pcVar1;
  long *__ptr;
  undefined8 *puVar2;
  void *__ptr_00;
  
  __ptr = (long *)*param_1;
  __ptr_00 = (void *)__ptr[0xb];
  if (__ptr_00 != (void *)0x0) {
    puVar2 = (undefined8 *)__ptr[0xc];
    pcVar1 = (code *)*puVar2;
    if (pcVar1 != (code *)0x0) {
                    /* try { // try from 0077c86c to 0077c873 has its CatchHandler @ 0077c8c0 */
      (*pcVar1)(__ptr_00);
    }
    if (puVar2[1] != 0) {
      free(__ptr_00);
    }
  }
  if ((*__ptr != -1) && (*__ptr != 0)) {
    free((void *)__ptr[1]);
  }
  free(__ptr);
  return;
}


// ===== 0077c930  FUN_0077c930 =====

void FUN_0077c930(ulong *param_1)

{
  void *__ptr;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar5 = param_1 + 1;
  if (*param_1 < 3) {
    if (param_1[1] == 0) {
      if ((char)param_1[10] != '\x02') {
                    /* try { // try from 0077c9c4 to 0077c9cb has its CatchHandler @ 0077cae8 */
        (**(code **)(param_1[6] + 0x20))(param_1 + 9,param_1[7],param_1[8]);
      }
    }
    else if ((char)param_1[10] != '\x02') {
                    /* try { // try from 0077c974 to 0077c97b has its CatchHandler @ 0077cb04 */
      (**(code **)(param_1[6] + 0x20))(param_1 + 9,param_1[7],param_1[8]);
    }
                    /* try { // try from 0077c9d8 to 0077c9df has its CatchHandler @ 0077cb24 */
    (**(code **)(param_1[2] + 0x20))(param_1 + 5,param_1[3],param_1[4]);
  }
  else if (*param_1 == 3) {
    plVar3 = (long *)*puVar5;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0077c9a0 to 0077c9a7 has its CatchHandler @ 0077cb24 */
      <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,reqwest::proxy::ProxyScheme>>>
      ::drop_slow(puVar5);
    }
  }
  else {
    if ((char)param_1[7] != '\x02') {
                    /* try { // try from 0077ca88 to 0077ca8f has its CatchHandler @ 0077cab8 */
      (**(code **)(param_1[3] + 0x20))(param_1 + 6,param_1[4],param_1[5]);
    }
    plVar3 = (long *)*puVar5;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0077caac to 0077cab3 has its CatchHandler @ 0077cb24 */
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(puVar5);
    }
  }
  if (param_1[0xb] != 0xffffffffffffffff) {
    if (param_1[0xb] != 0) {
      free((void *)param_1[0xc]);
    }
    __ptr = (void *)param_1[0xf];
    uVar6 = param_1[0x10];
    if (uVar6 != 0) {
      puVar7 = (undefined8 *)((long)__ptr + 8);
      do {
        if (puVar7[-1] != 0) {
          free((void *)*puVar7);
        }
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 3;
      } while (uVar6 != 0);
    }
    if (param_1[0xe] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0077cb38  FUN_0077cb38 =====

void FUN_0077cb38(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0077cb48 to 0077cb4f has its CatchHandler @ 0077cbb0 */
  FUN_0077cc08(param_1 + 0x38);
  plVar3 = *(long **)(param_1 + 0x60);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077cb70 to 0077cb73 has its CatchHandler @ 0077cba8 */
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow();
  }
  if (*(char *)(param_1 + 0x30) == '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077cba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}


// ===== 0077cc08  FUN_0077cc08 =====

void FUN_0077cc08(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077cc34 to 0077cc3b has its CatchHandler @ 0077cccc */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[1];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077cc5c to 0077cc5f has its CatchHandler @ 0077ccc4 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = (long *)param_1[3];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077cc80 to 0077cc83 has its CatchHandler @ 0077ccbc */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow();
  }
  plVar3 = (long *)param_1[4];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<rustls::client::client_conn::ClientConfig>>::drop_slow
              (param_1 + 4);
    return;
  }
  return;
}


// ===== 0077cd50  FUN_0077cd50 =====

void FUN_0077cd50(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 == 0) {
    __ptr = (void *)param_1[1];
    puVar1 = (undefined8 *)param_1[2];
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0077cd7c to 0077cd83 has its CatchHandler @ 0077cda0 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
      return;
    }
  }
  return;
}


// ===== 0077cdc4  FUN_0077cdc4 =====

void FUN_0077cdc4(long *param_1)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0077cde4  FUN_0077cde4 =====

void FUN_0077cde4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  lVar7 = uVar6 + 0x7fffffffffffffef;
  if (uVar6 < 0x8000000000000011) {
    lVar7 = 0xb;
  }
  if (lVar7 < 0xb) {
    if (lVar7 < 8) {
      if (lVar7 - 2U < 6) {
        return;
      }
      if ((lVar7 == 0) || (lVar7 == 1)) {
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
    else {
      if (lVar7 - 9U < 2) {
        return;
      }
      if (lVar7 == 8) {
        if ((long)param_1[1] < -0x7fffffffffffffeb) {
          return;
        }
        if (param_1[1] == 0xffffffffffffffff) {
          return;
        }
        lVar7 = param_1[3] + 1;
        uVar6 = param_1[2];
        while (lVar7 = lVar7 + -1, lVar7 != 0) {
                    /* try { // try from 0077cec4 to 0077cec7 has its CatchHandler @ 0077d060 */
          FUN_00787428(uVar6);
          uVar6 = uVar6 + 0x70;
        }
        if (param_1[1] == 0) {
          return;
        }
        free((void *)param_1[2]);
        return;
      }
    }
  }
  else if (lVar7 < 0xe) {
    if (lVar7 == 0xb) {
      uVar4 = uVar6 ^ 0x8000000000000000;
      if (-1 < (long)uVar6) {
        uVar4 = 0xd;
      }
      if (uVar4 < 0xd) {
        return;
      }
      if (uVar4 - 0xe < 2) {
        return;
      }
      if (uVar4 == 0xd) {
        if ((((param_1[3] & 1) == 0) && (param_1[4] != 0xffffffffffffffff)) && (param_1[4] != 0)) {
          free((void *)param_1[5]);
        }
                    /* try { // try from 0077cf40 to 0077cf47 has its CatchHandler @ 0077d044 */
        FUN_0078aba0(param_1);
        if (*param_1 == 0) {
          return;
        }
        free((void *)param_1[1]);
        return;
      }
      param_1 = param_1 + 1;
      plVar5 = (long *)*param_1;
      do {
        bVar3 = *plVar5 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_0077cfac;
    }
    if (lVar7 == 0xc) {
      if (param_1[1] != 4) {
        return;
      }
      param_1 = param_1 + 2;
      plVar5 = (long *)*param_1;
      do {
        bVar3 = *plVar5 + -1 == 0;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      goto LAB_0077cfac;
    }
    if (lVar7 == 0xd) {
      if (param_1[1] == 0) {
        return;
      }
      free((void *)param_1[2]);
      return;
    }
  }
  else if (lVar7 - 0xeU < 7) {
    return;
  }
  param_1 = param_1 + 1;
  plVar5 = (long *)*param_1;
  do {
    bVar3 = *plVar5 + -1 == 0;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0077cfac:
  if (!bVar3) {
    return;
  }
  DataMemoryBarrier(2,1);
  <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
  ::drop_slow(param_1);
  return;
}


// ===== 0077d0a8  FUN_0077d0a8 =====

void FUN_0077d0a8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*param_1 != -1) && (*param_1 == 4)) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0077d0e0  FUN_0077d0e0 =====

void FUN_0077d0e0(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* try { // try from 0077d0f0 to 0077d0f7 has its CatchHandler @ 0077d11c */
    FUN_007b3bec();
    free(param_1);
    return;
  }
  return;
}


// ===== 0077d138  FUN_0077d138 =====

void FUN_0077d138(byte *param_1)

{
  long *__ptr;
  
  if (1 < *param_1) {
    __ptr = *(long **)(param_1 + 8);
                    /* try { // try from 0077d164 to 0077d16b has its CatchHandler @ 0077d1ac */
    (**(code **)(*__ptr + 0x20))(__ptr + 3,__ptr[1],__ptr[2]);
    free(__ptr);
  }
                    /* try { // try from 0077d188 to 0077d18f has its CatchHandler @ 0077d1dc */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x20))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077d1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x20))
            (param_1 + 0x48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 0077d200  FUN_0077d200 =====

void FUN_0077d200(byte *param_1)

{
  if ((9 < *param_1) && (*(long *)(param_1 + 0x10) != 0)) {
    free(*(void **)(param_1 + 8));
    return;
  }
  return;
}


// ===== 0077d224  FUN_0077d224 =====

void FUN_0077d224(long param_1)

{
  void *__ptr;
  
  if ((9 < *(byte *)(param_1 + 0xb8)) && (*(long *)(param_1 + 200) != 0)) {
    free(*(void **)(param_1 + 0xc0));
  }
                    /* try { // try from 0077d254 to 0077d25b has its CatchHandler @ 0077d2bc */
  FUN_0077d138(param_1 + 0x60);
                    /* try { // try from 0077d25c to 0077d263 has its CatchHandler @ 0077d2b4 */
  FUN_0077df7c(param_1);
  __ptr = *(void **)(param_1 + 0xd0);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0077d26c to 0077d273 has its CatchHandler @ 0077d298 */
    FUN_007b3bec(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077d2dc  FUN_0077d2dc =====

void FUN_0077d2dc(long param_1)

{
  void *__ptr;
  
                    /* try { // try from 0077d2ec to 0077d2ef has its CatchHandler @ 0077d344 */
  FUN_0077df7c();
  __ptr = *(void **)(param_1 + 0x60);
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0077d2f8 to 0077d2ff has its CatchHandler @ 0077d324 */
    FUN_007b3bec(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077d360  FUN_0077d360 =====

void FUN_0077d360(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0077d378  FUN_0077d378 =====

void FUN_0077d378(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1 + 3,param_1[1],param_1[2]);
    return;
  }
  __ptr = (void *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
                    /* try { // try from 0077d3b0 to 0077d3b7 has its CatchHandler @ 0077d3e0 */
    (*pcVar2)(__ptr);
  }
  if (puVar1[1] != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077d404  FUN_0077d404 =====

void FUN_0077d404(long param_1)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
                    /* try { // try from 0077d41c to 0077d41f has its CatchHandler @ 0077d6e4 */
  FUN_0077df7c();
  if (*(long *)(param_1 + 0x78) != -1) {
    if ((*(long *)(param_1 + 0x80) != -1) && (*(long *)(param_1 + 0x80) != 0)) {
      free(*(void **)(param_1 + 0x88));
    }
    pvVar1 = *(void **)(param_1 + 0xa0);
    lVar7 = *(long *)(param_1 + 0xa8);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)((long)pvVar1 + 8);
      do {
        if ((puVar8[-1] != -1) && (puVar8[-1] != 0)) {
          free((void *)*puVar8);
        }
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 3;
      } while (lVar7 != 0);
    }
    if (*(long *)(param_1 + 0x98) != 0) {
      free(pvVar1);
    }
  }
  lVar7 = *(long *)(param_1 + 0x218) + 1;
  lVar10 = *(long *)(param_1 + 0x210);
  while (lVar7 = lVar7 + -1, lVar7 != 0) {
                    /* try { // try from 0077d4b8 to 0077d4bb has its CatchHandler @ 0077d76c */
    FUN_007864bc(lVar10);
    lVar10 = lVar10 + 0x88;
  }
  if (*(long *)(param_1 + 0x208) != 0) {
    free(*(void **)(param_1 + 0x210));
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    pvVar1 = *(void **)(param_1 + 0x68);
    puVar8 = *(undefined8 **)(param_1 + 0x70);
    pcVar4 = (code *)*puVar8;
    if (pcVar4 != (code *)0x0) {
                    /* try { // try from 0077d4f4 to 0077d4fb has its CatchHandler @ 0077d6b0 */
      (*pcVar4)(pvVar1);
    }
    if (puVar8[1] != 0) {
      free(pvVar1);
    }
  }
  lVar7 = *(long *)(param_1 + 0x230);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x228) + 0x10);
    do {
      if (puVar8[-1] != 0) {
        free((void *)*puVar8);
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 4;
    } while (lVar7 != 0);
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    free(*(void **)(param_1 + 0x228));
  }
  lVar7 = *(long *)(param_1 + 0x248);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x240) + 8);
    do {
      if ((puVar8[-1] != -1) && (puVar8[-1] != 0)) {
        free((void *)*puVar8);
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 3;
    } while (lVar7 != 0);
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    free(*(void **)(param_1 + 0x240));
  }
  if (*(ulong *)(param_1 + 0xb0) < 2) {
                    /* try { // try from 0077d5cc to 0077d5cf has its CatchHandler @ 0077d6cc */
    FUN_0077d934();
  }
  lVar7 = *(long *)(param_1 + 0x260);
  if (lVar7 != 0) {
    lVar9 = *(long *)(param_1 + 600);
    lVar10 = 0;
    do {
      lVar6 = lVar10 * 0x10;
      lVar10 = lVar10 + 1;
      plVar5 = *(long **)(lVar9 + lVar6);
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077d610 to 0077d613 has its CatchHandler @ 0077d70c */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow();
      }
    } while (lVar10 != lVar7);
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    free(*(void **)(param_1 + 600));
  }
  if ((*(long *)(param_1 + 0x268) != -1) && (*(long *)(param_1 + 0x268) != 0)) {
    free(*(void **)(param_1 + 0x270));
  }
  if (*(long *)(param_1 + 0x308) != 0) {
                    /* try { // try from 0077d654 to 0077d65b has its CatchHandler @ 0077d6d4 */
    FUN_0077c844(param_1 + 0x308);
  }
                    /* try { // try from 0077d65c to 0077d663 has its CatchHandler @ 0077d6dc */
  FUN_007b38f0(param_1 + 0x2d0);
  plVar5 = *(long **)(param_1 + 0x310);
  if (plVar5 != (long *)0x0) {
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(param_1 + 0x310);
      return;
    }
  }
  return;
}


// ===== 0077d844  FUN_0077d844 =====

void FUN_0077d844(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077d870 to 0077d877 has its CatchHandler @ 0077d8b0 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(param_1);
  }
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
    <alloc::sync::[n]::alloc::sync::Arc<std::collections::hash::map::HashMap<alloc::string::String,alloc::vec::Vec<core::net::socket_addr::SocketAddr>>>>
    ::drop_slow(param_1 + 2);
    return;
  }
  return;
}


// ===== 0077d8e4  FUN_0077d8e4 =====

void FUN_0077d8e4(long *param_1)

{
  if (*param_1 != 0) {
    free((void *)param_1[1]);
  }
  if (param_1[3] != 0) {
    free((void *)param_1[4]);
    return;
  }
  return;
}


// ===== 0077d934  FUN_0077d934 =====

void FUN_0077d934(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 8);
    do {
      if (puVar5[-1] != 0) {
        free((void *)*puVar5);
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
    } while (lVar4 != 0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    free(*(void **)(param_1 + 0x18));
  }
  plVar3 = *(long **)(param_1 + 0xd8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077d9bc to 0077d9bf has its CatchHandler @ 0077db18 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0xf0);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077d9e0 to 0077d9e3 has its CatchHandler @ 0077db10 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x100);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077da00 to 0077da07 has its CatchHandler @ 0077db08 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x100);
  }
  plVar3 = *(long **)(param_1 + 0x110);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077da24 to 0077da2b has its CatchHandler @ 0077db00 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x110);
  }
  plVar3 = *(long **)(param_1 + 0x120);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077da48 to 0077da4f has its CatchHandler @ 0077daf8 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow(param_1 + 0x120)
    ;
  }
  plVar3 = *(long **)(param_1 + 0x128);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077da6c to 0077da73 has its CatchHandler @ 0077daf0 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
    ::drop_slow(param_1 + 0x128);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    free(*(void **)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
  plVar3 = *(long **)(param_1 + 0x138);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077dac0 to 0077dac7 has its CatchHandler @ 0077dadc */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::compress::CompressionCache>>::drop_slow
              (param_1 + 0x138);
  }
  FUN_0077b554(param_1 + 0x58);
  return;
}


// ===== 0077dc3c  FUN_0077dc3c =====

void FUN_0077dc3c(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077dc70 to 0077dc73 has its CatchHandler @ 0077dcd4 */
    <alloc::sync::[n]::alloc::sync::Arc<rustls::webpki::anchors::RootCertStore>>::drop_slow();
  }
  lVar5 = param_1[2] + 1;
  lVar3 = param_1[1];
  while (lVar5 = lVar5 + -1, lVar5 != 0) {
                    /* try { // try from 0077dc88 to 0077dc8b has its CatchHandler @ 0077dce8 */
    FUN_007868b4(lVar3);
    lVar3 = lVar3 + 0x98;
  }
  if (*param_1 != 0) {
    free((void *)param_1[1]);
    return;
  }
  return;
}


// ===== 0077dd30  FUN_0077dd30 =====

void FUN_0077dd30(long *param_1)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  
  __ptr = (void *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)((long)__ptr + 0x20);
    do {
      if ((puVar2[-4] != -1) && (puVar2[-4] != 0)) {
        free((void *)puVar2[-3]);
      }
      if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
        free((void *)*puVar2);
      }
      if (((ulong)puVar2[2] < 0xfffffffffffffffe) && (puVar2[2] != 0)) {
        free((void *)puVar2[3]);
      }
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 9;
    } while (lVar1 != 0);
  }
  if (*param_1 != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077ddf0  FUN_0077ddf0 =====

void FUN_0077ddf0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 0077de00 to 0077de03 has its CatchHandler @ 0077de8c */
  <tokio::runtime::time::entry::TimerEntry_as_core::ops::drop::Drop>::drop();
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
                    /* try { // try from 0077de2c to 0077de53 has its CatchHandler @ 0077de84 */
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
    }
  }
  if ((param_1[4] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0077de74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[9] + 0x18))(param_1[10]);
    return;
  }
  return;
}


// ===== 0077dec0  FUN_0077dec0 =====

void FUN_0077dec0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::current_thread::Handle>>::
      drop_slow();
      return;
    }
  }
  else {
    plVar3 = (long *)param_1[1];
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<tokio::runtime::scheduler::multi_thread::handle::Handle>>
      ::drop_slow();
      return;
    }
  }
  return;
}


// ===== 0077df0c  FUN_0077df0c =====

void FUN_0077df0c(byte param_1,long *param_2)

{
  if (param_1 < 2) {
    return;
  }
                    /* try { // try from 0077df40 to 0077df47 has its CatchHandler @ 0077df60 */
  (**(code **)(*param_2 + 0x20))(param_2 + 3,param_2[1],param_2[2]);
  free(param_2);
  return;
}


// ===== 0077df7c  FUN_0077df7c =====

void FUN_0077df7c(long param_1)

{
  void *__ptr;
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    free(*(void **)(param_1 + 0x48));
  }
                    /* try { // try from 0077dfac to 0077dfb3 has its CatchHandler @ 0077e040 */
  FUN_0078aa8c(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    free(*(void **)(param_1 + 0x20));
  }
  __ptr = *(void **)(param_1 + 0x38);
  lVar2 = *(long *)(param_1 + 0x40) + 1;
  lVar1 = (long)__ptr + 0x38;
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 0077dff4 to 0077dff7 has its CatchHandler @ 0077e070 */
    (**(code **)(*(long *)(lVar1 + -0x18) + 0x20))
              (lVar1,*(undefined8 *)(lVar1 + -0x10),*(undefined8 *)(lVar1 + -8));
    lVar1 = lVar1 + 0x48;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 0077e0c4  FUN_0077e0c4 =====

void FUN_0077e0c4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x58);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077e0f0 to 0077e0f3 has its CatchHandler @ 0077e130 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow();
  }
  plVar3 = *(long **)(param_1 + 0x68);
  if (plVar3 != (long *)0x0) {
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow((undefined8 *)(param_1 + 0x68));
      return;
    }
  }
  return;
}


// ===== 0077e168  FUN_0077e168 =====

undefined8 FUN_0077e168(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 0077e178 to 0077e18b has its CatchHandler @ 0077e1d8 */
  uVar3 = FUN_0076e4f4(0,param_2,&DAT_002d21ad,0x21);
  if ((*param_1 != -1) && (*param_1 == 4)) {
    plVar4 = (long *)param_1[1];
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+rustls::server::server_conn::StoresServerSessions>>
      ::drop_slow(param_1 + 1);
    }
  }
  return uVar3;
}


// ===== 0077e1f0  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::use_rustls_tls =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::use_rustls_tls */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::use_rustls_tls
          (void *param_1,void *param_2)

{
  if (*(ulong *)((long)param_2 + 0xb0) < 2) {
                    /* try { // try from 0077e210 to 0077e213 has its CatchHandler @ 0077e234 */
    FUN_0077d934();
  }
  *(undefined8 *)((long)param_2 + 0xb0) = 2;
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 0077e254  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::default_headers =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::default_headers
    */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::default_headers
          (void *param_1,long *param_2,long param_3)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined **local_1b8;
  ulong local_188;
  ulong local_178;
  long local_170;
  ulong local_168;
  undefined8 uStack_138;
  char local_130;
  undefined3 local_12f;
  undefined1 uStack_12c;
  undefined3 uStack_12b;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined3 local_f8;
  undefined1 uStack_f5;
  undefined3 uStack_f4;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *local_c8;
  undefined1 auStack_c0 [32];
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_69 [9];
  
  lVar3 = *(long *)(param_3 + 0x20);
  local_178 = *(ulong *)(param_3 + 0x28);
  local_168 = 0;
  uVar4 = *(ulong *)(param_3 + 0x38);
  uVar6 = *(ulong *)(param_3 + 0x40);
  local_170 = 2;
  if (local_178 != 0) {
    local_170 = 0;
  }
  local_1b8 = &PTR_s__root__cargo_registry_src_index__00ade880;
  uVar18 = uVar4;
  if (local_170 == 2) goto LAB_0077e31c;
LAB_0077e2b4:
  if (local_168 < local_178) {
    plVar15 = (long *)(lVar3 + local_168 * 0x68);
    if (local_170 == 0) goto LAB_0077e338;
    if (uVar18 < uVar6) {
      lVar13 = uVar4 + uVar18 * 0x48;
      if (*(long *)(lVar13 + 0x10) == 1) {
        local_170 = 1;
        local_188 = *(ulong *)(lVar13 + 0x18);
      }
      else {
        local_170 = 2;
        local_188 = uVar18;
      }
      plVar16 = (long *)(lVar13 + 0x20);
LAB_0077e368:
                    /* try { // try from 0077e378 to 0077e383 has its CatchHandler @ 0077e7a8 */
      (**(code **)*plVar16)(&local_a0,plVar16 + 3,plVar16[1],plVar16[2]);
      local_100 = (undefined1)plVar16[4];
      plVar16 = plVar15 + 8;
      uStack_118 = uStack_98;
      local_120 = local_a0;
      uStack_108 = uStack_88;
      local_110 = uStack_90;
      local_c8 = plVar16;
                    /* try { // try from 0077e3a0 to 0077e3b7 has its CatchHandler @ 0077e7b4 */
      iVar10 = FUN_007c545c(param_2);
      if (iVar10 == 0) {
        uVar11 = FUN_007c4ba0(param_2,&local_c8);
        uVar8 = *(ushort *)(param_2 + 0xb);
        lVar13 = param_2[9];
        uVar17 = param_2[10];
        lVar5 = param_2[4];
        uVar12 = param_2[5];
        uVar18 = 0;
        uVar14 = (ulong)(uVar8 & uVar11);
        do {
          if ((uVar17 <= uVar14) && (uVar14 = 0, uVar17 == 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          puVar1 = (ushort *)(lVar13 + uVar14 * 4);
          uVar19 = (ulong)*puVar1;
          if (uVar19 == 0xffff) {
                    /* try { // try from 0077e558 to 0077e567 has its CatchHandler @ 0077e7b4 */
            <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
            ::from(auStack_c0,plVar16);
            local_80 = CONCAT71(uStack_ff,local_100);
            uStack_98 = uStack_118;
            local_a0 = local_120;
            uStack_88 = uStack_108;
            uStack_90 = local_110;
                    /* try { // try from 0077e578 to 0077e58b has its CatchHandler @ 0077e7a8 */
            uVar18 = FUN_007829ac(param_2,uVar11,auStack_c0,&local_a0);
            if ((uVar18 & 1) != 0) goto LAB_0077e704;
            if ((ulong)param_2[10] <= uVar14) {
                    /* try { // try from 0077e754 to 0077e763 has its CatchHandler @ 0077e7ac */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar14,param_2[10],&PTR_s__root__cargo_registry_src_index__00ad8c68);
            }
            puVar2 = (undefined2 *)(param_2[9] + uVar14 * 4);
            *puVar2 = (short)uVar12;
            puVar2[1] = (ushort)uVar11;
            goto LAB_0077e5b0;
          }
          uVar9 = puVar1[1];
          if (((ulong)((int)uVar14 - (uint)(uVar9 & uVar8)) & (ulong)uVar8) < uVar18) {
            lVar13 = *param_2;
                    /* try { // try from 0077e5d8 to 0077e5e3 has its CatchHandler @ 0077e7b4 */
            <http[b87e90c26fe47eb4]::header::name::HeaderName_as_core[bcece726f298455b]::convert::From<&http[b87e90c26fe47eb4]::header::name::HeaderName>>
            ::from(auStack_c0,plVar16);
            local_80 = CONCAT71(uStack_ff,local_100);
            uVar17 = param_2[5];
            uStack_98 = uStack_118;
            local_a0 = local_120;
            uStack_88 = uStack_108;
            uStack_90 = local_110;
                    /* try { // try from 0077e5f8 to 0077e60b has its CatchHandler @ 0077e7a8 */
            uVar12 = FUN_007829ac(param_2,uVar11,auStack_c0,&local_a0);
            if ((uVar12 & 1) == 0) {
              lVar5 = param_2[9];
              uVar19 = param_2[10];
              uVar12 = 0;
              while( true ) {
                uVar8 = (ushort)uVar11;
                if ((uVar19 <= uVar14) && (uVar14 = 0, uVar19 == 0)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                puVar1 = (ushort *)(lVar5 + uVar14 * 4);
                uVar9 = *puVar1;
                if (uVar9 == 0xffff) break;
                uVar11 = (uint)puVar1[1];
                *puVar1 = (ushort)uVar17;
                uVar12 = uVar12 + 1;
                puVar1[1] = uVar8;
                uVar14 = uVar14 + 1;
                uVar17 = (ulong)(uint)uVar9;
              }
              *puVar1 = (ushort)uVar17;
              puVar1[1] = uVar8;
              if ((0x7f < uVar12 || 0x1ff < uVar18 && lVar13 != 2) && (*param_2 == 0)) {
                *param_2 = 1;
              }
              goto LAB_0077e5b0;
            }
            goto LAB_0077e704;
          }
          if (uVar9 == (ushort)uVar11) {
            if (uVar12 <= uVar19) {
                    /* try { // try from 0077e6d4 to 0077e6e7 has its CatchHandler @ 0077e7b8 */
                    /* WARNING: Subroutine does not return */
              core::panicking::panic_bounds_check
                        (uVar19,uVar12,&PTR_s__root__cargo_registry_src_index__00ad8c50);
            }
            puVar20 = (uint *)(lVar5 + uVar19 * 0x68);
            if ((*(long *)(puVar20 + 0x10) != 0) != (*plVar16 == 0)) {
              if (*(long *)(puVar20 + 0x10) == 0) {
                if ((char)puVar20[0x12] == (char)plVar15[9]) goto LAB_0077e494;
              }
              else if ((*(size_t *)(puVar20 + 0x14) == plVar15[10]) &&
                      (iVar10 = memcmp(*(void **)(puVar20 + 0x12),(void *)plVar15[9],
                                       *(size_t *)(puVar20 + 0x14)), iVar10 == 0))
              goto LAB_0077e494;
            }
          }
          uVar18 = uVar18 + 1;
          uVar14 = uVar14 + 1;
        } while( true );
      }
                    /* try { // try from 0077e6fc to 0077e727 has its CatchHandler @ 0077e7ac */
      (**(code **)(local_120 + 0x20))(&uStack_108,uStack_118,local_110);
      goto LAB_0077e704;
    }
    local_1b8 = &PTR_s__root__cargo_registry_src_index__00ade898;
    local_168 = uVar18;
    local_178 = uVar6;
  }
                    /* try { // try from 0077e744 to 0077e74f has its CatchHandler @ 0077e7a4 */
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(local_168,local_178,local_1b8);
LAB_0077e494:
  local_80 = CONCAT71(uStack_ff,local_100);
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_88 = uStack_108;
  uStack_90 = local_110;
  if ((*puVar20 & 1) != 0) {
                    /* try { // try from 0077e4b8 to 0077e4bf has its CatchHandler @ 0077e77c */
    FUN_007c5b7c(param_2,*(undefined8 *)(puVar20 + 2));
    uVar12 = param_2[5];
  }
  if (uVar12 <= uVar19) {
                    /* try { // try from 0077e768 to 0077e777 has its CatchHandler @ 0077e780 */
                    /* WARNING: Subroutine does not return */
    core::panicking::panic_bounds_check
              (uVar19,uVar12,&PTR_s__root__cargo_registry_src_index__00adba78);
  }
  lVar13 = param_2[4] + uVar19 * 0x68;
  uStack_e8 = *(undefined8 *)(lVar13 + 0x20);
  local_f0 = *(long *)(lVar13 + 0x18);
  uStack_d8 = *(undefined8 *)(lVar13 + 0x30);
  uStack_e0 = *(undefined8 *)(lVar13 + 0x28);
  cVar7 = *(char *)(lVar13 + 0x38);
  local_f8 = (undefined3)*(undefined4 *)(lVar13 + 0x39);
  uStack_f5 = (undefined1)*(undefined4 *)(lVar13 + 0x3c);
  uStack_f4 = (undefined3)((uint)*(undefined4 *)(lVar13 + 0x3c) >> 8);
  *(undefined8 *)(lVar13 + 0x38) = local_80;
  *(undefined8 *)(lVar13 + 0x20) = uStack_98;
  *(long *)(lVar13 + 0x18) = local_a0;
  *(undefined8 *)(lVar13 + 0x30) = uStack_88;
  *(undefined8 *)(lVar13 + 0x28) = uStack_90;
  if (cVar7 == -1) {
LAB_0077e704:
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002d21e9,0x17,auStack_69,&DAT_00ad8c98,
               &PTR_s__root__cargo_registry_src_index__00ad8d20);
  }
  _local_12f = CONCAT13(uStack_f5,local_f8);
  uStack_12b = uStack_f4;
  uStack_138 = uStack_d8;
  local_130 = cVar7;
  if (cVar7 != '\x02') {
                    /* try { // try from 0077e54c to 0077e553 has its CatchHandler @ 0077e7a8 */
    (**(code **)(local_f0 + 0x20))(&uStack_138,uStack_e8,uStack_e0);
  }
LAB_0077e5b0:
  uVar18 = local_188;
  if (local_170 != 2) goto LAB_0077e2b4;
LAB_0077e31c:
  local_168 = local_168 + 1;
  if (local_178 <= local_168) {
    memcpy(param_1,param_2,0x348);
    FUN_0077df7c(param_3);
    return;
  }
  plVar15 = (long *)(lVar3 + local_168 * 0x68);
LAB_0077e338:
  if (*plVar15 == 1) {
    local_188 = plVar15[1];
    local_170 = 1;
  }
  else {
    local_170 = 2;
  }
  plVar16 = plVar15 + 3;
  goto LAB_0077e368;
}


// ===== 0077e7f4  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve_to_addrs =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve_to_addrs
    */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve_to_addrs
          (void *param_1,void *param_2,void *param_3,ulong param_4,void *param_5,long param_6)

{
  undefined1 *__dest;
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  size_t __n;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar12;
  byte bVar19;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar20;
  byte bVar28;
  ulong uVar21;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined8 uVar29;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  long local_98;
  void *local_90;
  ulong local_80;
  undefined1 *puStack_78;
  ulong local_70;
  long local_68;
  undefined1 *puStack_60;
  long local_58;
  
  if ((long)param_4 < 0) {
    uVar4 = 0;
LAB_0077e820:
                    /* try { // try from 0077e820 to 0077e82b has its CatchHandler @ 0077ea30 */
                    /* WARNING: Subroutine does not return */
    alloc::raw_vec::handle_error(uVar4,param_4);
  }
  if (param_4 == 0) {
    __dest = &DAT_00000001;
    goto LAB_0077e958;
  }
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  uVar4 = 1;
  __dest = (undefined1 *)FUN_004b25a4(param_4,1);
  if (__dest == (undefined1 *)0x0) goto LAB_0077e820;
  memcpy(__dest,param_3,param_4);
  if (param_4 < 8) {
    uVar1 = 0;
  }
  else {
    if (param_4 < 0x20) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_4 & 0x7fffffffffffffe0;
      puVar2 = (undefined8 *)(__dest + 0x10);
      uVar3 = param_4 & 0x7fffffffffffffe0;
      do {
        uVar12 = puVar2[-1];
        uVar4 = puVar2[-2];
        uVar29 = puVar2[1];
        uVar20 = *puVar2;
        uVar3 = uVar3 - 0x20;
        auVar37[0] = (byte)uVar4 + 0xbf;
        bVar5 = (byte)((ulong)uVar4 >> 8);
        auVar37[1] = bVar5 + 0xbf;
        bVar6 = (byte)((ulong)uVar4 >> 0x10);
        auVar37[2] = bVar6 + 0xbf;
        bVar7 = (byte)((ulong)uVar4 >> 0x18);
        auVar37[3] = bVar7 + 0xbf;
        bVar8 = (byte)((ulong)uVar4 >> 0x20);
        auVar37[4] = bVar8 + 0xbf;
        bVar9 = (byte)((ulong)uVar4 >> 0x28);
        auVar37[5] = bVar9 + 0xbf;
        bVar10 = (byte)((ulong)uVar4 >> 0x30);
        auVar37[6] = bVar10 + 0xbf;
        bVar11 = (byte)((ulong)uVar4 >> 0x38);
        auVar37[7] = bVar11 + 0xbf;
        auVar37[8] = (byte)uVar12 + 0xbf;
        bVar13 = (byte)((ulong)uVar12 >> 8);
        auVar37[9] = bVar13 + 0xbf;
        bVar14 = (byte)((ulong)uVar12 >> 0x10);
        auVar37[10] = bVar14 + 0xbf;
        bVar15 = (byte)((ulong)uVar12 >> 0x18);
        auVar37[0xb] = bVar15 + 0xbf;
        bVar16 = (byte)((ulong)uVar12 >> 0x20);
        auVar37[0xc] = bVar16 + 0xbf;
        bVar17 = (byte)((ulong)uVar12 >> 0x28);
        auVar37[0xd] = bVar17 + 0xbf;
        bVar18 = (byte)((ulong)uVar12 >> 0x30);
        auVar37[0xe] = bVar18 + 0xbf;
        bVar19 = (byte)((ulong)uVar12 >> 0x38);
        auVar37[0xf] = bVar19 + 0xbf;
        auVar40[0] = (byte)uVar20 + 0xbf;
        bVar22 = (byte)((ulong)uVar20 >> 8);
        auVar40[1] = bVar22 + 0xbf;
        bVar23 = (byte)((ulong)uVar20 >> 0x10);
        auVar40[2] = bVar23 + 0xbf;
        bVar24 = (byte)((ulong)uVar20 >> 0x18);
        auVar40[3] = bVar24 + 0xbf;
        bVar25 = (byte)((ulong)uVar20 >> 0x20);
        auVar40[4] = bVar25 + 0xbf;
        bVar26 = (byte)((ulong)uVar20 >> 0x28);
        auVar40[5] = bVar26 + 0xbf;
        bVar27 = (byte)((ulong)uVar20 >> 0x30);
        auVar40[6] = bVar27 + 0xbf;
        bVar28 = (byte)((ulong)uVar20 >> 0x38);
        auVar40[7] = bVar28 + 0xbf;
        auVar40[8] = (byte)uVar29 + 0xbf;
        bVar30 = (byte)((ulong)uVar29 >> 8);
        auVar40[9] = bVar30 + 0xbf;
        bVar31 = (byte)((ulong)uVar29 >> 0x10);
        auVar40[10] = bVar31 + 0xbf;
        bVar32 = (byte)((ulong)uVar29 >> 0x18);
        auVar40[0xb] = bVar32 + 0xbf;
        bVar33 = (byte)((ulong)uVar29 >> 0x20);
        auVar40[0xc] = bVar33 + 0xbf;
        bVar34 = (byte)((ulong)uVar29 >> 0x28);
        auVar40[0xd] = bVar34 + 0xbf;
        bVar35 = (byte)((ulong)uVar29 >> 0x30);
        auVar40[0xe] = bVar35 + 0xbf;
        bVar36 = (byte)((ulong)uVar29 >> 0x38);
        auVar40[0xf] = bVar36 + 0xbf;
        auVar38[8] = 0x1a;
        auVar38._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar38[9] = 0x1a;
        auVar38[10] = 0x1a;
        auVar38[0xb] = 0x1a;
        auVar38[0xc] = 0x1a;
        auVar38[0xd] = 0x1a;
        auVar38[0xe] = 0x1a;
        auVar38[0xf] = 0x1a;
        auVar38 = NEON_cmhi(auVar38,auVar37,1);
        auVar41[8] = 0x1a;
        auVar41._0_8_ = 0x1a1a1a1a1a1a1a1a;
        auVar41[9] = 0x1a;
        auVar41[10] = 0x1a;
        auVar41[0xb] = 0x1a;
        auVar41[0xc] = 0x1a;
        auVar41[0xd] = 0x1a;
        auVar41[0xe] = 0x1a;
        auVar41[0xf] = 0x1a;
        auVar41 = NEON_cmhi(auVar41,auVar40,1);
        uVar21 = auVar38._0_8_ & 0x2020202020202020;
        uVar39 = auVar41._0_8_ & 0x2020202020202020;
        puVar2[-1] = CONCAT17(auVar38[0xf] & 0x20 | bVar19,
                              CONCAT16(auVar38[0xe] & 0x20 | bVar18,
                                       CONCAT15(auVar38[0xd] & 0x20 | bVar17,
                                                CONCAT14(auVar38[0xc] & 0x20 | bVar16,
                                                         CONCAT13(auVar38[0xb] & 0x20 | bVar15,
                                                                  CONCAT12(auVar38[10] & 0x20 |
                                                                           bVar14,CONCAT11(auVar38[9
                                                  ] & 0x20 | bVar13,auVar38[8] & 0x20 | (byte)uVar12
                                                  )))))));
        puVar2[-2] = CONCAT17((byte)(uVar21 >> 0x38) | bVar11,
                              CONCAT16((byte)(uVar21 >> 0x30) | bVar10,
                                       CONCAT15((byte)(uVar21 >> 0x28) | bVar9,
                                                CONCAT14((byte)(uVar21 >> 0x20) | bVar8,
                                                         CONCAT13((byte)(uVar21 >> 0x18) | bVar7,
                                                                  CONCAT12((byte)(uVar21 >> 0x10) |
                                                                           bVar6,CONCAT11((byte)(
                                                  uVar21 >> 8) | bVar5,(byte)uVar21 | (byte)uVar4)))
                                                  ))));
        puVar2[1] = CONCAT17(auVar41[0xf] & 0x20 | bVar36,
                             CONCAT16(auVar41[0xe] & 0x20 | bVar35,
                                      CONCAT15(auVar41[0xd] & 0x20 | bVar34,
                                               CONCAT14(auVar41[0xc] & 0x20 | bVar33,
                                                        CONCAT13(auVar41[0xb] & 0x20 | bVar32,
                                                                 CONCAT12(auVar41[10] & 0x20 |
                                                                          bVar31,CONCAT11(auVar41[9]
                                                                                          & 0x20 | 
                                                  bVar30,auVar41[8] & 0x20 | (byte)uVar29)))))));
        *puVar2 = CONCAT17((byte)(uVar39 >> 0x38) | bVar28,
                           CONCAT16((byte)(uVar39 >> 0x30) | bVar27,
                                    CONCAT15((byte)(uVar39 >> 0x28) | bVar26,
                                             CONCAT14((byte)(uVar39 >> 0x20) | bVar25,
                                                      CONCAT13((byte)(uVar39 >> 0x18) | bVar24,
                                                               CONCAT12((byte)(uVar39 >> 0x10) |
                                                                        bVar23,CONCAT11((byte)(
                                                  uVar39 >> 8) | bVar22,(byte)uVar39 | (byte)uVar20)
                                                  ))))));
        puVar2 = puVar2 + 4;
      } while (uVar3 != 0);
      if (param_4 == uVar1) goto LAB_0077e958;
      uVar3 = uVar1;
      if ((param_4 & 0x18) == 0) goto LAB_0077e934;
    }
    uVar1 = param_4 & 0x7ffffffffffffff8;
    do {
      uVar4 = *(undefined8 *)(__dest + uVar3);
      bVar5 = (byte)((ulong)uVar4 >> 8);
      bVar6 = (byte)((ulong)uVar4 >> 0x10);
      bVar7 = (byte)((ulong)uVar4 >> 0x18);
      bVar8 = (byte)((ulong)uVar4 >> 0x20);
      bVar9 = (byte)((ulong)uVar4 >> 0x28);
      bVar10 = (byte)((ulong)uVar4 >> 0x30);
      bVar11 = (byte)((ulong)uVar4 >> 0x38);
      uVar21 = NEON_cmhi(0x1a1a1a1a1a1a1a1a,
                         CONCAT17(bVar11 + 0xbf,
                                  CONCAT16(bVar10 + 0xbf,
                                           CONCAT15(bVar9 + 0xbf,
                                                    CONCAT14(bVar8 + 0xbf,
                                                             CONCAT13(bVar7 + 0xbf,
                                                                      CONCAT12(bVar6 + 0xbf,
                                                                               CONCAT11(bVar5 + 0xbf
                                                                                        ,(byte)uVar4
                                                                                         + 0xbf)))))
                                          )),1);
      uVar21 = uVar21 & 0x2020202020202020;
      *(ulong *)(__dest + uVar3) =
           CONCAT17((byte)(uVar21 >> 0x38) | bVar11,
                    CONCAT16((byte)(uVar21 >> 0x30) | bVar10,
                             CONCAT15((byte)(uVar21 >> 0x28) | bVar9,
                                      CONCAT14((byte)(uVar21 >> 0x20) | bVar8,
                                               CONCAT13((byte)(uVar21 >> 0x18) | bVar7,
                                                        CONCAT12((byte)(uVar21 >> 0x10) | bVar6,
                                                                 CONCAT11((byte)(uVar21 >> 8) |
                                                                          bVar5,(byte)uVar21 |
                                                                                (byte)uVar4)))))));
      uVar3 = uVar3 + 8;
    } while (uVar1 != uVar3);
    if (param_4 == uVar1) goto LAB_0077e958;
  }
LAB_0077e934:
  do {
    bVar5 = 0x20;
    if (0x19 < (byte)__dest[uVar1] - 0x41) {
      bVar5 = 0;
    }
    __dest[uVar1] = bVar5 | __dest[uVar1];
    uVar1 = uVar1 + 1;
  } while (param_4 != uVar1);
LAB_0077e958:
  local_80 = param_4;
  puStack_78 = __dest;
  local_70 = param_4;
  if (param_6 == 0) {
    local_58 = 0;
    local_68 = 0;
    puStack_60 = &DAT_00000004;
  }
  else {
    __n = param_6 << 5;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    puStack_60 = (undefined1 *)FUN_004b25a4(__n,4);
    if (puStack_60 == (undefined1 *)0x0) {
                    /* try { // try from 0077ea00 to 0077ea0b has its CatchHandler @ 0077ea10 */
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(4,__n);
    }
    local_68 = param_6;
    memcpy(puStack_60,param_5,__n);
    local_58 = param_6;
  }
                    /* try { // try from 0077e9a0 to 0077e9b3 has its CatchHandler @ 0077ea2c */
  FUN_007b2a8c(&local_98,(long)param_2 + 0x2d0,&local_80,&local_68);
  if ((local_98 != -1) && (local_98 != 0)) {
    free(local_90);
  }
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 0077ea48  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::add_root_certificate =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::add_root_certificate
    */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::add_root_certificate
          (void *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)((long)param_2 + 0x230);
  if (lVar2 == *(long *)((long)param_2 + 0x220)) {
                    /* try { // try from 0077ea74 to 0077ea7b has its CatchHandler @ 0077eab0 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<rustls_pki_types::PrivateKeyDer>>::grow_one
              ((long)param_2 + 0x220);
  }
  uVar3 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  puVar1 = (undefined8 *)(*(long *)((long)param_2 + 0x228) + lVar2 * 0x20);
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(long *)((long)param_2 + 0x230) = lVar2 + 1;
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 0077eadc  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::build =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::build */

undefined1  [16] __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::build(void *param_1)

{
  ulong uVar1;
  long *******ppppppplVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 *puVar11;
  long *******ppppppplVar12;
  ulong uVar13;
  long *******ppppppplVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  undefined1 uVar16;
  long *plVar17;
  long ******pppppplVar18;
  long *****ppppplVar19;
  long ******pppppplVar20;
  long ****pppplVar21;
  long lVar22;
  long *****ppppplVar23;
  long *******ppppppplVar24;
  ulong uVar25;
  ulong uVar26;
  void *pvVar27;
  byte bVar28;
  long lVar29;
  bool bVar30;
  long lVar31;
  long ******pppppplVar32;
  long ******pppppplVar33;
  long ******pppppplVar34;
  long ******pppppplVar35;
  long ******pppppplVar36;
  long ******pppppplVar37;
  undefined1 auVar38 [16];
  ulong local_9c8;
  undefined8 *local_9c0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  long local_948;
  void *pvStack_940;
  undefined8 *local_938;
  long *******local_930;
  long *******ppppppplStack_928;
  long *******local_920;
  long ******pppppplStack_918;
  long ******local_910;
  long ******pppppplStack_908;
  long ******local_900;
  ulong local_8f8 [43];
  long local_7a0;
  void *local_798;
  long local_790;
  long *******local_788;
  long *******local_780;
  long local_778;
  long local_770;
  void *local_768;
  long local_760;
  long ******local_758;
  void *pvStack_750;
  long local_748;
  long local_740;
  void *local_738;
  undefined8 local_730;
  long ******local_728;
  undefined4 local_720;
  undefined8 local_718;
  undefined4 local_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined8 local_6d8 [3];
  long local_6c0;
  long *******ppppppplStack_6b0;
  undefined8 local_6a8;
  long *******local_6a0;
  long *local_698;
  undefined **local_690;
  byte local_688;
  byte local_687;
  undefined1 local_686;
  undefined1 local_685;
  byte local_684;
  undefined1 local_683;
  byte local_681;
  undefined1 local_680;
  byte local_67f;
  byte local_67e;
  byte local_67d;
  byte local_67c;
  byte local_67b;
  byte local_67a;
  undefined1 local_679;
  char local_678;
  undefined1 local_677;
  long *******local_676;
  long *******ppppppplStack_66e;
  undefined1 local_666;
  byte local_665;
  byte local_664;
  long *******local_660;
  long *******ppppppplStack_658;
  long *******local_650;
  long ******local_640;
  long ******local_638;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  long ******local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined1 uStack_5d0;
  undefined7 uStack_5cf;
  long *local_5c8;
  undefined **local_5c0;
  long *******local_5b8;
  long *******ppppppplStack_5b0;
  long *******local_5a8;
  long *******local_5a0;
  long *******ppppppplStack_598;
  long *******local_590;
  long *local_588;
  long ******local_580;
  long ******pppppplStack_578;
  long ******pppppplStack_570;
  long ******pppppplStack_568;
  long *******local_560;
  long *******ppppppplStack_558;
  long *******local_550;
  long *******ppppppplStack_548;
  long *******local_540;
  long *******ppppppplStack_538;
  undefined8 local_530;
  long ******pppppplStack_528;
  long ******local_520;
  long ******pppppplStack_518;
  long ******local_510;
  long *******ppppppplStack_508;
  long ******local_500;
  long ******pppppplStack_4f8;
  long ******local_4f0;
  long ******pppppplStack_4e8;
  long ******local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  long *******local_4b0;
  long *******ppppppplStack_4a8;
  long *******ppppppplStack_4a0;
  long *******ppppppplStack_498;
  long *******local_490;
  long *******ppppppplStack_488;
  long ******pppppplStack_480;
  long ******pppppplStack_478;
  long ******local_470;
  long ******pppppplStack_468;
  long ******pppppplStack_460;
  long ******pppppplStack_458;
  long ******local_450;
  long ******pppppplStack_448;
  long ******pppppplStack_440;
  long ******pppppplStack_438;
  long *******local_430;
  undefined **local_428;
  long ******local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined1 auStack_3f8 [24];
  long *******local_3e0;
  long *******ppppppplStack_3d8;
  long *******local_3d0;
  long *******ppppppplStack_3c8;
  long *******local_3c0;
  long ******pppppplStack_3b8;
  long ******local_3b0;
  long ******pppppplStack_3a8;
  long ******local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  long ******pppppplStack_370;
  long ******pppppplStack_368;
  long ******local_360;
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
  long lStack_2b0;
  void *pvStack_2a8;
  undefined8 *local_2a0;
  undefined1 local_290;
  long *******local_280;
  long *******ppppppplStack_278;
  long *******local_270;
  long ******pppppplStack_268;
  long ******local_260;
  long ******pppppplStack_258;
  long ******local_250;
  long *******local_240;
  long *******ppppppplStack_238;
  long *******local_230;
  long ******local_228;
  long *******local_220;
  long *******ppppppplStack_218;
  undefined1 local_210;
  long *******local_200;
  long *******ppppppplStack_1f8;
  long *******local_1f0;
  long *******ppppppplStack_1e8;
  long *******local_1e0;
  long *******ppppppplStack_1d8;
  long ******local_1d0;
  long ******pppppplStack_1c8;
  long ******local_1c0;
  long ******pppppplStack_1b8;
  long ******local_1b0;
  long ******pppppplStack_1a8;
  long ******local_1a0;
  long ******pppppplStack_198;
  long ******local_190;
  long ******pppppplStack_188;
  long ******local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  long ******local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  
  memcpy(&local_9a8,param_1,0x348);
  if (local_6a0 == (long *******)0x0) {
    local_650 = *(long ********)((long)param_1 + 0x218);
    ppppppplStack_658 = *(long ********)((long)param_1 + 0x210);
    local_660 = *(long ********)((long)param_1 + 0x208);
    if ((local_684 & 1) != 0) {
                    /* try { // try from 0077ebe8 to 0077ebef has its CatchHandler @ 007807e8 */
      FUN_00797258(&local_200);
      ppppppplVar12 = local_650;
      if (local_650 == local_660) {
                    /* try { // try from 0077ec00 to 0077ec07 has its CatchHandler @ 00780770 */
        <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Proxy>>::grow_one(&local_660);
      }
      ppppppplVar14 = ppppppplStack_658 + (long)ppppppplVar12 * 0x11;
      ppppppplVar14[3] = (long ******)ppppppplStack_1e8;
      ppppppplVar14[2] = (long ******)local_1f0;
      ppppppplVar14[5] = (long ******)ppppppplStack_1d8;
      ppppppplVar14[4] = (long ******)local_1e0;
      ppppppplVar14[7] = pppppplStack_1c8;
      ppppppplVar14[6] = local_1d0;
      ppppppplVar14[9] = pppppplStack_1b8;
      ppppppplVar14[8] = local_1c0;
      ppppppplVar14[0x10] = local_180;
      local_650 = (long *******)((long)ppppppplVar12 + 1);
      ppppppplVar14[0xd] = pppppplStack_198;
      ppppppplVar14[0xc] = local_1a0;
      ppppppplVar14[0xf] = pppppplStack_188;
      ppppppplVar14[0xe] = local_190;
      ppppppplVar14[0xb] = pppppplStack_1a8;
      ppppppplVar14[10] = local_1b0;
      ppppppplVar14[1] = (long ******)ppppppplStack_1f8;
      *ppppppplVar14 = (long ******)local_200;
    }
    local_1e0 = local_650;
    ppppppplStack_1f8 = (long *******)&DAT_00000001;
    local_200 = (long *******)&DAT_00000001;
    ppppppplStack_1e8 = ppppppplStack_658;
    local_1f0 = local_660;
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_640 = (long ******)FUN_004b25a4(0x28,8);
    if (local_640 == (long ******)0x0) {
                    /* try { // try from 0077ef24 to 0077ef2f has its CatchHandler @ 00780b34 */
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x28);
    }
    local_640[1] = (long *****)ppppppplStack_1f8;
    *local_640 = (long *****)local_200;
    local_640[3] = (long *****)ppppppplStack_1e8;
    local_640[2] = (long *****)local_1f0;
    local_640[4] = (long *****)local_1e0;
    if (local_678 == '\x01') {
                    /* try { // try from 0077ef38 to 0077ef8b has its CatchHandler @ 00780b64 */
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_fmt
                (&DAT_002e256a,0xc1,&PTR_s__root__cargo_registry_src_index__00adb850);
    }
    __rustc::__rust_no_alloc_shim_is_unstable_v2();
    local_5c8 = (long *)FUN_004b25a4(0x10,8);
    if (local_5c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(8,0x10);
    }
    bVar8 = local_698 == (long *)0x0;
    local_5c0 = (undefined **)&DAT_00ad8d38;
    local_5c8[1] = 1;
    *local_5c8 = 1;
    plVar17 = local_5c8;
    ppuVar6 = local_5c0;
    lVar29 = local_6c0;
    ppppppplVar14 = ppppppplStack_6b0;
    ppppppplVar12 = ppppppplStack_1d8;
    if (local_698 != (long *)0x0) {
      do {
        lVar22 = *local_5c8;
        cVar3 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(local_5c8,0x10);
        if (bVar30) {
          *local_5c8 = lVar22 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar17 = local_698;
      ppuVar6 = local_690;
      ppppppplVar14 = ppppppplStack_6b0;
      if (lVar22 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077ecf4 to 0077ecfb has its CatchHandler @ 007807c8 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(&local_5c8);
        ppuVar6 = local_690;
        lVar29 = local_6c0;
        ppppppplVar14 = ppppppplStack_6b0;
        ppppppplVar12 = ppppppplStack_1d8;
      }
    }
    ppppppplStack_1d8 = ppppppplVar14;
    local_5c0 = ppuVar6;
    bVar30 = lVar29 == 0;
    local_5c8 = plVar17;
    if (lVar29 != 0) {
                    /* try { // try from 0077ed8c to 0077ed9f has its CatchHandler @ 0078085c */
      FUN_007d43b0(&local_3e0,plVar17,local_5c0,&local_200);
      local_1e0 = local_3d0;
      ppppppplStack_1f8 = (long *******)&DAT_00000001;
      local_200 = (long *******)&DAT_00000001;
      ppppppplStack_1e8 = ppppppplStack_3d8;
      local_1f0 = local_3e0;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      plVar17 = (long *)FUN_004b25a4(0x28,8);
      if (plVar17 == (long *)0x0) {
                    /* try { // try from 0077ef90 to 0077ef9b has its CatchHandler @ 00780b0c */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x28);
      }
      plVar17[4] = (long)local_1e0;
      plVar17[1] = (long)ppppppplStack_1f8;
      *plVar17 = (long)local_200;
      plVar17[3] = (long)ppppppplStack_1e8;
      plVar17[2] = (long)local_1f0;
      local_5c0 = &PTR_FUN_00ad8d58;
      local_5c8 = plVar17;
      ppppppplVar12 = ppppppplStack_1d8;
    }
    do {
      ppppppplStack_1d8 = ppppppplVar12;
      lVar22 = *plVar17;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar9) {
        *plVar17 = lVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppppplVar12 = ppppppplStack_1d8;
    } while (cVar3 != '\0');
    if (-1 < lVar22) {
                    /* try { // try from 0077ee14 to 0077ee1f has its CatchHandler @ 00780880 */
      FUN_007ba300(&local_5b8,local_5c8,local_5c0);
      ppppppplVar12 = local_5b8;
      uVar5 = local_720;
      pppppplVar20 = local_728;
LAB_0077ee2c:
      if (*local_5b8 == (long ******)0x1) goto code_r0x0077ee38;
      ClearExclusiveLocal();
                    /* try { // try from 0077efa8 to 0077efaf has its CatchHandler @ 00780864 */
      ppppppplVar14 = (long *******)FUN_0079d310(local_5b8 + 2);
      do {
        pppppplVar18 = *local_5b8;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(local_5b8,0x10);
        if (bVar9) {
          *local_5b8 = (long ******)((long)pppppplVar18 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppppplVar24 = ppppppplVar14;
      if ((long ******)((long)pppppplVar18 + -1) == (long ******)0x0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077efcc to 0077efd3 has its CatchHandler @ 00780760 */
        <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
        drop_slow(&local_5b8);
      }
      goto LAB_0077efd8;
    }
    goto LAB_007803fc;
  }
                    /* try { // try from 0077eb20 to 0077eb33 has its CatchHandler @ 00780888 */
  bVar30 = true;
  bVar8 = true;
  FUN_0077df7c(param_1);
  bVar4 = true;
  ppppppplVar14 = local_6a0;
  if (local_930 != (long *******)0xffffffffffffffff) goto LAB_0077eb48;
LAB_0077ed20:
  lVar29 = local_790 + 1;
  pvVar27 = local_798;
  while (lVar29 = lVar29 + -1, lVar29 != 0) {
                    /* try { // try from 0077ed38 to 0077ed3b has its CatchHandler @ 007809a4 */
    FUN_007864bc(pvVar27);
    pvVar27 = (void *)((long)pvVar27 + 0x88);
  }
  if (local_7a0 != 0) {
    free(local_798);
  }
  goto LAB_0077fb00;
code_r0x0077ee38:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(local_5b8,0x10);
  if (bVar9) {
    *local_5b8 = (long ******)0x0;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto code_r0x0077ee4c;
  goto LAB_0077ee2c;
code_r0x0077f114:
  lVar31 = lVar31 + 0x20;
  ppppppplVar14 = ppppppplVar2;
  if (lVar22 - lVar31 == 0) goto LAB_0077f728;
  goto LAB_0077f0d4;
code_r0x0077ee4c:
  if (local_5b8[1] == (long ******)0x1) {
    *local_5b8 = (long ******)0x1;
    ppppppplVar14 = local_5b8;
    ppppppplVar24 = local_5b8;
  }
  else {
                    /* try { // try from 0077ee64 to 0077ef1f has its CatchHandler @ 00780a88 */
    auVar38 = alloc::sync::arcinner_layout_for_value_layout(8,0xb0);
    lVar22 = auVar38._8_8_;
    ppppppplVar24 = auVar38._0_8_;
    ppppppplVar14 = ppppppplVar24;
    if (lVar22 != 0) {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      ppppppplVar14 = (long *******)FUN_004b25a4(lVar22,ppppppplVar24);
    }
    if (ppppppplVar14 == (long *******)0x0) {
                    /* WARNING: Subroutine does not return */
      alloc::alloc::handle_alloc_error(ppppppplVar24,lVar22);
    }
    ppppppplVar14[1] = (long ******)0x1;
    *ppppppplVar14 = (long ******)0x1;
    pppppplVar34 = local_5b8[5];
    pppppplVar33 = local_5b8[4];
    pppppplVar32 = local_5b8[7];
    pppppplVar18 = local_5b8[6];
    pppppplVar35 = local_5b8[2];
    ppppppplVar14[3] = local_5b8[3];
    ppppppplVar14[2] = pppppplVar35;
    ppppppplVar14[5] = pppppplVar34;
    ppppppplVar14[4] = pppppplVar33;
    ppppppplVar14[7] = pppppplVar32;
    ppppppplVar14[6] = pppppplVar18;
    pppppplVar33 = local_5b8[0xc];
    pppppplVar32 = local_5b8[0xf];
    pppppplVar18 = local_5b8[0xe];
    pppppplVar35 = local_5b8[9];
    pppppplVar34 = local_5b8[8];
    pppppplVar37 = local_5b8[0xb];
    pppppplVar36 = local_5b8[10];
    ppppppplVar14[0xd] = local_5b8[0xd];
    ppppppplVar14[0xc] = pppppplVar33;
    ppppppplVar14[0xf] = pppppplVar32;
    ppppppplVar14[0xe] = pppppplVar18;
    ppppppplVar14[9] = pppppplVar35;
    ppppppplVar14[8] = pppppplVar34;
    ppppppplVar14[0xb] = pppppplVar37;
    ppppppplVar14[10] = pppppplVar36;
    pppppplVar33 = local_5b8[0x14];
    pppppplVar32 = local_5b8[0x17];
    pppppplVar18 = local_5b8[0x16];
    pppppplVar35 = local_5b8[0x11];
    pppppplVar34 = local_5b8[0x10];
    pppppplVar37 = local_5b8[0x13];
    pppppplVar36 = local_5b8[0x12];
    ppppppplVar14[0x15] = local_5b8[0x15];
    ppppppplVar14[0x14] = pppppplVar33;
    ppppppplVar14[0x17] = pppppplVar32;
    ppppppplVar14[0x16] = pppppplVar18;
    ppppppplVar14[0x11] = pppppplVar35;
    ppppppplVar14[0x10] = pppppplVar34;
    ppppppplVar14[0x13] = pppppplVar37;
    ppppppplVar14[0x12] = pppppplVar36;
    ppppppplVar24 = ppppppplVar14;
    if (local_5b8 != (long *******)0xffffffffffffffff) {
      local_5b8 = local_5b8 + 1;
      do {
        pppppplVar18 = *local_5b8;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(local_5b8,0x10);
        if (bVar9) {
          *local_5b8 = (long ******)((long)pppppplVar18 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((long ******)((long)pppppplVar18 + -1) == (long ******)0x0) {
        DataMemoryBarrier(2,1);
        local_5b8 = ppppppplVar14;
        free(ppppppplVar12);
        ppppppplVar24 = local_5b8;
      }
    }
  }
LAB_0077efd8:
  local_5b8 = ppppppplVar24;
  ppppppplVar24 = local_780;
  ppppppplVar12 = local_788;
  ppppppplVar14[0xe] = pppppplVar20;
  *(undefined4 *)(ppppppplVar14 + 0xf) = uVar5;
  lVar22 = local_8f8[0] - 2;
  if (local_8f8[0] < 2) {
    lVar22 = 1;
  }
  if (lVar22 == 0) {
    ppppppplStack_598 = (long *******)&DAT_00000008;
    lVar22 = local_778 * 0x20;
    local_5a0 = (long *******)0x0;
    local_590 = (long *******)0x0;
    ppppppplVar2 = local_780 + local_778 * 4;
    local_3e0 = local_780;
    ppppppplStack_3d8 = local_780;
    local_3d0 = local_788;
    ppppppplVar14 = local_780;
    ppppppplStack_3c8 = ppppppplVar2;
    if (local_778 != 0) {
      lVar31 = 0;
LAB_0077f0d4:
      if (*(long ********)((long)ppppppplVar24 + lVar31) != (long *******)0x2) {
        local_1f0 = *(long ********)((long)ppppppplVar24 + lVar31 + 0x10);
        ppppppplStack_1f8 = *(long ********)((long)ppppppplVar24 + lVar31 + 8);
        ppppppplStack_1e8 = *(long ********)((long)ppppppplVar24 + lVar31 + 0x18);
                    /* try { // try from 0077f0fc to 0077f107 has its CatchHandler @ 007808bc */
        local_200 = *(long ********)((long)ppppppplVar24 + lVar31);
        ppppppplVar14 = (long *******)FUN_007ba518(&local_200,&local_5a0);
        if (ppppppplVar14 == (long *******)0x0) goto code_r0x0077f114;
        if (lVar22 + -0x20 != lVar31) {
          puVar11 = (undefined8 *)((long)ppppppplVar24 + lVar31 + 0x30);
          uVar13 = (lVar22 - lVar31) - 0x20U >> 5;
          do {
            if (puVar11[-1] != 0) {
              free((void *)*puVar11);
            }
            uVar13 = uVar13 - 1;
            puVar11 = puVar11 + 4;
          } while (uVar13 != 0);
        }
        if (ppppppplVar12 != (long *******)0x0) {
          free(ppppppplVar24);
        }
        bVar9 = true;
        goto LAB_0077f9ac;
      }
      ppppppplVar14 = (long *******)((long)ppppppplVar24 + lVar31 + 0x20);
    }
LAB_0077f728:
    ppppppplStack_3d8 = ppppppplVar14;
    if ((long)ppppppplVar2 - (long)ppppppplVar14 != 0) {
      uVar13 = (ulong)((long)ppppppplVar2 - (long)ppppppplVar14) >> 5;
      ppppppplVar14 = ppppppplVar14 + 2;
      do {
        if (ppppppplVar14[-1] != (long ******)0x0) {
          free(*ppppppplVar14);
        }
        uVar13 = uVar13 - 1;
        ppppppplVar14 = ppppppplVar14 + 4;
      } while (uVar13 != 0);
    }
    if (ppppppplVar12 != (long *******)0x0) {
      free(ppppppplVar24);
    }
    if ((local_681 & 1) != 0) {
      if ((ulong)((long)local_5a0 - (long)local_590) < 0x95) {
                    /* try { // try from 007803d4 to 007803e7 has its CatchHandler @ 00780b70 */
        FUN_0079be54(&local_5a0,local_590,0x95,8,0x48);
      }
      local_200 = (long *******)&local_590;
      ppppppplStack_1f8 = local_590;
      local_1f0 = ppppppplStack_598;
                    /* try { // try from 0077f7b8 to 0077f827 has its CatchHandler @ 00780b70 */
      FUN_007788b8(&DAT_00ad8d78,&DAT_00adb760,&local_200);
    }
    uVar15 = 0;
    uVar13 = *(ulong *)(PTR_PTR_00b00e48 + 8);
    uVar25 = uVar13 * 8;
    if ((uVar13 >> 0x3d != 0) || (0x7ffffffffffffff8 < uVar25)) {
LAB_0077f81c:
                    /* WARNING: Subroutine does not return */
      alloc::raw_vec::handle_error(uVar15,uVar25);
    }
    pvVar27 = *(void **)PTR_PTR_00b00e48;
    if (uVar25 == 0) {
      local_9c8 = 0;
      local_9c0 = (undefined8 *)&DAT_00000008;
      if (uVar13 == 0) goto LAB_0077f974;
LAB_0077f8a0:
      memcpy(local_9c0,pvVar27,uVar25);
      uVar25 = uVar13;
      if (local_665 != 0xff) {
        uVar26 = 0;
        puVar11 = local_9c0;
        do {
          uVar1 = uVar26 + 1;
          if ((ushort)(*(short *)*puVar11 - 2U) <= (ushort)local_665 &&
              (ushort)local_665 != (ushort)(*(short *)*puVar11 - 2U)) {
            uVar25 = uVar26;
            if (uVar1 < uVar13) {
              lVar22 = ~uVar26 + uVar13;
              puVar11 = puVar11 + 1;
              do {
                if ((ushort)local_665 <= (ushort)(*(short *)*puVar11 - 2U)) {
                  local_9c0[uVar26] = (short *)*puVar11;
                  uVar26 = uVar26 + 1;
                }
                lVar22 = lVar22 + -1;
                puVar11 = puVar11 + 1;
                uVar25 = uVar26;
              } while (lVar22 != 0);
            }
            break;
          }
          uVar26 = uVar1;
          puVar11 = puVar11 + 1;
        } while (uVar13 != uVar1);
      }
      uVar13 = uVar25;
      if (local_664 != 0xff) {
        if (uVar25 != 0) {
          uVar13 = 0;
          puVar11 = local_9c0;
          do {
            uVar26 = uVar13 + 1;
            if ((ushort)local_664 < (ushort)(*(short *)*puVar11 - 2U)) {
              if (uVar26 < uVar25) {
                lVar22 = ~uVar13 + uVar25;
                puVar11 = puVar11 + 1;
                do {
                  if ((ushort)(*(short *)*puVar11 - 2U) <= (ushort)local_664) {
                    local_9c0[uVar13] = (short *)*puVar11;
                    uVar13 = uVar13 + 1;
                  }
                  lVar22 = lVar22 + -1;
                  puVar11 = puVar11 + 1;
                } while (lVar22 != 0);
              }
              goto LAB_0077f938;
            }
            uVar13 = uVar26;
            puVar11 = puVar11 + 1;
          } while (uVar25 != uVar26);
          goto LAB_0077f940;
        }
        goto LAB_0077f974;
      }
LAB_0077f938:
      uVar25 = uVar13;
      if (uVar13 == 0) goto LAB_0077f974;
LAB_0077f940:
                    /* try { // try from 0077f944 to 0077f98f has its CatchHandler @ 00780704 */
      puVar11 = (undefined8 *)<rustls::crypto::rustls::crypto::CryptoProvider>::get_default();
      if (puVar11 == (undefined8 *)0x0) {
                    /* try { // try from 0077fcec to 0077fcf3 has its CatchHandler @ 00780704 */
        rustls::crypto::ring::default_provider(&local_1f0);
        ppppppplStack_1f8 = (long *******)&DAT_00000001;
        local_200 = (long *******)&DAT_00000001;
        __rustc::__rust_no_alloc_shim_is_unstable_v2();
        plVar17 = (long *)FUN_004b25a4(0x80,8);
        if (plVar17 == (long *)0x0) {
                    /* try { // try from 007803f0 to 007803fb has its CatchHandler @ 007808ec */
                    /* WARNING: Subroutine does not return */
          alloc::alloc::handle_alloc_error(8,0x80);
        }
        plVar17[9] = (long)pppppplStack_1b8;
        plVar17[8] = (long)local_1c0;
        plVar17[0xb] = (long)pppppplStack_1a8;
        plVar17[10] = (long)local_1b0;
        plVar17[0xd] = (long)pppppplStack_198;
        plVar17[0xc] = (long)local_1a0;
        plVar17[0xf] = (long)pppppplStack_188;
        plVar17[0xe] = (long)local_190;
        plVar17[1] = (long)ppppppplStack_1f8;
        *plVar17 = (long)local_200;
        plVar17[3] = (long)ppppppplStack_1e8;
        plVar17[2] = (long)local_1f0;
        plVar17[5] = (long)ppppppplStack_1d8;
        plVar17[4] = (long)local_1e0;
        plVar17[7] = (long)pppppplStack_1c8;
        plVar17[6] = (long)local_1d0;
      }
      else {
        plVar17 = (long *)*puVar11;
        do {
          lVar22 = *plVar17;
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar9) {
            *plVar17 = lVar22 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar22 < 0) goto LAB_007803fc;
      }
      pppppplStack_578 = (long ******)plVar17[9];
      local_580 = (long ******)plVar17[8];
      pppppplStack_568 = (long ******)plVar17[0xb];
      pppppplStack_570 = (long ******)plVar17[10];
      do {
        lVar22 = *plVar17;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar22 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_588 = plVar17;
      if (lVar22 < 0) goto LAB_007803fc;
                    /* try { // try from 0077fd5c to 0077fd7b has its CatchHandler @ 007806cc */
      <rustls::client::client_conn::rustls::client::client_conn::ClientConfig>::
      builder_with_provider(&local_3e0,plVar17);
      FUN_007ddbec(&local_200,&local_3e0,local_9c0,uVar25);
      bVar9 = local_200 == (long *******)0xfffffffffffffffc;
      if (bVar9) {
        ppppppplStack_3d8 = local_1f0;
        local_3e0 = ppppppplStack_1f8;
        ppppppplStack_3c8 = local_1e0;
        local_3d0 = ppppppplStack_1e8;
        pppppplStack_3b8 = local_1d0;
        local_3c0 = ppppppplStack_1d8;
        local_3b0 = pppppplStack_1c8;
                    /* try { // try from 0077fdac to 0077fdbf has its CatchHandler @ 00780688 */
        ppppppplVar14 = (long *******)FUN_0076e4f4(0,extraout_x1,&DAT_002d2199,0x14);
                    /* try { // try from 0077fdc0 to 0077fdcb has its CatchHandler @ 007806cc */
        FUN_0077cde4(&local_3e0);
        bVar28 = 1;
LAB_0077fdd4:
        do {
          lVar29 = *local_588;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(local_588,0x10);
          if (bVar4) {
            *local_588 = lVar29 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar29 + -1 == 0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0077fdf0 to 0077fdfb has its CatchHandler @ 00780704 */
          <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow
                    (&local_588);
        }
      }
      else {
        local_560 = local_200;
        uStack_4c8 = uStack_168;
        local_4d0 = local_170;
        pppppplStack_4e8 = pppppplStack_188;
        local_4f0 = local_190;
        uStack_4d8 = uStack_178;
        local_4e0 = local_180;
        local_4c0 = local_160;
        pppppplStack_528 = pppppplStack_1c8;
        local_530 = local_1d0;
        pppppplStack_518 = pppppplStack_1b8;
        local_520 = local_1c0;
        ppppppplStack_558 = ppppppplStack_1f8;
        ppppppplStack_508 = (long *******)pppppplStack_1a8;
        local_510 = local_1b0;
        pppppplStack_4f8 = pppppplStack_198;
        local_500 = local_1a0;
        ppppppplStack_548 = ppppppplStack_1e8;
        local_550 = local_1f0;
        ppppppplStack_538 = ppppppplStack_1d8;
        local_540 = local_1e0;
        if ((local_687 & 1) == 0) {
                    /* try { // try from 0077ff48 to 0077ff4f has its CatchHandler @ 007804b4 */
          local_430 = (long *******)FUN_00782ad4(0x10);
          bVar4 = true;
          pppppplStack_468 = pppppplStack_1b8;
          local_470 = local_1c0;
          pppppplStack_458 = pppppplStack_1a8;
          pppppplStack_460 = local_1b0;
          local_428 = (undefined **)&DAT_00adb760;
          pppppplStack_448 = pppppplStack_198;
          local_450 = local_1a0;
          pppppplStack_438 = pppppplStack_188;
          pppppplStack_440 = local_190;
          local_430[1] = (long ******)0x1;
          *local_430 = (long ******)0x1;
          ppppppplStack_4a8 = ppppppplStack_1f8;
          local_4b0 = local_200;
          ppppppplStack_498 = ppppppplStack_1e8;
          ppppppplStack_4a0 = local_1f0;
          ppppppplStack_488 = ppppppplStack_1d8;
          local_490 = local_1e0;
          pppppplStack_478 = pppppplStack_1c8;
          pppppplStack_480 = local_1d0;
          local_420 = local_180;
          uStack_418 = uStack_178;
          uStack_410 = local_170;
          uStack_408 = uStack_168;
          local_400 = local_160;
LAB_007800dc:
          bVar28 = local_687 ^ 1;
          bVar10 = local_930 == (long *******)0xffffffffffffffff;
          if (bVar10) {
            <rustls::client::builder::[0]::rustls::builder::ConfigBuilder<rustls::client::client_conn::ClientConfig,rustls::client::builder::WantsClientCert>>
            ::with_no_client_auth(&local_3e0,&local_4b0);
          }
          else {
            ppppppplStack_278 = ppppppplStack_928;
            local_280 = local_930;
            pppppplStack_268 = pppppplStack_918;
            local_270 = local_920;
            pppppplStack_258 = pppppplStack_908;
            local_260 = local_910;
            local_250 = local_900;
                    /* try { // try from 00780110 to 0078014b has its CatchHandler @ 00780674 */
            FUN_007b9bec(&local_200,&local_280,&local_4b0);
            ppppppplVar14 = ppppppplStack_1f8;
            ppppppplVar12 = local_200;
            if (local_200 == (long *******)0x2) {
              if (bVar4) goto LAB_0077fdd4;
              bVar9 = false;
              goto LAB_0077f994;
            }
            memcpy(&local_3d0,&local_1f0,0x148);
            local_3e0 = ppppppplVar12;
            ppppppplStack_3d8 = ppppppplVar14;
          }
          local_290 = local_686;
          if ((local_67f & 1) == 0) {
                    /* try { // try from 007801a4 to 007801ab has its CatchHandler @ 00780510 */
            ppppppplVar12 = (long *******)FUN_00782ad4(0x18);
                    /* try { // try from 007801ac to 007801c3 has its CatchHandler @ 00780474 */
            <alloc::vec::Vec<u8>as_core::convert::From<&str>>::from(&local_200,"http/1.1",8);
          }
          else {
                    /* try { // try from 00780180 to 00780187 has its CatchHandler @ 00780510 */
            ppppppplVar12 = (long *******)FUN_00782ad4(0x18);
                    /* try { // try from 00780188 to 0078019f has its CatchHandler @ 00780478 */
            <alloc::vec::Vec<u8>as_core::convert::From<&str>>::from(&local_200,"http/1.1",8);
          }
          ppppppplVar12[2] = (long ******)local_1f0;
          ppppppplVar12[1] = (long ******)ppppppplStack_1f8;
          *ppppppplVar12 = (long ******)local_200;
          FUN_0077b898(&local_3d0);
          local_3d0 = (long *******)&DAT_00000001;
          local_3c0 = (long *******)&DAT_00000001;
          ppppppplStack_238 = ppppppplStack_5b0;
          local_240 = local_5b8;
          local_230 = local_5a8;
          ppppppplStack_3c8 = ppppppplVar12;
          memcpy(&local_200,&local_3e0,0x158);
          do {
            ppppplVar19 = *local_640;
            cVar3 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_640,0x10);
            if (bVar8) {
              *local_640 = (long *****)((long)ppppplVar19 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((long)ppppplVar19 < 0) goto LAB_007803fc;
          local_228 = local_640;
                    /* try { // try from 00780234 to 00780243 has its CatchHandler @ 007804d0 */
          FUN_00782b30(&local_280,&local_9a8);
          pvVar27 = (void *)0x0;
          if (local_740 != -1) {
            pvVar27 = local_738;
          }
          local_210 = local_666;
          ppppppplStack_218 = ppppppplStack_66e;
          local_220 = local_676;
                    /* try { // try from 0078027c to 00780297 has its CatchHandler @ 007804c4 */
          FUN_007d7620(&local_638,&local_240,&local_200,local_228,&local_280,&local_220,pvVar27,
                       local_730,local_679,local_680);
          if (bVar4) {
            do {
              lVar22 = *local_588;
              cVar3 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(local_588,0x10);
              if (bVar8) {
                *local_588 = lVar22 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar22 + -1 == 0) {
              DataMemoryBarrier(2,1);
                    /* try { // try from 007802bc to 007802cb has its CatchHandler @ 00780704 */
              <alloc::sync::[n]::alloc::sync::Arc<rustls::crypto::CryptoProvider>>::drop_slow
                        (&local_588);
            }
          }
          if (local_9c8 != 0) {
            free(local_9c0);
          }
          if (local_687 == 0) {
            FUN_0077dd30(&local_5a0);
          }
          bVar8 = false;
          goto LAB_0077f1b8;
        }
        if ((local_688 & 1) == 0) {
          local_270 = local_590;
          ppppppplStack_278 = ppppppplStack_598;
          local_280 = local_5a0;
          local_250 = pppppplStack_568;
          pppppplStack_258 = pppppplStack_570;
          local_260 = pppppplStack_578;
          pppppplStack_268 = local_580;
          ppppppplStack_3d8 = (long *******)&DAT_00000001;
          local_3e0 = (long *******)&DAT_00000001;
          ppppppplStack_3c8 = ppppppplStack_598;
          local_3d0 = local_5a0;
          local_3a0 = pppppplStack_568;
          pppppplStack_3b8 = local_580;
          local_3c0 = local_590;
          pppppplStack_3a8 = pppppplStack_570;
          local_3b0 = pppppplStack_578;
                    /* try { // try from 00780018 to 0078001f has its CatchHandler @ 00780450 */
          local_430 = (long *******)FUN_00782ad4(0x48);
          bVar4 = true;
          local_430[5] = pppppplStack_3b8;
          local_430[4] = (long ******)local_3c0;
          local_430[7] = pppppplStack_3a8;
          local_430[6] = local_3b0;
          local_430[8] = local_3a0;
          local_428 = &PTR_FUN_00adb7b0;
          local_430[1] = (long ******)ppppppplStack_3d8;
          *local_430 = (long ******)local_3e0;
          local_430[3] = (long ******)ppppppplStack_3c8;
          local_430[2] = (long ******)local_3d0;
          local_400 = local_160;
          ppppppplStack_488 = ppppppplStack_1d8;
          local_490 = local_1e0;
          pppppplStack_478 = pppppplStack_1c8;
          pppppplStack_480 = local_1d0;
          ppppppplStack_4a8 = ppppppplStack_1f8;
          local_4b0 = local_200;
          ppppppplStack_498 = ppppppplStack_1e8;
          ppppppplStack_4a0 = local_1f0;
          pppppplStack_448 = pppppplStack_198;
          local_450 = local_1a0;
          pppppplStack_438 = pppppplStack_188;
          pppppplStack_440 = local_190;
          pppppplStack_468 = pppppplStack_1b8;
          local_470 = local_1c0;
          pppppplStack_458 = pppppplStack_1a8;
          pppppplStack_460 = local_1b0;
          uStack_418 = uStack_178;
          local_420 = local_180;
          uStack_408 = uStack_168;
          uStack_410 = local_170;
          goto LAB_007800dc;
        }
        if (local_760 == 0) {
          local_3d0 = local_590;
          ppppppplStack_3d8 = ppppppplStack_598;
          local_3e0 = local_5a0;
                    /* try { // try from 007800c4 to 007800d3 has its CatchHandler @ 0078040c */
          FUN_007d8214(&local_4b0,&local_200,&local_3e0);
          bVar4 = true;
          goto LAB_007800dc;
        }
                    /* try { // try from 0077fe60 to 0077fe67 has its CatchHandler @ 00780440 */
        FUN_0078985c(auStack_3f8,local_768,(void *)((long)local_768 + local_760 * 0x18));
        local_1e0 = local_590;
        ppppppplStack_1f8 = (long *******)&DAT_00000001;
        local_200 = (long *******)&DAT_00000001;
        ppppppplStack_1e8 = ppppppplStack_598;
        local_1f0 = local_5a0;
                    /* try { // try from 0077fe80 to 0077fe87 has its CatchHandler @ 00780420 */
        puVar11 = (undefined8 *)FUN_00782ad4(0x28);
        puVar11[4] = local_1e0;
        puVar11[1] = ppppppplStack_1f8;
        *puVar11 = local_200;
        puVar11[3] = ppppppplStack_1e8;
        puVar11[2] = local_1f0;
                    /* try { // try from 0077fe9c to 0077fea3 has its CatchHandler @ 00780414 */
        <rustls::webpki::server_verifier::rustls::webpki::server_verifier::WebPkiServerVerifier>::
        builder_with_provider(&local_200,puVar11,local_588);
                    /* try { // try from 0077fea4 to 0077febf has its CatchHandler @ 00780490 */
        FUN_007d74ac(&local_3e0,&local_200,auStack_3f8);
        <rustls::webpki::server_verifier::rustls::webpki::server_verifier::ServerCertVerifierBuilder>
        ::build(&local_280,&local_3e0);
        if (local_280 == (long *******)&DAT_fffffffffffffffe) {
          bVar4 = false;
          local_428 = &PTR_FUN_00adb800;
          pppppplStack_468 = pppppplStack_518;
          local_470 = local_520;
          pppppplStack_458 = (long ******)ppppppplStack_508;
          pppppplStack_460 = local_510;
          local_430 = ppppppplStack_278;
          pppppplStack_448 = pppppplStack_4f8;
          local_450 = local_500;
          pppppplStack_438 = pppppplStack_4e8;
          pppppplStack_440 = local_4f0;
          ppppppplStack_4a8 = ppppppplStack_558;
          local_4b0 = local_560;
          ppppppplStack_498 = ppppppplStack_548;
          ppppppplStack_4a0 = local_550;
          ppppppplStack_488 = ppppppplStack_538;
          local_490 = local_540;
          pppppplStack_478 = pppppplStack_528;
          pppppplStack_480 = local_530;
          local_420 = local_4e0;
          uStack_418 = uStack_4d8;
          uStack_410 = local_4d0;
          uStack_408 = uStack_4c8;
          local_400 = local_4c0;
          goto LAB_007800dc;
        }
        ppppppplStack_1f8 = ppppppplStack_278;
        local_200 = local_280;
        local_1f0 = local_270;
                    /* try { // try from 0078030c to 00780313 has its CatchHandler @ 00780490 */
        ppppppplVar14 = (long *******)FUN_0077e168(&local_200);
                    /* try { // try from 00780314 to 0078031f has its CatchHandler @ 00780400 */
        FUN_0077b670(&local_560);
        bVar28 = 0;
        bVar9 = true;
      }
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar15 = 8;
      local_9c0 = (undefined8 *)FUN_004b25a4(uVar25,8);
      if (local_9c0 == (undefined8 *)0x0) goto LAB_0077f81c;
      local_9c8 = uVar13;
      if (uVar13 != 0) goto LAB_0077f8a0;
LAB_0077f974:
      bVar28 = 1;
      bVar9 = true;
      ppppppplVar14 = (long *******)FUN_0076f99c(&DAT_002e2519,0x1c);
    }
LAB_0077f994:
    if (local_9c8 != 0) {
      free(local_9c0);
    }
    if ((bVar28 & 1) != 0) {
LAB_0077f9ac:
      if (local_590 != (long *******)0x0) {
        ppppppplVar12 = ppppppplStack_598 + 4;
        ppppppplVar24 = local_590;
        do {
          if ((ppppppplVar12[-4] != (long ******)0xffffffffffffffff) &&
             (ppppppplVar12[-4] != (long ******)0x0)) {
            free(ppppppplVar12[-3]);
          }
          if ((ppppppplVar12[-1] != (long ******)0xffffffffffffffff) &&
             (ppppppplVar12[-1] != (long ******)0x0)) {
            free(*ppppppplVar12);
          }
          if ((ppppppplVar12[2] < (long ******)0xfffffffffffffffe) &&
             (ppppppplVar12[2] != (long ******)0x0)) {
            free(ppppppplVar12[3]);
          }
          ppppppplVar24 = (long *******)((long)ppppppplVar24 + -1);
          ppppppplVar12 = ppppppplVar12 + 9;
        } while (ppppppplVar24 != (long *******)0x0);
      }
      if (local_5a0 != (long *******)0x0) {
        free(ppppppplStack_598);
      }
    }
    bVar4 = false;
  }
  else {
    if (lVar22 == 1) {
      memcpy(&local_200,local_8f8,0x158);
      pppppplVar20 = local_640;
      local_550 = local_5a8;
      ppppppplStack_558 = ppppppplStack_5b0;
      local_560 = local_5b8;
      do {
        ppppplVar19 = *local_640;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(local_640,0x10);
        if (bVar8) {
          *local_640 = (long *****)((long)ppppplVar19 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((long)ppppplVar19 < 0) goto LAB_007803fc;
      local_580 = local_640;
      ppppppplStack_3d8 = _UNK_002bfb50;
      local_3e0 = _s__002bfb48;
      ppppppplStack_3c8 = _UNK_002bfb60;
      local_3d0 = _DAT_002bfb58;
                    /* try { // try from 0077f058 to 0077f083 has its CatchHandler @ 00780818 */
      puVar11 = (undefined8 *)FUN_007c2f68(&local_9a8,&local_3e0);
      if (puVar11 == (undefined8 *)0x0) {
        uVar16 = 2;
      }
      else {
        (**(code **)*puVar11)(&local_3e0,puVar11 + 3,puVar11[1],puVar11[2]);
        uVar16 = *(undefined1 *)(puVar11 + 4);
      }
      local_3c0 = (long *******)CONCAT71(local_3c0._1_7_,uVar16);
      local_270 = (long *******)CONCAT71(local_270._1_7_,local_666);
      ppppppplStack_278 = ppppppplStack_66e;
      local_280 = local_676;
      pvVar27 = (void *)0x0;
      if (local_740 != -1) {
        pvVar27 = local_738;
      }
                    /* try { // try from 0077f184 to 0077f1a3 has its CatchHandler @ 007807e0 */
      FUN_007d7620(&local_638,&local_560,&local_200,pppppplVar20,&local_3e0,&local_280,pvVar27,
                   local_730,local_679,local_680);
      bVar10 = true;
      bVar8 = true;
LAB_0077f1b8:
      do {
        lVar22 = *local_5c8;
        cVar3 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(local_5c8,0x10);
        if (bVar30) {
          *local_5c8 = lVar22 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar22 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077f1d0 to 0077f1d7 has its CatchHandler @ 00780b64 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(&local_5c8);
      }
      local_638 = local_728;
      uStack_630 = local_720;
      uStack_5d0 = local_685;
                    /* try { // try from 0077f1fc to 0077f2bb has its CatchHandler @ 00780ab8 */
      lVar22 = FUN_007de0d4(&uStack_600);
      *(undefined8 *)(lVar22 + 0x40) = local_708;
      *(undefined4 *)(lVar22 + 0x48) = local_700;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      ppppppplVar12 = (long *******)FUN_004b25a4(0x10,8);
      if (ppppppplVar12 == (long *******)0x0) {
                    /* try { // try from 007803a4 to 007803af has its CatchHandler @ 00780ab8 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x10);
      }
      ppppppplStack_1f8 = (long *******)&DAT_00adc128;
      ppppppplVar12[1] = (long ******)0x1;
      *ppppppplVar12 = (long ******)0x1;
      do {
        pppppplVar20 = *ppppppplVar12;
        cVar3 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
        if (bVar30) {
          *ppppppplVar12 = (long ******)((long)pppppplVar20 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_200 = ppppppplVar12;
      if ((long)pppppplVar20 < 0) {
LAB_007803fc:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x780400);
        (*pcVar7)();
      }
      local_500 = (long ******)&DAT_00adc128;
      pppppplStack_4e8 = (long ******)CONCAT53(pppppplStack_4e8._3_5_,0x101);
      local_560 = (long *******)0x0;
      local_550 = (long *******)0x0;
      local_540 = (long *******)0x0;
      local_530 = (long ******)0x0;
      pppppplStack_528 = (long ******)CONCAT53(pppppplStack_528._3_5_,0x20000);
      pppppplStack_518 = (long ******)_UNK_002a0bb8;
      local_520 = (long ******)_DAT_002a0bb0;
      local_510 = (long ******)((ulong)local_510 & 0xffffffff00000000);
      pppppplStack_4f8 = (long ******)0x0;
      do {
        pppppplVar20 = *ppppppplVar12;
        cVar3 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
        if (bVar30) {
          *ppppppplVar12 = (long ******)((long)pppppplVar20 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppppplStack_508 = ppppppplVar12;
      if ((long ******)((long)pppppplVar20 + -1) == (long ******)0x0) {
        DataMemoryBarrier(2,1);
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(&local_200);
      }
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      ppppplVar19 = (long *****)FUN_004b25a4(0x10,8);
      if (ppppplVar19 == (long *****)0x0) {
                    /* try { // try from 007803b4 to 007803bf has its CatchHandler @ 00780ac8 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x10);
      }
      ppppplVar19[1] = (long ****)0x1;
      *ppppplVar19 = (long ****)0x1;
      if (pppppplStack_4f8 != (long ******)0x0) {
        do {
          pppplVar21 = (long ****)*pppppplStack_4f8;
          cVar3 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(pppppplStack_4f8,0x10);
          if (bVar30) {
            *pppppplStack_4f8 = (long *****)((long)pppplVar21 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((long ****)((long)pppplVar21 + -1) == (long ****)0x0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0077f30c to 0077f313 has its CatchHandler @ 007806b4 */
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
          drop_slow(&pppppplStack_4f8);
        }
      }
      local_4f0 = (long ******)&DAT_00adc0f8;
      local_510 = (long ******)CONCAT44(local_510._4_4_,local_710);
      pppppplStack_518 = (long ******)local_718;
      local_520 = (long ******)local_6a8;
      uVar15 = local_530;
      if ((local_67e & 1) != 0) {
        local_530 = (long ******)CONCAT71(local_530._1_7_,1);
        uVar15 = local_530;
      }
      if ((local_67d & 1) != 0) {
        pppppplStack_528 = (long ******)CONCAT71(pppppplStack_528._1_7_,1);
      }
      if ((local_67c & 1) != 0) {
        local_530._3_5_ = (undefined5)((ulong)uVar15 >> 0x18);
        local_530._0_2_ = (undefined2)uVar15;
        local_530._0_3_ = CONCAT12(1,(undefined2)local_530);
        uVar15 = local_530;
      }
      if ((local_67b & 1) != 0) {
        local_530._7_1_ = (undefined1)((ulong)uVar15 >> 0x38);
        local_530._0_7_ = CONCAT16(1,(int6)uVar15);
        uVar15 = local_530;
      }
      local_530 = (long ******)uVar15;
      if ((local_67a & 1) != 0) {
        local_530._2_6_ = (undefined6)((ulong)uVar15 >> 0x10);
        local_530._0_2_ = CONCAT11(1,(char)uVar15);
      }
      ppppplVar23 = local_640[3] + -0x11;
      lVar22 = (long)local_640[4] * 0x88;
      pppppplStack_4f8 = (long ******)ppppplVar19;
      do {
        lVar31 = lVar22;
        if (lVar31 == 0) break;
        ppppplVar23 = ppppplVar23 + 0x11;
                    /* try { // try from 0077f39c to 0077f3a3 has its CatchHandler @ 007808dc */
        uVar13 = FUN_00797120(ppppplVar23);
        lVar22 = lVar31 + -0x88;
      } while ((uVar13 & 1) == 0);
      pppppplStack_198 = (long ******)CONCAT71(uStack_5cf,uStack_5d0);
      pppppplStack_1b8 = (long ******)uStack_5f0;
      local_1c0 = (long ******)local_5f8;
      pppppplStack_1a8 = (long ******)uStack_5e0;
      local_1b0 = (long ******)local_5e8;
      ppppppplStack_1f8 = (long *******)CONCAT44(uStack_62c,uStack_630);
      local_1a0 = (long ******)local_5d8;
      local_200 = (long *******)local_638;
      ppppppplStack_1e8 = (long *******)uStack_620;
      local_1f0 = (long *******)local_628;
      ppppppplStack_1d8 = (long *******)uStack_610;
      local_1e0 = (long *******)local_618;
      pppppplStack_1c8 = (long ******)uStack_600;
      local_1d0 = (long ******)local_608;
      ppppppplStack_278 = (long *******)pvStack_750;
      local_280 = (long *******)local_758;
      local_270 = (long *******)local_748;
                    /* try { // try from 0077f408 to 0077f427 has its CatchHandler @ 00780ac8 */
      FUN_007de274(&local_3e0,&local_200,&local_280);
      FUN_0078b42c(&local_200,&local_560,&local_3e0);
      pppppplVar20 = local_640;
      uStack_2d8 = uStack_970;
      local_2e0 = local_978;
      uStack_2c8 = uStack_960;
      uStack_2d0 = local_968;
      uStack_2f8 = uStack_990;
      local_300 = local_998;
      uStack_2e8 = uStack_980;
      uStack_2f0 = local_988;
      local_2a0 = local_938;
      uStack_2b8 = uStack_950;
      local_2c0 = local_958;
      pvStack_2a8 = pvStack_940;
      lStack_2b0 = local_948;
      uStack_388 = pppppplStack_1a8;
      local_390 = local_1b0;
      uStack_338 = uStack_158;
      local_340 = local_160;
      uStack_328 = uStack_148;
      uStack_330 = uStack_150;
      uStack_318 = uStack_138;
      local_320 = local_140;
      uStack_308 = uStack_9a0;
      uStack_310 = local_9a8;
      uStack_378 = pppppplStack_198;
      local_380 = local_1a0;
      pppppplStack_368 = pppppplStack_188;
      pppppplStack_370 = local_190;
      uStack_358 = uStack_178;
      local_360 = local_180;
      uStack_348 = uStack_168;
      uStack_350 = local_170;
      ppppppplStack_3c8 = ppppppplStack_1e8;
      local_3d0 = local_1f0;
      pppppplStack_3b8 = (long ******)ppppppplStack_1d8;
      local_3c0 = local_1e0;
      ppppppplStack_3d8 = ppppppplStack_1f8;
      local_3e0 = local_200;
      pppppplStack_3a8 = pppppplStack_1c8;
      local_3b0 = local_1d0;
      uStack_398 = pppppplStack_1b8;
      local_3a0 = local_1c0;
      ppppppplStack_1f8 = (long *******)0x1;
      local_200 = (long *******)0x1;
      memcpy(&local_1f0,&local_3e0,0x148);
      local_a8 = local_6e8;
      local_a0 = local_6e0;
      local_98 = local_6f8;
      local_90 = local_6f0;
      local_88 = pppppplVar20;
      local_80 = local_683;
      local_7e = local_677;
      local_7f = lVar31 != 0;
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      ppppppplVar14 = (long *******)FUN_004b25a4(0x188,8);
      if (ppppppplVar14 == (long *******)0x0) {
                    /* try { // try from 007803c4 to 007803cf has its CatchHandler @ 00780a98 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x188);
      }
      memcpy(ppppppplVar14,&local_200,0x188);
      do {
        pppppplVar20 = *ppppppplStack_508;
        cVar3 = '\x01';
        bVar30 = (bool)ExclusiveMonitorPass(ppppppplStack_508,0x10);
        if (bVar30) {
          *ppppppplStack_508 = (long ******)((long)pppppplVar20 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((long ******)((long)pppppplVar20 + -1) == (long ******)0x0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077f54c to 0077f553 has its CatchHandler @ 00780710 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow(&ppppppplStack_508);
      }
      if (pppppplStack_4f8 != (long ******)0x0) {
        do {
          pppplVar21 = (long ****)*pppppplStack_4f8;
          cVar3 = '\x01';
          bVar30 = (bool)ExclusiveMonitorPass(pppppplStack_4f8,0x10);
          if (bVar30) {
            *pppppplStack_4f8 = (long *****)((long)pppplVar21 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((long ****)((long)pppplVar21 + -1) == (long ****)0x0) {
          DataMemoryBarrier(2,1);
                    /* try { // try from 0077f574 to 0077f57b has its CatchHandler @ 0078069c */
          <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
          drop_slow(&pppppplStack_4f8);
        }
      }
      bVar30 = false;
      if (local_930 != (long *******)0xffffffffffffffff) {
        bVar30 = bVar10;
      }
      if (bVar30) {
        if ((ppppppplStack_928 != (long *******)0xffffffffffffffff) &&
           (ppppppplStack_928 != (long *******)0x0)) {
          free(local_920);
        }
        if (local_900 != (long ******)0x0) {
          pppppplVar20 = pppppplStack_908 + 1;
          pppppplVar18 = local_900;
          do {
            if ((pppppplVar20[-1] != (long *****)0xffffffffffffffff) &&
               (pppppplVar20[-1] != (long *****)0x0)) {
              free(*pppppplVar20);
            }
            pppppplVar18 = (long ******)((long)pppppplVar18 + -1);
            pppppplVar20 = pppppplVar20 + 3;
          } while (pppppplVar18 != (long ******)0x0);
        }
        if (local_910 != (long ******)0x0) {
          free(pppppplStack_908);
        }
      }
      if (bVar8) {
        if (local_778 != 0) {
          ppppppplVar12 = local_780 + 2;
          lVar22 = local_778;
          do {
            if (ppppppplVar12[-1] != (long ******)0x0) {
              free(*ppppppplVar12);
            }
            lVar22 = lVar22 + -1;
            ppppppplVar12 = ppppppplVar12 + 4;
          } while (lVar22 != 0);
        }
        if (local_788 != (long *******)0x0) {
          free(local_780);
        }
      }
      if (local_760 != 0) {
        puVar11 = (undefined8 *)((long)local_768 + 8);
        lVar22 = local_760;
        do {
          if ((puVar11[-1] != -1) && (puVar11[-1] != 0)) {
            free((void *)*puVar11);
          }
          lVar22 = lVar22 + -1;
          puVar11 = puVar11 + 3;
        } while (lVar22 != 0);
      }
      if (local_770 != 0) {
        free(local_768);
      }
      if ((local_740 != -1) && (local_740 != 0)) {
        free(local_738);
      }
      if (lVar29 == 0) {
        FUN_007b38f0(local_6d8);
      }
      uVar15 = 0;
      goto LAB_0077fcc4;
    }
                    /* try { // try from 0077f128 to 0077f137 has its CatchHandler @ 00780864 */
    ppppppplVar14 = (long *******)FUN_0076f99c(&DAT_002e2535,0x35);
    bVar9 = true;
    bVar4 = true;
  }
  do {
    pppppplVar20 = *local_5b8;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(local_5b8,0x10);
    if (bVar10) {
      *local_5b8 = (long ******)((long)pppppplVar20 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((long ******)((long)pppppplVar20 + -1) == (long ******)0x0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077fa64 to 0077fa6f has its CatchHandler @ 00780794 */
    <alloc::sync::[n]::alloc::sync::Arc<hyper_util::client::legacy::connect::http::Config>>::
    drop_slow(&local_5b8);
  }
  do {
    pppppplVar20 = *ppppppplStack_5b0;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(ppppppplStack_5b0,0x10);
    if (bVar10) {
      *ppppppplStack_5b0 = (long ******)((long)pppppplVar20 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((long ******)((long)pppppplVar20 + -1) == (long ******)0x0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077fa90 to 0077fa97 has its CatchHandler @ 00780880 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(&ppppppplStack_5b0);
  }
  do {
    lVar29 = *local_5c8;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(local_5c8,0x10);
    if (bVar10) {
      *local_5c8 = lVar29 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar29 + -1 == 0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077fabc to 0077fac3 has its CatchHandler @ 00780b64 */
    <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
    drop_slow(&local_5c8);
  }
  do {
    ppppplVar19 = *local_640;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(local_640,0x10);
    if (bVar10) {
      *local_640 = (long *****)((long)ppppplVar19 + -1);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((long *****)((long)ppppplVar19 + -1) == (long *****)0x0) {
    DataMemoryBarrier(2,1);
                    /* try { // try from 0077fae0 to 0077fae7 has its CatchHandler @ 00780784 */
    <alloc::sync::[n]::alloc::sync::Arc<alloc::vec::Vec<reqwest::proxy::Proxy>>>::drop_slow
              (&local_640);
  }
                    /* try { // try from 0077fae8 to 0077faef has its CatchHandler @ 00780888 */
  FUN_0077df7c(&local_9a8);
  bVar10 = false;
  if (local_930 != (long *******)0xffffffffffffffff) {
    bVar10 = bVar9;
  }
  if (bVar10) {
LAB_0077eb48:
    if ((ppppppplStack_928 != (long *******)0xffffffffffffffff) &&
       (ppppppplStack_928 != (long *******)0x0)) {
      free(local_920);
    }
    if (local_900 != (long ******)0x0) {
      pppppplVar20 = pppppplStack_908 + 1;
      pppppplVar18 = local_900;
      do {
        if ((pppppplVar20[-1] != (long *****)0xffffffffffffffff) &&
           (pppppplVar20[-1] != (long *****)0x0)) {
          free(*pppppplVar20);
        }
        pppppplVar18 = (long ******)((long)pppppplVar18 + -1);
        pppppplVar20 = pppppplVar20 + 3;
      } while (pppppplVar18 != (long ******)0x0);
    }
    if (local_910 != (long ******)0x0) {
      free(pppppplStack_908);
    }
    if (local_6a0 != (long *******)0x0) goto LAB_0077ed20;
  }
LAB_0077fb00:
  if (local_948 == 0) {
    if ((code *)*local_938 != (code *)0x0) {
                    /* try { // try from 0077fb14 to 0077fb1b has its CatchHandler @ 007807f8 */
      (*(code *)*local_938)(pvStack_940);
    }
    if (local_938[1] != 0) {
      free(pvStack_940);
    }
  }
  if (bVar4) {
    if (local_778 != 0) {
      ppppppplVar12 = local_780 + 2;
      lVar29 = local_778;
      do {
        if (ppppppplVar12[-1] != (long ******)0x0) {
          free(*ppppppplVar12);
        }
        lVar29 = lVar29 + -1;
        ppppppplVar12 = ppppppplVar12 + 4;
      } while (lVar29 != 0);
    }
    if (local_788 != (long *******)0x0) {
      free(local_780);
    }
  }
  if (local_760 != 0) {
    puVar11 = (undefined8 *)((long)local_768 + 8);
    lVar29 = local_760;
    do {
      if ((puVar11[-1] != -1) && (puVar11[-1] != 0)) {
        free((void *)*puVar11);
      }
      lVar29 = lVar29 + -1;
      puVar11 = puVar11 + 3;
    } while (lVar29 != 0);
  }
  if (local_770 != 0) {
    free(local_768);
  }
  if (local_8f8[0] < 2) {
                    /* try { // try from 0077fbec to 0077fbf7 has its CatchHandler @ 00780878 */
    FUN_0077d934(local_8f8);
  }
  pvVar27 = pvStack_750;
  if (local_748 != 0) {
    lVar29 = 0;
    do {
      lVar22 = lVar29 * 0x10;
      lVar29 = lVar29 + 1;
      plVar17 = *(long **)((long)pvVar27 + lVar22);
      do {
        lVar22 = *plVar17;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar9) {
          *plVar17 = lVar22 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar22 + -1 == 0) {
        DataMemoryBarrier(2,1);
                    /* try { // try from 0077fc38 to 0077fc3b has its CatchHandler @ 00780944 */
        <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
        drop_slow();
      }
    } while (lVar29 != local_748);
  }
  if (local_758 != (long ******)0x0) {
    free(pvStack_750);
  }
  if ((local_740 != -1) && (local_740 != 0)) {
    free(local_738);
  }
  if (bVar30) {
                    /* try { // try from 0077fc7c to 0077fc83 has its CatchHandler @ 00780870 */
    FUN_007b38f0(local_6d8);
  }
  bVar8 = (bool)(bVar8 ^ 1);
  if (local_698 == (long *)0x0) {
    bVar8 = true;
  }
  if (!bVar8) {
    do {
      lVar29 = *local_698;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(local_698,0x10);
      if (bVar8) {
        *local_698 = lVar29 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar29 == 1) {
      DataMemoryBarrier(2,1);
      <alloc::sync::[n]::alloc::sync::Arc<dyn_Trait<Assoc=X>+reqwest::dns::resolve::Resolve>>::
      drop_slow(&local_698);
    }
  }
  uVar15 = 1;
LAB_0077fcc4:
  auVar38._8_8_ = ppppppplVar14;
  auVar38._0_8_ = uVar15;
  return auVar38;
}


// ===== 00780cd0  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::proxy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::proxy */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::proxy
          (void *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)((long)param_2 + 0x218);
  if (lVar2 == *(long *)((long)param_2 + 0x208)) {
                    /* try { // try from 00780cfc to 00780d03 has its CatchHandler @ 00780d68 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::proxy::Proxy>>::grow_one
              ((long)param_2 + 0x208);
  }
  uVar3 = *param_3;
  puVar1 = (undefined8 *)(*(long *)((long)param_2 + 0x210) + lVar2 * 0x88);
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  uVar5 = param_3[6];
  uVar4 = param_3[9];
  uVar3 = param_3[8];
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  uVar9 = param_3[5];
  uVar8 = param_3[4];
  puVar1[7] = param_3[7];
  puVar1[6] = uVar5;
  puVar1[9] = uVar4;
  puVar1[8] = uVar3;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  uVar8 = param_3[0xd];
  uVar7 = param_3[0xc];
  uVar4 = param_3[0xf];
  uVar3 = param_3[0xe];
  uVar6 = param_3[0xb];
  uVar5 = param_3[10];
  puVar1[0x10] = param_3[0x10];
  puVar1[0xd] = uVar8;
  puVar1[0xc] = uVar7;
  puVar1[0xf] = uVar4;
  puVar1[0xe] = uVar3;
  puVar1[0xb] = uVar6;
  puVar1[10] = uVar5;
  *(long *)((long)param_2 + 0x218) = lVar2 + 1;
  *(undefined1 *)((long)param_2 + 0x324) = 0;
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 00780d8c  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::add_crl =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::add_crl */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::add_crl
          (void *param_1,void *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)((long)param_2 + 0x248);
  if (lVar3 == *(long *)((long)param_2 + 0x238)) {
                    /* try { // try from 00780db8 to 00780dbf has its CatchHandler @ 00780e00 */
    <alloc::raw_vec::[4]::alloc::raw_vec::RawVec<reqwest::tls::CertificateRevocationList>>::grow_one
              ((long)param_2 + 0x238);
  }
  uVar4 = *param_3;
  puVar1 = (undefined8 *)(*(long *)((long)param_2 + 0x240) + lVar3 * 0x18);
  uVar2 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar4;
  puVar1[2] = uVar2;
  *(long *)((long)param_2 + 0x248) = lVar3 + 1;
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 00780e30  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::resolve(void)

{
  resolve_to_addrs();
  return;
}


// ===== 00780e38  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::identity =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::identity */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::identity
          (void *param_1,void *param_2,long *param_3)

{
  void *__ptr;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)((long)param_2 + 0x78) != -1) {
    if ((*(long *)((long)param_2 + 0x80) != -1) && (*(long *)((long)param_2 + 0x80) != 0)) {
      free(*(void **)((long)param_2 + 0x88));
    }
    __ptr = *(void **)((long)param_2 + 0xa0);
    lVar1 = *(long *)((long)param_2 + 0xa8);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)((long)__ptr + 8);
      do {
        if ((puVar2[-1] != -1) && (puVar2[-1] != 0)) {
          free((void *)*puVar2);
        }
        lVar1 = lVar1 + -1;
        puVar2 = puVar2 + 3;
      } while (lVar1 != 0);
    }
    if (*(long *)((long)param_2 + 0x98) != 0) {
      free(__ptr);
    }
  }
  lVar3 = *param_3;
  lVar5 = param_3[3];
  lVar4 = param_3[2];
  lVar7 = param_3[5];
  lVar6 = param_3[4];
  lVar1 = param_3[6];
  *(long *)((long)param_2 + 0x80) = param_3[1];
  *(long *)((long)param_2 + 0x78) = lVar3;
  *(long *)((long)param_2 + 0x90) = lVar5;
  *(long *)((long)param_2 + 0x88) = lVar4;
  *(long *)((long)param_2 + 0xa0) = lVar7;
  *(long *)((long)param_2 + 0x98) = lVar6;
  *(long *)((long)param_2 + 0xa8) = lVar1;
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 00780f1c  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::no_proxy =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::no_proxy */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::no_proxy
          (void *param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)((long)param_2 + 0x218);
  *(undefined8 *)((long)param_2 + 0x218) = 0;
  lVar2 = lVar2 + 1;
  lVar1 = *(long *)((long)param_2 + 0x210);
  while (lVar2 = lVar2 + -1, lVar2 != 0) {
                    /* try { // try from 00780f54 to 00780f57 has its CatchHandler @ 00780f84 */
    FUN_0077c930(lVar1);
    lVar1 = lVar1 + 0x88;
  }
  *(undefined1 *)((long)param_2 + 0x324) = 0;
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 00780fbc  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::redirect =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::redirect */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::redirect
          (void *param_1,void *param_2,long *param_3)

{
  void *__ptr;
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)((long)param_2 + 0x60) == 0) {
    __ptr = *(void **)((long)param_2 + 0x68);
    puVar1 = *(undefined8 **)((long)param_2 + 0x70);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
                    /* try { // try from 00780ff4 to 00780ffb has its CatchHandler @ 00781040 */
      (*pcVar2)(__ptr);
    }
    if (puVar1[1] != 0) {
      free(__ptr);
    }
  }
  lVar4 = *param_3;
  lVar3 = param_3[2];
  *(long *)((long)param_2 + 0x68) = param_3[1];
  *(long *)((long)param_2 + 0x60) = lVar4;
  *(long *)((long)param_2 + 0x70) = lVar3;
  memcpy(param_1,param_2,0x348);
  return;
}


// ===== 0078107c  <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::interface =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::interface */

void __rustcall
<reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::interface
          (void *param_1,void *param_2,void *param_3,size_t param_4)

{
  undefined1 *__dest;
  long lVar1;
  undefined8 uVar2;
  
  if (-1 < (long)param_4) {
    if (param_4 == 0) {
      __dest = &DAT_00000001;
      lVar1 = *(long *)((long)param_2 + 0x268);
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar2 = 1;
      __dest = (undefined1 *)FUN_004b25a4(param_4,1);
      if (__dest == (undefined1 *)0x0) goto LAB_007810a0;
      memcpy(__dest,param_3,param_4);
      lVar1 = *(long *)((long)param_2 + 0x268);
    }
    if ((lVar1 != -1) && (lVar1 != 0)) {
      free(*(void **)((long)param_2 + 0x270));
    }
    *(size_t *)((long)param_2 + 0x268) = param_4;
    *(undefined1 **)((long)param_2 + 0x270) = __dest;
    *(size_t *)((long)param_2 + 0x278) = param_4;
    memcpy(param_1,param_2,0x348);
    return;
  }
  uVar2 = 0;
LAB_007810a0:
                    /* try { // try from 007810a0 to 007810ab has its CatchHandler @ 00781140 */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar2,param_4);
}


// ===== 00781158  FUN_00781158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00781158(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  byte bVar17;
  undefined2 uVar18;
  undefined8 *puVar19;
  undefined1 *__ptr;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  code *pcVar23;
  int iVar24;
  undefined8 uVar25;
  void *__dest;
  ulong *puVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined **extraout_x9;
  byte bVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  ulong unaff_x27;
  long lVar35;
  undefined1 auVar36 [16];
  undefined **local_760;
  long local_750;
  undefined **local_738;
  ulong local_720;
  void *pvStack_718;
  ulong local_710;
  undefined **local_700;
  int *piStack_6f8;
  ulong uStack_6f0;
  undefined **ppuStack_6e8;
  ulong local_6e0;
  undefined8 uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong local_6c0;
  ulong uStack_6b8;
  ulong local_6b0;
  undefined **local_6a0;
  ulong uStack_698;
  ulong local_690;
  undefined **ppuStack_688;
  ulong local_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong local_660;
  void *pvStack_658;
  ulong local_650;
  ulong local_648;
  ulong local_640;
  undefined **ppuStack_638;
  void *local_630;
  undefined8 *local_628;
  ulong uStack_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined **local_610;
  ulong uStack_608;
  ulong local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined **ppuStack_5b0;
  undefined **local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined **local_590;
  undefined1 *puStack_588;
  undefined8 *local_580;
  undefined **ppuStack_578;
  undefined **local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined **local_550;
  undefined1 uStack_548;
  undefined1 uStack_547;
  undefined6 uStack_546;
  undefined2 local_540;
  undefined6 uStack_53e;
  undefined2 uStack_538;
  undefined6 uStack_536;
  char local_530;
  undefined1 uStack_52f;
  undefined6 uStack_52e;
  undefined2 uStack_528;
  undefined6 uStack_526;
  undefined2 local_520;
  undefined6 uStack_51e;
  undefined2 uStack_518;
  undefined6 uStack_516;
  undefined2 local_510;
  undefined6 uStack_50e;
  undefined2 uStack_508;
  undefined6 uStack_506;
  undefined2 local_500;
  undefined6 uStack_4fe;
  undefined2 uStack_4f8;
  undefined6 uStack_4f6;
  undefined2 local_4f0;
  undefined6 uStack_4ee;
  undefined2 uStack_4e8;
  undefined6 uStack_4e6;
  undefined2 local_4e0;
  undefined6 uStack_4de;
  undefined2 uStack_4d8;
  undefined6 uStack_4d6;
  undefined2 local_4d0;
  undefined6 uStack_4ce;
  undefined2 uStack_4c8;
  undefined6 uStack_4c6;
  undefined2 local_4c0;
  undefined6 uStack_4be;
  undefined2 uStack_4b8;
  undefined6 uStack_4b6;
  undefined2 local_4b0;
  undefined6 uStack_4ae;
  undefined2 uStack_4a8;
  undefined6 uStack_4a6;
  undefined2 uStack_4a0;
  undefined8 uStack_49e;
  undefined8 local_496;
  undefined8 uStack_48e;
  undefined8 local_486;
  undefined6 uStack_47e;
  undefined **local_470;
  undefined8 uStack_468;
  undefined4 local_458;
  undefined3 uStack_454;
  undefined **local_450;
  undefined1 uStack_448;
  undefined1 uStack_447;
  undefined6 uStack_446;
  undefined2 local_440;
  undefined6 uStack_43e;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 local_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
  undefined2 local_420;
  undefined6 uStack_41e;
  undefined2 uStack_418;
  undefined6 uStack_416;
  undefined2 local_410;
  undefined6 uStack_40e;
  undefined2 uStack_408;
  undefined6 uStack_406;
  undefined2 local_400;
  undefined6 uStack_3fe;
  undefined2 uStack_3f8;
  undefined6 uStack_3f6;
  undefined2 local_3f0;
  undefined6 uStack_3ee;
  undefined2 uStack_3e8;
  undefined6 uStack_3e6;
  undefined2 local_3e0;
  undefined6 uStack_3de;
  undefined2 uStack_3d8;
  undefined6 uStack_3d6;
  undefined2 local_3d0;
  undefined6 uStack_3ce;
  undefined2 uStack_3c8;
  undefined6 uStack_3c6;
  undefined2 local_3c0;
  undefined6 uStack_3be;
  undefined2 uStack_3b8;
  undefined6 uStack_3b6;
  undefined2 local_3b0;
  undefined6 uStack_3ae;
  undefined2 uStack_3a8;
  undefined6 uStack_3a6;
  undefined2 uStack_3a0;
  undefined6 uStack_39e;
  byte local_398;
  undefined1 local_397;
  undefined2 uStack_396;
  undefined4 uStack_394;
  undefined2 uStack_390;
  undefined6 uStack_38e;
  undefined2 uStack_388;
  undefined6 uStack_386;
  undefined2 local_380;
  undefined6 uStack_37e;
  undefined2 uStack_378;
  undefined6 uStack_376;
  undefined **local_370;
  undefined1 *puStack_368;
  undefined8 *puStack_360;
  undefined **ppuStack_358;
  undefined8 local_350;
  undefined **ppuStack_348;
  undefined **local_340;
  undefined **ppuStack_338;
  undefined **local_330;
  ulong uStack_328;
  undefined8 local_320;
  ulong uStack_318;
  ulong local_310;
  void *pvStack_308;
  ulong local_300;
  ulong uStack_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  ulong local_2e0;
  long lStack_2d8;
  long local_2d0;
  long lStack_2c8;
  long local_2c0;
  long lStack_2b8;
  long local_2b0;
  long lStack_2a8;
  long local_2a0;
  undefined8 uStack_298;
  undefined1 local_290 [16];
  undefined **local_280;
  undefined8 uStack_278;
  undefined **local_270;
  undefined1 *puStack_268;
  undefined8 *local_260;
  undefined **ppuStack_258;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined8 local_150;
  ulong uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined4 local_d8;
  undefined3 uStack_d4;
  undefined **local_d0;
  ulong uStack_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_71 [17];
  
  local_760 = (undefined **)0x0;
  pvStack_718 = (void *)param_3[0x1f];
  local_720 = param_3[0x1e];
  uVar28 = param_3[0x16];
  local_6e0 = param_3[0x15];
  uStack_6b8 = param_3[0x1a];
  local_6c0 = param_3[0x19];
  local_710 = param_3[0x20];
  iVar13 = (int)param_3[0x1d];
  uVar14 = param_3[0x21];
  uStack_6c8 = param_3[0x18];
  uStack_6d0 = param_3[0x17];
  uStack_678 = param_3[10];
  local_680 = param_3[9];
  piStack_6f8 = (int *)param_3[0x12];
  local_700 = (undefined **)param_3[0x11];
  ppuStack_6e8 = (undefined **)param_3[0x14];
  uStack_6f0 = param_3[0x13];
  uStack_6d8._4_4_ = (uint)(uVar28 >> 0x20);
  uVar29 = (ulong)uStack_6d8._4_4_;
  uStack_668 = param_3[0xc];
  uStack_670 = param_3[0xb];
  pvStack_658 = (void *)param_3[0xe];
  local_660 = param_3[0xd];
  local_6b0 = param_3[0x1b];
  uVar1 = param_3[0x1c];
  local_648 = param_3[0x10];
  local_650 = param_3[0xf];
  uStack_698 = param_3[6];
  local_6a0 = (undefined **)param_3[5];
  ppuStack_688 = (undefined **)param_3[8];
  local_690 = param_3[7];
  uStack_620 = param_3[4];
  ppuStack_638 = (undefined **)param_3[1];
  local_640 = *param_3;
  local_628 = (undefined8 *)param_3[3];
  local_630 = (void *)param_3[2];
  uStack_6d8 = uVar28;
  if (uStack_6d8._4_4_ == 0) {
LAB_0078127c:
    uStack_328 = param_3[0x16];
    local_330 = (undefined **)param_3[0x15];
    uStack_318 = param_3[0x18];
    local_320 = (undefined **)param_3[0x17];
    pvStack_308 = (void *)param_3[0x1a];
    local_310 = param_3[0x19];
    local_300 = param_3[0x1b];
    ppuStack_348 = (undefined **)param_3[0x12];
    local_350 = (undefined **)param_3[0x11];
    ppuStack_338 = (undefined **)param_3[0x14];
    local_340 = (undefined **)param_3[0x13];
                    /* try { // try from 007812ac to 007812b7 has its CatchHandler @ 007824e0 */
    uVar25 = FUN_00772be0(&local_350);
LAB_007812b8:
    *param_1 = 2;
    param_1[1] = uVar25;
LAB_007812c0:
    puVar19 = local_628;
    pvVar9 = local_630;
    if (local_640 != 0) {
      if (ppuStack_638 == (undefined **)0x0) {
        if ((code *)*local_628 != (code *)0x0) {
                    /* try { // try from 007812f4 to 007812fb has its CatchHandler @ 0078241c */
          (*(code *)*local_628)(local_630);
        }
        if (puVar19[1] != 0) {
          free(pvVar9);
        }
      }
      else {
                    /* try { // try from 007812dc to 007812e3 has its CatchHandler @ 0078243c */
        (*(code *)ppuStack_638[4])(&uStack_620,local_630,local_628);
      }
    }
                    /* try { // try from 00781310 to 00781317 has its CatchHandler @ 00782448 */
    FUN_0077df7c(&local_6a0);
    if (9 < (byte)local_720) {
      if (local_710 != 0) {
        free(pvStack_718);
        return;
      }
      return;
    }
    return;
  }
  if (uVar29 < uStack_6f0) {
    iVar24 = (int)*(char *)((long)piStack_6f8 + uVar29);
    if (iVar24 == -0x41 || iVar24 + 0x41 < 0 != SCARRY4(iVar24,0x41)) goto LAB_00781378;
  }
  else if (uStack_6f0 != uVar29) goto LAB_00781378;
  if ((uStack_6d8._4_4_ != 4) || (*piStack_6f8 != 0x70747468)) {
    if (uVar29 < uStack_6f0) {
      iVar24 = (int)*(char *)((long)piStack_6f8 + uVar29);
      if (iVar24 == -0x41 || iVar24 + 0x41 < 0 != SCARRY4(iVar24,0x41)) goto LAB_00781378;
    }
    else if (uStack_6f0 != uVar29) goto LAB_00781378;
    if ((uStack_6d8._4_4_ != 5) || (*piStack_6f8 != 0x70747468 || (char)piStack_6f8[1] != 's'))
    goto LAB_0078127c;
  }
  plVar34 = (long *)*param_2;
  if ((*(byte *)((long)plVar34 + 0x182) & 1) != 0) {
    if (uVar29 < uStack_6f0) {
      if (*(char *)((long)piStack_6f8 + uVar29) + 0x40 < 0 !=
          SCARRY4((int)*(char *)((long)piStack_6f8 + uVar29),0x40)) {
LAB_00781378:
                    /* try { // try from 0078137c to 007813ff has its CatchHandler @ 007824e0 */
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (piStack_6f8,uStack_6f0,0,uVar29,&PTR_s__root__cargo_registry_src_index__00adbf10)
        ;
      }
    }
    else if (uStack_6f0 != uVar29) goto LAB_00781378;
    if ((uStack_6d8._4_4_ != 5) || (*piStack_6f8 != 0x70747468 || (char)piStack_6f8[1] != 's')) {
      uStack_328 = param_3[0x16];
      local_330 = (undefined **)param_3[0x15];
      uStack_318 = param_3[0x18];
      local_320 = (undefined **)param_3[0x17];
      pvStack_308 = (void *)param_3[0x1a];
      local_310 = param_3[0x19];
      local_300 = param_3[0x1b];
      ppuStack_348 = (undefined **)param_3[0x12];
      local_350 = (undefined **)param_3[0x11];
      ppuStack_338 = (undefined **)param_3[0x14];
      local_340 = (undefined **)param_3[0x13];
      uVar25 = FUN_00772be0(&local_350);
      goto LAB_007812b8;
    }
  }
  uVar29 = 0;
  lVar35 = 2;
  if (plVar34[0x21] != 0) {
    lVar35 = 0;
  }
  local_738 = &PTR_s__root__cargo_registry_src_index__00ade880;
  do {
    if (lVar35 == 2) {
      uVar29 = uVar29 + 1;
      if ((ulong)plVar34[0x21] <= uVar29) {
                    /* try { // try from 007815cc to 007815d7 has its CatchHandler @ 007824e0 */
        FUN_00779858(&local_450,&local_700);
        if ((char)local_450 == -1) {
          pvStack_308 = (void *)uStack_6b8;
          local_310 = local_6c0;
          uStack_328 = uStack_6d8;
          local_330 = (undefined **)local_6e0;
          uStack_318 = uStack_6c8;
          local_320 = (undefined **)uStack_6d0;
          local_300 = local_6b0;
          ppuStack_348 = (undefined **)piStack_6f8;
          local_350 = local_700;
          ppuStack_338 = ppuStack_6e8;
          local_340 = (undefined **)uStack_6f0;
                    /* try { // try from 00781694 to 0078169b has its CatchHandler @ 007823bc */
          uVar25 = FUN_00772cd4(&local_350);
          *param_1 = 2;
          param_1[1] = uVar25;
                    /* try { // try from 007816a8 to 007816b3 has its CatchHandler @ 007824e0 */
          FUN_0077c844(&uStack_448);
          goto LAB_007812c0;
        }
        uStack_5e8 = CONCAT62(uStack_426,uStack_428);
        local_5f0 = CONCAT62(uStack_42e,local_430);
        uStack_5d8 = CONCAT62(uStack_416,uStack_418);
        local_5e0 = CONCAT62(uStack_41e,local_420);
        local_5c0 = CONCAT62(uStack_3fe,local_400);
        uStack_5c8 = CONCAT62(uStack_406,uStack_408);
        local_5d0 = CONCAT62(uStack_40e,local_410);
        uStack_608 = CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
        uStack_5f8 = CONCAT62(uStack_436,uStack_438);
        local_600 = CONCAT62(uStack_43e,local_440);
        local_610 = local_450;
        if ((local_640 & 1) == 0) {
          local_580 = (undefined8 *)0x0;
          ppuStack_578 = (undefined **)0x0;
          local_5b8 = 0;
          local_590 = &PTR_FUN_00ad8cf8;
          puStack_588 = &DAT_00000001;
          ppuStack_5b0 = extraout_x9;
        }
        else {
          uStack_448 = SUB81(local_630,0);
          uStack_447 = (undefined1)((ulong)local_630 >> 8);
          uStack_446 = (undefined6)((ulong)local_630 >> 0x10);
          local_450 = ppuStack_638;
          uStack_438 = (undefined2)uStack_620;
          uStack_436 = (undefined6)(uStack_620 >> 0x10);
          local_440 = SUB82(local_628,0);
          uStack_43e = (undefined6)((ulong)local_628 >> 0x10);
          if (ppuStack_638 == (undefined **)0x0) {
            ppuStack_5b0 = (undefined **)0x0;
          }
          else {
                    /* try { // try from 00781640 to 0078164b has its CatchHandler @ 00782338 */
            (*(code *)*ppuStack_638)(&local_350,&uStack_438,local_630,local_628);
            local_540 = SUB82(ppuStack_338,0);
            uStack_53e = (undefined6)((ulong)ppuStack_338 >> 0x10);
            uStack_548 = SUB81(local_340,0);
            uStack_547 = (undefined1)((ulong)local_340 >> 8);
            uStack_546 = (undefined6)((ulong)local_340 >> 0x10);
            local_550 = ppuStack_348;
            ppuStack_5b0 = local_350;
          }
          uStack_568 = CONCAT62(uStack_546,CONCAT11(uStack_547,uStack_548));
          local_560 = CONCAT62(uStack_53e,local_540);
          puStack_588 = (undefined1 *)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
          ppuStack_578 = (undefined **)CONCAT62(uStack_436,uStack_438);
          local_580 = (undefined8 *)CONCAT62(uStack_43e,local_440);
          local_570 = local_550;
          local_5b8 = 1;
          local_590 = local_450;
        }
        local_598 = local_560;
        uStack_5a0 = uStack_568;
        local_5a8 = local_570;
        if ((*(char *)((long)plVar34 + 0x181) != '\x01') || ((char)local_610 == '\0'))
        goto LAB_0078185c;
                    /* try { // try from 00781728 to 0078175f has its CatchHandler @ 00782450 */
        iVar24 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq(&local_610,&DAT_002a02b0);
        ppuVar16 = _UNK_002bfca0;
        uVar25 = _DAT_002bfc98;
        ppuVar4 = _UNK_002bfc90;
        ppuVar15 = _s__002bfc88;
        if (iVar24 == 0) goto LAB_0078185c;
        local_760 = _s__002bfc88;
        local_750 = _DAT_002bfc98;
        ppuStack_348 = _UNK_002bfc90;
        local_350 = _s__002bfc88;
        ppuStack_338 = _UNK_002bfca0;
        local_340 = (undefined **)_DAT_002bfc98;
        uVar29 = FUN_007c2d94(&local_6a0,&local_350);
        if ((uVar29 & 1) != 0) goto LAB_0078185c;
        lVar35 = *(long *)(plVar34[0x2f] + 0x20);
        if (lVar35 == 0) goto LAB_0078185c;
        lVar32 = *(long *)(plVar34[0x2f] + 0x18);
        lVar35 = lVar35 * 0x88;
        break;
      }
      plVar30 = (long *)(plVar34[0x20] + uVar29 * 0x68);
LAB_0078149c:
      if (*plVar30 == 1) {
        unaff_x27 = plVar30[1];
        lVar35 = 1;
        plVar33 = plVar30 + 3;
      }
      else {
        lVar35 = 2;
        plVar33 = plVar30 + 3;
      }
    }
    else {
      uVar28 = plVar34[0x21];
      if (uVar28 <= uVar29) {
LAB_00782238:
                    /* try { // try from 00782238 to 00782243 has its CatchHandler @ 00782494 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar29,uVar28,local_738);
      }
      plVar30 = (long *)(plVar34[0x20] + uVar29 * 0x68);
      if (lVar35 == 0) goto LAB_0078149c;
      uVar28 = plVar34[0x24];
      if (uVar28 <= unaff_x27) {
        local_738 = &PTR_s__root__cargo_registry_src_index__00ade898;
        uVar29 = unaff_x27;
        goto LAB_00782238;
      }
      lVar32 = plVar34[0x23] + unaff_x27 * 0x48;
      if (*(long *)(lVar32 + 0x10) == 1) {
        unaff_x27 = *(ulong *)(lVar32 + 0x18);
        lVar35 = 1;
      }
      else {
        lVar35 = 2;
      }
      plVar33 = (long *)(lVar32 + 0x20);
    }
                    /* try { // try from 007814cc to 007814db has its CatchHandler @ 00782498 */
    FUN_007c2bdc(&local_350,&local_6a0,plVar30 + 8);
    if (local_320._2_1_ == -1) {
                    /* try { // try from 007817a0 to 007817c3 has its CatchHandler @ 007824e0 */
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002d21e9,0x17,auStack_71,&DAT_00ad8c98,
                 &PTR_s__root__cargo_registry_src_index__00adb898);
    }
    local_420 = (undefined2)local_320;
    local_450 = local_350;
    local_618 = local_320._3_4_;
    local_614 = local_320._7_1_;
    uStack_448 = SUB81(ppuStack_348,0);
    uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
    uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
    uStack_438 = SUB82(ppuStack_338,0);
    uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
    local_440 = SUB82(local_340,0);
    uStack_43e = (undefined6)((ulong)local_340 >> 0x10);
    uStack_428 = (undefined2)uStack_328;
    uStack_426 = (undefined6)(uStack_328 >> 0x10);
    local_430 = SUB82(local_330,0);
    uStack_42e = (undefined6)((ulong)local_330 >> 0x10);
    if (local_320._2_1_ != '\x02') {
                    /* try { // try from 00781558 to 00781563 has its CatchHandler @ 0078246c */
      (**(code **)*plVar33)(&local_d0,plVar33 + 3,plVar33[1],plVar33[2]);
      ppuVar15 = local_350;
      local_530 = (char)plVar33[4];
      uStack_548 = (undefined1)uStack_c8;
      uStack_547 = (undefined1)(uStack_c8 >> 8);
      uStack_546 = (undefined6)(uStack_c8 >> 0x10);
      local_550 = local_d0;
      uStack_538 = (undefined2)uStack_b8;
      uStack_536 = (undefined6)((ulong)uStack_b8 >> 0x10);
      local_540 = SUB82(local_c0,0);
      uStack_53e = (undefined6)((ulong)local_c0 >> 0x10);
      uStack_c8 = (ulong)local_340;
      local_d0 = ppuStack_348;
      uStack_b8 = local_330;
      local_c0 = ppuStack_338;
                    /* try { // try from 00781590 to 0078159f has its CatchHandler @ 00782464 */
      auVar36 = FUN_007c59ac(local_350,&local_d0,&local_550,(ulong)local_320 & 0xffff,uStack_328,
                             local_320._2_1_);
      if ((auVar36 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* try { // try from 00782200 to 00782223 has its CatchHandler @ 00782460 */
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_002d21e9,0x17,auStack_71,&DAT_00ad8c98,
                   &PTR_s__root__cargo_registry_src_index__00adb8b0);
      }
      if (ppuVar15[5] <= auVar36._8_8_) {
                    /* try { // try from 007815b0 to 007815c3 has its CatchHandler @ 00782468 */
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (auVar36._8_8_,ppuVar15[5],&PTR_s__root__cargo_registry_src_index__00ade720);
      }
    }
  } while( true );
  while( true ) {
    lVar35 = lVar35 + -0x88;
    lVar32 = lVar32 + 0x88;
    if (lVar35 == 0) break;
                    /* try { // try from 0078177c to 00781787 has its CatchHandler @ 00782410 */
    uVar29 = FUN_00794ddc(lVar32,&local_610);
    if ((uVar29 & 1) != 0) {
                    /* try { // try from 007817cc to 00781867 has its CatchHandler @ 00782450 */
      FUN_00794bb0(&local_d0,lVar32,&local_610);
      if ((char)local_b0 != '\x02') {
        uStack_52f = (undefined1)((ulong)local_b0 >> 8);
        uStack_52e = (undefined6)((ulong)local_b0 >> 0x10);
        uStack_548 = (undefined1)uStack_c8;
        uStack_547 = (undefined1)(uStack_c8 >> 8);
        uStack_546 = (undefined6)(uStack_c8 >> 0x10);
        local_550 = local_d0;
        uStack_538 = (undefined2)uStack_b8;
        uStack_536 = (undefined6)((ulong)uStack_b8 >> 0x10);
        local_540 = SUB82(local_c0,0);
        uStack_53e = (undefined6)((ulong)local_c0 >> 0x10);
        uStack_448 = SUB81(ppuVar4,0);
        uStack_447 = (undefined1)((ulong)ppuVar4 >> 8);
        uStack_446 = (undefined6)((ulong)ppuVar4 >> 0x10);
        local_450 = ppuVar15;
        uStack_438 = SUB82(ppuVar16,0);
        uStack_436 = (undefined6)((ulong)ppuVar16 >> 0x10);
        local_440 = (undefined2)uVar25;
        uStack_43e = (undefined6)((ulong)uVar25 >> 0x10);
        local_530 = (char)local_b0;
        FUN_0077acbc(&local_350,&local_6a0,&local_450,&local_550);
        if ((char)local_330 == -1) {
                    /* try { // try from 00782248 to 0078226b has its CatchHandler @ 00782450 */
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_002d21e9,0x17,auStack_71,&DAT_00ad8c98,
                     &PTR_s__root__cargo_registry_src_index__00ad8d20);
        }
        uStack_448 = SUB81(ppuStack_348,0);
        uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
        uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
        local_450 = local_350;
        uStack_438 = SUB82(ppuStack_338,0);
        uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
        local_440 = SUB82(local_340,0);
        uStack_43e = (undefined6)((ulong)local_340 >> 0x10);
        local_430 = SUB82(local_330,0);
        uStack_42e = (undefined6)((ulong)local_330 >> 0x10);
        if (((uint)local_330 & 0xff) != 2) {
          (*(code *)local_350[4])(&uStack_438,ppuStack_348,local_340);
        }
      }
      break;
    }
  }
LAB_0078185c:
  auVar36._8_8_ = local_750;
  auVar36._0_8_ = local_760;
  <http::request::[2]::http::request::Parts>::new(&local_350);
  bVar17 = (byte)local_720;
  uStack_3a8 = (undefined2)lStack_2a8;
  uStack_3a6 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  local_3b0 = (undefined2)local_2b0;
  uStack_3ae = (undefined6)((ulong)local_2b0 >> 0x10);
  local_398 = (byte)uStack_298;
  local_397 = (undefined1)((ulong)uStack_298 >> 8);
  uStack_396 = (undefined2)((ulong)uStack_298 >> 0x10);
  uStack_394 = (undefined4)((ulong)uStack_298 >> 0x20);
  uStack_3a0 = (undefined2)local_2a0;
  uStack_39e = (undefined6)((ulong)local_2a0 >> 0x10);
  uStack_388 = (undefined2)local_290._8_8_;
  uStack_386 = SUB86(local_290._8_8_,2);
  uStack_390 = (undefined2)local_290._0_8_;
  uStack_38e = SUB86(local_290._0_8_,2);
  uStack_378 = (undefined2)uStack_278;
  uStack_376 = (undefined6)((ulong)uStack_278 >> 0x10);
  local_380 = SUB82(local_280,0);
  uStack_37e = (undefined6)((ulong)local_280 >> 0x10);
  uStack_3e8 = (undefined2)uStack_2e8;
  uStack_3e6 = (undefined6)(uStack_2e8 >> 0x10);
  local_3f0 = (undefined2)local_2f0;
  uStack_3ee = (undefined6)(local_2f0 >> 0x10);
  uStack_3d8 = (undefined2)lStack_2d8;
  uStack_3d6 = (undefined6)((ulong)lStack_2d8 >> 0x10);
  local_3e0 = (undefined2)local_2e0;
  uStack_3de = (undefined6)(local_2e0 >> 0x10);
  uStack_3c8 = (undefined2)lStack_2c8;
  uStack_3c6 = (undefined6)((ulong)lStack_2c8 >> 0x10);
  local_3d0 = (undefined2)local_2d0;
  uStack_3ce = (undefined6)((ulong)local_2d0 >> 0x10);
  uStack_3b8 = (undefined2)lStack_2b8;
  uStack_3b6 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  local_3c0 = (undefined2)local_2c0;
  uStack_3be = (undefined6)((ulong)local_2c0 >> 0x10);
  uStack_428 = (undefined2)uStack_328;
  uStack_426 = (undefined6)(uStack_328 >> 0x10);
  local_430 = SUB82(local_330,0);
  uStack_42e = (undefined6)((ulong)local_330 >> 0x10);
  uStack_418 = (undefined2)uStack_318;
  uStack_416 = (undefined6)(uStack_318 >> 0x10);
  local_420 = SUB82(local_320,0);
  uStack_41e = (undefined6)((ulong)local_320 >> 0x10);
  uStack_408 = SUB82(pvStack_308,0);
  uStack_406 = (undefined6)((ulong)pvStack_308 >> 0x10);
  local_410 = (undefined2)local_310;
  uStack_40e = (undefined6)(local_310 >> 0x10);
  uStack_3f8 = (undefined2)uStack_2f8;
  uStack_3f6 = (undefined6)(uStack_2f8 >> 0x10);
  local_400 = (undefined2)local_300;
  uStack_3fe = (undefined6)(local_300 >> 0x10);
  uStack_448 = SUB81(ppuStack_348,0);
  uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
  uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
  local_450 = local_350;
  uStack_438 = SUB82(ppuStack_338,0);
  uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
  local_440 = SUB82(local_340,0);
  uStack_43e = (undefined6)((ulong)local_340 >> 0x10);
  if (8 < (byte)local_720) {
    if ((byte)local_720 == 9) {
      auVar36._8_8_ = local_710 & 0xff;
      auVar36._0_8_ = pvStack_718;
      local_350 = (undefined **)(local_720 >> 8);
    }
    else {
                    /* try { // try from 007821cc to 007821db has its CatchHandler @ 007822f0 */
      auVar36 = FUN_007c7e1c((ulong)&local_720 | 8);
    }
  }
  bVar31 = local_398;
  ppuVar15 = local_450;
  local_750 = auVar36._8_8_;
  local_760 = auVar36._0_8_;
  lStack_2c8 = CONCAT62(uStack_3be,local_3c0);
  local_2d0 = CONCAT62(uStack_3c6,uStack_3c8);
  lStack_2b8 = CONCAT62(uStack_3ae,local_3b0);
  local_2c0 = CONCAT62(uStack_3b6,uStack_3b8);
  lStack_2a8 = CONCAT62(uStack_39e,uStack_3a0);
  local_2b0 = CONCAT62(uStack_3a6,uStack_3a8);
  pvStack_308 = (void *)CONCAT62(uStack_3fe,local_400);
  local_310 = CONCAT62(uStack_406,uStack_408);
  uStack_2f8 = CONCAT62(uStack_3ee,local_3f0);
  local_300 = CONCAT62(uStack_3f6,uStack_3f8);
  uStack_2e8 = CONCAT62(uStack_3de,local_3e0);
  local_2f0 = CONCAT62(uStack_3e6,uStack_3e8);
  pvVar9 = (void *)CONCAT62(uStack_38e,uStack_390);
  lStack_2d8 = CONCAT62(uStack_3ce,local_3d0);
  local_2e0 = CONCAT62(uStack_3d6,uStack_3d8);
  ppuStack_338 = (undefined **)CONCAT62(uStack_42e,local_430);
  local_340 = (undefined **)CONCAT62(uStack_436,uStack_438);
  uStack_328 = CONCAT62(uStack_41e,local_420);
  local_330 = (undefined **)CONCAT62(uStack_426,uStack_428);
  local_f0._0_7_ = SUB87(local_350,0);
  lVar35 = CONCAT62(uStack_386,uStack_388);
  auVar12._8_8_ = lVar35;
  auVar12._0_8_ = pvVar9;
  auVar11._8_8_ = lVar35;
  auVar11._0_8_ = pvVar9;
  auVar10._8_8_ = lVar35;
  auVar10._0_8_ = pvVar9;
  ppuStack_348 = (undefined **)CONCAT62(uStack_43e,local_440);
  local_350 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
  uStack_318 = CONCAT62(uStack_40e,local_410);
  local_320 = (undefined **)CONCAT62(uStack_416,uStack_418);
  uStack_c8 = CONCAT62(uStack_376,uStack_378);
  local_d0 = (undefined **)CONCAT62(uStack_37e,local_380);
  local_150._0_7_ = CONCAT43(uStack_394,CONCAT21(uStack_396,local_397));
  if (local_450 == (undefined **)0xffffffffffffffff) {
    if ((9 < bVar17) && (auVar10 = auVar11, local_750 != 0)) {
      free(local_760);
      auVar10 = auVar12;
    }
  }
  else {
    plVar30 = (long *)((ulong)&local_450 | 8);
    if ((9 < local_398) && (lVar35 != 0)) {
      free(pvVar9);
    }
    lStack_2c8 = plVar30[0x11];
    local_2d0 = plVar30[0x10];
    lStack_2b8 = plVar30[0x13];
    local_2c0 = plVar30[0x12];
    lStack_2a8 = plVar30[0x15];
    local_2b0 = plVar30[0x14];
    pvStack_308 = (void *)plVar30[9];
    local_310 = plVar30[8];
    uStack_2f8 = plVar30[0xb];
    local_300 = plVar30[10];
    uStack_2e8 = plVar30[0xd];
    local_2f0 = plVar30[0xc];
    lStack_2d8 = plVar30[0xf];
    local_2e0 = plVar30[0xe];
    ppuStack_348 = (undefined **)plVar30[1];
    local_350 = (undefined **)*plVar30;
    ppuStack_338 = (undefined **)plVar30[3];
    local_340 = (undefined **)plVar30[2];
    uStack_328 = plVar30[5];
    local_330 = (undefined **)plVar30[4];
    uStack_318 = plVar30[7];
    local_320 = (undefined **)plVar30[6];
    uStack_c8 = CONCAT62(uStack_376,uStack_378);
    local_d0 = (undefined **)CONCAT62(uStack_37e,local_380);
    local_150 = (undefined **)((ulong)local_f0 & 0xffffffffffffff);
    bVar31 = bVar17;
    auVar10 = auVar36;
  }
  uStack_e8 = uStack_c8;
  local_f0 = local_d0;
  local_458 = (undefined4)local_150;
  uVar22 = local_150._3_4_;
  uStack_4c8 = (undefined2)lStack_2c8;
  uStack_4c6 = (undefined6)((ulong)lStack_2c8 >> 0x10);
  local_4d0 = (undefined2)local_2d0;
  uStack_4ce = (undefined6)((ulong)local_2d0 >> 0x10);
  uStack_4b8 = (undefined2)lStack_2b8;
  uStack_4b6 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  local_4c0 = (undefined2)local_2c0;
  uStack_4be = (undefined6)((ulong)local_2c0 >> 0x10);
  uStack_4a8 = (undefined2)lStack_2a8;
  uStack_4a6 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  local_4b0 = (undefined2)local_2b0;
  uStack_4ae = (undefined6)((ulong)local_2b0 >> 0x10);
  uStack_508 = SUB82(pvStack_308,0);
  uStack_506 = (undefined6)((ulong)pvStack_308 >> 0x10);
  local_510 = (undefined2)local_310;
  uStack_50e = (undefined6)(local_310 >> 0x10);
  uStack_4f8 = (undefined2)uStack_2f8;
  uStack_4f6 = (undefined6)(uStack_2f8 >> 0x10);
  local_500 = (undefined2)local_300;
  uStack_4fe = (undefined6)(local_300 >> 0x10);
  uStack_4e8 = (undefined2)uStack_2e8;
  uStack_4e6 = (undefined6)(uStack_2e8 >> 0x10);
  local_4f0 = (undefined2)local_2f0;
  uStack_4ee = (undefined6)(local_2f0 >> 0x10);
  uStack_4d8 = (undefined2)lStack_2d8;
  uStack_4d6 = (undefined6)((ulong)lStack_2d8 >> 0x10);
  local_4e0 = (undefined2)local_2e0;
  uStack_4de = (undefined6)(local_2e0 >> 0x10);
  uStack_454 = (undefined3)((ulong)local_150 >> 0x20);
  uStack_548 = SUB81(ppuStack_348,0);
  uStack_547 = (undefined1)((ulong)ppuStack_348 >> 8);
  uStack_546 = (undefined6)((ulong)ppuStack_348 >> 0x10);
  local_550 = local_350;
  uStack_538 = SUB82(ppuStack_338,0);
  uStack_536 = (undefined6)((ulong)ppuStack_338 >> 0x10);
  local_540 = SUB82(local_340,0);
  uStack_53e = (undefined6)((ulong)local_340 >> 0x10);
  local_100 = local_5c0;
  uStack_528 = (undefined2)uStack_328;
  uStack_526 = (undefined6)(uStack_328 >> 0x10);
  local_530 = (char)local_330;
  uStack_52f = (undefined1)((ulong)local_330 >> 8);
  uStack_52e = (undefined6)((ulong)local_330 >> 0x10);
  uStack_518 = (undefined2)uStack_318;
  uStack_516 = (undefined6)(uStack_318 >> 0x10);
  local_520 = SUB82(local_320,0);
  uStack_51e = (undefined6)((ulong)local_320 >> 0x10);
  uStack_468 = uStack_c8;
  local_470 = local_d0;
  uStack_d4 = uStack_454;
  uStack_108 = uStack_5c8;
  local_110 = local_5d0;
  uStack_128 = uStack_5e8;
  local_130 = local_5f0;
  uStack_118 = uStack_5d8;
  local_120 = local_5e0;
  local_80 = local_5c0;
  uStack_a8 = uStack_5e8;
  local_b0 = local_5f0;
  uStack_98 = uStack_5d8;
  uStack_a0 = local_5e0;
  uStack_88 = uStack_5c8;
  local_90 = local_5d0;
  uStack_148 = uStack_608;
  local_150 = local_610;
  uStack_138 = uStack_5f8;
  local_140 = local_600;
  uStack_c8 = uStack_608;
  local_d0 = local_610;
  uStack_b8 = uStack_5f8;
  local_c0 = (undefined **)local_600;
  local_450 = local_350;
  local_430 = SUB82(local_330,0);
  uStack_448 = uStack_548;
  uStack_447 = uStack_547;
  uStack_446 = uStack_546;
  local_440 = local_540;
  uStack_43e = uStack_53e;
  uStack_438 = uStack_538;
  uStack_436 = uStack_536;
  uStack_42e = uStack_52e;
  uStack_428 = uStack_528;
  uStack_426 = uStack_526;
  local_420 = local_520;
  uStack_41e = uStack_51e;
  uStack_418 = uStack_518;
  uStack_416 = uStack_516;
  local_410 = local_510;
  uStack_40e = uStack_50e;
  uStack_408 = uStack_508;
  uStack_406 = uStack_506;
  local_400 = local_500;
  uStack_3fe = uStack_4fe;
  uStack_3f8 = uStack_4f8;
  uStack_3f6 = uStack_4f6;
  local_3f0 = local_4f0;
  uStack_3ee = uStack_4ee;
  uStack_3e8 = uStack_4e8;
  uStack_3e6 = uStack_4e6;
  local_3e0 = local_4e0;
  uStack_3de = uStack_4de;
  uStack_3d8 = uStack_4d8;
  uStack_3d6 = uStack_4d6;
  local_3d0 = local_4d0;
  uStack_3ce = uStack_4ce;
  uStack_3c8 = uStack_4c8;
  uStack_3c6 = uStack_4c6;
  local_3c0 = local_4c0;
  uStack_3be = uStack_4be;
  uStack_3b8 = uStack_4b8;
  uStack_3b6 = uStack_4b6;
  local_3b0 = local_4b0;
  uStack_3ae = uStack_4ae;
  uStack_3a8 = uStack_4a8;
  uStack_3a6 = uStack_4a6;
  local_d8 = local_458;
  if (ppuVar15 == (undefined **)0xffffffffffffffff) {
                    /* try { // try from 00781c20 to 00781cb7 has its CatchHandler @ 00782450 */
    FUN_0079b764(&local_d0);
    local_350 = (undefined **)0xffffffffffffffff;
  }
  else {
    lVar6 = lStack_2d8;
    lStack_2d8 = local_2e0;
    lVar7 = lStack_2c8;
    lStack_2c8 = local_2d0;
    lVar8 = lStack_2b8;
    lStack_2b8 = local_2c0;
    local_2a0 = lStack_2a8;
    lStack_2a8 = local_2b0;
    uStack_298._0_5_ = CONCAT41(local_458,bVar31);
    lVar32 = uStack_318;
    uStack_318 = (ulong)local_320;
    lVar5 = (long)pvStack_308;
    pvStack_308 = (void *)local_310;
    uStack_298 = CONCAT44(uVar22,(undefined4)uStack_298);
    uVar29 = uStack_2f8;
    uStack_2f8 = local_300;
    local_2e0 = uStack_2e8;
    uStack_2e8 = local_2f0;
    lVar35 = (long)ppuStack_348;
    ppuVar4 = ppuStack_338;
    ppuStack_338 = local_340;
    local_320 = (undefined **)uStack_328;
    uStack_328 = (ulong)local_330;
    ppuStack_348 = local_350;
    uStack_278 = uStack_e8;
    local_280 = local_f0;
    local_350 = ppuVar15;
                    /* try { // try from 00781b88 to 00781b8f has its CatchHandler @ 007823d0 */
    local_340 = (undefined **)lVar35;
    local_330 = ppuVar4;
    local_310 = lVar32;
    local_300 = lVar5;
    local_2f0 = uVar29;
    local_2d0 = lVar6;
    local_2c0 = lVar7;
    local_2b0 = lVar8;
    local_290 = auVar10;
    FUN_0079b764(&local_2f0);
    uStack_d4 = (undefined3)((ulong)uStack_298 >> 0x28);
    uStack_448 = SUB81(local_340,0);
    uStack_447 = (undefined1)((ulong)local_340 >> 8);
    uStack_446 = (undefined6)((ulong)local_340 >> 0x10);
    local_450 = ppuStack_348;
    uStack_438 = SUB82(local_330,0);
    uStack_436 = (undefined6)((ulong)local_330 >> 0x10);
    local_440 = SUB82(ppuStack_338,0);
    uStack_43e = (undefined6)((ulong)ppuStack_338 >> 0x10);
    uStack_3f8 = SUB82(local_150,0);
    uStack_3f6 = (undefined6)((ulong)local_150 >> 0x10);
    local_400 = (undefined2)uStack_2f8;
    uStack_3fe = (undefined6)(uStack_2f8 >> 0x10);
    uStack_3e8 = (undefined2)local_140;
    uStack_3e6 = (undefined6)(local_140 >> 0x10);
    local_3f0 = (undefined2)uStack_148;
    uStack_3ee = (undefined6)(uStack_148 >> 0x10);
    uStack_418 = (undefined2)local_310;
    uStack_416 = (undefined6)(local_310 >> 0x10);
    local_420 = (undefined2)uStack_318;
    uStack_41e = (undefined6)(uStack_318 >> 0x10);
    uStack_408 = (undefined2)local_300;
    uStack_406 = (undefined6)(local_300 >> 0x10);
    local_410 = SUB82(pvStack_308,0);
    uStack_40e = (undefined6)((ulong)pvStack_308 >> 0x10);
    uStack_428 = SUB82(local_320,0);
    uStack_426 = (undefined6)((ulong)local_320 >> 0x10);
    local_430 = (undefined2)uStack_328;
    uStack_42e = (undefined6)(uStack_328 >> 0x10);
    uStack_3b8 = (undefined2)local_110;
    uStack_3b6 = (undefined6)((ulong)local_110 >> 0x10);
    local_3c0 = (undefined2)uStack_118;
    uStack_3be = (undefined6)((ulong)uStack_118 >> 0x10);
    uStack_3a8 = (undefined2)local_100;
    uStack_3a6 = (undefined6)((ulong)local_100 >> 0x10);
    local_3b0 = (undefined2)uStack_108;
    uStack_3ae = (undefined6)((ulong)uStack_108 >> 0x10);
    uStack_3d8 = (undefined2)local_130;
    uStack_3d6 = (undefined6)((ulong)local_130 >> 0x10);
    local_3e0 = (undefined2)uStack_138;
    uStack_3de = (undefined6)((ulong)uStack_138 >> 0x10);
    uStack_3c8 = (undefined2)local_120;
    uStack_3c6 = (undefined6)((ulong)local_120 >> 0x10);
    local_3d0 = (undefined2)uStack_128;
    uStack_3ce = (undefined6)((ulong)uStack_128 >> 0x10);
    uStack_e8 = uStack_278;
    local_f0 = local_280;
    local_d8 = uStack_298._1_4_;
    bVar31 = (byte)uStack_298;
    auVar10 = local_290;
  }
  local_2d0 = CONCAT62(uStack_3d6,uStack_3d8);
  lStack_2d8 = CONCAT62(uStack_3de,local_3e0);
  local_2c0 = CONCAT62(uStack_3c6,uStack_3c8);
  lStack_2c8 = CONCAT62(uStack_3ce,local_3d0);
  local_2b0 = CONCAT62(uStack_3b6,uStack_3b8);
  lStack_2b8 = CONCAT62(uStack_3be,local_3c0);
  local_2a0 = CONCAT62(uStack_3a6,uStack_3a8);
  lStack_2a8 = CONCAT62(uStack_3ae,local_3b0);
  uStack_298._0_5_ = CONCAT41(local_d8,bVar31);
  local_310 = CONCAT62(uStack_416,uStack_418);
  uStack_318 = CONCAT62(uStack_41e,local_420);
  local_300 = CONCAT62(uStack_406,uStack_408);
  pvStack_308 = (void *)CONCAT62(uStack_40e,local_410);
  uStack_298 = CONCAT44(CONCAT31(uStack_d4,local_d8._3_1_),(undefined4)uStack_298);
  local_2f0 = CONCAT62(uStack_3f6,uStack_3f8);
  uStack_2f8 = CONCAT62(uStack_3fe,local_400);
  local_2e0 = CONCAT62(uStack_3e6,uStack_3e8);
  uStack_2e8 = CONCAT62(uStack_3ee,local_3f0);
  local_340 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
  local_330 = (undefined **)CONCAT62(uStack_436,uStack_438);
  ppuStack_338 = (undefined **)CONCAT62(uStack_43e,local_440);
  local_320 = (undefined **)CONCAT62(uStack_426,uStack_428);
  uStack_328 = CONCAT62(uStack_42e,local_430);
  ppuStack_348 = local_450;
  uStack_278 = uStack_e8;
  local_280 = local_f0;
  local_290 = auVar10;
  <http::request::[4]::http::request::Builder>::version(&local_550,&local_350,(char)uVar14);
  uVar21 = uStack_547;
  uVar20 = uStack_548;
  puVar19 = local_580;
  __ptr = puStack_588;
  uVar14 = local_650;
  pvVar9 = pvStack_658;
  ppuStack_348 = (undefined **)puStack_588;
  local_350 = local_590;
  ppuStack_338 = ppuStack_578;
  local_340 = (undefined **)local_580;
  if (local_550 == (undefined **)0xffffffffffffffff) {
    if (local_590 == (undefined **)0x0) {
      if ((code *)*local_580 != (code *)0x0) {
                    /* try { // try from 00782288 to 0078228f has its CatchHandler @ 0078230c */
        (*(code *)*local_580)(puStack_588);
      }
      if (puVar19[1] != 0) {
        free(__ptr);
      }
    }
    else {
                    /* try { // try from 007822b8 to 007822eb has its CatchHandler @ 00782408 */
      (*(code *)local_590[4])(&ppuStack_338,puStack_588,local_580);
    }
    local_350._0_2_ = CONCAT11(uVar21,uVar20);
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002e25ca,0x13,&local_350,&DAT_00ad8cb8,
               &PTR_s__root__cargo_registry_src_index__00adb868);
  }
  uStack_448 = uStack_548;
  uVar25 = 0;
  uStack_37e = uStack_47e;
  uStack_386 = (undefined6)local_486;
  local_380 = (undefined2)((ulong)local_486 >> 0x30);
  uVar29 = local_650 * 4;
  uStack_39e = (undefined6)uStack_49e;
  local_398 = (byte)((ulong)uStack_49e >> 0x30);
  local_397 = (undefined1)((ulong)uStack_49e >> 0x38);
  uStack_3a6 = uStack_4a6;
  uStack_3a0 = uStack_4a0;
  uStack_38e = (undefined6)uStack_48e;
  uStack_388 = (undefined2)((ulong)uStack_48e >> 0x30);
  uStack_396 = (undefined2)local_496;
  uStack_394 = (undefined4)((ulong)local_496 >> 0x10);
  uStack_390 = (undefined2)((ulong)local_496 >> 0x30);
  uStack_3de = uStack_4de;
  uStack_3d8 = uStack_4d8;
  uStack_3e6 = uStack_4e6;
  local_3e0 = local_4e0;
  uStack_3ce = uStack_4ce;
  uStack_3c8 = uStack_4c8;
  uStack_3d6 = uStack_4d6;
  local_3d0 = local_4d0;
  uStack_3be = uStack_4be;
  uStack_3b8 = uStack_4b8;
  uStack_3c6 = uStack_4c6;
  local_3c0 = local_4c0;
  uStack_3ae = uStack_4ae;
  uStack_3a8 = uStack_4a8;
  uStack_3b6 = uStack_4b6;
  local_3b0 = local_4b0;
  uStack_41e = uStack_51e;
  uStack_418 = uStack_518;
  uStack_426 = uStack_526;
  local_420 = local_520;
  uStack_40e = uStack_50e;
  uStack_408 = uStack_508;
  uStack_416 = uStack_516;
  local_410 = local_510;
  uStack_3fe = uStack_4fe;
  uStack_3f8 = uStack_4f8;
  uStack_406 = uStack_506;
  local_400 = local_500;
  uStack_3ee = uStack_4ee;
  uStack_3e8 = uStack_4e8;
  uStack_3f6 = uStack_4f6;
  local_3f0 = local_4f0;
  uStack_43e = uStack_53e;
  uStack_438 = uStack_538;
  uStack_446 = uStack_546;
  local_440 = local_540;
  uStack_42e = uStack_52e;
  uStack_428 = uStack_528;
  uStack_436 = uStack_536;
  local_430 = (undefined2)(CONCAT17(uStack_52f,CONCAT16(local_530,uStack_536)) >> 0x30);
  local_450 = local_550;
  puStack_368 = puStack_588;
  local_370 = local_590;
  ppuStack_358 = ppuStack_578;
  puStack_360 = local_580;
  uStack_447 = uStack_547;
  if ((local_650 >> 0x3e == 0) && (uVar29 < 0x7fffffffffffffff)) {
    uVar18 = (undefined2)local_648;
    if (uVar29 == 0) {
      __dest = (void *)0x2;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar25 = 2;
      __dest = (void *)FUN_004b25a4(uVar29,2);
      if (__dest == (void *)0x0) goto LAB_00781dc4;
      if (uVar14 != 0) {
        memcpy(__dest,pvVar9,uVar29);
      }
    }
                    /* try { // try from 00781ddc to 00781de7 has its CatchHandler @ 007823a0 */
    FUN_00789c40(&local_150,&ppuStack_688);
                    /* try { // try from 00781de8 to 00781df3 has its CatchHandler @ 0078238c */
    FUN_00789b14(&local_d0,&uStack_670);
    local_330 = (undefined **)uStack_148;
    ppuStack_338 = local_150;
    local_310 = (ulong)local_c0;
    uStack_318 = uStack_c8;
    local_320 = local_d0;
    ppuStack_348 = (undefined **)uStack_698;
    local_350 = local_6a0;
    uStack_328 = local_140;
    local_340 = (undefined **)local_690;
                    /* try { // try from 00781e24 to 00781e2b has its CatchHandler @ 00782358 */
    FUN_0077df7c(&local_450);
    local_290._8_8_ = CONCAT62(uStack_386,uStack_388);
    local_290._0_8_ = CONCAT62(uStack_38e,uStack_390);
    local_280 = (undefined **)CONCAT62(uStack_37e,local_380);
    uStack_408 = SUB82(__dest,0);
    uStack_406 = (undefined6)((ulong)__dest >> 0x10);
    local_410 = (undefined2)local_310;
    uStack_40e = (undefined6)(local_310 >> 0x10);
    local_400 = (undefined2)uVar14;
    uStack_3fe = (undefined6)(uVar14 >> 0x10);
    ppuStack_258 = ppuStack_358;
    local_260 = puStack_360;
    lStack_2c8 = CONCAT62(uStack_3c6,uStack_3c8);
    local_2d0 = CONCAT62(uStack_3ce,local_3d0);
    lStack_2b8 = CONCAT62(uStack_3b6,uStack_3b8);
    local_2c0 = CONCAT62(uStack_3be,local_3c0);
    puStack_268 = puStack_368;
    local_270 = local_370;
    uStack_3f8 = uVar18;
    lStack_2a8 = CONCAT62(uStack_3a6,uStack_3a8);
    local_2b0 = CONCAT62(uStack_3ae,local_3b0);
    uStack_298 = CONCAT44(uStack_394,CONCAT22(uStack_396,CONCAT11(local_397,local_398)));
    local_2a0 = CONCAT62(uStack_39e,uStack_3a0);
    uStack_448 = SUB81(ppuStack_348,0);
    uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
    uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
    local_450 = local_350;
    uStack_438 = SUB82(ppuStack_338,0);
    uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
    local_440 = SUB82(local_340,0);
    uStack_43e = (undefined6)((ulong)local_340 >> 0x10);
    uStack_2f8 = CONCAT62(uStack_3f6,uVar18);
    local_300 = uVar14;
    uStack_428 = (undefined2)uStack_328;
    uStack_426 = (undefined6)(uStack_328 >> 0x10);
    local_430 = SUB82(local_330,0);
    uStack_42e = (undefined6)((ulong)local_330 >> 0x10);
    uStack_418 = (undefined2)uStack_318;
    uStack_416 = (undefined6)(uStack_318 >> 0x10);
    local_420 = SUB82(local_320,0);
    uStack_41e = (undefined6)((ulong)local_320 >> 0x10);
    uStack_2e8 = CONCAT62(uStack_3e6,uStack_3e8);
    local_2f0 = CONCAT62(uStack_3ee,local_3f0);
    lStack_2d8 = CONCAT62(uStack_3d6,uStack_3d8);
    local_2e0 = CONCAT62(uStack_3de,local_3e0);
                    /* try { // try from 00781eb0 to 00781ebb has its CatchHandler @ 00782350 */
    pvStack_308 = __dest;
    auVar36 = FUN_00791a20(plVar34 + 2,&local_350);
    iVar24 = (int)plVar34[0x2c];
    if (iVar13 != -1) {
      iVar24 = iVar13;
    }
    if (iVar24 == -1) {
      puVar26 = (ulong *)0x0;
      iVar13 = (int)plVar34[0x2e];
    }
    else {
      uVar14 = plVar34[0x2b];
      if (iVar13 != -1) {
        uVar14 = uVar1;
      }
                    /* try { // try from 00781eec to 00781efb has its CatchHandler @ 00782330 */
      tokio::time::sleep::sleep
                (&local_450,uVar14,iVar24,&PTR_s__nix_store_8006w282fgsx3273c878b_00adb880);
      pvStack_308 = (void *)CONCAT62(uStack_406,uStack_408);
      local_310 = CONCAT62(uStack_40e,local_410);
      uStack_2f8 = CONCAT62(uStack_3f6,uStack_3f8);
      local_300 = CONCAT62(uStack_3fe,local_400);
      uStack_2e8 = CONCAT62(uStack_3e6,uStack_3e8);
      local_2f0 = CONCAT62(uStack_3ee,local_3f0);
      local_2e0 = CONCAT62(uStack_3de,local_3e0);
      ppuStack_348 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
      ppuStack_338 = (undefined **)CONCAT62(uStack_436,uStack_438);
      local_340 = (undefined **)CONCAT62(uStack_43e,local_440);
      local_350 = local_450;
      uStack_328 = CONCAT62(uStack_426,uStack_428);
      local_330 = (undefined **)CONCAT62(uStack_42e,local_430);
      uStack_318 = CONCAT62(uStack_416,uStack_418);
      local_320 = (undefined **)CONCAT62(uStack_41e,local_420);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar26 = (ulong *)FUN_004b25a4(0x78,8);
      if (puVar26 == (ulong *)0x0) {
                    /* try { // try from 007821e0 to 007821eb has its CatchHandler @ 007824c0 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x78);
      }
      puVar26[9] = (ulong)pvStack_308;
      puVar26[8] = local_310;
      puVar26[0xb] = uStack_2f8;
      puVar26[10] = local_300;
      puVar26[0xd] = uStack_2e8;
      puVar26[0xc] = local_2f0;
      puVar26[1] = (ulong)ppuStack_348;
      *puVar26 = (ulong)local_350;
      puVar26[3] = (ulong)ppuStack_338;
      puVar26[2] = (ulong)local_340;
      puVar26[0xe] = local_2e0;
      puVar26[5] = uStack_328;
      puVar26[4] = (ulong)local_330;
      puVar26[7] = uStack_318;
      puVar26[6] = (ulong)local_320;
      iVar13 = (int)plVar34[0x2e];
    }
    if (iVar13 == -1) {
      puVar27 = (ulong *)0x0;
    }
    else {
                    /* try { // try from 00781f8c to 00781f9b has its CatchHandler @ 00782328 */
      tokio::time::sleep::sleep
                (&local_450,plVar34[0x2d],iVar13,&PTR_s__nix_store_8006w282fgsx3273c878b_00adb880);
      pvStack_308 = (void *)CONCAT62(uStack_406,uStack_408);
      local_310 = CONCAT62(uStack_40e,local_410);
      uStack_2f8 = CONCAT62(uStack_3f6,uStack_3f8);
      local_300 = CONCAT62(uStack_3fe,local_400);
      uStack_2e8 = CONCAT62(uStack_3e6,uStack_3e8);
      local_2f0 = CONCAT62(uStack_3ee,local_3f0);
      local_2e0 = CONCAT62(uStack_3de,local_3e0);
      ppuStack_348 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
      ppuStack_338 = (undefined **)CONCAT62(uStack_436,uStack_438);
      local_340 = (undefined **)CONCAT62(uStack_43e,local_440);
      local_350 = local_450;
      uStack_328 = CONCAT62(uStack_426,uStack_428);
      local_330 = (undefined **)CONCAT62(uStack_42e,local_430);
      uStack_318 = CONCAT62(uStack_416,uStack_418);
      local_320 = (undefined **)CONCAT62(uStack_41e,local_420);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar27 = (ulong *)FUN_004b25a4(0x78,8);
      if (puVar27 == (ulong *)0x0) {
                    /* try { // try from 007821f0 to 007821fb has its CatchHandler @ 007824a4 */
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x78);
      }
      puVar27[9] = (ulong)pvStack_308;
      puVar27[8] = local_310;
      puVar27[0xb] = uStack_2f8;
      puVar27[10] = local_300;
      puVar27[0xd] = uStack_2e8;
      puVar27[0xc] = local_2f0;
      puVar27[1] = (ulong)ppuStack_348;
      *puVar27 = (ulong)local_350;
      puVar27[3] = (ulong)ppuStack_338;
      puVar27[2] = (ulong)local_340;
      puVar27[0xe] = local_2e0;
      puVar27[5] = uStack_328;
      puVar27[4] = (ulong)local_330;
      puVar27[7] = uStack_318;
      puVar27[6] = (ulong)local_320;
    }
    uStack_408 = (undefined2)uStack_6b8;
    uStack_406 = (undefined6)(uStack_6b8 >> 0x10);
    local_410 = (undefined2)local_6c0;
    uStack_40e = (undefined6)(local_6c0 >> 0x10);
    uStack_428 = (undefined2)uStack_6d8;
    uStack_426 = (undefined6)(uStack_6d8 >> 0x10);
    local_430 = (undefined2)local_6e0;
    uStack_42e = (undefined6)(local_6e0 >> 0x10);
    uStack_418 = (undefined2)uStack_6c8;
    uStack_416 = (undefined6)(uStack_6c8 >> 0x10);
    local_420 = (undefined2)uStack_6d0;
    uStack_41e = (undefined6)(uStack_6d0 >> 0x10);
    local_400 = (undefined2)local_6b0;
    uStack_3fe = (undefined6)(local_6b0 >> 0x10);
    uStack_448 = SUB81(piStack_6f8,0);
    uStack_447 = (undefined1)((ulong)piStack_6f8 >> 8);
    uStack_446 = (undefined6)((ulong)piStack_6f8 >> 0x10);
    local_450 = local_700;
    uStack_438 = SUB82(ppuStack_6e8,0);
    uStack_436 = (undefined6)((ulong)ppuStack_6e8 >> 0x10);
    local_440 = (undefined2)uStack_6f0;
    uStack_43e = (undefined6)(uStack_6f0 >> 0x10);
    uStack_318 = uStack_668;
    local_320 = (undefined **)uStack_670;
    uStack_328 = uStack_678;
    local_330 = (undefined **)local_680;
    uStack_2f8 = local_648;
    local_300 = local_650;
    pvStack_308 = pvStack_658;
    local_310 = local_660;
    ppuStack_348 = (undefined **)uStack_698;
    local_350 = local_6a0;
    ppuStack_338 = ppuStack_688;
    local_340 = (undefined **)local_690;
    do {
      lVar35 = *plVar34;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar3) {
        *plVar34 = lVar35 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar35 < 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x7822f0);
      (*pcVar23)();
    }
    param_1[0x24] = plVar34;
    param_1[0x25] = auVar36._0_8_;
    uStack_240 = SUB84(pvStack_718,0);
    local_248 = (undefined4)local_720;
    uStack_244 = (undefined4)(local_720 >> 0x20);
    lVar35 = plVar34[0x2d];
    param_1[0x1e] = 0;
    param_1[0x1f] = lVar35;
    param_1[0x15] = local_6e0;
    param_1[0x14] = ppuStack_6e8;
    param_1[0x17] = uStack_6d0;
    param_1[0x16] = uStack_6d8;
    param_1[0x1c] = 0;
    param_1[0x1d] = 8;
    lVar35 = plVar34[0x2e];
    param_1[0x19] = local_6c0;
    param_1[0x18] = uStack_6c8;
    param_1[0x1b] = local_6b0;
    param_1[0x1a] = uStack_6b8;
    *(int *)(param_1 + 0x20) = (int)lVar35;
    param_1[0xd] = local_660;
    param_1[0xc] = uStack_668;
    param_1[0xf] = local_650;
    param_1[0xe] = pvStack_658;
    param_1[0x26] = auVar36._8_8_;
    param_1[0x27] = 0;
    param_1[0x11] = local_700;
    param_1[0x10] = local_648;
    param_1[0x13] = uStack_6f0;
    param_1[0x12] = piStack_6f8;
    param_1[0x28] = puVar26;
    param_1[0x29] = puVar27;
    param_1[5] = local_6a0;
    param_1[4] = local_598;
    param_1[7] = local_690;
    param_1[6] = uStack_698;
    param_1[9] = local_680;
    param_1[8] = ppuStack_688;
    param_1[0xb] = uStack_670;
    param_1[10] = uStack_678;
    param_1[1] = ppuStack_5b0;
    *param_1 = local_5b8;
    param_1[3] = uStack_5a0;
    param_1[2] = local_5a8;
    *(ulong *)((long)param_1 + 0x10c) = CONCAT44(uStack_240,uStack_244);
    *(ulong *)((long)param_1 + 0x104) = CONCAT44(local_248,uStack_24c);
    param_1[0x23] = local_710;
    param_1[0x22] = pvStack_718;
    return;
  }
LAB_00781dc4:
                    /* try { // try from 00781dc4 to 00781dcf has its CatchHandler @ 007824ec */
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar25,uVar29);
}


// ===== 0078259c  <reqwest::async_impl::client::Client_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::Client as core::default::Default>::default */

undefined8 __rustcall <reqwest::async_impl::client::Client_as_core::default::Default>::default(void)

{
  undefined1 auVar1 [16];
  undefined8 local_368 [105];
  
  <reqwest::async_impl::client::reqwest::async_impl::client::ClientBuilder>::new(local_368);
  auVar1 = <reqwest::async_impl::client::[0]::reqwest::async_impl::client::ClientBuilder>::build
                     (local_368);
  local_368[0] = auVar1._8_8_;
  if (auVar1._0_8_ != 1) {
    return local_368[0];
  }
                    /* try { // try from 007825dc to 007825ff has its CatchHandler @ 00782604 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002e25dd,0xd,local_368,&PTR_FUN_00ad8cd8,
             &PTR_s__root__cargo_registry_src_index__00adb8c8);
}


// ===== 0078261c  <reqwest::async_impl::client::ClientBuilder_as_core::default::Default>::default =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::ClientBuilder as core::default::Default>::default */

void __rustcall
<reqwest::async_impl::client::ClientBuilder_as_core::default::Default>::default(void)

{
  (*(code *)PTR_new_00b03170)();
  return;
}


// ===== 00782620  <reqwest::async_impl::client::[2]::reqwest::async_impl::client::Client>::execute =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::[2]::reqwest::async_impl::client::Client>::execute */

void __rustcall
<reqwest::async_impl::client::[2]::reqwest::async_impl::client::Client>::execute
          (undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  byte bVar17;
  undefined2 uVar18;
  undefined8 *puVar19;
  undefined1 *__ptr;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined4 uVar22;
  code *pcVar23;
  int iVar24;
  undefined8 uVar25;
  void *__dest;
  ulong *puVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined **extraout_x9;
  byte bVar31;
  long lVar32;
  long *plVar33;
  long *plVar34;
  ulong unaff_x27;
  long lVar35;
  undefined1 auVar36 [16];
  undefined **ppuStack_760;
  long lStack_750;
  undefined **ppuStack_738;
  ulong uStack_720;
  void *pvStack_718;
  ulong uStack_710;
  undefined **ppuStack_700;
  int *piStack_6f8;
  ulong uStack_6f0;
  undefined **ppuStack_6e8;
  ulong uStack_6e0;
  undefined8 uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  undefined **ppuStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  undefined **ppuStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  void *pvStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  undefined **ppuStack_638;
  void *pvStack_630;
  undefined8 *puStack_628;
  ulong uStack_620;
  undefined4 uStack_618;
  undefined1 uStack_614;
  undefined **ppuStack_610;
  ulong uStack_608;
  ulong uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined **ppuStack_590;
  undefined1 *puStack_588;
  undefined8 *puStack_580;
  undefined **ppuStack_578;
  undefined **ppuStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined **ppuStack_550;
  undefined1 uStack_548;
  undefined1 uStack_547;
  undefined6 uStack_546;
  undefined2 uStack_540;
  undefined6 uStack_53e;
  undefined2 uStack_538;
  undefined6 uStack_536;
  char cStack_530;
  undefined1 uStack_52f;
  undefined6 uStack_52e;
  undefined2 uStack_528;
  undefined6 uStack_526;
  undefined2 uStack_520;
  undefined6 uStack_51e;
  undefined2 uStack_518;
  undefined6 uStack_516;
  undefined2 uStack_510;
  undefined6 uStack_50e;
  undefined2 uStack_508;
  undefined6 uStack_506;
  undefined2 uStack_500;
  undefined6 uStack_4fe;
  undefined2 uStack_4f8;
  undefined6 uStack_4f6;
  undefined2 uStack_4f0;
  undefined6 uStack_4ee;
  undefined2 uStack_4e8;
  undefined6 uStack_4e6;
  undefined2 uStack_4e0;
  undefined6 uStack_4de;
  undefined2 uStack_4d8;
  undefined6 uStack_4d6;
  undefined2 uStack_4d0;
  undefined6 uStack_4ce;
  undefined2 uStack_4c8;
  undefined6 uStack_4c6;
  undefined2 uStack_4c0;
  undefined6 uStack_4be;
  undefined2 uStack_4b8;
  undefined6 uStack_4b6;
  undefined2 uStack_4b0;
  undefined6 uStack_4ae;
  undefined2 uStack_4a8;
  undefined6 uStack_4a6;
  undefined2 uStack_4a0;
  undefined8 uStack_49e;
  undefined8 uStack_496;
  undefined8 uStack_48e;
  undefined8 uStack_486;
  undefined6 uStack_47e;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined4 uStack_458;
  undefined3 uStack_454;
  undefined **ppuStack_450;
  undefined1 uStack_448;
  undefined1 uStack_447;
  undefined6 uStack_446;
  undefined2 uStack_440;
  undefined6 uStack_43e;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
  undefined2 uStack_420;
  undefined6 uStack_41e;
  undefined2 uStack_418;
  undefined6 uStack_416;
  undefined2 uStack_410;
  undefined6 uStack_40e;
  undefined2 uStack_408;
  undefined6 uStack_406;
  undefined2 uStack_400;
  undefined6 uStack_3fe;
  undefined2 uStack_3f8;
  undefined6 uStack_3f6;
  undefined2 uStack_3f0;
  undefined6 uStack_3ee;
  undefined2 uStack_3e8;
  undefined6 uStack_3e6;
  undefined2 uStack_3e0;
  undefined6 uStack_3de;
  undefined2 uStack_3d8;
  undefined6 uStack_3d6;
  undefined2 uStack_3d0;
  undefined6 uStack_3ce;
  undefined2 uStack_3c8;
  undefined6 uStack_3c6;
  undefined2 uStack_3c0;
  undefined6 uStack_3be;
  undefined2 uStack_3b8;
  undefined6 uStack_3b6;
  undefined2 uStack_3b0;
  undefined6 uStack_3ae;
  undefined2 uStack_3a8;
  undefined6 uStack_3a6;
  undefined2 uStack_3a0;
  undefined6 uStack_39e;
  byte bStack_398;
  undefined1 uStack_397;
  undefined2 uStack_396;
  undefined4 uStack_394;
  undefined2 uStack_390;
  undefined6 uStack_38e;
  undefined2 uStack_388;
  undefined6 uStack_386;
  undefined2 uStack_380;
  undefined6 uStack_37e;
  undefined2 uStack_378;
  undefined6 uStack_376;
  undefined **ppuStack_370;
  undefined1 *puStack_368;
  undefined8 *puStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  void *pvStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [16];
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  undefined1 *puStack_268;
  undefined8 *puStack_260;
  undefined **ppuStack_258;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_71 [17];
  
  ppuStack_760 = (undefined **)0x0;
  pvStack_718 = (void *)param_3[0x1f];
  uStack_720 = param_3[0x1e];
  uVar28 = param_3[0x16];
  uStack_6e0 = param_3[0x15];
  uStack_6b8 = param_3[0x1a];
  uStack_6c0 = param_3[0x19];
  uStack_710 = param_3[0x20];
  iVar13 = (int)param_3[0x1d];
  uVar14 = param_3[0x21];
  uStack_6c8 = param_3[0x18];
  uStack_6d0 = param_3[0x17];
  uStack_678 = param_3[10];
  uStack_680 = param_3[9];
  piStack_6f8 = (int *)param_3[0x12];
  ppuStack_700 = (undefined **)param_3[0x11];
  ppuStack_6e8 = (undefined **)param_3[0x14];
  uStack_6f0 = param_3[0x13];
  uStack_6d8._4_4_ = (uint)(uVar28 >> 0x20);
  uVar29 = (ulong)uStack_6d8._4_4_;
  uStack_668 = param_3[0xc];
  uStack_670 = param_3[0xb];
  pvStack_658 = (void *)param_3[0xe];
  uStack_660 = param_3[0xd];
  uStack_6b0 = param_3[0x1b];
  uVar1 = param_3[0x1c];
  uStack_648 = param_3[0x10];
  uStack_650 = param_3[0xf];
  uStack_698 = param_3[6];
  ppuStack_6a0 = (undefined **)param_3[5];
  ppuStack_688 = (undefined **)param_3[8];
  uStack_690 = param_3[7];
  uStack_620 = param_3[4];
  ppuStack_638 = (undefined **)param_3[1];
  uStack_640 = *param_3;
  puStack_628 = (undefined8 *)param_3[3];
  pvStack_630 = (void *)param_3[2];
  uStack_6d8 = uVar28;
  if (uStack_6d8._4_4_ == 0) {
LAB_0078127c:
    uStack_328 = param_3[0x16];
    ppuStack_330 = (undefined **)param_3[0x15];
    uStack_318 = param_3[0x18];
    uStack_320 = (undefined **)param_3[0x17];
    pvStack_308 = (void *)param_3[0x1a];
    uStack_310 = param_3[0x19];
    uStack_300 = param_3[0x1b];
    ppuStack_348 = (undefined **)param_3[0x12];
    uStack_350 = (undefined **)param_3[0x11];
    ppuStack_338 = (undefined **)param_3[0x14];
    ppuStack_340 = (undefined **)param_3[0x13];
    uVar25 = FUN_00772be0(&uStack_350);
LAB_007812b8:
    *param_1 = 2;
    param_1[1] = uVar25;
LAB_007812c0:
    puVar19 = puStack_628;
    pvVar9 = pvStack_630;
    if (uStack_640 != 0) {
      if (ppuStack_638 == (undefined **)0x0) {
        if ((code *)*puStack_628 != (code *)0x0) {
          (*(code *)*puStack_628)(pvStack_630);
        }
        if (puVar19[1] != 0) {
          free(pvVar9);
        }
      }
      else {
        (*(code *)ppuStack_638[4])(&uStack_620,pvStack_630,puStack_628);
      }
    }
    FUN_0077df7c(&ppuStack_6a0);
    if (9 < (byte)uStack_720) {
      if (uStack_710 != 0) {
        free(pvStack_718);
        return;
      }
      return;
    }
    return;
  }
  if (uVar29 < uStack_6f0) {
    iVar24 = (int)*(char *)((long)piStack_6f8 + uVar29);
    if (iVar24 == -0x41 || iVar24 + 0x41 < 0 != SCARRY4(iVar24,0x41)) goto LAB_00781378;
  }
  else if (uStack_6f0 != uVar29) goto LAB_00781378;
  if ((uStack_6d8._4_4_ != 4) || (*piStack_6f8 != 0x70747468)) {
    if (uVar29 < uStack_6f0) {
      iVar24 = (int)*(char *)((long)piStack_6f8 + uVar29);
      if (iVar24 == -0x41 || iVar24 + 0x41 < 0 != SCARRY4(iVar24,0x41)) goto LAB_00781378;
    }
    else if (uStack_6f0 != uVar29) goto LAB_00781378;
    if ((uStack_6d8._4_4_ != 5) || (*piStack_6f8 != 0x70747468 || (char)piStack_6f8[1] != 's'))
    goto LAB_0078127c;
  }
  plVar34 = (long *)*param_2;
  if ((*(byte *)((long)plVar34 + 0x182) & 1) != 0) {
    if (uVar29 < uStack_6f0) {
      if (*(char *)((long)piStack_6f8 + uVar29) + 0x40 < 0 !=
          SCARRY4((int)*(char *)((long)piStack_6f8 + uVar29),0x40)) {
LAB_00781378:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (piStack_6f8,uStack_6f0,0,uVar29,&PTR_s__root__cargo_registry_src_index__00adbf10)
        ;
      }
    }
    else if (uStack_6f0 != uVar29) goto LAB_00781378;
    if ((uStack_6d8._4_4_ != 5) || (*piStack_6f8 != 0x70747468 || (char)piStack_6f8[1] != 's')) {
      uStack_328 = param_3[0x16];
      ppuStack_330 = (undefined **)param_3[0x15];
      uStack_318 = param_3[0x18];
      uStack_320 = (undefined **)param_3[0x17];
      pvStack_308 = (void *)param_3[0x1a];
      uStack_310 = param_3[0x19];
      uStack_300 = param_3[0x1b];
      ppuStack_348 = (undefined **)param_3[0x12];
      uStack_350 = (undefined **)param_3[0x11];
      ppuStack_338 = (undefined **)param_3[0x14];
      ppuStack_340 = (undefined **)param_3[0x13];
      uVar25 = FUN_00772be0(&uStack_350);
      goto LAB_007812b8;
    }
  }
  uVar29 = 0;
  lVar35 = 2;
  if (plVar34[0x21] != 0) {
    lVar35 = 0;
  }
  ppuStack_738 = &PTR_s__root__cargo_registry_src_index__00ade880;
  do {
    if (lVar35 == 2) {
      uVar29 = uVar29 + 1;
      if ((ulong)plVar34[0x21] <= uVar29) {
        FUN_00779858(&ppuStack_450,&ppuStack_700);
        if ((char)ppuStack_450 == -1) {
          pvStack_308 = (void *)uStack_6b8;
          uStack_310 = uStack_6c0;
          uStack_328 = uStack_6d8;
          ppuStack_330 = (undefined **)uStack_6e0;
          uStack_318 = uStack_6c8;
          uStack_320 = (undefined **)uStack_6d0;
          uStack_300 = uStack_6b0;
          ppuStack_348 = (undefined **)piStack_6f8;
          uStack_350 = ppuStack_700;
          ppuStack_338 = ppuStack_6e8;
          ppuStack_340 = (undefined **)uStack_6f0;
          uVar25 = FUN_00772cd4(&uStack_350);
          *param_1 = 2;
          param_1[1] = uVar25;
          FUN_0077c844(&uStack_448);
          goto LAB_007812c0;
        }
        uStack_5e8 = CONCAT62(uStack_426,uStack_428);
        uStack_5f0 = CONCAT62(uStack_42e,uStack_430);
        uStack_5d8 = CONCAT62(uStack_416,uStack_418);
        uStack_5e0 = CONCAT62(uStack_41e,uStack_420);
        uStack_5c0 = CONCAT62(uStack_3fe,uStack_400);
        uStack_5c8 = CONCAT62(uStack_406,uStack_408);
        uStack_5d0 = CONCAT62(uStack_40e,uStack_410);
        uStack_608 = CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
        uStack_5f8 = CONCAT62(uStack_436,uStack_438);
        uStack_600 = CONCAT62(uStack_43e,uStack_440);
        ppuStack_610 = ppuStack_450;
        if ((uStack_640 & 1) == 0) {
          puStack_580 = (undefined8 *)0x0;
          ppuStack_578 = (undefined **)0x0;
          uStack_5b8 = 0;
          ppuStack_590 = &PTR_FUN_00ad8cf8;
          puStack_588 = &DAT_00000001;
          ppuStack_5b0 = extraout_x9;
        }
        else {
          uStack_448 = SUB81(pvStack_630,0);
          uStack_447 = (undefined1)((ulong)pvStack_630 >> 8);
          uStack_446 = (undefined6)((ulong)pvStack_630 >> 0x10);
          ppuStack_450 = ppuStack_638;
          uStack_438 = (undefined2)uStack_620;
          uStack_436 = (undefined6)(uStack_620 >> 0x10);
          uStack_440 = SUB82(puStack_628,0);
          uStack_43e = (undefined6)((ulong)puStack_628 >> 0x10);
          if (ppuStack_638 == (undefined **)0x0) {
            ppuStack_5b0 = (undefined **)0x0;
          }
          else {
            (*(code *)*ppuStack_638)(&uStack_350,&uStack_438,pvStack_630,puStack_628);
            uStack_540 = SUB82(ppuStack_338,0);
            uStack_53e = (undefined6)((ulong)ppuStack_338 >> 0x10);
            uStack_548 = SUB81(ppuStack_340,0);
            uStack_547 = (undefined1)((ulong)ppuStack_340 >> 8);
            uStack_546 = (undefined6)((ulong)ppuStack_340 >> 0x10);
            ppuStack_550 = ppuStack_348;
            ppuStack_5b0 = uStack_350;
          }
          uStack_568 = CONCAT62(uStack_546,CONCAT11(uStack_547,uStack_548));
          uStack_560 = CONCAT62(uStack_53e,uStack_540);
          puStack_588 = (undefined1 *)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
          ppuStack_578 = (undefined **)CONCAT62(uStack_436,uStack_438);
          puStack_580 = (undefined8 *)CONCAT62(uStack_43e,uStack_440);
          ppuStack_570 = ppuStack_550;
          uStack_5b8 = 1;
          ppuStack_590 = ppuStack_450;
        }
        uStack_598 = uStack_560;
        uStack_5a0 = uStack_568;
        ppuStack_5a8 = ppuStack_570;
        if ((*(char *)((long)plVar34 + 0x181) != '\x01') || ((char)ppuStack_610 == '\0'))
        goto LAB_0078185c;
        iVar24 = <http::uri::scheme::Scheme_as_core::cmp::PartialEq>::eq
                           (&ppuStack_610,&DAT_002a02b0);
        ppuVar16 = _UNK_002bfca0;
        uVar25 = _DAT_002bfc98;
        ppuVar4 = _UNK_002bfc90;
        ppuVar15 = _s__002bfc88;
        if (iVar24 == 0) goto LAB_0078185c;
        ppuStack_760 = _s__002bfc88;
        lStack_750 = _DAT_002bfc98;
        ppuStack_348 = _UNK_002bfc90;
        uStack_350 = _s__002bfc88;
        ppuStack_338 = _UNK_002bfca0;
        ppuStack_340 = (undefined **)_DAT_002bfc98;
        uVar29 = FUN_007c2d94(&ppuStack_6a0,&uStack_350);
        if ((uVar29 & 1) != 0) goto LAB_0078185c;
        lVar35 = *(long *)(plVar34[0x2f] + 0x20);
        if (lVar35 == 0) goto LAB_0078185c;
        lVar32 = *(long *)(plVar34[0x2f] + 0x18);
        lVar35 = lVar35 * 0x88;
        break;
      }
      plVar30 = (long *)(plVar34[0x20] + uVar29 * 0x68);
LAB_0078149c:
      if (*plVar30 == 1) {
        unaff_x27 = plVar30[1];
        lVar35 = 1;
        plVar33 = plVar30 + 3;
      }
      else {
        lVar35 = 2;
        plVar33 = plVar30 + 3;
      }
    }
    else {
      uVar28 = plVar34[0x21];
      if (uVar28 <= uVar29) {
LAB_00782238:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar29,uVar28,ppuStack_738);
      }
      plVar30 = (long *)(plVar34[0x20] + uVar29 * 0x68);
      if (lVar35 == 0) goto LAB_0078149c;
      uVar28 = plVar34[0x24];
      if (uVar28 <= unaff_x27) {
        ppuStack_738 = &PTR_s__root__cargo_registry_src_index__00ade898;
        uVar29 = unaff_x27;
        goto LAB_00782238;
      }
      lVar32 = plVar34[0x23] + unaff_x27 * 0x48;
      if (*(long *)(lVar32 + 0x10) == 1) {
        unaff_x27 = *(ulong *)(lVar32 + 0x18);
        lVar35 = 1;
      }
      else {
        lVar35 = 2;
      }
      plVar33 = (long *)(lVar32 + 0x20);
    }
    FUN_007c2bdc(&uStack_350,&ppuStack_6a0,plVar30 + 8);
    if (uStack_320._2_1_ == -1) {
                    /* WARNING: Subroutine does not return */
      core::result::unwrap_failed
                (&DAT_002d21e9,0x17,auStack_71,&DAT_00ad8c98,
                 &PTR_s__root__cargo_registry_src_index__00adb898);
    }
    uStack_420 = (undefined2)uStack_320;
    ppuStack_450 = uStack_350;
    uStack_618 = uStack_320._3_4_;
    uStack_614 = uStack_320._7_1_;
    uStack_448 = SUB81(ppuStack_348,0);
    uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
    uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
    uStack_438 = SUB82(ppuStack_338,0);
    uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
    uStack_440 = SUB82(ppuStack_340,0);
    uStack_43e = (undefined6)((ulong)ppuStack_340 >> 0x10);
    uStack_428 = (undefined2)uStack_328;
    uStack_426 = (undefined6)(uStack_328 >> 0x10);
    uStack_430 = SUB82(ppuStack_330,0);
    uStack_42e = (undefined6)((ulong)ppuStack_330 >> 0x10);
    if (uStack_320._2_1_ != '\x02') {
      (**(code **)*plVar33)(&ppuStack_d0,plVar33 + 3,plVar33[1],plVar33[2]);
      ppuVar15 = uStack_350;
      cStack_530 = (char)plVar33[4];
      uStack_548 = (undefined1)uStack_c8;
      uStack_547 = (undefined1)(uStack_c8 >> 8);
      uStack_546 = (undefined6)(uStack_c8 >> 0x10);
      ppuStack_550 = ppuStack_d0;
      uStack_538 = (undefined2)uStack_b8;
      uStack_536 = (undefined6)((ulong)uStack_b8 >> 0x10);
      uStack_540 = SUB82(ppuStack_c0,0);
      uStack_53e = (undefined6)((ulong)ppuStack_c0 >> 0x10);
      uStack_c8 = (ulong)ppuStack_340;
      ppuStack_d0 = ppuStack_348;
      uStack_b8 = ppuStack_330;
      ppuStack_c0 = ppuStack_338;
      auVar36 = FUN_007c59ac(uStack_350,&ppuStack_d0,&ppuStack_550,(ulong)uStack_320 & 0xffff,
                             uStack_328,uStack_320._2_1_);
      if ((auVar36 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
                    /* WARNING: Subroutine does not return */
        core::result::unwrap_failed
                  (&DAT_002d21e9,0x17,auStack_71,&DAT_00ad8c98,
                   &PTR_s__root__cargo_registry_src_index__00adb8b0);
      }
      if (ppuVar15[5] <= auVar36._8_8_) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check
                  (auVar36._8_8_,ppuVar15[5],&PTR_s__root__cargo_registry_src_index__00ade720);
      }
    }
  } while( true );
  while( true ) {
    lVar35 = lVar35 + -0x88;
    lVar32 = lVar32 + 0x88;
    if (lVar35 == 0) break;
    uVar29 = FUN_00794ddc(lVar32,&ppuStack_610);
    if ((uVar29 & 1) != 0) {
      FUN_00794bb0(&ppuStack_d0,lVar32,&ppuStack_610);
      if ((char)uStack_b0 != '\x02') {
        uStack_52f = (undefined1)((ulong)uStack_b0 >> 8);
        uStack_52e = (undefined6)((ulong)uStack_b0 >> 0x10);
        uStack_548 = (undefined1)uStack_c8;
        uStack_547 = (undefined1)(uStack_c8 >> 8);
        uStack_546 = (undefined6)(uStack_c8 >> 0x10);
        ppuStack_550 = ppuStack_d0;
        uStack_538 = (undefined2)uStack_b8;
        uStack_536 = (undefined6)((ulong)uStack_b8 >> 0x10);
        uStack_540 = SUB82(ppuStack_c0,0);
        uStack_53e = (undefined6)((ulong)ppuStack_c0 >> 0x10);
        uStack_448 = SUB81(ppuVar4,0);
        uStack_447 = (undefined1)((ulong)ppuVar4 >> 8);
        uStack_446 = (undefined6)((ulong)ppuVar4 >> 0x10);
        ppuStack_450 = ppuVar15;
        uStack_438 = SUB82(ppuVar16,0);
        uStack_436 = (undefined6)((ulong)ppuVar16 >> 0x10);
        uStack_440 = (undefined2)uVar25;
        uStack_43e = (undefined6)((ulong)uVar25 >> 0x10);
        cStack_530 = (char)uStack_b0;
        FUN_0077acbc(&uStack_350,&ppuStack_6a0,&ppuStack_450,&ppuStack_550);
        if ((char)ppuStack_330 == -1) {
                    /* WARNING: Subroutine does not return */
          core::result::unwrap_failed
                    (&DAT_002d21e9,0x17,auStack_71,&DAT_00ad8c98,
                     &PTR_s__root__cargo_registry_src_index__00ad8d20);
        }
        uStack_448 = SUB81(ppuStack_348,0);
        uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
        uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
        ppuStack_450 = uStack_350;
        uStack_438 = SUB82(ppuStack_338,0);
        uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
        uStack_440 = SUB82(ppuStack_340,0);
        uStack_43e = (undefined6)((ulong)ppuStack_340 >> 0x10);
        uStack_430 = SUB82(ppuStack_330,0);
        uStack_42e = (undefined6)((ulong)ppuStack_330 >> 0x10);
        if (((uint)ppuStack_330 & 0xff) != 2) {
          (*(code *)uStack_350[4])(&uStack_438,ppuStack_348,ppuStack_340);
        }
      }
      break;
    }
  }
LAB_0078185c:
  auVar36._8_8_ = lStack_750;
  auVar36._0_8_ = ppuStack_760;
  <http::request::[2]::http::request::Parts>::new(&uStack_350);
  bVar17 = (byte)uStack_720;
  uStack_3a8 = (undefined2)lStack_2a8;
  uStack_3a6 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_3b0 = (undefined2)lStack_2b0;
  uStack_3ae = (undefined6)((ulong)lStack_2b0 >> 0x10);
  bStack_398 = (byte)uStack_298;
  uStack_397 = (undefined1)((ulong)uStack_298 >> 8);
  uStack_396 = (undefined2)((ulong)uStack_298 >> 0x10);
  uStack_394 = (undefined4)((ulong)uStack_298 >> 0x20);
  uStack_3a0 = (undefined2)lStack_2a0;
  uStack_39e = (undefined6)((ulong)lStack_2a0 >> 0x10);
  uStack_388 = (undefined2)auStack_290._8_8_;
  uStack_386 = SUB86(auStack_290._8_8_,2);
  uStack_390 = (undefined2)auStack_290._0_8_;
  uStack_38e = SUB86(auStack_290._0_8_,2);
  uStack_378 = (undefined2)uStack_278;
  uStack_376 = (undefined6)((ulong)uStack_278 >> 0x10);
  uStack_380 = SUB82(ppuStack_280,0);
  uStack_37e = (undefined6)((ulong)ppuStack_280 >> 0x10);
  uStack_3e8 = (undefined2)uStack_2e8;
  uStack_3e6 = (undefined6)(uStack_2e8 >> 0x10);
  uStack_3f0 = (undefined2)uStack_2f0;
  uStack_3ee = (undefined6)(uStack_2f0 >> 0x10);
  uStack_3d8 = (undefined2)lStack_2d8;
  uStack_3d6 = (undefined6)((ulong)lStack_2d8 >> 0x10);
  uStack_3e0 = (undefined2)uStack_2e0;
  uStack_3de = (undefined6)(uStack_2e0 >> 0x10);
  uStack_3c8 = (undefined2)lStack_2c8;
  uStack_3c6 = (undefined6)((ulong)lStack_2c8 >> 0x10);
  uStack_3d0 = (undefined2)lStack_2d0;
  uStack_3ce = (undefined6)((ulong)lStack_2d0 >> 0x10);
  uStack_3b8 = (undefined2)lStack_2b8;
  uStack_3b6 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_3c0 = (undefined2)lStack_2c0;
  uStack_3be = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_428 = (undefined2)uStack_328;
  uStack_426 = (undefined6)(uStack_328 >> 0x10);
  uStack_430 = SUB82(ppuStack_330,0);
  uStack_42e = (undefined6)((ulong)ppuStack_330 >> 0x10);
  uStack_418 = (undefined2)uStack_318;
  uStack_416 = (undefined6)(uStack_318 >> 0x10);
  uStack_420 = SUB82(uStack_320,0);
  uStack_41e = (undefined6)((ulong)uStack_320 >> 0x10);
  uStack_408 = SUB82(pvStack_308,0);
  uStack_406 = (undefined6)((ulong)pvStack_308 >> 0x10);
  uStack_410 = (undefined2)uStack_310;
  uStack_40e = (undefined6)(uStack_310 >> 0x10);
  uStack_3f8 = (undefined2)uStack_2f8;
  uStack_3f6 = (undefined6)(uStack_2f8 >> 0x10);
  uStack_400 = (undefined2)uStack_300;
  uStack_3fe = (undefined6)(uStack_300 >> 0x10);
  uStack_448 = SUB81(ppuStack_348,0);
  uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
  uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
  ppuStack_450 = uStack_350;
  uStack_438 = SUB82(ppuStack_338,0);
  uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
  uStack_440 = SUB82(ppuStack_340,0);
  uStack_43e = (undefined6)((ulong)ppuStack_340 >> 0x10);
  if (8 < (byte)uStack_720) {
    if ((byte)uStack_720 == 9) {
      auVar36._8_8_ = uStack_710 & 0xff;
      auVar36._0_8_ = pvStack_718;
      uStack_350 = (undefined **)(uStack_720 >> 8);
    }
    else {
      auVar36 = FUN_007c7e1c((ulong)&uStack_720 | 8);
    }
  }
  bVar31 = bStack_398;
  ppuVar15 = ppuStack_450;
  lStack_750 = auVar36._8_8_;
  ppuStack_760 = auVar36._0_8_;
  lStack_2c8 = CONCAT62(uStack_3be,uStack_3c0);
  lStack_2d0 = CONCAT62(uStack_3c6,uStack_3c8);
  lStack_2b8 = CONCAT62(uStack_3ae,uStack_3b0);
  lStack_2c0 = CONCAT62(uStack_3b6,uStack_3b8);
  lStack_2a8 = CONCAT62(uStack_39e,uStack_3a0);
  lStack_2b0 = CONCAT62(uStack_3a6,uStack_3a8);
  pvStack_308 = (void *)CONCAT62(uStack_3fe,uStack_400);
  uStack_310 = CONCAT62(uStack_406,uStack_408);
  uStack_2f8 = CONCAT62(uStack_3ee,uStack_3f0);
  uStack_300 = CONCAT62(uStack_3f6,uStack_3f8);
  uStack_2e8 = CONCAT62(uStack_3de,uStack_3e0);
  uStack_2f0 = CONCAT62(uStack_3e6,uStack_3e8);
  pvVar9 = (void *)CONCAT62(uStack_38e,uStack_390);
  lStack_2d8 = CONCAT62(uStack_3ce,uStack_3d0);
  uStack_2e0 = CONCAT62(uStack_3d6,uStack_3d8);
  ppuStack_338 = (undefined **)CONCAT62(uStack_42e,uStack_430);
  ppuStack_340 = (undefined **)CONCAT62(uStack_436,uStack_438);
  uStack_328 = CONCAT62(uStack_41e,uStack_420);
  ppuStack_330 = (undefined **)CONCAT62(uStack_426,uStack_428);
  ppuStack_f0._0_7_ = SUB87(uStack_350,0);
  lVar35 = CONCAT62(uStack_386,uStack_388);
  auVar12._8_8_ = lVar35;
  auVar12._0_8_ = pvVar9;
  auVar11._8_8_ = lVar35;
  auVar11._0_8_ = pvVar9;
  auVar10._8_8_ = lVar35;
  auVar10._0_8_ = pvVar9;
  ppuStack_348 = (undefined **)CONCAT62(uStack_43e,uStack_440);
  uStack_350 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
  uStack_318 = CONCAT62(uStack_40e,uStack_410);
  uStack_320 = (undefined **)CONCAT62(uStack_416,uStack_418);
  uStack_c8 = CONCAT62(uStack_376,uStack_378);
  ppuStack_d0 = (undefined **)CONCAT62(uStack_37e,uStack_380);
  uStack_150._0_7_ = CONCAT43(uStack_394,CONCAT21(uStack_396,uStack_397));
  if (ppuStack_450 == (undefined **)0xffffffffffffffff) {
    if ((9 < bVar17) && (auVar10 = auVar11, lStack_750 != 0)) {
      free(ppuStack_760);
      auVar10 = auVar12;
    }
  }
  else {
    plVar30 = (long *)((ulong)&ppuStack_450 | 8);
    if ((9 < bStack_398) && (lVar35 != 0)) {
      free(pvVar9);
    }
    lStack_2c8 = plVar30[0x11];
    lStack_2d0 = plVar30[0x10];
    lStack_2b8 = plVar30[0x13];
    lStack_2c0 = plVar30[0x12];
    lStack_2a8 = plVar30[0x15];
    lStack_2b0 = plVar30[0x14];
    pvStack_308 = (void *)plVar30[9];
    uStack_310 = plVar30[8];
    uStack_2f8 = plVar30[0xb];
    uStack_300 = plVar30[10];
    uStack_2e8 = plVar30[0xd];
    uStack_2f0 = plVar30[0xc];
    lStack_2d8 = plVar30[0xf];
    uStack_2e0 = plVar30[0xe];
    ppuStack_348 = (undefined **)plVar30[1];
    uStack_350 = (undefined **)*plVar30;
    ppuStack_338 = (undefined **)plVar30[3];
    ppuStack_340 = (undefined **)plVar30[2];
    uStack_328 = plVar30[5];
    ppuStack_330 = (undefined **)plVar30[4];
    uStack_318 = plVar30[7];
    uStack_320 = (undefined **)plVar30[6];
    uStack_c8 = CONCAT62(uStack_376,uStack_378);
    ppuStack_d0 = (undefined **)CONCAT62(uStack_37e,uStack_380);
    uStack_150 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff);
    bVar31 = bVar17;
    auVar10 = auVar36;
  }
  uStack_e8 = uStack_c8;
  ppuStack_f0 = ppuStack_d0;
  uStack_458 = (undefined4)uStack_150;
  uVar22 = uStack_150._3_4_;
  uStack_4c8 = (undefined2)lStack_2c8;
  uStack_4c6 = (undefined6)((ulong)lStack_2c8 >> 0x10);
  uStack_4d0 = (undefined2)lStack_2d0;
  uStack_4ce = (undefined6)((ulong)lStack_2d0 >> 0x10);
  uStack_4b8 = (undefined2)lStack_2b8;
  uStack_4b6 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_4c0 = (undefined2)lStack_2c0;
  uStack_4be = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_4a8 = (undefined2)lStack_2a8;
  uStack_4a6 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_4b0 = (undefined2)lStack_2b0;
  uStack_4ae = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_508 = SUB82(pvStack_308,0);
  uStack_506 = (undefined6)((ulong)pvStack_308 >> 0x10);
  uStack_510 = (undefined2)uStack_310;
  uStack_50e = (undefined6)(uStack_310 >> 0x10);
  uStack_4f8 = (undefined2)uStack_2f8;
  uStack_4f6 = (undefined6)(uStack_2f8 >> 0x10);
  uStack_500 = (undefined2)uStack_300;
  uStack_4fe = (undefined6)(uStack_300 >> 0x10);
  uStack_4e8 = (undefined2)uStack_2e8;
  uStack_4e6 = (undefined6)(uStack_2e8 >> 0x10);
  uStack_4f0 = (undefined2)uStack_2f0;
  uStack_4ee = (undefined6)(uStack_2f0 >> 0x10);
  uStack_4d8 = (undefined2)lStack_2d8;
  uStack_4d6 = (undefined6)((ulong)lStack_2d8 >> 0x10);
  uStack_4e0 = (undefined2)uStack_2e0;
  uStack_4de = (undefined6)(uStack_2e0 >> 0x10);
  uStack_454 = (undefined3)((ulong)uStack_150 >> 0x20);
  uStack_548 = SUB81(ppuStack_348,0);
  uStack_547 = (undefined1)((ulong)ppuStack_348 >> 8);
  uStack_546 = (undefined6)((ulong)ppuStack_348 >> 0x10);
  ppuStack_550 = uStack_350;
  uStack_538 = SUB82(ppuStack_338,0);
  uStack_536 = (undefined6)((ulong)ppuStack_338 >> 0x10);
  uStack_540 = SUB82(ppuStack_340,0);
  uStack_53e = (undefined6)((ulong)ppuStack_340 >> 0x10);
  uStack_100 = uStack_5c0;
  uStack_528 = (undefined2)uStack_328;
  uStack_526 = (undefined6)(uStack_328 >> 0x10);
  cStack_530 = (char)ppuStack_330;
  uStack_52f = (undefined1)((ulong)ppuStack_330 >> 8);
  uStack_52e = (undefined6)((ulong)ppuStack_330 >> 0x10);
  uStack_518 = (undefined2)uStack_318;
  uStack_516 = (undefined6)(uStack_318 >> 0x10);
  uStack_520 = SUB82(uStack_320,0);
  uStack_51e = (undefined6)((ulong)uStack_320 >> 0x10);
  uStack_468 = uStack_c8;
  ppuStack_470 = ppuStack_d0;
  uStack_d4 = uStack_454;
  uStack_108 = uStack_5c8;
  uStack_110 = uStack_5d0;
  uStack_128 = uStack_5e8;
  uStack_130 = uStack_5f0;
  uStack_118 = uStack_5d8;
  uStack_120 = uStack_5e0;
  uStack_80 = uStack_5c0;
  uStack_a8 = uStack_5e8;
  uStack_b0 = uStack_5f0;
  uStack_98 = uStack_5d8;
  uStack_a0 = uStack_5e0;
  uStack_88 = uStack_5c8;
  uStack_90 = uStack_5d0;
  uStack_148 = uStack_608;
  uStack_150 = ppuStack_610;
  uStack_138 = uStack_5f8;
  uStack_140 = uStack_600;
  uStack_c8 = uStack_608;
  ppuStack_d0 = ppuStack_610;
  uStack_b8 = uStack_5f8;
  ppuStack_c0 = (undefined **)uStack_600;
  ppuStack_450 = uStack_350;
  uStack_430 = SUB82(ppuStack_330,0);
  uStack_448 = uStack_548;
  uStack_447 = uStack_547;
  uStack_446 = uStack_546;
  uStack_440 = uStack_540;
  uStack_43e = uStack_53e;
  uStack_438 = uStack_538;
  uStack_436 = uStack_536;
  uStack_42e = uStack_52e;
  uStack_428 = uStack_528;
  uStack_426 = uStack_526;
  uStack_420 = uStack_520;
  uStack_41e = uStack_51e;
  uStack_418 = uStack_518;
  uStack_416 = uStack_516;
  uStack_410 = uStack_510;
  uStack_40e = uStack_50e;
  uStack_408 = uStack_508;
  uStack_406 = uStack_506;
  uStack_400 = uStack_500;
  uStack_3fe = uStack_4fe;
  uStack_3f8 = uStack_4f8;
  uStack_3f6 = uStack_4f6;
  uStack_3f0 = uStack_4f0;
  uStack_3ee = uStack_4ee;
  uStack_3e8 = uStack_4e8;
  uStack_3e6 = uStack_4e6;
  uStack_3e0 = uStack_4e0;
  uStack_3de = uStack_4de;
  uStack_3d8 = uStack_4d8;
  uStack_3d6 = uStack_4d6;
  uStack_3d0 = uStack_4d0;
  uStack_3ce = uStack_4ce;
  uStack_3c8 = uStack_4c8;
  uStack_3c6 = uStack_4c6;
  uStack_3c0 = uStack_4c0;
  uStack_3be = uStack_4be;
  uStack_3b8 = uStack_4b8;
  uStack_3b6 = uStack_4b6;
  uStack_3b0 = uStack_4b0;
  uStack_3ae = uStack_4ae;
  uStack_3a8 = uStack_4a8;
  uStack_3a6 = uStack_4a6;
  uStack_d8 = uStack_458;
  if (ppuVar15 == (undefined **)0xffffffffffffffff) {
    FUN_0079b764(&ppuStack_d0);
    uStack_350 = (undefined **)0xffffffffffffffff;
  }
  else {
    lVar6 = lStack_2d8;
    lStack_2d8 = uStack_2e0;
    lVar7 = lStack_2c8;
    lStack_2c8 = lStack_2d0;
    lVar8 = lStack_2b8;
    lStack_2b8 = lStack_2c0;
    lStack_2a0 = lStack_2a8;
    lStack_2a8 = lStack_2b0;
    uStack_298._0_5_ = CONCAT41(uStack_458,bVar31);
    lVar32 = uStack_318;
    uStack_318 = (ulong)uStack_320;
    lVar5 = (long)pvStack_308;
    pvStack_308 = (void *)uStack_310;
    uStack_298 = CONCAT44(uVar22,(undefined4)uStack_298);
    uVar29 = uStack_2f8;
    uStack_2f8 = uStack_300;
    uStack_2e0 = uStack_2e8;
    uStack_2e8 = uStack_2f0;
    lVar35 = (long)ppuStack_348;
    ppuVar4 = ppuStack_338;
    ppuStack_338 = ppuStack_340;
    uStack_320 = (undefined **)uStack_328;
    uStack_328 = (ulong)ppuStack_330;
    ppuStack_348 = uStack_350;
    uStack_278 = uStack_e8;
    ppuStack_280 = ppuStack_f0;
    uStack_350 = ppuVar15;
    ppuStack_340 = (undefined **)lVar35;
    ppuStack_330 = ppuVar4;
    uStack_310 = lVar32;
    uStack_300 = lVar5;
    uStack_2f0 = uVar29;
    lStack_2d0 = lVar6;
    lStack_2c0 = lVar7;
    lStack_2b0 = lVar8;
    auStack_290 = auVar10;
    FUN_0079b764(&uStack_2f0);
    uStack_d4 = (undefined3)((ulong)uStack_298 >> 0x28);
    uStack_448 = SUB81(ppuStack_340,0);
    uStack_447 = (undefined1)((ulong)ppuStack_340 >> 8);
    uStack_446 = (undefined6)((ulong)ppuStack_340 >> 0x10);
    ppuStack_450 = ppuStack_348;
    uStack_438 = SUB82(ppuStack_330,0);
    uStack_436 = (undefined6)((ulong)ppuStack_330 >> 0x10);
    uStack_440 = SUB82(ppuStack_338,0);
    uStack_43e = (undefined6)((ulong)ppuStack_338 >> 0x10);
    uStack_3f8 = SUB82(uStack_150,0);
    uStack_3f6 = (undefined6)((ulong)uStack_150 >> 0x10);
    uStack_400 = (undefined2)uStack_2f8;
    uStack_3fe = (undefined6)(uStack_2f8 >> 0x10);
    uStack_3e8 = (undefined2)uStack_140;
    uStack_3e6 = (undefined6)(uStack_140 >> 0x10);
    uStack_3f0 = (undefined2)uStack_148;
    uStack_3ee = (undefined6)(uStack_148 >> 0x10);
    uStack_418 = (undefined2)uStack_310;
    uStack_416 = (undefined6)(uStack_310 >> 0x10);
    uStack_420 = (undefined2)uStack_318;
    uStack_41e = (undefined6)(uStack_318 >> 0x10);
    uStack_408 = (undefined2)uStack_300;
    uStack_406 = (undefined6)(uStack_300 >> 0x10);
    uStack_410 = SUB82(pvStack_308,0);
    uStack_40e = (undefined6)((ulong)pvStack_308 >> 0x10);
    uStack_428 = SUB82(uStack_320,0);
    uStack_426 = (undefined6)((ulong)uStack_320 >> 0x10);
    uStack_430 = (undefined2)uStack_328;
    uStack_42e = (undefined6)(uStack_328 >> 0x10);
    uStack_3b8 = (undefined2)uStack_110;
    uStack_3b6 = (undefined6)((ulong)uStack_110 >> 0x10);
    uStack_3c0 = (undefined2)uStack_118;
    uStack_3be = (undefined6)((ulong)uStack_118 >> 0x10);
    uStack_3a8 = (undefined2)uStack_100;
    uStack_3a6 = (undefined6)((ulong)uStack_100 >> 0x10);
    uStack_3b0 = (undefined2)uStack_108;
    uStack_3ae = (undefined6)((ulong)uStack_108 >> 0x10);
    uStack_3d8 = (undefined2)uStack_130;
    uStack_3d6 = (undefined6)((ulong)uStack_130 >> 0x10);
    uStack_3e0 = (undefined2)uStack_138;
    uStack_3de = (undefined6)((ulong)uStack_138 >> 0x10);
    uStack_3c8 = (undefined2)uStack_120;
    uStack_3c6 = (undefined6)((ulong)uStack_120 >> 0x10);
    uStack_3d0 = (undefined2)uStack_128;
    uStack_3ce = (undefined6)((ulong)uStack_128 >> 0x10);
    uStack_e8 = uStack_278;
    ppuStack_f0 = ppuStack_280;
    uStack_d8 = uStack_298._1_4_;
    bVar31 = (byte)uStack_298;
    auVar10 = auStack_290;
  }
  lStack_2d0 = CONCAT62(uStack_3d6,uStack_3d8);
  lStack_2d8 = CONCAT62(uStack_3de,uStack_3e0);
  lStack_2c0 = CONCAT62(uStack_3c6,uStack_3c8);
  lStack_2c8 = CONCAT62(uStack_3ce,uStack_3d0);
  lStack_2b0 = CONCAT62(uStack_3b6,uStack_3b8);
  lStack_2b8 = CONCAT62(uStack_3be,uStack_3c0);
  lStack_2a0 = CONCAT62(uStack_3a6,uStack_3a8);
  lStack_2a8 = CONCAT62(uStack_3ae,uStack_3b0);
  uStack_298._0_5_ = CONCAT41(uStack_d8,bVar31);
  uStack_310 = CONCAT62(uStack_416,uStack_418);
  uStack_318 = CONCAT62(uStack_41e,uStack_420);
  uStack_300 = CONCAT62(uStack_406,uStack_408);
  pvStack_308 = (void *)CONCAT62(uStack_40e,uStack_410);
  uStack_298 = CONCAT44(CONCAT31(uStack_d4,uStack_d8._3_1_),(undefined4)uStack_298);
  uStack_2f0 = CONCAT62(uStack_3f6,uStack_3f8);
  uStack_2f8 = CONCAT62(uStack_3fe,uStack_400);
  uStack_2e0 = CONCAT62(uStack_3e6,uStack_3e8);
  uStack_2e8 = CONCAT62(uStack_3ee,uStack_3f0);
  ppuStack_340 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
  ppuStack_330 = (undefined **)CONCAT62(uStack_436,uStack_438);
  ppuStack_338 = (undefined **)CONCAT62(uStack_43e,uStack_440);
  uStack_320 = (undefined **)CONCAT62(uStack_426,uStack_428);
  uStack_328 = CONCAT62(uStack_42e,uStack_430);
  ppuStack_348 = ppuStack_450;
  uStack_278 = uStack_e8;
  ppuStack_280 = ppuStack_f0;
  auStack_290 = auVar10;
  <http::request::[4]::http::request::Builder>::version(&ppuStack_550,&uStack_350,(char)uVar14);
  uVar21 = uStack_547;
  uVar20 = uStack_548;
  puVar19 = puStack_580;
  __ptr = puStack_588;
  uVar14 = uStack_650;
  pvVar9 = pvStack_658;
  ppuStack_348 = (undefined **)puStack_588;
  uStack_350 = ppuStack_590;
  ppuStack_338 = ppuStack_578;
  ppuStack_340 = (undefined **)puStack_580;
  if (ppuStack_550 == (undefined **)0xffffffffffffffff) {
    if (ppuStack_590 == (undefined **)0x0) {
      if ((code *)*puStack_580 != (code *)0x0) {
        (*(code *)*puStack_580)(puStack_588);
      }
      if (puVar19[1] != 0) {
        free(__ptr);
      }
    }
    else {
      (*(code *)ppuStack_590[4])(&ppuStack_338,puStack_588,puStack_580);
    }
    uStack_350._0_2_ = CONCAT11(uVar21,uVar20);
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002e25ca,0x13,&uStack_350,&DAT_00ad8cb8,
               &PTR_s__root__cargo_registry_src_index__00adb868);
  }
  uStack_448 = uStack_548;
  uVar25 = 0;
  uStack_37e = uStack_47e;
  uStack_386 = (undefined6)uStack_486;
  uStack_380 = (undefined2)((ulong)uStack_486 >> 0x30);
  uVar29 = uStack_650 * 4;
  uStack_39e = (undefined6)uStack_49e;
  bStack_398 = (byte)((ulong)uStack_49e >> 0x30);
  uStack_397 = (undefined1)((ulong)uStack_49e >> 0x38);
  uStack_3a6 = uStack_4a6;
  uStack_3a0 = uStack_4a0;
  uStack_38e = (undefined6)uStack_48e;
  uStack_388 = (undefined2)((ulong)uStack_48e >> 0x30);
  uStack_396 = (undefined2)uStack_496;
  uStack_394 = (undefined4)((ulong)uStack_496 >> 0x10);
  uStack_390 = (undefined2)((ulong)uStack_496 >> 0x30);
  uStack_3de = uStack_4de;
  uStack_3d8 = uStack_4d8;
  uStack_3e6 = uStack_4e6;
  uStack_3e0 = uStack_4e0;
  uStack_3ce = uStack_4ce;
  uStack_3c8 = uStack_4c8;
  uStack_3d6 = uStack_4d6;
  uStack_3d0 = uStack_4d0;
  uStack_3be = uStack_4be;
  uStack_3b8 = uStack_4b8;
  uStack_3c6 = uStack_4c6;
  uStack_3c0 = uStack_4c0;
  uStack_3ae = uStack_4ae;
  uStack_3a8 = uStack_4a8;
  uStack_3b6 = uStack_4b6;
  uStack_3b0 = uStack_4b0;
  uStack_41e = uStack_51e;
  uStack_418 = uStack_518;
  uStack_426 = uStack_526;
  uStack_420 = uStack_520;
  uStack_40e = uStack_50e;
  uStack_408 = uStack_508;
  uStack_416 = uStack_516;
  uStack_410 = uStack_510;
  uStack_3fe = uStack_4fe;
  uStack_3f8 = uStack_4f8;
  uStack_406 = uStack_506;
  uStack_400 = uStack_500;
  uStack_3ee = uStack_4ee;
  uStack_3e8 = uStack_4e8;
  uStack_3f6 = uStack_4f6;
  uStack_3f0 = uStack_4f0;
  uStack_43e = uStack_53e;
  uStack_438 = uStack_538;
  uStack_446 = uStack_546;
  uStack_440 = uStack_540;
  uStack_42e = uStack_52e;
  uStack_428 = uStack_528;
  uStack_436 = uStack_536;
  uStack_430 = (undefined2)(CONCAT17(uStack_52f,CONCAT16(cStack_530,uStack_536)) >> 0x30);
  ppuStack_450 = ppuStack_550;
  puStack_368 = puStack_588;
  ppuStack_370 = ppuStack_590;
  ppuStack_358 = ppuStack_578;
  puStack_360 = puStack_580;
  uStack_447 = uStack_547;
  if ((uStack_650 >> 0x3e == 0) && (uVar29 < 0x7fffffffffffffff)) {
    uVar18 = (undefined2)uStack_648;
    if (uVar29 == 0) {
      __dest = (void *)0x2;
    }
    else {
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      uVar25 = 2;
      __dest = (void *)FUN_004b25a4(uVar29,2);
      if (__dest == (void *)0x0) goto LAB_00781dc4;
      if (uVar14 != 0) {
        memcpy(__dest,pvVar9,uVar29);
      }
    }
    FUN_00789c40(&uStack_150,&ppuStack_688);
    FUN_00789b14(&ppuStack_d0,&uStack_670);
    ppuStack_330 = (undefined **)uStack_148;
    ppuStack_338 = uStack_150;
    uStack_310 = (ulong)ppuStack_c0;
    uStack_318 = uStack_c8;
    uStack_320 = ppuStack_d0;
    ppuStack_348 = (undefined **)uStack_698;
    uStack_350 = ppuStack_6a0;
    uStack_328 = uStack_140;
    ppuStack_340 = (undefined **)uStack_690;
    FUN_0077df7c(&ppuStack_450);
    auStack_290._8_8_ = CONCAT62(uStack_386,uStack_388);
    auStack_290._0_8_ = CONCAT62(uStack_38e,uStack_390);
    ppuStack_280 = (undefined **)CONCAT62(uStack_37e,uStack_380);
    uStack_408 = SUB82(__dest,0);
    uStack_406 = (undefined6)((ulong)__dest >> 0x10);
    uStack_410 = (undefined2)uStack_310;
    uStack_40e = (undefined6)(uStack_310 >> 0x10);
    uStack_400 = (undefined2)uVar14;
    uStack_3fe = (undefined6)(uVar14 >> 0x10);
    ppuStack_258 = ppuStack_358;
    puStack_260 = puStack_360;
    lStack_2c8 = CONCAT62(uStack_3c6,uStack_3c8);
    lStack_2d0 = CONCAT62(uStack_3ce,uStack_3d0);
    lStack_2b8 = CONCAT62(uStack_3b6,uStack_3b8);
    lStack_2c0 = CONCAT62(uStack_3be,uStack_3c0);
    puStack_268 = puStack_368;
    ppuStack_270 = ppuStack_370;
    uStack_3f8 = uVar18;
    lStack_2a8 = CONCAT62(uStack_3a6,uStack_3a8);
    lStack_2b0 = CONCAT62(uStack_3ae,uStack_3b0);
    uStack_298 = CONCAT44(uStack_394,CONCAT22(uStack_396,CONCAT11(uStack_397,bStack_398)));
    lStack_2a0 = CONCAT62(uStack_39e,uStack_3a0);
    uStack_448 = SUB81(ppuStack_348,0);
    uStack_447 = (undefined1)((ulong)ppuStack_348 >> 8);
    uStack_446 = (undefined6)((ulong)ppuStack_348 >> 0x10);
    ppuStack_450 = uStack_350;
    uStack_438 = SUB82(ppuStack_338,0);
    uStack_436 = (undefined6)((ulong)ppuStack_338 >> 0x10);
    uStack_440 = SUB82(ppuStack_340,0);
    uStack_43e = (undefined6)((ulong)ppuStack_340 >> 0x10);
    uStack_2f8 = CONCAT62(uStack_3f6,uVar18);
    uStack_300 = uVar14;
    uStack_428 = (undefined2)uStack_328;
    uStack_426 = (undefined6)(uStack_328 >> 0x10);
    uStack_430 = SUB82(ppuStack_330,0);
    uStack_42e = (undefined6)((ulong)ppuStack_330 >> 0x10);
    uStack_418 = (undefined2)uStack_318;
    uStack_416 = (undefined6)(uStack_318 >> 0x10);
    uStack_420 = SUB82(uStack_320,0);
    uStack_41e = (undefined6)((ulong)uStack_320 >> 0x10);
    uStack_2e8 = CONCAT62(uStack_3e6,uStack_3e8);
    uStack_2f0 = CONCAT62(uStack_3ee,uStack_3f0);
    lStack_2d8 = CONCAT62(uStack_3d6,uStack_3d8);
    uStack_2e0 = CONCAT62(uStack_3de,uStack_3e0);
    pvStack_308 = __dest;
    auVar36 = FUN_00791a20(plVar34 + 2,&uStack_350);
    iVar24 = (int)plVar34[0x2c];
    if (iVar13 != -1) {
      iVar24 = iVar13;
    }
    if (iVar24 == -1) {
      puVar26 = (ulong *)0x0;
      iVar13 = (int)plVar34[0x2e];
    }
    else {
      uVar14 = plVar34[0x2b];
      if (iVar13 != -1) {
        uVar14 = uVar1;
      }
      tokio::time::sleep::sleep
                (&ppuStack_450,uVar14,iVar24,&PTR_s__nix_store_8006w282fgsx3273c878b_00adb880);
      pvStack_308 = (void *)CONCAT62(uStack_406,uStack_408);
      uStack_310 = CONCAT62(uStack_40e,uStack_410);
      uStack_2f8 = CONCAT62(uStack_3f6,uStack_3f8);
      uStack_300 = CONCAT62(uStack_3fe,uStack_400);
      uStack_2e8 = CONCAT62(uStack_3e6,uStack_3e8);
      uStack_2f0 = CONCAT62(uStack_3ee,uStack_3f0);
      uStack_2e0 = CONCAT62(uStack_3de,uStack_3e0);
      ppuStack_348 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
      ppuStack_338 = (undefined **)CONCAT62(uStack_436,uStack_438);
      ppuStack_340 = (undefined **)CONCAT62(uStack_43e,uStack_440);
      uStack_350 = ppuStack_450;
      uStack_328 = CONCAT62(uStack_426,uStack_428);
      ppuStack_330 = (undefined **)CONCAT62(uStack_42e,uStack_430);
      uStack_318 = CONCAT62(uStack_416,uStack_418);
      uStack_320 = (undefined **)CONCAT62(uStack_41e,uStack_420);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar26 = (ulong *)FUN_004b25a4(0x78,8);
      if (puVar26 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x78);
      }
      puVar26[9] = (ulong)pvStack_308;
      puVar26[8] = uStack_310;
      puVar26[0xb] = uStack_2f8;
      puVar26[10] = uStack_300;
      puVar26[0xd] = uStack_2e8;
      puVar26[0xc] = uStack_2f0;
      puVar26[1] = (ulong)ppuStack_348;
      *puVar26 = (ulong)uStack_350;
      puVar26[3] = (ulong)ppuStack_338;
      puVar26[2] = (ulong)ppuStack_340;
      puVar26[0xe] = uStack_2e0;
      puVar26[5] = uStack_328;
      puVar26[4] = (ulong)ppuStack_330;
      puVar26[7] = uStack_318;
      puVar26[6] = (ulong)uStack_320;
      iVar13 = (int)plVar34[0x2e];
    }
    if (iVar13 == -1) {
      puVar27 = (ulong *)0x0;
    }
    else {
      tokio::time::sleep::sleep
                (&ppuStack_450,plVar34[0x2d],iVar13,&PTR_s__nix_store_8006w282fgsx3273c878b_00adb880
                );
      pvStack_308 = (void *)CONCAT62(uStack_406,uStack_408);
      uStack_310 = CONCAT62(uStack_40e,uStack_410);
      uStack_2f8 = CONCAT62(uStack_3f6,uStack_3f8);
      uStack_300 = CONCAT62(uStack_3fe,uStack_400);
      uStack_2e8 = CONCAT62(uStack_3e6,uStack_3e8);
      uStack_2f0 = CONCAT62(uStack_3ee,uStack_3f0);
      uStack_2e0 = CONCAT62(uStack_3de,uStack_3e0);
      ppuStack_348 = (undefined **)CONCAT62(uStack_446,CONCAT11(uStack_447,uStack_448));
      ppuStack_338 = (undefined **)CONCAT62(uStack_436,uStack_438);
      ppuStack_340 = (undefined **)CONCAT62(uStack_43e,uStack_440);
      uStack_350 = ppuStack_450;
      uStack_328 = CONCAT62(uStack_426,uStack_428);
      ppuStack_330 = (undefined **)CONCAT62(uStack_42e,uStack_430);
      uStack_318 = CONCAT62(uStack_416,uStack_418);
      uStack_320 = (undefined **)CONCAT62(uStack_41e,uStack_420);
      __rustc::__rust_no_alloc_shim_is_unstable_v2();
      puVar27 = (ulong *)FUN_004b25a4(0x78,8);
      if (puVar27 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        alloc::alloc::handle_alloc_error(8,0x78);
      }
      puVar27[9] = (ulong)pvStack_308;
      puVar27[8] = uStack_310;
      puVar27[0xb] = uStack_2f8;
      puVar27[10] = uStack_300;
      puVar27[0xd] = uStack_2e8;
      puVar27[0xc] = uStack_2f0;
      puVar27[1] = (ulong)ppuStack_348;
      *puVar27 = (ulong)uStack_350;
      puVar27[3] = (ulong)ppuStack_338;
      puVar27[2] = (ulong)ppuStack_340;
      puVar27[0xe] = uStack_2e0;
      puVar27[5] = uStack_328;
      puVar27[4] = (ulong)ppuStack_330;
      puVar27[7] = uStack_318;
      puVar27[6] = (ulong)uStack_320;
    }
    uStack_408 = (undefined2)uStack_6b8;
    uStack_406 = (undefined6)(uStack_6b8 >> 0x10);
    uStack_410 = (undefined2)uStack_6c0;
    uStack_40e = (undefined6)(uStack_6c0 >> 0x10);
    uStack_428 = (undefined2)uStack_6d8;
    uStack_426 = (undefined6)(uStack_6d8 >> 0x10);
    uStack_430 = (undefined2)uStack_6e0;
    uStack_42e = (undefined6)(uStack_6e0 >> 0x10);
    uStack_418 = (undefined2)uStack_6c8;
    uStack_416 = (undefined6)(uStack_6c8 >> 0x10);
    uStack_420 = (undefined2)uStack_6d0;
    uStack_41e = (undefined6)(uStack_6d0 >> 0x10);
    uStack_400 = (undefined2)uStack_6b0;
    uStack_3fe = (undefined6)(uStack_6b0 >> 0x10);
    uStack_448 = SUB81(piStack_6f8,0);
    uStack_447 = (undefined1)((ulong)piStack_6f8 >> 8);
    uStack_446 = (undefined6)((ulong)piStack_6f8 >> 0x10);
    ppuStack_450 = ppuStack_700;
    uStack_438 = SUB82(ppuStack_6e8,0);
    uStack_436 = (undefined6)((ulong)ppuStack_6e8 >> 0x10);
    uStack_440 = (undefined2)uStack_6f0;
    uStack_43e = (undefined6)(uStack_6f0 >> 0x10);
    uStack_318 = uStack_668;
    uStack_320 = (undefined **)uStack_670;
    uStack_328 = uStack_678;
    ppuStack_330 = (undefined **)uStack_680;
    uStack_2f8 = uStack_648;
    uStack_300 = uStack_650;
    pvStack_308 = pvStack_658;
    uStack_310 = uStack_660;
    ppuStack_348 = (undefined **)uStack_698;
    uStack_350 = ppuStack_6a0;
    ppuStack_338 = ppuStack_688;
    ppuStack_340 = (undefined **)uStack_690;
    do {
      lVar35 = *plVar34;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar34,0x10);
      if (bVar3) {
        *plVar34 = lVar35 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar35 < 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x7822f0);
      (*pcVar23)();
    }
    param_1[0x24] = plVar34;
    param_1[0x25] = auVar36._0_8_;
    uStack_240 = SUB84(pvStack_718,0);
    uStack_248 = (undefined4)uStack_720;
    uStack_244 = (undefined4)(uStack_720 >> 0x20);
    lVar35 = plVar34[0x2d];
    param_1[0x1e] = 0;
    param_1[0x1f] = lVar35;
    param_1[0x15] = uStack_6e0;
    param_1[0x14] = ppuStack_6e8;
    param_1[0x17] = uStack_6d0;
    param_1[0x16] = uStack_6d8;
    param_1[0x1c] = 0;
    param_1[0x1d] = 8;
    lVar35 = plVar34[0x2e];
    param_1[0x19] = uStack_6c0;
    param_1[0x18] = uStack_6c8;
    param_1[0x1b] = uStack_6b0;
    param_1[0x1a] = uStack_6b8;
    *(int *)(param_1 + 0x20) = (int)lVar35;
    param_1[0xd] = uStack_660;
    param_1[0xc] = uStack_668;
    param_1[0xf] = uStack_650;
    param_1[0xe] = pvStack_658;
    param_1[0x26] = auVar36._8_8_;
    param_1[0x27] = 0;
    param_1[0x11] = ppuStack_700;
    param_1[0x10] = uStack_648;
    param_1[0x13] = uStack_6f0;
    param_1[0x12] = piStack_6f8;
    param_1[0x28] = puVar26;
    param_1[0x29] = puVar27;
    param_1[5] = ppuStack_6a0;
    param_1[4] = uStack_598;
    param_1[7] = uStack_690;
    param_1[6] = uStack_698;
    param_1[9] = uStack_680;
    param_1[8] = ppuStack_688;
    param_1[0xb] = uStack_670;
    param_1[10] = uStack_678;
    param_1[1] = ppuStack_5b0;
    *param_1 = uStack_5b8;
    param_1[3] = uStack_5a0;
    param_1[2] = ppuStack_5a8;
    *(ulong *)((long)param_1 + 0x10c) = CONCAT44(uStack_240,uStack_244);
    *(ulong *)((long)param_1 + 0x104) = CONCAT44(uStack_248,uStack_24c);
    param_1[0x23] = uStack_710;
    param_1[0x22] = pvStack_718;
    return;
  }
LAB_00781dc4:
                    /* WARNING: Subroutine does not return */
  alloc::raw_vec::handle_error(uVar25,uVar29);
}


// ===== 00782624  <reqwest::async_impl::client::reqwest::async_impl::client::ClientBuilder>::new =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::reqwest::async_impl::client::ClientBuilder>::new */

void __rustcall
<reqwest::async_impl::client::reqwest::async_impl::client::ClientBuilder>::new(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined **local_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long local_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  long local_1a0;
  long lStack_198;
  long local_190;
  undefined8 uStack_188;
  undefined **local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined **local_100;
  char *pcStack_f8;
  long local_f0;
  long lStack_e8;
  ulong local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long lStack_48;
  long local_40;
  undefined1 uStack_31;
  
  FUN_007c57ac(&local_180,2);
  if (local_180 == (undefined **)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    core::result::unwrap_failed
              (&DAT_002d21e9,0x17,&uStack_31,&DAT_00ad8c98,
               &PTR_s__root__cargo_registry_src_index__00adba40);
  }
  local_e0 = local_e0 & 0xffffffffffffff00;
  lStack_208 = lStack_158;
  local_210 = local_160;
  lStack_1f8 = lStack_148;
  lStack_200 = lStack_150;
  lStack_1e8 = lStack_138;
  local_1f0 = local_140;
  lStack_1d8 = lStack_128;
  lStack_1e0 = lStack_130;
  lStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  lStack_228 = lStack_178;
  local_230 = local_180;
  lStack_218 = lStack_168;
  lStack_220 = lStack_170;
  local_100 = &PTR_FUN_00ad8cf8;
  pcStack_f8 = "*/*";
  lStack_e8 = _UNK_002a0a98;
  local_f0 = _DAT_002a0a90;
                    /* try { // try from 00782698 to 007826ab has its CatchHandler @ 00782994 */
  FUN_0077acbc(&local_180,&local_230,&local_1a0,&local_100);
  if ((char)local_160 != -1) {
    uStack_1b0 = (uint)local_160;
    uStack_1ac = (undefined4)((ulong)local_160 >> 0x20);
    uStack_1c8 = (undefined4)lStack_178;
    uStack_1c4 = (undefined4)((ulong)lStack_178 >> 0x20);
    local_1d0 = SUB84(local_180,0);
    uStack_1cc = (undefined4)((ulong)local_180 >> 0x20);
    uStack_1b8 = (undefined4)lStack_168;
    uStack_1b4 = (undefined4)((ulong)lStack_168 >> 0x20);
    local_1c0 = (undefined4)lStack_170;
    uStack_1bc = (undefined4)((ulong)lStack_170 >> 0x20);
    if ((uStack_1b0 & 0xff) != 2) {
                    /* try { // try from 007826e4 to 007826eb has its CatchHandler @ 00782958 */
      (*(code *)local_180[4])(&uStack_1b8,lStack_178,lStack_170);
    }
    local_88 = 0;
    local_98 = 0;
    lStack_90 = 8;
    lStack_d8 = lStack_208;
    local_e0 = local_210;
    lStack_c8 = lStack_1f8;
    lStack_d0 = lStack_200;
    local_68 = 0;
    lStack_60 = 8;
    local_58 = 0;
    local_50 = 0;
    lStack_b8 = lStack_1e8;
    local_c0 = local_1f0;
    lStack_a8 = lStack_1d8;
    lStack_b0 = lStack_1e0;
    lStack_48 = 8;
    local_40 = 0;
    local_1a0 = 0;
    pcStack_f8 = (char *)lStack_228;
    local_100 = local_230;
    lStack_e8 = lStack_218;
    local_f0 = lStack_220;
    lStack_78 = _UNK_0029ffb8;
    local_80 = _DAT_0029ffb0;
    lStack_198 = 8;
    local_190 = 0;
    uVar7 = *(ulong *)PTR___RUST_STD_INTERNAL_VAL_00b00bf8;
    if (uVar7 == 0) {
                    /* try { // try from 00782914 to 00782953 has its CatchHandler @ 0078295c */
      uVar7 = <std::sys::thread_local::key::racy::std::sys::thread_local::key::racy::LazyKey>::
              lazy_init(PTR___RUST_STD_INTERNAL_VAL_00b00bf8);
      plVar5 = (long *)pthread_getspecific((pthread_key_t)uVar7);
    }
    else {
      plVar5 = (long *)pthread_getspecific((pthread_key_t)uVar7);
    }
    if (plVar5 < (long *)0x2) {
      plVar5 = (long *)FUN_007bbf8c(uVar7 & 0xffffffff,plVar5,0);
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::thread::local::panic_access_error(&PTR_s__nix_store_8006w282fgsx3273c878b_00adfa00);
    }
    *(undefined4 *)(param_1 + 0x53) = 0;
    param_1[0x43] = local_88;
    *(undefined1 *)((long)param_1 + 0x32e) = 0;
    param_1[0x42] = lStack_90;
    param_1[0x41] = local_98;
    param_1[0x45] = lStack_60;
    param_1[0x44] = local_68;
    param_1[0x48] = lStack_48;
    param_1[0x47] = local_50;
    param_1[0x46] = local_58;
    param_1[0x4b] = lStack_198;
    param_1[0x4a] = local_1a0;
    uVar4 = _UNK_00adba70;
    uVar3 = _DAT_00adba68;
    uVar1 = _UNK_00adba60;
    puVar2 = PTR_DAT_00adba58;
    param_1[0xd] = lStack_78;
    param_1[0xc] = local_80;
    param_1[0x49] = local_40;
    uStack_1b4 = (undefined4)uVar4;
    uStack_1b0 = (uint)((ulong)uVar4 >> 0x20);
    uStack_1bc = (undefined4)uVar3;
    uStack_1b8 = (undefined4)((ulong)uVar3 >> 0x20);
    uStack_1c4 = (undefined4)uVar1;
    local_1c0 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_1cc = SUB84(puVar2,0);
    uStack_1c8 = (undefined4)((ulong)puVar2 >> 0x20);
    param_1[0x4c] = local_190;
    param_1[0x52] = 0x5a;
    param_1[9] = lStack_b8;
    param_1[8] = local_c0;
    param_1[0xb] = lStack_a8;
    param_1[10] = lStack_b0;
    param_1[0xe] = local_70;
    param_1[0xf] = -1;
    param_1[0x16] = 2;
    param_1[1] = (long)pcStack_f8;
    *param_1 = (long)local_100;
    param_1[3] = lStack_e8;
    param_1[2] = local_f0;
    *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
    param_1[5] = lStack_d8;
    param_1[4] = local_e0;
    param_1[7] = lStack_c8;
    param_1[6] = lStack_d0;
    *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
    *(ulong *)((long)param_1 + 0x2d4) = CONCAT44(uStack_1c4,uStack_1c8);
    *(ulong *)((long)param_1 + 0x2cc) = CONCAT44(uStack_1cc,local_1d0);
    *(ulong *)((long)param_1 + 0x2e4) = CONCAT44(uStack_1b4,uStack_1b8);
    *(ulong *)((long)param_1 + 0x2dc) = CONCAT44(uStack_1bc,local_1c0);
    lVar9 = plVar5[1];
    lVar8 = *plVar5;
    lVar6 = *plVar5;
    *(uint *)((long)param_1 + 0x2ec) = uStack_1b0;
    param_1[0x5f] = lVar9;
    param_1[0x5e] = lVar8;
    *plVar5 = lVar6 + 1;
    param_1[0x4d] = -1;
    param_1[0x60] = -1;
    param_1[0x62] = 0;
    param_1[0x61] = 0;
    uVar1 = DAT_002a17b0;
    *(undefined4 *)((long)param_1 + 0x324) = 0x1010101;
    *(int *)(param_1 + 100) = (int)uVar1;
    uVar1 = DAT_002a1250;
    *(undefined2 *)(param_1 + 0x65) = 0x100;
    *(undefined4 *)((long)param_1 + 0x32a) = 0;
    *(int *)((long)param_1 + 0x32f) = (int)uVar1;
    *(undefined2 *)((long)param_1 + 0x343) = 0xffff;
    return;
  }
                    /* try { // try from 007828ec to 0078290f has its CatchHandler @ 00782994 */
                    /* WARNING: Subroutine does not return */
  core::result::unwrap_failed
            (&DAT_002d21e9,0x17,&uStack_31,&DAT_00ad8c98,
             &PTR_s__root__cargo_registry_src_index__00ad8d20);
}


// ===== 007829ac  FUN_007829ac =====

bool FUN_007829ac(long param_1,undefined2 param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined6 uStack_36;
  
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar3 >> 0xf == 0) {
    lVar6 = param_3[1];
    lVar4 = *param_3;
    lVar9 = param_3[3];
    lVar8 = param_3[2];
    lVar1 = param_4[4];
    lVar11 = param_4[1];
    lVar10 = *param_4;
    lVar7 = param_4[3];
    lVar5 = param_4[2];
    if (uVar3 == *(ulong *)(param_1 + 0x18)) {
                    /* try { // try from 00782a34 to 00782a37 has its CatchHandler @ 00782a98 */
      <alloc[c1f8e832b0d782c7]::raw_vec::RawVec<http[b87e90c26fe47eb4]::header::map::Bucket<http[b87e90c26fe47eb4]::header::value::HeaderValue>>>
      ::grow_one();
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + uVar3 * 0x68);
    puVar2[3] = lVar10;
    puVar2[2] = uStack_88;
    puVar2[5] = lVar5;
    puVar2[4] = lVar11;
    puVar2[1] = uStack_90;
    *puVar2 = 0;
    puVar2[0xc] = CONCAT62(uStack_36,param_2);
    puVar2[9] = lVar6;
    puVar2[8] = lVar4;
    puVar2[0xb] = lVar9;
    puVar2[10] = lVar8;
    puVar2[7] = lVar1;
    puVar2[6] = lVar7;
    *(ulong *)(param_1 + 0x28) = uVar3 + 1;
  }
  else {
                    /* try { // try from 007829dc to 007829e3 has its CatchHandler @ 00782aac */
    (**(code **)(*param_4 + 0x20))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x20))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return (uVar3 & 0xffffffffffff8000) != 0;
}


// ===== 00782ad4  FUN_00782ad4 =====

void FUN_00782ad4(undefined8 param_1)

{
  long lVar1;
  
  __rustc::__rust_no_alloc_shim_is_unstable_v2();
  lVar1 = FUN_004b25a4(param_1,8);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc::alloc::handle_alloc_error(8,param_1);
}


// ===== 00782b10  FUN_00782b10 =====

void FUN_00782b10(void)

{
  return;
}


// ===== 00782b14  FUN_00782b14 =====

void FUN_00782b14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  param_1[2] = param_4;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00ad8cf8;
  param_1[1] = param_3;
  return;
}


// ===== 00782b28  FUN_00782b28 =====

undefined8 FUN_00782b28(void)

{
  return 0;
}


// ===== 00782b30  FUN_00782b30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00782b30(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = _UNK_002bfb50;
  local_40 = _s__002bfb48;
  uStack_28 = _UNK_002bfb60;
  uStack_30 = _DAT_002bfb58;
  puVar1 = (undefined8 *)FUN_007c2f68(param_2,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(param_1,puVar1 + 3,puVar1[1],puVar1[2]);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(puVar1 + 4);
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}


// ===== 00782bb4  FUN_00782bb4 =====

void FUN_00782bb4(long *param_1,undefined8 param_2)

{
  long *local_18;
  
  param_1 = (long *)*param_1;
  if (*param_1 != -1) {
    local_18 = param_1;
    <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
              (param_2,"V18",3,&local_18,&DAT_00adbb50);
    return;
  }
  local_18 = param_1 + 1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"Unknown",7,"version",7,param_1 + 4,&DAT_00adbb70,"contentsgot_type",8,
             &local_18,&DAT_00adbb90);
  return;
}


// ===== 00782c5c  FUN_00782c5c =====

void FUN_00782c5c(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,&DAT_0029f500,0x10,"typ",3,local_18 + 0x18,&DAT_00adba90,"payloadDHEECDHE",7,
             &local_18,&DAT_00adbab0);
  return;
}


// ===== 00782ccc  FUN_00782ccc =====

void FUN_00782ccc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *param_1;
  local_18 = lVar1 + 0x38;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
            (param_2,"EchConfigContents",0x11,"key_config",10,lVar1,&PTR_FUN_00adbad0,
             "maximum_name_length",0x13,lVar1 + 0x68,&DAT_00adbaf0,"public_name",0xb,lVar1 + 0x50,
             &PTR_FUN_00adbb10,"extensions",10,&local_18,&DAT_00adbb30);
  return;
}


// ===== 00782d7c  FUN_00782d7c =====

void FUN_00782d7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = *param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_tuple_field1_finish
            (param_2,"Unknown",7,&local_18,&DAT_00adbbb0);
  return;
}


// ===== 00782dc0  FUN_00782dc0 =====

void FUN_00782dc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = 5;
  if (*(char *)*param_1 == '\0') {
    uVar1 = 3;
  }
  pcVar2 = "ECDHE";
  if (*(char *)*param_1 == '\0') {
    pcVar2 = "DHEECDHE";
  }
  <core::fmt::[a]::core::fmt::Formatter>::write_str(param_2,pcVar2,uVar1);
  return;
}


// ===== 00782df8  FUN_00782df8 =====

void FUN_00782df8(long *param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = *param_1 + 4;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field2_finish
            (param_2,"HpkeSymmetricCipherSuite",0x18,"kdf_id",6,*param_1,&DAT_00adbcf0,"aead_id",7,
             &local_18,&DAT_00adbd10);
  return;
}


// ===== 00782e68  FUN_00782e68 =====

void FUN_00782e68(undefined8 *param_1)

{
  <http::header::name::HeaderName_as_core::fmt::Debug>::fmt(*param_1);
  return;
}


// ===== 00782e70  FUN_00782e70 =====

void FUN_00782e70(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],param_2);
  return;
}


// ===== 00782e84  FUN_00782e84 =====

void FUN_00782e84(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [16];
  long local_18;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  <core::fmt::[a]::core::fmt::Formatter>::debug_list(auStack_40,param_2);
  lVar3 = local_18;
  for (; local_18 = lVar1, lVar2 != 0; lVar2 = lVar2 + -1) {
    lVar1 = local_18 + 1;
    <core::fmt::builders::[5]::core::fmt::builders::DebugSet>::entry
              (auStack_40,&local_18,&DAT_00ad8820);
    lVar3 = local_18;
  }
  local_18 = lVar3;
  <core::fmt::builders::[6]::core::fmt::builders::DebugList>::finish(auStack_40);
  return;
}


// ===== 00782ef0  FUN_00782ef0 =====

void FUN_00782ef0(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Debug>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00782f04  FUN_00782f04 =====

void FUN_00782f04(undefined8 *param_1,long param_2)

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


// ===== 00782f20  FUN_00782f20 =====

void FUN_00782f20(undefined8 *param_1,long param_2)

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


// ===== 00782f3c  FUN_00782f3c =====

void FUN_00782f3c(undefined8 param_1,undefined8 param_2)

{
  <core::fmt::[a]::core::fmt::Formatter>::pad(param_2,&DAT_002e29c4,2);
  return;
}


// ===== 00782f50  FUN_00782f50 =====

void FUN_00782f50(undefined8 *param_1,long param_2)

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


// ===== 00782f6c  FUN_00782f6c =====

void FUN_00782f6c(long *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10),param_2);
  return;
}


// ===== 00782f80  FUN_00782f80 =====

void FUN_00782f80(undefined8 *param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt(*param_1,param_1[1],param_2);
  return;
}


// ===== 00782f94  FUN_00782f94 =====

void FUN_00782f94(long param_1,undefined8 param_2)

{
  <str_as_core::fmt::Display>::fmt
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2);
  return;
}


// ===== 00782fa8  <url::Url_as_reqwest::into_url::IntoUrlSealed>::into_url =====

/* WARNING: Unknown calling convention: __rustcall */
/* <url::Url as reqwest::into_url::IntoUrlSealed>::into_url */

void __rustcall
<url::Url_as_reqwest::into_url::IntoUrlSealed>::into_url(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_2 + 8) != '\0') {
    uVar3 = param_2[5];
    uVar2 = param_2[4];
    uVar5 = param_2[7];
    uVar4 = param_2[6];
    uVar6 = param_2[8];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar6;
    param_1[5] = uVar3;
    param_1[4] = uVar2;
    param_1[7] = uVar5;
    param_1[6] = uVar4;
    uVar3 = param_2[1];
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[10] = uVar1;
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
    return;
  }
  uVar1 = FUN_00772be0();
  *param_1 = 0xffffffffffffffff;
  param_1[1] = uVar1;
  return;
}


// ===== 00783004  <reqwest::async_impl::client::Client_as_core::fmt::Debug>::fmt =====

/* WARNING: Unknown calling convention: __rustcall */
/* <reqwest::async_impl::client::Client as core::fmt::Debug>::fmt */

void __rustcall
<reqwest::async_impl::client::Client_as_core::fmt::Debug>::fmt(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_30,param_2,"Client",6);
  lVar1 = *param_1;
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,&DAT_002e25ea,7,lVar1 + 0x183,&DAT_00adb8e0);
  if (*(long *)(*(long *)(lVar1 + 0x178) + 0x20) != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_002e25f1,7,lVar1 + 0x178,&PTR_FUN_00adba20);
  }
  if ((*(long *)(lVar1 + 0x140) != 1) || (*(long *)(lVar1 + 0x148) != 10)) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,&DAT_002e25f8,0xf,lVar1 + 0x140,&PTR_FUN_00adb920);
  }
  if ((*(byte *)(lVar1 + 0x180) & 1) != 0) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"referer",7,&DAT_002e2607,&DAT_00adb940);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (auStack_30,"default_headers",0xf,lVar1 + 0xe0,&PTR_FUN_00adb960);
  if (*(int *)(lVar1 + 0x160) != -1) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"timeout",7,lVar1 + 0x158,&DAT_00adb980);
  }
  if (*(int *)(lVar1 + 0x170) != -1) {
    <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
              (auStack_30,"read_timeout",0xc,lVar1 + 0x168,&DAT_00adb980);
  }
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish(auStack_30);
  return;
}


// ===== 00783178  FUN_00783178 =====

void FUN_00783178(long param_1,undefined8 param_2)

{
  long local_78;
  undefined **ppuStack_70;
  long local_68;
  undefined **ppuStack_60;
  long local_58;
  undefined *puStack_50;
  long local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  long *local_28;
  undefined *puStack_20;
  long local_18;
  
  local_18 = param_1 + 0x20;
  local_78 = param_1 + 0x18;
  ppuStack_70 = &PTR_FUN_00adbbd0;
  ppuStack_60 = &PTR_FUN_00adbbf0;
  local_58 = param_1 + 0x40;
  local_28 = &local_18;
  puStack_50 = &DAT_00adbc10;
  local_48 = param_1 + 0x41;
  puStack_40 = &DAT_00adbc30;
  local_38 = param_1 + 0x42;
  puStack_30 = &DAT_00adbc50;
  puStack_20 = &DAT_00adbc70;
  local_68 = param_1;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_fields_finish
            (param_2,"WebPkiServerVerifier",0x14,&PTR_s_rootsrevocation_check_depthunkno_00adbc90,6,
             &local_78,6);
  return;
}


// ===== 00783220  FUN_00783220 =====

void FUN_00783220(long param_1,undefined8 param_2)

{
  long local_18;
  
  local_18 = param_1 + 0x18;
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct_field4_finish
            (param_2,"HpkeKeyConfig",0xd,"config_id",9,param_1 + 0x34,&DAT_00adbaf0,"kem_id",6,
             param_1 + 0x30,&DAT_00adbd30,"public_key",10,param_1,&PTR_FUN_00adbd50,
             "symmetric_cipher_suites",0x17,&local_18,&DAT_00adbd70);
  return;
}


// ===== 007832cc  FUN_007832cc =====

void FUN_007832cc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_c8 [16];
  long local_b8;
  ulong uStack_b0;
  undefined1 local_a4 [4];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [28];
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  <core::fmt::[a]::core::fmt::Formatter>::debug_struct(auStack_c8,param_2,"Url",3);
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x2c);
  uStack_b0 = (ulong)uVar3;
  if (uVar3 != 0) {
    if (uStack_b0 < uVar2) {
      iVar6 = (int)*(char *)(lVar1 + uStack_b0);
      if (iVar6 == -0x41 || iVar6 + 0x41 < 0 != SCARRY4(iVar6,0x41)) {
LAB_00783320:
                    /* WARNING: Subroutine does not return */
        core::str::slice_error_fail
                  (lVar1,uVar2,0,uStack_b0,&PTR_s__root__cargo_registry_src_index__00adbf10);
      }
    }
    else if (uVar2 != uStack_b0) goto LAB_00783320;
  }
  local_b8 = lVar1;
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (auStack_c8,"scheme",6,&local_b8,&DAT_00adbd90);
  uVar5 = (ulong)(uVar3 + 1);
  if (uVar3 != 0xffffffff) {
    if (uVar5 < uVar2) {
      iVar6 = (int)*(char *)(lVar1 + uVar5);
      if (iVar6 != -0x41 && iVar6 + 0x41 < 0 == SCARRY4(iVar6,0x41)) goto LAB_0078339c;
    }
    else if (uVar2 == uVar5) goto LAB_0078339c;
                    /* WARNING: Subroutine does not return */
    core::str::slice_error_fail
              (lVar1,uVar2,uVar5,uVar2,&PTR_s__root__cargo_registry_src_index__00adbec8);
  }
LAB_0078339c:
  if (uVar2 == uVar5) {
    local_a4[0] = true;
  }
  else {
    local_a4[0] = *(char *)(lVar1 + uVar5) != '/';
  }
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_0029f1c0,0x10,local_a4,&DAT_00adb940);
  local_a0 = <url::url::Url>::username(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002a1858,8,local_a0,&DAT_00adbd90);
  local_90 = <url::url::Url>::password(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002a19f0,8,local_90,&DAT_00adbdb0);
  <url::url::Url>::host(auStack_80,param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002bd1d0,4,auStack_80,&DAT_00adbdd0);
  local_64 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002bd12c,4,&local_64,&DAT_00adbdf0);
  local_60 = <url::url::Url>::path(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,&DAT_002bd17c,4,local_60,&DAT_00adbd90);
  local_50 = <url::url::Url>::query(param_1);
  uVar4 = <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
                    (uVar4,"query",5,local_50,&DAT_00adbdb0);
  local_40 = <url::url::Url>::fragment(param_1);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::field
            (uVar4,&DAT_002a11a0,8,local_40,&DAT_00adbdb0);
  <core::fmt::builders::[2]::core::fmt::builders::DebugStruct>::finish();
  return;
}


