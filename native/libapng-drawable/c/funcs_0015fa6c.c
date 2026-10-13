// ===== 0015fa6c  png_set_compression_buffer_size =====

void png_set_compression_buffer_size(long param_1,ulong param_2)

{
  if (param_1 != 0) {
    if (param_2 - 0x80000000 < 0xffffffff80000001) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"invalid compression buffer size");
    }
    if (*(char *)(param_1 + 0x165) < '\0') {
      *(int *)(param_1 + 0x4d8) = (int)param_2;
    }
    else {
      if (*(int *)(param_1 + 0x170) != 0) {
        png_warning(param_1,"Compression buffer size cannot be changed because it is in use");
        return;
      }
      if (param_2 < 6) {
        png_warning(param_1,"Compression buffer size cannot be reduced below 6");
        return;
      }
      if (*(uint *)(param_1 + 0x1f0) != param_2) {
        png_free_buffer_list(param_1,param_1 + 0x1e8);
        *(int *)(param_1 + 0x1f0) = (int)param_2;
        return;
      }
    }
  }
  return;
}


// ===== 0015fb14  png_set_invalid =====

void png_set_invalid(long param_1,long param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & (param_3 ^ 0xffffffff);
  }
  return;
}


// ===== 0015fb2c  png_set_user_limits =====

void png_set_user_limits(long param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48c) = param_2;
    *(undefined4 *)(param_1 + 0x490) = param_3;
  }
  return;
}


// ===== 0015fb3c  png_set_chunk_cache_max =====

void png_set_chunk_cache_max(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x494) = param_2;
  }
  return;
}


// ===== 0015fb48  png_set_chunk_malloc_max =====

void png_set_chunk_malloc_max(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x498) = param_2;
  }
  return;
}


// ===== 0015fb54  png_set_benign_errors =====

void png_set_benign_errors(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = 0x700000;
  }
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xff8fffff | uVar1;
  return;
}


// ===== 0015fb74  png_set_check_for_invalid_index =====

void png_set_check_for_invalid_index(long param_1,int param_2)

{
  *(uint *)(param_1 + 0x294) = -(uint)(param_2 < 1);
  return;
}


// ===== 0015fb84  png_check_keyword =====

int png_check_keyword(undefined8 param_1,byte *param_2,undefined1 *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2 == (byte *)0x0) {
    iVar13 = 0;
    *param_3 = 0;
  }
  else {
    uVar12 = (uint)*param_2;
    if (*param_2 == 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar11 = 1;
      pbVar10 = param_2;
    }
    else {
      uVar7 = 0;
      uVar8 = 0;
      bVar4 = true;
      pbVar9 = param_2;
      do {
        bVar5 = 0xffffffa1 < uVar12 - 0x7f;
        uVar11 = (uint)(0xa0 >= uVar12 && !bVar5);
        if (0xa0 < uVar12 || bVar5) {
          bVar4 = false;
          *param_3 = (char)uVar12;
          uVar8 = uVar8 + 1;
          bVar2 = pbVar9[1];
          param_3 = param_3 + 1;
        }
        else {
          if (bVar4) {
            uVar1 = uVar12;
            if (uVar7 != 0) {
              uVar1 = uVar7;
            }
          }
          else {
            puVar6 = param_3 + 1;
            *param_3 = 0x20;
            uVar8 = uVar8 + 1;
            param_3 = puVar6;
            uVar1 = uVar7;
            if (uVar12 != 0x20) {
              uVar1 = uVar12;
            }
          }
          bVar4 = true;
          bVar2 = pbVar9[1];
          uVar7 = uVar1;
        }
        uVar12 = (uint)bVar2;
        pbVar10 = pbVar9 + 1;
      } while ((uVar12 != 0) && (pbVar10 = pbVar9 + 1, pbVar9 = pbVar10, uVar8 < 0x4f));
    }
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar12 = uVar11;
    }
    iVar13 = uVar8 - uVar12;
    uVar8 = 0x20;
    if ((uVar12 & uVar7 == 0) == 0) {
      uVar8 = uVar7;
    }
    param_3[-(ulong)uVar12] = 0;
    if (iVar13 != 0) {
      if (*pbVar10 == 0) {
        if (uVar8 != 0) {
          png_warning_parameter(auStack_148,1,param_2);
          png_warning_parameter_signed(auStack_148,2,4,uVar8);
          png_formatted_warning(param_1,auStack_148,"keyword \"@1\": bad character \'0x@2\'");
        }
      }
      else {
        png_warning(param_1,"keyword truncated");
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0015fd00  png_set_bgr =====

void png_set_bgr(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 1;
  }
  return;
}


// ===== 0015fd14  png_set_swap =====

void png_set_swap(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x2a0) == '\x10')) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x10;
  }
  return;
}


// ===== 0015fd34  png_set_packing =====

void png_set_packing(long param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x2a0) < 8)) {
    *(undefined1 *)(param_1 + 0x2a1) = 8;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 4;
  }
  return;
}


// ===== 0015fd5c  png_set_packswap =====

void png_set_packswap(long param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x2a0) < 8)) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x10000;
  }
  return;
}


// ===== 0015fd7c  png_set_shift =====

void png_set_shift(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x315) = *param_2;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 8;
    *(undefined1 *)(param_1 + 0x319) = uVar1;
  }
  return;
}


// ===== 0015fda4  png_set_interlace_handling =====

undefined8 png_set_interlace_handling(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x29c) != '\0')) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 2;
    return 7;
  }
  return 1;
}


// ===== 0015fdcc  png_set_filler =====

void png_set_filler(long param_1,undefined2 param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x165) < '\0') {
    *(undefined2 *)(param_1 + 0x2aa) = param_2;
    uVar2 = *(uint *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
  }
  else {
    if (*(char *)(param_1 + 0x29f) == '\0') {
      if (*(byte *)(param_1 + 0x2a0) < 8) {
        png_app_error(param_1,"png_set_filler is invalid for low bit depth gray output");
        return;
      }
      uVar1 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x29f) != '\x02') {
        png_app_error(param_1,"png_set_filler: inappropriate color type");
        return;
      }
      uVar1 = 4;
    }
    *(undefined1 *)(param_1 + 0x2a4) = uVar1;
    uVar2 = *(uint *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
  }
  if (param_3 == 1) {
    uVar2 = uVar2 | 0x80;
  }
  else {
    uVar2 = uVar2 & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x168) = uVar2;
  return;
}


// ===== 0015fe64  png_set_add_alpha =====

void png_set_add_alpha(long param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined1 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x165) < '\0') {
    *(undefined2 *)(param_1 + 0x2aa) = param_2;
    uVar1 = *(uint *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
joined_r0x0015feac:
    if (param_3 == 1) {
      *(uint *)(param_1 + 0x168) = uVar1 | 0x80;
      uVar1 = *(uint *)(param_1 + 0x16c);
    }
    else {
      *(uint *)(param_1 + 0x168) = uVar1 & 0xffffff7f;
      uVar1 = *(uint *)(param_1 + 0x16c);
    }
  }
  else {
    if (*(char *)(param_1 + 0x29f) == '\0') {
      if (7 < *(byte *)(param_1 + 0x2a0)) {
        uVar3 = 2;
        goto LAB_0015fee4;
      }
      pcVar2 = "png_set_filler is invalid for low bit depth gray output";
    }
    else {
      if (*(char *)(param_1 + 0x29f) == '\x02') {
        uVar3 = 4;
LAB_0015fee4:
        *(undefined1 *)(param_1 + 0x2a4) = uVar3;
        uVar1 = *(uint *)(param_1 + 0x168);
        *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x8000;
        goto joined_r0x0015feac;
      }
      pcVar2 = "png_set_filler: inappropriate color type";
    }
    png_app_error(param_1,pcVar2);
    uVar1 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    *(uint *)(param_1 + 0x16c) = uVar1 | 0x1000000;
  }
  return;
}


// ===== 0015ff50  png_set_swap_alpha =====

void png_set_swap_alpha(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x20000;
  }
  return;
}


// ===== 0015ff64  png_set_invert_alpha =====

void png_set_invert_alpha(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x80000;
  }
  return;
}


// ===== 0015ff78  png_set_invert_mono =====

void png_set_invert_mono(long param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x20;
  }
  return;
}


// ===== 0015ff8c  png_do_invert =====

void png_do_invert(long param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(char *)(param_1 + 0x10) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      uVar1 = *(ulong *)(param_1 + 8);
      if (uVar1 == 0) {
        return;
      }
      uVar4 = 0;
      do {
        pbVar5 = param_2 + uVar4;
        uVar4 = uVar4 + 4;
        *pbVar5 = ~*pbVar5;
        pbVar5[1] = ~pbVar5[1];
      } while (uVar4 < uVar1);
      return;
    }
    if (*(char *)(param_1 + 0x11) != '\b') {
      return;
    }
    uVar1 = *(ulong *)(param_1 + 8);
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 < 3) {
      uVar3 = 0;
      pbVar5 = param_2;
    }
    else {
      uVar4 = (uVar1 - 1 >> 1) + 1;
      uVar7 = uVar4 & 0xfffffffffffffffe;
      uVar3 = uVar7 * 2;
      pbVar5 = param_2 + uVar3;
      pbVar6 = param_2 + 2;
      uVar8 = uVar7;
      do {
        uVar8 = uVar8 - 2;
        pbVar6[-2] = ~pbVar6[-2];
        *pbVar6 = ~*pbVar6;
        pbVar6 = pbVar6 + 4;
      } while (uVar8 != 0);
      if (uVar4 == uVar7) {
        return;
      }
    }
    do {
      uVar3 = uVar3 + 2;
      *pbVar5 = ~*pbVar5;
      pbVar5 = pbVar5 + 2;
    } while (uVar3 < uVar1);
    return;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 < 8) {
    uVar3 = 0;
    pbVar5 = param_2;
  }
  else {
    if (uVar1 < 0x20) {
      uVar4 = 0;
    }
    else {
      uVar3 = uVar1 & 0xffffffffffffffe0;
      pbVar5 = param_2 + 0x10;
      uVar4 = uVar3;
      do {
        uVar10 = *(undefined8 *)(pbVar5 + -8);
        uVar9 = *(undefined8 *)(pbVar5 + -0x10);
        uVar12 = *(undefined8 *)(pbVar5 + 8);
        uVar11 = *(undefined8 *)pbVar5;
        uVar4 = uVar4 - 0x20;
        *(ulong *)(pbVar5 + -8) =
             CONCAT17(~(byte)((ulong)uVar10 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar10 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar10 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar10 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar10 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar10 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar10 >>
                                                                                   8),~(byte)uVar10)
                                                                  ))))));
        *(ulong *)(pbVar5 + -0x10) =
             CONCAT17(~(byte)((ulong)uVar9 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar9 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar9 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar9 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar9 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar9 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar9 >>
                                                                                   8),~(byte)uVar9))
                                                         )))));
        *(ulong *)(pbVar5 + 8) =
             CONCAT17(~(byte)((ulong)uVar12 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar12 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar12 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar12 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar12 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar12 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar12 >>
                                                                                   8),~(byte)uVar12)
                                                                  ))))));
        *(ulong *)pbVar5 =
             CONCAT17(~(byte)((ulong)uVar11 >> 0x38),
                      CONCAT16(~(byte)((ulong)uVar11 >> 0x30),
                               CONCAT15(~(byte)((ulong)uVar11 >> 0x28),
                                        CONCAT14(~(byte)((ulong)uVar11 >> 0x20),
                                                 CONCAT13(~(byte)((ulong)uVar11 >> 0x18),
                                                          CONCAT12(~(byte)((ulong)uVar11 >> 0x10),
                                                                   CONCAT11(~(byte)((ulong)uVar11 >>
                                                                                   8),~(byte)uVar11)
                                                                  ))))));
        pbVar5 = pbVar5 + 0x20;
      } while (uVar4 != 0);
      if (uVar1 == uVar3) {
        return;
      }
      uVar4 = uVar3;
      if ((uVar1 & 0x18) == 0) {
        pbVar5 = param_2 + uVar3;
        goto LAB_00160104;
      }
    }
    uVar3 = uVar1 & 0xfffffffffffffff8;
    pbVar5 = param_2 + uVar3;
    lVar2 = uVar4 - uVar3;
    pbVar6 = param_2 + uVar4;
    do {
      uVar9 = *(undefined8 *)pbVar6;
      lVar2 = lVar2 + 8;
      *(ulong *)pbVar6 =
           CONCAT17(~(byte)((ulong)uVar9 >> 0x38),
                    CONCAT16(~(byte)((ulong)uVar9 >> 0x30),
                             CONCAT15(~(byte)((ulong)uVar9 >> 0x28),
                                      CONCAT14(~(byte)((ulong)uVar9 >> 0x20),
                                               CONCAT13(~(byte)((ulong)uVar9 >> 0x18),
                                                        CONCAT12(~(byte)((ulong)uVar9 >> 0x10),
                                                                 CONCAT11(~(byte)((ulong)uVar9 >> 8)
                                                                          ,~(byte)uVar9)))))));
      pbVar6 = pbVar6 + 8;
    } while (lVar2 != 0);
    if (uVar1 == uVar3) {
      return;
    }
  }
LAB_00160104:
  lVar2 = uVar1 - uVar3;
  do {
    lVar2 = lVar2 + -1;
    *pbVar5 = ~*pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (lVar2 != 0);
  return;
}


// ===== 00160120  png_do_swap =====

void png_do_swap(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
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
  
  if (*(char *)((long)param_1 + 0x11) != '\x10') {
    return;
  }
  uVar1 = *param_1 * (uint)*(byte *)((long)param_1 + 0x12);
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 < 8) {
    uVar5 = 0;
  }
  else {
    if (uVar1 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4 & 0xffffffe0;
      puVar2 = param_2 + 0x20;
      uVar7 = uVar5;
      do {
        uVar24 = *puVar2;
        uVar25 = puVar2[2];
        uVar26 = puVar2[4];
        uVar27 = puVar2[6];
        uVar28 = puVar2[8];
        uVar29 = puVar2[10];
        uVar30 = puVar2[0xc];
        uVar31 = puVar2[0xe];
        uVar32 = puVar2[0x10];
        uVar33 = puVar2[0x12];
        uVar34 = puVar2[0x14];
        uVar35 = puVar2[0x16];
        uVar36 = puVar2[0x18];
        uVar37 = puVar2[0x1a];
        uVar38 = puVar2[0x1c];
        uVar39 = puVar2[0x1e];
        uVar7 = uVar7 - 0x20;
        uVar8 = puVar2[-0x20];
        uVar9 = puVar2[-0x1e];
        uVar10 = puVar2[-0x1c];
        uVar11 = puVar2[-0x1a];
        uVar12 = puVar2[-0x18];
        uVar13 = puVar2[-0x16];
        uVar14 = puVar2[-0x14];
        uVar15 = puVar2[-0x12];
        uVar16 = puVar2[-0x10];
        uVar17 = puVar2[-0xe];
        uVar18 = puVar2[-0xc];
        uVar19 = puVar2[-10];
        uVar20 = puVar2[-8];
        uVar21 = puVar2[-6];
        uVar22 = puVar2[-4];
        uVar23 = puVar2[-2];
        *puVar2 = puVar2[1];
        puVar2[1] = uVar24;
        puVar2[2] = puVar2[3];
        puVar2[3] = uVar25;
        puVar2[4] = puVar2[5];
        puVar2[5] = uVar26;
        puVar2[6] = puVar2[7];
        puVar2[7] = uVar27;
        puVar2[8] = puVar2[9];
        puVar2[9] = uVar28;
        puVar2[10] = puVar2[0xb];
        puVar2[0xb] = uVar29;
        puVar2[0xc] = puVar2[0xd];
        puVar2[0xd] = uVar30;
        puVar2[0xe] = puVar2[0xf];
        puVar2[0xf] = uVar31;
        puVar2[0x10] = puVar2[0x11];
        puVar2[0x11] = uVar32;
        puVar2[0x12] = puVar2[0x13];
        puVar2[0x13] = uVar33;
        puVar2[0x14] = puVar2[0x15];
        puVar2[0x15] = uVar34;
        puVar2[0x16] = puVar2[0x17];
        puVar2[0x17] = uVar35;
        puVar2[0x18] = puVar2[0x19];
        puVar2[0x19] = uVar36;
        puVar2[0x1a] = puVar2[0x1b];
        puVar2[0x1b] = uVar37;
        puVar2[0x1c] = puVar2[0x1d];
        puVar2[0x1d] = uVar38;
        puVar2[0x1e] = puVar2[0x1f];
        puVar2[0x1f] = uVar39;
        puVar2[-0x20] = puVar2[-0x1f];
        puVar2[-0x1f] = uVar8;
        puVar2[-0x1e] = puVar2[-0x1d];
        puVar2[-0x1d] = uVar9;
        puVar2[-0x1c] = puVar2[-0x1b];
        puVar2[-0x1b] = uVar10;
        puVar2[-0x1a] = puVar2[-0x19];
        puVar2[-0x19] = uVar11;
        puVar2[-0x18] = puVar2[-0x17];
        puVar2[-0x17] = uVar12;
        puVar2[-0x16] = puVar2[-0x15];
        puVar2[-0x15] = uVar13;
        puVar2[-0x14] = puVar2[-0x13];
        puVar2[-0x13] = uVar14;
        puVar2[-0x12] = puVar2[-0x11];
        puVar2[-0x11] = uVar15;
        puVar2[-0x10] = puVar2[-0xf];
        puVar2[-0xf] = uVar16;
        puVar2[-0xe] = puVar2[-0xd];
        puVar2[-0xd] = uVar17;
        puVar2[-0xc] = puVar2[-0xb];
        puVar2[-0xb] = uVar18;
        puVar2[-10] = puVar2[-9];
        puVar2[-9] = uVar19;
        puVar2[-8] = puVar2[-7];
        puVar2[-7] = uVar20;
        puVar2[-6] = puVar2[-5];
        puVar2[-5] = uVar21;
        puVar2[-4] = puVar2[-3];
        puVar2[-3] = uVar22;
        puVar2[-2] = puVar2[-1];
        puVar2[-1] = uVar23;
        puVar2 = puVar2 + 0x40;
      } while (uVar7 != 0);
      if (uVar5 == uVar4) {
        return;
      }
      if ((uVar1 & 0x18) == 0) {
        param_2 = param_2 + uVar5 * 2;
        goto LAB_001601dc;
      }
    }
    uVar7 = uVar4 & 0xfffffff8;
    puVar2 = param_2 + uVar5 * 2;
    param_2 = param_2 + uVar7 * 2;
    lVar6 = uVar5 - uVar7;
    do {
      uVar8 = *puVar2;
      uVar9 = puVar2[2];
      uVar10 = puVar2[4];
      uVar11 = puVar2[6];
      uVar12 = puVar2[8];
      uVar13 = puVar2[10];
      uVar14 = puVar2[0xc];
      uVar15 = puVar2[0xe];
      lVar6 = lVar6 + 8;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar8;
      puVar2[2] = puVar2[3];
      puVar2[3] = uVar9;
      puVar2[4] = puVar2[5];
      puVar2[5] = uVar10;
      puVar2[6] = puVar2[7];
      puVar2[7] = uVar11;
      puVar2[8] = puVar2[9];
      puVar2[9] = uVar12;
      puVar2[10] = puVar2[0xb];
      puVar2[0xb] = uVar13;
      puVar2[0xc] = puVar2[0xd];
      puVar2[0xd] = uVar14;
      puVar2[0xe] = puVar2[0xf];
      puVar2[0xf] = uVar15;
      puVar2 = puVar2 + 0x10;
    } while (lVar6 != 0);
    uVar5 = uVar7;
    if (uVar7 == uVar4) {
      return;
    }
  }
LAB_001601dc:
  iVar3 = uVar1 - (int)uVar5;
  do {
    uVar8 = *param_2;
    iVar3 = iVar3 + -1;
    *param_2 = param_2[1];
    param_2[1] = uVar8;
    param_2 = param_2 + 2;
  } while (iVar3 != 0);
  return;
}


// ===== 00160200  png_do_packswap =====

void png_do_packswap(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  undefined *puVar5;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 < 8) {
    lVar4 = *(long *)(param_1 + 8);
    if (bVar1 == 1) {
      puVar5 = &DAT_0012a5fa;
    }
    else if (bVar1 == 4) {
      puVar5 = &DAT_0012a7fa;
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      puVar5 = &DAT_0012a6fa;
    }
    if (0 < lVar4) {
      pbVar2 = param_2;
      do {
        pbVar3 = pbVar2 + 1;
        *pbVar2 = puVar5[*pbVar2];
        pbVar2 = pbVar3;
      } while (pbVar3 < param_2 + lVar4);
    }
  }
  return;
}


// ===== 0016027c  png_do_strip_channel =====

void png_do_strip_channel(long param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  lVar7 = *(long *)(param_1 + 8);
  puVar2 = param_2 + lVar7;
  if (*(char *)(param_1 + 0x12) == '\x04') {
    if (*(char *)(param_1 + 0x11) == '\x10') {
      lVar4 = 8;
      if (param_3 != 0) {
        lVar4 = 2;
      }
      lVar3 = 6;
      if (param_3 != 0) {
        lVar3 = 0;
      }
      puVar8 = param_2 + lVar3;
      if (lVar4 < lVar7) {
        puVar9 = param_2 + lVar4;
        do {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar8[2] = puVar9[2];
          puVar8[3] = puVar9[3];
          puVar8[4] = puVar9[4];
          puVar10 = puVar9 + 5;
          puVar9 = puVar9 + 8;
          puVar8[5] = *puVar10;
          puVar8 = puVar8 + 6;
        } while (puVar9 < puVar2);
      }
      cVar5 = *(char *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x13) = 0x30;
      *(undefined1 *)(param_1 + 0x12) = 3;
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      lVar4 = 4;
      if (param_3 != 0) {
        lVar4 = 1;
      }
      lVar3 = 3;
      if (param_3 != 0) {
        lVar3 = 0;
      }
      puVar8 = param_2 + lVar3;
      if (lVar4 < lVar7) {
        puVar9 = param_2 + lVar4;
        do {
          *puVar8 = *puVar9;
          puVar8[1] = puVar9[1];
          puVar10 = puVar9 + 2;
          puVar9 = puVar9 + 4;
          puVar8[2] = *puVar10;
          puVar8 = puVar8 + 3;
        } while (puVar9 < puVar2);
      }
      cVar5 = *(char *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x13) = 0x18;
      *(undefined1 *)(param_1 + 0x12) = 3;
    }
    if (cVar5 == '\x06') {
      *(undefined1 *)(param_1 + 0x10) = 2;
    }
    goto LAB_00160444;
  }
  if (*(char *)(param_1 + 0x12) != '\x02') {
    return;
  }
  cVar5 = *(char *)(param_1 + 0x11);
  if (cVar5 == '\x10') {
    puVar8 = param_2 + 2;
    puVar9 = param_2 + 4;
    if (param_3 != 0) {
      puVar8 = param_2;
      puVar9 = param_2 + 2;
    }
    puVar10 = puVar8;
    if (puVar9 < puVar2) {
      do {
        *puVar10 = *puVar9;
        puVar8 = puVar10 + 2;
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 4;
        puVar10[1] = *puVar1;
        puVar10 = puVar8;
      } while (puVar9 < puVar2);
      goto LAB_00160398;
    }
    cVar6 = *(char *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x13) = 0x10;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else {
    if (cVar5 != '\b') {
      return;
    }
    puVar9 = param_2 + 2;
    if (param_3 == 0) {
      puVar8 = param_2 + 1;
    }
    else {
      puVar9 = param_2 + 1;
      puVar8 = param_2;
    }
    for (; puVar9 < puVar2; puVar9 = puVar9 + 2) {
      *puVar8 = *puVar9;
      puVar8 = puVar8 + 1;
    }
LAB_00160398:
    cVar6 = *(char *)(param_1 + 0x10);
    *(char *)(param_1 + 0x13) = cVar5;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if (cVar6 == '\x04') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
LAB_00160444:
  *(long *)(param_1 + 8) = (long)puVar8 - (long)param_2;
  return;
}


// ===== 00160470  png_do_bgr =====

void png_do_bgr(uint *param_1,undefined2 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  
  bVar2 = (byte)param_1[4];
  if ((bVar2 >> 1 & 1) != 0) {
    uVar1 = *param_1;
    uVar7 = (ulong)uVar1;
    if (*(char *)((long)param_1 + 0x11) == '\x10') {
      if (bVar2 == 2) {
        while (uVar1 != 0) {
          uVar4 = *param_2;
          uVar1 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar1;
          *param_2 = param_2[2];
          param_2[2] = uVar4;
          param_2 = param_2 + 3;
        }
      }
      else if (bVar2 == 6) {
        while (uVar1 != 0) {
          uVar4 = *param_2;
          uVar1 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar1;
          *param_2 = param_2[2];
          param_2[2] = uVar4;
          param_2 = param_2 + 4;
        }
      }
    }
    else if (*(char *)((long)param_1 + 0x11) == '\b') {
      if (bVar2 == 2) {
        if (uVar1 != 0) {
          if (uVar1 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = uVar7 & 0xfffffffe;
            puVar9 = param_2 + 1;
            param_2 = (undefined2 *)((long)param_2 + uVar8 * 3);
            uVar10 = uVar8;
            do {
              uVar10 = uVar10 - 2;
              uVar5 = *(undefined1 *)(puVar9 + -1);
              *(undefined1 *)(puVar9 + -1) = *(undefined1 *)puVar9;
              uVar3 = *(undefined1 *)((long)puVar9 + 1);
              *(undefined1 *)((long)puVar9 + 1) = *(undefined1 *)((long)puVar9 + 3);
              *(undefined1 *)puVar9 = uVar5;
              *(undefined1 *)((long)puVar9 + 3) = uVar3;
              puVar9 = puVar9 + 3;
            } while (uVar10 != 0);
            if (uVar8 == uVar7) {
              return;
            }
          }
          iVar6 = uVar1 - (int)uVar8;
          do {
            uVar3 = *(undefined1 *)param_2;
            iVar6 = iVar6 + -1;
            *(undefined1 *)param_2 = *(undefined1 *)(param_2 + 1);
            *(undefined1 *)(param_2 + 1) = uVar3;
            param_2 = (undefined2 *)((long)param_2 + 3);
          } while (iVar6 != 0);
        }
      }
      else if ((bVar2 == 6) && (uVar1 != 0)) {
        if (uVar1 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar7 & 0xfffffffe;
          puVar9 = param_2 + 2;
          param_2 = param_2 + uVar8 * 2;
          uVar10 = uVar8;
          do {
            uVar10 = uVar10 - 2;
            uVar5 = *(undefined1 *)(puVar9 + -2);
            *(undefined1 *)(puVar9 + -2) = *(undefined1 *)(puVar9 + -1);
            uVar3 = *(undefined1 *)puVar9;
            *(undefined1 *)puVar9 = *(undefined1 *)(puVar9 + 1);
            *(undefined1 *)(puVar9 + -1) = uVar5;
            *(undefined1 *)(puVar9 + 1) = uVar3;
            puVar9 = puVar9 + 4;
          } while (uVar10 != 0);
          if (uVar8 == uVar7) {
            return;
          }
        }
        iVar6 = uVar1 - (int)uVar8;
        do {
          uVar3 = *(undefined1 *)param_2;
          iVar6 = iVar6 + -1;
          *(undefined1 *)param_2 = *(undefined1 *)(param_2 + 1);
          *(undefined1 *)(param_2 + 1) = uVar3;
          param_2 = param_2 + 2;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}


// ===== 001605fc  png_do_check_palette_indexes =====

void png_do_check_palette_indexes(long param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  if (*(ushort *)(param_1 + 0x290) == 0) {
    return;
  }
  bVar6 = *(byte *)((long)param_2 + 0x11);
  if (1 << (ulong)(bVar6 & 0x1f) <= (int)(uint)*(ushort *)(param_1 + 0x290)) {
    return;
  }
  uVar16 = *(ulong *)(param_2 + 2);
  pauVar10 = *(undefined1 (**) [16])(param_1 + 0x260);
  uVar15 = -(*param_2 * (uint)*(byte *)((long)param_2 + 0x13)) & 7;
  pauVar12 = (undefined1 (*) [16])(*pauVar10 + uVar16);
  if (3 < bVar6) {
    if (bVar6 == 4) {
      if ((long)uVar16 < 1) {
        return;
      }
      uVar5 = *(uint *)(param_1 + 0x294);
      bVar6 = (byte)(*pauVar12)[0] >> (ulong)uVar15;
      uVar15 = bVar6 & 0xf;
      uVar7 = (uint)(bVar6 >> 4);
      uVar1 = uVar15;
      if ((int)uVar15 <= (int)uVar5) {
        uVar1 = uVar5;
      }
      uVar14 = uVar7;
      if (uVar7 <= uVar1) {
        uVar14 = uVar1;
      }
      if (((int)uVar15 <= (int)uVar5) && (uVar15 = uVar14, uVar7 <= uVar1)) goto LAB_0016095c;
      do {
        *(uint *)(param_1 + 0x294) = uVar14;
        uVar15 = uVar14;
LAB_0016095c:
        do {
          pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 0xf);
          if (pauVar12 <= pauVar10) {
            return;
          }
          uVar1 = (byte)(*pauVar12)[0] & 0xf;
          bVar6 = (byte)(*pauVar12)[0] >> 4;
          uVar5 = uVar1;
          if ((int)uVar1 <= (int)uVar15) {
            uVar5 = uVar15;
          }
          uVar14 = (uint)bVar6;
          if (bVar6 <= uVar5) {
            uVar14 = uVar5;
          }
          bVar2 = uVar1 <= uVar15;
          uVar15 = uVar14;
        } while (bVar2 && bVar6 <= uVar5);
      } while( true );
    }
    if (bVar6 != 8) {
      return;
    }
    if ((long)uVar16 < 1) {
      return;
    }
    uVar15 = *(uint *)(param_1 + 0x294);
    do {
      if ((int)uVar15 < (int)(uint)(byte)(*pauVar12)[0]) {
        uVar15 = (uint)(byte)(*pauVar12)[0];
        *(uint *)(param_1 + 0x294) = uVar15;
      }
      pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 0xf);
    } while (pauVar10 < pauVar12);
    return;
  }
  if (bVar6 != 1) {
    if (bVar6 != 2) {
      return;
    }
    if ((long)uVar16 < 1) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x294);
    bVar6 = (byte)(*pauVar12)[0] >> (ulong)uVar15;
    uVar15 = bVar6 & 3;
    uVar14 = bVar6 >> 2 & 3;
    uVar9 = bVar6 >> 4 & 3;
    uVar7 = (uint)(bVar6 >> 6);
    uVar1 = uVar15;
    if ((int)uVar15 <= (int)uVar5) {
      uVar1 = uVar5;
    }
    uVar4 = uVar14;
    if (uVar14 <= uVar1) {
      uVar4 = uVar1;
    }
    uVar3 = uVar9;
    if (uVar9 <= uVar4) {
      uVar3 = uVar4;
    }
    uVar13 = uVar7;
    if (uVar7 <= uVar3) {
      uVar13 = uVar3;
    }
    if (((((int)uVar15 <= (int)uVar5) && (uVar14 <= uVar1)) && (uVar9 <= uVar4)) &&
       (uVar15 = uVar13, uVar7 <= uVar3)) goto LAB_001608f4;
    do {
      *(uint *)(param_1 + 0x294) = uVar13;
      uVar15 = uVar13;
LAB_001608f4:
      do {
        pauVar12 = (undefined1 (*) [16])(pauVar12[-1] + 0xf);
        if (pauVar12 <= pauVar10) {
          return;
        }
        bVar6 = (*pauVar12)[0];
        uVar1 = bVar6 & 3;
        uVar7 = bVar6 >> 2 & 3;
        uVar14 = bVar6 >> 4 & 3;
        bVar6 = bVar6 >> 6;
        uVar5 = uVar1;
        if ((int)uVar1 <= (int)uVar15) {
          uVar5 = uVar15;
        }
        uVar9 = uVar7;
        if (uVar7 <= uVar5) {
          uVar9 = uVar5;
        }
        uVar4 = uVar14;
        if (uVar14 <= uVar9) {
          uVar4 = uVar9;
        }
        uVar13 = (uint)bVar6;
        if (bVar6 <= uVar4) {
          uVar13 = uVar4;
        }
      } while (((uVar1 <= uVar15) && (uVar7 <= uVar5)) &&
              (uVar15 = uVar13, uVar14 <= uVar9 && bVar6 <= uVar4));
    } while( true );
  }
  uVar8 = uVar16 - 1;
  if ((long)uVar16 < 1) {
    return;
  }
  if ((byte)(*pauVar12)[0] >> (ulong)uVar15 != 0) {
    *(undefined4 *)(param_1 + 0x294) = 1;
  }
  pauVar11 = (undefined1 (*) [16])(pauVar12[-1] + 0xf);
  if (pauVar11 <= pauVar10) {
    return;
  }
  if (8 < uVar16) {
    if (uVar16 < 0x11) {
      uVar18 = 0;
    }
    else {
      uVar18 = uVar8 & 0xfffffffffffffff0;
      uVar20 = uVar18;
      do {
        pauVar12 = pauVar12 + -1;
        auVar22 = NEON_rev64(*pauVar12,1);
        auVar22 = NEON_ext(auVar22,auVar22,8,1);
        auVar22 = NEON_cmtst(auVar22,auVar22,1);
        if (((((auVar22 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             ((auVar22 & (undefined1  [16])0x100) != (undefined1  [16])0x0)) ||
            ((((auVar22 & (undefined1  [16])0x10000) != (undefined1  [16])0x0 ||
              ((((auVar22 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0 ||
                ((auVar22 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0)) ||
               ((auVar22 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0)))) ||
             (((auVar22 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0 ||
              ((auVar22 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0)))))) ||
           (((auVar22 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
            (((((auVar22 & (undefined1  [16])0x100) != (undefined1  [16])0x0 ||
               ((auVar22 & (undefined1  [16])0x10000) != (undefined1  [16])0x0)) ||
              (((auVar22 & (undefined1  [16])0x1000000) != (undefined1  [16])0x0 ||
               ((((auVar22 & (undefined1  [16])0x100000000) != (undefined1  [16])0x0 ||
                 ((auVar22 & (undefined1  [16])0x10000000000) != (undefined1  [16])0x0)) ||
                ((auVar22 & (undefined1  [16])0x1000000000000) != (undefined1  [16])0x0)))))) ||
             ((auVar22 & (undefined1  [16])0x100000000000000) != (undefined1  [16])0x0)))))) {
          *(undefined4 *)(param_1 + 0x294) = 1;
        }
        uVar20 = uVar20 - 0x10;
      } while (uVar20 != 0);
      if (uVar8 == uVar18) {
        return;
      }
      if (((uint)uVar8 >> 3 & 1) == 0) {
        pauVar11 = (undefined1 (*) [16])((long)pauVar11 - uVar18);
        goto LAB_001608e0;
      }
    }
    uVar20 = uVar8 & 0xfffffffffffffff8;
    puVar17 = (undefined8 *)((uVar16 - uVar18) + (long)pauVar10);
    pauVar11 = (undefined1 (*) [16])((long)pauVar11 - uVar20);
    lVar19 = uVar18 - uVar20;
    do {
      puVar17 = puVar17 + -1;
      uVar21 = NEON_rev64(*puVar17,1);
      uVar16 = NEON_cmtst(uVar21,uVar21,1);
      if ((((uVar16 & 1) != 0) || ((uVar16 & 0x100) != 0)) ||
         ((((uVar16 & 0x10000) != 0 ||
           (((uVar16 & 0x1000000) != 0 || ((uVar16 & 0x100000000) != 0)))) ||
          (((uVar16 & 0x10000000000) != 0 ||
           (((uVar16 & 0x1000000000000) != 0 || ((uVar16 & 0x100000000000000) != 0)))))))) {
        *(undefined4 *)(param_1 + 0x294) = 1;
      }
      lVar19 = lVar19 + 8;
    } while (lVar19 != 0);
    if (uVar8 == uVar20) {
      return;
    }
  }
LAB_001608e0:
  do {
    if ((*pauVar11)[0] != '\0') {
      *(undefined4 *)(param_1 + 0x294) = 1;
    }
    pauVar11 = (undefined1 (*) [16])(pauVar11[-1] + 0xf);
  } while (pauVar10 < pauVar11);
  return;
}


// ===== 00160998  png_set_user_transform_info =====

void png_set_user_transform_info
               (long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x165) < '\0') && ((*(byte *)(param_1 + 0x168) >> 6 & 1) != 0)) {
      png_app_error(param_1,"info change after png_start_read_image or png_read_update_info");
      return;
    }
    *(undefined8 *)(param_1 + 0x158) = param_2;
    *(undefined1 *)(param_1 + 0x160) = param_3;
    *(undefined1 *)(param_1 + 0x161) = param_4;
  }
  return;
}


// ===== 001609c8  png_get_user_transform_ptr =====

long png_get_user_transform_ptr(long param_1)

{
  if (param_1 != 0) {
    param_1 = *(long *)(param_1 + 0x158);
  }
  return param_1;
}


// ===== 001609d4  png_get_current_row_number =====

undefined4 png_get_current_row_number(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x24c);
  }
  return 0xffffffff;
}


// ===== 001609e8  png_get_current_pass_number =====

undefined1 png_get_current_pass_number(long param_1)

{
  if (param_1 != 0) {
    return *(undefined1 *)(param_1 + 0x29d);
  }
  return 8;
}


// ===== 001609fc  png_write_info_before_PLTE =====

void png_write_info_before_PLTE(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x165) >> 2 & 1) != 0) {
    return;
  }
  png_write_sig(param_1);
  if (((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0) && (*(int *)(param_1 + 0x418) != 0)) {
    png_warning(param_1,"MNG features are not allowed in a PNG datastream");
    *(undefined4 *)(param_1 + 0x418) = 0;
  }
  png_write_IHDR(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 9),
                 *(undefined1 *)((long)param_2 + 0x25),*(undefined1 *)((long)param_2 + 0x26),
                 *(undefined1 *)((long)param_2 + 0x27),*(undefined1 *)(param_2 + 10));
  if ((*(byte *)((long)param_2 + 10) >> 1 & 1) != 0) {
    png_write_acTL(param_1,param_2[0x5a],param_2[0x5b]);
  }
  uVar3 = *(ushort *)((long)param_2 + 0x7e);
  if ((uVar3 & 0x8008) == 8) {
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      png_write_gAMA_fixed(param_1,param_2[0xd]);
      uVar3 = *(ushort *)((long)param_2 + 0x7e);
      goto LAB_00160ab4;
    }
  }
  else {
LAB_00160ab4:
    if ((short)uVar3 < 0) goto LAB_00160af4;
  }
  uVar2 = param_2[2];
  if ((uVar2 >> 0xc & 1) == 0) {
    if ((uVar2 >> 0xb & 1) != 0) {
      png_write_sRGB(param_1,*(undefined2 *)(param_2 + 0x1f));
    }
  }
  else {
    if ((uVar2 >> 0xb & 1) != 0) {
      png_app_warning(param_1,"profile matches sRGB but writing iCCP instead");
    }
    png_write_iCCP(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x22));
  }
LAB_00160af4:
  if ((*(byte *)(param_2 + 2) >> 1 & 1) != 0) {
    png_write_sBIT(param_1,param_2 + 0x2c,*(undefined1 *)((long)param_2 + 0x25));
  }
  if (((*(ushort *)((long)param_2 + 0x7e) & 0x8010) == 0x10) &&
     ((*(byte *)(param_2 + 2) >> 2 & 1) != 0)) {
    png_write_cHRM_fixed(param_1,param_2 + 0xe);
  }
  iVar4 = param_2[0x4e];
  if ((iVar4 != 0) && (0 < iVar4)) {
    uVar6 = *(ulong *)(param_2 + 0x4c);
    uVar1 = uVar6 + (long)iVar4 * 0x20;
    do {
      if ((((*(byte *)(uVar6 + 0x18) & 1) != 0) &&
          (iVar4 = png_handle_as_unknown(param_1,uVar6), iVar4 != 1)) &&
         (((iVar4 == 3 || ((*(byte *)(uVar6 + 3) >> 5 & 1) != 0)) ||
          ((iVar4 == 0 && (*(int *)(param_1 + 0x3f8) == 3)))))) {
        lVar5 = *(long *)(uVar6 + 0x10);
        if (lVar5 == 0) {
          png_warning(param_1,"Writing zero-length unknown chunk");
          lVar5 = *(long *)(uVar6 + 0x10);
        }
        png_write_chunk(param_1,uVar6,*(undefined8 *)(uVar6 + 8),lVar5);
      }
      uVar6 = uVar6 + 0x20;
    } while (uVar6 < uVar1);
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x400;
  return;
}


// ===== 00160bec  png_write_info =====

/* WARNING: Type propagation algorithm not settling */

void png_write_info(long param_1,long param_2)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    png_write_info_before_PLTE(param_1,param_2);
    uVar5 = *(uint *)(param_2 + 8);
    if ((uVar5 >> 3 & 1) == 0) {
      if (*(char *)(param_2 + 0x25) == '\x03') {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Valid palette required for paletted images");
      }
    }
    else {
      png_write_PLTE(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined2 *)(param_2 + 0x20));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 4 & 1) != 0) {
      if ((((*(byte *)(param_1 + 0x16e) >> 3 & 1) != 0) && (*(char *)(param_2 + 0x25) == '\x03')) &&
         (uVar2 = *(ushort *)(param_2 + 0x22), uVar2 != 0)) {
        uVar6 = 0;
        uVar5 = (uint)uVar2;
        if (0xff < uVar2) {
          uVar5 = 0x100;
        }
        do {
          *(byte *)(*(long *)(param_2 + 0xb8) + uVar6) =
               ~*(byte *)(*(long *)(param_2 + 0xb8) + uVar6);
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      png_write_tRNS(param_1,*(undefined8 *)(param_2 + 0xb8),param_2 + 0xc0,
                     *(undefined2 *)(param_2 + 0x22),*(undefined1 *)(param_2 + 0x25));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 5 & 1) != 0) {
      png_write_bKGD(param_1,param_2 + 0xca,*(undefined1 *)(param_2 + 0x25));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 0x10 & 1) != 0) {
      png_write_eXIf(param_1,*(undefined8 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xec));
      uVar5 = *(uint *)(param_2 + 8);
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x4000;
    }
    if ((uVar5 >> 6 & 1) != 0) {
      png_write_hIST(param_1,*(undefined8 *)(param_2 + 0x100),*(undefined2 *)(param_2 + 0x20));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 8 & 1) != 0) {
      png_write_oFFs(param_1,*(undefined4 *)(param_2 + 0xd4),*(undefined4 *)(param_2 + 0xd8),
                     *(undefined1 *)(param_2 + 0xdc));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 10 & 1) != 0) {
      png_write_pCAL(param_1,*(undefined8 *)(param_2 + 0x108),*(undefined4 *)(param_2 + 0x110),
                     *(undefined4 *)(param_2 + 0x114),*(undefined1 *)(param_2 + 0x128),
                     *(undefined1 *)(param_2 + 0x129),*(undefined8 *)(param_2 + 0x118),
                     *(undefined8 *)(param_2 + 0x120));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 0xe & 1) != 0) {
      png_write_sCAL_s(param_1,*(undefined1 *)(param_2 + 0x14c),*(undefined8 *)(param_2 + 0x150),
                       *(undefined8 *)(param_2 + 0x158));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 7 & 1) != 0) {
      png_write_pHYs(param_1,*(undefined4 *)(param_2 + 0xe0),*(undefined4 *)(param_2 + 0xe4),
                     *(undefined1 *)(param_2 + 0xe8));
      uVar5 = *(uint *)(param_2 + 8);
    }
    if ((uVar5 >> 9 & 1) != 0) {
      png_write_tIME(param_1,param_2 + 0xa8);
      uVar5 = *(uint *)(param_2 + 8);
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x200;
    }
    if (((uVar5 >> 0xd & 1) != 0) && (0 < *(int *)(param_2 + 0x148))) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        png_write_sPLT(param_1,*(long *)(param_2 + 0x140) + lVar7);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x20;
      } while (lVar8 < *(int *)(param_2 + 0x148));
    }
    if (0 < *(int *)(param_2 + 0x94)) {
      lVar4 = *(long *)(param_2 + 0xa0);
      lVar7 = 0;
      lVar8 = 0;
      do {
        iVar3 = *(int *)(lVar4 + lVar7);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            png_write_tEXt(param_1,*(undefined8 *)(lVar4 + lVar7 + 8),
                           *(undefined8 *)(lVar4 + lVar7 + 0x10),0);
            lVar4 = *(long *)(param_2 + 0xa0);
            goto LAB_00160e30;
          }
          if (iVar3 == 0) {
            png_write_zTXt(param_1,*(undefined8 *)(lVar4 + lVar7 + 8),
                           *(undefined8 *)(lVar4 + lVar7 + 0x10),0);
            lVar4 = *(long *)(param_2 + 0xa0);
            *(undefined4 *)(lVar4 + lVar7) = 0xfffffffe;
          }
        }
        else {
          lVar4 = lVar4 + lVar7;
          png_write_iTXt(param_1,iVar3,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x28),
                         *(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x10));
          lVar4 = *(long *)(param_2 + 0xa0);
          if (*(int *)(lVar4 + lVar7) == -1) {
LAB_00160e30:
            *(undefined4 *)(lVar4 + lVar7) = 0xfffffffd;
          }
          else {
            *(undefined4 *)(lVar4 + lVar7) = 0xfffffffe;
          }
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x38;
      } while (lVar8 < *(int *)(param_2 + 0x94));
    }
    iVar3 = *(int *)(param_2 + 0x138);
    if ((iVar3 != 0) && (0 < iVar3)) {
      uVar6 = *(ulong *)(param_2 + 0x130);
      uVar1 = uVar6 + (long)iVar3 * 0x20;
      do {
        if ((((*(byte *)(uVar6 + 0x18) >> 1 & 1) != 0) &&
            (iVar3 = png_handle_as_unknown(param_1,uVar6), iVar3 != 1)) &&
           (((iVar3 == 3 || ((*(byte *)(uVar6 + 3) >> 5 & 1) != 0)) ||
            ((iVar3 == 0 && (*(int *)(param_1 + 0x3f8) == 3)))))) {
          lVar8 = *(long *)(uVar6 + 0x10);
          if (lVar8 == 0) {
            png_warning(param_1,"Writing zero-length unknown chunk");
            lVar8 = *(long *)(uVar6 + 0x10);
          }
          png_write_chunk(param_1,uVar6,*(undefined8 *)(uVar6 + 8),lVar8);
        }
        uVar6 = uVar6 + 0x20;
      } while (uVar6 < uVar1);
    }
  }
  return;
}


// ===== 00160f6c  png_write_end =====

void png_write_end(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x164) >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No IDATs written into file");
  }
  if ((*(char *)(param_1 + 0x29f) == '\x03') &&
     ((int)(uint)*(ushort *)(param_1 + 0x290) <= *(int *)(param_1 + 0x294))) {
    png_benign_error(param_1,"Wrote palette index exceeding num_palette");
  }
  if (*(int *)(param_1 + 0x44c) != *(int *)(param_1 + 0x448)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Not enough frames written");
  }
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + 9) >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 1 & 1) == 0)) {
      png_write_tIME(param_1,param_2 + 0xa8);
    }
    if (0 < *(int *)(param_2 + 0x94)) {
      lVar3 = *(long *)(param_2 + 0xa0);
      lVar5 = 0;
      lVar6 = 0;
      do {
        iVar2 = *(int *)(lVar3 + lVar5);
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            if (iVar2 == -1) {
              png_write_tEXt(param_1,*(undefined8 *)(lVar3 + lVar5 + 8),
                             *(undefined8 *)(lVar3 + lVar5 + 0x10),0);
              lVar3 = *(long *)(param_2 + 0xa0);
              goto LAB_00161014;
            }
          }
          else {
            png_write_zTXt(param_1,*(undefined8 *)(lVar3 + lVar5 + 8),
                           *(undefined8 *)(lVar3 + lVar5 + 0x10),0);
            lVar3 = *(long *)(param_2 + 0xa0);
            *(undefined4 *)(lVar3 + lVar5) = 0xfffffffe;
          }
        }
        else {
          lVar3 = lVar3 + lVar5;
          png_write_iTXt(param_1,iVar2,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x28),
                         *(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x10));
          lVar3 = *(long *)(param_2 + 0xa0);
          if (*(int *)(lVar3 + lVar5) == -1) {
LAB_00161014:
            *(undefined4 *)(lVar3 + lVar5) = 0xfffffffd;
          }
          else {
            *(undefined4 *)(lVar3 + lVar5) = 0xfffffffe;
          }
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x38;
      } while (lVar6 < *(int *)(param_2 + 0x94));
    }
    if (((*(byte *)(param_2 + 10) & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 6 & 1) == 0)) {
      png_write_eXIf(param_1,*(undefined8 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xec));
    }
    iVar2 = *(int *)(param_2 + 0x138);
    if ((iVar2 != 0) && (0 < iVar2)) {
      uVar4 = *(ulong *)(param_2 + 0x130);
      uVar1 = uVar4 + (long)iVar2 * 0x20;
      do {
        if ((((*(byte *)(uVar4 + 0x18) >> 3 & 1) != 0) &&
            (iVar2 = png_handle_as_unknown(param_1,uVar4), iVar2 != 1)) &&
           (((iVar2 == 3 || ((*(byte *)(uVar4 + 3) >> 5 & 1) != 0)) ||
            ((iVar2 == 0 && (*(int *)(param_1 + 0x3f8) == 3)))))) {
          lVar6 = *(long *)(uVar4 + 0x10);
          if (lVar6 == 0) {
            png_warning(param_1,"Writing zero-length unknown chunk");
            lVar6 = *(long *)(uVar4 + 0x10);
          }
          png_write_chunk(param_1,uVar4,*(undefined8 *)(uVar4 + 8),lVar6);
        }
        uVar4 = uVar4 + 0x20;
      } while (uVar4 < uVar1);
    }
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
  png_write_IEND(param_1);
  return;
}


// ===== 001611c0  png_convert_from_struct_tm =====

void png_convert_from_struct_tm(short *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  cVar1 = *(char *)(param_2 + 2);
  *param_1 = *(short *)((long)param_2 + 0x14) + 0x76c;
  *(char *)(param_1 + 1) = cVar1 + '\x01';
  uVar2 = NEON_rev64(CONCAT26((short)((ulong)uVar3 >> 0x20),
                              CONCAT24((short)uVar3,
                                       CONCAT22((short)((ulong)uVar2 >> 0x20),(short)uVar2))),2);
  *(uint *)((long)param_1 + 3) =
       CONCAT13((char)((ulong)uVar2 >> 0x30),
                CONCAT12((char)((ulong)uVar2 >> 0x20),
                         CONCAT11((char)((ulong)uVar2 >> 0x10),(char)uVar2)));
  return;
}


// ===== 001611f0  png_convert_from_time_t =====

void png_convert_from_time_t(short *param_1,time_t param_2)

{
  int iVar1;
  tm *ptVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  time_t local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_30 = param_2;
  ptVar2 = gmtime(&local_30);
  if (ptVar2 == (tm *)0x0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    uVar5._0_4_ = ptVar2->tm_hour;
    uVar5._4_4_ = ptVar2->tm_mday;
    uVar4._0_4_ = ptVar2->tm_sec;
    uVar4._4_4_ = ptVar2->tm_min;
    iVar1 = ptVar2->tm_mon;
    *param_1 = (short)ptVar2->tm_year + 0x76c;
    *(char *)(param_1 + 1) = (char)iVar1 + '\x01';
    uVar4 = NEON_rev64(CONCAT26((short)((ulong)uVar5 >> 0x20),
                                CONCAT24((short)uVar5,
                                         CONCAT22((short)((ulong)uVar4 >> 0x20),(short)uVar4))),2);
    *(uint *)((long)param_1 + 3) =
         CONCAT13((char)((ulong)uVar4 >> 0x30),
                  CONCAT12((char)((ulong)uVar4 >> 0x20),
                           CONCAT11((char)((ulong)uVar4 >> 0x10),(char)uVar4)));
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  if (lVar3 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00161284  png_create_write_struct =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long png_create_write_struct(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = png_create_png_struct();
  uVar5 = _UNK_00129808;
  uVar4 = _DAT_00129800;
  uVar3 = _UNK_001294d8;
  uVar2 = _DAT_001294d0;
  uVar1 = DAT_00124498;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x218) = 0;
    *(undefined8 *)(lVar6 + 0x210) = uVar1;
    *(undefined8 *)(lVar6 + 0x1f8) = uVar5;
    *(undefined8 *)(lVar6 + 0x1f0) = uVar4;
    *(undefined8 *)(lVar6 + 0x208) = uVar3;
    *(undefined8 *)(lVar6 + 0x200) = uVar2;
    *(uint *)(lVar6 + 0x168) = *(uint *)(lVar6 + 0x168) | 0x200000;
    png_set_write_fn(lVar6,0,0,0);
  }
  return lVar6;
}


// ===== 001612f8  png_create_write_struct_2 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long png_create_write_struct_2(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = png_create_png_struct();
  uVar5 = _UNK_00129808;
  uVar4 = _DAT_00129800;
  uVar3 = _UNK_001294d8;
  uVar2 = _DAT_001294d0;
  uVar1 = DAT_00124498;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x218) = 0;
    *(undefined8 *)(lVar6 + 0x210) = uVar1;
    *(undefined8 *)(lVar6 + 0x1f8) = uVar5;
    *(undefined8 *)(lVar6 + 0x1f0) = uVar4;
    *(undefined8 *)(lVar6 + 0x208) = uVar3;
    *(undefined8 *)(lVar6 + 0x200) = uVar2;
    *(uint *)(lVar6 + 0x168) = *(uint *)(lVar6 + 0x168) | 0x200000;
    png_set_write_fn(lVar6,0,0,0);
  }
  return lVar6;
}


// ===== 00161360  png_write_rows =====

void png_write_rows(long param_1,undefined8 *param_2,int param_3)

{
  if ((param_1 != 0) && (param_3 != 0)) {
    do {
      png_write_row(param_1,*param_2);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


// ===== 001613a8  png_write_row =====

void png_write_row(long param_1,void *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  ushort *puVar9;
  long lVar10;
  uint local_50 [2];
  size_t local_48;
  byte local_40;
  byte local_3f;
  byte local_3e;
  char local_3d;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x24c) == 0) && (*(char *)(param_1 + 0x29d) == '\0')) {
      if ((*(byte *)(param_1 + 0x165) >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"png_write_info was never called before png_write_row");
      }
      png_write_start_row(param_1);
      cVar1 = *(char *)(param_1 + 0x29c);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x29c);
    }
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0)) {
      bVar2 = *(byte *)(param_1 + 0x29d);
      if (bVar2 < 3) {
        if (bVar2 == 0) {
          if ((*(byte *)(param_1 + 0x24c) & 7) != 0) goto LAB_00161608;
        }
        else if (bVar2 == 1) {
          if (((*(byte *)(param_1 + 0x24c) & 7) != 0) || (*(uint *)(param_1 + 0x230) < 5))
          goto LAB_00161608;
        }
        else if ((bVar2 == 2) && ((*(uint *)(param_1 + 0x24c) & 7) != 4)) goto LAB_00161608;
      }
      else if (bVar2 < 5) {
        if (bVar2 == 3) {
          if (((*(byte *)(param_1 + 0x24c) & 3) != 0) || (*(uint *)(param_1 + 0x230) < 3))
          goto LAB_00161608;
        }
        else if ((bVar2 == 4) && ((*(uint *)(param_1 + 0x24c) & 3) != 2)) {
LAB_00161608:
          if (*(long *)(lVar6 + 0x28) == local_38) {
            png_write_finish_row(param_1);
            return;
          }
          goto LAB_00161738;
        }
      }
      else if (bVar2 == 5) {
        if (((*(byte *)(param_1 + 0x24c) & 1) != 0) || (*(uint *)(param_1 + 0x230) < 2))
        goto LAB_00161608;
      }
      else if ((bVar2 == 6) && ((*(byte *)(param_1 + 0x24c) & 1) == 0)) goto LAB_00161608;
    }
    local_3e = *(byte *)(param_1 + 0x2a4);
    local_3f = *(byte *)(param_1 + 0x2a1);
    local_50[0] = *(uint *)(param_1 + 0x23c);
    local_40 = *(byte *)(param_1 + 0x29f);
    uVar7 = (uint)local_3f * (uint)local_3e;
    local_3d = (char)uVar7;
    local_48 = (ulong)(uVar7 & 0xff) * (ulong)local_50[0] + 7 >> 3;
    if (7 < (uVar7 & 0xff)) {
      local_48 = (ulong)local_50[0] * (ulong)(uVar7 >> 3 & 0x1f);
    }
    memcpy((void *)(*(long *)(param_1 + 0x260) + 1),param_2,local_48);
    if ((((*(char *)(param_1 + 0x29c) == '\0') || (5 < *(byte *)(param_1 + 0x29d))) ||
        ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0)) ||
       (png_do_write_interlace(local_50,*(long *)(param_1 + 0x260) + 1), local_50[0] != 0)) {
      if (*(int *)(param_1 + 0x16c) != 0) {
        png_do_write_transformations(param_1,local_50);
      }
      if ((local_3d != *(char *)(param_1 + 0x2a2)) || (local_3d != *(char *)(param_1 + 0x2a7))) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"internal write transform logic error");
      }
      if ((((*(byte *)(param_1 + 0x418) >> 2 & 1) != 0) && (*(char *)(param_1 + 0x41c) == '@')) &&
         ((local_40 >> 1 & 1) != 0)) {
        if (local_3f == 0x10) {
          if (local_40 == 2) {
            lVar10 = 6;
          }
          else {
            if (local_40 != 6) goto LAB_001616d4;
            lVar10 = 8;
          }
          if (local_50[0] != 0) {
            puVar9 = (ushort *)(*(long *)(param_1 + 0x260) + 3);
            uVar7 = local_50[0];
            do {
              uVar7 = uVar7 - 1;
              uVar3 = (uint)(*puVar9 >> 8) | (*puVar9 & 0xff00ff) << 8;
              iVar4 = ((uint)(puVar9[-1] >> 8) | (puVar9[-1] & 0xff00ff) << 8) - uVar3;
              iVar5 = ((uint)(puVar9[1] >> 8) | (puVar9[1] & 0xff00ff) << 8) - uVar3;
              *(char *)((long)puVar9 + -1) = (char)iVar4;
              *(char *)((long)puVar9 + 3) = (char)iVar5;
              *(char *)(puVar9 + -1) = (char)((uint)iVar4 >> 8);
              *(char *)(puVar9 + 1) = (char)((uint)iVar5 >> 8);
              puVar9 = (ushort *)((long)puVar9 + lVar10);
            } while (uVar7 != 0);
          }
        }
        else if (local_3f == 8) {
          if (local_40 == 2) {
            lVar10 = 3;
          }
          else {
            if (local_40 != 6) goto LAB_001616d4;
            lVar10 = 4;
          }
          if (local_50[0] != 0) {
            pcVar8 = (char *)(*(long *)(param_1 + 0x260) + 3);
            uVar7 = local_50[0];
            do {
              uVar7 = uVar7 - 1;
              pcVar8[-2] = pcVar8[-2] - pcVar8[-1];
              *pcVar8 = *pcVar8 - pcVar8[-1];
              pcVar8 = pcVar8 + lVar10;
            } while (uVar7 != 0);
          }
        }
      }
LAB_001616d4:
      if ((local_40 == 3) && (-1 < *(int *)(param_1 + 0x294))) {
        png_do_check_palette_indexes(param_1,local_50);
      }
      png_write_find_filter(param_1,local_50);
      if (*(code **)(param_1 + 0x340) != (code *)0x0) {
        (**(code **)(param_1 + 0x340))
                  (param_1,*(undefined4 *)(param_1 + 0x24c),*(undefined1 *)(param_1 + 0x29d));
      }
    }
    else {
      png_write_finish_row(param_1);
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
LAB_00161738:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016175c  png_write_image =====

void png_write_image(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  if (((param_1 != 0) && (iVar1 = png_set_interlace_handling(), 0 < iVar1)) &&
     (*(int *)(param_1 + 0x234) != 0)) {
    iVar3 = 0;
    uVar2 = 1;
    do {
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          png_write_row(param_1,*(undefined8 *)(param_2 + lVar4 * 8));
          uVar2 = *(uint *)(param_1 + 0x234);
          lVar4 = lVar4 + 1;
        } while ((uint)lVar4 < uVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  return;
}


// ===== 001617e8  png_set_flush =====

void png_set_flush(long param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x2d0) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  }
  return;
}


// ===== 001617f8  png_write_flush =====

void png_write_flush(long param_1)

{
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x24c) < *(uint *)(param_1 + 0x238))) {
    png_compress_IDAT(param_1,0,0,2);
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    png_flush(param_1);
    return;
  }
  return;
}


// ===== 00161844  png_destroy_write_struct =====

void png_destroy_write_struct(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    png_destroy_info_struct(lVar1);
    *param_1 = 0;
    if ((*(byte *)(lVar1 + 0x168) >> 1 & 1) != 0) {
      deflateEnd(lVar1 + 0x178);
    }
    png_free_buffer_list(lVar1,lVar1 + 0x1e8);
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x260));
    *(undefined8 *)(lVar1 + 0x260) = 0;
    png_free(lVar1,*(undefined8 *)(lVar1 + 600));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x268));
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x270));
    *(undefined8 *)(lVar1 + 600) = 0;
    *(undefined8 *)(lVar1 + 0x270) = 0;
    *(undefined8 *)(lVar1 + 0x268) = 0;
    png_free(lVar1,*(undefined8 *)(lVar1 + 0x400));
    *(undefined8 *)(lVar1 + 0x400) = 0;
    png_destroy_png_struct(lVar1);
    return;
  }
  return;
}


// ===== 001618f8  png_set_filter =====

void png_set_filter(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 uVar6;
  uint uVar7;
  
  uVar6 = (undefined1)param_3;
  if (param_1 == 0) {
    return;
  }
  bVar2 = 0;
  if (param_2 == 0x40) {
    bVar2 = *(byte *)(param_1 + 0x418) >> 2 & 1;
  }
  if ((param_2 != 0) && (bVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Unknown custom filter method");
  }
  uVar1 = param_3 & 0xff;
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      lVar4 = *(long *)(param_1 + 0x260);
      *(undefined1 *)(param_1 + 0x29e) = 8;
      goto joined_r0x00161988;
    }
    if (uVar1 == 1) {
      lVar4 = *(long *)(param_1 + 0x260);
      *(undefined1 *)(param_1 + 0x29e) = 0x10;
      goto joined_r0x00161988;
    }
    if (uVar1 == 2) {
      lVar4 = *(long *)(param_1 + 0x260);
      *(undefined1 *)(param_1 + 0x29e) = 0x20;
      goto joined_r0x00161988;
    }
  }
  else {
    if (uVar1 - 5 < 3) {
      png_app_error(param_1,"Unknown row filter for method 0");
      lVar4 = *(long *)(param_1 + 0x260);
      *(undefined1 *)(param_1 + 0x29e) = 8;
      goto joined_r0x00161988;
    }
    if (uVar1 == 3) {
      lVar4 = *(long *)(param_1 + 0x260);
      *(undefined1 *)(param_1 + 0x29e) = 0x40;
      goto joined_r0x00161988;
    }
    if (uVar1 == 4) {
      lVar4 = *(long *)(param_1 + 0x260);
      *(undefined1 *)(param_1 + 0x29e) = 0x80;
      goto joined_r0x00161988;
    }
  }
  lVar4 = *(long *)(param_1 + 0x260);
  *(undefined1 *)(param_1 + 0x29e) = uVar6;
joined_r0x00161988:
  if (lVar4 != 0) {
    uVar1 = param_3 & 0xffffff1f;
    if (*(int *)(param_1 + 0x234) != 1) {
      uVar1 = param_3;
    }
    uVar7 = uVar1 & 0xffffff2f;
    if (*(int *)(param_1 + 0x230) != 1) {
      uVar7 = uVar1;
    }
    if (((uVar7 & 0xe0) != 0) && (*(long *)(param_1 + 600) == 0)) {
      png_app_warning(param_1,"png_set_filter: UP/AVG/PAETH cannot be added after start");
      uVar7 = uVar7 & 0xffffff1f;
    }
    uVar6 = (undefined1)uVar7;
    uVar5 = (ulong)*(byte *)(param_1 + 0x2a1) * (ulong)*(byte *)(param_1 + 0x2a4);
    if ((uint)uVar5 < 8) {
      uVar5 = *(uint *)(param_1 + 0x230) * uVar5 + 7 >> 3;
      lVar4 = *(long *)(param_1 + 0x268);
    }
    else {
      uVar5 = (ulong)*(uint *)(param_1 + 0x230) * (uVar5 >> 3);
      lVar4 = *(long *)(param_1 + 0x268);
    }
    if (lVar4 == 0) {
      uVar3 = png_malloc(param_1,uVar5 + 1);
      *(undefined8 *)(param_1 + 0x268) = uVar3;
    }
    if ((1 < (uVar7 >> 4 & 1) + (uVar7 >> 5 & 1) + (uVar7 >> 6 & 1) + (uVar7 >> 7 & 1)) &&
       (*(long *)(param_1 + 0x270) == 0)) {
      uVar3 = png_malloc(param_1,uVar5 + 1);
      *(undefined8 *)(param_1 + 0x270) = uVar3;
    }
  }
  *(undefined1 *)(param_1 + 0x29e) = uVar6;
  return;
}


// ===== 00161afc  png_set_filter_heuristics =====

void png_set_filter_heuristics(void)

{
  return;
}


// ===== 00161b00  png_set_filter_heuristics_fixed =====

void png_set_filter_heuristics_fixed(void)

{
  return;
}


// ===== 00161b04  png_set_compression_level =====

void png_set_compression_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 500) = param_2;
  }
  return;
}


// ===== 00161b10  png_set_compression_mem_level =====

void png_set_compression_mem_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x200) = param_2;
  }
  return;
}


// ===== 00161b1c  png_set_compression_strategy =====

void png_set_compression_strategy(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x204) = param_2;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 1;
  }
  return;
}


// ===== 00161b34  png_set_compression_window_bits =====

void png_set_compression_window_bits(long param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 < 0x10) {
    if (7 < param_2) goto LAB_00161b80;
    param_2 = 8;
    pcVar1 = "Only compression windows >= 256 supported by PNG";
  }
  else {
    param_2 = 0xf;
    pcVar1 = "Only compression windows <= 32k supported by PNG";
  }
  png_warning(param_1,pcVar1);
LAB_00161b80:
  *(int *)(param_1 + 0x1fc) = param_2;
  return;
}


// ===== 00161b90  png_set_compression_method =====

void png_set_compression_method(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 8) {
      png_warning(param_1,"Only compression method 8 is supported by PNG");
    }
    *(int *)(param_1 + 0x1f8) = param_2;
  }
  return;
}


// ===== 00161bd8  png_set_text_compression_level =====

void png_set_text_compression_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x208) = param_2;
  }
  return;
}


// ===== 00161be4  png_set_text_compression_mem_level =====

void png_set_text_compression_mem_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x214) = param_2;
  }
  return;
}


// ===== 00161bf0  png_set_text_compression_strategy =====

void png_set_text_compression_strategy(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x218) = param_2;
  }
  return;
}


// ===== 00161bfc  png_set_text_compression_window_bits =====

void png_set_text_compression_window_bits(long param_1,int param_2)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 < 0x10) {
    if (7 < param_2) goto LAB_00161c48;
    param_2 = 8;
    pcVar1 = "Only compression windows >= 256 supported by PNG";
  }
  else {
    param_2 = 0xf;
    pcVar1 = "Only compression windows <= 32k supported by PNG";
  }
  png_warning(param_1,pcVar1);
LAB_00161c48:
  *(int *)(param_1 + 0x210) = param_2;
  return;
}


// ===== 00161c58  png_set_text_compression_method =====

void png_set_text_compression_method(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 != 8) {
      png_warning(param_1,"Only compression method 8 is supported by PNG");
    }
    *(int *)(param_1 + 0x20c) = param_2;
  }
  return;
}


// ===== 00161ca0  png_set_write_status_fn =====

void png_set_write_status_fn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x340) = param_2;
  }
  return;
}


// ===== 00161cac  png_set_write_user_transform_fn =====

void png_set_write_user_transform_fn(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x150) = param_2;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x100000;
  }
  return;
}


// ===== 00161cc4  png_write_png =====

/* WARNING: Type propagation algorithm not settling */

void png_write_png(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return;
  }
  if (-1 < *(char *)(param_2 + 9)) {
    png_app_error(param_1,"no rows for png_write_image to write");
    return;
  }
  png_write_info(param_1,param_2);
  if ((param_3 >> 5 & 1) != 0) {
    png_set_invert_mono(param_1);
  }
  if (((param_3 >> 6 & 1) != 0) && ((*(byte *)(param_2 + 8) >> 1 & 1) != 0)) {
    png_set_shift(param_1,param_2 + 0xb0);
  }
  if ((param_3 >> 2 & 1) != 0) {
    png_set_packing(param_1);
  }
  if ((param_3 >> 8 & 1) != 0) {
    png_set_swap_alpha(param_1);
  }
  if ((param_3 & 0x1800) != 0) {
    if ((param_3 >> 0xc & 1) == 0) {
      if ((param_3 >> 0xb & 1) == 0) goto LAB_00161dbc;
      uVar2 = 0;
    }
    else {
      if ((param_3 >> 0xb & 1) != 0) {
        png_app_error(param_1,"PNG_TRANSFORM_STRIP_FILLER: BEFORE+AFTER not supported");
      }
      uVar2 = 1;
    }
    png_set_filler(param_1,0,uVar2);
  }
LAB_00161dbc:
  if ((param_3 >> 7 & 1) != 0) {
    png_set_bgr(param_1);
  }
  if ((param_3 >> 9 & 1) != 0) {
    png_set_swap(param_1);
  }
  if ((param_3 >> 3 & 1) != 0) {
    png_set_packswap(param_1);
  }
  if ((param_3 >> 10 & 1) == 0) {
    lVar4 = *(long *)(param_2 + 0x160);
    iVar1 = png_set_interlace_handling(param_1);
  }
  else {
    png_set_invert_alpha(param_1);
    lVar4 = *(long *)(param_2 + 0x160);
    iVar1 = png_set_interlace_handling(param_1);
  }
  if ((0 < iVar1) && (*(int *)(param_1 + 0x234) != 0)) {
    iVar5 = 0;
    uVar3 = 1;
    do {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          png_write_row(param_1,*(undefined8 *)(lVar4 + lVar6 * 8));
          uVar3 = *(uint *)(param_1 + 0x234);
          lVar6 = lVar6 + 1;
        } while ((uint)lVar6 < uVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar1);
  }
  png_write_end(param_1,param_2);
  return;
}


// ===== 00161e8c  png_write_frame_head =====

void png_write_frame_head
               (long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined2 param_9,
               undefined1 param_10)

{
  if ((*(byte *)(param_2 + 10) >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"png_write_frame_head(): acTL not set");
  }
  png_write_reset(param_1);
  png_write_reinit(param_1,param_2,param_4,param_5);
  if ((*(int *)(param_1 + 0x44c) == 0) && ((*(byte *)(param_1 + 0x420) & 1) != 0)) {
    return;
  }
  png_write_fcTL(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


// ===== 00161f70  png_write_frame_tail =====

void png_write_frame_tail(long param_1)

{
  *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
  return;
}


// ===== 00161f80  png_image_write_to_memory =====

void png_image_write_to_memory
               (ulong param_1,long param_2,ulong *param_3,uint param_4,long param_5,uint param_6,
               undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  ulong uStack_68;
  ulong local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 1) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
        pcVar5 = "png_image_write_to_memory: incorrect PNG_IMAGE_VERSION";
LAB_001620b4:
        png_image_error(param_1,pcVar5);
        return;
      }
      goto LAB_001620d0;
    }
    if ((param_3 == (ulong *)0x0) || (param_5 == 0)) {
      if (*(long *)(lVar2 + 0x28) == local_58) {
        pcVar5 = "png_image_write_to_memory: invalid argument";
        goto LAB_001620b4;
      }
      goto LAB_001620d0;
    }
    if (param_2 == 0) {
      *param_3 = 0;
    }
    uVar4 = FUN_001620d4();
    if ((int)uVar4 != 0) {
      uStack_68 = *param_3;
      uStack_88 = 0;
      uStack_78 = 0;
      local_80 = 0;
      local_a0 = (ulong)param_6;
      local_90 = (ulong)param_4;
      local_60 = 0;
      local_b0 = param_1;
      lStack_a8 = param_5;
      uStack_98 = param_7;
      local_70 = param_2;
      uVar3 = png_safe_execute(param_1,FUN_00162214,&local_b0);
      uVar4 = (ulong)uVar3;
      png_image_free(param_1);
      if (uVar3 != 0) {
        if (param_2 != 0) {
          uVar1 = 0;
          if (local_60 <= *param_3) {
            uVar1 = uVar3;
          }
          uVar4 = (ulong)uVar1;
        }
        *param_3 = local_60;
      }
    }
  }
  param_1 = uVar4;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_001620d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 001620d4  FUN_001620d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001620d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = png_create_png_struct
                    ("1.6.44",param_1,PTR_png_safe_error_001a11e0,PTR_png_safe_warning_001a11e8,0,0,
                     0);
  uVar5 = _UNK_00129808;
  uVar4 = _DAT_00129800;
  uVar3 = _UNK_001294d8;
  uVar2 = _DAT_001294d0;
  uVar9 = DAT_00124498;
  if (lVar6 == 0) {
    local_40 = 0;
  }
  else {
    *(undefined4 *)(lVar6 + 0x218) = 0;
    *(undefined8 *)(lVar6 + 0x210) = uVar9;
    *(undefined8 *)(lVar6 + 0x1f8) = uVar5;
    *(undefined8 *)(lVar6 + 0x1f0) = uVar4;
    *(undefined8 *)(lVar6 + 0x208) = uVar3;
    *(undefined8 *)(lVar6 + 0x200) = uVar2;
    *(uint *)(lVar6 + 0x168) = *(uint *)(lVar6 + 0x168) | 0x200000;
    png_set_write_fn(lVar6,0,0,0);
    local_40 = lVar6;
    lVar7 = png_create_info_struct(lVar6);
    local_48 = lVar7;
    if (lVar7 != 0) {
      plVar8 = (long *)png_malloc_warn(lVar6,0x30);
      if (plVar8 != (long *)0x0) {
        *param_1 = plVar8;
        plVar8[3] = 0;
        plVar8[2] = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        *plVar8 = lVar6;
        plVar8[1] = lVar7;
        *(byte *)(plVar8 + 5) = *(byte *)(plVar8 + 5) | 1;
        uVar9 = 1;
        goto LAB_001621ec;
      }
      png_destroy_info_struct(lVar6,&local_48);
    }
    png_destroy_write_struct(&local_40,0);
  }
  uVar9 = png_image_error(param_1,"png_image_write_: out of memory");
LAB_001621ec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


// ===== 00162214  FUN_00162214 =====

void FUN_00162214(undefined8 *param_1)

{
  png_set_write_fn(**(undefined8 **)*param_1,param_1,FUN_00162fa8,FUN_00163000);
  FUN_00162388(param_1);
  return;
}


// ===== 00162258  png_image_write_to_stdio =====

void png_image_write_to_stdio
               (undefined8 *param_1,long param_2,uint param_3,long param_4,uint param_5,
               undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = param_1;
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 1) != 1) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
        pcVar4 = "png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION";
LAB_00162368:
        png_image_error(param_1,pcVar4);
        return;
      }
      goto LAB_00162384;
    }
    if ((param_2 == 0) || (param_4 == 0)) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
        pcVar4 = "png_image_write_to_stdio: invalid argument";
        goto LAB_00162368;
      }
      goto LAB_00162384;
    }
    puVar2 = (undefined8 *)FUN_001620d4();
    if ((int)puVar2 != 0) {
      local_60 = 0;
      *(long *)(*(long *)*param_1 + 0x140) = param_2;
      uStack_88 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      local_a0 = (ulong)param_5;
      local_90 = (ulong)param_3;
      local_b0 = param_1;
      lStack_a8 = param_4;
      uStack_98 = param_6;
      uVar3 = png_safe_execute(param_1,FUN_00162388,&local_b0);
      puVar2 = (undefined8 *)(uVar3 & 0xffffffff);
      png_image_free(param_1);
    }
  }
  param_1 = puVar2;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_00162384:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


// ===== 00162388  FUN_00162388 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00162388(undefined8 *param_1)

{
  ushort *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  long lVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  undefined1 uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  ulong uVar38;
  undefined8 *puVar39;
  ushort *puVar40;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 local_370;
  undefined1 local_36f;
  undefined1 local_36e [766];
  long local_70;
  
  lVar13 = tpidr_el0;
  local_70 = *(long *)(lVar13 + 0x28);
  plVar37 = (long *)*param_1;
  uVar5 = *(uint *)((long)plVar37 + 0x14);
  lVar35 = *(long *)*plVar37;
  if ((uVar5 & 0xc) == 4) {
    bVar14 = *(int *)(param_1 + 4) == 0;
  }
  else {
    bVar14 = false;
  }
  lVar36 = ((long *)*plVar37)[1];
  png_set_benign_errors(lVar35,0);
  uVar30 = *(uint *)((long)plVar37 + 0xc);
  uVar25 = 1;
  if ((*(uint *)((long)plVar37 + 0x14) & 8) == 0) {
    uVar25 = (*(uint *)((long)plVar37 + 0x14) & 3) + 1;
  }
  uVar28 = 0;
  if (uVar25 != 0) {
    uVar28 = 0x7fffffff / uVar25;
  }
  if (uVar28 < uVar30) {
                    /* WARNING: Subroutine does not return */
    png_error(*(undefined8 *)*plVar37,"image row stride too large");
  }
  uVar25 = uVar25 * uVar30;
  uVar28 = *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 2) == 0) {
    *(uint *)(param_1 + 2) = uVar25;
    uVar28 = uVar25;
  }
  uVar3 = -uVar28;
  if (-1 < (int)uVar28) {
    uVar3 = uVar28;
  }
  if (uVar3 < uVar25) {
                    /* WARNING: Subroutine does not return */
    png_error(*(undefined8 *)*plVar37,"supplied row stride too small");
  }
  uVar21 = (ulong)*(uint *)(plVar37 + 2);
  if ((uVar21 * uVar25 & 0xffffffff00000000) != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(*(undefined8 *)*plVar37,"memory image too large");
  }
  if ((uVar5 >> 3 & 1) == 0) {
    uVar26 = 0x10;
    if (!bVar14) {
      uVar26 = 8;
    }
    png_set_IHDR(lVar35,lVar36,uVar30,uVar21,uVar26,
                 (((uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1) << 0x1e) >> 0x1d,0,0,0);
    if (bVar14) goto LAB_00162490;
LAB_001629e8:
    if ((*(byte *)(plVar37 + 3) & 1) == 0) {
      png_set_sRGB(lVar35,lVar36,0);
      png_write_info(lVar35,lVar36);
    }
    else {
      png_set_gAMA_fixed(lVar35,lVar36,0xb18f);
      png_write_info(lVar35,lVar36);
    }
  }
  else {
    if ((param_1[3] == 0) || (uVar25 = *(uint *)((long)plVar37 + 0x1c), uVar25 == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(*(undefined8 *)*plVar37,"no color-map for color-mapped image");
    }
    if (uVar25 < 0x11) {
      if (uVar25 < 5) {
        uVar26 = 1;
        if (2 < uVar25) {
          uVar26 = 2;
        }
      }
      else {
        uVar26 = 4;
      }
    }
    else {
      uVar26 = 8;
    }
    png_set_IHDR(lVar35,lVar36,uVar30,uVar21,uVar26,3,0,0,0);
    puVar39 = (undefined8 *)*param_1;
    puVar40 = (ushort *)param_1[3];
    uVar30 = *(uint *)((long)puVar39 + 0x1c);
    uVar28 = *(uint *)((long)puVar39 + 0x14);
    uVar21 = (ulong)uVar28;
    uStack_468 = 0xffffffffffffffff;
    local_470 = 0xffffffffffffffff;
    uStack_458 = 0xffffffffffffffff;
    uStack_460 = 0xffffffffffffffff;
    uStack_448 = 0xffffffffffffffff;
    local_450 = 0xffffffffffffffff;
    uStack_438 = 0xffffffffffffffff;
    uStack_440 = 0xffffffffffffffff;
    uVar25 = uVar30;
    if (0xff < uVar30) {
      uVar25 = 0x100;
    }
    uVar38 = (ulong)uVar25;
    uStack_428 = 0xffffffffffffffff;
    local_430 = 0xffffffffffffffff;
    uStack_418 = 0xffffffffffffffff;
    uStack_420 = 0xffffffffffffffff;
    uStack_408 = 0xffffffffffffffff;
    local_410 = 0xffffffffffffffff;
    uStack_3f8 = 0xffffffffffffffff;
    uStack_400 = 0xffffffffffffffff;
    uStack_3e8 = 0xffffffffffffffff;
    local_3f0 = 0xffffffffffffffff;
    uStack_3d8 = 0xffffffffffffffff;
    uStack_3e0 = 0xffffffffffffffff;
    uStack_3c8 = 0xffffffffffffffff;
    local_3d0 = 0xffffffffffffffff;
    uStack_3b8 = 0xffffffffffffffff;
    uStack_3c0 = 0xffffffffffffffff;
    uStack_3a8 = 0xffffffffffffffff;
    local_3b0 = 0xffffffffffffffff;
    uStack_398 = 0xffffffffffffffff;
    uStack_3a0 = 0xffffffffffffffff;
    uStack_388 = 0xffffffffffffffff;
    local_390 = 0xffffffffffffffff;
    uStack_378 = 0xffffffffffffffff;
    uStack_380 = 0xffffffffffffffff;
    memset(&local_370,0,0x300);
    if (uVar30 != 0) {
      bVar15 = (uVar28 & 0x21) == 0x21;
      uVar34 = (ulong)(uVar28 >> 3) & 2;
      uVar33 = (ulong)bVar15;
      uVar22 = (uint)(uVar21 & 3);
      uVar3 = 0;
      if (!bVar15) {
        uVar3 = uVar22;
      }
      lVar27 = 1;
      if (bVar15) {
        lVar27 = 2;
      }
      uVar31 = uVar34 | uVar33;
      lVar29 = 0;
      if (!bVar15) {
        lVar29 = 3;
      }
      if ((uVar28 >> 2 & 1) == 0) {
        uVar34 = 0;
        uVar30 = 0;
        lVar2 = (uVar21 & 3) + 1;
        puVar32 = local_36e;
LAB_00162658:
        do {
          if (uVar22 == 3) {
            cVar6 = *(char *)((long)puVar40 + lVar29);
            *(char *)((long)&local_470 + uVar34) = cVar6;
            if (cVar6 != -1) {
              uVar30 = (int)uVar34 + 1;
            }
          }
          else if (uVar22 != 2) {
            if ((uVar22 == 1) &&
               (cVar6 = *(char *)((long)puVar40 + (uVar33 ^ 1)),
               *(char *)((long)&local_470 + uVar34) = cVar6, cVar6 != -1)) {
              uVar30 = (int)uVar34 + 1;
            }
            uVar23 = *(undefined1 *)((long)puVar40 + uVar33);
            puVar32[-1] = uVar23;
            puVar32[-2] = uVar23;
            *puVar32 = uVar23;
            uVar34 = uVar34 + 1;
            puVar40 = (ushort *)((long)puVar40 + lVar2);
            puVar32 = puVar32 + 3;
            if (uVar38 == uVar34) break;
            goto LAB_00162658;
          }
          *puVar32 = *(undefined1 *)((long)puVar40 + (uVar31 ^ 2));
          puVar32[-1] = *(undefined1 *)((long)puVar40 + lVar27);
          puVar32[-2] = *(undefined1 *)((long)puVar40 + uVar31);
          uVar34 = uVar34 + 1;
          puVar40 = (ushort *)((long)puVar40 + lVar2);
          puVar32 = puVar32 + 3;
        } while (uVar38 != uVar34);
      }
      else if ((uVar28 & 1) == 0) {
        if (uVar22 < 2) {
          puVar32 = local_36e;
          uVar33 = uVar38;
          do {
            uVar9 = *puVar40;
            uVar33 = uVar33 - 1;
            puVar40 = puVar40 + (uVar21 & 3) + 1;
            uVar34 = (ulong)uVar9 * 0xff >> 0xf;
            uVar23 = (undefined1)
                     ((uint)*(ushort *)(PTR_png_sRGB_base_001a11c8 + uVar34 * 2) +
                      (((uint)((ulong)uVar9 * 0xff) & 0x7fff) *
                       (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar34] >> 0xc) >> 8);
            puVar32[-1] = uVar23;
            puVar32[-2] = uVar23;
            *puVar32 = uVar23;
            puVar32 = puVar32 + 3;
          } while (uVar33 != 0);
        }
        else {
          puVar32 = &local_36f;
          uVar33 = uVar38;
          do {
            puVar1 = puVar40 + ((uint)uVar34 ^ 2);
            uVar9 = puVar40[1];
            uVar33 = uVar33 - 1;
            uVar10 = puVar40[((ulong)(uVar28 >> 4) & 1) * 2];
            puVar40 = puVar40 + (uVar21 & 3) + 1;
            uVar31 = (ulong)*puVar1 * 0xff >> 0xf;
            uVar18 = (ulong)uVar9 * 0xff >> 0xf;
            uVar20 = (ulong)uVar10 * 0xff >> 0xf;
            bVar7 = PTR_png_sRGB_delta_001a11d0[uVar18];
            uVar11 = *(ushort *)(PTR_png_sRGB_base_001a11c8 + uVar18 * 2);
            bVar8 = PTR_png_sRGB_delta_001a11d0[uVar20];
            uVar12 = *(ushort *)(PTR_png_sRGB_base_001a11c8 + uVar20 * 2);
            puVar32[1] = (char)((uint)*(ushort *)(PTR_png_sRGB_base_001a11c8 + uVar31 * 2) +
                                (((uint)((ulong)*puVar1 * 0xff) & 0x7fff) *
                                 (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar31] >> 0xc) >> 8);
            *puVar32 = (char)((uint)uVar11 +
                              (((uint)((ulong)uVar9 * 0xff) & 0x7fff) * (uint)bVar7 >> 0xc) >> 8);
            puVar32[-1] = (char)((uint)uVar12 +
                                 (((uint)((ulong)uVar10 * 0xff) & 0x7fff) * (uint)bVar8 >> 0xc) >> 8
                                );
            puVar32 = puVar32 + 3;
          } while (uVar33 != 0);
        }
        uVar30 = 0;
      }
      else if (uVar22 < 2) {
        uVar34 = 0;
        uVar30 = 0;
        puVar32 = local_36e;
        do {
          uVar9 = puVar40[uVar3];
          uVar28 = 0;
          if (uVar9 != 0) {
            uVar28 = ((uVar9 >> 1) + 0x7f7f8080) / (uint)uVar9;
          }
          uVar19 = (uint)uVar9;
          uVar22 = ((uint)uVar9 * 0x100 - uVar19) + 0x807f;
          uVar24 = uVar22 >> 0x10;
          *(char *)((long)&local_470 + uVar34) = (char)(uVar22 >> 0x10);
          uVar34 = uVar34 + 1;
          uVar22 = 0;
          if (uVar24 != 0xff) {
            uVar22 = uVar28;
          }
          uVar28 = 0;
          if (uVar24 != 0) {
            uVar28 = uVar22;
          }
          uVar23 = 0xff;
          if (uVar24 != 0xff) {
            uVar30 = (uint)uVar34;
          }
          if (0x7f < uVar19) {
            uVar9 = puVar40[uVar33];
            uVar22 = (uint)uVar9;
            if (uVar22 < uVar19) {
              if (uVar22 == 0) {
                uVar23 = 0;
              }
              else {
                uVar28 = uVar28 * uVar9 + 0x40 >> 7;
                if (0xff7e < uVar19) {
                  uVar28 = (uint)uVar9 * 0x100 - uVar22;
                }
                uVar23 = (undefined1)
                         ((uint)*(ushort *)(PTR_png_sRGB_base_001a11c8 + (ulong)(uVar28 >> 0xf) * 2)
                          + ((uVar28 & 0x7fff) *
                             (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar28 >> 0xf] >> 0xc) >> 8);
              }
            }
          }
          puVar40 = puVar40 + (uVar21 & 3) + 1;
          puVar32[-1] = uVar23;
          puVar32[-2] = uVar23;
          *puVar32 = uVar23;
          puVar32 = puVar32 + 3;
        } while (uVar38 != uVar34);
      }
      else {
        uVar33 = 0;
        uVar30 = 0;
        puVar32 = local_36e;
        do {
          uVar9 = puVar40[uVar3];
          uVar28 = 0;
          if (uVar9 != 0) {
            uVar28 = ((uVar9 >> 1) + 0x7f7f8080) / (uint)uVar9;
          }
          uVar19 = (uint)uVar9;
          uVar22 = ((uint)uVar9 * 0x100 - uVar19) + 0x807f;
          uVar24 = uVar22 >> 0x10;
          *(char *)((long)&local_470 + uVar33) = (char)(uVar22 >> 0x10);
          uVar33 = uVar33 + 1;
          uVar22 = 0;
          if (uVar24 != 0xff) {
            uVar22 = uVar28;
          }
          uVar28 = 0;
          if (uVar24 != 0) {
            uVar28 = uVar22;
          }
          uVar23 = 0xff;
          if (uVar24 != 0xff) {
            uVar30 = (uint)uVar33;
          }
          uVar22 = (uint)uVar9;
          if (uVar19 < 0x80) {
LAB_0016289c:
            *puVar32 = uVar23;
          }
          else {
            uVar10 = puVar40[uVar31 ^ 2];
            if (uVar19 <= uVar10) goto LAB_0016289c;
            if (uVar10 != 0) {
              uVar24 = uVar28 * uVar10 + 0x40 >> 7;
              if (0xff7e < uVar19) {
                uVar24 = (uint)uVar10 * 0x100 - (uint)uVar10;
              }
              uVar23 = (undefined1)
                       ((uint)*(ushort *)(PTR_png_sRGB_base_001a11c8 + (ulong)(uVar24 >> 0xf) * 2) +
                        ((uVar24 & 0x7fff) * (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar24 >> 0xf]
                        >> 0xc) >> 8);
              goto LAB_0016289c;
            }
            *puVar32 = 0;
          }
          uVar23 = 0xff;
          if (0x7f < uVar19) {
            uVar23 = 0xff;
            uVar10 = puVar40[lVar27];
            if (uVar10 < uVar22) {
              if (uVar10 == 0) {
                uVar23 = 0;
              }
              else {
                uVar24 = uVar28 * uVar10 + 0x40 >> 7;
                if (0xff7e < uVar22) {
                  uVar24 = (uint)uVar10 * 0x100 - (uint)uVar10;
                }
                uVar23 = (undefined1)
                         ((uint)*(ushort *)(PTR_png_sRGB_base_001a11c8 + (ulong)(uVar24 >> 0xf) * 2)
                          + ((uVar24 & 0x7fff) *
                             (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar24 >> 0xf] >> 0xc) >> 8);
              }
            }
          }
          puVar32[-1] = uVar23;
          uVar23 = 0xff;
          if (0x7f < uVar22) {
            uVar10 = puVar40[uVar31];
            uVar24 = (uint)uVar10;
            if (uVar24 < uVar22) {
              if (uVar24 == 0) {
                uVar23 = 0;
              }
              else {
                uVar28 = uVar28 * uVar10 + 0x40 >> 7;
                if (0xff7e < uVar9) {
                  uVar28 = (uint)uVar10 * 0x100 - uVar24;
                }
                uVar23 = (undefined1)
                         ((uint)*(ushort *)(PTR_png_sRGB_base_001a11c8 + (ulong)(uVar28 >> 0xf) * 2)
                          + ((uVar28 & 0x7fff) *
                             (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar28 >> 0xf] >> 0xc) >> 8);
              }
            }
          }
          puVar40 = puVar40 + (uVar21 & 3) + 1;
          puVar32[-2] = uVar23;
          puVar32 = puVar32 + 3;
        } while (uVar38 != uVar33);
      }
    }
    png_set_PLTE(*(undefined8 *)*puVar39,((undefined8 *)*puVar39)[1],&local_370,uVar38);
    if (0 < (int)uVar30) {
      png_set_tRNS(*(undefined8 *)*puVar39,((undefined8 *)*puVar39)[1],&local_470,uVar30,0);
    }
    *(uint *)((long)puVar39 + 0x1c) = uVar25;
    if (!bVar14) goto LAB_001629e8;
LAB_00162490:
    png_set_gAMA_fixed(lVar35,lVar36,100000);
    if ((*(byte *)(plVar37 + 3) & 1) == 0) {
      png_set_cHRM_fixed(lVar35,lVar36,0x7a26,0x8084,64000,33000,30000,60000,15000,6000);
    }
    png_write_info(lVar35,lVar36);
    png_set_swap(lVar35);
  }
  uVar25 = uVar5;
  if ((uVar5 >> 4 & 1) != 0) {
    if ((uVar5 & 10) == 2) {
      png_set_bgr(lVar35);
    }
    uVar25 = uVar5 & 0xffffffef;
  }
  if ((uVar5 >> 5 & 1) != 0) {
    if (((uVar5 >> 3 & 1) == 0) && ((uVar25 & 1) != 0)) {
      png_set_swap_alpha(lVar35);
    }
    uVar25 = uVar25 & 0xffffffdf;
  }
  if (((uVar5 >> 3 & 1) != 0) && (*(uint *)((long)plVar37 + 0x1c) < 0x11)) {
    png_set_packing(lVar35);
  }
  if (0xf < uVar25) {
                    /* WARNING: Subroutine does not return */
    png_error(lVar35,"png_write_image: unsupported transformation");
  }
  lVar27 = param_1[1];
  lVar29 = (long)*(int *)(param_1 + 2) << ((uVar5 & 0xc) == 4);
  if (*(int *)(param_1 + 2) < 0) {
    lVar27 = lVar27 - lVar29 * (ulong)((int)plVar37[2] - 1);
  }
  param_1[5] = lVar27;
  param_1[6] = lVar29;
  if (((*(byte *)(plVar37 + 3) >> 1 & 1) != 0) && (lVar35 != 0)) {
    *(undefined1 *)(lVar35 + 0x29e) = 8;
    if (*(long *)(lVar35 + 0x260) != 0) {
      uVar21 = (ulong)*(byte *)(lVar35 + 0x2a1) * (ulong)*(byte *)(lVar35 + 0x2a4);
      if ((uint)uVar21 < 8) {
        uVar21 = *(uint *)(lVar35 + 0x230) * uVar21 + 7 >> 3;
        lVar27 = *(long *)(lVar35 + 0x268);
      }
      else {
        uVar21 = (uVar21 >> 3) * (ulong)*(uint *)(lVar35 + 0x230);
        lVar27 = *(long *)(lVar35 + 0x268);
      }
      if (lVar27 == 0) {
        uVar17 = png_malloc(lVar35,uVar21 + 1);
        *(undefined8 *)(lVar35 + 0x268) = uVar17;
      }
    }
    *(undefined1 *)(lVar35 + 0x29e) = 0;
    *(undefined4 *)(lVar35 + 500) = 3;
  }
  if (((uVar5 & 0xd) == 5) || (((uVar5 >> 3 & 1) == 0 && (*(int *)(param_1 + 4) != 0)))) {
    uVar17 = png_get_rowbytes(lVar35,lVar36);
    uVar17 = png_malloc(lVar35,uVar17);
    param_1[7] = uVar17;
    pcVar4 = FUN_00163004;
    if (!bVar14) {
      pcVar4 = FUN_001631fc;
    }
    iVar16 = png_safe_execute(plVar37,pcVar4,param_1);
    param_1[7] = 0;
    png_free(lVar35,uVar17);
    if (iVar16 == 0) {
      uVar17 = 0;
      goto LAB_00162be4;
    }
  }
  else {
    iVar16 = (int)plVar37[2];
    if (iVar16 != 0) {
      lVar27 = param_1[5];
      lVar29 = param_1[6];
      do {
        png_write_row(lVar35,lVar27);
        iVar16 = iVar16 + -1;
        lVar27 = lVar27 + lVar29;
      } while (iVar16 != 0);
    }
  }
  png_write_end(lVar35,lVar36);
  uVar17 = 1;
LAB_00162be4:
  if (*(long *)(lVar13 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar17);
}


// ===== 00162d68  png_image_write_to_file =====

void png_image_write_to_file
               (char *param_1,char *param_2,uint param_3,long param_4,uint param_5,
               undefined8 param_6)

{
  long lVar1;
  int iVar2;
  FILE *__stream;
  char *pcVar3;
  int *piVar4;
  char *local_c0;
  long lStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1 == (char *)0x0) {
LAB_00162f48:
    pcVar3 = param_1;
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
    pcVar3 = param_1;
    if (*(int *)(param_1 + 8) != 1) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
        pcVar3 = "png_image_write_to_file: incorrect PNG_IMAGE_VERSION";
LAB_00162ed0:
        png_image_error(param_1,pcVar3);
        return;
      }
      goto LAB_00162fa4;
    }
    if ((param_2 == (char *)0x0) || (param_4 == 0)) {
      if (*(long *)(lVar1 + 0x28) == local_68) {
        pcVar3 = "png_image_write_to_file: invalid argument";
        goto LAB_00162ed0;
      }
      goto LAB_00162fa4;
    }
    __stream = fopen(param_2,"wb");
    if (__stream == (FILE *)0x0) {
      piVar4 = (int *)__errno();
      pcVar3 = strerror(*piVar4);
      if (*(long *)(lVar1 + 0x28) == local_68) goto LAB_00162ed0;
      goto LAB_00162fa4;
    }
    if (*(int *)(param_1 + 8) == 1) {
      iVar2 = FUN_001620d4();
      if (iVar2 != 0) {
        local_70 = 0;
        *(FILE **)(**(long **)param_1 + 0x140) = __stream;
        uStack_98 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        local_b0 = (ulong)param_5;
        local_a0 = (ulong)param_3;
        local_c0 = param_1;
        lStack_b8 = param_4;
        uStack_a8 = param_6;
        iVar2 = png_safe_execute(param_1,FUN_00162388,&local_c0);
        png_image_free(param_1);
        goto joined_r0x00162f00;
      }
    }
    else {
      iVar2 = png_image_error(param_1,"png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION");
joined_r0x00162f00:
      if (iVar2 != 0) {
        iVar2 = fflush(__stream);
        if ((iVar2 == 0) && (iVar2 = ferror(__stream), iVar2 == 0)) {
          iVar2 = fclose(__stream);
          if (iVar2 == 0) {
            pcVar3 = (char *)0x1;
            if (*(long *)(lVar1 + 0x28) == local_68) {
              return;
            }
            goto LAB_00162fa4;
          }
          piVar4 = (int *)__errno();
          iVar2 = *piVar4;
        }
        else {
          piVar4 = (int *)__errno();
          iVar2 = *piVar4;
          fclose(__stream);
        }
        remove(param_2);
        pcVar3 = strerror(iVar2);
        param_1 = (char *)png_image_error(param_1,pcVar3);
        goto LAB_00162f48;
      }
    }
    fclose(__stream);
    remove(param_2);
    pcVar3 = (char *)0x0;
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
LAB_00162fa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3);
}


// ===== 00162fa8  FUN_00162fa8 =====

void FUN_00162fa8(long param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x140);
  uVar1 = *(ulong *)(lVar2 + 0x50);
  if (!CARRY8(uVar1,param_3)) {
    if (param_3 != 0) {
      if (uVar1 + param_3 <= *(ulong *)(lVar2 + 0x48)) {
        memcpy((void *)(*(long *)(lVar2 + 0x40) + uVar1),param_2,param_3);
      }
      *(ulong *)(lVar2 + 0x50) = uVar1 + param_3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"png_image_write_to_memory: PNG too big");
}


// ===== 00163000  FUN_00163000 =====

void FUN_00163000(void)

{
  return;
}


// ===== 00163004  FUN_00163004 =====

undefined8 FUN_00163004(long *param_1)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  ushort uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ushort uVar10;
  uint uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ushort *puVar16;
  
  puVar4 = (undefined8 *)*param_1;
  uVar11 = *(uint *)((long)puVar4 + 0x14);
  uVar12 = *(undefined8 *)*puVar4;
  if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(uVar12,"png_write_image: internal call error");
  }
  uVar15 = (ulong)uVar11 & 2;
  uVar9 = (ulong)uVar11 & 0x20;
  iVar13 = *(int *)(puVar4 + 2);
  uVar7 = uVar15 | 1;
  if ((int)uVar9 != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  if (iVar13 != 0) {
    iVar14 = (int)uVar15;
    uVar2 = *(int *)((long)puVar4 + 0xc) * (iVar14 + 2);
    if (uVar2 == 0) {
      do {
        png_write_row(uVar12,param_1[7]);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    else {
      puVar1 = (ushort *)(param_1[7] + (uVar9 >> 4));
      puVar5 = (ushort *)(param_1[5] + ((ulong)(uVar11 >> 5) & 1) * 2);
      puVar3 = puVar1;
      puVar16 = puVar5;
      do {
        do {
          uVar6 = puVar5[uVar7];
          puVar3[uVar7] = uVar6;
          if ((ushort)(uVar6 - 1) < 0xfffe) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = (uVar6 >> 1 | 0x7fff8000) / (uint)uVar6;
            }
            uVar11 = (uint)*puVar5;
            if (*puVar5 < uVar6) {
LAB_0016310c:
              if (uVar11 != 0) {
                uVar11 = uVar8 * uVar11 + 0x4000 >> 0xf;
              }
            }
            else {
LAB_00163134:
              uVar11 = 0xffff;
            }
            *puVar3 = (ushort)uVar11;
            if (iVar14 != 0) {
              uVar10 = puVar5[1];
              if (uVar10 < uVar6) {
                if (uVar10 != 0) {
                  uVar10 = (ushort)(uVar8 * uVar10 + 0x4000 >> 0xf);
                }
                puVar3[1] = uVar10;
                uVar10 = puVar5[2];
              }
              else {
                puVar3[1] = 0xffff;
                uVar10 = puVar5[2];
              }
              if (uVar10 < uVar6) {
                if (uVar10 == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (ushort)(uVar8 * uVar10 + 0x4000 >> 0xf);
                }
              }
              else {
                uVar6 = 0xffff;
              }
LAB_001630c8:
              puVar5 = puVar5 + 2;
              puVar3 = puVar3 + 2;
              *puVar3 = uVar6;
            }
          }
          else {
            if (uVar6 != 0xffff) {
              uVar8 = 0;
              uVar11 = (uint)*puVar5;
              if (uVar6 <= uVar11) goto LAB_00163134;
              goto LAB_0016310c;
            }
            *puVar3 = *puVar5;
            if (iVar14 != 0) {
              puVar3[1] = puVar5[1];
              uVar6 = puVar5[2];
              goto LAB_001630c8;
            }
          }
          puVar3 = puVar3 + 2;
          puVar5 = puVar5 + 2;
        } while (puVar3 < puVar1 + uVar2);
        png_write_row(uVar12,param_1[7]);
        iVar13 = iVar13 + -1;
        puVar5 = (ushort *)((long)puVar16 + (param_1[6] & 0xfffeU));
        puVar3 = puVar1;
        puVar16 = puVar5;
      } while (iVar13 != 0);
    }
  }
  return 1;
}


// ===== 001631fc  FUN_001631fc =====

undefined8 FUN_001631fc(long *param_1)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ushort *puVar16;
  long lVar17;
  long lVar18;
  undefined1 *__s;
  int iVar19;
  int iVar20;
  undefined8 uVar21;
  ushort *puVar22;
  
  puVar6 = PTR_png_sRGB_delta_001a11d0;
  puVar5 = PTR_png_sRGB_base_001a11c8;
  puVar11 = (undefined8 *)*param_1;
  lVar17 = param_1[5];
  lVar18 = param_1[7];
  iVar19 = *(int *)(puVar11 + 2);
  uVar13 = *(uint *)((long)puVar11 + 0x14);
  uVar21 = *(undefined8 *)*puVar11;
  uVar14 = (ulong)uVar13 & 2 | 1;
  if ((uVar13 & 1) == 0) {
    if (iVar19 != 0) {
      iVar20 = *(int *)((long)puVar11 + 0xc);
      if (iVar20 == 0) {
        do {
          png_write_row(uVar21,lVar18);
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      else {
        do {
          lVar8 = 0;
          do {
            uVar9 = (ulong)*(ushort *)(lVar17 + lVar8 * 2) * 0xff;
            uVar15 = uVar9 >> 0xf;
            *(char *)(lVar18 + lVar8) =
                 (char)((uint)*(ushort *)(puVar5 + uVar15 * 2) +
                        (((uint)uVar9 & 0x7fff) * (uint)(byte)puVar6[uVar15] >> 0xc) >> 8);
            lVar8 = lVar8 + 1;
          } while ((ulong)(lVar18 + lVar8) < lVar18 + (ulong)(uint)(iVar20 * (int)uVar14));
          png_write_row(uVar21,lVar18);
          iVar19 = iVar19 + -1;
          lVar17 = lVar17 + (param_1[6] & 0xfffeU);
        } while (iVar19 != 0);
      }
    }
  }
  else {
    if ((uVar13 & 0x20) != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    if (iVar19 != 0) {
      iVar20 = (int)((ulong)uVar13 & 2);
      uVar4 = *(int *)((long)puVar11 + 0xc) * (iVar20 + 2);
      if (uVar4 == 0) {
        do {
          png_write_row(uVar21,param_1[7]);
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
      }
      else {
        uVar15 = (ulong)(uVar13 >> 5) & 1;
        uVar9 = (ulong)(uVar13 >> 1 & 1);
        puVar1 = (undefined1 *)(lVar18 + uVar15);
        puVar22 = (ushort *)(lVar17 + uVar15 * 2);
        __s = puVar1;
        puVar16 = puVar22;
        do {
          do {
            uVar2 = puVar22[uVar14];
            uVar10 = 0;
            uVar13 = (uint)uVar2 * 0xff + 0x807f;
            uVar3 = uVar13 >> 0x10;
            __s[uVar14] = (char)(uVar13 >> 0x10);
            uVar13 = (uint)uVar2;
            uVar7 = (uint)uVar2;
            if ((uVar3 != 0) && (uVar3 != 0xff)) {
              uVar10 = 0;
              if (uVar7 != 0) {
                uVar10 = ((uVar2 >> 1) + 0x7f7f8080) / uVar13;
              }
            }
            if (uVar13 < 0x80) {
              memset(__s,0xff,uVar9 << 1 | 1);
              puVar22 = puVar22 + uVar9 * 2;
              __s = __s + uVar9 * 2;
            }
            else {
              uVar2 = *puVar22;
              uVar12 = (undefined1)uVar2;
              if (uVar2 < uVar7) {
                if (uVar2 != 0) {
                  uVar3 = uVar10 * uVar2 + 0x40 >> 7;
                  if (0xff7e < uVar13) {
                    uVar3 = (uint)uVar2 * 0xff;
                  }
                  uVar12 = (undefined1)
                           ((uint)*(ushort *)
                                   (PTR_png_sRGB_base_001a11c8 + (ulong)(uVar3 >> 0xf) * 2) +
                            ((uVar3 & 0x7fff) *
                             (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar3 >> 0xf] >> 0xc) >> 8);
                }
              }
              else {
                uVar12 = 0xff;
              }
              *__s = uVar12;
              if (iVar20 != 0) {
                uVar2 = puVar22[1];
                uVar12 = (undefined1)uVar2;
                if (uVar2 < uVar13) {
                  if (uVar2 != 0) {
                    uVar13 = uVar10 * uVar2 + 0x40 >> 7;
                    if (0xff7e < uVar7) {
                      uVar13 = (uint)uVar2 * 0xff;
                    }
                    uVar12 = (undefined1)
                             ((uint)*(ushort *)
                                     (PTR_png_sRGB_base_001a11c8 + (ulong)(uVar13 >> 0xf) * 2) +
                              ((uVar13 & 0x7fff) *
                               (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar13 >> 0xf] >> 0xc) >> 8);
                  }
                  __s[1] = uVar12;
                  uVar13 = (uint)puVar22[2];
                  if (uVar7 <= puVar22[2]) goto LAB_00163524;
LAB_001634bc:
                  if (uVar13 == 0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar3 = uVar10 * uVar13 + 0x40 >> 7;
                    if (0xff7e < uVar7) {
                      uVar3 = uVar13 * 0xff;
                    }
                    uVar12 = (undefined1)
                             ((uint)*(ushort *)
                                     (PTR_png_sRGB_base_001a11c8 + (ulong)(uVar3 >> 0xf) * 2) +
                              ((uVar3 & 0x7fff) *
                               (uint)(byte)PTR_png_sRGB_delta_001a11d0[uVar3 >> 0xf] >> 0xc) >> 8);
                  }
                }
                else {
                  __s[1] = 0xff;
                  uVar13 = (uint)puVar22[2];
                  if (uVar13 < uVar7) goto LAB_001634bc;
LAB_00163524:
                  uVar12 = 0xff;
                }
                puVar22 = puVar22 + 2;
                __s = __s + 2;
                *__s = uVar12;
              }
            }
            __s = __s + 2;
            puVar22 = puVar22 + 2;
          } while (__s < puVar1 + uVar4);
          png_write_row(uVar21,param_1[7]);
          iVar19 = iVar19 + -1;
          puVar22 = (ushort *)((long)puVar16 + (param_1[6] & 0xfffeU));
          __s = puVar1;
          puVar16 = puVar22;
        } while (iVar19 != 0);
      }
    }
  }
  return 1;
}


// ===== 00163574  png_write_data =====

void png_write_data(long param_1)

{
  if (*(code **)(param_1 + 0x130) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0016357c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x130))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Call to NULL write function");
}


// ===== 00163594  png_default_write_data =====

void png_default_write_data(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if ((param_1 != 0) &&
     (sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x140)), sVar1 != param_3)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Write Error");
  }
  return;
}


// ===== 001635e0  png_flush =====

void png_flush(long param_1)

{
  if (*(code **)(param_1 + 0x2c8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001635e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x2c8))();
    return;
  }
  return;
}


// ===== 001635f0  png_default_flush =====

int png_default_flush(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = fflush(*(FILE **)(param_1 + 0x140));
    return iVar1;
  }
  return 0;
}


// ===== 00163600  png_set_write_fn =====

void png_set_write_fn(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x140) = param_2;
    puVar2 = PTR_png_default_flush_001a1200;
    puVar1 = PTR_png_default_write_data_001a11f8;
    if (param_3 != (undefined *)0x0) {
      puVar1 = param_3;
    }
    *(undefined **)(param_1 + 0x130) = puVar1;
    if (param_4 != (undefined *)0x0) {
      puVar2 = param_4;
    }
    *(undefined **)(param_1 + 0x2c8) = puVar2;
    if (*(long *)(param_1 + 0x138) != 0) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
      return;
    }
  }
  return;
}


// ===== 0016364c  png_do_write_transformations =====

void png_do_write_transformations(long param_1,uint *param_2)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort *__s;
  uint uVar12;
  size_t __n;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  size_t sVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  byte *pbVar29;
  ulong uVar30;
  byte bVar31;
  uint uVar32;
  uint uVar33;
  undefined1 uVar34;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined4 uVar35;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined8 uVar36;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  uint local_58 [4];
  uint local_48 [4];
  long local_38;
  byte *pbVar11;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  if (param_1 != 0) {
    uVar19 = *(uint *)(param_1 + 0x16c);
    if (((uVar19 >> 0x14 & 1) != 0) && (*(code **)(param_1 + 0x150) != (code *)0x0)) {
      (**(code **)(param_1 + 0x150))(param_1,param_2,*(long *)(param_1 + 0x260) + 1);
      uVar19 = *(uint *)(param_1 + 0x16c);
    }
    if ((uVar19 >> 0xf & 1) != 0) {
      png_do_strip_channel
                (param_2,*(long *)(param_1 + 0x260) + 1,
                 (*(uint *)(param_1 + 0x168) >> 7 ^ 0xffffffff) & 1);
      uVar19 = *(uint *)(param_1 + 0x16c);
    }
    if ((uVar19 >> 0x10 & 1) != 0) {
      png_do_packswap(param_2,*(long *)(param_1 + 0x260) + 1);
      uVar19 = *(uint *)(param_1 + 0x16c);
    }
    if ((((uVar19 >> 2 & 1) != 0) && (*(char *)((long)param_2 + 0x11) == '\b')) &&
       (*(char *)((long)param_2 + 0x12) == '\x01')) {
      bVar27 = *(byte *)(param_1 + 0x2a0);
      pbVar15 = (byte *)(*(long *)(param_1 + 0x260) + 1);
      if (bVar27 == 4) {
        pbVar18 = pbVar15;
        for (uVar19 = *param_2; uVar19 != 0; uVar19 = uVar19 - 2) {
          bVar26 = *pbVar15;
          if (uVar19 == 1) {
            *pbVar18 = bVar26 << 4;
            break;
          }
          pbVar29 = pbVar15 + 1;
          pbVar15 = pbVar15 + 2;
          *pbVar18 = *pbVar29 & 0xf | bVar26 << 4;
          pbVar18 = pbVar18 + 1;
        }
      }
      else if (bVar27 == 2) {
        uVar19 = *param_2;
        if (uVar19 != 0) {
          lVar22 = 0;
          lVar24 = 0;
          iVar17 = -uVar19;
          do {
            pbVar18 = pbVar15 + lVar24;
            iVar20 = (int)lVar24;
            bVar26 = *pbVar18 << 6;
            if (((iVar17 + iVar20 == -1) ||
                (bVar26 = (byte)((pbVar18[1] & 3) << 4) | bVar26, iVar17 + iVar20 == -2)) ||
               (bVar26 = (byte)((pbVar18[2] & 3) << 2) | bVar26, iVar17 + iVar20 == -3)) {
              pbVar15[lVar22] = bVar26;
              break;
            }
            lVar24 = lVar24 + 4;
            pbVar15[lVar22] = pbVar18[3] & 3 | bVar26;
            lVar22 = lVar22 + 1;
          } while ((uint)lVar24 != uVar19);
        }
      }
      else if ((bVar27 == 1) && (uVar19 = *param_2, uVar19 != 0)) {
        lVar22 = 0;
        lVar24 = 0;
        iVar17 = -uVar19;
        do {
          pbVar18 = pbVar15 + lVar24;
          bVar26 = *pbVar18;
          if (bVar26 != 0) {
            bVar26 = 0x80;
          }
          iVar20 = (int)lVar24;
          if (iVar17 + iVar20 == -1) {
LAB_001638e4:
            pbVar15[lVar22] = bVar26;
            break;
          }
          bVar31 = pbVar18[1];
          if (bVar31 != 0) {
            bVar31 = 0x40;
          }
          bVar26 = bVar31 | bVar26;
          if (iVar17 + iVar20 == -2) goto LAB_001638e4;
          bVar31 = pbVar18[2];
          if (bVar31 != 0) {
            bVar31 = 0x20;
          }
          bVar26 = bVar31 | bVar26;
          if (iVar17 + iVar20 == -3) goto LAB_001638e4;
          bVar31 = pbVar18[3];
          if (bVar31 != 0) {
            bVar31 = 0x10;
          }
          bVar26 = bVar31 | bVar26;
          if (iVar17 + iVar20 == -4) goto LAB_001638e4;
          bVar31 = pbVar18[4];
          if (bVar31 != 0) {
            bVar31 = 8;
          }
          bVar26 = bVar31 | bVar26;
          if (iVar17 + iVar20 == -5) goto LAB_001638e4;
          bVar31 = pbVar18[5];
          if (bVar31 != 0) {
            bVar31 = 4;
          }
          bVar26 = bVar31 | bVar26;
          if (iVar17 + iVar20 == -6) goto LAB_001638e4;
          bVar31 = pbVar18[6];
          if (bVar31 != 0) {
            bVar31 = 2;
          }
          bVar26 = bVar31 | bVar26;
          if (iVar17 + iVar20 == -7) goto LAB_001638e4;
          lVar24 = lVar24 + 8;
          pbVar15[lVar22] = bVar26 | pbVar18[7] != 0;
          lVar22 = lVar22 + 1;
        } while ((uint)lVar24 != uVar19);
      }
      *(byte *)((long)param_2 + 0x11) = bVar27;
      uVar19 = (uint)*(byte *)((long)param_2 + 0x12) * (uint)bVar27;
      *(char *)((long)param_2 + 0x13) = (char)uVar19;
      if ((uVar19 & 0xff) < 8) {
        uVar14 = (ulong)*param_2 * (ulong)(uVar19 & 0xff) + 7 >> 3;
      }
      else {
        uVar14 = (ulong)*param_2 * (ulong)(uVar19 >> 3 & 0x1f);
      }
      uVar19 = *(uint *)(param_1 + 0x16c);
      *(ulong *)(param_2 + 2) = uVar14;
    }
    if ((uVar19 >> 4 & 1) != 0) {
      png_do_swap(param_2,*(long *)(param_1 + 0x260) + 1);
      uVar19 = *(uint *)(param_1 + 0x16c);
    }
    if (((uVar19 >> 3 & 1) != 0) && (bVar27 = (byte)param_2[4], bVar27 != 3)) {
      lVar24 = *(long *)(param_1 + 0x260);
      uVar19 = (uint)*(byte *)((long)param_2 + 0x11);
      if ((bVar27 >> 1 & 1) == 0) {
        bVar26 = *(byte *)(param_1 + 0x318);
        uVar14 = 1;
        local_58[0] = (uint)bVar26;
        local_48[0] = uVar19 - bVar26;
      }
      else {
        local_58[1] = (uint)*(byte *)(param_1 + 0x316);
        local_58[2] = (uint)*(byte *)(param_1 + 0x317);
        local_48[1] = uVar19 - *(byte *)(param_1 + 0x316);
        local_48[2] = uVar19 - *(byte *)(param_1 + 0x317);
        bVar26 = *(byte *)(param_1 + 0x315);
        uVar14 = 3;
        local_58[0] = (uint)bVar26;
        local_48[0] = uVar19 - bVar26;
      }
      if ((bVar27 >> 2 & 1) != 0) {
        bVar27 = *(byte *)(param_1 + 0x319);
        local_48[uVar14] = uVar19 - bVar27;
        local_58[uVar14] = (uint)bVar27;
        uVar14 = (ulong)((int)uVar14 + 1);
      }
      uVar16 = (uint)bVar26;
      __s = (ushort *)(lVar24 + 1);
      if (uVar19 < 8) {
        __n = *(size_t *)(param_2 + 2);
        uVar13 = 0x11;
        if (*(char *)(param_1 + 0x318) != '\x03' || uVar19 != 4) {
          uVar13 = 0xff;
        }
        uVar5 = 0x55;
        if (*(char *)(param_1 + 0x318) != '\x01' || uVar19 != 2) {
          uVar5 = uVar13;
        }
        if (__n != 0) {
          if (uVar19 == 0) {
            memset(__s,0,__n);
          }
          else {
            sVar21 = 0;
            do {
              uVar13 = 0;
              uVar32 = uVar19;
              uVar33 = -uVar19;
              do {
                uVar33 = uVar16 + uVar33;
                uVar28 = uVar32 - uVar16;
                uVar32 = uVar32 - uVar16;
                uVar12 = (uint)(byte)*__s << (ulong)(uVar28 & 0x1f);
                if ((int)uVar28 < 1) {
                  uVar12 = (byte)((byte)*__s >> (ulong)(uVar33 & 0x1f)) & uVar5;
                }
                uVar13 = uVar12 | uVar13;
              } while (0 < (int)uVar32);
              sVar21 = sVar21 + 1;
              *(byte *)__s = (byte)uVar13;
              __s = (ushort *)((long)__s + 1);
            } while (sVar21 != __n);
          }
        }
      }
      else {
        uVar13 = (uint)uVar14;
        uVar16 = *param_2 * uVar13;
        if (uVar19 == 8) {
          if (uVar16 != 0) {
            uVar19 = 0;
            do {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar19 / uVar13;
              }
              uVar32 = uVar19 - uVar5 * uVar13;
              uVar5 = local_58[uVar32];
              uVar32 = local_48[uVar32];
              bVar27 = 0;
              if (uVar32 != -uVar5 && (int)(uVar32 + uVar5) < 0 == SBORROW4(uVar32,-uVar5)) {
                uVar28 = 0;
                uVar33 = -uVar32;
                do {
                  uVar12 = (uint)(byte)*__s << (ulong)(uVar32 & 0x1f);
                  uVar3 = uVar33 & 0x1f;
                  uVar33 = uVar33 + uVar5;
                  if ((int)uVar32 < 1) {
                    uVar12 = (uint)(byte)((byte)*__s >> (ulong)uVar3);
                  }
                  uVar28 = uVar12 | uVar28;
                  bVar27 = (byte)uVar28;
                  bVar1 = 0 < (int)uVar32;
                  uVar32 = uVar32 - uVar5;
                } while (bVar1);
              }
              uVar19 = uVar19 + 1;
              *(byte *)__s = bVar27;
              __s = (ushort *)((long)__s + 1);
            } while (uVar19 != uVar16);
          }
        }
        else if (uVar16 != 0) {
          uVar19 = 0;
          do {
            uVar5 = 0;
            if (uVar13 != 0) {
              uVar5 = uVar19 / uVar13;
            }
            uVar32 = uVar19 - uVar5 * uVar13;
            uVar5 = local_58[uVar32];
            uVar32 = local_48[uVar32];
            uVar33 = 0;
            if (uVar32 != -uVar5 && (int)(uVar32 + uVar5) < 0 == SBORROW4(uVar32,-uVar5)) {
              uVar33 = 0;
              uVar28 = -uVar32;
              uVar12 = (uint)(*__s >> 8) | (*__s & 0xff00ff) << 8;
              do {
                uVar4 = uVar28 & 0x1f;
                uVar28 = uVar28 + uVar5;
                uVar3 = uVar12 << (ulong)(uVar32 & 0x1f);
                if ((int)uVar32 < 1) {
                  uVar3 = uVar12 >> (ulong)uVar4;
                }
                uVar33 = uVar3 | uVar33;
                bVar1 = 0 < (int)uVar32;
                uVar32 = uVar32 - uVar5;
              } while (bVar1);
            }
            uVar19 = uVar19 + 1;
            *__s = (ushort)(uVar33 >> 8) & 0xff | (ushort)((uVar33 & 0xff00ff) << 8);
            __s = __s + 1;
          } while (uVar19 != uVar16);
        }
      }
      uVar19 = *(uint *)(param_1 + 0x16c);
    }
    if ((uVar19 >> 0x11 & 1) != 0) {
      lVar24 = *(long *)(param_1 + 0x260);
      puVar8 = (undefined8 *)(lVar24 + 1);
      if ((char)param_2[4] == '\x04') {
        uVar19 = *param_2;
        uVar14 = (ulong)uVar19;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar19 != 0) {
            if (uVar19 < 8) {
              uVar30 = 0;
            }
            else {
              if (uVar19 < 0x20) {
                uVar30 = 0;
              }
              else {
                uVar30 = uVar14 & 0xffffffe0;
                puVar7 = (undefined1 *)(lVar24 + 0x21);
                uVar25 = uVar30;
                do {
                  uVar52 = *puVar7;
                  uVar54 = puVar7[2];
                  uVar56 = puVar7[4];
                  uVar58 = puVar7[6];
                  uVar60 = puVar7[8];
                  uVar62 = puVar7[10];
                  uVar64 = puVar7[0xc];
                  uVar66 = puVar7[0xe];
                  uVar68 = puVar7[0x10];
                  uVar70 = puVar7[0x12];
                  uVar72 = puVar7[0x14];
                  uVar74 = puVar7[0x16];
                  uVar76 = puVar7[0x18];
                  uVar78 = puVar7[0x1a];
                  uVar80 = puVar7[0x1c];
                  uVar82 = puVar7[0x1e];
                  uVar25 = uVar25 - 0x20;
                  uVar34 = puVar7[-0x20];
                  uVar37 = puVar7[-0x1e];
                  uVar38 = puVar7[-0x1c];
                  uVar39 = puVar7[-0x1a];
                  uVar40 = puVar7[-0x18];
                  uVar41 = puVar7[-0x16];
                  uVar42 = puVar7[-0x14];
                  uVar43 = puVar7[-0x12];
                  uVar44 = puVar7[-0x10];
                  uVar45 = puVar7[-0xe];
                  uVar46 = puVar7[-0xc];
                  uVar47 = puVar7[-10];
                  uVar48 = puVar7[-8];
                  uVar49 = puVar7[-6];
                  uVar50 = puVar7[-4];
                  uVar51 = puVar7[-2];
                  *puVar7 = puVar7[1];
                  puVar7[1] = uVar52;
                  puVar7[2] = puVar7[3];
                  puVar7[3] = uVar54;
                  puVar7[4] = puVar7[5];
                  puVar7[5] = uVar56;
                  puVar7[6] = puVar7[7];
                  puVar7[7] = uVar58;
                  puVar7[8] = puVar7[9];
                  puVar7[9] = uVar60;
                  puVar7[10] = puVar7[0xb];
                  puVar7[0xb] = uVar62;
                  puVar7[0xc] = puVar7[0xd];
                  puVar7[0xd] = uVar64;
                  puVar7[0xe] = puVar7[0xf];
                  puVar7[0xf] = uVar66;
                  puVar7[0x10] = puVar7[0x11];
                  puVar7[0x11] = uVar68;
                  puVar7[0x12] = puVar7[0x13];
                  puVar7[0x13] = uVar70;
                  puVar7[0x14] = puVar7[0x15];
                  puVar7[0x15] = uVar72;
                  puVar7[0x16] = puVar7[0x17];
                  puVar7[0x17] = uVar74;
                  puVar7[0x18] = puVar7[0x19];
                  puVar7[0x19] = uVar76;
                  puVar7[0x1a] = puVar7[0x1b];
                  puVar7[0x1b] = uVar78;
                  puVar7[0x1c] = puVar7[0x1d];
                  puVar7[0x1d] = uVar80;
                  puVar7[0x1e] = puVar7[0x1f];
                  puVar7[0x1f] = uVar82;
                  puVar7[-0x20] = puVar7[-0x1f];
                  puVar7[-0x1f] = uVar34;
                  puVar7[-0x1e] = puVar7[-0x1d];
                  puVar7[-0x1d] = uVar37;
                  puVar7[-0x1c] = puVar7[-0x1b];
                  puVar7[-0x1b] = uVar38;
                  puVar7[-0x1a] = puVar7[-0x19];
                  puVar7[-0x19] = uVar39;
                  puVar7[-0x18] = puVar7[-0x17];
                  puVar7[-0x17] = uVar40;
                  puVar7[-0x16] = puVar7[-0x15];
                  puVar7[-0x15] = uVar41;
                  puVar7[-0x14] = puVar7[-0x13];
                  puVar7[-0x13] = uVar42;
                  puVar7[-0x12] = puVar7[-0x11];
                  puVar7[-0x11] = uVar43;
                  puVar7[-0x10] = puVar7[-0xf];
                  puVar7[-0xf] = uVar44;
                  puVar7[-0xe] = puVar7[-0xd];
                  puVar7[-0xd] = uVar45;
                  puVar7[-0xc] = puVar7[-0xb];
                  puVar7[-0xb] = uVar46;
                  puVar7[-10] = puVar7[-9];
                  puVar7[-9] = uVar47;
                  puVar7[-8] = puVar7[-7];
                  puVar7[-7] = uVar48;
                  puVar7[-6] = puVar7[-5];
                  puVar7[-5] = uVar49;
                  puVar7[-4] = puVar7[-3];
                  puVar7[-3] = uVar50;
                  puVar7[-2] = puVar7[-1];
                  puVar7[-1] = uVar51;
                  puVar7 = puVar7 + 0x40;
                } while (uVar25 != 0);
                if (uVar30 == uVar14) goto LAB_00163e8c;
                if ((uVar19 & 0x18) == 0) {
                  puVar8 = (undefined8 *)((long)puVar8 + uVar30 * 2);
                  goto LAB_00163e40;
                }
              }
              uVar25 = uVar14 & 0xfffffff8;
              puVar8 = (undefined8 *)((long)puVar8 + uVar25 * 2);
              lVar22 = uVar30 - uVar25;
              puVar7 = (undefined1 *)(lVar24 + uVar30 * 2 + 1);
              do {
                uVar34 = *puVar7;
                uVar37 = puVar7[2];
                uVar38 = puVar7[4];
                uVar39 = puVar7[6];
                uVar40 = puVar7[8];
                uVar41 = puVar7[10];
                uVar42 = puVar7[0xc];
                uVar43 = puVar7[0xe];
                lVar22 = lVar22 + 8;
                *puVar7 = puVar7[1];
                puVar7[1] = uVar34;
                puVar7[2] = puVar7[3];
                puVar7[3] = uVar37;
                puVar7[4] = puVar7[5];
                puVar7[5] = uVar38;
                puVar7[6] = puVar7[7];
                puVar7[7] = uVar39;
                puVar7[8] = puVar7[9];
                puVar7[9] = uVar40;
                puVar7[10] = puVar7[0xb];
                puVar7[0xb] = uVar41;
                puVar7[0xc] = puVar7[0xd];
                puVar7[0xd] = uVar42;
                puVar7[0xe] = puVar7[0xf];
                puVar7[0xf] = uVar43;
                puVar7 = puVar7 + 0x10;
              } while (lVar22 != 0);
              uVar30 = uVar25;
              if (uVar25 == uVar14) goto LAB_00163e8c;
            }
LAB_00163e40:
            iVar17 = uVar19 - (int)uVar30;
            do {
              uVar34 = *(undefined1 *)puVar8;
              iVar17 = iVar17 + -1;
              *(undefined1 *)puVar8 = *(undefined1 *)((long)puVar8 + 1);
              *(undefined1 *)((long)puVar8 + 1) = uVar34;
              puVar8 = (undefined8 *)((long)puVar8 + 2);
            } while (iVar17 != 0);
          }
        }
        else if (uVar19 != 0) {
          if (uVar19 < 8) {
            uVar30 = 0;
          }
          else {
            if (uVar19 < 0x20) {
              uVar30 = 0;
            }
            else {
              uVar30 = uVar14 & 0xffffffe0;
              puVar7 = (undefined1 *)(lVar24 + 0x41);
              uVar25 = uVar30;
              do {
                uVar53 = *puVar7;
                uVar84 = puVar7[1];
                uVar55 = puVar7[4];
                uVar85 = puVar7[5];
                uVar57 = puVar7[8];
                uVar86 = puVar7[9];
                uVar59 = puVar7[0xc];
                uVar87 = puVar7[0xd];
                uVar61 = puVar7[0x10];
                uVar88 = puVar7[0x11];
                uVar63 = puVar7[0x14];
                uVar89 = puVar7[0x15];
                uVar65 = puVar7[0x18];
                uVar90 = puVar7[0x19];
                uVar67 = puVar7[0x1c];
                uVar91 = puVar7[0x1d];
                uVar69 = puVar7[0x20];
                uVar92 = puVar7[0x21];
                uVar71 = puVar7[0x24];
                uVar93 = puVar7[0x25];
                uVar73 = puVar7[0x28];
                uVar94 = puVar7[0x29];
                uVar75 = puVar7[0x2c];
                uVar95 = puVar7[0x2d];
                uVar77 = puVar7[0x30];
                uVar96 = puVar7[0x31];
                uVar79 = puVar7[0x34];
                uVar97 = puVar7[0x35];
                uVar81 = puVar7[0x38];
                uVar98 = puVar7[0x39];
                uVar83 = puVar7[0x3c];
                uVar99 = puVar7[0x3d];
                uVar25 = uVar25 - 0x20;
                uVar34 = puVar7[-0x40];
                uVar52 = puVar7[-0x3f];
                uVar37 = puVar7[-0x3c];
                uVar54 = puVar7[-0x3b];
                uVar38 = puVar7[-0x38];
                uVar56 = puVar7[-0x37];
                uVar39 = puVar7[-0x34];
                uVar58 = puVar7[-0x33];
                uVar40 = puVar7[-0x30];
                uVar60 = puVar7[-0x2f];
                uVar41 = puVar7[-0x2c];
                uVar62 = puVar7[-0x2b];
                uVar42 = puVar7[-0x28];
                uVar64 = puVar7[-0x27];
                uVar43 = puVar7[-0x24];
                uVar66 = puVar7[-0x23];
                uVar44 = puVar7[-0x20];
                uVar68 = puVar7[-0x1f];
                uVar45 = puVar7[-0x1c];
                uVar70 = puVar7[-0x1b];
                uVar46 = puVar7[-0x18];
                uVar72 = puVar7[-0x17];
                uVar47 = puVar7[-0x14];
                uVar74 = puVar7[-0x13];
                uVar48 = puVar7[-0x10];
                uVar76 = puVar7[-0xf];
                uVar49 = puVar7[-0xc];
                uVar78 = puVar7[-0xb];
                uVar50 = puVar7[-8];
                uVar80 = puVar7[-7];
                uVar51 = puVar7[-4];
                uVar82 = puVar7[-3];
                puVar7[-0x40] = puVar7[-0x3e];
                puVar7[-0x3f] = puVar7[-0x3d];
                puVar7[-0x3e] = uVar34;
                puVar7[-0x3d] = uVar52;
                puVar7[-0x3c] = puVar7[-0x3a];
                puVar7[-0x3b] = puVar7[-0x39];
                puVar7[-0x3a] = uVar37;
                puVar7[-0x39] = uVar54;
                puVar7[-0x38] = puVar7[-0x36];
                puVar7[-0x37] = puVar7[-0x35];
                puVar7[-0x36] = uVar38;
                puVar7[-0x35] = uVar56;
                puVar7[-0x34] = puVar7[-0x32];
                puVar7[-0x33] = puVar7[-0x31];
                puVar7[-0x32] = uVar39;
                puVar7[-0x31] = uVar58;
                puVar7[-0x30] = puVar7[-0x2e];
                puVar7[-0x2f] = puVar7[-0x2d];
                puVar7[-0x2e] = uVar40;
                puVar7[-0x2d] = uVar60;
                puVar7[-0x2c] = puVar7[-0x2a];
                puVar7[-0x2b] = puVar7[-0x29];
                puVar7[-0x2a] = uVar41;
                puVar7[-0x29] = uVar62;
                puVar7[-0x28] = puVar7[-0x26];
                puVar7[-0x27] = puVar7[-0x25];
                puVar7[-0x26] = uVar42;
                puVar7[-0x25] = uVar64;
                puVar7[-0x24] = puVar7[-0x22];
                puVar7[-0x23] = puVar7[-0x21];
                puVar7[-0x22] = uVar43;
                puVar7[-0x21] = uVar66;
                puVar7[-0x20] = puVar7[-0x1e];
                puVar7[-0x1f] = puVar7[-0x1d];
                puVar7[-0x1e] = uVar44;
                puVar7[-0x1d] = uVar68;
                puVar7[-0x1c] = puVar7[-0x1a];
                puVar7[-0x1b] = puVar7[-0x19];
                puVar7[-0x1a] = uVar45;
                puVar7[-0x19] = uVar70;
                puVar7[-0x18] = puVar7[-0x16];
                puVar7[-0x17] = puVar7[-0x15];
                puVar7[-0x16] = uVar46;
                puVar7[-0x15] = uVar72;
                puVar7[-0x14] = puVar7[-0x12];
                puVar7[-0x13] = puVar7[-0x11];
                puVar7[-0x12] = uVar47;
                puVar7[-0x11] = uVar74;
                puVar7[-0x10] = puVar7[-0xe];
                puVar7[-0xf] = puVar7[-0xd];
                puVar7[-0xe] = uVar48;
                puVar7[-0xd] = uVar76;
                puVar7[-0xc] = puVar7[-10];
                puVar7[-0xb] = puVar7[-9];
                puVar7[-10] = uVar49;
                puVar7[-9] = uVar78;
                puVar7[-8] = puVar7[-6];
                puVar7[-7] = puVar7[-5];
                puVar7[-6] = uVar50;
                puVar7[-5] = uVar80;
                puVar7[-4] = puVar7[-2];
                puVar7[-3] = puVar7[-1];
                puVar7[-2] = uVar51;
                puVar7[-1] = uVar82;
                *puVar7 = puVar7[2];
                puVar7[1] = puVar7[3];
                puVar7[2] = uVar53;
                puVar7[3] = uVar84;
                puVar7[4] = puVar7[6];
                puVar7[5] = puVar7[7];
                puVar7[6] = uVar55;
                puVar7[7] = uVar85;
                puVar7[8] = puVar7[10];
                puVar7[9] = puVar7[0xb];
                puVar7[10] = uVar57;
                puVar7[0xb] = uVar86;
                puVar7[0xc] = puVar7[0xe];
                puVar7[0xd] = puVar7[0xf];
                puVar7[0xe] = uVar59;
                puVar7[0xf] = uVar87;
                puVar7[0x10] = puVar7[0x12];
                puVar7[0x11] = puVar7[0x13];
                puVar7[0x12] = uVar61;
                puVar7[0x13] = uVar88;
                puVar7[0x14] = puVar7[0x16];
                puVar7[0x15] = puVar7[0x17];
                puVar7[0x16] = uVar63;
                puVar7[0x17] = uVar89;
                puVar7[0x18] = puVar7[0x1a];
                puVar7[0x19] = puVar7[0x1b];
                puVar7[0x1a] = uVar65;
                puVar7[0x1b] = uVar90;
                puVar7[0x1c] = puVar7[0x1e];
                puVar7[0x1d] = puVar7[0x1f];
                puVar7[0x1e] = uVar67;
                puVar7[0x1f] = uVar91;
                puVar7[0x20] = puVar7[0x22];
                puVar7[0x21] = puVar7[0x23];
                puVar7[0x22] = uVar69;
                puVar7[0x23] = uVar92;
                puVar7[0x24] = puVar7[0x26];
                puVar7[0x25] = puVar7[0x27];
                puVar7[0x26] = uVar71;
                puVar7[0x27] = uVar93;
                puVar7[0x28] = puVar7[0x2a];
                puVar7[0x29] = puVar7[0x2b];
                puVar7[0x2a] = uVar73;
                puVar7[0x2b] = uVar94;
                puVar7[0x2c] = puVar7[0x2e];
                puVar7[0x2d] = puVar7[0x2f];
                puVar7[0x2e] = uVar75;
                puVar7[0x2f] = uVar95;
                puVar7[0x30] = puVar7[0x32];
                puVar7[0x31] = puVar7[0x33];
                puVar7[0x32] = uVar77;
                puVar7[0x33] = uVar96;
                puVar7[0x34] = puVar7[0x36];
                puVar7[0x35] = puVar7[0x37];
                puVar7[0x36] = uVar79;
                puVar7[0x37] = uVar97;
                puVar7[0x38] = puVar7[0x3a];
                puVar7[0x39] = puVar7[0x3b];
                puVar7[0x3a] = uVar81;
                puVar7[0x3b] = uVar98;
                puVar7[0x3c] = puVar7[0x3e];
                puVar7[0x3d] = puVar7[0x3f];
                puVar7[0x3e] = uVar83;
                puVar7[0x3f] = uVar99;
                puVar7 = puVar7 + 0x80;
              } while (uVar25 != 0);
              if (uVar30 == uVar14) goto LAB_00163e8c;
              if ((uVar19 & 0x18) == 0) {
                puVar8 = (undefined8 *)((long)puVar8 + uVar30 * 4);
                goto LAB_00163e6c;
              }
            }
            uVar25 = uVar14 & 0xfffffff8;
            puVar8 = (undefined8 *)((long)puVar8 + uVar25 * 4);
            lVar22 = uVar30 - uVar25;
            puVar7 = (undefined1 *)(lVar24 + uVar30 * 4 + 1);
            do {
              uVar34 = *puVar7;
              uVar44 = puVar7[1];
              uVar37 = puVar7[4];
              uVar45 = puVar7[5];
              uVar38 = puVar7[8];
              uVar46 = puVar7[9];
              uVar39 = puVar7[0xc];
              uVar47 = puVar7[0xd];
              uVar40 = puVar7[0x10];
              uVar48 = puVar7[0x11];
              uVar41 = puVar7[0x14];
              uVar49 = puVar7[0x15];
              uVar42 = puVar7[0x18];
              uVar50 = puVar7[0x19];
              uVar43 = puVar7[0x1c];
              uVar51 = puVar7[0x1d];
              lVar22 = lVar22 + 8;
              *puVar7 = puVar7[2];
              puVar7[1] = puVar7[3];
              puVar7[2] = uVar34;
              puVar7[3] = uVar44;
              puVar7[4] = puVar7[6];
              puVar7[5] = puVar7[7];
              puVar7[6] = uVar37;
              puVar7[7] = uVar45;
              puVar7[8] = puVar7[10];
              puVar7[9] = puVar7[0xb];
              puVar7[10] = uVar38;
              puVar7[0xb] = uVar46;
              puVar7[0xc] = puVar7[0xe];
              puVar7[0xd] = puVar7[0xf];
              puVar7[0xe] = uVar39;
              puVar7[0xf] = uVar47;
              puVar7[0x10] = puVar7[0x12];
              puVar7[0x11] = puVar7[0x13];
              puVar7[0x12] = uVar40;
              puVar7[0x13] = uVar48;
              puVar7[0x14] = puVar7[0x16];
              puVar7[0x15] = puVar7[0x17];
              puVar7[0x16] = uVar41;
              puVar7[0x17] = uVar49;
              puVar7[0x18] = puVar7[0x1a];
              puVar7[0x19] = puVar7[0x1b];
              puVar7[0x1a] = uVar42;
              puVar7[0x1b] = uVar50;
              puVar7[0x1c] = puVar7[0x1e];
              puVar7[0x1d] = puVar7[0x1f];
              puVar7[0x1e] = uVar43;
              puVar7[0x1f] = uVar51;
              puVar7 = puVar7 + 0x20;
            } while (lVar22 != 0);
            uVar30 = uVar25;
            if (uVar25 == uVar14) goto LAB_00163e8c;
          }
LAB_00163e6c:
          iVar17 = uVar19 - (int)uVar30;
          do {
            uVar35 = *(undefined4 *)puVar8;
            iVar17 = iVar17 + -1;
            uVar14 = (ulong)CONCAT16((char)((uint)uVar35 >> 0x18),
                                     (uint6)CONCAT14((char)((uint)uVar35 >> 0x10),
                                                     (uint)CONCAT12((char)((uint)uVar35 >> 8),
                                                                    (ushort)(byte)uVar35)));
            uVar36 = NEON_ext(uVar14,uVar14,4,1);
            *(uint *)puVar8 =
                 CONCAT13((char)((ulong)uVar36 >> 0x30),
                          CONCAT12((char)((ulong)uVar36 >> 0x20),
                                   CONCAT11((char)((ulong)uVar36 >> 0x10),(char)uVar36)));
            puVar8 = (undefined8 *)((long)puVar8 + 4);
          } while (iVar17 != 0);
        }
      }
      else if ((char)param_2[4] == '\x06') {
        uVar19 = *param_2;
        uVar14 = (ulong)uVar19;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar19 != 0) {
            if (uVar19 < 8) {
              uVar30 = 0;
            }
            else {
              if (uVar19 < 0x20) {
                uVar30 = 0;
              }
              else {
                uVar30 = uVar14 & 0xffffffe0;
                puVar7 = (undefined1 *)(lVar24 + 0x41);
                uVar25 = uVar30;
                do {
                  uVar52 = *puVar7;
                  uVar54 = puVar7[4];
                  uVar56 = puVar7[8];
                  uVar58 = puVar7[0xc];
                  uVar60 = puVar7[0x10];
                  uVar62 = puVar7[0x14];
                  uVar64 = puVar7[0x18];
                  uVar66 = puVar7[0x1c];
                  uVar68 = puVar7[0x20];
                  uVar70 = puVar7[0x24];
                  uVar72 = puVar7[0x28];
                  uVar74 = puVar7[0x2c];
                  uVar76 = puVar7[0x30];
                  uVar78 = puVar7[0x34];
                  uVar80 = puVar7[0x38];
                  uVar82 = puVar7[0x3c];
                  uVar25 = uVar25 - 0x20;
                  uVar34 = puVar7[-0x40];
                  uVar37 = puVar7[-0x3c];
                  uVar38 = puVar7[-0x38];
                  uVar39 = puVar7[-0x34];
                  uVar40 = puVar7[-0x30];
                  uVar41 = puVar7[-0x2c];
                  uVar42 = puVar7[-0x28];
                  uVar43 = puVar7[-0x24];
                  uVar44 = puVar7[-0x20];
                  uVar45 = puVar7[-0x1c];
                  uVar46 = puVar7[-0x18];
                  uVar47 = puVar7[-0x14];
                  uVar48 = puVar7[-0x10];
                  uVar49 = puVar7[-0xc];
                  uVar50 = puVar7[-8];
                  uVar51 = puVar7[-4];
                  puVar7[-0x40] = puVar7[-0x3f];
                  puVar7[-0x3f] = puVar7[-0x3e];
                  puVar7[-0x3e] = puVar7[-0x3d];
                  puVar7[-0x3d] = uVar34;
                  puVar7[-0x3c] = puVar7[-0x3b];
                  puVar7[-0x3b] = puVar7[-0x3a];
                  puVar7[-0x3a] = puVar7[-0x39];
                  puVar7[-0x39] = uVar37;
                  puVar7[-0x38] = puVar7[-0x37];
                  puVar7[-0x37] = puVar7[-0x36];
                  puVar7[-0x36] = puVar7[-0x35];
                  puVar7[-0x35] = uVar38;
                  puVar7[-0x34] = puVar7[-0x33];
                  puVar7[-0x33] = puVar7[-0x32];
                  puVar7[-0x32] = puVar7[-0x31];
                  puVar7[-0x31] = uVar39;
                  puVar7[-0x30] = puVar7[-0x2f];
                  puVar7[-0x2f] = puVar7[-0x2e];
                  puVar7[-0x2e] = puVar7[-0x2d];
                  puVar7[-0x2d] = uVar40;
                  puVar7[-0x2c] = puVar7[-0x2b];
                  puVar7[-0x2b] = puVar7[-0x2a];
                  puVar7[-0x2a] = puVar7[-0x29];
                  puVar7[-0x29] = uVar41;
                  puVar7[-0x28] = puVar7[-0x27];
                  puVar7[-0x27] = puVar7[-0x26];
                  puVar7[-0x26] = puVar7[-0x25];
                  puVar7[-0x25] = uVar42;
                  puVar7[-0x24] = puVar7[-0x23];
                  puVar7[-0x23] = puVar7[-0x22];
                  puVar7[-0x22] = puVar7[-0x21];
                  puVar7[-0x21] = uVar43;
                  puVar7[-0x20] = puVar7[-0x1f];
                  puVar7[-0x1f] = puVar7[-0x1e];
                  puVar7[-0x1e] = puVar7[-0x1d];
                  puVar7[-0x1d] = uVar44;
                  puVar7[-0x1c] = puVar7[-0x1b];
                  puVar7[-0x1b] = puVar7[-0x1a];
                  puVar7[-0x1a] = puVar7[-0x19];
                  puVar7[-0x19] = uVar45;
                  puVar7[-0x18] = puVar7[-0x17];
                  puVar7[-0x17] = puVar7[-0x16];
                  puVar7[-0x16] = puVar7[-0x15];
                  puVar7[-0x15] = uVar46;
                  puVar7[-0x14] = puVar7[-0x13];
                  puVar7[-0x13] = puVar7[-0x12];
                  puVar7[-0x12] = puVar7[-0x11];
                  puVar7[-0x11] = uVar47;
                  puVar7[-0x10] = puVar7[-0xf];
                  puVar7[-0xf] = puVar7[-0xe];
                  puVar7[-0xe] = puVar7[-0xd];
                  puVar7[-0xd] = uVar48;
                  puVar7[-0xc] = puVar7[-0xb];
                  puVar7[-0xb] = puVar7[-10];
                  puVar7[-10] = puVar7[-9];
                  puVar7[-9] = uVar49;
                  puVar7[-8] = puVar7[-7];
                  puVar7[-7] = puVar7[-6];
                  puVar7[-6] = puVar7[-5];
                  puVar7[-5] = uVar50;
                  puVar7[-4] = puVar7[-3];
                  puVar7[-3] = puVar7[-2];
                  puVar7[-2] = puVar7[-1];
                  puVar7[-1] = uVar51;
                  *puVar7 = puVar7[1];
                  puVar7[1] = puVar7[2];
                  puVar7[2] = puVar7[3];
                  puVar7[3] = uVar52;
                  puVar7[4] = puVar7[5];
                  puVar7[5] = puVar7[6];
                  puVar7[6] = puVar7[7];
                  puVar7[7] = uVar54;
                  puVar7[8] = puVar7[9];
                  puVar7[9] = puVar7[10];
                  puVar7[10] = puVar7[0xb];
                  puVar7[0xb] = uVar56;
                  puVar7[0xc] = puVar7[0xd];
                  puVar7[0xd] = puVar7[0xe];
                  puVar7[0xe] = puVar7[0xf];
                  puVar7[0xf] = uVar58;
                  puVar7[0x10] = puVar7[0x11];
                  puVar7[0x11] = puVar7[0x12];
                  puVar7[0x12] = puVar7[0x13];
                  puVar7[0x13] = uVar60;
                  puVar7[0x14] = puVar7[0x15];
                  puVar7[0x15] = puVar7[0x16];
                  puVar7[0x16] = puVar7[0x17];
                  puVar7[0x17] = uVar62;
                  puVar7[0x18] = puVar7[0x19];
                  puVar7[0x19] = puVar7[0x1a];
                  puVar7[0x1a] = puVar7[0x1b];
                  puVar7[0x1b] = uVar64;
                  puVar7[0x1c] = puVar7[0x1d];
                  puVar7[0x1d] = puVar7[0x1e];
                  puVar7[0x1e] = puVar7[0x1f];
                  puVar7[0x1f] = uVar66;
                  puVar7[0x20] = puVar7[0x21];
                  puVar7[0x21] = puVar7[0x22];
                  puVar7[0x22] = puVar7[0x23];
                  puVar7[0x23] = uVar68;
                  puVar7[0x24] = puVar7[0x25];
                  puVar7[0x25] = puVar7[0x26];
                  puVar7[0x26] = puVar7[0x27];
                  puVar7[0x27] = uVar70;
                  puVar7[0x28] = puVar7[0x29];
                  puVar7[0x29] = puVar7[0x2a];
                  puVar7[0x2a] = puVar7[0x2b];
                  puVar7[0x2b] = uVar72;
                  puVar7[0x2c] = puVar7[0x2d];
                  puVar7[0x2d] = puVar7[0x2e];
                  puVar7[0x2e] = puVar7[0x2f];
                  puVar7[0x2f] = uVar74;
                  puVar7[0x30] = puVar7[0x31];
                  puVar7[0x31] = puVar7[0x32];
                  puVar7[0x32] = puVar7[0x33];
                  puVar7[0x33] = uVar76;
                  puVar7[0x34] = puVar7[0x35];
                  puVar7[0x35] = puVar7[0x36];
                  puVar7[0x36] = puVar7[0x37];
                  puVar7[0x37] = uVar78;
                  puVar7[0x38] = puVar7[0x39];
                  puVar7[0x39] = puVar7[0x3a];
                  puVar7[0x3a] = puVar7[0x3b];
                  puVar7[0x3b] = uVar80;
                  puVar7[0x3c] = puVar7[0x3d];
                  puVar7[0x3d] = puVar7[0x3e];
                  puVar7[0x3e] = puVar7[0x3f];
                  puVar7[0x3f] = uVar82;
                  puVar7 = puVar7 + 0x80;
                } while (uVar25 != 0);
                if (uVar30 == uVar14) goto LAB_00163e8c;
                if ((uVar19 & 0x18) == 0) {
                  puVar8 = (undefined8 *)((long)puVar8 + uVar30 * 4);
                  goto LAB_00163e14;
                }
              }
              uVar25 = uVar14 & 0xfffffff8;
              puVar8 = (undefined8 *)((long)puVar8 + uVar25 * 4);
              lVar22 = uVar30 - uVar25;
              puVar7 = (undefined1 *)(lVar24 + uVar30 * 4 + 1);
              do {
                uVar34 = *puVar7;
                uVar37 = puVar7[4];
                uVar38 = puVar7[8];
                uVar39 = puVar7[0xc];
                uVar40 = puVar7[0x10];
                uVar41 = puVar7[0x14];
                uVar42 = puVar7[0x18];
                uVar43 = puVar7[0x1c];
                lVar22 = lVar22 + 8;
                *puVar7 = puVar7[1];
                puVar7[1] = puVar7[2];
                puVar7[2] = puVar7[3];
                puVar7[3] = uVar34;
                puVar7[4] = puVar7[5];
                puVar7[5] = puVar7[6];
                puVar7[6] = puVar7[7];
                puVar7[7] = uVar37;
                puVar7[8] = puVar7[9];
                puVar7[9] = puVar7[10];
                puVar7[10] = puVar7[0xb];
                puVar7[0xb] = uVar38;
                puVar7[0xc] = puVar7[0xd];
                puVar7[0xd] = puVar7[0xe];
                puVar7[0xe] = puVar7[0xf];
                puVar7[0xf] = uVar39;
                puVar7[0x10] = puVar7[0x11];
                puVar7[0x11] = puVar7[0x12];
                puVar7[0x12] = puVar7[0x13];
                puVar7[0x13] = uVar40;
                puVar7[0x14] = puVar7[0x15];
                puVar7[0x15] = puVar7[0x16];
                puVar7[0x16] = puVar7[0x17];
                puVar7[0x17] = uVar41;
                puVar7[0x18] = puVar7[0x19];
                puVar7[0x19] = puVar7[0x1a];
                puVar7[0x1a] = puVar7[0x1b];
                puVar7[0x1b] = uVar42;
                puVar7[0x1c] = puVar7[0x1d];
                puVar7[0x1d] = puVar7[0x1e];
                puVar7[0x1e] = puVar7[0x1f];
                puVar7[0x1f] = uVar43;
                puVar7 = puVar7 + 0x20;
              } while (lVar22 != 0);
              uVar30 = uVar25;
              if (uVar25 == uVar14) goto LAB_00163e8c;
            }
LAB_00163e14:
            iVar17 = uVar19 - (int)uVar30;
            do {
              uVar35 = *(undefined4 *)puVar8;
              iVar17 = iVar17 + -1;
              uVar14 = (ulong)CONCAT16((char)((uint)uVar35 >> 0x18),
                                       (uint6)CONCAT14((char)((uint)uVar35 >> 0x10),
                                                       (uint)CONCAT12((char)((uint)uVar35 >> 8),
                                                                      (ushort)(byte)uVar35)));
              uVar36 = NEON_ext(uVar14,uVar14,2,1);
              *(uint *)puVar8 =
                   CONCAT13((char)((ulong)uVar36 >> 0x30),
                            CONCAT12((char)((ulong)uVar36 >> 0x20),
                                     CONCAT11((char)((ulong)uVar36 >> 0x10),(char)uVar36)));
              puVar8 = (undefined8 *)((long)puVar8 + 4);
            } while (iVar17 != 0);
          }
        }
        else {
          while (uVar19 != 0) {
            uVar19 = (int)uVar14 - 1;
            uVar14 = (ulong)uVar19;
            uVar36 = NEON_ext(*puVar8,*puVar8,2,1);
            *puVar8 = uVar36;
            puVar8 = puVar8 + 1;
          }
        }
      }
    }
LAB_00163e8c:
    if ((*(byte *)(param_1 + 0x16e) >> 3 & 1) != 0) {
      pbVar18 = *(byte **)(param_1 + 0x260);
      pbVar15 = pbVar18 + 1;
      if ((char)param_2[4] == '\x04') {
        uVar19 = *param_2;
        uVar14 = (ulong)uVar19;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar19 != 0) {
            if (uVar19 < 9) {
              uVar25 = 0;
            }
            else {
              if (uVar19 < 0x11) {
                uVar23 = 0;
              }
              else {
                pbVar29 = pbVar18 + 0x10;
                uVar25 = 0x10;
                if ((uVar19 & 0xf) != 0) {
                  uVar25 = uVar14 & 0xf;
                }
                uVar23 = uVar14 - uVar25;
                uVar30 = uVar14;
                do {
                  uVar30 = uVar30 - 0x10;
                  pbVar9 = pbVar29 + 0xe;
                  pbVar11 = pbVar29 + 0x10;
                  pbVar29[-0xe] = ~pbVar29[-0xe];
                  pbVar29[-0xc] = ~pbVar29[-0xc];
                  pbVar29[-10] = ~pbVar29[-10];
                  pbVar29[-8] = ~pbVar29[-8];
                  pbVar29[-6] = ~pbVar29[-6];
                  pbVar29[-4] = ~pbVar29[-4];
                  pbVar29[-2] = ~pbVar29[-2];
                  pbVar29[2] = ~pbVar29[2];
                  pbVar29[4] = ~pbVar29[4];
                  pbVar29[6] = ~pbVar29[6];
                  pbVar29[8] = ~pbVar29[8];
                  *pbVar29 = ~*pbVar29;
                  pbVar29[10] = ~pbVar29[10];
                  pbVar2 = pbVar29 + 0xe;
                  pbVar29[0xc] = ~pbVar29[0xc];
                  pbVar10 = pbVar29 + 0x10;
                  pbVar29 = pbVar29 + 0x20;
                  *pbVar2 = ~*pbVar9;
                  *pbVar10 = ~*pbVar11;
                } while (uVar25 != uVar30);
                if (uVar25 < 9) {
                  pbVar15 = pbVar15 + uVar23 * 2;
                  uVar25 = uVar23 & 0xffffffff;
                  goto LAB_001641f8;
                }
              }
              uVar30 = 8;
              if ((uVar19 & 7) != 0) {
                uVar30 = uVar14 & 7;
              }
              uVar25 = uVar14 - uVar30;
              pbVar18 = pbVar18 + uVar23 * 2 + 8;
              pbVar15 = pbVar15 + uVar25 * 2;
              lVar24 = (uVar30 + uVar23) - uVar14;
              do {
                lVar24 = lVar24 + 8;
                pbVar11 = pbVar18 + 6;
                pbVar10 = pbVar18 + 8;
                pbVar18[-6] = ~pbVar18[-6];
                pbVar18[-4] = ~pbVar18[-4];
                pbVar18[-2] = ~pbVar18[-2];
                *pbVar18 = ~*pbVar18;
                pbVar18[2] = ~pbVar18[2];
                pbVar29 = pbVar18 + 6;
                pbVar18[4] = ~pbVar18[4];
                pbVar2 = pbVar18 + 8;
                pbVar18 = pbVar18 + 0x10;
                *pbVar29 = ~*pbVar11;
                *pbVar2 = ~*pbVar10;
              } while (lVar24 != 0);
            }
LAB_001641f8:
            iVar17 = uVar19 - (int)uVar25;
            pbVar15 = pbVar15 + 1;
            do {
              iVar17 = iVar17 + -1;
              *pbVar15 = ~*pbVar15;
              pbVar15 = pbVar15 + 2;
            } while (iVar17 != 0);
          }
        }
        else {
          while (uVar19 != 0) {
            pbVar15 = pbVar18 + 4;
            uVar19 = (int)uVar14 - 1;
            uVar14 = (ulong)uVar19;
            pbVar18[3] = ~pbVar18[3];
            *pbVar15 = ~*pbVar15;
            pbVar18 = pbVar15;
          }
        }
      }
      else if ((char)param_2[4] == '\x06') {
        uVar19 = *param_2;
        uVar14 = (ulong)uVar19;
        if (*(char *)((long)param_2 + 0x11) == '\b') {
          if (uVar19 != 0) {
            if (uVar19 < 9) {
              uVar25 = 0;
            }
            else {
              if (uVar19 < 0x11) {
                uVar23 = 0;
              }
              else {
                pbVar29 = pbVar18 + 0x20;
                uVar25 = 0x10;
                if ((uVar19 & 0xf) != 0) {
                  uVar25 = uVar14 & 0xf;
                }
                uVar23 = uVar14 - uVar25;
                uVar30 = uVar14;
                do {
                  uVar30 = uVar30 - 0x10;
                  pbVar11 = pbVar29 + 0x1c;
                  pbVar9 = pbVar29 + 0x20;
                  pbVar29[-0x1c] = ~pbVar29[-0x1c];
                  pbVar29[-0x18] = ~pbVar29[-0x18];
                  pbVar29[-0x14] = ~pbVar29[-0x14];
                  pbVar29[-0x10] = ~pbVar29[-0x10];
                  pbVar29[-0xc] = ~pbVar29[-0xc];
                  pbVar29[-8] = ~pbVar29[-8];
                  pbVar29[-4] = ~pbVar29[-4];
                  pbVar29[4] = ~pbVar29[4];
                  pbVar29[8] = ~pbVar29[8];
                  pbVar29[0xc] = ~pbVar29[0xc];
                  pbVar29[0x10] = ~pbVar29[0x10];
                  *pbVar29 = ~*pbVar29;
                  pbVar29[0x14] = ~pbVar29[0x14];
                  pbVar2 = pbVar29 + 0x1c;
                  pbVar29[0x18] = ~pbVar29[0x18];
                  pbVar10 = pbVar29 + 0x20;
                  pbVar29 = pbVar29 + 0x40;
                  *pbVar2 = ~*pbVar11;
                  *pbVar10 = ~*pbVar9;
                } while (uVar25 != uVar30);
                if (uVar25 < 9) {
                  pbVar15 = pbVar15 + uVar23 * 4;
                  uVar25 = uVar23 & 0xffffffff;
                  goto LAB_001640a4;
                }
              }
              uVar30 = 8;
              if ((uVar19 & 7) != 0) {
                uVar30 = uVar14 & 7;
              }
              uVar25 = uVar14 - uVar30;
              pbVar18 = pbVar18 + uVar23 * 4 + 0x10;
              pbVar15 = pbVar15 + uVar25 * 4;
              lVar24 = (uVar30 + uVar23) - uVar14;
              do {
                lVar24 = lVar24 + 8;
                pbVar10 = pbVar18 + 0xc;
                pbVar11 = pbVar18 + 0x10;
                pbVar18[-0xc] = ~pbVar18[-0xc];
                pbVar18[-8] = ~pbVar18[-8];
                pbVar18[-4] = ~pbVar18[-4];
                *pbVar18 = ~*pbVar18;
                pbVar18[4] = ~pbVar18[4];
                pbVar29 = pbVar18 + 0xc;
                pbVar18[8] = ~pbVar18[8];
                pbVar2 = pbVar18 + 0x10;
                pbVar18 = pbVar18 + 0x20;
                *pbVar29 = ~*pbVar10;
                *pbVar2 = ~*pbVar11;
              } while (lVar24 != 0);
            }
LAB_001640a4:
            iVar17 = uVar19 - (int)uVar25;
            pbVar15 = pbVar15 + 3;
            do {
              iVar17 = iVar17 + -1;
              *pbVar15 = ~*pbVar15;
              pbVar15 = pbVar15 + 4;
            } while (iVar17 != 0);
          }
        }
        else {
          while (uVar19 != 0) {
            pbVar15 = pbVar18 + 8;
            uVar19 = (int)uVar14 - 1;
            uVar14 = (ulong)uVar19;
            pbVar18[7] = ~pbVar18[7];
            *pbVar15 = ~*pbVar15;
            pbVar18 = pbVar15;
          }
        }
      }
    }
    uVar19 = *(uint *)(param_1 + 0x16c);
    if ((uVar19 & 1) != 0) {
      png_do_bgr(param_2,*(long *)(param_1 + 0x260) + 1);
      uVar19 = *(uint *)(param_1 + 0x16c);
    }
    if ((uVar19 >> 5 & 1) != 0) {
      if (*(long *)(lVar6 + 0x28) == local_38) {
        png_do_invert(param_2,*(long *)(param_1 + 0x260) + 1);
        return;
      }
      goto LAB_00164288;
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
LAB_00164288:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016428c  png_save_uint_32 =====

void png_save_uint_32(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}


// ===== 00164298  png_save_uint_16 =====

void png_save_uint_16(ushort *param_1,uint param_2)

{
  *param_1 = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  return;
}


// ===== 001642a8  png_write_sig =====

void png_write_sig(long param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xa1a0a0d474e5089;
  *(undefined4 *)(param_1 + 0x4dc) = 0x12;
  png_write_data(param_1,(long)&local_30 + (ulong)*(byte *)(param_1 + 0x2a5),
                 8 - (ulong)*(byte *)(param_1 + 0x2a5));
  if (*(byte *)(param_1 + 0x2a5) < 3) {
    *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x1000;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164338  png_write_chunk_start =====

void png_write_chunk_start(long param_1,byte *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    local_40 = (undefined1)((ulong)param_3 >> 0x18);
    local_3c = *param_2;
    local_3f = (undefined1)((ulong)param_3 >> 0x10);
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_3e = (undefined1)((ulong)param_3 >> 8);
    local_3b = param_2[1];
    uVar2 = (uint)local_3c;
    local_3a = param_2[2];
    uVar4 = (uint)local_3b;
    local_39 = param_2[3];
    uVar3 = (uint)local_3a;
    local_3d = (undefined1)param_3;
    uVar5 = (uint)local_39;
    png_write_data(param_1,&local_40,8);
    *(uint *)(param_1 + 0x250) = uVar2 << 0x18 | uVar4 << 0x10 | uVar3 << 8 | uVar5;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_3c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164410  png_write_chunk_data =====

void png_write_chunk_data(long param_1,long param_2,long param_3)

{
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    png_write_data();
    png_calculate_crc(param_1,param_2,param_3);
    return;
  }
  return;
}


// ===== 0016445c  png_write_chunk_end =====

void png_write_chunk_end(long param_1)

{
  uint uVar1;
  long lVar2;
  uint local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4dc) = 0x82;
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_2c = uVar1 >> 0x10 | uVar1 << 0x10;
    png_write_data(param_1,&local_2c,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001644c0  png_write_chunk =====

void png_write_chunk(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  FUN_001644cc(param_1,uVar1 >> 0x10 | uVar1 << 0x10);
  return;
}


// ===== 001644cc  FUN_001644cc =====

void FUN_001644cc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    if (param_4 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"length exceeds PNG maximum");
    }
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_4c = (undefined1)((ulong)param_2 >> 0x18);
    local_4b = (undefined1)((ulong)param_2 >> 0x10);
    local_4a = (undefined1)((ulong)param_2 >> 8);
    local_49 = (undefined1)param_2;
    local_50 = CONCAT13((char)param_4,
                        CONCAT12((char)(param_4 >> 8),
                                 CONCAT11((char)(param_4 >> 0x10),(char)(param_4 >> 0x18))));
    png_write_data(param_1,&local_50,8);
    *(int *)(param_1 + 0x250) = (int)param_2;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if ((param_3 != 0) && (param_4 != 0)) {
      png_write_data(param_1,param_3,param_4);
      png_calculate_crc(param_1,param_3,param_4);
    }
    *(undefined4 *)(param_1 + 0x4dc) = 0x82;
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_50 = uVar1 >> 0x10 | uVar1 << 0x10;
    png_write_data(param_1,&local_50,4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016460c  png_free_buffer_list =====

void png_free_buffer_list(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    *param_2 = 0;
    do {
      plVar1 = (long *)*plVar1;
      png_free(param_1);
    } while (plVar1 != (long *)0x0);
  }
  return;
}


// ===== 0016464c  png_write_IHDR =====

void png_write_IHDR(long param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5,
                   int param_6,int param_7,uint param_8)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((int)param_5 < 3) {
    if (param_5 == 0) {
      if ((0x10 < param_4) || (uVar2 = 1, (1 << (ulong)(param_4 & 0x1f) & 0x10116U) == 0)) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid bit depth for grayscale image");
      }
    }
    else {
      if (param_5 != 2) {
LAB_00164924:
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid image color type specified");
      }
      uVar2 = 3;
      if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Invalid bit depth for RGB image");
      }
    }
  }
  else if (param_5 == 3) {
    if ((7 < param_4 - 1) || ((0x8bU >> (ulong)(param_4 - 1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for paletted image");
    }
    uVar2 = 1;
  }
  else if (param_5 == 4) {
    uVar2 = 2;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for grayscale+alpha image");
    }
  }
  else {
    if (param_5 != 6) goto LAB_00164924;
    uVar2 = 4;
    if ((param_4 != 8) && (param_4 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid bit depth for RGBA image");
    }
  }
  *(undefined1 *)(param_1 + 0x2a3) = uVar2;
  if (param_6 != 0) {
    png_warning(param_1,"Invalid compression type specified");
  }
  if (((*(byte *)(param_1 + 0x418) >> 2 & 1) == 0) || ((*(byte *)(param_1 + 0x165) >> 4 & 1) != 0))
  {
    if (param_7 == 0) goto LAB_001647c8;
  }
  else if ((param_7 == 0) || ((param_5 & 0xfffffffb) == 2 && param_7 == 0x40)) goto LAB_001647c8;
  png_warning(param_1,"Invalid filter type specified");
  param_7 = 0;
LAB_001647c8:
  if (1 < param_8) {
    png_warning(param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  local_60 = (undefined1)param_4;
  *(undefined1 *)(param_1 + 0x2a0) = local_60;
  local_5f = (undefined1)param_5;
  *(undefined1 *)(param_1 + 0x29f) = local_5f;
  param_4 = *(byte *)(param_1 + 0x2a3) * param_4;
  local_5c = (undefined1)param_8;
  *(undefined1 *)(param_1 + 0x29c) = local_5c;
  local_5d = (undefined1)param_7;
  *(undefined1 *)(param_1 + 0x41c) = local_5d;
  *(undefined1 *)(param_1 + 0x488) = 0;
  *(uint *)(param_1 + 0x230) = param_2;
  *(int *)(param_1 + 0x234) = (int)param_3;
  *(char *)(param_1 + 0x2a2) = (char)param_4;
  if ((param_4 & 0xff) < 8) {
    uVar3 = (ulong)(param_4 & 0xff) * (ulong)param_2 + 7 >> 3;
  }
  else {
    uVar3 = (ulong)param_2 * (ulong)(param_4 >> 3 & 0x1f);
  }
  *(ulong *)(param_1 + 0x240) = uVar3;
  *(byte *)(param_1 + 0x2a4) = *(byte *)(param_1 + 0x2a3);
  local_68 = (undefined1)(param_2 >> 0x18);
  local_67 = (undefined1)(param_2 >> 0x10);
  local_66 = (undefined1)(param_2 >> 8);
  local_64 = (undefined1)((ulong)param_3 >> 0x18);
  *(uint *)(param_1 + 0x23c) = param_2;
  *(undefined1 *)(param_1 + 0x2a1) = local_60;
  local_65 = (undefined1)param_2;
  local_63 = (undefined1)((ulong)param_3 >> 0x10);
  local_62 = (undefined1)((ulong)param_3 >> 8);
  local_61 = (undefined1)param_3;
  local_5e = 0;
  FUN_001644cc(param_1,0x49484452,&local_68,0xd);
  *(uint *)(param_1 + 0x428) = param_2;
  *(int *)(param_1 + 0x42c) = (int)param_3;
  if (*(char *)(param_1 + 0x29e) == '\0') {
    uVar2 = 8;
    if ((*(char *)(param_1 + 0x29f) != '\x03') && (uVar2 = 0xf8, *(byte *)(param_1 + 0x2a0) < 8)) {
      uVar2 = 8;
    }
    *(undefined1 *)(param_1 + 0x29e) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x164) = 1;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164944  png_write_PLTE =====

void png_write_PLTE(long param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_54;
  undefined2 local_53;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(byte *)(param_1 + 0x29f) == 3) {
    if (((*(uint *)(param_1 + 0x418) & 1) == 0 && param_3 == 0) ||
       ((uint)(1 << (ulong)(*(byte *)(param_1 + 0x2a0) & 0x1f)) < param_3)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid number of colors in palette");
    }
  }
  else {
    if ((0x100 < param_3) || ((*(uint *)(param_1 + 0x418) & 1) == 0 && param_3 == 0)) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
        pcVar4 = "Invalid number of colors in palette";
LAB_00164b14:
        png_warning(param_1,pcVar4);
        return;
      }
      goto LAB_00164b30;
    }
    if ((*(byte *)(param_1 + 0x29f) >> 1 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
        pcVar4 = "Ignoring request to write a PLTE chunk in grayscale PNG";
        goto LAB_00164b14;
      }
      goto LAB_00164b30;
    }
  }
  iVar3 = param_3 * 3;
  *(undefined4 *)(param_1 + 0x4dc) = 0x22;
  *(short *)(param_1 + 0x290) = (short)param_3;
  local_50._3_1_ = (undefined1)iVar3;
  local_50._0_3_ =
       CONCAT12((char)((uint)iVar3 >> 8),
                CONCAT11((char)((uint)iVar3 >> 0x10),(char)((uint)iVar3 >> 0x18)));
  local_4c = (undefined4)DAT_00124438;
  png_write_data(param_1,&local_50,8);
  *(undefined4 *)(param_1 + 0x250) = 0x504c5445;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,&local_4c,4);
  *(undefined4 *)(param_1 + 0x4dc) = 0x42;
  if (param_3 != 0) {
    do {
      local_54 = *param_2;
      local_53 = *(undefined2 *)(param_2 + 1);
      png_write_data(param_1,&local_54,3);
      png_calculate_crc(param_1,&local_54,3);
      param_3 = param_3 - 1;
      param_2 = param_2 + 3;
    } while (param_3 != 0);
  }
  *(undefined4 *)(param_1 + 0x4dc) = 0x82;
  uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
  local_50 = uVar1 >> 0x10 | uVar1 << 0x10;
  png_write_data(param_1,&local_50,4);
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 2;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00164b30:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00164b34  png_compress_IDAT =====

void png_compress_IDAT(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  
  if (*(int *)(param_1 + 0x170) != 0x49444154) {
    plVar9 = *(long **)(param_1 + 0x1e8);
    if (plVar9 == (long *)0x0) {
      puVar5 = (undefined8 *)png_malloc(param_1,(ulong)*(uint *)(param_1 + 0x1f0) + 8);
      *(undefined8 **)(param_1 + 0x1e8) = puVar5;
      *puVar5 = 0;
    }
    else {
      plVar8 = (long *)*plVar9;
      if (plVar8 != (long *)0x0) {
        *plVar9 = 0;
        do {
          plVar8 = (long *)*plVar8;
          png_free(param_1);
        } while (plVar8 != (long *)0x0);
      }
    }
    uVar6 = FUN_00165198(param_1);
    iVar3 = FUN_00164f00(param_1,0x49444154,uVar6);
    if (iVar3 != 0) {
LAB_00164ef4:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
    }
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1f0);
    *(long *)(param_1 + 400) = *(long *)(param_1 + 0x1e8) + 8;
  }
  *(undefined8 *)(param_1 + 0x178) = param_2;
LAB_00164c00:
  do {
    uVar7 = param_3;
    if (0xfffffffe < param_3) {
      uVar7 = 0xffffffff;
    }
    *(int *)(param_1 + 0x180) = (int)uVar7;
    iVar3 = param_4;
    if (param_3 >> 0x20 != 0) {
      iVar3 = 0;
    }
    iVar4 = deflate(param_1 + 0x178,iVar3);
    uVar11 = *(uint *)(param_1 + 0x180);
    iVar3 = *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x180) = 0;
    param_3 = (param_3 - uVar7) + (ulong)uVar11;
    if (iVar3 == 0) {
      lVar14 = *(long *)(param_1 + 0x1e8);
      iVar3 = *(int *)(param_1 + 0x1f0);
      pbVar1 = (byte *)(lVar14 + 8);
      if (((((*(byte *)(param_1 + 0x164) >> 2 & 1) == 0) && (*(char *)(param_1 + 0x488) == '\0')) &&
          (uVar7 = FUN_00165198(param_1), uVar7 < 0x4001)) &&
         ((bVar2 = *pbVar1, (bVar2 & 0xf) == 8 && ((bVar2 & 0xf0) < 0x71)))) {
        uVar13 = 0x80L << (ulong)(bVar2 >> 4);
        if (uVar7 <= uVar13) {
          cVar10 = (bVar2 & 0xf0) + 8;
          uVar12 = (uint)(bVar2 >> 4);
          uVar11 = uVar12 << 0xc | 0x800;
          do {
            uVar12 = uVar12 - 1;
            uVar11 = uVar11 - 0x1000;
            cVar10 = cVar10 + -0x10;
            if (uVar12 == 0) break;
            uVar13 = uVar13 >> 1 & 0x7fffffff;
          } while (uVar7 <= uVar13);
          *(char *)(lVar14 + 8) = cVar10;
          uVar12 = *(byte *)(lVar14 + 9) & 0xe0;
          bVar2 = (byte)uVar12;
          *(byte *)(lVar14 + 9) = (bVar2 | bVar2 + (char)((uVar12 + uVar11) / 0x1f) * -0x1f) ^ 0x1f;
        }
      }
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x44c) == 0) {
          FUN_001644cc(param_1,0x49444154,pbVar1,iVar3);
        }
        else {
          png_write_fdAT(param_1,pbVar1,iVar3);
        }
      }
      *(byte **)(param_1 + 400) = pbVar1;
      *(int *)(param_1 + 0x198) = iVar3;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 4;
      if ((param_4 != 0) && (iVar4 == 0)) goto LAB_00164c00;
    }
    if (iVar4 != 0) {
      if ((param_4 != 4) || (iVar4 != 1)) {
        png_zstream_error(param_1,iVar4);
        goto LAB_00164ef4;
      }
      lVar14 = *(long *)(param_1 + 0x1e8);
      iVar4 = *(int *)(param_1 + 0x1f0);
      if (((((*(byte *)(param_1 + 0x164) >> 2 & 1) != 0) || (*(char *)(param_1 + 0x488) != '\0')) ||
          (uVar7 = FUN_00165198(param_1), 0x4000 < uVar7)) ||
         ((bVar2 = *(byte *)(lVar14 + 8), (bVar2 & 0xf) != 8 || (0x70 < (bVar2 & 0xf0)))))
      goto LAB_00164e60;
      uVar13 = 0x80L << (ulong)(bVar2 >> 4);
      if (uVar13 < uVar7) goto LAB_00164e60;
      cVar10 = (bVar2 & 0xf0) + 8;
      uVar12 = (uint)(bVar2 >> 4);
      uVar11 = uVar12 << 0xc | 0x800;
      break;
    }
    if (param_3 == 0) {
      if (param_4 != 4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Z_OK on Z_FINISH with output space");
    }
  } while( true );
  while (uVar13 = uVar13 >> 1 & 0x7fffffff, uVar7 <= uVar13) {
    uVar12 = uVar12 - 1;
    uVar11 = uVar11 - 0x1000;
    cVar10 = cVar10 + -0x10;
    if (uVar12 == 0) break;
  }
  *(char *)(lVar14 + 8) = cVar10;
  uVar12 = *(byte *)(lVar14 + 9) & 0xe0;
  bVar2 = (byte)uVar12;
  *(byte *)(lVar14 + 9) = (bVar2 | bVar2 + (char)((uVar12 + uVar11) / 0x1f) * -0x1f) ^ 0x1f;
LAB_00164e60:
  if (iVar4 != iVar3) {
    if (*(int *)(param_1 + 0x44c) == 0) {
      FUN_001644cc(param_1,0x49444154,lVar14 + 8);
    }
    else {
      png_write_fdAT(param_1,lVar14 + 8,iVar4 - iVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0xc;
  return;
}


// ===== 00164f00  FUN_00164f00 =====

int FUN_00164f00(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = param_2 & 0xffffffff;
  iVar5 = *(int *)(param_1 + 0x170);
  if (iVar5 != 0) {
    local_a8 = (undefined1)(uVar7 >> 0x18);
    local_a7 = (undefined1)(uVar7 >> 0x10);
    local_a6 = (undefined1)(uVar7 >> 8);
    local_a4 = 0x203a;
    local_a2 = (undefined1)((uint)iVar5 >> 0x18);
    local_a1 = (undefined1)((uint)iVar5 >> 0x10);
    local_a5 = (undefined1)param_2;
    local_a0 = (undefined1)((uint)iVar5 >> 8);
    local_9f = (undefined1)iVar5;
    png_safecat(&local_a8,0x40,10," using zstream");
    png_warning(param_1,&local_a8);
    if (*(int *)(param_1 + 0x170) == 0x49444154) {
      *(char **)(param_1 + 0x1a8) = "in use by IDAT";
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return -2;
      }
      goto LAB_00165194;
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  if ((int)param_2 == 0x49444154) {
    iVar5 = *(int *)(param_1 + 500);
    iVar1 = *(int *)(param_1 + 0x1f8);
    iVar8 = *(int *)(param_1 + 0x1fc);
    iVar2 = *(int *)(param_1 + 0x200);
    if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
      uVar9 = (uint)(*(char *)(param_1 + 0x29e) != '\b');
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x204);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x208);
    iVar1 = *(int *)(param_1 + 0x20c);
    iVar8 = *(int *)(param_1 + 0x210);
    iVar2 = *(int *)(param_1 + 0x214);
    uVar9 = *(uint *)(param_1 + 0x218);
  }
  if (param_3 < 0x4001) {
    uVar7 = (ulong)(uint)(1 << (ulong)(iVar8 - 1U & 0x1f));
    if (param_3 + 0x106 <= uVar7) {
      do {
        uVar7 = uVar7 >> 1;
        iVar8 = iVar8 + -1;
      } while ((uint)(param_3 + 0x106) <= (uint)uVar7);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x168);
  if (((uVar6 >> 1 & 1) != 0) &&
     ((((*(int *)(param_1 + 0x21c) != iVar5 || (*(int *)(param_1 + 0x220) != iVar1)) ||
       (*(int *)(param_1 + 0x224) != iVar8)) ||
      ((*(int *)(param_1 + 0x228) != iVar2 || (*(uint *)(param_1 + 0x22c) != uVar9)))))) {
    iVar4 = deflateEnd(param_1 + 0x178);
    if (iVar4 != 0) {
      png_warning(param_1,"deflateEnd failed (ignored)");
    }
    uVar6 = *(uint *)(param_1 + 0x168) & 0xfffffffd;
    *(uint *)(param_1 + 0x168) = uVar6;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if ((uVar6 >> 1 & 1) == 0) {
    iVar5 = deflateInit2_(param_1 + 0x178,iVar5,iVar1,iVar8,iVar2,uVar9,"1.2.8",0x70);
    if (iVar5 != 0) {
LAB_0016513c:
      png_zstream_error(param_1,iVar5);
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return iVar5;
      }
      goto LAB_00165194;
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
  }
  else {
    iVar5 = deflateReset(param_1 + 0x178);
    if (iVar5 != 0) goto LAB_0016513c;
  }
  *(int *)(param_1 + 0x170) = (int)param_2;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 0;
  }
LAB_00165194:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00165198  FUN_00165198 =====

long FUN_00165198(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x234);
  uVar7 = (ulong)uVar2;
  if (*(ulong *)(param_1 + 0x240) >> 0xf != 0 || uVar2 >> 0xf != 0) {
    return 0xffffffff;
  }
  if (*(char *)(param_1 + 0x29c) == '\0') {
    return uVar7 + uVar7 * *(ulong *)(param_1 + 0x240);
  }
  bVar4 = *(byte *)(param_1 + 0x2a2);
  uVar8 = (ulong)bVar4;
  uVar3 = *(uint *)(param_1 + 0x230);
  uVar1 = uVar3 + 7;
  if (bVar4 < 8) {
    if (uVar1 < 8) {
      lVar6 = 0;
      if (7 < uVar3 + 3) goto LAB_0016523c;
LAB_001652f8:
      if (3 < uVar3 + 3) goto LAB_00165304;
    }
    else {
      uVar9 = uVar7 + 7 >> 3;
      lVar6 = uVar9 + uVar9 * (uVar8 * (uVar1 >> 3) + 7 >> 3);
      if (uVar3 + 3 < 8) goto LAB_001652f8;
LAB_0016523c:
      uVar7 = uVar7 + 7 >> 3;
      lVar6 = uVar7 + uVar7 * (uVar8 * (uVar3 + 3 >> 3) + 7 >> 3) + lVar6;
LAB_00165304:
      uVar7 = (ulong)(uVar2 + 3 >> 3);
      lVar6 = uVar7 + uVar7 * (uVar8 * (uVar3 + 3 >> 2) + 7 >> 3) + lVar6;
    }
    if (uVar3 + 1 < 4) {
      if (uVar3 + 1 < 2) goto joined_r0x001653fc;
    }
    else {
      uVar7 = (ulong)(uVar2 + 3 >> 2);
      lVar6 = uVar7 + uVar7 * (uVar8 * (uVar3 + 1 >> 2) + 7 >> 3) + lVar6;
    }
    uVar7 = (ulong)(uVar2 + 1 >> 2);
    lVar6 = uVar7 + uVar7 * (uVar8 * (uVar3 + 1 >> 1) + 7 >> 3) + lVar6;
joined_r0x001653fc:
    if (uVar3 < 2) {
      if (uVar3 == 0) {
        return lVar6;
      }
    }
    else {
      uVar7 = (ulong)(uVar2 + 1 >> 1);
      lVar6 = uVar7 + uVar7 * ((uVar3 >> 1) * uVar8 + 7 >> 3) + lVar6;
    }
    return (ulong)(uVar2 >> 1) + (ulong)(uVar2 >> 1) * (uVar3 * uVar8 + 7 >> 3) + lVar6;
  }
  uVar5 = (uint)(bVar4 >> 3);
  if (uVar1 < 8) {
    lVar6 = 0;
    if (7 < uVar3 + 3) goto LAB_001651f8;
LAB_00165284:
    if (3 < uVar3 + 3) goto LAB_00165290;
  }
  else {
    uVar8 = uVar7 + 7 >> 3;
    lVar6 = uVar8 + uVar8 * (ulong)uVar5 * (ulong)(uVar1 >> 3);
    if (uVar3 + 3 < 8) goto LAB_00165284;
LAB_001651f8:
    uVar8 = uVar7 + 7 >> 3;
    lVar6 = uVar8 + uVar8 * (ulong)uVar5 * (ulong)(uVar3 + 3 >> 3) + lVar6;
LAB_00165290:
    uVar8 = (ulong)(uVar2 + 3 >> 3);
    lVar6 = uVar8 + uVar8 * (ulong)uVar5 * (ulong)(uVar3 + 3 >> 2) + lVar6;
  }
  if (uVar3 + 1 < 4) {
    if (uVar3 + 1 < 2) goto joined_r0x00165384;
  }
  else {
    uVar8 = uVar7 + 3 >> 2;
    lVar6 = uVar8 + uVar8 * (ulong)uVar5 * (ulong)(uVar3 + 1 >> 2) + lVar6;
  }
  uVar8 = (ulong)(uVar2 + 1 >> 2);
  lVar6 = uVar8 + uVar8 * (ulong)uVar5 * (ulong)(uVar3 + 1 >> 1) + lVar6;
joined_r0x00165384:
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      return lVar6;
    }
  }
  else {
    uVar7 = uVar7 + 1 >> 1;
    lVar6 = uVar7 + uVar7 * (ulong)(uVar3 >> 1) * (ulong)uVar5 + lVar6;
  }
  return (ulong)(uVar2 >> 1) + (ulong)(uVar2 >> 1) * (ulong)uVar3 * (ulong)uVar5 + lVar6;
}


// ===== 00165440  png_write_fdAT =====

void png_write_fdAT(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_1 != 0) {
    iVar1 = (int)param_3 + 4;
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_50 = CONCAT13((char)iVar1,
                        CONCAT12((char)((uint)iVar1 >> 8),
                                 CONCAT11((char)((uint)iVar1 >> 0x10),(char)((uint)iVar1 >> 0x18))))
    ;
    local_4c = (undefined4)DAT_00124470;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x66644154;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
  }
  uVar2 = (*(uint *)(param_1 + 0x424) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x424) & 0xff00ff) << 8;
  local_54 = uVar2 >> 0x10 | uVar2 << 0x10;
  png_write_data(param_1,&local_54,4);
  png_calculate_crc(param_1,&local_54,4);
  if ((param_2 != 0) && (param_3 != 0)) {
    png_write_data(param_1,param_2,param_3);
    png_calculate_crc(param_1,param_2,param_3);
  }
  *(undefined4 *)(param_1 + 0x4dc) = 0x82;
  uVar2 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
  local_50 = uVar2 >> 0x10 | uVar2 << 0x10;
  png_write_data(param_1,&local_50,4);
  *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00165598  png_write_IEND =====

void png_write_IEND(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_40;
  undefined4 local_3c;
  long local_38;
  
  uVar3 = DAT_001244c0;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_40 = 0;
    local_3c = (undefined4)uVar3;
    png_write_data(param_1,&local_40,8);
    *(undefined4 *)(param_1 + 0x250) = 0x49454e44;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_3c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x82;
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_40 = uVar1 >> 0x10 | uVar1 << 0x10;
    png_write_data(param_1,&local_40,4);
  }
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 0x10;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00165668  png_write_gAMA_fixed =====

void png_write_gAMA_fixed(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_2c = uVar1 >> 0x10 | uVar1 << 0x10;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_001644cc(param_1,0x67414d41,&local_2c,4);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001656c4  png_write_sRGB =====

void png_write_sRGB(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined1 local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (3 < param_2) {
    png_warning(param_1,"Invalid sRGB rendering intent specified");
  }
  local_3c[0] = (char)param_2;
  FUN_001644cc(param_1,0x73524742,local_3c,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00165744  png_write_iCCP =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_iCCP(long param_1,undefined8 param_2,byte *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  byte *local_4d0;
  ulong uStack_4c8;
  uint local_4c0;
  undefined1 auStack_4bc [1035];
  undefined1 auStack_b1 [81];
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"No profile for iCCP chunk");
  }
  uVar9 = (ulong)*param_3 << 0x18 | (ulong)param_3[1] << 0x10 | (ulong)param_3[2] << 8 |
          (ulong)param_3[3];
  if ((uint)uVar9 < 0x84) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile too short");
  }
  if (((param_3[3] & 3) != 0) && (3 < param_3[8])) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ICC profile length invalid (not a multiple of 4)");
  }
  iVar7 = png_check_keyword(param_1,param_2,auStack_b1);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iCCP: invalid keyword");
  }
  iVar1 = iVar7 + 2;
  auStack_b1[iVar7 + 1] = 0;
  local_4c0 = 0;
  local_4d0 = param_3;
  uStack_4c8 = uVar9;
  iVar7 = FUN_00165a04(param_1,0x69434350,&local_4d0,iVar1);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
  }
  if (param_1 == 0) {
    if ((local_4c0 < 0x401) || (_DAT_000001e8 == (long *)0x0)) {
      if (0x400 < local_4c0) goto LAB_001659f0;
      goto LAB_00165978;
    }
    uVar8 = local_4c0 - 0x400;
    plVar10 = _DAT_000001e8;
    do {
      bVar5 = uVar8 < _DAT_000001f0;
      uVar3 = uVar8 - _DAT_000001f0;
      uVar8 = 0;
      if (!bVar5) {
        uVar8 = uVar3;
      }
      bVar6 = bVar5 || uVar3 == 0;
    } while ((!bVar5 && uVar3 != 0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0));
  }
  else {
    iVar7 = local_4c0 + iVar1;
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_60 = CONCAT13((char)iVar7,
                        CONCAT12((char)((uint)iVar7 >> 8),
                                 CONCAT11((char)((uint)iVar7 >> 0x10),(char)((uint)iVar7 >> 0x18))))
    ;
    local_5c = (undefined4)ram0x00124428;
    png_write_data(param_1,&local_60,8);
    *(undefined4 *)(param_1 + 0x250) = 0x69434350;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_5c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if (iVar1 != 0) {
      png_write_data(param_1,auStack_b1,iVar1);
      png_calculate_crc(param_1,auStack_b1,iVar1);
    }
    puVar2 = auStack_4bc;
    plVar10 = *(long **)(param_1 + 0x1e8);
    uVar3 = 0x400;
    uVar8 = local_4c0;
    if (local_4c0 < 0x401) {
      uVar3 = local_4c0;
    }
    while( true ) {
      if (uVar3 != 0) {
        png_write_data(param_1,puVar2,uVar3);
        png_calculate_crc(param_1,puVar2,uVar3);
      }
      uVar8 = uVar8 - uVar3;
      bVar6 = uVar8 == 0;
      if ((uVar8 == 0) || (plVar10 == (long *)0x0)) break;
      puVar2 = (undefined1 *)(plVar10 + 1);
      plVar10 = (long *)*plVar10;
      uVar3 = *(uint *)(param_1 + 0x1f0);
      if (uVar8 <= *(uint *)(param_1 + 0x1f0)) {
        uVar3 = uVar8;
      }
    }
  }
  if (!bVar6) {
LAB_001659f0:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"error writing ancillary chunked compressed data");
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4dc) = 0x82;
    uVar8 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_60 = uVar8 >> 0x10 | uVar8 << 0x10;
    png_write_data(param_1,&local_60,4);
  }
LAB_00165978:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00165a04  FUN_00165a04 =====

ulong FUN_00165a04(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  
  uVar5 = FUN_00164f00(param_1,param_2,param_3[1]);
  if ((int)uVar5 == 0) {
    uVar1 = *param_3;
    uVar9 = param_3[1];
    iVar10 = 0x400;
    *(byte **)(param_1 + 400) = (byte *)((long)param_3 + 0x14);
    *(undefined8 *)(param_1 + 0x178) = uVar1;
    *(undefined4 *)(param_1 + 0x198) = 0x400;
    puVar11 = (undefined8 *)(param_1 + 0x1e8);
    do {
      uVar5 = uVar9;
      if (0xfffffffe < uVar9) {
        uVar5 = 0xffffffff;
      }
      uVar9 = uVar9 - uVar5;
      *(int *)(param_1 + 0x180) = (int)uVar5;
      puVar6 = puVar11;
      if (*(int *)(param_1 + 0x198) == 0) {
        if (iVar10 + param_4 < 0) {
LAB_00165af4:
          uVar4 = 0xfffffffc;
          break;
        }
        puVar6 = (undefined8 *)*puVar11;
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)png_malloc_base(param_1,(ulong)*(uint *)(param_1 + 0x1f0) + 8);
          if (puVar6 == (undefined8 *)0x0) goto LAB_00165af4;
          *puVar6 = 0;
          *puVar11 = puVar6;
        }
        *(undefined8 **)(param_1 + 400) = puVar6 + 1;
        iVar10 = *(int *)(param_1 + 0x1f0) + iVar10;
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x1f0);
      }
      uVar4 = deflate(param_1 + 0x178,(ulong)(uVar9 == 0) << 2);
      uVar8 = *(uint *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x180) = 0;
      uVar9 = uVar9 + uVar8;
      puVar11 = puVar6;
    } while (uVar4 == 0);
    iVar2 = *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x198) = 0;
    iVar10 = iVar10 - iVar2;
    *(int *)(param_3 + 2) = iVar10;
    if (0x7ffffffe < (uint)(iVar10 + param_4)) {
      *(char **)(param_1 + 0x1a8) = "compressed data too long";
      *(undefined4 *)(param_1 + 0x170) = 0;
      return 0xfffffffc;
    }
    uVar5 = (ulong)uVar4;
    png_zstream_error(param_1,uVar5);
    *(undefined4 *)(param_1 + 0x170) = 0;
    if ((uVar4 == 1) && (uVar9 == 0)) {
      uVar5 = param_3[1];
      if (uVar5 < 0x4001) {
        bVar3 = *(byte *)((long)param_3 + 0x14);
        if ((bVar3 & 0xf) != 8) {
          return 0;
        }
        if (0x70 < (bVar3 & 0xf0)) {
          return 0;
        }
        uVar9 = 0x80L << (ulong)(bVar3 >> 4);
        if (uVar5 <= uVar9) {
          cVar7 = (bVar3 & 0xf0) + 8;
          uVar8 = (uint)(bVar3 >> 4);
          uVar4 = uVar8 << 0xc | 0x800;
          do {
            uVar8 = uVar8 - 1;
            uVar4 = uVar4 - 0x1000;
            cVar7 = cVar7 + -0x10;
            if (uVar8 == 0) break;
            uVar9 = uVar9 >> 1 & 0x7fffffff;
          } while (uVar5 <= uVar9);
          *(char *)((long)param_3 + 0x14) = cVar7;
          uVar8 = *(byte *)((long)param_3 + 0x15) & 0xe0;
          bVar3 = (byte)uVar8;
          *(byte *)((long)param_3 + 0x15) =
               (bVar3 | bVar3 + (char)((uVar8 + uVar4) / 0x1f) * -0x1f) ^ 0x1f;
          return 0;
        }
      }
      return 0;
    }
  }
  return uVar5;
}


// ===== 00165c5c  png_write_sPLT =====

void png_write_sPLT(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  ushort local_bc [2];
  undefined1 auStack_b8 [80];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar12 = (char *)(param_2 + 1);
  iVar2 = *(int *)(param_2 + 3);
  iVar1 = 6;
  if (*pcVar12 != '\b') {
    iVar1 = 10;
  }
  iVar7 = png_check_keyword(param_1,*param_2,auStack_b8);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"sPLT: invalid keyword");
  }
  if (param_1 == 0) {
    if (0 < (int)*(uint *)(param_2 + 3)) {
      puVar8 = (ushort *)param_2[2];
      puVar10 = puVar8 + (ulong)*(uint *)(param_2 + 3) * 5;
      if (*(char *)(param_2 + 1) == '\b') {
        do {
          uVar13 = *(undefined8 *)puVar8;
          local_c4 = CONCAT13((char)((ulong)uVar13 >> 0x30),
                              CONCAT12((char)((ulong)uVar13 >> 0x20),
                                       CONCAT11((char)((ulong)uVar13 >> 0x10),(char)uVar13)));
          puVar9 = puVar8 + 4;
          puVar8 = puVar8 + 5;
          local_c0 = CONCAT22(local_c0._2_2_,*puVar9 >> 8 | (ushort)((*puVar9 & 0xff00ff) << 8));
        } while (puVar8 < puVar10);
      }
      else {
        do {
          local_c4 = CONCAT22(puVar8[1] >> 8 | (ushort)((puVar8[1] & 0xff00ff) << 8),
                              *puVar8 >> 8 | (ushort)((*puVar8 & 0xff00ff) << 8));
          local_c0 = CONCAT22(puVar8[3] >> 8 | (ushort)((puVar8[3] & 0xff00ff) << 8),
                              puVar8[2] >> 8 | (ushort)((puVar8[2] & 0xff00ff) << 8));
          puVar9 = puVar8 + 4;
          puVar8 = puVar8 + 5;
          local_bc[0] = *puVar9 >> 8 | (ushort)((*puVar9 & 0xff00ff) << 8);
        } while (puVar8 < puVar10);
      }
    }
LAB_00165f40:
    if (param_1 == 0) goto LAB_00165f6c;
  }
  else {
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    iVar2 = iVar7 + iVar2 * iVar1 + 2;
    local_c4._0_2_ = CONCAT11((char)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 0x18));
    local_c4._3_1_ = (undefined1)iVar2;
    local_c4._0_3_ = CONCAT12((char)((uint)iVar2 >> 8),(undefined2)local_c4);
    local_c0 = (undefined4)DAT_00124478;
    png_write_data(param_1,&local_c4,8);
    *(undefined4 *)(param_1 + 0x250) = 0x73504c54;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_c0,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if (iVar7 != -1) {
      png_write_data(param_1,auStack_b8,iVar7 + 1);
      png_calculate_crc(param_1,auStack_b8,iVar7 + 1);
    }
    png_write_data(param_1,pcVar12,1);
    png_calculate_crc(param_1,pcVar12,1);
    if (0 < *(int *)(param_2 + 3)) {
      puVar8 = (ushort *)(param_2[2] + 4);
      do {
        uVar6 = local_c4;
        uVar3 = puVar8[-2];
        if (*pcVar12 == '\b') {
          local_c4._0_2_ = CONCAT11((char)puVar8[-1],(char)uVar3);
          local_c4._3_1_ = SUB41(uVar6,3);
          local_c4._0_3_ = CONCAT12((char)*puVar8,(undefined2)local_c4);
          uVar3 = puVar8[1];
          puVar9 = (ushort *)&local_c0;
          puVar11 = (undefined1 *)((ulong)&local_c4 | 3);
          puVar10 = (ushort *)&local_c0;
        }
        else {
          local_c4 = CONCAT22(puVar8[-1] >> 8 | (ushort)((puVar8[-1] & 0xff00ff) << 8),
                              uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8));
          uVar3 = puVar8[1];
          local_c0._0_3_ =
               CONCAT12((char)(uVar3 >> 8),*puVar8 >> 8 | (ushort)((*puVar8 & 0xff00ff) << 8));
          puVar9 = local_bc;
          puVar11 = (undefined1 *)((long)&local_c0 + 3);
          puVar10 = local_bc;
        }
        *puVar11 = (char)uVar3;
        uVar3 = puVar8[2];
        *(char *)((long)puVar10 + 1) = (char)uVar3;
        *(char *)puVar9 = (char)(uVar3 >> 8);
        png_write_data(param_1,&local_c4,iVar1);
        png_calculate_crc(param_1,&local_c4,iVar1);
        puVar10 = puVar8 + 3;
        puVar8 = puVar8 + 5;
      } while (puVar10 < (ushort *)(param_2[2] + (long)*(int *)(param_2 + 3) * 10));
      goto LAB_00165f40;
    }
  }
  *(undefined4 *)(param_1 + 0x4dc) = 0x82;
  uVar4 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
  local_c8 = uVar4 >> 0x10 | uVar4 << 0x10;
  png_write_data(param_1,&local_c8,4);
LAB_00165f6c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00165fb0  png_write_sBIT =====

void png_write_sBIT(long param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if ((param_3 >> 1 & 1) == 0) {
    bVar6 = param_2[3];
    if ((bVar6 != 0) && (bVar6 <= *(byte *)(param_1 + 0x2a1))) {
      uVar5 = 1;
      local_2c = bVar6;
joined_r0x00166050:
      if ((param_3 >> 2 & 1) != 0) {
        bVar6 = param_2[4];
        if ((bVar6 == 0) || (*(byte *)(param_1 + 0x2a1) < bVar6)) goto LAB_00166068;
        pbVar7 = (byte *)((ulong)&local_2c | uVar5);
        uVar5 = uVar5 + 1;
        *pbVar7 = bVar6;
      }
      FUN_001644cc(param_1,0x73424954,&local_2c,uVar5);
      if (*(long *)(lVar4 + 0x28) == local_28) {
        return;
      }
      goto LAB_001660d0;
    }
  }
  else {
    if (param_3 == 3) {
      bVar6 = 8;
      bVar1 = *param_2;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x2a1);
      bVar1 = *param_2;
    }
    if (((((bVar1 != 0) && (bVar1 <= bVar6)) && (bVar2 = param_2[1], bVar2 != 0)) &&
        ((bVar2 <= bVar6 && (bVar3 = param_2[2], bVar3 != 0)))) && (bVar3 <= bVar6)) {
      uVar5 = 3;
      local_2b = bVar2;
      local_2a = bVar3;
      local_2c = bVar1;
      goto joined_r0x00166050;
    }
  }
LAB_00166068:
  if (*(long *)(lVar4 + 0x28) == local_28) {
    png_warning(param_1,"Invalid sBIT depth specified");
    return;
  }
LAB_001660d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001660d4  png_write_cHRM_fixed =====

void png_write_cHRM_fixed(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  png_save_int_32(auStack_58,param_2[6]);
  png_save_int_32(auStack_54,param_2[7]);
  png_save_int_32(auStack_50,*param_2);
  png_save_int_32(auStack_4c,param_2[1]);
  png_save_int_32(auStack_48,param_2[2]);
  png_save_int_32(auStack_44,param_2[3]);
  png_save_int_32(auStack_40,param_2[4]);
  png_save_int_32(auStack_3c,param_2[5]);
  FUN_001644cc(param_1,0x6348524d,auStack_58,0x20);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001661a0  png_write_tRNS =====

void png_write_tRNS(long param_1,undefined8 param_2,long param_3,uint param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  if (param_5 == 0) {
    uVar1 = *(ushort *)(param_3 + 8);
    if (1 << (ulong)(*(byte *)(param_1 + 0x2a0) & 0x1f) <= (int)(uint)uVar1) {
      if (*(long *)(lVar4 + 0x28) == local_28) {
        png_app_warning(param_1,"Ignoring attempt to write tRNS chunk out-of-range for bit_depth");
        return;
      }
      goto LAB_00166364;
    }
    local_30 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
    uVar5 = 2;
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 3) {
        if (((int)param_4 < 1) || (*(ushort *)(param_1 + 0x290) < param_4)) {
          if (*(long *)(lVar4 + 0x28) == local_28) {
            png_app_warning(param_1,"Invalid number of transparent colors specified");
            return;
          }
        }
        else if (*(long *)(lVar4 + 0x28) == local_28) {
          FUN_001644cc(param_1,0x74524e53,param_2,param_4);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x28) == local_28) {
        png_app_warning(param_1,"Can\'t write tRNS with an alpha channel");
        return;
      }
      goto LAB_00166364;
    }
    uVar1 = *(ushort *)(param_3 + 2);
    uVar2 = *(ushort *)(param_3 + 4);
    uVar3 = *(ushort *)(param_3 + 6);
    local_30 = uVar1 >> 8 | (ushort)((uVar1 & 0xff00ff) << 8);
    local_2e = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
    local_2c = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
    if ((*(char *)(param_1 + 0x2a0) == '\b') && ((ushort)(uVar2 | uVar1 | uVar3) >> 8 != 0)) {
      if (*(long *)(lVar4 + 0x28) == local_28) {
        png_app_warning(param_1,"Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
        return;
      }
      goto LAB_00166364;
    }
    uVar5 = 6;
  }
  FUN_001644cc(param_1,0x74524e53,&local_30,uVar5);
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
LAB_00166364:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166368  png_write_bKGD =====

void png_write_bKGD(long param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 uVar6;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  if (param_3 == 3) {
    if ((*(ushort *)(param_1 + 0x290) == 0) && ((*(byte *)(param_1 + 0x418) & 1) != 0)) {
      bVar1 = *param_2;
    }
    else {
      bVar1 = *param_2;
      if (*(ushort *)(param_1 + 0x290) <= (ushort)bVar1) {
        if (*(long *)(lVar5 + 0x28) == local_28) {
          png_warning(param_1,"Invalid background palette index");
          return;
        }
        goto LAB_001664f0;
      }
    }
    local_30 = CONCAT11(local_30._1_1_,bVar1);
    uVar6 = 1;
  }
  else if ((param_3 >> 1 & 1) == 0) {
    uVar2 = *(ushort *)(param_2 + 8);
    if (1 << (ulong)(*(byte *)(param_1 + 0x2a0) & 0x1f) <= (int)(uint)uVar2) {
      if (*(long *)(lVar5 + 0x28) == local_28) {
        png_warning(param_1,"Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
        return;
      }
      goto LAB_001664f0;
    }
    local_30 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
    uVar6 = 2;
  }
  else {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar3 = *(ushort *)(param_2 + 4);
    uVar4 = *(ushort *)(param_2 + 6);
    local_30 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
    local_2e = uVar3 >> 8 | (ushort)((uVar3 & 0xff00ff) << 8);
    local_2c = uVar4 >> 8 | (ushort)((uVar4 & 0xff00ff) << 8);
    if ((*(char *)(param_1 + 0x2a0) == '\b') && ((ushort)(uVar3 | uVar2 | uVar4) >> 8 != 0)) {
      if (*(long *)(lVar5 + 0x28) == local_28) {
        png_warning(param_1,"Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
        return;
      }
      goto LAB_001664f0;
    }
    uVar6 = 6;
  }
  FUN_001644cc(param_1,0x624b4744,&local_30,uVar6);
  if (*(long *)(lVar5 + 0x28) == local_28) {
    return;
  }
LAB_001664f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001664f4  png_write_eXIf =====

void png_write_eXIf(long param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    if (0 < (int)param_3) {
      local_54[0] = param_2[(ulong)param_3 - 1];
    }
LAB_001665ec:
    if (param_1 == 0) goto LAB_00166614;
  }
  else {
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_50 = CONCAT13((char)param_3,
                        CONCAT12((char)(param_3 >> 8),
                                 CONCAT11((char)(param_3 >> 0x10),(char)(param_3 >> 0x18))));
    local_4c = (undefined4)DAT_00124440;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x65584966;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if (0 < (int)param_3) {
      uVar3 = (ulong)param_3;
      do {
        local_54[0] = *param_2;
        png_write_data(param_1,local_54,1);
        png_calculate_crc(param_1,local_54,1);
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
      goto LAB_001665ec;
    }
  }
  *(undefined4 *)(param_1 + 0x4dc) = 0x82;
  uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
  local_50 = uVar1 >> 0x10 | uVar1 << 0x10;
  png_write_data(param_1,&local_50,4);
LAB_00166614:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00166640  png_write_hIST =====

void png_write_hIST(long param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ushort local_54 [2];
  uint local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((int)(uint)*(ushort *)(param_1 + 0x290) < (int)param_3) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      png_warning(param_1,"Invalid number of histogram entries specified");
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    uVar3 = (ulong)param_3;
    local_50 = CONCAT13((char)(param_3 << 1),
                        CONCAT12((char)(param_3 >> 7),
                                 CONCAT11((char)(param_3 >> 0xf),(char)(param_3 >> 0x17))));
    local_4c = (undefined4)DAT_00124450;
    png_write_data(param_1,&local_50,8);
    *(undefined4 *)(param_1 + 0x250) = 0x68495354;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_4c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if (0 < (int)param_3) {
      do {
        local_54[0] = *param_2 >> 8 | (ushort)((*param_2 & 0xff00ff) << 8);
        png_write_data(param_1,local_54,2);
        png_calculate_crc(param_1,local_54,2);
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
    *(undefined4 *)(param_1 + 0x4dc) = 0x82;
    uVar1 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_50 = uVar1 >> 0x10 | uVar1 << 0x10;
    png_write_data(param_1,&local_50,4);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001667b8  png_write_tEXt =====

void png_write_tEXt(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  size_t sVar6;
  undefined1 auStack_b0 [80];
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  iVar5 = png_check_keyword(param_1,param_2,auStack_b0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"tEXt: invalid keyword");
  }
  if (param_3 == (char *)0x0) {
    sVar6 = 0;
  }
  else if (*param_3 == '\0') {
    sVar6 = 0;
  }
  else {
    sVar6 = strlen(param_3);
    if (0x7ffffffe - iVar5 < sVar6) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"tEXt: text too long");
    }
  }
  if (param_1 != 0) {
    iVar1 = iVar5 + 1;
    iVar2 = iVar1 + (int)sVar6;
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_60._3_1_ = (undefined1)iVar2;
    local_60._0_3_ =
         CONCAT12((char)((uint)iVar2 >> 8),
                  CONCAT11((char)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 0x18)));
    local_5c = (undefined4)DAT_001244a0;
    png_write_data(param_1,&local_60,8);
    *(undefined4 *)(param_1 + 0x250) = 0x74455874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_5c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if (iVar5 != -1) {
      png_write_data(param_1,auStack_b0,iVar1);
      png_calculate_crc(param_1,auStack_b0,iVar1);
    }
    if (((param_3 != (char *)0x0) && (sVar6 != 0)) && (param_1 != 0)) {
      png_write_data(param_1,param_3,sVar6);
      png_calculate_crc(param_1,param_3,sVar6);
    }
    *(undefined4 *)(param_1 + 0x4dc) = 0x82;
    uVar3 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
    local_60 = uVar3 >> 0x10 | uVar3 << 0x10;
    png_write_data(param_1,&local_60,4);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00166974  png_write_zTXt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_zTXt(long param_1,undefined8 param_2,char *param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  char *local_4d0;
  size_t sStack_4c8;
  uint local_4c0;
  undefined1 auStack_4bc [1035];
  undefined1 auStack_b1 [81];
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_4 != 0) {
    if (param_4 != -1) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"zTXt: invalid compression type");
    }
    if (*(long *)(lVar3 + 0x28) == local_58) {
      png_write_tEXt(param_1,param_2,param_3);
      return;
    }
    goto LAB_00166be8;
  }
  iVar6 = png_check_keyword(param_1,param_2,auStack_b1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"zTXt: invalid keyword");
  }
  auStack_b1[iVar6 + 1] = 0;
  iVar6 = iVar6 + 2;
  if (param_3 == (char *)0x0) {
    sStack_4c8 = 0;
  }
  else {
    sStack_4c8 = strlen(param_3);
  }
  local_4c0 = 0;
  local_4d0 = param_3;
  iVar7 = FUN_00165a04(param_1,0x7a545874,&local_4d0,iVar6);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
  }
  if (param_1 == 0) {
    if ((0x400 < local_4c0) && (_DAT_000001e8 != (long *)0x0)) {
      uVar8 = local_4c0 - 0x400;
      plVar9 = _DAT_000001e8;
      do {
        bVar4 = uVar8 < _DAT_000001f0;
        uVar2 = uVar8 - _DAT_000001f0;
        uVar8 = 0;
        if (!bVar4) {
          uVar8 = uVar2;
        }
        bVar5 = bVar4 || uVar2 == 0;
      } while ((!bVar4 && uVar2 != 0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0));
      goto LAB_00166b84;
    }
    if (0x400 < local_4c0) goto LAB_00166c18;
  }
  else {
    iVar7 = local_4c0 + iVar6;
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_60 = CONCAT13((char)iVar7,
                        CONCAT12((char)((uint)iVar7 >> 8),
                                 CONCAT11((char)((uint)iVar7 >> 0x10),(char)((uint)iVar7 >> 0x18))))
    ;
    local_5c = (undefined4)DAT_00124460;
    png_write_data(param_1,&local_60,8);
    *(undefined4 *)(param_1 + 0x250) = 0x7a545874;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_5c,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if (iVar6 != 0) {
      png_write_data(param_1,auStack_b1,iVar6);
      png_calculate_crc(param_1,auStack_b1,iVar6);
    }
    puVar1 = auStack_4bc;
    plVar9 = *(long **)(param_1 + 0x1e8);
    uVar2 = 0x400;
    uVar8 = local_4c0;
    if (local_4c0 < 0x401) {
      uVar2 = local_4c0;
    }
    while( true ) {
      if (uVar2 != 0) {
        png_write_data(param_1,puVar1,uVar2);
        png_calculate_crc(param_1,puVar1,uVar2);
      }
      uVar8 = uVar8 - uVar2;
      bVar5 = uVar8 == 0;
      if ((uVar8 == 0) || (plVar9 == (long *)0x0)) break;
      puVar1 = (undefined1 *)(plVar9 + 1);
      plVar9 = (long *)*plVar9;
      uVar2 = *(uint *)(param_1 + 0x1f0);
      if (uVar8 <= *(uint *)(param_1 + 0x1f0)) {
        uVar2 = uVar8;
      }
    }
LAB_00166b84:
    if (!bVar5) {
LAB_00166c18:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"error writing ancillary chunked compressed data");
    }
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x4dc) = 0x82;
      uVar8 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
      local_60 = uVar8 >> 0x10 | uVar8 << 0x10;
      png_write_data(param_1,&local_60,4);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_00166be8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00166c28  png_write_iTXt =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_iTXt(long param_1,uint param_2,undefined8 param_3,char *param_4,char *param_5,
                   char *param_6)

{
  int iVar1;
  char *__s;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  char *__s_00;
  char *__s_01;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  size_t sVar10;
  uint uVar11;
  long *plVar12;
  char *local_4e8;
  size_t sStack_4e0;
  uint local_4d8;
  undefined1 auStack_4d4 [1034];
  undefined1 auStack_ca [82];
  undefined4 local_78;
  undefined4 local_74;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  iVar9 = png_check_keyword(param_1,param_3,auStack_ca);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid keyword");
  }
  if (3 < param_2 + 1) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"iTXt: invalid compression");
  }
  __s = "";
  __s_00 = __s;
  if (param_4 != (char *)0x0) {
    __s_00 = param_4;
  }
  iVar1 = iVar9 + 3;
  auStack_ca[iVar9 + 2] = 0;
  auStack_ca[iVar9 + 1] = (char)(0x1000100 >> (ulong)((param_2 + 1) * 8 & 0x1f));
  sVar10 = strlen(__s_00);
  uVar2 = sVar10 + 1;
  __s_01 = __s;
  if (param_5 != (char *)0x0) {
    __s_01 = param_5;
  }
  sVar10 = strlen(__s_01);
  if (param_6 != (char *)0x0) {
    __s = param_6;
  }
  uVar3 = sVar10 + 1;
  uVar11 = 0x7fffffff;
  if (uVar2 <= 0x7ffffffc - iVar9) {
    uVar11 = iVar1 + (int)uVar2;
  }
  uVar5 = 0x7fffffff;
  if (uVar3 <= (uVar11 ^ 0x7fffffff)) {
    uVar5 = uVar11 + (int)uVar3;
  }
  sStack_4e0 = strlen(__s);
  local_4d8 = 0;
  local_4e8 = __s;
  if ((param_2 & 1) == 0) {
    iVar9 = FUN_00165a04(param_1,0x69545874,&local_4e8,uVar5);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
    }
    if (param_1 == 0) {
      bVar7 = local_4d8 < 0x401;
      if ((!bVar7) && (_DAT_000001e8 != (long *)0x0)) {
        uVar11 = local_4d8 - 0x400;
        plVar12 = _DAT_000001e8;
        do {
          bVar8 = uVar11 < _DAT_000001f0;
          uVar5 = uVar11 - _DAT_000001f0;
          uVar11 = 0;
          if (!bVar8) {
            uVar11 = uVar5;
          }
          bVar7 = bVar8 || uVar5 == 0;
        } while ((!bVar8 && uVar5 != 0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0));
      }
      if (bVar7) goto LAB_00166f4c;
      goto LAB_00166fbc;
    }
  }
  else {
    if ((uVar5 ^ 0x7fffffff) < sStack_4e0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"iTXt: uncompressed text too long");
    }
    local_4d8 = (uint)sStack_4e0;
    if (param_1 == 0) goto LAB_00166f4c;
  }
  iVar9 = local_4d8 + uVar5;
  *(undefined4 *)(param_1 + 0x4dc) = 0x22;
  local_78 = CONCAT13((char)iVar9,
                      CONCAT12((char)((uint)iVar9 >> 8),
                               CONCAT11((char)((uint)iVar9 >> 0x10),(char)((uint)iVar9 >> 0x18))));
  local_74 = (undefined4)DAT_00124430;
  png_write_data(param_1,&local_78,8);
  *(undefined4 *)(param_1 + 0x250) = 0x69545874;
  png_reset_crc(param_1);
  png_calculate_crc(param_1,&local_74,4);
  *(undefined4 *)(param_1 + 0x4dc) = 0x42;
  if (iVar1 != 0) {
    png_write_data(param_1,auStack_ca,iVar1);
    png_calculate_crc(param_1,auStack_ca,iVar1);
  }
  if (uVar2 != 0) {
    png_write_data(param_1,__s_00,uVar2);
    png_calculate_crc(param_1,__s_00,uVar2);
  }
  if (uVar3 != 0) {
    png_write_data(param_1,__s_01,uVar3);
    png_calculate_crc(param_1,__s_01,uVar3);
  }
  uVar11 = local_4d8;
  if ((param_2 & 1) == 0) {
    puVar4 = auStack_4d4;
    plVar12 = *(long **)(param_1 + 0x1e8);
    uVar5 = 0x400;
    if (local_4d8 < 0x401) {
      uVar5 = local_4d8;
    }
    while( true ) {
      if (uVar5 != 0) {
        png_write_data(param_1,puVar4,uVar5);
        png_calculate_crc(param_1,puVar4,uVar5);
      }
      uVar11 = uVar11 - uVar5;
      if ((uVar11 == 0) || (plVar12 == (long *)0x0)) break;
      puVar4 = (undefined1 *)(plVar12 + 1);
      plVar12 = (long *)*plVar12;
      uVar5 = *(uint *)(param_1 + 0x1f0);
      if (uVar11 <= *(uint *)(param_1 + 0x1f0)) {
        uVar5 = uVar11;
      }
    }
    if (uVar11 != 0) {
LAB_00166fbc:
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"error writing ancillary chunked compressed data");
    }
  }
  else if (local_4d8 != 0) {
    png_write_data(param_1,__s,local_4d8);
    png_calculate_crc(param_1,__s,uVar11);
  }
  *(undefined4 *)(param_1 + 0x4dc) = 0x82;
  uVar11 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
           (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
  local_78 = uVar11 >> 0x10 | uVar11 << 0x10;
  png_write_data(param_1,&local_78,4);
LAB_00166f4c:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00166fcc  png_write_oFFs =====

void png_write_oFFs(undefined8 param_1,ulong param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  undefined1 auStack_51 [4];
  undefined1 auStack_4d [4];
  undefined1 local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (1 < param_4) {
    param_2 = param_2 & 0xffffffff;
    png_warning(param_1,"Unrecognized unit type for oFFs chunk");
  }
  png_save_int_32(auStack_51,param_2);
  png_save_int_32(auStack_4d,param_3);
  local_49 = (char)param_4;
  FUN_001644cc(param_1,0x6f464673,auStack_51,9);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167080  png_write_pCAL =====

void png_write_pCAL(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,uint param_6,char *param_7,long *param_8)

{
  size_t sVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  size_t *psVar7;
  size_t sVar8;
  long *plVar9;
  ulong uVar10;
  size_t *psVar11;
  undefined4 uVar12;
  ulong uVar14;
  ulong uVar15;
  uint local_c8;
  undefined1 auStack_c4 [80];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  long local_68;
  long lVar13;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (3 < param_5) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Unrecognized equation type for pCAL chunk");
  }
  iVar5 = png_check_keyword(param_1,param_2,auStack_c4);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"pCAL: invalid keyword");
  }
  uVar15 = (ulong)(iVar5 + 1U);
  sVar6 = strlen(param_7);
  if (param_6 != 0) {
    sVar6 = sVar6 + 1;
  }
  lVar13 = uVar15 + sVar6 + 10;
  uVar12 = (undefined4)lVar13;
  psVar7 = (size_t *)
           png_malloc(param_1,-(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3);
  uVar14 = (ulong)(param_6 - 1);
  if (0 < (int)param_6) {
    uVar10 = (ulong)param_6;
    plVar9 = param_8;
    psVar11 = psVar7;
    do {
      sVar8 = strlen((char *)*plVar9);
      bVar4 = uVar14 != 0;
      uVar14 = uVar14 - 1;
      sVar1 = sVar8;
      if (bVar4) {
        sVar1 = sVar8 + 1;
      }
      lVar13 = lVar13 + sVar8 + (ulong)bVar4;
      uVar12 = (undefined4)lVar13;
      uVar10 = uVar10 - 1;
      *psVar11 = sVar1;
      plVar9 = plVar9 + 1;
      psVar11 = psVar11 + 1;
    } while (uVar10 != 0);
  }
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x4dc) = 0x22;
    local_74 = (undefined1)((uint)uVar12 >> 0x18);
    local_73 = (undefined1)((uint)uVar12 >> 0x10);
    local_72 = (undefined1)((uint)uVar12 >> 8);
    local_71 = (undefined1)uVar12;
    local_70 = (undefined4)DAT_00124468;
    png_write_data(param_1,&local_74,8);
    *(undefined4 *)(param_1 + 0x250) = 0x7043414c;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,&local_70,4);
    *(undefined4 *)(param_1 + 0x4dc) = 0x42;
    if (iVar5 + 1U != 0) {
      png_write_data(param_1,auStack_c4,uVar15);
      png_calculate_crc(param_1,auStack_c4,uVar15);
    }
  }
  png_save_int_32(&local_74,param_3);
  png_save_int_32(&local_70,param_4);
  local_6b = (undefined1)param_6;
  local_6c = (char)param_5;
  if (param_1 == 0) {
LAB_001672bc:
    png_free(param_1,psVar7);
  }
  else {
    png_write_data(param_1,&local_74,10);
    png_calculate_crc(param_1,&local_74,10);
    if ((param_7 != (char *)0x0) && (sVar6 != 0)) {
      png_write_data(param_1,param_7,sVar6);
      png_calculate_crc(param_1,param_7,sVar6);
    }
    if (0 < (int)param_6) {
      if (param_1 == 0) goto LAB_001672bc;
      uVar15 = (ulong)param_6;
      psVar11 = psVar7;
      do {
        lVar13 = *param_8;
        sVar6 = *psVar11;
        if ((lVar13 != 0) && (sVar6 != 0)) {
          png_write_data(param_1,lVar13,sVar6);
          png_calculate_crc(param_1,lVar13,sVar6);
        }
        uVar15 = uVar15 - 1;
        param_8 = param_8 + 1;
        psVar11 = psVar11 + 1;
      } while (uVar15 != 0);
    }
    png_free(param_1,psVar7);
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 0x4dc) = 0x82;
      uVar2 = (*(uint *)(param_1 + 0x284) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x284) & 0xff00ff) << 8;
      local_c8 = uVar2 >> 0x10 | uVar2 << 0x10;
      png_write_data(param_1,&local_c8,4);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00167354  png_write_sCAL_s =====

void png_write_sCAL_s(undefined8 param_1,undefined1 param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  size_t __n;
  undefined1 local_98 [2];
  undefined1 auStack_96 [62];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  sVar3 = strlen(param_3);
  __n = strlen(param_4);
  uVar1 = sVar3 + __n + 2;
  if (uVar1 < 0x41) {
    local_98[0] = param_2;
    __memcpy_chk((ulong)local_98 | 1,param_3,sVar3 + 1,0x3f);
    memcpy(auStack_96 + sVar3,param_4,__n);
    FUN_001644cc(param_1,0x7343414c,local_98,uVar1);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
  }
  else if (*(long *)(lVar2 + 0x28) == local_58) {
    png_warning(param_1,"Can\'t write sCAL (buffer too small)");
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167464  png_write_pHYs =====

void png_write_pHYs(undefined8 param_1,undefined4 param_2,ulong param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar2 = param_3 & 0xffffffff;
  local_48 = *(long *)(lVar1 + 0x28);
  if (1 < param_4) {
    png_warning(param_1,"Unrecognized unit type for pHYs chunk");
  }
  local_54 = (undefined1)((uint)param_2 >> 0x18);
  local_53 = (undefined1)((uint)param_2 >> 0x10);
  local_4f = (undefined1)(uVar2 >> 0x10);
  local_52 = (undefined1)((uint)param_2 >> 8);
  local_50 = (undefined1)(uVar2 >> 0x18);
  local_4e = (undefined1)(uVar2 >> 8);
  local_4d = (undefined1)param_3;
  local_51 = (char)param_2;
  local_4c = (char)param_4;
  FUN_001644cc(param_1,0x70485973,&local_54,9);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0016752c  png_write_tIME =====

void png_write_tIME(undefined8 param_1,undefined2 *param_2)

{
  long lVar1;
  undefined1 local_30;
  undefined1 local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  undefined1 local_2b;
  byte local_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((((*(byte *)(param_2 + 1) - 0xd < 0xfffffff4) ||
       (*(byte *)((long)param_2 + 3) - 0x20 < 0xffffffe1)) || (0x17 < *(byte *)(param_2 + 2))) ||
     (0x3c < *(byte *)(param_2 + 3))) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      png_warning(param_1,"Invalid time specified for tIME chunk");
      return;
    }
  }
  else {
    local_2b = *(undefined1 *)((long)param_2 + 5);
    local_30 = (undefined1)((ushort)*param_2 >> 8);
    local_2f = (undefined1)*param_2;
    local_2e = *(byte *)(param_2 + 1);
    local_2d = *(byte *)((long)param_2 + 3);
    local_2c = *(byte *)(param_2 + 2);
    local_2a = *(byte *)(param_2 + 3);
    FUN_001644cc(param_1,0x74494d45,&local_30,7);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167608  png_write_acTL =====

void png_write_acTL(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_2a = (undefined1)((ulong)param_3 >> 8);
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = (undefined1)((ulong)param_3 >> 0x18);
  *(int *)(param_1 + 0x448) = param_2;
  local_2b = (undefined1)((ulong)param_3 >> 0x10);
  local_29 = (undefined1)param_3;
  param_2 = param_2 - (*(uint *)(param_1 + 0x420) & 1);
  local_2d = (undefined1)param_2;
  local_30 = (undefined1)((uint)param_2 >> 0x18);
  local_2f = (undefined1)((uint)param_2 >> 0x10);
  local_2e = (undefined1)((uint)param_2 >> 8);
  FUN_001644cc(param_1,0x6163544c,&local_30,8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001676a4  png_write_fcTL =====

void png_write_fcTL(long param_1,int param_2,ulong param_3,ulong param_4,ulong param_5,
                   undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = param_5 & 0xffffffff;
  uVar4 = param_4 & 0xffffffff;
  if (((int)param_5 != 0 || (int)param_4 != 0) && (*(int *)(param_1 + 0x44c) == 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"x and/or y offset for the first frame aren\'t 0");
  }
  if ((*(int *)(param_1 + 0x44c) == 0) &&
     ((*(int *)(param_1 + 0x428) != param_2 || (*(int *)(param_1 + 0x42c) != (int)param_3)))) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"width and/or height in the first frame\'s fcTL don\'t match the ones in IHDR"
             );
  }
  png_ensure_fcTL_is_valid
            (param_1,param_2,param_3 & 0xffffffff,uVar4,uVar3,param_6,param_7,param_8,param_9);
  uVar1 = *(undefined4 *)(param_1 + 0x424);
  local_80 = (undefined1)((uint)param_2 >> 0x18);
  local_81 = (undefined1)uVar1;
  local_83 = (undefined1)((uint)uVar1 >> 0x10);
  local_82 = (undefined1)((uint)uVar1 >> 8);
  local_7f = (undefined1)((uint)param_2 >> 0x10);
  local_7e = (undefined1)((uint)param_2 >> 8);
  local_7b = (undefined1)(param_3 >> 0x10);
  local_77 = (undefined1)(uVar4 >> 0x10);
  local_7c = (undefined1)(param_3 >> 0x18);
  local_73 = (undefined1)(uVar3 >> 0x10);
  local_7a = (undefined1)(param_3 >> 8);
  local_78 = (undefined1)(uVar4 >> 0x18);
  local_84 = (undefined1)((uint)uVar1 >> 0x18);
  local_76 = (undefined1)(uVar4 >> 8);
  local_7d = (undefined1)param_2;
  local_74 = (undefined1)(uVar3 >> 0x18);
  local_79 = (undefined1)param_3;
  local_72 = (undefined1)(uVar3 >> 8);
  local_75 = (undefined1)param_4;
  local_70 = (undefined1)((uint)param_6 >> 8);
  local_71 = (undefined1)param_5;
  local_6f = (undefined1)param_6;
  local_6e = (undefined1)((uint)param_7 >> 8);
  local_6d = (undefined1)param_7;
  local_6c = (undefined1)param_8;
  local_6b = param_9;
  FUN_001644cc(param_1,0x6663544c,&local_84,0x1a);
  *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00167870  png_write_start_row =====

void png_write_start_row(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x2a1) * (ulong)*(byte *)(param_1 + 0x2a4);
  *(char *)(param_1 + 0x2a6) = (char)uVar7;
  *(undefined1 *)(param_1 + 0x2a7) = *(undefined1 *)(param_1 + 0x2a2);
  uVar3 = *(uint *)(param_1 + 0x230) * uVar7 + 7 >> 3;
  if (7 < (uint)uVar7) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x230) * (uVar7 >> 3);
  }
  puVar5 = (undefined1 *)png_malloc(param_1,uVar3 + 1);
  bVar4 = *(byte *)(param_1 + 0x29e);
  iVar8 = *(int *)(param_1 + 0x234);
  *(undefined1 **)(param_1 + 0x260) = puVar5;
  *puVar5 = 0;
  uVar2 = bVar4 & 0x1f;
  if (iVar8 != 1) {
    uVar2 = (uint)bVar4;
  }
  uVar1 = uVar2 & 0x2f;
  if (*(int *)(param_1 + 0x230) != 1) {
    uVar1 = uVar2;
  }
  uVar2 = 8;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  *(char *)(param_1 + 0x29e) = (char)uVar2;
  if (0xf < uVar2) {
    if (*(long *)(param_1 + 0x268) == 0) {
      uVar6 = png_malloc(param_1,uVar3 + 1);
      *(undefined8 *)(param_1 + 0x268) = uVar6;
      if (1 < (uVar2 >> 5 & 1) + (uVar2 >> 7) + (uVar2 >> 4 & 1) + (uVar2 >> 6 & 1)) {
        uVar6 = png_malloc(param_1,uVar3 + 1);
        *(undefined8 *)(param_1 + 0x270) = uVar6;
      }
    }
    if (0x1f < uVar2) {
      uVar6 = png_calloc(param_1,uVar3 + 1);
      *(undefined8 *)(param_1 + 600) = uVar6;
    }
  }
  if (*(char *)(param_1 + 0x29c) == '\0') {
    iVar8 = *(int *)(param_1 + 0x234);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x234);
    if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x238) = iVar8 + 7U >> 3;
      *(uint *)(param_1 + 0x23c) = *(int *)(param_1 + 0x230) + 7U >> 3;
      return;
    }
  }
  *(int *)(param_1 + 0x238) = iVar8;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x230);
  return;
}


// ===== 001679cc  png_write_finish_row =====

void png_write_finish_row(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  
  uVar1 = *(int *)(param_1 + 0x24c) + 1;
  *(uint *)(param_1 + 0x24c) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x238)) {
    return;
  }
  if (*(char *)(param_1 + 0x29c) != '\0') {
    bVar4 = *(byte *)(param_1 + 0x29d);
    *(undefined4 *)(param_1 + 0x24c) = 0;
    if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
      bVar10 = bVar4 + 1;
      if ((byte)(bVar4 + 1) < 7) {
        bVar5 = (&DAT_0012a90f)[bVar10];
        uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0012a908)[bVar10];
        bVar6 = (&DAT_0012a901)[bVar10];
        uVar7 = 0;
        if (bVar5 != 0) {
          uVar7 = uVar1 / bVar5;
        }
        uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0012a8fa)[bVar10];
        uVar8 = 0;
        if (bVar6 != 0) {
          uVar8 = uVar2 / bVar6;
        }
        *(uint *)(param_1 + 0x23c) = uVar7;
        *(uint *)(param_1 + 0x238) = uVar8;
        if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar10 = bVar4 + 2, (byte)(bVar4 + 2) < 7)) {
          bVar5 = (&DAT_0012a90f)[bVar10];
          uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0012a908)[bVar10];
          bVar6 = (&DAT_0012a901)[bVar10];
          uVar7 = 0;
          if (bVar5 != 0) {
            uVar7 = uVar1 / bVar5;
          }
          uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0012a8fa)[bVar10];
          uVar8 = 0;
          if (bVar6 != 0) {
            uVar8 = uVar2 / bVar6;
          }
          *(uint *)(param_1 + 0x23c) = uVar7;
          *(uint *)(param_1 + 0x238) = uVar8;
          if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar10 = bVar4 + 3, (byte)(bVar4 + 3) < 7)) {
            bVar5 = (&DAT_0012a90f)[bVar10];
            uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0012a908)[bVar10];
            bVar6 = (&DAT_0012a901)[bVar10];
            uVar7 = 0;
            if (bVar5 != 0) {
              uVar7 = uVar1 / bVar5;
            }
            uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0012a8fa)[bVar10];
            uVar8 = 0;
            if (bVar6 != 0) {
              uVar8 = uVar2 / bVar6;
            }
            *(uint *)(param_1 + 0x23c) = uVar7;
            *(uint *)(param_1 + 0x238) = uVar8;
            if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar10 = bVar4 + 4, (byte)(bVar4 + 4) < 7))
            {
              bVar5 = (&DAT_0012a90f)[bVar10];
              uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0012a908)[bVar10]
              ;
              bVar6 = (&DAT_0012a901)[bVar10];
              uVar7 = 0;
              if (bVar5 != 0) {
                uVar7 = uVar1 / bVar5;
              }
              uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0012a8fa)[bVar10]
              ;
              uVar8 = 0;
              if (bVar6 != 0) {
                uVar8 = uVar2 / bVar6;
              }
              *(uint *)(param_1 + 0x23c) = uVar7;
              *(uint *)(param_1 + 0x238) = uVar8;
              if (((uVar1 < bVar5) || (uVar2 < bVar6)) &&
                 (bVar10 = bVar4 + 5, (byte)(bVar4 + 5) < 7)) {
                bVar5 = (&DAT_0012a90f)[bVar10];
                uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 +
                        ~(uint)(byte)(&DAT_0012a908)[bVar10];
                bVar6 = (&DAT_0012a901)[bVar10];
                uVar7 = 0;
                if (bVar5 != 0) {
                  uVar7 = uVar1 / bVar5;
                }
                uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 +
                        ~(uint)(byte)(&DAT_0012a8fa)[bVar10];
                uVar8 = 0;
                if (bVar6 != 0) {
                  uVar8 = uVar2 / bVar6;
                }
                *(uint *)(param_1 + 0x23c) = uVar7;
                *(uint *)(param_1 + 0x238) = uVar8;
                if (((uVar1 < bVar5) || (uVar2 < bVar6)) &&
                   (bVar10 = bVar4 + 6, (byte)(bVar4 + 6) < 7)) {
                  bVar5 = (&DAT_0012a90f)[bVar10];
                  uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 +
                          ~(uint)(byte)(&DAT_0012a908)[bVar10];
                  bVar6 = (&DAT_0012a901)[bVar10];
                  uVar7 = 0;
                  if (bVar5 != 0) {
                    uVar7 = uVar1 / bVar5;
                  }
                  uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 +
                          ~(uint)(byte)(&DAT_0012a8fa)[bVar10];
                  uVar8 = 0;
                  if (bVar6 != 0) {
                    uVar8 = uVar2 / bVar6;
                  }
                  *(uint *)(param_1 + 0x23c) = uVar7;
                  *(uint *)(param_1 + 0x238) = uVar8;
                  if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar10 = bVar4 + 7, 0xf8 < bVar4)) {
                    bVar5 = (&DAT_0012a90f)[bVar10];
                    uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 +
                            ~(uint)(byte)(&DAT_0012a908)[bVar10];
                    bVar6 = (&DAT_0012a901)[bVar10];
                    uVar7 = 0;
                    if (bVar5 != 0) {
                      uVar7 = uVar1 / bVar5;
                    }
                    uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 +
                            ~(uint)(byte)(&DAT_0012a8fa)[bVar10];
                    uVar8 = 0;
                    if (bVar6 != 0) {
                      uVar8 = uVar2 / bVar6;
                    }
                    *(uint *)(param_1 + 0x23c) = uVar7;
                    *(uint *)(param_1 + 0x238) = uVar8;
                    if (((uVar1 < bVar5) || (uVar2 < bVar6)) &&
                       (bVar10 = bVar4 + 8, (byte)(bVar4 + 8) < 7)) {
                      bVar4 = (&DAT_0012a90f)[bVar10];
                      bVar5 = (&DAT_0012a901)[bVar10];
                      uVar1 = 0;
                      if (bVar4 != 0) {
                        uVar1 = (*(int *)(param_1 + 0x230) + (uint)bVar4 +
                                ~(uint)(byte)(&DAT_0012a908)[bVar10]) / (uint)bVar4;
                      }
                      uVar7 = 0;
                      if (bVar5 != 0) {
                        uVar7 = (*(int *)(param_1 + 0x234) + (uint)bVar5 +
                                ~(uint)(byte)(&DAT_0012a8fa)[bVar10]) / (uint)bVar5;
                      }
                      *(uint *)(param_1 + 0x23c) = uVar1;
                      *(uint *)(param_1 + 0x238) = uVar7;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar10 = bVar4 + 1;
    }
    *(byte *)(param_1 + 0x29d) = bVar10;
    if (bVar10 < 7) {
      if (*(void **)(param_1 + 600) == (void *)0x0) {
        return;
      }
      uVar9 = (ulong)*(byte *)(param_1 + 0x2a1) * (ulong)*(byte *)(param_1 + 0x2a4);
      uVar3 = *(uint *)(param_1 + 0x230) * uVar9 + 7 >> 3;
      if (7 < (uint)uVar9) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x230) * (uVar9 >> 3);
      }
      memset(*(void **)(param_1 + 600),0,uVar3 + 1);
      return;
    }
  }
  png_compress_IDAT(param_1,0,0,4);
  return;
}


// ===== 00167d9c  png_do_write_interlace =====

void png_do_write_interlace(uint *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong __n;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  if (5 < param_3) {
    return;
  }
  bVar5 = *(byte *)((long)param_1 + 0x13);
  uVar4 = *param_1;
  pbVar8 = param_2;
  if (bVar5 == 4) {
    bVar5 = (&DAT_0012a908)[param_3];
    uVar12 = (uint)bVar5;
    if (bVar5 < uVar4) {
      bVar6 = (&DAT_0012a90f)[param_3];
      uVar13 = (uint)bVar5;
      uVar10 = uVar13 * 4;
      do {
        uVar2 = uVar13 + bVar6;
        bVar9 = (param_2[uVar13 >> 1] >> (ulong)((uVar10 ^ 0xffffffff) & 4)) << 4;
        uVar13 = (uint)bVar5;
        if (uVar4 <= uVar2) goto LAB_0016814c;
        uVar13 = uVar2 + bVar6;
        *pbVar8 = param_2[uVar2 >> 1] >> (ulong)(((uint)bVar6 * 4 + uVar10 ^ 0xffffffff) & 4) & 0xf
                  | bVar9;
        pbVar8 = pbVar8 + 1;
      } while (uVar13 < uVar4);
    }
  }
  else if (bVar5 == 2) {
    bVar5 = (&DAT_0012a908)[param_3];
    uVar13 = (uint)bVar5;
    uVar12 = (uint)bVar5;
    if (bVar5 < uVar4) {
      bVar6 = (&DAT_0012a90f)[param_3];
      uVar10 = (uint)bVar5;
      uVar2 = uVar10 * 2;
      iVar1 = (uint)bVar6 * 2;
      uVar7 = (uint)bVar6;
      do {
        uVar11 = uVar10 + uVar7;
        bVar9 = (byte)((param_2[uVar10 >> 2] >> (ulong)((uVar2 ^ 0xffffffff) & 6) & 3) << 6);
        if (uVar4 <= uVar11) goto LAB_0016814c;
        bVar9 = (byte)((param_2[uVar11 >> 2] >> (ulong)((iVar1 + uVar2 ^ 0xffffffff) & 6) & 3) << 4)
                | bVar9;
        if (uVar4 <= iVar1 + uVar10) goto LAB_0016814c;
        uVar3 = iVar1 + uVar7 + uVar10;
        bVar9 = (byte)((param_2[iVar1 + uVar10 >> 2] >>
                        (ulong)((uVar7 * 4 + uVar2 ^ 0xffffffff) & 6) & 3) << 2) | bVar9;
        if (uVar4 <= uVar3) goto LAB_0016814c;
        uVar10 = uVar11 + uVar7 + (uint)bVar6 * 2;
        *pbVar8 = param_2[uVar3 >> 2] >> (ulong)(((iVar1 + uVar7) * 2 + uVar2 ^ 0xffffffff) & 6) & 3
                  | bVar9;
        pbVar8 = pbVar8 + 1;
      } while (uVar10 < uVar4);
    }
  }
  else if (bVar5 == 1) {
    bVar5 = (&DAT_0012a908)[param_3];
    uVar14 = (ulong)bVar5;
    uVar13 = (uint)bVar5;
    uVar12 = (uint)bVar5;
    if (bVar5 < uVar4) {
      bVar5 = (&DAT_0012a90f)[param_3];
      uVar10 = (uint)bVar5;
      iVar1 = (uint)bVar5 * 2 + uVar10;
      do {
        uVar7 = (uint)uVar14;
        uVar11 = (uint)bVar5;
        uVar2 = uVar11 + uVar7;
        bVar9 = (byte)((param_2[uVar14 >> 3] >> (ulong)((uVar7 ^ 0xffffffff) & 7) & 1) << 7);
        if (uVar4 <= uVar2) goto LAB_0016814c;
        bVar9 = (byte)((param_2[uVar2 >> 3] >> (ulong)((uVar2 ^ 0xffffffff) & 7) & 1) << 6) | bVar9;
        if (uVar4 <= uVar11 + uVar2) goto LAB_0016814c;
        uVar3 = (uint)bVar5 * 2 + uVar7;
        uVar2 = uVar11 + uVar11 + uVar2;
        bVar9 = (byte)((param_2[uVar3 >> 3] >> (ulong)((uVar3 ^ 0xffffffff) & 7) & 1) << 5) | bVar9;
        if (uVar4 <= uVar2) goto LAB_0016814c;
        uVar3 = iVar1 + uVar7;
        uVar2 = uVar11 + uVar2;
        bVar9 = (byte)((param_2[uVar3 >> 3] >> (ulong)((uVar3 ^ 0xffffffff) & 7) & 1) << 4) | bVar9;
        if (uVar4 <= uVar2) goto LAB_0016814c;
        uVar3 = uVar10 * 4 + uVar7;
        uVar2 = uVar11 + uVar2;
        bVar9 = (byte)((param_2[uVar3 >> 3] >> (ulong)((uVar3 ^ 0xffffffff) & 7) & 1) << 3) | bVar9;
        if (uVar4 <= uVar2) goto LAB_0016814c;
        uVar3 = uVar10 * 5 + uVar7;
        uVar2 = uVar11 + uVar2;
        bVar9 = (byte)((param_2[uVar3 >> 3] >> (ulong)((uVar3 ^ 0xffffffff) & 7) & 1) << 2) | bVar9;
        if (uVar4 <= uVar2) goto LAB_0016814c;
        uVar3 = iVar1 * 2 + uVar7;
        uVar2 = uVar11 + uVar2;
        bVar9 = (byte)((param_2[uVar3 >> 3] >> (ulong)((uVar3 ^ 0xffffffff) & 7) & 1) << 1) | bVar9;
        if (uVar4 <= uVar2) goto LAB_0016814c;
        uVar7 = ((uint)bVar5 * 8 - uVar10) + uVar7;
        uVar11 = uVar11 + uVar2;
        uVar14 = (ulong)uVar11;
        *pbVar8 = param_2[uVar7 >> 3] >> (ulong)((uVar7 ^ 0xffffffff) & 7) & 1 | bVar9;
        pbVar8 = pbVar8 + 1;
      } while (uVar11 < uVar4);
    }
  }
  else {
    bVar6 = (&DAT_0012a908)[param_3];
    uVar14 = (ulong)bVar6;
    uVar12 = (uint)bVar6;
    if (bVar6 < uVar4) {
      __n = (ulong)(bVar5 >> 3);
      bVar5 = (&DAT_0012a90f)[param_3];
      do {
        if (pbVar8 != param_2 + __n * uVar14) {
          memcpy(pbVar8,param_2 + __n * uVar14,__n);
        }
        uVar13 = (int)uVar14 + (uint)bVar5;
        uVar14 = (ulong)uVar13;
        pbVar8 = pbVar8 + __n;
      } while (uVar13 < uVar4);
    }
  }
LAB_00168150:
  bVar5 = (&DAT_0012a90f)[param_3];
  uVar4 = 0;
  if (bVar5 != 0) {
    uVar4 = (*param_1 + (uint)bVar5 + ~uVar12) / (uint)bVar5;
  }
  bVar5 = *(byte *)((long)param_1 + 0x13);
  *param_1 = uVar4;
  uVar14 = (ulong)(uint)bVar5 * (ulong)uVar4 + 7 >> 3;
  if (7 < bVar5) {
    uVar14 = (ulong)(bVar5 >> 3) * (ulong)uVar4;
  }
  *(ulong *)(param_1 + 2) = uVar14;
  return;
LAB_0016814c:
  uVar12 = uVar13;
  *pbVar8 = bVar9;
  goto LAB_00168150;
}


// ===== 001681ac  png_write_find_filter =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_write_find_filter(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint3 uVar20;
  uint5 uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  undefined1 (*pauVar41) [16];
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  undefined1 (*pauVar49) [16];
  undefined1 (*pauVar50) [16];
  int iVar51;
  undefined1 (*pauVar52) [16];
  undefined1 (*pauVar53) [16];
  byte *pbVar54;
  undefined1 (*pauVar55) [16];
  ulong uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  ulong uVar59;
  ulong *puVar60;
  undefined1 (*pauVar61) [16];
  ulong uVar62;
  byte *pbVar63;
  ulong uVar64;
  undefined8 uVar65;
  byte *pbVar66;
  ulong uVar67;
  byte *pbVar68;
  ulong uVar69;
  ulong *puVar70;
  uint uVar71;
  byte *pbVar72;
  ulong *puVar73;
  byte *pbVar74;
  byte *pbVar75;
  char *pcVar76;
  char *pcVar77;
  byte *pbVar78;
  uint uVar79;
  byte *pbVar80;
  ulong uVar81;
  long lVar82;
  byte *pbVar83;
  ushort uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  long lVar93;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint uVar101;
  long lVar102;
  long lVar106;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  long lVar107;
  long lVar112;
  undefined1 auVar109 [16];
  undefined8 uVar108;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  long lVar117;
  long lVar130;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  long lVar131;
  undefined1 auVar132 [16];
  long lVar136;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  long lVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  long lVar146;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  long lVar149;
  undefined1 auVar150 [16];
  long lVar155;
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  long lVar156;
  undefined1 auVar157 [16];
  long lVar163;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
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
  undefined2 uVar205;
  undefined2 uVar206;
  undefined2 uVar207;
  undefined4 uVar208;
  undefined4 uVar209;
  undefined4 uVar210;
  undefined4 uVar211;
  undefined4 uVar212;
  undefined4 uVar213;
  undefined4 uVar214;
  undefined4 uVar215;
  undefined4 uVar216;
  undefined4 uVar217;
  undefined4 uVar218;
  undefined4 uVar219;
  undefined1 auVar220 [16];
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  
  bVar122 = *(byte *)(param_2 + 0x13);
  uVar64 = *(ulong *)(param_2 + 8);
  bVar123 = *(byte *)(param_1 + 0x29e);
  uVar71 = (uint)bVar123;
  uVar69 = (ulong)bVar122 + 7 >> 3;
  pbVar66 = *(byte **)(param_1 + 0x260);
  if (uVar64 < 0x1ffffffffffffff) {
    uVar67 = 0xfffffffffffffeff;
    if (((bVar123 >> 3 & 1) != 0) && (uVar71 != 8)) {
      if (uVar64 == 0) {
        uVar67 = 0;
      }
      else {
        if (uVar64 < 8) {
          uVar67 = 0;
          uVar81 = 0;
          pbVar63 = pbVar66;
        }
        else {
          if (uVar64 < 0x10) {
            uVar67 = 0;
            uVar56 = 0;
          }
          else {
            lVar82 = 0;
            lVar93 = 0;
            lVar102 = 0;
            lVar106 = 0;
            lVar117 = 0;
            lVar130 = 0;
            lVar107 = 0;
            lVar112 = 0;
            lVar149 = 0;
            lVar155 = 0;
            lVar131 = 0;
            lVar136 = 0;
            lVar156 = 0;
            lVar163 = 0;
            uVar81 = uVar64 & 0x1fffffffffffff0;
            lVar137 = 0;
            lVar146 = 0;
            pauVar53 = (undefined1 (*) [16])(pbVar66 + 1);
            uVar67 = uVar81;
            do {
              auVar96 = *pauVar53;
              uVar67 = uVar67 - 0x10;
              auVar118 = NEON_cmlt(auVar96,0,1);
              auVar119 = a64_TBL(ZEXT816(0),auVar96,_DAT_00129520);
              auVar151 = a64_TBL(ZEXT816(0),auVar96,_DAT_00129940);
              auVar152 = a64_TBL(ZEXT816(0),auVar96,_DAT_00129a60);
              auVar140 = a64_TBL(ZEXT816(0),auVar96,_DAT_001297f0);
              iVar51 = 0x100 - auVar151._4_4_;
              iVar7 = 0x100 - auVar151._8_4_;
              iVar9 = 0x100 - auVar151._12_4_;
              auVar165._0_4_ = 0x100 - auVar140._0_4_;
              auVar165._4_4_ = 0x100 - auVar140._4_4_;
              auVar165._8_4_ = 0x100 - auVar140._8_4_;
              auVar165._12_4_ = 0x100 - auVar140._12_4_;
              auVar158._0_4_ = (int)(short)auVar118[0xc];
              auVar158._4_4_ = (int)(short)auVar118[0xd];
              auVar158._8_4_ = (int)(short)auVar118[0xe];
              auVar158._12_4_ = (int)(short)auVar118[0xf];
              auVar133._0_4_ = (int)(short)auVar118[4];
              auVar133._4_4_ = (int)(short)auVar118[5];
              auVar133._8_4_ = (int)(short)auVar118[6];
              auVar133._12_4_ = (int)(short)auVar118[7];
              auVar141._0_4_ = (int)(short)auVar118[0];
              auVar141._4_4_ = (int)(short)auVar118[1];
              auVar141._8_4_ = (int)(short)auVar118[2];
              auVar141._12_4_ = (int)(short)auVar118[3];
              auVar98._4_4_ = 0x100 - auVar119._4_4_;
              auVar98._0_4_ = 0x100 - auVar119._0_4_;
              auVar98._8_4_ = 0x100 - auVar119._8_4_;
              auVar98._12_4_ = 0x100 - auVar119._12_4_;
              auVar98 = NEON_bit(auVar119,auVar98,auVar158,1);
              auVar96._4_2_ = (short)iVar51;
              auVar96._0_4_ = 0x100 - auVar151._0_4_;
              auVar96._6_2_ = (short)((uint)iVar51 >> 0x10);
              auVar96._8_2_ = (short)iVar7;
              auVar96._10_2_ = (short)((uint)iVar7 >> 0x10);
              auVar96._12_2_ = (short)iVar9;
              auVar96._14_2_ = (short)((uint)iVar9 >> 0x10);
              auVar119._4_4_ = (int)(short)auVar118[9];
              auVar119._0_4_ = (int)(short)auVar118[8];
              auVar119._8_4_ = (int)(short)auVar118[10];
              auVar119._12_4_ = (int)(short)auVar118[0xb];
              auVar119 = NEON_bit(auVar151,auVar96,auVar119,1);
              auVar118._4_4_ = 0x100 - auVar152._4_4_;
              auVar118._0_4_ = 0x100 - auVar152._0_4_;
              auVar118._8_4_ = 0x100 - auVar152._8_4_;
              auVar118._12_4_ = 0x100 - auVar152._12_4_;
              auVar118 = NEON_bit(auVar152,auVar118,auVar133,1);
              auVar96 = NEON_bit(auVar140,auVar165,auVar141,1);
              lVar156 = lVar156 + (ulong)auVar98._0_4_;
              lVar163 = lVar163 + (ulong)auVar98._4_4_;
              lVar131 = lVar131 + (auVar119._8_8_ & 0xffffffff);
              lVar136 = lVar136 + (auVar119._8_8_ >> 0x20);
              lVar107 = lVar107 + (auVar118._8_8_ & 0xffffffff);
              lVar112 = lVar112 + (auVar118._8_8_ >> 0x20);
              lVar137 = lVar137 + (auVar98._8_8_ & 0xffffffff);
              lVar146 = lVar146 + (auVar98._8_8_ >> 0x20);
              lVar149 = lVar149 + (ulong)auVar119._0_4_;
              lVar155 = lVar155 + (ulong)auVar119._4_4_;
              lVar117 = lVar117 + (ulong)auVar118._0_4_;
              lVar130 = lVar130 + (ulong)auVar118._4_4_;
              lVar102 = lVar102 + (auVar96._8_8_ & 0xffffffff);
              lVar106 = lVar106 + (ulong)auVar96._12_4_;
              lVar82 = lVar82 + (ulong)auVar96._0_4_;
              lVar93 = lVar93 + (ulong)auVar96._4_4_;
              pauVar53 = pauVar53 + 1;
            } while (uVar67 != 0);
            uVar67 = lVar82 + lVar149 + lVar117 + lVar156 + lVar102 + lVar131 + lVar107 + lVar137 +
                     lVar93 + lVar155 + lVar130 + lVar163 + lVar106 + lVar136 + lVar112 + lVar146;
            if (uVar64 == uVar81) goto LAB_001681f8;
            uVar56 = uVar81;
            if (((uint)uVar64 >> 3 & 1) == 0) {
              pbVar63 = pbVar66 + uVar81;
              goto LAB_001686d0;
            }
          }
          lVar102 = 0;
          lVar106 = 0;
          lVar107 = 0;
          lVar112 = 0;
          uVar81 = uVar64 & 0x1fffffffffffff8;
          lVar117 = 0;
          lVar130 = 0;
          pbVar63 = pbVar66 + uVar81;
          lVar82 = uVar56 - uVar81;
          lVar93 = 0;
          puVar60 = (ulong *)(pbVar66 + uVar56 + 1);
          do {
            auVar140._0_8_ = *puVar60;
            auVar140._8_8_ = 0;
            lVar82 = lVar82 + 8;
            auVar151._0_2_ = (short)(char)auVar140._0_8_;
            auVar151._2_2_ = (short)(char)(auVar140._0_8_ >> 8);
            auVar151._4_2_ = (short)(char)(auVar140._0_8_ >> 0x10);
            auVar151._6_2_ = (short)(char)(auVar140._0_8_ >> 0x18);
            auVar151._8_2_ = (short)(char)(auVar140._0_8_ >> 0x20);
            auVar151._10_2_ = (short)(char)(auVar140._0_8_ >> 0x28);
            auVar151._12_2_ = (short)(char)(auVar140._0_8_ >> 0x30);
            auVar151._14_2_ = (short)(char)(auVar140._0_8_ >> 0x38);
            auVar118 = a64_TBL(ZEXT816(0),auVar140,_DAT_00129a60);
            auVar96 = a64_TBL(ZEXT816(0),auVar140,_DAT_001297f0);
            auVar98 = NEON_cmlt(auVar151,0,2);
            auVar166._0_4_ = 0x100 - auVar118._0_4_;
            auVar166._4_4_ = 0x100 - auVar118._4_4_;
            auVar166._8_4_ = 0x100 - auVar118._8_4_;
            auVar166._12_4_ = 0x100 - auVar118._12_4_;
            auVar161._0_4_ = 0x100 - auVar96._0_4_;
            auVar161._4_4_ = 0x100 - auVar96._4_4_;
            auVar161._8_4_ = 0x100 - auVar96._8_4_;
            auVar161._12_4_ = 0x100 - auVar96._12_4_;
            auVar169._0_4_ = (int)auVar98._8_2_;
            auVar169._4_4_ = (int)auVar98._10_2_;
            auVar169._8_4_ = (int)auVar98._12_2_;
            auVar169._12_4_ = (int)auVar98._14_2_;
            auVar152._0_4_ = (int)auVar98._0_2_;
            auVar152._4_4_ = (int)auVar98._2_2_;
            auVar152._8_4_ = (int)auVar98._4_2_;
            auVar152._12_4_ = (int)auVar98._6_2_;
            auVar98 = NEON_bit(auVar118,auVar166,auVar169,1);
            auVar96 = NEON_bit(auVar96,auVar161,auVar152,1);
            lVar117 = lVar117 + (auVar98._8_8_ & 0xffffffff);
            lVar130 = lVar130 + (auVar98._8_8_ >> 0x20);
            lVar107 = lVar107 + (ulong)auVar98._0_4_;
            lVar112 = lVar112 + (ulong)auVar98._4_4_;
            lVar102 = lVar102 + (auVar96._8_8_ & 0xffffffff);
            lVar106 = lVar106 + (ulong)auVar96._12_4_;
            uVar67 = uVar67 + auVar96._0_4_;
            lVar93 = lVar93 + (ulong)auVar96._4_4_;
            puVar60 = puVar60 + 1;
          } while (lVar82 != 0);
          uVar67 = uVar67 + lVar107 + lVar102 + lVar117 + lVar93 + lVar112 + lVar106 + lVar130;
          if (uVar64 == uVar81) goto LAB_001681f8;
        }
LAB_001686d0:
        lVar82 = uVar64 - uVar81;
        do {
          pbVar63 = pbVar63 + 1;
          bVar123 = *pbVar63;
          uVar79 = 0x100 - bVar123;
          if (-1 < (char)bVar123) {
            uVar79 = (uint)bVar123;
          }
          lVar82 = lVar82 + -1;
          uVar67 = uVar67 + uVar79;
        } while (lVar82 != 0);
      }
    }
  }
  else {
    uVar67 = 0xfffffffffffffeff;
    uVar71 = (uint)bVar123 & -(uint)bVar123;
  }
LAB_001681f8:
  if (uVar71 == 0x10) {
    pbVar63 = *(byte **)(param_1 + 0x268);
    pbVar74 = pbVar63 + 1;
    *pbVar63 = 1;
    pauVar53 = (undefined1 (*) [16])(pbVar66 + 1);
    pbVar75 = pbVar74;
    if (bVar122 != 0) {
      uVar81 = 0;
      if ((0x78 < bVar122) && (0xf < (ulong)((long)pbVar63 - (long)pbVar66))) {
        uVar81 = uVar69 & 0x30;
        auVar96 = *pauVar53;
        pauVar53 = (undefined1 (*) [16])(*pauVar53 + uVar81);
        pbVar75 = pbVar74 + uVar81;
        *(long *)(pbVar63 + 9) = auVar96._8_8_;
        *(long *)pbVar74 = auVar96._0_8_;
        if (uVar81 != 0x10) {
          auVar96 = *(undefined1 (*) [16])(pbVar66 + 0x11);
          *(long *)(pbVar63 + 0x19) = auVar96._8_8_;
          *(long *)(pbVar63 + 0x11) = auVar96._0_8_;
        }
        if (uVar81 == uVar69) goto LAB_00168274;
      }
      lVar82 = uVar69 - uVar81;
      pbVar74 = pbVar75;
      pauVar52 = pauVar53;
      do {
        pauVar53 = (undefined1 (*) [16])(*pauVar52 + 1);
        lVar82 = lVar82 + -1;
        pbVar75 = pbVar74 + 1;
        *pbVar74 = (*pauVar52)[0];
        pbVar74 = pbVar75;
        pauVar52 = pauVar53;
      } while (lVar82 != 0);
    }
LAB_00168274:
    uVar81 = uVar64 - uVar69;
    if (uVar69 <= uVar64 && uVar81 != 0) {
      uVar56 = uVar69;
      pbVar74 = pbVar66;
      if (((7 < uVar81) && ((ulong)((long)pbVar66 - (long)pbVar75) < 0xffffffffffffffe0)) &&
         (0x1f < (ulong)((long)pbVar75 - (long)pauVar53))) {
        if (uVar81 < 0x20) {
          uVar62 = 0;
        }
        else {
          uVar62 = uVar81 & 0xffffffffffffffe0;
          pauVar52 = pauVar53 + 1;
          pauVar55 = (undefined1 (*) [16])(pbVar66 + 0x11);
          pbVar74 = pbVar75 + 0x10;
          uVar56 = uVar62;
          do {
            pauVar58 = pauVar52 + -1;
            pauVar61 = pauVar52 + -1;
            pauVar22 = pauVar52 + -1;
            pauVar23 = pauVar52 + -1;
            pauVar24 = pauVar52 + -1;
            pauVar25 = pauVar52 + -1;
            pauVar26 = pauVar52 + -1;
            pauVar27 = pauVar52 + -1;
            pauVar28 = pauVar52 + -1;
            pauVar29 = pauVar52 + -1;
            pauVar30 = pauVar52 + -1;
            pauVar31 = pauVar52 + -1;
            pauVar32 = pauVar52 + -1;
            pauVar33 = pauVar52 + -1;
            pauVar34 = pauVar52 + -1;
            pauVar35 = pauVar52 + -1;
            auVar96 = *pauVar52;
            uVar56 = uVar56 - 0x20;
            pauVar57 = pauVar55 + -1;
            pauVar36 = pauVar55 + -1;
            pauVar37 = pauVar55 + -1;
            pauVar38 = pauVar55 + -1;
            pauVar39 = pauVar55 + -1;
            pauVar40 = pauVar55 + -1;
            pauVar41 = pauVar55 + -1;
            pauVar42 = pauVar55 + -1;
            pauVar43 = pauVar55 + -1;
            pauVar44 = pauVar55 + -1;
            pauVar45 = pauVar55 + -1;
            pauVar46 = pauVar55 + -1;
            pauVar47 = pauVar55 + -1;
            pauVar48 = pauVar55 + -1;
            pauVar49 = pauVar55 + -1;
            pauVar50 = pauVar55 + -1;
            auVar98 = *pauVar55;
            pauVar52 = pauVar52 + 2;
            pauVar55 = pauVar55 + 2;
            auVar85._0_8_ =
                 CONCAT17((*pauVar27)[7] - (*pauVar42)[7],
                          CONCAT16((*pauVar26)[6] - (*pauVar41)[6],
                                   CONCAT15((*pauVar25)[5] - (*pauVar40)[5],
                                            CONCAT14((*pauVar24)[4] - (*pauVar39)[4],
                                                     CONCAT13((*pauVar23)[3] - (*pauVar38)[3],
                                                              CONCAT12((*pauVar22)[2] -
                                                                       (*pauVar37)[2],
                                                                       CONCAT11((*pauVar61)[1] -
                                                                                (*pauVar36)[1],
                                                                                (*pauVar58)[0] -
                                                                                (*pauVar57)[0]))))))
                         );
            auVar85[8] = (*pauVar28)[8] - (*pauVar43)[8];
            auVar85[9] = (*pauVar29)[9] - (*pauVar44)[9];
            auVar85[10] = (*pauVar30)[10] - (*pauVar45)[10];
            auVar85[0xb] = (*pauVar31)[0xb] - (*pauVar46)[0xb];
            auVar85[0xc] = (*pauVar32)[0xc] - (*pauVar47)[0xc];
            auVar85[0xd] = (*pauVar33)[0xd] - (*pauVar48)[0xd];
            auVar85[0xe] = (*pauVar34)[0xe] - (*pauVar49)[0xe];
            auVar85[0xf] = (*pauVar35)[0xf] - (*pauVar50)[0xf];
            auVar94._0_8_ =
                 CONCAT17(auVar96[7] - auVar98[7],
                          CONCAT16(auVar96[6] - auVar98[6],
                                   CONCAT15(auVar96[5] - auVar98[5],
                                            CONCAT14(auVar96[4] - auVar98[4],
                                                     CONCAT13(auVar96[3] - auVar98[3],
                                                              CONCAT12(auVar96[2] - auVar98[2],
                                                                       CONCAT11(auVar96[1] -
                                                                                auVar98[1],
                                                                                auVar96[0] -
                                                                                auVar98[0])))))));
            auVar94[8] = auVar96[8] - auVar98[8];
            auVar94[9] = auVar96[9] - auVar98[9];
            auVar94[10] = auVar96[10] - auVar98[10];
            auVar94[0xb] = auVar96[0xb] - auVar98[0xb];
            auVar94[0xc] = auVar96[0xc] - auVar98[0xc];
            auVar94[0xd] = auVar96[0xd] - auVar98[0xd];
            auVar94[0xe] = auVar96[0xe] - auVar98[0xe];
            auVar94[0xf] = auVar96[0xf] - auVar98[0xf];
            *(long *)(pbVar74 + -8) = auVar85._8_8_;
            *(undefined8 *)(pbVar74 + -0x10) = auVar85._0_8_;
            *(long *)(pbVar74 + 8) = auVar94._8_8_;
            *(undefined8 *)pbVar74 = auVar94._0_8_;
            pbVar74 = pbVar74 + 0x20;
          } while (uVar56 != 0);
          if (uVar81 == uVar62) goto LAB_00168794;
          if ((uVar81 & 0x18) == 0) {
            pauVar53 = (undefined1 (*) [16])(*pauVar53 + uVar62);
            pbVar75 = pbVar75 + uVar62;
            uVar56 = uVar62 + uVar69;
            pbVar74 = pbVar66 + uVar62;
            goto LAB_00168294;
          }
        }
        uVar59 = uVar81 & 0xfffffffffffffff8;
        lVar82 = uVar62 - uVar59;
        pbVar74 = pbVar66 + uVar62 + 1;
        pbVar80 = pbVar75 + uVar62;
        pbVar54 = *pauVar53 + uVar62;
        do {
          uVar65 = *(undefined8 *)pbVar54;
          lVar82 = lVar82 + 8;
          uVar108 = *(undefined8 *)pbVar74;
          *(ulong *)pbVar80 =
               CONCAT17((char)((ulong)uVar65 >> 0x38) - (char)((ulong)uVar108 >> 0x38),
                        CONCAT16((char)((ulong)uVar65 >> 0x30) - (char)((ulong)uVar108 >> 0x30),
                                 CONCAT15((char)((ulong)uVar65 >> 0x28) -
                                          (char)((ulong)uVar108 >> 0x28),
                                          CONCAT14((char)((ulong)uVar65 >> 0x20) -
                                                   (char)((ulong)uVar108 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar65 >> 0x18) -
                                                            (char)((ulong)uVar108 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar65 >> 0x10) -
                                                                     (char)((ulong)uVar108 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar65
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar108
                                                                                    >> 8),
                                                                              (char)uVar65 -
                                                                              (char)uVar108)))))));
          pbVar74 = pbVar74 + 8;
          pbVar80 = pbVar80 + 8;
          pbVar54 = pbVar54 + 8;
        } while (lVar82 != 0);
        pbVar75 = pbVar75 + uVar59;
        pauVar53 = (undefined1 (*) [16])(*pauVar53 + uVar59);
        uVar56 = uVar59 + uVar69;
        pbVar74 = pbVar66 + uVar59;
        if (uVar81 == uVar59) goto LAB_00168794;
      }
LAB_00168294:
      lVar82 = uVar64 - uVar56;
      do {
        pbVar74 = pbVar74 + 1;
        lVar82 = lVar82 + -1;
        *pbVar75 = (*pauVar53)[0] - *pbVar74;
        pbVar75 = pbVar75 + 1;
        pauVar53 = (undefined1 (*) [16])(*pauVar53 + 1);
      } while (lVar82 != 0);
    }
  }
  else {
    pbVar63 = pbVar66;
    if ((uVar71 >> 4 & 1) != 0) {
      pbVar74 = *(byte **)(param_1 + 0x268);
      pbVar75 = pbVar74 + 1;
      *pbVar74 = 1;
      pauVar53 = (undefined1 (*) [16])(pbVar66 + 1);
      pauVar52 = pauVar53;
      if (bVar122 == 0) {
        uVar81 = 0;
        pbVar80 = pbVar75;
      }
      else {
        uVar81 = 0;
        if ((bVar122 < 0x79) || ((ulong)((long)pbVar74 - (long)pbVar66) < 0x10)) {
          uVar56 = 0;
        }
        else {
          auVar96 = *pauVar53;
          uVar56 = uVar69 & 0x30;
          pauVar52 = (undefined1 (*) [16])(*pauVar53 + uVar56);
          pbVar80 = pbVar75 + uVar56;
          auVar98 = NEON_cmlt(auVar96,0,1);
          bVar123 = auVar96[1];
          uVar79 = (uint)CONCAT12(bVar123,(ushort)auVar96[0]);
          bVar124 = auVar96[9];
          uVar101 = (uint)CONCAT12(bVar124,(ushort)auVar96[8]);
          *(long *)(pbVar74 + 9) = auVar96._8_8_;
          *(long *)pbVar75 = auVar96._0_8_;
          auVar202._6_2_ = 0;
          auVar202._0_6_ = (uint6)CONCAT14(bVar124,uVar101) & 0xffff0000ffff;
          auVar202[8] = auVar96[10];
          auVar202._9_3_ = 0;
          auVar202[0xc] = auVar96[0xb];
          auVar202._13_3_ = 0;
          uVar84 = CONCAT11(0,auVar96[0xc]);
          auVar203._2_2_ = 0;
          auVar203._0_2_ = uVar84;
          auVar203[4] = auVar96[0xd];
          auVar203._5_3_ = 0;
          auVar203[8] = auVar96[0xe];
          auVar203._9_3_ = 0;
          auVar203[0xc] = auVar96[0xf];
          auVar203._13_3_ = 0;
          auVar204._0_4_ = 0x100 - (uVar79 & 0xffff);
          auVar204._4_4_ = 0x100 - (uint)bVar123;
          auVar204._8_4_ = 0x100 - (uint)auVar96[2];
          auVar204._12_4_ = 0x100 - (uint)auVar96[3];
          auVar171._0_4_ = 0x100 - (uint)uVar84;
          auVar171._4_4_ = 0x100 - (uint)auVar96[0xd];
          auVar171._8_4_ = 0x100 - (uint)auVar96[0xe];
          auVar171._12_4_ = 0x100 - (uint)auVar96[0xf];
          uVar84 = CONCAT11(0,auVar96[4]);
          auVar177._0_4_ = 0x100 - (uint)uVar84;
          auVar177._4_4_ = 0x100 - (uint)auVar96[5];
          auVar177._8_4_ = 0x100 - (uint)auVar96[6];
          auVar177._12_4_ = 0x100 - (uint)auVar96[7];
          auVar196._0_4_ = 0x100 - (uVar101 & 0xffff);
          auVar196._4_4_ = 0x100 - (uint)bVar124;
          auVar196._8_4_ = 0x100 - (uint)auVar96[10];
          auVar196._12_4_ = 0x100 - (uint)auVar96[0xb];
          auVar197._6_2_ = 0;
          auVar197._0_6_ = (uint6)CONCAT14(bVar123,uVar79) & 0xffff0000ffff;
          auVar197[8] = auVar96[2];
          auVar197._9_3_ = 0;
          auVar197[0xc] = auVar96[3];
          auVar197._13_3_ = 0;
          auVar201._2_2_ = 0;
          auVar201._0_2_ = uVar84;
          auVar201[4] = auVar96[5];
          auVar201._5_3_ = 0;
          auVar201[8] = auVar96[6];
          auVar201._9_3_ = 0;
          auVar201[0xc] = auVar96[7];
          auVar201._13_3_ = 0;
          auVar192._0_4_ = (int)(short)auVar98[0xc];
          auVar192._4_4_ = (int)(short)auVar98[0xd];
          auVar192._8_4_ = (int)(short)auVar98[0xe];
          auVar192._12_4_ = (int)(short)auVar98[0xf];
          auVar183._0_4_ = (int)(short)auVar98[0];
          auVar183._4_4_ = (int)(short)auVar98[1];
          auVar183._8_4_ = (int)(short)auVar98[2];
          auVar183._12_4_ = (int)(short)auVar98[3];
          auVar193._0_4_ = (int)(short)auVar98[4];
          auVar193._4_4_ = (int)(short)auVar98[5];
          auVar193._8_4_ = (int)(short)auVar98[6];
          auVar193._12_4_ = (int)(short)auVar98[7];
          auVar200._0_4_ = (int)(short)auVar98[8];
          auVar200._4_4_ = (int)(short)auVar98[9];
          auVar200._8_4_ = (int)(short)auVar98[10];
          auVar200._12_4_ = (int)(short)auVar98[0xb];
          auVar96 = NEON_bsl(auVar192,auVar171,auVar203,1);
          auVar119 = NEON_bit(auVar197,auVar204,auVar183,1);
          auVar118 = NEON_bif(auVar196,auVar202,auVar200,1);
          auVar98 = NEON_bsl(auVar193,auVar177,auVar201,1);
          auVar170 = auVar96;
          auVar176 = auVar98;
          auVar182 = auVar118;
          auVar188 = auVar119;
          if (uVar56 != 0x10) {
            auVar133 = *(undefined1 (*) [16])(pbVar66 + 0x11);
            auVar140 = NEON_cmlt(auVar133,0,1);
            bVar123 = auVar133[9];
            uVar79 = (uint)CONCAT12(bVar123,(ushort)auVar133[8]);
            bVar124 = auVar133[1];
            uVar101 = (uint)CONCAT12(bVar124,(ushort)auVar133[0]);
            *(long *)(pbVar74 + 0x19) = auVar133._8_8_;
            *(long *)(pbVar74 + 0x11) = auVar133._0_8_;
            uVar84 = CONCAT11(0,auVar133[0xc]);
            auVar157._2_2_ = 0;
            auVar157._0_2_ = uVar84;
            auVar157[4] = auVar133[0xd];
            auVar157._5_3_ = 0;
            auVar157[8] = auVar133[0xe];
            auVar157._9_3_ = 0;
            auVar157[0xc] = auVar133[0xf];
            auVar157._13_3_ = 0;
            auVar172._6_2_ = 0;
            auVar172._0_6_ = (uint6)CONCAT14(bVar123,uVar79) & 0xffff0000ffff;
            auVar172[8] = auVar133[10];
            auVar172._9_3_ = 0;
            auVar172[0xc] = auVar133[0xb];
            auVar172._13_3_ = 0;
            auVar189._0_4_ = 0x100 - (uint)uVar84;
            auVar189._4_4_ = 0x100 - (uint)auVar133[0xd];
            auVar189._8_4_ = 0x100 - (uint)auVar133[0xe];
            auVar189._12_4_ = 0x100 - (uint)auVar133[0xf];
            auVar132._0_4_ = 0x100 - (uVar79 & 0xffff);
            auVar132._4_4_ = 0x100 - (uint)bVar123;
            auVar132._8_4_ = 0x100 - (uint)auVar133[10];
            auVar132._12_4_ = 0x100 - (uint)auVar133[0xb];
            uVar84 = CONCAT11(0,auVar133[4]);
            auVar194._0_4_ = 0x100 - (uint)uVar84;
            auVar194._4_4_ = 0x100 - (uint)auVar133[5];
            auVar194._8_4_ = 0x100 - (uint)auVar133[6];
            auVar194._12_4_ = 0x100 - (uint)auVar133[7];
            auVar113._0_4_ = 0x100 - (uVar101 & 0xffff);
            auVar113._4_4_ = 0x100 - (uint)bVar124;
            auVar113._8_4_ = 0x100 - (uint)auVar133[2];
            auVar113._12_4_ = 0x100 - (uint)auVar133[3];
            auVar184._6_2_ = 0;
            auVar184._0_6_ = (uint6)CONCAT14(bVar124,uVar101) & 0xffff0000ffff;
            auVar184[8] = auVar133[2];
            auVar184._9_3_ = 0;
            auVar184[0xc] = auVar133[3];
            auVar184._13_3_ = 0;
            auVar198._0_8_ = CONCAT44((int)(short)auVar140[5],(int)(short)auVar140[4]);
            auVar198._8_4_ = (int)(short)auVar140[6];
            auVar198._12_4_ = (int)(short)auVar140[7];
            auVar138._0_4_ = (int)(short)auVar140[0];
            auVar138._4_4_ = (int)(short)auVar140[1];
            auVar138._8_4_ = (int)(short)auVar140[2];
            auVar138._12_4_ = (int)(short)auVar140[3];
            auVar178._2_2_ = 0;
            auVar178._0_2_ = uVar84;
            auVar178[4] = auVar133[5];
            auVar178._5_3_ = 0;
            auVar178[8] = auVar133[6];
            auVar178._9_3_ = 0;
            auVar178[0xc] = auVar133[7];
            auVar178._13_3_ = 0;
            auVar150._0_4_ = (int)(short)auVar140[0xc];
            auVar150._4_4_ = (int)(short)auVar140[0xd];
            auVar150._8_4_ = (int)(short)auVar140[0xe];
            auVar150._12_4_ = (int)(short)auVar140[0xf];
            auVar164._0_4_ = (int)(short)auVar140[8];
            auVar164._4_4_ = (int)(short)auVar140[9];
            auVar164._8_4_ = (int)(short)auVar140[10];
            auVar164._12_4_ = (int)(short)auVar140[0xb];
            auVar133 = NEON_bif(auVar113,auVar184,auVar138,1);
            auVar139._8_8_ = auVar198._8_8_;
            auVar139._0_8_ = auVar198._0_8_;
            auVar151 = NEON_bsl(auVar150,auVar189,auVar157,1);
            auVar140 = NEON_bif(auVar132,auVar172,auVar164,1);
            auVar141 = NEON_bsl(auVar139,auVar194,auVar178,1);
            auVar188._0_4_ = auVar119._0_4_ + auVar133._0_4_;
            auVar188._4_4_ = auVar119._4_4_ + auVar133._4_4_;
            auVar188._8_4_ = auVar119._8_4_ + auVar133._8_4_;
            auVar188._12_4_ = auVar119._12_4_ + auVar133._12_4_;
            auVar170._0_4_ = auVar96._0_4_ + auVar151._0_4_;
            auVar170._4_4_ = auVar96._4_4_ + auVar151._4_4_;
            auVar170._8_4_ = auVar96._8_4_ + auVar151._8_4_;
            auVar170._12_4_ = auVar96._12_4_ + auVar151._12_4_;
            auVar182._0_4_ = auVar118._0_4_ + auVar140._0_4_;
            auVar182._4_4_ = auVar118._4_4_ + auVar140._4_4_;
            auVar182._8_4_ = auVar118._8_4_ + auVar140._8_4_;
            auVar182._12_4_ = auVar118._12_4_ + auVar140._12_4_;
            auVar176._0_4_ = auVar98._0_4_ + auVar141._0_4_;
            auVar176._4_4_ = auVar98._4_4_ + auVar141._4_4_;
            auVar176._8_4_ = auVar98._8_4_ + auVar141._8_4_;
            auVar176._12_4_ = auVar98._12_4_ + auVar141._12_4_;
          }
          uVar81 = (ulong)auVar188._0_4_ + (ulong)auVar182._0_4_ +
                   (ulong)auVar176._0_4_ + (ulong)auVar170._0_4_ +
                   (auVar188._8_8_ & 0xffffffff) + (auVar182._8_8_ & 0xffffffff) +
                   (auVar176._8_8_ & 0xffffffff) + (auVar170._8_8_ & 0xffffffff) +
                   (ulong)auVar188._4_4_ + (ulong)auVar182._4_4_ +
                   (ulong)auVar176._4_4_ + (ulong)auVar170._4_4_ +
                   (auVar188._8_8_ >> 0x20) + (auVar182._8_8_ >> 0x20) +
                   (auVar176._8_8_ >> 0x20) + (auVar170._8_8_ >> 0x20);
          pbVar75 = pbVar80;
          if (uVar56 == uVar69) goto LAB_001684ac;
        }
        lVar82 = uVar69 - uVar56;
        pauVar55 = pauVar52;
        do {
          bVar123 = (*pauVar55)[0];
          uVar79 = 0x100 - bVar123;
          *pbVar75 = bVar123;
          if (-1 < (char)bVar123) {
            uVar79 = (uint)bVar123;
          }
          lVar82 = lVar82 + -1;
          uVar81 = uVar81 + uVar79;
          pbVar80 = pbVar75 + 1;
          pbVar75 = pbVar75 + 1;
          pauVar52 = (undefined1 (*) [16])(*pauVar55 + 1);
          pauVar55 = (undefined1 (*) [16])(*pauVar55 + 1);
        } while (lVar82 != 0);
      }
LAB_001684ac:
      uVar56 = uVar69;
      if (uVar69 < uVar64) {
        do {
          uVar56 = uVar56 + 1;
          bVar123 = (*pauVar52)[0] - (*pauVar53)[0];
          *pbVar80 = bVar123;
          uVar79 = 0x100 - bVar123;
          if (-1 < (char)bVar123) {
            uVar79 = (uint)bVar123;
          }
          uVar81 = uVar81 + uVar79;
          pbVar80 = pbVar80 + 1;
          pauVar53 = (undefined1 (*) [16])(*pauVar53 + 1);
          pauVar52 = (undefined1 (*) [16])(*pauVar52 + 1);
        } while (uVar81 <= uVar67 && uVar56 < uVar64);
      }
      if ((uVar81 < uVar67) && (pbVar63 = pbVar74, uVar67 = uVar81, *(long *)(param_1 + 0x270) != 0)
         ) {
        *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
        *(byte **)(param_1 + 0x270) = pbVar74;
      }
    }
  }
LAB_00168794:
  if (uVar71 == 0x20) {
    pbVar63 = *(byte **)(param_1 + 0x268);
    *pbVar63 = 2;
    if (uVar64 == 0) goto LAB_0016934c;
    pcVar76 = *(char **)(param_1 + 600);
    pbVar74 = pbVar66;
    pcVar77 = pcVar76;
    pbVar75 = pbVar63;
    if ((uVar64 < 8) || (uVar81 = 0, (ulong)((long)pbVar63 - (long)pbVar66) < 0x20)) {
      uVar81 = 0;
    }
    else if (0x1f < (ulong)((long)pbVar63 - (long)pcVar76)) {
      if (uVar64 < 0x20) {
        uVar56 = 0;
      }
      else {
        uVar81 = uVar64 & 0xffffffffffffffe0;
        uVar56 = 0;
        do {
          pauVar53 = (undefined1 (*) [16])(pcVar76 + uVar56 + 0x11);
          pauVar52 = (undefined1 (*) [16])(pbVar66 + uVar56 + 0x11);
          auVar96 = *pauVar52;
          auVar98 = *pauVar53;
          uVar62 = uVar56 + 0x20;
          auVar86._0_8_ =
               CONCAT17(pauVar52[-1][7] - pauVar53[-1][7],
                        CONCAT16(pauVar52[-1][6] - pauVar53[-1][6],
                                 CONCAT15(pauVar52[-1][5] - pauVar53[-1][5],
                                          CONCAT14(pauVar52[-1][4] - pauVar53[-1][4],
                                                   CONCAT13(pauVar52[-1][3] - pauVar53[-1][3],
                                                            CONCAT12(pauVar52[-1][2] -
                                                                     pauVar53[-1][2],
                                                                     CONCAT11(pauVar52[-1][1] -
                                                                              pauVar53[-1][1],
                                                                              pauVar52[-1][0] -
                                                                              pauVar53[-1][0])))))))
          ;
          auVar86[8] = pauVar52[-1][8] - pauVar53[-1][8];
          auVar86[9] = pauVar52[-1][9] - pauVar53[-1][9];
          auVar86[10] = pauVar52[-1][10] - pauVar53[-1][10];
          auVar86[0xb] = pauVar52[-1][0xb] - pauVar53[-1][0xb];
          auVar86[0xc] = pauVar52[-1][0xc] - pauVar53[-1][0xc];
          auVar86[0xd] = pauVar52[-1][0xd] - pauVar53[-1][0xd];
          auVar86[0xe] = pauVar52[-1][0xe] - pauVar53[-1][0xe];
          auVar86[0xf] = pauVar52[-1][0xf] - pauVar53[-1][0xf];
          auVar95._0_8_ =
               CONCAT17(auVar96[7] - auVar98[7],
                        CONCAT16(auVar96[6] - auVar98[6],
                                 CONCAT15(auVar96[5] - auVar98[5],
                                          CONCAT14(auVar96[4] - auVar98[4],
                                                   CONCAT13(auVar96[3] - auVar98[3],
                                                            CONCAT12(auVar96[2] - auVar98[2],
                                                                     CONCAT11(auVar96[1] -
                                                                              auVar98[1],
                                                                              auVar96[0] -
                                                                              auVar98[0])))))));
          auVar95[8] = auVar96[8] - auVar98[8];
          auVar95[9] = auVar96[9] - auVar98[9];
          auVar95[10] = auVar96[10] - auVar98[10];
          auVar95[0xb] = auVar96[0xb] - auVar98[0xb];
          auVar95[0xc] = auVar96[0xc] - auVar98[0xc];
          auVar95[0xd] = auVar96[0xd] - auVar98[0xd];
          auVar95[0xe] = auVar96[0xe] - auVar98[0xe];
          auVar95[0xf] = auVar96[0xf] - auVar98[0xf];
          *(long *)(pbVar63 + uVar56 + 9) = auVar86._8_8_;
          *(undefined8 *)(pbVar63 + uVar56 + 1) = auVar86._0_8_;
          *(long *)(pbVar63 + uVar56 + 0x19) = auVar95._8_8_;
          *(undefined8 *)(pbVar63 + uVar56 + 0x11) = auVar95._0_8_;
          uVar56 = uVar62;
        } while (uVar81 != uVar62);
        if (uVar64 == uVar81) goto LAB_00168954;
        uVar56 = uVar81;
        if ((uVar64 & 0x18) == 0) {
          pbVar74 = pbVar66 + uVar81;
          pbVar75 = pbVar63 + uVar81;
          pcVar77 = pcVar76 + uVar81;
          goto LAB_001687c4;
        }
      }
      uVar81 = uVar64 & 0xfffffffffffffff8;
      pcVar77 = pcVar76 + uVar81;
      pbVar75 = pbVar63 + uVar81;
      pbVar74 = pbVar66 + uVar81;
      do {
        uVar65 = *(undefined8 *)(pbVar66 + uVar56 + 1);
        uVar108 = *(undefined8 *)(pcVar76 + uVar56 + 1);
        uVar62 = uVar56 + 8;
        *(ulong *)(pbVar63 + uVar56 + 1) =
             CONCAT17((char)((ulong)uVar65 >> 0x38) - (char)((ulong)uVar108 >> 0x38),
                      CONCAT16((char)((ulong)uVar65 >> 0x30) - (char)((ulong)uVar108 >> 0x30),
                               CONCAT15((char)((ulong)uVar65 >> 0x28) -
                                        (char)((ulong)uVar108 >> 0x28),
                                        CONCAT14((char)((ulong)uVar65 >> 0x20) -
                                                 (char)((ulong)uVar108 >> 0x20),
                                                 CONCAT13((char)((ulong)uVar65 >> 0x18) -
                                                          (char)((ulong)uVar108 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar65 >> 0x10) -
                                                                   (char)((ulong)uVar108 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar65 >>
                                                                                  8) -
                                                                            (char)((ulong)uVar108 >>
                                                                                  8),(char)uVar65 -
                                                                                     (char)uVar108))
                                                         )))));
        uVar56 = uVar62;
      } while (uVar81 != uVar62);
      if (uVar64 == uVar81) goto LAB_00168954;
    }
LAB_001687c4:
    lVar82 = uVar64 - uVar81;
    do {
      pbVar75 = pbVar75 + 1;
      pcVar77 = pcVar77 + 1;
      pbVar74 = pbVar74 + 1;
      lVar82 = lVar82 + -1;
      *pbVar75 = *pbVar74 - *pcVar77;
    } while (lVar82 != 0);
  }
  else if ((uVar71 >> 5 & 1) != 0) {
    pbVar75 = *(byte **)(param_1 + 0x268);
    *pbVar75 = 2;
    uVar81 = 0;
    if (uVar64 != 0) {
      pcVar77 = *(char **)(param_1 + 600);
      pbVar74 = pbVar75;
      pbVar80 = pbVar66;
      uVar56 = uVar64;
      do {
        uVar56 = uVar56 - 1;
        pbVar80 = pbVar80 + 1;
        pbVar74 = pbVar74 + 1;
        pcVar77 = pcVar77 + 1;
        bVar123 = *pbVar80 - *pcVar77;
        *pbVar74 = bVar123;
        uVar79 = 0x100 - bVar123;
        if (-1 < (char)bVar123) {
          uVar79 = (uint)bVar123;
        }
        uVar81 = uVar81 + uVar79;
      } while (uVar81 <= uVar67 && uVar56 != 0);
    }
    if ((uVar81 < uVar67) && (pbVar63 = pbVar75, uVar67 = uVar81, *(long *)(param_1 + 0x270) != 0))
    {
      *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
      *(byte **)(param_1 + 0x270) = pbVar75;
    }
  }
LAB_00168954:
  uVar79 = (uint)uVar69;
  if (uVar71 == 0x40) {
    pbVar63 = *(byte **)(param_1 + 0x268);
    lVar82 = *(long *)(param_1 + 600);
    pauVar53 = (undefined1 (*) [16])(pbVar66 + 1);
    pbVar75 = (byte *)(lVar82 + 1);
    pbVar54 = pbVar63 + 1;
    *pbVar63 = 3;
    pauVar52 = pauVar53;
    pbVar80 = pbVar75;
    pbVar74 = pbVar54;
    if (bVar122 != 0) {
      if (((uVar79 - 1 < 0xf) || ((ulong)((long)pbVar63 - (long)pbVar66) < 0x10)) ||
         ((ulong)((long)pbVar63 - lVar82) < 0x10)) {
        uVar81 = 0;
      }
      else {
        uVar56 = (ulong)(uVar79 - 1) + 1;
        uVar81 = uVar56 & 0x1fffffff0;
        pauVar52 = (undefined1 (*) [16])(*pauVar53 + uVar81);
        pbVar80 = pbVar75 + uVar81;
        pbVar74 = pbVar54 + uVar81;
        uVar62 = uVar81;
        do {
          uVar62 = uVar62 - 0x10;
          auVar96 = *pauVar53;
          auVar87._0_8_ =
               CONCAT17(auVar96[7] - (pbVar75[7] >> 1),
                        CONCAT16(auVar96[6] - (pbVar75[6] >> 1),
                                 CONCAT15(auVar96[5] - (pbVar75[5] >> 1),
                                          CONCAT14(auVar96[4] - (pbVar75[4] >> 1),
                                                   CONCAT13(auVar96[3] - (pbVar75[3] >> 1),
                                                            CONCAT12(auVar96[2] - (pbVar75[2] >> 1),
                                                                     CONCAT11(auVar96[1] -
                                                                              (pbVar75[1] >> 1),
                                                                              auVar96[0] -
                                                                              (*pbVar75 >> 1))))))))
          ;
          auVar87[8] = auVar96[8] - (pbVar75[8] >> 1);
          auVar87[9] = auVar96[9] - (pbVar75[9] >> 1);
          auVar87[10] = auVar96[10] - (pbVar75[10] >> 1);
          auVar87[0xb] = auVar96[0xb] - (pbVar75[0xb] >> 1);
          auVar87[0xc] = auVar96[0xc] - (pbVar75[0xc] >> 1);
          auVar87[0xd] = auVar96[0xd] - (pbVar75[0xd] >> 1);
          auVar87[0xe] = auVar96[0xe] - (pbVar75[0xe] >> 1);
          auVar87[0xf] = auVar96[0xf] - (pbVar75[0xf] >> 1);
          *(long *)(pbVar54 + 8) = auVar87._8_8_;
          *(undefined8 *)pbVar54 = auVar87._0_8_;
          pbVar54 = pbVar54 + 0x10;
          pbVar75 = pbVar75 + 0x10;
          pauVar53 = pauVar53 + 1;
        } while (uVar62 != 0);
        if (uVar56 == uVar81) goto LAB_00168a44;
      }
      iVar51 = uVar79 - (int)uVar81;
      pauVar53 = pauVar52;
      pbVar75 = pbVar80;
      pbVar54 = pbVar74;
      do {
        pauVar52 = (undefined1 (*) [16])(*pauVar53 + 1);
        iVar51 = iVar51 + -1;
        pbVar80 = pbVar75 + 1;
        pbVar74 = pbVar54 + 1;
        *pbVar54 = (*pauVar53)[0] - (*pbVar75 >> 1);
        pauVar53 = pauVar52;
        pbVar75 = pbVar80;
        pbVar54 = pbVar74;
      } while (iVar51 != 0);
    }
LAB_00168a44:
    uVar81 = uVar64 - uVar69;
    if (uVar69 <= uVar64 && uVar81 != 0) {
      pbVar75 = pbVar66;
      if (((((7 < uVar81) && ((uint)(uVar64 + ~uVar69) <= -uVar79 - 2)) &&
           (uVar64 + ~uVar69 >> 0x20 == 0)) &&
          (((ulong)((long)pbVar66 - (long)pbVar74) < 0xffffffffffffffe0 &&
           (0x1f < (ulong)((long)pbVar74 - (long)pauVar52))))) &&
         (0x1f < (ulong)((long)pbVar74 - (long)pbVar80))) {
        if (uVar81 < 0x20) {
          uVar62 = 0;
        }
        else {
          uVar62 = uVar81 & 0xffffffffffffffe0;
          pauVar53 = pauVar52 + 1;
          pauVar55 = (undefined1 (*) [16])(pbVar66 + 0x11);
          pbVar75 = pbVar74 + 0x10;
          pauVar58 = (undefined1 (*) [16])(pbVar80 + 0x10);
          uVar56 = uVar62;
          do {
            pauVar57 = pauVar58 + -1;
            auVar96 = *pauVar58;
            uVar56 = uVar56 - 0x20;
            pauVar61 = pauVar55 + -1;
            auVar98 = *pauVar55;
            pauVar55 = pauVar55 + 2;
            pauVar58 = pauVar58 + 2;
            auVar118 = NEON_uhadd(*pauVar61,*pauVar57,1);
            auVar119 = NEON_uhadd(auVar98,auVar96,1);
            auVar96 = pauVar53[-1];
            auVar98 = *pauVar53;
            pauVar53 = pauVar53 + 2;
            auVar92._0_8_ =
                 CONCAT17(auVar96[7] - auVar118[7],
                          CONCAT16(auVar96[6] - auVar118[6],
                                   CONCAT15(auVar96[5] - auVar118[5],
                                            CONCAT14(auVar96[4] - auVar118[4],
                                                     CONCAT13(auVar96[3] - auVar118[3],
                                                              CONCAT12(auVar96[2] - auVar118[2],
                                                                       CONCAT11(auVar96[1] -
                                                                                auVar118[1],
                                                                                auVar96[0] -
                                                                                auVar118[0])))))));
            auVar92[8] = auVar96[8] - auVar118[8];
            auVar92[9] = auVar96[9] - auVar118[9];
            auVar92[10] = auVar96[10] - auVar118[10];
            auVar92[0xb] = auVar96[0xb] - auVar118[0xb];
            auVar92[0xc] = auVar96[0xc] - auVar118[0xc];
            auVar92[0xd] = auVar96[0xd] - auVar118[0xd];
            auVar92[0xe] = auVar96[0xe] - auVar118[0xe];
            auVar92[0xf] = auVar96[0xf] - auVar118[0xf];
            auVar100._0_8_ =
                 CONCAT17(auVar98[7] - auVar119[7],
                          CONCAT16(auVar98[6] - auVar119[6],
                                   CONCAT15(auVar98[5] - auVar119[5],
                                            CONCAT14(auVar98[4] - auVar119[4],
                                                     CONCAT13(auVar98[3] - auVar119[3],
                                                              CONCAT12(auVar98[2] - auVar119[2],
                                                                       CONCAT11(auVar98[1] -
                                                                                auVar119[1],
                                                                                auVar98[0] -
                                                                                auVar119[0])))))));
            auVar100[8] = auVar98[8] - auVar119[8];
            auVar100[9] = auVar98[9] - auVar119[9];
            auVar100[10] = auVar98[10] - auVar119[10];
            auVar100[0xb] = auVar98[0xb] - auVar119[0xb];
            auVar100[0xc] = auVar98[0xc] - auVar119[0xc];
            auVar100[0xd] = auVar98[0xd] - auVar119[0xd];
            auVar100[0xe] = auVar98[0xe] - auVar119[0xe];
            auVar100[0xf] = auVar98[0xf] - auVar119[0xf];
            *(long *)(pbVar75 + -8) = auVar92._8_8_;
            *(undefined8 *)(pbVar75 + -0x10) = auVar92._0_8_;
            *(long *)(pbVar75 + 8) = auVar100._8_8_;
            *(undefined8 *)pbVar75 = auVar100._0_8_;
            pbVar75 = pbVar75 + 0x20;
          } while (uVar56 != 0);
          if (uVar81 == uVar62) goto LAB_00168d14;
          if ((uVar81 & 0x18) == 0) {
            pauVar52 = (undefined1 (*) [16])(*pauVar52 + uVar62);
            pbVar74 = pbVar74 + uVar62;
            pbVar80 = pbVar80 + uVar62;
            uVar79 = uVar79 + (int)uVar62;
            pbVar75 = pbVar66 + uVar62;
            goto LAB_00168a74;
          }
        }
        uVar56 = uVar81 & 0xfffffffffffffff8;
        uVar79 = uVar79 + (int)uVar56;
        lVar82 = uVar62 - uVar56;
        pbVar75 = *pauVar52 + uVar62;
        pbVar54 = pbVar80 + uVar62;
        pbVar83 = pbVar74 + uVar62;
        pbVar72 = pbVar66 + uVar62 + 1;
        do {
          lVar82 = lVar82 + 8;
          uVar65 = NEON_uhadd(*(undefined8 *)pbVar72,*(undefined8 *)pbVar54,1);
          uVar108 = *(undefined8 *)pbVar75;
          *(ulong *)pbVar83 =
               CONCAT17((char)((ulong)uVar108 >> 0x38) - (char)((ulong)uVar65 >> 0x38),
                        CONCAT16((char)((ulong)uVar108 >> 0x30) - (char)((ulong)uVar65 >> 0x30),
                                 CONCAT15((char)((ulong)uVar108 >> 0x28) -
                                          (char)((ulong)uVar65 >> 0x28),
                                          CONCAT14((char)((ulong)uVar108 >> 0x20) -
                                                   (char)((ulong)uVar65 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar108 >> 0x18) -
                                                            (char)((ulong)uVar65 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar108 >> 0x10)
                                                                     - (char)((ulong)uVar65 >> 0x10)
                                                                     ,CONCAT11((char)((ulong)uVar108
                                                                                     >> 8) -
                                                                               (char)((ulong)uVar65
                                                                                     >> 8),
                                                                               (char)uVar108 -
                                                                               (char)uVar65)))))));
          pbVar75 = pbVar75 + 8;
          pbVar54 = pbVar54 + 8;
          pbVar83 = pbVar83 + 8;
          pbVar72 = pbVar72 + 8;
        } while (lVar82 != 0);
        pbVar80 = pbVar80 + uVar56;
        pbVar74 = pbVar74 + uVar56;
        pauVar52 = (undefined1 (*) [16])(*pauVar52 + uVar56);
        pbVar75 = pbVar66 + uVar56;
        if (uVar81 == uVar56) goto LAB_00168d14;
      }
LAB_00168a74:
      do {
        uVar79 = uVar79 + 1;
        *pbVar74 = (*pauVar52)[0] - (char)((uint)pbVar75[1] + (uint)*pbVar80 >> 1);
        pbVar80 = pbVar80 + 1;
        pbVar74 = pbVar74 + 1;
        pauVar52 = (undefined1 (*) [16])(*pauVar52 + 1);
        pbVar75 = pbVar75 + 1;
      } while (uVar79 < uVar64);
    }
  }
  else if ((uVar71 >> 6 & 1) != 0) {
    pbVar78 = *(byte **)(param_1 + 0x268);
    lVar82 = *(long *)(param_1 + 600);
    pbVar75 = (byte *)(lVar82 + 1);
    pbVar72 = pbVar78 + 1;
    *pbVar78 = 3;
    auVar119 = _DAT_00129a60;
    auVar118 = _DAT_00129940;
    auVar98 = _DAT_001297f0;
    auVar96 = _DAT_00129520;
    pbVar74 = pbVar66 + 1;
    pbVar54 = pbVar75;
    pbVar83 = pbVar72;
    pbVar80 = pbVar74;
    if (bVar122 == 0) {
      uVar81 = 0;
    }
    else {
      if (((uVar79 - 1 < 0xf) || ((ulong)((long)pbVar78 - (long)pbVar66) < 0x10)) ||
         ((ulong)((long)pbVar78 - lVar82) < 0x10)) {
        uVar56 = 0;
        uVar81 = 0;
      }
      else {
        lVar82 = 0;
        lVar93 = 0;
        uVar62 = (ulong)(uVar79 - 1) + 1;
        lVar102 = 0;
        lVar106 = 0;
        lVar117 = 0;
        lVar130 = 0;
        lVar107 = 0;
        lVar112 = 0;
        lVar149 = 0;
        lVar155 = 0;
        lVar131 = 0;
        lVar136 = 0;
        lVar156 = 0;
        lVar163 = 0;
        lVar137 = 0;
        lVar146 = 0;
        uVar56 = uVar62 & 0x1fffffff0;
        pbVar80 = pbVar74 + uVar56;
        pbVar54 = pbVar75 + uVar56;
        pbVar83 = pbVar72 + uVar56;
        uVar81 = uVar56;
        pbVar68 = pbVar74;
        do {
          uVar81 = uVar81 - 0x10;
          auVar185._0_8_ =
               CONCAT17(pbVar68[7] - (pbVar75[7] >> 1),
                        CONCAT16(pbVar68[6] - (pbVar75[6] >> 1),
                                 CONCAT15(pbVar68[5] - (pbVar75[5] >> 1),
                                          CONCAT14(pbVar68[4] - (pbVar75[4] >> 1),
                                                   CONCAT13(pbVar68[3] - (pbVar75[3] >> 1),
                                                            CONCAT12(pbVar68[2] - (pbVar75[2] >> 1),
                                                                     CONCAT11(pbVar68[1] -
                                                                              (pbVar75[1] >> 1),
                                                                              *pbVar68 -
                                                                              (*pbVar75 >> 1))))))))
          ;
          auVar185[8] = pbVar68[8] - (pbVar75[8] >> 1);
          auVar185[9] = pbVar68[9] - (pbVar75[9] >> 1);
          auVar185[10] = pbVar68[10] - (pbVar75[10] >> 1);
          auVar185[0xb] = pbVar68[0xb] - (pbVar75[0xb] >> 1);
          auVar185[0xc] = pbVar68[0xc] - (pbVar75[0xc] >> 1);
          auVar185[0xd] = pbVar68[0xd] - (pbVar75[0xd] >> 1);
          auVar185[0xe] = pbVar68[0xe] - (pbVar75[0xe] >> 1);
          auVar185[0xf] = pbVar68[0xf] - (pbVar75[0xf] >> 1);
          auVar133 = NEON_cmlt(auVar185,0,1);
          auVar140 = a64_TBL(ZEXT816(0),auVar185,auVar96);
          auVar141 = a64_TBL(ZEXT816(0),auVar185,auVar118);
          auVar151 = a64_TBL(ZEXT816(0),auVar185,auVar119);
          auVar152 = a64_TBL(ZEXT816(0),auVar185,auVar98);
          *(long *)(pbVar72 + 8) = auVar185._8_8_;
          *(undefined8 *)pbVar72 = auVar185._0_8_;
          auVar147._0_4_ = 0x100 - auVar152._0_4_;
          auVar147._4_4_ = 0x100 - auVar152._4_4_;
          auVar147._8_4_ = 0x100 - auVar152._8_4_;
          auVar147._12_4_ = 0x100 - auVar152._12_4_;
          auVar220._0_4_ = (int)(short)auVar133[0xc];
          auVar220._4_4_ = (int)(short)auVar133[0xd];
          auVar220._8_4_ = (int)(short)auVar133[0xe];
          auVar220._12_4_ = (int)(short)auVar133[0xf];
          auVar148._0_4_ = (int)(short)auVar133[4];
          auVar148._4_4_ = (int)(short)auVar133[5];
          auVar148._8_4_ = (int)(short)auVar133[6];
          auVar148._12_4_ = (int)(short)auVar133[7];
          auVar190._0_4_ = (int)(short)auVar133[0];
          auVar190._4_4_ = (int)(short)auVar133[1];
          auVar190._8_4_ = (int)(short)auVar133[2];
          auVar190._12_4_ = (int)(short)auVar133[3];
          auVar13._4_4_ = 0x100 - auVar140._4_4_;
          auVar13._0_4_ = 0x100 - auVar140._0_4_;
          auVar13._8_4_ = 0x100 - auVar140._8_4_;
          auVar13._12_4_ = 0x100 - auVar140._12_4_;
          auVar140 = NEON_bit(auVar140,auVar13,auVar220,1);
          auVar4._4_2_ = (short)auVar133[9];
          auVar4._0_4_ = (int)(short)auVar133[8];
          auVar4._6_2_ = (short)auVar133[9] >> 0xf;
          auVar4._8_2_ = (short)auVar133[10];
          auVar4._10_2_ = (short)auVar133[10] >> 0xf;
          auVar4._12_2_ = (short)auVar133[0xb];
          auVar4._14_2_ = (short)auVar133[0xb] >> 0xf;
          auVar19._4_4_ = 0x100 - auVar141._4_4_;
          auVar19._0_4_ = 0x100 - auVar141._0_4_;
          auVar19._8_4_ = 0x100 - auVar141._8_4_;
          auVar19._12_4_ = 0x100 - auVar141._12_4_;
          auVar141 = NEON_bit(auVar141,auVar19,auVar4,1);
          auVar16._4_4_ = 0x100 - auVar151._4_4_;
          auVar16._0_4_ = 0x100 - auVar151._0_4_;
          auVar16._8_4_ = 0x100 - auVar151._8_4_;
          auVar16._12_4_ = 0x100 - auVar151._12_4_;
          auVar151 = NEON_bit(auVar151,auVar16,auVar148,1);
          auVar133 = NEON_bsl(auVar190,auVar147,auVar152,1);
          lVar137 = lVar137 + (auVar140._8_8_ & 0xffffffff);
          lVar146 = lVar146 + (auVar140._8_8_ >> 0x20);
          lVar156 = lVar156 + (ulong)auVar140._0_4_;
          lVar163 = lVar163 + (ulong)auVar140._4_4_;
          lVar131 = lVar131 + (auVar141._8_8_ & 0xffffffff);
          lVar136 = lVar136 + (auVar141._8_8_ >> 0x20);
          lVar107 = lVar107 + (auVar151._8_8_ & 0xffffffff);
          lVar112 = lVar112 + (auVar151._8_8_ >> 0x20);
          lVar149 = lVar149 + (ulong)auVar141._0_4_;
          lVar155 = lVar155 + (ulong)auVar141._4_4_;
          lVar117 = lVar117 + (ulong)auVar151._0_4_;
          lVar130 = lVar130 + (ulong)auVar151._4_4_;
          lVar102 = lVar102 + (auVar133._8_8_ & 0xffffffff);
          lVar106 = lVar106 + (ulong)auVar133._12_4_;
          lVar82 = lVar82 + (ulong)auVar133._0_4_;
          lVar93 = lVar93 + (ulong)auVar133._4_4_;
          pbVar72 = pbVar72 + 0x10;
          pbVar75 = pbVar75 + 0x10;
          pbVar68 = pbVar68 + 0x10;
        } while (uVar81 != 0);
        uVar81 = lVar82 + lVar149 + lVar117 + lVar156 + lVar102 + lVar131 + lVar107 + lVar137 +
                 lVar93 + lVar155 + lVar130 + lVar163 + lVar106 + lVar136 + lVar112 + lVar146;
        if (uVar62 == uVar56) goto LAB_00168b5c;
      }
      iVar51 = uVar79 - (int)uVar56;
      pbVar75 = pbVar54;
      pbVar72 = pbVar83;
      pbVar68 = pbVar80;
      do {
        pbVar80 = pbVar68 + 1;
        pbVar54 = pbVar75 + 1;
        bVar123 = *pbVar68 - (*pbVar75 >> 1);
        pbVar83 = pbVar72 + 1;
        *pbVar72 = bVar123;
        uVar101 = 0x100 - bVar123;
        if (-1 < (char)bVar123) {
          uVar101 = (uint)bVar123;
        }
        iVar51 = iVar51 + -1;
        uVar81 = uVar81 + uVar101;
        pbVar75 = pbVar54;
        pbVar72 = pbVar83;
        pbVar68 = pbVar80;
      } while (iVar51 != 0);
    }
LAB_00168b5c:
    if (uVar69 < uVar64) {
      do {
        uVar79 = uVar79 + 1;
        uVar101 = (uint)*pbVar80 - ((uint)*pbVar74 + (uint)*pbVar54 >> 1);
        bVar123 = (byte)uVar101;
        uVar101 = uVar101 & 0xff;
        *pbVar83 = bVar123;
        uVar1 = 0x100 - uVar101;
        if (-1 < (char)bVar123) {
          uVar1 = uVar101;
        }
        uVar81 = uVar81 + uVar1;
        pbVar54 = pbVar54 + 1;
        pbVar83 = pbVar83 + 1;
        pbVar74 = pbVar74 + 1;
        pbVar80 = pbVar80 + 1;
      } while ((uVar67 >= uVar81 && uVar79 <= uVar64) && (uVar67 < uVar81 || uVar64 != uVar79));
    }
    if ((uVar81 < uVar67) && (pbVar63 = pbVar78, uVar67 = uVar81, *(long *)(param_1 + 0x270) != 0))
    {
      *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
      *(byte **)(param_1 + 0x270) = pbVar78;
    }
  }
LAB_00168d14:
  if (uVar71 != 0x80) {
    if (uVar71 >> 7 == 0) goto LAB_0016934c;
    pbVar72 = *(byte **)(param_1 + 0x268);
    lVar82 = *(long *)(param_1 + 600);
    pbVar75 = (byte *)(lVar82 + 1);
    pbVar83 = pbVar72 + 1;
    *pbVar72 = 4;
    pbVar74 = pbVar66 + 1;
    pbVar54 = pbVar75;
    pbVar80 = pbVar74;
    if (bVar122 == 0) {
      uVar81 = 0;
      pbVar78 = pbVar83;
    }
    else {
      if (bVar122 < 0x79) {
        uVar81 = 0;
        uVar56 = 0;
      }
      else {
        uVar81 = 0;
        if (((ulong)((long)pbVar72 - (long)pbVar66) < 0x10) ||
           ((ulong)((long)pbVar72 - lVar82) < 0x10)) {
          uVar56 = 0;
        }
        else {
          uVar56 = uVar69 & 0x30;
          bVar122 = pbVar66[2] - *(char *)(lVar82 + 2);
          bVar123 = pbVar66[3] - *(char *)(lVar82 + 3);
          bVar124 = pbVar66[4] - *(char *)(lVar82 + 4);
          bVar125 = pbVar66[5] - *(char *)(lVar82 + 5);
          bVar126 = pbVar66[6] - *(char *)(lVar82 + 6);
          bVar127 = pbVar66[7] - *(char *)(lVar82 + 7);
          bVar128 = pbVar66[8] - *(char *)(lVar82 + 8);
          auVar120._0_8_ =
               CONCAT17(bVar128,CONCAT16(bVar127,CONCAT15(bVar126,CONCAT14(bVar125,CONCAT13(bVar124,
                                                  CONCAT12(bVar123,CONCAT11(bVar122,*pbVar74 -
                                                                                    *pbVar75)))))));
          auVar120[8] = pbVar66[9] - *(char *)(lVar82 + 9);
          auVar120[9] = pbVar66[10] - *(char *)(lVar82 + 10);
          auVar120[10] = pbVar66[0xb] - *(char *)(lVar82 + 0xb);
          auVar120[0xb] = pbVar66[0xc] - *(char *)(lVar82 + 0xc);
          auVar120[0xc] = pbVar66[0xd] - *(char *)(lVar82 + 0xd);
          auVar120[0xd] = pbVar66[0xe] - *(char *)(lVar82 + 0xe);
          auVar120[0xe] = pbVar66[0xf] - *(char *)(lVar82 + 0xf);
          auVar120[0xf] = pbVar66[0x10] - *(char *)(lVar82 + 0x10);
          pbVar80 = pbVar74 + uVar56;
          pbVar54 = pbVar75 + uVar56;
          pbVar78 = pbVar83 + uVar56;
          auVar96 = NEON_cmlt(auVar120,0,1);
          uVar71 = (uint)CONCAT12(bVar122,(ushort)(byte)(*pbVar74 - *pbVar75));
          uVar20 = CONCAT12(auVar120[9],(ushort)auVar120[8]);
          *(long *)(pbVar72 + 9) = auVar120._8_8_;
          *(undefined8 *)pbVar83 = auVar120._0_8_;
          uVar21 = CONCAT14(auVar120[9],(uint)uVar20);
          auVar153._6_2_ = 0;
          auVar153._0_6_ = (uint6)uVar21 & 0xffff0000ffff;
          auVar153[8] = auVar120[10];
          auVar153._9_3_ = 0;
          auVar153[0xc] = auVar120[0xb];
          auVar153._13_3_ = 0;
          auVar159._2_2_ = 0;
          auVar159._0_2_ = CONCAT11(0,auVar120[0xc]);
          auVar159[4] = auVar120[0xd];
          auVar159._5_3_ = 0;
          auVar159[8] = auVar120[0xe];
          auVar159._9_3_ = 0;
          auVar159[0xc] = auVar120[0xf];
          auVar159._13_3_ = 0;
          auVar167._0_4_ = 0x100 - (uVar71 & 0xffff);
          auVar167._4_4_ = 0x100 - (uint)bVar122;
          auVar167._8_4_ = 0x100 - (uint)bVar123;
          auVar167._12_4_ = 0x100 - (uint)bVar124;
          auVar174._0_4_ = 0x100 - (uint)CONCAT11(0,auVar120[0xc]);
          auVar174._4_4_ = 0x100 - (uint)auVar120[0xd];
          auVar174._8_4_ = 0x100 - (uint)auVar120[0xe];
          auVar174._12_4_ = 0x100 - (uint)auVar120[0xf];
          uVar84 = CONCAT11(0,bVar125);
          auVar180._0_4_ = 0x100 - (uint)uVar84;
          auVar180._4_4_ = 0x100 - (uint)bVar126;
          auVar180._8_4_ = 0x100 - (uint)bVar127;
          auVar180._12_4_ = 0x100 - (uint)bVar128;
          auVar104._0_4_ = 0x100 - (uVar20 & 0xffff);
          auVar104._4_4_ = 0x100 - (uint)auVar120[9];
          auVar104._8_4_ = 0x100 - (uint)auVar120[10];
          auVar104._12_4_ = 0x100 - (uint)auVar120[0xb];
          auVar110._6_2_ = 0;
          auVar110._0_6_ = (uint6)CONCAT14(bVar122,uVar71) & 0xffff0000ffff;
          auVar110[8] = bVar123;
          auVar110._9_3_ = 0;
          auVar110[0xc] = bVar124;
          auVar110._13_3_ = 0;
          auVar142._2_2_ = 0;
          auVar142._0_2_ = uVar84;
          auVar142[4] = bVar126;
          auVar142._5_3_ = 0;
          auVar142[8] = bVar127;
          auVar142._9_3_ = 0;
          auVar142[0xc] = bVar128;
          auVar142._13_3_ = 0;
          auVar90._0_4_ = (int)(short)auVar96[0xc];
          auVar90._4_4_ = (int)(short)auVar96[0xd];
          auVar90._8_4_ = (int)(short)auVar96[0xe];
          auVar90._12_4_ = (int)(short)auVar96[0xf];
          auVar186._0_4_ = (int)(short)auVar96[0];
          auVar186._4_4_ = (int)(short)auVar96[1];
          auVar186._8_4_ = (int)(short)auVar96[2];
          auVar186._12_4_ = (int)(short)auVar96[3];
          auVar97._0_4_ = (int)(short)auVar96[4];
          auVar97._4_4_ = (int)(short)auVar96[5];
          auVar97._8_4_ = (int)(short)auVar96[6];
          auVar97._12_4_ = (int)(short)auVar96[7];
          auVar134._0_4_ = (int)(short)auVar96[8];
          auVar134._4_4_ = (int)(short)auVar96[9];
          auVar134._8_4_ = (int)(short)auVar96[10];
          auVar134._12_4_ = (int)(short)auVar96[0xb];
          auVar96 = NEON_bsl(auVar90,auVar174,auVar159,1);
          auVar119 = NEON_bit(auVar110,auVar167,auVar186,1);
          auVar118 = NEON_bif(auVar104,auVar153,auVar134,1);
          auVar98 = NEON_bsl(auVar97,auVar180,auVar142,1);
          auVar91 = auVar96;
          auVar99 = auVar98;
          auVar105 = auVar118;
          auVar111 = auVar119;
          if (uVar56 != 0x10) {
            bVar122 = pbVar66[0x11] - *(char *)(lVar82 + 0x11);
            bVar123 = pbVar66[0x12] - *(char *)(lVar82 + 0x12);
            bVar124 = pbVar66[0x13] - *(char *)(lVar82 + 0x13);
            bVar125 = pbVar66[0x14] - *(char *)(lVar82 + 0x14);
            bVar126 = pbVar66[0x15] - *(char *)(lVar82 + 0x15);
            bVar127 = pbVar66[0x16] - *(char *)(lVar82 + 0x16);
            bVar128 = pbVar66[0x17] - *(char *)(lVar82 + 0x17);
            bVar129 = pbVar66[0x18] - *(char *)(lVar82 + 0x18);
            auVar121._0_8_ =
                 CONCAT17(bVar129,CONCAT16(bVar128,CONCAT15(bVar127,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar124,CONCAT11(bVar123,bVar122)
                                                                  ))))));
            auVar121[8] = pbVar66[0x19] - *(char *)(lVar82 + 0x19);
            auVar121[9] = pbVar66[0x1a] - *(char *)(lVar82 + 0x1a);
            auVar121[10] = pbVar66[0x1b] - *(char *)(lVar82 + 0x1b);
            auVar121[0xb] = pbVar66[0x1c] - *(char *)(lVar82 + 0x1c);
            auVar121[0xc] = pbVar66[0x1d] - *(char *)(lVar82 + 0x1d);
            auVar121[0xd] = pbVar66[0x1e] - *(char *)(lVar82 + 0x1e);
            auVar121[0xe] = pbVar66[0x1f] - *(char *)(lVar82 + 0x1f);
            auVar121[0xf] = pbVar66[0x20] - *(char *)(lVar82 + 0x20);
            auVar133 = NEON_cmlt(auVar121,0,1);
            uVar20 = CONCAT12(auVar121[9],(ushort)auVar121[8]);
            uVar71 = (uint)CONCAT12(bVar123,(ushort)bVar122);
            *(long *)(pbVar72 + 0x19) = auVar121._8_8_;
            *(undefined8 *)(pbVar72 + 0x11) = auVar121._0_8_;
            auVar160._2_2_ = 0;
            auVar160._0_2_ = CONCAT11(0,auVar121[0xc]);
            auVar160[4] = auVar121[0xd];
            auVar160._5_3_ = 0;
            auVar160[8] = auVar121[0xe];
            auVar160._9_3_ = 0;
            auVar160[0xc] = auVar121[0xf];
            auVar160._13_3_ = 0;
            uVar21 = CONCAT14(auVar121[9],(uint)uVar20);
            auVar175._6_2_ = 0;
            auVar175._0_6_ = (uint6)uVar21 & 0xffff0000ffff;
            auVar175[8] = auVar121[10];
            auVar175._9_3_ = 0;
            auVar175[0xc] = auVar121[0xb];
            auVar175._13_3_ = 0;
            auVar191._0_4_ = 0x100 - (uint)CONCAT11(0,auVar121[0xc]);
            auVar191._4_4_ = 0x100 - (uint)auVar121[0xd];
            auVar191._8_4_ = 0x100 - (uint)auVar121[0xe];
            auVar191._12_4_ = 0x100 - (uint)auVar121[0xf];
            auVar135._0_4_ = 0x100 - (uVar20 & 0xffff);
            auVar135._4_4_ = 0x100 - (uint)auVar121[9];
            auVar135._8_4_ = 0x100 - (uint)auVar121[10];
            auVar135._12_4_ = 0x100 - (uint)auVar121[0xb];
            uVar84 = CONCAT11(0,bVar126);
            auVar195._0_4_ = 0x100 - (uint)uVar84;
            auVar195._4_4_ = 0x100 - (uint)bVar127;
            auVar195._8_4_ = 0x100 - (uint)bVar128;
            auVar195._12_4_ = 0x100 - (uint)bVar129;
            auVar115._0_4_ = 0x100 - (uVar71 & 0xffff);
            auVar115._4_4_ = 0x100 - (uint)bVar123;
            auVar115._8_4_ = 0x100 - (uint)bVar124;
            auVar115._12_4_ = 0x100 - (uint)bVar125;
            auVar187._6_2_ = 0;
            auVar187._0_6_ = (uint6)CONCAT14(bVar123,uVar71) & 0xffff0000ffff;
            auVar187[8] = bVar124;
            auVar187._9_3_ = 0;
            auVar187[0xc] = bVar125;
            auVar187._13_3_ = 0;
            auVar199._0_8_ = CONCAT44((int)(short)auVar133[5],(int)(short)auVar133[4]);
            auVar199._8_4_ = (int)(short)auVar133[6];
            auVar199._12_4_ = (int)(short)auVar133[7];
            auVar143._0_4_ = (int)(short)auVar133[0];
            auVar143._4_4_ = (int)(short)auVar133[1];
            auVar143._8_4_ = (int)(short)auVar133[2];
            auVar143._12_4_ = (int)(short)auVar133[3];
            auVar181._2_2_ = 0;
            auVar181._0_2_ = uVar84;
            auVar181[4] = bVar127;
            auVar181._5_3_ = 0;
            auVar181[8] = bVar128;
            auVar181._9_3_ = 0;
            auVar181[0xc] = bVar129;
            auVar181._13_3_ = 0;
            auVar154._0_4_ = (int)(short)auVar133[0xc];
            auVar154._4_4_ = (int)(short)auVar133[0xd];
            auVar154._8_4_ = (int)(short)auVar133[0xe];
            auVar154._12_4_ = (int)(short)auVar133[0xf];
            auVar168._0_4_ = (int)(short)auVar133[8];
            auVar168._4_4_ = (int)(short)auVar133[9];
            auVar168._8_4_ = (int)(short)auVar133[10];
            auVar168._12_4_ = (int)(short)auVar133[0xb];
            auVar133 = NEON_bif(auVar115,auVar187,auVar143,1);
            auVar144._8_8_ = auVar199._8_8_;
            auVar144._0_8_ = auVar199._0_8_;
            auVar151 = NEON_bsl(auVar154,auVar191,auVar160,1);
            auVar140 = NEON_bif(auVar135,auVar175,auVar168,1);
            auVar141 = NEON_bsl(auVar144,auVar195,auVar181,1);
            auVar111._0_4_ = auVar119._0_4_ + auVar133._0_4_;
            auVar111._4_4_ = auVar119._4_4_ + auVar133._4_4_;
            auVar111._8_4_ = auVar119._8_4_ + auVar133._8_4_;
            auVar111._12_4_ = auVar119._12_4_ + auVar133._12_4_;
            auVar91._0_4_ = auVar96._0_4_ + auVar151._0_4_;
            auVar91._4_4_ = auVar96._4_4_ + auVar151._4_4_;
            auVar91._8_4_ = auVar96._8_4_ + auVar151._8_4_;
            auVar91._12_4_ = auVar96._12_4_ + auVar151._12_4_;
            auVar105._0_4_ = auVar118._0_4_ + auVar140._0_4_;
            auVar105._4_4_ = auVar118._4_4_ + auVar140._4_4_;
            auVar105._8_4_ = auVar118._8_4_ + auVar140._8_4_;
            auVar105._12_4_ = auVar118._12_4_ + auVar140._12_4_;
            auVar99._0_4_ = auVar98._0_4_ + auVar141._0_4_;
            auVar99._4_4_ = auVar98._4_4_ + auVar141._4_4_;
            auVar99._8_4_ = auVar98._8_4_ + auVar141._8_4_;
            auVar99._12_4_ = auVar98._12_4_ + auVar141._12_4_;
          }
          uVar81 = (ulong)auVar111._0_4_ + (ulong)auVar105._0_4_ +
                   (ulong)auVar99._0_4_ + (ulong)auVar91._0_4_ +
                   (auVar111._8_8_ & 0xffffffff) + (auVar105._8_8_ & 0xffffffff) +
                   (auVar99._8_8_ & 0xffffffff) + (auVar91._8_8_ & 0xffffffff) +
                   (ulong)auVar111._4_4_ + (ulong)auVar105._4_4_ +
                   (ulong)auVar99._4_4_ + (ulong)auVar91._4_4_ +
                   (auVar111._8_8_ >> 0x20) + (auVar105._8_8_ >> 0x20) +
                   (auVar99._8_8_ >> 0x20) + (auVar91._8_8_ >> 0x20);
          pbVar83 = pbVar78;
          if (uVar56 == uVar69) goto LAB_00169168;
        }
      }
      lVar82 = uVar69 - uVar56;
      pbVar66 = pbVar54;
      pbVar68 = pbVar80;
      do {
        bVar122 = *pbVar68 - *pbVar66;
        *pbVar83 = bVar122;
        uVar71 = 0x100 - bVar122;
        if (-1 < (char)bVar122) {
          uVar71 = (uint)bVar122;
        }
        lVar82 = lVar82 + -1;
        uVar81 = uVar81 + uVar71;
        pbVar54 = pbVar66 + 1;
        pbVar66 = pbVar66 + 1;
        pbVar80 = pbVar68 + 1;
        pbVar68 = pbVar68 + 1;
        pbVar78 = pbVar83 + 1;
        pbVar83 = pbVar83 + 1;
      } while (lVar82 != 0);
    }
LAB_00169168:
    if (uVar69 < uVar64) {
      do {
        uVar69 = uVar69 + 1;
        bVar122 = *pbVar75;
        uVar101 = (uint)*pbVar54 - (uint)bVar122;
        uVar71 = (uint)*pbVar74 - (uint)bVar122;
        uVar79 = -uVar101;
        if (-1 < (int)uVar101) {
          uVar79 = uVar101;
        }
        uVar1 = -uVar71;
        if (-1 < (int)uVar71) {
          uVar1 = uVar71;
        }
        uVar71 = uVar71 + uVar101;
        uVar101 = -uVar71;
        if (-1 < (int)uVar71) {
          uVar101 = uVar71;
        }
        uVar71 = (uint)bVar122;
        if (uVar1 <= uVar101) {
          uVar71 = (uint)*pbVar54;
        }
        if (uVar79 <= uVar101 && uVar79 <= uVar1) {
          uVar71 = (uint)*pbVar74;
        }
        bVar122 = (byte)(*pbVar80 - uVar71);
        uVar71 = *pbVar80 - uVar71 & 0xff;
        *pbVar78 = bVar122;
        uVar79 = 0x100 - uVar71;
        if (-1 < (char)bVar122) {
          uVar79 = uVar71;
        }
        uVar81 = uVar81 + uVar79;
        pbVar54 = pbVar54 + 1;
        pbVar80 = pbVar80 + 1;
        pbVar75 = pbVar75 + 1;
        pbVar74 = pbVar74 + 1;
        pbVar78 = pbVar78 + 1;
      } while (uVar81 <= uVar67 && uVar69 < uVar64);
    }
    if ((uVar81 < uVar67) && (pbVar63 = pbVar72, *(long *)(param_1 + 0x270) != 0)) {
      *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x270);
      *(byte **)(param_1 + 0x270) = pbVar72;
    }
    goto LAB_0016934c;
  }
  pbVar63 = *(byte **)(param_1 + 0x268);
  pbVar75 = *(byte **)(param_1 + 600);
  pauVar53 = (undefined1 (*) [16])(pbVar66 + 1);
  pauVar52 = (undefined1 (*) [16])(pbVar75 + 1);
  pbVar80 = pbVar63 + 1;
  *pbVar63 = 4;
  pauVar58 = pauVar53;
  pauVar55 = pauVar52;
  pbVar74 = pbVar80;
  if (bVar122 != 0) {
    if (((bVar122 < 0x79) || ((ulong)((long)pbVar63 - (long)pbVar66) < 0x10)) ||
       ((ulong)((long)pbVar63 - (long)pbVar75) < 0x10)) {
      uVar67 = 0;
    }
    else {
      auVar96 = *pauVar52;
      uVar67 = uVar69 & 0x30;
      pauVar58 = (undefined1 (*) [16])(*pauVar53 + uVar67);
      pauVar55 = (undefined1 (*) [16])(*pauVar52 + uVar67);
      auVar88._0_8_ =
           CONCAT17(pbVar66[8] - auVar96[7],
                    CONCAT16(pbVar66[7] - auVar96[6],
                             CONCAT15(pbVar66[6] - auVar96[5],
                                      CONCAT14(pbVar66[5] - auVar96[4],
                                               CONCAT13(pbVar66[4] - auVar96[3],
                                                        CONCAT12(pbVar66[3] - auVar96[2],
                                                                 CONCAT11(pbVar66[2] - auVar96[1],
                                                                          (*pauVar53)[0] -
                                                                          auVar96[0])))))));
      auVar88[8] = pbVar66[9] - auVar96[8];
      auVar88[9] = pbVar66[10] - auVar96[9];
      auVar88[10] = pbVar66[0xb] - auVar96[10];
      auVar88[0xb] = pbVar66[0xc] - auVar96[0xb];
      auVar88[0xc] = pbVar66[0xd] - auVar96[0xc];
      auVar88[0xd] = pbVar66[0xe] - auVar96[0xd];
      auVar88[0xe] = pbVar66[0xf] - auVar96[0xe];
      auVar88[0xf] = pbVar66[0x10] - auVar96[0xf];
      pbVar74 = pbVar80 + uVar67;
      *(long *)(pbVar63 + 9) = auVar88._8_8_;
      *(undefined8 *)pbVar80 = auVar88._0_8_;
      if (uVar67 != 0x10) {
        auVar96 = *(undefined1 (*) [16])(pbVar75 + 0x11);
        auVar89._0_8_ =
             CONCAT17(pbVar66[0x18] - auVar96[7],
                      CONCAT16(pbVar66[0x17] - auVar96[6],
                               CONCAT15(pbVar66[0x16] - auVar96[5],
                                        CONCAT14(pbVar66[0x15] - auVar96[4],
                                                 CONCAT13(pbVar66[0x14] - auVar96[3],
                                                          CONCAT12(pbVar66[0x13] - auVar96[2],
                                                                   CONCAT11(pbVar66[0x12] -
                                                                            auVar96[1],
                                                                            pbVar66[0x11] -
                                                                            auVar96[0])))))));
        auVar89[8] = pbVar66[0x19] - auVar96[8];
        auVar89[9] = pbVar66[0x1a] - auVar96[9];
        auVar89[10] = pbVar66[0x1b] - auVar96[10];
        auVar89[0xb] = pbVar66[0x1c] - auVar96[0xb];
        auVar89[0xc] = pbVar66[0x1d] - auVar96[0xc];
        auVar89[0xd] = pbVar66[0x1e] - auVar96[0xd];
        auVar89[0xe] = pbVar66[0x1f] - auVar96[0xe];
        auVar89[0xf] = pbVar66[0x20] - auVar96[0xf];
        *(long *)(pbVar63 + 0x19) = auVar89._8_8_;
        *(undefined8 *)(pbVar63 + 0x11) = auVar89._0_8_;
      }
      if (uVar67 == uVar69) goto LAB_00168dc0;
    }
    lVar82 = uVar69 - uVar67;
    pauVar57 = pauVar58;
    pauVar61 = pauVar55;
    pbVar80 = pbVar74;
    do {
      pauVar58 = (undefined1 (*) [16])(*pauVar57 + 1);
      lVar82 = lVar82 + -1;
      pauVar55 = (undefined1 (*) [16])(*pauVar61 + 1);
      pbVar74 = pbVar80 + 1;
      *pbVar80 = (*pauVar57)[0] - (*pauVar61)[0];
      pauVar57 = pauVar58;
      pauVar61 = pauVar55;
      pbVar80 = pbVar74;
    } while (lVar82 != 0);
  }
LAB_00168dc0:
  auVar119 = _DAT_00129a60;
  auVar118 = _DAT_00129940;
  auVar98 = _DAT_001297f0;
  auVar96 = _DAT_00129520;
  uVar67 = uVar64 - uVar69;
  if (uVar64 < uVar69 || uVar67 == 0) goto LAB_0016934c;
  if (((7 < uVar67) && ((ulong)((long)pbVar75 - (long)pbVar74) < 0xfffffffffffffff0)) &&
     ((0xf < (ulong)((long)pbVar74 - (long)pauVar55) &&
      ((0xf < (ulong)((long)pbVar74 - (long)pauVar58) &&
       ((ulong)((long)pbVar66 - (long)pbVar74) < 0xfffffffffffffff0)))))) {
    if (uVar67 < 0x10) {
      uVar56 = 0;
    }
    else {
      uVar56 = uVar67 & 0xfffffffffffffff0;
      uVar81 = uVar56;
      pauVar57 = pauVar58;
      pbVar80 = pbVar74;
      pauVar61 = pauVar55;
      do {
        auVar133 = *pauVar61;
        uVar81 = uVar81 - 0x10;
        auVar140 = *pauVar52;
        auVar141 = *pauVar53;
        auVar151 = a64_TBL(ZEXT816(0),auVar133,auVar96);
        auVar158 = a64_TBL(ZEXT816(0),auVar133,auVar118);
        auVar165 = a64_TBL(ZEXT816(0),auVar133,auVar119);
        auVar169 = a64_TBL(ZEXT816(0),auVar133,auVar98);
        auVar176 = a64_TBL(ZEXT816(0),auVar140,auVar118);
        auVar182 = a64_TBL(ZEXT816(0),auVar140,auVar98);
        auVar188 = a64_TBL(ZEXT816(0),auVar140,auVar96);
        auVar192 = a64_TBL(ZEXT816(0),auVar141,auVar96);
        auVar196 = a64_TBL(ZEXT816(0),auVar141,auVar118);
        auVar200 = a64_TBL(ZEXT816(0),auVar140,auVar119);
        auVar201 = a64_TBL(ZEXT816(0),auVar141,auVar119);
        auVar203 = a64_TBL(ZEXT816(0),auVar141,auVar98);
        auVar197 = NEON_uabd(auVar176,auVar196,4);
        auVar193 = NEON_uabd(auVar188,auVar192,4);
        auVar204 = NEON_uabd(auVar182,auVar203,4);
        auVar202 = NEON_uabd(auVar200,auVar201,4);
        auVar152 = NEON_uabd(auVar188,auVar151,4);
        auVar170 = NEON_uabd(auVar182,auVar169,4);
        auVar161 = NEON_uabd(auVar200,auVar165,4);
        auVar166 = NEON_uabd(auVar176,auVar158,4);
        uVar208 = MP_INT_ABS(auVar196._0_4_ + auVar176._0_4_ * -2 + auVar158._0_4_);
        uVar209 = MP_INT_ABS(auVar196._4_4_ + auVar176._4_4_ * -2 + auVar158._4_4_);
        uVar210 = MP_INT_ABS(auVar196._8_4_ + auVar176._8_4_ * -2 + auVar158._8_4_);
        uVar211 = MP_INT_ABS(auVar196._12_4_ + auVar176._12_4_ * -2 + auVar158._12_4_);
        uVar212 = MP_INT_ABS(auVar192._0_4_ + auVar188._0_4_ * -2 + auVar151._0_4_);
        uVar213 = MP_INT_ABS(auVar192._4_4_ + auVar188._4_4_ * -2 + auVar151._4_4_);
        uVar214 = MP_INT_ABS(auVar192._8_4_ + auVar188._8_4_ * -2 + auVar151._8_4_);
        uVar215 = MP_INT_ABS(auVar192._12_4_ + auVar188._12_4_ * -2 + auVar151._12_4_);
        uVar5 = MP_INT_ABS(auVar203._0_4_ + auVar182._0_4_ * -2 + auVar169._0_4_);
        uVar6 = MP_INT_ABS(auVar203._4_4_ + auVar182._4_4_ * -2 + auVar169._4_4_);
        uVar205 = (undefined2)((uint)uVar6 >> 0x10);
        uVar8 = MP_INT_ABS(auVar203._8_4_ + auVar182._8_4_ * -2 + auVar169._8_4_);
        uVar206 = (undefined2)((uint)uVar8 >> 0x10);
        uVar10 = MP_INT_ABS(auVar203._12_4_ + auVar182._12_4_ * -2 + auVar169._12_4_);
        uVar207 = (undefined2)((uint)uVar10 >> 0x10);
        uVar216 = MP_INT_ABS(auVar201._0_4_ + auVar200._0_4_ * -2 + auVar165._0_4_);
        uVar217 = MP_INT_ABS(auVar201._4_4_ + auVar200._4_4_ * -2 + auVar165._4_4_);
        uVar218 = MP_INT_ABS(auVar201._8_4_ + auVar200._8_4_ * -2 + auVar165._8_4_);
        uVar219 = MP_INT_ABS(auVar201._12_4_ + auVar200._12_4_ * -2 + auVar165._12_4_);
        auVar14._4_4_ = uVar213;
        auVar14._0_4_ = uVar212;
        auVar14._8_4_ = uVar214;
        auVar14._12_4_ = uVar215;
        auVar151 = NEON_umin(auVar193,auVar14,4);
        auVar11._4_4_ = uVar209;
        auVar11._0_4_ = uVar208;
        auVar11._8_4_ = uVar210;
        auVar11._12_4_ = uVar211;
        auVar192 = NEON_umin(auVar197,auVar11,4);
        auVar15._4_4_ = uVar213;
        auVar15._0_4_ = uVar212;
        auVar15._8_4_ = uVar214;
        auVar15._12_4_ = uVar215;
        auVar169 = NEON_cmhi(auVar193,auVar15,4);
        auVar17._4_4_ = uVar217;
        auVar17._0_4_ = uVar216;
        auVar17._8_4_ = uVar218;
        auVar17._12_4_ = uVar219;
        auVar158 = NEON_umin(auVar202,auVar17,4);
        auVar2._4_2_ = (short)uVar6;
        auVar2._0_4_ = uVar5;
        auVar2._6_2_ = uVar205;
        auVar2._8_2_ = (short)uVar8;
        auVar2._10_2_ = uVar206;
        auVar2._12_2_ = (short)uVar10;
        auVar2._14_2_ = uVar207;
        auVar165 = NEON_umin(auVar204,auVar2,4);
        auVar12._4_4_ = uVar209;
        auVar12._0_4_ = uVar208;
        auVar12._8_4_ = uVar210;
        auVar12._12_4_ = uVar211;
        auVar176 = NEON_cmhi(auVar197,auVar12,4);
        auVar18._4_4_ = uVar217;
        auVar18._0_4_ = uVar216;
        auVar18._8_4_ = uVar218;
        auVar18._12_4_ = uVar219;
        auVar182 = NEON_cmhi(auVar202,auVar18,4);
        auVar3._4_2_ = (short)uVar6;
        auVar3._0_4_ = uVar5;
        auVar3._6_2_ = uVar205;
        auVar3._8_2_ = (short)uVar8;
        auVar3._10_2_ = uVar206;
        auVar3._12_2_ = (short)uVar10;
        auVar3._14_2_ = uVar207;
        auVar188 = NEON_cmhi(auVar204,auVar3,4);
        auVar151 = NEON_cmhi(auVar152,auVar151,4);
        auVar152 = NEON_cmhi(auVar166,auVar192,4);
        auVar158 = NEON_cmhi(auVar161,auVar158,4);
        auVar165 = NEON_cmhi(auVar170,auVar165,4);
        auVar162[1] = auVar188[4];
        auVar162[0] = auVar188[0];
        auVar162[2] = auVar188[8];
        auVar162[3] = auVar188[0xc];
        auVar162[4] = auVar182[0];
        auVar162[5] = auVar182[4];
        auVar162[6] = auVar182[8];
        auVar162[7] = auVar182[0xc];
        auVar162[8] = auVar176[0];
        auVar162[9] = auVar176[4];
        auVar162[10] = auVar176[8];
        auVar162[0xb] = auVar176[0xc];
        auVar162[0xc] = auVar169[0];
        auVar162[0xd] = auVar169[4];
        auVar162[0xe] = auVar169[8];
        auVar162[0xf] = auVar169[0xc];
        auVar145[1] = auVar165[4];
        auVar145[0] = auVar165[0];
        auVar145[2] = auVar165[8];
        auVar145[3] = auVar165[0xc];
        auVar145[4] = auVar158[0];
        auVar145[5] = auVar158[4];
        auVar145[6] = auVar158[8];
        auVar145[7] = auVar158[0xc];
        auVar145[8] = auVar152[0];
        auVar145[9] = auVar152[4];
        auVar145[10] = auVar152[8];
        auVar145[0xb] = auVar152[0xc];
        auVar145[0xc] = auVar151[0];
        auVar145[0xd] = auVar151[4];
        auVar145[0xe] = auVar151[8];
        auVar145[0xf] = auVar151[0xc];
        auVar140 = NEON_bit(auVar133,auVar140,auVar162,1);
        auVar133 = *pauVar57;
        auVar140 = NEON_bif(auVar140,auVar141,auVar145,1);
        auVar116._0_8_ =
             CONCAT17(auVar133[7] - auVar140[7],
                      CONCAT16(auVar133[6] - auVar140[6],
                               CONCAT15(auVar133[5] - auVar140[5],
                                        CONCAT14(auVar133[4] - auVar140[4],
                                                 CONCAT13(auVar133[3] - auVar140[3],
                                                          CONCAT12(auVar133[2] - auVar140[2],
                                                                   CONCAT11(auVar133[1] -
                                                                            auVar140[1],
                                                                            auVar133[0] -
                                                                            auVar140[0])))))));
        auVar116[8] = auVar133[8] - auVar140[8];
        auVar116[9] = auVar133[9] - auVar140[9];
        auVar116[10] = auVar133[10] - auVar140[10];
        auVar116[0xb] = auVar133[0xb] - auVar140[0xb];
        auVar116[0xc] = auVar133[0xc] - auVar140[0xc];
        auVar116[0xd] = auVar133[0xd] - auVar140[0xd];
        auVar116[0xe] = auVar133[0xe] - auVar140[0xe];
        auVar116[0xf] = auVar133[0xf] - auVar140[0xf];
        *(long *)(pbVar80 + 8) = auVar116._8_8_;
        *(undefined8 *)pbVar80 = auVar116._0_8_;
        pauVar53 = pauVar53 + 1;
        pauVar57 = pauVar57 + 1;
        pbVar80 = pbVar80 + 0x10;
        pauVar61 = pauVar61 + 1;
        pauVar52 = pauVar52 + 1;
      } while (uVar81 != 0);
      if (uVar67 == uVar56) goto LAB_0016934c;
      if (((uint)uVar67 >> 3 & 1) == 0) {
        uVar69 = uVar56 + uVar69;
        pbVar66 = pbVar66 + uVar56;
        pbVar75 = pbVar75 + uVar56;
        pauVar55 = (undefined1 (*) [16])(*pauVar55 + uVar56);
        pbVar74 = pbVar74 + uVar56;
        pauVar58 = (undefined1 (*) [16])(*pauVar58 + uVar56);
        goto LAB_00168de0;
      }
    }
    auVar98 = _DAT_00129a60;
    auVar96 = _DAT_001297f0;
    uVar81 = uVar67 & 0xfffffffffffffff8;
    puVar60 = (ulong *)(pbVar66 + uVar56 + 1);
    pbVar66 = pbVar66 + uVar81;
    uVar69 = uVar81 + uVar69;
    lVar82 = uVar56 - uVar81;
    pbVar80 = *pauVar58 + uVar56;
    puVar70 = (ulong *)(*pauVar55 + uVar56);
    puVar73 = (ulong *)(pbVar75 + uVar56 + 1);
    pbVar54 = pbVar74 + uVar56;
    do {
      auVar103._0_8_ = *puVar70;
      auVar103._8_8_ = 0;
      lVar82 = lVar82 + 8;
      auVar109._0_8_ = *puVar73;
      auVar109._8_8_ = 0;
      auVar114._0_8_ = *puVar60;
      auVar114._8_8_ = 0;
      auVar118 = a64_TBL(ZEXT816(0),auVar103,auVar98);
      auVar133 = a64_TBL(ZEXT816(0),auVar109,auVar98);
      auVar151 = a64_TBL(ZEXT816(0),auVar103,auVar96);
      auVar158 = a64_TBL(ZEXT816(0),auVar109,auVar96);
      auVar140 = a64_TBL(ZEXT816(0),auVar114,auVar98);
      auVar165 = a64_TBL(ZEXT816(0),auVar114,auVar96);
      auVar152 = NEON_uabd(auVar158,auVar151,4);
      auVar141 = NEON_uabd(auVar133,auVar140,4);
      auVar166 = NEON_uabd(auVar158,auVar165,4);
      auVar119 = NEON_uabd(auVar133,auVar118,4);
      auVar173._0_4_ = MP_INT_ABS(auVar140._0_4_ + auVar133._0_4_ * -2 + auVar118._0_4_);
      auVar173._4_4_ = MP_INT_ABS(auVar140._4_4_ + auVar133._4_4_ * -2 + auVar118._4_4_);
      auVar173._8_4_ = MP_INT_ABS(auVar140._8_4_ + auVar133._8_4_ * -2 + auVar118._8_4_);
      auVar173._12_4_ = MP_INT_ABS(auVar140._12_4_ + auVar133._12_4_ * -2 + auVar118._12_4_);
      auVar179._0_4_ = MP_INT_ABS(auVar165._0_4_ + auVar158._0_4_ * -2 + auVar151._0_4_);
      auVar179._4_4_ = MP_INT_ABS(auVar165._4_4_ + auVar158._4_4_ * -2 + auVar151._4_4_);
      auVar179._8_4_ = MP_INT_ABS(auVar165._8_4_ + auVar158._8_4_ * -2 + auVar151._8_4_);
      auVar179._12_4_ = MP_INT_ABS(auVar165._12_4_ + auVar158._12_4_ * -2 + auVar151._12_4_);
      auVar118 = NEON_umin(auVar141,auVar173,4);
      auVar151 = NEON_umin(auVar166,auVar179,4);
      auVar133 = NEON_cmhi(auVar141,auVar173,4);
      auVar140 = NEON_cmhi(auVar166,auVar179,4);
      auVar118 = NEON_cmhi(auVar119,auVar118,4);
      auVar119 = NEON_cmhi(auVar152,auVar151,4);
      uVar65 = NEON_bit(auVar103._0_8_,auVar109._0_8_,
                        CONCAT17(auVar133[0xc],
                                 CONCAT16(auVar133[8],
                                          CONCAT15(auVar133[4],
                                                   CONCAT14(auVar133[0],
                                                            CONCAT13(auVar140[0xc],
                                                                     CONCAT12(auVar140[8],
                                                                              CONCAT11(auVar140[4],
                                                                                       auVar140[0]))
                                                                    ))))),1);
      uVar108 = *(undefined8 *)pbVar80;
      uVar65 = NEON_bif(uVar65,auVar114._0_8_,
                        CONCAT17(auVar118[0xc],
                                 CONCAT16(auVar118[8],
                                          CONCAT15(auVar118[4],
                                                   CONCAT14(auVar118[0],
                                                            CONCAT13(auVar119[0xc],
                                                                     CONCAT12(auVar119[8],
                                                                              CONCAT11(auVar119[4],
                                                                                       auVar119[0]))
                                                                    ))))),1);
      *(ulong *)pbVar54 =
           CONCAT17((char)((ulong)uVar108 >> 0x38) - (char)((ulong)uVar65 >> 0x38),
                    CONCAT16((char)((ulong)uVar108 >> 0x30) - (char)((ulong)uVar65 >> 0x30),
                             CONCAT15((char)((ulong)uVar108 >> 0x28) - (char)((ulong)uVar65 >> 0x28)
                                      ,CONCAT14((char)((ulong)uVar108 >> 0x20) -
                                                (char)((ulong)uVar65 >> 0x20),
                                                CONCAT13((char)((ulong)uVar108 >> 0x18) -
                                                         (char)((ulong)uVar65 >> 0x18),
                                                         CONCAT12((char)((ulong)uVar108 >> 0x10) -
                                                                  (char)((ulong)uVar65 >> 0x10),
                                                                  CONCAT11((char)((ulong)uVar108 >>
                                                                                 8) -
                                                                           (char)((ulong)uVar65 >> 8
                                                                                 ),(char)uVar108 -
                                                                                   (char)uVar65)))))
                            ));
      puVar60 = puVar60 + 1;
      pbVar80 = pbVar80 + 8;
      puVar70 = puVar70 + 1;
      puVar73 = puVar73 + 1;
      pbVar54 = pbVar54 + 8;
    } while (lVar82 != 0);
    pbVar74 = pbVar74 + uVar81;
    pauVar55 = (undefined1 (*) [16])(*pauVar55 + uVar81);
    pbVar75 = pbVar75 + uVar81;
    pauVar58 = (undefined1 (*) [16])(*pauVar58 + uVar81);
    if (uVar67 == uVar81) goto LAB_0016934c;
  }
LAB_00168de0:
  lVar82 = uVar64 - uVar69;
  do {
    pbVar75 = pbVar75 + 1;
    pbVar66 = pbVar66 + 1;
    bVar122 = *pbVar75;
    uVar101 = (uint)(byte)(*pauVar55)[0] - (uint)bVar122;
    uVar71 = (uint)*pbVar66 - (uint)bVar122;
    uVar79 = -uVar101;
    if (-1 < (int)uVar101) {
      uVar79 = uVar101;
    }
    uVar1 = -uVar71;
    if (-1 < (int)uVar71) {
      uVar1 = uVar71;
    }
    uVar71 = uVar71 + uVar101;
    uVar101 = -uVar71;
    if (-1 < (int)uVar71) {
      uVar101 = uVar71;
    }
    if (uVar1 <= uVar101) {
      bVar122 = (*pauVar55)[0];
    }
    if (uVar79 <= uVar101 && uVar79 <= uVar1) {
      bVar122 = *pbVar66;
    }
    lVar82 = lVar82 + -1;
    *pbVar74 = (*pauVar58)[0] - bVar122;
    pbVar74 = pbVar74 + 1;
    pauVar55 = (undefined1 (*) [16])(*pauVar55 + 1);
    pauVar58 = (undefined1 (*) [16])(*pauVar58 + 1);
  } while (lVar82 != 0);
LAB_0016934c:
  png_compress_IDAT(param_1,pbVar63,*(long *)(param_2 + 8) + 1,0);
  if (*(long *)(param_1 + 600) != 0) {
    uVar65 = *(undefined8 *)(param_1 + 0x260);
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    *(undefined8 *)(param_1 + 600) = uVar65;
  }
  png_write_finish_row(param_1);
  uVar71 = *(int *)(param_1 + 0x2d4) + 1;
  *(uint *)(param_1 + 0x2d4) = uVar71;
  if (*(int *)(param_1 + 0x2d0) - 1U < uVar71) {
    png_write_flush(param_1);
    return;
  }
  return;
}


// ===== 001694e8  png_write_reset =====

void png_write_reset(long param_1)

{
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined1 *)(param_1 + 0x29d) = 0;
  *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) & 0xfffffffb;
  return;
}


// ===== 00169500  png_write_reinit =====

void png_write_reinit(long param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_3;
  if (*(int *)(param_1 + 0x44c) == 0) {
    if ((*(uint *)(param_1 + 0x428) != param_3) || (*(uint *)(param_1 + 0x42c) != param_4)) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,
                "width and/or height in the first frame\'s fcTL don\'t match the ones in IHDR");
    }
  }
  else if (*(uint *)(param_1 + 0x428) < param_3) goto LAB_001695c4;
  if (param_4 <= *(uint *)(param_1 + 0x42c)) {
    png_set_IHDR(param_1,param_2,uVar3,param_4,*(undefined1 *)(param_2 + 0x24),
                 *(undefined1 *)(param_2 + 0x25),*(undefined1 *)(param_2 + 0x28),
                 *(undefined1 *)(param_2 + 0x26),*(undefined1 *)(param_2 + 0x27));
    bVar2 = *(byte *)(param_1 + 0x2a2);
    *(uint *)(param_1 + 0x230) = param_3;
    *(uint *)(param_1 + 0x234) = param_4;
    uVar1 = bVar2 * uVar3 + 7 >> 3;
    if (7 < bVar2) {
      uVar1 = (bVar2 >> 3) * uVar3;
    }
    *(ulong *)(param_1 + 0x240) = uVar1;
    *(uint *)(param_1 + 0x23c) = param_3;
    return;
  }
LAB_001695c4:
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"width and/or height for a frame greater thanthe ones in IHDR");
}


// ===== 001695e4  std::__ndk1::__next_prime =====

/* std::__ndk1::__next_prime(unsigned long) */

ulong std::__ndk1::__next_prime(ulong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 < 0xd4) {
    uVar3 = 0x30;
    puVar2 = (uint *)&UNK_0012a918;
    do {
      uVar4 = uVar3 >> 1;
      puVar1 = puVar2 + uVar4 + 1;
      uVar3 = uVar3 + ~uVar4;
      if (param_1 <= puVar2[uVar4]) {
        puVar1 = puVar2;
        uVar3 = uVar4;
      }
      puVar2 = puVar1;
    } while (uVar3 != 0);
    return (ulong)*puVar1;
  }
  if (0xffffffffffffffc5 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00169d04("__next_prime overflow");
  }
  uVar4 = 0x30;
  uVar3 = param_1 / 0xd2;
  puVar2 = (uint *)&DAT_0012a9d8;
  do {
    uVar7 = uVar4 >> 1;
    puVar1 = puVar2 + uVar7 + 1;
    uVar4 = uVar4 + ~uVar7;
    if (param_1 % 0xd2 <= (ulong)puVar2[uVar7]) {
      puVar1 = puVar2;
      uVar4 = uVar7;
    }
    puVar2 = puVar1;
  } while (uVar4 != 0);
  lVar6 = (long)(puVar1 + -0x4aa76) >> 2;
  do {
    lVar5 = lVar6;
    uVar4 = uVar3 * 0xd2 + (ulong)*(uint *)(&DAT_0012a9d8 + lVar5 * 4);
    lVar6 = 0x14;
    do {
      uVar8 = (ulong)*(uint *)(&UNK_0012a918 + lVar6);
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar4 / uVar8;
      }
      if (uVar7 < uVar8) {
        return uVar4;
      }
      if (uVar4 == uVar7 * uVar8) goto LAB_00169ce0;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xbc);
    uVar7 = 0x1a3;
    do {
      uVar9 = uVar7 - 0xd0;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar9) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xc6;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xc6) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xc4;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xc4) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xc0;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xc0) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xbe;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xbe) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xba;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xba) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xb4;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xb4) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xb2;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xb2) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xac;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xac) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xa8;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xa8) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xa6;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xa6) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xa2;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xa2) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x9c;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x9c) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x96;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x96) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x94;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x94) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x8e;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x8e) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x8a;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x8a) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x88;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x88) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x82;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x82) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x7e;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x7e) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x78;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x78) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x70;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x70) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x6c;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x6c) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x6a;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x6a) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x66;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x66) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 100;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 100) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x60;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x60) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x58;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x58) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x52;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x52) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x4e;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x4e) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x48;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x48) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x46;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x46) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x42;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x42) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x3c;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x3c) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x3a;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x3a) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x34;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x34) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x2e;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x2e) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x2a;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x2a) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x28;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x28) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x24;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x24) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x1e;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x1e) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x1c;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x1c) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x16;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x16) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x12;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x12) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0x10;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0x10) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 0xc;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 0xc) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar9 = uVar7 - 10;
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar4 / uVar9;
      }
      if (uVar8 < uVar7 - 10) {
        return uVar4;
      }
      if (uVar4 == uVar8 * uVar9) break;
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar4 / uVar7;
      }
      if (uVar8 < uVar7) {
        return uVar4;
      }
      uVar8 = uVar8 * uVar7;
      uVar7 = uVar7 + 0xd2;
    } while (uVar4 != uVar8);
LAB_00169ce0:
    if (lVar5 == 0x2f) {
      uVar3 = uVar3 + 1;
    }
    lVar6 = 0;
    if (lVar5 != 0x2f) {
      lVar6 = lVar5 + 1;
    }
  } while( true );
}


// ===== 00169d04  FUN_00169d04 =====

void FUN_00169d04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00169d24 to 00169d2b has its CatchHandler @ 00169d44 */
  FUN_00169d58(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_001a1218,PTR__overflow_error_001a1220);
}


// ===== 00169d58  FUN_00169d58 =====

void FUN_00169d58(runtime_error *param_1,char *param_2)

{
  std::runtime_error::runtime_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001a1228 + 0x10;
  return;
}


// ===== 00169d90  std::__ndk1::bad_weak_ptr::~bad_weak_ptr =====

/* std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */

void __thiscall std::__ndk1::bad_weak_ptr::~bad_weak_ptr(bad_weak_ptr *this)

{
  bad_exception::~bad_exception((bad_exception *)this);
  return;
}


// ===== 00169d98  std::__ndk1::bad_weak_ptr::~bad_weak_ptr =====

/* std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */

void __thiscall std::__ndk1::bad_weak_ptr::~bad_weak_ptr(bad_weak_ptr *this)

{
  ~bad_weak_ptr(this);
  operator_delete(this);
  return;
}


// ===== 00169dc4  std::__ndk1::bad_weak_ptr::what =====

/* std::__ndk1::bad_weak_ptr::what() const */

char * std::__ndk1::bad_weak_ptr::what(void)

{
  return "bad_weak_ptr";
}


// ===== 00169dd4  std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* std::__ndk1::__shared_weak_count::~__shared_weak_count() */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  return;
}


// ===== 00169ddc  std::__ndk1::__shared_count::~__shared_count =====

/* std::__ndk1::__shared_count::~__shared_count() */

void __thiscall std::__ndk1::__shared_count::~__shared_count(__shared_count *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x169de4);
  (*pcVar1)();
}


// ===== 00169de4  std::__ndk1::__shared_weak_count::~__shared_weak_count =====

/* std::__ndk1::__shared_weak_count::~__shared_weak_count() */

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x169dec);
  (*pcVar1)();
}


// ===== 00169dec  std::__ndk1::__shared_count::__add_shared =====

/* std::__ndk1::__shared_count::__add_shared() */

void __thiscall std::__ndk1::__shared_count::__add_shared(__shared_count *this)

{
  FUN_00193260(1,this + 8);
  return;
}


// ===== 00169e10  std::__ndk1::__shared_count::__release_shared =====

/* std::__ndk1::__shared_count::__release_shared() */

bool __thiscall std::__ndk1::__shared_count::__release_shared(__shared_count *this)

{
  long lVar1;
  
  lVar1 = FUN_00193290(0xffffffffffffffff,this + 8);
  if (lVar1 != 0) {
    return lVar1 == 0;
  }
  (**(code **)(*(long *)this + 0x10))(this);
  return true;
}


// ===== 00169e78  std::__ndk1::__shared_weak_count::__add_shared =====

/* std::__ndk1::__shared_weak_count::__add_shared() */

void __thiscall std::__ndk1::__shared_weak_count::__add_shared(__shared_weak_count *this)

{
  FUN_00193260(1,this + 8);
  return;
}


// ===== 00169e9c  std::__ndk1::__shared_weak_count::__add_weak =====

/* std::__ndk1::__shared_weak_count::__add_weak() */

void __thiscall std::__ndk1::__shared_weak_count::__add_weak(__shared_weak_count *this)

{
  FUN_00193260(1,this + 0x10);
  return;
}


// ===== 00169ec0  std::__ndk1::__shared_weak_count::__release_shared =====

/* std::__ndk1::__shared_weak_count::__release_shared() */

void __thiscall std::__ndk1::__shared_weak_count::__release_shared(__shared_weak_count *this)

{
  long lVar1;
  
  lVar1 = FUN_00193290(0xffffffffffffffff,this + 8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)this + 0x10))(this);
    if ((*(long *)(this + 0x10) == 0) ||
       (lVar1 = FUN_00193290(0xffffffffffffffff,this + 0x10), lVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00169f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x20))(this);
      return;
    }
  }
  return;
}


// ===== 00169f3c  std::__ndk1::__shared_weak_count::__release_weak =====

/* std::__ndk1::__shared_weak_count::__release_weak() */

void __thiscall std::__ndk1::__shared_weak_count::__release_weak(__shared_weak_count *this)

{
  long lVar1;
  
  if ((*(long *)(this + 0x10) != 0) && (lVar1 = FUN_00193290(0xffffffffffffffff), lVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00169f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x20))(this);
  return;
}


// ===== 00169f94  std::__ndk1::__shared_weak_count::lock =====

/* std::__ndk1::__shared_weak_count::lock() */

__shared_weak_count * __thiscall std::__ndk1::__shared_weak_count::lock(__shared_weak_count *this)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 8);
  do {
    if (lVar1 == -1) {
      return (__shared_weak_count *)0x0;
    }
    lVar3 = FUN_00192b00(lVar1,lVar1 + 1,this + 8);
    bVar2 = lVar3 != lVar1;
    lVar1 = lVar3;
  } while (bVar2);
  return this;
}


// ===== 00169ff4  std::__ndk1::__shared_weak_count::__get_deleter =====

/* std::__ndk1::__shared_weak_count::__get_deleter(std::type_info const&) const */

undefined8 std::__ndk1::__shared_weak_count::__get_deleter(type_info *param_1)

{
  return 0;
}


// ===== 0016a000  std::__ndk1::__sp_mut::lock =====

/* std::__ndk1::__sp_mut::lock() */

int __thiscall std::__ndk1::__sp_mut::lock(__sp_mut *this)

{
  int iVar1;
  
                    /* try { // try from 0016a010 to 0016a013 has its CatchHandler @ 0016a020 */
  iVar1 = pthread_mutex_lock(*(pthread_mutex_t **)this);
  return iVar1;
}


// ===== 0016a024  std::__ndk1::__sp_mut::unlock =====

/* std::__ndk1::__sp_mut::unlock() */

int __thiscall std::__ndk1::__sp_mut::unlock(__sp_mut *this)

{
  int iVar1;
  
                    /* try { // try from 0016a034 to 0016a037 has its CatchHandler @ 0016a044 */
  iVar1 = pthread_mutex_unlock(*(pthread_mutex_t **)this);
  return iVar1;
}


// ===== 0016a048  std::__ndk1::__get_sp_mut =====

/* std::__ndk1::__get_sp_mut(void const*) */

int std::__ndk1::__get_sp_mut(void *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  lVar1 = ((ulong)param_1 >> 0x20 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  return (((uint)((ulong)lVar1 >> 0x2f) ^ (uint)lVar1) * 9 & 0x1f) * 8 + 0x1a6230;
}


// ===== 0016a09c  std::__ndk1::align =====

/* std::__ndk1::align(unsigned long, unsigned long, void*&, unsigned long&) */

void * std::__ndk1::align(ulong param_1,ulong param_2,void **param_3,ulong *param_4)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar2 = *param_4;
  if (uVar2 < param_2) {
    return (void *)0x0;
  }
  pvVar3 = (void *)((long)*param_3 + (param_1 - 1) & -param_1);
  uVar4 = (long)pvVar3 - (long)*param_3;
  pvVar1 = (void *)0x0;
  if (uVar4 <= uVar2 - param_2) {
    *param_3 = pvVar3;
    *param_4 = uVar2 - uVar4;
    pvVar1 = pvVar3;
  }
  return pvVar1;
}


// ===== 0016a0ec  std::logic_error::logic_error =====

/* std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,basic_string *param_1)

{
  size_t sVar1;
  size_t *psVar2;
  basic_string *__s;
  
  *(undefined **)this = PTR_vtable_001a1230 + 0x10;
  __s = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __s = param_1 + 1;
  }
  sVar1 = strlen((char *)__s);
                    /* try { // try from 0016a130 to 0016a137 has its CatchHandler @ 0016a16c */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  *(size_t **)(this + 8) = psVar2 + 3;
  return;
}


// ===== 0016a180  std::logic_error::logic_error =====

/* std::logic_error::logic_error(char const*) */

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  size_t sVar1;
  size_t *psVar2;
  
  *(undefined **)this = PTR_vtable_001a1230 + 0x10;
  sVar1 = strlen(param_1);
                    /* try { // try from 0016a1b8 to 0016a1bf has its CatchHandler @ 0016a1f4 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_1,sVar1 + 1);
  *(size_t **)(this + 8) = psVar2 + 3;
  return;
}


// ===== 0016a208  std::logic_error::logic_error =====

/* std::logic_error::logic_error(std::logic_error const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,logic_error *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined **)this = PTR_vtable_001a1230 + 0x10;
  *(long *)(this + 8) = lVar1;
  FUN_00193230(1,lVar1 + -8);
  return;
}


// ===== 0016a240  std::logic_error::operator= =====

/* std::logic_error::TEMPNAMEPLACEHOLDERVALUE(std::logic_error const&) */

logic_error * __thiscall std::logic_error::operator=(logic_error *this,logic_error *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar2;
  FUN_00193230(1,lVar2 + -8);
  iVar1 = FUN_00193230(0xffffffff,lVar3 + -8);
  if (-1 < iVar1 + -1) {
    return this;
  }
  operator_delete((void *)(lVar3 + -0x18));
  return this;
}


// ===== 0016a2b0  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,basic_string *param_1)

{
  size_t sVar1;
  size_t *psVar2;
  basic_string *__s;
  
  *(undefined **)this = PTR_vtable_001a1238 + 0x10;
  __s = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __s = param_1 + 1;
  }
  sVar1 = strlen((char *)__s);
                    /* try { // try from 0016a2f4 to 0016a2fb has its CatchHandler @ 0016a330 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  *(size_t **)(this + 8) = psVar2 + 3;
  return;
}


// ===== 0016a344  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(char const*) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,char *param_1)

{
  size_t sVar1;
  size_t *psVar2;
  
  *(undefined **)this = PTR_vtable_001a1238 + 0x10;
  sVar1 = strlen(param_1);
                    /* try { // try from 0016a37c to 0016a383 has its CatchHandler @ 0016a3b8 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_1,sVar1 + 1);
  *(size_t **)(this + 8) = psVar2 + 3;
  return;
}


// ===== 0016a3cc  std::runtime_error::runtime_error =====

/* std::runtime_error::runtime_error(std::runtime_error const&) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined **)this = PTR_vtable_001a1238 + 0x10;
  *(long *)(this + 8) = lVar1;
  FUN_00193230(1,lVar1 + -8);
  return;
}


// ===== 0016a404  std::runtime_error::operator= =====

/* std::runtime_error::TEMPNAMEPLACEHOLDERVALUE(std::runtime_error const&) */

runtime_error * __thiscall std::runtime_error::operator=(runtime_error *this,runtime_error *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(this + 8);
  *(long *)(this + 8) = lVar2;
  FUN_00193230(1,lVar2 + -8);
  iVar1 = FUN_00193230(0xffffffff,lVar3 + -8);
  if (-1 < iVar1 + -1) {
    return this;
  }
  operator_delete((void *)(lVar3 + -0x18));
  return this;
}


// ===== 0016a474  std::__ndk1::__throw_runtime_error =====

/* std::__ndk1::__throw_runtime_error(char const*) */

void std::__ndk1::__throw_runtime_error(char *param_1)

{
  runtime_error *this;
  
  this = (runtime_error *)__cxa_allocate_exception(0x10);
                    /* try { // try from 0016a494 to 0016a49b has its CatchHandler @ 0016a4b4 */
  runtime_error::runtime_error(this,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_PTR_001a1240,PTR__overflow_error_001a1248);
}


// ===== 0016a4c8  std::__ndk1::mutex::~mutex =====

/* std::__ndk1::mutex::~mutex() */

int __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a4d4 to 0016a4d7 has its CatchHandler @ 0016a4e4 */
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 0016a4e8  std::__ndk1::mutex::lock =====

/* std::__ndk1::mutex::lock() */

void __thiscall std::__ndk1::mutex::lock(mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 0016a514  std::__ndk1::mutex::try_lock =====

/* std::__ndk1::mutex::try_lock() */

bool __thiscall std::__ndk1::mutex::try_lock(mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a520 to 0016a523 has its CatchHandler @ 0016a538 */
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}


// ===== 0016a53c  std::__ndk1::mutex::unlock =====

/* std::__ndk1::mutex::unlock() */

int __thiscall std::__ndk1::mutex::unlock(mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a548 to 0016a54b has its CatchHandler @ 0016a558 */
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 0016a55c  std::__ndk1::recursive_mutex::recursive_mutex =====

/* std::__ndk1::recursive_mutex::recursive_mutex() */

void __thiscall std::__ndk1::recursive_mutex::recursive_mutex(recursive_mutex *this)

{
  int iVar1;
  int iVar2;
  pthread_mutexattr_t apStack_28 [2];
  
  iVar1 = pthread_mutexattr_init(apStack_28);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1,"recursive_mutex constructor failed");
  }
  iVar1 = pthread_mutexattr_settype(apStack_28,1);
  if (iVar1 != 0) {
    pthread_mutexattr_destroy(apStack_28);
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1,"recursive_mutex constructor failed");
  }
  iVar1 = pthread_mutex_init((pthread_mutex_t *)this,apStack_28);
  iVar2 = pthread_mutexattr_destroy(apStack_28);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1,"recursive_mutex constructor failed");
  }
  if (iVar2 == 0) {
    return;
  }
  pthread_mutex_destroy((pthread_mutex_t *)this);
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar2,"recursive_mutex constructor failed");
}


// ===== 0016a624  std::__ndk1::recursive_mutex::~recursive_mutex =====

/* std::__ndk1::recursive_mutex::~recursive_mutex() */

int __thiscall std::__ndk1::recursive_mutex::~recursive_mutex(recursive_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a630 to 0016a633 has its CatchHandler @ 0016a640 */
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 0016a644  std::__ndk1::recursive_mutex::lock =====

/* std::__ndk1::recursive_mutex::lock() */

void __thiscall std::__ndk1::recursive_mutex::lock(recursive_mutex *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"recursive_mutex lock failed");
}


// ===== 0016a670  std::__ndk1::recursive_mutex::unlock =====

/* std::__ndk1::recursive_mutex::unlock() */

int __thiscall std::__ndk1::recursive_mutex::unlock(recursive_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a67c to 0016a67f has its CatchHandler @ 0016a68c */
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
  return iVar1;
}


// ===== 0016a690  std::__ndk1::recursive_mutex::try_lock =====

/* std::__ndk1::recursive_mutex::try_lock() */

bool __thiscall std::__ndk1::recursive_mutex::try_lock(recursive_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a69c to 0016a69f has its CatchHandler @ 0016a6b4 */
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  return iVar1 == 0;
}


// ===== 0016a6b8  std::__ndk1::timed_mutex::timed_mutex =====

/* std::__ndk1::timed_mutex::timed_mutex() */

void __thiscall std::__ndk1::timed_mutex::timed_mutex(timed_mutex *this)

{
  *(undefined8 *)(this + 0x51) = 0;
  *(undefined8 *)(this + 0x49) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  return;
}


// ===== 0016a6d4  std::__ndk1::timed_mutex::~timed_mutex =====

/* std::__ndk1::timed_mutex::~timed_mutex() */

void __thiscall std::__ndk1::timed_mutex::~timed_mutex(timed_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a6e8 to 0016a6eb has its CatchHandler @ 0016a724 */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
                    /* try { // try from 0016a6f0 to 0016a6f7 has its CatchHandler @ 0016a720 */
    pthread_mutex_unlock((pthread_mutex_t *)this);
    condition_variable::~condition_variable((condition_variable *)(this + 0x28));
    mutex::~mutex((mutex *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 0016a728  std::__ndk1::timed_mutex::lock =====

/* std::__ndk1::timed_mutex::lock() */

ulong __thiscall std::__ndk1::timed_mutex::lock(timed_mutex *this)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  pthread_mutex_t *local_30;
  char local_28;
  
  local_28 = '\x01';
  local_30 = (pthread_mutex_t *)this;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1,"mutex lock failed");
  }
  if (this[0x58] == (timed_mutex)0x0) {
    this[0x58] = (timed_mutex)0x1;
  }
  else {
    do {
      uVar3 = condition_variable::wait((condition_variable *)(this + 0x28),(unique_lock *)&local_30)
      ;
    } while (this[0x58] != (timed_mutex)0x0);
    this[0x58] = (timed_mutex)0x1;
    if (local_28 == '\0') {
      return uVar3;
    }
  }
                    /* try { // try from 0016a790 to 0016a793 has its CatchHandler @ 0016a7b4 */
  uVar2 = pthread_mutex_unlock(local_30);
  return (ulong)uVar2;
}


// ===== 0016a7b8  FUN_0016a7b8 =====

undefined8 * FUN_0016a7b8(undefined8 *param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 1) != '\0') {
                    /* try { // try from 0016a7d0 to 0016a7d3 has its CatchHandler @ 0016a7e0 */
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)*param_1);
    param_1 = (undefined8 *)(ulong)uVar1;
  }
  return param_1;
}


// ===== 0016a7e4  std::__ndk1::timed_mutex::try_lock =====

/* std::__ndk1::timed_mutex::try_lock() */

bool __thiscall std::__ndk1::timed_mutex::try_lock(timed_mutex *this)

{
  timed_mutex tVar1;
  int iVar2;
  
                    /* try { // try from 0016a7f8 to 0016a7fb has its CatchHandler @ 0016a850 */
  iVar2 = pthread_mutex_trylock((pthread_mutex_t *)this);
  if (iVar2 != 0) {
    return false;
  }
  tVar1 = this[0x58];
  if (tVar1 == (timed_mutex)0x0) {
    this[0x58] = (timed_mutex)0x1;
  }
                    /* try { // try from 0016a830 to 0016a837 has its CatchHandler @ 0016a84c */
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return tVar1 == (timed_mutex)0x0;
}


// ===== 0016a854  std::__ndk1::timed_mutex::unlock =====

/* std::__ndk1::timed_mutex::unlock() */

int __thiscall std::__ndk1::timed_mutex::unlock(timed_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a868 to 0016a86b has its CatchHandler @ 0016a8a4 */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
    this[0x58] = (timed_mutex)0x0;
    condition_variable::notify_one((condition_variable *)(this + 0x28));
                    /* try { // try from 0016a87c to 0016a883 has its CatchHandler @ 0016a8a0 */
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)this);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 0016a8a8  std::__ndk1::recursive_timed_mutex::recursive_timed_mutex =====

/* std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */

void __thiscall
std::__ndk1::recursive_timed_mutex::recursive_timed_mutex(recursive_timed_mutex *this)

{
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


// ===== 0016a8c4  std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex =====

/* std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */

void __thiscall
std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex(recursive_timed_mutex *this)

{
  int iVar1;
  
                    /* try { // try from 0016a8d8 to 0016a8db has its CatchHandler @ 0016a914 */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 == 0) {
                    /* try { // try from 0016a8e0 to 0016a8e7 has its CatchHandler @ 0016a910 */
    pthread_mutex_unlock((pthread_mutex_t *)this);
    condition_variable::~condition_variable((condition_variable *)(this + 0x28));
    mutex::~mutex((mutex *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"mutex lock failed");
}


// ===== 0016a918  std::__ndk1::recursive_timed_mutex::lock =====

/* std::__ndk1::recursive_timed_mutex::lock() */

ulong __thiscall std::__ndk1::recursive_timed_mutex::lock(recursive_timed_mutex *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  pthread_t pVar4;
  ulong uVar5;
  pthread_mutex_t *local_30;
  char local_28;
  
  pVar4 = pthread_self();
  local_28 = '\x01';
  local_30 = (pthread_mutex_t *)this;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar2,"mutex lock failed");
  }
  lVar1 = *(long *)(this + 0x58);
  if (*(pthread_t *)(this + 0x60) == pVar4) {
    if (lVar1 == -1) {
                    /* try { // try from 0016a9cc to 0016a9db has its CatchHandler @ 0016a9dc */
                    /* WARNING: Subroutine does not return */
      __throw_system_error(0xb,"recursive_timed_mutex lock limit reached");
    }
    *(long *)(this + 0x58) = lVar1 + 1;
  }
  else if (lVar1 == 0) {
    *(undefined8 *)(this + 0x58) = 1;
    *(pthread_t *)(this + 0x60) = pVar4;
  }
  else {
    do {
      uVar5 = condition_variable::wait((condition_variable *)(this + 0x28),(unique_lock *)&local_30)
      ;
    } while (*(long *)(this + 0x58) != 0);
    *(undefined8 *)(this + 0x58) = 1;
    *(pthread_t *)(this + 0x60) = pVar4;
    if (local_28 == '\0') {
      return uVar5;
    }
  }
                    /* try { // try from 0016a9a8 to 0016a9ab has its CatchHandler @ 0016a9f0 */
  uVar3 = pthread_mutex_unlock(local_30);
  return (ulong)uVar3;
}


// ===== 0016a9f4  std::__ndk1::recursive_timed_mutex::try_lock =====

/* std::__ndk1::recursive_timed_mutex::try_lock() */

undefined4 __thiscall std::__ndk1::recursive_timed_mutex::try_lock(recursive_timed_mutex *this)

{
  int iVar1;
  pthread_t pVar2;
  long lVar3;
  undefined4 uVar4;
  
  pVar2 = pthread_self();
                    /* try { // try from 0016aa14 to 0016aa1b has its CatchHandler @ 0016aa8c */
  iVar1 = pthread_mutex_trylock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
    return 0;
  }
  lVar3 = *(long *)(this + 0x58);
  if ((lVar3 == 0) || ((uVar4 = 0, lVar3 != -1 && (*(pthread_t *)(this + 0x60) == pVar2)))) {
    uVar4 = 1;
    *(long *)(this + 0x58) = lVar3 + 1;
    *(pthread_t *)(this + 0x60) = pVar2;
  }
                    /* try { // try from 0016aa68 to 0016aa6f has its CatchHandler @ 0016aa88 */
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return uVar4;
}


// ===== 0016aa90  std::__ndk1::recursive_timed_mutex::unlock =====

/* std::__ndk1::recursive_timed_mutex::unlock() */

ulong __thiscall std::__ndk1::recursive_timed_mutex::unlock(recursive_timed_mutex *this)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
                    /* try { // try from 0016aaa4 to 0016aaa7 has its CatchHandler @ 0016ab08 */
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    __throw_system_error(iVar1,"mutex lock failed");
  }
  lVar4 = *(long *)(this + 0x58);
  *(long *)(this + 0x58) = lVar4 + -1;
  if (lVar4 + -1 != 0) {
                    /* try { // try from 0016aabc to 0016aac3 has its CatchHandler @ 0016ab04 */
    uVar2 = pthread_mutex_unlock((pthread_mutex_t *)this);
    return (ulong)uVar2;
  }
  *(undefined8 *)(this + 0x60) = 0;
                    /* try { // try from 0016aad8 to 0016aadf has its CatchHandler @ 0016ab00 */
  pthread_mutex_unlock((pthread_mutex_t *)this);
  uVar3 = condition_variable::notify_one((condition_variable *)(this + 0x28));
  return uVar3;
}


// ===== 0016ab0c  FUN_0016ab0c =====

void FUN_0016ab0c(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t __n;
  void *__dest;
  char *__s;
  char acStack_440 [1024];
  
  __s = acStack_440;
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  pcVar4 = strerror_r(param_3,acStack_440,0x400);
  iVar2 = (int)pcVar4;
  if (iVar2 != 0) {
    if (iVar2 == -1) {
      iVar2 = *piVar3;
    }
    if (iVar2 != 0x16) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = "";
  }
  if (*__s == '\0') {
    snprintf(acStack_440,0x400,"Unknown error %d",(ulong)param_3);
    __s = acStack_440;
  }
  *piVar3 = iVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0016abf0;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,__s,__n);
LAB_0016abf0:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 0016ac1c  FUN_0016ac1c =====

char * FUN_0016ac1c(void)

{
  return "generic";
}


// ===== 0016ac2c  FUN_0016ac2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016ac2c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)operator_new(0x30);
    param_1[2] = pcVar7;
    uVar6 = _UNK_001296a8;
    uVar5 = _DAT_001296a0;
    uVar4 = s_unspecified_generic_category_err_00125717._24_8_;
    uVar3 = s_unspecified_generic_category_err_00125717._16_8_;
    uVar2 = s_unspecified_generic_category_err_00125717._8_8_;
    uVar1 = s_unspecified_generic_category_err_00125717._0_8_;
    pcVar7[0x20] = 'o';
    pcVar7[0x21] = 'r';
    param_1[1] = uVar6;
    *param_1 = uVar5;
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar1;
    *(undefined8 *)(pcVar7 + 0x18) = uVar4;
    *(undefined8 *)(pcVar7 + 0x10) = uVar3;
    pcVar7[0x22] = '\0';
    return;
  }
  FUN_0016ab0c();
  return;
}


// ===== 0016ac94  std::__ndk1::generic_category =====

/* std::__ndk1::generic_category() */

undefined ** std::__ndk1::generic_category(void)

{
  int iVar1;
  
  if (((DAT_001a6940 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_001a6940), iVar1 != 0)) {
    __cxa_guard_release(&DAT_001a6940);
    return &PTR_PTR__error_category_001a6330;
  }
  return &PTR_PTR__error_category_001a6330;
}


// ===== 0016acf4  FUN_0016acf4 =====

char * FUN_0016acf4(void)

{
  return "system";
}


// ===== 0016ad04  FUN_0016ad04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016ad04(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)operator_new(0x30);
    param_1[2] = pcVar7;
    uVar6 = _UNK_00129a98;
    uVar5 = _DAT_00129a90;
    uVar4 = s_unspecified_system_category_erro_00124626._24_8_;
    uVar3 = s_unspecified_system_category_erro_00124626._16_8_;
    uVar2 = s_unspecified_system_category_erro_00124626._8_8_;
    uVar1 = s_unspecified_system_category_erro_00124626._0_8_;
    pcVar7[0x20] = 'r';
    pcVar7[0x21] = '\0';
    param_1[1] = uVar6;
    *param_1 = uVar5;
    *(undefined8 *)(pcVar7 + 8) = uVar2;
    *(undefined8 *)pcVar7 = uVar1;
    *(undefined8 *)(pcVar7 + 0x18) = uVar4;
    *(undefined8 *)(pcVar7 + 0x10) = uVar3;
    return;
  }
  FUN_0016ab0c();
  return;
}


// ===== 0016ad68  FUN_0016ad68 =====

int FUN_0016ad68(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 < 0x1000) {
    if ((DAT_001a6940 & 1) != 0) {
      return param_2;
    }
    puVar2 = &DAT_001a6940;
    iVar1 = __cxa_guard_acquire(&DAT_001a6940);
  }
  else {
    if ((DAT_001a6948 & 1) != 0) {
      return param_2;
    }
    puVar2 = &DAT_001a6948;
    iVar1 = __cxa_guard_acquire(&DAT_001a6948);
  }
  if (iVar1 == 0) {
    return param_2;
  }
  __cxa_guard_release(puVar2);
  return param_2;
}


// ===== 0016ae5c  std::__ndk1::system_category =====

/* std::__ndk1::system_category() */

undefined ** std::__ndk1::system_category(void)

{
  int iVar1;
  
  if (((DAT_001a6948 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_001a6948), iVar1 != 0)) {
    __cxa_guard_release(&DAT_001a6948);
    return &PTR_PTR__error_category_001a6338;
  }
  return &PTR_PTR__error_category_001a6338;
}


// ===== 0016aebc  std::__ndk1::error_condition::message =====

/* std::__ndk1::error_condition::message() const */

void __thiscall std::__ndk1::error_condition::message(error_condition *this)

{
                    /* WARNING: Could not recover jumptable at 0x0016aed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),*(undefined4 *)this);
  return;
}


// ===== 0016aed8  std::__ndk1::error_code::message =====

/* std::__ndk1::error_code::message() const */

void __thiscall std::__ndk1::error_code::message(error_code *this)

{
                    /* WARNING: Could not recover jumptable at 0x0016aef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 8) + 0x30))(*(long **)(this + 8),*(undefined4 *)this);
  return;
}


// ===== 0016aef4  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  basic_string local_48 [16];
  void *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  if ((*param_4 & 1) == 0) {
    uStack_58 = param_4[1];
    local_60 = *param_4;
    local_50 = (void *)param_4[2];
  }
  else {
    FUN_0016b7cc(&local_60,param_4[2],param_4[1]);
  }
                    /* try { // try from 0016af38 to 0016af47 has its CatchHandler @ 0016afd0 */
  FUN_0016afec(local_48,&local_30,&local_60);
                    /* try { // try from 0016af48 to 0016af53 has its CatchHandler @ 0016afa0 */
  runtime_error::runtime_error((runtime_error *)this,local_48);
  if (((byte)local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  *(undefined **)this = PTR_vtable_001a1250 + 0x10;
  *(undefined8 *)(this + 0x18) = uStack_28;
  *(undefined8 *)(this + 0x10) = local_30;
  return;
}


// ===== 0016afec  FUN_0016afec =====

void FUN_0016afec(undefined8 *param_1,int *param_2,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_3)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_48 [8];
  ulong local_40;
  char *local_38;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    uVar1 = (ulong)((byte)*param_3 >> 1);
    if (((byte)*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(param_3,": ",2);
      iVar2 = *param_2;
    }
    (**(code **)(**(long **)(param_2 + 2) + 0x30))(local_48,*(long **)(param_2 + 2),iVar2);
    uVar1 = (ulong)(local_48[0] >> 1);
    pcVar3 = (char *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      uVar1 = local_40;
      pcVar3 = local_38;
    }
                    /* try { // try from 0016b07c to 0016b083 has its CatchHandler @ 0016b0c4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(param_3,pcVar3,uVar1);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  }
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar5 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  *(undefined8 *)param_3 = 0;
  return;
}


// ===== 0016b0e0  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,undefined8 param_2,undefined8 param_3,char *param_4)

{
  size_t __n;
  void *__dest;
  ulong local_80;
  size_t local_78;
  void *local_70;
  basic_string local_68 [16];
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(&local_80);
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0016b168;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_80 = (__n | 0xf) + 2;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_0016b168:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0016b16c to 0016b17b has its CatchHandler @ 0016b214 */
  FUN_0016afec(local_68,&local_50,&local_80);
                    /* try { // try from 0016b17c to 0016b187 has its CatchHandler @ 0016b1e4 */
  runtime_error::runtime_error((runtime_error *)this,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  *(undefined **)this = PTR_vtable_001a1250 + 0x10;
  *(undefined8 *)(this + 0x18) = uStack_48;
  *(undefined8 *)(this + 0x10) = local_50;
  return;
}


// ===== 0016b230  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(std::__ndk1::error_code) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,ulong param_2,long *param_3)

{
  ulong local_48 [2];
  void *local_38;
  
  if ((int)param_2 == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = (void *)0x0;
  }
  else {
    (**(code **)(*param_3 + 0x30))(local_48,param_3,param_2 & 0xffffffff);
  }
                    /* try { // try from 0016b27c to 0016b287 has its CatchHandler @ 0016b2c4 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_48);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  *(undefined **)this = PTR_vtable_001a1250 + 0x10;
  *(ulong *)(this + 0x10) = param_2;
  *(long **)(this + 0x18) = param_3;
  return;
}


// ===== 0016b2e0  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,basic_string *param_3)

{
  undefined *puVar1;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  int local_58 [2];
  error_category *local_50;
  basic_string local_48 [16];
  void *local_38;
  
  local_58[0] = param_1;
  local_50 = param_2;
  if (((byte)*param_3 & 1) == 0) {
    uStack_68 = *(undefined8 *)(param_3 + 8);
    local_70 = *(ulong *)param_3;
    local_60 = *(void **)(param_3 + 0x10);
  }
  else {
    FUN_0016b7cc(&local_70,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
                    /* try { // try from 0016b334 to 0016b343 has its CatchHandler @ 0016b3d0 */
  FUN_0016afec(local_48,local_58,&local_70);
                    /* try { // try from 0016b344 to 0016b34f has its CatchHandler @ 0016b3a0 */
  runtime_error::runtime_error((runtime_error *)this,local_48);
  if (((byte)local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  puVar1 = PTR_vtable_001a1250;
  *(int *)(this + 0x10) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  *(error_category **)(this + 0x18) = param_2;
  return;
}


// ===== 0016b3ec  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,char *param_3)

{
  undefined *puVar1;
  size_t __n;
  void *__dest;
  ulong local_90;
  size_t local_88;
  void *local_80;
  int local_78 [2];
  error_category *local_70;
  basic_string local_68 [16];
  void *local_58;
  
  local_78[0] = param_1;
  local_70 = param_2;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(&local_90);
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0016b484;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_90 = (__n | 0xf) + 2;
    local_88 = __n;
    local_80 = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_0016b484:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0016b488 to 0016b497 has its CatchHandler @ 0016b534 */
  FUN_0016afec(local_68,local_78,&local_90);
                    /* try { // try from 0016b498 to 0016b4a3 has its CatchHandler @ 0016b504 */
  runtime_error::runtime_error((runtime_error *)this,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  puVar1 = PTR_vtable_001a1250;
  *(int *)(this + 0x10) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  *(error_category **)(this + 0x18) = param_2;
  return;
}


// ===== 0016b550  std::__ndk1::system_error::system_error =====

/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,int param_1,error_category *param_2)

{
  undefined *puVar1;
  ulong local_48 [2];
  void *local_38;
  
  if (param_1 == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = (void *)0x0;
  }
  else {
    (**(code **)(*(long *)param_2 + 0x30))(local_48,param_2,param_1);
  }
                    /* try { // try from 0016b59c to 0016b5a7 has its CatchHandler @ 0016b5e8 */
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_48);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  puVar1 = PTR_vtable_001a1250;
  *(int *)(this + 0x10) = param_1;
  *(undefined **)this = puVar1 + 0x10;
  *(error_category **)(this + 0x18) = param_2;
  return;
}


// ===== 0016b604  std::__ndk1::system_error::~system_error =====

/* std::__ndk1::system_error::~system_error() */

void __thiscall std::__ndk1::system_error::~system_error(system_error *this)

{
  overflow_error::~overflow_error((overflow_error *)this);
  return;
}


// ===== 0016b60c  std::__ndk1::system_error::~system_error =====

/* std::__ndk1::system_error::~system_error() */

void __thiscall std::__ndk1::system_error::~system_error(system_error *this)

{
  ~system_error(this);
  operator_delete(this);
  return;
}


// ===== 0016b638  std::__ndk1::__throw_system_error =====

/* std::__ndk1::__throw_system_error(int, char const*) */

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
  system_category();
                    /* WARNING: Subroutine does not return */
  FUN_0016b668(param_1,&PTR_PTR__error_category_001a6338,param_2);
}


// ===== 0016b668  FUN_0016b668 =====

void FUN_0016b668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  system_error *psVar1;
  
  psVar1 = (system_error *)__cxa_allocate_exception(0x20);
                    /* try { // try from 0016b694 to 0016b6a3 has its CatchHandler @ 0016b6bc */
  std::__ndk1::system_error::system_error(psVar1,param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(psVar1,PTR_PTR_001a1260,PTR__system_error_001a1258);
}


// ===== 0016b6d0  FUN_0016b6d0 =====

void FUN_0016b6d0(error_category *param_1)

{
  std::__ndk1::error_category::~error_category(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0016b6fc  FUN_0016b6fc =====

void FUN_0016b6fc(error_category *param_1)

{
  std::__ndk1::error_category::~error_category(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0016b728  FUN_0016b728 =====

void FUN_0016b728(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0016b740("basic_string");
}


// ===== 0016b740  FUN_0016b740 =====

void FUN_0016b740(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 0016b760 to 0016b767 has its CatchHandler @ 0016b780 */
  FUN_0016b794(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_001a1288,PTR__domain_error_001a1290);
}


// ===== 0016b794  FUN_0016b794 =====

void FUN_0016b794(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001a1298 + 0x10;
  return;
}


// ===== 0016b7cc  FUN_0016b7cc =====

void FUN_0016b7cc(long *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  
  if (param_3 < 0x17) {
    *(char *)param_1 = (char)((int)param_3 << 1);
    memmove((void *)((long)param_1 + 1),param_2,param_3 + 1);
    return;
  }
  if (param_3 < 0xfffffffffffffff0) {
    __dest = operator_new((param_3 | 0xf) + 1);
    param_1[1] = param_3;
    param_1[2] = (long)__dest;
    *param_1 = (param_3 | 0xf) + 2;
    memmove(__dest,param_2,param_3 + 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728(param_1);
}


// ===== 0016b858  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *__dest_00;
  ulong uVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong __n;
  size_t sVar8;
  ulong local_68;
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar5 = uVar2 - param_1;
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016bb30(this);
  }
  uVar6 = *(ulong *)this;
  __n = uVar5;
  if (param_2 <= uVar5) {
    __n = param_2;
  }
  uVar3 = 0x16;
  if (((byte)bVar4 & 1) != 0) {
    uVar3 = (uVar6 & 0xfffffffffffffffe) - 1;
  }
  if ((__n - uVar2) + uVar3 < param_4) {
    uVar5 = ((uVar2 + param_4) - uVar3) - __n;
    if (-uVar3 - 0x12 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(this);
    }
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar6 & 1) == 0) {
      pbVar7 = this + 1;
    }
    if (uVar3 < 0x7fffffffffffffe7) {
      uVar5 = uVar5 + uVar3;
      if (uVar5 <= uVar3 * 2) {
        uVar5 = uVar3 * 2;
      }
      local_68 = 0x17;
      if (0x16 < uVar5) {
        local_68 = (uVar5 | 0xf) + 1;
      }
      __dest_00 = operator_new(local_68);
    }
    else {
      local_68 = 0xffffffffffffffef;
      __dest_00 = operator_new(0xffffffffffffffef);
    }
    if (param_1 != 0) {
      memmove(__dest_00,pbVar7,param_1);
    }
    memcpy((void *)((long)__dest_00 + param_1),param_3,param_4);
    sVar8 = uVar2 - (__n + param_1);
    if (sVar8 != 0) {
      memmove((void *)((long)((long)__dest_00 + param_1) + param_4),pbVar7 + __n + param_1,sVar8);
    }
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(pbVar7);
    }
    lVar1 = param_4 + param_1 + sVar8;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = __dest_00;
    *(ulong *)this = local_68 | 1;
    pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)__dest_00 + lVar1);
    goto LAB_0016baf4;
  }
  pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if ((uVar6 & 1) == 0) {
    pbVar7 = this + 1;
  }
  uVar6 = param_4;
  if ((param_4 == __n) || (uVar6 = __n, uVar5 <= param_2)) {
LAB_0016bac4:
    if (param_4 != 0) {
      memmove(pbVar7 + param_1,param_3,param_4);
    }
    bVar4 = *this;
    uVar6 = param_4 - uVar6;
  }
  else {
    uVar6 = param_4 - __n;
    sVar8 = uVar5 - __n;
    __dest = pbVar7 + param_1;
    if (__n <= param_4) {
      if ((param_3 < pbVar7 + uVar2) && (__dest + 1 <= param_3)) {
        if (param_3 < __dest + __n) {
          if (param_2 != 0) {
            memmove(__dest,param_3,__n);
          }
          param_1 = __n + param_1;
          param_3 = param_3 + param_4;
          __n = 0;
          param_4 = uVar6;
        }
        else {
          param_3 = param_3 + uVar6;
        }
      }
      memmove(pbVar7 + param_4 + param_1,pbVar7 + __n + param_1,sVar8);
      uVar6 = __n;
      goto LAB_0016bac4;
    }
    if (param_4 != 0) {
      memmove(__dest,param_3,param_4);
    }
    memmove(__dest + param_4,__dest + __n,sVar8);
    bVar4 = *this;
  }
  lVar1 = uVar6 + uVar2;
  if (((byte)bVar4 & 1) == 0) {
    pbVar7 = pbVar7 + lVar1;
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
    pbVar7 = pbVar7 + lVar1;
  }
LAB_0016baf4:
  *pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// ===== 0016bb30  FUN_0016bb30 =====

void FUN_0016bb30(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001706e8("basic_string");
}


// ===== 0016bb48  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by_and_replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned
   long, unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__grow_by_and_replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
          char *param_7)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar3;
  
  if (param_2 <= -param_1 - 0x12) {
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    if (((byte)*this & 1) == 0) {
      __src = this + 1;
    }
    if (param_1 < 0x7fffffffffffffe7) {
      uVar2 = param_2 + param_1;
      if (param_2 + param_1 <= param_1 * 2) {
        uVar2 = param_1 * 2;
      }
      uVar3 = 0x17;
      if (0x16 < uVar2) {
        uVar3 = (uVar2 | 0xf) + 1;
      }
      __dest = operator_new(uVar3);
    }
    else {
      uVar3 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (param_4 != 0) {
      memmove(__dest,__src,param_4);
    }
    if (param_6 != 0) {
      memcpy((void *)((long)__dest + param_4),param_7,param_6);
    }
    __n = param_3 - (param_5 + param_4);
    if (__n != 0) {
      memmove((void *)((long)__dest + param_6 + param_4),__src + param_5 + param_4,__n);
    }
    if (param_1 != 0x16) {
      operator_delete(__src);
    }
    lVar1 = param_6 + param_4 + __n;
    *(ulong *)this = uVar3 | 1;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = __dest;
    *(undefined1 *)((long)__dest + lVar1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728(this);
}


// ===== 0016bc94  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::rfind(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(this + 8);
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar6 = this + 1;
    uVar11 = (ulong)((byte)*this >> 1);
  }
  uVar4 = uVar11;
  if (param_2 <= uVar11) {
    uVar4 = param_2;
  }
  uVar5 = uVar4 + param_3;
  if (uVar11 - uVar4 <= param_3) {
    uVar5 = uVar11;
  }
  pbVar2 = pbVar6 + uVar5;
  pbVar9 = pbVar2;
  if ((param_3 != 0) && (uVar5 != 0)) {
    pbVar8 = pbVar2;
    pbVar10 = pbVar6;
    do {
      pbVar9 = pbVar8;
      if (*pbVar10 ==
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)*param_1)
      {
        uVar11 = 1;
        do {
          pbVar9 = pbVar10;
          if (param_3 == uVar11) break;
          pbVar3 = pbVar10 + uVar11;
          pbVar9 = pbVar8;
          if (pbVar3 == pbVar2) goto LAB_0016bd38;
          pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pbVar3 == *pbVar1);
      }
      pbVar10 = pbVar10 + 1;
      pbVar8 = pbVar9;
    } while (pbVar10 != pbVar2);
  }
LAB_0016bd38:
  lVar7 = (long)pbVar9 - (long)pbVar6;
  if (pbVar9 == pbVar2 && param_3 != 0) {
    lVar7 = -1;
  }
  return lVar7;
}


// ===== 0016bd4c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(char const*, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  if (param_3 < 0xfffffffffffffff0) {
    if (param_3 < 0x17) {
      __dest = this + 1;
      *this = SUB41((int)param_2 << 1,0);
    }
    else {
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new((param_3 | 0xf) + 1);
      *(ulong *)(this + 8) = param_2;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x10) = __dest;
      *(ulong *)this = (param_3 | 0xf) + 2;
    }
    if (param_2 != 0) {
      memmove(__dest,param_1,param_2);
    }
    __dest[param_2] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728(this);
}


// ===== 0016bddc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
basic_string(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
            basic_string *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)this = uVar1;
    return;
  }
  FUN_0016b7cc(this,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0016be08  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
  replace(this,param_1,param_2,param_3,sVar1);
  return;
}


// ===== 0016be5c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::allocator<char> const&) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string *param_1,allocator *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
    return;
  }
  FUN_0016b7cc(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  return;
}


// ===== 0016be88  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_last_not_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_last_not_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_last_not_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *this,char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 8);
  pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  if (param_2 < uVar3) {
    uVar3 = param_2 + 1;
  }
  if (param_3 == 0) {
    if (uVar3 != 0) {
      return uVar3 - 1;
    }
  }
  else {
    while (uVar3 != 0) {
      pvVar2 = memchr(param_1,(uint)(byte)pbVar1[uVar3 - 1],param_3);
      uVar3 = uVar3 - 1;
      if (pvVar2 == (void *)0x0) {
        return uVar3;
      }
    }
  }
  return 0xffffffffffffffff;
}


// ===== 0016bf40  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::~basic_string() */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
~basic_string(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this)

{
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


// ===== 0016bf58  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_first_not_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_first_not_of(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_first_not_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *this,char *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  void *pvVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(this + 8);
  pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar2 = this + 1;
    uVar1 = (ulong)((byte)*this >> 1);
  }
  lVar5 = uVar1 - param_2;
  if (param_2 <= uVar1 && lVar5 != 0) {
    pbVar4 = pbVar2 + param_2;
    if (param_3 == 0) {
LAB_0016bfdc:
      return (long)pbVar4 - (long)pbVar2;
    }
    do {
      pvVar3 = memchr(param_1,(uint)(byte)*pbVar4,param_3);
      if (pvVar3 == (void *)0x0) goto LAB_0016bfdc;
      lVar5 = lVar5 + -1;
      pbVar4 = pbVar4 + 1;
    } while (lVar5 != 0);
  }
  return -1;
}


// ===== 0016bff8  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar6;
  
  bVar4 = *this;
  uVar3 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar3) {
    if (param_2 != 0) {
      uVar5 = *(ulong *)this;
      uVar6 = 0x16;
      if (((byte)bVar4 & 1) != 0) {
        uVar6 = (uVar5 & 0xfffffffffffffffe) - 1;
      }
      if (uVar6 - uVar3 < param_2) {
        uVar1 = uVar3 + param_2;
        if (-uVar6 - 0x11 < uVar1 - uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_0016b728(this);
        }
        __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10);
        if ((uVar5 & 1) == 0) {
          __src = this + 1;
        }
        if (uVar6 < 0x7fffffffffffffe7) {
          uVar5 = uVar1;
          if (uVar1 <= uVar6 * 2) {
            uVar5 = uVar6 * 2;
          }
          uVar6 = 0x17;
          if (0x16 < uVar5) {
            uVar6 = (uVar5 | 0xf) + 1;
          }
          __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )operator_new(uVar6);
        }
        else {
          uVar6 = 0xffffffffffffffef;
          __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )operator_new(0xffffffffffffffef);
        }
        if (param_1 != 0) {
          memmove(__dest,__src,param_1);
        }
        if (uVar3 - param_1 != 0) {
          memmove(__dest + param_2 + param_1,__src + param_1,uVar3 - param_1);
        }
        if (((byte)bVar4 & 1) != 0) {
          operator_delete(__src);
        }
        *(ulong *)(this + 8) = uVar1;
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = __dest;
        *(ulong *)this = uVar6 | 1;
      }
      else {
        __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(this + 0x10);
        if ((uVar5 & 1) == 0) {
          __dest = this + 1;
        }
        if (uVar3 - param_1 != 0) {
          memmove(__dest + param_1 + param_2,__dest + param_1,uVar3 - param_1);
        }
      }
      memset(__dest + param_1,(uint)(byte)param_3,param_2);
      lVar2 = uVar3 + param_2;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar2 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar2;
      }
      __dest[lVar2] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30(this);
}


// ===== 0016c1b0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator= =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::TEMPNAMEPLACEHOLDERVALUE(char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         char param_1)

{
  char *pcVar1;
  
  if (((byte)*this & 1) == 0) {
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2;
    this[1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
              param_1;
    this[2] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return;
  }
  pcVar1 = *(char **)(this + 0x10);
  *(undefined8 *)(this + 8) = 1;
  *pcVar1 = param_1;
  pcVar1[1] = '\0';
  return;
}


// ===== 0016c1ec  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(char const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(this);
  }
  if (param_2 < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)param_2 << 1,0);
    if (param_2 == 0) {
      *__dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      return;
    }
  }
  else {
    __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             operator_new((param_2 | 0xf) + 1);
    *(ulong *)(this + 8) = param_2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = (param_2 | 0xf) + 2;
  }
  memmove(__dest,param_1,param_2);
  __dest[param_2] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


// ===== 0016c28c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::at(unsigned long) const */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_1 < uVar1) {
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar3 = this + 1;
    }
    return pbVar3 + param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016c2d0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  void *__dest;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  ulong local_68;
  
  bVar5 = *this;
  uVar3 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar3) {
    uVar6 = *(ulong *)this;
    uVar4 = 0x16;
    if (((byte)bVar5 & 1) != 0) {
      uVar4 = (uVar6 & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar3 < param_3) {
      uVar1 = uVar3 + param_3;
      if (-uVar4 - 0x12 < uVar1 - uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0016b728(this);
      }
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if ((uVar6 & 1) == 0) {
        pbVar7 = this + 1;
      }
      if (uVar4 < 0x7fffffffffffffe7) {
        uVar6 = uVar1;
        if (uVar1 <= uVar4 * 2) {
          uVar6 = uVar4 * 2;
        }
        local_68 = 0x17;
        if (0x16 < uVar6) {
          local_68 = (uVar6 | 0xf) + 1;
        }
        __dest = operator_new(local_68);
      }
      else {
        local_68 = 0xffffffffffffffef;
        __dest = operator_new(0xffffffffffffffef);
      }
      if (param_1 != 0) {
        memmove(__dest,pbVar7,param_1);
      }
      memcpy((void *)((long)__dest + param_1),param_2,param_3);
      if (uVar3 - param_1 != 0) {
        memmove((void *)((long)((long)__dest + param_1) + param_3),pbVar7 + param_1,uVar3 - param_1)
        ;
      }
      if (((byte)bVar5 & 1) != 0) {
        operator_delete(pbVar7);
      }
      *(ulong *)(this + 8) = uVar1;
      *(void **)(this + 0x10) = __dest;
      *(ulong *)this = local_68 | 1;
      pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               ((long)__dest + uVar1);
    }
    else {
      if (param_3 == 0) {
        return this;
      }
      pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if ((uVar6 & 1) == 0) {
        pbVar7 = this + 1;
      }
      if (uVar3 - param_1 != 0) {
        __src = pbVar7 + param_1;
        uVar4 = param_3;
        if (pbVar7 + uVar3 <= param_2 || param_2 < __src) {
          uVar4 = 0;
        }
        param_2 = param_2 + uVar4;
        memmove(__src + param_3,__src,uVar3 - param_1);
      }
      memmove(pbVar7 + param_1,param_2,param_3);
      lVar2 = uVar3 + param_3;
      if (((byte)*this & 1) == 0) {
        pbVar7 = pbVar7 + lVar2;
        *this = SUB41((int)lVar2 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar2;
        pbVar7 = pbVar7 + lVar2;
      }
    }
    *pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30(this);
}


// ===== 0016c4c4  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_first_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_first_of(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_first_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
             char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
  lVar3 = -1;
  uVar6 = *(ulong *)(this + 8);
  pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar2 = this + 1;
    uVar6 = (ulong)((byte)*this >> 1);
  }
  if ((param_3 != 0) && (param_2 < uVar6)) {
    pbVar1 = pbVar2 + uVar6;
    pbVar4 = pbVar2 + param_2;
    do {
      uVar6 = param_3;
      pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_1;
      do {
        pbVar5 = pbVar4;
        if (*pbVar4 == *pbVar7) goto LAB_0016c530;
        uVar6 = uVar6 - 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar6 != 0);
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar1;
    } while (pbVar4 != pbVar1);
LAB_0016c530:
    lVar3 = (long)pbVar5 - (long)pbVar2;
    if (pbVar5 == pbVar1) {
      lVar3 = -1;
    }
  }
  return lVar3;
}


// ===== 0016c540  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  
  bVar4 = *this;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar5 = uVar1 - param_1;
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016bb30(this);
  }
  uVar7 = *(ulong *)this;
  uVar2 = uVar5;
  if (param_2 <= uVar5) {
    uVar2 = param_2;
  }
  uVar3 = 0x16;
  if (((byte)bVar4 & 1) != 0) {
    uVar3 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar2 - uVar1) + uVar3 < param_3) {
    uVar5 = ((uVar1 + param_3) - uVar3) - uVar2;
    if (-uVar3 - 0x11 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(this);
    }
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    if ((uVar7 & 1) == 0) {
      __src = this + 1;
    }
    if (uVar3 < 0x7fffffffffffffe7) {
      uVar5 = uVar5 + uVar3;
      if (uVar5 <= uVar3 * 2) {
        uVar5 = uVar3 * 2;
      }
      uVar7 = 0x17;
      if (0x16 < uVar5) {
        uVar7 = (uVar5 | 0xf) + 1;
      }
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar7);
    }
    else {
      uVar7 = 0xffffffffffffffef;
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(0xffffffffffffffef);
    }
    if (param_1 != 0) {
      memmove(__dest,__src,param_1);
    }
    __n = uVar1 - (uVar2 + param_1);
    if (__n != 0) {
      memmove(__dest + param_3 + param_1,__src + uVar2 + param_1,__n);
    }
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(__src);
    }
    *(ulong *)this = uVar7 | 1;
    *(ulong *)(this + 8) = (uVar1 + param_3) - uVar2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
  }
  else {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar7 & 1) == 0) {
      __dest = this + 1;
    }
    if ((param_2 < uVar5) && (param_3 != uVar2)) {
      memmove(__dest + param_3 + param_1,__dest + uVar2 + param_1,uVar5 - uVar2);
    }
    if (param_3 == 0) {
      bVar4 = *this;
      lVar6 = -uVar2;
      goto joined_r0x0016c678;
    }
  }
  memset(__dest + param_1,(uint)(byte)param_4,param_3);
  bVar4 = *this;
  lVar6 = param_3 - uVar2;
joined_r0x0016c678:
  lVar6 = lVar6 + uVar1;
  if (((byte)bVar4 & 1) == 0) {
    *this = SUB41((int)lVar6 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar6;
  }
  __dest[lVar6] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// ===== 0016c74c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*, unsigned long) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     assign(char *param_1,ulong param_2)

{
  FUN_0016c754();
  return;
}


// ===== 0016c754  FUN_0016c754 =====

ulong * FUN_0016c754(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  byte *__dest;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar1 = *param_1;
  uVar2 = (uint)uVar3 & 0xff;
  uVar5 = 0x16;
  if ((uVar1 & 1) != 0) {
    uVar5 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  if (uVar5 < param_3) {
    if (-uVar5 - 0x12 < param_3 - uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(param_1);
    }
    pbVar4 = (byte *)param_1[2];
    if ((uVar3 & 1) == 0) {
      pbVar4 = (byte *)((long)param_1 + 1);
    }
    if (uVar5 < 0x7fffffffffffffe7) {
      uVar3 = param_3;
      if (param_3 <= uVar5 * 2) {
        uVar3 = uVar5 * 2;
      }
      uVar5 = 0x17;
      if (0x16 < uVar3) {
        uVar5 = (uVar3 | 0xf) + 1;
      }
    }
    else {
      uVar5 = 0xffffffffffffffef;
    }
    __dest = (byte *)operator_new(uVar5);
    memcpy(__dest,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      operator_delete(pbVar4);
    }
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
  }
  else {
    __dest = (byte *)param_1[2];
    if ((uVar3 & 1) == 0) {
      __dest = (byte *)((long)param_1 + 1);
    }
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
      uVar2 = (uint)(byte)*param_1;
    }
    if ((uVar2 & 1) == 0) {
      *(byte *)param_1 = (byte)((int)param_3 << 1);
      goto LAB_0016c858;
    }
  }
  param_1[1] = param_3;
LAB_0016c858:
  __dest[param_3] = 0;
  return param_1;
}


// ===== 0016c884  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  if (0xffffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(this);
  }
  uVar6 = *(ulong *)this;
  uVar4 = (uVar6 & 0xfffffffffffffffe) - 1;
  uVar1 = 0x16;
  if (((byte)*this & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 < param_1) {
    bVar3 = (uVar6 & 1) != 0;
    uVar1 = uVar6 >> 1 & 0x7f;
    if (bVar3) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar2 = 0x16;
    if (bVar3) {
      uVar2 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 <= param_1) {
      uVar4 = param_1;
    }
    uVar5 = uVar4 | 0xf;
    if (uVar4 < 0x17) {
      uVar5 = 0x16;
    }
    if (uVar5 != uVar2) {
      if (uVar5 < 0x17) {
        __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10);
        __dest = this + 1;
        uVar7 = 1;
      }
      else {
        if (uVar2 < uVar5) {
          __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )operator_new(uVar5 + 1);
        }
        else {
                    /* try { // try from 0016c998 to 0016c99f has its CatchHandler @ 0016c9c8 */
          __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )operator_new(uVar5 + 1);
        }
        __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10);
        uVar7 = (uint)uVar6 & 1;
        if ((uVar6 & 1) == 0) {
          __src = this + 1;
        }
      }
      if (uVar1 != 0xffffffffffffffff) {
        memmove(__dest,__src,uVar1 + 1);
      }
      if (uVar7 != 0) {
        operator_delete(__src);
      }
      if (uVar5 < 0x17) {
        *this = SUB41((int)uVar1 << 1,0);
      }
      else {
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = __dest;
        *(ulong *)this = uVar5 + 1 | 1;
        *(ulong *)(this + 8) = uVar1;
      }
    }
  }
  return;
}


// ===== 0016c9e8  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)this;
  bVar4 = *this;
  uVar6 = 0x16;
  if (((byte)bVar4 & 1) != 0) {
    uVar6 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  __n = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    __n = *(size_t *)(this + 8);
  }
  if (uVar6 - __n < param_2) {
    uVar1 = __n + param_2;
    if (-uVar6 - 0x12 < uVar1 - uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(this);
    }
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar3 & 1) == 0) {
      pbVar5 = this + 1;
    }
    if (uVar6 < 0x7fffffffffffffe7) {
      uVar3 = uVar1;
      if (uVar1 <= uVar6 * 2) {
        uVar3 = uVar6 * 2;
      }
      uVar6 = 0x17;
      if (0x16 < uVar3) {
        uVar6 = (uVar3 | 0xf) + 1;
      }
      __dest = operator_new(uVar6);
    }
    else {
      uVar6 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (__n != 0) {
      memmove(__dest,pbVar5,__n);
    }
    memcpy((void *)((long)__dest + __n),param_1,param_2);
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(pbVar5);
    }
    *(ulong *)(this + 8) = uVar1;
    *(void **)(this + 0x10) = __dest;
    *(ulong *)this = uVar6 | 1;
    pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)__dest + uVar1);
  }
  else {
    if (param_2 == 0) {
      return this;
    }
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar3 & 1) == 0) {
      pbVar5 = this + 1;
    }
    memmove(pbVar5 + __n,param_1,param_2);
    lVar2 = __n + param_2;
    if (((byte)*this & 1) == 0) {
      pbVar5 = pbVar5 + lVar2;
      *this = SUB41((int)lVar2 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar2;
      pbVar5 = pbVar5 + lVar2;
    }
  }
  *pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// ===== 0016cb70  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  basic_string *pbVar4;
  
  bVar3 = *param_1;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    uVar2 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar2 = param_3;
    }
    if (((byte)bVar3 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    FUN_0016c754(this,pbVar4 + param_2,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016cbc0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::copy =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::copy(char*, unsigned long, unsigned long) const */

size_t __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::copy
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_3 <= uVar1) {
    __n = uVar1 - param_3;
    if (param_2 <= uVar1 - param_3) {
      __n = param_2;
    }
    if (__n != 0) {
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (((byte)bVar2 & 1) == 0) {
        pbVar3 = this + 1;
      }
      memmove(param_1,pbVar3 + param_3,__n);
    }
    return __n;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016cc30  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long, std::__ndk1::allocator<char>
   const&) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     basic_string(basic_string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  ulong uVar1;
  allocator *__n;
  byte bVar2;
  long lVar3;
  basic_string *__dest;
  
  bVar2 = *(byte *)param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0016bb30(param_1);
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    lVar3 = param_2 + 1;
  }
  __n = (allocator *)(uVar1 - param_3);
  if (param_4 <= (allocator *)(uVar1 - param_3)) {
    __n = param_4;
  }
  if ((allocator *)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(param_1);
  }
  if (__n < (allocator *)0x17) {
    __dest = param_1 + 1;
    *param_1 = SUB41((int)__n << 1,0);
    if (__n == (allocator *)0x0) goto LAB_0016cccc;
  }
  else {
    __dest = (basic_string *)operator_new(((ulong)__n | 0xf) + 1);
    *(allocator **)(param_1 + 8) = __n;
    *(basic_string **)(param_1 + 0x10) = __dest;
    *(ulong *)param_1 = ((ulong)__n | 0xf) + 2;
  }
  memmove(__dest,(void *)(lVar3 + param_3),(size_t)__n);
LAB_0016cccc:
  __dest[(long)__n] = (basic_string)0x0;
  return;
}


// ===== 0016ccf8  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  void *pvVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_2 <= uVar1 && uVar1 - param_2 != 0) {
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 1;
    }
    pvVar3 = memchr(pbVar5 + param_2,(uint)(byte)param_1,uVar1 - param_2);
    lVar4 = (long)pvVar3 - (long)pbVar5;
    if (pvVar3 == (void *)0x0) {
      lVar4 = -1;
    }
    return lVar4;
  }
  return -1;
}


// ===== 0016cd68  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(unsigned long, char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s;
  
  if (0xffffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(this);
  }
  if (param_1 < 0x17) {
    __s = this + 1;
    *this = SUB41((int)param_1 << 1,0);
    if (param_1 == 0) {
      *__s = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      return;
    }
  }
  else {
    __s = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          operator_new((param_1 | 0xf) + 1);
    *(ulong *)(this + 8) = param_1;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __s;
    *(ulong *)this = (param_1 | 0xf) + 2;
  }
  memset(__s,(uint)(byte)param_2,param_1);
  __s[param_1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
  ;
  return;
}


// ===== 0016ce08  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  insert(this,param_1,param_2,sVar1);
  return;
}


// ===== 0016ce54  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find_last_of =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find_last_of(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
find_last_of(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
            char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  void *pvVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  bVar1 = *this;
  pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)bVar1 & 1) == 0) {
    pbVar3 = this + 1;
  }
  if (param_3 != 0) {
    uVar4 = (ulong)((byte)bVar1 >> 1);
    if (((byte)bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(this + 8);
    }
    if (param_2 < uVar4) {
      uVar4 = param_2 + 1;
    }
    while (uVar4 != 0) {
      pvVar2 = memchr(param_1,(uint)(byte)pbVar3[uVar4 - 1],param_3);
      uVar4 = uVar4 - 1;
      if (pvVar2 != (void *)0x0) {
        return uVar4;
      }
    }
  }
  return 0xffffffffffffffff;
}


// ===== 0016cef0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned
   long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__grow_by(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
  ulong uVar1;
  size_t __n;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar2;
  
  if (param_2 <= -param_1 - 0x11) {
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    if (((byte)*this & 1) == 0) {
      __src = this + 1;
    }
    if (param_1 < 0x7fffffffffffffe7) {
      uVar1 = param_2 + param_1;
      if (param_2 + param_1 <= param_1 * 2) {
        uVar1 = param_1 * 2;
      }
      uVar2 = 0x17;
      if (0x16 < uVar1) {
        uVar2 = (uVar1 | 0xf) + 1;
      }
      __dest = operator_new(uVar2);
    }
    else {
      uVar2 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (param_4 != 0) {
      memmove(__dest,__src,param_4);
    }
    __n = param_3 - (param_5 + param_4);
    if (__n != 0) {
      memmove((void *)((long)__dest + param_6 + param_4),__src + param_5 + param_4,__n);
    }
    if (param_1 != 0x16) {
      operator_delete(__src);
    }
    *(void **)(this + 0x10) = __dest;
    *(ulong *)this = uVar2 | 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728(this);
}


// ===== 0016d014  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::push_back(char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
push_back(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         char param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  void *__dest;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong __n;
  ulong uVar4;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    if (bVar1 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 0x2c) {
      uVar2 = (ulong)((byte)bVar1 >> 1);
      pbVar3 = this + 1;
      *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
              ((char)bVar1 + 2);
      goto LAB_0016d118;
    }
    pbVar3 = this + 1;
    __n = 0x16;
LAB_0016d080:
    uVar2 = __n * 2;
    if (uVar2 < __n + 1) {
      uVar2 = __n + 1;
    }
    uVar4 = 0x17;
    if (0x16 < uVar2) {
      uVar4 = (uVar2 | 0xf) + 1;
    }
    __dest = operator_new(uVar4);
    memmove(__dest,pbVar3,__n);
    uVar2 = __n;
    if (__n != 0x16) {
LAB_0016d0f4:
      operator_delete(pbVar3);
      uVar2 = __n;
    }
    *(void **)(this + 0x10) = __dest;
    *(ulong *)this = uVar4 | 1;
  }
  else {
    uVar2 = *(ulong *)(this + 8);
    __n = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar2 == __n) {
      if ((*(ulong *)this & 0xfffffffffffffffe) == 0xfffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
        FUN_0016b728(this);
      }
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (__n < 0x7fffffffffffffe7) goto LAB_0016d080;
      uVar4 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
      memmove(__dest,pbVar3,__n);
      goto LAB_0016d0f4;
    }
  }
  pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  *(ulong *)(this + 8) = uVar2 + 1;
LAB_0016d118:
  pbVar3[uVar2] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)param_1;
  (pbVar3 + uVar2)[1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return;
}


// ===== 0016d144  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar4;
  
  if (param_1 == 0) {
    return this;
  }
  uVar2 = *(ulong *)this;
  bVar3 = *this;
  uVar4 = 0x16;
  if (((byte)bVar3 & 1) != 0) {
    uVar4 = (uVar2 & 0xfffffffffffffffe) - 1;
  }
  __n = uVar2 >> 1 & 0x7f;
  if ((uVar2 & 1) != 0) {
    __n = *(size_t *)(this + 8);
  }
  if (uVar4 - __n < param_1) {
    uVar1 = __n + param_1;
    if (-uVar4 - 0x11 < uVar1 - uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(this);
    }
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    if ((uVar2 & 1) == 0) {
      __src = this + 1;
    }
    if (uVar4 < 0x7fffffffffffffe7) {
      if (uVar1 <= uVar4 * 2) {
        uVar1 = uVar4 * 2;
      }
      uVar4 = 0x17;
      if (0x16 < uVar1) {
        uVar4 = (uVar1 | 0xf) + 1;
      }
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(uVar4);
    }
    else {
      uVar4 = 0xffffffffffffffef;
      __dest = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               operator_new(0xffffffffffffffef);
    }
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    if (((byte)bVar3 & 1) != 0) {
      operator_delete(__src);
    }
    *(size_t *)(this + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = uVar4 | 1;
    memset(__dest + __n,(uint)(byte)param_2,param_1);
    bVar3 = *this;
  }
  else {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar2 & 1) == 0) {
      __dest = this + 1;
    }
    memset(__dest + __n,(uint)(byte)param_2,param_1);
    bVar3 = *this;
  }
  if (((byte)bVar3 & 1) == 0) {
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
            (((char)__n + (char)param_1) * '\x02');
  }
  else {
    *(size_t *)(this + 8) = __n + param_1;
  }
  __dest[__n + param_1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// ===== 0016d2d0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::rfind(char, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char param_1,ulong param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 8);
  pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  if (uVar3 != 0) {
    if (param_2 < uVar3) {
      uVar3 = param_2 + 1;
    }
    while (uVar3 != 0) {
      lVar2 = uVar3 - 1;
      uVar3 = uVar3 - 1;
      if (pbVar1[lVar2] ==
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)param_1) {
        return uVar3;
      }
    }
  }
  return 0xffffffffffffffff;
}


// ===== 0016d320  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)this;
  bVar1 = *this;
  uVar4 = 0x16;
  if (((byte)bVar1 & 1) != 0) {
    uVar4 = (uVar2 & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 < param_1) {
    if (-uVar4 - 0x11 < param_1 - uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(this);
    }
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar2 & 1) == 0) {
      pbVar3 = this + 1;
    }
    if (uVar4 < 0x7fffffffffffffe7) {
      uVar2 = param_1;
      if (param_1 <= uVar4 * 2) {
        uVar2 = uVar4 * 2;
      }
      uVar4 = 0x17;
      if (0x16 < uVar2) {
        uVar4 = (uVar2 | 0xf) + 1;
      }
      __s = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            operator_new(uVar4);
    }
    else {
      uVar4 = 0xffffffffffffffef;
      __s = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            operator_new(0xffffffffffffffef);
    }
    if (((byte)bVar1 & 1) != 0) {
      operator_delete(pbVar3);
    }
    *(undefined8 *)(this + 8) = 0;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __s;
    *(ulong *)this = uVar4 | 1;
LAB_0016d414:
    memset(__s,(uint)(byte)param_2,param_1);
    if (((byte)*this & 1) == 0) {
LAB_0016d3e0:
      *this = SUB41((int)param_1 << 1,0);
      goto LAB_0016d430;
    }
  }
  else {
    __s = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10);
    if ((uVar2 & 1) == 0) {
      __s = this + 1;
    }
    if (param_1 != 0) goto LAB_0016d414;
    if ((uVar2 & 1) == 0) goto LAB_0016d3e0;
  }
  *(ulong *)(this + 8) = param_1;
LAB_0016d430:
  __s[param_1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
  ;
  return this;
}


// ===== 0016d45c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::erase(unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016bb30();
  }
  if (param_2 != 0xffffffffffffffff) {
    FUN_0016d4f0();
    return this;
  }
  if (((byte)bVar2 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
    this[param_1 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return this;
  }
  *(ulong *)(this + 8) = param_1;
  *(undefined1 *)(*(long *)(this + 0x10) + param_1) = 0;
  return this;
}


// ===== 0016d4f0  FUN_0016d4f0 =====

void FUN_0016d4f0(byte *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 != 0) {
    bVar4 = *param_1;
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar3 = *(byte **)(param_1 + 0x10);
    if ((bVar4 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar2 = (ulong)(bVar4 >> 1);
    }
    uVar5 = uVar2 - param_2;
    uVar1 = uVar5;
    if (param_3 <= uVar5) {
      uVar1 = param_3;
    }
    if (param_3 < uVar5) {
      memmove(pbVar3 + param_2,pbVar3 + param_2 + uVar1,uVar5 - uVar1);
      bVar4 = *param_1;
    }
    lVar6 = uVar2 - uVar1;
    if ((bVar4 & 1) == 0) {
      *param_1 = (byte)((int)lVar6 << 1);
    }
    else {
      *(long *)(param_1 + 8) = lVar6;
    }
    pbVar3[lVar6] = 0;
  }
  return;
}


// ===== 0016d584  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  basic_string *pbVar4;
  
  bVar3 = *param_1;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    uVar2 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar2 = param_3;
    }
    append(this,(char *)(pbVar4 + param_2),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016d5d4  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  size_t __n;
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = strlen(param_1);
  if (sVar3 != 0xffffffffffffffff) {
    uVar1 = *(ulong *)(this + 8);
    __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
    if (((byte)*this & 1) == 0) {
      __s1 = this + 1;
      uVar1 = (ulong)((byte)*this >> 1);
    }
    __n = uVar1;
    if (sVar3 <= uVar1) {
      __n = sVar3;
    }
    uVar4 = (uint)(sVar3 < uVar1);
    if (sVar3 > uVar1) {
      uVar4 = 0xffffffff;
    }
    uVar2 = memcmp(__s1,param_1,__n);
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    return uVar4;
  }
                    /* try { // try from 0016d648 to 0016d64f has its CatchHandler @ 0016d650 */
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30(this);
}


// ===== 0016d654  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*, unsigned long) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  uint uVar4;
  uint uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if ((param_4 != 0xffffffffffffffff) && (param_1 <= uVar1)) {
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    uVar2 = uVar1 - param_1;
    if (param_2 <= uVar1 - param_1) {
      uVar2 = param_2;
    }
    if (((byte)bVar3 & 1) == 0) {
      pbVar6 = this + 1;
    }
    __n = uVar2;
    if (param_4 <= uVar2) {
      __n = param_4;
    }
    uVar5 = (uint)(param_4 < uVar2);
    if (param_4 > uVar2) {
      uVar5 = 0xffffffff;
    }
    uVar4 = memcmp(pbVar6 + param_1,param_3,__n);
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016d6d4  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  
  sVar5 = strlen(param_3);
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if ((sVar5 != 0xffffffffffffffff) && (param_1 <= uVar1)) {
    pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    uVar2 = uVar1 - param_1;
    if (param_2 <= uVar1 - param_1) {
      uVar2 = param_2;
    }
    if (((byte)bVar3 & 1) == 0) {
      pbVar7 = this + 1;
    }
    __n = uVar2;
    if (sVar5 <= uVar2) {
      __n = sVar5;
    }
    uVar6 = (uint)(sVar5 < uVar2);
    if (sVar5 > uVar2) {
      uVar6 = 0xffffffff;
    }
    uVar4 = memcmp(pbVar7 + param_1,param_3,__n);
    if (uVar4 != 0) {
      uVar6 = uVar4;
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30(this);
}


// ===== 0016d778  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::at(unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::at
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_1 < uVar1) {
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar3 = this + 1;
    }
    return pbVar3 + param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016d7bc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(char const*) */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     assign(char *param_1)

{
  FUN_0016d7c4();
  return;
}


// ===== 0016d7c4  FUN_0016d7c4 =====

void FUN_0016d7c4(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  FUN_0016c754(param_1,param_2,sVar1);
  return;
}


// ===== 0016d800  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  byte bVar4;
  int iVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  
  uVar2 = *(ulong *)(this + 8);
  pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar3 = this + 1;
    uVar2 = (ulong)((byte)*this >> 1);
  }
  if (uVar2 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar6 = pbVar3 + param_2;
    pbVar1 = pbVar3 + uVar2;
    lVar7 = (long)pbVar1 - (long)pbVar6;
    pbVar8 = pbVar1;
    if ((long)param_3 <= lVar7) {
      bVar4 = *param_1;
      do {
        pbVar8 = pbVar1;
        if (((0xfffffffffffffffe < lVar7 - param_3) ||
            (pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)memchr(pbVar6,(uint)bVar4,(lVar7 - param_3) + 1),
            pbVar6 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0)) ||
           (iVar5 = memcmp(pbVar6,param_1,param_3), pbVar8 = pbVar6, iVar5 == 0)) break;
        pbVar6 = pbVar6 + 1;
        lVar7 = (long)pbVar1 - (long)pbVar6;
        pbVar8 = pbVar1;
      } while ((long)param_3 <= lVar7);
    }
    param_2 = (long)pbVar8 - (long)pbVar3;
    if (pbVar8 == pbVar1) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}


// ===== 0016d8d0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) const */

int __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  ulong uVar5;
  basic_string *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  int iVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  
  bVar7 = *this;
  uVar5 = *(ulong *)(param_3 + 8);
  pbVar6 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar6 = param_3 + 1;
    uVar5 = (ulong)((byte)*param_3 >> 1);
  }
  uVar4 = (ulong)((byte)bVar7 >> 1);
  if (((byte)bVar7 & 1) != 0) {
    uVar4 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar4) {
    uVar3 = uVar4 - param_1;
    if (param_2 <= uVar4 - param_1) {
      uVar3 = param_2;
    }
    if (param_4 <= uVar5) {
      pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (((byte)bVar7 & 1) == 0) {
        pbVar9 = this + 1;
      }
      uVar4 = uVar5 - param_4;
      if (param_5 <= uVar5 - param_4) {
        uVar4 = param_5;
      }
      __n = uVar4;
      if (uVar3 <= uVar4) {
        __n = uVar3;
      }
      iVar8 = memcmp(pbVar9 + param_1,pbVar6 + param_4,__n);
      iVar1 = 1;
      if (uVar3 < uVar4) {
        iVar1 = -1;
      }
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = iVar1;
      }
      if (iVar8 == 0) {
        iVar8 = iVar2;
      }
      return iVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001706e8("string_view::substr");
}


// ===== 0016d980  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator= =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
operator=(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1) {
    bVar3 = *param_1;
    if (((byte)*this & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)bVar3 >> 1);
      }
      FUN_0016da88(this,pbVar2,uVar1);
      return;
    }
    if (((byte)bVar3 & 1) != 0) {
      FUN_0016d9d4(this,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar5;
    *(undefined8 *)this = uVar4;
  }
  return;
}


// ===== 0016d9d4  FUN_0016d9d4 =====

long * FUN_0016d9d4(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  
  if (param_3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (param_3 + 0x11 < 0x27) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(param_1);
    }
    uVar1 = param_3;
    if (param_3 < 0x2d) {
      uVar1 = 0x2c;
    }
    __dest = operator_new((uVar1 | 0xf) + 1);
    memcpy(__dest,param_2,param_3);
    param_1[1] = param_3;
    param_1[2] = (long)__dest;
    *param_1 = (uVar1 | 0xf) + 2;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}


// ===== 0016da88  FUN_0016da88 =====

ulong * FUN_0016da88(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  void *__dest;
  
  uVar2 = *param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar2) {
    __dest = (void *)param_1[2];
    param_1[1] = param_3;
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3);
    }
  }
  else {
    if (-uVar2 - 0x11 < (param_3 - uVar2) + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(param_1);
    }
    pvVar3 = (void *)param_1[2];
    if ((*param_1 & 1) == 0) {
      pvVar3 = (void *)((long)param_1 + 1);
    }
    if (uVar2 - 1 < 0x7fffffffffffffe7) {
      uVar2 = (uVar2 - 1) * 2;
      uVar1 = param_3;
      if (param_3 <= uVar2) {
        uVar1 = uVar2;
      }
      uVar2 = 0x17;
      if (0x16 < uVar1) {
        uVar2 = (uVar1 | 0xf) + 1;
      }
      __dest = operator_new(uVar2);
    }
    else {
      uVar2 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (param_3 != 0) {
      memcpy(__dest,param_2,param_3);
    }
    operator_delete(pvVar3);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar2 | 1;
  }
  *(undefined1 *)((long)__dest + param_3) = 0;
  return param_1;
}


// ===== 0016dba0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  append(this,param_1,sVar1);
  return;
}


// ===== 0016dbdc  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  basic_string *pbVar4;
  
  bVar3 = *param_3;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (param_4 <= uVar1) {
    pbVar4 = *(basic_string **)(param_3 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar4 = param_3 + 1;
    }
    uVar2 = uVar1 - param_4;
    if (param_5 <= uVar1 - param_4) {
      uVar2 = param_5;
    }
    replace(this,param_1,param_2,(char *)(pbVar4 + param_4),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016dc2c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(std::__ndk1::__wrap_iter<char const*>, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  bool bVar5;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  size_t __n;
  ulong uVar8;
  
  uVar8 = *(ulong *)this;
  uVar3 = *(ulong *)(this + 8);
  bVar4 = *this;
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  pbVar1 = this + 1;
  bVar5 = ((byte)bVar4 & 1) == 0;
  pbVar2 = pbVar6;
  if (bVar5) {
    uVar3 = (ulong)((byte)bVar4 >> 1);
    pbVar2 = this + 1;
  }
  uVar7 = 0x16;
  if (!bVar5) {
    uVar7 = (uVar8 & 0xfffffffffffffffe) - 1;
  }
  __n = (long)param_2 - (long)pbVar2;
  if (uVar7 == uVar3) {
    if (uVar3 == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
      FUN_0016b728(this);
    }
    __src = pbVar1;
    if ((uVar8 & 1) != 0) {
      __src = pbVar6;
    }
    if (uVar3 < 0x7fffffffffffffe7) {
      uVar7 = uVar3 * 2;
      if (uVar7 < uVar3 + 1) {
        uVar7 = uVar3 + 1;
      }
      uVar8 = 0x17;
      if (0x16 < uVar7) {
        uVar8 = (uVar7 | 0xf) + 1;
      }
      __dest = operator_new(uVar8);
    }
    else {
      uVar8 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (pbVar2 != param_2) {
      memmove(__dest,__src,__n);
    }
    if (uVar3 - __n != 0) {
      memmove((void *)((long)__dest + __n + 1),__src + __n,uVar3 - __n);
    }
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(__src);
    }
    *(ulong *)this = uVar8 | 1;
    *(ulong *)(this + 8) = uVar3 + 1;
    *(void **)(this + 0x10) = __dest;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
     ((long)__dest + __n) = param_3;
    *(undefined1 *)((long)__dest + uVar3 + 1) = 0;
    bVar4 = *this;
  }
  else {
    pbVar2 = pbVar1;
    if ((uVar8 & 1) != 0) {
      pbVar2 = pbVar6;
    }
    if (uVar3 - __n != 0) {
      memmove(pbVar2 + __n + 1,pbVar2 + __n,uVar3 - __n);
    }
    pbVar2[__n] = param_3;
    pbVar2[uVar3 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    bVar4 = *this;
  }
  if (((byte)bVar4 & 1) == 0) {
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
            (((char)uVar3 + '\x01') * '\x02');
  }
  else {
    *(ulong *)(this + 8) = uVar3 + 1;
  }
  if (((byte)bVar4 & 1) != 0) {
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  return pbVar1 + __n;
}


// ===== 0016dde0  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::resize(unsigned long, char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::resize
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 <= param_1 && param_1 - uVar1 != 0) {
    append(this,param_1 - uVar1,param_2);
    return;
  }
  if (((byte)bVar2 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
    this[param_1 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return;
  }
  *(ulong *)(this + 8) = param_1;
  *(undefined1 *)(*(long *)(this + 0x10) + param_1) = 0;
  return;
}


// ===== 0016de2c  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,basic_string *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  basic_string *pbVar4;
  
  bVar3 = *param_2;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (param_3 <= uVar1) {
    pbVar4 = *(basic_string **)(param_2 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    uVar2 = uVar1 - param_3;
    if (param_4 <= uVar1 - param_3) {
      uVar2 = param_4;
    }
    insert(this,param_1,(char *)(pbVar4 + param_3),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016bb30();
}


// ===== 0016de7c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*, unsigned
   long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar4 = uVar1 - param_1;
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016e054(this);
  }
  uVar6 = uVar4;
  if (param_2 <= uVar4) {
    uVar6 = param_2;
  }
  uVar5 = 4;
  if (((byte)bVar3 & 1) != 0) {
    uVar5 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar6 - uVar1) + uVar5 < param_4) {
    __grow_by_and_replace
              (this,uVar5,((uVar1 + param_4) - uVar5) - uVar6,uVar1,param_1,uVar6,param_4,param_3);
    return this;
  }
  pbVar2 = this + 4;
  if ((*(ulong *)this & 1) != 0) {
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar5 = param_4;
  if ((param_4 != uVar6) && (uVar5 = uVar6, param_2 < uVar4)) {
    __dest = pbVar2 + param_1 * 4;
    uVar5 = param_4 - uVar6;
    lVar7 = uVar4 - uVar6;
    if (param_4 < uVar6) {
      if (param_4 != 0) {
        memmove(__dest,param_3,param_4 << 2);
      }
      memmove(__dest + param_4 * 4,__dest + uVar6 * 4,lVar7 * 4);
      bVar3 = *this;
      goto joined_r0x0016e018;
    }
    if ((param_3 < pbVar2 + uVar1 * 4) && (__dest + 4 <= param_3)) {
      if (param_3 < __dest + uVar6 * 4) {
        if (param_2 != 0) {
          memmove(__dest,param_3,uVar6 << 2);
        }
        param_3 = param_3 + param_4;
        param_1 = uVar6 + param_1;
        uVar6 = 0;
        param_4 = uVar5;
      }
      else {
        param_3 = param_3 + uVar5;
      }
    }
    memmove(pbVar2 + param_4 * 4 + param_1 * 4,pbVar2 + uVar6 * 4 + param_1 * 4,lVar7 * 4);
    uVar5 = uVar6;
  }
  if (param_4 != 0) {
    memmove(pbVar2 + param_1 * 4,param_3,param_4 << 2);
  }
  bVar3 = *this;
  uVar5 = param_4 - uVar5;
joined_r0x0016e018:
  lVar7 = uVar5 + uVar1;
  if (((byte)bVar3 & 1) == 0) {
    *this = SUB41((int)lVar7 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar7;
  }
  *(undefined4 *)(pbVar2 + lVar7 * 4) = 0;
  return this;
}


// ===== 0016e054  FUN_0016e054 =====

void FUN_0016e054(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001706e8("basic_string");
}


// ===== 0016e06c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__grow_by_and_replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(unsigned long, unsigned long, unsigned
   long, unsigned long, unsigned long, unsigned long, wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__grow_by_and_replace
          (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
           *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
          ,wchar_t *param_7)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__src;
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  void *__dest;
  
  if (param_2 <= 0x3fffffffffffffee - param_1) {
    __src = this + 4;
    if (((byte)*this & 1) != 0) {
      __src = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(this + 0x10);
    }
    if (param_1 < 0x1fffffffffffffe7) {
      uVar1 = param_2 + param_1;
      if (param_2 + param_1 <= param_1 * 2) {
        uVar1 = param_1 * 2;
      }
      uVar2 = 5;
      if (4 < uVar1) {
        uVar2 = (uVar1 | 3) + 1;
      }
      if (uVar2 >> 0x3e != 0) goto LAB_0016e1d8;
      __dest = operator_new(uVar2 << 2);
    }
    else {
      uVar2 = 0x3fffffffffffffef;
      __dest = operator_new(0xffffffffffffffbc);
    }
    if (param_4 != 0) {
      memmove(__dest,__src,param_4 << 2);
    }
    if (param_6 != 0) {
      memcpy((void *)((long)__dest + param_4 * 4),param_7,param_6 << 2);
    }
    lVar3 = param_3 - (param_5 + param_4);
    if (lVar3 != 0) {
      memmove((void *)((long)__dest + param_6 * 4 + param_4 * 4),__src + param_5 * 4 + param_4 * 4,
              lVar3 * 4);
    }
    if (param_1 != 4) {
      operator_delete(__src);
    }
    lVar3 = param_6 + param_4 + lVar3;
    *(ulong *)this = uVar2 | 1;
    *(long *)(this + 8) = lVar3;
    *(void **)(this + 0x10) = __dest;
    *(undefined4 *)((long)__dest + lVar3 * 4) = 0;
    return;
  }
  FUN_0016e348(this);
LAB_0016e1d8:
                    /* WARNING: Subroutine does not return */
  FUN_00141a00();
}


// ===== 0016e1dc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::rfind =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  long lVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar11;
  
  uVar4 = (ulong)((byte)*this >> 1);
  pbVar7 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar4 = *(ulong *)(this + 8);
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar5 = uVar4;
  if (param_2 <= uVar4) {
    uVar5 = param_2;
  }
  uVar6 = uVar5 + param_3;
  if (uVar4 - uVar5 <= param_3) {
    uVar6 = uVar4;
  }
  pbVar2 = pbVar7 + uVar6 * 4;
  pbVar10 = pbVar2;
  if ((param_3 != 0) && (uVar6 != 0)) {
    pbVar9 = pbVar2;
    pbVar11 = pbVar7;
    do {
      pbVar10 = pbVar9;
      if (*(wchar_t *)pbVar11 == *param_1) {
        lVar8 = 4;
        do {
          pbVar10 = pbVar11;
          if (param_3 * 4 - lVar8 == 0) break;
          pbVar3 = pbVar11 + lVar8;
          pbVar10 = pbVar9;
          if (pbVar3 == pbVar2) goto LAB_0016e288;
          piVar1 = (int *)((long)param_1 + lVar8);
          lVar8 = lVar8 + 4;
        } while (*(int *)pbVar3 == *piVar1);
      }
      pbVar11 = pbVar11 + 4;
      pbVar9 = pbVar10;
    } while (pbVar11 != pbVar2);
  }
LAB_0016e288:
  lVar8 = (long)pbVar10 - (long)pbVar7 >> 2;
  if (pbVar10 == pbVar2 && param_3 != 0) {
    lVar8 = -1;
  }
  return lVar8;
}


// ===== 0016e2a0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(wchar_t const*, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  
  if (param_3 < 0x3ffffffffffffff0) {
    if (param_3 < 5) {
      __dest = this + 4;
      *this = SUB41((int)param_2 << 1,0);
    }
    else {
      if (0x3ffffffffffffffe < (param_3 | 3)) goto LAB_0016e344;
      uVar1 = (param_3 | 3) + 1;
      __dest = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)operator_new(uVar1 * 4);
      *(ulong *)(this + 8) = param_2;
      *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
       (this + 0x10) = __dest;
      *(ulong *)this = uVar1 | 1;
    }
    if (param_2 != 0) {
      memmove(__dest,param_1,param_2 << 2);
    }
    *(undefined4 *)(__dest + param_2 * 4) = 0;
    return;
  }
  FUN_0016e348(this);
LAB_0016e344:
                    /* WARNING: Subroutine does not return */
  FUN_00141a00();
}


// ===== 0016e348  FUN_0016e348 =====

void FUN_0016e348(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0016b740("basic_string");
}


// ===== 0016e360  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::basic_string(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *this,basic_string *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((byte)*param_1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)this = uVar1;
    return;
  }
  FUN_0016e38c(this,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 0016e38c  FUN_0016e38c =====

void FUN_0016e38c(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *__dest;
  
  if (param_3 < 5) {
    __dest = (undefined1 *)((long)param_1 + 4);
    *(char *)param_1 = (char)((int)param_3 << 1);
LAB_0016e3f8:
    memmove(__dest,param_2,param_3 * 4 + 4);
    return;
  }
  if (param_3 < 0x3ffffffffffffff0) {
    if ((param_3 | 3) < 0x3fffffffffffffff) {
      uVar1 = (param_3 | 3) + 1;
      __dest = (undefined1 *)operator_new(uVar1 * 4);
      param_1[1] = param_3;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 | 1;
      goto LAB_0016e3f8;
    }
  }
  else {
    FUN_0016e348();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00141a00();
}


// ===== 0016e41c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_3);
  replace(this,param_1,param_2,param_3,sVar1);
  return;
}


// ===== 0016e470  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&,
   std::__ndk1::allocator<wchar_t> const&) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     basic_string(basic_string *param_1,allocator *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((byte)*param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar1;
    return;
  }
  FUN_0016e38c(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
  return;
}


// ===== 0016e49c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_last_not_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_not_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  wchar_t *pwVar3;
  long lVar4;
  
  uVar1 = (ulong)((byte)*this >> 1);
  pbVar2 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_2 < uVar1) {
    uVar1 = param_2 + 1;
  }
  if (param_3 == 0) {
    if (uVar1 == 0) {
      return -1;
    }
    lVar4 = uVar1 * 4 + -4;
  }
  else {
    lVar4 = uVar1 << 2;
    do {
      if (lVar4 == 0) {
        return -1;
      }
      pwVar3 = wmemchr(param_1,*(wchar_t *)(pbVar2 + lVar4 + -4),param_3);
      lVar4 = lVar4 + -4;
    } while (pwVar3 != (wchar_t *)0x0);
  }
  return (long)(pbVar2 + lVar4) - (long)pbVar2 >> 2;
}


// ===== 0016e54c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::~basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::~basic_string() */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::~basic_string(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *this)

{
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


// ===== 0016e564  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_first_not_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_not_of(wchar_t const*, unsigned long, unsigned
   long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                    *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  wchar_t *pwVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  long lVar5;
  
  uVar1 = (ulong)((byte)*this >> 1);
  pbVar2 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_2 < uVar1) {
    pbVar4 = pbVar2 + param_2 * 4;
    if (param_3 == 0) {
LAB_0016e5f4:
      return (long)pbVar4 - (long)pbVar2 >> 2;
    }
    lVar5 = uVar1 * 4 + param_2 * -4;
    do {
      pwVar3 = wmemchr(param_1,*(wchar_t *)pbVar4,param_3);
      if (pwVar3 == (wchar_t *)0x0) goto LAB_0016e5f4;
      lVar5 = lVar5 + -4;
      pbVar4 = pbVar4 + 4;
    } while (lVar5 != 0);
  }
  return -1;
}


// ===== 0016e614  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,ulong param_2,wchar_t param_3)

{
  long lVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  ulong uVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  
  bVar3 = *this;
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016e054();
  }
  if (param_2 == 0) {
    return;
  }
  lVar1 = 4;
  if (((byte)bVar3 & 1) != 0) {
    lVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (lVar1 - uVar2 < param_2) {
    FUN_0016e768(this,lVar1,(uVar2 + param_2) - lVar1,uVar2,param_1,0,param_2);
    pbVar9 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  else {
    pbVar9 = this + 4;
    if ((*(ulong *)this & 1) != 0) {
      pbVar9 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar2 - param_1 != 0) {
      memmove(pbVar9 + param_1 * 4 + param_2 * 4,pbVar9 + param_1 * 4,(uVar2 - param_1) * 4);
    }
  }
  pbVar4 = pbVar9 + param_1 * 4;
  uVar5 = param_2;
  if (7 < param_2) {
    uVar6 = param_2 & 0xfffffffffffffff8;
    uVar5 = param_2 & 7;
    pbVar7 = pbVar4 + 0x10;
    uVar8 = uVar6;
    do {
      *(ulong *)(pbVar7 + -8) = CONCAT44(param_3,param_3);
      *(ulong *)(pbVar7 + -0x10) = CONCAT44(param_3,param_3);
      *(ulong *)(pbVar7 + 8) = CONCAT44(param_3,param_3);
      *(ulong *)pbVar7 = CONCAT44(param_3,param_3);
      uVar8 = uVar8 - 8;
      pbVar7 = pbVar7 + 0x20;
    } while (uVar8 != 0);
    pbVar4 = pbVar4 + uVar6 * 4;
    if (uVar6 == param_2) goto LAB_0016e72c;
  }
  do {
    uVar5 = uVar5 - 1;
    *(wchar_t *)pbVar4 = param_3;
    pbVar4 = pbVar4 + 4;
  } while (uVar5 != 0);
LAB_0016e72c:
  lVar1 = uVar2 + param_2;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar9 + lVar1 * 4) = 0;
  return;
}


// ===== 0016e768  FUN_0016e768 =====

void FUN_0016e768(ulong *param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6,
                 long param_7)

{
  byte *__src;
  ulong uVar1;
  long lVar2;
  void *__dest;
  size_t __n;
  ulong uVar3;
  
  uVar3 = 0x3fffffffffffffef;
  if (param_3 <= 0x3fffffffffffffef - param_2) {
    __src = (byte *)((long)param_1 + 4);
    if ((*param_1 & 1) != 0) {
      __src = (byte *)param_1[2];
    }
    if (param_2 < 0x1fffffffffffffe7) {
      uVar1 = param_3 + param_2;
      if (param_3 + param_2 <= param_2 * 2) {
        uVar1 = param_2 * 2;
      }
      uVar3 = 5;
      if (4 < uVar1) {
        uVar3 = (uVar1 | 3) + 1;
      }
      if (uVar3 >> 0x3e != 0) goto LAB_0016e894;
    }
    __dest = operator_new(uVar3 << 2);
    __n = param_5 * 4;
    if (param_5 != 0) {
      memmove(__dest,__src,__n);
    }
    lVar2 = param_4 - (param_6 + param_5);
    if (lVar2 != 0) {
      memmove((void *)((long)__dest + param_7 * 4 + __n),__src + param_6 * 4 + __n,lVar2 * 4);
    }
    if (param_2 != 4) {
      operator_delete(__src);
    }
    *param_1 = uVar3 | 1;
    param_1[1] = (param_4 - param_6) + param_7;
    param_1[2] = (ulong)__dest;
    return;
  }
  FUN_0016e348(param_1);
LAB_0016e894:
                    /* WARNING: Subroutine does not return */
  FUN_00141a00();
}


// ===== 0016e898  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::operator= =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::operator=(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,wchar_t param_1)

{
  wchar_t *pwVar1;
  
  if (((byte)*this & 1) == 0) {
    *this = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            )0x2;
    *(wchar_t *)(this + 4) = param_1;
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  pwVar1 = *(wchar_t **)(this + 0x10);
  *(undefined8 *)(this + 8) = 1;
  *pwVar1 = param_1;
  pwVar1[1] = L'\0';
  return;
}


// ===== 0016e8cc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(wchar_t const*, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  
  if (param_2 < 0x3ffffffffffffff0) {
    if (param_2 < 5) {
      __dest = this + 4;
      *this = SUB41((int)param_2 << 1,0);
      if (param_2 == 0) {
        *(undefined4 *)__dest = 0;
        return;
      }
    }
    else {
      if (0x3ffffffffffffffe < (param_2 | 3)) goto LAB_0016e980;
      uVar1 = (param_2 | 3) + 1;
      __dest = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)operator_new(uVar1 * 4);
      *(ulong *)(this + 8) = param_2;
      *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
       (this + 0x10) = __dest;
      *(ulong *)this = uVar1 | 1;
    }
    memmove(__dest,param_1,param_2 << 2);
    *(undefined4 *)(__dest + param_2 * 4) = 0;
    return;
  }
  FUN_0016e348(this);
LAB_0016e980:
                    /* WARNING: Subroutine does not return */
  FUN_00141a00();
}


// ===== 0016e984  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::at =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::at(unsigned long) const */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::at(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this,
    ulong param_1)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_1 < uVar1) {
    pbVar2 = this + 4;
    if (((byte)bVar3 & 1) != 0) {
      pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    return pbVar2 + param_1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054();
}


// ===== 0016e9cc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__src;
  long lVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  
  bVar5 = *this;
  uVar2 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    uVar4 = 4;
    if (((byte)bVar5 & 1) != 0) {
      uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar4 - uVar2 < param_3) {
      __grow_by_and_replace(this,uVar4,(uVar2 + param_3) - uVar4,uVar2,param_1,0,param_3,param_2);
    }
    else if (param_3 != 0) {
      pbVar3 = this + 4;
      if ((*(ulong *)this & 1) != 0) {
        pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      __src = pbVar3 + param_1 * 4;
      if (uVar2 - param_1 != 0) {
        uVar4 = param_3;
        if (pbVar3 + uVar2 * 4 <= param_2 || param_2 < __src) {
          uVar4 = 0;
        }
        param_2 = param_2 + uVar4;
        memmove(__src + param_3 * 4,__src,(uVar2 - param_1) * 4);
      }
      memmove(__src,param_2,param_3 << 2);
      lVar1 = uVar2 + param_3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      *(undefined4 *)(pbVar3 + lVar1 * 4) = 0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054(this);
}


// ===== 0016eaf0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_first_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  long lVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  wchar_t *pwVar7;
  
  lVar4 = -1;
  uVar2 = (ulong)((byte)*this >> 1);
  pbVar3 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if ((param_3 != 0) && (param_2 < uVar2)) {
    pbVar1 = pbVar3 + uVar2 * 4;
    pbVar5 = pbVar3 + param_2 * 4;
    do {
      lVar4 = param_3 << 2;
      pwVar7 = param_1;
      do {
        pbVar6 = pbVar5;
        if (*(wchar_t *)pbVar5 == *pwVar7) goto LAB_0016eb64;
        lVar4 = lVar4 + -4;
        pwVar7 = pwVar7 + 1;
      } while (lVar4 != 0);
      pbVar5 = pbVar5 + 4;
      pbVar6 = pbVar1;
    } while (pbVar5 != pbVar1);
LAB_0016eb64:
    lVar4 = (long)pbVar6 - (long)pbVar3 >> 2;
    if (pbVar6 == pbVar1) {
      lVar4 = -1;
    }
  }
  return lVar4;
}


// ===== 0016eb78  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, unsigned long, wchar_t)
    */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,ulong param_3,wchar_t param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  ulong uVar6;
  ulong uVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  ulong uVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar6 = uVar2 - param_1;
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016e054();
  }
  uVar3 = uVar6;
  if (param_2 <= uVar6) {
    uVar3 = param_2;
  }
  lVar1 = 4;
  if (((byte)bVar4 & 1) != 0) {
    lVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar3 - uVar2) + lVar1 < param_3) {
    FUN_0016e768(this,lVar1,((uVar2 + param_3) - lVar1) - uVar3,uVar2,param_1,uVar3,param_3);
    pbVar10 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(this + 0x10);
  }
  else {
    pbVar10 = this + 4;
    if ((*(ulong *)this & 1) != 0) {
      pbVar10 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  **)(this + 0x10);
    }
    if ((param_2 < uVar6) && (param_3 != uVar3)) {
      memmove(pbVar10 + param_3 * 4 + param_1 * 4,pbVar10 + uVar3 * 4 + param_1 * 4,
              (uVar6 - uVar3) * 4);
    }
    if (param_3 == 0) goto LAB_0016ecb4;
  }
  pbVar5 = pbVar10 + param_1 * 4;
  uVar6 = param_3;
  if (7 < param_3) {
    uVar7 = param_3 & 0xfffffffffffffff8;
    uVar6 = param_3 & 7;
    pbVar8 = pbVar5 + 0x10;
    uVar9 = uVar7;
    do {
      *(ulong *)(pbVar8 + -8) = CONCAT44(param_4,param_4);
      *(ulong *)(pbVar8 + -0x10) = CONCAT44(param_4,param_4);
      *(ulong *)(pbVar8 + 8) = CONCAT44(param_4,param_4);
      *(ulong *)pbVar8 = CONCAT44(param_4,param_4);
      uVar9 = uVar9 - 8;
      pbVar8 = pbVar8 + 0x20;
    } while (uVar9 != 0);
    pbVar5 = pbVar5 + uVar7 * 4;
    if (uVar7 == param_3) goto LAB_0016ecb4;
  }
  do {
    uVar6 = uVar6 - 1;
    *(wchar_t *)pbVar5 = param_4;
    pbVar5 = pbVar5 + 4;
  } while (uVar6 != 0);
LAB_0016ecb4:
  lVar1 = (param_3 - uVar3) + uVar2;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar10 + lVar1 * 4) = 0;
  return;
}


// ===== 0016ecf8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(wchar_t const*, unsigned long) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
               (wchar_t *param_1,ulong param_2)

{
  FUN_0016ed00();
  return;
}


// ===== 0016ed00  FUN_0016ed00 =====

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
FUN_0016ed00(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             *param_1,wchar_t *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)param_1;
  uVar1 = 4;
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = (uVar4 & 0xfffffffffffffffe) - 1;
  }
  uVar3 = (uint)uVar4 & 0xff;
  if (uVar1 <= param_3 && param_3 - uVar1 != 0) {
    uVar2 = uVar4 >> 1 & 0x7f;
    if ((uVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 8);
    }
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __grow_by_and_replace(param_1,uVar1,param_3 - uVar1,uVar2,0,uVar2,param_3,param_2);
    return param_1;
  }
  __dest = param_1 + 4;
  if ((uVar4 & 1) != 0) {
    __dest = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(param_1 + 0x10);
  }
  if (param_3 != 0) {
    memmove(__dest,param_2,param_3 << 2);
    uVar3 = (uint)(byte)*param_1;
  }
  if ((uVar3 & 1) == 0) {
    *param_1 = SUB41((int)param_3 << 1,0);
  }
  else {
    *(ulong *)(param_1 + 8) = param_3;
  }
  *(undefined4 *)(__dest + param_3 * 4) = 0;
  return param_1;
}


// ===== 0016eddc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::reserve =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::reserve(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte *__src;
  bool bVar4;
  ulong *puVar5;
  byte *__dest;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  
  if (0x3fffffffffffffef < param_1) {
    auVar9 = FUN_0016e348();
    uVar6 = auVar9._8_8_;
    puVar5 = auVar9._0_8_;
    bVar3 = (byte)*puVar5;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar5[1];
    }
    if (uVar6 < 5) {
      __dest = (byte *)((long)puVar5 + 4);
      bVar8 = 1;
      __src = (byte *)puVar5[2];
    }
    else {
      uVar7 = uVar6 + 1;
      uVar2 = 4;
      if ((bVar3 & 1) != 0) {
        uVar2 = (*puVar5 & 0xfffffffffffffffe) - 1;
      }
      if (uVar2 < uVar6) {
        if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00141a00();
        }
        __dest = (byte *)operator_new(uVar7 * 4);
      }
      else {
        if (uVar7 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00141a00();
        }
        __dest = (byte *)operator_new(uVar7 * 4);
      }
      bVar8 = bVar3 & 1;
      __src = (byte *)((long)puVar5 + 4);
      if ((bVar3 & 1) != 0) {
        __src = (byte *)puVar5[2];
      }
    }
    if (uVar1 != 0xffffffffffffffff) {
      memmove(__dest,__src,(uVar1 + 1) * 4);
    }
    if (bVar8 != 0) {
      operator_delete(__src);
    }
    if (uVar6 < 5) {
      *(byte *)puVar5 = (byte)((int)uVar1 << 1);
    }
    else {
      puVar5[2] = (ulong)__dest;
      *puVar5 = uVar6 + 1 | 1;
      puVar5[1] = uVar1;
    }
    return;
  }
  uVar7 = *(ulong *)this;
  uVar6 = (uVar7 & 0xfffffffffffffffe) - 1;
  uVar1 = 4;
  if (((byte)*this & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 < param_1) {
    bVar4 = (uVar7 & 1) != 0;
    uVar1 = uVar7 >> 1 & 0x7f;
    if (bVar4) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar7 = 4;
    if (bVar4) {
      uVar7 = uVar6;
    }
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    uVar6 = uVar1 | 3;
    if (uVar1 < 5) {
      uVar6 = 4;
    }
    if (uVar6 != uVar7) {
      FUN_0016ee5c();
      return;
    }
  }
  return;
}


// ===== 0016ee5c  FUN_0016ee5c =====

void FUN_0016ee5c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte *__src;
  byte *__dest;
  byte bVar5;
  
  bVar4 = (byte)*param_1;
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = param_1[1];
  }
  if (param_2 < 5) {
    __dest = (byte *)((long)param_1 + 4);
    bVar5 = 1;
    __src = (byte *)param_1[2];
  }
  else {
    uVar1 = param_2 + 1;
    uVar3 = 4;
    if ((bVar4 & 1) != 0) {
      uVar3 = (*param_1 & 0xfffffffffffffffe) - 1;
    }
    if (uVar3 < param_2) {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00141a00();
      }
      __dest = (byte *)operator_new(uVar1 * 4);
    }
    else {
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0016ef7c to 0016ef7f has its CatchHandler @ 0016ef80 */
        FUN_00141a00();
      }
                    /* try { // try from 0016ef54 to 0016ef57 has its CatchHandler @ 0016ef80 */
      __dest = (byte *)operator_new(uVar1 * 4);
    }
    bVar5 = bVar4 & 1;
    __src = (byte *)((long)param_1 + 4);
    if ((bVar4 & 1) != 0) {
      __src = (byte *)param_1[2];
    }
  }
  if (uVar2 != 0xffffffffffffffff) {
    memmove(__dest,__src,(uVar2 + 1) * 4);
  }
  if (bVar5 != 0) {
    operator_delete(__src);
  }
  if (param_2 < 5) {
    *(byte *)param_1 = (byte)((int)uVar2 << 1);
  }
  else {
    param_1[2] = (ulong)__dest;
    *param_1 = param_2 + 1 | 1;
    param_1[1] = uVar2;
  }
  return;
}


// ===== 0016efa0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(wchar_t const*, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)this;
  uVar2 = 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = (uVar5 & 0xfffffffffffffffe) - 1;
  }
  uVar3 = uVar5 >> 1 & 0x7f;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (uVar2 - uVar3 < param_2) {
    __grow_by_and_replace(this,uVar2,(param_2 - uVar2) + uVar3,uVar3,uVar3,0,param_2,param_1);
  }
  else if (param_2 != 0) {
    pbVar4 = this + 4;
    if ((uVar5 & 1) != 0) {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    memmove(pbVar4 + uVar3 * 4,param_1,param_2 << 2);
    lVar1 = uVar3 + param_2;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar4 + lVar1 * 4) = 0;
    return this;
  }
  return this;
}


// ===== 0016f090  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  
  bVar4 = *param_1;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    uVar2 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar2 = param_3;
    }
    pbVar3 = param_1 + 4;
    if (((byte)bVar4 & 1) != 0) {
      pbVar3 = *(basic_string **)(param_1 + 0x10);
    }
    FUN_0016ed00(this,pbVar3 + param_2 * 4,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054();
}


// ===== 0016f0e4  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::copy =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::copy(wchar_t*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::copy(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  
  bVar4 = *this;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_3 <= uVar1) {
    uVar2 = uVar1 - param_3;
    if (param_2 <= uVar1 - param_3) {
      uVar2 = param_2;
    }
    if (uVar2 != 0) {
      pbVar3 = this + 4;
      if (((byte)bVar4 & 1) != 0) {
        pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      memmove(param_1,pbVar3 + param_3 * 4,uVar2 << 2);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054();
}


// ===== 0016f158  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::basic_string =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long, std::__ndk1::allocator<wchar_t> const&) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     basic_string(basic_string *param_1,ulong param_2,ulong param_3,allocator *param_4)

{
  ulong uVar1;
  long lVar2;
  allocator *paVar3;
  byte bVar4;
  basic_string *__dest;
  
  bVar4 = *(byte *)param_2;
  uVar1 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0016e054(param_1);
  }
  lVar2 = param_2 + 4;
  if ((bVar4 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
  }
  paVar3 = (allocator *)(uVar1 - param_3);
  if (param_4 <= (allocator *)(uVar1 - param_3)) {
    paVar3 = param_4;
  }
  if ((allocator *)0x3fffffffffffffef < paVar3) {
    FUN_0016e348(param_1);
LAB_0016f238:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (paVar3 < (allocator *)0x5) {
    __dest = param_1 + 4;
    *param_1 = SUB41((int)paVar3 << 1,0);
    if (paVar3 == (allocator *)0x0) goto LAB_0016f20c;
  }
  else {
    if (0x3ffffffffffffffe < ((ulong)paVar3 | 3)) goto LAB_0016f238;
    uVar1 = ((ulong)paVar3 | 3) + 1;
    __dest = (basic_string *)operator_new(uVar1 * 4);
    *(allocator **)(param_1 + 8) = paVar3;
    *(basic_string **)(param_1 + 0x10) = __dest;
    *(ulong *)param_1 = uVar1 | 1;
  }
  memmove(__dest,(void *)(lVar2 + param_3 * 4),(long)paVar3 << 2);
LAB_0016f20c:
  *(undefined4 *)(__dest + (long)paVar3 * 4) = 0;
  return;
}


// ===== 0016f23c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  wchar_t *pwVar4;
  long lVar5;
  
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_2 <= uVar1 && uVar1 - param_2 != 0) {
    pbVar2 = this + 4;
    if (((byte)bVar3 & 1) != 0) {
      pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    pwVar4 = wmemchr((wchar_t *)(pbVar2 + param_2 * 4),param_1,uVar1 - param_2);
    lVar5 = (long)pwVar4 - (long)pbVar2 >> 2;
    if (pwVar4 == (wchar_t *)0x0) {
      lVar5 = -1;
    }
    return lVar5;
  }
  return -1;
}


// ===== 0016f2b0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  if (0x3fffffffffffffef < param_1) {
    FUN_0016e348(this);
LAB_0016f39c:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (param_1 < 5) {
    pbVar5 = this + 4;
    *this = SUB41((int)param_1 << 1,0);
    if (param_1 == 0) goto LAB_0016f37c;
  }
  else {
    if (0x3ffffffffffffffe < (param_1 | 3)) goto LAB_0016f39c;
    uVar2 = (param_1 | 3) + 1;
    pbVar5 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)operator_new(uVar2 * 4);
    *(ulong *)(this + 8) = param_1;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = pbVar5;
    *(ulong *)this = uVar2 | 1;
  }
  pbVar1 = pbVar5;
  uVar2 = param_1;
  if (7 < param_1) {
    uVar3 = param_1 & 0x3ffffffffffffff8;
    uVar2 = param_1 & 7;
    pbVar1 = pbVar5 + 0x10;
    uVar4 = uVar3;
    do {
      *(ulong *)(pbVar1 + -8) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar1 + -0x10) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar1 + 8) = CONCAT44(param_2,param_2);
      *(ulong *)pbVar1 = CONCAT44(param_2,param_2);
      uVar4 = uVar4 - 8;
      pbVar1 = pbVar1 + 0x20;
    } while (uVar4 != 0);
    pbVar1 = pbVar5 + uVar3 * 4;
    if (uVar3 == param_1) goto LAB_0016f37c;
  }
  do {
    uVar2 = uVar2 - 1;
    *(wchar_t *)pbVar1 = param_2;
    pbVar1 = pbVar1 + 4;
  } while (uVar2 != 0);
LAB_0016f37c:
  *(undefined4 *)(pbVar5 + param_1 * 4) = 0;
  return;
}


// ===== 0016f3a0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  insert(this,param_1,param_2,sVar1);
  return;
}


// ===== 0016f3ec  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_last_of =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  wchar_t *pwVar4;
  long lVar5;
  
  bVar3 = *this;
  pbVar1 = this + 4;
  if (((byte)bVar3 & 1) != 0) {
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_3 != 0) {
    uVar2 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(this + 8);
    }
    if (param_2 < uVar2) {
      uVar2 = param_2 + 1;
    }
    lVar5 = uVar2 << 2;
    do {
      if (lVar5 == 0) {
        return -1;
      }
      pwVar4 = wmemchr(param_1,*(wchar_t *)(pbVar1 + lVar5 + -4),param_3);
      lVar5 = lVar5 + -4;
    } while (pwVar4 == (wchar_t *)0x0);
    return lVar5 >> 2;
  }
  return -1;
}


// ===== 0016f498  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__grow_by =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__grow_by(unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__grow_by(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
           ulong param_6)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__src;
  ulong uVar1;
  long lVar2;
  void *__dest;
  size_t __n;
  ulong uVar3;
  
  uVar3 = 0x3fffffffffffffef;
  if (param_2 <= 0x3fffffffffffffef - param_1) {
    __src = this + 4;
    if (((byte)*this & 1) != 0) {
      __src = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(this + 0x10);
    }
    if (param_1 < 0x1fffffffffffffe7) {
      uVar1 = param_2 + param_1;
      if (param_2 + param_1 <= param_1 * 2) {
        uVar1 = param_1 * 2;
      }
      uVar3 = 5;
      if (4 < uVar1) {
        uVar3 = (uVar1 | 3) + 1;
      }
      if (uVar3 >> 0x3e != 0) goto LAB_0016f5bc;
    }
    __dest = operator_new(uVar3 << 2);
    __n = param_4 * 4;
    if (param_4 != 0) {
      memmove(__dest,__src,__n);
    }
    lVar2 = param_3 - (param_5 + param_4);
    if (lVar2 != 0) {
      memmove((void *)((long)__dest + param_6 * 4 + __n),__src + param_5 * 4 + __n,lVar2 * 4);
    }
    if (param_1 != 4) {
      operator_delete(__src);
    }
    *(void **)(this + 0x10) = __dest;
    *(ulong *)this = uVar3 | 1;
    return;
  }
  FUN_0016e348(this);
LAB_0016f5bc:
                    /* WARNING: Subroutine does not return */
  FUN_00141a00();
}


// ===== 0016f5c0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::push_back =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::push_back(wchar_t) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
     push_back(wchar_t param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  void *pvVar5;
  undefined4 in_w1;
  undefined4 in_w2;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  puVar4 = (ulong *)(ulong)(uint)param_1;
  bVar3 = (byte)*puVar4;
  if ((bVar3 & 1) == 0) {
    if (bVar3 != 8) {
      uVar12 = (ulong)(bVar3 >> 1);
      uVar6 = (long)puVar4 + 4;
      *(byte *)puVar4 = bVar3 + 2;
      goto LAB_0016f6c0;
    }
    pvVar11 = (void *)((long)puVar4 + 4);
    uVar6 = 4;
LAB_0016f630:
    uVar8 = uVar6 * 2;
    if (uVar8 < uVar6 + 1) {
      uVar8 = uVar6 + 1;
    }
    uVar12 = 5;
    if (4 < uVar8) {
      uVar12 = (uVar8 | 3) + 1;
    }
    if (uVar12 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00141a00();
    }
LAB_0016f680:
    pvVar5 = operator_new(uVar12 << 2);
    memmove(pvVar5,pvVar11,uVar6 << 2);
    if (uVar6 != 4) {
      operator_delete(pvVar11);
    }
    puVar4[2] = (ulong)pvVar5;
    *puVar4 = uVar12 | 1;
    uVar12 = uVar6;
  }
  else {
    uVar12 = puVar4[1];
    uVar6 = (*puVar4 & 0xfffffffffffffffe) - 1;
    if (uVar12 == uVar6) {
      if ((*puVar4 & 0xfffffffffffffffe) == 0x3ffffffffffffff0) {
        auVar14 = FUN_0016e348(puVar4);
        uVar12 = auVar14._8_8_;
        puVar4 = auVar14._0_8_;
        if (uVar12 == 0) {
          return;
        }
        uVar8 = *puVar4;
        uVar9 = *puVar4;
        uVar6 = 4;
        if ((uVar9 & 1) != 0) {
          uVar6 = (uVar8 & 0xfffffffffffffffe) - 1;
        }
        uVar2 = uVar8 >> 1 & 0x7f;
        if ((uVar8 & 1) != 0) {
          uVar2 = puVar4[1];
        }
        if (uVar6 - uVar2 < uVar12) {
          uVar1 = uVar2 + uVar12;
          uVar13 = 0x3fffffffffffffef;
          if (0x3fffffffffffffef - uVar6 < uVar1 - uVar6) {
            FUN_0016e348();
LAB_0016f8a8:
                    /* WARNING: Subroutine does not return */
            FUN_00141a00();
          }
          pvVar5 = (void *)((long)puVar4 + 4);
          if ((uVar8 & 1) != 0) {
            pvVar5 = (void *)puVar4[2];
          }
          if (uVar6 < 0x1fffffffffffffe7) {
            if (uVar1 <= uVar6 * 2) {
              uVar1 = uVar6 * 2;
            }
            uVar13 = 5;
            if (4 < uVar1) {
              uVar13 = (uVar1 | 3) + 1;
            }
            if (uVar13 >> 0x3e != 0) goto LAB_0016f8a8;
          }
          pvVar11 = operator_new(uVar13 << 2);
          if (uVar2 != 0) {
            memmove(pvVar11,pvVar5,uVar2 << 2);
          }
          if ((uVar9 & 1) != 0) {
            operator_delete(pvVar5);
          }
          puVar4[1] = uVar2;
          puVar4[2] = (ulong)pvVar11;
          *puVar4 = uVar13 | 1;
          puVar7 = (undefined4 *)((long)pvVar11 + uVar2 * 4);
        }
        else {
          pvVar11 = (void *)((long)puVar4 + 4);
          if ((uVar8 & 1) != 0) {
            pvVar11 = (void *)puVar4[2];
          }
          puVar7 = (undefined4 *)((long)pvVar11 + uVar2 * 4);
        }
        uVar6 = uVar12;
        if (7 < uVar12) {
          uVar9 = uVar12 & 0xfffffffffffffff8;
          uVar6 = uVar12 & 7;
          puVar10 = (undefined8 *)(puVar7 + 4);
          uVar8 = uVar9;
          do {
            puVar10[-1] = CONCAT44(in_w2,in_w2);
            puVar10[-2] = CONCAT44(in_w2,in_w2);
            puVar10[1] = CONCAT44(in_w2,in_w2);
            *puVar10 = CONCAT44(in_w2,in_w2);
            uVar8 = uVar8 - 8;
            puVar10 = puVar10 + 4;
          } while (uVar8 != 0);
          puVar7 = puVar7 + uVar9;
          if (uVar9 == uVar12) goto LAB_0016f868;
        }
        do {
          uVar6 = uVar6 - 1;
          *puVar7 = in_w2;
          puVar7 = puVar7 + 1;
        } while (uVar6 != 0);
LAB_0016f868:
        uVar2 = uVar2 + uVar12;
        if ((*puVar4 & 1) == 0) {
          *(char *)puVar4 = (char)((int)uVar2 << 1);
        }
        else {
          puVar4[1] = uVar2;
        }
        *(undefined4 *)((long)pvVar11 + uVar2 * 4) = 0;
        return;
      }
      pvVar11 = (void *)puVar4[2];
      if (uVar6 < 0x1fffffffffffffe7) goto LAB_0016f630;
      uVar12 = 0x3fffffffffffffef;
      goto LAB_0016f680;
    }
  }
  uVar6 = puVar4[2];
  puVar4[1] = uVar12 + 1;
LAB_0016f6c0:
  puVar7 = (undefined4 *)(uVar6 + uVar12 * 4);
  *puVar7 = in_w1;
  puVar7[1] = 0;
  return;
}


// ===== 0016f6e8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  long lVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    return;
  }
  uVar8 = *(ulong *)this;
  bVar3 = *this;
  uVar5 = 4;
  if (((byte)bVar3 & 1) != 0) {
    uVar5 = (uVar8 & 0xfffffffffffffffe) - 1;
  }
  uVar2 = uVar8 >> 1 & 0x7f;
  if ((uVar8 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (uVar5 - uVar2 < param_1) {
    uVar6 = uVar2 + param_1;
    uVar9 = 0x3fffffffffffffef;
    if (0x3fffffffffffffef - uVar5 < uVar6 - uVar5) {
      FUN_0016e348();
LAB_0016f8a8:
                    /* WARNING: Subroutine does not return */
      FUN_00141a00();
    }
    pbVar4 = this + 4;
    if ((uVar8 & 1) != 0) {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar5 < 0x1fffffffffffffe7) {
      if (uVar6 <= uVar5 * 2) {
        uVar6 = uVar5 * 2;
      }
      uVar9 = 5;
      if (4 < uVar6) {
        uVar9 = (uVar6 | 3) + 1;
      }
      if (uVar9 >> 0x3e != 0) goto LAB_0016f8a8;
    }
    __dest = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)operator_new(uVar9 << 2);
    if (uVar2 != 0) {
      memmove(__dest,pbVar4,uVar2 << 2);
    }
    if (((byte)bVar3 & 1) != 0) {
      operator_delete(pbVar4);
    }
    *(ulong *)(this + 8) = uVar2;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = uVar9 | 1;
    pbVar4 = __dest + uVar2 * 4;
  }
  else {
    __dest = this + 4;
    if ((uVar8 & 1) != 0) {
      __dest = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    pbVar4 = __dest + uVar2 * 4;
  }
  uVar5 = param_1;
  if (7 < param_1) {
    uVar6 = param_1 & 0xfffffffffffffff8;
    uVar5 = param_1 & 7;
    pbVar7 = pbVar4 + 0x10;
    uVar8 = uVar6;
    do {
      *(ulong *)(pbVar7 + -8) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar7 + -0x10) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar7 + 8) = CONCAT44(param_2,param_2);
      *(ulong *)pbVar7 = CONCAT44(param_2,param_2);
      uVar8 = uVar8 - 8;
      pbVar7 = pbVar7 + 0x20;
    } while (uVar8 != 0);
    pbVar4 = pbVar4 + uVar6 * 4;
    if (uVar6 == param_1) goto LAB_0016f868;
  }
  do {
    uVar5 = uVar5 - 1;
    *(wchar_t *)pbVar4 = param_2;
    pbVar4 = pbVar4 + 4;
  } while (uVar5 != 0);
LAB_0016f868:
  lVar1 = uVar2 + param_1;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(__dest + lVar1 * 4) = 0;
  return;
}


// ===== 0016f8ac  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::rfind =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t param_1,ulong param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  pbVar1 = this + 4;
  uVar2 = (ulong)((byte)*this >> 1);
  if (((byte)*this & 1) != 0) {
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    uVar2 = *(ulong *)(this + 8);
  }
  if (uVar2 != 0) {
    if (param_2 < uVar2) {
      uVar2 = param_2 + 1;
    }
    lVar4 = uVar2 << 2;
    while (lVar4 != 0) {
      lVar3 = lVar4 + -4;
      lVar4 = lVar4 + -4;
      if (*(wchar_t *)(pbVar1 + lVar3) == param_1) {
        return lVar4 >> 2;
      }
    }
  }
  return -1;
}


// ===== 0016f904  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  uint uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)this;
  bVar1 = *this;
  uVar3 = (uint)uVar4 & 0xff;
  uVar6 = 4;
  if (((byte)bVar1 & 1) != 0) {
    uVar6 = (uVar4 & 0xfffffffffffffffe) - 1;
  }
  if (uVar6 < param_1) {
    uVar7 = 0x3fffffffffffffef;
    if (0x3fffffffffffffef - uVar6 < param_1 - uVar6) {
      FUN_0016e348();
LAB_0016fa74:
                    /* WARNING: Subroutine does not return */
      FUN_00141a00();
    }
    pbVar5 = this + 4;
    if ((uVar4 & 1) != 0) {
      pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar6 < 0x1fffffffffffffe7) {
      uVar4 = param_1;
      if (param_1 <= uVar6 * 2) {
        uVar4 = uVar6 * 2;
      }
      uVar7 = 5;
      if (4 < uVar4) {
        uVar7 = (uVar4 | 3) + 1;
      }
      if (uVar7 >> 0x3e != 0) goto LAB_0016fa74;
    }
    pbVar2 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)operator_new(uVar7 << 2);
    if (((byte)bVar1 & 1) != 0) {
      operator_delete(pbVar5);
    }
    *(undefined8 *)(this + 8) = 0;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = pbVar2;
    *(ulong *)this = uVar7 | 1;
  }
  else {
    pbVar2 = this + 4;
    if ((uVar4 & 1) != 0) {
      pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (param_1 == 0) goto LAB_0016fa3c;
  }
  pbVar5 = pbVar2;
  uVar6 = param_1;
  if (param_1 < 8) {
LAB_0016fa2c:
    do {
      uVar6 = uVar6 - 1;
      *(wchar_t *)pbVar5 = param_2;
      pbVar5 = pbVar5 + 4;
    } while (uVar6 != 0);
  }
  else {
    uVar7 = param_1 & 0xfffffffffffffff8;
    uVar6 = param_1 & 7;
    pbVar5 = pbVar2 + 0x10;
    uVar4 = uVar7;
    do {
      *(ulong *)(pbVar5 + -8) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar5 + -0x10) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar5 + 8) = CONCAT44(param_2,param_2);
      *(ulong *)pbVar5 = CONCAT44(param_2,param_2);
      uVar4 = uVar4 - 8;
      pbVar5 = pbVar5 + 0x20;
    } while (uVar4 != 0);
    pbVar5 = pbVar2 + uVar7 * 4;
    if (uVar7 != param_1) goto LAB_0016fa2c;
  }
  uVar3 = (uint)(byte)*this;
LAB_0016fa3c:
  if ((uVar3 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  *(undefined4 *)(pbVar2 + param_1 * 4) = 0;
  return;
}


// ===== 0016fa78  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::erase =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::erase(unsigned long, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::erase(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_0016e054();
  }
  if (param_2 != 0xffffffffffffffff) {
    FUN_0016fb0c();
    return this;
  }
  if (((byte)bVar2 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
    *(undefined4 *)(this + param_1 * 4 + 4) = 0;
    return this;
  }
  *(ulong *)(this + 8) = param_1;
  *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
  return this;
}


// ===== 0016fb0c  FUN_0016fb0c =====

void FUN_0016fb0c(byte *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_3 != 0) {
    bVar4 = *param_1;
    bVar5 = (bVar4 & 1) != 0;
    uVar2 = (ulong)(bVar4 >> 1);
    if (bVar5) {
      uVar2 = *(ulong *)(param_1 + 8);
    }
    uVar6 = uVar2 - param_2;
    pbVar1 = param_1 + 4;
    if (bVar5) {
      pbVar1 = *(byte **)(param_1 + 0x10);
    }
    uVar3 = uVar6;
    if (param_3 <= uVar6) {
      uVar3 = param_3;
    }
    if (param_3 < uVar6) {
      memmove(pbVar1 + param_2 * 4,pbVar1 + param_2 * 4 + uVar3 * 4,(uVar6 - uVar3) * 4);
      bVar4 = *param_1;
    }
    lVar7 = uVar2 - uVar3;
    if ((bVar4 & 1) == 0) {
      *param_1 = (byte)((int)lVar7 << 1);
    }
    else {
      *(long *)(param_1 + 8) = lVar7;
    }
    pbVar1 = pbVar1 + lVar7 * 4;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
  }
  return;
}


// ===== 0016fba8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,basic_string *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  basic_string *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  ulong uVar7;
  basic_string bVar8;
  
  bVar8 = *param_1;
  uVar4 = (ulong)((byte)bVar8 >> 1);
  if (((byte)bVar8 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar4) {
    uVar7 = *(ulong *)this;
    pbVar2 = param_1 + 4;
    if (((byte)bVar8 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_1 + 0x10);
    }
    uVar3 = uVar4 - param_2;
    if (param_3 <= uVar4 - param_2) {
      uVar3 = param_3;
    }
    uVar4 = 4;
    if (((byte)*this & 1) != 0) {
      uVar4 = (uVar7 & 0xfffffffffffffffe) - 1;
    }
    uVar5 = uVar7 >> 1 & 0x7f;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)(this + 8);
    }
    if (uVar4 - uVar5 < uVar3) {
      __grow_by_and_replace
                (this,uVar4,(uVar3 - uVar4) + uVar5,uVar5,uVar5,0,uVar3,
                 (wchar_t *)(pbVar2 + param_2 * 4));
    }
    else if (uVar3 != 0) {
      pbVar6 = this + 4;
      if ((uVar7 & 1) != 0) {
        pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      memmove(pbVar6 + uVar5 * 4,pbVar2 + param_2 * 4,uVar3 << 2);
      lVar1 = uVar5 + uVar3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
      return this;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054(this);
}


// ===== 0016fccc  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(wchar_t const*) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,wchar_t *param_1)

{
  ulong uVar1;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__s1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  uint uVar3;
  size_t sVar4;
  
  sVar4 = wcslen(param_1);
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (sVar4 == 0xffffffffffffffff) {
                    /* try { // try from 0016fd6c to 0016fd73 has its CatchHandler @ 0016fd74 */
                    /* WARNING: Subroutine does not return */
    FUN_0016e054(this);
  }
  __n = uVar1;
  if (sVar4 <= uVar1) {
    __n = sVar4;
  }
  if (__n != 0) {
    __s1 = this + 4;
    if (((byte)bVar2 & 1) != 0) {
      __s1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
    }
    uVar3 = wmemcmp((wchar_t *)__s1,param_1,__n);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = (uint)(sVar4 < uVar1);
  if (uVar1 < sVar4) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// ===== 0016fd78  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*, unsigned
   long) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  uint uVar5;
  
  bVar4 = *this;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if ((param_4 == 0xffffffffffffffff) || (uVar1 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0016e054();
  }
  uVar2 = uVar1 - param_1;
  if (param_2 <= uVar1 - param_1) {
    uVar2 = param_2;
  }
  __n = uVar2;
  if (param_4 <= uVar2) {
    __n = param_4;
  }
  if (__n != 0) {
    pbVar3 = this + 4;
    if (((byte)bVar4 & 1) != 0) {
      pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    uVar5 = wmemcmp((wchar_t *)(pbVar3 + param_1 * 4),param_3,__n);
    if (uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = (uint)(param_4 < uVar2);
  if (uVar2 < param_4) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ===== 0016fe14  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*) const */

uint __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  uint uVar5;
  size_t sVar6;
  
  sVar6 = wcslen(param_3);
  bVar4 = *this;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if ((sVar6 == 0xffffffffffffffff) || (uVar1 < param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0016e054(this);
  }
  uVar2 = uVar1 - param_1;
  if (param_2 <= uVar1 - param_1) {
    uVar2 = param_2;
  }
  __n = uVar2;
  if (sVar6 <= uVar2) {
    __n = sVar6;
  }
  if (__n != 0) {
    pbVar3 = this + 4;
    if (((byte)bVar4 & 1) != 0) {
      pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    uVar5 = wmemcmp((wchar_t *)(pbVar3 + param_1 * 4),param_3,__n);
    if (uVar5 != 0) {
      return uVar5;
    }
  }
  uVar5 = (uint)(sVar6 < uVar2);
  if (uVar2 < sVar6) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// ===== 0016fee4  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::at =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::at(unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::at(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this,
    ulong param_1)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_1 < uVar1) {
    pbVar2 = this + 4;
    if (((byte)bVar3 & 1) != 0) {
      pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    return pbVar2 + param_1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054();
}


// ===== 0016ff2c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(wchar_t const*) */

void std::__ndk1::
     basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
               (wchar_t *param_1)

{
  FUN_0016ff34();
  return;
}


// ===== 0016ff34  FUN_0016ff34 =====

void FUN_0016ff34(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  FUN_0016ed00(param_1,param_2,sVar1);
  return;
}


// ===== 0016ff70  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  wchar_t __c;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  int iVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  long lVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  
  uVar2 = (ulong)((byte)*this >> 1);
  pbVar3 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (uVar2 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar5 = pbVar3 + param_2 * 4;
    pbVar1 = pbVar3 + uVar2 * 4;
    lVar6 = (long)pbVar1 - (long)pbVar5 >> 2;
    pbVar7 = pbVar1;
    if ((long)param_3 <= lVar6) {
      __c = *param_1;
      do {
        pbVar7 = pbVar1;
        if (((0xfffffffffffffffe < lVar6 - param_3) ||
            (pbVar5 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)wmemchr((wchar_t *)pbVar5,__c,(lVar6 - param_3) + 1),
            pbVar5 == (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)0x0)) ||
           (iVar4 = wmemcmp((wchar_t *)pbVar5,param_1,param_3), pbVar7 = pbVar5, iVar4 == 0)) break;
        pbVar5 = pbVar5 + 4;
        lVar6 = (long)pbVar1 - (long)pbVar5 >> 2;
        pbVar7 = pbVar1;
      } while ((long)param_3 <= lVar6);
    }
    param_2 = (long)pbVar7 - (long)pbVar3 >> 2;
    if (pbVar7 == pbVar1) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}


// ===== 00170050  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) const */

int __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar6;
  basic_string *pbVar7;
  int iVar8;
  
  bVar6 = *this;
  uVar2 = (ulong)((byte)*param_3 >> 1);
  pbVar7 = param_3 + 4;
  if (((byte)*param_3 & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 8);
    pbVar7 = *(basic_string **)(param_3 + 0x10);
  }
  uVar5 = (ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    uVar5 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar5) {
    pbVar3 = this + 4;
    if (((byte)bVar6 & 1) != 0) {
      pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    uVar4 = uVar5 - param_1;
    if (param_2 <= uVar5 - param_1) {
      uVar4 = param_2;
    }
    if (param_4 <= uVar2) {
      uVar5 = uVar2 - param_4;
      if (param_5 <= uVar2 - param_4) {
        uVar5 = param_5;
      }
      __n = uVar5;
      if (uVar4 <= uVar5) {
        __n = uVar4;
      }
      if (__n != 0) {
        iVar8 = wmemcmp((wchar_t *)(pbVar3 + param_1 * 4),(wchar_t *)(pbVar7 + param_4 * 4),__n);
        if (iVar8 != 0) {
          return iVar8;
        }
      }
      iVar8 = 1;
      if (uVar4 < uVar5) {
        iVar8 = -1;
      }
      iVar1 = 0;
      if (uVar4 != uVar5) {
        iVar1 = iVar8;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001706e8("string_view::substr");
}


// ===== 00170118  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::operator= =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::operator=(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (this != (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)param_1) {
    bVar2 = *param_1;
    if (((byte)*this & 1) != 0) {
      uVar1 = (ulong)((byte)bVar2 >> 1);
      pbVar3 = param_1 + 4;
      if (((byte)bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
        pbVar3 = *(basic_string **)(param_1 + 0x10);
      }
      FUN_00170244(this,pbVar3,uVar1);
      return;
    }
    if (((byte)bVar2 & 1) != 0) {
      FUN_00170170(this,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      return;
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar5;
    *(undefined8 *)this = uVar4;
  }
  return;
}


// ===== 00170170  FUN_00170170 =====

ulong * FUN_00170170(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *__dest;
  
  if (param_3 < 5) {
    __dest = (undefined1 *)((long)param_1 + 4);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3 << 2);
    }
LAB_00170218:
    *(undefined4 *)(__dest + param_3 * 4) = 0;
    return param_1;
  }
  if (param_3 + 0xc000000000000011 < 0xc000000000000015) {
    FUN_0016e348(param_1);
  }
  else {
    uVar1 = param_3;
    if (param_3 < 9) {
      uVar1 = 8;
    }
    if ((uVar1 | 3) < 0x3fffffffffffffff) {
      uVar1 = (uVar1 | 3) + 1;
      __dest = (undefined1 *)operator_new(uVar1 * 4);
      memcpy(__dest,param_2,param_3 << 2);
      param_1[1] = param_3;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar1 | 1;
      goto LAB_00170218;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00141a00();
}


// ===== 00170244  FUN_00170244 =====

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
FUN_00170244(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
             *param_1,wchar_t *param_2,ulong param_3)

{
  ulong uVar1;
  void *__dest;
  
  uVar1 = *(ulong *)param_1 & 0xfffffffffffffffe;
  if (param_3 < uVar1) {
    __dest = *(void **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = param_3;
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3 << 2);
    }
    *(undefined4 *)((long)__dest + param_3 * 4) = 0;
    return param_1;
  }
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
  __grow_by_and_replace
            (param_1,uVar1 - 1,(param_3 - uVar1) + 1,*(ulong *)(param_1 + 8),0,
             *(ulong *)(param_1 + 8),param_3,param_2);
  return param_1;
}


// ===== 001702e8  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(wchar_t const*) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  size_t sVar6;
  
  sVar6 = wcslen(param_1);
  uVar5 = *(ulong *)this;
  uVar2 = 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = (uVar5 & 0xfffffffffffffffe) - 1;
  }
  uVar3 = uVar5 >> 1 & 0x7f;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (uVar2 - uVar3 < sVar6) {
    __grow_by_and_replace(this,uVar2,(sVar6 - uVar2) + uVar3,uVar3,uVar3,0,sVar6,param_1);
  }
  else if (sVar6 != 0) {
    pbVar4 = this + 4;
    if ((uVar5 & 1) != 0) {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    memmove(pbVar4 + uVar3 * 4,param_1,sVar6 << 2);
    lVar1 = uVar3 + sVar6;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar4 + lVar1 * 4) = 0;
  }
  return this;
}


// ===== 001703d0  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  basic_string *pbVar2;
  ulong uVar3;
  basic_string bVar4;
  
  bVar4 = *param_3;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (param_4 <= uVar1) {
    pbVar2 = param_3 + 4;
    if (((byte)bVar4 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_3 + 0x10);
    }
    uVar3 = uVar1 - param_4;
    if (param_5 <= uVar1 - param_4) {
      uVar3 = param_5;
    }
    replace(this,param_1,param_2,(wchar_t *)(pbVar2 + param_4 * 4),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054();
}


// ===== 00170420  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(std::__ndk1::__wrap_iter<wchar_t const*>, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,long param_2,undefined4 param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  bool bVar6;
  long lVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  
  pbVar1 = this + 4;
  bVar6 = ((byte)*this & 1) != 0;
  pbVar8 = pbVar1;
  if (bVar6) {
    pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  param_2 = param_2 - (long)pbVar8;
  uVar3 = (ulong)((byte)*this >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(this + 8);
  }
  uVar4 = 4;
  if (bVar6) {
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  lVar7 = param_2 >> 2;
  if (uVar4 == uVar3) {
    FUN_0016e768(this,uVar3,1,uVar3,lVar7,0,1);
    pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  else {
    pbVar8 = pbVar1;
    if ((*(ulong *)this & 1) != 0) {
      pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar3 - lVar7 != 0) {
      memmove(pbVar8 + param_2 + 4,pbVar8 + param_2,(uVar3 - lVar7) * 4);
    }
  }
  lVar2 = uVar3 + 1;
  *(undefined4 *)(pbVar8 + lVar7 * 4) = param_3;
  *(undefined4 *)(pbVar8 + lVar2 * 4) = 0;
  bVar5 = *this;
  if (((byte)bVar5 & 1) == 0) {
    *this = SUB41((int)lVar2 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar2;
  }
  if (((byte)bVar5 & 1) != 0) {
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  return pbVar1 + param_2;
}


// ===== 0017051c  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::resize =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::resize(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::resize(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 <= param_1 && param_1 - uVar1 != 0) {
    append(this,param_1 - uVar1,param_2);
    return;
  }
  if (((byte)bVar2 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
    *(undefined4 *)(this + param_1 * 4 + 4) = 0;
    return;
  }
  *(ulong *)(this + 8) = param_1;
  *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
  return;
}


// ===== 00170568  std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert =====

/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(unsigned long, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,basic_string *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  ulong uVar3;
  basic_string bVar4;
  
  bVar4 = *param_2;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (param_3 <= uVar1) {
    pbVar2 = param_2 + 4;
    if (((byte)bVar4 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_2 + 0x10);
    }
    uVar3 = uVar1 - param_3;
    if (param_4 <= uVar1 - param_3) {
      uVar3 = param_4;
    }
    insert(this,param_1,(wchar_t *)(pbVar2 + param_3 * 4),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016e054();
}


// ===== 001705b8  std::__ndk1::operator+ =====

/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall std::__ndk1::operator+(__ndk1 *this,char *param_1,basic_string *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  size_t __n_00;
  void *__dest;
  ulong *in_x8;
  char *__src;
  
  __n_00 = strlen((char *)this);
  bVar3 = *param_1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  uVar2 = __n + __n_00;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_0016b728();
  }
  if (uVar2 < 0x17) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    *(char *)in_x8 = (char)(((uint)uVar2 & 0xff) << 1);
    __dest = (void *)((long)in_x8 + 1);
  }
  else {
    __dest = operator_new((uVar2 | 0xf) + 1);
    uVar1 = (uVar2 | 0xf) + 2;
    in_x8[1] = uVar2;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar1;
    if ((uVar1 & 1) == 0) {
      __dest = (void *)((long)in_x8 + 1);
    }
  }
  if (__n_00 != 0) {
    memcpy(__dest,this,__n_00);
  }
  if (__n != 0) {
    __src = *(char **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      __src = param_1 + 1;
    }
    memmove((void *)((long)__dest + __n_00),__src,__n);
  }
  *(undefined1 *)((long)((long)__dest + __n_00) + __n) = 0;
  return;
}


// ===== 001706b8  std::__ndk1::__basic_string_common<true>::__throw_length_error =====

/* std::__ndk1::__basic_string_common<true>::__throw_length_error() const */

void std::__ndk1::__basic_string_common<true>::__throw_length_error(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0016b740("basic_string");
}


// ===== 001706d0  std::__ndk1::__basic_string_common<true>::__throw_out_of_range =====

/* std::__ndk1::__basic_string_common<true>::__throw_out_of_range() const */

void std::__ndk1::__basic_string_common<true>::__throw_out_of_range(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001706e8("basic_string");
}


// ===== 001706e8  FUN_001706e8 =====

void FUN_001706e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00170708 to 0017070f has its CatchHandler @ 00170728 */
  FUN_00173d38(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_001a12a0,PTR__domain_error_001a12a8);
}


// ===== 0017073c  std::__ndk1::stoi =====

/* std::__ndk1::stoi(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

ulong std::__ndk1::stoi(basic_string *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  undefined4 local_4f;
  undefined1 local_4b;
  undefined1 local_38;
  undefined4 local_37;
  char local_33 [6];
  char acStack_2d [2];
  undefined3 uStack_2b;
  undefined3 local_28;
  undefined5 uStack_25;
  
  local_50 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_4f = 0x696f7473;
  local_4b = 0;
                    /* try { // try from 00170774 to 0017077b has its CatchHandler @ 001707fc */
  uVar1 = FUN_00173d70(&local_50,param_1,param_2,param_3);
  if (uVar1 == (long)(int)uVar1) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_50);
    return uVar1 & 0xffffffff;
  }
  local_38 = 0x24;
  uStack_25 = 0;
  local_37 = local_4f;
  local_33[0] = s___out_of_range_00128402[0];
  local_33[1] = s___out_of_range_00128402[1];
  local_33[2] = s___out_of_range_00128402[2];
  local_33[3] = s___out_of_range_00128402[3];
  local_33[4] = s___out_of_range_00128402[4];
  local_33[5] = s___out_of_range_00128402[5];
  acStack_2d[0] = s___out_of_range_00128402[6];
  acStack_2d[1] = s___out_of_range_00128402[7];
  uStack_2b = (undefined3)s___out_of_range_00128402._8_6_;
  local_28 = SUB63(s___out_of_range_00128402._8_6_,3);
                    /* try { // try from 001707d8 to 001707df has its CatchHandler @ 001707e0 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_38 | 1);
}


// ===== 00170810  std::__ndk1::stol =====

/* std::__ndk1::stol(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

undefined8 std::__ndk1::stol(basic_string *param_1,ulong *param_2,int param_3)

{
  undefined8 uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_38;
  undefined4 local_37;
  undefined1 local_33;
  
  local_38 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_37 = 0x6c6f7473;
  local_33 = 0;
                    /* try { // try from 00170848 to 0017084f has its CatchHandler @ 00170874 */
  uVar1 = FUN_00173d70(&local_38,param_1,param_2,param_3);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
            (&local_38);
  return uVar1;
}


// ===== 00170888  std::__ndk1::stoul =====

/* std::__ndk1::stoul(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

ulong std::__ndk1::stoul(basic_string *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  basic_string *__nptr;
  undefined4 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78;
  undefined4 local_77;
  undefined2 local_73;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined1 local_53;
  undefined6 local_52;
  char cStack_4c;
  char cStack_4b;
  undefined2 uStack_4a;
  undefined4 local_48;
  uint uStack_44;
  
  __nptr = *(basic_string **)(param_1 + 0x10);
  local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
  local_77 = 0x756f7473;
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  local_73 = 0x6c;
  puVar6 = (undefined4 *)((ulong)&local_78 | 1);
  local_60 = (char *)0x0;
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  uVar4 = strtoul((char *)__nptr,&local_60,param_3);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_60 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_60 - (long)__nptr;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_78);
      return uVar4;
    }
    local_57 = *puVar6;
    local_53 = *(undefined1 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
    local_52 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4c = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_4b = s___no_conversion_00125a25[7];
    uStack_4a = (undefined2)s___no_conversion_00125a25._8_7_;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,2);
    uStack_44 = (uint)SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 001709cc to 001709d3 has its CatchHandler @ 001709d4 */
    uVar5 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 001709cc with catch @ 001709d4 */
                    /* catch() { ... } // from try @ 0017098c with catch @ 001709d8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_78);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined1 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
  uStack_44 = 0;
  local_52._0_1_ = s___out_of_range_00128402[0];
  local_52._1_1_ = s___out_of_range_00128402[1];
  local_52._2_1_ = s___out_of_range_00128402[2];
  local_52._3_1_ = s___out_of_range_00128402[3];
  local_52._4_1_ = s___out_of_range_00128402[4];
  local_52._5_1_ = s___out_of_range_00128402[5];
  cStack_4c = (char)s___out_of_range_00128402._6_2_;
  cStack_4b = SUB21(s___out_of_range_00128402._6_2_,1);
  uStack_4a = (undefined2)s___out_of_range_00128402._8_6_;
  local_48 = SUB64(s___out_of_range_00128402._8_6_,2);
                    /* try { // try from 0017098c to 00170993 has its CatchHandler @ 001709d8 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 001709f4  std::__ndk1::stoll =====

/* std::__ndk1::stoll(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

longlong std::__ndk1::stoll(basic_string *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  basic_string *__nptr;
  undefined4 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78;
  undefined4 local_77;
  undefined2 local_73;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined1 local_53;
  undefined6 local_52;
  char cStack_4c;
  char cStack_4b;
  undefined2 uStack_4a;
  undefined4 local_48;
  uint uStack_44;
  
  __nptr = *(basic_string **)(param_1 + 0x10);
  local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
  local_77 = 0x6c6f7473;
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  local_73 = 0x6c;
  puVar6 = (undefined4 *)((ulong)&local_78 | 1);
  local_60 = (char *)0x0;
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  lVar4 = strtoll((char *)__nptr,&local_60,param_3);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_60 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_60 - (long)__nptr;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_78);
      return lVar4;
    }
    local_57 = *puVar6;
    local_53 = *(undefined1 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
    local_52 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4c = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_4b = s___no_conversion_00125a25[7];
    uStack_4a = (undefined2)s___no_conversion_00125a25._8_7_;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,2);
    uStack_44 = (uint)SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 00170b38 to 00170b3f has its CatchHandler @ 00170b40 */
    uVar5 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 00170b38 with catch @ 00170b40 */
                    /* catch() { ... } // from try @ 00170af8 with catch @ 00170b44 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_78);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined1 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
  uStack_44 = 0;
  local_52._0_1_ = s___out_of_range_00128402[0];
  local_52._1_1_ = s___out_of_range_00128402[1];
  local_52._2_1_ = s___out_of_range_00128402[2];
  local_52._3_1_ = s___out_of_range_00128402[3];
  local_52._4_1_ = s___out_of_range_00128402[4];
  local_52._5_1_ = s___out_of_range_00128402[5];
  cStack_4c = (char)s___out_of_range_00128402._6_2_;
  cStack_4b = SUB21(s___out_of_range_00128402._6_2_,1);
  uStack_4a = (undefined2)s___out_of_range_00128402._8_6_;
  local_48 = SUB64(s___out_of_range_00128402._8_6_,2);
                    /* try { // try from 00170af8 to 00170aff has its CatchHandler @ 00170b44 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00170b60  std::__ndk1::stoull =====

/* std::__ndk1::stoull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*, int) */

ulonglong std::__ndk1::stoull(basic_string *param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  basic_string *__nptr;
  undefined4 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78;
  undefined4 local_77;
  undefined2 local_73;
  undefined1 local_71;
  char *local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined6 local_51;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined5 local_48;
  char cStack_43;
  undefined2 uStack_42;
  
  local_78 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc;
  local_77 = 0x756f7473;
  local_73 = 0x6c6c;
  __nptr = *(basic_string **)(param_1 + 0x10);
  local_71 = 0;
  puVar6 = (undefined4 *)((ulong)&local_78 | 1);
  local_60 = (char *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  uVar4 = strtoull((char *)__nptr,&local_60,param_3);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_60 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_60 - (long)__nptr;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_78);
      return uVar4;
    }
    local_57 = *puVar6;
    local_53 = *(undefined2 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2a;
    uStack_42 = 0;
    local_51 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4b = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_4a = s___no_conversion_00125a25[7];
    cStack_49 = (char)s___no_conversion_00125a25._8_7_;
    local_48 = SUB75(s___no_conversion_00125a25._8_7_,1);
    cStack_43 = SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 00170ca8 to 00170caf has its CatchHandler @ 00170cb0 */
    uVar5 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 00170ca8 with catch @ 00170cb0 */
                    /* catch() { ... } // from try @ 00170c68 with catch @ 00170cb4 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_78);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined2 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
  cStack_43 = 0;
  uStack_42 = 0;
  local_51._0_1_ = s___out_of_range_00128402[0];
  local_51._1_1_ = s___out_of_range_00128402[1];
  local_51._2_1_ = s___out_of_range_00128402[2];
  local_51._3_1_ = s___out_of_range_00128402[3];
  local_51._4_1_ = s___out_of_range_00128402[4];
  local_51._5_1_ = s___out_of_range_00128402[5];
  cStack_4b = (char)s___out_of_range_00128402._6_2_;
  cStack_4a = SUB21(s___out_of_range_00128402._6_2_,1);
  cStack_49 = (char)s___out_of_range_00128402._8_6_;
  local_48 = SUB65(s___out_of_range_00128402._8_6_,1);
                    /* try { // try from 00170c68 to 00170c6f has its CatchHandler @ 00170cb4 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00170cd0  std::__ndk1::stof =====

/* std::__ndk1::stof(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

float std::__ndk1::stof(basic_string *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  basic_string *__nptr;
  float fVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined1 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined6 local_53;
  char cStack_4d;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  char *local_38;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_6b = 0;
  local_6f = 0x666f7473;
  __nptr = *(basic_string **)(param_1 + 0x10);
  local_38 = (char *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  fVar5 = strtof((char *)__nptr,&local_38);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_38 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_38 - (long)__nptr;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      return fVar5;
    }
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
    uStack_44 = 0;
    local_57 = local_6f;
    local_53 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4d = SUB71(s___no_conversion_00125a25._0_7_,6);
    uStack_4c = (undefined4)CONCAT71(s___no_conversion_00125a25._8_7_,s___no_conversion_00125a25[7])
    ;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,3);
                    /* try { // try from 00170df0 to 00170df7 has its CatchHandler @ 00170df8 */
    uVar4 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 00170df0 with catch @ 00170df8 */
                    /* catch() { ... } // from try @ 00170db8 with catch @ 00170dfc */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar4);
  }
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_44 = 0;
  local_57 = local_6f;
  local_53._0_1_ = s___out_of_range_00128402[0];
  local_53._1_1_ = s___out_of_range_00128402[1];
  local_53._2_1_ = s___out_of_range_00128402[2];
  local_53._3_1_ = s___out_of_range_00128402[3];
  local_53._4_1_ = s___out_of_range_00128402[4];
  local_53._5_1_ = s___out_of_range_00128402[5];
  cStack_4d = (char)s___out_of_range_00128402._6_2_;
  uStack_4c = (undefined4)
              (CONCAT62(s___out_of_range_00128402._8_6_,s___out_of_range_00128402._6_2_) >> 8);
  local_48 = (uint)SUB63(s___out_of_range_00128402._8_6_,3);
                    /* try { // try from 00170db8 to 00170dbf has its CatchHandler @ 00170dfc */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00170e18  std::__ndk1::stod =====

/* std::__ndk1::stod(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stod(basic_string *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  basic_string *__nptr;
  undefined1 auVar5 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined1 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined6 local_53;
  char cStack_4d;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  char *local_38;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_6b = 0;
  local_6f = 0x646f7473;
  __nptr = *(basic_string **)(param_1 + 0x10);
  local_38 = (char *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
  auVar5._0_8_ = strtod((char *)__nptr,&local_38);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_38 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_38 - (long)__nptr;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      auVar5._8_8_ = 0;
      return auVar5;
    }
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
    uStack_44 = 0;
    local_57 = local_6f;
    local_53 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4d = SUB71(s___no_conversion_00125a25._0_7_,6);
    uStack_4c = (undefined4)CONCAT71(s___no_conversion_00125a25._8_7_,s___no_conversion_00125a25[7])
    ;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,3);
                    /* try { // try from 00170f38 to 00170f3f has its CatchHandler @ 00170f40 */
    uVar4 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 00170f38 with catch @ 00170f40 */
                    /* catch() { ... } // from try @ 00170f00 with catch @ 00170f44 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar4);
  }
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_44 = 0;
  local_57 = local_6f;
  local_53._0_1_ = s___out_of_range_00128402[0];
  local_53._1_1_ = s___out_of_range_00128402[1];
  local_53._2_1_ = s___out_of_range_00128402[2];
  local_53._3_1_ = s___out_of_range_00128402[3];
  local_53._4_1_ = s___out_of_range_00128402[4];
  local_53._5_1_ = s___out_of_range_00128402[5];
  cStack_4d = (char)s___out_of_range_00128402._6_2_;
  uStack_4c = (undefined4)
              (CONCAT62(s___out_of_range_00128402._8_6_,s___out_of_range_00128402._6_2_) >> 8);
  local_48 = (uint)SUB63(s___out_of_range_00128402._8_6_,3);
                    /* try { // try from 00170f00 to 00170f07 has its CatchHandler @ 00170f44 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00170f60  std::__ndk1::stold =====

/* std::__ndk1::stold(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stold(basic_string *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  undefined8 uVar5;
  basic_string *__nptr;
  undefined4 *puVar6;
  double dVar7;
  undefined8 extraout_var;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined1 local_53;
  undefined6 local_52;
  char cStack_4c;
  char cStack_4b;
  undefined2 uStack_4a;
  undefined4 local_48;
  uint uStack_44;
  char *local_28;
  
  __nptr = *(basic_string **)(param_1 + 0x10);
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
  local_28 = (char *)0x0;
  local_6f = 0x6c6f7473;
  if (((byte)*param_1 & 1) == 0) {
    __nptr = param_1 + 1;
  }
  local_6b = 100;
  puVar6 = (undefined4 *)((ulong)&local_70 | 1);
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
  uVar5 = extraout_var;
  dVar7 = strtold((char *)__nptr,&local_28);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_28 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_28 - (long)__nptr;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      auVar3._8_8_ = uVar5;
      auVar3._0_8_ = dVar7;
      return auVar3;
    }
    local_57 = *puVar6;
    local_53 = *(undefined1 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
    local_52 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4c = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_4b = s___no_conversion_00125a25[7];
    uStack_4a = (undefined2)s___no_conversion_00125a25._8_7_;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,2);
    uStack_44 = (uint)SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 0017109c to 001710a3 has its CatchHandler @ 001710a4 */
    uVar5 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 0017109c with catch @ 001710a4 */
                    /* catch() { ... } // from try @ 0017105c with catch @ 001710a8 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined1 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
  uStack_44 = 0;
  local_52._0_1_ = s___out_of_range_00128402[0];
  local_52._1_1_ = s___out_of_range_00128402[1];
  local_52._2_1_ = s___out_of_range_00128402[2];
  local_52._3_1_ = s___out_of_range_00128402[3];
  local_52._4_1_ = s___out_of_range_00128402[4];
  local_52._5_1_ = s___out_of_range_00128402[5];
  cStack_4c = (char)s___out_of_range_00128402._6_2_;
  cStack_4b = SUB21(s___out_of_range_00128402._6_2_,1);
  uStack_4a = (undefined2)s___out_of_range_00128402._8_6_;
  local_48 = SUB64(s___out_of_range_00128402._8_6_,2);
                    /* try { // try from 0017105c to 00171063 has its CatchHandler @ 001710a8 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 001710c4  std::__ndk1::stoi =====

/* std::__ndk1::stoi(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

ulong std::__ndk1::stoi(basic_string *param_1,ulong *param_2,int param_3)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50;
  undefined4 local_4f;
  undefined1 local_4b;
  undefined1 local_38;
  undefined4 local_37;
  char local_33 [6];
  char acStack_2d [2];
  undefined3 uStack_2b;
  undefined3 local_28;
  undefined5 uStack_25;
  
  local_50 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_4f = 0x696f7473;
  local_4b = 0;
                    /* try { // try from 001710fc to 00171103 has its CatchHandler @ 00171184 */
  uVar1 = FUN_00174040(&local_50,param_1,param_2,param_3);
  if (uVar1 == (long)(int)uVar1) {
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_50);
    return uVar1 & 0xffffffff;
  }
  local_38 = 0x24;
  uStack_25 = 0;
  local_37 = local_4f;
  local_33[0] = s___out_of_range_00128402[0];
  local_33[1] = s___out_of_range_00128402[1];
  local_33[2] = s___out_of_range_00128402[2];
  local_33[3] = s___out_of_range_00128402[3];
  local_33[4] = s___out_of_range_00128402[4];
  local_33[5] = s___out_of_range_00128402[5];
  acStack_2d[0] = s___out_of_range_00128402[6];
  acStack_2d[1] = s___out_of_range_00128402[7];
  uStack_2b = (undefined3)s___out_of_range_00128402._8_6_;
  local_28 = SUB63(s___out_of_range_00128402._8_6_,3);
                    /* try { // try from 00171160 to 00171167 has its CatchHandler @ 00171168 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_38 | 1);
}


// ===== 00171198  std::__ndk1::stol =====

/* std::__ndk1::stol(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

undefined8 std::__ndk1::stol(basic_string *param_1,ulong *param_2,int param_3)

{
  undefined8 uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_38;
  undefined4 local_37;
  undefined1 local_33;
  
  local_38 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_37 = 0x6c6f7473;
  local_33 = 0;
                    /* try { // try from 001711d0 to 001711d7 has its CatchHandler @ 001711fc */
  uVar1 = FUN_00174040(&local_38,param_1,param_2,param_3);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
            (&local_38);
  return uVar1;
}


// ===== 00171210  std::__ndk1::stoul =====

/* std::__ndk1::stoul(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

ulong std::__ndk1::stoul(basic_string *param_1,ulong *param_2,int param_3)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined1 local_53;
  undefined6 local_52;
  char cStack_4c;
  char cStack_4b;
  undefined2 uStack_4a;
  undefined4 local_48;
  uint uStack_44;
  wchar_t *local_28;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
  local_6f = 0x756f7473;
  local_6b = 0x6c;
  local_28 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
                    /* try { // try from 00171278 to 00171287 has its CatchHandler @ 00171384 */
  uVar4 = wcstoul((wchar_t *)__nptr,&local_28,param_3);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  puVar6 = (undefined4 *)((ulong)&local_70 | 1);
  if (iVar2 != 0x22) {
    if ((long)local_28 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_28 - (long)__nptr >> 2;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      return uVar4;
    }
    local_57 = *puVar6;
    local_53 = *(undefined1 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
    local_52 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4c = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_4b = s___no_conversion_00125a25[7];
    uStack_4a = (undefined2)s___no_conversion_00125a25._8_7_;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,2);
    uStack_44 = (uint)SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 0017135c to 00171363 has its CatchHandler @ 00171364 */
    uVar5 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 0017135c with catch @ 00171364 */
                    /* catch() { ... } // from try @ 0017131c with catch @ 00171368 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined1 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
  uStack_44 = 0;
  local_52._0_1_ = s___out_of_range_00128402[0];
  local_52._1_1_ = s___out_of_range_00128402[1];
  local_52._2_1_ = s___out_of_range_00128402[2];
  local_52._3_1_ = s___out_of_range_00128402[3];
  local_52._4_1_ = s___out_of_range_00128402[4];
  local_52._5_1_ = s___out_of_range_00128402[5];
  cStack_4c = (char)s___out_of_range_00128402._6_2_;
  cStack_4b = SUB21(s___out_of_range_00128402._6_2_,1);
  uStack_4a = (undefined2)s___out_of_range_00128402._8_6_;
  local_48 = SUB64(s___out_of_range_00128402._8_6_,2);
                    /* try { // try from 0017131c to 00171323 has its CatchHandler @ 00171368 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00171398  std::__ndk1::stoll =====

/* std::__ndk1::stoll(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

longlong std::__ndk1::stoll(basic_string *param_1,ulong *param_2,int param_3)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined1 local_53;
  undefined6 local_52;
  char cStack_4c;
  char cStack_4b;
  undefined2 uStack_4a;
  undefined4 local_48;
  uint uStack_44;
  wchar_t *local_28;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
  local_6f = 0x6c6f7473;
  local_6b = 0x6c;
  local_28 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
                    /* try { // try from 00171400 to 0017140f has its CatchHandler @ 0017150c */
  lVar4 = wcstoll((wchar_t *)__nptr,&local_28,param_3);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  puVar6 = (undefined4 *)((ulong)&local_70 | 1);
  if (iVar2 != 0x22) {
    if ((long)local_28 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_28 - (long)__nptr >> 2;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      return lVar4;
    }
    local_57 = *puVar6;
    local_53 = *(undefined1 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
    local_52 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4c = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_4b = s___no_conversion_00125a25[7];
    uStack_4a = (undefined2)s___no_conversion_00125a25._8_7_;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,2);
    uStack_44 = (uint)SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 001714e4 to 001714eb has its CatchHandler @ 001714ec */
    uVar5 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 001714e4 with catch @ 001714ec */
                    /* catch() { ... } // from try @ 001714a4 with catch @ 001714f0 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined1 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
  uStack_44 = 0;
  local_52._0_1_ = s___out_of_range_00128402[0];
  local_52._1_1_ = s___out_of_range_00128402[1];
  local_52._2_1_ = s___out_of_range_00128402[2];
  local_52._3_1_ = s___out_of_range_00128402[3];
  local_52._4_1_ = s___out_of_range_00128402[4];
  local_52._5_1_ = s___out_of_range_00128402[5];
  cStack_4c = (char)s___out_of_range_00128402._6_2_;
  cStack_4b = SUB21(s___out_of_range_00128402._6_2_,1);
  uStack_4a = (undefined2)s___out_of_range_00128402._8_6_;
  local_48 = SUB64(s___out_of_range_00128402._8_6_,2);
                    /* try { // try from 001714a4 to 001714ab has its CatchHandler @ 001714f0 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00171520  std::__ndk1::stoull =====

/* std::__ndk1::stoull(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */

ulonglong std::__ndk1::stoull(basic_string *param_1,ulong *param_2,int param_3)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined6 local_51;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined5 local_48;
  char cStack_43;
  undefined2 uStack_42;
  wchar_t *local_28;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc;
  local_6f = 0x756f7473;
  local_6b = 0x6c6c;
  local_69 = 0;
  local_28 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
                    /* try { // try from 0017158c to 0017159b has its CatchHandler @ 00171698 */
  uVar4 = wcstoull((wchar_t *)__nptr,&local_28,param_3);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  puVar6 = (undefined4 *)((ulong)&local_70 | 1);
  if (iVar2 != 0x22) {
    if ((long)local_28 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_28 - (long)__nptr >> 2;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      return uVar4;
    }
    local_57 = *puVar6;
    local_53 = *(undefined2 *)(puVar6 + 1);
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2a;
    uStack_42 = 0;
    local_51 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4b = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_4a = s___no_conversion_00125a25[7];
    cStack_49 = (char)s___no_conversion_00125a25._8_7_;
    local_48 = SUB75(s___no_conversion_00125a25._8_7_,1);
    cStack_43 = SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 00171670 to 00171677 has its CatchHandler @ 00171678 */
    uVar5 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 00171670 with catch @ 00171678 */
                    /* catch() { ... } // from try @ 00171630 with catch @ 0017167c */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_57 = *puVar6;
  local_53 = *(undefined2 *)(puVar6 + 1);
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
  cStack_43 = 0;
  uStack_42 = 0;
  local_51._0_1_ = s___out_of_range_00128402[0];
  local_51._1_1_ = s___out_of_range_00128402[1];
  local_51._2_1_ = s___out_of_range_00128402[2];
  local_51._3_1_ = s___out_of_range_00128402[3];
  local_51._4_1_ = s___out_of_range_00128402[4];
  local_51._5_1_ = s___out_of_range_00128402[5];
  cStack_4b = (char)s___out_of_range_00128402._6_2_;
  cStack_4a = SUB21(s___out_of_range_00128402._6_2_,1);
  cStack_49 = (char)s___out_of_range_00128402._8_6_;
  local_48 = SUB65(s___out_of_range_00128402._8_6_,1);
                    /* try { // try from 00171630 to 00171637 has its CatchHandler @ 0017167c */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 001716ac  std::__ndk1::stof =====

/* std::__ndk1::stof(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */

float std::__ndk1::stof(basic_string *param_1,ulong *param_2)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  float fVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined1 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined6 local_53;
  char cStack_4d;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  wchar_t *local_38;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_6b = 0;
  local_6f = 0x666f7473;
  local_38 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
                    /* try { // try from 0017170c to 00171717 has its CatchHandler @ 001717fc */
  fVar5 = wcstof((wchar_t *)__nptr,&local_38);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_38 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_38 - (long)__nptr >> 2;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      return fVar5;
    }
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
    uStack_44 = 0;
    local_57 = local_6f;
    local_53 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4d = SUB71(s___no_conversion_00125a25._0_7_,6);
    uStack_4c = (undefined4)CONCAT71(s___no_conversion_00125a25._8_7_,s___no_conversion_00125a25[7])
    ;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,3);
                    /* try { // try from 001717d4 to 001717db has its CatchHandler @ 001717dc */
    uVar4 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 001717d4 with catch @ 001717dc */
                    /* catch() { ... } // from try @ 0017179c with catch @ 001717e0 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar4);
  }
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_44 = 0;
  local_57 = local_6f;
  local_53._0_1_ = s___out_of_range_00128402[0];
  local_53._1_1_ = s___out_of_range_00128402[1];
  local_53._2_1_ = s___out_of_range_00128402[2];
  local_53._3_1_ = s___out_of_range_00128402[3];
  local_53._4_1_ = s___out_of_range_00128402[4];
  local_53._5_1_ = s___out_of_range_00128402[5];
  cStack_4d = (char)s___out_of_range_00128402._6_2_;
  uStack_4c = (undefined4)
              (CONCAT62(s___out_of_range_00128402._8_6_,s___out_of_range_00128402._6_2_) >> 8);
  local_48 = (uint)SUB63(s___out_of_range_00128402._8_6_,3);
                    /* try { // try from 0017179c to 001717a3 has its CatchHandler @ 001717e0 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00171810  std::__ndk1::stod =====

/* std::__ndk1::stod(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stod(basic_string *param_1,ulong *param_2)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70;
  undefined4 local_6f;
  undefined1 local_6b;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined4 local_57;
  undefined6 local_53;
  char cStack_4d;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  wchar_t *local_38;
  
  local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8;
  local_6b = 0;
  local_6f = 0x646f7473;
  local_38 = (wchar_t *)0x0;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  *piVar3 = 0;
                    /* try { // try from 00171870 to 0017187b has its CatchHandler @ 00171960 */
  auVar5._0_8_ = wcstod((wchar_t *)__nptr,&local_38);
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  if (iVar2 != 0x22) {
    if ((long)local_38 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_38 - (long)__nptr >> 2;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_70);
      auVar5._8_8_ = 0;
      return auVar5;
    }
    local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
    uStack_44 = 0;
    local_57 = local_6f;
    local_53 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_4d = SUB71(s___no_conversion_00125a25._0_7_,6);
    uStack_4c = (undefined4)CONCAT71(s___no_conversion_00125a25._8_7_,s___no_conversion_00125a25[7])
    ;
    local_48 = SUB74(s___no_conversion_00125a25._8_7_,3);
                    /* try { // try from 00171938 to 0017193f has its CatchHandler @ 00171940 */
    uVar4 = FUN_00173fb4((ulong)&local_58 | 1);
                    /* catch() { ... } // from try @ 00171938 with catch @ 00171940 */
                    /* catch() { ... } // from try @ 00171900 with catch @ 00171944 */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_58);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_70);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar4);
  }
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x24;
  uStack_44 = 0;
  local_57 = local_6f;
  local_53._0_1_ = s___out_of_range_00128402[0];
  local_53._1_1_ = s___out_of_range_00128402[1];
  local_53._2_1_ = s___out_of_range_00128402[2];
  local_53._3_1_ = s___out_of_range_00128402[3];
  local_53._4_1_ = s___out_of_range_00128402[4];
  local_53._5_1_ = s___out_of_range_00128402[5];
  cStack_4d = (char)s___out_of_range_00128402._6_2_;
  uStack_4c = (undefined4)
              (CONCAT62(s___out_of_range_00128402._8_6_,s___out_of_range_00128402._6_2_) >> 8);
  local_48 = (uint)SUB63(s___out_of_range_00128402._8_6_,3);
                    /* try { // try from 00171900 to 00171907 has its CatchHandler @ 00171944 */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_58 | 1);
}


// ===== 00171974  std::__ndk1::stold =====

/* std::__ndk1::stold(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */

undefined1  [16] std::__ndk1::stold(basic_string *param_1,ulong *param_2)

{
  basic_string *__nptr;
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int *piVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined8 extraout_var;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68;
  undefined4 local_67;
  undefined2 local_63;
  wchar_t *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_48;
  undefined4 local_47;
  undefined1 local_43;
  undefined6 local_42;
  char cStack_3c;
  char cStack_3b;
  undefined2 uStack_3a;
  undefined4 local_38;
  uint uStack_34;
  
  local_68 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa;
  local_50 = (wchar_t *)0x0;
  local_67 = 0x6c6f7473;
  local_63 = 100;
  __nptr = param_1 + 4;
  if (((byte)*param_1 & 1) != 0) {
    __nptr = *(basic_string **)(param_1 + 0x10);
  }
  piVar4 = (int *)__errno();
  iVar1 = *piVar4;
  *piVar4 = 0;
                    /* try { // try from 001719d4 to 001719df has its CatchHandler @ 00171ad8 */
  uVar5 = extraout_var;
  dVar7 = wcstold((wchar_t *)__nptr,&local_50);
  iVar2 = *piVar4;
  *piVar4 = iVar1;
  puVar6 = (undefined4 *)((ulong)&local_68 | 1);
  if (iVar2 != 0x22) {
    if ((long)local_50 - (long)__nptr != 0) {
      if (param_2 != (ulong *)0x0) {
        *param_2 = (long)local_50 - (long)__nptr >> 2;
      }
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
                (&local_68);
      auVar3._8_8_ = uVar5;
      auVar3._0_8_ = dVar7;
      return auVar3;
    }
    local_47 = *puVar6;
    local_43 = *(undefined1 *)(puVar6 + 1);
    local_48 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x28;
    local_42 = (undefined6)s___no_conversion_00125a25._0_7_;
    cStack_3c = SUB71(s___no_conversion_00125a25._0_7_,6);
    cStack_3b = s___no_conversion_00125a25[7];
    uStack_3a = (undefined2)s___no_conversion_00125a25._8_7_;
    local_38 = SUB74(s___no_conversion_00125a25._8_7_,2);
    uStack_34 = (uint)SUB71(s___no_conversion_00125a25._8_7_,6);
                    /* try { // try from 00171ab0 to 00171ab7 has its CatchHandler @ 00171ab8 */
    uVar5 = FUN_00173fb4((ulong)&local_48 | 1);
                    /* catch() { ... } // from try @ 00171ab0 with catch @ 00171ab8 */
                    /* catch() { ... } // from try @ 00171a70 with catch @ 00171abc */
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_48);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::~basic_string
              (&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar5);
  }
  local_47 = *puVar6;
  local_43 = *(undefined1 *)(puVar6 + 1);
  local_48 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x26;
  uStack_34 = 0;
  local_42._0_1_ = s___out_of_range_00128402[0];
  local_42._1_1_ = s___out_of_range_00128402[1];
  local_42._2_1_ = s___out_of_range_00128402[2];
  local_42._3_1_ = s___out_of_range_00128402[3];
  local_42._4_1_ = s___out_of_range_00128402[4];
  local_42._5_1_ = s___out_of_range_00128402[5];
  cStack_3c = (char)s___out_of_range_00128402._6_2_;
  cStack_3b = SUB21(s___out_of_range_00128402._6_2_,1);
  uStack_3a = (undefined2)s___out_of_range_00128402._8_6_;
  local_38 = SUB64(s___out_of_range_00128402._8_6_,2);
                    /* try { // try from 00171a70 to 00171a77 has its CatchHandler @ 00171abc */
                    /* WARNING: Subroutine does not return */
  FUN_001706e8((ulong)&local_48 | 1);
}


// ===== 00171aec  std::__ndk1::to_string =====

/* std::__ndk1::to_string(int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long *in_x8;
  undefined1 *puVar4;
  ulong __n;
  undefined1 local_3c [11];
  undefined1 uStack_31;
  
  uVar2 = (uint)this;
  puVar4 = local_3c;
  puVar3 = &uStack_31;
  if ((int)uVar2 < 0) {
    puVar4 = (undefined1 *)((ulong)puVar4 | 1);
    uVar2 = -uVar2;
    local_3c[0] = 0x2d;
  }
  if ((9 < (long)puVar3 - (long)puVar4) ||
     (uVar1 = (uint)((0x20 - (int)LZCOUNT(uVar2 | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (uVar2 < *(uint *)(&DAT_0012ab9c + (ulong)uVar1 * 4))) + 1) <=
     (long)puVar3 - (long)puVar4)) {
    puVar3 = (undefined1 *)FUN_0017428c();
  }
  __n = (long)puVar3 - (long)local_3c;
  if (__n < 0xfffffffffffffff0) {
    if (__n < 0x17) {
      puVar4 = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
    }
    else {
      puVar4 = (undefined1 *)operator_new((__n | 0xf) + 1);
      in_x8[1] = __n;
      in_x8[2] = (long)puVar4;
      *in_x8 = (__n | 0xf) + 2;
    }
    if (local_3c != puVar3) {
      memcpy(puVar4,local_3c,__n);
      puVar4 = puVar4 + __n;
    }
    *puVar4 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728();
}


// ===== 00171c1c  std::__ndk1::to_string =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::to_string(long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long *in_x8;
  undefined1 *__dest;
  ulong __n;
  undefined1 local_44 [20];
  
  puVar5 = (undefined2 *)local_44;
  puVar4 = (undefined2 *)&stack0xffffffffffffffd0;
  if ((long)this < 0) {
    puVar5 = (undefined2 *)((ulong)puVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_44[0] = 0x2d;
  }
  if ((0x13 < (long)puVar4 - (long)puVar5) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (this < *(__ndk1 **)(&DAT_0012ac90 + (ulong)uVar1 * 8))) + 1) <=
     (long)puVar4 - (long)puVar5)) {
    if ((ulong)this >> 0x20 == 0) {
      puVar4 = (undefined2 *)FUN_0017428c(puVar5,(ulong)this & 0xffffffff);
    }
    else {
      if ((__ndk1 *)0x2540be3ff < this) {
        puVar5 = (undefined2 *)FUN_0017428c(puVar5,(ulong)this / 10000000000);
        this = (__ndk1 *)((ulong)this % 10000000000);
      }
      puVar4 = puVar5 + 5;
      uVar1 = (int)this + (int)((ulong)this / 100000000) * -100000000;
      uVar2 = uVar1 % 1000000;
      uVar3 = uVar2 % 10000;
      *puVar5 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)this / 100000000) * 2);
      puVar5[1] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + ((ulong)uVar1 / 1000000) * 2);
      puVar5[2] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + ((ulong)uVar2 / 10000) * 2);
      puVar5[3] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + (ulong)(uVar3 / 100) * 2);
      puVar5[4] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + (ulong)(uVar3 % 100) * 2);
    }
  }
  __n = (long)puVar4 - (long)local_44;
  if (__n < 0xfffffffffffffff0) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
    }
    else {
      __dest = (undefined1 *)operator_new((__n | 0xf) + 1);
      in_x8[1] = __n;
      in_x8[2] = (long)__dest;
      *in_x8 = (__n | 0xf) + 2;
    }
    if ((undefined2 *)local_44 != puVar4) {
      memcpy(__dest,local_44,__n);
      __dest = __dest + __n;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728();
}


// ===== 00171e40  std::__ndk1::to_string =====

/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::to_string(long long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  long *in_x8;
  undefined1 *__dest;
  ulong __n;
  undefined1 local_44 [20];
  
  puVar5 = (undefined2 *)local_44;
  puVar4 = (undefined2 *)&stack0xffffffffffffffd0;
  if ((long)this < 0) {
    puVar5 = (undefined2 *)((ulong)puVar5 | 1);
    this = (__ndk1 *)-(long)this;
    local_44[0] = 0x2d;
  }
  if ((0x13 < (long)puVar4 - (long)puVar5) ||
     (uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc,
     (long)(ulong)((uVar1 - (this < *(__ndk1 **)(&DAT_0012ac90 + (ulong)uVar1 * 8))) + 1) <=
     (long)puVar4 - (long)puVar5)) {
    if ((ulong)this >> 0x20 == 0) {
      puVar4 = (undefined2 *)FUN_0017428c(puVar5,(ulong)this & 0xffffffff);
    }
    else {
      if ((__ndk1 *)0x2540be3ff < this) {
        puVar5 = (undefined2 *)FUN_0017428c(puVar5,(ulong)this / 10000000000);
        this = (__ndk1 *)((ulong)this % 10000000000);
      }
      puVar4 = puVar5 + 5;
      uVar1 = (int)this + (int)((ulong)this / 100000000) * -100000000;
      uVar2 = uVar1 % 1000000;
      uVar3 = uVar2 % 10000;
      *puVar5 = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)this / 100000000) * 2);
      puVar5[1] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + ((ulong)uVar1 / 1000000) * 2);
      puVar5[2] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + ((ulong)uVar2 / 10000) * 2);
      puVar5[3] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + (ulong)(uVar3 / 100) * 2);
      puVar5[4] = *(undefined2 *)
                   (
                   "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   + (ulong)(uVar3 % 100) * 2);
    }
  }
  __n = (long)puVar4 - (long)local_44;
  if (__n < 0xfffffffffffffff0) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
    }
    else {
      __dest = (undefined1 *)operator_new((__n | 0xf) + 1);
      in_x8[1] = __n;
      in_x8[2] = (long)__dest;
      *in_x8 = (__n | 0xf) + 2;
    }
    if ((undefined2 *)local_44 != puVar4) {
      memcpy(__dest,local_44,__n);
      __dest = __dest + __n;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728();
}


// ===== 00172064  std::__ndk1::to_string =====

/* std::__ndk1::to_string(unsigned int) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,uint param_1)

{
  undefined1 *puVar1;
  long *in_x8;
  undefined1 *__dest;
  ulong __n;
  undefined1 auStack_3b [11];
  
  puVar1 = (undefined1 *)FUN_0017428c(auStack_3b,(ulong)this & 0xffffffff);
  __n = (long)puVar1 - (long)auStack_3b;
  if (__n < 0xfffffffffffffff0) {
    if (__n < 0x17) {
      __dest = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
    }
    else {
      __dest = (undefined1 *)operator_new((__n | 0xf) + 1);
      in_x8[1] = __n;
      in_x8[2] = (long)__dest;
      *in_x8 = (__n | 0xf) + 2;
    }
    if (auStack_3b != puVar1) {
      memcpy(__dest,auStack_3b,__n);
      __dest = __dest + __n;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728();
}


// ===== 00172120  std::__ndk1::to_string =====

/* std::__ndk1::to_string(unsigned long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,ulong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  long *in_x8;
  undefined1 *__dest;
  ulong uVar5;
  undefined2 local_45 [5];
  undefined2 auStack_3b [5];
  
  if ((ulong)this >> 0x20 == 0) {
    puVar3 = (undefined2 *)FUN_0017428c(local_45,(ulong)this & 0xffffffff);
  }
  else {
    if (this < (__ndk1 *)0x2540be400) {
      puVar4 = local_45;
      puVar3 = auStack_3b;
    }
    else {
      puVar4 = (undefined2 *)FUN_0017428c(local_45,(ulong)this / 10000000000);
      puVar3 = puVar4 + 5;
      this = (__ndk1 *)((ulong)this % 10000000000);
    }
    uVar5 = (ulong)this % 100000000;
    uVar1 = (int)uVar5 + (int)(uVar5 / 1000000) * -1000000;
    uVar2 = uVar1 % 10000;
    *puVar4 = *(undefined2 *)
               (
               "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
               + ((ulong)this / 100000000) * 2);
    puVar4[1] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + (uVar5 / 1000000) * 2);
    puVar4[2] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)uVar1 / 10000) * 2);
    puVar4[3] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + (ulong)(uVar2 / 100) * 2);
    puVar4[4] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + (ulong)(uVar2 % 100) * 2);
  }
  uVar5 = (long)puVar3 - (long)local_45;
  if (uVar5 < 0xfffffffffffffff0) {
    if (uVar5 < 0x17) {
      __dest = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar5 << 1);
    }
    else {
      __dest = (undefined1 *)operator_new((uVar5 | 0xf) + 1);
      in_x8[1] = uVar5;
      in_x8[2] = (long)__dest;
      *in_x8 = (uVar5 | 0xf) + 2;
    }
    if (local_45 != puVar3) {
      memcpy(__dest,local_45,uVar5);
      __dest = __dest + uVar5;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728();
}


// ===== 001722e4  std::__ndk1::to_string =====

/* std::__ndk1::to_string(unsigned long long) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  long *in_x8;
  undefined1 *__dest;
  ulong uVar5;
  undefined2 local_45 [5];
  undefined2 auStack_3b [5];
  
  if ((ulong)this >> 0x20 == 0) {
    puVar3 = (undefined2 *)FUN_0017428c(local_45,(ulong)this & 0xffffffff);
  }
  else {
    if (this < (__ndk1 *)0x2540be400) {
      puVar4 = local_45;
      puVar3 = auStack_3b;
    }
    else {
      puVar4 = (undefined2 *)FUN_0017428c(local_45,(ulong)this / 10000000000);
      puVar3 = puVar4 + 5;
      this = (__ndk1 *)((ulong)this % 10000000000);
    }
    uVar5 = (ulong)this % 100000000;
    uVar1 = (int)uVar5 + (int)(uVar5 / 1000000) * -1000000;
    uVar2 = uVar1 % 10000;
    *puVar4 = *(undefined2 *)
               (
               "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
               + ((ulong)this / 100000000) * 2);
    puVar4[1] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + (uVar5 / 1000000) * 2);
    puVar4[2] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + ((ulong)uVar1 / 10000) * 2);
    puVar4[3] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + (ulong)(uVar2 / 100) * 2);
    puVar4[4] = *(undefined2 *)
                 (
                 "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                 + (ulong)(uVar2 % 100) * 2);
  }
  uVar5 = (long)puVar3 - (long)local_45;
  if (uVar5 < 0xfffffffffffffff0) {
    if (uVar5 < 0x17) {
      __dest = (undefined1 *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)uVar5 << 1);
    }
    else {
      __dest = (undefined1 *)operator_new((uVar5 | 0xf) + 1);
      in_x8[1] = uVar5;
      in_x8[2] = (long)__dest;
      *in_x8 = (uVar5 | 0xf) + 2;
    }
    if (local_45 != puVar3) {
      memcpy(__dest,local_45,uVar5);
      __dest = __dest + uVar5;
    }
    *__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0016b728();
}


// ===== 001724a8  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,int param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte *pbVar6;
  uint uVar7;
  ulong *in_x8;
  long lVar8;
  byte *pbVar9;
  uint *puVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte local_3c [11];
  byte bStack_31;
  byte *pbVar10;
  
  uVar7 = (uint)this;
  pbVar6 = &bStack_31;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
    local_3c[0] = 0x2d;
    lVar8 = (long)pbVar6 - ((ulong)local_3c | 1);
    if (lVar8 < 10) goto LAB_00172500;
LAB_00172540:
    pbVar6 = (byte *)FUN_0017428c();
  }
  else {
    lVar8 = (long)pbVar6 - (long)local_3c;
    if (9 < lVar8) goto LAB_00172540;
LAB_00172500:
    uVar1 = (uint)((0x20 - (int)LZCOUNT(uVar7 | 1)) * 0x4d1) >> 0xc;
    if ((long)(ulong)((uVar1 - (uVar7 < *(uint *)(&DAT_0012ab9c + (ulong)uVar1 * 4))) + 1) <= lVar8)
    goto LAB_00172540;
  }
  uVar16 = (long)pbVar6 - (long)local_3c;
  if (0x3fffffffffffffef < uVar16) {
    FUN_0016e348();
LAB_00172684:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (uVar16 < 5) {
    puVar15 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar16 << 1);
    auVar2 = _DAT_00129520;
    auVar3 = _DAT_001297f0;
    auVar4 = _DAT_00129940;
    auVar5 = _DAT_00129a60;
  }
  else {
    if (0x3ffffffffffffffe < (uVar16 | 3)) goto LAB_00172684;
    uVar14 = (uVar16 | 3) + 1;
    puVar15 = (uint *)operator_new(uVar14 * 4);
    in_x8[1] = uVar16;
    in_x8[2] = (ulong)puVar15;
    *in_x8 = uVar14 | 1;
    auVar2 = _DAT_00129520;
    auVar3 = _DAT_001297f0;
    auVar4 = _DAT_00129940;
    auVar5 = _DAT_00129a60;
  }
  _DAT_00129520 = auVar2;
  _DAT_001297f0 = auVar3;
  _DAT_00129940 = auVar4;
  _DAT_00129a60 = auVar5;
  if (local_3c != pbVar6) {
    pbVar10 = local_3c;
    uVar16 = (long)pbVar6 - (long)pbVar10;
    if (0x1f < uVar16) {
      uVar12 = uVar16 & 0xffffffffffffffe0;
      puVar11 = puVar15 + uVar12;
      pbVar10 = local_3c + uVar12;
      pauVar13 = (undefined1 (*) [16])&stack0xffffffffffffffd4;
      puVar15 = puVar15 + 0x10;
      uVar14 = uVar12;
      do {
        auVar17 = pauVar13[-1];
        auVar20 = *pauVar13;
        uVar14 = uVar14 - 0x20;
        pauVar13 = pauVar13 + 2;
        auVar18 = a64_TBL(ZEXT816(0),auVar17,auVar2);
        auVar19 = a64_TBL(ZEXT816(0),auVar17,auVar4);
        auVar21 = a64_TBL(ZEXT816(0),auVar17,auVar5);
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        auVar22 = a64_TBL(ZEXT816(0),auVar20,auVar2);
        *(long *)(puVar15 + -6) = auVar19._8_8_;
        *(long *)(puVar15 + -8) = auVar19._0_8_;
        *(long *)(puVar15 + -2) = auVar18._8_8_;
        *(long *)(puVar15 + -4) = auVar18._0_8_;
        auVar18 = a64_TBL(ZEXT816(0),auVar20,auVar4);
        auVar19 = a64_TBL(ZEXT816(0),auVar20,auVar5);
        auVar20 = a64_TBL(ZEXT816(0),auVar20,auVar3);
        *(long *)(puVar15 + -0xe) = auVar17._8_8_;
        *(long *)(puVar15 + -0x10) = auVar17._0_8_;
        *(long *)(puVar15 + -10) = auVar21._8_8_;
        *(long *)(puVar15 + -0xc) = auVar21._0_8_;
        *(long *)(puVar15 + 10) = auVar18._8_8_;
        *(long *)(puVar15 + 8) = auVar18._0_8_;
        *(long *)(puVar15 + 0xe) = auVar22._8_8_;
        *(long *)(puVar15 + 0xc) = auVar22._0_8_;
        *(long *)(puVar15 + 2) = auVar20._8_8_;
        *(long *)puVar15 = auVar20._0_8_;
        *(long *)(puVar15 + 6) = auVar19._8_8_;
        *(long *)(puVar15 + 4) = auVar19._0_8_;
        puVar15 = puVar15 + 0x20;
      } while (uVar14 != 0);
      puVar15 = puVar11;
      if (uVar16 == uVar12) goto LAB_00172660;
    }
    do {
      pbVar9 = pbVar10 + 1;
      puVar11 = puVar15 + 1;
      *puVar15 = (uint)*pbVar10;
      pbVar10 = pbVar9;
      puVar15 = puVar11;
    } while (pbVar9 != pbVar6);
  }
LAB_00172660:
  *puVar15 = 0;
  return;
}


// ===== 00172688  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte *pbVar8;
  byte *pbVar9;
  ulong *in_x8;
  long lVar10;
  byte *pbVar11;
  uint *puVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  byte local_44 [16];
  undefined1 auStack_34 [4];
  
  pbVar9 = local_44;
  pbVar8 = &stack0xffffffffffffffd0;
  if ((long)this < 0) {
    pbVar9 = (byte *)((ulong)pbVar9 | 1);
    this = (__ndk1 *)-(long)this;
    local_44[0] = 0x2d;
    lVar10 = (long)pbVar8 - (long)pbVar9;
    if (lVar10 < 0x14) goto LAB_001726e0;
LAB_00172720:
    if ((ulong)this >> 0x20 == 0) {
      pbVar8 = (byte *)FUN_0017428c(pbVar9,(ulong)this & 0xffffffff);
    }
    else {
      if ((__ndk1 *)0x2540be3ff < this) {
        pbVar9 = (byte *)FUN_0017428c(pbVar9,(ulong)this / 10000000000);
        this = (__ndk1 *)((ulong)this % 10000000000);
      }
      pbVar8 = pbVar9 + 10;
      uVar1 = (int)this + (int)((ulong)this / 100000000) * -100000000;
      uVar2 = uVar1 % 1000000;
      uVar3 = uVar2 % 10000;
      *(undefined2 *)pbVar9 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)this / 100000000) * 2);
      *(undefined2 *)(pbVar9 + 2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)uVar1 / 1000000) * 2);
      *(undefined2 *)(pbVar9 + 4) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)uVar2 / 10000) * 2);
      *(undefined2 *)(pbVar9 + 6) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar3 / 100) * 2);
      *(undefined2 *)(pbVar9 + 8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar3 % 100) * 2);
    }
  }
  else {
    lVar10 = (long)pbVar8 - (long)pbVar9;
    if (0x13 < lVar10) goto LAB_00172720;
LAB_001726e0:
    uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc;
    if ((long)(ulong)((uVar1 - (this < *(__ndk1 **)(&DAT_0012ac90 + (ulong)uVar1 * 8))) + 1) <=
        lVar10) goto LAB_00172720;
  }
  uVar17 = (long)pbVar8 - (long)local_44;
  if (0x3fffffffffffffef < uVar17) {
    FUN_0016e348();
LAB_00172958:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (uVar17 < 5) {
    puVar16 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar17 << 1);
    auVar4 = _DAT_00129520;
    auVar5 = _DAT_001297f0;
    auVar6 = _DAT_00129940;
    auVar7 = _DAT_00129a60;
  }
  else {
    if (0x3ffffffffffffffe < (uVar17 | 3)) goto LAB_00172958;
    uVar15 = (uVar17 | 3) + 1;
    puVar16 = (uint *)operator_new(uVar15 * 4);
    in_x8[1] = uVar17;
    in_x8[2] = (ulong)puVar16;
    *in_x8 = uVar15 | 1;
    auVar4 = _DAT_00129520;
    auVar5 = _DAT_001297f0;
    auVar6 = _DAT_00129940;
    auVar7 = _DAT_00129a60;
  }
  _DAT_00129520 = auVar4;
  _DAT_001297f0 = auVar5;
  _DAT_00129940 = auVar6;
  _DAT_00129a60 = auVar7;
  if (local_44 != pbVar8) {
    pbVar9 = local_44;
    uVar17 = (long)pbVar8 - (long)pbVar9;
    if (0x1f < uVar17) {
      uVar13 = uVar17 & 0xffffffffffffffe0;
      puVar12 = puVar16 + uVar13;
      pbVar9 = local_44 + uVar13;
      pauVar14 = (undefined1 (*) [16])auStack_34;
      puVar16 = puVar16 + 0x10;
      uVar15 = uVar13;
      do {
        auVar18 = pauVar14[-1];
        auVar21 = *pauVar14;
        uVar15 = uVar15 - 0x20;
        pauVar14 = pauVar14 + 2;
        auVar19 = a64_TBL(ZEXT816(0),auVar18,auVar4);
        auVar20 = a64_TBL(ZEXT816(0),auVar18,auVar6);
        auVar22 = a64_TBL(ZEXT816(0),auVar18,auVar7);
        auVar18 = a64_TBL(ZEXT816(0),auVar18,auVar5);
        auVar23 = a64_TBL(ZEXT816(0),auVar21,auVar4);
        *(long *)(puVar16 + -6) = auVar20._8_8_;
        *(long *)(puVar16 + -8) = auVar20._0_8_;
        *(long *)(puVar16 + -2) = auVar19._8_8_;
        *(long *)(puVar16 + -4) = auVar19._0_8_;
        auVar19 = a64_TBL(ZEXT816(0),auVar21,auVar6);
        auVar20 = a64_TBL(ZEXT816(0),auVar21,auVar7);
        auVar21 = a64_TBL(ZEXT816(0),auVar21,auVar5);
        *(long *)(puVar16 + -0xe) = auVar18._8_8_;
        *(long *)(puVar16 + -0x10) = auVar18._0_8_;
        *(long *)(puVar16 + -10) = auVar22._8_8_;
        *(long *)(puVar16 + -0xc) = auVar22._0_8_;
        *(long *)(puVar16 + 10) = auVar19._8_8_;
        *(long *)(puVar16 + 8) = auVar19._0_8_;
        *(long *)(puVar16 + 0xe) = auVar23._8_8_;
        *(long *)(puVar16 + 0xc) = auVar23._0_8_;
        *(long *)(puVar16 + 2) = auVar21._8_8_;
        *(long *)puVar16 = auVar21._0_8_;
        *(long *)(puVar16 + 6) = auVar20._8_8_;
        *(long *)(puVar16 + 4) = auVar20._0_8_;
        puVar16 = puVar16 + 0x20;
      } while (uVar15 != 0);
      puVar16 = puVar12;
      if (uVar17 == uVar13) goto LAB_00172934;
    }
    do {
      pbVar11 = pbVar9 + 1;
      puVar12 = puVar16 + 1;
      *puVar16 = (uint)*pbVar9;
      pbVar9 = pbVar11;
      puVar16 = puVar12;
    } while (pbVar11 != pbVar8);
  }
LAB_00172934:
  *puVar16 = 0;
  return;
}


// ===== 0017295c  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(long long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte *pbVar8;
  byte *pbVar9;
  ulong *in_x8;
  long lVar10;
  byte *pbVar11;
  uint *puVar12;
  ulong uVar13;
  undefined1 (*pauVar14) [16];
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  byte local_44 [16];
  undefined1 auStack_34 [4];
  
  pbVar9 = local_44;
  pbVar8 = &stack0xffffffffffffffd0;
  if ((long)this < 0) {
    pbVar9 = (byte *)((ulong)pbVar9 | 1);
    this = (__ndk1 *)-(long)this;
    local_44[0] = 0x2d;
    lVar10 = (long)pbVar8 - (long)pbVar9;
    if (lVar10 < 0x14) goto LAB_001729b4;
LAB_001729f4:
    if ((ulong)this >> 0x20 == 0) {
      pbVar8 = (byte *)FUN_0017428c(pbVar9,(ulong)this & 0xffffffff);
    }
    else {
      if ((__ndk1 *)0x2540be3ff < this) {
        pbVar9 = (byte *)FUN_0017428c(pbVar9,(ulong)this / 10000000000);
        this = (__ndk1 *)((ulong)this % 10000000000);
      }
      pbVar8 = pbVar9 + 10;
      uVar1 = (int)this + (int)((ulong)this / 100000000) * -100000000;
      uVar2 = uVar1 % 1000000;
      uVar3 = uVar2 % 10000;
      *(undefined2 *)pbVar9 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)this / 100000000) * 2);
      *(undefined2 *)(pbVar9 + 2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)uVar1 / 1000000) * 2);
      *(undefined2 *)(pbVar9 + 4) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)uVar2 / 10000) * 2);
      *(undefined2 *)(pbVar9 + 6) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar3 / 100) * 2);
      *(undefined2 *)(pbVar9 + 8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar3 % 100) * 2);
    }
  }
  else {
    lVar10 = (long)pbVar8 - (long)pbVar9;
    if (0x13 < lVar10) goto LAB_001729f4;
LAB_001729b4:
    uVar1 = (uint)((0x40 - (int)LZCOUNT((ulong)this | 1)) * 0x4d1) >> 0xc;
    if ((long)(ulong)((uVar1 - (this < *(__ndk1 **)(&DAT_0012ac90 + (ulong)uVar1 * 8))) + 1) <=
        lVar10) goto LAB_001729f4;
  }
  uVar17 = (long)pbVar8 - (long)local_44;
  if (0x3fffffffffffffef < uVar17) {
    FUN_0016e348();
LAB_00172c2c:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (uVar17 < 5) {
    puVar16 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar17 << 1);
    auVar4 = _DAT_00129520;
    auVar5 = _DAT_001297f0;
    auVar6 = _DAT_00129940;
    auVar7 = _DAT_00129a60;
  }
  else {
    if (0x3ffffffffffffffe < (uVar17 | 3)) goto LAB_00172c2c;
    uVar15 = (uVar17 | 3) + 1;
    puVar16 = (uint *)operator_new(uVar15 * 4);
    in_x8[1] = uVar17;
    in_x8[2] = (ulong)puVar16;
    *in_x8 = uVar15 | 1;
    auVar4 = _DAT_00129520;
    auVar5 = _DAT_001297f0;
    auVar6 = _DAT_00129940;
    auVar7 = _DAT_00129a60;
  }
  _DAT_00129520 = auVar4;
  _DAT_001297f0 = auVar5;
  _DAT_00129940 = auVar6;
  _DAT_00129a60 = auVar7;
  if (local_44 != pbVar8) {
    pbVar9 = local_44;
    uVar17 = (long)pbVar8 - (long)pbVar9;
    if (0x1f < uVar17) {
      uVar13 = uVar17 & 0xffffffffffffffe0;
      puVar12 = puVar16 + uVar13;
      pbVar9 = local_44 + uVar13;
      pauVar14 = (undefined1 (*) [16])auStack_34;
      puVar16 = puVar16 + 0x10;
      uVar15 = uVar13;
      do {
        auVar18 = pauVar14[-1];
        auVar21 = *pauVar14;
        uVar15 = uVar15 - 0x20;
        pauVar14 = pauVar14 + 2;
        auVar19 = a64_TBL(ZEXT816(0),auVar18,auVar4);
        auVar20 = a64_TBL(ZEXT816(0),auVar18,auVar6);
        auVar22 = a64_TBL(ZEXT816(0),auVar18,auVar7);
        auVar18 = a64_TBL(ZEXT816(0),auVar18,auVar5);
        auVar23 = a64_TBL(ZEXT816(0),auVar21,auVar4);
        *(long *)(puVar16 + -6) = auVar20._8_8_;
        *(long *)(puVar16 + -8) = auVar20._0_8_;
        *(long *)(puVar16 + -2) = auVar19._8_8_;
        *(long *)(puVar16 + -4) = auVar19._0_8_;
        auVar19 = a64_TBL(ZEXT816(0),auVar21,auVar6);
        auVar20 = a64_TBL(ZEXT816(0),auVar21,auVar7);
        auVar21 = a64_TBL(ZEXT816(0),auVar21,auVar5);
        *(long *)(puVar16 + -0xe) = auVar18._8_8_;
        *(long *)(puVar16 + -0x10) = auVar18._0_8_;
        *(long *)(puVar16 + -10) = auVar22._8_8_;
        *(long *)(puVar16 + -0xc) = auVar22._0_8_;
        *(long *)(puVar16 + 10) = auVar19._8_8_;
        *(long *)(puVar16 + 8) = auVar19._0_8_;
        *(long *)(puVar16 + 0xe) = auVar23._8_8_;
        *(long *)(puVar16 + 0xc) = auVar23._0_8_;
        *(long *)(puVar16 + 2) = auVar21._8_8_;
        *(long *)puVar16 = auVar21._0_8_;
        *(long *)(puVar16 + 6) = auVar20._8_8_;
        *(long *)(puVar16 + 4) = auVar20._0_8_;
        puVar16 = puVar16 + 0x20;
      } while (uVar15 != 0);
      puVar16 = puVar12;
      if (uVar17 == uVar13) goto LAB_00172c08;
    }
    do {
      pbVar11 = pbVar9 + 1;
      puVar12 = puVar16 + 1;
      *puVar16 = (uint)*pbVar9;
      pbVar9 = pbVar11;
      puVar16 = puVar12;
    } while (pbVar11 != pbVar8);
  }
LAB_00172c08:
  *puVar16 = 0;
  return;
}


// ===== 00172c30  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(unsigned int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte *pbVar5;
  ulong *in_x8;
  byte *pbVar6;
  uint *puVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte local_3b [11];
  byte *pbVar7;
  
  pbVar5 = (byte *)FUN_0017428c(local_3b,(ulong)this & 0xffffffff);
  uVar13 = (long)pbVar5 - (long)local_3b;
  if (0x3fffffffffffffef < uVar13) {
    FUN_0016e348();
LAB_00172d98:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (uVar13 < 5) {
    puVar12 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar13 << 1);
    auVar1 = _DAT_00129520;
    auVar2 = _DAT_001297f0;
    auVar3 = _DAT_00129940;
    auVar4 = _DAT_00129a60;
  }
  else {
    if (0x3ffffffffffffffe < (uVar13 | 3)) goto LAB_00172d98;
    uVar11 = (uVar13 | 3) + 1;
    puVar12 = (uint *)operator_new(uVar11 * 4);
    in_x8[1] = uVar13;
    in_x8[2] = (ulong)puVar12;
    *in_x8 = uVar11 | 1;
    auVar1 = _DAT_00129520;
    auVar2 = _DAT_001297f0;
    auVar3 = _DAT_00129940;
    auVar4 = _DAT_00129a60;
  }
  _DAT_00129520 = auVar1;
  _DAT_001297f0 = auVar2;
  _DAT_00129940 = auVar3;
  _DAT_00129a60 = auVar4;
  if (local_3b != pbVar5) {
    pbVar7 = local_3b;
    uVar13 = (long)pbVar5 - (long)pbVar7;
    if (0x1f < uVar13) {
      uVar9 = uVar13 & 0xffffffffffffffe0;
      puVar8 = puVar12 + uVar9;
      pbVar7 = local_3b + uVar9;
      pauVar10 = (undefined1 (*) [16])&stack0xffffffffffffffd5;
      puVar12 = puVar12 + 0x10;
      uVar11 = uVar9;
      do {
        auVar14 = pauVar10[-1];
        auVar17 = *pauVar10;
        uVar11 = uVar11 - 0x20;
        pauVar10 = pauVar10 + 2;
        auVar15 = a64_TBL(ZEXT816(0),auVar14,auVar1);
        auVar16 = a64_TBL(ZEXT816(0),auVar14,auVar3);
        auVar18 = a64_TBL(ZEXT816(0),auVar14,auVar4);
        auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar2);
        auVar19 = a64_TBL(ZEXT816(0),auVar17,auVar1);
        *(long *)(puVar12 + -6) = auVar16._8_8_;
        *(long *)(puVar12 + -8) = auVar16._0_8_;
        *(long *)(puVar12 + -2) = auVar15._8_8_;
        *(long *)(puVar12 + -4) = auVar15._0_8_;
        auVar15 = a64_TBL(ZEXT816(0),auVar17,auVar3);
        auVar16 = a64_TBL(ZEXT816(0),auVar17,auVar4);
        auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar2);
        *(long *)(puVar12 + -0xe) = auVar14._8_8_;
        *(long *)(puVar12 + -0x10) = auVar14._0_8_;
        *(long *)(puVar12 + -10) = auVar18._8_8_;
        *(long *)(puVar12 + -0xc) = auVar18._0_8_;
        *(long *)(puVar12 + 10) = auVar15._8_8_;
        *(long *)(puVar12 + 8) = auVar15._0_8_;
        *(long *)(puVar12 + 0xe) = auVar19._8_8_;
        *(long *)(puVar12 + 0xc) = auVar19._0_8_;
        *(long *)(puVar12 + 2) = auVar17._8_8_;
        *(long *)puVar12 = auVar17._0_8_;
        *(long *)(puVar12 + 6) = auVar16._8_8_;
        *(long *)(puVar12 + 4) = auVar16._0_8_;
        puVar12 = puVar12 + 0x20;
      } while (uVar11 != 0);
      puVar12 = puVar8;
      if (uVar13 == uVar9) goto LAB_00172d74;
    }
    do {
      pbVar6 = pbVar7 + 1;
      puVar8 = puVar12 + 1;
      *puVar12 = (uint)*pbVar7;
      pbVar7 = pbVar6;
      puVar12 = puVar8;
    } while (pbVar6 != pbVar5);
  }
LAB_00172d74:
  *puVar12 = 0;
  return;
}


// ===== 00172d9c  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(unsigned long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,ulong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte *pbVar7;
  byte *pbVar8;
  ulong *in_x8;
  byte *pbVar9;
  uint *puVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte local_45 [10];
  byte abStack_3b [6];
  undefined1 auStack_35 [5];
  
  if ((ulong)this >> 0x20 == 0) {
    pbVar7 = (byte *)FUN_0017428c(local_45,(ulong)this & 0xffffffff);
  }
  else {
    if (this < (__ndk1 *)0x2540be400) {
      pbVar8 = local_45;
      pbVar7 = abStack_3b;
    }
    else {
      pbVar8 = (byte *)FUN_0017428c(local_45,(ulong)this / 10000000000);
      pbVar7 = pbVar8 + 10;
      this = (__ndk1 *)((ulong)this % 10000000000);
    }
    uVar15 = (ulong)this % 100000000;
    uVar1 = (int)uVar15 + (int)(uVar15 / 1000000) * -1000000;
    uVar2 = uVar1 % 10000;
    *(undefined2 *)pbVar8 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)this / 100000000) * 2);
    *(undefined2 *)(pbVar8 + 2) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (uVar15 / 1000000) * 2);
    *(undefined2 *)(pbVar8 + 4) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)uVar1 / 10000) * 2);
    *(undefined2 *)(pbVar8 + 6) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)(uVar2 / 100) * 2);
    *(undefined2 *)(pbVar8 + 8) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)(uVar2 % 100) * 2);
  }
  uVar15 = (long)pbVar7 - (long)local_45;
  if (0x3fffffffffffffef < uVar15) {
    FUN_0016e348();
LAB_0017300c:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (uVar15 < 5) {
    puVar14 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar15 << 1);
    auVar3 = _DAT_00129520;
    auVar4 = _DAT_001297f0;
    auVar5 = _DAT_00129940;
    auVar6 = _DAT_00129a60;
  }
  else {
    if (0x3ffffffffffffffe < (uVar15 | 3)) goto LAB_0017300c;
    uVar13 = (uVar15 | 3) + 1;
    puVar14 = (uint *)operator_new(uVar13 * 4);
    in_x8[1] = uVar15;
    in_x8[2] = (ulong)puVar14;
    *in_x8 = uVar13 | 1;
    auVar3 = _DAT_00129520;
    auVar4 = _DAT_001297f0;
    auVar5 = _DAT_00129940;
    auVar6 = _DAT_00129a60;
  }
  _DAT_00129520 = auVar3;
  _DAT_001297f0 = auVar4;
  _DAT_00129940 = auVar5;
  _DAT_00129a60 = auVar6;
  if (local_45 != pbVar7) {
    pbVar8 = local_45;
    uVar15 = (long)pbVar7 - (long)pbVar8;
    if (0x1f < uVar15) {
      uVar11 = uVar15 & 0xffffffffffffffe0;
      puVar10 = puVar14 + uVar11;
      pbVar8 = local_45 + uVar11;
      pauVar12 = (undefined1 (*) [16])auStack_35;
      puVar14 = puVar14 + 0x10;
      uVar13 = uVar11;
      do {
        auVar16 = pauVar12[-1];
        auVar19 = *pauVar12;
        uVar13 = uVar13 - 0x20;
        pauVar12 = pauVar12 + 2;
        auVar17 = a64_TBL(ZEXT816(0),auVar16,auVar3);
        auVar18 = a64_TBL(ZEXT816(0),auVar16,auVar5);
        auVar20 = a64_TBL(ZEXT816(0),auVar16,auVar6);
        auVar16 = a64_TBL(ZEXT816(0),auVar16,auVar4);
        auVar21 = a64_TBL(ZEXT816(0),auVar19,auVar3);
        *(long *)(puVar14 + -6) = auVar18._8_8_;
        *(long *)(puVar14 + -8) = auVar18._0_8_;
        *(long *)(puVar14 + -2) = auVar17._8_8_;
        *(long *)(puVar14 + -4) = auVar17._0_8_;
        auVar17 = a64_TBL(ZEXT816(0),auVar19,auVar5);
        auVar18 = a64_TBL(ZEXT816(0),auVar19,auVar6);
        auVar19 = a64_TBL(ZEXT816(0),auVar19,auVar4);
        *(long *)(puVar14 + -0xe) = auVar16._8_8_;
        *(long *)(puVar14 + -0x10) = auVar16._0_8_;
        *(long *)(puVar14 + -10) = auVar20._8_8_;
        *(long *)(puVar14 + -0xc) = auVar20._0_8_;
        *(long *)(puVar14 + 10) = auVar17._8_8_;
        *(long *)(puVar14 + 8) = auVar17._0_8_;
        *(long *)(puVar14 + 0xe) = auVar21._8_8_;
        *(long *)(puVar14 + 0xc) = auVar21._0_8_;
        *(long *)(puVar14 + 2) = auVar19._8_8_;
        *(long *)puVar14 = auVar19._0_8_;
        *(long *)(puVar14 + 6) = auVar18._8_8_;
        *(long *)(puVar14 + 4) = auVar18._0_8_;
        puVar14 = puVar14 + 0x20;
      } while (uVar13 != 0);
      puVar14 = puVar10;
      if (uVar15 == uVar11) goto LAB_00172fe8;
    }
    do {
      pbVar9 = pbVar8 + 1;
      puVar10 = puVar14 + 1;
      *puVar14 = (uint)*pbVar8;
      pbVar8 = pbVar9;
      puVar14 = puVar10;
    } while (pbVar9 != pbVar7);
  }
LAB_00172fe8:
  *puVar14 = 0;
  return;
}


// ===== 00173010  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(unsigned long long) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,ulonglong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte *pbVar7;
  byte *pbVar8;
  ulong *in_x8;
  byte *pbVar9;
  uint *puVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte local_45 [10];
  byte abStack_3b [6];
  undefined1 auStack_35 [5];
  
  if ((ulong)this >> 0x20 == 0) {
    pbVar7 = (byte *)FUN_0017428c(local_45,(ulong)this & 0xffffffff);
  }
  else {
    if (this < (__ndk1 *)0x2540be400) {
      pbVar8 = local_45;
      pbVar7 = abStack_3b;
    }
    else {
      pbVar8 = (byte *)FUN_0017428c(local_45,(ulong)this / 10000000000);
      pbVar7 = pbVar8 + 10;
      this = (__ndk1 *)((ulong)this % 10000000000);
    }
    uVar15 = (ulong)this % 100000000;
    uVar1 = (int)uVar15 + (int)(uVar15 / 1000000) * -1000000;
    uVar2 = uVar1 % 10000;
    *(undefined2 *)pbVar8 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)this / 100000000) * 2);
    *(undefined2 *)(pbVar8 + 2) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (uVar15 / 1000000) * 2);
    *(undefined2 *)(pbVar8 + 4) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)uVar1 / 10000) * 2);
    *(undefined2 *)(pbVar8 + 6) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)(uVar2 / 100) * 2);
    *(undefined2 *)(pbVar8 + 8) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)(uVar2 % 100) * 2);
  }
  uVar15 = (long)pbVar7 - (long)local_45;
  if (0x3fffffffffffffef < uVar15) {
    FUN_0016e348();
LAB_00173280:
                    /* WARNING: Subroutine does not return */
    FUN_00141a00();
  }
  if (uVar15 < 5) {
    puVar14 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar15 << 1);
    auVar3 = _DAT_00129520;
    auVar4 = _DAT_001297f0;
    auVar5 = _DAT_00129940;
    auVar6 = _DAT_00129a60;
  }
  else {
    if (0x3ffffffffffffffe < (uVar15 | 3)) goto LAB_00173280;
    uVar13 = (uVar15 | 3) + 1;
    puVar14 = (uint *)operator_new(uVar13 * 4);
    in_x8[1] = uVar15;
    in_x8[2] = (ulong)puVar14;
    *in_x8 = uVar13 | 1;
    auVar3 = _DAT_00129520;
    auVar4 = _DAT_001297f0;
    auVar5 = _DAT_00129940;
    auVar6 = _DAT_00129a60;
  }
  _DAT_00129520 = auVar3;
  _DAT_001297f0 = auVar4;
  _DAT_00129940 = auVar5;
  _DAT_00129a60 = auVar6;
  if (local_45 != pbVar7) {
    pbVar8 = local_45;
    uVar15 = (long)pbVar7 - (long)pbVar8;
    if (0x1f < uVar15) {
      uVar11 = uVar15 & 0xffffffffffffffe0;
      puVar10 = puVar14 + uVar11;
      pbVar8 = local_45 + uVar11;
      pauVar12 = (undefined1 (*) [16])auStack_35;
      puVar14 = puVar14 + 0x10;
      uVar13 = uVar11;
      do {
        auVar16 = pauVar12[-1];
        auVar19 = *pauVar12;
        uVar13 = uVar13 - 0x20;
        pauVar12 = pauVar12 + 2;
        auVar17 = a64_TBL(ZEXT816(0),auVar16,auVar3);
        auVar18 = a64_TBL(ZEXT816(0),auVar16,auVar5);
        auVar20 = a64_TBL(ZEXT816(0),auVar16,auVar6);
        auVar16 = a64_TBL(ZEXT816(0),auVar16,auVar4);
        auVar21 = a64_TBL(ZEXT816(0),auVar19,auVar3);
        *(long *)(puVar14 + -6) = auVar18._8_8_;
        *(long *)(puVar14 + -8) = auVar18._0_8_;
        *(long *)(puVar14 + -2) = auVar17._8_8_;
        *(long *)(puVar14 + -4) = auVar17._0_8_;
        auVar17 = a64_TBL(ZEXT816(0),auVar19,auVar5);
        auVar18 = a64_TBL(ZEXT816(0),auVar19,auVar6);
        auVar19 = a64_TBL(ZEXT816(0),auVar19,auVar4);
        *(long *)(puVar14 + -0xe) = auVar16._8_8_;
        *(long *)(puVar14 + -0x10) = auVar16._0_8_;
        *(long *)(puVar14 + -10) = auVar20._8_8_;
        *(long *)(puVar14 + -0xc) = auVar20._0_8_;
        *(long *)(puVar14 + 10) = auVar17._8_8_;
        *(long *)(puVar14 + 8) = auVar17._0_8_;
        *(long *)(puVar14 + 0xe) = auVar21._8_8_;
        *(long *)(puVar14 + 0xc) = auVar21._0_8_;
        *(long *)(puVar14 + 2) = auVar19._8_8_;
        *(long *)puVar14 = auVar19._0_8_;
        *(long *)(puVar14 + 6) = auVar18._8_8_;
        *(long *)(puVar14 + 4) = auVar18._0_8_;
        puVar14 = puVar14 + 0x20;
      } while (uVar13 != 0);
      puVar14 = puVar10;
      if (uVar15 == uVar11) goto LAB_0017325c;
    }
    do {
      pbVar9 = pbVar8 + 1;
      puVar10 = puVar14 + 1;
      *puVar14 = (uint)*pbVar8;
      pbVar8 = pbVar9;
      puVar14 = puVar10;
    } while (pbVar9 != pbVar7);
  }
LAB_0017325c:
  *puVar14 = 0;
  return;
}


// ===== 00173284  std::__ndk1::to_string =====

/* std::__ndk1::to_string(float) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,float param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_58;
  ulong uStack_50;
  char *local_48;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (char *)0x0;
                    /* try { // try from 001732b4 to 001732c7 has its CatchHandler @ 00173418 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_58,0x16,'\0');
  pcVar4 = (char *)((ulong)&local_58 | 1);
  uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
  if ((local_58 & 1) != 0) {
    uVar5 = uStack_50;
  }
  do {
    pcVar3 = pcVar4;
    if (((byte)local_58._0_1_ & 1) != 0) {
      pcVar3 = local_48;
    }
    uVar1 = snprintf(pcVar3,uVar5 + 1,"%f",(double)param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
        if ((local_58 & 1) != 0) {
          uVar5 = uStack_50;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pcVar3 = local_48;
          uVar5 = uVar2;
          if ((local_58 & 1) == 0) {
            local_58 = CONCAT71(local_58._1_7_,(char)(uVar1 << 1));
            pcVar3 = pcVar4;
            uVar5 = uStack_50;
          }
          uStack_50 = uVar5;
          pcVar3[uVar2] = '\0';
        }
        else {
                    /* try { // try from 00173398 to 001733a3 has its CatchHandler @ 00173404 */
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_58,uVar2 - uVar5,'\0');
        }
        pcVar4 = local_48;
        uVar5 = uStack_50;
        uStack_50 = 0;
        local_48 = (char *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_58;
        in_x8[2] = (ulong)pcVar4;
        local_58 = 0;
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
        ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_58);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
    if ((local_58 & 1) != 0) {
      uVar5 = uStack_50;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pcVar3 = local_48;
      uVar5 = uVar2;
      if ((local_58 & 1) == 0) {
        local_58 = CONCAT71(local_58._1_7_,(char)((int)uVar2 << 1));
        pcVar3 = pcVar4;
        uVar5 = uStack_50;
      }
      uStack_50 = uVar5;
      pcVar3[uVar2] = '\0';
    }
    else {
                    /* try { // try from 001732f4 to 001732ff has its CatchHandler @ 0017342c */
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_58,uVar2 - uVar5,'\0');
    }
    uVar5 = uVar2;
  } while( true );
}


// ===== 00173440  std::__ndk1::to_string =====

/* std::__ndk1::to_string(double) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,double param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_58;
  ulong uStack_50;
  char *local_48;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (char *)0x0;
                    /* try { // try from 00173470 to 00173483 has its CatchHandler @ 001735d0 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_58,0x16,'\0');
  pcVar4 = (char *)((ulong)&local_58 | 1);
  uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
  if ((local_58 & 1) != 0) {
    uVar5 = uStack_50;
  }
  do {
    pcVar3 = pcVar4;
    if (((byte)local_58._0_1_ & 1) != 0) {
      pcVar3 = local_48;
    }
    uVar1 = snprintf(pcVar3,uVar5 + 1,"%f",param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
        if ((local_58 & 1) != 0) {
          uVar5 = uStack_50;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pcVar3 = local_48;
          uVar5 = uVar2;
          if ((local_58 & 1) == 0) {
            local_58 = CONCAT71(local_58._1_7_,(char)(uVar1 << 1));
            pcVar3 = pcVar4;
            uVar5 = uStack_50;
          }
          uStack_50 = uVar5;
          pcVar3[uVar2] = '\0';
        }
        else {
                    /* try { // try from 00173550 to 0017355b has its CatchHandler @ 001735bc */
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_58,uVar2 - uVar5,'\0');
        }
        pcVar4 = local_48;
        uVar5 = uStack_50;
        uStack_50 = 0;
        local_48 = (char *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_58;
        in_x8[2] = (ulong)pcVar4;
        local_58 = 0;
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
        ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_58);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
    if ((local_58 & 1) != 0) {
      uVar5 = uStack_50;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pcVar3 = local_48;
      uVar5 = uVar2;
      if ((local_58 & 1) == 0) {
        local_58 = CONCAT71(local_58._1_7_,(char)((int)uVar2 << 1));
        pcVar3 = pcVar4;
        uVar5 = uStack_50;
      }
      uStack_50 = uVar5;
      pcVar3[uVar2] = '\0';
    }
    else {
                    /* try { // try from 001734ac to 001734b7 has its CatchHandler @ 001735e4 */
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_58,uVar2 - uVar5,'\0');
    }
    uVar5 = uVar2;
  } while( true );
}


// ===== 001735f8  std::__ndk1::to_string =====

/* std::__ndk1::to_string(long double) */

void __thiscall std::__ndk1::to_string(__ndk1 *this,longdouble param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong local_58;
  ulong uStack_50;
  char *local_48;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (char *)0x0;
                    /* try { // try from 00173624 to 00173637 has its CatchHandler @ 00173780 */
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_58,0x16,'\0');
  pcVar4 = (char *)((ulong)&local_58 | 1);
  uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
  if ((local_58 & 1) != 0) {
    uVar5 = uStack_50;
  }
  do {
    pcVar3 = pcVar4;
    if (((byte)local_58._0_1_ & 1) != 0) {
      pcVar3 = local_48;
    }
    uVar1 = snprintf(pcVar3,uVar5 + 1,"%Lf",param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
        if ((local_58 & 1) != 0) {
          uVar5 = uStack_50;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pcVar3 = local_48;
          uVar5 = uVar2;
          if ((local_58 & 1) == 0) {
            local_58 = CONCAT71(local_58._1_7_,(char)(uVar1 << 1));
            pcVar3 = pcVar4;
            uVar5 = uStack_50;
          }
          uStack_50 = uVar5;
          pcVar3[uVar2] = '\0';
        }
        else {
                    /* try { // try from 00173704 to 0017370f has its CatchHandler @ 0017376c */
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_58,uVar2 - uVar5,'\0');
        }
        pcVar4 = local_48;
        uVar5 = uStack_50;
        uStack_50 = 0;
        local_48 = (char *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_58;
        in_x8[2] = (ulong)pcVar4;
        local_58 = 0;
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
        ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_58);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_58._0_1_ >> 1);
    if ((local_58 & 1) != 0) {
      uVar5 = uStack_50;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pcVar3 = local_48;
      uVar5 = uVar2;
      if ((local_58 & 1) == 0) {
        local_58 = CONCAT71(local_58._1_7_,(char)((int)uVar2 << 1));
        pcVar3 = pcVar4;
        uVar5 = uStack_50;
      }
      uStack_50 = uVar5;
      pcVar3[uVar2] = '\0';
    }
    else {
                    /* try { // try from 00173660 to 0017366b has its CatchHandler @ 00173794 */
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_58,uVar2 - uVar5,'\0');
    }
    uVar5 = uVar2;
  } while( true );
}


// ===== 001737a8  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(float) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,float param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  ulong local_60;
  ulong uStack_58;
  wchar_t *local_50;
  
  local_50 = (wchar_t *)operator_new(0x60);
  uStack_58 = _UNK_00129588;
  local_60 = _DAT_00129580;
  local_50[0x14] = L'\0';
  local_50[2] = L'\0';
  local_50[3] = L'\0';
  local_50[0] = L'\0';
  local_50[1] = L'\0';
  local_50[6] = L'\0';
  local_50[7] = L'\0';
  local_50[4] = L'\0';
  local_50[5] = L'\0';
  local_50[10] = L'\0';
  local_50[0xb] = L'\0';
  local_50[8] = L'\0';
  local_50[9] = L'\0';
  local_50[0xe] = L'\0';
  local_50[0xf] = L'\0';
  local_50[0xc] = L'\0';
  local_50[0xd] = L'\0';
  local_50[0x12] = L'\0';
  local_50[0x13] = L'\0';
  local_50[0x10] = L'\0';
  local_50[0x11] = L'\0';
                    /* try { // try from 001737fc to 0017380f has its CatchHandler @ 00173960 */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,3,L'\0');
  pwVar4 = (wchar_t *)((ulong)&local_60 | 4);
  uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
  if ((local_60 & 1) != 0) {
    uVar5 = uStack_58;
  }
  do {
    pwVar3 = pwVar4;
    if (((byte)local_60._0_1_ & 1) != 0) {
      pwVar3 = local_50;
    }
    uVar1 = swprintf(pwVar3,uVar5 + 1,L"%f",(double)param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
        if ((local_60 & 1) != 0) {
          uVar5 = uStack_58;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pwVar3 = local_50;
          uVar5 = uVar2;
          if ((local_60 & 1) == 0) {
            local_60 = CONCAT71(local_60._1_7_,(char)(uVar1 << 1));
            pwVar3 = pwVar4;
            uVar5 = uStack_58;
          }
          uStack_58 = uVar5;
          pwVar3[uVar2] = L'\0';
        }
        else {
                    /* try { // try from 001738e0 to 001738eb has its CatchHandler @ 0017394c */
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  *)&local_60,uVar2 - uVar5,L'\0');
        }
        pwVar4 = local_50;
        uVar5 = uStack_58;
        uStack_58 = 0;
        local_50 = (wchar_t *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_60;
        in_x8[2] = (ulong)pwVar4;
        local_60 = 0;
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        ~basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)&local_60);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
    if ((local_60 & 1) != 0) {
      uVar5 = uStack_58;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pwVar3 = local_50;
      uVar5 = uVar2;
      if ((local_60 & 1) == 0) {
        local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar2 << 1));
        pwVar3 = pwVar4;
        uVar5 = uStack_58;
      }
      uStack_58 = uVar5;
      pwVar3[uVar2] = L'\0';
    }
    else {
                    /* try { // try from 0017383c to 00173867 has its CatchHandler @ 00173974 */
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,uVar2 - uVar5,L'\0');
    }
    uVar5 = uVar2;
  } while( true );
}


// ===== 00173988  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(double) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,double param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  ulong local_60;
  ulong uStack_58;
  wchar_t *local_50;
  
  local_50 = (wchar_t *)operator_new(0x60);
  uStack_58 = _UNK_00129588;
  local_60 = _DAT_00129580;
  local_50[0x14] = L'\0';
  local_50[2] = L'\0';
  local_50[3] = L'\0';
  local_50[0] = L'\0';
  local_50[1] = L'\0';
  local_50[6] = L'\0';
  local_50[7] = L'\0';
  local_50[4] = L'\0';
  local_50[5] = L'\0';
  local_50[10] = L'\0';
  local_50[0xb] = L'\0';
  local_50[8] = L'\0';
  local_50[9] = L'\0';
  local_50[0xe] = L'\0';
  local_50[0xf] = L'\0';
  local_50[0xc] = L'\0';
  local_50[0xd] = L'\0';
  local_50[0x12] = L'\0';
  local_50[0x13] = L'\0';
  local_50[0x10] = L'\0';
  local_50[0x11] = L'\0';
                    /* try { // try from 001739dc to 001739ef has its CatchHandler @ 00173b3c */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,3,L'\0');
  pwVar4 = (wchar_t *)((ulong)&local_60 | 4);
  uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
  if ((local_60 & 1) != 0) {
    uVar5 = uStack_58;
  }
  do {
    pwVar3 = pwVar4;
    if (((byte)local_60._0_1_ & 1) != 0) {
      pwVar3 = local_50;
    }
    uVar1 = swprintf(pwVar3,uVar5 + 1,L"%f",param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
        if ((local_60 & 1) != 0) {
          uVar5 = uStack_58;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pwVar3 = local_50;
          uVar5 = uVar2;
          if ((local_60 & 1) == 0) {
            local_60 = CONCAT71(local_60._1_7_,(char)(uVar1 << 1));
            pwVar3 = pwVar4;
            uVar5 = uStack_58;
          }
          uStack_58 = uVar5;
          pwVar3[uVar2] = L'\0';
        }
        else {
                    /* try { // try from 00173abc to 00173ac7 has its CatchHandler @ 00173b28 */
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  *)&local_60,uVar2 - uVar5,L'\0');
        }
        pwVar4 = local_50;
        uVar5 = uStack_58;
        uStack_58 = 0;
        local_50 = (wchar_t *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_60;
        in_x8[2] = (ulong)pwVar4;
        local_60 = 0;
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        ~basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)&local_60);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
    if ((local_60 & 1) != 0) {
      uVar5 = uStack_58;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pwVar3 = local_50;
      uVar5 = uVar2;
      if ((local_60 & 1) == 0) {
        local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar2 << 1));
        pwVar3 = pwVar4;
        uVar5 = uStack_58;
      }
      uStack_58 = uVar5;
      pwVar3[uVar2] = L'\0';
    }
    else {
                    /* try { // try from 00173a18 to 00173a43 has its CatchHandler @ 00173b50 */
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,uVar2 - uVar5,L'\0');
    }
    uVar5 = uVar2;
  } while( true );
}


// ===== 00173b64  std::__ndk1::to_wstring =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::to_wstring(long double) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,longdouble param_1)

{
  uint uVar1;
  ulong *in_x8;
  ulong uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulong uVar5;
  ulong local_60;
  ulong uStack_58;
  wchar_t *local_50;
  
  local_50 = (wchar_t *)operator_new(0x60);
  uStack_58 = _UNK_00129588;
  local_60 = _DAT_00129580;
  local_50[0x14] = L'\0';
  local_50[2] = L'\0';
  local_50[3] = L'\0';
  local_50[0] = L'\0';
  local_50[1] = L'\0';
  local_50[6] = L'\0';
  local_50[7] = L'\0';
  local_50[4] = L'\0';
  local_50[5] = L'\0';
  local_50[10] = L'\0';
  local_50[0xb] = L'\0';
  local_50[8] = L'\0';
  local_50[9] = L'\0';
  local_50[0xe] = L'\0';
  local_50[0xf] = L'\0';
  local_50[0xc] = L'\0';
  local_50[0xd] = L'\0';
  local_50[0x12] = L'\0';
  local_50[0x13] = L'\0';
  local_50[0x10] = L'\0';
  local_50[0x11] = L'\0';
                    /* try { // try from 00173bb4 to 00173bc7 has its CatchHandler @ 00173d10 */
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
            ((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,3,L'\0');
  pwVar4 = (wchar_t *)((ulong)&local_60 | 4);
  uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
  if ((local_60 & 1) != 0) {
    uVar5 = uStack_58;
  }
  do {
    pwVar3 = pwVar4;
    if (((byte)local_60._0_1_ & 1) != 0) {
      pwVar3 = local_50;
    }
    uVar1 = swprintf(pwVar3,uVar5 + 1,L"%Lf",param_1);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
        if ((local_60 & 1) != 0) {
          uVar5 = uStack_58;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pwVar3 = local_50;
          uVar5 = uVar2;
          if ((local_60 & 1) == 0) {
            local_60 = CONCAT71(local_60._1_7_,(char)(uVar1 << 1));
            pwVar3 = pwVar4;
            uVar5 = uStack_58;
          }
          uStack_58 = uVar5;
          pwVar3[uVar2] = L'\0';
        }
        else {
                    /* try { // try from 00173c94 to 00173c9f has its CatchHandler @ 00173cfc */
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  *)&local_60,uVar2 - uVar5,L'\0');
        }
        pwVar4 = local_50;
        uVar5 = uStack_58;
        uStack_58 = 0;
        local_50 = (wchar_t *)0x0;
        in_x8[1] = uVar5;
        *in_x8 = local_60;
        in_x8[2] = (ulong)pwVar4;
        local_60 = 0;
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        ~basic_string((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)&local_60);
        return;
      }
    }
    uVar5 = (ulong)((byte)local_60._0_1_ >> 1);
    if ((local_60 & 1) != 0) {
      uVar5 = uStack_58;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pwVar3 = local_50;
      uVar5 = uVar2;
      if ((local_60 & 1) == 0) {
        local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar2 << 1));
        pwVar3 = pwVar4;
        uVar5 = uStack_58;
      }
      uStack_58 = uVar5;
      pwVar3[uVar2] = L'\0';
    }
    else {
                    /* try { // try from 00173bf0 to 00173c1b has its CatchHandler @ 00173d24 */
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      append((basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              *)&local_60,uVar2 - uVar5,L'\0');
    }
    uVar5 = uVar2;
  } while( true );
}


// ===== 00173d38  FUN_00173d38 =====

void FUN_00173d38(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001a12b0 + 0x10;
  return;
}


// ===== 00173d70  FUN_00173d70 =====

void FUN_00173d70(byte *param_1,byte *param_2,long *param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  byte *pbVar10;
  void *pvVar11;
  void *pvVar12;
  char *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  pbVar10 = *(byte **)(param_2 + 0x10);
  local_60 = (char *)0x0;
  if ((*param_2 & 1) == 0) {
    pbVar10 = param_2 + 1;
  }
  piVar8 = (int *)__errno();
  iVar4 = *piVar8;
  *piVar8 = 0;
  strtol((char *)pbVar10,&local_60,param_4);
  iVar5 = *piVar8;
  *piVar8 = iVar4;
  if (iVar5 == 0x22) {
    bVar6 = *param_1;
    sVar3 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar3 = *(size_t *)(param_1 + 8);
    }
    uVar1 = sVar3 + 0xe;
    if (0xffffffffffffffef < uVar1) goto LAB_00173e78;
    if (uVar1 < 0x17) {
      local_50 = 0;
      pvVar11 = (void *)((ulong)&local_58 | 1);
      local_48 = (void *)0x0;
      local_58 = (ulong)(byte)((int)uVar1 << 1);
      pvVar12 = pvVar11;
      if (sVar3 == 0) goto LAB_00173ee8;
    }
    else {
      pvVar11 = operator_new((uVar1 | 0xf) + 1);
      local_58 = (uVar1 | 0xf) + 2;
      pvVar12 = (void *)((ulong)&local_58 | 1);
      local_50 = uVar1;
      local_48 = pvVar11;
    }
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar6 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    memmove(pvVar11,pbVar10,sVar3);
LAB_00173ee8:
    puVar2 = (undefined8 *)((long)pvVar11 + sVar3);
    uVar9 = CONCAT26(s___out_of_range_00128402._6_2_,s___out_of_range_00128402._0_6_);
    uVar7 = CONCAT62(s___out_of_range_00128402._8_6_,s___out_of_range_00128402._6_2_);
    *(undefined1 *)((long)puVar2 + 0xe) = 0;
    *puVar2 = uVar9;
    *(undefined8 *)((long)puVar2 + 6) = uVar7;
    if ((local_58 & 1) != 0) {
      pvVar12 = local_48;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00173f18 to 00173f1b has its CatchHandler @ 00173fa0 */
    FUN_001706e8(pvVar12);
  }
  if ((long)local_60 - (long)pbVar10 != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = (long)local_60 - (long)pbVar10;
    }
    return;
  }
  bVar6 = *param_1;
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = *(size_t *)(param_1 + 8);
  }
  uVar1 = sVar3 + 0xf;
  if (0xffffffffffffffef < uVar1) {
LAB_00173e78:
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(&local_58);
  }
  if (uVar1 < 0x17) {
    local_50 = 0;
    pvVar11 = (void *)((ulong)&local_58 | 1);
    local_48 = (void *)0x0;
    local_58 = (ulong)(byte)((int)uVar1 << 1);
    pvVar12 = pvVar11;
    if (sVar3 == 0) goto LAB_00173f58;
  }
  else {
    pvVar11 = operator_new((uVar1 | 0xf) + 1);
    local_58 = (uVar1 | 0xf) + 2;
    pvVar12 = (void *)((ulong)&local_58 | 1);
    local_50 = uVar1;
    local_48 = pvVar11;
  }
  pbVar10 = *(byte **)(param_1 + 0x10);
  if ((bVar6 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  memmove(pvVar11,pbVar10,sVar3);
LAB_00173f58:
  puVar2 = (undefined8 *)((long)pvVar11 + sVar3);
  uVar9 = CONCAT17(s___no_conversion_00125a25[7],s___no_conversion_00125a25._0_7_);
  uVar7 = CONCAT71(s___no_conversion_00125a25._8_7_,s___no_conversion_00125a25[7]);
  *(undefined1 *)((long)puVar2 + 0xf) = 0;
  *puVar2 = uVar9;
  *(undefined8 *)((long)puVar2 + 7) = uVar7;
  if ((local_58 & 1) != 0) {
    pvVar12 = local_48;
  }
                    /* try { // try from 00173f88 to 00173f8b has its CatchHandler @ 00173f8c */
  uVar9 = FUN_00173fb4(pvVar12);
                    /* catch() { ... } // from try @ 00173f88 with catch @ 00173f8c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_58);
                    /* WARNING: Subroutine does not return */
  FUN_001934ec(uVar9);
}


// ===== 00173fb4  FUN_00173fb4 =====

void FUN_00173fb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00173fd4 to 00173fdb has its CatchHandler @ 00173ff4 */
  FUN_00174008(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_001a12b8,PTR__domain_error_001a12c0);
}


// ===== 00174008  FUN_00174008 =====

void FUN_00174008(logic_error *param_1,char *param_2)

{
  std::logic_error::logic_error(param_1,param_2);
  *(undefined **)param_1 = PTR_vtable_001a12c8 + 0x10;
  return;
}


// ===== 00174040  FUN_00174040 =====

void FUN_00174040(byte *param_1,byte *param_2,long *param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  wchar_t *__nptr;
  size_t sVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  byte *pbVar10;
  void *pvVar11;
  void *pvVar12;
  wchar_t *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  local_60 = (wchar_t *)0x0;
  __nptr = (wchar_t *)(param_2 + 4);
  if ((*param_2 & 1) != 0) {
    __nptr = *(wchar_t **)(param_2 + 0x10);
  }
  piVar8 = (int *)__errno();
  iVar4 = *piVar8;
  *piVar8 = 0;
  wcstol(__nptr,&local_60,param_4);
  iVar5 = *piVar8;
  *piVar8 = iVar4;
  if (iVar5 == 0x22) {
    bVar6 = *param_1;
    sVar3 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar3 = *(size_t *)(param_1 + 8);
    }
    uVar1 = sVar3 + 0xe;
    if (0xffffffffffffffef < uVar1) goto LAB_00174150;
    if (uVar1 < 0x17) {
      local_50 = 0;
      pvVar11 = (void *)((ulong)&local_58 | 1);
      local_48 = (void *)0x0;
      local_58 = (ulong)(byte)((int)uVar1 << 1);
      pvVar12 = pvVar11;
      if (sVar3 == 0) goto LAB_001741c0;
    }
    else {
      pvVar11 = operator_new((uVar1 | 0xf) + 1);
      local_58 = (uVar1 | 0xf) + 2;
      pvVar12 = (void *)((ulong)&local_58 | 1);
      local_50 = uVar1;
      local_48 = pvVar11;
    }
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar6 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    memmove(pvVar11,pbVar10,sVar3);
LAB_001741c0:
    puVar2 = (undefined8 *)((long)pvVar11 + sVar3);
    uVar9 = CONCAT26(s___out_of_range_00128402._6_2_,s___out_of_range_00128402._0_6_);
    uVar7 = CONCAT62(s___out_of_range_00128402._8_6_,s___out_of_range_00128402._6_2_);
    *(undefined1 *)((long)puVar2 + 0xe) = 0;
    *puVar2 = uVar9;
    *(undefined8 *)((long)puVar2 + 6) = uVar7;
    if ((local_58 & 1) != 0) {
      pvVar12 = local_48;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001741f0 to 001741f3 has its CatchHandler @ 00174278 */
    FUN_001706e8(pvVar12);
  }
  if ((long)local_60 - (long)__nptr != 0) {
    if (param_3 != (long *)0x0) {
      *param_3 = (long)local_60 - (long)__nptr >> 2;
    }
    return;
  }
  bVar6 = *param_1;
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = *(size_t *)(param_1 + 8);
  }
  uVar1 = sVar3 + 0xf;
  if (0xffffffffffffffef < uVar1) {
LAB_00174150:
                    /* WARNING: Subroutine does not return */
    FUN_0016b728(&local_58);
  }
  if (uVar1 < 0x17) {
    local_50 = 0;
    pvVar11 = (void *)((ulong)&local_58 | 1);
    local_48 = (void *)0x0;
    local_58 = (ulong)(byte)((int)uVar1 << 1);
    pvVar12 = pvVar11;
    if (sVar3 == 0) goto LAB_00174230;
  }
  else {
    pvVar11 = operator_new((uVar1 | 0xf) + 1);
    local_58 = (uVar1 | 0xf) + 2;
    pvVar12 = (void *)((ulong)&local_58 | 1);
    local_50 = uVar1;
    local_48 = pvVar11;
  }
  pbVar10 = *(byte **)(param_1 + 0x10);
  if ((bVar6 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  memmove(pvVar11,pbVar10,sVar3);
LAB_00174230:
  puVar2 = (undefined8 *)((long)pvVar11 + sVar3);
  uVar9 = CONCAT17(s___no_conversion_00125a25[7],s___no_conversion_00125a25._0_7_);
  uVar7 = CONCAT71(s___no_conversion_00125a25._8_7_,s___no_conversion_00125a25[7]);
  *(undefined1 *)((long)puVar2 + 0xf) = 0;
  *puVar2 = uVar9;
  *(undefined8 *)((long)puVar2 + 7) = uVar7;
  if ((local_58 & 1) != 0) {
    pvVar12 = local_48;
  }
                    /* try { // try from 00174260 to 00174263 has its CatchHandler @ 00174264 */
  uVar9 = FUN_00173fb4(pvVar12);
                    /* catch() { ... } // from try @ 00174260 with catch @ 00174264 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_58);
                    /* WARNING: Subroutine does not return */
  FUN_001934ec(uVar9);
}


// ===== 0017428c  FUN_0017428c =====

byte * FUN_0017428c(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (999999 < param_2) {
    if (99999999 < param_2) {
      uVar1 = param_2 % 100000000;
      if (param_2 < 1000000000) {
        *param_1 = (byte)(param_2 / 100000000) | 0x30;
        uVar2 = (uVar1 % 1000000) % 10000;
        *(undefined2 *)(param_1 + 1) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + ((ulong)uVar1 / 1000000) * 2);
        *(undefined2 *)(param_1 + 3) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + ((ulong)(uVar1 % 1000000) / 10000) * 2);
        *(undefined2 *)(param_1 + 5) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulong)(uVar2 / 100) * 2);
        *(undefined2 *)(param_1 + 7) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (ulong)(uVar2 % 100) * 2);
        return param_1 + 9;
      }
      uVar2 = (uVar1 % 1000000) % 10000;
      *(undefined2 *)param_1 =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(param_2 / 100000000) * 2);
      *(undefined2 *)(param_1 + 2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)uVar1 / 1000000) * 2);
      *(undefined2 *)(param_1 + 4) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)(uVar1 % 1000000) / 10000) * 2);
      *(undefined2 *)(param_1 + 6) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar2 / 100) * 2);
      *(undefined2 *)(param_1 + 8) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)(uVar2 % 100) * 2);
      return param_1 + 10;
    }
    uVar1 = param_2 % 1000000;
    if (param_2 < 10000000) {
      *param_1 = (char)(param_2 / 1000000) + 0x30;
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + ((ulong)uVar1 / 10000) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)((uVar1 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 5) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)((uVar1 % 10000) % 100) * 2);
      return param_1 + 7;
    }
    *(undefined2 *)param_1 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)(param_2 / 1000000) * 2);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((ulong)uVar1 / 10000) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)((uVar1 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 6) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)((uVar1 % 10000) % 100) * 2);
    return param_1 + 8;
  }
  if (0x270 < param_2 >> 4) {
    if (param_2 >> 5 < 0xc35) {
      *param_1 = (byte)(param_2 / 10000) | 0x30;
      *(undefined2 *)(param_1 + 1) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)((param_2 % 10000) / 100) * 2);
      *(undefined2 *)(param_1 + 3) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulong)((param_2 % 10000) % 100) * 2);
      return param_1 + 5;
    }
    *(undefined2 *)param_1 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)(param_2 / 10000) * 2);
    *(undefined2 *)(param_1 + 2) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)((param_2 % 10000) / 100) * 2);
    *(undefined2 *)(param_1 + 4) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)((param_2 % 10000) % 100) * 2);
    return param_1 + 6;
  }
  if (param_2 < 100) {
    if (param_2 < 10) {
      *param_1 = (byte)param_2 | 0x30;
      return param_1 + 1;
    }
    *(undefined2 *)param_1 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (ulong)param_2 * 2);
    return param_1 + 2;
  }
  uVar1 = (param_2 >> 2 & 0x3fff) / 0x19;
  uVar3 = (ulong)(param_2 + uVar1 * -100);
  if (param_2 < 1000) {
    *param_1 = (byte)uVar1 | 0x30;
    *(undefined2 *)(param_1 + 1) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (uVar3 & 0xffff) * 2);
    return param_1 + 3;
  }
  *(undefined2 *)param_1 =
       *(undefined2 *)
        (
        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
        + (ulong)uVar1 * 2);
  *(undefined2 *)(param_1 + 2) =
       *(undefined2 *)
        (
        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
        + (uVar3 & 0xffff) * 2);
  return param_1 + 4;
}


// ===== 00174644  std::__ndk1::error_category::error_category =====

/* std::__ndk1::error_category::error_category() */

void __thiscall std::__ndk1::error_category::error_category(error_category *this)

{
  *(undefined **)this = PTR_vtable_001a1208 + 0x10;
  return;
}


// ===== 0017465c  std::__ndk1::error_category::~error_category =====

/* std::__ndk1::error_category::~error_category() */

void __thiscall std::__ndk1::error_category::~error_category(error_category *this)

{
  return;
}


// ===== 00174664  std::__ndk1::error_category::~error_category =====

/* std::__ndk1::error_category::~error_category() */

void __thiscall std::__ndk1::error_category::~error_category(error_category *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x17466c);
  (*pcVar1)();
}


// ===== 0017466c  std::__ndk1::error_category::default_error_condition =====

/* std::__ndk1::error_category::default_error_condition(int) const */

undefined1  [16] __thiscall
std::__ndk1::error_category::default_error_condition(error_category *this,int param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = 0;
  auVar1._0_4_ = param_1;
  auVar1._8_8_ = this;
  return auVar1;
}


// ===== 00174680  std::__ndk1::error_category::equivalent =====

/* std::__ndk1::error_category::equivalent(int, std::__ndk1::error_condition const&) const */

bool __thiscall
std::__ndk1::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = (**(code **)(*(long *)this + 0x18))(this,param_1);
  return *(long *)(param_2 + 8) == extraout_x1 && *(int *)param_2 == iVar1;
}


// ===== 001746c4  std::__ndk1::error_category::equivalent =====

/* std::__ndk1::error_category::equivalent(std::__ndk1::error_code const&, int) const */

bool __thiscall
std::__ndk1::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  return *(error_category **)(param_1 + 8) == this && *(int *)param_1 == param_2;
}


// ===== 001746e0  std::__ndk1::condition_variable::~condition_variable =====

/* std::__ndk1::condition_variable::~condition_variable() */

int __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  int iVar1;
  
                    /* try { // try from 001746ec to 001746ef has its CatchHandler @ 001746fc */
  iVar1 = pthread_cond_destroy((pthread_cond_t *)this);
  return iVar1;
}


// ===== 00174700  std::__ndk1::condition_variable::notify_one =====

/* std::__ndk1::condition_variable::notify_one() */

int __thiscall std::__ndk1::condition_variable::notify_one(condition_variable *this)

{
  int iVar1;
  
                    /* try { // try from 0017470c to 0017470f has its CatchHandler @ 0017471c */
  iVar1 = pthread_cond_signal((pthread_cond_t *)this);
  return iVar1;
}


// ===== 00174720  std::__ndk1::condition_variable::notify_all =====

/* std::__ndk1::condition_variable::notify_all() */

int __thiscall std::__ndk1::condition_variable::notify_all(condition_variable *this)

{
  int iVar1;
  
                    /* try { // try from 0017472c to 0017472f has its CatchHandler @ 0017473c */
  iVar1 = pthread_cond_broadcast((pthread_cond_t *)this);
  return iVar1;
}


// ===== 00174740  std::__ndk1::condition_variable::wait =====

/* std::__ndk1::condition_variable::wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */

void __thiscall std::__ndk1::condition_variable::wait(condition_variable *this,unique_lock *param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1[8] == (unique_lock)0x0) {
    pcVar2 = "condition_variable::wait: mutex not locked";
    iVar1 = 1;
  }
  else {
                    /* try { // try from 00174758 to 00174787 has its CatchHandler @ 00174788 */
    iVar1 = pthread_cond_wait((pthread_cond_t *)this,*(pthread_mutex_t **)param_1);
    if (iVar1 == 0) {
      return;
    }
    pcVar2 = "condition_variable wait failed";
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,pcVar2);
}


// ===== 0017478c  std::__ndk1::condition_variable::__do_timed_wait =====

/* std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&,
   std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock,
   std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */

void __thiscall
std::__ndk1::condition_variable::__do_timed_wait
          (condition_variable *this,undefined8 *param_1,long param_3)

{
  int iVar1;
  char *pcVar2;
  timespec local_20;
  
  if (*(char *)(param_1 + 1) == '\0') {
    pcVar2 = "condition_variable::timed wait: mutex not locked";
    iVar1 = 1;
  }
  else {
    if (0x59682f000000e940 < param_3) {
      param_3 = 0x59682f000000e941;
    }
    local_20.tv_sec = param_3 / 1000000000;
    local_20.tv_nsec = param_3 % 1000000000;
                    /* try { // try from 001747e8 to 00174827 has its CatchHandler @ 00174828 */
    iVar1 = pthread_cond_timedwait((pthread_cond_t *)this,(pthread_mutex_t *)*param_1,&local_20);
    if ((iVar1 == 0) || (iVar1 == 0x6e)) {
      return;
    }
    pcVar2 = "condition_variable timed_wait failed";
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,pcVar2);
}


// ===== 0017482c  std::__ndk1::notify_all_at_thread_exit =====

/* std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&,
   std::__ndk1::unique_lock<std::__ndk1::mutex>) */

void std::__ndk1::notify_all_at_thread_exit(condition_variable *param_1,undefined8 *param_2)

{
  pthread_key_t *ppVar1;
  void *pvVar2;
  __thread_struct *p_Var3;
  mutex *pmVar4;
  
  ppVar1 = (pthread_key_t *)__thread_local_data();
  pvVar2 = pthread_getspecific(*ppVar1);
  if (pvVar2 == (void *)0x0) {
    p_Var3 = (__thread_struct *)operator_new(8);
                    /* try { // try from 00174868 to 0017486b has its CatchHandler @ 001748a8 */
    __thread_struct::__thread_struct(p_Var3);
    pthread_setspecific(*ppVar1,p_Var3);
  }
  ppVar1 = (pthread_key_t *)__thread_local_data();
  p_Var3 = (__thread_struct *)pthread_getspecific(*ppVar1);
  pmVar4 = (mutex *)*param_2;
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  __thread_struct::notify_all_at_thread_exit(p_Var3,param_1,pmVar4);
  return;
}


// ===== 001748bc  std::__ndk1::thread::~thread =====

/* std::__ndk1::thread::~thread() */

void __thiscall std::__ndk1::thread::~thread(thread *this)

{
  if (*(long *)this == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}


// ===== 001748dc  std::__ndk1::thread::join =====

/* std::__ndk1::thread::join() */

void __thiscall std::__ndk1::thread::join(thread *this)

{
  int iVar1;
  
  if (*(pthread_t *)this == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_join(*(pthread_t *)this,(void **)0x0);
    if (iVar1 == 0) {
      *(undefined8 *)this = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"thread::join failed");
}


// ===== 00174928  std::__ndk1::thread::detach =====

/* std::__ndk1::thread::detach() */

void __thiscall std::__ndk1::thread::detach(thread *this)

{
  int iVar1;
  
  if (*(pthread_t *)this == 0) {
    iVar1 = 0x16;
  }
  else {
    iVar1 = pthread_detach(*(pthread_t *)this);
    if (iVar1 == 0) {
      *(undefined8 *)this = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __throw_system_error(iVar1,"thread::detach failed");
}


// ===== 00174970  std::__ndk1::thread::hardware_concurrency =====

/* std::__ndk1::thread::hardware_concurrency() */

uint std::__ndk1::thread::hardware_concurrency(void)

{
  long lVar1;
  
                    /* try { // try from 0017497c to 00174983 has its CatchHandler @ 00174998 */
  lVar1 = sysconf(0x61);
  return (uint)lVar1 & ((uint)(lVar1 >> 0x3f) ^ 0xffffffff);
}


// ===== 0017499c  std::__ndk1::this_thread::sleep_for =====

/* std::__ndk1::this_thread::sleep_for(std::__ndk1::chrono::duration<long long,
   std::__ndk1::ratio<1l, 1000000000l> > const&) */

void std::__ndk1::this_thread::sleep_for(duration *param_1)

{
  int iVar1;
  int *piVar2;
  timespec local_20;
  
  local_20.tv_nsec = *(long *)param_1;
  if (0 < local_20.tv_nsec) {
    local_20.tv_sec = (ulong)local_20.tv_nsec / 1000000000;
    local_20.tv_nsec = (ulong)local_20.tv_nsec % 1000000000;
    do {
      iVar1 = nanosleep(&local_20,&local_20);
      if (iVar1 != -1) {
        return;
      }
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
  }
  return;
}


// ===== 00174a1c  std::__ndk1::__thread_local_data =====

/* std::__ndk1::__thread_local_data() */

undefined * std::__ndk1::__thread_local_data(void)

{
  int iVar1;
  
  if (((DAT_001a6960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_001a6960), iVar1 != 0)) {
    FUN_00174ab0(&DAT_001a6950);
    DAT_001a6958 = &DAT_001a6950;
    __cxa_guard_release(&DAT_001a6960);
    return DAT_001a6958;
  }
  return DAT_001a6958;
}


// ===== 00174ab0  FUN_00174ab0 =====

void FUN_00174ab0(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_create(param_1,FUN_00174ef8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__throw_system_error(iVar1,"__thread_specific_ptr construction failed");
}


// ===== 00174ae4  FUN_00174ae4 =====

void FUN_00174ae4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)param_1[4];
  for (puVar5 = (undefined8 *)param_1[3]; puVar5 != puVar1; puVar5 = puVar5 + 2) {
    std::__ndk1::condition_variable::notify_all((condition_variable *)*puVar5);
    std::__ndk1::mutex::unlock((mutex *)puVar5[1]);
  }
  puVar1 = (undefined8 *)param_1[1];
  for (puVar5 = (undefined8 *)*param_1; puVar5 != puVar1; puVar5 = puVar5 + 1) {
                    /* try { // try from 00174b3c to 00174b3f has its CatchHandler @ 00174bac */
    std::__ndk1::__assoc_sub_state::__make_ready((__assoc_sub_state *)*puVar5);
    plVar4 = (long *)*puVar5;
    lVar2 = FUN_00193290(0xffffffffffffffff,plVar4 + 1);
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  pvVar3 = (void *)param_1[3];
  if (pvVar3 != (void *)0x0) {
    param_1[4] = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar3);
  return;
}


// ===== 00174bb0  std::__ndk1::__thread_struct::__thread_struct =====

/* std::__ndk1::__thread_struct::__thread_struct() */

void __thiscall std::__ndk1::__thread_struct::__thread_struct(__thread_struct *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  *(undefined8 **)this = puVar1;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  return;
}


// ===== 00174bec  std::__ndk1::__thread_struct::~__thread_struct =====

/* std::__ndk1::__thread_struct::~__thread_struct() */

void __thiscall std::__ndk1::__thread_struct::~__thread_struct(__thread_struct *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    FUN_00174ae4(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 00174c30  std::__ndk1::__thread_struct::notify_all_at_thread_exit =====

/* std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*,
   std::__ndk1::mutex*) */

void __thiscall
std::__ndk1::__thread_struct::notify_all_at_thread_exit
          (__thread_struct *this,condition_variable *param_1,mutex *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  
  lVar16 = *(long *)this;
  puVar8 = *(undefined8 **)(lVar16 + 0x20);
  if (puVar8 < *(undefined8 **)(lVar16 + 0x28)) {
    *puVar8 = param_1;
    puVar8[1] = param_2;
    puVar19 = puVar8 + 2;
    goto LAB_00174d24;
  }
  puVar6 = *(undefined8 **)(lVar16 + 0x18);
  lVar18 = (long)puVar8 - (long)puVar6 >> 4;
  uVar1 = lVar18 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar9 = (long)*(undefined8 **)(lVar16 + 0x28) - (long)puVar6;
    uVar14 = (long)uVar9 >> 3;
    if (uVar14 <= uVar1) {
      uVar14 = uVar1;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar14 = 0xfffffffffffffff;
    }
    if (uVar14 == 0) {
      puVar11 = (undefined8 *)(lVar18 * 0x10);
      pvVar4 = (void *)0x0;
      puVar19 = puVar11 + 2;
      *puVar11 = param_1;
      puVar11[1] = param_2;
      if (puVar8 != puVar6) goto LAB_00174cf4;
    }
    else {
      pvVar4 = operator_new(uVar14 << 4);
      puVar6 = *(undefined8 **)(lVar16 + 0x18);
      puVar8 = *(undefined8 **)(lVar16 + 0x20);
      puVar11 = (undefined8 *)((long)pvVar4 + lVar18 * 0x10);
      pvVar4 = (void *)((long)pvVar4 + uVar14 * 0x10);
      puVar19 = puVar11 + 2;
      *puVar11 = param_1;
      puVar11[1] = param_2;
      if (puVar8 != puVar6) {
LAB_00174cf4:
        do {
          puVar2 = puVar8 + -1;
          uVar22 = puVar8[-2];
          puVar8 = puVar8 + -2;
          puVar11[-1] = *puVar2;
          puVar11[-2] = uVar22;
          puVar11 = puVar11 + -2;
        } while (puVar8 != puVar6);
        puVar6 = *(undefined8 **)(lVar16 + 0x18);
      }
    }
    *(undefined8 **)(lVar16 + 0x18) = puVar11;
    *(undefined8 **)(lVar16 + 0x20) = puVar19;
    *(void **)(lVar16 + 0x28) = pvVar4;
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
    }
LAB_00174d24:
    *(undefined8 **)(lVar16 + 0x20) = puVar19;
    return;
  }
  auVar24 = FUN_00174ec8(lVar16 + 0x18);
  lVar16 = auVar24._8_8_;
  puVar17 = (ulong *)*auVar24._0_8_;
  plVar15 = (long *)puVar17[1];
  if (plVar15 < (long *)puVar17[2]) {
    plVar20 = plVar15 + 1;
    *plVar15 = lVar16;
    goto LAB_00174e50;
  }
  plVar7 = (long *)*puVar17;
  lVar21 = (long)plVar15 - (long)plVar7;
  lVar18 = lVar21 >> 3;
  uVar1 = lVar18 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00174ee0(puVar17);
                    /* WARNING: Subroutine does not return */
    FUN_0016b740("vector");
  }
  uVar9 = (long)puVar17[2] - (long)plVar7;
  uVar14 = (long)uVar9 >> 2;
  if (uVar14 <= uVar1) {
    uVar14 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar9) {
    uVar14 = 0x1fffffffffffffff;
  }
  if (uVar14 == 0) {
    pvVar5 = (void *)0x0;
    plVar12 = (long *)(lVar18 * 8);
    pvVar4 = (void *)0x0;
    lVar18 = (long)plVar15 - (long)plVar7;
    *plVar12 = lVar16;
  }
  else {
    pvVar5 = operator_new(uVar14 << 3);
    plVar7 = (long *)*puVar17;
    plVar15 = (long *)puVar17[1];
    plVar12 = (long *)((long)pvVar5 + lVar18 * 8);
    pvVar4 = (void *)((long)pvVar5 + uVar14 * 8);
    lVar18 = (long)plVar15 - (long)plVar7;
    *plVar12 = lVar16;
  }
  plVar20 = plVar12 + 1;
  if (lVar18 != 0) {
    if ((lVar18 - 8U < 0x38) || ((ulong)((long)plVar15 + (-lVar21 - (long)pvVar5)) < 0x20)) {
LAB_00174e24:
      do {
        plVar15 = plVar15 + -1;
        plVar13 = plVar12 + -1;
        *plVar13 = *plVar15;
        plVar12 = plVar13;
      } while (plVar15 != plVar7);
    }
    else {
      uVar1 = (lVar18 - 8U >> 3) + 1;
      uVar9 = uVar1 & 0x3ffffffffffffffc;
      plVar13 = plVar12 + -uVar9;
      plVar12 = plVar12 + -2;
      plVar10 = plVar15 + -2;
      uVar14 = uVar9;
      do {
        plVar3 = plVar10 + -1;
        lVar23 = plVar10[-2];
        lVar21 = plVar10[1];
        lVar18 = *plVar10;
        uVar14 = uVar14 - 4;
        plVar10 = plVar10 + -4;
        plVar12[-1] = *plVar3;
        plVar12[-2] = lVar23;
        plVar12[1] = lVar21;
        *plVar12 = lVar18;
        plVar12 = plVar12 + -4;
      } while (uVar14 != 0);
      plVar12 = plVar13;
      plVar15 = plVar15 + -uVar9;
      if (uVar1 != uVar9) goto LAB_00174e24;
    }
    plVar7 = (long *)*puVar17;
    plVar12 = plVar13;
  }
  *puVar17 = (ulong)plVar12;
  puVar17[1] = (ulong)plVar20;
  puVar17[2] = (ulong)pvVar4;
  if (plVar7 != (long *)0x0) {
    operator_delete(plVar7);
  }
LAB_00174e50:
  puVar17[1] = (ulong)plVar20;
  FUN_00193260(1,lVar16 + 8);
  return;
}


// ===== 00174d48  std::__ndk1::__thread_struct::__make_ready_at_thread_exit =====

/* std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */

void __thiscall
std::__ndk1::__thread_struct::__make_ready_at_thread_exit
          (__thread_struct *this,__assoc_sub_state *param_1)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar12 = *(ulong **)this;
  puVar11 = (undefined8 *)puVar12[1];
  if (puVar11 < (undefined8 *)puVar12[2]) {
    puVar14 = puVar11 + 1;
    *puVar11 = param_1;
    goto LAB_00174e50;
  }
  puVar5 = (undefined8 *)*puVar12;
  lVar15 = (long)puVar11 - (long)puVar5;
  lVar13 = lVar15 >> 3;
  uVar1 = lVar13 + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00174ee0(puVar12);
                    /* WARNING: Subroutine does not return */
    FUN_0016b740("vector");
  }
  uVar6 = (long)puVar12[2] - (long)puVar5;
  uVar10 = (long)uVar6 >> 2;
  if (uVar10 <= uVar1) {
    uVar10 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar6) {
    uVar10 = 0x1fffffffffffffff;
  }
  if (uVar10 == 0) {
    pvVar4 = (void *)0x0;
    puVar8 = (undefined8 *)(lVar13 * 8);
    pvVar2 = (void *)0x0;
    lVar13 = (long)puVar11 - (long)puVar5;
    *puVar8 = param_1;
  }
  else {
    pvVar4 = operator_new(uVar10 << 3);
    puVar5 = (undefined8 *)*puVar12;
    puVar11 = (undefined8 *)puVar12[1];
    puVar8 = (undefined8 *)((long)pvVar4 + lVar13 * 8);
    pvVar2 = (void *)((long)pvVar4 + uVar10 * 8);
    lVar13 = (long)puVar11 - (long)puVar5;
    *puVar8 = param_1;
  }
  puVar14 = puVar8 + 1;
  if (lVar13 != 0) {
    if ((lVar13 - 8U < 0x38) || ((ulong)((long)puVar11 + (-lVar15 - (long)pvVar4)) < 0x20)) {
LAB_00174e24:
      do {
        puVar11 = puVar11 + -1;
        puVar9 = puVar8 + -1;
        *puVar9 = *puVar11;
        puVar8 = puVar9;
      } while (puVar11 != puVar5);
    }
    else {
      uVar1 = (lVar13 - 8U >> 3) + 1;
      uVar6 = uVar1 & 0x3ffffffffffffffc;
      puVar9 = puVar8 + -uVar6;
      puVar8 = puVar8 + -2;
      puVar7 = puVar11 + -2;
      uVar10 = uVar6;
      do {
        puVar3 = puVar7 + -1;
        uVar18 = puVar7[-2];
        uVar17 = puVar7[1];
        uVar16 = *puVar7;
        uVar10 = uVar10 - 4;
        puVar7 = puVar7 + -4;
        puVar8[-1] = *puVar3;
        puVar8[-2] = uVar18;
        puVar8[1] = uVar17;
        *puVar8 = uVar16;
        puVar8 = puVar8 + -4;
      } while (uVar10 != 0);
      puVar8 = puVar9;
      puVar11 = puVar11 + -uVar6;
      if (uVar1 != uVar6) goto LAB_00174e24;
    }
    puVar5 = (undefined8 *)*puVar12;
    puVar8 = puVar9;
  }
  *puVar12 = (ulong)puVar8;
  puVar12[1] = (ulong)puVar14;
  puVar12[2] = (ulong)pvVar2;
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
LAB_00174e50:
  puVar12[1] = (ulong)puVar14;
  FUN_00193260(1,param_1 + 8);
  return;
}


// ===== 00174ec8  FUN_00174ec8 =====

void FUN_00174ec8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0016b740("vector");
}


// ===== 00174ee0  FUN_00174ee0 =====

void FUN_00174ee0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0016b740("vector");
}


// ===== 00174ef8  FUN_00174ef8 =====

void FUN_00174ef8(__thread_struct *param_1)

{
  if (param_1 != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(param_1);
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00174f30  FUN_00174f30 =====

char * FUN_00174f30(void)

{
  return "future";
}


// ===== 00174f40  FUN_00174f40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00174f40(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_00174fd4;
    if (param_3 == 1) {
      pcVar8 = (char *)operator_new(0x50);
      param_1[2] = pcVar8;
      uVar1 = _DAT_001298b0;
      uVar5 = s_The_future_has_already_been_retr_00124fcf._64_8_;
      param_1[1] = _UNK_001298b8;
      *param_1 = uVar1;
      uVar4 = s_The_future_has_already_been_retr_00124fcf._56_8_;
      uVar3 = s_The_future_has_already_been_retr_00124fcf._48_8_;
      uVar2 = s_The_future_has_already_been_retr_00124fcf._40_8_;
      uVar1 = s_The_future_has_already_been_retr_00124fcf._32_8_;
      *(undefined8 *)(pcVar8 + 0x40) = uVar5;
      *(undefined8 *)(pcVar8 + 0x28) = uVar2;
      *(undefined8 *)(pcVar8 + 0x20) = uVar1;
      *(undefined8 *)(pcVar8 + 0x38) = uVar4;
      *(undefined8 *)(pcVar8 + 0x30) = uVar3;
      uVar3 = s_The_future_has_already_been_retr_00124fcf._24_8_;
      uVar2 = s_The_future_has_already_been_retr_00124fcf._16_8_;
      uVar1 = s_The_future_has_already_been_retr_00124fcf._0_8_;
      *(undefined8 *)(pcVar8 + 8) = s_The_future_has_already_been_retr_00124fcf._8_8_;
      *(undefined8 *)pcVar8 = uVar1;
      *(undefined8 *)(pcVar8 + 0x18) = uVar3;
      *(undefined8 *)(pcVar8 + 0x10) = uVar2;
      pcVar8[0x48] = '\0';
      return;
    }
  }
  else {
    if (param_3 == 2) {
      pcVar8 = (char *)operator_new(0x30);
      uVar6 = _UNK_00129728;
      uVar5 = _DAT_00129720;
      uVar4 = s_The_state_of_the_promise_has_alr_00127d6f._16_8_;
      uVar3 = s_The_state_of_the_promise_has_alr_00127d6f._8_8_;
      uVar2 = s_The_state_of_the_promise_has_alr_00127d6f._0_8_;
      uVar1 = CONCAT26(s_The_state_of_the_promise_has_alr_00127d6f._30_2_,
                       s_The_state_of_the_promise_has_alr_00127d6f._24_6_);
      param_1[2] = pcVar8;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      *(undefined8 *)(pcVar8 + 8) = uVar3;
      *(undefined8 *)pcVar8 = uVar2;
      *(undefined8 *)(pcVar8 + 0x18) = uVar1;
      *(undefined8 *)(pcVar8 + 0x10) = uVar4;
      uVar1 = CONCAT62(s_The_state_of_the_promise_has_alr_00127d6f._32_6_,
                       s_The_state_of_the_promise_has_alr_00127d6f._30_2_);
      *(undefined8 *)(pcVar8 + 0x26) = s_The_state_of_the_promise_has_alr_00127d6f._38_8_;
      *(undefined8 *)(pcVar8 + 0x1e) = uVar1;
      pcVar8[0x2e] = '\0';
      return;
    }
    if (param_3 == 3) {
      pcVar8 = (char *)operator_new(0x50);
      param_1[2] = pcVar8;
      uVar6 = _UNK_00129538;
      uVar5 = _DAT_00129530;
      pcVar8[0x40] = '.';
      uVar4 = s_Operation_not_permitted_on_an_ob_00125018._24_8_;
      uVar3 = s_Operation_not_permitted_on_an_ob_00125018._16_8_;
      uVar2 = s_Operation_not_permitted_on_an_ob_00125018._8_8_;
      uVar1 = s_Operation_not_permitted_on_an_ob_00125018._0_8_;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      *(undefined8 *)(pcVar8 + 8) = uVar2;
      *(undefined8 *)pcVar8 = uVar1;
      *(undefined8 *)(pcVar8 + 0x18) = uVar4;
      *(undefined8 *)(pcVar8 + 0x10) = uVar3;
      uVar3 = s_Operation_not_permitted_on_an_ob_00125018._56_8_;
      uVar2 = s_Operation_not_permitted_on_an_ob_00125018._48_8_;
      uVar1 = s_Operation_not_permitted_on_an_ob_00125018._32_8_;
      *(undefined8 *)(pcVar8 + 0x28) = s_Operation_not_permitted_on_an_ob_00125018._40_8_;
      *(undefined8 *)(pcVar8 + 0x20) = uVar1;
      *(undefined8 *)(pcVar8 + 0x38) = uVar3;
      *(undefined8 *)(pcVar8 + 0x30) = uVar2;
      pcVar8[0x41] = '\0';
      return;
    }
    if (param_3 == 4) {
LAB_00174fd4:
      pcVar8 = (char *)operator_new(0x60);
      uVar7 = _UNK_00129818;
      uVar6 = _DAT_00129810;
      uVar5 = s_The_associated_promise_has_been_d_00125fa9._80_8_;
      uVar4 = s_The_associated_promise_has_been_d_00125fa9._56_8_;
      uVar3 = s_The_associated_promise_has_been_d_00125fa9._48_8_;
      uVar2 = s_The_associated_promise_has_been_d_00125fa9._40_8_;
      uVar1 = s_The_associated_promise_has_been_d_00125fa9._32_8_;
      param_1[2] = pcVar8;
      param_1[1] = uVar7;
      *param_1 = uVar6;
      *(undefined8 *)(pcVar8 + 0x28) = uVar2;
      *(undefined8 *)(pcVar8 + 0x20) = uVar1;
      *(undefined8 *)(pcVar8 + 0x38) = uVar4;
      *(undefined8 *)(pcVar8 + 0x30) = uVar3;
      uVar2 = s_The_associated_promise_has_been_d_00125fa9._72_8_;
      uVar1 = s_The_associated_promise_has_been_d_00125fa9._64_8_;
      *(undefined8 *)(pcVar8 + 0x50) = uVar5;
      *(undefined8 *)(pcVar8 + 0x48) = uVar2;
      *(undefined8 *)(pcVar8 + 0x40) = uVar1;
      uVar3 = s_The_associated_promise_has_been_d_00125fa9._24_8_;
      uVar2 = s_The_associated_promise_has_been_d_00125fa9._16_8_;
      uVar1 = s_The_associated_promise_has_been_d_00125fa9._0_8_;
      *(undefined8 *)(pcVar8 + 8) = s_The_associated_promise_has_been_d_00125fa9._8_8_;
      *(undefined8 *)pcVar8 = uVar1;
      *(undefined8 *)(pcVar8 + 0x18) = uVar3;
      *(undefined8 *)(pcVar8 + 0x10) = uVar2;
      pcVar8[0x58] = '\0';
      return;
    }
  }
  pcVar8 = (char *)operator_new(0x20);
  uVar6 = _UNK_001296b8;
  uVar5 = _DAT_001296b0;
  uVar4 = s_unspecified_future_errc_value_00126cfa._22_8_;
  uVar3 = s_unspecified_future_errc_value_00126cfa._0_8_;
  uVar1 = CONCAT26(s_unspecified_future_errc_value_00126cfa._14_2_,
                   s_unspecified_future_errc_value_00126cfa._8_6_);
  uVar2 = CONCAT62(s_unspecified_future_errc_value_00126cfa._16_6_,
                   s_unspecified_future_errc_value_00126cfa._14_2_);
  param_1[2] = pcVar8;
  *(undefined8 *)(pcVar8 + 8) = uVar1;
  *(undefined8 *)pcVar8 = uVar3;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  *(undefined8 *)(pcVar8 + 0x16) = uVar4;
  *(undefined8 *)(pcVar8 + 0xe) = uVar2;
  pcVar8[0x1e] = '\0';
  return;
}


// ===== 0017510c  std::__ndk1::future_category =====

/* std::__ndk1::future_category() */

undefined ** std::__ndk1::future_category(void)

{
  int iVar1;
  
  if (((DAT_001a6968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_001a6968), iVar1 != 0)) {
    __cxa_guard_release(&DAT_001a6968);
    return &PTR_PTR__error_category_001a6340;
  }
  return &PTR_PTR__error_category_001a6340;
}


// ===== 0017516c  std::__ndk1::future_error::future_error =====

/* std::__ndk1::future_error::future_error(std::__ndk1::error_code) */

void __thiscall
std::__ndk1::future_error::future_error(future_error *this,undefined8 param_2,undefined8 param_3)

{
  basic_string local_48 [16];
  void *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_3;
  error_code::message((error_code *)&local_30);
                    /* try { // try from 00175194 to 0017519f has its CatchHandler @ 001751dc */
  logic_error::logic_error((logic_error *)this,local_48);
  if (((byte)local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  *(undefined **)this = PTR_vtable_001a1268 + 0x10;
  *(undefined8 *)(this + 0x18) = uStack_28;
  *(undefined8 *)(this + 0x10) = local_30;
  return;
}


// ===== 001751f8  std::__ndk1::future_error::~future_error =====

/* std::__ndk1::future_error::~future_error() */

void __thiscall std::__ndk1::future_error::~future_error(future_error *this)

{
  domain_error::~domain_error((domain_error *)this);
  return;
}


// ===== 00175200  std::__ndk1::future_error::~future_error =====

/* std::__ndk1::future_error::~future_error() */

void __thiscall std::__ndk1::future_error::~future_error(future_error *this)

{
  ~future_error(this);
  operator_delete(this);
  return;
}


// ===== 0017522c  std::__ndk1::__assoc_sub_state::__on_zero_shared =====

/* std::__ndk1::__assoc_sub_state::__on_zero_shared() */

void __thiscall std::__ndk1::__assoc_sub_state::__on_zero_shared(__assoc_sub_state *this)

{
                    /* WARNING: Could not recover jumptable at 0x00175238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))();
  return;
}


// ===== 0017523c  std::__ndk1::__assoc_sub_state::set_value =====

/* std::__ndk1::__assoc_sub_state::set_value() */

void __thiscall std::__ndk1::__assoc_sub_state::set_value(__assoc_sub_state *this)

{
  long lVar1;
  undefined8 local_28;
  
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    lVar1 = *(long *)(this + 0x10);
    local_28 = 0;
    exception_ptr::~exception_ptr((exception_ptr *)&local_28);
    if (lVar1 == 0) {
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 5;
      condition_variable::notify_all((condition_variable *)(this + 0x40));
      mutex::unlock((mutex *)(this + 0x18));
      return;
    }
  }
                    /* try { // try from 001752ac to 001752b3 has its CatchHandler @ 001752b4 */
                    /* WARNING: Subroutine does not return */
  FUN_001752c8(2);
}


// ===== 001752c8  FUN_001752c8 =====

void FUN_001752c8(undefined4 param_1)

{
  int iVar1;
  future_error *pfVar2;
  
  pfVar2 = (future_error *)__cxa_allocate_exception(0x20);
  if (((DAT_001a6968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_001a6968), iVar1 != 0)) {
    __cxa_guard_release(&DAT_001a6968);
  }
                    /* try { // try from 00175304 to 0017530b has its CatchHandler @ 00175344 */
  std::__ndk1::future_error::future_error(pfVar2,param_1,&PTR_PTR__error_category_001a6340);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pfVar2,PTR_PTR_001a1278,PTR__future_error_001a1270);
}


// ===== 00175358  std::__ndk1::__assoc_sub_state::set_value_at_thread_exit =====

/* std::__ndk1::__assoc_sub_state::set_value_at_thread_exit() */

void __thiscall std::__ndk1::__assoc_sub_state::set_value_at_thread_exit(__assoc_sub_state *this)

{
  pthread_key_t *ppVar1;
  __thread_struct *this_00;
  long lVar2;
  undefined8 local_28;
  
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    lVar2 = *(long *)(this + 0x10);
    local_28 = 0;
    exception_ptr::~exception_ptr((exception_ptr *)&local_28);
    if (lVar2 == 0) {
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
                    /* try { // try from 001753a0 to 001753d7 has its CatchHandler @ 001753d8 */
      ppVar1 = (pthread_key_t *)__thread_local_data();
      this_00 = (__thread_struct *)pthread_getspecific(*ppVar1);
      __thread_struct::__make_ready_at_thread_exit(this_00,this);
      mutex::unlock((mutex *)(this + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001752c8(2);
}


// ===== 001753ec  std::__ndk1::__assoc_sub_state::set_exception =====

/* std::__ndk1::__assoc_sub_state::set_exception(std::exception_ptr) */

void __thiscall
std::__ndk1::__assoc_sub_state::set_exception(__assoc_sub_state *this,exception_ptr *param_2)

{
  long lVar1;
  undefined8 local_38;
  
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_38 = 0;
    lVar1 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_38);
    if (lVar1 == 0) {
      exception_ptr::operator=((exception_ptr *)(this + 0x10),param_2);
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 4;
      condition_variable::notify_all((condition_variable *)(this + 0x40));
      mutex::unlock((mutex *)(this + 0x18));
      return;
    }
  }
                    /* try { // try from 00175474 to 0017547b has its CatchHandler @ 0017547c */
                    /* WARNING: Subroutine does not return */
  FUN_001752c8(2);
}


// ===== 00175490  std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit =====

/* std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std::exception_ptr) */

void __thiscall
std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit
          (__assoc_sub_state *this,exception_ptr *param_2)

{
  pthread_key_t *ppVar1;
  __thread_struct *this_00;
  long lVar2;
  undefined8 local_38;
  
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_38 = 0;
    lVar2 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_38);
    if (lVar2 == 0) {
      exception_ptr::operator=((exception_ptr *)(this + 0x10),param_2);
                    /* try { // try from 001754e4 to 0017551f has its CatchHandler @ 00175520 */
      ppVar1 = (pthread_key_t *)__thread_local_data();
      this_00 = (__thread_struct *)pthread_getspecific(*ppVar1);
      __thread_struct::__make_ready_at_thread_exit(this_00,this);
      mutex::unlock((mutex *)(this + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_001752c8(2);
}


// ===== 00175534  std::__ndk1::__assoc_sub_state::__make_ready =====

/* std::__ndk1::__assoc_sub_state::__make_ready() */

void __thiscall std::__ndk1::__assoc_sub_state::__make_ready(__assoc_sub_state *this)

{
  mutex::lock((mutex *)(this + 0x18));
  *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 4;
  condition_variable::notify_all((condition_variable *)(this + 0x40));
  mutex::unlock((mutex *)(this + 0x18));
  return;
}


// ===== 00175578  std::__ndk1::__assoc_sub_state::copy =====

/* std::__ndk1::__assoc_sub_state::copy() */

void __thiscall std::__ndk1::__assoc_sub_state::copy(__assoc_sub_state *this)

{
  mutex *this_00;
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  exception_ptr aeStack_40 [8];
  undefined8 local_38;
  mutex *local_30;
  char local_28;
  
  this_00 = (mutex *)(this + 0x18);
  local_28 = '\x01';
  local_30 = this_00;
  mutex::lock(this_00);
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      do {
        condition_variable::wait((condition_variable *)(this + 0x40),(unique_lock *)&local_30);
      } while (((byte)this[0x70] >> 2 & 1) == 0);
    }
    else {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff3;
      mutex::unlock(this_00);
      local_28 = '\0';
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  lVar3 = *(long *)(this + 0x10);
  local_38 = 0;
  exception_ptr::~exception_ptr((exception_ptr *)&local_38);
  if (lVar3 != 0) {
    exception_ptr::exception_ptr(aeStack_40,(exception_ptr *)(this + 0x10));
                    /* try { // try from 00175634 to 0017563b has its CatchHandler @ 0017563c */
    uVar2 = rethrow_exception(aeStack_40);
                    /* catch() { ... } // from try @ 00175634 with catch @ 0017563c */
    exception_ptr::~exception_ptr(aeStack_40);
    if (local_28 != '\0') {
      mutex::unlock(local_30);
    }
                    /* WARNING: Subroutine does not return */
    FUN_001934ec(uVar2);
  }
  if (local_28 != '\0') {
    mutex::unlock(local_30);
  }
  return;
}


// ===== 00175660  std::__ndk1::__assoc_sub_state::__sub_wait =====

/* std::__ndk1::__assoc_sub_state::__sub_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */

void __thiscall
std::__ndk1::__assoc_sub_state::__sub_wait(__assoc_sub_state *this,unique_lock *param_1)

{
  uint uVar1;
  unique_lock uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      uVar2 = param_1[8];
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff3;
      if (uVar2 != (unique_lock)0x0) {
        mutex::unlock(*(mutex **)param_1);
        lVar3 = *(long *)this;
        param_1[8] = (unique_lock)0x0;
                    /* WARNING: Could not recover jumptable at 0x001756dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))(this);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __throw_system_error(1,"unique_lock::unlock: not locked");
    }
    do {
      condition_variable::wait((condition_variable *)(this + 0x40),param_1);
    } while (((byte)this[0x70] >> 2 & 1) == 0);
  }
  return;
}


// ===== 001756f0  std::__ndk1::__assoc_sub_state::wait =====

/* std::__ndk1::__assoc_sub_state::wait() */

void __thiscall std::__ndk1::__assoc_sub_state::wait(__assoc_sub_state *this)

{
  mutex *this_00;
  uint uVar1;
  mutex *local_30;
  char local_28;
  
  this_00 = (mutex *)(this + 0x18);
  local_28 = '\x01';
  local_30 = this_00;
  mutex::lock(this_00);
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff3;
      mutex::unlock(this_00);
                    /* WARNING: Could not recover jumptable at 0x00175790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x18))(this);
      return;
    }
    do {
      condition_variable::wait((condition_variable *)(this + 0x40),(unique_lock *)&local_30);
    } while (((byte)this[0x70] >> 2 & 1) == 0);
    if (local_28 == '\0') {
      return;
    }
  }
  mutex::unlock(local_30);
  return;
}


// ===== 00175794  std::__ndk1::__assoc_sub_state::__execute =====

/* std::__ndk1::__assoc_sub_state::__execute() */

void std::__ndk1::__assoc_sub_state::__execute(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_001752c8(3);
}


// ===== 001757a8  std::__ndk1::future<void>::future =====

/* std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */

void __thiscall std::__ndk1::future<void>::future(future<void> *this,__assoc_sub_state *param_1)

{
  uint uVar1;
  
  *(__assoc_sub_state **)this = param_1;
  mutex::lock((mutex *)(param_1 + 0x18));
  uVar1 = *(uint *)(param_1 + 0x70);
  if ((uVar1 >> 1 & 1) == 0) {
    FUN_00193260(1,param_1 + 8);
    *(uint *)(param_1 + 0x70) = uVar1 | 2;
    mutex::unlock((mutex *)(param_1 + 0x18));
    return;
  }
                    /* try { // try from 001757f8 to 001757ff has its CatchHandler @ 00175800 */
                    /* WARNING: Subroutine does not return */
  FUN_001752c8(1);
}


// ===== 00175814  std::__ndk1::future<void>::~future =====

/* std::__ndk1::future<void>::~future() */

void __thiscall std::__ndk1::future<void>::~future(future<void> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00193290(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
                    /* WARNING: Could not recover jumptable at 0x00175864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
  return;
}


// ===== 00175868  std::__ndk1::future<void>::get =====

/* std::__ndk1::future<void>::get() */

void __thiscall std::__ndk1::future<void>::get(future<void> *this)

{
  long lVar1;
  __assoc_sub_state *this_00;
  
  this_00 = *(__assoc_sub_state **)this;
  *(undefined8 *)this = 0;
                    /* try { // try from 00175880 to 00175887 has its CatchHandler @ 001758c4 */
  __assoc_sub_state::copy(this_00);
  lVar1 = FUN_00193290(0xffffffffffffffff,this_00 + 8);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001758c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this_00 + 0x10))(this_00);
  return;
}


// ===== 001758f4  std::__ndk1::promise<void>::promise =====

/* std::__ndk1::promise<void>::promise() */

void __thiscall std::__ndk1::promise<void>::promise(promise<void> *this)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)operator_new(0x78);
  puVar1 = PTR_vtable_001a1280;
  *(undefined4 *)(plVar2 + 0xe) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  plVar2[3] = 0;
  plVar2[2] = 0;
  plVar2[5] = 0;
  plVar2[4] = 0;
  plVar2[7] = 0;
  plVar2[6] = 0;
  plVar2[9] = 0;
  plVar2[8] = 0;
  plVar2[0xb] = 0;
  plVar2[10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xc] = 0;
  *(long **)this = plVar2;
  return;
}


// ===== 00175948  std::__ndk1::promise<void>::~promise =====

/* std::__ndk1::promise<void>::~promise() */

void __thiscall std::__ndk1::promise<void>::~promise(promise<void> *this)

{
  logic_error *this_00;
  long *plVar1;
  long lVar2;
  logic_error alStack_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_18;
  
  plVar1 = *(long **)this;
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(plVar1 + 0xe) & 1) == 0) {
      lVar2 = plVar1[2];
      local_18 = 0;
      exception_ptr::~exception_ptr((exception_ptr *)&local_18);
      plVar1 = *(long **)this;
      if ((lVar2 == 0) && (0 < plVar1[1])) {
                    /* try { // try from 001759c0 to 001759cb has its CatchHandler @ 00175a7c */
        FUN_00175a80(alStack_58,4);
        this_00 = (logic_error *)__cxa_allocate_exception(0x20);
        logic_error::logic_error(this_00,alStack_58);
        *(undefined **)this_00 = PTR_vtable_001a1268 + 0x10;
        *(undefined8 *)(this_00 + 0x18) = uStack_40;
        *(undefined8 *)(this_00 + 0x10) = local_48;
                    /* try { // try from 001759f8 to 00175a0f has its CatchHandler @ 00175a10 */
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this_00,PTR_PTR_001a1278,PTR__future_error_001a1270);
      }
    }
    lVar2 = FUN_00193290(0xffffffffffffffff,plVar1 + 1);
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return;
    }
  }
  return;
}


// ===== 00175a80  FUN_00175a80 =====

void FUN_00175a80(logic_error *param_1,uint param_2)

{
  int iVar1;
  basic_string local_48 [16];
  void *local_38;
  ulong local_30;
  undefined **ppuStack_28;
  
  if ((DAT_001a6968 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_001a6968);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_001a6968);
    }
  }
  local_30 = (ulong)param_2;
  ppuStack_28 = &PTR_PTR__error_category_001a6340;
  std::__ndk1::error_code::message((error_code *)&local_30);
                    /* try { // try from 00175ac4 to 00175acf has its CatchHandler @ 00175b38 */
  std::logic_error::logic_error(param_1,local_48);
  if (((byte)local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  *(undefined **)param_1 = PTR_vtable_001a1268 + 0x10;
  *(undefined ***)(param_1 + 0x18) = ppuStack_28;
  *(ulong *)(param_1 + 0x10) = local_30;
  return;
}


